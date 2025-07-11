/*
 * Test embedded FFmpeg functionality
 * Copyright (c) 2024 Opera Software ASA
 */

#include <stdio.h>
#include <stdlib.h>

#ifdef MEDIA_BACKEND_FFMPEG_EMBEDDED

#include "libavutil/avutil.h"
#include "libavcodec/avcodec.h"
#include "libavformat/avformat.h"

// Minimal OpStatus simulation
typedef int OP_STATUS;
#define OpStatus_OK 0
#define OpStatus_ERR 1

#define OpStatus_IsError(x) ((x) != OpStatus_OK)

// Minimal FFmpegLibs simulation for embedded
class FFmpegLibs {
public:
    static OP_STATUS Init() { return OpStatus_OK; }
    static int IsLoaded() { return 1; }
    static void Destroy() { }
    static const AVCodec* find_decoder(enum AVCodecID id) { return avcodec_find_decoder(id); }
    static AVFrame* frame_alloc() { return av_frame_alloc(); }
    static void frame_free(AVFrame **frame) { av_frame_free(frame); }
    static AVPacket* packet_alloc() { return av_packet_alloc(); }
    static void packet_free(AVPacket **pkt) { av_packet_free(pkt); }
};

int main()
{
    printf("Testing embedded FFmpeg...\n");
    
    // Initialize FFmpeg
    OP_STATUS status = FFmpegLibs::Init();
    if (OpStatus_IsError(status)) {
        printf("ERROR: Failed to initialize FFmpeg\n");
        return 1;
    }
    
    if (!FFmpegLibs::IsLoaded()) {
        printf("ERROR: FFmpeg not loaded\n");
        return 1;
    }
    
    printf("SUCCESS: FFmpeg initialized\n");
    
    // Test codec finder
    const AVCodec *h264_codec = FFmpegLibs::find_decoder(AV_CODEC_ID_H264);
    if (h264_codec) {
        printf("SUCCESS: Found H.264 decoder: %s\n", h264_codec->name);
    } else {
        printf("ERROR: H.264 decoder not found\n");
        return 1;
    }
    
    // Test frame allocation
    AVFrame *frame = FFmpegLibs::frame_alloc();
    if (frame) {
        printf("SUCCESS: Frame allocated\n");
        FFmpegLibs::frame_free(&frame);
        printf("SUCCESS: Frame freed\n");
    } else {
        printf("ERROR: Frame allocation failed\n");
        return 1;
    }
    
    // Test packet allocation
    AVPacket *packet = FFmpegLibs::packet_alloc();
    if (packet) {
        printf("SUCCESS: Packet allocated\n");
        FFmpegLibs::packet_free(&packet);
        printf("SUCCESS: Packet freed\n");
    } else {
        printf("ERROR: Packet allocation failed\n");
        return 1;
    }
    
    printf("SUCCESS: All embedded FFmpeg tests passed\n");
    
    FFmpegLibs::Destroy();
    return 0;
}

#else

int main()
{
    printf("Embedded FFmpeg not enabled\n");
    return 0;
}

#endif