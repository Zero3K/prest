/* -*- Mode: c++; tab-width: 4; indent-tabs-mode: t; c-basic-offset: 4 -*-
**
** Copyright (C) 2000-2003 Opera Software AS.  All rights reserved.
**
** This file is part of the Opera web browser.  It may not be distributed
** under any circumstances.
**
*/

#ifndef _CRASHRPT_WRAPPER_H_
#define _CRASHRPT_WRAPPER_H_

#if defined(MSWIN)

#include "third_party/crashrpt/include/CrashRpt.h"

/**
 * @brief Wrapper class for CrashRpt.CPP library integration with Opera
 * 
 * This class provides an interface to integrate the CrashRpt.CPP library
 * with Opera's existing crash handling system, replacing the custom
 * exception handling with CrashRpt's more robust crash reporting.
 */
class OperaCrashRptWrapper
{
public:
	/**
	 * @brief Constructor - initializes CrashRpt but doesn't start it yet
	 */
	OperaCrashRptWrapper();

	/**
	 * @brief Destructor - ensures proper cleanup
	 */
	~OperaCrashRptWrapper();

	/**
	 * @brief Initialize CrashRpt with Opera-specific settings
	 * @param app_name Application name to display in crash dialog
	 * @param company Company name to display in crash dialog
	 * @param own_process Whether this process owns the crash handling
	 * @return true if initialization succeeded, false otherwise
	 */
	bool Initialize(const wchar_t* app_name, const wchar_t* company, bool own_process = true);

	/**
	 * @brief Check if CrashRpt is initialized and working
	 * @return true if crash handling is enabled
	 */
	bool IsCrashHandlingEnabled() const;

	/**
	 * @brief Add additional file to crash report
	 * @param file_path Path to file to include
	 * @param report_name Name to use in report (optional)
	 * @return true if file was added successfully
	 */
	bool AddFileToReport(const wchar_t* file_path, const wchar_t* report_name = NULL);

	/**
	 * @brief Add custom user information to crash report
	 * @param key Information key
	 * @param value Information value
	 * @return true if information was added successfully
	 */
	bool AddUserInfo(const wchar_t* key, const wchar_t* value);

	/**
	 * @brief Send crash report manually (for non-process-owning scenarios)
	 * @param exception_pointers Exception information
	 * @return Exception handling result
	 */
	LONG SendReport(EXCEPTION_POINTERS* exception_pointers);

	/**
	 * @brief Get the global instance of the crash reporter
	 * @return Reference to the global instance
	 */
	static OperaCrashRptWrapper& GetInstance();

private:
	crash_rpt::CrashRpt* m_crash_rpt;
	bool m_initialized;
	
	// Opera-specific configuration
	static const char* OPERA_APP_GUID;
	static const char* OPERA_PREFIX;

	// Prevent copying
	OperaCrashRptWrapper(const OperaCrashRptWrapper&);
	OperaCrashRptWrapper& operator=(const OperaCrashRptWrapper&);
};

#elif defined(MSWIN)

// Stub implementation for framework builds that don't have DESKTOP_STARTER/PLUGIN_WRAPPER
class OperaCrashRptWrapper
{
public:
	OperaCrashRptWrapper() {}
	~OperaCrashRptWrapper() {}
	
	bool Initialize(const wchar_t*, const wchar_t*, bool = true) { return false; }
	bool IsCrashHandlingEnabled() const { return false; }
	bool AddFileToReport(const wchar_t*, const wchar_t* = NULL) { return false; }
	bool AddUserInfo(const wchar_t*, const wchar_t*) { return false; }
	LONG SendReport(EXCEPTION_POINTERS*) { return EXCEPTION_CONTINUE_SEARCH; }
	static OperaCrashRptWrapper& GetInstance() { static OperaCrashRptWrapper instance; return instance; }
};

#endif // MSWIN

#endif // _CRASHRPT_WRAPPER_H_