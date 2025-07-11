# Embedded FFmpeg Module

# Configuration flags
ifdef MEDIA_BACKEND_FFMPEG_EMBEDDED

# Include paths for embedded FFmpeg
INCLUDES += platforms/media_backends/ffmpeg-embedded

# Source files for embedded FFmpeg
FFMPEG_EMBEDDED_SOURCES += platforms/media_backends/ffmpeg-embedded/libavutil/avutil.c
FFMPEG_EMBEDDED_SOURCES += platforms/media_backends/ffmpeg-embedded/libavcodec/avcodec.c  
FFMPEG_EMBEDDED_SOURCES += platforms/media_backends/ffmpeg-embedded/libavformat/avformat.c

# Add sources to build
ifdef MEDIA_BACKEND_FFMPEG_STATIC
# Static linking - compile directly into Opera
SOURCES += $(FFMPEG_EMBEDDED_SOURCES)
DEFINES += FFMPEG_EMBEDDED_STATIC=1
else
# Dynamic linking - build as separate DLL/shared library
FFMPEG_DLL_SOURCES = $(FFMPEG_EMBEDDED_SOURCES)
DEFINES += FFMPEG_EMBEDDED_DYNAMIC=1

# Platform-specific DLL building
ifdef MSWIN
# Windows DLL
ffmpeg-embedded.dll: $(FFMPEG_DLL_SOURCES)
	$(CC) -shared -o $@ $(FFMPEG_DLL_SOURCES) $(CFLAGS) $(INCLUDES)

EXTRA_TARGETS += ffmpeg-embedded.dll
LDFLAGS += -L. -lffmpeg-embedded
endif

ifdef UNIX
# Unix shared library
libffmpeg-embedded.so: $(FFMPEG_DLL_SOURCES)
	$(CC) -shared -fPIC -o $@ $(FFMPEG_DLL_SOURCES) $(CFLAGS) $(INCLUDES)

EXTRA_TARGETS += libffmpeg-embedded.so
LDFLAGS += -L. -lffmpeg-embedded
endif

endif # MEDIA_BACKEND_FFMPEG_STATIC

# Preprocessor definitions
DEFINES += MEDIA_BACKEND_FFMPEG_EMBEDDED=1
DEFINES += LIBAVUTIL_VERSION_MAJOR=58
DEFINES += LIBAVCODEC_VERSION_MAJOR=60  
DEFINES += LIBAVFORMAT_VERSION_MAJOR=60

endif # MEDIA_BACKEND_FFMPEG_EMBEDDED