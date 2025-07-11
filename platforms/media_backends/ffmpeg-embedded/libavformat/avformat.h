/*
 * FFmpeg embedded - avformat.h
 * Copyright (c) 2024 Opera Software ASA
 * Based on FFmpeg source code
 */

#ifndef AVFORMAT_H
#define AVFORMAT_H

#include "../libavcodec/avcodec.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Input/Output formats */
typedef struct AVInputFormat {
    const char *name;
    const char *long_name;
    const char *extensions;
    const char *mime_type;
    int flags;
} AVInputFormat;

typedef struct AVOutputFormat {
    const char *name;
    const char *long_name;
    const char *mime_type;
    const char *extensions;
    int flags;
} AVOutputFormat;

/* Stream structure */
typedef struct AVStream {
    int index;                    /* Stream index in AVFormatContext */
    int id;                       /* Format-specific stream ID */
    AVCodecContext *codec;        /* Codec context (deprecated) */
    AVCodecContext *codecpar;     /* Codec parameters */
    void *priv_data;             /* Stream private data */
    
    AVRational time_base;         /* Time base */
    int64_t start_time;           /* Stream start time */
    int64_t duration;             /* Stream duration */
    int64_t nb_frames;            /* Number of frames */
    
    AVDictionary *metadata;       /* Stream metadata */
    
    int disposition;              /* Stream disposition */
    
    /* Sample aspect ratio */
    AVRational sample_aspect_ratio;
    
    /* Average framerate */
    AVRational avg_frame_rate;
    
    /* Real base frame rate */
    AVRational r_frame_rate;
} AVStream;

/* Format context */
typedef struct AVFormatContext {
    const AVInputFormat *iformat;   /* Input format */
    const AVOutputFormat *oformat;  /* Output format */
    
    void *priv_data;                /* Format private data */
    
    /* I/O context */
    struct AVIOContext *pb;
    
    /* Stream info */
    unsigned int nb_streams;        /* Number of streams */
    AVStream **streams;             /* Array of stream pointers */
    
    char filename[1024];            /* Input or output filename */
    
    int64_t start_time;             /* Position of the first frame */
    int64_t duration;               /* Format duration */
    int64_t bit_rate;               /* Total stream bitrate */
    
    unsigned int packet_size;       /* Packet size */
    int max_delay;                  /* Maximum delay */
    
    int flags;                      /* Format flags */
    
    unsigned int probesize;         /* Format probing size */
    int64_t max_analyze_duration;   /* Maximum duration to analyze */
    
    AVDictionary *metadata;         /* Format metadata */
    
    /* Private fields */
    struct AVFormatInternal *internal;
} AVFormatContext;

/* Core format functions */
int avformat_open_input(AVFormatContext **ps, const char *url, AVInputFormat *fmt, AVDictionary **options);
void avformat_close_input(AVFormatContext **s);

int avformat_find_stream_info(AVFormatContext *ic, AVDictionary **options);

AVFormatContext *avformat_alloc_context(void);
void avformat_free_context(AVFormatContext *s);

int av_read_frame(AVFormatContext *s, AVPacket *pkt);

int av_seek_frame(AVFormatContext *s, int stream_index, int64_t timestamp, int flags);

/* Network functions */
void avformat_network_init(void);
void avformat_network_deinit(void);

/* Legacy registration function */
#if LIBAVFORMAT_VERSION_MAJOR < 59
void av_register_all(void);
#endif

#ifdef __cplusplus
}
#endif

#endif /* AVFORMAT_H */