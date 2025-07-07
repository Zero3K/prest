const { instructions } = require('./instructions');

console.log("/* -*- Mode: c++; tab-width: 4; indent-tabs-mode: nil; c-basic-offset: 4; c-file-style: \"stroustrup\" -*-");
console.log(" *");
console.log(" * Copyright (C) Opera Software ASA  2002 - 2006");
console.log(" *");
console.log(" * Table of instruction data.");
console.log(" *");
console.log(" * @author build/scripts/es_instruction_data_h.js");
console.log(" */");
console.log();
console.log("#ifndef ES_INSTRUCTION_DATA_H");
console.log("#define ES_INSTRUCTION_DATA_H");
console.log();
console.log("const unsigned g_instruction_operand_count[] =");
console.log("{");

let currentCondition = null;

for (const instruction of instructions) {
    if (currentCondition !== instruction.condition) {
        if (currentCondition) console.log("#endif");
        currentCondition = instruction.condition;
        if (currentCondition) console.log(`#${currentCondition}`);
    }

    if (instruction.name === "ESI_LAST_INSTRUCTION") {
        console.log("    0");
    } else {
        let noperands;
        if (["ESI_COPYN", "ESI_ADDN", "ESI_CONSTRUCT_OBJECT"].includes(instruction.name)) {
            noperands = "UINT_MAX";
        } else {
            noperands = instruction.operands.length.toString();
        }
        const spacing = " ".repeat(9 - noperands.length);
        console.log(`    ${noperands},${spacing}// ${instruction.name}`);
    }
}

console.log("};");
console.log();
console.log("const unsigned short g_instruction_operand_register_io[] =");
console.log("{");

currentCondition = null;

for (const instruction of instructions) {
    if (currentCondition !== instruction.condition) {
        if (currentCondition) console.log("#endif");
        currentCondition = instruction.condition;
        if (currentCondition) console.log(`#${currentCondition}`);
    }

    if (instruction.name === "ESI_LAST_INSTRUCTION") {
        console.log("    0");
    } else {
        let dataIn = 0;
        let dataOut = 0;
        if (!["ESI_COPYN", "ESI_ADDN", "ESI_CONSTRUCT_OBJECT", "ESI_EVAL", "ESI_CALL", "ESI_CONSTRUCT"].includes(instruction.name)) {
            for (let operandIndex = 0; operandIndex < instruction.operands.length; operandIndex++) {
                const operand = instruction.operands[operandIndex];
                if (operand.operandtype.startsWith("reg:")) {
                    if (operand.operandtype.includes("in")) {
                        dataIn = dataIn | (1 << operandIndex);
                    }
                    if (operand.operandtype.includes("out")) {
                        dataOut = dataOut | (1 << operandIndex);
                    }
                }
            }
        }
        console.log(`    0x${dataIn.toString(16).padStart(2, '0')}${dataOut.toString(16).padStart(2, '0')}, // ${instruction.name}`);
    }
}

console.log("};");
console.log();
console.log("const BOOL g_instruction_is_trivial[] =");
console.log("{");

currentCondition = null;

for (const instruction of instructions) {
    if (currentCondition !== instruction.condition) {
        if (currentCondition) console.log("#endif");
        currentCondition = instruction.condition;
        if (currentCondition) console.log(`#${currentCondition}`);
    }

    if (instruction.name === "ESI_LAST_INSTRUCTION") {
        console.log("    FALSE");
    } else {
        console.log(`    ${instruction.trivial ? "TRUE" : "FALSE"}, // ${instruction.name}`);
    }
}

console.log("};");
console.log();
console.log("#endif // ES_INSTRUCTION_DATA_H");