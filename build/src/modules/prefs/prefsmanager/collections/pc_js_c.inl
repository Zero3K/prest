/* -*- Mode: c++; tab-width: 4; indent-tabs-mode: t; c-basic-offset: 4 -*-
**
** Copyright (C) 1995-2017 Opera Software AS.  All rights reserved.
**
** This file is part of the Opera web browser.  It may not be distributed
** under any circumstances.
*/

// Please don't modify this file.

// This file is automatically generated by modules/hardcore/scripts/generate_prefs.py

INITSTRINGS(PrefsCollectionJS, PCJS_NUMBEROFSTRINGPREFS)
{
	INITSTART
	/* Section, Key, Default */
#ifdef ES_OVERRIDE_FPMODE
	P(SExtensions, "EcmaScriptFPMode", UNI_L("sse2")),
#endif
#if defined SUPPORT_DEBUGGING_SHELL && !defined PREFS_TOOLS_PROXY
	P(SExtensions, "OpShell Proxy IP", UNI_L("127.0.0.1")),
#endif
#if defined ECMASCRIPT_REMOTE_DEBUGGER && !defined PREFS_TOOLS_PROXY
	P(SExtensions, "Remote Script Debugger IP", UNI_L("127.0.0.1")),
#endif
	P(SSpecial, "JavaScript AppCodeName", UNI_L("Mozilla")),
	P(SSpecial, "JavaScript AppName", UNI_L("Netscape")),
#ifdef VEGA_3DDEVICE
	P(SSpecial, "JavaScript HWA DOM Object Access", UNI_L("bugs.opera.com")),
#endif
	P(SSpecial, "JavaScript IE AppName", UNI_L("Microsoft Internet Explorer")),
	P(SSpecial, "JavaScript Opera AppName", UNI_L("Opera")),
#ifdef WEB_HANDLERS_SUPPORT
	P(SUserPrefs, "Disallowed Web Handlers", UNI_L("")),
#endif
#ifdef USER_JAVASCRIPT
	P(SUserPrefs, "User JavaScript File", UNI_L("")),
#endif

	// Sentinel, always the last entry
	P(SNone, NULL, NULL)
	INITEND
};

INITINTS(PrefsCollectionJS, PCJS_NUMBEROFINTEGERPREFS)
{
	INITSTART
	/* Section, Key, Default */
#ifdef DELAYED_SCRIPT_EXECUTION
	I(SExtensions, "Delayed Script Execution", DEFAULT_DELAYED_SCRIPT_EXECUTION, prefssetting::boolean),
#endif
#ifdef ES_HARDCORE_GC_MODE
	I(SExtensions, "EcmaScriptHardcoreGCMode", FALSE, prefssetting::boolean),
#endif
#ifdef ECMASCRIPT_NATIVE_SUPPORT
	I(SExtensions, "EcmaScriptJIT", DEFAULT_ECMASCRIPT_JIT, prefssetting::boolean),
#endif
#if defined SUPPORT_DEBUGGING_SHELL && !defined PREFS_TOOLS_PROXY
	I(SExtensions, "OpShell Proxy Port", 7000, prefssetting::integer),
#endif
#if defined ECMASCRIPT_DEBUGGER && defined ECMASCRIPT_REMOTE_DEBUGGER && !defined PREFS_TOOLS_PROXY
	I(SExtensions, "Remote Script Debugger", REMOTE_SCRIPT_DEBUGGER_OFF, prefssetting::integer),
	I(SExtensions, "Remote Script Debugger Port", 9999, prefssetting::integer),
#endif
#if defined ECMASCRIPT_DEBUGGER && !defined PREFS_SCRIPT_DEBUG
	I(SExtensions, "Script Debugger", FALSE, prefssetting::boolean),
#endif
	I(SExtensions, "Scripting", TRUE, prefssetting::boolean),
#ifdef CANVAS3D_SUPPORT
	I(SExtensions, "Shader Validation", DEFAULT_SHADER_VALIDATION, prefssetting::boolean),
#endif
#ifdef SPECULATIVE_PARSER
	I(SExtensions, "Speculative Parser", TRUE, prefssetting::boolean),
#endif
#ifdef DOM_DEVICE_ORIENTATION_EVENT_SUPPORT
	I(SOrientation, "Enable Orientation and Motion sensors", TRUE, prefssetting::boolean),
#endif
#ifdef USER_JAVASCRIPT
	I(SUserPrefs, "Always Load User JavaScript", FALSE, prefssetting::boolean),
#endif
#ifdef DOM_BROWSERJS_SUPPORT
	I(SUserPrefs, "Browser JavaScript", 1, prefssetting::integer),
#endif
#ifdef PREFS_HAVE_BROWSERJS_TIMESTAMP
	I(SUserPrefs, "Browser JavaScript Server Timestamp", 0, prefssetting::integer),
	I(SUserPrefs, "Browser JavaScript Timestamp", 0, prefssetting::integer),
#endif
#ifdef DOM_STREAM_API_SUPPORT
	I(SUserPrefs, "Camera access permission", MAYBE, prefssetting::integer),
#endif
#ifdef DOM_FULLSCREEN_MODE
	I(SUserPrefs, "Chromeless DOM Fullscreen", TRUE, prefssetting::boolean),
#endif
#ifdef GEOLOCATION_SUPPORT
	I(SUserPrefs, "Geolocation site state", MAYBE, prefssetting::integer),
#endif
	I(SUserPrefs, "Ignore Unrequested Popups", DEFAULT_IGNOREUNREQUESTEDPOPUPS, prefssetting::boolean),
#if defined DOCUMENT_EDIT_SUPPORT && defined USE_OP_CLIPBOARD
	I(SUserPrefs, "Let Site Access Clipboard", FALSE, prefssetting::boolean),
#endif
#ifdef DOM_WEBWORKERS_SUPPORT
	I(SUserPrefs, "Max Web Workers Per Session", DEFAULT_MAX_WEBWORKERS_PER_SESSION, prefssetting::integer),
	I(SUserPrefs, "Max Web Workers Per Window", DEFAULT_MAX_WEBWORKERS_PER_WINDOW, prefssetting::integer),
#endif
	I(SUserPrefs, "Script Spoof", UA_NotOverridden, prefssetting::integer),
	I(SUserPrefs, "Target Destination", POPUP_WIN_NEW, prefssetting::integer),
#ifdef USER_JAVASCRIPT
	I(SUserPrefs, "User JavaScript", FALSE, prefssetting::boolean),
	I(SUserPrefs, "User JavaScript on HTTPS", FALSE, prefssetting::boolean),
#endif

	// Sentinel, always the last entry
	I(SNone, NULL, 0, prefssetting::prefssettingtypes(0))
	INITEND
};


#ifdef DEBUG
Debug& operator<<(Debug& dbg, enum PrefsCollectionJS::stringpref e)
{
	switch (e) {
#ifdef ES_OVERRIDE_FPMODE
	case PrefsCollectionJS::FPMode:
		return dbg << "PrefsCollectionJS::FPMode";
#endif
#if defined SUPPORT_DEBUGGING_SHELL && !defined PREFS_TOOLS_PROXY
	case PrefsCollectionJS::OpShellProxyIP:
		return dbg << "PrefsCollectionJS::OpShellProxyIP";
#endif
#if defined ECMASCRIPT_REMOTE_DEBUGGER && !defined PREFS_TOOLS_PROXY
	case PrefsCollectionJS::EcmaScriptRemoteDebuggerIP:
		return dbg << "PrefsCollectionJS::EcmaScriptRemoteDebuggerIP";
#endif
	case PrefsCollectionJS::ES_AppCodeName:
		return dbg << "PrefsCollectionJS::ES_AppCodeName";
	case PrefsCollectionJS::ES_NSAppName:
		return dbg << "PrefsCollectionJS::ES_NSAppName";
#ifdef VEGA_3DDEVICE
	case PrefsCollectionJS::JS_HWAAccess:
		return dbg << "PrefsCollectionJS::JS_HWAAccess";
#endif
	case PrefsCollectionJS::ES_IEAppName:
		return dbg << "PrefsCollectionJS::ES_IEAppName";
	case PrefsCollectionJS::ES_OperaAppName:
		return dbg << "PrefsCollectionJS::ES_OperaAppName";
#ifdef WEB_HANDLERS_SUPPORT
	case PrefsCollectionJS::DisallowedWebHandlers:
		return dbg << "PrefsCollectionJS::DisallowedWebHandlers";
#endif
#ifdef USER_JAVASCRIPT
	case PrefsCollectionJS::UserJSFiles:
		return dbg << "PrefsCollectionJS::UserJSFiles";
#endif
	default:
		return dbg << "PrefsCollectionJS::stringpref(unknown:" << (int)e << ")";
	}
}

Debug& operator<<(Debug& dbg, enum PrefsCollectionJS::integerpref e)
{
	switch (e) {
#ifdef DELAYED_SCRIPT_EXECUTION
	case PrefsCollectionJS::DelayedScriptExecution:
		return dbg << "PrefsCollectionJS::DelayedScriptExecution";
#endif
#ifdef ES_HARDCORE_GC_MODE
	case PrefsCollectionJS::HardcoreGCMode:
		return dbg << "PrefsCollectionJS::HardcoreGCMode";
#endif
#ifdef ECMASCRIPT_NATIVE_SUPPORT
	case PrefsCollectionJS::JIT:
		return dbg << "PrefsCollectionJS::JIT";
#endif
#if defined SUPPORT_DEBUGGING_SHELL && !defined PREFS_TOOLS_PROXY
	case PrefsCollectionJS::OpShellProxyPort:
		return dbg << "PrefsCollectionJS::OpShellProxyPort";
#endif
#if defined ECMASCRIPT_DEBUGGER && defined ECMASCRIPT_REMOTE_DEBUGGER && !defined PREFS_TOOLS_PROXY
	case PrefsCollectionJS::EcmaScriptRemoteDebugger:
		return dbg << "PrefsCollectionJS::EcmaScriptRemoteDebugger";
	case PrefsCollectionJS::EcmaScriptRemoteDebuggerPort:
		return dbg << "PrefsCollectionJS::EcmaScriptRemoteDebuggerPort";
#endif
#if defined ECMASCRIPT_DEBUGGER && !defined PREFS_SCRIPT_DEBUG
	case PrefsCollectionJS::EcmaScriptDebugger:
		return dbg << "PrefsCollectionJS::EcmaScriptDebugger";
#endif
	case PrefsCollectionJS::EcmaScriptEnabled:
		return dbg << "PrefsCollectionJS::EcmaScriptEnabled";
#ifdef CANVAS3D_SUPPORT
	case PrefsCollectionJS::ShaderValidation:
		return dbg << "PrefsCollectionJS::ShaderValidation";
#endif
#ifdef SPECULATIVE_PARSER
	case PrefsCollectionJS::SpeculativeParser:
		return dbg << "PrefsCollectionJS::SpeculativeParser";
#endif
#ifdef DOM_DEVICE_ORIENTATION_EVENT_SUPPORT
	case PrefsCollectionJS::EnableOrientation:
		return dbg << "PrefsCollectionJS::EnableOrientation";
#endif
#ifdef USER_JAVASCRIPT
	case PrefsCollectionJS::UserJSAlwaysLoad:
		return dbg << "PrefsCollectionJS::UserJSAlwaysLoad";
#endif
#ifdef DOM_BROWSERJS_SUPPORT
	case PrefsCollectionJS::BrowserJSSetting:
		return dbg << "PrefsCollectionJS::BrowserJSSetting";
#endif
#ifdef PREFS_HAVE_BROWSERJS_TIMESTAMP
	case PrefsCollectionJS::BrowserJSServerTimeStamp:
		return dbg << "PrefsCollectionJS::BrowserJSServerTimeStamp";
	case PrefsCollectionJS::BrowserJSTimeStamp:
		return dbg << "PrefsCollectionJS::BrowserJSTimeStamp";
#endif
#ifdef DOM_STREAM_API_SUPPORT
	case PrefsCollectionJS::AllowCamera:
		return dbg << "PrefsCollectionJS::AllowCamera";
#endif
#ifdef DOM_FULLSCREEN_MODE
	case PrefsCollectionJS::ChromelessDOMFullscreen:
		return dbg << "PrefsCollectionJS::ChromelessDOMFullscreen";
#endif
#ifdef GEOLOCATION_SUPPORT
	case PrefsCollectionJS::AllowGeolocation:
		return dbg << "PrefsCollectionJS::AllowGeolocation";
#endif
	case PrefsCollectionJS::IgnoreUnrequestedPopups:
		return dbg << "PrefsCollectionJS::IgnoreUnrequestedPopups";
#if defined DOCUMENT_EDIT_SUPPORT && defined USE_OP_CLIPBOARD
	case PrefsCollectionJS::LetSiteAccessClipboard:
		return dbg << "PrefsCollectionJS::LetSiteAccessClipboard";
#endif
#ifdef DOM_WEBWORKERS_SUPPORT
	case PrefsCollectionJS::MaxWorkersPerSession:
		return dbg << "PrefsCollectionJS::MaxWorkersPerSession";
	case PrefsCollectionJS::MaxWorkersPerWindow:
		return dbg << "PrefsCollectionJS::MaxWorkersPerWindow";
#endif
	case PrefsCollectionJS::ScriptSpoof:
		return dbg << "PrefsCollectionJS::ScriptSpoof";
	case PrefsCollectionJS::TargetDestination:
		return dbg << "PrefsCollectionJS::TargetDestination";
#ifdef USER_JAVASCRIPT
	case PrefsCollectionJS::UserJSEnabled:
		return dbg << "PrefsCollectionJS::UserJSEnabled";
	case PrefsCollectionJS::UserJSEnabledHTTPS:
		return dbg << "PrefsCollectionJS::UserJSEnabledHTTPS";
#endif
	default:
		return dbg << "PrefsCollectionJS::integerpref(unknown:" << (int)e << ")";
	}
}

#endif // DEBUG
