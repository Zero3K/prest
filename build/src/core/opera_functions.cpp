/* -*- Mode: c++; tab-width: 4; indent-tabs-mode: nil; c-basic-offset: 4 -*-
 *
 * Copyright (C) Opera Software ASA  1999-2024
 *
 * Implementation of Opera-specific functions for the build system.
 */

#ifdef _WIN32
// Suppress deprecation warnings for unsafe functions in this file
#define _CRT_SECURE_NO_WARNINGS
#endif

#include "core/pch.h"
#include <stdio.h>
#include <string.h>

// op_* function implementations for compatibility (only for non-Windows platforms)
#ifndef _WIN32
// Opera string length function
size_t op_strlen(const char* str)
{
    return str ? strlen(str) : 0;
}

char* op_strcpy(char* dest, const char* src)
{
    return strcpy(dest, src);
}

void* op_memcpy(void* dest, const void* src, size_t n)
{
    return memcpy(dest, src, n);
}
#endif

// Unicode string functions (needed for all platforms)
size_t uni_strlen(const uni_char* str)
{
    if (!str) return 0;
    
#ifdef _WIN32
    return wcslen(str);
#else
    const uni_char* s = str;
    while (*s) s++;
    return s - str;
#endif
}

int uni_strcmp(const uni_char* str1, const uni_char* str2)
{
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

uni_char* uni_strcpy(uni_char* dest, const uni_char* src)
{
    if (!dest || !src) return dest;
    
#ifdef _WIN32
    return wcscpy(dest, src);
#else
    uni_char* d = dest;
    while ((*d++ = *src++));
    return dest;
#endif
}

uni_char* uni_strcat(uni_char* dest, const uni_char* src)
{
    if (!dest || !src) return dest;
    
#ifdef _WIN32
    return wcscat(dest, src);
#else
    uni_char* d = dest;
    while (*d) d++;  // Find end of dest
    while ((*d++ = *src++));  // Append src
    return dest;
#endif
}

uni_char* uni_strncpy(uni_char* dest, const uni_char* src, size_t n)
{
    if (!dest || !src) return dest;
    
#ifdef _WIN32
    return wcsncpy(dest, src, n);
#else
    uni_char* d = dest;
    size_t i;
    for (i = 0; i < n && src[i]; i++) {
        d[i] = src[i];
    }
    for (; i < n; i++) {
        d[i] = 0;
    }
    return dest;
#endif
}

const uni_char* uni_strrchr(const uni_char* str, uni_char c)
{
    if (!str) return NULL;
    
#ifdef _WIN32
    return wcsrchr(str, c);
#else
    const uni_char* last = NULL;
    while (*str) {
        if (*str == c) {
            last = str;
        }
        str++;
    }
    return last;
#endif
}

// Convert UINT32 to unicode string
OP_STATUS u_uint32_to_str(uni_char* buffer, size_t size, UINT32 value)
{
    if (!buffer || size == 0) {
        return OpStatus::ERR_NULL_POINTER;
    }
    
    // Convert to regular string first
    char temp[32];
    sprintf(temp, "%u", value);
    
    // Convert to unicode
    size_t len = strlen(temp);
    if (len >= size) {
        return OpStatus::ERR_NO_MEMORY;
    }
    
    for (size_t i = 0; i <= len; i++) {
        buffer[i] = (uni_char)temp[i];
    }
    
    return OpStatus::OK;
}