
/* -*- Mode: c++; tab-width: 4; indent-tabs-mode: nil; c-basic-offset: 4; c-file-style: "stroustrup" -*-
 *
 * Copyright (C) Opera Software ASA  2002 - 2011
 *
 * Hardcoded search engine definitions
 *
 * @author build/scripts/generate_hardcoded_searches.js
 */

#ifndef HARDCODED_SEARCHES_H
#define HARDCODED_SEARCHES_H

struct HardcodedSearch {
    const char* name;
    const char* url;
    const char* encoding;
    const char* icon;
};

static const HardcodedSearch g_hardcoded_searches[] = {
    { "Google", "https://www.google.com/search?q=%s", "UTF-8", "google.ico" },
    { "Yahoo", "https://search.yahoo.com/search?p=%s", "UTF-8", "yahoo.ico" },
    { "Bing", "https://www.bing.com/search?q=%s", "UTF-8", "bing.ico" },
    { "Wikipedia", "https://en.wikipedia.org/wiki/Special:Search?search=%s", "UTF-8", "wikipedia.ico" },
    { "Amazon", "https://www.amazon.com/s?k=%s", "UTF-8", "amazon.ico" },
    { NULL, NULL, NULL, NULL } // Sentinel
};

static const int g_hardcoded_searches_count = 5;

#endif // HARDCODED_SEARCHES_H
