const { instructions, documentation } = require('./instructions');

function outputFlowed(prefix, continuationPrefix, paragraphs, infix, suffix) {
    let lastWord = null;
    let line = prefix;
    let cp = continuationPrefix;

    for (let index = 0; index < paragraphs.length; index++) {
        const paragraph = paragraphs[index];
        if (index !== 0) {
            console.log(line);
            console.log(infix);
            line = continuationPrefix;
        }

        let currentParagraph = paragraph;
        if (currentParagraph[0] === "!") {
            currentParagraph = currentParagraph.substring(1);
            cp = continuationPrefix + " ".repeat(1 + currentParagraph.split(' ')[0].length);
        } else {
            cp = continuationPrefix;
        }

        for (const word of currentParagraph.split(' ')) {
            if (line.length + 1 + word.length > 80) {
                console.log(line);
                line = cp;
            }

            if (line.endsWith(".")) {
                line += "  ";
            } else {
                line += " ";
            }

            line += word;
            lastWord = word;
        }
    }

    if (suffix) {
        if (line.length + suffix.length > 80) {
            console.log(line.substring(0, line.length - lastWord.length).trimEnd());
            console.log(cp + " " + lastWord + suffix);
        } else {
            console.log(line + suffix);
        }
    } else {
        console.log(line);
    }
}

console.log("/* -*- Mode: c++; tab-width: 4; indent-tabs-mode: nil; c-basic-offset: 4; c-file-style: \"stroustrup\" -*-");
console.log(" *");
console.log(" * Copyright (C) Opera Software ASA  2002 - 2006");
console.log(" *");
console.log(" * Table of instruction names.");
console.log(" *");
console.log(" * @author build/scripts/es_instruction_h.js");
console.log(" */");
console.log();
console.log("#ifndef ES_INSTRUCTION_H");
console.log("#define ES_INSTRUCTION_H");
console.log();
console.log("/**");
console.log(" * Instruction set definition");
console.log(" * ==========================");
console.log(" *");

outputFlowed(" *", " *", documentation, " *", null);

console.log(" */");
console.log();
console.log("enum ES_Instruction");
console.log("{");

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

    if (instruction.name === "ESI_LAST_INSTRUCTION") {
        console.log("    ESI_LAST_INSTRUCTION");
    } else {
        console.log(`    ${instruction.name},`);
    }

    let docToUse;
    if (instruction.operands.length > 0) {
        docToUse = [...instruction.documentation, `!Operands: ${instruction.operands.map(op => op.toString()).join(", ")}`];
    } else {
        docToUse = instruction.documentation;
    }

    outputFlowed("    /**<", "        ", docToUse, "", " */");
}

console.log("};");
console.log();
console.log("#endif // ES_INSTRUCTION_H");