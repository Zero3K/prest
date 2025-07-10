/* -*- Mode: c++; tab-width: 4; indent-tabs-mode: t; c-basic-offset: 4 -*-
**
** Copyright (C) 2024 Presto Project.  All rights reserved.
**
** This file is part of the Presto web browser.  It may not be distributed
** under any circumstances.
*/

/**
 * @file ExternalSSLLibrary.cpp
 *
 * External SSL Library object creation function for TLSClient.
 *
 */
#include "core/pch.h"

#ifdef EXTERNAL_SSL_TLSCLIENT_IMPLEMENTATION

#include "modules/externalssl/src/ExternalSSLLibrary.h"
#include "modules/externalssl/src/tlsclient_impl/TLSClientLibrary.h"


ExternalSSLLibrary* ExternalSSLLibrary::CreateL()
{
	ExternalSSLLibrary* library = OP_NEW_L(TLSClientLibrary, ());
	return library;
}

#endif // EXTERNAL_SSL_TLSCLIENT_IMPLEMENTATION