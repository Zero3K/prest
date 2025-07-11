/* -*- Mode: c++; tab-width: 4; indent-tabs-mode: t; c-basic-offset: 4 -*-
**
** Copyright (C) 2000-2003 Opera Software AS.  All rights reserved.
**
** This file is part of the Opera web browser.  It may not be distributed
** under any circumstances.
**
*/

#ifndef _CRASHRPT_INTEGRATION_H_
#define _CRASHRPT_INTEGRATION_H_

#if defined(MSWIN) && (defined(DESKTOP_STARTER) || defined(PLUGIN_WRAPPER))

#include "platforms/crashlog/src/crashrpt_wrapper.h"

/**
 * @brief Opera integration for CrashRpt.CPP crash reporting
 * 
 * This class provides integration between Opera and CrashRpt.CPP, 
 * replacing Opera's custom crash dialog and crash handling with 
 * CrashRpt's more robust system.
 */
class OperaCrashRptIntegration
{
public:
	/**
	 * @brief Initialize the CrashRpt system for Opera
	 * @param app_name Application name for crash reports
	 * @param company Company name for crash reports
	 * @return true if initialization succeeded
	 */
	static bool Initialize(const wchar_t* app_name, const wchar_t* company);

	/**
	 * @brief Set up Opera-specific crash report information
	 * @param user_url URL the user was visiting when the crash occurred
	 * @param user_email User's email for follow-up (optional)
	 * @param user_comments User's comments about the crash (optional)
	 */
	static void SetUserCrashInfo(const wchar_t* user_url = NULL, 
								 const wchar_t* user_email = NULL, 
								 const wchar_t* user_comments = NULL);

	/**
	 * @brief Add Opera-specific files to the crash report
	 * @param log_files Array of log file paths to include
	 * @param file_count Number of files in the array
	 */
	static void AddOperaLogFiles(const wchar_t** log_files, int file_count);

	/**
	 * @brief Check if CrashRpt is properly initialized and working
	 * @return true if crash reporting is available
	 */
	static bool IsCrashReportingEnabled();

	/**
	 * @brief Shutdown crash reporting (called at application exit)
	 */
	static void Shutdown();

private:
	static bool s_initialized;
};

/**
 * @brief CrashRpt callback for custom data collection
 * 
 * This function is called by CrashRpt when a crash occurs to collect
 * additional Opera-specific data for the crash report.
 */
crash_rpt::custom_data_collection::Result CALLBACK OperaCrashDataCollectionCallback(
	const crash_rpt::custom_data_collection::ExceptionInfo& exceptionInfo,
	crash_rpt::custom_data_collection::IDataBag* dataBag
);

/**
 * @brief CrashRpt callback for crash processing
 * 
 * This function is called by CrashRpt during crash processing to perform
 * Opera-specific actions before and after sending the report.
 */
crash_rpt::CrashProcessingCallbackResult CALLBACK OperaCrashProcessingCallback(
	crash_rpt::CrashProcessingCallbackStage stage,
	crash_rpt::ExceptionInfo* exceptionInfo,
	LPVOID userData
);

#endif // MSWIN && (DESKTOP_STARTER || PLUGIN_WRAPPER)

#endif // _CRASHRPT_INTEGRATION_H_