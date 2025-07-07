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

#ifndef OP_SCOPE_MANAGER_G_H
#define OP_SCOPE_MANAGER_G_H

#ifdef SCOPE_SUPPORT

// Includes

#include "modules/scope/src/scope_service.h"

// Includes for shared variables

#include "modules/scope/src/scope_idtable.h"

// Forward declarations

#ifdef SCOPE_CONSOLE_LOGGER
class OpScopeConsoleLogger;
#endif // SCOPE_CONSOLE_LOGGER
#ifdef SCOPE_COOKIE_MANAGER
class OpScopeCookieManager;
#endif // SCOPE_COOKIE_MANAGER
#ifdef SCOPE_CORE
class OpScopeCore;
#endif // SCOPE_CORE
#ifdef SCOPE_DESKTOP_SUPPORT
class OpScopeDesktopUtils;
#endif // SCOPE_DESKTOP_SUPPORT
#ifdef SCOPE_DESKTOP_SUPPORT
class OpScopeDesktopWindowManager;
#endif // SCOPE_DESKTOP_SUPPORT
#ifdef SCOPE_DOCUMENT_MANAGER
class OpScopeDocumentManager;
#endif // SCOPE_DOCUMENT_MANAGER
#ifdef SCOPE_ECMASCRIPT
class OpScopeEcmascript;
#endif // SCOPE_ECMASCRIPT
#ifdef SCOPE_ECMASCRIPT_DEBUGGER
class ES_ScopeDebugFrontend;
#endif // SCOPE_ECMASCRIPT_DEBUGGER
#ifdef SCOPE_EXEC_SUPPORT
class OpScopeExec;
#endif // SCOPE_EXEC_SUPPORT
#ifdef SCOPE_HTTP_LOGGER
class OpScopeHttpLogger;
#endif // SCOPE_HTTP_LOGGER
#ifdef SCOPE_I18N
class OpScopeI18n;
#endif // SCOPE_I18N
#ifdef SCOPE_OVERLAY
class OpScopeOverlay;
#endif // SCOPE_OVERLAY
#ifdef SCOPE_PREFS
class OpScopePrefs;
#endif // SCOPE_PREFS
#ifdef SCOPE_PROFILER
class OpScopeProfiler;
#endif // SCOPE_PROFILER
#ifdef SCOPE_RESOURCE_MANAGER
class OpScopeResourceManager;
#endif // SCOPE_RESOURCE_MANAGER
#ifdef SCOPE_SUPPORT
class OpScopeProtocolService;
#endif // SCOPE_SUPPORT
#ifdef SELFTEST
class OpScopeSelftest;
#endif // SELFTEST
#ifdef SCOPE_DESKTOP_SUPPORT
class OpScopeSystemInput;
#endif // SCOPE_DESKTOP_SUPPORT
#ifdef SELFTEST
class OtScopeTestService;
#endif // SELFTEST
#ifdef SCOPE_URL_PLAYER
class OpScopeUrlPlayer;
#endif // SCOPE_URL_PLAYER
#ifdef SCOPE_WIDGET_MANAGER_SUPPORT
class OpScopeWidgetManager;
#endif // SCOPE_WIDGET_MANAGER_SUPPORT
#ifdef SCOPE_WINDOW_MANAGER_SUPPORT
class OpScopeWindowManager;
#endif // SCOPE_WINDOW_MANAGER_SUPPORT

// Interface definitions

#ifdef SCOPE_CONSOLE_LOGGER
# include "modules/scope/src/generated/g_scope_console_logger_interface.h"
#endif // SCOPE_CONSOLE_LOGGER
#ifdef SCOPE_COOKIE_MANAGER
# include "modules/scope/src/generated/g_scope_cookie_manager_interface.h"
#endif // SCOPE_COOKIE_MANAGER
#ifdef SCOPE_CORE
# include "modules/scope/src/generated/g_scope_core_interface.h"
#endif // SCOPE_CORE
#ifdef SCOPE_DESKTOP_SUPPORT
# include "adjunct/desktop_scope/src/generated/g_scope_desktop_utils_interface.h"
#endif // SCOPE_DESKTOP_SUPPORT
#ifdef SCOPE_DESKTOP_SUPPORT
# include "adjunct/desktop_scope/src/generated/g_scope_desktop_window_manager_interface.h"
#endif // SCOPE_DESKTOP_SUPPORT
#ifdef SCOPE_DOCUMENT_MANAGER
# include "modules/scope/src/generated/g_scope_document_manager_interface.h"
#endif // SCOPE_DOCUMENT_MANAGER
#ifdef SCOPE_ECMASCRIPT
# include "modules/scope/src/generated/g_scope_ecmascript_interface.h"
#endif // SCOPE_ECMASCRIPT
#ifdef SCOPE_ECMASCRIPT_DEBUGGER
# include "modules/scope/src/generated/g_scope_ecmascript_debugger_interface.h"
#endif // SCOPE_ECMASCRIPT_DEBUGGER
#ifdef SCOPE_EXEC_SUPPORT
# include "modules/scope/src/generated/g_scope_exec_interface.h"
#endif // SCOPE_EXEC_SUPPORT
#ifdef SCOPE_HTTP_LOGGER
# include "modules/scope/src/generated/g_scope_http_logger_interface.h"
#endif // SCOPE_HTTP_LOGGER
#ifdef SCOPE_I18N
# include "modules/scope/src/generated/g_scope_i18n_interface.h"
#endif // SCOPE_I18N
#ifdef SCOPE_OVERLAY
# include "modules/scope/src/generated/g_scope_overlay_interface.h"
#endif // SCOPE_OVERLAY
#ifdef SCOPE_PREFS
# include "modules/scope/src/generated/g_scope_prefs_interface.h"
#endif // SCOPE_PREFS
#ifdef SCOPE_PROFILER
# include "modules/scope/src/generated/g_scope_profiler_interface.h"
#endif // SCOPE_PROFILER
#ifdef SCOPE_RESOURCE_MANAGER
# include "modules/scope/src/generated/g_scope_resource_manager_interface.h"
#endif // SCOPE_RESOURCE_MANAGER
#ifdef SCOPE_SUPPORT
# include "modules/scope/src/generated/g_scope_protocol_service_interface.h"
#endif // SCOPE_SUPPORT
#ifdef SCOPE_SUPPORT
# include "modules/scope/src/generated/g_scope_service_interface.h"
#endif // SCOPE_SUPPORT
#ifdef SELFTEST
# include "modules/scope/src/generated/g_scope_selftest_interface.h"
#endif // SELFTEST
#ifdef SCOPE_DESKTOP_SUPPORT
# include "adjunct/desktop_scope/src/generated/g_scope_system_input_interface.h"
#endif // SCOPE_DESKTOP_SUPPORT
#ifdef SELFTEST
# include "modules/scope/src/generated/g_scope_test_service_interface.h"
#endif // SELFTEST
#ifdef SCOPE_URL_PLAYER
# include "modules/scope/src/generated/g_urlplayer_command_interface.h"
#endif // SCOPE_URL_PLAYER
#ifdef SCOPE_WIDGET_MANAGER_SUPPORT
# include "modules/scope/src/generated/g_scope_widget_manager_interface.h"
#endif // SCOPE_WIDGET_MANAGER_SUPPORT
#ifdef SCOPE_WINDOW_MANAGER_SUPPORT
# include "modules/scope/src/generated/g_scope_window_manager_interface.h"
#endif // SCOPE_WINDOW_MANAGER_SUPPORT

class OpScopeDescriptorSet;
class OpScopeManager;
class OpScopeServiceManager;

/**
 * This is a generated class which defines all services which are use in scope.
 * It provides methods for registering meta-services as well as creating all
 * service objects.
 * In addition it keeps an instance of the OpScopeDescriptorSet class, this is
 * used to provide descriptor objects for messages in each service.
 *
 * This class is meant to be sub-classed into a real scope manager. The sub-class
 * must call RegisterMetaService() to register meta-services, and then call
 * CreateServices() and CreateServiceDescriptors() at a convenient time to
 * initialize the class properly.
 *
 * @note This class is generated.
 */
class OpScopeServiceFactory
{
public:
	/**
	 * Initializes the generated manager with all service pointers set to NULL.
	 */
	OpScopeServiceFactory();
	/**
	 * Deletes all active services and the descriptor set.
	 */
	virtual ~OpScopeServiceFactory();

	/**
	 * Get a reference to the descriptor set. Can only be used
	 * after a successful call to CreateServiceDescriptors.
	 */
	OpScopeDescriptorSet &GetDescriptorSet();

	/**
	 * Add a new meta-service named @a name. Meta-services are services
	 * which have no functionality, no version and cannot be introspected.
	 *
	 * The actual service will be created when CreateServices() is called
	 * by a sub-class. Adding a meta-service after that point will have no
	 * effect.
	 *
	 * If the meta-service has already been registered it will return OpStatus::ERR.
	 *
	 * @param name The name of the meta-service.
	 * @return OpStatus::OK, OpStatus::ERR or OpStatus::ERR_NO_MEMORY
	 *
	 */
	OP_STATUS RegisterMetaService(const uni_char *name);
	/**
	 * @see RegisterMetaService(const uni_char *name);
	 */
	OP_STATUS RegisterMetaService(const OpString &name) { return RegisterMetaService(name.CStr()); }

protected:

	/**
	 * Creates all services.
	 *
	 * @param manager The manager that owns the services.
	 * @return OpStatus::OK on success, OpStatus::ERR_NO_MEMORY otherwise.
	 */
	OP_STATUS CreateServices(OpScopeServiceManager *manager);

	/**
	 * Deletes all services. No more events will be accepted from Core
	 * after this method is called, even events triggered by service
	 * destruction.
	 */
	void DeleteServices();

	/**
	 * Create service descriptions.
	 *
	 * @return OpStatus::OK on success, OpStatus::ERR_NO_MEMORY otherwise.
	 */
	 OP_STATUS CreateServiceDescriptors();

public:

	OpScopeDescriptorSet *descriptors;

	// Services:

#ifdef SCOPE_CONSOLE_LOGGER
	OpScopeConsoleLogger *console_logger;
#endif // SCOPE_CONSOLE_LOGGER
#ifdef SCOPE_COOKIE_MANAGER
	OpScopeCookieManager *cookie_manager;
#endif // SCOPE_COOKIE_MANAGER
#ifdef SCOPE_CORE
	OpScopeCore *core;
#endif // SCOPE_CORE
#ifdef SCOPE_DESKTOP_SUPPORT
	OpScopeDesktopUtils *desktop_utils;
#endif // SCOPE_DESKTOP_SUPPORT
#ifdef SCOPE_DESKTOP_SUPPORT
	OpScopeDesktopWindowManager *desktop_window_manager;
#endif // SCOPE_DESKTOP_SUPPORT
#ifdef SCOPE_DOCUMENT_MANAGER
	OpScopeDocumentManager *document_manager;
#endif // SCOPE_DOCUMENT_MANAGER
#ifdef SCOPE_ECMASCRIPT
	OpScopeEcmascript *ecmascript;
#endif // SCOPE_ECMASCRIPT
#ifdef SCOPE_ECMASCRIPT_DEBUGGER
	ES_ScopeDebugFrontend *ecmascript_debugger;
#endif // SCOPE_ECMASCRIPT_DEBUGGER
#ifdef SCOPE_EXEC_SUPPORT
	OpScopeExec *exec;
#endif // SCOPE_EXEC_SUPPORT
#ifdef SCOPE_HTTP_LOGGER
	OpScopeHttpLogger *http_logger;
#endif // SCOPE_HTTP_LOGGER
#ifdef SCOPE_I18N
	OpScopeI18n *i18n;
#endif // SCOPE_I18N
#ifdef SCOPE_OVERLAY
	OpScopeOverlay *overlay;
#endif // SCOPE_OVERLAY
#ifdef SCOPE_PREFS
	OpScopePrefs *prefs;
#endif // SCOPE_PREFS
#ifdef SCOPE_PROFILER
	OpScopeProfiler *profiler;
#endif // SCOPE_PROFILER
#ifdef SCOPE_RESOURCE_MANAGER
	OpScopeResourceManager *resource_manager;
#endif // SCOPE_RESOURCE_MANAGER
#ifdef SCOPE_SUPPORT
	OpScopeProtocolService *scope;
#endif // SCOPE_SUPPORT
#ifdef SELFTEST
	OpScopeSelftest *selftest;
#endif // SELFTEST
#ifdef SCOPE_DESKTOP_SUPPORT
	OpScopeSystemInput *system_input;
#endif // SCOPE_DESKTOP_SUPPORT
#ifdef SELFTEST
	OtScopeTestService *test_service;
#endif // SELFTEST
#ifdef SCOPE_URL_PLAYER
	OpScopeUrlPlayer *url_player;
#endif // SCOPE_URL_PLAYER
#ifdef SCOPE_WIDGET_MANAGER_SUPPORT
	OpScopeWidgetManager *widget_manager;
#endif // SCOPE_WIDGET_MANAGER_SUPPORT
#ifdef SCOPE_WINDOW_MANAGER_SUPPORT
	OpScopeWindowManager *window_manager;
#endif // SCOPE_WINDOW_MANAGER_SUPPORT

private:
	/**
	 * Defines the name of a meta-service and manages the service object.
	 * The meta-service is first initailized with a name and later on in the
	 * CreateServices() a service object is created and placed in service.
	 * When the MetaService is destructed it will delete the service object.
	 */
	struct MetaService : public ListElement<MetaService>
	{
		MetaService() : service(NULL) {}
		~MetaService() { OP_DELETE(service); }
		OpString name;
		OpScopeService *service;
	};
	/**
	 * List of meta-services currently registered.
	 */
	List<MetaService> meta_services;

	// NOTE: These two methods are meant to be manually created outside of these classes
	//       See modules/scope/src/scope_manager.cpp for the implementation
	/**
	 * Initializes any shared member variables, called before the services are created.
	 */
	OP_STATUS InitializeShared();
	/**
	 * Cleans up the shared member variables, called after the services has been deleted.
	 */
	void CleanupShared();

	// Shared member variables. See cpp.conf for more information.
	OpScopeIDTable<DocumentManager> frame_ids;
	OpScopeIDTable<FramesDocument> document_ids;
	OpScopeIDTable<unsigned> resource_ids;
}; // OpScopeServiceFactory

/**
 * Contains the descriptors of all services in use by scope.
 *
 * @note This class is generated.
 */
class OpScopeDescriptorSet
{
public:
	OpScopeDescriptorSet();
	~OpScopeDescriptorSet();

	OP_STATUS Construct();

private:
	// Not really used for anything, except to prevent errors on certain
	// compile configurations.
	int dummy;

public:
#ifdef SCOPE_CONSOLE_LOGGER
	OpScopeConsoleLogger_SI::Descriptors *console_logger_;
#endif // SCOPE_CONSOLE_LOGGER
#ifdef SCOPE_COOKIE_MANAGER
	OpScopeCookieManager_SI::Descriptors *cookie_manager_;
#endif // SCOPE_COOKIE_MANAGER
#ifdef SCOPE_CORE
	OpScopeCore_SI::Descriptors *core_;
#endif // SCOPE_CORE
#ifdef SCOPE_DESKTOP_SUPPORT
	OpScopeDesktopUtils_SI::Descriptors *desktop_utils_;
#endif // SCOPE_DESKTOP_SUPPORT
#ifdef SCOPE_DESKTOP_SUPPORT
	OpScopeDesktopWindowManager_SI::Descriptors *desktop_window_manager_;
#endif // SCOPE_DESKTOP_SUPPORT
#ifdef SCOPE_DOCUMENT_MANAGER
	OpScopeDocumentManager_SI::Descriptors *document_manager_;
#endif // SCOPE_DOCUMENT_MANAGER
#ifdef SCOPE_ECMASCRIPT
	OpScopeEcmascript_SI::Descriptors *ecmascript_;
#endif // SCOPE_ECMASCRIPT
#ifdef SCOPE_ECMASCRIPT_DEBUGGER
	ES_ScopeDebugFrontend_SI::Descriptors *ecmascript_debugger_;
#endif // SCOPE_ECMASCRIPT_DEBUGGER
#ifdef SCOPE_EXEC_SUPPORT
	OpScopeExec_SI::Descriptors *exec_;
#endif // SCOPE_EXEC_SUPPORT
#ifdef SCOPE_HTTP_LOGGER
	OpScopeHttpLogger_SI::Descriptors *http_logger_;
#endif // SCOPE_HTTP_LOGGER
#ifdef SCOPE_I18N
	OpScopeI18n_SI::Descriptors *i18n_;
#endif // SCOPE_I18N
#ifdef SCOPE_OVERLAY
	OpScopeOverlay_SI::Descriptors *overlay_;
#endif // SCOPE_OVERLAY
#ifdef SCOPE_PREFS
	OpScopePrefs_SI::Descriptors *prefs_;
#endif // SCOPE_PREFS
#ifdef SCOPE_PROFILER
	OpScopeProfiler_SI::Descriptors *profiler_;
#endif // SCOPE_PROFILER
#ifdef SCOPE_RESOURCE_MANAGER
	OpScopeResourceManager_SI::Descriptors *resource_manager_;
#endif // SCOPE_RESOURCE_MANAGER
#ifdef SCOPE_SUPPORT
	OpScopeProtocolService_SI::Descriptors *scope_;
#endif // SCOPE_SUPPORT
#ifdef SCOPE_SUPPORT
	OpScopeService_SI::Descriptors *scope_service_;
#endif // SCOPE_SUPPORT
#ifdef SELFTEST
	OpScopeSelftest_SI::Descriptors *selftest_;
#endif // SELFTEST
#ifdef SCOPE_DESKTOP_SUPPORT
	OpScopeSystemInput_SI::Descriptors *system_input_;
#endif // SCOPE_DESKTOP_SUPPORT
#ifdef SELFTEST
	OtScopeTestService_SI::Descriptors *test_service_;
#endif // SELFTEST
#ifdef SCOPE_URL_PLAYER
	OpScopeUrlPlayer_SI::Descriptors *url_player_;
#endif // SCOPE_URL_PLAYER
#ifdef SCOPE_WIDGET_MANAGER_SUPPORT
	OpScopeWidgetManager_SI::Descriptors *widget_manager_;
#endif // SCOPE_WIDGET_MANAGER_SUPPORT
#ifdef SCOPE_WINDOW_MANAGER_SUPPORT
	OpScopeWindowManager_SI::Descriptors *window_manager_;
#endif // SCOPE_WINDOW_MANAGER_SUPPORT

}; // OpScopeDescriptorSet
#endif // SCOPE_SUPPORT

#endif // OP_SCOPE_MANAGER_G_H
