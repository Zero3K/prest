/* -*- Mode: c++; tab-width: 4; indent-tabs-mode: t; c-basic-offset: 4 -*-
**
** Copyright (C) 2024 Presto Project.  All rights reserved.
**
** This file is part of the Presto web browser.  It may not be distributed
** under any circumstances.
*/

/**
 * @file TLSClientLibrary.cpp
 *
 * External SSL Library object, TLSClient implementation.
 *
 */

#include "core/pch.h"

#ifdef EXTERNAL_SSL_TLSCLIENT_IMPLEMENTATION

#include "modules/externalssl/src/tlsclient_impl/TLSClientLibrary.h"
#include "modules/util/opfile/opfile.h"

TLSClientLibrary::TLSClientLibrary()
	: m_tls_ctx(0)
{
}

TLSClientLibrary::~TLSClientLibrary()
{
	OP_ASSERT(m_tls_ctx == 0);
}

void TLSClientLibrary::InitL(const OperaInitInfo& info)
{
	// TLSClient initialization - no global library init needed
	// TLSClient handles all initialization per-context

#ifdef DIRECTORY_SEARCH_SUPPORT
	Create_TLS_Context_L();
	LoadCertsL();
#endif
}

void TLSClientLibrary::Destroy()
{
	if (m_tls_ctx)
	{
		tls_destroy_context(m_tls_ctx);
		m_tls_ctx = 0;
	}
}

void TLSClientLibrary::Create_TLS_Context_L()
{
	// Create TLS context for client connections
	OP_ASSERT(m_tls_ctx == 0);
	m_tls_ctx = tls_create_context(ISCLIENT);
	LEAVE_IF_NULL(m_tls_ctx);

	// Configure secure cipher suites for TLS 1.2/1.3
	const char* cipher_list = 
		"TLS_AES_256_GCM_SHA384:"
		"TLS_CHACHA20_POLY1305_SHA256:"
		"TLS_AES_128_GCM_SHA256:"
		"TLS_ECDHE_RSA_WITH_AES_256_GCM_SHA384:"
		"TLS_ECDHE_RSA_WITH_CHACHA20_POLY1305_SHA256:"
		"TLS_ECDHE_RSA_WITH_AES_128_GCM_SHA256:"
		"TLS_ECDHE_ECDSA_WITH_AES_256_GCM_SHA384:"
		"TLS_ECDHE_ECDSA_WITH_CHACHA20_POLY1305_SHA256:"
		"TLS_ECDHE_ECDSA_WITH_AES_128_GCM_SHA256";
	
	tls_set_cipher_list(m_tls_ctx, cipher_list);
	
	// Set verification mode to none (as mentioned in TLSClient README,
	// it doesn't perform certificate verification)
	tls_set_verify_mode(m_tls_ctx, 0);
}

#ifdef DIRECTORY_SEARCH_SUPPORT
void TLSClientLibrary::LoadCertsL()
{
	// TLSClient doesn't use traditional certificate stores
	// Certificate verification is not implemented in the base TLSClient
	// This is a placeholder for future certificate handling
}

void TLSClientLibrary::LoadCertsFromFile(OpFile& file)
{
	// Not implemented for TLSClient - certificates are handled differently
}

size_t TLSClientLibrary::ParsePEMBuffer(const char* buf, size_t buf_len)
{
	// Not implemented for TLSClient
	return 0;
}

void TLSClientLibrary::LoadPEMChunk(const char* pem_chunk, int pem_len)
{
	// Not implemented for TLSClient
}
#endif // DIRECTORY_SEARCH_SUPPORT

#endif // EXTERNAL_SSL_TLSCLIENT_IMPLEMENTATION