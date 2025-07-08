#include "../src/core/pch.h"

// Test that various Opera types and functions work
void test_opera_types() {
    // OpString functionality
    OpString test_string;
    test_string.Set("Hello World");
    const uni_char* str = test_string.CStr();
    
    // OpAutoPtr functionality
    OpAutoPtr<int> ptr(new int(42));
    int value = *ptr;
    
    // Status handling
    OP_STATUS status = OpStatus::OK;
    if (OpStatus::IsSuccess(status)) {
        // Success case
    }
    
    // Unicode string operations
    uni_char buffer[256];
    uni_strcpy(buffer, UNI_L("Test"));
    size_t len = uni_strlen(buffer);
    
    // Error handling macros
    RETURN_VOID_IF_ERROR(OpStatus::OK);
    
    // Assertions and debugging
    OP_ASSERT(len > 0);
    
    // Hash tables
    OpStringHashTable<uni_char> hash_table;
    
    // Vector operations  
    OpINT32Vector int_vector;
    int_vector.Add(123);
}

// Test compatibility with Visual Studio 2019 types
void test_compatibility() {
    UINT32 uint_val = 123;
    INT32 int_val = -456;
    BOOL bool_val = TRUE;
    
    // Test pointer conversions
    void* ptr = INT_TO_PTR(int_val);
    int back = PTR_TO_INT(ptr);
    
    // Test array size
    int arr[10];
    size_t size = ARRAY_SIZE(arr);
}

int main() {
    test_opera_types();
    test_compatibility();
    return 0;
}