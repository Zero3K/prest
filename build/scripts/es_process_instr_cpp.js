const { instructions } = require('./instructions');

function Type(type) {
    if (["null", "undefined", "boolean", "string", "int32", "double", "object"].includes(type)) {
        return `ESTYPE_${type.toUpperCase()}`;
    } else if (type === "number") {
        return "ESTYPE_INT32_OR_DOUBLE";
    }
    return null;
}

console.log("/* -*- Mode: c++; tab-width: 4; indent-tabs-mode: nil; c-basic-offset: 4; c-file-style: \"stroustrup\" -*-");
console.log(" *");
console.log(" * Copyright (C) Opera Software ASA  2002 - 2006");
console.log(" *");
console.log(" * Optimizer: generated per-instruction code.");
console.log(" *");
console.log(" * @author build/scripts/es_process_instr_cpp.js");
console.log(" */");
console.log();
console.log("#include \"core/pch.h\"");
console.log();
console.log("#include \"modules/ecmascript/carakan/src/es_pch.h\"");
console.log("#include \"modules/ecmascript/carakan/src/compiler/es_analyzer.h\"");
console.log();
console.log("#ifdef ES_NATIVE_SUPPORT");
console.log();
console.log("void");
console.log("ES_Analyzer::ProcessInstruction(Input *&iptr, Output *&optr)");
console.log("{");
console.log("    switch (word++->instruction)");
console.log("    {");

let currentCondition = null;
let first = true;

for (const instruction of instructions) {
    // instruction with custom handling
    if (["ESI_LOAD", "ESI_LOAD_IMM", "ESI_COPY", "ESI_COPYN", "ESI_ADD", "ESI_ADDN", "ESI_CONSTRUCT_OBJECT", "ESI_EVAL", "ESI_CALL", "ESI_CONSTRUCT"].includes(instruction.name)) {
        continue;
    }

    if (currentCondition !== instruction.condition) {
        if (currentCondition) console.log("#endif");
        currentCondition = instruction.condition;
        if (!first) console.log();
        if (currentCondition) console.log(`#${currentCondition}`);
    } else if (!first) {
        console.log();
    }

    first = false;
    
    if (instruction.name === "ESI_LAST_INSTRUCTION") break;

    console.log(`    case ${instruction.name}:`);
    
    for (const operand of instruction.operands) {
        if (operand.operandtype.startsWith("reg:")) {
            if (["reg:in", "reg:in:out"].includes(operand.operandtype)) {
                if (operand.operandtype === "reg:in") {
                    console.log("        iptr->index = word++->index;");
                } else {
                    console.log("        iptr->index = word->index;");
                }
                if (["boolean", "string", "number", "int32", "object"].includes(operand.valuetype)) {
                    console.log("        iptr->has_type = TRUE;");
                    console.log("        iptr->has_forced_type = TRUE;");
                    console.log(`        iptr->type = ${Type(operand.valuetype)};`);
                } else {
                    console.log("        iptr->has_type = FALSE;");
                }
                console.log("        ++iptr;");
            }

            if (["reg:out", "reg:in:out", "reg:out:optional"].includes(operand.operandtype)) {
                if (["null", "undefined", "boolean", "string", "number", "int32", "double", "object"].includes(operand.valuetype)) {
                    const optional = operand.operandtype.endsWith(":optional") ? ", FALSE, 0, TRUE" : "";
                    console.log(`        *optr++ = Output(word++->index, TRUE, ${Type(operand.valuetype)}${optional});`);
                } else {
                    const optional = operand.operandtype.endsWith(":optional") ? ", TRUE" : "";
                    console.log(`        *optr++ = Output(word++->index${optional});`);
                }
            }
        } else {
            console.log("        ++word;");
        }
    }

    console.log("        break;");
}

console.log("    }");
console.log("}");
console.log();
console.log("#endif // ES_NATIVE_SUPPORT");