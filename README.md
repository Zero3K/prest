# Presto Web rendering engine: Opera 12.15

This repository contains the Presto rendering engine, used up to Opera 12.

## Modern Node.js Build System

This repository has been updated with a modern Node.js-based build system that eliminates external dependencies on Python, Perl, Pike, 7-zip, and vsyasm.

### Quick Start

```bash
# Install dependencies
npm install

# Build the project
npm run build

# Run tests
npm test
```

For detailed build system documentation, see [BUILD_README.md](BUILD_README.md).

### Requirements

- Node.js 14.0.0 or higher
- npm or yarn

No other external tools are required!

## Original Build System

The original build system required:
- Python 2.7
- Perl
- Pike programming language
- 7-zip
- vsyasm (for assembly compilation)

These dependencies have been completely eliminated in favor of pure Node.js solutions.

.-Peace out
