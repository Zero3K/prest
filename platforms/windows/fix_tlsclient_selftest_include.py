#!/usr/bin/env python
"""
Script to fix the include in selftest_jumbo_tlsclient.cpp for Visual Studio 2010 compatibility.
This script replaces '#include "core/pch_jumbo.h"' with '#include "core/pch.h"' in the generated file.
"""

import os
import sys

def fix_tlsclient_selftest_include():
    """Fix the include in selftest_jumbo_tlsclient.cpp"""
    # Path to the generated selftest file
    selftest_file = os.path.join(os.path.dirname(__file__), "..", "..", "build", "src", "modules", "selftest", "generated", "selftest_jumbo_tlsclient.cpp")
    
    # Check if file exists
    if not os.path.exists(selftest_file):
        print("selftest_jumbo_tlsclient.cpp not found, skipping fix")
        return 0
    
    try:
        # Read the file
        with open(selftest_file, 'r', encoding='utf-8') as f:
            content = f.read()
        
        # Replace the include
        old_include = '#include "core/pch_jumbo.h"'
        new_include = '#include "core/pch.h"'
        
        if old_include in content:
            content = content.replace(old_include, new_include)
            
            # Write back the file
            with open(selftest_file, 'w', encoding='utf-8') as f:
                f.write(content)
            
            print("Fixed include in selftest_jumbo_tlsclient.cpp: pch_jumbo.h -> pch.h")
        else:
            print("selftest_jumbo_tlsclient.cpp already has correct include or doesn't need fixing")
        
        return 0
        
    except Exception as e:
        print(f"Error fixing selftest_jumbo_tlsclient.cpp: {e}")
        return 1

if __name__ == "__main__":
    sys.exit(fix_tlsclient_selftest_include())