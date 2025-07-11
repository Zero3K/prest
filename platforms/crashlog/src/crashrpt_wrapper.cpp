/* -*- Mode: c++; tab-width: 4; indent-tabs-mode: t; c-basic-offset: 4 -*-
**
** Copyright (C) 2000-2003 Opera Software AS.  All rights reserved.
**
** This file is part of the Opera web browser.  It may not be distributed
** under any circumstances.
**
*/

#include "core/pch.h"

#if defined(MSWIN) && (defined(DESKTOP_STARTER) || defined(PLUGIN_WRAPPER))

#include "platforms/crashlog/src/crashrpt_wrapper.h"
#include "platforms/crashlog/gpu_info.h"

// Opera-specific GUID and prefix for crash reports
const char* OperaCrashRptWrapper::OPERA_APP_GUID = "af5a2149-d748-492b-a2ee-a16e7298d18b";
const char* OperaCrashRptWrapper::OPERA_PREFIX = "Opera";

OperaCrashRptWrapper::OperaCrashRptWrapper()
	: m_crash_rpt(NULL)
	, m_initialized(false)
{
}

OperaCrashRptWrapper::~OperaCrashRptWrapper()
{
	delete m_crash_rpt;
	m_crash_rpt = NULL;
}

bool OperaCrashRptWrapper::Initialize(const wchar_t* app_name, const wchar_t* company, bool own_process)
{
	if (m_initialized)
		return true;

	try
	{
		// Create CrashRpt instance with Opera-specific settings and library path
		// Try the current directory first, then specific path
		m_crash_rpt = new crash_rpt::CrashRpt();
		
		// If that didn't work, try with explicit path to our third-party location
		if (!m_crash_rpt->IsCrashHandlingEnabled())
		{
			delete m_crash_rpt;
			const wchar_t* crashrpt_path = L"third_party\\crashrpt\\bin\\crashrpt.dll";
			m_crash_rpt = new crash_rpt::CrashRpt(crashrpt_path);
		}

		if (!m_crash_rpt->IsCrashHandlingEnabled())
		{
			// CrashRpt DLL is not available, fall back to original system
			delete m_crash_rpt;
			m_crash_rpt = NULL;
			return false;
		}

		// Set up application info
		crash_rpt::ApplicationInfo app_info;
		memset(&app_info, 0, sizeof(app_info));
		app_info.ApplicationInfoSize = sizeof(app_info);
		app_info.ApplicationGUID = OPERA_APP_GUID;
		app_info.Prefix = OPERA_PREFIX;
		app_info.AppName = app_name;
		app_info.Company = company;

		// Get version from current application
		if (!m_crash_rpt->GetVersionFromApp(&app_info))
		{
			// Set default version if extraction fails
			app_info.V[0] = 1;
			app_info.V[1] = 0;
			app_info.V[2] = 0;
			app_info.V[3] = 0;
		}

		// Set up handler settings
		crash_rpt::HandlerSettings handler_settings;
		memset(&handler_settings, 0, sizeof(handler_settings));
		handler_settings.HandlerSettingsSize = sizeof(handler_settings);
		
		// Configure CrashRpt behavior
		handler_settings.LeaveDumpFilesInTempFolder = FALSE; // Clean up temp files
		handler_settings.OpenProblemInBrowser = FALSE; // Don't open browser automatically
		handler_settings.UseWER = FALSE; // Don't use Windows Error Reporting
		handler_settings.SubmitterID = 0; // Anonymous user
		handler_settings.SendAdditionalDataWithoutApproval = TRUE; // Send without asking
		
		// Set paths to CrashRpt binaries (relative to executable)
		handler_settings.SendRptPath = L"sendrpt.exe";
		handler_settings.DbgHelpPath = L"dbghelp.dll";

		// Initialize CrashRpt
		if (!m_crash_rpt->InitCrashRpt(&app_info, &handler_settings, own_process))
		{
			delete m_crash_rpt;
			m_crash_rpt = NULL;
			return false;
		}

		// Add Opera-specific information
		m_crash_rpt->AddUserInfoToReport(L"Application", L"Opera");
		m_crash_rpt->AddUserInfoToReport(L"CrashReporter", L"CrashRpt.CPP");

		m_initialized = true;
		return true;
	}
	catch (...)
	{
		// Something went wrong during initialization
		delete m_crash_rpt;
		m_crash_rpt = NULL;
		return false;
	}
}

bool OperaCrashRptWrapper::IsCrashHandlingEnabled() const
{
	return m_initialized && m_crash_rpt && m_crash_rpt->IsCrashHandlingEnabled();
}

bool OperaCrashRptWrapper::AddFileToReport(const wchar_t* file_path, const wchar_t* report_name)
{
	if (!m_initialized || !m_crash_rpt)
		return false;

	return m_crash_rpt->AddFileToReport(file_path, report_name);
}

bool OperaCrashRptWrapper::AddUserInfo(const wchar_t* key, const wchar_t* value)
{
	if (!m_initialized || !m_crash_rpt)
		return false;

	return m_crash_rpt->AddUserInfoToReport(key, value);
}

LONG OperaCrashRptWrapper::SendReport(EXCEPTION_POINTERS* exception_pointers)
{
	if (!m_initialized || !m_crash_rpt)
		return EXCEPTION_CONTINUE_SEARCH;

	return m_crash_rpt->SendReport(exception_pointers);
}

OperaCrashRptWrapper& OperaCrashRptWrapper::GetInstance()
{
	static OperaCrashRptWrapper instance;
	return instance;
}

#endif // MSWIN && (DESKTOP_STARTER || PLUGIN_WRAPPER)