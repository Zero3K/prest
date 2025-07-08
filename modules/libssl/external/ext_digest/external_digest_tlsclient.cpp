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

#include "core/pch.h"

#if defined _NATIVE_SSL_SUPPORT_ && defined EXTERNAL_DIGEST_API && defined _SSL_USE_TLSCLIENT_

#include "modules/libssl/external/ext_digest/external_digest_tlsclient.h"
#include "modules/libssl/methods/sslghash.h"

External_TLSClient_Spec::External_TLSClient_Spec()
{
	parameter_init = NULL;
	get_credentials = NULL;
	hash_type = SSL_NoHash;
}

External_TLSClient_Spec::~External_TLSClient_Spec()
{
}

OP_STATUS External_TLSClient_Spec::Construct(
	const char *meth_name, 
	SSL_HashAlgorithmType hash_type_param,
	const char **domains_in, 
	int count, 
	OpDigestGetCredentialsCB   p_get_credentials,
	OpDigestParamInitCB p_parameter_init,
	int param_uid)
{
	OP_STATUS op_err = OpStatus::OK;

	op_err = External_Digest_Handler::Construct(meth_name, domains_in, count, param_uid);
	if(OpStatus::IsError(op_err))
		return op_err;

	hash_type = hash_type_param;
	get_credentials = p_get_credentials;
	parameter_init = p_parameter_init;

	return OpStatus::OK;
}

OP_STATUS External_TLSClient_Spec::GetDigest(SSL_Hash *&digest)
{
	digest = NULL;

	External_TLSClient_Digest *new_digest = OP_NEW(External_TLSClient_Digest, (this));
	if(new_digest == NULL)
		return OpStatus::ERR_NO_MEMORY;

	OP_STATUS op_err = new_digest->InitHash();
	if(OpStatus::IsError(op_err))
	{
		OP_DELETE(new_digest);
		return op_err;
	}

	digest = new_digest;
	return OpStatus::OK;
}

OP_STATUS External_TLSClient_Spec::GetCredentials(BOOL &retrieved_credentials, OpString &username, OpString &password, const void *parameters)
{
	retrieved_credentials = FALSE;
	
	if(get_credentials == NULL)
		return OpStatus::OK;

	return get_credentials(retrieved_credentials, username, password, parameters);
}

OP_STATUS External_TLSClient_Spec::PerformInitOperation(SSL_Hash *digest, int operation, void *params)
{
	if(parameter_init == NULL)
		return OpStatus::OK;

	return parameter_init(digest, operation, params);
}

External_TLSClient_Digest::External_TLSClient_Digest(External_TLSClient_Spec *_spec)
: SSL_GeneralHash(_spec->GetHashType())
{
	spec = _spec;
}

External_TLSClient_Digest::External_TLSClient_Digest(External_TLSClient_Digest *old)
: SSL_GeneralHash(old)
{
	spec = old->spec;
}

External_TLSClient_Digest::~External_TLSClient_Digest()
{
}

OP_STATUS External_TLSClient_Digest::PerformInitOperation(int operation, void *params)
{
	if(spec.get() == NULL)
		return OpStatus::ERR;

	return spec->PerformInitOperation(this, operation, params);
}

SSL_Hash *External_TLSClient_Digest::Fork()
{
	External_TLSClient_Digest *new_digest = OP_NEW(External_TLSClient_Digest, (this));
	if(new_digest == NULL)
		return NULL;

	if(OpStatus::IsError(new_digest->InitHash()))
	{
		OP_DELETE(new_digest);
		return NULL;
	}

	return new_digest;
}

#endif // EXTERNAL_DIGEST_API && _SSL_USE_TLSCLIENT_