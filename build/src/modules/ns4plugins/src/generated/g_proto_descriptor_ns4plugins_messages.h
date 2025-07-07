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



#ifndef G_PROTO_DESCRIPTOR_NS4PLUGINS_MESSAGES_H
#define G_PROTO_DESCRIPTOR_NS4PLUGINS_MESSAGES_H





class OpProtobufMessage;

// This class contains the descriptors of all messages in the given set
// When a message descriptor is first requested it is allocated and put in this structure,
// subsequent uses of the descriptor will just use the previously allocated object.
class OpNs4pluginsMessages_Descriptors
{
public:
	OpNs4pluginsMessages_Descriptors();
	~OpNs4pluginsMessages_Descriptors();

	OP_STATUS Construct();

	const OpProtobufMessage *Get(unsigned id) const;

	/**
	 * Defines the number of messages in this descriptor set.
	 * The exact value is computed compile time depending on which
	 * features/defines are active.
	 */

	// Each message consists of an ID and and offset. The ID is used in
	// introspection and sent to scope clients. The offset is used to find the
	// descriptor object for a given message.
	// IDs uses the prefix _gen_MsgID_ and offsets uses _gen_MessageOffs_
	// Each message is also converted to an identifier based on the path and
	// the name.
	//
	// For instance the message WindowID will get the suffix window_id_
	// The ID for the message will then be _gen_MsgID_window_id_ and
	// the offset for the message descriptor _gen_MessageOffs_window_id_

	enum // Message offset + count
	{
		// Defines the offsets for each message which is used
		// in the message_list arrays in the descriptor
		_gen_MessageOffs_plugin_new_argument_,
		_gen_MessageOffs_plugin_probe_response_content_type_,
		_gen_MessageOffs_plugin_enumerate_response_library_path_,
		_gen_MessageOffs_message_address_,
		_gen_MessageOffs_plugin_callback_,
		_gen_MessageOffs_plugin_clear_site_data_,
		_gen_MessageOffs_plugin_create_object_,
		_gen_MessageOffs_plugin_create_object_response_,
		_gen_MessageOffs_plugin_destroy_,
		_gen_MessageOffs_plugin_destroy_response_,
		_gen_MessageOffs_plugin_destroy_stream_,
		_gen_MessageOffs_plugin_enumerate_,
		_gen_MessageOffs_plugin_enumerate_response_,
		_gen_MessageOffs_plugin_error_,
		_gen_MessageOffs_plugin_evaluate_,
		_gen_MessageOffs_plugin_exception_,
		_gen_MessageOffs_plugin_focus_event_,
		_gen_MessageOffs_plugin_get_authentication_info_,
		_gen_MessageOffs_plugin_get_authentication_info_response_,
		_gen_MessageOffs_plugin_get_int_identifier_,
		_gen_MessageOffs_plugin_get_property_,
		_gen_MessageOffs_plugin_get_sites_with_data_,
		_gen_MessageOffs_plugin_get_sites_with_data_response_,
		_gen_MessageOffs_plugin_get_string_identifiers_,
		_gen_MessageOffs_plugin_get_url_,
		_gen_MessageOffs_plugin_get_url_notify_,
		_gen_MessageOffs_plugin_get_value_,
		_gen_MessageOffs_plugin_get_value_for_url_,
		_gen_MessageOffs_plugin_get_value_for_url_response_,
		_gen_MessageOffs_plugin_get_value_response_,
		_gen_MessageOffs_plugin_has_method_,
		_gen_MessageOffs_plugin_has_property_,
		_gen_MessageOffs_plugin_identifier_,
		_gen_MessageOffs_plugin_identifiers_,
		_gen_MessageOffs_plugin_initialize_,
		_gen_MessageOffs_plugin_initialize_response_,
		_gen_MessageOffs_plugin_invalidate_,
		_gen_MessageOffs_plugin_invoke_,
		_gen_MessageOffs_plugin_invoke_default_,
		_gen_MessageOffs_plugin_load_,
		_gen_MessageOffs_plugin_load_response_,
		_gen_MessageOffs_plugin_lookup_identifier_,
		_gen_MessageOffs_plugin_lookup_identifier_response_,
		_gen_MessageOffs_plugin_new_,
		_gen_MessageOffs_plugin_new_response_,
		_gen_MessageOffs_plugin_new_stream_,
		_gen_MessageOffs_plugin_new_stream_response_,
		_gen_MessageOffs_plugin_notify_,
		_gen_MessageOffs_plugin_object_,
		_gen_MessageOffs_plugin_object_construct_,
		_gen_MessageOffs_plugin_object_deallocate_,
		_gen_MessageOffs_plugin_object_enumerate_,
		_gen_MessageOffs_plugin_object_enumerate_response_,
		_gen_MessageOffs_plugin_object_invalidate_,
		_gen_MessageOffs_plugin_object_state_,
		_gen_MessageOffs_plugin_platform_event_,
		_gen_MessageOffs_plugin_point_,
		_gen_MessageOffs_plugin_pop_popups_enabled_,
		_gen_MessageOffs_plugin_post_url_,
		_gen_MessageOffs_plugin_post_url_notify_,
		_gen_MessageOffs_plugin_probe_,
		_gen_MessageOffs_plugin_probe_response_,
		_gen_MessageOffs_plugin_push_popups_enabled_,
		_gen_MessageOffs_plugin_rect_,
		_gen_MessageOffs_plugin_release_object_,
		_gen_MessageOffs_plugin_reload_,
		_gen_MessageOffs_plugin_remove_property_,
		_gen_MessageOffs_plugin_result_,
		_gen_MessageOffs_plugin_retain_object_,
		_gen_MessageOffs_plugin_set_property_,
		_gen_MessageOffs_plugin_set_value_,
		_gen_MessageOffs_plugin_set_value_for_url_,
		_gen_MessageOffs_plugin_shutdown_,
		_gen_MessageOffs_plugin_status_text_,
		_gen_MessageOffs_plugin_stream_,
		_gen_MessageOffs_plugin_stream_as_file_,
		_gen_MessageOffs_plugin_timer_,
		_gen_MessageOffs_plugin_user_agent_,
		_gen_MessageOffs_plugin_user_agent_response_,
		_gen_MessageOffs_plugin_variant_,
		_gen_MessageOffs_plugin_window_,
		_gen_MessageOffs_plugin_windowless_handle_event_response_,
		_gen_MessageOffs_plugin_windowless_key_event_,
		_gen_MessageOffs_plugin_windowless_mouse_event_,
		_gen_MessageOffs_plugin_windowless_paint_,
		_gen_MessageOffs_plugin_write_,
		_gen_MessageOffs_plugin_write_ready_,
		_gen_MessageOffs_plugin_write_ready_response_,
		_gen_MessageOffs_plugin_write_response_,

		// Message count is calculated at compile time
		_gen_Message_Count
	};

	// The IDs for all messages
	enum // message IDs
	{
		  _gen_void_MsgID // The Default/void message. Also ensures that all other IDs start at 1
		, _gen_MsgID_plugin_new_argument_
		, _gen_MsgID_plugin_probe_response_content_type_
		, _gen_MsgID_plugin_enumerate_response_library_path_
		, _gen_MsgID_message_address_
		, _gen_MsgID_plugin_callback_
		, _gen_MsgID_plugin_clear_site_data_
		, _gen_MsgID_plugin_create_object_
		, _gen_MsgID_plugin_create_object_response_
		, _gen_MsgID_plugin_destroy_
		, _gen_MsgID_plugin_destroy_response_
		, _gen_MsgID_plugin_destroy_stream_
		, _gen_MsgID_plugin_enumerate_
		, _gen_MsgID_plugin_enumerate_response_
		, _gen_MsgID_plugin_error_
		, _gen_MsgID_plugin_evaluate_
		, _gen_MsgID_plugin_exception_
		, _gen_MsgID_plugin_focus_event_
		, _gen_MsgID_plugin_get_authentication_info_
		, _gen_MsgID_plugin_get_authentication_info_response_
		, _gen_MsgID_plugin_get_int_identifier_
		, _gen_MsgID_plugin_get_property_
		, _gen_MsgID_plugin_get_sites_with_data_
		, _gen_MsgID_plugin_get_sites_with_data_response_
		, _gen_MsgID_plugin_get_string_identifiers_
		, _gen_MsgID_plugin_get_url_
		, _gen_MsgID_plugin_get_url_notify_
		, _gen_MsgID_plugin_get_value_
		, _gen_MsgID_plugin_get_value_for_url_
		, _gen_MsgID_plugin_get_value_for_url_response_
		, _gen_MsgID_plugin_get_value_response_
		, _gen_MsgID_plugin_has_method_
		, _gen_MsgID_plugin_has_property_
		, _gen_MsgID_plugin_identifier_
		, _gen_MsgID_plugin_identifiers_
		, _gen_MsgID_plugin_initialize_
		, _gen_MsgID_plugin_initialize_response_
		, _gen_MsgID_plugin_invalidate_
		, _gen_MsgID_plugin_invoke_
		, _gen_MsgID_plugin_invoke_default_
		, _gen_MsgID_plugin_load_
		, _gen_MsgID_plugin_load_response_
		, _gen_MsgID_plugin_lookup_identifier_
		, _gen_MsgID_plugin_lookup_identifier_response_
		, _gen_MsgID_plugin_new_
		, _gen_MsgID_plugin_new_response_
		, _gen_MsgID_plugin_new_stream_
		, _gen_MsgID_plugin_new_stream_response_
		, _gen_MsgID_plugin_notify_
		, _gen_MsgID_plugin_object_
		, _gen_MsgID_plugin_object_construct_
		, _gen_MsgID_plugin_object_deallocate_
		, _gen_MsgID_plugin_object_enumerate_
		, _gen_MsgID_plugin_object_enumerate_response_
		, _gen_MsgID_plugin_object_invalidate_
		, _gen_MsgID_plugin_object_state_
		, _gen_MsgID_plugin_platform_event_
		, _gen_MsgID_plugin_point_
		, _gen_MsgID_plugin_pop_popups_enabled_
		, _gen_MsgID_plugin_post_url_
		, _gen_MsgID_plugin_post_url_notify_
		, _gen_MsgID_plugin_probe_
		, _gen_MsgID_plugin_probe_response_
		, _gen_MsgID_plugin_push_popups_enabled_
		, _gen_MsgID_plugin_rect_
		, _gen_MsgID_plugin_release_object_
		, _gen_MsgID_plugin_reload_
		, _gen_MsgID_plugin_remove_property_
		, _gen_MsgID_plugin_result_
		, _gen_MsgID_plugin_retain_object_
		, _gen_MsgID_plugin_set_property_
		, _gen_MsgID_plugin_set_value_
		, _gen_MsgID_plugin_set_value_for_url_
		, _gen_MsgID_plugin_shutdown_
		, _gen_MsgID_plugin_status_text_
		, _gen_MsgID_plugin_stream_
		, _gen_MsgID_plugin_stream_as_file_
		, _gen_MsgID_plugin_timer_
		, _gen_MsgID_plugin_user_agent_
		, _gen_MsgID_plugin_user_agent_response_
		, _gen_MsgID_plugin_variant_
		, _gen_MsgID_plugin_window_
		, _gen_MsgID_plugin_windowless_handle_event_response_
		, _gen_MsgID_plugin_windowless_key_event_
		, _gen_MsgID_plugin_windowless_mouse_event_
		, _gen_MsgID_plugin_windowless_paint_
		, _gen_MsgID_plugin_write_
		, _gen_MsgID_plugin_write_ready_
		, _gen_MsgID_plugin_write_ready_response_
		, _gen_MsgID_plugin_write_response_
	};

	// List of message descriptors. They are initially NULL and assigned an object when the message is used.
	mutable OpProtobufMessage *message_list[_gen_Message_Count];

};





#endif // G_PROTO_DESCRIPTOR_NS4PLUGINS_MESSAGES_H
