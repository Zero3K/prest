/* -*- Mode: c++; tab-width: 4; indent-tabs-mode: t; c-basic-offset: 4 -*-
**
** Copyright (C) 2000-2003 Opera Software AS.  All rights reserved.
**
** This file is part of the Opera web browser.  It may not be distributed
** under any circumstances.
**
*/

#include "core/pch.h"

#ifdef MSWIN

#include "adjunct/desktop_util/crash/crashrpt_integration.h"
#include "adjunct/desktop_util/file_utils/FileUtils.h"
#include "modules/prefs/prefsmanager/prefsmanager.h"
#include "adjunct/quick/quick-version.h"
#include "platforms/windows/windows_ui/res/#BuildNr.rci"

bool OperaCrashRptIntegration::s_initialized = false;

bool OperaCrashRptIntegration::Initialize(const wchar_t* app_name, const wchar_t* company)
{
	if (s_initialized)
		return true;

	OperaCrashRptWrapper& wrapper = OperaCrashRptWrapper::GetInstance();
	
	// Initialize with Opera-specific settings
	if (wrapper.Initialize(app_name, company, true))
	{
		// Add Opera version information
		wrapper.AddUserInfo(L"OperaVersion", L"Opera " VER_NUM_STR_UNI);
		wrapper.AddUserInfo(L"BuildNumber", L"Build " UNI_L(VER_BUILD_NUMBER_STR));
		
		// Add basic system information
		OSVERSIONINFOEX osvi;
		ZeroMemory(&osvi, sizeof(OSVERSIONINFOEX));
		osvi.dwOSVersionInfoSize = sizeof(OSVERSIONINFOEX);
		
		if (GetVersionEx((OSVERSIONINFO*)&osvi))
		{
			wchar_t os_info[256];
			swprintf_s(os_info, L"%d.%d.%d SP%d.%d", 
				osvi.dwMajorVersion, osvi.dwMinorVersion, osvi.dwBuildNumber,
				osvi.wServicePackMajor, osvi.wServicePackMinor);
			wrapper.AddUserInfo(L"OSVersion", os_info);
		}

		s_initialized = true;
		return true;
	}

	return false;
}

void OperaCrashRptIntegration::SetUserCrashInfo(const wchar_t* user_url, 
												const wchar_t* user_email, 
												const wchar_t* user_comments)
{
	if (!s_initialized)
		return;

	OperaCrashRptWrapper& wrapper = OperaCrashRptWrapper::GetInstance();

	if (user_url && *user_url)
		wrapper.AddUserInfo(L"URL", user_url);

	if (user_email && *user_email)
		wrapper.AddUserInfo(L"Email", user_email);

	if (user_comments && *user_comments)
		wrapper.AddUserInfo(L"Comments", user_comments);
}

void OperaCrashRptIntegration::AddOperaLogFiles(const wchar_t** log_files, int file_count)
{
	if (!s_initialized)
		return;

	OperaCrashRptWrapper& wrapper = OperaCrashRptWrapper::GetInstance();

	for (int i = 0; i < file_count; i++)
	{
		if (log_files[i] && *log_files[i])
		{
			// Extract filename for report
			const wchar_t* filename = wcsrchr(log_files[i], L'\\');
			if (filename)
				filename++; // Skip the backslash
			else
				filename = log_files[i];

			wrapper.AddFileToReport(log_files[i], filename);
		}
	}
}

bool OperaCrashRptIntegration::IsCrashReportingEnabled()
{
	if (!s_initialized)
		return false;

	OperaCrashRptWrapper& wrapper = OperaCrashRptWrapper::GetInstance();
	return wrapper.IsCrashHandlingEnabled();
}

void OperaCrashRptIntegration::Shutdown()
{
	s_initialized = false;
	// The wrapper will be destroyed automatically via its destructor
}

crash_rpt::custom_data_collection::Result CALLBACK OperaCrashDataCollectionCallback(
	const crash_rpt::custom_data_collection::ExceptionInfo& exceptionInfo,
	crash_rpt::custom_data_collection::IDataBag* dataBag)
{
	// Add Opera-specific crash information
	
	// Add current timestamp
	SYSTEMTIME st;
	GetSystemTime(&st);
	wchar_t timestamp[256];
	swprintf_s(timestamp, L"%04d-%02d-%02d %02d:%02d:%02d UTC",
		st.wYear, st.wMonth, st.wDay, st.wHour, st.wMinute, st.wSecond);
	dataBag->AddUserInfoToReport(L"CrashTime", timestamp);

	// Add process information
	wchar_t process_info[256];
	swprintf_s(process_info, L"PID: %d", exceptionInfo.ProcessId);
	dataBag->AddUserInfoToReport(L"ProcessInfo", process_info);

	// Add Opera-specific log files if they exist
	// Note: In a real implementation, you would get these paths from Opera's configuration
	const wchar_t* potential_logs[] = {
		L"opera.log",
		L"console.log",
		L"debug.log"
	};

	for (int i = 0; i < sizeof(potential_logs) / sizeof(potential_logs[0]); i++)
	{
		// Check if file exists before adding
		if (GetFileAttributes(potential_logs[i]) != INVALID_FILE_ATTRIBUTES)
		{
			dataBag->AddFileToReport(potential_logs[i], potential_logs[i]);
		}
	}

	// Proceed to upload confirmation dialog
	return crash_rpt::custom_data_collection::ShowUploadConfirmDialog;
}

crash_rpt::CrashProcessingCallbackResult CALLBACK OperaCrashProcessingCallback(
	crash_rpt::CrashProcessingCallbackStage stage,
	crash_rpt::ExceptionInfo* exceptionInfo,
	LPVOID userData)
{
	switch (stage)
	{
	case crash_rpt::BeforeSendReport:
		// Perform any cleanup or final data collection before sending
		// This is where Opera could close open files, save state, etc.
		break;

	case crash_rpt::AfterSendReport:
		// Perform any post-crash actions
		// This could include restarting Opera in safe mode, etc.
		break;
	}

	// Continue with default CrashRpt processing
	return crash_rpt::DoDefaultActions;
}

#endif // MSWIN