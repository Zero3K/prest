/* -*- Mode: c++; tab-width: 4; indent-tabs-mode: nil; c-basic-offset: 4 -*-
 *
 * Copyright (C) Opera Software ASA  1999-2024
 *
 * Opera MAPI Implementation main module
 */

#include "core/pch.h"

#ifdef _WIN32
#include "platforms/windows/mapi/OperaMapiImpl.cpp"
#include "platforms/windows/mapi/OperaMapiUtils.cpp"
#include "platforms/windows/mapi/WindowsDesktopMailClientUtils.cpp"
#endif

// This file serves as the main entry point for the Opera MAPI component
// It includes all the necessary MAPI implementation files