/* -*- Mode: c++; tab-width: 4; indent-tabs-mode: t; c-basic-offset: 4 -*-
**
** Copyright (C) 2024 Presto Project.  All rights reserved.
**
** This file is part of the Presto web browser.  It may not be distributed
** under any circumstances.
*/

/**
 * @file TLSClientLibrary.h
 *
 * External SSL Library object, TLSClient implementation.
 *
 * Main purposes of this class:
 * 1) Initialization/uninitialization of the TLSClient Library.
 * 2) Storing TLSClient Library global data.
 *
 */

#ifndef TLSCLIENT_LIBRARY_H
#define TLSCLIENT_LIBRARY_H

#include "modules/externalssl/src/ExternalSSLLibrary.h"
#include "modules/tlsclient/tlsclient.h"

class TLSClientLibrary: public ExternalSSLLibrary
{
public:
	TLSClientLibrary();
	virtual ~TLSClientLibrary();

public:
	// ExternalSSLLibrary methods.
	virtual void InitL(const OperaInitInfo& info);
	virtual void Destroy();
	virtual void* GetGlobalData() { return reinterpret_cast <void*> (this); }

public:
	TLSContext* Get_TLS_Context() { return m_tls_ctx; }

private:
	void Create_TLS_Context_L();
#ifdef DIRECTORY_SEARCH_SUPPORT
	void LoadCertsL();
	void LoadCertsFromFile(OpFile& file);
	size_t ParsePEMBuffer(const char* buf, size_t buf_len);
	void LoadPEMChunk(const char* pem_chunk, int pem_len);
#else
	// No certs will be loaded on startup, so all cert checks will fail.
#endif

private:
	TLSContext* m_tls_ctx;
};

#endif // TLSCLIENT_LIBRARY_H