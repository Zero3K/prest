/* -*- Mode: c++; tab-width: 4; indent-tabs-mode: t; c-basic-offset: 4 -*-
**
** Copyright (C) 2024 Presto Project.  All rights reserved.
**
** This file is part of the Presto web browser.  It may not be distributed
** under any circumstances.
**
*/

#ifndef CRYPTO_CERTIFICATE_CHAIN_TLSCLIENT_IMPL_H_
#define CRYPTO_CERTIFICATE_CHAIN_TLSCLIENT_IMPL_H_

#if defined(CRYPTO_CERTIFICATE_VERIFICATION_USE_CORE_IMPLEMENTATION) && defined(_SSL_USE_TLSCLIENT_)

#include "modules/libcrypto/include/CryptoCertificateChain.h"
#include "modules/libcrypto/include/CryptoCertificate.h"

class CryptoCertificateChain_tlsclient_impl : public CryptoCertificateChain
{
public:
	~CryptoCertificateChain_tlsclient_impl();
	static OP_STATUS Make(CryptoCertificateChain *&chain);

	virtual OP_STATUS AddToChainBase64(const char *certificate_der);
	virtual OP_STATUS AddToChainBinary(const UINT8 *certificate_der, int length);

	virtual int GetNumberOfCertificates() const { return m_certificate_list.GetCount(); }
	virtual const CryptoCertificate* GetCertificate(int chain_index) const { return m_certificate_list.Get(chain_index); }
	virtual CryptoCertificate* GetCertificate(int chain_index) { return m_certificate_list.Get(chain_index); }
	virtual CryptoCertificate* RemoveCertificate(int chain_index) { return m_certificate_list.Remove(chain_index); }

	virtual OP_STATUS VerifyChainSignatures(VerifyStatus& reason, const CryptoCertificateStorage* ca_storage);

private:
	CryptoCertificateChain_tlsclient_impl();

	OpAutoVector<CryptoCertificate> m_certificate_list;
};

#endif // defined(CRYPTO_CERTIFICATE_VERIFICATION_USE_CORE_IMPLEMENTATION) && defined(_SSL_USE_TLSCLIENT_)
#endif /* CRYPTO_CERTIFICATE_CHAIN_TLSCLIENT_IMPL_H_ */