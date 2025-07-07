/* -*- Mode: c++; tab-width: 4; indent-tabs-mode: nil; c-basic-offset: 4 -*-
 *
 * Copyright (C) Opera Software ASA  1999-2024
 *
 * System includes precompiled header for Opera build.
 */

#ifndef CORE_PCH_SYSTEM_INCLUDES_H
#define CORE_PCH_SYSTEM_INCLUDES_H

#ifdef _WIN32
# define NOMINMAX
# include <windows.h>
# include <winsock2.h>
# include <ws2tcpip.h>
# include <commctrl.h>
# include <shlobj.h>
# include <shellapi.h>
# include <ole2.h>
# include <commdlg.h>
# include <wininet.h>
# include <mapi.h>
# include <mapidefs.h>
# include <mapitags.h>
# include <mapiutil.h>
# include <mapix.h>
# include <richedit.h>
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
#include <errno.h>
#include <fcntl.h>
#include <sys/stat.h>

#if defined(__APPLE__) || defined(UNIX)
#  include <sys/time.h>
#  include <unistd.h>
#  include <sys/types.h>
#  include <dirent.h>
#endif

#define ALLOW_SYSTEM_INCLUDES

#endif // CORE_PCH_SYSTEM_INCLUDES_H