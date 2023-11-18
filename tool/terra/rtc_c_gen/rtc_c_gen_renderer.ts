import { CXXFile, CXXTYPE, CXXTerraNode, Enumz, SimpleTypeKind, Struct } from '@agoraio-extensions/cxx-parser';
import { TerraContext, ParseResult, RenderResult } from '@agoraio-extensions/terra-core'

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

function toCName(node: CXXTerraNode): string {
    let prifix = '';
    if (node.namespaces.length > 0) {
        prifix = node.namespaces.join('_');
    }

    return `${prifix}__${node.name}__C`;
}

function cppStruct2CStruct(structt: Struct): string {
    let structName = toCName(structt);
    let structContent = '';
    let mvs = structt.member_variables.map((it) => {
        let type = '';
        let name = it.name;
        if (it.type.is_builtin_type) {
            type = it.type.source;
        } else {
            type = cStructName(it.type.source);
        }

        return `${type} ${name};`;
    });
    structContent = mvs.join('\n');
    return cStructTemplate
        .replaceAll('{{ STRUCT_NAME }}', structName)
        .replaceAll('{{ STRUCT_CONTENT }}', structContent);
}

function cppEnum2CEnum(enumz: Enumz): string {
    let enumName = toCName(enumz);
    let enumContent = '';
    let ecs = enumz.enum_constants.map((it) => {
        let name = it.name;
        let value = it.value;
        let enumConstant = name;
        if (value) {
            enumConstant += `= ${value}`;
        }

        enumConstant += ';';

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

    let allStructs =
        allNodes.filter((it) => it.__TYPE == CXXTYPE.Struct);
    let allCStructList = allStructs.map((it) => cppStruct2CStruct(it as Struct));
    output += allCStructList.join('\n');

    let allEnums =
        allNodes.filter((it) => it.__TYPE == CXXTYPE.Enumz);
    let allCEnumList = allEnums.map((it) => cppEnum2CEnum(it as Enumz));
    output += allCEnumList.join('\n');

    return [{
        file_name: 'rtc_c.h',
        file_content: output,
    }];
}