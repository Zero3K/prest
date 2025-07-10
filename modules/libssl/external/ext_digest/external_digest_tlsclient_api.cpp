/* -*- Mode: c++; tab-width: 4; indent-tabs-mode: t; c-basic-offset: 4 -*-
**
** Copyright (C) 2000-2008 Opera Software AS.  All rights reserved.
**
** This file is part of the Opera web browser.  It may not be distributed
** under any circumstances.
**
** TLSClient external digest API implementation
**
*/

#include "core/pch.h"

#if defined _NATIVE_SSL_SUPPORT_ && defined EXTERNAL_DIGEST_API && defined _SSL_USE_TLSCLIENT_

#include "modules/libssl/external/ext_digest/external_digest_tlsclient.h"
#include "modules/libssl/external/ext_digest/register_digest_tlsclient.h"
#include "modules/libssl/external/ext_digest/external_digest_man.h"

OP_STATUS SSL_RegisterExternalDigest_TLSClient(
	const char *meth_name, 
	SSL_HashAlgorithmType hash_type,
	const char **domains_in, 
	int count, 
	OpDigestGetCredentialsCB   p_get_credentials,
	OpDigestParamInitCB p_parameter_init,
	int param_uid)
{
	if(meth_name == NULL)
		return OpStatus::ERR;

	External_TLSClient_Spec *new_spec = OP_NEW(External_TLSClient_Spec, ());
	if(new_spec == NULL)
		return OpStatus::ERR_NO_MEMORY;

	OP_STATUS op_err = new_spec->Construct(meth_name, hash_type, domains_in, count, 
											p_get_credentials, p_parameter_init, param_uid);
	if(OpStatus::IsError(op_err))
	{
		OP_DELETE(new_spec);
		return op_err;
	}

	op_err = g_external_digest_handler.RegisterMethod(new_spec);
	if(OpStatus::IsError(op_err))
	{
		OP_DELETE(new_spec);
		return op_err;
	}

	return OpStatus::OK;
}

#endif // EXTERNAL_DIGEST_API && _SSL_USE_TLSCLIENT_