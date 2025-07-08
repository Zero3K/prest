/* -*- Mode: c++; tab-width: 4; indent-tabs-mode: nil; c-basic-offset: 4 -*-
**
** Copyright (C) 2000-2011 Opera Software ASA.  All rights reserved.
**
** This file is part of the Opera web browser.  It may not be distributed
** under any circumstances.
*/

#ifndef TLSCLIENT_DIGEST_H
#define TLSCLIENT_DIGEST_H

#if defined _NATIVE_SSL_SUPPORT_ && defined _SSL_USE_TLSCLIENT_

#include "modules/libssl/base/sslenum2.h"

// TLSClient-specific definition of SSL_Digest_and_NID
// This replaces the OpenSSL-specific version when using TLSClient
struct SSL_Digest_and_NID
{
    SSL_HashAlgorithmType digest_type;
    int hmac;
    SSL_HashAlgorithmType hmac_digest_type;
    int nid;  // For compatibility, but TLSClient doesn't use NIDs
    const char* hash_alg;  // TLSClient hash algorithm name
    const char* name;      // Human-readable name
};

// TLSClient digest map entries - simplified compared to OpenSSL
#define TLSCLIENT_MD_ENTRY(typ, hmac_typ, is_hmac, alg_name, display_name) \
    { typ, is_hmac, hmac_typ, 0, alg_name, display_name }

#endif // _NATIVE_SSL_SUPPORT_ && _SSL_USE_TLSCLIENT_

#endif // !TLSCLIENT_DIGEST_H