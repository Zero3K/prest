/* -*- Mode: c++; tab-width: 4; indent-tabs-mode: t; c-basic-offset: 4 -*-
**
** Copyright (C) 1995-2017 Opera Software AS.  All rights reserved.
**
** This file is part of the Opera web browser.  It may not be distributed
** under any circumstances.
**
** Note: This file is generated, any modifications to this file will
**       be overwritten when the file is regenerated. See modules/protobuf/cpp.conf for
**       details on how this file is generated.
*/

#include "core/pch.h"

#ifdef SCOPE_SUPPORT

#include "modules/scope/src/generated/g_scope_manager.h"


#include "modules/scope/src/generated/g_scope_manager.h"

// Services we need to instantiate

#ifdef SCOPE_CONSOLE_LOGGER
# include "modules/scope/src/scope_console_logger.h"
#endif // SCOPE_CONSOLE_LOGGER
#ifdef SCOPE_COOKIE_MANAGER
# include "modules/scope/src/scope_cookie_manager.h"
#endif // SCOPE_COOKIE_MANAGER
#ifdef SCOPE_CORE
# include "modules/scope/src/scope_core.h"
#endif // SCOPE_CORE
#ifdef SCOPE_DESKTOP_SUPPORT
# include "adjunct/desktop_scope/src/scope_desktop_utils.h"
#endif // SCOPE_DESKTOP_SUPPORT
#ifdef SCOPE_DESKTOP_SUPPORT
# include "adjunct/desktop_scope/src/scope_desktop_window_manager.h"
#endif // SCOPE_DESKTOP_SUPPORT
#ifdef SCOPE_DOCUMENT_MANAGER
# include "modules/scope/src/scope_document_manager.h"
#endif // SCOPE_DOCUMENT_MANAGER
#ifdef SCOPE_ECMASCRIPT
# include "modules/scope/src/scope_ecmascript.h"
#endif // SCOPE_ECMASCRIPT
#ifdef SCOPE_ECMASCRIPT_DEBUGGER
# include "modules/scope/src/scope_ecmascript_debugger.h"
#endif // SCOPE_ECMASCRIPT_DEBUGGER
#ifdef SCOPE_EXEC_SUPPORT
# include "modules/scope/src/scope_exec.h"
#endif // SCOPE_EXEC_SUPPORT
#ifdef SCOPE_HTTP_LOGGER
# include "modules/scope/src/scope_http_logger.h"
#endif // SCOPE_HTTP_LOGGER
#ifdef SCOPE_I18N
# include "modules/scope/src/scope_i18n.h"
#endif // SCOPE_I18N
#ifdef SCOPE_OVERLAY
# include "modules/scope/src/scope_overlay.h"
#endif // SCOPE_OVERLAY
#ifdef SCOPE_PREFS
# include "modules/scope/src/scope_prefs.h"
#endif // SCOPE_PREFS
#ifdef SCOPE_PROFILER
# include "modules/scope/src/scope_profiler.h"
#endif // SCOPE_PROFILER
#ifdef SCOPE_RESOURCE_MANAGER
# include "modules/scope/src/scope_resource_manager.h"
#endif // SCOPE_RESOURCE_MANAGER
#ifdef SCOPE_SUPPORT
# include "modules/scope/src/scope_protocol_service.h"
#endif // SCOPE_SUPPORT
#ifdef SELFTEST
# include "modules/scope/src/scope_selftest.h"
#endif // SELFTEST
#ifdef SCOPE_DESKTOP_SUPPORT
# include "adjunct/desktop_scope/src/scope_system_input.h"
#endif // SCOPE_DESKTOP_SUPPORT
#ifdef SELFTEST
# include "modules/scope/src/scope_test_service.h"
#endif // SELFTEST
#ifdef SCOPE_URL_PLAYER
# include "modules/scope/src/urlplayer_command.h"
#endif // SCOPE_URL_PLAYER
#ifdef SCOPE_WIDGET_MANAGER_SUPPORT
# include "modules/scope/src/scope_widget_manager.h"
#endif // SCOPE_WIDGET_MANAGER_SUPPORT
#ifdef SCOPE_WINDOW_MANAGER_SUPPORT
# include "modules/scope/src/scope_window_manager.h"
#endif // SCOPE_WINDOW_MANAGER_SUPPORT

/* OpScopeServiceFactory */

OpScopeServiceFactory::OpScopeServiceFactory()
	: descriptors(NULL)
#ifdef SCOPE_CONSOLE_LOGGER
	, console_logger(NULL)
#endif // SCOPE_CONSOLE_LOGGER
#ifdef SCOPE_COOKIE_MANAGER
	, cookie_manager(NULL)
#endif // SCOPE_COOKIE_MANAGER
#ifdef SCOPE_CORE
	, core(NULL)
#endif // SCOPE_CORE
#ifdef SCOPE_DESKTOP_SUPPORT
	, desktop_utils(NULL)
#endif // SCOPE_DESKTOP_SUPPORT
#ifdef SCOPE_DESKTOP_SUPPORT
	, desktop_window_manager(NULL)
#endif // SCOPE_DESKTOP_SUPPORT
#ifdef SCOPE_DOCUMENT_MANAGER
	, document_manager(NULL)
#endif // SCOPE_DOCUMENT_MANAGER
#ifdef SCOPE_ECMASCRIPT
	, ecmascript(NULL)
#endif // SCOPE_ECMASCRIPT
#ifdef SCOPE_ECMASCRIPT_DEBUGGER
	, ecmascript_debugger(NULL)
#endif // SCOPE_ECMASCRIPT_DEBUGGER
#ifdef SCOPE_EXEC_SUPPORT
	, exec(NULL)
#endif // SCOPE_EXEC_SUPPORT
#ifdef SCOPE_HTTP_LOGGER
	, http_logger(NULL)
#endif // SCOPE_HTTP_LOGGER
#ifdef SCOPE_I18N
	, i18n(NULL)
#endif // SCOPE_I18N
#ifdef SCOPE_OVERLAY
	, overlay(NULL)
#endif // SCOPE_OVERLAY
#ifdef SCOPE_PREFS
	, prefs(NULL)
#endif // SCOPE_PREFS
#ifdef SCOPE_PROFILER
	, profiler(NULL)
#endif // SCOPE_PROFILER
#ifdef SCOPE_RESOURCE_MANAGER
	, resource_manager(NULL)
#endif // SCOPE_RESOURCE_MANAGER
#ifdef SCOPE_SUPPORT
	, scope(NULL)
#endif // SCOPE_SUPPORT
#ifdef SELFTEST
	, selftest(NULL)
#endif // SELFTEST
#ifdef SCOPE_DESKTOP_SUPPORT
	, system_input(NULL)
#endif // SCOPE_DESKTOP_SUPPORT
#ifdef SELFTEST
	, test_service(NULL)
#endif // SELFTEST
#ifdef SCOPE_URL_PLAYER
	, url_player(NULL)
#endif // SCOPE_URL_PLAYER
#ifdef SCOPE_WIDGET_MANAGER_SUPPORT
	, widget_manager(NULL)
#endif // SCOPE_WIDGET_MANAGER_SUPPORT
#ifdef SCOPE_WINDOW_MANAGER_SUPPORT
	, window_manager(NULL)
#endif // SCOPE_WINDOW_MANAGER_SUPPORT
{
}

OP_STATUS
OpScopeServiceFactory::CreateServices(OpScopeServiceManager *manager)
{
	RETURN_IF_ERROR(InitializeShared());

#ifdef SCOPE_CONSOLE_LOGGER
	{
		console_logger = OP_NEW(OpScopeConsoleLogger, ());
		RETURN_OOM_IF_NULL(console_logger);
		console_logger->SetManager(manager);
		OP_STATUS status = console_logger->Construct();
		if (OpStatus::IsMemoryError(status))
			return status;
		// Only register the service if there are no errors while constructing it
		if (OpStatus::IsSuccess(status))
			manager->RegisterService(console_logger);
	}
#endif // SCOPE_CONSOLE_LOGGER
#ifdef SCOPE_COOKIE_MANAGER
	{
		cookie_manager = OP_NEW(OpScopeCookieManager, ());
		RETURN_OOM_IF_NULL(cookie_manager);
		cookie_manager->SetManager(manager);
		OP_STATUS status = cookie_manager->Construct();
		if (OpStatus::IsMemoryError(status))
			return status;
		// Only register the service if there are no errors while constructing it
		if (OpStatus::IsSuccess(status))
			manager->RegisterService(cookie_manager);
	}
#endif // SCOPE_COOKIE_MANAGER
#ifdef SCOPE_CORE
	{
		core = OP_NEW(OpScopeCore, ());
		RETURN_OOM_IF_NULL(core);
		core->SetManager(manager);
		OP_STATUS status = core->Construct();
		if (OpStatus::IsMemoryError(status))
			return status;
		// Only register the service if there are no errors while constructing it
		if (OpStatus::IsSuccess(status))
			manager->RegisterService(core);
	}
#endif // SCOPE_CORE
#ifdef SCOPE_DESKTOP_SUPPORT
	{
		desktop_utils = OP_NEW(OpScopeDesktopUtils, ());
		RETURN_OOM_IF_NULL(desktop_utils);
		desktop_utils->SetManager(manager);
		OP_STATUS status = desktop_utils->Construct();
		if (OpStatus::IsMemoryError(status))
			return status;
		// Only register the service if there are no errors while constructing it
		if (OpStatus::IsSuccess(status))
			manager->RegisterService(desktop_utils);
	}
#endif // SCOPE_DESKTOP_SUPPORT
#ifdef SCOPE_DESKTOP_SUPPORT
	{
		desktop_window_manager = OP_NEW(OpScopeDesktopWindowManager, ());
		RETURN_OOM_IF_NULL(desktop_window_manager);
		desktop_window_manager->SetManager(manager);
		OP_STATUS status = desktop_window_manager->Construct();
		if (OpStatus::IsMemoryError(status))
			return status;
		// Only register the service if there are no errors while constructing it
		if (OpStatus::IsSuccess(status))
			manager->RegisterService(desktop_window_manager);
	}
#endif // SCOPE_DESKTOP_SUPPORT
#ifdef SCOPE_DOCUMENT_MANAGER
	{
		document_manager = OP_NEW(OpScopeDocumentManager, ());
		RETURN_OOM_IF_NULL(document_manager);
		document_manager->SetManager(manager);
		OP_STATUS status = document_manager->Construct(&frame_ids, &document_ids, &resource_ids);
		if (OpStatus::IsMemoryError(status))
			return status;
		// Only register the service if there are no errors while constructing it
		if (OpStatus::IsSuccess(status))
			manager->RegisterService(document_manager);
	}
#endif // SCOPE_DOCUMENT_MANAGER
#ifdef SCOPE_ECMASCRIPT
	{
		ecmascript = OP_NEW(OpScopeEcmascript, ());
		RETURN_OOM_IF_NULL(ecmascript);
		ecmascript->SetManager(manager);
		OP_STATUS status = ecmascript->Construct();
		if (OpStatus::IsMemoryError(status))
			return status;
		// Only register the service if there are no errors while constructing it
		if (OpStatus::IsSuccess(status))
			manager->RegisterService(ecmascript);
	}
#endif // SCOPE_ECMASCRIPT
#ifdef SCOPE_ECMASCRIPT_DEBUGGER
	{
		ecmascript_debugger = OP_NEW(ES_ScopeDebugFrontend, ());
		RETURN_OOM_IF_NULL(ecmascript_debugger);
		ecmascript_debugger->SetManager(manager);
		OP_STATUS status = ecmascript_debugger->Construct();
		if (OpStatus::IsMemoryError(status))
			return status;
		// Only register the service if there are no errors while constructing it
		if (OpStatus::IsSuccess(status))
			manager->RegisterService(ecmascript_debugger);
	}
#endif // SCOPE_ECMASCRIPT_DEBUGGER
#ifdef SCOPE_EXEC_SUPPORT
	{
		exec = OP_NEW(OpScopeExec, ());
		RETURN_OOM_IF_NULL(exec);
		exec->SetManager(manager);
		OP_STATUS status = exec->Construct();
		if (OpStatus::IsMemoryError(status))
			return status;
		// Only register the service if there are no errors while constructing it
		if (OpStatus::IsSuccess(status))
			manager->RegisterService(exec);
	}
#endif // SCOPE_EXEC_SUPPORT
#ifdef SCOPE_HTTP_LOGGER
	{
		http_logger = OP_NEW(OpScopeHttpLogger, ());
		RETURN_OOM_IF_NULL(http_logger);
		http_logger->SetManager(manager);
		OP_STATUS status = http_logger->Construct();
		if (OpStatus::IsMemoryError(status))
			return status;
		// Only register the service if there are no errors while constructing it
		if (OpStatus::IsSuccess(status))
			manager->RegisterService(http_logger);
	}
#endif // SCOPE_HTTP_LOGGER
#ifdef SCOPE_I18N
	{
		i18n = OP_NEW(OpScopeI18n, ());
		RETURN_OOM_IF_NULL(i18n);
		i18n->SetManager(manager);
		OP_STATUS status = i18n->Construct();
		if (OpStatus::IsMemoryError(status))
			return status;
		// Only register the service if there are no errors while constructing it
		if (OpStatus::IsSuccess(status))
			manager->RegisterService(i18n);
	}
#endif // SCOPE_I18N
#ifdef SCOPE_OVERLAY
	{
		overlay = OP_NEW(OpScopeOverlay, ());
		RETURN_OOM_IF_NULL(overlay);
		overlay->SetManager(manager);
		OP_STATUS status = overlay->Construct();
		if (OpStatus::IsMemoryError(status))
			return status;
		// Only register the service if there are no errors while constructing it
		if (OpStatus::IsSuccess(status))
			manager->RegisterService(overlay);
	}
#endif // SCOPE_OVERLAY
#ifdef SCOPE_PREFS
	{
		prefs = OP_NEW(OpScopePrefs, ());
		RETURN_OOM_IF_NULL(prefs);
		prefs->SetManager(manager);
		OP_STATUS status = prefs->Construct();
		if (OpStatus::IsMemoryError(status))
			return status;
		// Only register the service if there are no errors while constructing it
		if (OpStatus::IsSuccess(status))
			manager->RegisterService(prefs);
	}
#endif // SCOPE_PREFS
#ifdef SCOPE_PROFILER
	{
		profiler = OP_NEW(OpScopeProfiler, ());
		RETURN_OOM_IF_NULL(profiler);
		profiler->SetManager(manager);
		OP_STATUS status = profiler->Construct(&frame_ids);
		if (OpStatus::IsMemoryError(status))
			return status;
		// Only register the service if there are no errors while constructing it
		if (OpStatus::IsSuccess(status))
			manager->RegisterService(profiler);
	}
#endif // SCOPE_PROFILER
#ifdef SCOPE_RESOURCE_MANAGER
	{
		resource_manager = OP_NEW(OpScopeResourceManager, ());
		RETURN_OOM_IF_NULL(resource_manager);
		resource_manager->SetManager(manager);
		OP_STATUS status = resource_manager->Construct(&frame_ids, &document_ids, &resource_ids);
		if (OpStatus::IsMemoryError(status))
			return status;
		// Only register the service if there are no errors while constructing it
		if (OpStatus::IsSuccess(status))
			manager->RegisterService(resource_manager);
	}
#endif // SCOPE_RESOURCE_MANAGER
#ifdef SCOPE_SUPPORT
	{
		scope = OP_NEW(OpScopeProtocolService, ());
		RETURN_OOM_IF_NULL(scope);
		scope->SetManager(manager);
		OP_STATUS status = scope->Construct();
		// Ensure that service 'Scope' is initialized, cannot work without it
		if (OpStatus::IsError(status))
			return status;
		manager->RegisterService(scope);
	}
#endif // SCOPE_SUPPORT
#ifdef SELFTEST
	{
		selftest = OP_NEW(OpScopeSelftest, ());
		RETURN_OOM_IF_NULL(selftest);
		selftest->SetManager(manager);
		OP_STATUS status = selftest->Construct();
		if (OpStatus::IsMemoryError(status))
			return status;
		// Only register the service if there are no errors while constructing it
		if (OpStatus::IsSuccess(status))
			manager->RegisterService(selftest);
	}
#endif // SELFTEST
#ifdef SCOPE_DESKTOP_SUPPORT
	{
		system_input = OP_NEW(OpScopeSystemInput, ());
		RETURN_OOM_IF_NULL(system_input);
		system_input->SetManager(manager);
		OP_STATUS status = system_input->Construct();
		if (OpStatus::IsMemoryError(status))
			return status;
		// Only register the service if there are no errors while constructing it
		if (OpStatus::IsSuccess(status))
			manager->RegisterService(system_input);
	}
#endif // SCOPE_DESKTOP_SUPPORT
#ifdef SELFTEST
	{
		test_service = OP_NEW(OtScopeTestService, ());
		RETURN_OOM_IF_NULL(test_service);
		test_service->SetManager(manager);
		OP_STATUS status = test_service->Construct();
		if (OpStatus::IsMemoryError(status))
			return status;
		// Only register the service if there are no errors while constructing it
		if (OpStatus::IsSuccess(status))
			manager->RegisterService(test_service);
	}
#endif // SELFTEST
#ifdef SCOPE_URL_PLAYER
	{
		url_player = OP_NEW(OpScopeUrlPlayer, ());
		RETURN_OOM_IF_NULL(url_player);
		url_player->SetManager(manager);
		OP_STATUS status = url_player->Construct();
		if (OpStatus::IsMemoryError(status))
			return status;
		// Only register the service if there are no errors while constructing it
		if (OpStatus::IsSuccess(status))
			manager->RegisterService(url_player);
	}
#endif // SCOPE_URL_PLAYER
#ifdef SCOPE_WIDGET_MANAGER_SUPPORT
	{
		widget_manager = OP_NEW(OpScopeWidgetManager, ());
		RETURN_OOM_IF_NULL(widget_manager);
		widget_manager->SetManager(manager);
		OP_STATUS status = widget_manager->Construct();
		if (OpStatus::IsMemoryError(status))
			return status;
		// Only register the service if there are no errors while constructing it
		if (OpStatus::IsSuccess(status))
			manager->RegisterService(widget_manager);
	}
#endif // SCOPE_WIDGET_MANAGER_SUPPORT
#ifdef SCOPE_WINDOW_MANAGER_SUPPORT
	{
		window_manager = OP_NEW(OpScopeWindowManager, ());
		RETURN_OOM_IF_NULL(window_manager);
		window_manager->SetManager(manager);
		OP_STATUS status = window_manager->Construct();
		if (OpStatus::IsMemoryError(status))
			return status;
		// Only register the service if there are no errors while constructing it
		if (OpStatus::IsSuccess(status))
			manager->RegisterService(window_manager);
	}
#endif // SCOPE_WINDOW_MANAGER_SUPPORT

	// Add meta-services

	for (MetaService *meta_service = meta_services.First(); meta_service; meta_service = meta_service->Suc())
	{
		meta_service->service = OP_NEW_L(OpScopeMetaService, (meta_service->name.CStr()));
		RETURN_OOM_IF_NULL(meta_service->service);
		meta_service->service->SetManager(manager);
		OP_STATUS status = meta_service->service->Construct();
		if (OpStatus::IsMemoryError(status))
			return status;
		// Only register the service if there are no errors while constructing it
		if (OpStatus::IsSuccess(status))
			manager->RegisterService(meta_service->service);
	}

	// All services has been initialized, now continue with the intra-service setup
	OpScopeServiceManager::ServiceRange range = manager->GetServices();
	for (; !range.IsEmpty(); range.PopFront())
	{
		OP_STATUS status = range.Front()->OnPostInitialization();
		if (OpStatus::IsMemoryError(status))
			return status;

		// Any errors in post initialization makes the service unavailable
		if (OpStatus::IsError(status))
		{
			manager->UnregisterService(range.Front());
#ifdef SCOPE_SUPPORT
			// Ensure that post initialization of service 'Scope' succeeds, cannot work without it
			if (range.Front() == scope)
				return status;
#endif // SCOPE_SUPPORT
		}
	}

	return OpStatus::OK;
}

void
OpScopeServiceFactory::DeleteServices()
{
	// Once we have starting shutting down services, we don't want any new
	// events from Core. This protects against shutdown crashes.

#ifdef SCOPE_CONSOLE_LOGGER
	OpScopeConsoleLogger *tmp_console_logger = console_logger;
	console_logger = NULL;
#endif // SCOPE_CONSOLE_LOGGER
#ifdef SCOPE_COOKIE_MANAGER
	OpScopeCookieManager *tmp_cookie_manager = cookie_manager;
	cookie_manager = NULL;
#endif // SCOPE_COOKIE_MANAGER
#ifdef SCOPE_CORE
	OpScopeCore *tmp_core = core;
	core = NULL;
#endif // SCOPE_CORE
#ifdef SCOPE_DESKTOP_SUPPORT
	OpScopeDesktopUtils *tmp_desktop_utils = desktop_utils;
	desktop_utils = NULL;
#endif // SCOPE_DESKTOP_SUPPORT
#ifdef SCOPE_DESKTOP_SUPPORT
	OpScopeDesktopWindowManager *tmp_desktop_window_manager = desktop_window_manager;
	desktop_window_manager = NULL;
#endif // SCOPE_DESKTOP_SUPPORT
#ifdef SCOPE_DOCUMENT_MANAGER
	OpScopeDocumentManager *tmp_document_manager = document_manager;
	document_manager = NULL;
#endif // SCOPE_DOCUMENT_MANAGER
#ifdef SCOPE_ECMASCRIPT
	OpScopeEcmascript *tmp_ecmascript = ecmascript;
	ecmascript = NULL;
#endif // SCOPE_ECMASCRIPT
#ifdef SCOPE_ECMASCRIPT_DEBUGGER
	ES_ScopeDebugFrontend *tmp_ecmascript_debugger = ecmascript_debugger;
	ecmascript_debugger = NULL;
#endif // SCOPE_ECMASCRIPT_DEBUGGER
#ifdef SCOPE_EXEC_SUPPORT
	OpScopeExec *tmp_exec = exec;
	exec = NULL;
#endif // SCOPE_EXEC_SUPPORT
#ifdef SCOPE_HTTP_LOGGER
	OpScopeHttpLogger *tmp_http_logger = http_logger;
	http_logger = NULL;
#endif // SCOPE_HTTP_LOGGER
#ifdef SCOPE_I18N
	OpScopeI18n *tmp_i18n = i18n;
	i18n = NULL;
#endif // SCOPE_I18N
#ifdef SCOPE_OVERLAY
	OpScopeOverlay *tmp_overlay = overlay;
	overlay = NULL;
#endif // SCOPE_OVERLAY
#ifdef SCOPE_PREFS
	OpScopePrefs *tmp_prefs = prefs;
	prefs = NULL;
#endif // SCOPE_PREFS
#ifdef SCOPE_PROFILER
	OpScopeProfiler *tmp_profiler = profiler;
	profiler = NULL;
#endif // SCOPE_PROFILER
#ifdef SCOPE_RESOURCE_MANAGER
	OpScopeResourceManager *tmp_resource_manager = resource_manager;
	resource_manager = NULL;
#endif // SCOPE_RESOURCE_MANAGER
#ifdef SCOPE_SUPPORT
	OpScopeProtocolService *tmp_scope = scope;
	scope = NULL;
#endif // SCOPE_SUPPORT
#ifdef SELFTEST
	OpScopeSelftest *tmp_selftest = selftest;
	selftest = NULL;
#endif // SELFTEST
#ifdef SCOPE_DESKTOP_SUPPORT
	OpScopeSystemInput *tmp_system_input = system_input;
	system_input = NULL;
#endif // SCOPE_DESKTOP_SUPPORT
#ifdef SELFTEST
	OtScopeTestService *tmp_test_service = test_service;
	test_service = NULL;
#endif // SELFTEST
#ifdef SCOPE_URL_PLAYER
	OpScopeUrlPlayer *tmp_url_player = url_player;
	url_player = NULL;
#endif // SCOPE_URL_PLAYER
#ifdef SCOPE_WIDGET_MANAGER_SUPPORT
	OpScopeWidgetManager *tmp_widget_manager = widget_manager;
	widget_manager = NULL;
#endif // SCOPE_WIDGET_MANAGER_SUPPORT
#ifdef SCOPE_WINDOW_MANAGER_SUPPORT
	OpScopeWindowManager *tmp_window_manager = window_manager;
	window_manager = NULL;
#endif // SCOPE_WINDOW_MANAGER_SUPPORT

	// Now destroy all services.

#ifdef SCOPE_CONSOLE_LOGGER
	OP_DELETE(tmp_console_logger);
#endif // SCOPE_CONSOLE_LOGGER
#ifdef SCOPE_COOKIE_MANAGER
	OP_DELETE(tmp_cookie_manager);
#endif // SCOPE_COOKIE_MANAGER
#ifdef SCOPE_CORE
	OP_DELETE(tmp_core);
#endif // SCOPE_CORE
#ifdef SCOPE_DESKTOP_SUPPORT
	OP_DELETE(tmp_desktop_utils);
#endif // SCOPE_DESKTOP_SUPPORT
#ifdef SCOPE_DESKTOP_SUPPORT
	OP_DELETE(tmp_desktop_window_manager);
#endif // SCOPE_DESKTOP_SUPPORT
#ifdef SCOPE_DOCUMENT_MANAGER
	OP_DELETE(tmp_document_manager);
#endif // SCOPE_DOCUMENT_MANAGER
#ifdef SCOPE_ECMASCRIPT
	OP_DELETE(tmp_ecmascript);
#endif // SCOPE_ECMASCRIPT
#ifdef SCOPE_ECMASCRIPT_DEBUGGER
	OP_DELETE(tmp_ecmascript_debugger);
#endif // SCOPE_ECMASCRIPT_DEBUGGER
#ifdef SCOPE_EXEC_SUPPORT
	OP_DELETE(tmp_exec);
#endif // SCOPE_EXEC_SUPPORT
#ifdef SCOPE_HTTP_LOGGER
	OP_DELETE(tmp_http_logger);
#endif // SCOPE_HTTP_LOGGER
#ifdef SCOPE_I18N
	OP_DELETE(tmp_i18n);
#endif // SCOPE_I18N
#ifdef SCOPE_OVERLAY
	OP_DELETE(tmp_overlay);
#endif // SCOPE_OVERLAY
#ifdef SCOPE_PREFS
	OP_DELETE(tmp_prefs);
#endif // SCOPE_PREFS
#ifdef SCOPE_PROFILER
	OP_DELETE(tmp_profiler);
#endif // SCOPE_PROFILER
#ifdef SCOPE_RESOURCE_MANAGER
	OP_DELETE(tmp_resource_manager);
#endif // SCOPE_RESOURCE_MANAGER
#ifdef SCOPE_SUPPORT
	OP_DELETE(tmp_scope);
#endif // SCOPE_SUPPORT
#ifdef SELFTEST
	OP_DELETE(tmp_selftest);
#endif // SELFTEST
#ifdef SCOPE_DESKTOP_SUPPORT
	OP_DELETE(tmp_system_input);
#endif // SCOPE_DESKTOP_SUPPORT
#ifdef SELFTEST
	OP_DELETE(tmp_test_service);
#endif // SELFTEST
#ifdef SCOPE_URL_PLAYER
	OP_DELETE(tmp_url_player);
#endif // SCOPE_URL_PLAYER
#ifdef SCOPE_WIDGET_MANAGER_SUPPORT
	OP_DELETE(tmp_widget_manager);
#endif // SCOPE_WIDGET_MANAGER_SUPPORT
#ifdef SCOPE_WINDOW_MANAGER_SUPPORT
	OP_DELETE(tmp_window_manager);
#endif // SCOPE_WINDOW_MANAGER_SUPPORT

	// Delete meta-services

	meta_services.Clear();

	// Cleanup any shared member variables

	CleanupShared();
}

/* OpScopeDescriptorSet */

OpScopeDescriptorSet::OpScopeDescriptorSet()
	: dummy(0)
#ifdef SCOPE_CONSOLE_LOGGER
	, console_logger_(NULL)
#endif // SCOPE_CONSOLE_LOGGER
#ifdef SCOPE_COOKIE_MANAGER
	, cookie_manager_(NULL)
#endif // SCOPE_COOKIE_MANAGER
#ifdef SCOPE_CORE
	, core_(NULL)
#endif // SCOPE_CORE
#ifdef SCOPE_DESKTOP_SUPPORT
	, desktop_utils_(NULL)
#endif // SCOPE_DESKTOP_SUPPORT
#ifdef SCOPE_DESKTOP_SUPPORT
	, desktop_window_manager_(NULL)
#endif // SCOPE_DESKTOP_SUPPORT
#ifdef SCOPE_DOCUMENT_MANAGER
	, document_manager_(NULL)
#endif // SCOPE_DOCUMENT_MANAGER
#ifdef SCOPE_ECMASCRIPT
	, ecmascript_(NULL)
#endif // SCOPE_ECMASCRIPT
#ifdef SCOPE_ECMASCRIPT_DEBUGGER
	, ecmascript_debugger_(NULL)
#endif // SCOPE_ECMASCRIPT_DEBUGGER
#ifdef SCOPE_EXEC_SUPPORT
	, exec_(NULL)
#endif // SCOPE_EXEC_SUPPORT
#ifdef SCOPE_HTTP_LOGGER
	, http_logger_(NULL)
#endif // SCOPE_HTTP_LOGGER
#ifdef SCOPE_I18N
	, i18n_(NULL)
#endif // SCOPE_I18N
#ifdef SCOPE_OVERLAY
	, overlay_(NULL)
#endif // SCOPE_OVERLAY
#ifdef SCOPE_PREFS
	, prefs_(NULL)
#endif // SCOPE_PREFS
#ifdef SCOPE_PROFILER
	, profiler_(NULL)
#endif // SCOPE_PROFILER
#ifdef SCOPE_RESOURCE_MANAGER
	, resource_manager_(NULL)
#endif // SCOPE_RESOURCE_MANAGER
#ifdef SCOPE_SUPPORT
	, scope_(NULL)
#endif // SCOPE_SUPPORT
#ifdef SCOPE_SUPPORT
	, scope_service_(NULL)
#endif // SCOPE_SUPPORT
#ifdef SELFTEST
	, selftest_(NULL)
#endif // SELFTEST
#ifdef SCOPE_DESKTOP_SUPPORT
	, system_input_(NULL)
#endif // SCOPE_DESKTOP_SUPPORT
#ifdef SELFTEST
	, test_service_(NULL)
#endif // SELFTEST
#ifdef SCOPE_URL_PLAYER
	, url_player_(NULL)
#endif // SCOPE_URL_PLAYER
#ifdef SCOPE_WIDGET_MANAGER_SUPPORT
	, widget_manager_(NULL)
#endif // SCOPE_WIDGET_MANAGER_SUPPORT
#ifdef SCOPE_WINDOW_MANAGER_SUPPORT
	, window_manager_(NULL)
#endif // SCOPE_WINDOW_MANAGER_SUPPORT
{
	(void)dummy;
}

OpScopeDescriptorSet::~OpScopeDescriptorSet()
{
#ifdef SCOPE_CONSOLE_LOGGER
	OP_DELETE(console_logger_);
#endif // SCOPE_CONSOLE_LOGGER
#ifdef SCOPE_COOKIE_MANAGER
	OP_DELETE(cookie_manager_);
#endif // SCOPE_COOKIE_MANAGER
#ifdef SCOPE_CORE
	OP_DELETE(core_);
#endif // SCOPE_CORE
#ifdef SCOPE_DESKTOP_SUPPORT
	OP_DELETE(desktop_utils_);
#endif // SCOPE_DESKTOP_SUPPORT
#ifdef SCOPE_DESKTOP_SUPPORT
	OP_DELETE(desktop_window_manager_);
#endif // SCOPE_DESKTOP_SUPPORT
#ifdef SCOPE_DOCUMENT_MANAGER
	OP_DELETE(document_manager_);
#endif // SCOPE_DOCUMENT_MANAGER
#ifdef SCOPE_ECMASCRIPT
	OP_DELETE(ecmascript_);
#endif // SCOPE_ECMASCRIPT
#ifdef SCOPE_ECMASCRIPT_DEBUGGER
	OP_DELETE(ecmascript_debugger_);
#endif // SCOPE_ECMASCRIPT_DEBUGGER
#ifdef SCOPE_EXEC_SUPPORT
	OP_DELETE(exec_);
#endif // SCOPE_EXEC_SUPPORT
#ifdef SCOPE_HTTP_LOGGER
	OP_DELETE(http_logger_);
#endif // SCOPE_HTTP_LOGGER
#ifdef SCOPE_I18N
	OP_DELETE(i18n_);
#endif // SCOPE_I18N
#ifdef SCOPE_OVERLAY
	OP_DELETE(overlay_);
#endif // SCOPE_OVERLAY
#ifdef SCOPE_PREFS
	OP_DELETE(prefs_);
#endif // SCOPE_PREFS
#ifdef SCOPE_PROFILER
	OP_DELETE(profiler_);
#endif // SCOPE_PROFILER
#ifdef SCOPE_RESOURCE_MANAGER
	OP_DELETE(resource_manager_);
#endif // SCOPE_RESOURCE_MANAGER
#ifdef SCOPE_SUPPORT
	OP_DELETE(scope_);
#endif // SCOPE_SUPPORT
#ifdef SCOPE_SUPPORT
	OP_DELETE(scope_service_);
#endif // SCOPE_SUPPORT
#ifdef SELFTEST
	OP_DELETE(selftest_);
#endif // SELFTEST
#ifdef SCOPE_DESKTOP_SUPPORT
	OP_DELETE(system_input_);
#endif // SCOPE_DESKTOP_SUPPORT
#ifdef SELFTEST
	OP_DELETE(test_service_);
#endif // SELFTEST
#ifdef SCOPE_URL_PLAYER
	OP_DELETE(url_player_);
#endif // SCOPE_URL_PLAYER
#ifdef SCOPE_WIDGET_MANAGER_SUPPORT
	OP_DELETE(widget_manager_);
#endif // SCOPE_WIDGET_MANAGER_SUPPORT
#ifdef SCOPE_WINDOW_MANAGER_SUPPORT
	OP_DELETE(window_manager_);
#endif // SCOPE_WINDOW_MANAGER_SUPPORT
}

OP_STATUS
OpScopeDescriptorSet::Construct()
{
#ifdef SCOPE_CONSOLE_LOGGER
	console_logger_ = OP_NEW(OpScopeConsoleLogger_SI::Descriptors, ());
	RETURN_OOM_IF_NULL(console_logger_);
	RETURN_IF_ERROR(console_logger_->Construct());
#endif // SCOPE_CONSOLE_LOGGER
#ifdef SCOPE_COOKIE_MANAGER
	cookie_manager_ = OP_NEW(OpScopeCookieManager_SI::Descriptors, ());
	RETURN_OOM_IF_NULL(cookie_manager_);
	RETURN_IF_ERROR(cookie_manager_->Construct());
#endif // SCOPE_COOKIE_MANAGER
#ifdef SCOPE_CORE
	core_ = OP_NEW(OpScopeCore_SI::Descriptors, ());
	RETURN_OOM_IF_NULL(core_);
	RETURN_IF_ERROR(core_->Construct());
#endif // SCOPE_CORE
#ifdef SCOPE_DESKTOP_SUPPORT
	desktop_utils_ = OP_NEW(OpScopeDesktopUtils_SI::Descriptors, ());
	RETURN_OOM_IF_NULL(desktop_utils_);
	RETURN_IF_ERROR(desktop_utils_->Construct());
#endif // SCOPE_DESKTOP_SUPPORT
#ifdef SCOPE_DESKTOP_SUPPORT
	desktop_window_manager_ = OP_NEW(OpScopeDesktopWindowManager_SI::Descriptors, ());
	RETURN_OOM_IF_NULL(desktop_window_manager_);
	RETURN_IF_ERROR(desktop_window_manager_->Construct());
#endif // SCOPE_DESKTOP_SUPPORT
#ifdef SCOPE_DOCUMENT_MANAGER
	document_manager_ = OP_NEW(OpScopeDocumentManager_SI::Descriptors, ());
	RETURN_OOM_IF_NULL(document_manager_);
	RETURN_IF_ERROR(document_manager_->Construct());
#endif // SCOPE_DOCUMENT_MANAGER
#ifdef SCOPE_ECMASCRIPT
	ecmascript_ = OP_NEW(OpScopeEcmascript_SI::Descriptors, ());
	RETURN_OOM_IF_NULL(ecmascript_);
	RETURN_IF_ERROR(ecmascript_->Construct());
#endif // SCOPE_ECMASCRIPT
#ifdef SCOPE_ECMASCRIPT_DEBUGGER
	ecmascript_debugger_ = OP_NEW(ES_ScopeDebugFrontend_SI::Descriptors, ());
	RETURN_OOM_IF_NULL(ecmascript_debugger_);
	RETURN_IF_ERROR(ecmascript_debugger_->Construct());
#endif // SCOPE_ECMASCRIPT_DEBUGGER
#ifdef SCOPE_EXEC_SUPPORT
	exec_ = OP_NEW(OpScopeExec_SI::Descriptors, ());
	RETURN_OOM_IF_NULL(exec_);
	RETURN_IF_ERROR(exec_->Construct());
#endif // SCOPE_EXEC_SUPPORT
#ifdef SCOPE_HTTP_LOGGER
	http_logger_ = OP_NEW(OpScopeHttpLogger_SI::Descriptors, ());
	RETURN_OOM_IF_NULL(http_logger_);
	RETURN_IF_ERROR(http_logger_->Construct());
#endif // SCOPE_HTTP_LOGGER
#ifdef SCOPE_I18N
	i18n_ = OP_NEW(OpScopeI18n_SI::Descriptors, ());
	RETURN_OOM_IF_NULL(i18n_);
	RETURN_IF_ERROR(i18n_->Construct());
#endif // SCOPE_I18N
#ifdef SCOPE_OVERLAY
	overlay_ = OP_NEW(OpScopeOverlay_SI::Descriptors, ());
	RETURN_OOM_IF_NULL(overlay_);
	RETURN_IF_ERROR(overlay_->Construct());
#endif // SCOPE_OVERLAY
#ifdef SCOPE_PREFS
	prefs_ = OP_NEW(OpScopePrefs_SI::Descriptors, ());
	RETURN_OOM_IF_NULL(prefs_);
	RETURN_IF_ERROR(prefs_->Construct());
#endif // SCOPE_PREFS
#ifdef SCOPE_PROFILER
	profiler_ = OP_NEW(OpScopeProfiler_SI::Descriptors, ());
	RETURN_OOM_IF_NULL(profiler_);
	RETURN_IF_ERROR(profiler_->Construct());
#endif // SCOPE_PROFILER
#ifdef SCOPE_RESOURCE_MANAGER
	resource_manager_ = OP_NEW(OpScopeResourceManager_SI::Descriptors, ());
	RETURN_OOM_IF_NULL(resource_manager_);
	RETURN_IF_ERROR(resource_manager_->Construct());
#endif // SCOPE_RESOURCE_MANAGER
#ifdef SCOPE_SUPPORT
	scope_ = OP_NEW(OpScopeProtocolService_SI::Descriptors, ());
	RETURN_OOM_IF_NULL(scope_);
	RETURN_IF_ERROR(scope_->Construct());
#endif // SCOPE_SUPPORT
#ifdef SCOPE_SUPPORT
	scope_service_ = OP_NEW(OpScopeService_SI::Descriptors, ());
	RETURN_OOM_IF_NULL(scope_service_);
	RETURN_IF_ERROR(scope_service_->Construct());
#endif // SCOPE_SUPPORT
#ifdef SELFTEST
	selftest_ = OP_NEW(OpScopeSelftest_SI::Descriptors, ());
	RETURN_OOM_IF_NULL(selftest_);
	RETURN_IF_ERROR(selftest_->Construct());
#endif // SELFTEST
#ifdef SCOPE_DESKTOP_SUPPORT
	system_input_ = OP_NEW(OpScopeSystemInput_SI::Descriptors, ());
	RETURN_OOM_IF_NULL(system_input_);
	RETURN_IF_ERROR(system_input_->Construct());
#endif // SCOPE_DESKTOP_SUPPORT
#ifdef SELFTEST
	test_service_ = OP_NEW(OtScopeTestService_SI::Descriptors, ());
	RETURN_OOM_IF_NULL(test_service_);
	RETURN_IF_ERROR(test_service_->Construct());
#endif // SELFTEST
#ifdef SCOPE_URL_PLAYER
	url_player_ = OP_NEW(OpScopeUrlPlayer_SI::Descriptors, ());
	RETURN_OOM_IF_NULL(url_player_);
	RETURN_IF_ERROR(url_player_->Construct());
#endif // SCOPE_URL_PLAYER
#ifdef SCOPE_WIDGET_MANAGER_SUPPORT
	widget_manager_ = OP_NEW(OpScopeWidgetManager_SI::Descriptors, ());
	RETURN_OOM_IF_NULL(widget_manager_);
	RETURN_IF_ERROR(widget_manager_->Construct());
#endif // SCOPE_WIDGET_MANAGER_SUPPORT
#ifdef SCOPE_WINDOW_MANAGER_SUPPORT
	window_manager_ = OP_NEW(OpScopeWindowManager_SI::Descriptors, ());
	RETURN_OOM_IF_NULL(window_manager_);
	RETURN_IF_ERROR(window_manager_->Construct());
#endif // SCOPE_WINDOW_MANAGER_SUPPORT
	return OpStatus::OK;
}
#endif // SCOPE_SUPPORT
