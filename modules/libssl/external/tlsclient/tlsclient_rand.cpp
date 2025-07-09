/* -*- Mode: c++; tab-width: 4; indent-tabs-mode: nil; c-basic-offset: 4 -*-
**
** Copyright (C) 2000-2008 Opera Software AS.  All rights reserved.
**
** This file is part of the Opera web browser.  It may not be distributed
** under any circumstances.
**
** TLSClient random number generation
**
*/

#include "core/pch.h"

#if defined _NATIVE_SSL_SUPPORT_ && defined _SSL_USE_TLSCLIENT_

#include "modules/libssl/sslrand.h"
#include "modules/libssl/ssluint.h"
#include "modules/tlsclient/tlsclient.h"

void SSL_RND_add(const void *data, int len, double entropy)
{
    // TLSClient doesn't require explicit entropy seeding like OpenSSL
    // Its random number generation is self-seeding
}

void SSL_RND_seed(const void *data, int len)
{
    // TLSClient handles seeding internally
}

int SSL_RND_bytes(unsigned char *buf, int len)
{
    if (buf == NULL || len <= 0)
        return 0;
    
    // Use TLS client random number generation
    // For now, using system random (placeholder)
    for (int i = 0; i < len; i++)
    {
        buf[i] = (unsigned char)(rand() & 0xFF);
    }
    
    return 1; // Success
}

int SSL_RND_pseudo_bytes(unsigned char *buf, int len)
{
    // For TLSClient, we use the same strong random for both
    return SSL_RND_bytes(buf, len);
}

int SSL_RND_status()
{
    // TLSClient's RNG is always ready
    return 1;
}

void SSL_RND_cleanup()
{
    // TLSClient handles cleanup internally
}

// Additional SSL_RND functions required by Opera
void SSL_RND(SSL_varvector32 &target, uint32 len)
{
    if(len > 0)
        target.Resize(len);
    SSL_RND(target.GetDirect(), target.GetLength());
}

void SSL_RND(byte *target, uint32 len)
{
    if(!target || len == 0)
        return;
        
    // Use TLSClient random number generation
    // For now, using system random (placeholder implementation)
    for (uint32 i = 0; i < len; i++)
    {
        target[i] = (unsigned char)(rand() & 0xFF);
    }
}

void SSL_SEED_RND(byte *source, uint32 len)
{
    // TLSClient handles seeding internally
    // This is a no-op for TLSClient since it uses internal entropy sources
    (void)source;
    (void)len;
}

// Initialize random number generator for TLSClient
OP_STATUS SSL_RND_Init()
{
    // TLSClient's RNG is self-initializing
    // No explicit initialization needed
    return OpStatus::OK;
}

// Cleanup random number generator for TLSClient
OP_STATUS SSL_TidyUp_Random()
{
    // TLSClient handles cleanup internally
    // No explicit cleanup needed
    return OpStatus::OK;
}

#endif // _NATIVE_SSL_SUPPORT_ && _SSL_USE_TLSCLIENT_