# CrashRpt.CPP Integration for Opera

This directory contains the CrashRpt.CPP library integration for Opera crash reporting, replacing the custom Opera crash handling system.

## Overview

The CrashRpt.CPP library provides robust crash reporting functionality with:
- Automatic crash detection and minidump generation
- Built-in crash reporting dialog (replaces Opera's custom dialog)
- Crash report submission to Doctor Dump service
- Support for additional file attachments and custom metadata

## Files

- `include/CrashRpt.h` - Main CrashRpt.CPP header file
- `bin/crashrpt.dll` - 32-bit CrashRpt library
- `bin/x64/crashrpt.dll` - 64-bit CrashRpt library  
- `bin/sendrpt.exe` - Crash report sender application (32-bit)
- `bin/x64/sendrpt.exe` - Crash report sender application (64-bit)
- `bin/dbghelp.dll` - Debug help library (32-bit)
- `bin/x64/dbghelp.dll` - Debug help library (64-bit)

## Installation

The CrashRpt binaries should be deployed alongside the Opera executable:

1. Copy `crashrpt.dll`, `sendrpt.exe`, and `dbghelp.dll` to the Opera installation directory
2. For 64-bit builds, use the x64 versions of the binaries
3. Ensure the DLLs are in the same directory as the Opera executable or in the system PATH

## Integration

The integration is handled automatically through:

- `OperaCrashRptWrapper` class in `platforms/crashlog/src/crashrpt_wrapper.*`
- `OperaCrashRptIntegration` class in `adjunct/desktop_util/crash/crashrpt_integration.*`
- Modified crash handling in `desktop_starter.cpp` and `plugin_wrapper.cpp`

## Configuration

The crash reporting is configured with Opera-specific settings:
- Application GUID: `af5a2149-d748-492b-a2ee-a16e7298d18b`
- Application Name: "Opera" or "Opera Plugin Wrapper"
- Company: "Opera Software ASA"
- Automatic crash information collection including Opera version, build number, and GPU info

## Fallback

If CrashRpt.CPP is not available or fails to initialize, the system falls back to Opera's original crash handling system for compatibility.

## Source

CrashRpt.CPP library files obtained from: https://github.com/Zero3K/CopilotStorage/tree/main/DoctorDumpSDK