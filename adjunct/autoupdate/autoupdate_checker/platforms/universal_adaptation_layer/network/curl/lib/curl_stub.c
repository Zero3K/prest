/*
 * curl_stub.c - Stub implementation of curl for Opera autoupdate checker
 * 
 * This provides minimal curl functionality that returns errors for all operations
 * since the autoupdate checker is being replaced with TLSClient implementation.
 */

#include "../include/curl/curl.h"
#include <stdlib.h>

/* Global initialization/cleanup */
CURLcode curl_global_init(long flags) {
    return CURLE_FAILED_INIT;
}

void curl_global_cleanup(void) {
    /* Nothing to do */
}

/* Easy handle management */
CURL *curl_easy_init(void) {
    return NULL;
}

void curl_easy_cleanup(CURL *curl) {
    /* Nothing to do */
}

CURLcode curl_easy_setopt(CURL *curl, CURLoption option, ...) {
    return CURLE_FAILED_INIT;
}

CURLcode curl_easy_perform(CURL *curl) {
    return CURLE_FAILED_INIT;
}

CURLcode curl_easy_getinfo(CURL *curl, CURLINFO info, ...) {
    return CURLE_FAILED_INIT;
}

/* Share handle management */
CURLSH *curl_share_init(void) {
    return NULL;
}

CURLcode curl_share_setopt(CURLSH *sh, CURLSHoption option, ...) {
    return CURLE_FAILED_INIT;
}

CURLcode curl_share_cleanup(CURLSH *sh) {
    return CURLE_FAILED_INIT;
}