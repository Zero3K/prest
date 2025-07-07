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

#ifdef SCOPE_RESOURCE_MANAGER

#include "modules/scope/src/generated/g_scope_resource_manager_interface.h"

// BEGIN: OpScopeResourceManager_Descriptors

OpScopeResourceManager_Descriptors::OpScopeResourceManager_Descriptors()
{
	for (unsigned i = 0; i < _gen_Message_Count; ++i)
	{
		message_list[i] = NULL;
	}
}

OpScopeResourceManager_Descriptors::~OpScopeResourceManager_Descriptors()
{
	for (unsigned i = 0; i < _gen_Message_Count; ++i)
	{
		OP_DELETE(message_list[i]);
	}
}

OP_STATUS
OpScopeResourceManager_Descriptors::Construct()
{
	enum_id_list[0] = _gen_EnumID_ContentMode_Transport;
	enum_id_list[1] = _gen_EnumID_ReloadPolicy;
	enum_id_list[2] = _gen_EnumID_CreateRequestArg_HeaderPolicy;
	enum_id_list[3] = _gen_EnumID_LoadOrigin;
	enum_id_list[4] = _gen_EnumID_UrlLoad_URLType;
	enum_id_list[5] = _gen_EnumID_UrlFinished_Result;
	enum_id_list[6] = _gen_EnumID_DnsLookupFinished_Status;
	return OpStatus::OK;
}

const OpProtobufMessage *
OpScopeResourceManager_Descriptors::Get(unsigned id) const
{
	OpScopeResourceManager_Descriptors *descriptors = const_cast<OpScopeResourceManager_Descriptors *>(this);
	switch (id)
	{
	case _gen_MsgID_add_header_overrides_arg_:
		return OpScopeResourceManager_MessageSet::AddHeaderOverridesArg::GetMessageDescriptor(descriptors);

	case _gen_MsgID_content_:
		return OpScopeResourceManager_MessageSet::Content::GetMessageDescriptor(descriptors);

	case _gen_MsgID_content_mode_:
		return OpScopeResourceManager_MessageSet::ContentMode::GetMessageDescriptor(descriptors);

	case _gen_MsgID_create_request_arg_:
		return OpScopeResourceManager_MessageSet::CreateRequestArg::GetMessageDescriptor(descriptors);

	case _gen_MsgID_dns_lookup_finished_:
		return OpScopeResourceManager_MessageSet::DnsLookupFinished::GetMessageDescriptor(descriptors);

	case _gen_MsgID_dns_lookup_started_:
		return OpScopeResourceManager_MessageSet::DnsLookupStarted::GetMessageDescriptor(descriptors);

	case _gen_MsgID_get_resource_arg_:
		return OpScopeResourceManager_MessageSet::GetResourceArg::GetMessageDescriptor(descriptors);

	case _gen_MsgID_get_resource_id_arg_:
		return OpScopeResourceManager_MessageSet::GetResourceIDArg::GetMessageDescriptor(descriptors);

	case _gen_MsgID_header_:
		return OpScopeResourceManager_MessageSet::Header::GetMessageDescriptor(descriptors);

	case _gen_MsgID_mime_mode_:
		return OpScopeResourceManager_MessageSet::MimeMode::GetMessageDescriptor(descriptors);

	case _gen_MsgID_request_data_part_:
		return OpScopeResourceManager_MessageSet::RequestData_Part::GetMessageDescriptor(descriptors);

	case _gen_MsgID_create_request_arg_payload_:
		return OpScopeResourceManager_MessageSet::CreateRequestArg_Payload::GetMessageDescriptor(descriptors);

	case _gen_MsgID_remove_header_overrides_arg_:
		return OpScopeResourceManager_MessageSet::RemoveHeaderOverridesArg::GetMessageDescriptor(descriptors);

	case _gen_MsgID_request_:
		return OpScopeResourceManager_MessageSet::Request::GetMessageDescriptor(descriptors);

	case _gen_MsgID_request_data_:
		return OpScopeResourceManager_MessageSet::RequestData::GetMessageDescriptor(descriptors);

	case _gen_MsgID_request_finished_:
		return OpScopeResourceManager_MessageSet::RequestFinished::GetMessageDescriptor(descriptors);

	case _gen_MsgID_request_header_:
		return OpScopeResourceManager_MessageSet::RequestHeader::GetMessageDescriptor(descriptors);

	case _gen_MsgID_request_retry_:
		return OpScopeResourceManager_MessageSet::RequestRetry::GetMessageDescriptor(descriptors);

	case _gen_MsgID_resource_data_:
		return OpScopeResourceManager_MessageSet::ResourceData::GetMessageDescriptor(descriptors);

	case _gen_MsgID_resource_id_:
		return OpScopeResourceManager_MessageSet::ResourceID::GetMessageDescriptor(descriptors);

	case _gen_MsgID_response_:
		return OpScopeResourceManager_MessageSet::Response::GetMessageDescriptor(descriptors);

	case _gen_MsgID_response_finished_:
		return OpScopeResourceManager_MessageSet::ResponseFinished::GetMessageDescriptor(descriptors);

	case _gen_MsgID_response_header_:
		return OpScopeResourceManager_MessageSet::ResponseHeader::GetMessageDescriptor(descriptors);

	case _gen_MsgID_set_reload_policy_arg_:
		return OpScopeResourceManager_MessageSet::SetReloadPolicyArg::GetMessageDescriptor(descriptors);

	case _gen_MsgID_set_request_mode_arg_:
		return OpScopeResourceManager_MessageSet::SetRequestModeArg::GetMessageDescriptor(descriptors);

	case _gen_MsgID_set_response_mode_arg_:
		return OpScopeResourceManager_MessageSet::SetResponseModeArg::GetMessageDescriptor(descriptors);

	case _gen_MsgID_url_finished_:
		return OpScopeResourceManager_MessageSet::UrlFinished::GetMessageDescriptor(descriptors);

	case _gen_MsgID_url_load_:
		return OpScopeResourceManager_MessageSet::UrlLoad::GetMessageDescriptor(descriptors);

	case _gen_MsgID_url_redirect_:
		return OpScopeResourceManager_MessageSet::UrlRedirect::GetMessageDescriptor(descriptors);

	case _gen_MsgID_url_unload_:
		return OpScopeResourceManager_MessageSet::UrlUnload::GetMessageDescriptor(descriptors);

	default:
		return NULL;
	}
}


// END: OpScopeResourceManager_Descriptors


// BEGIN: OpScopeResourceManager_MessageSet

OpScopeResourceManager_MessageSet::OpScopeResourceManager_MessageSet()
{
}

/*virtual*/
OpScopeResourceManager_MessageSet::~OpScopeResourceManager_MessageSet()
{
}

// END: OpScopeResourceManager_MessageSet

// BEGIN: Messages

//   BEGIN: Message: AddHeaderOverridesArg
/*static*/
const OpProtobufMessage *
OpScopeResourceManager_MessageSet::AddHeaderOverridesArg::GetMessageDescriptor(OpScopeResourceManager_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeResourceManager_Descriptors::_gen_MessageOffs_add_header_overrides_arg_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Message,
						1,
						UNI_L("headerList"),
						OpProtobufField::Repeated
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpScopeResourceManager_MessageSet::AddHeaderOverridesArg,
						_headerList
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeResourceManager_Descriptors::_gen_MsgID_add_header_overrides_arg_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeResourceManager_MessageSet::AddHeaderOverridesArg, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeResourceManager_MessageSet::AddHeaderOverridesArg, encoded_size_),
					"AddHeaderOverridesArg",
					OpProtobufMessageVector<OpScopeResourceManager_MessageSet::AddHeaderOverridesArg>::Make,
					OpProtobufMessageVector<OpScopeResourceManager_MessageSet::AddHeaderOverridesArg>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	fields[0].SetMessage(Header::GetMessageDescriptor(descriptors));

	return message;
}

// BEGIN: AddHeaderOverridesArg: Implementation

// Setters

OpProtobufMessageVector<OpScopeResourceManager_MessageSet::Header> &
OpScopeResourceManager_MessageSet::AddHeaderOverridesArg::GetHeaderListRef() 
{
	has_bits_.Reference().SetBit(0);
	return _headerList;
}

// END: AddHeaderOverridesArg: Implementation

//   END: Message: AddHeaderOverridesArg

//   BEGIN: Message: Content
/*static*/
const OpProtobufMessage *
OpScopeResourceManager_MessageSet::Content::GetMessageDescriptor(OpScopeResourceManager_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeResourceManager_Descriptors::_gen_MessageOffs_content_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Uint32,
						1,
						UNI_L("length"),
						OpProtobufField::Optional
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::String,
						2,
						UNI_L("characterEncoding"),
						OpProtobufField::Optional
						);
	fields[2] = OpProtobufField(
						OpProtobufFormat::Bytes,
						3,
						UNI_L("byteData"),
						OpProtobufField::Optional
						);
	fields[3] = OpProtobufField(
						OpProtobufFormat::String,
						4,
						UNI_L("stringData"),
						OpProtobufField::Optional
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpScopeResourceManager_MessageSet::Content,
						_length
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpScopeResourceManager_MessageSet::Content,
						_characterEncoding
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						OpScopeResourceManager_MessageSet::Content,
						_byteData
						);
	offsets[3] = OP_PROTO_OFFSETOF(
						OpScopeResourceManager_MessageSet::Content,
						_stringData
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeResourceManager_Descriptors::_gen_MsgID_content_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeResourceManager_MessageSet::Content, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeResourceManager_MessageSet::Content, encoded_size_),
					"Content",
					OpProtobufMessageVector<OpScopeResourceManager_MessageSet::Content>::Make,
					OpProtobufMessageVector<OpScopeResourceManager_MessageSet::Content>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: Content: Implementation

// Setters

OpString &
OpScopeResourceManager_MessageSet::Content::GetCharacterEncodingRef() 
{
	has_bits_.Reference().SetBit(1);
	return _characterEncoding;
}


ByteBuffer &
OpScopeResourceManager_MessageSet::Content::GetByteDataRef() 
{
	has_bits_.Reference().SetBit(2);
	return _byteData;
}


OpString &
OpScopeResourceManager_MessageSet::Content::GetStringDataRef() 
{
	has_bits_.Reference().SetBit(3);
	return _stringData;
}

// END: Content: Implementation

//   END: Message: Content

//   BEGIN: Message: ContentMode
/*static*/
const OpProtobufMessage *
OpScopeResourceManager_MessageSet::ContentMode::GetMessageDescriptor(OpScopeResourceManager_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeResourceManager_Descriptors::_gen_MessageOffs_content_mode_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Int32,
						1,
						UNI_L("transport"),
						OpProtobufField::Optional
						, NULL // const OpProtobufMessage *message
						, 0 // int message_id
						, OpScopeResourceManager_Descriptors::_gen_EnumID_ContentMode_Transport // unsigned enum_id
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Bool,
						2,
						UNI_L("decode"),
						OpProtobufField::Optional
						);
	fields[2] = OpProtobufField(
						OpProtobufFormat::Uint32,
						3,
						UNI_L("sizeLimit"),
						OpProtobufField::Optional
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpScopeResourceManager_MessageSet::ContentMode,
						_transport
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpScopeResourceManager_MessageSet::ContentMode,
						_decode
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						OpScopeResourceManager_MessageSet::ContentMode,
						_sizeLimit
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeResourceManager_Descriptors::_gen_MsgID_content_mode_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeResourceManager_MessageSet::ContentMode, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeResourceManager_MessageSet::ContentMode, encoded_size_),
					"ContentMode",
					OpProtobufMessageVector<OpScopeResourceManager_MessageSet::ContentMode>::Make,
					OpProtobufMessageVector<OpScopeResourceManager_MessageSet::ContentMode>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: ContentMode: Implementation

// Enum value ContentMode.Transport.STRING
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const OpScopeResourceManager_MessageSet::ContentMode_Transport OpScopeResourceManager_MessageSet::ContentMode::TRANSPORT_STRING;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)


// Enum value ContentMode.Transport.BYTES
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const OpScopeResourceManager_MessageSet::ContentMode_Transport OpScopeResourceManager_MessageSet::ContentMode::TRANSPORT_BYTES;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)


// Enum value ContentMode.Transport.DATA_URI
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const OpScopeResourceManager_MessageSet::ContentMode_Transport OpScopeResourceManager_MessageSet::ContentMode::TRANSPORT_DATA_URI;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)


// Enum value ContentMode.Transport.OFF
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const OpScopeResourceManager_MessageSet::ContentMode_Transport OpScopeResourceManager_MessageSet::ContentMode::TRANSPORT_OFF;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)



// Setters

void
OpScopeResourceManager_MessageSet::ContentMode::SetTransport(OpScopeResourceManager_MessageSet::ContentMode_Transport v) 
{
	has_bits_.Reference().SetBit(0);
	_transport = static_cast<OpScopeResourceManager_MessageSet::ContentMode_Transport>(v);
}

// END: ContentMode: Implementation

//   END: Message: ContentMode

//   BEGIN: Message: CreateRequestArg
/*static*/
const OpProtobufMessage *
OpScopeResourceManager_MessageSet::CreateRequestArg::GetMessageDescriptor(OpScopeResourceManager_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeResourceManager_Descriptors::_gen_MessageOffs_create_request_arg_];
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
						OpProtobufFormat::String,
						2,
						UNI_L("url"),
						OpProtobufField::Required
						);
	fields[2] = OpProtobufField(
						OpProtobufFormat::String,
						3,
						UNI_L("method"),
						OpProtobufField::Required
						);
	fields[3] = OpProtobufField(
						OpProtobufFormat::Message,
						4,
						UNI_L("headerList"),
						OpProtobufField::Repeated
						);
	fields[4] = OpProtobufField(
						OpProtobufFormat::Message,
						5,
						UNI_L("payload"),
						OpProtobufField::Optional
						);
	fields[5] = OpProtobufField(
						OpProtobufFormat::Int32,
						6,
						UNI_L("headerPolicy"),
						OpProtobufField::Optional
						, NULL // const OpProtobufMessage *message
						, 0 // int message_id
						, OpScopeResourceManager_Descriptors::_gen_EnumID_CreateRequestArg_HeaderPolicy // unsigned enum_id
						);
	fields[6] = OpProtobufField(
						OpProtobufFormat::Int32,
						7,
						UNI_L("reloadPolicy"),
						OpProtobufField::Optional
						, NULL // const OpProtobufMessage *message
						, 0 // int message_id
						, OpScopeResourceManager_Descriptors::_gen_EnumID_ReloadPolicy // unsigned enum_id
						);
	fields[7] = OpProtobufField(
						OpProtobufFormat::Message,
						8,
						UNI_L("requestContentMode"),
						OpProtobufField::Optional
						);
	fields[8] = OpProtobufField(
						OpProtobufFormat::Message,
						9,
						UNI_L("responseContentMode"),
						OpProtobufField::Optional
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpScopeResourceManager_MessageSet::CreateRequestArg,
						_windowID
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpScopeResourceManager_MessageSet::CreateRequestArg,
						_url
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						OpScopeResourceManager_MessageSet::CreateRequestArg,
						_method
						);
	offsets[3] = OP_PROTO_OFFSETOF(
						OpScopeResourceManager_MessageSet::CreateRequestArg,
						_headerList
						);
	offsets[4] = OP_PROTO_OFFSETOF(
						OpScopeResourceManager_MessageSet::CreateRequestArg,
						_payload
						);
	offsets[5] = OP_PROTO_OFFSETOF(
						OpScopeResourceManager_MessageSet::CreateRequestArg,
						_headerPolicy
						);
	offsets[6] = OP_PROTO_OFFSETOF(
						OpScopeResourceManager_MessageSet::CreateRequestArg,
						_reloadPolicy
						);
	offsets[7] = OP_PROTO_OFFSETOF(
						OpScopeResourceManager_MessageSet::CreateRequestArg,
						_requestContentMode
						);
	offsets[8] = OP_PROTO_OFFSETOF(
						OpScopeResourceManager_MessageSet::CreateRequestArg,
						_responseContentMode
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeResourceManager_Descriptors::_gen_MsgID_create_request_arg_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeResourceManager_MessageSet::CreateRequestArg, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeResourceManager_MessageSet::CreateRequestArg, encoded_size_),
					"CreateRequestArg",
					OpProtobufMessageVector<OpScopeResourceManager_MessageSet::CreateRequestArg>::Make,
					OpProtobufMessageVector<OpScopeResourceManager_MessageSet::CreateRequestArg>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	fields[3].SetMessage(Header::GetMessageDescriptor(descriptors));
	fields[4].SetMessage(CreateRequestArg_Payload::GetMessageDescriptor(descriptors));
	fields[7].SetMessage(ContentMode::GetMessageDescriptor(descriptors));
	fields[8].SetMessage(ContentMode::GetMessageDescriptor(descriptors));

	return message;
}

// BEGIN: CreateRequestArg: Implementation

// Enum value CreateRequestArg.HeaderPolicy.NORMAL
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const OpScopeResourceManager_MessageSet::CreateRequestArg_HeaderPolicy OpScopeResourceManager_MessageSet::CreateRequestArg::HEADERPOLICY_NORMAL;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)


// Enum value CreateRequestArg.HeaderPolicy.OVERWRITE
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const OpScopeResourceManager_MessageSet::CreateRequestArg_HeaderPolicy OpScopeResourceManager_MessageSet::CreateRequestArg::HEADERPOLICY_OVERWRITE;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)


// Enum value CreateRequestArg.HeaderPolicy.REPLACE
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const OpScopeResourceManager_MessageSet::CreateRequestArg_HeaderPolicy OpScopeResourceManager_MessageSet::CreateRequestArg::HEADERPOLICY_REPLACE;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)





// Setters

OP_STATUS
OpScopeResourceManager_MessageSet::CreateRequestArg::SetUrl(const uni_char * v, int l) 
{
	return _url.Set(v, l);
}


OP_STATUS
OpScopeResourceManager_MessageSet::CreateRequestArg::SetMethod(const uni_char * v, int l) 
{
	return _method.Set(v, l);
}


OpProtobufMessageVector<OpScopeResourceManager_MessageSet::Header> &
OpScopeResourceManager_MessageSet::CreateRequestArg::GetHeaderListRef() 
{
	has_bits_.Reference().SetBit(3);
	return _headerList;
}


void
OpScopeResourceManager_MessageSet::CreateRequestArg::SetPayload(OpScopeResourceManager_MessageSet::CreateRequestArg_Payload * v) 
{
	has_bits_.Reference().SetBit(4);
	OP_DELETE(_payload);
	_payload = v;
}


void
OpScopeResourceManager_MessageSet::CreateRequestArg::SetHeaderPolicy(OpScopeResourceManager_MessageSet::CreateRequestArg_HeaderPolicy v) 
{
	has_bits_.Reference().SetBit(5);
	_headerPolicy = static_cast<OpScopeResourceManager_MessageSet::CreateRequestArg_HeaderPolicy>(v);
}


void
OpScopeResourceManager_MessageSet::CreateRequestArg::SetReloadPolicy(OpScopeResourceManager_MessageSet::ReloadPolicy v) 
{
	has_bits_.Reference().SetBit(6);
	_reloadPolicy = static_cast<OpScopeResourceManager_MessageSet::ReloadPolicy>(v);
}


void
OpScopeResourceManager_MessageSet::CreateRequestArg::SetRequestContentMode(OpScopeResourceManager_MessageSet::ContentMode * v) 
{
	has_bits_.Reference().SetBit(7);
	OP_DELETE(_requestContentMode);
	_requestContentMode = v;
}


void
OpScopeResourceManager_MessageSet::CreateRequestArg::SetResponseContentMode(OpScopeResourceManager_MessageSet::ContentMode * v) 
{
	has_bits_.Reference().SetBit(8);
	OP_DELETE(_responseContentMode);
	_responseContentMode = v;
}

// END: CreateRequestArg: Implementation

//   END: Message: CreateRequestArg

//   BEGIN: Message: DnsLookupFinished
/*static*/
const OpProtobufMessage *
OpScopeResourceManager_MessageSet::DnsLookupFinished::GetMessageDescriptor(OpScopeResourceManager_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeResourceManager_Descriptors::_gen_MessageOffs_dns_lookup_finished_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Uint32,
						1,
						UNI_L("resourceID"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Double,
						2,
						UNI_L("time"),
						OpProtobufField::Required
						);
	fields[2] = OpProtobufField(
						OpProtobufFormat::Int32,
						3,
						UNI_L("status"),
						OpProtobufField::Required
						, NULL // const OpProtobufMessage *message
						, 0 // int message_id
						, OpScopeResourceManager_Descriptors::_gen_EnumID_DnsLookupFinished_Status // unsigned enum_id
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpScopeResourceManager_MessageSet::DnsLookupFinished,
						_resourceID
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpScopeResourceManager_MessageSet::DnsLookupFinished,
						_time
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						OpScopeResourceManager_MessageSet::DnsLookupFinished,
						_status
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeResourceManager_Descriptors::_gen_MsgID_dns_lookup_finished_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeResourceManager_MessageSet::DnsLookupFinished, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeResourceManager_MessageSet::DnsLookupFinished, encoded_size_),
					"DnsLookupFinished",
					OpProtobufMessageVector<OpScopeResourceManager_MessageSet::DnsLookupFinished>::Make,
					OpProtobufMessageVector<OpScopeResourceManager_MessageSet::DnsLookupFinished>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: DnsLookupFinished: Implementation

// Enum value DnsLookupFinished.Status.NETWORK_NO_ERROR
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const OpScopeResourceManager_MessageSet::DnsLookupFinished_Status OpScopeResourceManager_MessageSet::DnsLookupFinished::STATUS_NETWORK_NO_ERROR;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)


// Enum value DnsLookupFinished.Status.ERROR_HANDLED
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const OpScopeResourceManager_MessageSet::DnsLookupFinished_Status OpScopeResourceManager_MessageSet::DnsLookupFinished::STATUS_ERROR_HANDLED;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)


// Enum value DnsLookupFinished.Status.HOST_ADDRESS_NOT_FOUND
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const OpScopeResourceManager_MessageSet::DnsLookupFinished_Status OpScopeResourceManager_MessageSet::DnsLookupFinished::STATUS_HOST_ADDRESS_NOT_FOUND;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)


// Enum value DnsLookupFinished.Status.TIMED_OUT
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const OpScopeResourceManager_MessageSet::DnsLookupFinished_Status OpScopeResourceManager_MessageSet::DnsLookupFinished::STATUS_TIMED_OUT;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)


// Enum value DnsLookupFinished.Status.NETWORK_ERROR
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const OpScopeResourceManager_MessageSet::DnsLookupFinished_Status OpScopeResourceManager_MessageSet::DnsLookupFinished::STATUS_NETWORK_ERROR;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)


// Enum value DnsLookupFinished.Status.INTERNET_CONNECTION_CLOSED
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const OpScopeResourceManager_MessageSet::DnsLookupFinished_Status OpScopeResourceManager_MessageSet::DnsLookupFinished::STATUS_INTERNET_CONNECTION_CLOSED;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)


// Enum value DnsLookupFinished.Status.OUT_OF_COVERAGE
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const OpScopeResourceManager_MessageSet::DnsLookupFinished_Status OpScopeResourceManager_MessageSet::DnsLookupFinished::STATUS_OUT_OF_COVERAGE;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)


// Enum value DnsLookupFinished.Status.OUT_OF_MEMORY
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const OpScopeResourceManager_MessageSet::DnsLookupFinished_Status OpScopeResourceManager_MessageSet::DnsLookupFinished::STATUS_OUT_OF_MEMORY;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)



// Setters

void
OpScopeResourceManager_MessageSet::DnsLookupFinished::SetStatus(OpScopeResourceManager_MessageSet::DnsLookupFinished_Status v) 
{
	_status = static_cast<OpScopeResourceManager_MessageSet::DnsLookupFinished_Status>(v);
}

// END: DnsLookupFinished: Implementation

//   END: Message: DnsLookupFinished

//   BEGIN: Message: DnsLookupStarted
/*static*/
const OpProtobufMessage *
OpScopeResourceManager_MessageSet::DnsLookupStarted::GetMessageDescriptor(OpScopeResourceManager_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeResourceManager_Descriptors::_gen_MessageOffs_dns_lookup_started_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Uint32,
						1,
						UNI_L("resourceID"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Double,
						2,
						UNI_L("time"),
						OpProtobufField::Required
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpScopeResourceManager_MessageSet::DnsLookupStarted,
						_resourceID
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpScopeResourceManager_MessageSet::DnsLookupStarted,
						_time
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeResourceManager_Descriptors::_gen_MsgID_dns_lookup_started_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeResourceManager_MessageSet::DnsLookupStarted, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeResourceManager_MessageSet::DnsLookupStarted, encoded_size_),
					"DnsLookupStarted",
					OpProtobufMessageVector<OpScopeResourceManager_MessageSet::DnsLookupStarted>::Make,
					OpProtobufMessageVector<OpScopeResourceManager_MessageSet::DnsLookupStarted>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: DnsLookupStarted: Implementation


// END: DnsLookupStarted: Implementation

//   END: Message: DnsLookupStarted

//   BEGIN: Message: GetResourceArg
/*static*/
const OpProtobufMessage *
OpScopeResourceManager_MessageSet::GetResourceArg::GetMessageDescriptor(OpScopeResourceManager_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeResourceManager_Descriptors::_gen_MessageOffs_get_resource_arg_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Uint32,
						1,
						UNI_L("resourceID"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Message,
						2,
						UNI_L("contentMode"),
						OpProtobufField::Optional
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpScopeResourceManager_MessageSet::GetResourceArg,
						_resourceID
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpScopeResourceManager_MessageSet::GetResourceArg,
						_contentMode
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeResourceManager_Descriptors::_gen_MsgID_get_resource_arg_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeResourceManager_MessageSet::GetResourceArg, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeResourceManager_MessageSet::GetResourceArg, encoded_size_),
					"GetResourceArg",
					OpProtobufMessageVector<OpScopeResourceManager_MessageSet::GetResourceArg>::Make,
					OpProtobufMessageVector<OpScopeResourceManager_MessageSet::GetResourceArg>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	fields[1].SetMessage(ContentMode::GetMessageDescriptor(descriptors));

	return message;
}

// BEGIN: GetResourceArg: Implementation

// Setters

void
OpScopeResourceManager_MessageSet::GetResourceArg::SetContentMode(OpScopeResourceManager_MessageSet::ContentMode * v) 
{
	has_bits_.Reference().SetBit(1);
	OP_DELETE(_contentMode);
	_contentMode = v;
}

// END: GetResourceArg: Implementation

//   END: Message: GetResourceArg

//   BEGIN: Message: GetResourceIDArg
/*static*/
const OpProtobufMessage *
OpScopeResourceManager_MessageSet::GetResourceIDArg::GetMessageDescriptor(OpScopeResourceManager_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeResourceManager_Descriptors::_gen_MessageOffs_get_resource_id_arg_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::String,
						1,
						UNI_L("url"),
						OpProtobufField::Required
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpScopeResourceManager_MessageSet::GetResourceIDArg,
						_url
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeResourceManager_Descriptors::_gen_MsgID_get_resource_id_arg_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeResourceManager_MessageSet::GetResourceIDArg, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeResourceManager_MessageSet::GetResourceIDArg, encoded_size_),
					"GetResourceIDArg",
					OpProtobufMessageVector<OpScopeResourceManager_MessageSet::GetResourceIDArg>::Make,
					OpProtobufMessageVector<OpScopeResourceManager_MessageSet::GetResourceIDArg>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: GetResourceIDArg: Implementation

// Setters

OP_STATUS
OpScopeResourceManager_MessageSet::GetResourceIDArg::SetUrl(const uni_char * v, int l) 
{
	return _url.Set(v, l);
}

// END: GetResourceIDArg: Implementation

//   END: Message: GetResourceIDArg

//   BEGIN: Message: Header
/*static*/
const OpProtobufMessage *
OpScopeResourceManager_MessageSet::Header::GetMessageDescriptor(OpScopeResourceManager_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeResourceManager_Descriptors::_gen_MessageOffs_header_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::String,
						1,
						UNI_L("name"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::String,
						2,
						UNI_L("value"),
						OpProtobufField::Required
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpScopeResourceManager_MessageSet::Header,
						_name
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpScopeResourceManager_MessageSet::Header,
						_value
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeResourceManager_Descriptors::_gen_MsgID_header_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeResourceManager_MessageSet::Header, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeResourceManager_MessageSet::Header, encoded_size_),
					"Header",
					OpProtobufMessageVector<OpScopeResourceManager_MessageSet::Header>::Make,
					OpProtobufMessageVector<OpScopeResourceManager_MessageSet::Header>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: Header: Implementation

// Setters

OP_STATUS
OpScopeResourceManager_MessageSet::Header::SetName(const uni_char * v, int l) 
{
	return _name.Set(v, l);
}


OP_STATUS
OpScopeResourceManager_MessageSet::Header::SetName(const char * v, int l) 
{
	return _name.Set(v, l);
}


OP_STATUS
OpScopeResourceManager_MessageSet::Header::SetValue(const uni_char * v, int l) 
{
	return _value.Set(v, l);
}


OP_STATUS
OpScopeResourceManager_MessageSet::Header::SetValue(const char * v, int l) 
{
	return _value.Set(v, l);
}

// END: Header: Implementation

//   END: Message: Header

//   BEGIN: Message: MimeMode
/*static*/
const OpProtobufMessage *
OpScopeResourceManager_MessageSet::MimeMode::GetMessageDescriptor(OpScopeResourceManager_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeResourceManager_Descriptors::_gen_MessageOffs_mime_mode_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::String,
						1,
						UNI_L("type"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Message,
						2,
						UNI_L("contentMode"),
						OpProtobufField::Required
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpScopeResourceManager_MessageSet::MimeMode,
						_type
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpScopeResourceManager_MessageSet::MimeMode,
						_contentMode
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeResourceManager_Descriptors::_gen_MsgID_mime_mode_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeResourceManager_MessageSet::MimeMode, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeResourceManager_MessageSet::MimeMode, encoded_size_),
					"MimeMode",
					OpProtobufMessageVector<OpScopeResourceManager_MessageSet::MimeMode>::Make,
					OpProtobufMessageVector<OpScopeResourceManager_MessageSet::MimeMode>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	fields[1].SetMessage(ContentMode::GetMessageDescriptor(descriptors));

	return message;
}

// BEGIN: MimeMode: Implementation

// Setters

OP_STATUS
OpScopeResourceManager_MessageSet::MimeMode::SetType(const uni_char * v, int l) 
{
	return _type.Set(v, l);
}


OpScopeResourceManager_MessageSet::ContentMode &
OpScopeResourceManager_MessageSet::MimeMode::GetContentModeRef() 
{
	return _contentMode;
}

// END: MimeMode: Implementation

//   END: Message: MimeMode

//   BEGIN: Message: Part
/*static*/
const OpProtobufMessage *
OpScopeResourceManager_MessageSet::RequestData_Part::GetMessageDescriptor(OpScopeResourceManager_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeResourceManager_Descriptors::_gen_MessageOffs_request_data_part_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Message,
						1,
						UNI_L("headerList"),
						OpProtobufField::Repeated
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Uint32,
						2,
						UNI_L("contentLength"),
						OpProtobufField::Optional
						);
	fields[2] = OpProtobufField(
						OpProtobufFormat::Message,
						3,
						UNI_L("content"),
						OpProtobufField::Optional
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpScopeResourceManager_MessageSet::RequestData_Part,
						_headerList
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpScopeResourceManager_MessageSet::RequestData_Part,
						_contentLength
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						OpScopeResourceManager_MessageSet::RequestData_Part,
						_content
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeResourceManager_Descriptors::_gen_MsgID_request_data_part_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeResourceManager_MessageSet::RequestData_Part, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeResourceManager_MessageSet::RequestData_Part, encoded_size_),
					"Part",
					OpProtobufMessageVector<OpScopeResourceManager_MessageSet::RequestData_Part>::Make,
					OpProtobufMessageVector<OpScopeResourceManager_MessageSet::RequestData_Part>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	fields[0].SetMessage(Header::GetMessageDescriptor(descriptors));
	fields[2].SetMessage(Content::GetMessageDescriptor(descriptors));
	const OpProtobufMessage *parent = OpScopeResourceManager_MessageSet::RequestData::GetMessageDescriptor(descriptors);
	if (!parent)
		return NULL;
	message->SetParentId(parent->GetInternalId());

	return message;
}

// BEGIN: RequestData.Part: Implementation

// Setters

OpProtobufMessageVector<OpScopeResourceManager_MessageSet::Header> &
OpScopeResourceManager_MessageSet::RequestData_Part::GetHeaderListRef() 
{
	has_bits_.Reference().SetBit(0);
	return _headerList;
}


void
OpScopeResourceManager_MessageSet::RequestData_Part::SetContent(OpScopeResourceManager_MessageSet::Content * v) 
{
	has_bits_.Reference().SetBit(2);
	OP_DELETE(_content);
	_content = v;
}

// END: RequestData.Part: Implementation

//   END: Message: Part

//   BEGIN: Message: Payload
/*static*/
const OpProtobufMessage *
OpScopeResourceManager_MessageSet::CreateRequestArg_Payload::GetMessageDescriptor(OpScopeResourceManager_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeResourceManager_Descriptors::_gen_MessageOffs_create_request_arg_payload_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::String,
						1,
						UNI_L("mimeType"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Bytes,
						3,
						UNI_L("byteData"),
						OpProtobufField::Optional
						);
	fields[2] = OpProtobufField(
						OpProtobufFormat::String,
						2,
						UNI_L("stringData"),
						OpProtobufField::Optional
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpScopeResourceManager_MessageSet::CreateRequestArg_Payload,
						_mimeType
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpScopeResourceManager_MessageSet::CreateRequestArg_Payload,
						_byteData
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						OpScopeResourceManager_MessageSet::CreateRequestArg_Payload,
						_stringData
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeResourceManager_Descriptors::_gen_MsgID_create_request_arg_payload_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeResourceManager_MessageSet::CreateRequestArg_Payload, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeResourceManager_MessageSet::CreateRequestArg_Payload, encoded_size_),
					"Payload",
					OpProtobufMessageVector<OpScopeResourceManager_MessageSet::CreateRequestArg_Payload>::Make,
					OpProtobufMessageVector<OpScopeResourceManager_MessageSet::CreateRequestArg_Payload>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	const OpProtobufMessage *parent = OpScopeResourceManager_MessageSet::CreateRequestArg::GetMessageDescriptor(descriptors);
	if (!parent)
		return NULL;
	message->SetParentId(parent->GetInternalId());

	return message;
}

// BEGIN: CreateRequestArg.Payload: Implementation

// Setters

OP_STATUS
OpScopeResourceManager_MessageSet::CreateRequestArg_Payload::SetMimeType(const uni_char * v, int l) 
{
	return _mimeType.Set(v, l);
}


ByteBuffer &
OpScopeResourceManager_MessageSet::CreateRequestArg_Payload::GetByteDataRef() 
{
	has_bits_.Reference().SetBit(1);
	return _byteData;
}


OP_STATUS
OpScopeResourceManager_MessageSet::CreateRequestArg_Payload::SetStringData(const uni_char * v, int l) 
{
	has_bits_.Reference().SetBit(2);
	return _stringData.Set(v, l);
}

// END: CreateRequestArg.Payload: Implementation

//   END: Message: Payload

//   BEGIN: Message: RemoveHeaderOverridesArg
/*static*/
const OpProtobufMessage *
OpScopeResourceManager_MessageSet::RemoveHeaderOverridesArg::GetMessageDescriptor(OpScopeResourceManager_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeResourceManager_Descriptors::_gen_MessageOffs_remove_header_overrides_arg_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::String,
						1,
						UNI_L("nameList"),
						OpProtobufField::Repeated
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpScopeResourceManager_MessageSet::RemoveHeaderOverridesArg,
						_nameList
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeResourceManager_Descriptors::_gen_MsgID_remove_header_overrides_arg_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeResourceManager_MessageSet::RemoveHeaderOverridesArg, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeResourceManager_MessageSet::RemoveHeaderOverridesArg, encoded_size_),
					"RemoveHeaderOverridesArg",
					OpProtobufMessageVector<OpScopeResourceManager_MessageSet::RemoveHeaderOverridesArg>::Make,
					OpProtobufMessageVector<OpScopeResourceManager_MessageSet::RemoveHeaderOverridesArg>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: RemoveHeaderOverridesArg: Implementation

// Setters

OpAutoVector<OpString> &
OpScopeResourceManager_MessageSet::RemoveHeaderOverridesArg::GetNameListRef() 
{
	has_bits_.Reference().SetBit(0);
	return _nameList;
}

// END: RemoveHeaderOverridesArg: Implementation

//   END: Message: RemoveHeaderOverridesArg

//   BEGIN: Message: Request
/*static*/
const OpProtobufMessage *
OpScopeResourceManager_MessageSet::Request::GetMessageDescriptor(OpScopeResourceManager_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeResourceManager_Descriptors::_gen_MessageOffs_request_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Uint32,
						1,
						UNI_L("requestID"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Uint32,
						2,
						UNI_L("resourceID"),
						OpProtobufField::Required
						);
	fields[2] = OpProtobufField(
						OpProtobufFormat::Uint32,
						3,
						UNI_L("windowID"),
						OpProtobufField::Required
						);
	fields[3] = OpProtobufField(
						OpProtobufFormat::Uint32,
						4,
						UNI_L("frameID"),
						OpProtobufField::Optional
						);
	fields[4] = OpProtobufField(
						OpProtobufFormat::Uint32,
						5,
						UNI_L("documentID"),
						OpProtobufField::Optional
						);
	fields[5] = OpProtobufField(
						OpProtobufFormat::String,
						6,
						UNI_L("url"),
						OpProtobufField::Required
						);
	fields[6] = OpProtobufField(
						OpProtobufFormat::Double,
						7,
						UNI_L("time"),
						OpProtobufField::Required
						);
	fields[7] = OpProtobufField(
						OpProtobufFormat::String,
						8,
						UNI_L("method"),
						OpProtobufField::Required
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpScopeResourceManager_MessageSet::Request,
						_requestID
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpScopeResourceManager_MessageSet::Request,
						_resourceID
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						OpScopeResourceManager_MessageSet::Request,
						_windowID
						);
	offsets[3] = OP_PROTO_OFFSETOF(
						OpScopeResourceManager_MessageSet::Request,
						_frameID
						);
	offsets[4] = OP_PROTO_OFFSETOF(
						OpScopeResourceManager_MessageSet::Request,
						_documentID
						);
	offsets[5] = OP_PROTO_OFFSETOF(
						OpScopeResourceManager_MessageSet::Request,
						_url
						);
	offsets[6] = OP_PROTO_OFFSETOF(
						OpScopeResourceManager_MessageSet::Request,
						_time
						);
	offsets[7] = OP_PROTO_OFFSETOF(
						OpScopeResourceManager_MessageSet::Request,
						_method
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeResourceManager_Descriptors::_gen_MsgID_request_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeResourceManager_MessageSet::Request, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeResourceManager_MessageSet::Request, encoded_size_),
					"Request",
					OpProtobufMessageVector<OpScopeResourceManager_MessageSet::Request>::Make,
					OpProtobufMessageVector<OpScopeResourceManager_MessageSet::Request>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: Request: Implementation

// Setters

OP_STATUS
OpScopeResourceManager_MessageSet::Request::SetUrl(const uni_char * v, int l) 
{
	return _url.Set(v, l);
}


OpString &
OpScopeResourceManager_MessageSet::Request::GetMethodRef() 
{
	return _method;
}

// END: Request: Implementation

//   END: Message: Request

//   BEGIN: Message: RequestData
/*static*/
const OpProtobufMessage *
OpScopeResourceManager_MessageSet::RequestData::GetMessageDescriptor(OpScopeResourceManager_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeResourceManager_Descriptors::_gen_MessageOffs_request_data_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Uint32,
						1,
						UNI_L("requestID"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Uint32,
						2,
						UNI_L("resourceID"),
						OpProtobufField::Required
						);
	fields[2] = OpProtobufField(
						OpProtobufFormat::String,
						3,
						UNI_L("mimeType"),
						OpProtobufField::Optional
						);
	fields[3] = OpProtobufField(
						OpProtobufFormat::String,
						4,
						UNI_L("characterEncoding"),
						OpProtobufField::Optional
						);
	fields[4] = OpProtobufField(
						OpProtobufFormat::Uint32,
						5,
						UNI_L("contentLength"),
						OpProtobufField::Optional
						);
	fields[5] = OpProtobufField(
						OpProtobufFormat::Message,
						6,
						UNI_L("content"),
						OpProtobufField::Optional
						);
	fields[6] = OpProtobufField(
						OpProtobufFormat::Message,
						7,
						UNI_L("partList"),
						OpProtobufField::Repeated
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpScopeResourceManager_MessageSet::RequestData,
						_requestID
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpScopeResourceManager_MessageSet::RequestData,
						_resourceID
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						OpScopeResourceManager_MessageSet::RequestData,
						_mimeType
						);
	offsets[3] = OP_PROTO_OFFSETOF(
						OpScopeResourceManager_MessageSet::RequestData,
						_characterEncoding
						);
	offsets[4] = OP_PROTO_OFFSETOF(
						OpScopeResourceManager_MessageSet::RequestData,
						_contentLength
						);
	offsets[5] = OP_PROTO_OFFSETOF(
						OpScopeResourceManager_MessageSet::RequestData,
						_content
						);
	offsets[6] = OP_PROTO_OFFSETOF(
						OpScopeResourceManager_MessageSet::RequestData,
						_partList
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeResourceManager_Descriptors::_gen_MsgID_request_data_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeResourceManager_MessageSet::RequestData, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeResourceManager_MessageSet::RequestData, encoded_size_),
					"RequestData",
					OpProtobufMessageVector<OpScopeResourceManager_MessageSet::RequestData>::Make,
					OpProtobufMessageVector<OpScopeResourceManager_MessageSet::RequestData>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	fields[5].SetMessage(Content::GetMessageDescriptor(descriptors));
	fields[6].SetMessage(RequestData_Part::GetMessageDescriptor(descriptors));

	return message;
}

// BEGIN: RequestData: Implementation


// Setters

OpString &
OpScopeResourceManager_MessageSet::RequestData::GetMimeTypeRef() 
{
	has_bits_.Reference().SetBit(2);
	return _mimeType;
}


OpString &
OpScopeResourceManager_MessageSet::RequestData::GetCharacterEncodingRef() 
{
	has_bits_.Reference().SetBit(3);
	return _characterEncoding;
}


void
OpScopeResourceManager_MessageSet::RequestData::SetContent(OpScopeResourceManager_MessageSet::Content * v) 
{
	has_bits_.Reference().SetBit(5);
	OP_DELETE(_content);
	_content = v;
}


OpProtobufMessageVector<OpScopeResourceManager_MessageSet::RequestData_Part> &
OpScopeResourceManager_MessageSet::RequestData::GetPartListRef() 
{
	has_bits_.Reference().SetBit(6);
	return _partList;
}

// END: RequestData: Implementation

//   END: Message: RequestData

//   BEGIN: Message: RequestFinished
/*static*/
const OpProtobufMessage *
OpScopeResourceManager_MessageSet::RequestFinished::GetMessageDescriptor(OpScopeResourceManager_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeResourceManager_Descriptors::_gen_MessageOffs_request_finished_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Uint32,
						1,
						UNI_L("requestID"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Uint32,
						2,
						UNI_L("resourceID"),
						OpProtobufField::Required
						);
	fields[2] = OpProtobufField(
						OpProtobufFormat::Double,
						3,
						UNI_L("time"),
						OpProtobufField::Required
						);
	fields[3] = OpProtobufField(
						OpProtobufFormat::Message,
						4,
						UNI_L("data"),
						OpProtobufField::Optional
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpScopeResourceManager_MessageSet::RequestFinished,
						_requestID
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpScopeResourceManager_MessageSet::RequestFinished,
						_resourceID
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						OpScopeResourceManager_MessageSet::RequestFinished,
						_time
						);
	offsets[3] = OP_PROTO_OFFSETOF(
						OpScopeResourceManager_MessageSet::RequestFinished,
						_data
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeResourceManager_Descriptors::_gen_MsgID_request_finished_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeResourceManager_MessageSet::RequestFinished, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeResourceManager_MessageSet::RequestFinished, encoded_size_),
					"RequestFinished",
					OpProtobufMessageVector<OpScopeResourceManager_MessageSet::RequestFinished>::Make,
					OpProtobufMessageVector<OpScopeResourceManager_MessageSet::RequestFinished>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	fields[3].SetMessage(RequestData::GetMessageDescriptor(descriptors));

	return message;
}

// BEGIN: RequestFinished: Implementation

// Setters

void
OpScopeResourceManager_MessageSet::RequestFinished::SetData(OpScopeResourceManager_MessageSet::RequestData * v) 
{
	has_bits_.Reference().SetBit(3);
	OP_DELETE(_data);
	_data = v;
}

// END: RequestFinished: Implementation

//   END: Message: RequestFinished

//   BEGIN: Message: RequestHeader
/*static*/
const OpProtobufMessage *
OpScopeResourceManager_MessageSet::RequestHeader::GetMessageDescriptor(OpScopeResourceManager_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeResourceManager_Descriptors::_gen_MessageOffs_request_header_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Uint32,
						1,
						UNI_L("requestID"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Uint32,
						2,
						UNI_L("resourceID"),
						OpProtobufField::Required
						);
	fields[2] = OpProtobufField(
						OpProtobufFormat::Double,
						3,
						UNI_L("time"),
						OpProtobufField::Required
						);
	fields[3] = OpProtobufField(
						OpProtobufFormat::String,
						4,
						UNI_L("raw"),
						OpProtobufField::Required
						);
	fields[4] = OpProtobufField(
						OpProtobufFormat::Message,
						5,
						UNI_L("headerList"),
						OpProtobufField::Repeated
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpScopeResourceManager_MessageSet::RequestHeader,
						_requestID
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpScopeResourceManager_MessageSet::RequestHeader,
						_resourceID
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						OpScopeResourceManager_MessageSet::RequestHeader,
						_time
						);
	offsets[3] = OP_PROTO_OFFSETOF(
						OpScopeResourceManager_MessageSet::RequestHeader,
						_raw
						);
	offsets[4] = OP_PROTO_OFFSETOF(
						OpScopeResourceManager_MessageSet::RequestHeader,
						_headerList
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeResourceManager_Descriptors::_gen_MsgID_request_header_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeResourceManager_MessageSet::RequestHeader, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeResourceManager_MessageSet::RequestHeader, encoded_size_),
					"RequestHeader",
					OpProtobufMessageVector<OpScopeResourceManager_MessageSet::RequestHeader>::Make,
					OpProtobufMessageVector<OpScopeResourceManager_MessageSet::RequestHeader>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	fields[4].SetMessage(Header::GetMessageDescriptor(descriptors));

	return message;
}

// BEGIN: RequestHeader: Implementation

// Setters

OP_STATUS
OpScopeResourceManager_MessageSet::RequestHeader::SetRaw(const char * v, int l) 
{
	return _raw.Set(v, l);
}


OpProtobufMessageVector<OpScopeResourceManager_MessageSet::Header> &
OpScopeResourceManager_MessageSet::RequestHeader::GetHeaderListRef() 
{
	has_bits_.Reference().SetBit(4);
	return _headerList;
}

// END: RequestHeader: Implementation

//   END: Message: RequestHeader

//   BEGIN: Message: RequestRetry
/*static*/
const OpProtobufMessage *
OpScopeResourceManager_MessageSet::RequestRetry::GetMessageDescriptor(OpScopeResourceManager_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeResourceManager_Descriptors::_gen_MessageOffs_request_retry_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Uint32,
						1,
						UNI_L("resourceID"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Uint32,
						2,
						UNI_L("fromRequestID"),
						OpProtobufField::Required
						);
	fields[2] = OpProtobufField(
						OpProtobufFormat::Uint32,
						3,
						UNI_L("toRequestID"),
						OpProtobufField::Required
						);
	fields[3] = OpProtobufField(
						OpProtobufFormat::Double,
						4,
						UNI_L("time"),
						OpProtobufField::Required
						);
	fields[4] = OpProtobufField(
						OpProtobufFormat::Uint32,
						5,
						UNI_L("requestID"),
						OpProtobufField::Optional
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpScopeResourceManager_MessageSet::RequestRetry,
						_resourceID
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpScopeResourceManager_MessageSet::RequestRetry,
						_fromRequestID
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						OpScopeResourceManager_MessageSet::RequestRetry,
						_toRequestID
						);
	offsets[3] = OP_PROTO_OFFSETOF(
						OpScopeResourceManager_MessageSet::RequestRetry,
						_time
						);
	offsets[4] = OP_PROTO_OFFSETOF(
						OpScopeResourceManager_MessageSet::RequestRetry,
						_requestID
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeResourceManager_Descriptors::_gen_MsgID_request_retry_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeResourceManager_MessageSet::RequestRetry, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeResourceManager_MessageSet::RequestRetry, encoded_size_),
					"RequestRetry",
					OpProtobufMessageVector<OpScopeResourceManager_MessageSet::RequestRetry>::Make,
					OpProtobufMessageVector<OpScopeResourceManager_MessageSet::RequestRetry>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: RequestRetry: Implementation


// END: RequestRetry: Implementation

//   END: Message: RequestRetry

//   BEGIN: Message: ResourceData
/*static*/
const OpProtobufMessage *
OpScopeResourceManager_MessageSet::ResourceData::GetMessageDescriptor(OpScopeResourceManager_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeResourceManager_Descriptors::_gen_MessageOffs_resource_data_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Uint32,
						1,
						UNI_L("resourceID"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::String,
						2,
						UNI_L("url"),
						OpProtobufField::Required
						);
	fields[2] = OpProtobufField(
						OpProtobufFormat::String,
						3,
						UNI_L("mimeType"),
						OpProtobufField::Optional
						);
	fields[3] = OpProtobufField(
						OpProtobufFormat::String,
						4,
						UNI_L("characterEncoding"),
						OpProtobufField::Optional
						);
	fields[4] = OpProtobufField(
						OpProtobufFormat::Uint32,
						5,
						UNI_L("contentLength"),
						OpProtobufField::Optional
						);
	fields[5] = OpProtobufField(
						OpProtobufFormat::Message,
						6,
						UNI_L("content"),
						OpProtobufField::Optional
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpScopeResourceManager_MessageSet::ResourceData,
						_resourceID
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpScopeResourceManager_MessageSet::ResourceData,
						_url
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						OpScopeResourceManager_MessageSet::ResourceData,
						_mimeType
						);
	offsets[3] = OP_PROTO_OFFSETOF(
						OpScopeResourceManager_MessageSet::ResourceData,
						_characterEncoding
						);
	offsets[4] = OP_PROTO_OFFSETOF(
						OpScopeResourceManager_MessageSet::ResourceData,
						_contentLength
						);
	offsets[5] = OP_PROTO_OFFSETOF(
						OpScopeResourceManager_MessageSet::ResourceData,
						_content
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeResourceManager_Descriptors::_gen_MsgID_resource_data_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeResourceManager_MessageSet::ResourceData, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeResourceManager_MessageSet::ResourceData, encoded_size_),
					"ResourceData",
					OpProtobufMessageVector<OpScopeResourceManager_MessageSet::ResourceData>::Make,
					OpProtobufMessageVector<OpScopeResourceManager_MessageSet::ResourceData>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	fields[5].SetMessage(Content::GetMessageDescriptor(descriptors));

	return message;
}

// BEGIN: ResourceData: Implementation

// Setters

OpString &
OpScopeResourceManager_MessageSet::ResourceData::GetUrlRef() 
{
	return _url;
}


OpString &
OpScopeResourceManager_MessageSet::ResourceData::GetMimeTypeRef() 
{
	has_bits_.Reference().SetBit(2);
	return _mimeType;
}


OpString &
OpScopeResourceManager_MessageSet::ResourceData::GetCharacterEncodingRef() 
{
	has_bits_.Reference().SetBit(3);
	return _characterEncoding;
}


void
OpScopeResourceManager_MessageSet::ResourceData::SetContent(OpScopeResourceManager_MessageSet::Content * v) 
{
	has_bits_.Reference().SetBit(5);
	OP_DELETE(_content);
	_content = v;
}

// END: ResourceData: Implementation

//   END: Message: ResourceData

//   BEGIN: Message: ResourceID
/*static*/
const OpProtobufMessage *
OpScopeResourceManager_MessageSet::ResourceID::GetMessageDescriptor(OpScopeResourceManager_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeResourceManager_Descriptors::_gen_MessageOffs_resource_id_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Uint32,
						1,
						UNI_L("resourceID"),
						OpProtobufField::Required
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpScopeResourceManager_MessageSet::ResourceID,
						_resourceID
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeResourceManager_Descriptors::_gen_MsgID_resource_id_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeResourceManager_MessageSet::ResourceID, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeResourceManager_MessageSet::ResourceID, encoded_size_),
					"ResourceID",
					OpProtobufMessageVector<OpScopeResourceManager_MessageSet::ResourceID>::Make,
					OpProtobufMessageVector<OpScopeResourceManager_MessageSet::ResourceID>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: ResourceID: Implementation


// END: ResourceID: Implementation

//   END: Message: ResourceID

//   BEGIN: Message: Response
/*static*/
const OpProtobufMessage *
OpScopeResourceManager_MessageSet::Response::GetMessageDescriptor(OpScopeResourceManager_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeResourceManager_Descriptors::_gen_MessageOffs_response_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Uint32,
						1,
						UNI_L("requestID"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Uint32,
						2,
						UNI_L("resourceID"),
						OpProtobufField::Required
						);
	fields[2] = OpProtobufField(
						OpProtobufFormat::Double,
						3,
						UNI_L("time"),
						OpProtobufField::Required
						);
	fields[3] = OpProtobufField(
						OpProtobufFormat::Uint32,
						4,
						UNI_L("responseCode"),
						OpProtobufField::Optional
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpScopeResourceManager_MessageSet::Response,
						_requestID
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpScopeResourceManager_MessageSet::Response,
						_resourceID
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						OpScopeResourceManager_MessageSet::Response,
						_time
						);
	offsets[3] = OP_PROTO_OFFSETOF(
						OpScopeResourceManager_MessageSet::Response,
						_responseCode
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeResourceManager_Descriptors::_gen_MsgID_response_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeResourceManager_MessageSet::Response, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeResourceManager_MessageSet::Response, encoded_size_),
					"Response",
					OpProtobufMessageVector<OpScopeResourceManager_MessageSet::Response>::Make,
					OpProtobufMessageVector<OpScopeResourceManager_MessageSet::Response>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: Response: Implementation


// END: Response: Implementation

//   END: Message: Response

//   BEGIN: Message: ResponseFinished
/*static*/
const OpProtobufMessage *
OpScopeResourceManager_MessageSet::ResponseFinished::GetMessageDescriptor(OpScopeResourceManager_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeResourceManager_Descriptors::_gen_MessageOffs_response_finished_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Uint32,
						1,
						UNI_L("requestID"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Uint32,
						2,
						UNI_L("resourceID"),
						OpProtobufField::Required
						);
	fields[2] = OpProtobufField(
						OpProtobufFormat::Double,
						3,
						UNI_L("time"),
						OpProtobufField::Required
						);
	fields[3] = OpProtobufField(
						OpProtobufFormat::Uint32,
						4,
						UNI_L("contentLength"),
						OpProtobufField::Required
						);
	fields[4] = OpProtobufField(
						OpProtobufFormat::Message,
						5,
						UNI_L("data"),
						OpProtobufField::Optional
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpScopeResourceManager_MessageSet::ResponseFinished,
						_requestID
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpScopeResourceManager_MessageSet::ResponseFinished,
						_resourceID
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						OpScopeResourceManager_MessageSet::ResponseFinished,
						_time
						);
	offsets[3] = OP_PROTO_OFFSETOF(
						OpScopeResourceManager_MessageSet::ResponseFinished,
						_contentLength
						);
	offsets[4] = OP_PROTO_OFFSETOF(
						OpScopeResourceManager_MessageSet::ResponseFinished,
						_data
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeResourceManager_Descriptors::_gen_MsgID_response_finished_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeResourceManager_MessageSet::ResponseFinished, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeResourceManager_MessageSet::ResponseFinished, encoded_size_),
					"ResponseFinished",
					OpProtobufMessageVector<OpScopeResourceManager_MessageSet::ResponseFinished>::Make,
					OpProtobufMessageVector<OpScopeResourceManager_MessageSet::ResponseFinished>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	fields[4].SetMessage(ResourceData::GetMessageDescriptor(descriptors));

	return message;
}

// BEGIN: ResponseFinished: Implementation

// Setters

void
OpScopeResourceManager_MessageSet::ResponseFinished::SetData(OpScopeResourceManager_MessageSet::ResourceData * v) 
{
	has_bits_.Reference().SetBit(4);
	OP_DELETE(_data);
	_data = v;
}

// END: ResponseFinished: Implementation

//   END: Message: ResponseFinished

//   BEGIN: Message: ResponseHeader
/*static*/
const OpProtobufMessage *
OpScopeResourceManager_MessageSet::ResponseHeader::GetMessageDescriptor(OpScopeResourceManager_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeResourceManager_Descriptors::_gen_MessageOffs_response_header_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Uint32,
						1,
						UNI_L("requestID"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Uint32,
						2,
						UNI_L("resourceID"),
						OpProtobufField::Required
						);
	fields[2] = OpProtobufField(
						OpProtobufFormat::Double,
						3,
						UNI_L("time"),
						OpProtobufField::Required
						);
	fields[3] = OpProtobufField(
						OpProtobufFormat::String,
						4,
						UNI_L("raw"),
						OpProtobufField::Required
						);
	fields[4] = OpProtobufField(
						OpProtobufFormat::Message,
						5,
						UNI_L("headerList"),
						OpProtobufField::Repeated
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpScopeResourceManager_MessageSet::ResponseHeader,
						_requestID
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpScopeResourceManager_MessageSet::ResponseHeader,
						_resourceID
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						OpScopeResourceManager_MessageSet::ResponseHeader,
						_time
						);
	offsets[3] = OP_PROTO_OFFSETOF(
						OpScopeResourceManager_MessageSet::ResponseHeader,
						_raw
						);
	offsets[4] = OP_PROTO_OFFSETOF(
						OpScopeResourceManager_MessageSet::ResponseHeader,
						_headerList
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeResourceManager_Descriptors::_gen_MsgID_response_header_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeResourceManager_MessageSet::ResponseHeader, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeResourceManager_MessageSet::ResponseHeader, encoded_size_),
					"ResponseHeader",
					OpProtobufMessageVector<OpScopeResourceManager_MessageSet::ResponseHeader>::Make,
					OpProtobufMessageVector<OpScopeResourceManager_MessageSet::ResponseHeader>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	fields[4].SetMessage(Header::GetMessageDescriptor(descriptors));

	return message;
}

// BEGIN: ResponseHeader: Implementation

// Setters

OP_STATUS
OpScopeResourceManager_MessageSet::ResponseHeader::SetRaw(const char * v, int l) 
{
	return _raw.Set(v, l);
}


OpProtobufMessageVector<OpScopeResourceManager_MessageSet::Header> &
OpScopeResourceManager_MessageSet::ResponseHeader::GetHeaderListRef() 
{
	has_bits_.Reference().SetBit(4);
	return _headerList;
}

// END: ResponseHeader: Implementation

//   END: Message: ResponseHeader

//   BEGIN: Message: SetReloadPolicyArg
/*static*/
const OpProtobufMessage *
OpScopeResourceManager_MessageSet::SetReloadPolicyArg::GetMessageDescriptor(OpScopeResourceManager_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeResourceManager_Descriptors::_gen_MessageOffs_set_reload_policy_arg_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Int32,
						1,
						UNI_L("policy"),
						OpProtobufField::Required
						, NULL // const OpProtobufMessage *message
						, 0 // int message_id
						, OpScopeResourceManager_Descriptors::_gen_EnumID_ReloadPolicy // unsigned enum_id
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpScopeResourceManager_MessageSet::SetReloadPolicyArg,
						_policy
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeResourceManager_Descriptors::_gen_MsgID_set_reload_policy_arg_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeResourceManager_MessageSet::SetReloadPolicyArg, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeResourceManager_MessageSet::SetReloadPolicyArg, encoded_size_),
					"SetReloadPolicyArg",
					OpProtobufMessageVector<OpScopeResourceManager_MessageSet::SetReloadPolicyArg>::Make,
					OpProtobufMessageVector<OpScopeResourceManager_MessageSet::SetReloadPolicyArg>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: SetReloadPolicyArg: Implementation

// Setters

void
OpScopeResourceManager_MessageSet::SetReloadPolicyArg::SetPolicy(OpScopeResourceManager_MessageSet::ReloadPolicy v) 
{
	_policy = static_cast<OpScopeResourceManager_MessageSet::ReloadPolicy>(v);
}

// END: SetReloadPolicyArg: Implementation

//   END: Message: SetReloadPolicyArg

//   BEGIN: Message: SetRequestModeArg
/*static*/
const OpProtobufMessage *
OpScopeResourceManager_MessageSet::SetRequestModeArg::GetMessageDescriptor(OpScopeResourceManager_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeResourceManager_Descriptors::_gen_MessageOffs_set_request_mode_arg_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Message,
						1,
						UNI_L("defaultContentMode"),
						OpProtobufField::Optional
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Message,
						2,
						UNI_L("mimeModeList"),
						OpProtobufField::Repeated
						);
	fields[2] = OpProtobufField(
						OpProtobufFormat::Message,
						3,
						UNI_L("multipartMimeModeList"),
						OpProtobufField::Repeated
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpScopeResourceManager_MessageSet::SetRequestModeArg,
						_defaultContentMode
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpScopeResourceManager_MessageSet::SetRequestModeArg,
						_mimeModeList
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						OpScopeResourceManager_MessageSet::SetRequestModeArg,
						_multipartMimeModeList
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeResourceManager_Descriptors::_gen_MsgID_set_request_mode_arg_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeResourceManager_MessageSet::SetRequestModeArg, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeResourceManager_MessageSet::SetRequestModeArg, encoded_size_),
					"SetRequestModeArg",
					OpProtobufMessageVector<OpScopeResourceManager_MessageSet::SetRequestModeArg>::Make,
					OpProtobufMessageVector<OpScopeResourceManager_MessageSet::SetRequestModeArg>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	fields[0].SetMessage(ContentMode::GetMessageDescriptor(descriptors));
	fields[1].SetMessage(MimeMode::GetMessageDescriptor(descriptors));
	fields[2].SetMessage(MimeMode::GetMessageDescriptor(descriptors));

	return message;
}

// BEGIN: SetRequestModeArg: Implementation

// Setters

void
OpScopeResourceManager_MessageSet::SetRequestModeArg::SetDefaultContentMode(OpScopeResourceManager_MessageSet::ContentMode * v) 
{
	has_bits_.Reference().SetBit(0);
	OP_DELETE(_defaultContentMode);
	_defaultContentMode = v;
}


OpProtobufMessageVector<OpScopeResourceManager_MessageSet::MimeMode> &
OpScopeResourceManager_MessageSet::SetRequestModeArg::GetMimeModeListRef() 
{
	has_bits_.Reference().SetBit(1);
	return _mimeModeList;
}


OpProtobufMessageVector<OpScopeResourceManager_MessageSet::MimeMode> &
OpScopeResourceManager_MessageSet::SetRequestModeArg::GetMultipartMimeModeListRef() 
{
	has_bits_.Reference().SetBit(2);
	return _multipartMimeModeList;
}

// END: SetRequestModeArg: Implementation

//   END: Message: SetRequestModeArg

//   BEGIN: Message: SetResponseModeArg
/*static*/
const OpProtobufMessage *
OpScopeResourceManager_MessageSet::SetResponseModeArg::GetMessageDescriptor(OpScopeResourceManager_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeResourceManager_Descriptors::_gen_MessageOffs_set_response_mode_arg_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Message,
						1,
						UNI_L("defaultContentMode"),
						OpProtobufField::Optional
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Message,
						2,
						UNI_L("mimeModeList"),
						OpProtobufField::Repeated
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpScopeResourceManager_MessageSet::SetResponseModeArg,
						_defaultContentMode
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpScopeResourceManager_MessageSet::SetResponseModeArg,
						_mimeModeList
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeResourceManager_Descriptors::_gen_MsgID_set_response_mode_arg_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeResourceManager_MessageSet::SetResponseModeArg, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeResourceManager_MessageSet::SetResponseModeArg, encoded_size_),
					"SetResponseModeArg",
					OpProtobufMessageVector<OpScopeResourceManager_MessageSet::SetResponseModeArg>::Make,
					OpProtobufMessageVector<OpScopeResourceManager_MessageSet::SetResponseModeArg>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	fields[0].SetMessage(ContentMode::GetMessageDescriptor(descriptors));
	fields[1].SetMessage(MimeMode::GetMessageDescriptor(descriptors));

	return message;
}

// BEGIN: SetResponseModeArg: Implementation

// Setters

void
OpScopeResourceManager_MessageSet::SetResponseModeArg::SetDefaultContentMode(OpScopeResourceManager_MessageSet::ContentMode * v) 
{
	has_bits_.Reference().SetBit(0);
	OP_DELETE(_defaultContentMode);
	_defaultContentMode = v;
}


OpProtobufMessageVector<OpScopeResourceManager_MessageSet::MimeMode> &
OpScopeResourceManager_MessageSet::SetResponseModeArg::GetMimeModeListRef() 
{
	has_bits_.Reference().SetBit(1);
	return _mimeModeList;
}

// END: SetResponseModeArg: Implementation

//   END: Message: SetResponseModeArg

//   BEGIN: Message: UrlFinished
/*static*/
const OpProtobufMessage *
OpScopeResourceManager_MessageSet::UrlFinished::GetMessageDescriptor(OpScopeResourceManager_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeResourceManager_Descriptors::_gen_MessageOffs_url_finished_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Uint32,
						1,
						UNI_L("resourceID"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Int32,
						2,
						UNI_L("result"),
						OpProtobufField::Required
						, NULL // const OpProtobufMessage *message
						, 0 // int message_id
						, OpScopeResourceManager_Descriptors::_gen_EnumID_UrlFinished_Result // unsigned enum_id
						);
	fields[2] = OpProtobufField(
						OpProtobufFormat::Double,
						3,
						UNI_L("time"),
						OpProtobufField::Required
						);
	fields[3] = OpProtobufField(
						OpProtobufFormat::String,
						4,
						UNI_L("mimeType"),
						OpProtobufField::Optional
						);
	fields[4] = OpProtobufField(
						OpProtobufFormat::String,
						5,
						UNI_L("characterEncoding"),
						OpProtobufField::Optional
						);
	fields[5] = OpProtobufField(
						OpProtobufFormat::Uint32,
						6,
						UNI_L("contentLength"),
						OpProtobufField::Optional
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpScopeResourceManager_MessageSet::UrlFinished,
						_resourceID
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpScopeResourceManager_MessageSet::UrlFinished,
						_result
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						OpScopeResourceManager_MessageSet::UrlFinished,
						_time
						);
	offsets[3] = OP_PROTO_OFFSETOF(
						OpScopeResourceManager_MessageSet::UrlFinished,
						_mimeType
						);
	offsets[4] = OP_PROTO_OFFSETOF(
						OpScopeResourceManager_MessageSet::UrlFinished,
						_characterEncoding
						);
	offsets[5] = OP_PROTO_OFFSETOF(
						OpScopeResourceManager_MessageSet::UrlFinished,
						_contentLength
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeResourceManager_Descriptors::_gen_MsgID_url_finished_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeResourceManager_MessageSet::UrlFinished, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeResourceManager_MessageSet::UrlFinished, encoded_size_),
					"UrlFinished",
					OpProtobufMessageVector<OpScopeResourceManager_MessageSet::UrlFinished>::Make,
					OpProtobufMessageVector<OpScopeResourceManager_MessageSet::UrlFinished>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: UrlFinished: Implementation

// Enum value UrlFinished.Result.FINISHED
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const OpScopeResourceManager_MessageSet::UrlFinished_Result OpScopeResourceManager_MessageSet::UrlFinished::RESULT_FINISHED;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)


// Enum value UrlFinished.Result.FAILED
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const OpScopeResourceManager_MessageSet::UrlFinished_Result OpScopeResourceManager_MessageSet::UrlFinished::RESULT_FAILED;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)


// Enum value UrlFinished.Result.STOPPED
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const OpScopeResourceManager_MessageSet::UrlFinished_Result OpScopeResourceManager_MessageSet::UrlFinished::RESULT_STOPPED;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)



// Setters

void
OpScopeResourceManager_MessageSet::UrlFinished::SetResult(OpScopeResourceManager_MessageSet::UrlFinished_Result v) 
{
	_result = static_cast<OpScopeResourceManager_MessageSet::UrlFinished_Result>(v);
}


OpString &
OpScopeResourceManager_MessageSet::UrlFinished::GetMimeTypeRef() 
{
	has_bits_.Reference().SetBit(3);
	return _mimeType;
}


OpString &
OpScopeResourceManager_MessageSet::UrlFinished::GetCharacterEncodingRef() 
{
	has_bits_.Reference().SetBit(4);
	return _characterEncoding;
}

// END: UrlFinished: Implementation

//   END: Message: UrlFinished

//   BEGIN: Message: UrlLoad
/*static*/
const OpProtobufMessage *
OpScopeResourceManager_MessageSet::UrlLoad::GetMessageDescriptor(OpScopeResourceManager_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeResourceManager_Descriptors::_gen_MessageOffs_url_load_];
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
						UNI_L("frameID"),
						OpProtobufField::Optional
						);
	fields[2] = OpProtobufField(
						OpProtobufFormat::Uint32,
						3,
						UNI_L("documentID"),
						OpProtobufField::Optional
						);
	fields[3] = OpProtobufField(
						OpProtobufFormat::Uint32,
						4,
						UNI_L("resourceID"),
						OpProtobufField::Required
						);
	fields[4] = OpProtobufField(
						OpProtobufFormat::String,
						5,
						UNI_L("url"),
						OpProtobufField::Required
						);
	fields[5] = OpProtobufField(
						OpProtobufFormat::Int32,
						6,
						UNI_L("urlType"),
						OpProtobufField::Required
						, NULL // const OpProtobufMessage *message
						, 0 // int message_id
						, OpScopeResourceManager_Descriptors::_gen_EnumID_UrlLoad_URLType // unsigned enum_id
						);
	fields[6] = OpProtobufField(
						OpProtobufFormat::Double,
						7,
						UNI_L("time"),
						OpProtobufField::Required
						);
	fields[7] = OpProtobufField(
						OpProtobufFormat::Int32,
						8,
						UNI_L("loadOrigin"),
						OpProtobufField::Optional
						, NULL // const OpProtobufMessage *message
						, 0 // int message_id
						, OpScopeResourceManager_Descriptors::_gen_EnumID_LoadOrigin // unsigned enum_id
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpScopeResourceManager_MessageSet::UrlLoad,
						_windowID
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpScopeResourceManager_MessageSet::UrlLoad,
						_frameID
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						OpScopeResourceManager_MessageSet::UrlLoad,
						_documentID
						);
	offsets[3] = OP_PROTO_OFFSETOF(
						OpScopeResourceManager_MessageSet::UrlLoad,
						_resourceID
						);
	offsets[4] = OP_PROTO_OFFSETOF(
						OpScopeResourceManager_MessageSet::UrlLoad,
						_url
						);
	offsets[5] = OP_PROTO_OFFSETOF(
						OpScopeResourceManager_MessageSet::UrlLoad,
						_urlType
						);
	offsets[6] = OP_PROTO_OFFSETOF(
						OpScopeResourceManager_MessageSet::UrlLoad,
						_time
						);
	offsets[7] = OP_PROTO_OFFSETOF(
						OpScopeResourceManager_MessageSet::UrlLoad,
						_loadOrigin
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeResourceManager_Descriptors::_gen_MsgID_url_load_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeResourceManager_MessageSet::UrlLoad, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeResourceManager_MessageSet::UrlLoad, encoded_size_),
					"UrlLoad",
					OpProtobufMessageVector<OpScopeResourceManager_MessageSet::UrlLoad>::Make,
					OpProtobufMessageVector<OpScopeResourceManager_MessageSet::UrlLoad>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: UrlLoad: Implementation

// Enum value UrlLoad.URLType.UNKNOWN
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const OpScopeResourceManager_MessageSet::UrlLoad_URLType OpScopeResourceManager_MessageSet::UrlLoad::URLTYPE_UNKNOWN;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)


// Enum value UrlLoad.URLType.HTTP
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const OpScopeResourceManager_MessageSet::UrlLoad_URLType OpScopeResourceManager_MessageSet::UrlLoad::URLTYPE_HTTP;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)


// Enum value UrlLoad.URLType.HTTPS
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const OpScopeResourceManager_MessageSet::UrlLoad_URLType OpScopeResourceManager_MessageSet::UrlLoad::URLTYPE_HTTPS;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)


// Enum value UrlLoad.URLType.FILE
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const OpScopeResourceManager_MessageSet::UrlLoad_URLType OpScopeResourceManager_MessageSet::UrlLoad::URLTYPE_FILE;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)


// Enum value UrlLoad.URLType.DATA
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const OpScopeResourceManager_MessageSet::UrlLoad_URLType OpScopeResourceManager_MessageSet::UrlLoad::URLTYPE_DATA;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)


// Enum value UrlLoad.URLType.FTP
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const OpScopeResourceManager_MessageSet::UrlLoad_URLType OpScopeResourceManager_MessageSet::UrlLoad::URLTYPE_FTP;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)


// Enum value UrlLoad.URLType.GOPHER
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const OpScopeResourceManager_MessageSet::UrlLoad_URLType OpScopeResourceManager_MessageSet::UrlLoad::URLTYPE_GOPHER;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)


// Enum value UrlLoad.URLType.WAIS
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const OpScopeResourceManager_MessageSet::UrlLoad_URLType OpScopeResourceManager_MessageSet::UrlLoad::URLTYPE_WAIS;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)


// Enum value UrlLoad.URLType.NEWS
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const OpScopeResourceManager_MessageSet::UrlLoad_URLType OpScopeResourceManager_MessageSet::UrlLoad::URLTYPE_NEWS;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)


// Enum value UrlLoad.URLType.SNEWS
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const OpScopeResourceManager_MessageSet::UrlLoad_URLType OpScopeResourceManager_MessageSet::UrlLoad::URLTYPE_SNEWS;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)


// Enum value UrlLoad.URLType.NEWSATTACHMENT
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const OpScopeResourceManager_MessageSet::UrlLoad_URLType OpScopeResourceManager_MessageSet::UrlLoad::URLTYPE_NEWSATTACHMENT;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)


// Enum value UrlLoad.URLType.SNEWSATTACHMENT
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const OpScopeResourceManager_MessageSet::UrlLoad_URLType OpScopeResourceManager_MessageSet::UrlLoad::URLTYPE_SNEWSATTACHMENT;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)


// Enum value UrlLoad.URLType.EMAIL
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const OpScopeResourceManager_MessageSet::UrlLoad_URLType OpScopeResourceManager_MessageSet::UrlLoad::URLTYPE_EMAIL;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)


// Enum value UrlLoad.URLType.ATTACHMENT
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const OpScopeResourceManager_MessageSet::UrlLoad_URLType OpScopeResourceManager_MessageSet::UrlLoad::URLTYPE_ATTACHMENT;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)


// Enum value UrlLoad.URLType.TELNET
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const OpScopeResourceManager_MessageSet::UrlLoad_URLType OpScopeResourceManager_MessageSet::UrlLoad::URLTYPE_TELNET;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)


// Enum value UrlLoad.URLType.MAILTO
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const OpScopeResourceManager_MessageSet::UrlLoad_URLType OpScopeResourceManager_MessageSet::UrlLoad::URLTYPE_MAILTO;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)


// Enum value UrlLoad.URLType.OPERA
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const OpScopeResourceManager_MessageSet::UrlLoad_URLType OpScopeResourceManager_MessageSet::UrlLoad::URLTYPE_OPERA;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)


// Enum value UrlLoad.URLType.JAVASCRIPT
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const OpScopeResourceManager_MessageSet::UrlLoad_URLType OpScopeResourceManager_MessageSet::UrlLoad::URLTYPE_JAVASCRIPT;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)


// Enum value UrlLoad.URLType.CONTENT_ID
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const OpScopeResourceManager_MessageSet::UrlLoad_URLType OpScopeResourceManager_MessageSet::UrlLoad::URLTYPE_CONTENT_ID;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)


// Enum value UrlLoad.URLType.TN3270
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const OpScopeResourceManager_MessageSet::UrlLoad_URLType OpScopeResourceManager_MessageSet::UrlLoad::URLTYPE_TN3270;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)


// Enum value UrlLoad.URLType.SOURCE
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const OpScopeResourceManager_MessageSet::UrlLoad_URLType OpScopeResourceManager_MessageSet::UrlLoad::URLTYPE_SOURCE;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)


// Enum value UrlLoad.URLType.CLIENT
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const OpScopeResourceManager_MessageSet::UrlLoad_URLType OpScopeResourceManager_MessageSet::UrlLoad::URLTYPE_CLIENT;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)


// Enum value UrlLoad.URLType.NNTP
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const OpScopeResourceManager_MessageSet::UrlLoad_URLType OpScopeResourceManager_MessageSet::UrlLoad::URLTYPE_NNTP;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)


// Enum value UrlLoad.URLType.NNTPS
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const OpScopeResourceManager_MessageSet::UrlLoad_URLType OpScopeResourceManager_MessageSet::UrlLoad::URLTYPE_NNTPS;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)


// Enum value UrlLoad.URLType.SHARE
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const OpScopeResourceManager_MessageSet::UrlLoad_URLType OpScopeResourceManager_MessageSet::UrlLoad::URLTYPE_SHARE;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)


// Enum value UrlLoad.URLType.GHTTP
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const OpScopeResourceManager_MessageSet::UrlLoad_URLType OpScopeResourceManager_MessageSet::UrlLoad::URLTYPE_GHTTP;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)


// Enum value UrlLoad.URLType.TV
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const OpScopeResourceManager_MessageSet::UrlLoad_URLType OpScopeResourceManager_MessageSet::UrlLoad::URLTYPE_TV;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)


// Enum value UrlLoad.URLType.EDITED
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const OpScopeResourceManager_MessageSet::UrlLoad_URLType OpScopeResourceManager_MessageSet::UrlLoad::URLTYPE_EDITED;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)


// Enum value UrlLoad.URLType.ERROR
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const OpScopeResourceManager_MessageSet::UrlLoad_URLType OpScopeResourceManager_MessageSet::UrlLoad::URLTYPE_ERROR;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)


// Enum value UrlLoad.URLType.DVB
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const OpScopeResourceManager_MessageSet::UrlLoad_URLType OpScopeResourceManager_MessageSet::UrlLoad::URLTYPE_DVB;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)


// Enum value UrlLoad.URLType.TEL
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const OpScopeResourceManager_MessageSet::UrlLoad_URLType OpScopeResourceManager_MessageSet::UrlLoad::URLTYPE_TEL;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)


// Enum value UrlLoad.URLType.MAIL
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const OpScopeResourceManager_MessageSet::UrlLoad_URLType OpScopeResourceManager_MessageSet::UrlLoad::URLTYPE_MAIL;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)


// Enum value UrlLoad.URLType.IRC
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const OpScopeResourceManager_MessageSet::UrlLoad_URLType OpScopeResourceManager_MessageSet::UrlLoad::URLTYPE_IRC;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)


// Enum value UrlLoad.URLType.SMS
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const OpScopeResourceManager_MessageSet::UrlLoad_URLType OpScopeResourceManager_MessageSet::UrlLoad::URLTYPE_SMS;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)


// Enum value UrlLoad.URLType.SMSTO
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const OpScopeResourceManager_MessageSet::UrlLoad_URLType OpScopeResourceManager_MessageSet::UrlLoad::URLTYPE_SMSTO;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)


// Enum value UrlLoad.URLType.CHAT_TRANSFER
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const OpScopeResourceManager_MessageSet::UrlLoad_URLType OpScopeResourceManager_MessageSet::UrlLoad::URLTYPE_CHAT_TRANSFER;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)


// Enum value UrlLoad.URLType.DEVICE
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const OpScopeResourceManager_MessageSet::UrlLoad_URLType OpScopeResourceManager_MessageSet::UrlLoad::URLTYPE_DEVICE;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)


// Enum value UrlLoad.URLType.MOUNTPOINT
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const OpScopeResourceManager_MessageSet::UrlLoad_URLType OpScopeResourceManager_MessageSet::UrlLoad::URLTYPE_MOUNTPOINT;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)


// Enum value UrlLoad.URLType.WIDGET
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const OpScopeResourceManager_MessageSet::UrlLoad_URLType OpScopeResourceManager_MessageSet::UrlLoad::URLTYPE_WIDGET;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)


// Enum value UrlLoad.URLType.OBMLSERVER
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const OpScopeResourceManager_MessageSet::UrlLoad_URLType OpScopeResourceManager_MessageSet::UrlLoad::URLTYPE_OBMLSERVER;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)


// Enum value UrlLoad.URLType.UNITE
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const OpScopeResourceManager_MessageSet::UrlLoad_URLType OpScopeResourceManager_MessageSet::UrlLoad::URLTYPE_UNITE;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)


// Enum value UrlLoad.URLType.INTERNAL
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const OpScopeResourceManager_MessageSet::UrlLoad_URLType OpScopeResourceManager_MessageSet::UrlLoad::URLTYPE_INTERNAL;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)



// Setters

OpString &
OpScopeResourceManager_MessageSet::UrlLoad::GetUrlRef() 
{
	return _url;
}


void
OpScopeResourceManager_MessageSet::UrlLoad::SetUrlType(OpScopeResourceManager_MessageSet::UrlLoad_URLType v) 
{
	_urlType = static_cast<OpScopeResourceManager_MessageSet::UrlLoad_URLType>(v);
}


void
OpScopeResourceManager_MessageSet::UrlLoad::SetLoadOrigin(OpScopeResourceManager_MessageSet::LoadOrigin v) 
{
	has_bits_.Reference().SetBit(7);
	_loadOrigin = static_cast<OpScopeResourceManager_MessageSet::LoadOrigin>(v);
}

// END: UrlLoad: Implementation

//   END: Message: UrlLoad

//   BEGIN: Message: UrlRedirect
/*static*/
const OpProtobufMessage *
OpScopeResourceManager_MessageSet::UrlRedirect::GetMessageDescriptor(OpScopeResourceManager_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeResourceManager_Descriptors::_gen_MessageOffs_url_redirect_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Uint32,
						1,
						UNI_L("fromResourceID"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Uint32,
						2,
						UNI_L("toResourceID"),
						OpProtobufField::Required
						);
	fields[2] = OpProtobufField(
						OpProtobufFormat::Double,
						3,
						UNI_L("time"),
						OpProtobufField::Required
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpScopeResourceManager_MessageSet::UrlRedirect,
						_fromResourceID
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpScopeResourceManager_MessageSet::UrlRedirect,
						_toResourceID
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						OpScopeResourceManager_MessageSet::UrlRedirect,
						_time
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeResourceManager_Descriptors::_gen_MsgID_url_redirect_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeResourceManager_MessageSet::UrlRedirect, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeResourceManager_MessageSet::UrlRedirect, encoded_size_),
					"UrlRedirect",
					OpProtobufMessageVector<OpScopeResourceManager_MessageSet::UrlRedirect>::Make,
					OpProtobufMessageVector<OpScopeResourceManager_MessageSet::UrlRedirect>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: UrlRedirect: Implementation


// END: UrlRedirect: Implementation

//   END: Message: UrlRedirect

//   BEGIN: Message: UrlUnload
/*static*/
const OpProtobufMessage *
OpScopeResourceManager_MessageSet::UrlUnload::GetMessageDescriptor(OpScopeResourceManager_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeResourceManager_Descriptors::_gen_MessageOffs_url_unload_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Uint32,
						1,
						UNI_L("resourceID"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Double,
						2,
						UNI_L("time"),
						OpProtobufField::Required
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpScopeResourceManager_MessageSet::UrlUnload,
						_resourceID
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpScopeResourceManager_MessageSet::UrlUnload,
						_time
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeResourceManager_Descriptors::_gen_MsgID_url_unload_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeResourceManager_MessageSet::UrlUnload, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeResourceManager_MessageSet::UrlUnload, encoded_size_),
					"UrlUnload",
					OpProtobufMessageVector<OpScopeResourceManager_MessageSet::UrlUnload>::Make,
					OpProtobufMessageVector<OpScopeResourceManager_MessageSet::UrlUnload>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: UrlUnload: Implementation


// END: UrlUnload: Implementation

//   END: Message: UrlUnload


// END: Messages


#include "modules/protobuf/src/protobuf_utils.h"
#include "modules/scope/src/scope_tp_message.h"
#include "modules/scope/src/scope_default_message.h"
#include "modules/scope/src/scope_manager.h"
#include "modules/scope/src/generated/g_scope_manager.h"
#include "modules/scope/src/generated/g_scope_resource_manager_interface.h"
#include "modules/scope/src/scope_resource_manager.h"

// BEGIN: OpScopeResourceManager_SI::Descriptors

OpScopeResourceManager_SI::Descriptors::Descriptors()
{
}

OpScopeResourceManager_SI::Descriptors::~Descriptors()
{
}

OP_STATUS
OpScopeResourceManager_SI::Descriptors::Construct()
{
    RETURN_IF_ERROR(OpScopeResourceManager_Descriptors::Construct());
	// Initialize commands
	command_list[0] = OpScopeCommand("GetResource",
						Command_GetResource,
						OpScopeCommand::Type_Call,
						_gen_MsgID_get_resource_arg_,
						_gen_MsgID_resource_data_
						);
	command_list[1] = OpScopeCommand("SetReloadPolicy",
						Command_SetReloadPolicy,
						OpScopeCommand::Type_Call,
						_gen_MsgID_set_reload_policy_arg_,
						_gen_void_MsgID
						);
	command_list[2] = OpScopeCommand("SetResponseMode",
						Command_SetResponseMode,
						OpScopeCommand::Type_Call,
						_gen_MsgID_set_response_mode_arg_,
						_gen_void_MsgID
						);
	command_list[3] = OpScopeCommand("SetRequestMode",
						Command_SetRequestMode,
						OpScopeCommand::Type_Call,
						_gen_MsgID_set_request_mode_arg_,
						_gen_void_MsgID
						);
	command_list[4] = OpScopeCommand("AddHeaderOverrides",
						Command_AddHeaderOverrides,
						OpScopeCommand::Type_Call,
						_gen_MsgID_add_header_overrides_arg_,
						_gen_void_MsgID
						);
	command_list[5] = OpScopeCommand("RemoveHeaderOverrides",
						Command_RemoveHeaderOverrides,
						OpScopeCommand::Type_Call,
						_gen_MsgID_remove_header_overrides_arg_,
						_gen_void_MsgID
						);
	command_list[6] = OpScopeCommand("ClearHeaderOverrides",
						Command_ClearHeaderOverrides,
						OpScopeCommand::Type_Call,
						_gen_void_MsgID,
						_gen_void_MsgID
						);
	command_list[7] = OpScopeCommand("CreateRequest",
						Command_CreateRequest,
						OpScopeCommand::Type_Call,
						_gen_MsgID_create_request_arg_,
						_gen_MsgID_resource_id_
						);
	command_list[8] = OpScopeCommand("ClearCache",
						Command_ClearCache,
						OpScopeCommand::Type_Call,
						_gen_void_MsgID,
						_gen_void_MsgID
						);
	command_list[9] = OpScopeCommand("OnUrlLoad",
						Command_OnUrlLoad,
						OpScopeCommand::Type_Event,
						_gen_void_MsgID,
						_gen_MsgID_url_load_
						);
	command_list[10] = OpScopeCommand("OnUrlFinished",
						Command_OnUrlFinished,
						OpScopeCommand::Type_Event,
						_gen_void_MsgID,
						_gen_MsgID_url_finished_
						);
	command_list[11] = OpScopeCommand("OnUrlRedirect",
						Command_OnUrlRedirect,
						OpScopeCommand::Type_Event,
						_gen_void_MsgID,
						_gen_MsgID_url_redirect_
						);
	command_list[12] = OpScopeCommand("OnUrlUnload",
						Command_OnUrlUnload,
						OpScopeCommand::Type_Event,
						_gen_void_MsgID,
						_gen_MsgID_url_unload_
						);
	command_list[13] = OpScopeCommand("OnRequest",
						Command_OnRequest,
						OpScopeCommand::Type_Event,
						_gen_void_MsgID,
						_gen_MsgID_request_
						);
	command_list[14] = OpScopeCommand("OnRequestHeader",
						Command_OnRequestHeader,
						OpScopeCommand::Type_Event,
						_gen_void_MsgID,
						_gen_MsgID_request_header_
						);
	command_list[15] = OpScopeCommand("OnRequestFinished",
						Command_OnRequestFinished,
						OpScopeCommand::Type_Event,
						_gen_void_MsgID,
						_gen_MsgID_request_finished_
						);
	command_list[16] = OpScopeCommand("OnRequestRetry",
						Command_OnRequestRetry,
						OpScopeCommand::Type_Event,
						_gen_void_MsgID,
						_gen_MsgID_request_retry_
						);
	command_list[17] = OpScopeCommand("OnResponse",
						Command_OnResponse,
						OpScopeCommand::Type_Event,
						_gen_void_MsgID,
						_gen_MsgID_response_
						);
	command_list[18] = OpScopeCommand("OnResponseHeader",
						Command_OnResponseHeader,
						OpScopeCommand::Type_Event,
						_gen_void_MsgID,
						_gen_MsgID_response_header_
						);
	command_list[19] = OpScopeCommand("OnResponseFinished",
						Command_OnResponseFinished,
						OpScopeCommand::Type_Event,
						_gen_void_MsgID,
						_gen_MsgID_response_finished_
						);
	command_list[20] = OpScopeCommand("GetResourceID",
						Command_GetResourceID,
						OpScopeCommand::Type_Call,
						_gen_MsgID_get_resource_id_arg_,
						_gen_MsgID_resource_id_
						);
	command_list[21] = OpScopeCommand("OnDnsLookupStarted",
						Command_OnDnsLookupStarted,
						OpScopeCommand::Type_Event,
						_gen_void_MsgID,
						_gen_MsgID_dns_lookup_started_
						);
	command_list[22] = OpScopeCommand("OnDnsLookupFinished",
						Command_OnDnsLookupFinished,
						OpScopeCommand::Type_Event,
						_gen_void_MsgID,
						_gen_MsgID_dns_lookup_finished_
						);
	return OpStatus::OK;
}

// END: OpScopeResourceManager_SI::Descriptors
// Service implementation: BEGIN


// Service implementation

OpScopeResourceManager_SI::OpScopeResourceManager_SI(const uni_char* id, OpScopeServiceManager *manager, ControlType control)
		: OpScopeService(id == NULL ? UNI_L("resource-manager") : id, manager, control)
{
}

/*virtual*/
OpScopeResourceManager_SI::~OpScopeResourceManager_SI()
{
}

/*virtual*/
int
OpScopeResourceManager_SI::GetCommandCount() const
{
	return Command_Count;
}

/*virtual*/
OpScopeService::CommandRange
OpScopeResourceManager_SI::GetCommands() const
{
	Descriptors *descriptors = g_scope_manager->GetDescriptorSet().resource_manager_;
	OP_ASSERT(descriptors);
	return CommandRange(descriptors ? descriptors->command_list : NULL, Command_Count);
}

/*virtual*/
OP_STATUS
OpScopeResourceManager_SI::DoReceive( OpScopeClient *client, const OpScopeTPMessage &msg )
{
	// Check for invalid request data
	if (msg.Status() != OpScopeTPMessage::OK) // All calls must have status OK
		return SetCommandError(OpScopeTPMessage::BadRequest, GetInvalidStatusFieldText());
	if (msg.ServiceName().Compare(GetName()) != 0) // Make sure the service name matches the one in the message
		return SetCommandError(OpScopeTPMessage::InternalError, GetIncorrectServiceText());

	if (msg.CommandID() == Command_GetResource) // GetResource
	{
		OP_STATUS status = OpStatus::OK;
		GetResourceArg in;
		ResourceData out;

		OpProtobufInstanceProxy in_proxy(GetResourceArg::GetMessageDescriptor(GetDescriptors()), &in);
		if (in_proxy.GetProtoMessage() == NULL)
			return OpStatus::ERR_NO_MEMORY;
		status = ParseMessage(client, msg, in_proxy);
		if (OpStatus::IsError(status))
		{
			if (GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if none was set by a parser
				RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetParseCommandMessageFailedText()));
			return status;
		}

		status = DoGetResource(in, out);
		if (OpStatus::IsError(status))
		{
			if (GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if none was set by command
			RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetCommandExecutionFailedText()));
			return status;
		}

		OpProtobufInstanceProxy out_proxy(ResourceData::GetMessageDescriptor(GetDescriptors()), &out);
		if (out_proxy.GetProtoMessage() == NULL)
			return OpStatus::ERR_NO_MEMORY;
		RETURN_IF_ERROR(SendResponse(client, msg, out_proxy));
	}
	else if (msg.CommandID() == Command_SetReloadPolicy) // SetReloadPolicy
	{
		OP_STATUS status = OpStatus::OK;
		SetReloadPolicyArg in;

		OpProtobufInstanceProxy in_proxy(SetReloadPolicyArg::GetMessageDescriptor(GetDescriptors()), &in);
		if (in_proxy.GetProtoMessage() == NULL)
			return OpStatus::ERR_NO_MEMORY;
		status = ParseMessage(client, msg, in_proxy);
		if (OpStatus::IsError(status))
		{
			if (GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if none was set by a parser
				RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetParseCommandMessageFailedText()));
			return status;
		}

		status = DoSetReloadPolicy(in);
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
	else if (msg.CommandID() == Command_SetResponseMode) // SetResponseMode
	{
		OP_STATUS status = OpStatus::OK;
		SetResponseModeArg in;

		OpProtobufInstanceProxy in_proxy(SetResponseModeArg::GetMessageDescriptor(GetDescriptors()), &in);
		if (in_proxy.GetProtoMessage() == NULL)
			return OpStatus::ERR_NO_MEMORY;
		status = ParseMessage(client, msg, in_proxy);
		if (OpStatus::IsError(status))
		{
			if (GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if none was set by a parser
				RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetParseCommandMessageFailedText()));
			return status;
		}

		status = DoSetResponseMode(in);
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
	else if (msg.CommandID() == Command_SetRequestMode) // SetRequestMode
	{
		OP_STATUS status = OpStatus::OK;
		SetRequestModeArg in;

		OpProtobufInstanceProxy in_proxy(SetRequestModeArg::GetMessageDescriptor(GetDescriptors()), &in);
		if (in_proxy.GetProtoMessage() == NULL)
			return OpStatus::ERR_NO_MEMORY;
		status = ParseMessage(client, msg, in_proxy);
		if (OpStatus::IsError(status))
		{
			if (GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if none was set by a parser
				RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetParseCommandMessageFailedText()));
			return status;
		}

		status = DoSetRequestMode(in);
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
	else if (msg.CommandID() == Command_AddHeaderOverrides) // AddHeaderOverrides
	{
		OP_STATUS status = OpStatus::OK;
		AddHeaderOverridesArg in;

		OpProtobufInstanceProxy in_proxy(AddHeaderOverridesArg::GetMessageDescriptor(GetDescriptors()), &in);
		if (in_proxy.GetProtoMessage() == NULL)
			return OpStatus::ERR_NO_MEMORY;
		status = ParseMessage(client, msg, in_proxy);
		if (OpStatus::IsError(status))
		{
			if (GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if none was set by a parser
				RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetParseCommandMessageFailedText()));
			return status;
		}

		status = DoAddHeaderOverrides(in);
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
	else if (msg.CommandID() == Command_RemoveHeaderOverrides) // RemoveHeaderOverrides
	{
		OP_STATUS status = OpStatus::OK;
		RemoveHeaderOverridesArg in;

		OpProtobufInstanceProxy in_proxy(RemoveHeaderOverridesArg::GetMessageDescriptor(GetDescriptors()), &in);
		if (in_proxy.GetProtoMessage() == NULL)
			return OpStatus::ERR_NO_MEMORY;
		status = ParseMessage(client, msg, in_proxy);
		if (OpStatus::IsError(status))
		{
			if (GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if none was set by a parser
				RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetParseCommandMessageFailedText()));
			return status;
		}

		status = DoRemoveHeaderOverrides(in);
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
	else if (msg.CommandID() == Command_ClearHeaderOverrides) // ClearHeaderOverrides
	{
		OP_STATUS status = OpStatus::OK;

		status = DoClearHeaderOverrides();
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
	else if (msg.CommandID() == Command_CreateRequest) // CreateRequest
	{
		OP_STATUS status = OpStatus::OK;
		CreateRequestArg in;
		ResourceID out;

		OpProtobufInstanceProxy in_proxy(CreateRequestArg::GetMessageDescriptor(GetDescriptors()), &in);
		if (in_proxy.GetProtoMessage() == NULL)
			return OpStatus::ERR_NO_MEMORY;
		status = ParseMessage(client, msg, in_proxy);
		if (OpStatus::IsError(status))
		{
			if (GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if none was set by a parser
				RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetParseCommandMessageFailedText()));
			return status;
		}

		status = DoCreateRequest(in, out);
		if (OpStatus::IsError(status))
		{
			if (GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if none was set by command
			RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetCommandExecutionFailedText()));
			return status;
		}

		OpProtobufInstanceProxy out_proxy(ResourceID::GetMessageDescriptor(GetDescriptors()), &out);
		if (out_proxy.GetProtoMessage() == NULL)
			return OpStatus::ERR_NO_MEMORY;
		RETURN_IF_ERROR(SendResponse(client, msg, out_proxy));
	}
	else if (msg.CommandID() == Command_ClearCache) // ClearCache
	{
		OP_STATUS status = OpStatus::OK;

		status = DoClearCache();
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
	else if (msg.CommandID() == Command_GetResourceID) // GetResourceID
	{
		OP_STATUS status = OpStatus::OK;
		GetResourceIDArg in;
		ResourceID out;

		OpProtobufInstanceProxy in_proxy(GetResourceIDArg::GetMessageDescriptor(GetDescriptors()), &in);
		if (in_proxy.GetProtoMessage() == NULL)
			return OpStatus::ERR_NO_MEMORY;
		status = ParseMessage(client, msg, in_proxy);
		if (OpStatus::IsError(status))
		{
			if (GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if none was set by a parser
				RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetParseCommandMessageFailedText()));
			return status;
		}

		status = DoGetResourceID(in, out);
		if (OpStatus::IsError(status))
		{
			if (GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if none was set by command
			RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetCommandExecutionFailedText()));
			return status;
		}

		OpProtobufInstanceProxy out_proxy(ResourceID::GetMessageDescriptor(GetDescriptors()), &out);
		if (out_proxy.GetProtoMessage() == NULL)
			return OpStatus::ERR_NO_MEMORY;
		RETURN_IF_ERROR(SendResponse(client, msg, out_proxy));
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
OpScopeResourceManager_SI::GetMessage(unsigned message_id) const
{
	Descriptors *descriptors = GetDescriptors();
	if (!descriptors)
		return NULL;
	return descriptors->Get(message_id);
}

OpScopeResourceManager_SI::Descriptors *
OpScopeResourceManager_SI::GetDescriptors() const
{
	Descriptors *d = g_scope_manager->GetDescriptorSet().resource_manager_;
	OP_ASSERT(d);
	return d;
}

/*virtual*/
unsigned
OpScopeResourceManager_SI::GetMessageCount() const
{
	return OpScopeResourceManager_Descriptors::_gen_Message_Count;
}

/*virtual*/
OpScopeService::MessageIDRange
OpScopeResourceManager_SI::GetMessageIDs() const
{
	unsigned start = OpScopeResourceManager_Descriptors::_gen_Message_Count > 0 ? 1 : 0;
	return MessageIDRange(start, start + OpScopeResourceManager_Descriptors::_gen_Message_Count);
}

/*virtual*/
OpScopeService::MessageRange
OpScopeResourceManager_SI::GetMessages() const
{
	unsigned start = OpScopeResourceManager_Descriptors::_gen_Message_Count > 0 ? 1 : 0;
	return MessageRange(this, start, start + OpScopeResourceManager_Descriptors::_gen_Message_Count);
}

/* virtual */
const char *
OpScopeResourceManager_SI::GetVersionString() const
{
	return "1.4";
}

/* virtual */
int
OpScopeResourceManager_SI::GetMajorVersion() const
{
	return 1;
}

/* virtual */
int
OpScopeResourceManager_SI::GetMinorVersion() const
{
	return 4;
}

/* virtual */
const char *
OpScopeResourceManager_SI::GetPatchVersion() const
{
	return "0";
}

OP_STATUS
OpScopeResourceManager_SI::SendOnUrlLoad(const UrlLoad &msg) // OnUrlLoad
{
	OpProtobufInstanceProxy proxy(UrlLoad::GetMessageDescriptor(GetDescriptors()), const_cast<UrlLoad *>(&msg));
	if (proxy.GetProtoMessage() == NULL)
		return OpStatus::ERR_NO_MEMORY;
	return SendEvent(proxy, Command_OnUrlLoad);
}


OP_STATUS
OpScopeResourceManager_SI::SendOnUrlFinished(const UrlFinished &msg) // OnUrlFinished
{
	OpProtobufInstanceProxy proxy(UrlFinished::GetMessageDescriptor(GetDescriptors()), const_cast<UrlFinished *>(&msg));
	if (proxy.GetProtoMessage() == NULL)
		return OpStatus::ERR_NO_MEMORY;
	return SendEvent(proxy, Command_OnUrlFinished);
}


OP_STATUS
OpScopeResourceManager_SI::SendOnUrlRedirect(const UrlRedirect &msg) // OnUrlRedirect
{
	OpProtobufInstanceProxy proxy(UrlRedirect::GetMessageDescriptor(GetDescriptors()), const_cast<UrlRedirect *>(&msg));
	if (proxy.GetProtoMessage() == NULL)
		return OpStatus::ERR_NO_MEMORY;
	return SendEvent(proxy, Command_OnUrlRedirect);
}


OP_STATUS
OpScopeResourceManager_SI::SendOnUrlUnload(const UrlUnload &msg) // OnUrlUnload
{
	OpProtobufInstanceProxy proxy(UrlUnload::GetMessageDescriptor(GetDescriptors()), const_cast<UrlUnload *>(&msg));
	if (proxy.GetProtoMessage() == NULL)
		return OpStatus::ERR_NO_MEMORY;
	return SendEvent(proxy, Command_OnUrlUnload);
}


OP_STATUS
OpScopeResourceManager_SI::SendOnRequest(const Request &msg) // OnRequest
{
	OpProtobufInstanceProxy proxy(Request::GetMessageDescriptor(GetDescriptors()), const_cast<Request *>(&msg));
	if (proxy.GetProtoMessage() == NULL)
		return OpStatus::ERR_NO_MEMORY;
	return SendEvent(proxy, Command_OnRequest);
}


OP_STATUS
OpScopeResourceManager_SI::SendOnRequestHeader(const RequestHeader &msg) // OnRequestHeader
{
	OpProtobufInstanceProxy proxy(RequestHeader::GetMessageDescriptor(GetDescriptors()), const_cast<RequestHeader *>(&msg));
	if (proxy.GetProtoMessage() == NULL)
		return OpStatus::ERR_NO_MEMORY;
	return SendEvent(proxy, Command_OnRequestHeader);
}


OP_STATUS
OpScopeResourceManager_SI::SendOnRequestFinished(const RequestFinished &msg) // OnRequestFinished
{
	OpProtobufInstanceProxy proxy(RequestFinished::GetMessageDescriptor(GetDescriptors()), const_cast<RequestFinished *>(&msg));
	if (proxy.GetProtoMessage() == NULL)
		return OpStatus::ERR_NO_MEMORY;
	return SendEvent(proxy, Command_OnRequestFinished);
}


OP_STATUS
OpScopeResourceManager_SI::SendOnRequestRetry(const RequestRetry &msg) // OnRequestRetry
{
	OpProtobufInstanceProxy proxy(RequestRetry::GetMessageDescriptor(GetDescriptors()), const_cast<RequestRetry *>(&msg));
	if (proxy.GetProtoMessage() == NULL)
		return OpStatus::ERR_NO_MEMORY;
	return SendEvent(proxy, Command_OnRequestRetry);
}


OP_STATUS
OpScopeResourceManager_SI::SendOnResponse(const Response &msg) // OnResponse
{
	OpProtobufInstanceProxy proxy(Response::GetMessageDescriptor(GetDescriptors()), const_cast<Response *>(&msg));
	if (proxy.GetProtoMessage() == NULL)
		return OpStatus::ERR_NO_MEMORY;
	return SendEvent(proxy, Command_OnResponse);
}


OP_STATUS
OpScopeResourceManager_SI::SendOnResponseHeader(const ResponseHeader &msg) // OnResponseHeader
{
	OpProtobufInstanceProxy proxy(ResponseHeader::GetMessageDescriptor(GetDescriptors()), const_cast<ResponseHeader *>(&msg));
	if (proxy.GetProtoMessage() == NULL)
		return OpStatus::ERR_NO_MEMORY;
	return SendEvent(proxy, Command_OnResponseHeader);
}


OP_STATUS
OpScopeResourceManager_SI::SendOnResponseFinished(const ResponseFinished &msg) // OnResponseFinished
{
	OpProtobufInstanceProxy proxy(ResponseFinished::GetMessageDescriptor(GetDescriptors()), const_cast<ResponseFinished *>(&msg));
	if (proxy.GetProtoMessage() == NULL)
		return OpStatus::ERR_NO_MEMORY;
	return SendEvent(proxy, Command_OnResponseFinished);
}


OP_STATUS
OpScopeResourceManager_SI::SendOnDnsLookupStarted(const DnsLookupStarted &msg) // OnDnsLookupStarted
{
	OpProtobufInstanceProxy proxy(DnsLookupStarted::GetMessageDescriptor(GetDescriptors()), const_cast<DnsLookupStarted *>(&msg));
	if (proxy.GetProtoMessage() == NULL)
		return OpStatus::ERR_NO_MEMORY;
	return SendEvent(proxy, Command_OnDnsLookupStarted);
}


OP_STATUS
OpScopeResourceManager_SI::SendOnDnsLookupFinished(const DnsLookupFinished &msg) // OnDnsLookupFinished
{
	OpProtobufInstanceProxy proxy(DnsLookupFinished::GetMessageDescriptor(GetDescriptors()), const_cast<DnsLookupFinished *>(&msg));
	if (proxy.GetProtoMessage() == NULL)
		return OpStatus::ERR_NO_MEMORY;
	return SendEvent(proxy, Command_OnDnsLookupFinished);
}

// Enum introspection: BEGIN

/*virtual*/
OpScopeService::EnumIDRange
OpScopeResourceManager_SI::GetEnumIDs() const
{
	Descriptors *descriptors = GetDescriptors();
	return EnumIDRange(descriptors ? descriptors->enum_id_list : NULL, OpScopeResourceManager_Descriptors::_gen_Enum_Count);
}

/*virtual*/
unsigned
OpScopeResourceManager_SI::GetEnumCount() const
{
	return OpScopeResourceManager_Descriptors::_gen_Enum_Count;
}

/*virtual*/
BOOL
OpScopeResourceManager_SI::HasEnum(unsigned enum_id) const
{
	switch (enum_id)
	{
		case OpScopeResourceManager_Descriptors::_gen_EnumID_ContentMode_Transport:
		case OpScopeResourceManager_Descriptors::_gen_EnumID_ReloadPolicy:
		case OpScopeResourceManager_Descriptors::_gen_EnumID_CreateRequestArg_HeaderPolicy:
		case OpScopeResourceManager_Descriptors::_gen_EnumID_LoadOrigin:
		case OpScopeResourceManager_Descriptors::_gen_EnumID_UrlLoad_URLType:
		case OpScopeResourceManager_Descriptors::_gen_EnumID_UrlFinished_Result:
		case OpScopeResourceManager_Descriptors::_gen_EnumID_DnsLookupFinished_Status:
			return TRUE;
	}
	return FALSE;
}

/*virtual*/
OP_STATUS
OpScopeResourceManager_SI::GetEnum(unsigned enum_id, const uni_char *&name, unsigned &value_count) const
{
	switch (enum_id)
	{
		// ContentMode_Transport
		case OpScopeResourceManager_Descriptors::_gen_EnumID_ContentMode_Transport:
			name = UNI_L("Transport");
			value_count = OpScopeResourceManager_Descriptors::_gen_EnumValueCount_ContentMode_Transport;
			return OpStatus::OK;
		// ReloadPolicy
		case OpScopeResourceManager_Descriptors::_gen_EnumID_ReloadPolicy:
			name = UNI_L("ReloadPolicy");
			value_count = OpScopeResourceManager_Descriptors::_gen_EnumValueCount_ReloadPolicy;
			return OpStatus::OK;
		// CreateRequestArg_HeaderPolicy
		case OpScopeResourceManager_Descriptors::_gen_EnumID_CreateRequestArg_HeaderPolicy:
			name = UNI_L("HeaderPolicy");
			value_count = OpScopeResourceManager_Descriptors::_gen_EnumValueCount_CreateRequestArg_HeaderPolicy;
			return OpStatus::OK;
		// LoadOrigin
		case OpScopeResourceManager_Descriptors::_gen_EnumID_LoadOrigin:
			name = UNI_L("LoadOrigin");
			value_count = OpScopeResourceManager_Descriptors::_gen_EnumValueCount_LoadOrigin;
			return OpStatus::OK;
		// UrlLoad_URLType
		case OpScopeResourceManager_Descriptors::_gen_EnumID_UrlLoad_URLType:
			name = UNI_L("URLType");
			value_count = OpScopeResourceManager_Descriptors::_gen_EnumValueCount_UrlLoad_URLType;
			return OpStatus::OK;
		// UrlFinished_Result
		case OpScopeResourceManager_Descriptors::_gen_EnumID_UrlFinished_Result:
			name = UNI_L("Result");
			value_count = OpScopeResourceManager_Descriptors::_gen_EnumValueCount_UrlFinished_Result;
			return OpStatus::OK;
		// DnsLookupFinished_Status
		case OpScopeResourceManager_Descriptors::_gen_EnumID_DnsLookupFinished_Status:
			name = UNI_L("Status");
			value_count = OpScopeResourceManager_Descriptors::_gen_EnumValueCount_DnsLookupFinished_Status;
			return OpStatus::OK;
	}
	return OpStatus::ERR_NO_SUCH_RESOURCE;
}

/*virtual*/
OP_STATUS
OpScopeResourceManager_SI::GetEnumValue(unsigned enum_id, unsigned idx, const uni_char *&value_name, unsigned &value_number) const
{
	switch (enum_id)
	{
		// ContentMode_Transport
		case OpScopeResourceManager_Descriptors::_gen_EnumID_ContentMode_Transport:
		{
			if (idx > OpScopeResourceManager_Descriptors::_gen_EnumValueCount_ContentMode_Transport)
				return OpStatus::ERR_OUT_OF_RANGE;
			// Values for ContentMode_Transport
			const unsigned enum_numbers[] = {
				  1
				, 2
				, 3
				, 4
			}; // ARRAY OK 2010-04-14 jborsodi
			const unsigned name_offsets[] = {
				  0
				, 7
				, 13
				, 22
			}; // ARRAY OK 2010-04-14 jborsodi
			const uni_char *names = UNI_L( "STRING\0BYTES\0DATA_URI\0OFF" );
			OP_ASSERT(idx < sizeof(name_offsets));
			OP_ASSERT(idx < sizeof(enum_numbers));
			value_name = names + name_offsets[idx];
			value_number = enum_numbers[idx];
			return OpStatus::OK;
		}

		// ReloadPolicy
		case OpScopeResourceManager_Descriptors::_gen_EnumID_ReloadPolicy:
		{
			if (idx > OpScopeResourceManager_Descriptors::_gen_EnumValueCount_ReloadPolicy)
				return OpStatus::ERR_OUT_OF_RANGE;
			// Values for ReloadPolicy
			const unsigned enum_numbers[] = {
				  1
				, 2
			}; // ARRAY OK 2010-04-14 jborsodi
			const unsigned name_offsets[] = {
				  0
				, 8
			}; // ARRAY OK 2010-04-14 jborsodi
			const uni_char *names = UNI_L( "DEFAULT\0NO_CACHE" );
			OP_ASSERT(idx < sizeof(name_offsets));
			OP_ASSERT(idx < sizeof(enum_numbers));
			value_name = names + name_offsets[idx];
			value_number = enum_numbers[idx];
			return OpStatus::OK;
		}

		// CreateRequestArg_HeaderPolicy
		case OpScopeResourceManager_Descriptors::_gen_EnumID_CreateRequestArg_HeaderPolicy:
		{
			if (idx > OpScopeResourceManager_Descriptors::_gen_EnumValueCount_CreateRequestArg_HeaderPolicy)
				return OpStatus::ERR_OUT_OF_RANGE;
			// Values for CreateRequestArg_HeaderPolicy
			const unsigned enum_numbers[] = {
				  1
				, 2
				, 3
			}; // ARRAY OK 2010-04-14 jborsodi
			const unsigned name_offsets[] = {
				  0
				, 7
				, 17
			}; // ARRAY OK 2010-04-14 jborsodi
			const uni_char *names = UNI_L( "NORMAL\0OVERWRITE\0REPLACE" );
			OP_ASSERT(idx < sizeof(name_offsets));
			OP_ASSERT(idx < sizeof(enum_numbers));
			value_name = names + name_offsets[idx];
			value_number = enum_numbers[idx];
			return OpStatus::OK;
		}

		// LoadOrigin
		case OpScopeResourceManager_Descriptors::_gen_EnumID_LoadOrigin:
		{
			if (idx > OpScopeResourceManager_Descriptors::_gen_EnumValueCount_LoadOrigin)
				return OpStatus::ERR_OUT_OF_RANGE;
			// Values for LoadOrigin
			const unsigned enum_numbers[] = {
				  1
			}; // ARRAY OK 2010-04-14 jborsodi
			const unsigned name_offsets[] = {
				  0
			}; // ARRAY OK 2010-04-14 jborsodi
			const uni_char *names = UNI_L( "XHR" );
			OP_ASSERT(idx < sizeof(name_offsets));
			OP_ASSERT(idx < sizeof(enum_numbers));
			value_name = names + name_offsets[idx];
			value_number = enum_numbers[idx];
			return OpStatus::OK;
		}

		// UrlLoad_URLType
		case OpScopeResourceManager_Descriptors::_gen_EnumID_UrlLoad_URLType:
		{
			if (idx > OpScopeResourceManager_Descriptors::_gen_EnumValueCount_UrlLoad_URLType)
				return OpStatus::ERR_OUT_OF_RANGE;
			// Values for UrlLoad_URLType
			const unsigned enum_numbers[] = {
				  0
				, 1
				, 2
				, 3
				, 4
				, 5
				, 6
				, 7
				, 8
				, 9
				, 10
				, 11
				, 12
				, 13
				, 14
				, 15
				, 16
				, 17
				, 18
				, 19
				, 21
				, 22
				, 23
				, 25
				, 26
				, 27
				, 28
				, 29
				, 30
				, 31
				, 32
				, 33
				, 34
				, 35
				, 36
				, 39
				, 40
				, 41
				, 42
				, 43
				, 44
				, 100
			}; // ARRAY OK 2010-04-14 jborsodi
			const unsigned name_offsets[] = {
				  0
				, 8
				, 13
				, 19
				, 24
				, 29
				, 33
				, 40
				, 45
				, 50
				, 56
				, 71
				, 87
				, 93
				, 104
				, 111
				, 118
				, 124
				, 135
				, 146
				, 153
				, 160
				, 167
				, 172
				, 178
				, 184
				, 190
				, 193
				, 200
				, 206
				, 210
				, 214
				, 219
				, 223
				, 227
				, 233
				, 247
				, 254
				, 265
				, 272
				, 283
				, 289
			}; // ARRAY OK 2010-04-14 jborsodi
			const uni_char *names = UNI_L( "UNKNOWN\0HTTP\0HTTPS\0FILE\0DATA\0FTP\0GOPHER\0WAIS\0NEWS\0SNEWS\0NEWSATTACHMENT\0SNEWSATTACHMENT\0EMAIL\0ATTACHMENT\0TELNET\0MAILTO\0OPERA\0JAVASCRIPT\0CONTENT_ID\0TN3270\0SOURCE\0CLIENT\0NNTP\0NNTPS\0SHARE\0GHTTP\0TV\0EDITED\0ERROR\0DVB\0TEL\0MAIL\0IRC\0SMS\0SMSTO\0CHAT_TRANSFER\0DEVICE\0MOUNTPOINT\0WIDGET\0OBMLSERVER\0UNITE\0INTERNAL" );
			OP_ASSERT(idx < sizeof(name_offsets));
			OP_ASSERT(idx < sizeof(enum_numbers));
			value_name = names + name_offsets[idx];
			value_number = enum_numbers[idx];
			return OpStatus::OK;
		}

		// UrlFinished_Result
		case OpScopeResourceManager_Descriptors::_gen_EnumID_UrlFinished_Result:
		{
			if (idx > OpScopeResourceManager_Descriptors::_gen_EnumValueCount_UrlFinished_Result)
				return OpStatus::ERR_OUT_OF_RANGE;
			// Values for UrlFinished_Result
			const unsigned enum_numbers[] = {
				  1
				, 2
				, 3
			}; // ARRAY OK 2010-04-14 jborsodi
			const unsigned name_offsets[] = {
				  0
				, 9
				, 16
			}; // ARRAY OK 2010-04-14 jborsodi
			const uni_char *names = UNI_L( "FINISHED\0FAILED\0STOPPED" );
			OP_ASSERT(idx < sizeof(name_offsets));
			OP_ASSERT(idx < sizeof(enum_numbers));
			value_name = names + name_offsets[idx];
			value_number = enum_numbers[idx];
			return OpStatus::OK;
		}

		// DnsLookupFinished_Status
		case OpScopeResourceManager_Descriptors::_gen_EnumID_DnsLookupFinished_Status:
		{
			if (idx > OpScopeResourceManager_Descriptors::_gen_EnumValueCount_DnsLookupFinished_Status)
				return OpStatus::ERR_OUT_OF_RANGE;
			// Values for DnsLookupFinished_Status
			const unsigned enum_numbers[] = {
				  1
				, 2
				, 3
				, 4
				, 5
				, 6
				, 7
				, 8
			}; // ARRAY OK 2010-04-14 jborsodi
			const unsigned name_offsets[] = {
				  0
				, 17
				, 31
				, 54
				, 64
				, 78
				, 105
				, 121
			}; // ARRAY OK 2010-04-14 jborsodi
			const uni_char *names = UNI_L( "NETWORK_NO_ERROR\0ERROR_HANDLED\0HOST_ADDRESS_NOT_FOUND\0TIMED_OUT\0NETWORK_ERROR\0INTERNET_CONNECTION_CLOSED\0OUT_OF_COVERAGE\0OUT_OF_MEMORY" );
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

#endif // SCOPE_RESOURCE_MANAGER
