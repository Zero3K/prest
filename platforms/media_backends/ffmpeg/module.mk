# FFmpeg Media Backend Module

# Configuration for FFmpeg-based multimedia support
# This provides an alternative to GStreamer with better codec support

ifdef MEDIA_BACKEND_FFMPEG

SOURCES += platforms/media_backends/ffmpeg/ffmpeglibs.cpp
SOURCES += platforms/media_backends/ffmpeg/ffmpegmediamanager.cpp  
SOURCES += platforms/media_backends/ffmpeg/ffmpegmediaplayer.cpp

INCLUDES += platforms/media_backends/ffmpeg

# Include embedded FFmpeg if enabled
ifdef MEDIA_BACKEND_FFMPEG_EMBEDDED
include platforms/media_backends/ffmpeg-embedded/module.mk
else
# FFmpeg library linking (when using system libraries)
ifndef MEDIA_BACKEND_FFMPEG_BUNDLE_LIBS
LDFLAGS += -lavformat -lavcodec -lavutil -lswscale -lswresample
endif

# Windows-specific library names
ifdef MSWIN
ifdef MEDIA_BACKEND_FFMPEG_BUNDLE_LIBS
LDFLAGS += avformat-60.lib avcodec-60.lib avutil-58.lib swscale-7.lib swresample-4.lib
endif
endif

# Unix-specific library paths
ifdef UNIX
ifndef MEDIA_BACKEND_FFMPEG_BUNDLE_LIBS
LDFLAGS += -L/usr/lib/x86_64-linux-gnu -L/usr/local/lib
endif
endif

endif # MEDIA_BACKEND_FFMPEG_EMBEDDED

endif # MEDIA_BACKEND_FFMPEG