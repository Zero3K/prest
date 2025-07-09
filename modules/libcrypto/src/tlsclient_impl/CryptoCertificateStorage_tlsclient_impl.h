/* -*- Mode: c++; tab-width: 4; indent-tabs-mode: t; c-basic-offset: 4 -*-
**
** Copyright (C) 2024 Presto Project.  All rights reserved.
**
** This file is part of the Presto web browser.  It may not be distributed
** under any circumstances.
**
*/

#ifndef CRYPTO_CERTIFICATE_STORAGE_TLSCLIENT_IMPL_H_
#define CRYPTO_CERTIFICATE_STORAGE_TLSCLIENT_IMPL_H_

#if defined(CRYPTO_CERTIFICATE_VERIFICATION_USE_CORE_IMPLEMENTATION) && defined(_SSL_USE_TLSCLIENT_)

#include "modules/libcrypto/include/CryptoCertificateStorage.h"
#include "modules/libcrypto/include/CryptoCertificate.h"

class CryptoCertificateStorage_tlsclient_impl : public CryptoCertificateStorage
{
public:
	~CryptoCertificateStorage_tlsclient_impl();
	static OP_STATUS Create(CryptoCertificateStorage *&storage);

	virtual OP_STATUS AddToCertificateBase64(const char *certificate_der);
	virtual OP_STATUS AddPEM(const char* pem, size_t pem_len);

	int TypeCheck() const { return 0x12345679; } // Ugly cast check since we don't have dynamic cast

private:
	CryptoCertificateStorage_tlsclient_impl();

	OpAutoVector<CryptoCertificate> m_certificate_list;
};

#endif // defined(CRYPTO_CERTIFICATE_VERIFICATION_USE_CORE_IMPLEMENTATION) && defined(_SSL_USE_TLSCLIENT_)
#endif /* CRYPTO_CERTIFICATE_STORAGE_TLSCLIENT_IMPL_H_ */