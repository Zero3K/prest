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

// Generated from ../../adjunct/m2/src/mapi/mapimessage.proto

#include "core/pch.h"






#include "adjunct/m2/src/generated/g_proto_m2_mapimessage.h"
#include "adjunct/m2/src/generated/g_proto_descriptor_m2_mapimessage.h"
#include "adjunct/m2/src/generated/g_proto_descriptor_m2_mapimessage.h"
#include "modules/protobuf/src/protobuf_utils.h"
#include "modules/protobuf/src/protobuf_data.h"



// BEGIN: OpM2Mapimessage_MessageSet

OpM2Mapimessage_MessageSet::OpM2Mapimessage_MessageSet()
{
}

/*virtual*/
OpM2Mapimessage_MessageSet::~OpM2Mapimessage_MessageSet()
{
}

// END: OpM2Mapimessage_MessageSet

// BEGIN: Messages

//   BEGIN: Message: CreateNewMail
/*static*/
const OpProtobufMessage *
OpM2Mapimessage_MessageSet::CreateNewMail::GetMessageDescriptor(OpM2Mapimessage_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpM2Mapimessage_Descriptors::_gen_MessageOffs_create_new_mail_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::String,
						1,
						UNI_L("subject"),
						OpProtobufField::Required
						);
	fields[0].SetStringDataType(OpProtobufField::String_UniString);
	fields[1] = OpProtobufField(
						OpProtobufFormat::String,
						2,
						UNI_L("text"),
						OpProtobufField::Required
						);
	fields[1].SetStringDataType(OpProtobufField::String_UniString);
	fields[2] = OpProtobufField(
						OpProtobufFormat::String,
						3,
						UNI_L("date"),
						OpProtobufField::Required
						);
	fields[2].SetStringDataType(OpProtobufField::String_UniString);
	fields[3] = OpProtobufField(
						OpProtobufFormat::String,
						4,
						UNI_L("to"),
						OpProtobufField::Required
						);
	fields[3].SetStringDataType(OpProtobufField::String_UniString);
	fields[4] = OpProtobufField(
						OpProtobufFormat::String,
						5,
						UNI_L("cc"),
						OpProtobufField::Required
						);
	fields[4].SetStringDataType(OpProtobufField::String_UniString);
	fields[5] = OpProtobufField(
						OpProtobufFormat::String,
						6,
						UNI_L("bcc"),
						OpProtobufField::Required
						);
	fields[5].SetStringDataType(OpProtobufField::String_UniString);
	fields[6] = OpProtobufField(
						OpProtobufFormat::String,
						7,
						UNI_L("filePaths"),
						OpProtobufField::Required
						);
	fields[6].SetStringDataType(OpProtobufField::String_UniString);
	fields[7] = OpProtobufField(
						OpProtobufFormat::String,
						8,
						UNI_L("fileNames"),
						OpProtobufField::Required
						);
	fields[7].SetStringDataType(OpProtobufField::String_UniString);
	fields[8] = OpProtobufField(
						OpProtobufFormat::Int32,
						9,
						UNI_L("eventId"),
						OpProtobufField::Required
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpM2Mapimessage_MessageSet::CreateNewMail,
						_subject
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpM2Mapimessage_MessageSet::CreateNewMail,
						_text
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						OpM2Mapimessage_MessageSet::CreateNewMail,
						_date
						);
	offsets[3] = OP_PROTO_OFFSETOF(
						OpM2Mapimessage_MessageSet::CreateNewMail,
						_to
						);
	offsets[4] = OP_PROTO_OFFSETOF(
						OpM2Mapimessage_MessageSet::CreateNewMail,
						_cc
						);
	offsets[5] = OP_PROTO_OFFSETOF(
						OpM2Mapimessage_MessageSet::CreateNewMail,
						_bcc
						);
	offsets[6] = OP_PROTO_OFFSETOF(
						OpM2Mapimessage_MessageSet::CreateNewMail,
						_filePaths
						);
	offsets[7] = OP_PROTO_OFFSETOF(
						OpM2Mapimessage_MessageSet::CreateNewMail,
						_fileNames
						);
	offsets[8] = OP_PROTO_OFFSETOF(
						OpM2Mapimessage_MessageSet::CreateNewMail,
						_eventId
						);

	message = OP_NEW(OpProtobufMessage,
					(OpM2Mapimessage_Descriptors::_gen_MsgID_create_new_mail_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpM2Mapimessage_MessageSet::CreateNewMail, has_bits_),
					OP_PROTO_OFFSETOF(OpM2Mapimessage_MessageSet::CreateNewMail, encoded_size_),
					"CreateNewMail",
					OpProtobufMessageVector<OpM2Mapimessage_MessageSet::CreateNewMail>::Make,
					OpProtobufMessageVector<OpM2Mapimessage_MessageSet::CreateNewMail>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: CreateNewMail: Implementation

// Setters

OP_STATUS
OpM2Mapimessage_MessageSet::CreateNewMail::SetSubject(const UniString & v) 
{
	_subject = v;
	return OpStatus::OK;
}


OP_STATUS
OpM2Mapimessage_MessageSet::CreateNewMail::SetSubject(const uni_char * v, int l) 
{
	return _subject.SetCopyData(v, l);
}


OP_STATUS
OpM2Mapimessage_MessageSet::CreateNewMail::SetText(const UniString & v) 
{
	_text = v;
	return OpStatus::OK;
}


OP_STATUS
OpM2Mapimessage_MessageSet::CreateNewMail::SetText(const uni_char * v, int l) 
{
	return _text.SetCopyData(v, l);
}


OP_STATUS
OpM2Mapimessage_MessageSet::CreateNewMail::SetDate(const UniString & v) 
{
	_date = v;
	return OpStatus::OK;
}


OP_STATUS
OpM2Mapimessage_MessageSet::CreateNewMail::SetDate(const uni_char * v, int l) 
{
	return _date.SetCopyData(v, l);
}


OP_STATUS
OpM2Mapimessage_MessageSet::CreateNewMail::SetTo(const UniString & v) 
{
	_to = v;
	return OpStatus::OK;
}


OP_STATUS
OpM2Mapimessage_MessageSet::CreateNewMail::SetTo(const uni_char * v, int l) 
{
	return _to.SetCopyData(v, l);
}


OP_STATUS
OpM2Mapimessage_MessageSet::CreateNewMail::SetCc(const UniString & v) 
{
	_cc = v;
	return OpStatus::OK;
}


OP_STATUS
OpM2Mapimessage_MessageSet::CreateNewMail::SetCc(const uni_char * v, int l) 
{
	return _cc.SetCopyData(v, l);
}


OP_STATUS
OpM2Mapimessage_MessageSet::CreateNewMail::SetBcc(const UniString & v) 
{
	_bcc = v;
	return OpStatus::OK;
}


OP_STATUS
OpM2Mapimessage_MessageSet::CreateNewMail::SetBcc(const uni_char * v, int l) 
{
	return _bcc.SetCopyData(v, l);
}


OP_STATUS
OpM2Mapimessage_MessageSet::CreateNewMail::SetFilePaths(const UniString & v) 
{
	_filePaths = v;
	return OpStatus::OK;
}


OP_STATUS
OpM2Mapimessage_MessageSet::CreateNewMail::SetFilePaths(const uni_char * v, int l) 
{
	return _filePaths.SetCopyData(v, l);
}


OP_STATUS
OpM2Mapimessage_MessageSet::CreateNewMail::SetFileNames(const UniString & v) 
{
	_fileNames = v;
	return OpStatus::OK;
}


OP_STATUS
OpM2Mapimessage_MessageSet::CreateNewMail::SetFileNames(const uni_char * v, int l) 
{
	return _fileNames.SetCopyData(v, l);
}

// END: CreateNewMail: Implementation

//   END: Message: CreateNewMail


// END: Messages






