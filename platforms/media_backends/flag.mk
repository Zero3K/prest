# -*- Mode: Makefile; tab-width: 4 -*-
# vim: syntax=make ts=4
# See platforms/build/documentation/ for information about the Opera makefile system

# FFmpeg media backend is now the only supported backend
USE_MEDIA_BACKEND_FFMPEG ?= YES

ifeq (YES, $(USE_MEDIA_BACKEND_FFMPEG))
 PLATMOD += media_backends
 DEFINES += MEDIA_BACKEND_FFMPEG
endif # USE_MEDIA_BACKEND_FFMPEG
