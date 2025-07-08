/* -*- Mode: c++; tab-width: 4; indent-tabs-mode: t; c-basic-offset: 4 -*-
**
** Copyright (C) 2008-2010 Opera Software AS.  All rights reserved.
**
** This file is part of the Opera web browser.  It may not be distributed
** under any circumstances.
*/

#ifndef CRYPTO_SYMMETRIC_ALGORITHM_TLSCLIENT_IMPL_H
#define CRYPTO_SYMMETRIC_ALGORITHM_TLSCLIENT_IMPL_H

#include "modules/libcrypto/include/CryptoSymmetricAlgorithm.h"

#if defined(_SSL_USE_TLSCLIENT_)

#ifdef CRYPTO_ENCRYPTION_AES_USE_CORE_IMPLEMENTATION

class CryptoSymmetricAlgorithmAES_TLSClient: public CryptoSymmetricAlgorithm
{
public:
	CryptoSymmetricAlgorithmAES_TLSClient(int key_size);
	virtual ~CryptoSymmetricAlgorithmAES_TLSClient();

	virtual void Encrypt(const UINT8 *source, UINT8 *target);
	virtual void Decrypt(const UINT8 *source, UINT8 *target);
	virtual OP_STATUS SetEncryptKey(const UINT8 *key);
	virtual OP_STATUS SetDecryptKey(const UINT8 *key);
	virtual int GetKeySize() const { return m_key_size; }
	virtual int GetBlockSize() const { return 16; } // AES block size is always 16 bytes

private:
	int m_key_size;
	struct TLSClientAESContext {
		UINT8 key[32]; // Max AES key size (256 bits)
		UINT8 enc_key[32];
		UINT8 dec_key[32];
		int rounds;
	} m_key_context;
};

#endif // CRYPTO_ENCRYPTION_AES_USE_CORE_IMPLEMENTATION

#ifdef CRYPTO_ENCRYPTION_3DES_USE_CORE_IMPLEMENTATION

class CryptoSymmetricAlgorithm3DES_TLSClient: public CryptoSymmetricAlgorithm
{
public:
	CryptoSymmetricAlgorithm3DES_TLSClient(int key_size);
	virtual ~CryptoSymmetricAlgorithm3DES_TLSClient();

	virtual void Encrypt(const UINT8 *source, UINT8 *target);
	virtual void Decrypt(const UINT8 *source, UINT8 *target);
	virtual OP_STATUS SetEncryptKey(const UINT8 *key);
	virtual OP_STATUS SetDecryptKey(const UINT8 *key);
	virtual int GetKeySize() const { return m_key_size; }
	virtual int GetBlockSize() const { return 8; } // 3DES block size is 8 bytes

private:
	int m_key_size;
	struct TLSClient3DESContext {
		UINT8 key1[8];
		UINT8 key2[8];
		UINT8 key3[8];
	} m_key_context;
	
	void CryptFunction3DES(const UINT8 *source, UINT8 *target, int direction);
};

#endif // CRYPTO_ENCRYPTION_3DES_USE_CORE_IMPLEMENTATION

#endif // defined(_SSL_USE_TLSCLIENT_)

#endif /* CRYPTO_SYMMETRIC_ALGORITHM_TLSCLIENT_IMPL_H */