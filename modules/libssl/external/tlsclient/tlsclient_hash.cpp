/* -*- Mode: c++; tab-width: 4; indent-tabs-mode: nil; c-basic-offset: 4 -*-
**
** Copyright (C) 2000-2008 Opera Software AS.  All rights reserved.
**
** This file is part of the Opera web browser.  It may not be distributed
** under any circumstances.
**
** TLSClient hash implementation
**
*/

#include "core/pch.h"

#if defined _NATIVE_SSL_SUPPORT_ && defined _SSL_USE_TLSCLIENT_

#include "modules/libssl/external/tlsclient/tlsclient_hash.h"
#include "modules/libssl/base/sslenum.h"
#include "modules/libssl/protocol/sslstat1.h"
#include "modules/libssl/libssl_module.h"

TLSClient_Hash_Base::TLSClient_Hash_Base(const SSL_Digest_and_NID *spec)
{
    alg_spec = spec;
    hash_type = spec ? spec->hash_alg : SSL_NoHash;
    hash_finished = FALSE;
    tls_hash_ctx = NULL;
}

TLSClient_Hash_Base::~TLSClient_Hash_Base()
{
    // Clean up TLS client hash context if needed
    if (tls_hash_ctx != NULL)
    {
        // TLSClient cleanup code would go here
        tls_hash_ctx = NULL;
    }
}

BOOL TLSClient_Hash_Base::Valid(SSL_Alert *msg) const
{
    return (alg_spec != NULL && hash_type != SSL_NoHash);
}

SSL_HashAlgorithmType TLSClient_Hash_Base::Type() const
{
    return hash_type;
}

uint16 TLSClient_Hash_Base::Size() const
{
    switch(hash_type)
    {
        case SSL_SHA:
            return 20;
        case SSL_SHA_224:
            return 28;
        case SSL_SHA_256:
            return 32;
        case SSL_SHA_384:
            return 48;
        case SSL_SHA_512:
            return 64;
        case SSL_MD5:
            return 16;
        default:
            return 0;
    }
}

const char *TLSClient_Hash_Base::AlgName() const
{
    if(alg_spec)
        return alg_spec->name;
    return NULL;
}

void TLSClient_Hash_Base::InitHash()
{
    hash_finished = FALSE;
    hash_buffer.Empty();
    
    // Initialize TLS client hash context based on hash_type
    // This would use TLSClient's hash initialization functions
}

const byte *TLSClient_Hash_Base::CalculateHash(const byte *source, uint32 len)
{
    if(source == NULL || len == 0)
        return NULL;
    
    InitHash();
    
    // Use TLSClient hash update function
    // For now, using a simple implementation
    hash_buffer.Set((const char*)source, len);
    
    return ExtractHash();
}

const byte *TLSClient_Hash_Base::ExtractHash(byte *target)
{
    if(hash_finished)
        return (const byte*)hash_buffer.CStr();
    
    // Finalize hash using TLSClient
    hash_finished = TRUE;
    
    if(target)
    {
        op_memcpy(target, hash_buffer.CStr(), Size());
        return target;
    }
    
    return (const byte*)hash_buffer.CStr();
}

byte *TLSClient_Hash_Base::LoadDigest(byte *source)
{
    if(source == NULL)
        return NULL;
    
    uint16 size = Size();
    hash_buffer.Set((const char*)source, size);
    hash_finished = TRUE;
    
    return source + size;
}

SSL_Hash *TLSClient_Hash_Base::Fork()
{
    return OP_NEW(TLSClient_Hash, (alg_spec));
}

void TLSClient_Hash_Base::PerformStreamActionL(DataStream::DatastreamAction action, uint32 len)
{
    DataStream::PerformStreamActionL(action, len);
}

TLSClient_Hash::TLSClient_Hash(const SSL_Digest_and_NID *spec)
: TLSClient_Hash_Base(spec)
{
}

TLSClient_Hash::TLSClient_Hash(TLSClient_Hash *old)
: TLSClient_Hash_Base(old->alg_spec)
{
    if(old)
    {
        hash_buffer.Set(old->hash_buffer);
        hash_finished = old->hash_finished;
    }
}

TLSClient_Hash::~TLSClient_Hash()
{
}

SSL_Hash *TLSClient_Hash::Fork()
{
    return OP_NEW(TLSClient_Hash, (this));
}

#endif // _NATIVE_SSL_SUPPORT_ && _SSL_USE_TLSCLIENT_