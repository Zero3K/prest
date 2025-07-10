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

#ifndef TLSCLIENT_HASH_H
#define TLSCLIENT_HASH_H

#if defined _NATIVE_SSL_SUPPORT_ && defined _SSL_USE_TLSCLIENT_

#include "modules/libssl/external/tlsclient/tlsclient_digest.h"

#include "modules/libssl/methods/sslhash.h"
#include "modules/tlsclient/tlsclient.h"

class TLSClient_Hash_Base : public SSL_Hash
{
protected:
	const SSL_Digest_and_NID *alg_spec;
    SSL_HashAlgorithmType hash_type;
    
public:
    TLSClient_Hash_Base(const SSL_Digest_and_NID *spec);
    virtual ~TLSClient_Hash_Base();
	
    virtual BOOL Valid(SSL_Alert *msg=NULL) const;
    virtual SSL_HashAlgorithmType Type() const;
    virtual uint16 Size() const;
    virtual const char *AlgName() const;
    virtual void InitHash();
    virtual const byte *CalculateHash(const byte *source,uint32 len);
    virtual byte *ExtractHash(byte *target=NULL);
    virtual const byte *LoadSecret(const byte *source, uint32 len);
    virtual byte *LoadDigest(byte *source);
    virtual SSL_Hash *Fork() const;
#ifdef EXTERNAL_DIGEST_API
    virtual OP_STATUS PerformInitOperation(int operation, void *params);
#endif
    
protected:
    OpString8 hash_buffer;
    BOOL hash_finished;
    
    // TLS client context for hashing
    void* tls_hash_ctx;
};

class TLSClient_Hash : public TLSClient_Hash_Base
{
public:
    TLSClient_Hash(const SSL_Digest_and_NID *spec);
    TLSClient_Hash(const TLSClient_Hash *old);
    virtual ~TLSClient_Hash();
    
    virtual SSL_Hash *Fork() const;
};

// Simplified TLSClient digest spec structure
struct SSL_Digest_and_NID;

class TLSClient_Hash_Simple : public SSL_Hash
{
private:
    const SSL_Digest_and_NID *alg_spec;
    SSL_HashAlgorithmType hash_type;
    OpString8 hash_buffer;
    BOOL hash_finished;
    void* tls_hash_ctx;
    
public:
    TLSClient_Hash_Simple(const SSL_Digest_and_NID *spec);
    TLSClient_Hash_Simple(const TLSClient_Hash_Simple *old);
    virtual ~TLSClient_Hash_Simple();
    
    virtual BOOL Valid(SSL_Alert *msg=NULL) const;
    virtual void InitHash();
    virtual const byte *CalculateHash(const byte *source,uint32 len);
    virtual byte *ExtractHash(byte *target=NULL);
    virtual const byte *LoadSecret(const byte *source, uint32 len);
    virtual SSL_Hash *Fork() const;
#ifdef EXTERNAL_DIGEST_API
    virtual OP_STATUS PerformInitOperation(int operation, void *params);
#endif
};

#endif // _NATIVE_SSL_SUPPORT_ && _SSL_USE_TLSCLIENT_

#endif // TLSCLIENT_HASH_H