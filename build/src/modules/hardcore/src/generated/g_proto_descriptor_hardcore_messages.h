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

// Generated from ../../modules/hardcore/component/messages.proto



#ifndef G_PROTO_DESCRIPTOR_HARDCORE_MESSAGES_H
#define G_PROTO_DESCRIPTOR_HARDCORE_MESSAGES_H





class OpProtobufMessage;

// This class contains the descriptors of all messages in the given set
// When a message descriptor is first requested it is allocated and put in this structure,
// subsequent uses of the descriptor will just use the previously allocated object.
class OpHardcoreMessages_Descriptors
{
public:
	OpHardcoreMessages_Descriptors();
	~OpHardcoreMessages_Descriptors();

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
		_gen_MessageOffs_component_manager_response_,
		_gen_MessageOffs_component_request_,
		_gen_MessageOffs_message_address_,
		_gen_MessageOffs_number_,
		_gen_MessageOffs_peer_connected_,
		_gen_MessageOffs_peer_disconnected_,
		_gen_MessageOffs_peer_pending_,
		_gen_MessageOffs_status_,
		_gen_MessageOffs_text_,

		// Message count is calculated at compile time
		_gen_Message_Count
	};

	// The IDs for all messages
	enum // message IDs
	{
		  _gen_void_MsgID // The Default/void message. Also ensures that all other IDs start at 1
		, _gen_MsgID_component_manager_response_
		, _gen_MsgID_component_request_
		, _gen_MsgID_message_address_
		, _gen_MsgID_number_
		, _gen_MsgID_peer_connected_
		, _gen_MsgID_peer_disconnected_
		, _gen_MsgID_peer_pending_
		, _gen_MsgID_status_
		, _gen_MsgID_text_
	};

	// List of message descriptors. They are initially NULL and assigned an object when the message is used.
	mutable OpProtobufMessage *message_list[_gen_Message_Count];

};





#endif // G_PROTO_DESCRIPTOR_HARDCORE_MESSAGES_H
