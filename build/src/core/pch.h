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
# include <windows.h>
// Undefine some name clashes
# undef Yield
# undef NO_ERROR
# undef REG_NONE
#endif

#include <assert.h>
#include <limits.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <float.h>
#include <time.h>
#include <stddef.h>
#include <stdarg.h>
#include <math.h>
#include <string.h>

#if defined(__APPLE__) || defined(UNIX)
#  include <sys/time.h>
#endif

#ifdef _WIN32
typedef wchar_t uni_char;
#else
typedef unsigned short uni_char;
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

typedef int OP_STATUS;
typedef int OP_BOOLEAN;
typedef int BOOL;

#ifndef TRUE
#  define TRUE 1
#endif
#ifndef FALSE
#  define FALSE 0
#endif

#ifndef _WIN32
// Define our own types for non-Windows platforms
typedef unsigned int UINT32;
typedef unsigned short UINT16;
typedef unsigned char UINT8;
typedef int INT32;
typedef short INT16;
typedef char INT8;
#else
// On Windows, the types UINT32, INT32, etc. are already defined in windows.h
// We don't need to redefine them, just include the necessary headers
#include <basetsd.h>
// Windows already defines UINT32, INT32, UINT16, INT16, UINT8, INT8
// No need to redefine them
#endif

#ifdef _WIN64
typedef __int64 INTPTR;
typedef unsigned __int64 UINTPTR;
#else
typedef int INTPTR;
typedef unsigned int UINTPTR;
#endif

#define MIN(a,b) ((a) < (b) ? (a) : (b))
#define MAX(a,b) ((a) > (b) ? (a) : (b))

#ifndef OP_DELETE
#define OP_DELETE(ptr) delete ptr
#endif

#ifndef OP_DELETEA
#define OP_DELETEA(ptr) delete[] ptr
#endif

#include <new>

#undef OP_NEW
#define OP_NEW(obj, args) new (std::nothrow) obj args

#undef OP_NEWA
#define OP_NEWA(obj, count) new (std::nothrow) obj[count]

#ifdef DEBUG
#define OP_ASSERT(expr) assert(expr)
#else
#define OP_ASSERT(expr) ((void)0)
#endif

class OpStatus
{
public:
    enum {
        IS_TRUE=2,
        IS_FALSE=1,
        OK=0,
        ERR=-1,
        ERR_NO_MEMORY=-2,
        ERR_NOT_SUPPORTED=-3,
        ERR_NULL_POINTER=-4,
        ERR_FILE_NOT_FOUND=-7,
        USER_ERROR=-4000
    };
    static void Ignore(int e) {}
    static BOOL IsError(int e) { return e < 0; }
    static BOOL IsSuccess(int e) { return e >= 0; }
    static BOOL IsMemoryError(int e) { return e == ERR_NO_MEMORY; }
};

#ifdef _WIN32
# define UNI_L(x)  L ## x
#else
# define UNI_L(x)  (const uni_char*)x
#endif

// Opera-specific functions
size_t op_strlen(const char* str);
size_t uni_strlen(const uni_char* str);
int uni_strcmp(const uni_char* str1, const uni_char* str2);
uni_char* uni_strcpy(uni_char* dest, const uni_char* src);
uni_char* uni_strcat(uni_char* dest, const uni_char* src);
uni_char* uni_strncpy(uni_char* dest, const uni_char* src, size_t n);
const uni_char* uni_strrchr(const uni_char* str, uni_char c);

// For operaversion.cpp compatibility
#define u_strlen(s) uni_strlen(s)
#define u_strcpy(d, s) uni_strcpy(d, s)
#define u_strcat(d, s) uni_strcat(d, s)
OP_STATUS u_uint32_to_str(uni_char* buffer, size_t size, UINT32 value);

// Missing op_* functions
size_t op_strlen(const char* str);
char* op_strcpy(char* dest, const char* src);
void* op_memcpy(void* dest, const void* src, size_t n);

// ARRAY_SIZE macro
#ifndef ARRAY_SIZE
#define ARRAY_SIZE(a) (sizeof(a) / sizeof((a)[0]))
#endif

// op_swap template function
template <typename T>
inline void op_swap(T& x, T& y)
{
    T tmp(x);
    x = y;
    y = tmp;
}

// Error handling macros
#define RETURN_VALUE_IF_ERROR(expr, val) \
    do { \
        OP_STATUS RETURN_IF_ERROR_TMP = expr; \
        if (OpStatus::IsError(RETURN_IF_ERROR_TMP)) \
            return val; \
    } while (0)

#define RETURN_IF_ERROR(expr) \
    do { \
        OP_STATUS RETURN_IF_ERROR_TMP = expr; \
        if (OpStatus::IsError(RETURN_IF_ERROR_TMP)) \
            return RETURN_IF_ERROR_TMP; \
    } while (0)

#endif // CORE_PCH_H