const { instructions } = require('./instructions');

console.log("/* -*- Mode: c++; tab-width: 4; indent-tabs-mode: nil; c-basic-offset: 4; c-file-style: \"stroustrup\" -*-");
console.log(" *");
console.log(" * Copyright (C) Opera Software ASA  2002 - 2011");
console.log(" *");
console.log(" * Table of instruction names.");
console.log(" *");
console.log(" * @author build/scripts/es_instruction_string_h.js");
console.log(" */");
console.log();
console.log("#ifndef ES_INSTRUCTION_STRING_H");
console.log("#define ES_INSTRUCTION_STRING_H");
console.log("# if defined(ES_DISASSEMBLER_SUPPORT) || defined(ES_BYTECODE_LOGGER) || defined(ES_SLOW_CASE_PROFILING)");
console.log();
console.log("const char *const g_instruction_strings[] =");
console.log("{");

let currentCondition = null;

for (const instruction of instructions) {
    if (currentCondition !== instruction.condition) {
        if (currentCondition) console.log("#endif");
        currentCondition = instruction.condition;
        if (currentCondition) console.log(`#${currentCondition}`);
    }

    if (instruction.name === "ESI_LAST_INSTRUCTION") {
        console.log("    \"LAST_INSTRUCTION\"");
    } else {
        console.log(`    "${instruction.name.substring(4)}",`);
    }
}

console.log("};");
console.log();
console.log("# endif // ES_DISASSEMBLER_SUPPORT || ES_BYTECODE_LOGGER || ES_SLOW_CASE_PROFILING");
console.log("#endif // ES_INSTRUCTION_STRING_H");