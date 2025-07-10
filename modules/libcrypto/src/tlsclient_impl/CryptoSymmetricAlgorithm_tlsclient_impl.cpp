/* -*- Mode: c++; tab-width: 4; indent-tabs-mode: t; c-basic-offset: 4 -*-
**
** Copyright (C) 2008-2010 Opera Software AS.  All rights reserved.
**
** This file is part of the Opera web browser.  It may not be distributed
** under any circumstances.
*/

/**
 * @file CryptoSymmetricAlgorithm_tlsclient_impl.cpp
 *
 * This file implements the libcrypto symmetric algorithms towards the
 * TLSClient crypto library
 */

#include "core/pch.h"

#if defined(_SSL_USE_TLSCLIENT_)

#include "modules/libcrypto/src/tlsclient_impl/CryptoSymmetricAlgorithm_tlsclient_impl.h"
#include "modules/util/cleanse.h"

#ifdef CRYPTO_ENCRYPTION_AES_USE_CORE_IMPLEMENTATION

CryptoSymmetricAlgorithmAES_TLSClient::CryptoSymmetricAlgorithmAES_TLSClient(int key_size)
	: m_key_size(key_size)
{
	op_memset(&m_key_context, 0, sizeof(m_key_context));
}

CryptoSymmetricAlgorithmAES_TLSClient::~CryptoSymmetricAlgorithmAES_TLSClient()
{
	OPERA_cleanse(&m_key_context, sizeof(m_key_context));
}

CryptoSymmetricAlgorithm *CryptoSymmetricAlgorithm::CreateAES(int key_size)
{
	// Validate key size
	if (key_size != 16 && key_size != 24 && key_size != 32)
		key_size = 16; // Default to AES-128
	
	return OP_NEW(CryptoSymmetricAlgorithmAES_TLSClient, (key_size));
}

void CryptoSymmetricAlgorithmAES_TLSClient::Encrypt(const UINT8 *source, UINT8 *target)
{
	OP_ASSERT(source && target);
	
	// Placeholder AES encryption - would use TLSClient's AES functions
	// For now, XOR with key to provide basic obfuscation for linking
	for (int i = 0; i < 16; i++)
	{
		target[i] = source[i] ^ m_key_context.enc_key[i % m_key_size];
	}
}

void CryptoSymmetricAlgorithmAES_TLSClient::Decrypt(const UINT8 *source, UINT8 *target)
{
	OP_ASSERT(source && target);
	
	// Placeholder AES decryption - would use TLSClient's AES functions
	// For now, XOR with key to provide basic deobfuscation for linking
	for (int i = 0; i < 16; i++)
	{
		target[i] = source[i] ^ m_key_context.dec_key[i % m_key_size];
	}
}

OP_STATUS CryptoSymmetricAlgorithmAES_TLSClient::SetEncryptKey(const UINT8 *key)
{
	if (!key)
		return OpStatus::ERR_OUT_OF_RANGE;

	op_memcpy(m_key_context.key, key, m_key_size);
	op_memcpy(m_key_context.enc_key, key, m_key_size);
	
	// Set key rounds based on key size
	switch (m_key_size)
	{
		case 16: m_key_context.rounds = 10; break; // AES-128
		case 24: m_key_context.rounds = 12; break; // AES-192
		case 32: m_key_context.rounds = 14; break; // AES-256
		default: return OpStatus::ERR_OUT_OF_RANGE;
	}
	
	return OpStatus::OK;
}

OP_STATUS CryptoSymmetricAlgorithmAES_TLSClient::SetDecryptKey(const UINT8 *key)
{
	if (!key)
		return OpStatus::ERR_OUT_OF_RANGE;

	op_memcpy(m_key_context.key, key, m_key_size);
	op_memcpy(m_key_context.dec_key, key, m_key_size);
	
	// Set key rounds based on key size
	switch (m_key_size)
	{
		case 16: m_key_context.rounds = 10; break; // AES-128
		case 24: m_key_context.rounds = 12; break; // AES-192
		case 32: m_key_context.rounds = 14; break; // AES-256
		default: return OpStatus::ERR_OUT_OF_RANGE;
	}
	
	return OpStatus::OK;
}

#endif // CRYPTO_ENCRYPTION_AES_USE_CORE_IMPLEMENTATION

#ifdef CRYPTO_ENCRYPTION_3DES_USE_CORE_IMPLEMENTATION

CryptoSymmetricAlgorithm3DES_TLSClient::CryptoSymmetricAlgorithm3DES_TLSClient(int key_size)
	: m_key_size(key_size)
{
	op_memset(&m_key_context, 0, sizeof(m_key_context));
}

CryptoSymmetricAlgorithm3DES_TLSClient::~CryptoSymmetricAlgorithm3DES_TLSClient()
{
	OPERA_cleanse(&m_key_context, sizeof(m_key_context));
}

CryptoSymmetricAlgorithm *CryptoSymmetricAlgorithm::Create3DES(int key_size)
{
	// Validate key size for 3DES
	if (key_size != 16 && key_size != 24)
		return NULL;

	return OP_NEW(CryptoSymmetricAlgorithm3DES_TLSClient, (key_size));
}

void CryptoSymmetricAlgorithm3DES_TLSClient::Encrypt(const UINT8 *source, UINT8 *target)
{
	CryptFunction3DES(source, target, 1); // 1 = encrypt
}

void CryptoSymmetricAlgorithm3DES_TLSClient::Decrypt(const UINT8 *source, UINT8 *target)
{
	CryptFunction3DES(source, target, 0); // 0 = decrypt
}

OP_STATUS CryptoSymmetricAlgorithm3DES_TLSClient::SetEncryptKey(const UINT8 *key)
{
	if (!key)
		return OpStatus::ERR;

	op_memcpy(m_key_context.key1, key, 8);
	op_memcpy(m_key_context.key2, key + 8, 8);

	if (m_key_size == 24)
	{
		op_memcpy(m_key_context.key3, key + 16, 8);
	}
	else
	{
		// For 16-byte keys, key3 = key1 (2DES mode)
		op_memcpy(m_key_context.key3, key, 8);
	}

	return OpStatus::OK;
}

OP_STATUS CryptoSymmetricAlgorithm3DES_TLSClient::SetDecryptKey(const UINT8 *key)
{
	return SetEncryptKey(key);
}

void CryptoSymmetricAlgorithm3DES_TLSClient::CryptFunction3DES(const UINT8 *source, UINT8 *target, int direction)
{
	OP_ASSERT(source && target);
	
	// Placeholder 3DES implementation - would use TLSClient's 3DES functions
	// For now, provide basic XOR-based obfuscation for linking
	if (direction) // Encrypt
	{
		for (int i = 0; i < 8; i++)
		{
			UINT8 temp = source[i];
			temp ^= m_key_context.key1[i];
			temp ^= m_key_context.key2[i];
			temp ^= m_key_context.key3[i];
			target[i] = temp;
		}
	}
	else // Decrypt
	{
		for (int i = 0; i < 8; i++)
		{
			UINT8 temp = source[i];
			temp ^= m_key_context.key3[i];
			temp ^= m_key_context.key2[i];
			temp ^= m_key_context.key1[i];
			target[i] = temp;
		}
	}
}

#endif // CRYPTO_ENCRYPTION_3DES_USE_CORE_IMPLEMENTATION

#endif // defined(_SSL_USE_TLSCLIENT_)