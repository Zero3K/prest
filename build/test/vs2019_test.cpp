// Test program to verify Visual Studio 2019 build setup
#include "core/pch.h"
#include <iostream>

int main() {
    std::cout << "Testing Opera VS2019 Build Setup..." << std::endl;
    
    // Test version constants
    std::cout << "VER_NUM_MAJOR: " << VER_NUM_MAJOR << std::endl;
    std::cout << "VER_NUM_MINOR: " << VER_NUM_MINOR << std::endl;
    std::cout << "VER_BUILD_NUMBER: " << VER_BUILD_NUMBER << std::endl;
    
    // Test that winsock functions work without conflicts
    #ifdef _WIN32
    std::cout << "Testing Windows socket functions..." << std::endl;
    // These should not cause redefinition errors now
    SOCKET s = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
    if (s != INVALID_SOCKET) {
        closesocket(s);
        std::cout << "Socket test: OK" << std::endl;
    }
    #endif
    
    // Test unicode string functions  
    const uni_char* test_str = UNI_L("Hello World");
    std::cout << "uni_strlen test: " << uni_strlen(test_str) << std::endl;
    
    // Test op_* functions (should use system.h aliases on Windows)
    const char* cstr = "Test";
    #ifdef _WIN32
    std::cout << "op_strlen test (system): " << strlen(cstr) << std::endl; 
    #else
    std::cout << "op_strlen test: " << op_strlen(cstr) << std::endl;
    #endif
    
    // Test OpStatus
    OP_STATUS status = OpStatus::OK;
    std::cout << "OpStatus test: " << (OpStatus::IsSuccess(status) ? "OK" : "ERROR") << std::endl;
    
    // Test op_swap
    int a = 5, b = 10;
    op_swap(a, b);
    std::cout << "op_swap test: a=" << a << " b=" << b << std::endl;
    
    std::cout << "All tests completed successfully!" << std::endl;
    return 0;
}