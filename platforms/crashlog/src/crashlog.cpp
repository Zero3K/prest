/* -*- Mode: c++; tab-width: 4; indent-tabs-mode: nil; c-basic-offset: 4 -*-
 *
 * Copyright (C) Opera Software ASA  1999-2024
 *
 * Opera Crashlog Implementation
 */

#include "core/pch.h"

#ifdef _WIN32
#include "crashlog_windows.cpp"
#elif defined(__linux__)
#include "platforms/crashlog/src/crashlog_linux64.cpp"
#elif defined(__APPLE__)
#include "platforms/crashlog/src/crashlog_mac32.cpp"
#elif defined(__FreeBSD__)
#include "platforms/crashlog/src/crashlog_freebsd64.cpp"
#endif

#include "platforms/crashlog/src/gpu_info.cpp"

// This file serves as the main entry point for the Opera crashlog component
// It includes the appropriate platform-specific crashlog implementation