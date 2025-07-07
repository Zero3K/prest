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

// Generated from ../../modules/ns4plugins/component/messages.proto

#include "core/pch.h"






#include "modules/ns4plugins/src/generated/g_proto_descriptor_ns4plugins_messages.h"
#include "modules/ns4plugins/src/generated/g_proto_ns4plugins_messages.h"



// BEGIN: OpNs4pluginsMessages_Descriptors

OpNs4pluginsMessages_Descriptors::OpNs4pluginsMessages_Descriptors()
{
	for (unsigned i = 0; i < _gen_Message_Count; ++i)
	{
		message_list[i] = NULL;
	}
}

OpNs4pluginsMessages_Descriptors::~OpNs4pluginsMessages_Descriptors()
{
	for (unsigned i = 0; i < _gen_Message_Count; ++i)
	{
		OP_DELETE(message_list[i]);
	}
}

OP_STATUS
OpNs4pluginsMessages_Descriptors::Construct()
{
	return OpStatus::OK;
}

const OpProtobufMessage *
OpNs4pluginsMessages_Descriptors::Get(unsigned id) const
{
	OpNs4pluginsMessages_Descriptors *descriptors = const_cast<OpNs4pluginsMessages_Descriptors *>(this);
	switch (id)
	{
	case _gen_MsgID_plugin_new_argument_:
		return OpNs4pluginsMessages_MessageSet::PluginNew_Argument::GetMessageDescriptor(descriptors);

	case _gen_MsgID_plugin_probe_response_content_type_:
		return OpNs4pluginsMessages_MessageSet::PluginProbeResponse_ContentType::GetMessageDescriptor(descriptors);

	case _gen_MsgID_plugin_enumerate_response_library_path_:
		return OpNs4pluginsMessages_MessageSet::PluginEnumerateResponse_LibraryPath::GetMessageDescriptor(descriptors);

	case _gen_MsgID_message_address_:
		return OpNs4pluginsMessages_MessageSet::MessageAddress::GetMessageDescriptor(descriptors);

	case _gen_MsgID_plugin_callback_:
		return OpNs4pluginsMessages_MessageSet::PluginCallback::GetMessageDescriptor(descriptors);

	case _gen_MsgID_plugin_clear_site_data_:
		return OpNs4pluginsMessages_MessageSet::PluginClearSiteData::GetMessageDescriptor(descriptors);

	case _gen_MsgID_plugin_create_object_:
		return OpNs4pluginsMessages_MessageSet::PluginCreateObject::GetMessageDescriptor(descriptors);

	case _gen_MsgID_plugin_create_object_response_:
		return OpNs4pluginsMessages_MessageSet::PluginCreateObjectResponse::GetMessageDescriptor(descriptors);

	case _gen_MsgID_plugin_destroy_:
		return OpNs4pluginsMessages_MessageSet::PluginDestroy::GetMessageDescriptor(descriptors);

	case _gen_MsgID_plugin_destroy_response_:
		return OpNs4pluginsMessages_MessageSet::PluginDestroyResponse::GetMessageDescriptor(descriptors);

	case _gen_MsgID_plugin_destroy_stream_:
		return OpNs4pluginsMessages_MessageSet::PluginDestroyStream::GetMessageDescriptor(descriptors);

	case _gen_MsgID_plugin_enumerate_:
		return OpNs4pluginsMessages_MessageSet::PluginEnumerate::GetMessageDescriptor(descriptors);

	case _gen_MsgID_plugin_enumerate_response_:
		return OpNs4pluginsMessages_MessageSet::PluginEnumerateResponse::GetMessageDescriptor(descriptors);

	case _gen_MsgID_plugin_error_:
		return OpNs4pluginsMessages_MessageSet::PluginError::GetMessageDescriptor(descriptors);

	case _gen_MsgID_plugin_evaluate_:
		return OpNs4pluginsMessages_MessageSet::PluginEvaluate::GetMessageDescriptor(descriptors);

	case _gen_MsgID_plugin_exception_:
		return OpNs4pluginsMessages_MessageSet::PluginException::GetMessageDescriptor(descriptors);

	case _gen_MsgID_plugin_focus_event_:
		return OpNs4pluginsMessages_MessageSet::PluginFocusEvent::GetMessageDescriptor(descriptors);

	case _gen_MsgID_plugin_get_authentication_info_:
		return OpNs4pluginsMessages_MessageSet::PluginGetAuthenticationInfo::GetMessageDescriptor(descriptors);

	case _gen_MsgID_plugin_get_authentication_info_response_:
		return OpNs4pluginsMessages_MessageSet::PluginGetAuthenticationInfoResponse::GetMessageDescriptor(descriptors);

	case _gen_MsgID_plugin_get_int_identifier_:
		return OpNs4pluginsMessages_MessageSet::PluginGetIntIdentifier::GetMessageDescriptor(descriptors);

	case _gen_MsgID_plugin_get_property_:
		return OpNs4pluginsMessages_MessageSet::PluginGetProperty::GetMessageDescriptor(descriptors);

	case _gen_MsgID_plugin_get_sites_with_data_:
		return OpNs4pluginsMessages_MessageSet::PluginGetSitesWithData::GetMessageDescriptor(descriptors);

	case _gen_MsgID_plugin_get_sites_with_data_response_:
		return OpNs4pluginsMessages_MessageSet::PluginGetSitesWithDataResponse::GetMessageDescriptor(descriptors);

	case _gen_MsgID_plugin_get_string_identifiers_:
		return OpNs4pluginsMessages_MessageSet::PluginGetStringIdentifiers::GetMessageDescriptor(descriptors);

	case _gen_MsgID_plugin_get_url_:
		return OpNs4pluginsMessages_MessageSet::PluginGetURL::GetMessageDescriptor(descriptors);

	case _gen_MsgID_plugin_get_url_notify_:
		return OpNs4pluginsMessages_MessageSet::PluginGetURLNotify::GetMessageDescriptor(descriptors);

	case _gen_MsgID_plugin_get_value_:
		return OpNs4pluginsMessages_MessageSet::PluginGetValue::GetMessageDescriptor(descriptors);

	case _gen_MsgID_plugin_get_value_for_url_:
		return OpNs4pluginsMessages_MessageSet::PluginGetValueForURL::GetMessageDescriptor(descriptors);

	case _gen_MsgID_plugin_get_value_for_url_response_:
		return OpNs4pluginsMessages_MessageSet::PluginGetValueForURLResponse::GetMessageDescriptor(descriptors);

	case _gen_MsgID_plugin_get_value_response_:
		return OpNs4pluginsMessages_MessageSet::PluginGetValueResponse::GetMessageDescriptor(descriptors);

	case _gen_MsgID_plugin_has_method_:
		return OpNs4pluginsMessages_MessageSet::PluginHasMethod::GetMessageDescriptor(descriptors);

	case _gen_MsgID_plugin_has_property_:
		return OpNs4pluginsMessages_MessageSet::PluginHasProperty::GetMessageDescriptor(descriptors);

	case _gen_MsgID_plugin_identifier_:
		return OpNs4pluginsMessages_MessageSet::PluginIdentifier::GetMessageDescriptor(descriptors);

	case _gen_MsgID_plugin_identifiers_:
		return OpNs4pluginsMessages_MessageSet::PluginIdentifiers::GetMessageDescriptor(descriptors);

	case _gen_MsgID_plugin_initialize_:
		return OpNs4pluginsMessages_MessageSet::PluginInitialize::GetMessageDescriptor(descriptors);

	case _gen_MsgID_plugin_initialize_response_:
		return OpNs4pluginsMessages_MessageSet::PluginInitializeResponse::GetMessageDescriptor(descriptors);

	case _gen_MsgID_plugin_invalidate_:
		return OpNs4pluginsMessages_MessageSet::PluginInvalidate::GetMessageDescriptor(descriptors);

	case _gen_MsgID_plugin_invoke_:
		return OpNs4pluginsMessages_MessageSet::PluginInvoke::GetMessageDescriptor(descriptors);

	case _gen_MsgID_plugin_invoke_default_:
		return OpNs4pluginsMessages_MessageSet::PluginInvokeDefault::GetMessageDescriptor(descriptors);

	case _gen_MsgID_plugin_load_:
		return OpNs4pluginsMessages_MessageSet::PluginLoad::GetMessageDescriptor(descriptors);

	case _gen_MsgID_plugin_load_response_:
		return OpNs4pluginsMessages_MessageSet::PluginLoadResponse::GetMessageDescriptor(descriptors);

	case _gen_MsgID_plugin_lookup_identifier_:
		return OpNs4pluginsMessages_MessageSet::PluginLookupIdentifier::GetMessageDescriptor(descriptors);

	case _gen_MsgID_plugin_lookup_identifier_response_:
		return OpNs4pluginsMessages_MessageSet::PluginLookupIdentifierResponse::GetMessageDescriptor(descriptors);

	case _gen_MsgID_plugin_new_:
		return OpNs4pluginsMessages_MessageSet::PluginNew::GetMessageDescriptor(descriptors);

	case _gen_MsgID_plugin_new_response_:
		return OpNs4pluginsMessages_MessageSet::PluginNewResponse::GetMessageDescriptor(descriptors);

	case _gen_MsgID_plugin_new_stream_:
		return OpNs4pluginsMessages_MessageSet::PluginNewStream::GetMessageDescriptor(descriptors);

	case _gen_MsgID_plugin_new_stream_response_:
		return OpNs4pluginsMessages_MessageSet::PluginNewStreamResponse::GetMessageDescriptor(descriptors);

	case _gen_MsgID_plugin_notify_:
		return OpNs4pluginsMessages_MessageSet::PluginNotify::GetMessageDescriptor(descriptors);

	case _gen_MsgID_plugin_object_:
		return OpNs4pluginsMessages_MessageSet::PluginObject::GetMessageDescriptor(descriptors);

	case _gen_MsgID_plugin_object_construct_:
		return OpNs4pluginsMessages_MessageSet::PluginObjectConstruct::GetMessageDescriptor(descriptors);

	case _gen_MsgID_plugin_object_deallocate_:
		return OpNs4pluginsMessages_MessageSet::PluginObjectDeallocate::GetMessageDescriptor(descriptors);

	case _gen_MsgID_plugin_object_enumerate_:
		return OpNs4pluginsMessages_MessageSet::PluginObjectEnumerate::GetMessageDescriptor(descriptors);

	case _gen_MsgID_plugin_object_enumerate_response_:
		return OpNs4pluginsMessages_MessageSet::PluginObjectEnumerateResponse::GetMessageDescriptor(descriptors);

	case _gen_MsgID_plugin_object_invalidate_:
		return OpNs4pluginsMessages_MessageSet::PluginObjectInvalidate::GetMessageDescriptor(descriptors);

	case _gen_MsgID_plugin_object_state_:
		return OpNs4pluginsMessages_MessageSet::PluginObjectState::GetMessageDescriptor(descriptors);

	case _gen_MsgID_plugin_platform_event_:
		return OpNs4pluginsMessages_MessageSet::PluginPlatformEvent::GetMessageDescriptor(descriptors);

	case _gen_MsgID_plugin_point_:
		return OpNs4pluginsMessages_MessageSet::PluginPoint::GetMessageDescriptor(descriptors);

	case _gen_MsgID_plugin_pop_popups_enabled_:
		return OpNs4pluginsMessages_MessageSet::PluginPopPopupsEnabled::GetMessageDescriptor(descriptors);

	case _gen_MsgID_plugin_post_url_:
		return OpNs4pluginsMessages_MessageSet::PluginPostURL::GetMessageDescriptor(descriptors);

	case _gen_MsgID_plugin_post_url_notify_:
		return OpNs4pluginsMessages_MessageSet::PluginPostURLNotify::GetMessageDescriptor(descriptors);

	case _gen_MsgID_plugin_probe_:
		return OpNs4pluginsMessages_MessageSet::PluginProbe::GetMessageDescriptor(descriptors);

	case _gen_MsgID_plugin_probe_response_:
		return OpNs4pluginsMessages_MessageSet::PluginProbeResponse::GetMessageDescriptor(descriptors);

	case _gen_MsgID_plugin_push_popups_enabled_:
		return OpNs4pluginsMessages_MessageSet::PluginPushPopupsEnabled::GetMessageDescriptor(descriptors);

	case _gen_MsgID_plugin_rect_:
		return OpNs4pluginsMessages_MessageSet::PluginRect::GetMessageDescriptor(descriptors);

	case _gen_MsgID_plugin_release_object_:
		return OpNs4pluginsMessages_MessageSet::PluginReleaseObject::GetMessageDescriptor(descriptors);

	case _gen_MsgID_plugin_reload_:
		return OpNs4pluginsMessages_MessageSet::PluginReload::GetMessageDescriptor(descriptors);

	case _gen_MsgID_plugin_remove_property_:
		return OpNs4pluginsMessages_MessageSet::PluginRemoveProperty::GetMessageDescriptor(descriptors);

	case _gen_MsgID_plugin_result_:
		return OpNs4pluginsMessages_MessageSet::PluginResult::GetMessageDescriptor(descriptors);

	case _gen_MsgID_plugin_retain_object_:
		return OpNs4pluginsMessages_MessageSet::PluginRetainObject::GetMessageDescriptor(descriptors);

	case _gen_MsgID_plugin_set_property_:
		return OpNs4pluginsMessages_MessageSet::PluginSetProperty::GetMessageDescriptor(descriptors);

	case _gen_MsgID_plugin_set_value_:
		return OpNs4pluginsMessages_MessageSet::PluginSetValue::GetMessageDescriptor(descriptors);

	case _gen_MsgID_plugin_set_value_for_url_:
		return OpNs4pluginsMessages_MessageSet::PluginSetValueForURL::GetMessageDescriptor(descriptors);

	case _gen_MsgID_plugin_shutdown_:
		return OpNs4pluginsMessages_MessageSet::PluginShutdown::GetMessageDescriptor(descriptors);

	case _gen_MsgID_plugin_status_text_:
		return OpNs4pluginsMessages_MessageSet::PluginStatusText::GetMessageDescriptor(descriptors);

	case _gen_MsgID_plugin_stream_:
		return OpNs4pluginsMessages_MessageSet::PluginStream::GetMessageDescriptor(descriptors);

	case _gen_MsgID_plugin_stream_as_file_:
		return OpNs4pluginsMessages_MessageSet::PluginStreamAsFile::GetMessageDescriptor(descriptors);

	case _gen_MsgID_plugin_timer_:
		return OpNs4pluginsMessages_MessageSet::PluginTimer::GetMessageDescriptor(descriptors);

	case _gen_MsgID_plugin_user_agent_:
		return OpNs4pluginsMessages_MessageSet::PluginUserAgent::GetMessageDescriptor(descriptors);

	case _gen_MsgID_plugin_user_agent_response_:
		return OpNs4pluginsMessages_MessageSet::PluginUserAgentResponse::GetMessageDescriptor(descriptors);

	case _gen_MsgID_plugin_variant_:
		return OpNs4pluginsMessages_MessageSet::PluginVariant::GetMessageDescriptor(descriptors);

	case _gen_MsgID_plugin_window_:
		return OpNs4pluginsMessages_MessageSet::PluginWindow::GetMessageDescriptor(descriptors);

	case _gen_MsgID_plugin_windowless_handle_event_response_:
		return OpNs4pluginsMessages_MessageSet::PluginWindowlessHandleEventResponse::GetMessageDescriptor(descriptors);

	case _gen_MsgID_plugin_windowless_key_event_:
		return OpNs4pluginsMessages_MessageSet::PluginWindowlessKeyEvent::GetMessageDescriptor(descriptors);

	case _gen_MsgID_plugin_windowless_mouse_event_:
		return OpNs4pluginsMessages_MessageSet::PluginWindowlessMouseEvent::GetMessageDescriptor(descriptors);

	case _gen_MsgID_plugin_windowless_paint_:
		return OpNs4pluginsMessages_MessageSet::PluginWindowlessPaint::GetMessageDescriptor(descriptors);

	case _gen_MsgID_plugin_write_:
		return OpNs4pluginsMessages_MessageSet::PluginWrite::GetMessageDescriptor(descriptors);

	case _gen_MsgID_plugin_write_ready_:
		return OpNs4pluginsMessages_MessageSet::PluginWriteReady::GetMessageDescriptor(descriptors);

	case _gen_MsgID_plugin_write_ready_response_:
		return OpNs4pluginsMessages_MessageSet::PluginWriteReadyResponse::GetMessageDescriptor(descriptors);

	case _gen_MsgID_plugin_write_response_:
		return OpNs4pluginsMessages_MessageSet::PluginWriteResponse::GetMessageDescriptor(descriptors);

	default:
		return NULL;
	}
}


// END: OpNs4pluginsMessages_Descriptors






