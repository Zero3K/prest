/* -*- Mode: c++; tab-width: 4; indent-tabs-mode: t; c-basic-offset: 4 -*-
**
** Copyright (C) 1995-2008 Opera Software AS.  All rights reserved.
**
** This file is part of the Opera web browser.  It may not be distributed
** under any circumstances.
*/

#ifndef _SSL_CERT_STORE_TLSCLIENT_H_
#define _SSL_CERT_STORE_TLSCLIENT_H_

#if defined(_NATIVE_SSL_SUPPORT_) && defined(_SSL_USE_TLSCLIENT_)

class SSL_Cert_Store
{
public:
	// TLSClient certificate store - placeholder for now
	// In a real implementation, this would hold TLSClient certificate store data
	void *cert_store;

public:
	SSL_Cert_Store() : cert_store(NULL) {}
	~SSL_Cert_Store() { Shutdown(); }
	void Shutdown();
};

#endif

#endif // _SSL_CERT_STORE_TLSCLIENT_H_