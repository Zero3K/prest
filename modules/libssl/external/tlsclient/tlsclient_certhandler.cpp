/* -*- Mode: c++; tab-width: 4; indent-tabs-mode: nil; c-basic-offset: 4 -*-
**
** Copyright (C) 2000-2008 Opera Software AS.  All rights reserved.
**
** This file is part of the Opera web browser.  It may not be distributed
** under any circumstances.
**
** TLSClient certificate handler implementation
**
*/

#include "core/pch.h"

#if defined _NATIVE_SSL_SUPPORT_ && defined _SSL_USE_TLSCLIENT_

#include "modules/libssl/ssl_api.h"
#include "modules/libssl/sslbase.h"
#include "modules/libssl/certs/certhandler.h"

// Forward declaration for TLSClient certificate handler
class TLSClient_CertificateHandler : public SSL_CertificateHandler
{
public:
    TLSClient_CertificateHandler() {}
    virtual ~TLSClient_CertificateHandler() {}
    
    // Stub implementations of pure virtual methods
    virtual void LoadCertificate(SSL_ASN1Cert_list &) override {}
    virtual void LoadCertificate(SSL_ASN1Cert &) override {}
    virtual void LoadExtraCertificate(SSL_ASN1Cert &) override {}
    virtual BOOL VerifySignatures(SSL_CertificatePurpose purpose, SSL_Alert *msg=NULL,
#ifdef LIBSSL_ENABLE_CRL_SUPPORT
                        CRL_List *crl_list=NULL,
#endif
                        SSL_Options *opt = NULL,
                        BOOL standalone = FALSE) override { return FALSE; }
#ifdef LIBSSL_ENABLE_CRL_SUPPORT
    virtual BOOL CollectCRLs(CRL_List *precollected_crls, CRL_List *collect_crls, BOOL &CRL_distribution) override { return FALSE; }
#endif
    virtual uint24 CertificateCount() const override { return 0; }
    virtual void GetValidatedCertificateChain(SSL_ASN1Cert_list &certs) override {}
    virtual void GetSubjectName(uint24 item, SSL_DistinguishedName &) const override {}
    virtual OP_STATUS GetSubjectName(uint24 item, OpString_list &) const override { return OpStatus::ERR; }
    virtual void GetIssuerName(uint24 item, SSL_DistinguishedName &) const override {}
    virtual OP_STATUS GetIssuerName(uint24 item, OpString_list &) const override { return OpStatus::ERR; }
#ifdef LIBSSL_AUTO_UPDATE_ROOTS
    virtual void GetIssuerID(uint24 item, SSL_varvector32 &) const override {}
    virtual void GetSubjectID(uint24 item, SSL_varvector32 &target, BOOL always_use_pubkey=FALSE) const override {}
#endif
    virtual void GetServerName(uint24 item, SSL_ServerName_List &) const override {}
    virtual OP_STATUS GetCertificateInfo(uint24 item, URL &target, Str::LocaleString description=Str::NOT_A_STRING, SSL_Certinfo_mode info_type= SSL_Cert_XML) const override { return OpStatus::ERR; }
    virtual void GetPublicKeyHash(uint24 item, SSL_varvector16 &) const override {}
    virtual void GetFingerPrint(uint24 item, SSL_varvector16 &) const override {}
    virtual SSL_PublicKeyCipher *GetCipher(uint24) const override { return NULL; }
    virtual uint32 KeyBitsLength(uint24) const override { return 0; }
    virtual BOOL SelfSigned(uint24) const override { return FALSE; }
    virtual SSL_ClientCertificateType CertificateType(uint24 item) const override { return SSL_rsa_sign; }
    virtual SSL_SignatureAlgorithm CertificateSignatureAlg(uint24 item) const override { return SSL_SHA_RSA; }
    virtual SSL_SignatureAlgorithm CertificateSigningKeyAlg(uint24 item) const override { return SSL_SHA_RSA; }
    virtual SSL_ExpirationType CheckIsExpired(uint24, time_t spec_date=0) override { return SSL_CERT_GOOD; }
#ifdef LIBSSL_AUTO_UPDATE_ROOTS
    virtual SSL_ExpirationType CheckIsExpired(uint24, OpString8 &spec_date) override { return SSL_CERT_GOOD; }
#endif
    virtual OP_STATUS GetIntermediateCA_Requests(uint24 index, OpString_list &ocsp_url_strings) override { return OpStatus::ERR; }
    virtual OP_STATUS GetOCSP_Request(OpString_list &ocsp_url_strings, SSL_varvector32 &binary_request
#ifndef TLS_NO_CERTSTATUS_EXTENSION
        , SSL_varvector32 &premade_ocsp_extensions
#endif
        ) override { return OpStatus::ERR; }
    virtual OP_STATUS VerifyOCSP_Response(SSL_varvector32 &binary_response) override { return OpStatus::ERR; }
    virtual SSL_CertificateVerification_Info *ExtractVerificationStatus(uint24 &number) override { number = 0; return NULL; }
#ifdef _SSL_USE_EXTERNAL_KEYMANAGERS_
    virtual BOOL UsagePermitted(SSL_CertificatePurpose usage_type) override { return FALSE; }
#endif
    virtual SSL_CertificateHandler *Fork() const override { return OP_NEW(TLSClient_CertificateHandler, ()); }
#ifdef LIBSSL_AUTO_UPDATE_ROOTS
    virtual void GetPendingIssuerId(SSL_varvector32 &id) override {}
#endif
};

SSL_CertificateHandler *SSL_API::CreateCertificateHandler()
{
    return OP_NEW(TLSClient_CertificateHandler, ());
}

#endif // _NATIVE_SSL_SUPPORT_ && _SSL_USE_TLSCLIENT_