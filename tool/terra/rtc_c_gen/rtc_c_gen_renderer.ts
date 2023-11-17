import { CXXFile, CXXTYPE, SimpleTypeKind, Struct } from '@agoraio-extensions/cxx-parser';
import { TerraContext, ParseResult, RenderResult } from '@agoraio-extensions/terra-core'

const cStructTemplate = `
typedef struct {{ STRUCT_NAME }}
{
  {{ STRUCT_CONTENT }}
} {{ STRUCT_NAME }};
`;

function cStructName(fullName: string): string {
    return `${fullName.replaceAll('::', '_')}_C`;
}

function cppStruct2CStruct(structt: Struct): string {
    let structName = cStructName(structt.fullName);
    let structContent = '';
    let mvs = structt.member_variables.map((it) => {
        let type = '';
        let name = it.name;
        if (it.type.is_builtin_type) {
            type = it.type.source;
        } else {
            type = it.type.source;
        }

        return `${type} ${name};`;
    });
    structContent = mvs.join('\n');
    return cStructTemplate
        .replaceAll('{{ STRUCT_NAME }}', structName)
        .replaceAll('{{ STRUCT_CONTENT }}', structContent);
}

export default function RtcCRenderer(
    terraContext: TerraContext,
    args: any,
    parseResult: ParseResult
): RenderResult[] {
    let output = '';

    let allStructs = (parseResult.nodes as CXXFile[])
        .map((it) => it.nodes).flat()
        .filter((it) => it.__TYPE == CXXTYPE.Struct);

    let allCStructList = allStructs.map((it) => cppStruct2CStruct(it as Struct));
    output = allCStructList.join('\n');

    return [{
        file_name: 'rtc_c.h',
        file_content: output,
    }];
}