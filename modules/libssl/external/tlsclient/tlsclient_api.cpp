/* -*- Mode: c++; tab-width: 4; indent-tabs-mode: nil; c-basic-offset: 4 -*-
**
** Copyright (C) 2000-2008 Opera Software AS.  All rights reserved.
**
** This file is part of the Opera web browser.  It may not be distributed
** under any circumstances.
**
** TLSClient SSL API implementation
**
*/

#include "core/pch.h"

#if defined _NATIVE_SSL_SUPPORT_ && defined _SSL_USE_TLSCLIENT_

#include "modules/libssl/ssl_api.h"
#include "modules/libssl/sslbase.h"
#include "modules/libssl/options/sslopt.h"
#include "modules/libssl/external/tlsclient/tlsclient_hash.h"
#include "modules/libssl/methods/sslnull.h"
#include "modules/libssl/methods/sslmd5sha.h"

// TLSClient-specific functions implementation
// Using the SSL_Digest_and_NID structure from tlsclient_digest.h

static const SSL_Digest_and_NID *GetSpecFromAlgorithm(SSL_HashAlgorithmType digest)
{
	size_t i;
	for(i = 0; i < CONST_ARRAY_SIZE(libssl, SSL_Digest_map); i++)
	{
		if(g_SSL_Digest_map[i].digest_type == digest)
		{
			return &g_SSL_Digest_map[i];
		}
	}
	return NULL;
}

SSL_Hash *SSL_API::CreateMessageDigest(SSL_HashAlgorithmType digest, OP_STATUS &op_err)
{
	op_err = OpStatus::OK;
	OpAutoPtr<SSL_Hash> hasher(NULL);

	switch(digest)
	{
	case SSL_NoHash:
		hasher.reset(OP_NEW(SSL_Null_Hash, ()));
		if(hasher.get() == NULL)
		{
			op_err = OpStatus::ERR_NO_MEMORY;
		}
		break;
	case SSL_MD5_SHA:
		hasher.reset(OP_NEW(SSL_MD5_SHA_Hash, ()));
		if(hasher.get() == NULL)
		{
			op_err = OpStatus::ERR_NO_MEMORY;
		}
		break;

	default:
		{
			const TLSClient_Digest_Spec *alg_spec = GetSpecFromAlgorithm(digest);

			if(alg_spec == NULL)
			{
#ifdef EXTERNAL_DIGEST_API
				extern SSL_Hash *GetExternalDigestMethod(SSL_HashAlgorithmType digest, OP_STATUS &op_err);
				hasher.reset(GetExternalDigestMethod(digest, op_err));
#endif
				if(hasher.get() == NULL && op_err == OpStatus::OK)
				{
					op_err = OpStatus::ERR_NOT_SUPPORTED;
				}
			}
			else
			{
				// Create a TLSClient hash using the simplified spec
				hasher.reset(OP_NEW(TLSClient_Hash_Simple, (alg_spec)));
				if(hasher.get() == NULL)
				{
					op_err = OpStatus::ERR_NO_MEMORY;
				}
			}
		}
		break;
	}

	return hasher.release();
}

#endif // _NATIVE_SSL_SUPPORT_ && _SSL_USE_TLSCLIENT_