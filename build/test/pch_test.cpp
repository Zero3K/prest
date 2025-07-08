#include "../src/core/pch.h"

// Simple test to verify headers work
OpString test_string;
OpAutoPtr<int> test_ptr;

int main() {
    test_string.Set("Hello");
    test_ptr.reset(new int(42));
    return 0;
}