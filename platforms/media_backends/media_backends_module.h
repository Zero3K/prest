/* -*- Mode: c++; tab-width: 4; indent-tabs-mode: t; c-basic-offset: 4; c-file-style: "stroustrup" -*-
 *
 * Copyright (C) 2009-2011 Opera Software ASA.  All rights reserved.
 *
 * This file is part of the Opera web browser.
 * It may not be distributed under any circumstances.
 */

#ifndef MEDIA_BACKENDS_MODULE_H
#define MEDIA_BACKENDS_MODULE_H

#if defined(MEDIA_BACKEND_GSTREAMER) || defined(MEDIA_BACKEND_FFMPEG)

#include "modules/hardcore/opera/module.h"

class OpDLL;

#ifdef MEDIA_BACKEND_GSTREAMER
class GstThreadManager;
class GstPluginManager;
#endif

#ifdef MEDIA_BACKEND_FFMPEG
class FFmpegThreadManager;
#endif

class MediaBackendsModule : public OperaModule
{
public:
    MediaBackendsModule();

    void InitL(const OperaInitInfo& info);
    void Destroy();

#ifdef MEDIA_BACKEND_GSTREAMER
	GstThreadManager *thread_manager;

#ifdef MEDIA_BACKEND_GSTREAMER_USE_OPDLL

	// created by GstMediaManager, held here for cleanup
#ifdef MEDIA_BACKEND_GSTREAMER_BUNDLE_LIBS
	// Single GStreamer DLL
	OpDLL *dll_LibGStreamer;
#else // ! MEDIA_BACKEND_GSTREAMER_BUNDLE_LIBS
	// Use system GStreamer (UNIX)
	OpDLL *dll_LibGLib;
	OpDLL *dll_LibGObject;
	OpDLL *dll_LibGModule;
	OpDLL *dll_LibGStreamer;
	OpDLL *dll_LibGstBase;
	OpDLL *dll_LibGstVideo;
	OpDLL *dll_LibGstRiff;
#endif //  MEDIA_BACKEND_GSTREAMER_BUNDLE_LIBS
#endif // MEDIA_BACKEND_GSTREAMER_USE_OPDLL
#endif // MEDIA_BACKEND_GSTREAMER

#ifdef MEDIA_BACKEND_FFMPEG
	FFmpegThreadManager *ffmpeg_thread_manager;
#endif // MEDIA_BACKEND_FFMPEG
};

#ifdef MEDIA_BACKEND_GSTREAMER
#define g_gst_thread_manager (g_opera->media_backends_module.thread_manager)
#endif

#ifdef MEDIA_BACKEND_FFMPEG
#define g_ffmpeg_thread_manager (g_opera->media_backends_module.ffmpeg_thread_manager)
#endif

#define MEDIA_BACKENDS_MODULE_REQUIRED

#endif // defined(MEDIA_BACKEND_GSTREAMER) || defined(MEDIA_BACKEND_FFMPEG)

#endif // MEDIA_BACKENDS_MODULE_H
