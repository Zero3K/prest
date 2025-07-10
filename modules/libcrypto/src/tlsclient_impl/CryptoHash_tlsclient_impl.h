/* -*- Mode: c++; tab-width: 4; indent-tabs-mode: t; c-basic-offset: 4 -*-
**
** Copyright (C) 2008-2010 Opera Software AS.  All rights reserved.
**
** This file is part of the Opera web browser.  It may not be distributed
** under any circumstances.
*/

#ifndef CRYPTO_HASH_TLSCLIENT_IMPL_H
#define CRYPTO_HASH_TLSCLIENT_IMPL_H

#include "modules/libcrypto/include/CryptoHash.h"


#if defined(CRYPTO_HASH_MD5_USE_CORE_IMPLEMENTATION) && defined(_SSL_USE_TLSCLIENT_)

class CryptoHashMD5: public CryptoHash
{
public:
	CryptoHashMD5(){};
	virtual inline ~CryptoHashMD5();

	virtual inline OP_STATUS InitHash();
	virtual inline void CalculateHash(const UINT8 *source, int len);
	virtual inline void CalculateHash(const char *source);
	virtual inline int BlockSize() { return 64; }
	virtual inline int Size() { return 16; } // MD5 digest length
	virtual inline void ExtractHash(UINT8 *result);

private:
	struct TLSClientMD5Context {
		UINT8 buffer[64];
		UINT64 count;
		UINT32 state[4];
	} m_md5_state;
};

#endif // defined(CRYPTO_HASH_MD5_USE_CORE_IMPLEMENTATION) && defined(_SSL_USE_TLSCLIENT_)


#if defined(CRYPTO_HASH_SHA1_USE_CORE_IMPLEMENTATION) && defined(_SSL_USE_TLSCLIENT_)

class CryptoHashSHA1: public CryptoHash
{
public:
	CryptoHashSHA1(){};
	virtual inline ~CryptoHashSHA1();

	virtual inline OP_STATUS InitHash();
	virtual inline void CalculateHash(const UINT8 *source, int len);
	virtual inline void CalculateHash(const char *source);
	virtual inline int BlockSize() { return 64; }
	virtual inline int Size() { return 20; } // SHA1 digest length
	virtual inline void ExtractHash(UINT8 *result);

private:
	struct TLSClientSHA1Context {
		UINT8 buffer[64];
		UINT64 count;
		UINT32 state[5];
	} m_sha1_state;
};

#endif // defined(CRYPTO_HASH_SHA1_USE_CORE_IMPLEMENTATION) && defined(_SSL_USE_TLSCLIENT_)


#if defined(CRYPTO_HASH_SHA256_USE_CORE_IMPLEMENTATION) && defined(_SSL_USE_TLSCLIENT_)

class CryptoHashSHA256: public CryptoHash
{
public:
	CryptoHashSHA256(){};
	virtual inline ~CryptoHashSHA256();

	virtual inline OP_STATUS InitHash();
	virtual inline void CalculateHash(const UINT8 *source, int len);
	virtual inline void CalculateHash(const char *source);
	virtual inline int BlockSize() { return 64; }
	virtual inline int Size() { return 32; } // SHA256 digest length
	virtual inline void ExtractHash(UINT8 *result);

private:
	struct TLSClientSHA256Context {
		UINT8 buffer[64];
		UINT64 count;
		UINT32 state[8];
	} m_sha256_state;
};

#endif // defined(CRYPTO_HASH_SHA256_USE_CORE_IMPLEMENTATION) && defined(_SSL_USE_TLSCLIENT_)

#endif /* CRYPTO_HASH_TLSCLIENT_IMPL_H */