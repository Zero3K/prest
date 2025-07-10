/* -*- Mode: c++; tab-width: 4; indent-tabs-mode: t; c-basic-offset: 4 -*-
**
** Copyright (C) 2008-2010 Opera Software AS.  All rights reserved.
**
** This file is part of the Opera web browser.  It may not be distributed
** under any circumstances.
*/

#ifndef CRYPTO_SIGNATURE_TLSCLIENT_IMPL_H
#define CRYPTO_SIGNATURE_TLSCLIENT_IMPL_H

#include "modules/libcrypto/include/CryptoSignature.h"

#if defined(_SSL_USE_TLSCLIENT_) && defined(CRYPTO_CERTIFICATE_VERIFICATION_USE_CORE_IMPLEMENTATION)

class CryptoSignature_TLSClient: public CryptoSignature
{
public:
	CryptoSignature_TLSClient(CryptoCipherAlgorithm cipher_algorithm, CryptoHashAlgorithm hash_algorithm);
	virtual ~CryptoSignature_TLSClient();

	virtual OP_STATUS SetPublicKey(const UINT8 *public_key, int key_length);
	virtual OP_STATUS VerifyASN1(const UINT8 *hash_reference, int reference_length, UINT8 *signature_asn_format, int signature_length);
	virtual OP_STATUS Verify(const UINT8 *hash_reference, int reference_length, const UINT8 *signature, int signature_length);

private:
	CryptoCipherAlgorithm m_cipher_algorithm;
	CryptoHashAlgorithm m_hash_algorithm;
	
	struct TLSClientKeyContext {
		UINT8 *key_data;
		int key_length;
		int key_type; // 0 = RSA, 1 = DSA (not supported)
	} m_keyspec;
};

#endif // defined(_SSL_USE_TLSCLIENT_) && defined(CRYPTO_CERTIFICATE_VERIFICATION_USE_CORE_IMPLEMENTATION)

#endif /* CRYPTO_SIGNATURE_TLSCLIENT_IMPL_H */