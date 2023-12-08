import {
  CXXFile,
  CXXTYPE,
  CXXTerraNode,
  Clazz,
  Constructor,
  EnumConstant,
  Enumz,
  IncludeDirective,
  MemberFunction,
  MemberVariable,
  SimpleType,
  SimpleTypeKind,
  Struct,
  TypeAlias,
} from "@agoraio-extensions/cxx-parser";
import {
  TerraContext,
  ParseResult,
  RenderResult,
  TerraNode,
} from "@agoraio-extensions/terra-core";
import { checkObjInclude } from "@agoraio-extensions/terra_shared_configs";

import path from "path";

// function checkPropertyEq(obj: any, key: string, value: any): boolean {
//   if (!obj.hasOwnProperty(key)) {
//     return false;
//   }

//   let eq = obj[key] == value;

//   if (!eq && typeof value === "string") {
//     eq = new RegExp(value).test(obj[key]);
//   }

//   return eq;
// }

// function checkObjInclude(obj1: any, obj2: any): boolean {
//   let isIncluded = true;

//   if (!obj2) {
//     return isIncluded;
//   }

//   for (let k2 of Object.keys(obj2)) {
//     let v1 = obj1[k2];
//     let v2 = obj2[k2];
//     if (v1) {
//       if (typeof v1 === "object" && typeof v2 === "object") {
//         isIncluded = isIncluded && checkObjInclude(v1, v2);
//       } else {
//         isIncluded = isIncluded && checkPropertyEq(obj1, k2, obj2[k2]);
//       }
//     }
//   }

//   return isIncluded;
// }

const nodesToRemove = [
  {
    __TYPE: CXXTYPE.Clazz,
    name: "AutoPtr",
  },
  {
    __TYPE: CXXTYPE.Clazz,
    name: "CopyableAutoPtr",
  },

  {
    __TYPE: CXXTYPE.TypeAlias,
    parent_name: "AutoPtr",
  },
  {
    __TYPE: CXXTYPE.TypeAlias,
    parent_name: "CopyableAutoPtr",
  },
  {
    __TYPE: CXXTYPE.TypeAlias,
    parent_name: "AOutputIterator",
  },

  {
    __TYPE: CXXTYPE.Clazz,
    name: "IIterator",
  },

  {
    __TYPE: CXXTYPE.Clazz,
    name: "IContainer",
  },

  {
    __TYPE: CXXTYPE.Clazz,
    name: "AOutputIterator",
  },

  {
    __TYPE: CXXTYPE.Clazz,
    name: "AList",
  },
  {
    __TYPE: CXXTYPE.TypeAlias,
    parent_name: "AList",
  },
  {
    __TYPE: CXXTYPE.Clazz,
    name: "IString",
  },
  {
    __TYPE: CXXTYPE.TypeAlias,
    name: "AString",
  },
  {
    __TYPE: CXXTYPE.Clazz,
    name: "IRhythmPlayer",
  },

  {
    __TYPE: CXXTYPE.MemberFunction,
    name: "getRhythmPlayerTrack",
  },

];

const stdIntTypes = [
  "int8_t",
  "int16_t",
  "int32_t",
  "int64_t",
  "uint8_t",
  "uint16_t",
  "uint32_t",
  "uint64_t",
  "size_t",
];

// TODO(littlegnal): Move to cxx-parser
function isStdIntType(typeName: string): boolean {
  return stdIntTypes.includes(typeName);
}

const cStructTemplate = `
typedef struct {{ STRUCT_NAME }}
{
  {{ STRUCT_CONTENT }}
} {{ STRUCT_NAME }};
`;

const cEnumTemplate = `
typedef enum {{ ENUM_NAME }}
{
  {{ ENUM_CONTENT }}
} {{ ENUM_NAME }};
`;

function cStructName(fullName: string): string {
  return `${fullName.replaceAll("::", "__")}__C`;
}

// TODO(littlegnal): Move to cxx-parser
// function resolveNodeByType(
//     parseResult: ParseResult,
//     type: SimpleType,
// ): CXXTerraNode {
//     function _found(ns: string, namespace_string: string): boolean {
//         return ns == namespace_string ||
//             namespace_string == '' ||
//             ns.includes(namespace_string);
//     }
//     let name = type.name;
//     if (name.length === 0) {
//         return type;
//     }

//     if (type.is_builtin_type) {
//         return type;
//     }

//     let dummy = ['Optional', 'agora_refptr','<', '>'];
//     for (let d of dummy) {
//         name = name.replaceAll(d, '');
//     }

//     const namespace_string = name.getNamespace();

//     const trim_namespaces_name = name.trimNamespace();

//     for (const f of parseResult.nodes) {
//         let cxxFile = f as CXXFile;
//         for (const node of cxxFile.nodes) {
//             if (node.name === trim_namespaces_name) {
//                 let ns = node.namespaces.join('::');
//                 let found = _found(ns, namespace_string);
//                 // ns == namespace_string ||
//                 //     namespace_string == '' ||
//                 //     ns.includes(namespace_string);
//                 // if (
//                 //     node.namespace == namespace_string ||
//                 //     namespace_string == '' ||
//                 //     node.namespace.includes(namespace_string)
//                 // ) {
//                 //     return node;
//                 // }
//                 if (!found && node.parent_name) {
//                     ns = [...node.namespaces, node.parent_name].join('::');
//                     found = _found(ns, namespace_string);
//                 }

//                 if (found) {
//                     return node;
//                 }
//             }
//         }
//     }

//     return type;
// };

const templateAsPointer = ["agora_refptr", "Optional"];

const renameType = new Map([
  ["util::AString", "char *"],
  ["agora::util::AString&", "char *"],
  ["base::IAgoraService*", "base__IAgoraService__Handle"],
]);



function toCNameWithType(
  parseResult: ParseResult,
  type: SimpleType,
  appendName: string = '',
  cnameSurffix: string = "C"
): string {


  let node = parseResult.resolveNodeByType(type);

  let isConst = type.is_const;
  let isPointer = type.kind == SimpleTypeKind.pointer_t;
  let isRef = type.kind == SimpleTypeKind.reference_t;
  let isNeedAppendName = appendName.length > 0;

  let suffix = node.__TYPE == CXXTYPE.Clazz ? "Handle" : cnameSurffix;

  let cName = "";
  if (node.__TYPE == CXXTYPE.SimpleType) {
    let typeNode = node as SimpleType;
    // let ns = node.name.getNamespace().replaceAll('::', '_');
    // let rn = node.name.trimNamespace();
    // cName = `${ns}__${rn}__${cnameSurffix}`;
    cName = typeNode.name;

    // In this case, we cant not find the template argument type from the result,
    // it most likely the template argument is a builtin type, so we just use the
    // the first template argument as the type name.
    if (typeNode.kind == SimpleTypeKind.template_t) {
      cName = typeNode.template_arguments[0];

      if (
        templateAsPointer.find((it) => typeNode.name.startsWith(it)) &&
        !isPointer &&
        !cName.endsWith("*")
      ) {
        isPointer = true;
      }
    } else if (typeNode.kind == SimpleTypeKind.array_t) {
      cName = `${typeNode.name} ${appendName}[${typeNode.lenOfArrayType()}]`;
      isNeedAppendName = false;
    } else if (type.is_builtin_type || isStdIntType(type.name)) {
      cName = typeNode.name;
    }
  } else {
    cName = toCName(node, suffix);
  }

  if (isConst) {
    cName = `const ${cName}`;
  }
  if (isPointer) {
    cName = `${cName}*`;
  }
  if (isRef) {
    cName = `${cName}&`;
  }

  if (renameType.has(cName)) {
    cName = renameType.get(cName)!;
  }

  if (isNeedAppendName) {
    cName = `${cName} ${appendName}`;
  }



  return cName;
}

function toCName(node: CXXTerraNode, cnameSurffix: string = "C"): string {
  const seperator = "__";

  let name = "";

  // if (node.__TYPE == CXXTYPE.SimpleType) {
  //     let typeNode = node as SimpleType;
  //     name = typeNode.source;
  //     if (typeNode.is_builtin_type || isStdIntType(typeNode.name)) {
  //         return typeNode.source;
  //     }
  // }

  let prefix = "";

  let namespaces = node.namespaces;
  if (namespaces.length > 0) {
    prefix = namespaces.join("_");
    prefix += seperator;
  }

  let suffix = cnameSurffix;
  // if (sourceName.endsWith('*')) {
  //     name = name.replace('*', '');
  //     suffix = '*';
  // }

  name = node.realName;

  // if (node.__TYPE == CXXTYPE.Clazz) {
  //     suffix = 'Handle';
  // }

  return `${prefix}${name}__${suffix}`;
}

function toCHandle(clazz: Clazz): string {
  return toCName(clazz, "Handle");
}

// function toCFunction(clazz: Clazz, func: MemberFunction): string {
//     let functionName = toCName(clazz, it.name);

// }

function cppIncludeDirective2C(parseResult: ParseResult, includeDirective: IncludeDirective): string {
  if (!parseResult.nodes.find((it) => path.basename((it as CXXFile).file_path) ==
    path.basename(includeDirective.include_file_path))) {
    return '';
  }

  let fileName = path.basename(includeDirective.include_file_path).replace('.h', '');
  return `#include "${fileName}_C.h"`;
}

function cppTypeAlias2CTypeAlias(parseResult: ParseResult, typeAlias: TypeAlias): string {
  let name = toCName(typeAlias);
  let type = toCNameWithType(parseResult, typeAlias.underlyingType);;
  // e.g., typedef unsigned int uid_t
  return `typedef ${type} ${name};`;
}

function cppStruct2CStruct(parseResult: ParseResult, structt: Struct): string {
  let structName = toCName(structt);
  let structContent = "";
  let mvs = structt.member_variables.map((it) => {
    return `${toCNameWithType(parseResult, it.type, it.name)};`;
  });
  structContent = mvs.join("\n");
  return cStructTemplate
    .replaceAll("{{ STRUCT_NAME }}", structName)
    .replaceAll("{{ STRUCT_CONTENT }}", structContent);
}

function cppEnum2CEnum(enumz: Enumz): string {
  function _adjustConstant(enumName: string, enum_constants: EnumConstant[], currentEnumconstant: EnumConstant): string {
    let constantValue = currentEnumconstant.value;
    let found = enum_constants.filter((it) => it != currentEnumconstant && (constantValue == it.name || constantValue.includes(it.name)));
    if (found) {
      let returnConstantValue = constantValue;
      for (let ec of found) {
        returnConstantValue = returnConstantValue.replace(ec.name, `${enumName}__${ec.name}`);
      }
      return returnConstantValue;
    }

    return constantValue;
  }

  let enumName = toCName(enumz);
  let enumContent = "";
  let ecs = enumz.enum_constants.map((it) => {
    let name = it.name;
    let value = it.value;
    // Explicitly concat the enum name to avoid the name conflict in C
    let enumConstant = `${enumName}__${name}`;
    if (value) {
      // enumConstant += `= ${value}`;
      enumConstant += `= ${_adjustConstant(enumName, enumz.enum_constants, it)}`;
    }

    enumConstant += ",";

    return enumConstant;
  });
  enumContent = ecs.join("\n");
  return cEnumTemplate
    .replaceAll("{{ ENUM_NAME }}", enumName)
    .replaceAll("{{ ENUM_CONTENT }}", enumContent);
}

function cppClass2CFunctions(parseResult: ParseResult, clazz: Clazz): string {
  let output = "";
  let nativeHandleName = toCName(clazz, "Handle");
  let nativeHandle = `typedef void* ${nativeHandleName};`;
  output += nativeHandle;
  output += "\n\n";

  output += clazz.methods
    .map((it) => {
      let functionName = toCName(clazz, it.name);
      let returnType = toCNameWithType(parseResult, it.return_type);
      let args = it.parameters.map(
        (it) => toCNameWithType(parseResult, it.type, it.name)
      );
      args = [`${nativeHandleName} handle`, ...args];
      return `${returnType} ${functionName}(${args.join(",")});`;
    })
    .join("\n");

  return output;
}

function functionSignature(parseResult: ParseResult, clazz: Clazz, func: MemberFunction): string {
  let nativeHandleName = toCName(clazz, "Handle");
  let functionName = toCName(clazz, func.name);
  let returnType = toCNameWithType(parseResult, func.return_type);
  let args = func.parameters.map(
    (it) => toCNameWithType(parseResult, it.type, it.name)
  );
  args = [`${nativeHandleName} handle`, ...args];
  return `${returnType} ${functionName}(${args.join(",")})`;
}

function objInitFromC(parseResult: ParseResult, cStructName: string, structt: Struct): readonly [string, string] {
  let initList: string[] = [];
  let theName = `the${structt.realName}`;
  initList.push(`${structt.fullName} ${theName};`);
  structt.member_variables.forEach((it) => {
    if (it.type.is_builtin_type || isStdIntType(it.type.name)) {
      initList.push(`${theName}.${it.name} = ${cStructName}.${it.name};`);
    } else {
      let resolvedType = parseResult.resolveNodeByType(it.type);
      if (resolvedType.__TYPE == CXXTYPE.Struct) {
        let [first, second] = objInitFromC(parseResult, `${cStructName}.${it.name}`, resolvedType as Struct);
        initList.unshift(second);
        initList.push(`${theName}.${it.name} = ${first};`);
      } else {
        initList.push(`${theName}.${it.name} = ${cStructName}.${it.name};`);
      }
    }
  });
  return [theName, initList.join('\n')];
}

function cppClass2CFunctionImpls(parseResult: ParseResult, clazz: Clazz): string {
  // agora::rtc::RtcConnection theConnection;
  // theConnection.localUid = connection.localUid;
  // theConnection.channelName = connection.channelName;
  let output = clazz.methods
    .map((method) => {
      // let ps = it.parameters.map((it) => it.name).join(',');
      let ps: string[] = [];
      let objInitList: string[] = [];


      method.parameters.forEach((p) => {
        let pn = p.name;

        let pt = parseResult.resolveNodeByType(p.type);
        if (pt.__TYPE == CXXTYPE.Struct) {

          let [theName, il] = objInitFromC(parseResult, pn, pt as Struct);
          objInitList.push(il);
          ps.push(theName);
        } else {
          ps.push(pn);

        }



      });


      return `${functionSignature(parseResult, clazz, method)} {
        ${objInitList.join('\n')}
        reinterpret_cast<${clazz.fullName} *>(handle)->${method.name}(${ps.join(',')});
      }
      `;
    })
    .join("\n");

  return output;
}

function filterNodes(sourceNodes: any[], nodesToFilter: any[]): CXXTerraNode[] {
  return sourceNodes.filter((it) => {
    // let nr = nodesToRemove.filter((node) => node.__TYPE == CXXTYPE.CXXFile);
    let included = false;
    for (let n of nodesToFilter) {
      if (checkObjInclude(it, n)) {
        return false;
      }
    }

    return true;
  });
}

function preProcessParseResult(parseResult: ParseResult): ParseResult {
  // Remove nodes
  // 1. Remove CXXFile
  // 2. Remove Clazz

  parseResult.nodes = filterNodes(
    parseResult.nodes,
    nodesToRemove.filter((node) => node.__TYPE == CXXTYPE.CXXFile)
  );

  parseResult.nodes.forEach((it) => {

    // Handle the parent nodes
    (it as CXXFile).nodes = filterNodes(
      (it as CXXFile).nodes,
      nodesToRemove.filter((node) => node.__TYPE != CXXTYPE.CXXFile)
    );

    // Handle the children nodes
    (it as CXXFile).nodes.forEach((it) => {
      // filter Clazz
      // filter Struct
      if (it.__TYPE == CXXTYPE.Struct || it.__TYPE == CXXTYPE.Clazz) {
        // The Struct is the sub class of Clazz
        let node = it as Clazz;

        node.constructors = filterNodes(
          node.constructors,
          nodesToRemove.filter((node) => node.__TYPE == CXXTYPE.Constructor)
        ) as Constructor[];

        node.methods = filterNodes(
          node.methods,
          nodesToRemove.filter((node) => node.__TYPE == CXXTYPE.MemberFunction)
        ) as MemberFunction[];

        node.member_variables = filterNodes(
          node.member_variables,
          nodesToRemove.filter((node) => node.__TYPE == CXXTYPE.MemberVariable)
        ) as MemberVariable[];
      } else if (it.__TYPE == CXXTYPE.Enumz) {
        // filter Enumz
        let node = it as Enumz;
        node.enum_constants = filterNodes(
          node.enum_constants,
          nodesToRemove.filter((node) => node.__TYPE == CXXTYPE.EnumConstant)
        ) as EnumConstant[];
      }


    });
  });

  // Rename types

  return parseResult;
}

function reorderNodes(parseResult: ParseResult, nodes: CXXTerraNode[]): CXXTerraNode[] {
  let visitedNodes = new Map<CXXTerraNode, CXXTerraNode[]>();
  let newNodes = nodes;
  for (let i = 0; i < newNodes.length; i++) {
    let node = newNodes[i];
    if (!visitedNodes.has(node)) {
      visitedNodes.set(node, []);
    }

    if (node.__TYPE == CXXTYPE.Clazz || node.__TYPE == CXXTYPE.Struct) {
      (node as Clazz).member_variables.forEach((it) => {
        if (!it.type.is_builtin_type) {
          let foundNode = parseResult.resolveNodeByType(it.type);
          if (!visitedNodes.has(foundNode)) {
            visitedNodes.get(node)?.push(foundNode);
          }
        }

      });

      (node as Clazz).methods.forEach((it) => {
        it.parameters.forEach((it) => {
          if (!it.type.is_builtin_type) {
            let foundNode = parseResult.resolveNodeByType(it.type);
            if (!visitedNodes.has(foundNode)) {
              visitedNodes.get(node)?.push(foundNode);
            }
          }
        });
      });
    }
  }

  for (let key of visitedNodes.keys()) {
    if (visitedNodes.get(key)?.length == 0) {
      visitedNodes.delete(key);
    }
  }

  let reorderedNodes: CXXTerraNode[] = [];

  for (let key of visitedNodes.keys()) {

    let index = newNodes.findIndex((it) => it == key);

    let reorderNodes = visitedNodes.get(key)!.filter((it) => !reorderedNodes.includes(it));

    for (let n of reorderNodes) {
      let i = newNodes.findIndex((it) => it == n);
      if (i > index) {
        newNodes.splice(i, 1);
      }
    }


    newNodes = [
      ...newNodes.slice(0, index),
      ...reorderNodes,
      ...newNodes.slice(index),
    ]

    reorderedNodes = reorderedNodes.concat(reorderNodes);

  }


  return newNodes;
}

function cpp2c(parseResult: ParseResult, cxxFile: CXXFile): RenderResult {
  let allNodes = cxxFile.nodes;

  let output = '';
  output = allNodes
    .map((it) => {
      switch (it.__TYPE) {
        case CXXTYPE.TypeAlias:
          return cppTypeAlias2CTypeAlias(parseResult, it as TypeAlias);
        case CXXTYPE.Struct:
          return cppStruct2CStruct(parseResult, it as Struct);
        case CXXTYPE.Enumz:
          return cppEnum2CEnum(it as Enumz);
        case CXXTYPE.Clazz:
          return cppClass2CFunctions(parseResult, it as Clazz);
        case CXXTYPE.IncludeDirective:
          return cppIncludeDirective2C(parseResult, it as IncludeDirective);
        default:
          return "";
      }
    })
    .join("\n");

  let fileName = cxxFile.fileName.replace('.h', '');
  let defineH = `${fileName.toUpperCase()}_C_H_`;

  output = `
    #ifndef ${defineH}
    #define ${defineH}
    
    #include <stdint.h>
    #include <stddef.h>
    
    
    
    ${output}
    
    #endif// ${defineH}
    `;

  return {
    file_name: `${fileName}_C.h`,
    file_content: output,
  };
}

export default function RtcCRenderer(
  terraContext: TerraContext,
  args: any,
  parseResult: ParseResult
): RenderResult[] {
  // let output = "";

  // preProcessParseResult(parseResult);

  let allNodes = (preProcessParseResult(parseResult).nodes as CXXFile[])
    .map((it) => it.nodes)
    .flat();

  allNodes = reorderNodes(parseResult, allNodes);

  let headerFileOut = allNodes
    .map((it) => {
      switch (it.__TYPE) {
        case CXXTYPE.TypeAlias:
          return cppTypeAlias2CTypeAlias(parseResult, it as TypeAlias);
        case CXXTYPE.Struct:
          return cppStruct2CStruct(parseResult, it as Struct);
        case CXXTYPE.Enumz:
          return cppEnum2CEnum(it as Enumz);
        case CXXTYPE.Clazz:
          return cppClass2CFunctions(parseResult, it as Clazz);
        default:
          return "";
      }
    })
    .join("\n");

  headerFileOut = `
  #ifndef AGORA_RTC_C_H_
  #define AGORA_RTC_C_H_

  #include <stdint.h>
  #include <stddef.h>

  typedef void* base__IAgoraService__Handle;

  ${headerFileOut}

  #endif// AGORA_RTC_C_H_
  `;

  let implFileOut = `
#include "rtc_c.h"

${function () {
      return allNodes
        .filter((it) => it.__TYPE == CXXTYPE.Clazz)
        .map((it) => {
          return cppClass2CFunctionImpls(parseResult, it as Clazz);
        })
        .join("\n");
    }()}
`;

  return [
    {
      file_name: "rtc_c.h",
      file_content: headerFileOut,
    },
    {
      file_name: "rtc_c.cc",
      file_content: implFileOut,
    },
  ];
}
