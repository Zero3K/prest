# -*- Mode: Makefile; tab-width: 4 -*-
# vim: syntax=make ts=4
# See platforms/build/documentation/ for information about the Opera makefile system

# FFmpeg media backend is now the only supported backend
USE_MEDIA_BACKEND_FFMPEG ?= YES

# FFmpeg backend configuration options
USE_MEDIA_BACKEND_FFMPEG_EMBEDDED ?= NO
USE_MEDIA_BACKEND_FFMPEG_STATIC ?= NO

ifeq (YES, $(USE_MEDIA_BACKEND_FFMPEG))
 PLATMOD += media_backends
 DEFINES += MEDIA_BACKEND_FFMPEG
 
 # Enable embedded FFmpeg if requested  
 ifeq (YES, $(USE_MEDIA_BACKEND_FFMPEG_EMBEDDED))
  DEFINES += MEDIA_BACKEND_FFMPEG_EMBEDDED
  
  # Choose static or dynamic linking for embedded FFmpeg
  ifeq (YES, $(USE_MEDIA_BACKEND_FFMPEG_STATIC))
   DEFINES += MEDIA_BACKEND_FFMPEG_STATIC
  endif
 endif
endif # USE_MEDIA_BACKEND_FFMPEG
