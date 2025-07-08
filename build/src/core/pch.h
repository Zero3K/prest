/* -*- Mode: c++; tab-width: 4; indent-tabs-mode: nil; c-basic-offset: 4 -*-
 *
 * Copyright (C) Opera Software ASA  1999-2024
 *
 * Main precompiled header for Opera build.
 */

#ifndef CORE_PCH_H
#define CORE_PCH_H

#ifdef _WIN32
# define NOMINMAX
# ifndef _CRT_SECURE_NO_WARNINGS
#  define _CRT_SECURE_NO_WARNINGS
# endif
// Include platform-specific system headers first - this handles windows.h properly
# include "platforms/windows/system.h"
#endif

#include <assert.h>
#include <limits.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <time.h>
#include <stddef.h>
#include <stdarg.h>
#include <string.h>
#include <wchar.h>  // For wcslen, wcscpy, wcsrchr, etc.
#include <setjmp.h>  // For jmp_buf (used by excepts.h)
#include <new>  // For std::nothrow

#if defined(__APPLE__) || defined(UNIX)
#  include <sys/time.h>
#endif

// Define basic types and macros first (needed before including Opera headers)
#ifdef _WIN32
typedef wchar_t uni_char;
typedef int BOOL;
#define TRUE 1
#define FALSE 0
#ifndef UNI_L
#define UNI_L(s) L ## s
#endif
// Define Windows integer types
typedef unsigned int UINT32;
typedef unsigned short UINT16;
typedef unsigned char UINT8;
typedef int INT32;
typedef short INT16;
typedef char INT8;
#ifdef _WIN64
typedef __int64 INTPTR;
typedef unsigned __int64 UINTPTR;
#else
typedef int INTPTR;
typedef unsigned int UINTPTR;
#endif

#else
typedef unsigned short uni_char;
typedef int BOOL;
#define TRUE 1
#define FALSE 0
#ifndef UNI_L
#define UNI_L(s) ((const uni_char*)_make_uni_string(s))
#endif

// Platform-specific utility macros that need to be defined early
#ifndef op_force_inline
#ifdef _MSC_VER
#define op_force_inline __forceinline
#elif defined(__GNUC__)
#define op_force_inline inline __attribute__((always_inline))
#else
#define op_force_inline inline
#endif
#endif

// Define MIN/MAX macros early (needed by Opera headers)
#ifndef MIN
#define MIN(a, b) ((a) < (b) ? (a) : (b))
#endif
#ifndef MAX
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#endif



#ifndef OP_NEWA
#define OP_NEWA(obj, count) new (std::nothrow) obj[count]
#endif
#ifndef UNICODE_SIZE
#define UNICODE_SIZE(num_chars) ((num_chars) * sizeof(uni_char))
#endif
#ifndef UNICODE_DOWNSIZE
#define UNICODE_DOWNSIZE(num_bytes) ((num_bytes) / sizeof(uni_char))
#endif

// Memory operation functions
#ifndef op_free
#define op_free(ptr) free(ptr)
#endif
#ifndef op_memcpy
#define op_memcpy(dest, src, size) memcpy(dest, src, size)
#endif
// For non-Windows, create a simple string literal conversion
inline const uni_char* _make_uni_string(const char* str) {
    static uni_char buf[1024];
    for (int i = 0; i < 1023 && str[i]; i++) {
        buf[i] = (uni_char)str[i];
    }
    buf[1023] = 0;
    return buf;
}
// Define our own types for non-Windows platforms
typedef unsigned int UINT32;
typedef unsigned short UINT16;
typedef unsigned char UINT8;
typedef int INT32;
typedef short INT16;
typedef char INT8;
typedef long INTPTR;
typedef unsigned long UINTPTR;

#endif

// Basic Opera types
typedef int OP_STATUS;

// Opera status constants
#define OpStatus_OK 0
#define OpStatus_ERR_NO_MEMORY -1
#define OpStatus_ERR_NULL_POINTER -2

// Opera status class stub
class OpStatus
{
public:
    static const OP_STATUS OK = OpStatus_OK;
    static const OP_STATUS ERR_NO_MEMORY = OpStatus_ERR_NO_MEMORY;
    static const OP_STATUS ERR_NULL_POINTER = OpStatus_ERR_NULL_POINTER;
    
    static inline int IsError(OP_STATUS e) { return e < 0; }
    static inline int IsSuccess(OP_STATUS e) { return e >= 0; }
    static inline int IsMemoryError(OP_STATUS e) { return e == ERR_NO_MEMORY; }
};

// Include Opera exception handling macros (after OpStatus definition)
#include "modules/util/excepts.h"

// Basic string functions
inline size_t op_strlen(const char* str) { 
    return str ? strlen(str) : 0; 
}

// Unicode string functions
inline size_t uni_strlen(const uni_char* str) {
    if (!str) return 0;
#ifdef _WIN32
    return wcslen(str);
#else
    size_t len = 0;
    while (str[len]) len++;
    return len;
#endif
}

inline int uni_strcmp(const uni_char* str1, const uni_char* str2) {
    if (!str1 && !str2) return 0;
    if (!str1) return -1;
    if (!str2) return 1;
#ifdef _WIN32
    return wcscmp(str1, str2);
#else
    while (*str1 && *str1 == *str2) {
        str1++;
        str2++;
    }
    return *str1 - *str2;
#endif
}

inline uni_char* uni_strcpy(uni_char* dest, const uni_char* src) {
    if (!dest || !src) return dest;
#ifdef _WIN32
    return wcscpy(dest, src);
#else
    uni_char* d = dest;
    while ((*d++ = *src++));
    return dest;
#endif
}

inline uni_char* uni_strcat(uni_char* dest, const uni_char* src) {
    if (!dest || !src) return dest;
#ifdef _WIN32
    return wcscat(dest, src);
#else
    uni_char* d = dest;
    while (*d) d++;
    while ((*d++ = *src++));
    return dest;
#endif
}

inline uni_char* uni_strncpy(uni_char* dest, const uni_char* src, size_t n) {
    if (!dest || !src) return dest;
#ifdef _WIN32
    return wcsncpy(dest, src, n);
#else
    uni_char* d = dest;
    while (n-- && (*d++ = *src++));
    while (n-- > 0) *d++ = 0;
    return dest;
#endif
}

inline const uni_char* uni_strrchr(const uni_char* str, uni_char c) {
    if (!str) return NULL;
#ifdef _WIN32
    return wcsrchr(str, c);
#else
    const uni_char* last = NULL;
    while (*str) {
        if (*str == c) last = str;
        str++;
    }
    return last;
#endif
}

// Opera utility functions
inline OP_STATUS UniSetStr(uni_char*& dest, const uni_char* src) {
    if (dest) {
        delete[] dest;
        dest = NULL;
    }
    if (src) {
        size_t len = uni_strlen(src);
        dest = new uni_char[len + 1];
        if (!dest) return OpStatus::ERR_NO_MEMORY;
        uni_strcpy(dest, src);
    }
    return OpStatus::OK;
}

// Opera macro definitions  
#ifndef DEPRECATED
#ifdef _MSC_VER
#define DEPRECATED(func) __declspec(deprecated) func
#else
#define DEPRECATED(func) func __attribute__((deprecated))
#endif
#endif
#ifndef OP_STATIC_ASSERT
#define OP_STATIC_ASSERT(expr) static_assert(expr, #expr)
#endif
#ifndef INT_TO_PTR
#define INT_TO_PTR(i) ((void*)(INTPTR)(i))
#endif
#ifndef PTR_TO_INT
#define PTR_TO_INT(p) ((int)(INTPTR)(p))
#endif
#ifndef PTR_TO_INTEGRAL
#define PTR_TO_INTEGRAL(type, p) ((type)(INTPTR)(p))
#endif

// Opera debugging and utility macros (must be defined before including headers)
#ifndef OP_ASSERT
#define OP_ASSERT(expr) assert(expr)
#endif
#ifndef OP_DELETE
#define OP_DELETE(ptr) delete ptr
#endif
#ifndef OP_DELETEA
#define OP_DELETEA(ptr) delete[] ptr
#endif

// Include Opera utility classes - dependencies first, then full OpString with UTF8 support
#include "modules/util/opswap.h"
#include "modules/opdata/OpData.h"
#include "modules/opdata/UniString.h"
#include "modules/util/opstring.h"
#include "modules/util/adt/opvector.h"
#include "modules/util/OpHashTable.h"

// Enable VEGA support for GPU info functionality
#ifndef VEGA_SUPPORT
#define VEGA_SUPPORT
#endif
#ifndef VEGA_BACKENDS_USE_BLOCKLIST
#define VEGA_BACKENDS_USE_BLOCKLIST
#endif

// Include VEGA 3D device headers for GPU info support
#ifdef VEGA_SUPPORT
#include "modules/libvega/vega3ddevice.h"
#ifdef VEGA_BACKENDS_USE_BLOCKLIST
#include "platforms/vega_backends/vega_blocklist_device.h"
#endif
#endif

// Forward declare VEGA3dDevice for compatibility when VEGA_SUPPORT is not defined
#ifndef VEGA_SUPPORT
class VEGA3dDevice;
#endif

// Opera version constants (for compatibility)
#ifndef VER_NUM_MAJOR
#define VER_NUM_MAJOR 12
#endif
#ifndef VER_NUM_MINOR
#define VER_NUM_MINOR 18
#endif
#ifndef VER_NUM_STR
#define VER_NUM_STR "12.18"
#endif
#ifndef VER_BUILD_NUMBER
#define VER_BUILD_NUMBER 2480
#endif
#ifndef VER_BUILD_NUMBER_STR
#define VER_BUILD_NUMBER_STR "2480"
#endif

// Opera constants
#ifndef NEWLINE
#define NEWLINE "\n"
#endif

// Opera debugging macros (already defined above)
#ifndef OP_DELETEA
#define OP_DELETEA(ptr) delete[] ptr
#endif

// Opera error handling macros (simplified versions)
#ifndef RETURN_VOID_IF_ERROR
#define RETURN_VOID_IF_ERROR(expr) \
   do { OP_STATUS RETURN_IF_ERROR_TMP = expr; \
        if (OpStatus::IsError(RETURN_IF_ERROR_TMP)) { \
            return; \
        } \
   } while(0)
#endif

typedef int OP_BOOLEAN;


#ifndef OP_DELETE
#define OP_DELETE(ptr) delete ptr
#endif

#ifndef OP_DELETEA
#define OP_DELETEA(ptr) delete[] ptr
#endif

#include <new>

#undef OP_NEW
#define OP_NEW(obj, args) new (std::nothrow) obj args

// OpStatus constants for compatibility
#ifndef OP_STATUS_OK
#define OP_STATUS_OK 0
#define OP_STATUS_ERR -1
#define OP_STATUS_ERR_NO_MEMORY -2
#define OP_STATUS_ERR_NOT_SUPPORTED -3
#define OP_STATUS_ERR_NULL_POINTER -4
#define OP_STATUS_ERR_FILE_NOT_FOUND -7
#define OP_STATUS_USER_ERROR -4000
#define OP_STATUS_IS_FALSE 1
#define OP_STATUS_IS_TRUE 2
#endif



// For operaversion.cpp compatibility
#define u_strlen(s) uni_strlen(s)
#define u_strcpy(d, s) uni_strcpy(d, s)
#define u_strcat(d, s) uni_strcat(d, s)

// Opera-specific functions (only for non-Windows platforms)
#ifndef _WIN32
inline char* op_strcpy(char* dest, const char* src) {
    return strcpy(dest, src);
}

inline void* op_memcpy(void* dest, const void* src, size_t n) {
    return memcpy(dest, src, n);
}
#endif

// ARRAY_SIZE macro
#ifndef ARRAY_SIZE
#define ARRAY_SIZE(a) (sizeof(a) / sizeof((a)[0]))
#endif

// Error handling macros
#define RETURN_VALUE_IF_ERROR(expr, val) \
    do { \
        OP_STATUS RETURN_IF_ERROR_TMP = expr; \
        if (OpStatus::IsError(RETURN_IF_ERROR_TMP)) \
            return val; \
    } while (0)

#endif // CORE_PCH_H