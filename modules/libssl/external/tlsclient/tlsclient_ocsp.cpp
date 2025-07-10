/* -*- Mode: c++; tab-width: 4; indent-tabs-mode: nil; c-basic-offset: 4 -*-
**
** Copyright (C) 2000-2008 Opera Software AS.  All rights reserved.
**
** This file is part of the Opera web browser.  It may not be distributed
** under any circumstances.
**
** TLSClient OCSP support
**
*/

#include "core/pch.h"

#if defined _NATIVE_SSL_SUPPORT_ && defined _SSL_USE_TLSCLIENT_

#include "modules/libssl/sslbase.h"
#include "modules/libssl/base/sslvar.h"

// TLSClient implementation of OCSP extensions
// This is a simplified version for TLSClient compatibility
OP_STATUS CreateOCSP_Extensions(SSL_varvector16 &extenions)
{
    // TLSClient handles OCSP extensions internally
    // For now, we'll create an empty extensions list
    extenions.Resize(0);
    
    // In a full implementation, this would create proper OCSP extensions
    // But for basic TLSClient functionality, an empty list is sufficient
    return OpStatus::OK;
}

#endif // _NATIVE_SSL_SUPPORT_ && _SSL_USE_TLSCLIENT_