const fs = require('fs');
const path = require('path');

class Instruction {
    constructor(code, name, trivial, condition, documentation, operands, implicitBoolean, alias) {
        this.code = code;
        this.name = name;
        this.trivial = trivial;
        this.condition = condition;
        this.documentation = documentation;
        this.operands = [...operands];
        this.implicitBoolean = implicitBoolean;
        this.alias = alias;
    }
}

class Operand {
    constructor(repeated, name, operandtype, valuetype) {
        this.repeated = repeated;
        this.name = name;
        this.operandtype = operandtype;
        this.valuetype = valuetype;
    }

    toString() {
        if (this.operandtype.startsWith("reg:")) {
            return `reg(${this.name})`;
        } else if (this.operandtype.startsWith("imm:")) {
            return `imm(${this.name})`;
        } else if (this.operandtype === "constant") {
            return `const(${this.name})`;
        } else if (this.operandtype === "identifier") {
            return `identifier(${this.name})`;
        } else if (this.operandtype === "classid") {
            return this.name;
        } else if (["function", "regexp"].includes(this.operandtype)) {
            return `imm(${this.name})`;
        } else {
            return "unused";
        }
    }
}

let instructions = [];
let documentation = [];

function parseInstructions() {
    // Find the instructions file
    const possiblePaths = [
        path.join(__dirname, '..', '..', 'modules', 'ecmascript', 'carakan', 'src', 'compiler', 'es_instructions.txt'),
        path.join('modules', 'ecmascript', 'carakan', 'src', 'compiler', 'es_instructions.txt'),
        path.join('carakan', 'src', 'compiler', 'es_instructions.txt'),
        path.join('src', 'compiler', 'es_instructions.txt'),
        path.join('compiler', 'es_instructions.txt'),
        'es_instructions.txt',
        path.join('..', 'compiler', 'es_instructions.txt')
    ];

    let instructionsPath = null;
    for (const possiblePath of possiblePaths) {
        if (fs.existsSync(possiblePath)) {
            instructionsPath = possiblePath;
            break;
        }
    }

    if (!instructionsPath) {
        console.error("Cannot find es_instructions.txt file!");
        process.exit(1);
    }

    const lines = fs.readFileSync(instructionsPath, 'utf-8').split('\n');
    let name = null;
    let trivial = false;
    let condition = null;
    let doc = [[]];
    let operands = [];
    let implicitBoolean = false;
    let alias = null;

    for (let line of lines) {
        // Skip comments
        if (line.trim().startsWith('#')) continue;

        // Instruction name
        const instructionMatch = line.trim().match(/^(ESI_[A-Z0-9_]+)\s*(<trivial>\s*)?(?:\[(alias|ifdef)\s+(.+)\])?\s*$/);
        if (instructionMatch) {
            if (name !== null) {
                instructions.push(new Instruction(
                    instructions.length,
                    name,
                    trivial,
                    condition,
                    doc.filter(d => d.length > 0).map(d => d.join(' ')),
                    operands,
                    implicitBoolean,
                    alias
                ));
            }

            name = instructionMatch[1];
            trivial = !!instructionMatch[2];
            if (instructionMatch[3] === "ifdef") {
                condition = "ifdef " + instructionMatch[4];
            } else {
                condition = null;
            }
            doc = [[]];
            operands = [];
            implicitBoolean = false;
            if (instructionMatch[3] === "alias") {
                alias = instructionMatch[4];
            } else {
                alias = null;
            }
            continue;
        }

        if (name === null) {
            if (line.trim() === '') continue;
            console.error("Parse error!");
            process.exit(1);
        }

        if (line.trim() === '') {
            if (doc[doc.length - 1].length > 0) {
                doc.push([]);
            }
            continue;
        }

        // Documentation
        if (line !== line.trimLeft()) {
            doc[doc.length - 1].push(line.trim());
            continue;
        }

        let repeated = false;
        if (line.startsWith('*')) {
            line = line.substring(1);
            repeated = true;
        }

        // Register operand
        const regMatch = line.trim().match(/^([A-Za-z]+):\s+(reg:(?:in|out|in:out|out:optional|-))(?:\s+<(null|undefined|boolean|number|int32|uint32|double|string|object|property|primitive)>)?$/);
        if (regMatch) {
            operands.push(new Operand(repeated, regMatch[1], regMatch[2], regMatch[3]));
            continue;
        }

        // Immediate operand
        const immMatch = line.trim().match(/^([A-Za-z]+):\s+(imm:(?:signed|unsigned|offset|cache:property|cache:global))$/);
        if (immMatch) {
            operands.push(new Operand(repeated, immMatch[1], immMatch[2]));
            continue;
        }

        // Others
        const otherMatch = line.trim().match(/^([A-Za-z]+):\s+(identifier|string|double|regexp|function|classid)$/);
        if (otherMatch) {
            operands.push(new Operand(repeated, otherMatch[1], otherMatch[2]));
            continue;
        }

        // Unused
        if (line.trim().match(/^unused:\s+unused$/)) {
            operands.push(new Operand(repeated, "unused", "unused"));
            continue;
        }

        if (line.trim() === "=> implicit boolean register") {
            implicitBoolean = true;
            continue;
        }

        console.error(`Unrecognized line: ${line}`);
        process.exit(1);
    }

    if (name !== null) {
        instructions.push(new Instruction(
            instructions.length,
            name,
            trivial,
            condition,
            doc.filter(d => d.length > 0).map(d => d.join(' ')),
            operands,
            implicitBoolean,
            alias
        ));
    }

    // Parse documentation
    const docPath = instructionsPath.replace('s.txt', '_set.txt');
    if (fs.existsSync(docPath)) {
        const docLines = fs.readFileSync(docPath, 'utf-8').split('\n');
        documentation = [[]];

        for (const line of docLines) {
            if (line.trim()) {
                documentation[documentation.length - 1].push(line.trim());
            } else if (documentation[documentation.length - 1].length > 0) {
                documentation.push([]);
            }
        }

        documentation = documentation.filter(d => d.length > 0).map(d => d.join(' '));
    }
}

// Initialize
parseInstructions();

module.exports = {
    instructions,
    documentation,
    Instruction,
    Operand
};

if (require.main === module) {
    console.log(`Parsed ${instructions.length} instructions:`);
    
    for (const instruction of instructions) {
        const condition = instruction.condition ? ` [${instruction.condition}]` : '';
        console.log(`${instruction.name}${condition}`);
        console.log(`  ${JSON.stringify(instruction.documentation)}`);
        
        for (const operand of instruction.operands) {
            const extra = operand.valuetype ? ` <${operand.valuetype}>` : '';
            console.log(`  ${operand.name}: ${operand.operandtype}${extra}`);
        }
    }
}