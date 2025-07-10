/* -*- Mode: c++; tab-width: 4; indent-tabs-mode: t; c-basic-offset: 4 -*-
**
** Copyright (C) 2000-2008 Opera Software AS.  All rights reserved.
**
** This file is part of the Opera web browser.  It may not be distributed
** under any circumstances.
**
** TLSClient external digest registration API
**
*/

#ifndef _REGISTER_DIGEST_TLSCLIENT_H_
#define _REGISTER_DIGEST_TLSCLIENT_H_

#if defined _NATIVE_SSL_SUPPORT_ && defined EXTERNAL_DIGEST_API && defined _SSL_USE_TLSCLIENT_

#include "modules/libssl/base/sslenum.h"

/**
 * Register a TLSClient-based external digest method with libssl
 *
 * @param meth_name Name of the method
 * @param hash_type SSL hash algorithm type
 * @param domains_in List of domains for which this digest is valid
 * @param count Number of domains
 * @param p_get_credentials Callback for getting credentials
 * @param p_parameter_init Callback for parameter initialization
 * @param param_uid Unique parameter ID
 * @return OP_STATUS error code
 */
OP_STATUS SSL_RegisterExternalDigest_TLSClient(
	const char *meth_name, 
	SSL_HashAlgorithmType hash_type,
	const char **domains_in, 
	int count, 
	OpDigestGetCredentialsCB   p_get_credentials,
	OpDigestParamInitCB p_parameter_init,
	int param_uid);

#endif // EXTERNAL_DIGEST_API && _SSL_USE_TLSCLIENT_

#endif // _REGISTER_DIGEST_TLSCLIENT_H_