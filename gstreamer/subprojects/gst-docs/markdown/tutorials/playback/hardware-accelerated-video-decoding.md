# Playback tutorial 8: Hardware-accelerated video decoding


{{ ALERT_PY.md }}

{{ ALERT_JS.md }}

### Goal

Hardware-accelerated video decoding has rapidly become a necessity, as
low-power devices grow more common. This tutorial (more of a lecture,
actually) gives some background on hardware acceleration and explains
how does GStreamer benefit from it.

Sneak peek: if properly setup, you do not need to do anything special to
activate hardware acceleration; GStreamer automatically takes advantage
of it.

### Introduction

Video decoding can be an extremely CPU-intensive task, especially for
higher resolutions like 1080p HDTV. Fortunately, modern graphics cards,
equipped with programmable GPUs, are able to take care of this job,
allowing the CPU to concentrate on other duties. Having dedicated
hardware becomes essential for low-power CPUs which are simply incapable
of decoding such media fast enough.

In the current state of things (June 2016) each GPU manufacturer offers
a different method to access their hardware (a different API), and a
strong industry standard has not emerged yet.

As of June 2016, there exist at least 8 different video decoding
acceleration APIs:

 - [VAAPI](http://en.wikipedia.org/wiki/Video_Acceleration_API) (*Video
Acceleration API*): Initially designed by
[Intel](http://en.wikipedia.org/wiki/Intel) in 2007, targeted at the X
Window System on Unix-based operating systems, now open-source. It now
also supports Wayland through dmabuf. It is currently not limited to
Intel GPUs as other manufacturers are free to use this API, for example,
[Imagination
Technologies](http://en.wikipedia.org/wiki/Imagination_Technologies) or
[S3 Graphics](http://en.wikipedia.org/wiki/S3_Graphics). Accessible to
GStreamer through `va` plugin from `gst-plugins-bad`.

 - [OVD](http://developer.amd.com/sdks/AMDAPPSDK/assets/OpenVideo_Decode_API.PDF)
(*Open Video Decode*): Another API from [AMD
Graphics](http://en.wikipedia.org/wiki/AMD_Graphics), designed to be a
platform agnostic method for softrware developers to leverage the
[Universal Video
Decode](http://en.wikipedia.org/wiki/Unified_Video_Decoder) (UVD)
hardware inside AMD Radeon graphics cards. Currently unavailable to
GStreamer .

 - [DCE](http://en.wikipedia.org/wiki/Distributed_Codec_Engine)
(*Distributed Codec Engine*): An open source software library ("libdce")
and API specification by [Texas
Instruments](http://en.wikipedia.org/wiki/Texas_Instruments), targeted
at Linux systems and ARM platforms. Accessible to GStreamer through
the [gstreamer-ducati](https://github.com/robclark/gst-ducati) plugin.

 - [Android
   MediaCodec](https://developer.android.com/reference/android/media/MediaCodec.html): This is Android's API to access the device's
   hardware decoder and encoder if available. This is accessible through the
   `androidmedia` plugin in gst-plugins-bad. This includes both encoding and
   decoding.

 - Apple VideoTool Box Framework: Apple's API to access hardware is available
  through the `applemedia` plugin which includes both encoding through
  the `vtenc` element and decoding through the `vtdec` element.

 - Video4Linux: Recent Linux kernels have a kernel API to expose
   hardware codecs in a standard way, this is now supported by the
   `v4l2` plugin in `gst-plugins-good`. This can support both decoding
   and encoding depending on the platform.

### Inner workings of hardware-accelerated video decoding plugins

These APIs generally offer a number of functionalities, like video
decoding, post-processing, or presentation of the decoded
frames. Correspondingly, plugins generally offer a different GStreamer
element for each of these functions, so pipelines can be built to
accommodate any need.

For example, the `va` plugin from `gst-plugins-bad` offers the
`vah264dec`, `vah264dec`, `vahav1dec`, etc., and `vapostproc` elements
that allow hardware-accelerated decoding through VAAPI, upload of raw
video frames to GPU memory, download of GPU frames to system memory and
presentation of GPU frames, respectively.

It is important to distinguish between conventional GStreamer frames,
which reside in system memory, and frames generated by
hardware-accelerated APIs. The latter reside in GPU memory and cannot
be touched by GStreamer. They can usually be downloaded to system
memory and treated as conventional GStreamer frames when they are
mapped, but it is far more efficient to leave them in the GPU and
display them from there.

GStreamer needs to keep track of where these “hardware buffers” are
though, so conventional buffers still travel from element to
element. They look like regular buffers, but mapping their content is
much slower as it has to be retrieved from the special memory used by
hardware accelerated elements. This special memory types are
negotiated using the allocation query mechanism.

This all means that, if a particular hardware acceleration API is
present in the system, and the corresponding GStreamer plugin is also
available, auto-plugging elements like `playbin3` are free to use
hardware acceleration to build their pipelines; the application does not
need to do anything special to enable it. Almost:

When `playbin3` has to choose among different equally valid elements,
like conventional software decoding (through `vp8dec`, for example) or
hardware accelerated decoding (through `vavp8dec`, for example), it uses
their *rank* to decide. The rank is a property of each element that
indicates its priority; `playbin3` will simply select the element that
is able to build a complete pipeline and has the highest rank.

So, whether `playbin3` will use hardware acceleration or not will depend
on the relative ranks of all elements capable of dealing with that media
type. Therefore, the easiest way to make sure hardware acceleration is
enabled or disabled is by changing the rank of the associated element
via the environment variable `GST_PLUGIN_FEATURE_RANK` (see “Running and
debugging GStreamer Applications” in documentation for more
information). Another way is by setting the rank in your application as
shown in this code:

``` c
static void enable_factory (const gchar *name, gboolean enable) {
    GstRegistry *registry = NULL;
    GstElementFactory *factory = NULL;

    registry = gst_registry_get_default ();
    if (!registry) return;

    factory = gst_element_factory_find (name);
    if (!factory) return;

    if (enable) {
        gst_plugin_feature_set_rank (GST_PLUGIN_FEATURE (factory), GST_RANK_PRIMARY + 1);
    }
    else {
        gst_plugin_feature_set_rank (GST_PLUGIN_FEATURE (factory), GST_RANK_NONE);
    }

    gst_registry_add_feature (registry, GST_PLUGIN_FEATURE (factory));
    return;
}
```

The first parameter passed to this method is the name of the element to
modify, for example, `vavp9dec` or `fluvadec`.

The key method is `gst_plugin_feature_set_rank()`, which will set the
rank of the requested element factory to the desired level. For
convenience, ranks are divided in NONE, MARGINAL, SECONDARY and PRIMARY,
but any number will do. When enabling an element, we set it to
PRIMARY+1, so it has a higher rank than the rest of elements which
commonly have PRIMARY rank. Setting an element’s rank to NONE will make
the auto-plugging mechanism to never select it.

> ![warning] The GStreamer developers often rank hardware decoders lower than
> the software ones when they are defective. This should act as a warning.

## Conclusion

This tutorial has shown a bit how GStreamer internally manages hardware
accelerated video decoding. Particularly,

  - Applications do not need to do anything special to enable hardware
    acceleration if a suitable API and the corresponding GStreamer
    plugin are available.
  - Hardware acceleration can be enabled or disabled by changing the
    rank of the decoding element with `GST_PLUGIN_FEATURE_RANK`
    environment variable, or using `gst_plugin_feature_set_rank()` in
    your code.

It has been a pleasure having you here, and see you soon!

  [warning]: images/icons/emoticons/warning.svg
