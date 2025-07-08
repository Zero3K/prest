/* -*- Mode: c++; tab-width: 4; indent-tabs-mode: nil; c-basic-offset: 4 -*-
**
** Copyright (C) 2000-2011 Opera Software ASA.  All rights reserved.
**
** This file is part of the Opera web browser.  It may not be distributed
** under any circumstances.
*/

#include "core/pch.h"

#if defined(_NATIVE_SSL_SUPPORT_) && defined(_SSL_USE_TLSCLIENT_)

#include "modules/libssl/external/tlsclient/tlsclient_digest.h"
#include "modules/url/tools/arrays.h"

// TLSClient digest map - simplified compared to OpenSSL version
PREFIX_CONST_ARRAY(static, SSL_Digest_and_NID, SSL_Digest_map, libssl)
    TLSCLIENT_MD_ENTRY(SSL_MD5,        SSL_HMAC_MD5, FALSE, "md5", "MD5"),
    TLSCLIENT_MD_ENTRY(SSL_SHA,        SSL_HMAC_SHA, FALSE, "sha1", "SHA-1"),
    TLSCLIENT_MD_ENTRY(SSL_SHA_224,    SSL_HMAC_SHA_224, FALSE, "sha224", "SHA-224"),
    TLSCLIENT_MD_ENTRY(SSL_SHA_256,    SSL_HMAC_SHA_256, FALSE, "sha256", "SHA-256"),
    TLSCLIENT_MD_ENTRY(SSL_SHA_384,    SSL_HMAC_SHA_384, FALSE, "sha384", "SHA-384"),
    TLSCLIENT_MD_ENTRY(SSL_SHA_512,    SSL_HMAC_SHA_512, FALSE, "sha512", "SHA-512"),
    TLSCLIENT_MD_ENTRY(SSL_HMAC_MD5,   SSL_MD5, TRUE, "hmac-md5", "HMAC-MD5"),
    TLSCLIENT_MD_ENTRY(SSL_HMAC_SHA,   SSL_SHA, TRUE, "hmac-sha1", "HMAC-SHA-1"),
    TLSCLIENT_MD_ENTRY(SSL_HMAC_SHA_224, SSL_SHA_224, TRUE, "hmac-sha224", "HMAC-SHA-224"),
    TLSCLIENT_MD_ENTRY(SSL_HMAC_SHA_256, SSL_SHA_256, TRUE, "hmac-sha256", "HMAC-SHA-256"),
    TLSCLIENT_MD_ENTRY(SSL_HMAC_SHA_384, SSL_SHA_384, TRUE, "hmac-sha384", "HMAC-SHA-384"),
    TLSCLIENT_MD_ENTRY(SSL_HMAC_SHA_512, SSL_SHA_512, TRUE, "hmac-sha512", "HMAC-SHA-512"),
CONST_ARRAY_END(SSL_Digest_map)

#endif // _NATIVE_SSL_SUPPORT_ && _SSL_USE_TLSCLIENT_