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

#ifdef SCOPE_OVERLAY

#include "modules/scope/src/generated/g_scope_overlay_interface.h"

// BEGIN: OpScopeOverlay_Descriptors

OpScopeOverlay_Descriptors::OpScopeOverlay_Descriptors()
{
	for (unsigned i = 0; i < _gen_Message_Count; ++i)
	{
		message_list[i] = NULL;
	}
}

OpScopeOverlay_Descriptors::~OpScopeOverlay_Descriptors()
{
	for (unsigned i = 0; i < _gen_Message_Count; ++i)
	{
		OP_DELETE(message_list[i]);
	}
}

OP_STATUS
OpScopeOverlay_Descriptors::Construct()
{
	enum_id_list[0] = _gen_EnumID_OverlayType;
	enum_id_list[1] = _gen_EnumID_InsertionMethod;
	return OpStatus::OK;
}

const OpProtobufMessage *
OpScopeOverlay_Descriptors::Get(unsigned id) const
{
	OpScopeOverlay_Descriptors *descriptors = const_cast<OpScopeOverlay_Descriptors *>(this);
	switch (id)
	{
	case _gen_MsgID_area_:
		return OpScopeOverlay_MessageSet::Area::GetMessageDescriptor(descriptors);

	case _gen_MsgID_area_overlay_:
		return OpScopeOverlay_MessageSet::AreaOverlay::GetMessageDescriptor(descriptors);

	case _gen_MsgID_color_:
		return OpScopeOverlay_MessageSet::Color::GetMessageDescriptor(descriptors);

	case _gen_MsgID_create_overlay_arg_:
		return OpScopeOverlay_MessageSet::CreateOverlayArg::GetMessageDescriptor(descriptors);

	case _gen_MsgID_insertion_:
		return OpScopeOverlay_MessageSet::Insertion::GetMessageDescriptor(descriptors);

	case _gen_MsgID_overlay_id_:
		return OpScopeOverlay_MessageSet::OverlayID::GetMessageDescriptor(descriptors);

	case _gen_MsgID_remove_overlay_arg_:
		return OpScopeOverlay_MessageSet::RemoveOverlayArg::GetMessageDescriptor(descriptors);

	default:
		return NULL;
	}
}


// END: OpScopeOverlay_Descriptors


// BEGIN: OpScopeOverlay_MessageSet

OpScopeOverlay_MessageSet::OpScopeOverlay_MessageSet()
{
}

/*virtual*/
OpScopeOverlay_MessageSet::~OpScopeOverlay_MessageSet()
{
}

// END: OpScopeOverlay_MessageSet

// BEGIN: Messages

//   BEGIN: Message: Area
/*static*/
const OpProtobufMessage *
OpScopeOverlay_MessageSet::Area::GetMessageDescriptor(OpScopeOverlay_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeOverlay_Descriptors::_gen_MessageOffs_area_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Uint32,
						1,
						UNI_L("x"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Uint32,
						2,
						UNI_L("y"),
						OpProtobufField::Required
						);
	fields[2] = OpProtobufField(
						OpProtobufFormat::Uint32,
						3,
						UNI_L("w"),
						OpProtobufField::Required
						);
	fields[3] = OpProtobufField(
						OpProtobufFormat::Uint32,
						4,
						UNI_L("h"),
						OpProtobufField::Required
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpScopeOverlay_MessageSet::Area,
						_x
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpScopeOverlay_MessageSet::Area,
						_y
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						OpScopeOverlay_MessageSet::Area,
						_w
						);
	offsets[3] = OP_PROTO_OFFSETOF(
						OpScopeOverlay_MessageSet::Area,
						_h
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeOverlay_Descriptors::_gen_MsgID_area_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeOverlay_MessageSet::Area, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeOverlay_MessageSet::Area, encoded_size_),
					"Area",
					OpProtobufMessageVector<OpScopeOverlay_MessageSet::Area>::Make,
					OpProtobufMessageVector<OpScopeOverlay_MessageSet::Area>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: Area: Implementation


// END: Area: Implementation

//   END: Message: Area

//   BEGIN: Message: AreaOverlay
/*static*/
const OpProtobufMessage *
OpScopeOverlay_MessageSet::AreaOverlay::GetMessageDescriptor(OpScopeOverlay_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeOverlay_Descriptors::_gen_MessageOffs_area_overlay_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Message,
						1,
						UNI_L("area"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Message,
						2,
						UNI_L("backgroundColor"),
						OpProtobufField::Required
						);
	fields[2] = OpProtobufField(
						OpProtobufFormat::Message,
						3,
						UNI_L("borderColor"),
						OpProtobufField::Optional
						);
	fields[3] = OpProtobufField(
						OpProtobufFormat::Message,
						4,
						UNI_L("gridColor"),
						OpProtobufField::Optional
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpScopeOverlay_MessageSet::AreaOverlay,
						_area
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpScopeOverlay_MessageSet::AreaOverlay,
						_backgroundColor
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						OpScopeOverlay_MessageSet::AreaOverlay,
						_borderColor
						);
	offsets[3] = OP_PROTO_OFFSETOF(
						OpScopeOverlay_MessageSet::AreaOverlay,
						_gridColor
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeOverlay_Descriptors::_gen_MsgID_area_overlay_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeOverlay_MessageSet::AreaOverlay, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeOverlay_MessageSet::AreaOverlay, encoded_size_),
					"AreaOverlay",
					OpProtobufMessageVector<OpScopeOverlay_MessageSet::AreaOverlay>::Make,
					OpProtobufMessageVector<OpScopeOverlay_MessageSet::AreaOverlay>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	fields[0].SetMessage(Area::GetMessageDescriptor(descriptors));
	fields[1].SetMessage(Color::GetMessageDescriptor(descriptors));
	fields[2].SetMessage(Color::GetMessageDescriptor(descriptors));
	fields[3].SetMessage(Color::GetMessageDescriptor(descriptors));

	return message;
}

// BEGIN: AreaOverlay: Implementation

// Setters

OpScopeOverlay_MessageSet::Area &
OpScopeOverlay_MessageSet::AreaOverlay::GetAreaRef() 
{
	return _area;
}


OpScopeOverlay_MessageSet::Color &
OpScopeOverlay_MessageSet::AreaOverlay::GetBackgroundColorRef() 
{
	return _backgroundColor;
}


void
OpScopeOverlay_MessageSet::AreaOverlay::SetBorderColor(OpScopeOverlay_MessageSet::Color * v) 
{
	has_bits_.Reference().SetBit(2);
	OP_DELETE(_borderColor);
	_borderColor = v;
}


void
OpScopeOverlay_MessageSet::AreaOverlay::SetGridColor(OpScopeOverlay_MessageSet::Color * v) 
{
	has_bits_.Reference().SetBit(3);
	OP_DELETE(_gridColor);
	_gridColor = v;
}

// END: AreaOverlay: Implementation

//   END: Message: AreaOverlay

//   BEGIN: Message: Color
/*static*/
const OpProtobufMessage *
OpScopeOverlay_MessageSet::Color::GetMessageDescriptor(OpScopeOverlay_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeOverlay_Descriptors::_gen_MessageOffs_color_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Uint32,
						1,
						UNI_L("r"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Uint32,
						2,
						UNI_L("g"),
						OpProtobufField::Required
						);
	fields[2] = OpProtobufField(
						OpProtobufFormat::Uint32,
						3,
						UNI_L("b"),
						OpProtobufField::Required
						);
	fields[3] = OpProtobufField(
						OpProtobufFormat::Uint32,
						4,
						UNI_L("a"),
						OpProtobufField::Optional
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpScopeOverlay_MessageSet::Color,
						_r
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpScopeOverlay_MessageSet::Color,
						_g
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						OpScopeOverlay_MessageSet::Color,
						_b
						);
	offsets[3] = OP_PROTO_OFFSETOF(
						OpScopeOverlay_MessageSet::Color,
						_a
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeOverlay_Descriptors::_gen_MsgID_color_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeOverlay_MessageSet::Color, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeOverlay_MessageSet::Color, encoded_size_),
					"Color",
					OpProtobufMessageVector<OpScopeOverlay_MessageSet::Color>::Make,
					OpProtobufMessageVector<OpScopeOverlay_MessageSet::Color>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: Color: Implementation


// END: Color: Implementation

//   END: Message: Color

//   BEGIN: Message: CreateOverlayArg
/*static*/
const OpProtobufMessage *
OpScopeOverlay_MessageSet::CreateOverlayArg::GetMessageDescriptor(OpScopeOverlay_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeOverlay_Descriptors::_gen_MessageOffs_create_overlay_arg_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Uint32,
						1,
						UNI_L("windowID"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Int32,
						2,
						UNI_L("overlayType"),
						OpProtobufField::Required
						, NULL // const OpProtobufMessage *message
						, 0 // int message_id
						, OpScopeOverlay_Descriptors::_gen_EnumID_OverlayType // unsigned enum_id
						);
	fields[2] = OpProtobufField(
						OpProtobufFormat::Message,
						3,
						UNI_L("insertion"),
						OpProtobufField::Required
						);
	fields[3] = OpProtobufField(
						OpProtobufFormat::Message,
						4,
						UNI_L("areaOverlay"),
						OpProtobufField::Optional
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpScopeOverlay_MessageSet::CreateOverlayArg,
						_windowID
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpScopeOverlay_MessageSet::CreateOverlayArg,
						_overlayType
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						OpScopeOverlay_MessageSet::CreateOverlayArg,
						_insertion
						);
	offsets[3] = OP_PROTO_OFFSETOF(
						OpScopeOverlay_MessageSet::CreateOverlayArg,
						_areaOverlay
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeOverlay_Descriptors::_gen_MsgID_create_overlay_arg_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeOverlay_MessageSet::CreateOverlayArg, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeOverlay_MessageSet::CreateOverlayArg, encoded_size_),
					"CreateOverlayArg",
					OpProtobufMessageVector<OpScopeOverlay_MessageSet::CreateOverlayArg>::Make,
					OpProtobufMessageVector<OpScopeOverlay_MessageSet::CreateOverlayArg>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	fields[2].SetMessage(Insertion::GetMessageDescriptor(descriptors));
	fields[3].SetMessage(AreaOverlay::GetMessageDescriptor(descriptors));

	return message;
}

// BEGIN: CreateOverlayArg: Implementation

// Setters

void
OpScopeOverlay_MessageSet::CreateOverlayArg::SetOverlayType(OpScopeOverlay_MessageSet::OverlayType v) 
{
	_overlayType = static_cast<OpScopeOverlay_MessageSet::OverlayType>(v);
}


OpScopeOverlay_MessageSet::Insertion &
OpScopeOverlay_MessageSet::CreateOverlayArg::GetInsertionRef() 
{
	return _insertion;
}


void
OpScopeOverlay_MessageSet::CreateOverlayArg::SetAreaOverlay(OpScopeOverlay_MessageSet::AreaOverlay * v) 
{
	has_bits_.Reference().SetBit(3);
	OP_DELETE(_areaOverlay);
	_areaOverlay = v;
}

// END: CreateOverlayArg: Implementation

//   END: Message: CreateOverlayArg

//   BEGIN: Message: Insertion
/*static*/
const OpProtobufMessage *
OpScopeOverlay_MessageSet::Insertion::GetMessageDescriptor(OpScopeOverlay_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeOverlay_Descriptors::_gen_MessageOffs_insertion_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Int32,
						1,
						UNI_L("method"),
						OpProtobufField::Required
						, NULL // const OpProtobufMessage *message
						, 0 // int message_id
						, OpScopeOverlay_Descriptors::_gen_EnumID_InsertionMethod // unsigned enum_id
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Uint32,
						2,
						UNI_L("overlayID"),
						OpProtobufField::Optional
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpScopeOverlay_MessageSet::Insertion,
						_method
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpScopeOverlay_MessageSet::Insertion,
						_overlayID
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeOverlay_Descriptors::_gen_MsgID_insertion_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeOverlay_MessageSet::Insertion, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeOverlay_MessageSet::Insertion, encoded_size_),
					"Insertion",
					OpProtobufMessageVector<OpScopeOverlay_MessageSet::Insertion>::Make,
					OpProtobufMessageVector<OpScopeOverlay_MessageSet::Insertion>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: Insertion: Implementation

// Setters

void
OpScopeOverlay_MessageSet::Insertion::SetMethod(OpScopeOverlay_MessageSet::InsertionMethod v) 
{
	_method = static_cast<OpScopeOverlay_MessageSet::InsertionMethod>(v);
}

// END: Insertion: Implementation

//   END: Message: Insertion

//   BEGIN: Message: OverlayID
/*static*/
const OpProtobufMessage *
OpScopeOverlay_MessageSet::OverlayID::GetMessageDescriptor(OpScopeOverlay_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeOverlay_Descriptors::_gen_MessageOffs_overlay_id_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Uint32,
						1,
						UNI_L("overlayID"),
						OpProtobufField::Required
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpScopeOverlay_MessageSet::OverlayID,
						_overlayID
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeOverlay_Descriptors::_gen_MsgID_overlay_id_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeOverlay_MessageSet::OverlayID, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeOverlay_MessageSet::OverlayID, encoded_size_),
					"OverlayID",
					OpProtobufMessageVector<OpScopeOverlay_MessageSet::OverlayID>::Make,
					OpProtobufMessageVector<OpScopeOverlay_MessageSet::OverlayID>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: OverlayID: Implementation


// END: OverlayID: Implementation

//   END: Message: OverlayID

//   BEGIN: Message: RemoveOverlayArg
/*static*/
const OpProtobufMessage *
OpScopeOverlay_MessageSet::RemoveOverlayArg::GetMessageDescriptor(OpScopeOverlay_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeOverlay_Descriptors::_gen_MessageOffs_remove_overlay_arg_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Uint32,
						1,
						UNI_L("windowID"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Uint32,
						2,
						UNI_L("overlayID"),
						OpProtobufField::Optional
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpScopeOverlay_MessageSet::RemoveOverlayArg,
						_windowID
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpScopeOverlay_MessageSet::RemoveOverlayArg,
						_overlayID
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeOverlay_Descriptors::_gen_MsgID_remove_overlay_arg_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeOverlay_MessageSet::RemoveOverlayArg, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeOverlay_MessageSet::RemoveOverlayArg, encoded_size_),
					"RemoveOverlayArg",
					OpProtobufMessageVector<OpScopeOverlay_MessageSet::RemoveOverlayArg>::Make,
					OpProtobufMessageVector<OpScopeOverlay_MessageSet::RemoveOverlayArg>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: RemoveOverlayArg: Implementation


// END: RemoveOverlayArg: Implementation

//   END: Message: RemoveOverlayArg


// END: Messages


#include "modules/protobuf/src/protobuf_utils.h"
#include "modules/scope/src/scope_tp_message.h"
#include "modules/scope/src/scope_default_message.h"
#include "modules/scope/src/scope_manager.h"
#include "modules/scope/src/generated/g_scope_manager.h"
#include "modules/scope/src/generated/g_scope_overlay_interface.h"
#include "modules/scope/src/scope_overlay.h"

// BEGIN: OpScopeOverlay_SI::Descriptors

OpScopeOverlay_SI::Descriptors::Descriptors()
{
}

OpScopeOverlay_SI::Descriptors::~Descriptors()
{
}

OP_STATUS
OpScopeOverlay_SI::Descriptors::Construct()
{
    RETURN_IF_ERROR(OpScopeOverlay_Descriptors::Construct());
	// Initialize commands
	command_list[0] = OpScopeCommand("CreateOverlay",
						Command_CreateOverlay,
						OpScopeCommand::Type_Call,
						_gen_MsgID_create_overlay_arg_,
						_gen_MsgID_overlay_id_
						);
	command_list[1] = OpScopeCommand("RemoveOverlay",
						Command_RemoveOverlay,
						OpScopeCommand::Type_Call,
						_gen_MsgID_remove_overlay_arg_,
						_gen_void_MsgID
						);
	return OpStatus::OK;
}

// END: OpScopeOverlay_SI::Descriptors
// Service implementation: BEGIN


// Service implementation

OpScopeOverlay_SI::OpScopeOverlay_SI(const uni_char* id, OpScopeServiceManager *manager, ControlType control)
		: OpScopeService(id == NULL ? UNI_L("overlay") : id, manager, control)
{
}

/*virtual*/
OpScopeOverlay_SI::~OpScopeOverlay_SI()
{
}

/*virtual*/
int
OpScopeOverlay_SI::GetCommandCount() const
{
	return Command_Count;
}

/*virtual*/
OpScopeService::CommandRange
OpScopeOverlay_SI::GetCommands() const
{
	Descriptors *descriptors = g_scope_manager->GetDescriptorSet().overlay_;
	OP_ASSERT(descriptors);
	return CommandRange(descriptors ? descriptors->command_list : NULL, Command_Count);
}

/*virtual*/
OP_STATUS
OpScopeOverlay_SI::DoReceive( OpScopeClient *client, const OpScopeTPMessage &msg )
{
	// Check for invalid request data
	if (msg.Status() != OpScopeTPMessage::OK) // All calls must have status OK
		return SetCommandError(OpScopeTPMessage::BadRequest, GetInvalidStatusFieldText());
	if (msg.ServiceName().Compare(GetName()) != 0) // Make sure the service name matches the one in the message
		return SetCommandError(OpScopeTPMessage::InternalError, GetIncorrectServiceText());

	if (msg.CommandID() == Command_CreateOverlay) // CreateOverlay
	{
		OP_STATUS status = OpStatus::OK;
		CreateOverlayArg in;
		OverlayID out;

		OpProtobufInstanceProxy in_proxy(CreateOverlayArg::GetMessageDescriptor(GetDescriptors()), &in);
		if (in_proxy.GetProtoMessage() == NULL)
			return OpStatus::ERR_NO_MEMORY;
		status = ParseMessage(client, msg, in_proxy);
		if (OpStatus::IsError(status))
		{
			if (GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if none was set by a parser
				RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetParseCommandMessageFailedText()));
			return status;
		}

		status = DoCreateOverlay(in, out);
		if (OpStatus::IsError(status))
		{
			if (GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if none was set by command
			RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetCommandExecutionFailedText()));
			return status;
		}

		OpProtobufInstanceProxy out_proxy(OverlayID::GetMessageDescriptor(GetDescriptors()), &out);
		if (out_proxy.GetProtoMessage() == NULL)
			return OpStatus::ERR_NO_MEMORY;
		RETURN_IF_ERROR(SendResponse(client, msg, out_proxy));
	}
	else if (msg.CommandID() == Command_RemoveOverlay) // RemoveOverlay
	{
		OP_STATUS status = OpStatus::OK;
		RemoveOverlayArg in;

		OpProtobufInstanceProxy in_proxy(RemoveOverlayArg::GetMessageDescriptor(GetDescriptors()), &in);
		if (in_proxy.GetProtoMessage() == NULL)
			return OpStatus::ERR_NO_MEMORY;
		status = ParseMessage(client, msg, in_proxy);
		if (OpStatus::IsError(status))
		{
			if (GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if none was set by a parser
				RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetParseCommandMessageFailedText()));
			return status;
		}

		status = DoRemoveOverlay(in);
		if (OpStatus::IsError(status))
		{
			if (GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if none was set by command
			RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetCommandExecutionFailedText()));
			return status;
		}

		// The request does not define a response message so we send the default response which is an empty message
		OpProtobufInstanceProxy out_proxy(OpScopeDefaultMessage::GetMessageDescriptor(), &g_scope_manager->default_message_instance);
		if (out_proxy.GetProtoMessage() == NULL)
			return OpStatus::ERR_NO_MEMORY;
		status = SendResponse(client, msg, out_proxy);
		if (OpStatus::IsError(status))
		{
			if (!IsResponseSent() && GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if response sending failed or no error was set by response code
				RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetCommandResponseFailedText()));
			return status;
		}
	}
	else
	{
		SetCommandError(OpScopeTPMessage::CommandNotFound, GetCommandNotFoundText());
		return OpStatus::ERR;
	}
	return OpStatus::OK;
}

/*virtual*/
const OpProtobufMessage *
OpScopeOverlay_SI::GetMessage(unsigned message_id) const
{
	Descriptors *descriptors = GetDescriptors();
	if (!descriptors)
		return NULL;
	return descriptors->Get(message_id);
}

OpScopeOverlay_SI::Descriptors *
OpScopeOverlay_SI::GetDescriptors() const
{
	Descriptors *d = g_scope_manager->GetDescriptorSet().overlay_;
	OP_ASSERT(d);
	return d;
}

/*virtual*/
unsigned
OpScopeOverlay_SI::GetMessageCount() const
{
	return OpScopeOverlay_Descriptors::_gen_Message_Count;
}

/*virtual*/
OpScopeService::MessageIDRange
OpScopeOverlay_SI::GetMessageIDs() const
{
	unsigned start = OpScopeOverlay_Descriptors::_gen_Message_Count > 0 ? 1 : 0;
	return MessageIDRange(start, start + OpScopeOverlay_Descriptors::_gen_Message_Count);
}

/*virtual*/
OpScopeService::MessageRange
OpScopeOverlay_SI::GetMessages() const
{
	unsigned start = OpScopeOverlay_Descriptors::_gen_Message_Count > 0 ? 1 : 0;
	return MessageRange(this, start, start + OpScopeOverlay_Descriptors::_gen_Message_Count);
}

/* virtual */
const char *
OpScopeOverlay_SI::GetVersionString() const
{
	return "1.0";
}

/* virtual */
int
OpScopeOverlay_SI::GetMajorVersion() const
{
	return 1;
}

/* virtual */
int
OpScopeOverlay_SI::GetMinorVersion() const
{
	return 0;
}

/* virtual */
const char *
OpScopeOverlay_SI::GetPatchVersion() const
{
	return "0";
}
// Enum introspection: BEGIN

/*virtual*/
OpScopeService::EnumIDRange
OpScopeOverlay_SI::GetEnumIDs() const
{
	Descriptors *descriptors = GetDescriptors();
	return EnumIDRange(descriptors ? descriptors->enum_id_list : NULL, OpScopeOverlay_Descriptors::_gen_Enum_Count);
}

/*virtual*/
unsigned
OpScopeOverlay_SI::GetEnumCount() const
{
	return OpScopeOverlay_Descriptors::_gen_Enum_Count;
}

/*virtual*/
BOOL
OpScopeOverlay_SI::HasEnum(unsigned enum_id) const
{
	switch (enum_id)
	{
		case OpScopeOverlay_Descriptors::_gen_EnumID_OverlayType:
		case OpScopeOverlay_Descriptors::_gen_EnumID_InsertionMethod:
			return TRUE;
	}
	return FALSE;
}

/*virtual*/
OP_STATUS
OpScopeOverlay_SI::GetEnum(unsigned enum_id, const uni_char *&name, unsigned &value_count) const
{
	switch (enum_id)
	{
		// OverlayType
		case OpScopeOverlay_Descriptors::_gen_EnumID_OverlayType:
			name = UNI_L("OverlayType");
			value_count = OpScopeOverlay_Descriptors::_gen_EnumValueCount_OverlayType;
			return OpStatus::OK;
		// InsertionMethod
		case OpScopeOverlay_Descriptors::_gen_EnumID_InsertionMethod:
			name = UNI_L("InsertionMethod");
			value_count = OpScopeOverlay_Descriptors::_gen_EnumValueCount_InsertionMethod;
			return OpStatus::OK;
	}
	return OpStatus::ERR_NO_SUCH_RESOURCE;
}

/*virtual*/
OP_STATUS
OpScopeOverlay_SI::GetEnumValue(unsigned enum_id, unsigned idx, const uni_char *&value_name, unsigned &value_number) const
{
	switch (enum_id)
	{
		// OverlayType
		case OpScopeOverlay_Descriptors::_gen_EnumID_OverlayType:
		{
			if (idx > OpScopeOverlay_Descriptors::_gen_EnumValueCount_OverlayType)
				return OpStatus::ERR_OUT_OF_RANGE;
			// Values for OverlayType
			const unsigned enum_numbers[] = {
				  1
			}; // ARRAY OK 2010-04-14 jborsodi
			const unsigned name_offsets[] = {
				  0
			}; // ARRAY OK 2010-04-14 jborsodi
			const uni_char *names = UNI_L( "AREA" );
			OP_ASSERT(idx < sizeof(name_offsets));
			OP_ASSERT(idx < sizeof(enum_numbers));
			value_name = names + name_offsets[idx];
			value_number = enum_numbers[idx];
			return OpStatus::OK;
		}

		// InsertionMethod
		case OpScopeOverlay_Descriptors::_gen_EnumID_InsertionMethod:
		{
			if (idx > OpScopeOverlay_Descriptors::_gen_EnumValueCount_InsertionMethod)
				return OpStatus::ERR_OUT_OF_RANGE;
			// Values for InsertionMethod
			const unsigned enum_numbers[] = {
				  1
				, 2
				, 3
				, 4
			}; // ARRAY OK 2010-04-14 jborsodi
			const unsigned name_offsets[] = {
				  0
				, 6
				, 11
				, 24
			}; // ARRAY OK 2010-04-14 jborsodi
			const uni_char *names = UNI_L( "FRONT\0BACK\0ABOVE_TARGET\0BELOW_TARGET" );
			OP_ASSERT(idx < sizeof(name_offsets));
			OP_ASSERT(idx < sizeof(enum_numbers));
			value_name = names + name_offsets[idx];
			value_number = enum_numbers[idx];
			return OpStatus::OK;
		}

	}
	return OpStatus::ERR_NO_SUCH_RESOURCE;
}
// Enum introspection: END

// Service implementation: END

#endif // SCOPE_OVERLAY
