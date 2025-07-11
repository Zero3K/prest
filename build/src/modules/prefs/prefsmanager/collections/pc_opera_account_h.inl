/* -*- Mode: c++; tab-width: 4; indent-tabs-mode: t; c-basic-offset: 4 -*-
**
** Copyright (C) 1995-2017 Opera Software AS.  All rights reserved.
**
** This file is part of the Opera web browser.  It may not be distributed
** under any circumstances.
*/

// Please don't modify this file.

// This file is automatically generated by modules/prefs/prefsmanager/collections/make-prefs.py

/** Enumeration of all string preferences in this collection. */
enum stringpref
{
#ifdef WEBSERVER_SUPPORT
	ComputerID, ///< Unique computer id
#endif
#ifdef OPERA_AUTH_SUPPORT
	OAuthOperaAccountConsumerKey, ///< Non secret oauth consumer key for Opera Account login.
	OAuthOperaAccountConsumerSecret, ///< Non secret oauth consumer secret for Opera Account login.
	OAuthOperaAccountAccessTokenURI, ///< URI for downloading the Oauth token.
#endif
	ServerAddress, ///< Server Address
	Username, ///< Username for the currently logged on my.opera user

	DummyLastStringPref
};
#define PCOPERA_ACCOUNT_NUMBEROFSTRINGPREFS static_cast<int>(PrefsCollectionOperaAccount::DummyLastStringPref)

/** Enumeration of all integer preferences in this collection. */
enum integerpref
{
	OperaAccountUsed, ///< Indicates whether the Opera account has been used
	SavePassword, ///< Save password for opera account

	DummyLastIntegerPref
};
#define PCOPERA_ACCOUNT_NUMBEROFINTEGERPREFS static_cast<int>(PrefsCollectionOperaAccount::DummyLastIntegerPref)

