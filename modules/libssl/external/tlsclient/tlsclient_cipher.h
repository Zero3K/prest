/* -*- Mode: c++; tab-width: 4; indent-tabs-mode: nil; c-basic-offset: 4 -*-
**
** Copyright (C) 2000-2008 Opera Software AS.  All rights reserved.
**
** This file is part of the Opera web browser.  It may not be distributed
** under any circumstances.
**
** TLSClient cipher implementation
**
*/

#ifndef TLSCLIENT_CIPHER_H
#define TLSCLIENT_CIPHER_H

#if defined _NATIVE_SSL_SUPPORT_ && defined _SSL_USE_TLSCLIENT_

#include "modules/libssl/methods/sslcipher.h"
#include "modules/tlsclient/tlsclient.h"

class TLSClient_GeneralCipher : public SSL_GeneralCipher
{
private:
    void* tls_cipher_ctx;
    SSL_BulkCipherType cipher_type;
    
public:
    TLSClient_GeneralCipher(SSL_BulkCipherType type);
    virtual ~TLSClient_GeneralCipher();
    
    virtual BOOL Valid(SSL_Alert *msg=NULL) const;
    virtual SSL_CipherType CipherType() const;
    virtual byte *Encrypt(const byte *source, uint32 len, byte *target, uint32 &len1, uint32 buf_len);
    virtual byte *Decrypt(const byte *source, uint32 len, byte *target, uint32 &len1, uint32 buf_len);
    virtual void InitEncrypt();
    virtual void InitDecrypt();
    virtual byte *FinishEncrypt(byte *target, uint32 &len, uint32 buflen);
    virtual byte *FinishDecrypt(byte *target, uint32 &len, uint32 buflen);
    virtual uint32 InputBlockSize() const;
    virtual uint32 OutputBlockSize() const;
    virtual void SetCipherDirection(SSL_CipherDirection dir);
    virtual const byte *LoadKey(const byte *key);
    virtual const byte *LoadIV(const byte *iv);
    virtual void BytesToKey(SSL_HashAlgorithmType hash_alg, const SSL_varvector32 &string, const SSL_varvector32 &salt, int count);
    virtual SSL_Cipher *Fork();
};

#endif // _NATIVE_SSL_SUPPORT_ && _SSL_USE_TLSCLIENT_

#endif // TLSCLIENT_CIPHER_H