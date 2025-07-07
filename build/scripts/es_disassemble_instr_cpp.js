const { instructions } = require('./instructions');

console.log("/* -*- Mode: c++; tab-width: 4; indent-tabs-mode: nil; c-basic-offset: 4; c-file-style: \"stroustrup\" -*-");
console.log(" *");
console.log(" * Copyright (C) Opera Software ASA  2002 - 2006");
console.log(" *");
console.log(" * Disassembler: generated per-instruction code.");
console.log(" *");
console.log(" * @author build/scripts/es_disassemble_instr_cpp.js");
console.log(" */");
console.log();
console.log("#include \"core/pch.h\"");
console.log();
console.log("#ifdef ES_DISASSEMBLER_SUPPORT");
console.log();
console.log("#include \"modules/ecmascript/carakan/src/es_pch.h\"");
console.log("#include \"modules/ecmascript/carakan/src/compiler/es_disassembler.h\"");
console.log();
console.log("void");
console.log("ES_Disassembler::DisassembleInstruction(ES_Code *code, ES_CodeWord *&word, ES_CodeWord *codewords)");
console.log("{");
console.log("    switch (word++->instruction)");
console.log("    {");

let currentCondition = null;

for (const instruction of instructions) {
    if (currentCondition !== instruction.condition) {
        if (currentCondition) console.log("#endif");
        currentCondition = instruction.condition;
        if (instruction.code !== 0) console.log();
        if (currentCondition) console.log(`#${currentCondition}`);
    } else if (instruction.code !== 0) {
        console.log();
    }

    if (instruction.name === "ESI_LAST_INSTRUCTION") break;

    console.log(`    case ${instruction.name}:`);

    if (instruction.name === "ESI_CALL" || instruction.name === "ESI_EVAL") {
        // special handling of most significant bit in 'argc' operand
        console.log("        OutputRegister(word++->index, \"frame\");");
        console.log("        OutputImmediate(static_cast<int>(word->index & 0x7fffffffu), UNI_L(\"argc\"));");
        console.log("        if ((word->immediate & 0x80000000u) != 0)");
        console.log("            output.Append(\" [this = global object]\");");
        console.log("        ++word;");
        if (instruction.name === "ESI_EVAL") {
            console.log(`        OutputImmediate(word++->immediate, UNI_L("${instruction.operands[2].name}"));`);
            console.log(`        OutputImmediate(word++->immediate, UNI_L("${instruction.operands[2].name}"));`);
        }
    } else if (instruction.name === "ESI_ADDN") {
        console.log("        {");
        console.log("            OutputRegister(word++->index, \"dst\");");
        console.log("            unsigned count = word++->index;");
        console.log("            OutputImmediate(count, UNI_L(\"count\"));");
        console.log("            for (unsigned index = 0; index < count; ++index)");
        console.log("                OutputRegister(word++->index);");
        console.log("        }");
    } else if (instruction.name === "ESI_CONSTRUCT_OBJECT") {
        console.log("        {");
        console.log("            OutputRegister(word++->index, \"dst\");");
        console.log("            unsigned count = code->data->object_literal_classes[word++->index].properties_count;");
        console.log("            OutputImmediate(count, UNI_L(\"class\"));");
        console.log("            for (unsigned index = 0; index < count; ++index)");
        console.log("                OutputRegister(word++->index);");
        console.log("        }");
    } else {
        for (const operand of instruction.operands) {
            if (operand.operandtype.startsWith("reg:")) {
                console.log(`        OutputRegister(word++->index & 0x7fffffffu, "${operand.name}");`);
            } else if (operand.operandtype === "imm:offset") {
                console.log("        OutputOffset(word->offset, word - codewords);");
                console.log("        ++word;");
            } else if (operand.operandtype === "imm:cache:property") {
                console.log("        OutputPropertyCache(code, word++->immediate);");
            } else if (operand.operandtype === "imm:cache:global") {
                console.log("        OutputGlobalCache(code, word++->immediate);");
            } else if (operand.operandtype.startsWith("imm:")) {
                console.log(`        OutputImmediate(word++->immediate, UNI_L("${operand.name}"));`);
            } else if (operand.operandtype === "string") {
                console.log("        OutputString(context, code, word++->index);");
            } else if (operand.operandtype === "double") {
                console.log("        OutputDouble(context, code, word++->index);");
            } else if (operand.operandtype === "identifier") {
                console.log("        OutputIdentifier(code, *word++);");
            } else if (operand.operandtype === "classid") {
                console.log("        OutputClassID(*word++);");
            } else if (["function", "regexp"].includes(operand.operandtype)) {
                console.log(`        OutputImmediate(word++->index, UNI_L("${operand.name}"));`);
            } else {
                // unused operand
                console.log("        ++word;");
            }
        }
    }

    console.log("        break;");
}

console.log("    default:");
console.log("        output.AppendL(\"BROKEN PROGRAM!\\n\");");
console.log("    }");
console.log("}");
console.log();
console.log("#endif // ES_DISASSEMBLER_SUPPORT");