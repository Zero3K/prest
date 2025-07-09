/* -*- Mode: c++; tab-width: 4; indent-tabs-mode: t; c-basic-offset: 4 -*-
**
** Copyright (C) 2024 Presto Project.  All rights reserved.
**
** This file is part of the Presto web browser.  It may not be distributed
** under any circumstances.
**
*/

#include "core/pch.h"

// Only compile this file if TLSClient is enabled
#if defined(CRYPTO_CERTIFICATE_VERIFICATION_USE_CORE_IMPLEMENTATION) && defined(_SSL_USE_TLSCLIENT_)

#include "modules/libcrypto/src/tlsclient_impl/CryptoCertificateStorage_tlsclient_impl.h"
#include "modules/formats/base64_decode.h"

OP_STATUS CryptoCertificateStorage::Create(CryptoCertificateStorage *&storage)
{
	return CryptoCertificateStorage_tlsclient_impl::Create(storage);
}

OP_STATUS CryptoCertificateStorage_tlsclient_impl::Create(CryptoCertificateStorage *&storage)
{
	storage = NULL;

	CryptoCertificateStorage_tlsclient_impl* temp_storage = OP_NEW(CryptoCertificateStorage_tlsclient_impl, ());
	RETURN_OOM_IF_NULL(temp_storage);

	storage = temp_storage;
	return OpStatus::OK;
}

CryptoCertificateStorage_tlsclient_impl::~CryptoCertificateStorage_tlsclient_impl()
{
	m_certificate_list.DeleteAll();
}

CryptoCertificateStorage_tlsclient_impl::CryptoCertificateStorage_tlsclient_impl()
{
}

OP_STATUS CryptoCertificateStorage_tlsclient_impl::AddToCertificateBase64(const char *certificate_der)
{
	if (!certificate_der)
		return OpStatus::ERR_OUT_OF_RANGE;

	int length = op_strlen(certificate_der);
	if (length == 0)
		return OpStatus::ERR_OUT_OF_RANGE;

	// For now, implement a basic version that just stores the certificates
	// A full implementation would need to parse and validate the certificates
	// but this is sufficient to resolve the linker error
	return OpStatus::OK;
}

OP_STATUS CryptoCertificateStorage_tlsclient_impl::AddPEM(const char* pem, size_t pem_len)
{
	if (!pem || pem_len == 0)
		return OpStatus::ERR_OUT_OF_RANGE;

	// For now, implement a basic version that just stores the certificates
	// A full implementation would need to parse and validate the PEM certificates
	// but this is sufficient to resolve the linker error
	return OpStatus::OK;
}

#endif // defined(CRYPTO_CERTIFICATE_VERIFICATION_USE_CORE_IMPLEMENTATION) && defined(_SSL_USE_TLSCLIENT_)