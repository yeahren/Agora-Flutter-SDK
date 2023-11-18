import { CXXFile, CXXTYPE, CXXTerraNode, Enumz, SimpleTypeKind, Struct, TypeAlias } from '@agoraio-extensions/cxx-parser';
import { TerraContext, ParseResult, RenderResult } from '@agoraio-extensions/terra-core'

const stdIntTypes = [
    'int8_t',
    'int16_t',
    'int32_t',
    'int64_t',
    'uint8_t',
    'uint16_t',
    'uint32_t',
    'uint64_t',
    'size_t',
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
    return `${fullName.replaceAll('::', '__')}__C`;
}

function toCName(sourceName: string): string {
    const seperator = '__';
    let prefix = '';
    let namespaces = sourceName.getNamespace();
    if (namespaces.length > 0) {
        prefix = namespaces.replaceAll('::', '_');
        prefix += seperator;
    }

    let name = sourceName;
    let suffix = '';
    if (sourceName.endsWith('*')) {
        name = name.replace('*', '');
        suffix = '*';
    }

    name = name.trimNamespace();

    return `${prefix}${name}__C${suffix}`;
}

function cppTypeAlias2CTypeAlias(typeAlias: TypeAlias): string {
    let name = toCName(typeAlias.fullName);
    let type = typeAlias.underlyingType.name;
    // e.g., typedef unsigned int uid_t
    return `typedef ${type} ${name};`;
}

function cppStruct2CStruct(structt: Struct): string {
    let structName = toCName(structt.fullName);
    let structContent = '';
    let mvs = structt.member_variables.map((it) => {
        let type = '';
        let name = it.name;
        if (it.type.is_builtin_type || isStdIntType(it.type.name)) {
            type = it.type.source;
        } else {
            type = toCName(it.type.source);
        }

        return `${type} ${name};`;
    });
    structContent = mvs.join('\n');
    return cStructTemplate
        .replaceAll('{{ STRUCT_NAME }}', structName)
        .replaceAll('{{ STRUCT_CONTENT }}', structContent);
}

function cppEnum2CEnum(enumz: Enumz): string {
    let enumName = toCName(enumz.fullName);
    let enumContent = '';
    let ecs = enumz.enum_constants.map((it) => {
        let name = it.name;
        let value = it.value;
        let enumConstant = name;
        if (value) {
            enumConstant += `= ${value}`;
        }

        enumConstant += ',';

        return enumConstant;
    });
    enumContent = ecs.join('\n');
    return cEnumTemplate
        .replaceAll('{{ ENUM_NAME }}', enumName)
        .replaceAll('{{ ENUM_CONTENT }}', enumContent);
}

export default function RtcCRenderer(
    terraContext: TerraContext,
    args: any,
    parseResult: ParseResult
): RenderResult[] {
    let output = '';

    let allNodes = (parseResult.nodes as CXXFile[])
        .map((it) => it.nodes).flat();

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


    output = allNodes.map((it) => {
        switch (it.__TYPE) {
            case CXXTYPE.TypeAlias:
                return cppTypeAlias2CTypeAlias(it as TypeAlias);
            case CXXTYPE.Struct:
                return cppStruct2CStruct(it as Struct);
            case CXXTYPE.Enumz:
                return cppEnum2CEnum(it as Enumz);
            default:
                return '';
        }
    }).join('\n');

    return [{
        file_name: 'rtc_c.h',
        file_content: output,
    }];
}