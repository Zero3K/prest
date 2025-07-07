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

#ifdef SCOPE_DOCUMENT_MANAGER

#include "modules/scope/src/generated/g_scope_document_manager_interface.h"

// BEGIN: OpScopeDocumentManager_Descriptors

OpScopeDocumentManager_Descriptors::OpScopeDocumentManager_Descriptors()
{
	for (unsigned i = 0; i < _gen_Message_Count; ++i)
	{
		message_list[i] = NULL;
	}
}

OpScopeDocumentManager_Descriptors::~OpScopeDocumentManager_Descriptors()
{
	for (unsigned i = 0; i < _gen_Message_Count; ++i)
	{
		OP_DELETE(message_list[i]);
	}
}

OP_STATUS
OpScopeDocumentManager_Descriptors::Construct()
{
	enum_id_list[0] = _gen_EnumID_DocumentEventType;
	return OpStatus::OK;
}

const OpProtobufMessage *
OpScopeDocumentManager_Descriptors::Get(unsigned id) const
{
	OpScopeDocumentManager_Descriptors *descriptors = const_cast<OpScopeDocumentManager_Descriptors *>(this);
	switch (id)
	{
	case _gen_MsgID_about_to_load_document_:
		return OpScopeDocumentManager_MessageSet::AboutToLoadDocument::GetMessageDescriptor(descriptors);

	case _gen_MsgID_document_:
		return OpScopeDocumentManager_MessageSet::Document::GetMessageDescriptor(descriptors);

	case _gen_MsgID_document_event_:
		return OpScopeDocumentManager_MessageSet::DocumentEvent::GetMessageDescriptor(descriptors);

	case _gen_MsgID_document_list_:
		return OpScopeDocumentManager_MessageSet::DocumentList::GetMessageDescriptor(descriptors);

	case _gen_MsgID_document_loaded_:
		return OpScopeDocumentManager_MessageSet::DocumentLoaded::GetMessageDescriptor(descriptors);

	case _gen_MsgID_page_text_document_text_:
		return OpScopeDocumentManager_MessageSet::PageText_DocumentText::GetMessageDescriptor(descriptors);

	case _gen_MsgID_get_highlights_arg_:
		return OpScopeDocumentManager_MessageSet::GetHighlightsArg::GetMessageDescriptor(descriptors);

	case _gen_MsgID_get_page_text_arg_:
		return OpScopeDocumentManager_MessageSet::GetPageTextArg::GetMessageDescriptor(descriptors);

	case _gen_MsgID_highlight_:
		return OpScopeDocumentManager_MessageSet::Highlight::GetMessageDescriptor(descriptors);

	case _gen_MsgID_highlight_list_:
		return OpScopeDocumentManager_MessageSet::HighlightList::GetMessageDescriptor(descriptors);

	case _gen_MsgID_list_documents_arg_:
		return OpScopeDocumentManager_MessageSet::ListDocumentsArg::GetMessageDescriptor(descriptors);

	case _gen_MsgID_load_document_arg_:
		return OpScopeDocumentManager_MessageSet::LoadDocumentArg::GetMessageDescriptor(descriptors);

	case _gen_MsgID_node_:
		return OpScopeDocumentManager_MessageSet::Node::GetMessageDescriptor(descriptors);

	case _gen_MsgID_page_text_:
		return OpScopeDocumentManager_MessageSet::PageText::GetMessageDescriptor(descriptors);

	case _gen_MsgID_reload_document_arg_:
		return OpScopeDocumentManager_MessageSet::ReloadDocumentArg::GetMessageDescriptor(descriptors);

	case _gen_MsgID_search_text_arg_:
		return OpScopeDocumentManager_MessageSet::SearchTextArg::GetMessageDescriptor(descriptors);

	default:
		return NULL;
	}
}


// END: OpScopeDocumentManager_Descriptors


// BEGIN: OpScopeDocumentManager_MessageSet

OpScopeDocumentManager_MessageSet::OpScopeDocumentManager_MessageSet()
{
}

/*virtual*/
OpScopeDocumentManager_MessageSet::~OpScopeDocumentManager_MessageSet()
{
}

// END: OpScopeDocumentManager_MessageSet

// BEGIN: Messages

//   BEGIN: Message: AboutToLoadDocument
/*static*/
const OpProtobufMessage *
OpScopeDocumentManager_MessageSet::AboutToLoadDocument::GetMessageDescriptor(OpScopeDocumentManager_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeDocumentManager_Descriptors::_gen_MessageOffs_about_to_load_document_];
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
						OpProtobufField::Required
						);
	fields[2] = OpProtobufField(
						OpProtobufFormat::Uint32,
						3,
						UNI_L("resourceID"),
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
						UNI_L("parentDocumentID"),
						OpProtobufField::Optional
						);
	fields[5] = OpProtobufField(
						OpProtobufFormat::Uint32,
						6,
						UNI_L("parentFrameID"),
						OpProtobufField::Optional
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpScopeDocumentManager_MessageSet::AboutToLoadDocument,
						_windowID
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpScopeDocumentManager_MessageSet::AboutToLoadDocument,
						_frameID
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						OpScopeDocumentManager_MessageSet::AboutToLoadDocument,
						_resourceID
						);
	offsets[3] = OP_PROTO_OFFSETOF(
						OpScopeDocumentManager_MessageSet::AboutToLoadDocument,
						_time
						);
	offsets[4] = OP_PROTO_OFFSETOF(
						OpScopeDocumentManager_MessageSet::AboutToLoadDocument,
						_parentDocumentID
						);
	offsets[5] = OP_PROTO_OFFSETOF(
						OpScopeDocumentManager_MessageSet::AboutToLoadDocument,
						_parentFrameID
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeDocumentManager_Descriptors::_gen_MsgID_about_to_load_document_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeDocumentManager_MessageSet::AboutToLoadDocument, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeDocumentManager_MessageSet::AboutToLoadDocument, encoded_size_),
					"AboutToLoadDocument",
					OpProtobufMessageVector<OpScopeDocumentManager_MessageSet::AboutToLoadDocument>::Make,
					OpProtobufMessageVector<OpScopeDocumentManager_MessageSet::AboutToLoadDocument>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: AboutToLoadDocument: Implementation


// END: AboutToLoadDocument: Implementation

//   END: Message: AboutToLoadDocument

//   BEGIN: Message: Document
/*static*/
const OpProtobufMessage *
OpScopeDocumentManager_MessageSet::Document::GetMessageDescriptor(OpScopeDocumentManager_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeDocumentManager_Descriptors::_gen_MessageOffs_document_];
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
						OpProtobufField::Required
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
						UNI_L("parentFrameID"),
						OpProtobufField::Optional
						);
	fields[4] = OpProtobufField(
						OpProtobufFormat::Uint32,
						5,
						UNI_L("parentDocumentID"),
						OpProtobufField::Optional
						);
	fields[5] = OpProtobufField(
						OpProtobufFormat::String,
						6,
						UNI_L("url"),
						OpProtobufField::Optional
						);
	fields[6] = OpProtobufField(
						OpProtobufFormat::Uint32,
						7,
						UNI_L("resourceID"),
						OpProtobufField::Optional
						);
	fields[7] = OpProtobufField(
						OpProtobufFormat::String,
						8,
						UNI_L("frameElementName"),
						OpProtobufField::Optional
						);
	fields[8] = OpProtobufField(
						OpProtobufFormat::String,
						9,
						UNI_L("frameElementID"),
						OpProtobufField::Optional
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpScopeDocumentManager_MessageSet::Document,
						_windowID
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpScopeDocumentManager_MessageSet::Document,
						_frameID
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						OpScopeDocumentManager_MessageSet::Document,
						_documentID
						);
	offsets[3] = OP_PROTO_OFFSETOF(
						OpScopeDocumentManager_MessageSet::Document,
						_parentFrameID
						);
	offsets[4] = OP_PROTO_OFFSETOF(
						OpScopeDocumentManager_MessageSet::Document,
						_parentDocumentID
						);
	offsets[5] = OP_PROTO_OFFSETOF(
						OpScopeDocumentManager_MessageSet::Document,
						_url
						);
	offsets[6] = OP_PROTO_OFFSETOF(
						OpScopeDocumentManager_MessageSet::Document,
						_resourceID
						);
	offsets[7] = OP_PROTO_OFFSETOF(
						OpScopeDocumentManager_MessageSet::Document,
						_frameElementName
						);
	offsets[8] = OP_PROTO_OFFSETOF(
						OpScopeDocumentManager_MessageSet::Document,
						_frameElementID
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeDocumentManager_Descriptors::_gen_MsgID_document_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeDocumentManager_MessageSet::Document, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeDocumentManager_MessageSet::Document, encoded_size_),
					"Document",
					OpProtobufMessageVector<OpScopeDocumentManager_MessageSet::Document>::Make,
					OpProtobufMessageVector<OpScopeDocumentManager_MessageSet::Document>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: Document: Implementation

// Setters

OpString &
OpScopeDocumentManager_MessageSet::Document::GetUrlRef() 
{
	has_bits_.Reference().SetBit(5);
	return _url;
}


OP_STATUS
OpScopeDocumentManager_MessageSet::Document::SetFrameElementName(const uni_char * v, int l) 
{
	has_bits_.Reference().SetBit(7);
	return _frameElementName.Set(v, l);
}


OP_STATUS
OpScopeDocumentManager_MessageSet::Document::SetFrameElementID(const uni_char * v, int l) 
{
	has_bits_.Reference().SetBit(8);
	return _frameElementID.Set(v, l);
}

// END: Document: Implementation

//   END: Message: Document

//   BEGIN: Message: DocumentEvent
/*static*/
const OpProtobufMessage *
OpScopeDocumentManager_MessageSet::DocumentEvent::GetMessageDescriptor(OpScopeDocumentManager_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeDocumentManager_Descriptors::_gen_MessageOffs_document_event_];
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
						OpProtobufField::Required
						);
	fields[2] = OpProtobufField(
						OpProtobufFormat::Uint32,
						3,
						UNI_L("documentID"),
						OpProtobufField::Required
						);
	fields[3] = OpProtobufField(
						OpProtobufFormat::Uint32,
						4,
						UNI_L("resourceID"),
						OpProtobufField::Required
						);
	fields[4] = OpProtobufField(
						OpProtobufFormat::Int32,
						5,
						UNI_L("eventType"),
						OpProtobufField::Required
						, NULL // const OpProtobufMessage *message
						, 0 // int message_id
						, OpScopeDocumentManager_Descriptors::_gen_EnumID_DocumentEventType // unsigned enum_id
						);
	fields[5] = OpProtobufField(
						OpProtobufFormat::Double,
						6,
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
						OpScopeDocumentManager_MessageSet::DocumentEvent,
						_windowID
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpScopeDocumentManager_MessageSet::DocumentEvent,
						_frameID
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						OpScopeDocumentManager_MessageSet::DocumentEvent,
						_documentID
						);
	offsets[3] = OP_PROTO_OFFSETOF(
						OpScopeDocumentManager_MessageSet::DocumentEvent,
						_resourceID
						);
	offsets[4] = OP_PROTO_OFFSETOF(
						OpScopeDocumentManager_MessageSet::DocumentEvent,
						_eventType
						);
	offsets[5] = OP_PROTO_OFFSETOF(
						OpScopeDocumentManager_MessageSet::DocumentEvent,
						_time
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeDocumentManager_Descriptors::_gen_MsgID_document_event_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeDocumentManager_MessageSet::DocumentEvent, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeDocumentManager_MessageSet::DocumentEvent, encoded_size_),
					"DocumentEvent",
					OpProtobufMessageVector<OpScopeDocumentManager_MessageSet::DocumentEvent>::Make,
					OpProtobufMessageVector<OpScopeDocumentManager_MessageSet::DocumentEvent>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: DocumentEvent: Implementation

// Setters

void
OpScopeDocumentManager_MessageSet::DocumentEvent::SetEventType(OpScopeDocumentManager_MessageSet::DocumentEventType v) 
{
	_eventType = static_cast<OpScopeDocumentManager_MessageSet::DocumentEventType>(v);
}

// END: DocumentEvent: Implementation

//   END: Message: DocumentEvent

//   BEGIN: Message: DocumentList
/*static*/
const OpProtobufMessage *
OpScopeDocumentManager_MessageSet::DocumentList::GetMessageDescriptor(OpScopeDocumentManager_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeDocumentManager_Descriptors::_gen_MessageOffs_document_list_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Message,
						1,
						UNI_L("documentList"),
						OpProtobufField::Repeated
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpScopeDocumentManager_MessageSet::DocumentList,
						_documentList
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeDocumentManager_Descriptors::_gen_MsgID_document_list_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeDocumentManager_MessageSet::DocumentList, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeDocumentManager_MessageSet::DocumentList, encoded_size_),
					"DocumentList",
					OpProtobufMessageVector<OpScopeDocumentManager_MessageSet::DocumentList>::Make,
					OpProtobufMessageVector<OpScopeDocumentManager_MessageSet::DocumentList>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	fields[0].SetMessage(Document::GetMessageDescriptor(descriptors));

	return message;
}

// BEGIN: DocumentList: Implementation

// Setters

OpProtobufMessageVector<OpScopeDocumentManager_MessageSet::Document> &
OpScopeDocumentManager_MessageSet::DocumentList::GetDocumentListRef() 
{
	has_bits_.Reference().SetBit(0);
	return _documentList;
}


OpScopeDocumentManager_MessageSet::Document *
OpScopeDocumentManager_MessageSet::DocumentList::AppendNewDocumentList() 
{
	has_bits_.Reference().SetBit(0);
	OpAutoPtr<OpScopeDocumentManager_MessageSet::Document> tmp(OP_NEW(OpScopeDocumentManager_MessageSet::Document, ()));
	if (!tmp.get())
	    return NULL;
	RETURN_VALUE_IF_ERROR(_documentList.Add(tmp.get()), NULL);
	return tmp.release();
}

// END: DocumentList: Implementation

//   END: Message: DocumentList

//   BEGIN: Message: DocumentLoaded
/*static*/
const OpProtobufMessage *
OpScopeDocumentManager_MessageSet::DocumentLoaded::GetMessageDescriptor(OpScopeDocumentManager_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeDocumentManager_Descriptors::_gen_MessageOffs_document_loaded_];
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
						OpProtobufField::Required
						);
	fields[2] = OpProtobufField(
						OpProtobufFormat::Uint32,
						3,
						UNI_L("documentID"),
						OpProtobufField::Required
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpScopeDocumentManager_MessageSet::DocumentLoaded,
						_windowID
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpScopeDocumentManager_MessageSet::DocumentLoaded,
						_frameID
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						OpScopeDocumentManager_MessageSet::DocumentLoaded,
						_documentID
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeDocumentManager_Descriptors::_gen_MsgID_document_loaded_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeDocumentManager_MessageSet::DocumentLoaded, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeDocumentManager_MessageSet::DocumentLoaded, encoded_size_),
					"DocumentLoaded",
					OpProtobufMessageVector<OpScopeDocumentManager_MessageSet::DocumentLoaded>::Make,
					OpProtobufMessageVector<OpScopeDocumentManager_MessageSet::DocumentLoaded>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: DocumentLoaded: Implementation


// END: DocumentLoaded: Implementation

//   END: Message: DocumentLoaded

//   BEGIN: Message: DocumentText
/*static*/
const OpProtobufMessage *
OpScopeDocumentManager_MessageSet::PageText_DocumentText::GetMessageDescriptor(OpScopeDocumentManager_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeDocumentManager_Descriptors::_gen_MessageOffs_page_text_document_text_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Uint32,
						1,
						UNI_L("frameID"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Uint32,
						2,
						UNI_L("documentID"),
						OpProtobufField::Required
						);
	fields[2] = OpProtobufField(
						OpProtobufFormat::String,
						3,
						UNI_L("text"),
						OpProtobufField::Required
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpScopeDocumentManager_MessageSet::PageText_DocumentText,
						_frameID
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpScopeDocumentManager_MessageSet::PageText_DocumentText,
						_documentID
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						OpScopeDocumentManager_MessageSet::PageText_DocumentText,
						_text
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeDocumentManager_Descriptors::_gen_MsgID_page_text_document_text_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeDocumentManager_MessageSet::PageText_DocumentText, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeDocumentManager_MessageSet::PageText_DocumentText, encoded_size_),
					"DocumentText",
					OpProtobufMessageVector<OpScopeDocumentManager_MessageSet::PageText_DocumentText>::Make,
					OpProtobufMessageVector<OpScopeDocumentManager_MessageSet::PageText_DocumentText>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	const OpProtobufMessage *parent = OpScopeDocumentManager_MessageSet::PageText::GetMessageDescriptor(descriptors);
	if (!parent)
		return NULL;
	message->SetParentId(parent->GetInternalId());

	return message;
}

// BEGIN: PageText.DocumentText: Implementation

// Setters

OP_STATUS
OpScopeDocumentManager_MessageSet::PageText_DocumentText::SetText(const uni_char * v, int l) 
{
	return _text.Set(v, l);
}

// END: PageText.DocumentText: Implementation

//   END: Message: DocumentText

//   BEGIN: Message: GetHighlightsArg
/*static*/
const OpProtobufMessage *
OpScopeDocumentManager_MessageSet::GetHighlightsArg::GetMessageDescriptor(OpScopeDocumentManager_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeDocumentManager_Descriptors::_gen_MessageOffs_get_highlights_arg_];
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

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpScopeDocumentManager_MessageSet::GetHighlightsArg,
						_windowID
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpScopeDocumentManager_MessageSet::GetHighlightsArg,
						_frameID
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeDocumentManager_Descriptors::_gen_MsgID_get_highlights_arg_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeDocumentManager_MessageSet::GetHighlightsArg, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeDocumentManager_MessageSet::GetHighlightsArg, encoded_size_),
					"GetHighlightsArg",
					OpProtobufMessageVector<OpScopeDocumentManager_MessageSet::GetHighlightsArg>::Make,
					OpProtobufMessageVector<OpScopeDocumentManager_MessageSet::GetHighlightsArg>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: GetHighlightsArg: Implementation


// END: GetHighlightsArg: Implementation

//   END: Message: GetHighlightsArg

//   BEGIN: Message: GetPageTextArg
/*static*/
const OpProtobufMessage *
OpScopeDocumentManager_MessageSet::GetPageTextArg::GetMessageDescriptor(OpScopeDocumentManager_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeDocumentManager_Descriptors::_gen_MessageOffs_get_page_text_arg_];
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

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpScopeDocumentManager_MessageSet::GetPageTextArg,
						_windowID
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpScopeDocumentManager_MessageSet::GetPageTextArg,
						_frameID
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeDocumentManager_Descriptors::_gen_MsgID_get_page_text_arg_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeDocumentManager_MessageSet::GetPageTextArg, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeDocumentManager_MessageSet::GetPageTextArg, encoded_size_),
					"GetPageTextArg",
					OpProtobufMessageVector<OpScopeDocumentManager_MessageSet::GetPageTextArg>::Make,
					OpProtobufMessageVector<OpScopeDocumentManager_MessageSet::GetPageTextArg>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: GetPageTextArg: Implementation


// END: GetPageTextArg: Implementation

//   END: Message: GetPageTextArg

//   BEGIN: Message: Highlight
/*static*/
const OpProtobufMessage *
OpScopeDocumentManager_MessageSet::Highlight::GetMessageDescriptor(OpScopeDocumentManager_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeDocumentManager_Descriptors::_gen_MessageOffs_highlight_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Uint32,
						1,
						UNI_L("frameID"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Message,
						2,
						UNI_L("node"),
						OpProtobufField::Optional
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpScopeDocumentManager_MessageSet::Highlight,
						_frameID
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpScopeDocumentManager_MessageSet::Highlight,
						_node
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeDocumentManager_Descriptors::_gen_MsgID_highlight_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeDocumentManager_MessageSet::Highlight, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeDocumentManager_MessageSet::Highlight, encoded_size_),
					"Highlight",
					OpProtobufMessageVector<OpScopeDocumentManager_MessageSet::Highlight>::Make,
					OpProtobufMessageVector<OpScopeDocumentManager_MessageSet::Highlight>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	fields[1].SetMessage(Node::GetMessageDescriptor(descriptors));

	return message;
}

// BEGIN: Highlight: Implementation

// Setters

void
OpScopeDocumentManager_MessageSet::Highlight::SetNode(OpScopeDocumentManager_MessageSet::Node * v) 
{
	has_bits_.Reference().SetBit(1);
	OP_DELETE(_node);
	_node = v;
}

// END: Highlight: Implementation

//   END: Message: Highlight

//   BEGIN: Message: HighlightList
/*static*/
const OpProtobufMessage *
OpScopeDocumentManager_MessageSet::HighlightList::GetMessageDescriptor(OpScopeDocumentManager_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeDocumentManager_Descriptors::_gen_MessageOffs_highlight_list_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Message,
						1,
						UNI_L("highlightList"),
						OpProtobufField::Repeated
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpScopeDocumentManager_MessageSet::HighlightList,
						_highlightList
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeDocumentManager_Descriptors::_gen_MsgID_highlight_list_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeDocumentManager_MessageSet::HighlightList, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeDocumentManager_MessageSet::HighlightList, encoded_size_),
					"HighlightList",
					OpProtobufMessageVector<OpScopeDocumentManager_MessageSet::HighlightList>::Make,
					OpProtobufMessageVector<OpScopeDocumentManager_MessageSet::HighlightList>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	fields[0].SetMessage(Highlight::GetMessageDescriptor(descriptors));

	return message;
}

// BEGIN: HighlightList: Implementation

// Setters

OpProtobufMessageVector<OpScopeDocumentManager_MessageSet::Highlight> &
OpScopeDocumentManager_MessageSet::HighlightList::GetHighlightListRef() 
{
	has_bits_.Reference().SetBit(0);
	return _highlightList;
}

// END: HighlightList: Implementation

//   END: Message: HighlightList

//   BEGIN: Message: ListDocumentsArg
/*static*/
const OpProtobufMessage *
OpScopeDocumentManager_MessageSet::ListDocumentsArg::GetMessageDescriptor(OpScopeDocumentManager_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeDocumentManager_Descriptors::_gen_MessageOffs_list_documents_arg_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Uint32,
						1,
						UNI_L("windowID"),
						OpProtobufField::Optional
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpScopeDocumentManager_MessageSet::ListDocumentsArg,
						_windowID
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeDocumentManager_Descriptors::_gen_MsgID_list_documents_arg_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeDocumentManager_MessageSet::ListDocumentsArg, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeDocumentManager_MessageSet::ListDocumentsArg, encoded_size_),
					"ListDocumentsArg",
					OpProtobufMessageVector<OpScopeDocumentManager_MessageSet::ListDocumentsArg>::Make,
					OpProtobufMessageVector<OpScopeDocumentManager_MessageSet::ListDocumentsArg>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: ListDocumentsArg: Implementation


// END: ListDocumentsArg: Implementation

//   END: Message: ListDocumentsArg

//   BEGIN: Message: LoadDocumentArg
/*static*/
const OpProtobufMessage *
OpScopeDocumentManager_MessageSet::LoadDocumentArg::GetMessageDescriptor(OpScopeDocumentManager_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeDocumentManager_Descriptors::_gen_MessageOffs_load_document_arg_];
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
						OpProtobufField::Required
						);
	fields[2] = OpProtobufField(
						OpProtobufFormat::String,
						3,
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
						OpScopeDocumentManager_MessageSet::LoadDocumentArg,
						_windowID
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpScopeDocumentManager_MessageSet::LoadDocumentArg,
						_frameID
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						OpScopeDocumentManager_MessageSet::LoadDocumentArg,
						_url
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeDocumentManager_Descriptors::_gen_MsgID_load_document_arg_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeDocumentManager_MessageSet::LoadDocumentArg, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeDocumentManager_MessageSet::LoadDocumentArg, encoded_size_),
					"LoadDocumentArg",
					OpProtobufMessageVector<OpScopeDocumentManager_MessageSet::LoadDocumentArg>::Make,
					OpProtobufMessageVector<OpScopeDocumentManager_MessageSet::LoadDocumentArg>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: LoadDocumentArg: Implementation

// Setters

OP_STATUS
OpScopeDocumentManager_MessageSet::LoadDocumentArg::SetUrl(const uni_char * v, int l) 
{
	return _url.Set(v, l);
}

// END: LoadDocumentArg: Implementation

//   END: Message: LoadDocumentArg

//   BEGIN: Message: Node
/*static*/
const OpProtobufMessage *
OpScopeDocumentManager_MessageSet::Node::GetMessageDescriptor(OpScopeDocumentManager_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeDocumentManager_Descriptors::_gen_MessageOffs_node_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::String,
						1,
						UNI_L("tag"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::String,
						2,
						UNI_L("id"),
						OpProtobufField::Optional
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpScopeDocumentManager_MessageSet::Node,
						_tag
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpScopeDocumentManager_MessageSet::Node,
						_id
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeDocumentManager_Descriptors::_gen_MsgID_node_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeDocumentManager_MessageSet::Node, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeDocumentManager_MessageSet::Node, encoded_size_),
					"Node",
					OpProtobufMessageVector<OpScopeDocumentManager_MessageSet::Node>::Make,
					OpProtobufMessageVector<OpScopeDocumentManager_MessageSet::Node>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: Node: Implementation

// Setters

OP_STATUS
OpScopeDocumentManager_MessageSet::Node::SetTag(const uni_char * v, int l) 
{
	return _tag.Set(v, l);
}


OP_STATUS
OpScopeDocumentManager_MessageSet::Node::SetId(const uni_char * v, int l) 
{
	has_bits_.Reference().SetBit(1);
	return _id.Set(v, l);
}

// END: Node: Implementation

//   END: Message: Node

//   BEGIN: Message: PageText
/*static*/
const OpProtobufMessage *
OpScopeDocumentManager_MessageSet::PageText::GetMessageDescriptor(OpScopeDocumentManager_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeDocumentManager_Descriptors::_gen_MessageOffs_page_text_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Message,
						1,
						UNI_L("documentTextList"),
						OpProtobufField::Repeated
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpScopeDocumentManager_MessageSet::PageText,
						_documentTextList
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeDocumentManager_Descriptors::_gen_MsgID_page_text_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeDocumentManager_MessageSet::PageText, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeDocumentManager_MessageSet::PageText, encoded_size_),
					"PageText",
					OpProtobufMessageVector<OpScopeDocumentManager_MessageSet::PageText>::Make,
					OpProtobufMessageVector<OpScopeDocumentManager_MessageSet::PageText>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	fields[0].SetMessage(PageText_DocumentText::GetMessageDescriptor(descriptors));

	return message;
}

// BEGIN: PageText: Implementation


// Setters

OpProtobufMessageVector<OpScopeDocumentManager_MessageSet::PageText_DocumentText> &
OpScopeDocumentManager_MessageSet::PageText::GetDocumentTextListRef() 
{
	has_bits_.Reference().SetBit(0);
	return _documentTextList;
}

// END: PageText: Implementation

//   END: Message: PageText

//   BEGIN: Message: ReloadDocumentArg
/*static*/
const OpProtobufMessage *
OpScopeDocumentManager_MessageSet::ReloadDocumentArg::GetMessageDescriptor(OpScopeDocumentManager_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeDocumentManager_Descriptors::_gen_MessageOffs_reload_document_arg_];
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
						OpProtobufField::Required
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpScopeDocumentManager_MessageSet::ReloadDocumentArg,
						_windowID
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpScopeDocumentManager_MessageSet::ReloadDocumentArg,
						_frameID
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeDocumentManager_Descriptors::_gen_MsgID_reload_document_arg_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeDocumentManager_MessageSet::ReloadDocumentArg, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeDocumentManager_MessageSet::ReloadDocumentArg, encoded_size_),
					"ReloadDocumentArg",
					OpProtobufMessageVector<OpScopeDocumentManager_MessageSet::ReloadDocumentArg>::Make,
					OpProtobufMessageVector<OpScopeDocumentManager_MessageSet::ReloadDocumentArg>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: ReloadDocumentArg: Implementation


// END: ReloadDocumentArg: Implementation

//   END: Message: ReloadDocumentArg

//   BEGIN: Message: SearchTextArg
/*static*/
const OpProtobufMessage *
OpScopeDocumentManager_MessageSet::SearchTextArg::GetMessageDescriptor(OpScopeDocumentManager_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeDocumentManager_Descriptors::_gen_MessageOffs_search_text_arg_];
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
						UNI_L("text"),
						OpProtobufField::Required
						);
	fields[2] = OpProtobufField(
						OpProtobufFormat::Uint32,
						3,
						UNI_L("frameID"),
						OpProtobufField::Optional
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpScopeDocumentManager_MessageSet::SearchTextArg,
						_windowID
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpScopeDocumentManager_MessageSet::SearchTextArg,
						_text
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						OpScopeDocumentManager_MessageSet::SearchTextArg,
						_frameID
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeDocumentManager_Descriptors::_gen_MsgID_search_text_arg_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeDocumentManager_MessageSet::SearchTextArg, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeDocumentManager_MessageSet::SearchTextArg, encoded_size_),
					"SearchTextArg",
					OpProtobufMessageVector<OpScopeDocumentManager_MessageSet::SearchTextArg>::Make,
					OpProtobufMessageVector<OpScopeDocumentManager_MessageSet::SearchTextArg>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: SearchTextArg: Implementation

// Setters

OP_STATUS
OpScopeDocumentManager_MessageSet::SearchTextArg::SetText(const uni_char * v, int l) 
{
	return _text.Set(v, l);
}

// END: SearchTextArg: Implementation

//   END: Message: SearchTextArg


// END: Messages


#include "modules/protobuf/src/protobuf_utils.h"
#include "modules/scope/src/scope_tp_message.h"
#include "modules/scope/src/scope_default_message.h"
#include "modules/scope/src/scope_manager.h"
#include "modules/scope/src/generated/g_scope_manager.h"
#include "modules/scope/src/generated/g_scope_document_manager_interface.h"
#include "modules/scope/src/scope_document_manager.h"

// BEGIN: OpScopeDocumentManager_SI::Descriptors

OpScopeDocumentManager_SI::Descriptors::Descriptors()
{
}

OpScopeDocumentManager_SI::Descriptors::~Descriptors()
{
}

OP_STATUS
OpScopeDocumentManager_SI::Descriptors::Construct()
{
    RETURN_IF_ERROR(OpScopeDocumentManager_Descriptors::Construct());
	// Initialize commands
	command_list[0] = OpScopeCommand("ListDocuments",
						Command_ListDocuments,
						OpScopeCommand::Type_Call,
						_gen_MsgID_list_documents_arg_,
						_gen_MsgID_document_list_
						);
	command_list[1] = OpScopeCommand("LoadDocument",
						Command_LoadDocument,
						OpScopeCommand::Type_Call,
						_gen_MsgID_load_document_arg_,
						_gen_void_MsgID
						);
	command_list[2] = OpScopeCommand("ReloadDocument",
						Command_ReloadDocument,
						OpScopeCommand::Type_Call,
						_gen_MsgID_reload_document_arg_,
						_gen_void_MsgID
						);
	command_list[3] = OpScopeCommand("OnAboutToLoadDocument",
						Command_OnAboutToLoadDocument,
						OpScopeCommand::Type_Event,
						_gen_void_MsgID,
						_gen_MsgID_about_to_load_document_
						);
	command_list[4] = OpScopeCommand("OnDocumentLoaded",
						Command_OnDocumentLoaded,
						OpScopeCommand::Type_Event,
						_gen_void_MsgID,
						_gen_MsgID_document_loaded_
						);
	command_list[5] = OpScopeCommand("SearchText",
						Command_SearchText,
						OpScopeCommand::Type_Call,
						_gen_MsgID_search_text_arg_,
						_gen_MsgID_highlight_list_
						);
	command_list[6] = OpScopeCommand("GetHighlights",
						Command_GetHighlights,
						OpScopeCommand::Type_Call,
						_gen_MsgID_get_highlights_arg_,
						_gen_MsgID_highlight_list_
						);
	command_list[7] = OpScopeCommand("GetPageText",
						Command_GetPageText,
						OpScopeCommand::Type_Call,
						_gen_MsgID_get_page_text_arg_,
						_gen_MsgID_page_text_
						);
	command_list[8] = OpScopeCommand("OnDocumentEvent",
						Command_OnDocumentEvent,
						OpScopeCommand::Type_Event,
						_gen_void_MsgID,
						_gen_MsgID_document_event_
						);
	return OpStatus::OK;
}

// END: OpScopeDocumentManager_SI::Descriptors
// Service implementation: BEGIN


// Service implementation

OpScopeDocumentManager_SI::OpScopeDocumentManager_SI(const uni_char* id, OpScopeServiceManager *manager, ControlType control)
		: OpScopeService(id == NULL ? UNI_L("document-manager") : id, manager, control)
{
}

/*virtual*/
OpScopeDocumentManager_SI::~OpScopeDocumentManager_SI()
{
}

/*virtual*/
int
OpScopeDocumentManager_SI::GetCommandCount() const
{
	return Command_Count;
}

/*virtual*/
OpScopeService::CommandRange
OpScopeDocumentManager_SI::GetCommands() const
{
	Descriptors *descriptors = g_scope_manager->GetDescriptorSet().document_manager_;
	OP_ASSERT(descriptors);
	return CommandRange(descriptors ? descriptors->command_list : NULL, Command_Count);
}

/*virtual*/
OP_STATUS
OpScopeDocumentManager_SI::DoReceive( OpScopeClient *client, const OpScopeTPMessage &msg )
{
	// Check for invalid request data
	if (msg.Status() != OpScopeTPMessage::OK) // All calls must have status OK
		return SetCommandError(OpScopeTPMessage::BadRequest, GetInvalidStatusFieldText());
	if (msg.ServiceName().Compare(GetName()) != 0) // Make sure the service name matches the one in the message
		return SetCommandError(OpScopeTPMessage::InternalError, GetIncorrectServiceText());

	if (msg.CommandID() == Command_ListDocuments) // ListDocuments
	{
		OP_STATUS status = OpStatus::OK;
		ListDocumentsArg in;
		DocumentList out;

		OpProtobufInstanceProxy in_proxy(ListDocumentsArg::GetMessageDescriptor(GetDescriptors()), &in);
		if (in_proxy.GetProtoMessage() == NULL)
			return OpStatus::ERR_NO_MEMORY;
		status = ParseMessage(client, msg, in_proxy);
		if (OpStatus::IsError(status))
		{
			if (GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if none was set by a parser
				RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetParseCommandMessageFailedText()));
			return status;
		}

		status = DoListDocuments(in, out);
		if (OpStatus::IsError(status))
		{
			if (GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if none was set by command
			RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetCommandExecutionFailedText()));
			return status;
		}

		OpProtobufInstanceProxy out_proxy(DocumentList::GetMessageDescriptor(GetDescriptors()), &out);
		if (out_proxy.GetProtoMessage() == NULL)
			return OpStatus::ERR_NO_MEMORY;
		RETURN_IF_ERROR(SendResponse(client, msg, out_proxy));
	}
	else if (msg.CommandID() == Command_LoadDocument) // LoadDocument
	{
		OP_STATUS status = OpStatus::OK;
		LoadDocumentArg in;

		OpProtobufInstanceProxy in_proxy(LoadDocumentArg::GetMessageDescriptor(GetDescriptors()), &in);
		if (in_proxy.GetProtoMessage() == NULL)
			return OpStatus::ERR_NO_MEMORY;
		status = ParseMessage(client, msg, in_proxy);
		if (OpStatus::IsError(status))
		{
			if (GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if none was set by a parser
				RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetParseCommandMessageFailedText()));
			return status;
		}

		status = DoLoadDocument(in);
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
	else if (msg.CommandID() == Command_ReloadDocument) // ReloadDocument
	{
		OP_STATUS status = OpStatus::OK;
		ReloadDocumentArg in;

		OpProtobufInstanceProxy in_proxy(ReloadDocumentArg::GetMessageDescriptor(GetDescriptors()), &in);
		if (in_proxy.GetProtoMessage() == NULL)
			return OpStatus::ERR_NO_MEMORY;
		status = ParseMessage(client, msg, in_proxy);
		if (OpStatus::IsError(status))
		{
			if (GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if none was set by a parser
				RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetParseCommandMessageFailedText()));
			return status;
		}

		status = DoReloadDocument(in);
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
	else if (msg.CommandID() == Command_SearchText) // SearchText
	{
		OP_STATUS status = OpStatus::OK;
		SearchTextArg in;
		HighlightList out;

		OpProtobufInstanceProxy in_proxy(SearchTextArg::GetMessageDescriptor(GetDescriptors()), &in);
		if (in_proxy.GetProtoMessage() == NULL)
			return OpStatus::ERR_NO_MEMORY;
		status = ParseMessage(client, msg, in_proxy);
		if (OpStatus::IsError(status))
		{
			if (GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if none was set by a parser
				RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetParseCommandMessageFailedText()));
			return status;
		}

		status = DoSearchText(in, out);
		if (OpStatus::IsError(status))
		{
			if (GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if none was set by command
			RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetCommandExecutionFailedText()));
			return status;
		}

		OpProtobufInstanceProxy out_proxy(HighlightList::GetMessageDescriptor(GetDescriptors()), &out);
		if (out_proxy.GetProtoMessage() == NULL)
			return OpStatus::ERR_NO_MEMORY;
		RETURN_IF_ERROR(SendResponse(client, msg, out_proxy));
	}
	else if (msg.CommandID() == Command_GetHighlights) // GetHighlights
	{
		OP_STATUS status = OpStatus::OK;
		GetHighlightsArg in;
		HighlightList out;

		OpProtobufInstanceProxy in_proxy(GetHighlightsArg::GetMessageDescriptor(GetDescriptors()), &in);
		if (in_proxy.GetProtoMessage() == NULL)
			return OpStatus::ERR_NO_MEMORY;
		status = ParseMessage(client, msg, in_proxy);
		if (OpStatus::IsError(status))
		{
			if (GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if none was set by a parser
				RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetParseCommandMessageFailedText()));
			return status;
		}

		status = DoGetHighlights(in, out);
		if (OpStatus::IsError(status))
		{
			if (GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if none was set by command
			RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetCommandExecutionFailedText()));
			return status;
		}

		OpProtobufInstanceProxy out_proxy(HighlightList::GetMessageDescriptor(GetDescriptors()), &out);
		if (out_proxy.GetProtoMessage() == NULL)
			return OpStatus::ERR_NO_MEMORY;
		RETURN_IF_ERROR(SendResponse(client, msg, out_proxy));
	}
	else if (msg.CommandID() == Command_GetPageText) // GetPageText
	{
		OP_STATUS status = OpStatus::OK;
		GetPageTextArg in;
		PageText out;

		OpProtobufInstanceProxy in_proxy(GetPageTextArg::GetMessageDescriptor(GetDescriptors()), &in);
		if (in_proxy.GetProtoMessage() == NULL)
			return OpStatus::ERR_NO_MEMORY;
		status = ParseMessage(client, msg, in_proxy);
		if (OpStatus::IsError(status))
		{
			if (GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if none was set by a parser
				RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetParseCommandMessageFailedText()));
			return status;
		}

		status = DoGetPageText(in, out);
		if (OpStatus::IsError(status))
		{
			if (GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if none was set by command
			RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetCommandExecutionFailedText()));
			return status;
		}

		OpProtobufInstanceProxy out_proxy(PageText::GetMessageDescriptor(GetDescriptors()), &out);
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
OpScopeDocumentManager_SI::GetMessage(unsigned message_id) const
{
	Descriptors *descriptors = GetDescriptors();
	if (!descriptors)
		return NULL;
	return descriptors->Get(message_id);
}

OpScopeDocumentManager_SI::Descriptors *
OpScopeDocumentManager_SI::GetDescriptors() const
{
	Descriptors *d = g_scope_manager->GetDescriptorSet().document_manager_;
	OP_ASSERT(d);
	return d;
}

/*virtual*/
unsigned
OpScopeDocumentManager_SI::GetMessageCount() const
{
	return OpScopeDocumentManager_Descriptors::_gen_Message_Count;
}

/*virtual*/
OpScopeService::MessageIDRange
OpScopeDocumentManager_SI::GetMessageIDs() const
{
	unsigned start = OpScopeDocumentManager_Descriptors::_gen_Message_Count > 0 ? 1 : 0;
	return MessageIDRange(start, start + OpScopeDocumentManager_Descriptors::_gen_Message_Count);
}

/*virtual*/
OpScopeService::MessageRange
OpScopeDocumentManager_SI::GetMessages() const
{
	unsigned start = OpScopeDocumentManager_Descriptors::_gen_Message_Count > 0 ? 1 : 0;
	return MessageRange(this, start, start + OpScopeDocumentManager_Descriptors::_gen_Message_Count);
}

/* virtual */
const char *
OpScopeDocumentManager_SI::GetVersionString() const
{
	return "1.2";
}

/* virtual */
int
OpScopeDocumentManager_SI::GetMajorVersion() const
{
	return 1;
}

/* virtual */
int
OpScopeDocumentManager_SI::GetMinorVersion() const
{
	return 2;
}

/* virtual */
const char *
OpScopeDocumentManager_SI::GetPatchVersion() const
{
	return "0";
}

OP_STATUS
OpScopeDocumentManager_SI::SendOnAboutToLoadDocument(const AboutToLoadDocument &msg) // OnAboutToLoadDocument
{
	OpProtobufInstanceProxy proxy(AboutToLoadDocument::GetMessageDescriptor(GetDescriptors()), const_cast<AboutToLoadDocument *>(&msg));
	if (proxy.GetProtoMessage() == NULL)
		return OpStatus::ERR_NO_MEMORY;
	return SendEvent(proxy, Command_OnAboutToLoadDocument);
}


OP_STATUS
OpScopeDocumentManager_SI::SendOnDocumentLoaded(const DocumentLoaded &msg) // OnDocumentLoaded
{
	OpProtobufInstanceProxy proxy(DocumentLoaded::GetMessageDescriptor(GetDescriptors()), const_cast<DocumentLoaded *>(&msg));
	if (proxy.GetProtoMessage() == NULL)
		return OpStatus::ERR_NO_MEMORY;
	return SendEvent(proxy, Command_OnDocumentLoaded);
}


OP_STATUS
OpScopeDocumentManager_SI::SendOnDocumentEvent(const DocumentEvent &msg) // OnDocumentEvent
{
	OpProtobufInstanceProxy proxy(DocumentEvent::GetMessageDescriptor(GetDescriptors()), const_cast<DocumentEvent *>(&msg));
	if (proxy.GetProtoMessage() == NULL)
		return OpStatus::ERR_NO_MEMORY;
	return SendEvent(proxy, Command_OnDocumentEvent);
}

// Enum introspection: BEGIN

/*virtual*/
OpScopeService::EnumIDRange
OpScopeDocumentManager_SI::GetEnumIDs() const
{
	Descriptors *descriptors = GetDescriptors();
	return EnumIDRange(descriptors ? descriptors->enum_id_list : NULL, OpScopeDocumentManager_Descriptors::_gen_Enum_Count);
}

/*virtual*/
unsigned
OpScopeDocumentManager_SI::GetEnumCount() const
{
	return OpScopeDocumentManager_Descriptors::_gen_Enum_Count;
}

/*virtual*/
BOOL
OpScopeDocumentManager_SI::HasEnum(unsigned enum_id) const
{
	switch (enum_id)
	{
		case OpScopeDocumentManager_Descriptors::_gen_EnumID_DocumentEventType:
			return TRUE;
	}
	return FALSE;
}

/*virtual*/
OP_STATUS
OpScopeDocumentManager_SI::GetEnum(unsigned enum_id, const uni_char *&name, unsigned &value_count) const
{
	switch (enum_id)
	{
		// DocumentEventType
		case OpScopeDocumentManager_Descriptors::_gen_EnumID_DocumentEventType:
			name = UNI_L("DocumentEventType");
			value_count = OpScopeDocumentManager_Descriptors::_gen_EnumValueCount_DocumentEventType;
			return OpStatus::OK;
	}
	return OpStatus::ERR_NO_SUCH_RESOURCE;
}

/*virtual*/
OP_STATUS
OpScopeDocumentManager_SI::GetEnumValue(unsigned enum_id, unsigned idx, const uni_char *&value_name, unsigned &value_number) const
{
	switch (enum_id)
	{
		// DocumentEventType
		case OpScopeDocumentManager_Descriptors::_gen_EnumID_DocumentEventType:
		{
			if (idx > OpScopeDocumentManager_Descriptors::_gen_EnumValueCount_DocumentEventType)
				return OpStatus::ERR_OUT_OF_RANGE;
			// Values for DocumentEventType
			const unsigned enum_numbers[] = {
				  0
				, 1
				, 2
				, 3
				, 4
				, 5
			}; // ARRAY OK 2010-04-14 jborsodi
			const unsigned name_offsets[] = {
				  0
				, 23
				, 44
				, 55
				, 64
				, 77
			}; // ARRAY OK 2010-04-14 jborsodi
			const uni_char *names = UNI_L( "DOMCONTENTLOADED_START\0DOMCONTENTLOADED_END\0LOAD_START\0LOAD_END\0UNLOAD_START\0UNLOAD_END" );
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

#endif // SCOPE_DOCUMENT_MANAGER
