import {
  CXXFile,
  CXXTYPE,
  CXXTerraNode,
  Clazz,
  Enumz,
  MemberFunction,
  SimpleType,
  SimpleTypeKind,
  Struct,
  TypeAlias,
} from "@agoraio-extensions/cxx-parser";
import {
  TerraContext,
  ParseResult,
  RenderResult,
} from "@agoraio-extensions/terra-core";

function checkPropertyEq(obj: any, key: string, value: any): boolean {
  return obj.hasOwnProperty(key) && obj[key] == value;
}

function checkObjInclude(obj1: any, obj2: any): boolean {
  let isIncluded = false;

  if (!obj2) {
    return isIncluded;
  }

  for (let k2 of Object.keys(obj2)) {
    let v1 = obj1[k2];
    let v2 = obj2[k2];
    if (v1) {
      if (typeof v1 === "object" && typeof v2 === "object") {
        isIncluded = isIncluded && checkObjInclude(v1, v2);
      } else {
        isIncluded = isIncluded && checkPropertyEq(obj1, k2, obj2[k2]);
      }
    }
  }

  return isIncluded;
}

const nodesToRemove = [
  {
    __TYPE: CXXTYPE.CXXFile,
    file_path:
      "/Users/fenglang/codes/aw/Agora-Flutter-SDK/tool/terra/.terra/cxx_parser/preProcess@a515187e1caea35c4bdaaf7c85859b00/AgoraBase.h",
  },
  {
    __TYPE: CXXTYPE.Clazz,
    name: "AutoPtr",
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

function toCNameWithType(
  parseResult: ParseResult,
  type: SimpleType,
  cnameSurffix: string = "C"
): string {
  if (type.is_builtin_type || isStdIntType(type.name)) {
    return type.source;
  }

  let node = parseResult.resolveNodeByType(type);

  let isConst = type.is_const;
  let isPointer = type.kind == SimpleTypeKind.pointer_t;
  let isRef = type.kind == SimpleTypeKind.reference_t;

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

function cppTypeAlias2CTypeAlias(typeAlias: TypeAlias): string {
  let name = toCName(typeAlias);
  let type = typeAlias.underlyingType.source;
  // e.g., typedef unsigned int uid_t
  return `typedef ${type} ${name};`;
}

function cppStruct2CStruct(parseResult: ParseResult, structt: Struct): string {
  let structName = toCName(structt);
  let structContent = "";
  let mvs = structt.member_variables.map((it) => {
    let type = toCNameWithType(parseResult, it.type);
    let name = it.name;
    // if (it.type.is_builtin_type || isStdIntType(it.type.name)) {
    //     type = it.type.source;
    // } else {
    //     type = toCName(it.type);
    // }

    return `${type} ${name};`;
  });
  structContent = mvs.join("\n");
  return cStructTemplate
    .replaceAll("{{ STRUCT_NAME }}", structName)
    .replaceAll("{{ STRUCT_CONTENT }}", structContent);
}

function cppEnum2CEnum(enumz: Enumz): string {
  let enumName = toCName(enumz);
  let enumContent = "";
  let ecs = enumz.enum_constants.map((it) => {
    let name = it.name;
    let value = it.value;
    let enumConstant = name;
    if (value) {
      enumConstant += `= ${value}`;
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
        (it) => `${toCNameWithType(parseResult, it.type)} ${it.name}`
      );
      args = [`${nativeHandleName} handle`, ...args];
      return `${returnType} ${functionName}(${args.join(",")});`;
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
    // filter Clazz

    // filter Struct

    // filter Enumz

    (it as CXXFile).nodes = filterNodes(
      (it as CXXFile).nodes,
      nodesToRemove.filter((node) => node.__TYPE != CXXTYPE.CXXFile)
    );
  });

  // Rename types

  return parseResult;
}

export default function RtcCRenderer(
  terraContext: TerraContext,
  args: any,
  parseResult: ParseResult
): RenderResult[] {
  let output = "";

  let allNodes = (preProcessParseResult(parseResult).nodes as CXXFile[])
    .map((it) => it.nodes)
    .flat();

  // let allTypeAlias =
  //     allNodes.filter((it) => it.__TYPE == CXXTYPE.TypeAlias);
  // let allTypeAliasList = allTypeAlias.map((it) => cppTypeAlias2CTypeAlias(it as TypeAlias));
  // output += allTypeAliasList.join('\n');

  // let allStructs =
  //     allNodes.filter((it) => it.__TYPE == CXXTYPE.Struct);
  // let allCStructList = allStructs.map((it) => cppStruct2CStruct(it as Struct));
  // output += allCStructList.join('\n');

  // let allEnums =
  //     allNodes.filter((it) => it.__TYPE == CXXTYPE.Enumz);
  // let allCEnumList = allEnums.map((it) => cppEnum2CEnum(it as Enumz));
  // output += allCEnumList.join('\n');

  output = allNodes
    .map((it) => {
      switch (it.__TYPE) {
        case CXXTYPE.TypeAlias:
          return cppTypeAlias2CTypeAlias(it as TypeAlias);
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

  output = `
#ifndef AGORA_RTC_C_H_
#define AGORA_RTC_C_H_

#include <stdint.h>
#include <stddef.h>

${output}

#endif// AGORA_RTC_C_H_
`;

  return [
    {
      file_name: "rtc_c.h",
      file_content: output,
    },
  ];
}
