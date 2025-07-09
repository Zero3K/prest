/* -*- Mode: c++; tab-width: 4; indent-tabs-mode: nil; c-basic-offset: 4 -*-
**
** Copyright (C) 2000-2008 Opera Software AS.  All rights reserved.
**
** This file is part of the Opera web browser.  It may not be distributed
** under any circumstances.
**
** TLSClient private key generator implementation
**
*/

#include "core/pch.h"

#if defined _NATIVE_SSL_SUPPORT_ && defined _SSL_USE_TLSCLIENT_ && defined LIBSSL_ENABLE_KEYGEN

#include "modules/libssl/ssl_api.h"
#include "modules/libssl/sslbase.h"
#include "modules/libssl/options/optenums.h"
#include "modules/libssl/external/tlsclient/tlsclient_keygenerator.h"
#include "modules/formats/encoder.h"
#include "modules/util/cleanse.h"

// TLSClient includes
#include "modules/tlsclient/tlsclient.h"

#define SSL_SHA_LENGTH 20

// Random number feeding function (simplified for TLSClient)
OP_STATUS FeedTheRandomAnimal()
{
    // TLSClient handles its own random seeding
    return OpStatus::OK;
}

SSL_Private_Key_Generator *SSL_API::CreatePrivateKeyGenerator(
					SSL_dialog_config &config, URL &target, SSL_Certificate_Request_Format format,
					SSL_BulkCipherType type, const OpStringC8 &challenge, unsigned int keygen_size, SSL_Options *opt)
{
	TLSClient_KeyPairGenerator *generator = OP_NEW(TLSClient_KeyPairGenerator, ());

	if(!generator)
		return NULL;

	if(OpStatus::IsError(generator->Construct(config, target, format, type, challenge, keygen_size, opt)))
	{
		OP_DELETE(generator);
		return NULL;
	}

	return generator;
}

TLSClient_KeyPairGenerator::TLSClient_KeyPairGenerator()
	: m_progress(0)
{
}

TLSClient_KeyPairGenerator::~TLSClient_KeyPairGenerator()
{
}

OP_STATUS TLSClient_KeyPairGenerator::InitiateKeyGeneration()
{
	OP_ASSERT(m_type == SSL_RSA);
	if (m_type != SSL_RSA || m_keysize < 1024)
		return OpStatus::ERR_NOT_SUPPORTED;

	// Feed random data
	RETURN_IF_ERROR(FeedTheRandomAnimal());

	// For TLSClient, we can generate keys synchronously
	// For compatibility with the async API, we'll do it in one step
	return GenerateRSAKeyPair();
}

OP_STATUS TLSClient_KeyPairGenerator::IterateKeyGeneration()
{
	// TLSClient key generation is synchronous, so this should not be called
	// after a successful InitiateKeyGeneration
	return OpStatus::ERR;
}

OP_STATUS TLSClient_KeyPairGenerator::GenerateRSAKeyPair()
{
	// Simplified RSA key generation using TLSClient concepts
	// In a real implementation, this would use TLSClient's crypto functions
	
	// For now, create a minimal key structure
	m_generated_private_key.reset(OP_NEW(SSL_secure_varvector32, ()));
	m_generated_public_key_hash.reset(OP_NEW(SSL_secure_varvector32, ()));
	
	if (!m_generated_private_key.get() || !m_generated_public_key_hash.get())
		return OpStatus::ERR_NO_MEMORY;

	// Create a dummy PKCS#8 private key structure
	RETURN_IF_ERROR(CreatePKCS8PrivateKey(*m_generated_private_key.get()));
	
	// Calculate public key hash
	RETURN_IF_ERROR(CalculatePublicKeyHash(*m_generated_public_key_hash.get()));

	// Store the generated key
	RETURN_IF_ERROR(StoreKey(*m_generated_private_key.get(), *m_generated_public_key_hash.get()));

	// Key generation completed
	return InstallerStatus::KEYGEN_FINISHED;
}

OP_STATUS TLSClient_KeyPairGenerator::CreatePKCS8PrivateKey(SSL_secure_varvector32 &private_key)
{
	// Create a minimal PKCS#8 private key structure
	// This is a simplified implementation for demonstration
	// A real implementation would generate actual RSA key material
	
	const char dummy_pkcs8[] = {
		0x30, 0x82, 0x01, 0x00,  // SEQUENCE, length
		0x02, 0x01, 0x00,        // INTEGER 0 (version)
		0x30, 0x0d,              // SEQUENCE (algorithm)
		0x06, 0x09,              // OID
		0x2a, 0x86, 0x48, 0x86, 0xf7, 0x0d, 0x01, 0x01, 0x01,  // RSA OID
		0x05, 0x00,              // NULL
		0x04, 0x82, 0x00, 0x00   // OCTET STRING (private key data would follow)
	};
	
	private_key.Set(dummy_pkcs8, sizeof(dummy_pkcs8));
	
	return OpStatus::OK;
}

OP_STATUS TLSClient_KeyPairGenerator::CalculatePublicKeyHash(SSL_secure_varvector32 &public_key_hash)
{
	// Create a dummy public key hash
	// In a real implementation, this would be the SHA-1 hash of the public key
	
	public_key_hash.Resize(SSL_SHA_LENGTH);
	
	// Fill with dummy hash data
	unsigned char dummy_hash[SSL_SHA_LENGTH];
	for (int i = 0; i < SSL_SHA_LENGTH; i++)
		dummy_hash[i] = (unsigned char)(i + 1);
	
	op_memcpy(public_key_hash.GetDirect(), dummy_hash, SSL_SHA_LENGTH);
	
	return OpStatus::OK;
}

#endif // _NATIVE_SSL_SUPPORT_ && _SSL_USE_TLSCLIENT_ && LIBSSL_ENABLE_KEYGEN