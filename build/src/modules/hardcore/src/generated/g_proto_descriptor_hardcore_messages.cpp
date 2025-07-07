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

#include "core/pch.h"






#include "modules/hardcore/src/generated/g_proto_descriptor_hardcore_messages.h"
#include "modules/hardcore/src/generated/g_proto_hardcore_messages.h"



// BEGIN: OpHardcoreMessages_Descriptors

OpHardcoreMessages_Descriptors::OpHardcoreMessages_Descriptors()
{
	for (unsigned i = 0; i < _gen_Message_Count; ++i)
	{
		message_list[i] = NULL;
	}
}

OpHardcoreMessages_Descriptors::~OpHardcoreMessages_Descriptors()
{
	for (unsigned i = 0; i < _gen_Message_Count; ++i)
	{
		OP_DELETE(message_list[i]);
	}
}

OP_STATUS
OpHardcoreMessages_Descriptors::Construct()
{
	return OpStatus::OK;
}

const OpProtobufMessage *
OpHardcoreMessages_Descriptors::Get(unsigned id) const
{
	OpHardcoreMessages_Descriptors *descriptors = const_cast<OpHardcoreMessages_Descriptors *>(this);
	switch (id)
	{
	case _gen_MsgID_component_manager_response_:
		return OpHardcoreMessages_MessageSet::ComponentManagerResponse::GetMessageDescriptor(descriptors);

	case _gen_MsgID_component_request_:
		return OpHardcoreMessages_MessageSet::ComponentRequest::GetMessageDescriptor(descriptors);

	case _gen_MsgID_message_address_:
		return OpHardcoreMessages_MessageSet::MessageAddress::GetMessageDescriptor(descriptors);

	case _gen_MsgID_number_:
		return OpHardcoreMessages_MessageSet::Number::GetMessageDescriptor(descriptors);

	case _gen_MsgID_peer_connected_:
		return OpHardcoreMessages_MessageSet::PeerConnected::GetMessageDescriptor(descriptors);

	case _gen_MsgID_peer_disconnected_:
		return OpHardcoreMessages_MessageSet::PeerDisconnected::GetMessageDescriptor(descriptors);

	case _gen_MsgID_peer_pending_:
		return OpHardcoreMessages_MessageSet::PeerPending::GetMessageDescriptor(descriptors);

	case _gen_MsgID_status_:
		return OpHardcoreMessages_MessageSet::Status::GetMessageDescriptor(descriptors);

	case _gen_MsgID_text_:
		return OpHardcoreMessages_MessageSet::Text::GetMessageDescriptor(descriptors);

	default:
		return NULL;
	}
}


// END: OpHardcoreMessages_Descriptors






