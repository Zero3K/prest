const { instructions } = require('./instructions');

console.log("/* -*- Mode: c++; tab-width: 4; indent-tabs-mode: nil; c-basic-offset: 4; c-file-style: \"stroustrup\" -*-");
console.log(" *");
console.log(" * Copyright (C) Opera Software ASA  2002 - 2006");
console.log(" *");
console.log(" * Table of instruction names.");
console.log(" *");
console.log(" * @author build/scripts/es_instructionhandlers_cpp.js");
console.log(" */");
console.log();
console.log("#include \"core/pch.h\"");
console.log();
console.log("#include \"modules/ecmascript/carakan/src/es_pch.h\"");
console.log();
console.log("#ifdef ES_NATIVE_SUPPORT");
console.log();
console.log("static void *");
console.log("ViolateFunctionPointer(IH_FUNCTION_PTR(ptr))");
console.log("{");
console.log("    union { IH_FUNCTION_PTR(fn); void *v; } u;");
console.log("    u.fn = ptr;");
console.log("    return u.v;");
console.log("}");
console.log();
console.log("void ES_SetupFunctionHandlers()");
console.log("{");
console.log(`    void **ihs = g_ecma_instruction_handlers = OP_NEWA_L(void *, ${instructions.length - 1});`);
console.log();

let currentCondition = null;

for (const instruction of instructions) {
    if (currentCondition !== instruction.condition) {
        if (currentCondition) console.log("#endif");
        currentCondition = instruction.condition;
        if (currentCondition) console.log(`#${currentCondition}`);
    }

    if (["ESI_RETURN_FROM_EVAL", "ESI_EXIT", "ESI_EXIT_TO_BUILTIN", "ESI_EXIT_TO_EVAL"].includes(instruction.name)) {
        console.log(`    ihs[${instruction.name}] = NULL;`);
    } else if (instruction.name !== "ESI_LAST_INSTRUCTION") {
        let instr = instruction.name.substring(4);
        if (instruction.alias !== null) {
            instr = instruction.alias.substring(4);
        }
        console.log(`    ihs[${instruction.name}] = ViolateFunctionPointer(&ES_Execution_Context::IH_${instr});`);
    }
}

console.log("}");
console.log();
console.log("#endif // ES_NATIVE_SUPPORT");