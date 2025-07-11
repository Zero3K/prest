# -*- Mode: Makefile; tab-width: 4 -*-
# vim: syntax=make ts=4
# See platforms/build/documentation/ for information about the Opera makefile system

# FFmpeg media backend build targets
ifeq (YES, $(USE_MEDIA_BACKEND_FFMPEG))

# FFmpeg libraries are dynamically loaded - no static linking required
# FFmpeg supports modern codecs and protocols out of the box

.PHONY: ffmpeg-check
ffmpeg-check:
	@echo "FFmpeg backend enabled - using dynamic library loading"

defaultrule: ffmpeg-check

endif # USE_MEDIA_BACKEND_FFMPEG
