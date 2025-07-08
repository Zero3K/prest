#define _CRT_SECURE_NO_WARNINGS

// Test file to verify Visual Studio 2019 compilation compatibility
// Tests core headers and Opera-specific functions

#include "../../src/core/pch.h"
#include "../../platforms/windows/system.h"
#include "../../modules/hardcore/base/opstatus.h"

// Test function to verify no macro redefinition issues
void test_macros() {
    // Test UNI_L macro (should be defined in system.h only)
    const uni_char* test_str = UNI_L("test");
    
    // Test MIN/MAX macros (should be defined in system.h only)
    int a = 5, b = 10;
    int min_val = MIN(a, b);
    int max_val = MAX(a, b);
    
    // Test EXCEPTION_CONTINUE_EXECUTION (should be defined in system.h only)
    int exception_val = EXCEPTION_CONTINUE_EXECUTION;
}

// Test function to verify Opera-specific functions are available
void test_opera_functions() {
    // These functions should be available
    size_t len = op_strlen("test");
    
    char buffer[100];
    op_strcpy(buffer, "hello");
    
    char source[] = "world";
    op_memcpy(buffer, source, 5);
}

// Test function to verify unicode functions work
void test_unicode_functions() {
    uni_char buffer[100];
    uni_char source[] = UNI_L("hello");
    
    size_t len = uni_strlen(source);
    uni_strcpy(buffer, source);
    uni_strcat(buffer, UNI_L(" world"));
}

// Test function to verify OpStatus works
void test_opstatus() {
    OpStatus status = OpStatus::OK;
    
    if (OpStatus::IsError(status)) {
        status = OpStatus::ERR;
    }
}

// Test VEGA3dDevice forward declaration doesn't cause syntax errors
#include "../../platforms/crashlog/gpu_info.h"

void test_gpu_info() {
    // This should compile without syntax errors
    // VEGA3dDevice* device = nullptr;
    // FillGpuInfo(device);
}

int main() {
    test_macros();
    test_opera_functions();
    test_unicode_functions();
    test_opstatus();
    test_gpu_info();
    return 0;
}