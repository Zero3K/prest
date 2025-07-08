/* -*- Mode: c++; tab-width: 4; indent-tabs-mode: nil; c-basic-offset: 4 -*-
**
** Copyright (C) 2000-2008 Opera Software AS.  All rights reserved.
**
** This file is part of the Opera web browser.  It may not be distributed
** under any circumstances.
**
** TLSClient PKCS12 certificate export/import implementation
**
*/

#include "core/pch.h"

#if defined _NATIVE_SSL_SUPPORT_ && defined _SSL_USE_TLSCLIENT_

#include "modules/libssl/options/sslopt.h"
#include "modules/libssl/ui/certinst.h"

// PKCS12 export implementation for TLSClient
BOOL SSL_Options::ExportPKCS12_Key_and_Certificate(
    const OpStringC &filename,
    SSL_secure_varvector32 &priv_key, 
    int n,
    const OpStringC8 &password)
{
    // TLSClient PKCS12 export implementation
    // For now, return error indicating feature not implemented
    return FALSE;
}

// Certificate extraction implementation for TLSClient  
OP_STATUS ExtractCertificates(
    SSL_varvector32 &input, 
    const OpStringC8 &pkcs12_password,
    SSL_ASN1Cert_list &certificate_list, 
    SSL_secure_varvector32 &private_key, 
    SSL_varvector16 &pub_key_hash, 
    uint16 &bits, 
    SSL_BulkCipherType &type)
{
    // TLSClient certificate extraction implementation
    // For now, return error indicating feature not implemented
    return OpStatus::ERR_NOT_SUPPORTED;
}

#endif // _NATIVE_SSL_SUPPORT_ && _SSL_USE_TLSCLIENT_