/* -*- Mode: c++; tab-width: 4; indent-tabs-mode: t; c-basic-offset: 4 -*-
**
** Copyright (C) 2000-2008 Opera Software AS.  All rights reserved.
**
** This file is part of the Opera web browser.  It may not be distributed
** under any circumstances.
**
** TLSClient implementation of external digest functionality
**
*/

#ifndef _EXTERNAL_DIGEST_TLSCLIENT_H_
#define _EXTERNAL_DIGEST_TLSCLIENT_H_

#if defined _NATIVE_SSL_SUPPORT_ && defined EXTERNAL_DIGEST_API && defined _SSL_USE_TLSCLIENT_

#include "modules/libssl/methods/sslghash.h"

class External_TLSClient_Spec : public External_Digest_Handler
{
private:
	OpDigestParamInitCB parameter_init;
	OpDigestGetCredentialsCB   get_credentials;
	SSL_HashAlgorithmType hash_type;

public:

	External_TLSClient_Spec();
	~External_TLSClient_Spec();

	OP_STATUS Construct(
		const char *meth_name, 
		SSL_HashAlgorithmType hash_type,
		const char **domains_in, 
		int count, 
		OpDigestGetCredentialsCB   p_get_credentials,
		OpDigestParamInitCB p_parameter_init,
		int param_uid);

	SSL_HashAlgorithmType GetHashType() const{return hash_type;}

	virtual OP_STATUS	GetDigest(SSL_Hash *&digest);
	virtual OP_STATUS	GetCredentials(BOOL &retrieved_credentials, OpString &username, OpString &password, const void *parameters);
	OP_STATUS			PerformInitOperation(SSL_Hash *digest, int operation, void *params);
};

class External_TLSClient_Digest : public SSL_GeneralHash
{
	OpSmartPointerWithDelete<External_TLSClient_Spec> spec;

public:

	/** constructor */
	External_TLSClient_Digest(External_TLSClient_Spec *_spec);
	
	/** copy constructor */
	External_TLSClient_Digest(External_TLSClient_Digest *old);

	/** Destructor */
	~External_TLSClient_Digest();

	OP_STATUS PerformInitOperation(int operation, void *params);

	SSL_Hash *Fork();
};

#endif // EXTERNAL_DIGEST_API && _SSL_USE_TLSCLIENT_

#endif // _EXTERNAL_DIGEST_TLSCLIENT_H_