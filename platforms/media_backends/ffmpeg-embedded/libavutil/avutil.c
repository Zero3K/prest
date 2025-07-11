/*
 * FFmpeg embedded - libavutil implementation
 * Copyright (c) 2024 Opera Software ASA
 * Minimal implementation for Opera
 */

#include "avutil.h"
#include <stdlib.h>
#include <string.h>

/* Frame management */
AVFrame *av_frame_alloc(void)
{
    AVFrame *frame = (AVFrame*)calloc(1, sizeof(AVFrame));
    if (!frame)
        return NULL;
    
    return frame;
}

void av_frame_free(AVFrame **frame)
{
    if (!frame || !*frame)
        return;
    
    av_frame_unref(*frame);
    free(*frame);
    *frame = NULL;
}

void av_frame_unref(AVFrame *frame)
{
    if (!frame)
        return;
    
    /* Free data buffers */
    for (int i = 0; i < 8; i++) {
        if (frame->data[i]) {
            free(frame->data[i]);
            frame->data[i] = NULL;
        }
        frame->linesize[i] = 0;
    }
    
    /* Reset frame properties */
    frame->width = 0;
    frame->height = 0;
    frame->nb_samples = 0;
    frame->format = -1;
    frame->key_frame = 0;
    frame->pts = 0;
    frame->pkt_dts = 0;
    frame->channels = 0;
    frame->sample_rate = 0;
    frame->channel_layout = 0;
}

/* Packet management */
AVPacket *av_packet_alloc(void)
{
    AVPacket *pkt = (AVPacket*)calloc(1, sizeof(AVPacket));
    if (!pkt)
        return NULL;
    
    pkt->pts = -1;
    pkt->dts = -1;
    pkt->pos = -1;
    pkt->duration = 0;
    pkt->flags = 0;
    
    return pkt;
}

void av_packet_free(AVPacket **pkt)
{
    if (!pkt || !*pkt)
        return;
    
    av_packet_unref(*pkt);
    free(*pkt);
    *pkt = NULL;
}

void av_packet_unref(AVPacket *pkt)
{
    if (!pkt)
        return;
    
    if (pkt->data) {
        free(pkt->data);
        pkt->data = NULL;
    }
    
    pkt->size = 0;
    pkt->stream_index = -1;
    pkt->flags = 0;
    pkt->pts = -1;
    pkt->dts = -1;
    pkt->duration = 0;
    pkt->pos = -1;
}

/* Memory management */
void *av_malloc(size_t size)
{
    return malloc(size);
}

void *av_mallocz(size_t size)
{
    return calloc(1, size);
}

void av_free(void *ptr)
{
    free(ptr);
}