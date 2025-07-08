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
    virtual void LoadCertificate(SSL_ASN1Cert_list &) {}
    virtual void LoadCertificate(SSL_ASN1Cert &) {}
    virtual void LoadExtraCertificate(SSL_ASN1Cert &) {}
    virtual BOOL VerifySignatures(SSL_CertificatePurpose purpose, SSL_Alert *msg=NULL,
#ifdef LIBSSL_ENABLE_CRL_SUPPORT
                        CRL_List *crl_list=NULL,
#endif
                        SSL_Options *opt = NULL,
                        BOOL standalone = FALSE) { return FALSE; }
#ifdef LIBSSL_ENABLE_CRL_SUPPORT
    virtual BOOL CollectCRLs(CRL_List *precollected_crls, CRL_List *collect_crls, BOOL &CRL_distribution) { return FALSE; }
#endif
    virtual uint24 CertificateCount() const { return 0; }
    virtual void GetValidatedCertificateChain(SSL_ASN1Cert_list &certs) {}
    virtual void GetSubjectName(uint24 item, SSL_DistinguishedName &) const {}
    virtual OP_STATUS GetSubjectName(uint24 item, OpString_list &) const { return OpStatus::ERR; }
    virtual void GetIssuerName(uint24 item, SSL_DistinguishedName &) const {}
    virtual OP_STATUS GetIssuerName(uint24 item, OpString_list &) const { return OpStatus::ERR; }
#ifdef LIBSSL_AUTO_UPDATE_ROOTS
    virtual void GetIssuerID(uint24 item, SSL_varvector32 &) const {}
    virtual void GetSubjectID(uint24 item, SSL_varvector32 &target, BOOL always_use_pubkey=FALSE) const {}
#endif
    virtual void GetServerName(uint24 item, SSL_ServerName_List &) const {}
    virtual OP_STATUS GetCertificateInfo(uint24 item, URL &target, Str::LocaleString description=Str::NOT_A_STRING, SSL_Certinfo_mode info_type= SSL_Cert_XML) const { return OpStatus::ERR; }
    virtual void GetPublicKeyHash(uint24 item, SSL_varvector16 &) const {}
    virtual void GetFingerPrint(uint24 item, SSL_varvector16 &) const {}
    virtual SSL_PublicKeyCipher *GetCipher(uint24) const { return NULL; }
    virtual uint32 KeyBitsLength(uint24) const { return 0; }
    virtual BOOL SelfSigned(uint24) const { return FALSE; }
    virtual SSL_ClientCertificateType CertificateType(uint24 item) const { return SSL_rsa_sign; }
    virtual SSL_SignatureAlgorithm CertificateSignatureAlg(uint24 item) const { return SSL_SHA_RSA; }
    virtual SSL_SignatureAlgorithm CertificateSigningKeyAlg(uint24 item) const { return SSL_SHA_RSA; }
    virtual SSL_ExpirationType CheckIsExpired(uint24, time_t spec_date=0) { return SSL_CERT_GOOD; }
#ifdef LIBSSL_AUTO_UPDATE_ROOTS
    virtual SSL_ExpirationType CheckIsExpired(uint24, OpString8 &spec_date) { return SSL_CERT_GOOD; }
#endif
    virtual OP_STATUS GetIntermediateCA_Requests(uint24 index, OpString_list &ocsp_url_strings) { return OpStatus::ERR; }
    virtual OP_STATUS GetOCSP_Request(OpString_list &ocsp_url_strings, SSL_varvector32 &binary_request
#ifndef TLS_NO_CERTSTATUS_EXTENSION
        , SSL_varvector32 &premade_ocsp_extensions
#endif
        ) { return OpStatus::ERR; }
    virtual OP_STATUS VerifyOCSP_Response(SSL_varvector32 &binary_response) { return OpStatus::ERR; }
    virtual SSL_CertificateVerification_Info *ExtractVerificationStatus(uint24 &number) { number = 0; return NULL; }
#ifdef _SSL_USE_EXTERNAL_KEYMANAGERS_
    virtual BOOL UsagePermitted(SSL_CertificatePurpose usage_type) { return FALSE; }
#endif
    virtual SSL_CertificateHandler *Fork() const { return OP_NEW(TLSClient_CertificateHandler, ()); }
#ifdef LIBSSL_AUTO_UPDATE_ROOTS
    virtual void GetPendingIssuerId(SSL_varvector32 &id) {}
#endif
};

SSL_CertificateHandler *SSL_API::CreateCertificateHandler()
{
    return OP_NEW(TLSClient_CertificateHandler, ());
}

#endif // _NATIVE_SSL_SUPPORT_ && _SSL_USE_TLSCLIENT_