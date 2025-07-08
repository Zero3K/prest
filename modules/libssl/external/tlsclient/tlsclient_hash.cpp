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
#include "modules/libssl/protocol/sslstat.h"
#include "modules/libssl/libssl_module.h"

TLSClient_Hash_Base::TLSClient_Hash_Base(const SSL_Digest_and_NID *spec)
{
    alg_spec = spec;
    hash_type = spec ? spec->hash_alg : SSL_NoHash;
    hash_finished = FALSE;
    tls_hash_ctx = NULL;
    
    // Initialize SSL_Hash base class members
    hash_alg = hash_type;
    switch(hash_type)
    {
        case SSL_SHA:
            hash_size = 20;
            break;
        case SSL_SHA_224:
            hash_size = 28;
            break;
        case SSL_SHA_256:
            hash_size = 32;
            break;
        case SSL_SHA_384:
            hash_size = 48;
            break;
        case SSL_SHA_512:
            hash_size = 64;
            break;
        case SSL_MD5:
            hash_size = 16;
            break;
        default:
            hash_size = 0;
            break;
    }
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

const byte *TLSClient_Hash_Base::LoadSecret(const byte *source, uint32 len)
{
    if(source == NULL || len == 0)
        return NULL;
    
    // Load secret for HMAC operations
    hash_buffer.Set((const char*)source, len);
    
    return source + len;
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

SSL_Hash *TLSClient_Hash_Base::Fork() const
{
    return OP_NEW(TLSClient_Hash, (alg_spec));
}

#ifdef EXTERNAL_DIGEST_API
OP_STATUS TLSClient_Hash_Base::PerformInitOperation(int operation, void *params)
{
    // TLSClient external digest operations
    return OpStatus::OK;
}
#endif

void TLSClient_Hash_Base::PerformStreamActionL(DataStream::DatastreamAction action, uint32 len)
{
    DataStream::PerformStreamActionL(action, len);
}

TLSClient_Hash::TLSClient_Hash(const SSL_Digest_and_NID *spec)
: TLSClient_Hash_Base(spec)
{
}

TLSClient_Hash::TLSClient_Hash(const TLSClient_Hash *old)
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

SSL_Hash *TLSClient_Hash::Fork() const
{
    return OP_NEW(TLSClient_Hash, (this));
}

// Simplified TLSClient digest spec structure
struct TLSClient_Digest_Spec {
	SSL_HashAlgorithmType digest_type;
	SSL_HashAlgorithmType hmac_digest_type;
	BOOL hmac;
	const char* name;
};

TLSClient_Hash_Simple::TLSClient_Hash_Simple(const TLSClient_Digest_Spec *spec)
{
    alg_spec = spec;
    hash_type = spec ? spec->digest_type : SSL_NoHash;
    hash_finished = FALSE;
    tls_hash_ctx = NULL;
    
    // Initialize SSL_Hash base class members
    hash_alg = hash_type;
    switch(hash_type)
    {
        case SSL_SHA:
            hash_size = 20;
            break;
        case SSL_SHA_224:
            hash_size = 28;
            break;
        case SSL_SHA_256:
            hash_size = 32;
            break;
        case SSL_SHA_384:
            hash_size = 48;
            break;
        case SSL_SHA_512:
            hash_size = 64;
            break;
        case SSL_MD5:
            hash_size = 16;
            break;
        default:
            hash_size = 0;
            break;
    }
}

TLSClient_Hash_Simple::TLSClient_Hash_Simple(const TLSClient_Hash_Simple *old)
{
    alg_spec = old->alg_spec;
    if (old != NULL)
    {
        hash_type = old->hash_type;
        hash_alg = old->hash_alg;
        hash_size = old->hash_size;
        hash_buffer.Set(old->hash_buffer);
        hash_finished = old->hash_finished;
    }
    tls_hash_ctx = NULL;
}

TLSClient_Hash_Simple::~TLSClient_Hash_Simple()
{
    if (tls_hash_ctx != NULL)
    {
        // Clean up TLS client hash context if needed
        tls_hash_ctx = NULL;
    }
}

BOOL TLSClient_Hash_Simple::Valid(SSL_Alert *msg) const
{
    return (alg_spec != NULL && hash_type != SSL_NoHash);
}

void TLSClient_Hash_Simple::InitHash()
{
    hash_finished = FALSE;
    hash_buffer.Empty();
    
    // Initialize TLS client hash context based on hash_type
}

const byte *TLSClient_Hash_Simple::CalculateHash(const byte *source, uint32 len)
{
    if(source == NULL || len == 0)
        return NULL;
    
    InitHash();
    
    // Use TLSClient hash update function
    // For now, using a simple implementation
    hash_buffer.Set((const char*)source, len);
    
    return ExtractHash();
}

byte *TLSClient_Hash_Simple::ExtractHash(byte *target)
{
    if(hash_finished)
    {
        if(target)
        {
            op_memcpy(target, hash_buffer.CStr(), hash_size);
            return target;
        }
        return (byte*)hash_buffer.CStr();
    }
    
    // Finalize hash using TLSClient
    hash_finished = TRUE;
    
    if(target)
    {
        op_memset(target, 0, hash_size); // Placeholder
        return target;
    }
    
    return (byte*)hash_buffer.CStr();
}

const byte *TLSClient_Hash_Simple::LoadSecret(const byte *source, uint32 len)
{
    if(source == NULL || len == 0)
        return NULL;
    
    // Load secret for HMAC operations
    hash_buffer.Set((const char*)source, len);
    
    return source + len;
}

SSL_Hash *TLSClient_Hash_Simple::Fork() const
{
    return OP_NEW(TLSClient_Hash_Simple, (this));
}

void TLSClient_Hash_Simple::PerformStreamActionL(DataStream::DatastreamAction action, uint32 len)
{
    DataStream::PerformStreamActionL(action, len);
}

#ifdef EXTERNAL_DIGEST_API
OP_STATUS TLSClient_Hash_Simple::PerformInitOperation(int operation, void *params)
{
    // TLSClient external digest operations
    return OpStatus::OK;
}
#endif

#endif // _NATIVE_SSL_SUPPORT_ && _SSL_USE_TLSCLIENT_