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

#ifdef SCOPE_PROFILER

#include "modules/scope/src/generated/g_scope_profiler_interface.h"

// BEGIN: OpScopeProfiler_Descriptors

OpScopeProfiler_Descriptors::OpScopeProfiler_Descriptors()
{
	for (unsigned i = 0; i < _gen_Message_Count; ++i)
	{
		message_list[i] = NULL;
	}
}

OpScopeProfiler_Descriptors::~OpScopeProfiler_Descriptors()
{
	for (unsigned i = 0; i < _gen_Message_Count; ++i)
	{
		OP_DELETE(message_list[i]);
	}
}

OP_STATUS
OpScopeProfiler_Descriptors::Construct()
{
	enum_id_list[0] = _gen_EnumID_StartProfilerArg_StartMode;
	enum_id_list[1] = _gen_EnumID_GetEventsArg_Mode;
	enum_id_list[2] = _gen_EnumID_EventType;
	enum_id_list[3] = _gen_EnumID_ScriptThreadType;
	enum_id_list[4] = _gen_EnumID_ScriptType;
	return OpStatus::OK;
}

const OpProtobufMessage *
OpScopeProfiler_Descriptors::Get(unsigned id) const
{
	OpScopeProfiler_Descriptors *descriptors = const_cast<OpScopeProfiler_Descriptors *>(this);
	switch (id)
	{
	case _gen_MsgID_area_:
		return OpScopeProfiler_MessageSet::Area::GetMessageDescriptor(descriptors);

	case _gen_MsgID_css_parsing_event_:
		return OpScopeProfiler_MessageSet::CssParsingEvent::GetMessageDescriptor(descriptors);

	case _gen_MsgID_css_selector_matching_event_:
		return OpScopeProfiler_MessageSet::CssSelectorMatchingEvent::GetMessageDescriptor(descriptors);

	case _gen_MsgID_document_parsing_event_:
		return OpScopeProfiler_MessageSet::DocumentParsingEvent::GetMessageDescriptor(descriptors);

	case _gen_MsgID_event_:
		return OpScopeProfiler_MessageSet::Event::GetMessageDescriptor(descriptors);

	case _gen_MsgID_events_:
		return OpScopeProfiler_MessageSet::Events::GetMessageDescriptor(descriptors);

	case _gen_MsgID_get_events_arg_:
		return OpScopeProfiler_MessageSet::GetEventsArg::GetMessageDescriptor(descriptors);

	case _gen_MsgID_interval_:
		return OpScopeProfiler_MessageSet::Interval::GetMessageDescriptor(descriptors);

	case _gen_MsgID_paint_event_:
		return OpScopeProfiler_MessageSet::PaintEvent::GetMessageDescriptor(descriptors);

	case _gen_MsgID_release_session_arg_:
		return OpScopeProfiler_MessageSet::ReleaseSessionArg::GetMessageDescriptor(descriptors);

	case _gen_MsgID_script_compilation_event_:
		return OpScopeProfiler_MessageSet::ScriptCompilationEvent::GetMessageDescriptor(descriptors);

	case _gen_MsgID_script_thread_evaluation_event_:
		return OpScopeProfiler_MessageSet::ScriptThreadEvaluationEvent::GetMessageDescriptor(descriptors);

	case _gen_MsgID_session_:
		return OpScopeProfiler_MessageSet::Session::GetMessageDescriptor(descriptors);

	case _gen_MsgID_session_id_:
		return OpScopeProfiler_MessageSet::SessionID::GetMessageDescriptor(descriptors);

	case _gen_MsgID_start_profiler_arg_:
		return OpScopeProfiler_MessageSet::StartProfilerArg::GetMessageDescriptor(descriptors);

	case _gen_MsgID_stop_profiler_arg_:
		return OpScopeProfiler_MessageSet::StopProfilerArg::GetMessageDescriptor(descriptors);

	case _gen_MsgID_timeline_:
		return OpScopeProfiler_MessageSet::Timeline::GetMessageDescriptor(descriptors);

	default:
		return NULL;
	}
}


// END: OpScopeProfiler_Descriptors


// BEGIN: OpScopeProfiler_MessageSet

OpScopeProfiler_MessageSet::OpScopeProfiler_MessageSet()
{
}

/*virtual*/
OpScopeProfiler_MessageSet::~OpScopeProfiler_MessageSet()
{
}

// END: OpScopeProfiler_MessageSet

// BEGIN: Messages

//   BEGIN: Message: Area
/*static*/
const OpProtobufMessage *
OpScopeProfiler_MessageSet::Area::GetMessageDescriptor(OpScopeProfiler_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeProfiler_Descriptors::_gen_MessageOffs_area_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Int32,
						1,
						UNI_L("x"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Int32,
						2,
						UNI_L("y"),
						OpProtobufField::Required
						);
	fields[2] = OpProtobufField(
						OpProtobufFormat::Int32,
						3,
						UNI_L("w"),
						OpProtobufField::Required
						);
	fields[3] = OpProtobufField(
						OpProtobufFormat::Int32,
						4,
						UNI_L("h"),
						OpProtobufField::Required
						);
	fields[4] = OpProtobufField(
						OpProtobufFormat::Int32,
						5,
						UNI_L("ox"),
						OpProtobufField::Optional
						);
	fields[5] = OpProtobufField(
						OpProtobufFormat::Int32,
						6,
						UNI_L("oy"),
						OpProtobufField::Optional
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpScopeProfiler_MessageSet::Area,
						_x
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpScopeProfiler_MessageSet::Area,
						_y
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						OpScopeProfiler_MessageSet::Area,
						_w
						);
	offsets[3] = OP_PROTO_OFFSETOF(
						OpScopeProfiler_MessageSet::Area,
						_h
						);
	offsets[4] = OP_PROTO_OFFSETOF(
						OpScopeProfiler_MessageSet::Area,
						_ox
						);
	offsets[5] = OP_PROTO_OFFSETOF(
						OpScopeProfiler_MessageSet::Area,
						_oy
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeProfiler_Descriptors::_gen_MsgID_area_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeProfiler_MessageSet::Area, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeProfiler_MessageSet::Area, encoded_size_),
					"Area",
					OpProtobufMessageVector<OpScopeProfiler_MessageSet::Area>::Make,
					OpProtobufMessageVector<OpScopeProfiler_MessageSet::Area>::Destroy));
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

//   BEGIN: Message: CssParsingEvent
/*static*/
const OpProtobufMessage *
OpScopeProfiler_MessageSet::CssParsingEvent::GetMessageDescriptor(OpScopeProfiler_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeProfiler_Descriptors::_gen_MessageOffs_css_parsing_event_];
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
						OpScopeProfiler_MessageSet::CssParsingEvent,
						_url
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeProfiler_Descriptors::_gen_MsgID_css_parsing_event_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeProfiler_MessageSet::CssParsingEvent, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeProfiler_MessageSet::CssParsingEvent, encoded_size_),
					"CssParsingEvent",
					OpProtobufMessageVector<OpScopeProfiler_MessageSet::CssParsingEvent>::Make,
					OpProtobufMessageVector<OpScopeProfiler_MessageSet::CssParsingEvent>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: CssParsingEvent: Implementation

// Setters

OP_STATUS
OpScopeProfiler_MessageSet::CssParsingEvent::SetUrl(const uni_char * v, int l) 
{
	return _url.Set(v, l);
}

// END: CssParsingEvent: Implementation

//   END: Message: CssParsingEvent

//   BEGIN: Message: CssSelectorMatchingEvent
/*static*/
const OpProtobufMessage *
OpScopeProfiler_MessageSet::CssSelectorMatchingEvent::GetMessageDescriptor(OpScopeProfiler_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeProfiler_Descriptors::_gen_MessageOffs_css_selector_matching_event_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::String,
						1,
						UNI_L("selector"),
						OpProtobufField::Required
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpScopeProfiler_MessageSet::CssSelectorMatchingEvent,
						_selector
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeProfiler_Descriptors::_gen_MsgID_css_selector_matching_event_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeProfiler_MessageSet::CssSelectorMatchingEvent, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeProfiler_MessageSet::CssSelectorMatchingEvent, encoded_size_),
					"CssSelectorMatchingEvent",
					OpProtobufMessageVector<OpScopeProfiler_MessageSet::CssSelectorMatchingEvent>::Make,
					OpProtobufMessageVector<OpScopeProfiler_MessageSet::CssSelectorMatchingEvent>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: CssSelectorMatchingEvent: Implementation

// Setters

OP_STATUS
OpScopeProfiler_MessageSet::CssSelectorMatchingEvent::SetSelector(const uni_char * v, int l) 
{
	return _selector.Set(v, l);
}

// END: CssSelectorMatchingEvent: Implementation

//   END: Message: CssSelectorMatchingEvent

//   BEGIN: Message: DocumentParsingEvent
/*static*/
const OpProtobufMessage *
OpScopeProfiler_MessageSet::DocumentParsingEvent::GetMessageDescriptor(OpScopeProfiler_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeProfiler_Descriptors::_gen_MessageOffs_document_parsing_event_];
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
						OpScopeProfiler_MessageSet::DocumentParsingEvent,
						_url
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeProfiler_Descriptors::_gen_MsgID_document_parsing_event_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeProfiler_MessageSet::DocumentParsingEvent, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeProfiler_MessageSet::DocumentParsingEvent, encoded_size_),
					"DocumentParsingEvent",
					OpProtobufMessageVector<OpScopeProfiler_MessageSet::DocumentParsingEvent>::Make,
					OpProtobufMessageVector<OpScopeProfiler_MessageSet::DocumentParsingEvent>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: DocumentParsingEvent: Implementation

// Setters

OP_STATUS
OpScopeProfiler_MessageSet::DocumentParsingEvent::SetUrl(const uni_char * v, int l) 
{
	return _url.Set(v, l);
}

// END: DocumentParsingEvent: Implementation

//   END: Message: DocumentParsingEvent

//   BEGIN: Message: Event
/*static*/
const OpProtobufMessage *
OpScopeProfiler_MessageSet::Event::GetMessageDescriptor(OpScopeProfiler_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeProfiler_Descriptors::_gen_MessageOffs_event_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Int32,
						1,
						UNI_L("type"),
						OpProtobufField::Required
						, NULL // const OpProtobufMessage *message
						, 0 // int message_id
						, OpScopeProfiler_Descriptors::_gen_EnumID_EventType // unsigned enum_id
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Double,
						2,
						UNI_L("time"),
						OpProtobufField::Required
						);
	fields[2] = OpProtobufField(
						OpProtobufFormat::Double,
						3,
						UNI_L("overhead"),
						OpProtobufField::Required
						);
	fields[3] = OpProtobufField(
						OpProtobufFormat::Uint32,
						4,
						UNI_L("hits"),
						OpProtobufField::Required
						);
	fields[4] = OpProtobufField(
						OpProtobufFormat::Message,
						5,
						UNI_L("interval"),
						OpProtobufField::Optional
						);
	fields[5] = OpProtobufField(
						OpProtobufFormat::Uint32,
						6,
						UNI_L("eventID"),
						OpProtobufField::Optional
						);
	fields[6] = OpProtobufField(
						OpProtobufFormat::Uint32,
						7,
						UNI_L("parentEventID"),
						OpProtobufField::Optional
						);
	fields[7] = OpProtobufField(
						OpProtobufFormat::Uint32,
						8,
						UNI_L("childCount"),
						OpProtobufField::Optional
						);
	fields[8] = OpProtobufField(
						OpProtobufFormat::Double,
						9,
						UNI_L("aggregatedTime"),
						OpProtobufField::Optional
						);
	fields[9] = OpProtobufField(
						OpProtobufFormat::Double,
						10,
						UNI_L("aggregatedOverhead"),
						OpProtobufField::Optional
						);
	fields[10] = OpProtobufField(
						OpProtobufFormat::Message,
						11,
						UNI_L("cssSelectorMatching"),
						OpProtobufField::Optional
						);
	fields[11] = OpProtobufField(
						OpProtobufFormat::Message,
						12,
						UNI_L("scriptThreadEvaluation"),
						OpProtobufField::Optional
						);
	fields[12] = OpProtobufField(
						OpProtobufFormat::Message,
						13,
						UNI_L("documentParsing"),
						OpProtobufField::Optional
						);
	fields[13] = OpProtobufField(
						OpProtobufFormat::Message,
						14,
						UNI_L("cssParsing"),
						OpProtobufField::Optional
						);
	fields[14] = OpProtobufField(
						OpProtobufFormat::Message,
						15,
						UNI_L("scriptCompilation"),
						OpProtobufField::Optional
						);
	fields[15] = OpProtobufField(
						OpProtobufFormat::Message,
						16,
						UNI_L("paint"),
						OpProtobufField::Optional
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpScopeProfiler_MessageSet::Event,
						_type
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpScopeProfiler_MessageSet::Event,
						_time
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						OpScopeProfiler_MessageSet::Event,
						_overhead
						);
	offsets[3] = OP_PROTO_OFFSETOF(
						OpScopeProfiler_MessageSet::Event,
						_hits
						);
	offsets[4] = OP_PROTO_OFFSETOF(
						OpScopeProfiler_MessageSet::Event,
						_interval
						);
	offsets[5] = OP_PROTO_OFFSETOF(
						OpScopeProfiler_MessageSet::Event,
						_eventID
						);
	offsets[6] = OP_PROTO_OFFSETOF(
						OpScopeProfiler_MessageSet::Event,
						_parentEventID
						);
	offsets[7] = OP_PROTO_OFFSETOF(
						OpScopeProfiler_MessageSet::Event,
						_childCount
						);
	offsets[8] = OP_PROTO_OFFSETOF(
						OpScopeProfiler_MessageSet::Event,
						_aggregatedTime
						);
	offsets[9] = OP_PROTO_OFFSETOF(
						OpScopeProfiler_MessageSet::Event,
						_aggregatedOverhead
						);
	offsets[10] = OP_PROTO_OFFSETOF(
						OpScopeProfiler_MessageSet::Event,
						_cssSelectorMatching
						);
	offsets[11] = OP_PROTO_OFFSETOF(
						OpScopeProfiler_MessageSet::Event,
						_scriptThreadEvaluation
						);
	offsets[12] = OP_PROTO_OFFSETOF(
						OpScopeProfiler_MessageSet::Event,
						_documentParsing
						);
	offsets[13] = OP_PROTO_OFFSETOF(
						OpScopeProfiler_MessageSet::Event,
						_cssParsing
						);
	offsets[14] = OP_PROTO_OFFSETOF(
						OpScopeProfiler_MessageSet::Event,
						_scriptCompilation
						);
	offsets[15] = OP_PROTO_OFFSETOF(
						OpScopeProfiler_MessageSet::Event,
						_paint
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeProfiler_Descriptors::_gen_MsgID_event_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeProfiler_MessageSet::Event, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeProfiler_MessageSet::Event, encoded_size_),
					"Event",
					OpProtobufMessageVector<OpScopeProfiler_MessageSet::Event>::Make,
					OpProtobufMessageVector<OpScopeProfiler_MessageSet::Event>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	fields[4].SetMessage(Interval::GetMessageDescriptor(descriptors));
	fields[10].SetMessage(CssSelectorMatchingEvent::GetMessageDescriptor(descriptors));
	fields[11].SetMessage(ScriptThreadEvaluationEvent::GetMessageDescriptor(descriptors));
	fields[12].SetMessage(DocumentParsingEvent::GetMessageDescriptor(descriptors));
	fields[13].SetMessage(CssParsingEvent::GetMessageDescriptor(descriptors));
	fields[14].SetMessage(ScriptCompilationEvent::GetMessageDescriptor(descriptors));
	fields[15].SetMessage(PaintEvent::GetMessageDescriptor(descriptors));

	return message;
}

// BEGIN: Event: Implementation

// Setters

void
OpScopeProfiler_MessageSet::Event::SetType(OpScopeProfiler_MessageSet::EventType v) 
{
	_type = static_cast<OpScopeProfiler_MessageSet::EventType>(v);
}


void
OpScopeProfiler_MessageSet::Event::SetInterval(OpScopeProfiler_MessageSet::Interval * v) 
{
	has_bits_.Reference().SetBit(4);
	OP_DELETE(_interval);
	_interval = v;
}


void
OpScopeProfiler_MessageSet::Event::SetCssSelectorMatching(OpScopeProfiler_MessageSet::CssSelectorMatchingEvent * v) 
{
	has_bits_.Reference().SetBit(10);
	OP_DELETE(_cssSelectorMatching);
	_cssSelectorMatching = v;
}


void
OpScopeProfiler_MessageSet::Event::SetScriptThreadEvaluation(OpScopeProfiler_MessageSet::ScriptThreadEvaluationEvent * v) 
{
	has_bits_.Reference().SetBit(11);
	OP_DELETE(_scriptThreadEvaluation);
	_scriptThreadEvaluation = v;
}


void
OpScopeProfiler_MessageSet::Event::SetDocumentParsing(OpScopeProfiler_MessageSet::DocumentParsingEvent * v) 
{
	has_bits_.Reference().SetBit(12);
	OP_DELETE(_documentParsing);
	_documentParsing = v;
}


void
OpScopeProfiler_MessageSet::Event::SetCssParsing(OpScopeProfiler_MessageSet::CssParsingEvent * v) 
{
	has_bits_.Reference().SetBit(13);
	OP_DELETE(_cssParsing);
	_cssParsing = v;
}


void
OpScopeProfiler_MessageSet::Event::SetScriptCompilation(OpScopeProfiler_MessageSet::ScriptCompilationEvent * v) 
{
	has_bits_.Reference().SetBit(14);
	OP_DELETE(_scriptCompilation);
	_scriptCompilation = v;
}


void
OpScopeProfiler_MessageSet::Event::SetPaint(OpScopeProfiler_MessageSet::PaintEvent * v) 
{
	has_bits_.Reference().SetBit(15);
	OP_DELETE(_paint);
	_paint = v;
}

// END: Event: Implementation

//   END: Message: Event

//   BEGIN: Message: Events
/*static*/
const OpProtobufMessage *
OpScopeProfiler_MessageSet::Events::GetMessageDescriptor(OpScopeProfiler_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeProfiler_Descriptors::_gen_MessageOffs_events_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Message,
						1,
						UNI_L("interval"),
						OpProtobufField::Optional
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Message,
						2,
						UNI_L("eventList"),
						OpProtobufField::Repeated
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpScopeProfiler_MessageSet::Events,
						_interval
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpScopeProfiler_MessageSet::Events,
						_eventList
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeProfiler_Descriptors::_gen_MsgID_events_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeProfiler_MessageSet::Events, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeProfiler_MessageSet::Events, encoded_size_),
					"Events",
					OpProtobufMessageVector<OpScopeProfiler_MessageSet::Events>::Make,
					OpProtobufMessageVector<OpScopeProfiler_MessageSet::Events>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	fields[0].SetMessage(Interval::GetMessageDescriptor(descriptors));
	fields[1].SetMessage(Event::GetMessageDescriptor(descriptors));

	return message;
}

// BEGIN: Events: Implementation

// Setters

void
OpScopeProfiler_MessageSet::Events::SetInterval(OpScopeProfiler_MessageSet::Interval * v) 
{
	has_bits_.Reference().SetBit(0);
	OP_DELETE(_interval);
	_interval = v;
}


OpProtobufMessageVector<OpScopeProfiler_MessageSet::Event> &
OpScopeProfiler_MessageSet::Events::GetEventListRef() 
{
	has_bits_.Reference().SetBit(1);
	return _eventList;
}

// END: Events: Implementation

//   END: Message: Events

//   BEGIN: Message: GetEventsArg
/*static*/
const OpProtobufMessage *
OpScopeProfiler_MessageSet::GetEventsArg::GetMessageDescriptor(OpScopeProfiler_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeProfiler_Descriptors::_gen_MessageOffs_get_events_arg_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Uint32,
						1,
						UNI_L("sessionID"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Uint32,
						2,
						UNI_L("timelineID"),
						OpProtobufField::Required
						);
	fields[2] = OpProtobufField(
						OpProtobufFormat::Int32,
						3,
						UNI_L("mode"),
						OpProtobufField::Optional
						, NULL // const OpProtobufMessage *message
						, 0 // int message_id
						, OpScopeProfiler_Descriptors::_gen_EnumID_GetEventsArg_Mode // unsigned enum_id
						);
	fields[3] = OpProtobufField(
						OpProtobufFormat::Uint32,
						4,
						UNI_L("eventID"),
						OpProtobufField::Optional
						);
	fields[4] = OpProtobufField(
						OpProtobufFormat::Uint32,
						5,
						UNI_L("maxDepth"),
						OpProtobufField::Optional
						);
	fields[5] = OpProtobufField(
						OpProtobufFormat::Int32,
						6,
						UNI_L("eventTypeList"),
						OpProtobufField::Repeated
						, NULL // const OpProtobufMessage *message
						, 0 // int message_id
						, OpScopeProfiler_Descriptors::_gen_EnumID_EventType // unsigned enum_id
						);
	fields[6] = OpProtobufField(
						OpProtobufFormat::Message,
						7,
						UNI_L("interval"),
						OpProtobufField::Optional
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpScopeProfiler_MessageSet::GetEventsArg,
						_sessionID
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpScopeProfiler_MessageSet::GetEventsArg,
						_timelineID
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						OpScopeProfiler_MessageSet::GetEventsArg,
						_mode
						);
	offsets[3] = OP_PROTO_OFFSETOF(
						OpScopeProfiler_MessageSet::GetEventsArg,
						_eventID
						);
	offsets[4] = OP_PROTO_OFFSETOF(
						OpScopeProfiler_MessageSet::GetEventsArg,
						_maxDepth
						);
	offsets[5] = OP_PROTO_OFFSETOF(
						OpScopeProfiler_MessageSet::GetEventsArg,
						_eventTypeList
						);
	offsets[6] = OP_PROTO_OFFSETOF(
						OpScopeProfiler_MessageSet::GetEventsArg,
						_interval
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeProfiler_Descriptors::_gen_MsgID_get_events_arg_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeProfiler_MessageSet::GetEventsArg, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeProfiler_MessageSet::GetEventsArg, encoded_size_),
					"GetEventsArg",
					OpProtobufMessageVector<OpScopeProfiler_MessageSet::GetEventsArg>::Make,
					OpProtobufMessageVector<OpScopeProfiler_MessageSet::GetEventsArg>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	fields[6].SetMessage(Interval::GetMessageDescriptor(descriptors));

	return message;
}

// BEGIN: GetEventsArg: Implementation

// Enum value GetEventsArg.Mode.ALL
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const OpScopeProfiler_MessageSet::GetEventsArg_Mode OpScopeProfiler_MessageSet::GetEventsArg::MODE_ALL;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)


// Enum value GetEventsArg.Mode.REDUCE_UNIQUE_TYPES
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const OpScopeProfiler_MessageSet::GetEventsArg_Mode OpScopeProfiler_MessageSet::GetEventsArg::MODE_REDUCE_UNIQUE_TYPES;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)


// Enum value GetEventsArg.Mode.REDUCE_UNIQUE_EVENTS
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const OpScopeProfiler_MessageSet::GetEventsArg_Mode OpScopeProfiler_MessageSet::GetEventsArg::MODE_REDUCE_UNIQUE_EVENTS;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)


// Enum value GetEventsArg.Mode.REDUCE_ALL
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const OpScopeProfiler_MessageSet::GetEventsArg_Mode OpScopeProfiler_MessageSet::GetEventsArg::MODE_REDUCE_ALL;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)



// Setters

void
OpScopeProfiler_MessageSet::GetEventsArg::SetMode(OpScopeProfiler_MessageSet::GetEventsArg_Mode v) 
{
	has_bits_.Reference().SetBit(2);
	_mode = static_cast<OpScopeProfiler_MessageSet::GetEventsArg_Mode>(v);
}


OpValueVector<INT32> &
OpScopeProfiler_MessageSet::GetEventsArg::GetEventTypeListRef() 
{
	has_bits_.Reference().SetBit(5);
	return _eventTypeList;
}


OP_STATUS
OpScopeProfiler_MessageSet::GetEventsArg::AppendToEventTypeList(OpScopeProfiler_MessageSet::EventType v) 
{
	has_bits_.Reference().SetBit(5);
	return _eventTypeList.Add(static_cast<INT32>(v));
}


OP_STATUS
OpScopeProfiler_MessageSet::GetEventsArg::SetEventTypeListItem(UINT32 i, OpScopeProfiler_MessageSet::EventType v) 
{
	has_bits_.Reference().SetBit(5);
	OP_ASSERT(i < _eventTypeList.GetCount());
	return _eventTypeList.Replace(i, static_cast<INT32>(v));
}


void
OpScopeProfiler_MessageSet::GetEventsArg::SetInterval(OpScopeProfiler_MessageSet::Interval * v) 
{
	has_bits_.Reference().SetBit(6);
	OP_DELETE(_interval);
	_interval = v;
}

// END: GetEventsArg: Implementation

//   END: Message: GetEventsArg

//   BEGIN: Message: Interval
/*static*/
const OpProtobufMessage *
OpScopeProfiler_MessageSet::Interval::GetMessageDescriptor(OpScopeProfiler_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeProfiler_Descriptors::_gen_MessageOffs_interval_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Double,
						1,
						UNI_L("start"),
						OpProtobufField::Optional
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Double,
						2,
						UNI_L("end"),
						OpProtobufField::Optional
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpScopeProfiler_MessageSet::Interval,
						_start
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpScopeProfiler_MessageSet::Interval,
						_end
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeProfiler_Descriptors::_gen_MsgID_interval_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeProfiler_MessageSet::Interval, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeProfiler_MessageSet::Interval, encoded_size_),
					"Interval",
					OpProtobufMessageVector<OpScopeProfiler_MessageSet::Interval>::Make,
					OpProtobufMessageVector<OpScopeProfiler_MessageSet::Interval>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: Interval: Implementation


// END: Interval: Implementation

//   END: Message: Interval

//   BEGIN: Message: PaintEvent
/*static*/
const OpProtobufMessage *
OpScopeProfiler_MessageSet::PaintEvent::GetMessageDescriptor(OpScopeProfiler_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeProfiler_Descriptors::_gen_MessageOffs_paint_event_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Message,
						1,
						UNI_L("area"),
						OpProtobufField::Optional
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpScopeProfiler_MessageSet::PaintEvent,
						_area
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeProfiler_Descriptors::_gen_MsgID_paint_event_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeProfiler_MessageSet::PaintEvent, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeProfiler_MessageSet::PaintEvent, encoded_size_),
					"PaintEvent",
					OpProtobufMessageVector<OpScopeProfiler_MessageSet::PaintEvent>::Make,
					OpProtobufMessageVector<OpScopeProfiler_MessageSet::PaintEvent>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	fields[0].SetMessage(Area::GetMessageDescriptor(descriptors));

	return message;
}

// BEGIN: PaintEvent: Implementation

// Setters

void
OpScopeProfiler_MessageSet::PaintEvent::SetArea(OpScopeProfiler_MessageSet::Area * v) 
{
	has_bits_.Reference().SetBit(0);
	OP_DELETE(_area);
	_area = v;
}

// END: PaintEvent: Implementation

//   END: Message: PaintEvent

//   BEGIN: Message: ReleaseSessionArg
/*static*/
const OpProtobufMessage *
OpScopeProfiler_MessageSet::ReleaseSessionArg::GetMessageDescriptor(OpScopeProfiler_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeProfiler_Descriptors::_gen_MessageOffs_release_session_arg_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Uint32,
						1,
						UNI_L("sessionID"),
						OpProtobufField::Optional
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpScopeProfiler_MessageSet::ReleaseSessionArg,
						_sessionID
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeProfiler_Descriptors::_gen_MsgID_release_session_arg_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeProfiler_MessageSet::ReleaseSessionArg, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeProfiler_MessageSet::ReleaseSessionArg, encoded_size_),
					"ReleaseSessionArg",
					OpProtobufMessageVector<OpScopeProfiler_MessageSet::ReleaseSessionArg>::Make,
					OpProtobufMessageVector<OpScopeProfiler_MessageSet::ReleaseSessionArg>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: ReleaseSessionArg: Implementation


// END: ReleaseSessionArg: Implementation

//   END: Message: ReleaseSessionArg

//   BEGIN: Message: ScriptCompilationEvent
/*static*/
const OpProtobufMessage *
OpScopeProfiler_MessageSet::ScriptCompilationEvent::GetMessageDescriptor(OpScopeProfiler_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeProfiler_Descriptors::_gen_MessageOffs_script_compilation_event_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Int32,
						1,
						UNI_L("scriptType"),
						OpProtobufField::Required
						, NULL // const OpProtobufMessage *message
						, 0 // int message_id
						, OpScopeProfiler_Descriptors::_gen_EnumID_ScriptType // unsigned enum_id
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::String,
						2,
						UNI_L("url"),
						OpProtobufField::Optional
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpScopeProfiler_MessageSet::ScriptCompilationEvent,
						_scriptType
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpScopeProfiler_MessageSet::ScriptCompilationEvent,
						_url
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeProfiler_Descriptors::_gen_MsgID_script_compilation_event_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeProfiler_MessageSet::ScriptCompilationEvent, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeProfiler_MessageSet::ScriptCompilationEvent, encoded_size_),
					"ScriptCompilationEvent",
					OpProtobufMessageVector<OpScopeProfiler_MessageSet::ScriptCompilationEvent>::Make,
					OpProtobufMessageVector<OpScopeProfiler_MessageSet::ScriptCompilationEvent>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: ScriptCompilationEvent: Implementation

// Setters

void
OpScopeProfiler_MessageSet::ScriptCompilationEvent::SetScriptType(OpScopeProfiler_MessageSet::ScriptType v) 
{
	_scriptType = static_cast<OpScopeProfiler_MessageSet::ScriptType>(v);
}


OP_STATUS
OpScopeProfiler_MessageSet::ScriptCompilationEvent::SetUrl(const uni_char * v, int l) 
{
	has_bits_.Reference().SetBit(1);
	return _url.Set(v, l);
}

// END: ScriptCompilationEvent: Implementation

//   END: Message: ScriptCompilationEvent

//   BEGIN: Message: ScriptThreadEvaluationEvent
/*static*/
const OpProtobufMessage *
OpScopeProfiler_MessageSet::ScriptThreadEvaluationEvent::GetMessageDescriptor(OpScopeProfiler_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeProfiler_Descriptors::_gen_MessageOffs_script_thread_evaluation_event_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Int32,
						1,
						UNI_L("scriptThreadType"),
						OpProtobufField::Required
						, NULL // const OpProtobufMessage *message
						, 0 // int message_id
						, OpScopeProfiler_Descriptors::_gen_EnumID_ScriptThreadType // unsigned enum_id
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::String,
						2,
						UNI_L("eventName"),
						OpProtobufField::Optional
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpScopeProfiler_MessageSet::ScriptThreadEvaluationEvent,
						_scriptThreadType
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpScopeProfiler_MessageSet::ScriptThreadEvaluationEvent,
						_eventName
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeProfiler_Descriptors::_gen_MsgID_script_thread_evaluation_event_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeProfiler_MessageSet::ScriptThreadEvaluationEvent, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeProfiler_MessageSet::ScriptThreadEvaluationEvent, encoded_size_),
					"ScriptThreadEvaluationEvent",
					OpProtobufMessageVector<OpScopeProfiler_MessageSet::ScriptThreadEvaluationEvent>::Make,
					OpProtobufMessageVector<OpScopeProfiler_MessageSet::ScriptThreadEvaluationEvent>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: ScriptThreadEvaluationEvent: Implementation

// Setters

void
OpScopeProfiler_MessageSet::ScriptThreadEvaluationEvent::SetScriptThreadType(OpScopeProfiler_MessageSet::ScriptThreadType v) 
{
	_scriptThreadType = static_cast<OpScopeProfiler_MessageSet::ScriptThreadType>(v);
}


OpString &
OpScopeProfiler_MessageSet::ScriptThreadEvaluationEvent::GetEventNameRef() 
{
	has_bits_.Reference().SetBit(1);
	return _eventName;
}

// END: ScriptThreadEvaluationEvent: Implementation

//   END: Message: ScriptThreadEvaluationEvent

//   BEGIN: Message: Session
/*static*/
const OpProtobufMessage *
OpScopeProfiler_MessageSet::Session::GetMessageDescriptor(OpScopeProfiler_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeProfiler_Descriptors::_gen_MessageOffs_session_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Uint32,
						1,
						UNI_L("sessionID"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Uint32,
						2,
						UNI_L("windowID"),
						OpProtobufField::Optional
						);
	fields[2] = OpProtobufField(
						OpProtobufFormat::Message,
						3,
						UNI_L("timelineList"),
						OpProtobufField::Repeated
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpScopeProfiler_MessageSet::Session,
						_sessionID
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpScopeProfiler_MessageSet::Session,
						_windowID
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						OpScopeProfiler_MessageSet::Session,
						_timelineList
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeProfiler_Descriptors::_gen_MsgID_session_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeProfiler_MessageSet::Session, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeProfiler_MessageSet::Session, encoded_size_),
					"Session",
					OpProtobufMessageVector<OpScopeProfiler_MessageSet::Session>::Make,
					OpProtobufMessageVector<OpScopeProfiler_MessageSet::Session>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	fields[2].SetMessage(Timeline::GetMessageDescriptor(descriptors));

	return message;
}

// BEGIN: Session: Implementation

// Setters

OpProtobufMessageVector<OpScopeProfiler_MessageSet::Timeline> &
OpScopeProfiler_MessageSet::Session::GetTimelineListRef() 
{
	has_bits_.Reference().SetBit(2);
	return _timelineList;
}

// END: Session: Implementation

//   END: Message: Session

//   BEGIN: Message: SessionID
/*static*/
const OpProtobufMessage *
OpScopeProfiler_MessageSet::SessionID::GetMessageDescriptor(OpScopeProfiler_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeProfiler_Descriptors::_gen_MessageOffs_session_id_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Uint32,
						1,
						UNI_L("sessionID"),
						OpProtobufField::Required
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpScopeProfiler_MessageSet::SessionID,
						_sessionID
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeProfiler_Descriptors::_gen_MsgID_session_id_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeProfiler_MessageSet::SessionID, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeProfiler_MessageSet::SessionID, encoded_size_),
					"SessionID",
					OpProtobufMessageVector<OpScopeProfiler_MessageSet::SessionID>::Make,
					OpProtobufMessageVector<OpScopeProfiler_MessageSet::SessionID>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: SessionID: Implementation


// END: SessionID: Implementation

//   END: Message: SessionID

//   BEGIN: Message: StartProfilerArg
/*static*/
const OpProtobufMessage *
OpScopeProfiler_MessageSet::StartProfilerArg::GetMessageDescriptor(OpScopeProfiler_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeProfiler_Descriptors::_gen_MessageOffs_start_profiler_arg_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Int32,
						1,
						UNI_L("startMode"),
						OpProtobufField::Required
						, NULL // const OpProtobufMessage *message
						, 0 // int message_id
						, OpScopeProfiler_Descriptors::_gen_EnumID_StartProfilerArg_StartMode // unsigned enum_id
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Uint32,
						2,
						UNI_L("windowID"),
						OpProtobufField::Required
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpScopeProfiler_MessageSet::StartProfilerArg,
						_startMode
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpScopeProfiler_MessageSet::StartProfilerArg,
						_windowID
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeProfiler_Descriptors::_gen_MsgID_start_profiler_arg_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeProfiler_MessageSet::StartProfilerArg, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeProfiler_MessageSet::StartProfilerArg, encoded_size_),
					"StartProfilerArg",
					OpProtobufMessageVector<OpScopeProfiler_MessageSet::StartProfilerArg>::Make,
					OpProtobufMessageVector<OpScopeProfiler_MessageSet::StartProfilerArg>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: StartProfilerArg: Implementation

// Enum value StartProfilerArg.StartMode.IMMEDIATE
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const OpScopeProfiler_MessageSet::StartProfilerArg_StartMode OpScopeProfiler_MessageSet::StartProfilerArg::STARTMODE_IMMEDIATE;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)


// Enum value StartProfilerArg.StartMode.URL
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const OpScopeProfiler_MessageSet::StartProfilerArg_StartMode OpScopeProfiler_MessageSet::StartProfilerArg::STARTMODE_URL;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)



// Setters

void
OpScopeProfiler_MessageSet::StartProfilerArg::SetStartMode(OpScopeProfiler_MessageSet::StartProfilerArg_StartMode v) 
{
	_startMode = static_cast<OpScopeProfiler_MessageSet::StartProfilerArg_StartMode>(v);
}

// END: StartProfilerArg: Implementation

//   END: Message: StartProfilerArg

//   BEGIN: Message: StopProfilerArg
/*static*/
const OpProtobufMessage *
OpScopeProfiler_MessageSet::StopProfilerArg::GetMessageDescriptor(OpScopeProfiler_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeProfiler_Descriptors::_gen_MessageOffs_stop_profiler_arg_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Uint32,
						1,
						UNI_L("sessionID"),
						OpProtobufField::Required
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpScopeProfiler_MessageSet::StopProfilerArg,
						_sessionID
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeProfiler_Descriptors::_gen_MsgID_stop_profiler_arg_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeProfiler_MessageSet::StopProfilerArg, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeProfiler_MessageSet::StopProfilerArg, encoded_size_),
					"StopProfilerArg",
					OpProtobufMessageVector<OpScopeProfiler_MessageSet::StopProfilerArg>::Make,
					OpProtobufMessageVector<OpScopeProfiler_MessageSet::StopProfilerArg>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: StopProfilerArg: Implementation


// END: StopProfilerArg: Implementation

//   END: Message: StopProfilerArg

//   BEGIN: Message: Timeline
/*static*/
const OpProtobufMessage *
OpScopeProfiler_MessageSet::Timeline::GetMessageDescriptor(OpScopeProfiler_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeProfiler_Descriptors::_gen_MessageOffs_timeline_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Uint32,
						1,
						UNI_L("timelineID"),
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
						OpScopeProfiler_MessageSet::Timeline,
						_timelineID
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpScopeProfiler_MessageSet::Timeline,
						_frameID
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeProfiler_Descriptors::_gen_MsgID_timeline_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeProfiler_MessageSet::Timeline, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeProfiler_MessageSet::Timeline, encoded_size_),
					"Timeline",
					OpProtobufMessageVector<OpScopeProfiler_MessageSet::Timeline>::Make,
					OpProtobufMessageVector<OpScopeProfiler_MessageSet::Timeline>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: Timeline: Implementation


// END: Timeline: Implementation

//   END: Message: Timeline


// END: Messages


#include "modules/protobuf/src/protobuf_utils.h"
#include "modules/scope/src/scope_tp_message.h"
#include "modules/scope/src/scope_default_message.h"
#include "modules/scope/src/scope_manager.h"
#include "modules/scope/src/generated/g_scope_manager.h"
#include "modules/scope/src/generated/g_scope_profiler_interface.h"
#include "modules/scope/src/scope_profiler.h"

// BEGIN: OpScopeProfiler_SI::Descriptors

OpScopeProfiler_SI::Descriptors::Descriptors()
{
}

OpScopeProfiler_SI::Descriptors::~Descriptors()
{
}

OP_STATUS
OpScopeProfiler_SI::Descriptors::Construct()
{
    RETURN_IF_ERROR(OpScopeProfiler_Descriptors::Construct());
	// Initialize commands
	command_list[0] = OpScopeCommand("StartProfiler",
						Command_StartProfiler,
						OpScopeCommand::Type_Call,
						_gen_MsgID_start_profiler_arg_,
						_gen_MsgID_session_id_
						);
	command_list[1] = OpScopeCommand("StopProfiler",
						Command_StopProfiler,
						OpScopeCommand::Type_Call,
						_gen_MsgID_stop_profiler_arg_,
						_gen_MsgID_session_
						);
	command_list[2] = OpScopeCommand("GetEvents",
						Command_GetEvents,
						OpScopeCommand::Type_Call,
						_gen_MsgID_get_events_arg_,
						_gen_MsgID_events_
						);
	command_list[3] = OpScopeCommand("ReleaseSession",
						Command_ReleaseSession,
						OpScopeCommand::Type_Call,
						_gen_MsgID_release_session_arg_,
						_gen_void_MsgID
						);
	return OpStatus::OK;
}

// END: OpScopeProfiler_SI::Descriptors
// Service implementation: BEGIN


// Service implementation

OpScopeProfiler_SI::OpScopeProfiler_SI(const uni_char* id, OpScopeServiceManager *manager, ControlType control)
		: OpScopeService(id == NULL ? UNI_L("profiler") : id, manager, control)
{
}

/*virtual*/
OpScopeProfiler_SI::~OpScopeProfiler_SI()
{
}

/*virtual*/
int
OpScopeProfiler_SI::GetCommandCount() const
{
	return Command_Count;
}

/*virtual*/
OpScopeService::CommandRange
OpScopeProfiler_SI::GetCommands() const
{
	Descriptors *descriptors = g_scope_manager->GetDescriptorSet().profiler_;
	OP_ASSERT(descriptors);
	return CommandRange(descriptors ? descriptors->command_list : NULL, Command_Count);
}

/*virtual*/
OP_STATUS
OpScopeProfiler_SI::DoReceive( OpScopeClient *client, const OpScopeTPMessage &msg )
{
	// Check for invalid request data
	if (msg.Status() != OpScopeTPMessage::OK) // All calls must have status OK
		return SetCommandError(OpScopeTPMessage::BadRequest, GetInvalidStatusFieldText());
	if (msg.ServiceName().Compare(GetName()) != 0) // Make sure the service name matches the one in the message
		return SetCommandError(OpScopeTPMessage::InternalError, GetIncorrectServiceText());

	if (msg.CommandID() == Command_StartProfiler) // StartProfiler
	{
		OP_STATUS status = OpStatus::OK;
		StartProfilerArg in;
		SessionID out;

		OpProtobufInstanceProxy in_proxy(StartProfilerArg::GetMessageDescriptor(GetDescriptors()), &in);
		if (in_proxy.GetProtoMessage() == NULL)
			return OpStatus::ERR_NO_MEMORY;
		status = ParseMessage(client, msg, in_proxy);
		if (OpStatus::IsError(status))
		{
			if (GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if none was set by a parser
				RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetParseCommandMessageFailedText()));
			return status;
		}

		status = DoStartProfiler(in, out);
		if (OpStatus::IsError(status))
		{
			if (GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if none was set by command
			RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetCommandExecutionFailedText()));
			return status;
		}

		OpProtobufInstanceProxy out_proxy(SessionID::GetMessageDescriptor(GetDescriptors()), &out);
		if (out_proxy.GetProtoMessage() == NULL)
			return OpStatus::ERR_NO_MEMORY;
		RETURN_IF_ERROR(SendResponse(client, msg, out_proxy));
	}
	else if (msg.CommandID() == Command_ReleaseSession) // ReleaseSession
	{
		OP_STATUS status = OpStatus::OK;
		ReleaseSessionArg in;

		OpProtobufInstanceProxy in_proxy(ReleaseSessionArg::GetMessageDescriptor(GetDescriptors()), &in);
		if (in_proxy.GetProtoMessage() == NULL)
			return OpStatus::ERR_NO_MEMORY;
		status = ParseMessage(client, msg, in_proxy);
		if (OpStatus::IsError(status))
		{
			if (GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if none was set by a parser
				RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetParseCommandMessageFailedText()));
			return status;
		}

		status = DoReleaseSession(in);
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
	else if (msg.CommandID() == Command_StopProfiler) // StopProfiler
	{
		OP_STATUS status = OpStatus::OK;
		unsigned async_tag;
		status = InitAsyncCommand(msg, async_tag); // Needed for async requests, the response will use this info when request is done
		if (OpStatus::IsError(status))
		{
			RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetInitAsyncCommandFailedText()));
			return status;
		}
		StopProfilerArg in;

		OpProtobufInstanceProxy in_proxy(StopProfilerArg::GetMessageDescriptor(GetDescriptors()), &in);
		if (in_proxy.GetProtoMessage() == NULL)
			return OpStatus::ERR_NO_MEMORY;
		status = ParseMessage(client, msg, in_proxy);
		if (OpStatus::IsError(status))
		{
			if (GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if none was set by a parser
				RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetParseCommandMessageFailedText()));
			return status;
		}

		status = DoStopProfiler(in, async_tag);
		if (OpStatus::IsError(status))
		{
			if (GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if none was set by command
			{
				OP_STATUS tmp_status = SetCommandError(OpScopeTPHeader::InternalError, GetCommandExecutionFailedText());
				OpStatus::Ignore(tmp_status);
			}
			// Remove the async command since the command failed to send an async response
			CleanupAsyncCommand(async_tag);
			return status;
		}
	}
	else if (msg.CommandID() == Command_GetEvents) // GetEvents
	{
		OP_STATUS status = OpStatus::OK;
		unsigned async_tag;
		status = InitAsyncCommand(msg, async_tag); // Needed for async requests, the response will use this info when request is done
		if (OpStatus::IsError(status))
		{
			RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetInitAsyncCommandFailedText()));
			return status;
		}
		GetEventsArg in;

		OpProtobufInstanceProxy in_proxy(GetEventsArg::GetMessageDescriptor(GetDescriptors()), &in);
		if (in_proxy.GetProtoMessage() == NULL)
			return OpStatus::ERR_NO_MEMORY;
		status = ParseMessage(client, msg, in_proxy);
		if (OpStatus::IsError(status))
		{
			if (GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if none was set by a parser
				RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetParseCommandMessageFailedText()));
			return status;
		}

		status = DoGetEvents(in, async_tag);
		if (OpStatus::IsError(status))
		{
			if (GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if none was set by command
			{
				OP_STATUS tmp_status = SetCommandError(OpScopeTPHeader::InternalError, GetCommandExecutionFailedText());
				OpStatus::Ignore(tmp_status);
			}
			// Remove the async command since the command failed to send an async response
			CleanupAsyncCommand(async_tag);
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
OpScopeProfiler_SI::GetMessage(unsigned message_id) const
{
	Descriptors *descriptors = GetDescriptors();
	if (!descriptors)
		return NULL;
	return descriptors->Get(message_id);
}

OpScopeProfiler_SI::Descriptors *
OpScopeProfiler_SI::GetDescriptors() const
{
	Descriptors *d = g_scope_manager->GetDescriptorSet().profiler_;
	OP_ASSERT(d);
	return d;
}

/*virtual*/
unsigned
OpScopeProfiler_SI::GetMessageCount() const
{
	return OpScopeProfiler_Descriptors::_gen_Message_Count;
}

/*virtual*/
OpScopeService::MessageIDRange
OpScopeProfiler_SI::GetMessageIDs() const
{
	unsigned start = OpScopeProfiler_Descriptors::_gen_Message_Count > 0 ? 1 : 0;
	return MessageIDRange(start, start + OpScopeProfiler_Descriptors::_gen_Message_Count);
}

/*virtual*/
OpScopeService::MessageRange
OpScopeProfiler_SI::GetMessages() const
{
	unsigned start = OpScopeProfiler_Descriptors::_gen_Message_Count > 0 ? 1 : 0;
	return MessageRange(this, start, start + OpScopeProfiler_Descriptors::_gen_Message_Count);
}

/* virtual */
const char *
OpScopeProfiler_SI::GetVersionString() const
{
	return "1.1";
}

/* virtual */
int
OpScopeProfiler_SI::GetMajorVersion() const
{
	return 1;
}

/* virtual */
int
OpScopeProfiler_SI::GetMinorVersion() const
{
	return 1;
}

/* virtual */
const char *
OpScopeProfiler_SI::GetPatchVersion() const
{
	return "0";
}

OP_STATUS
OpScopeProfiler_SI::SendStopProfiler(const Session &msg, unsigned int tag) // StopProfiler
{
	OpProtobufInstanceProxy proxy(Session::GetMessageDescriptor(GetDescriptors()), const_cast<Session *>(&msg));
	if (proxy.GetProtoMessage() == NULL)
		return OpStatus::ERR_NO_MEMORY;
	return SendAsyncResponse(tag, proxy, Command_StopProfiler);
}


OP_STATUS
OpScopeProfiler_SI::SendGetEvents(const Events &msg, unsigned int tag) // GetEvents
{
	OpProtobufInstanceProxy proxy(Events::GetMessageDescriptor(GetDescriptors()), const_cast<Events *>(&msg));
	if (proxy.GetProtoMessage() == NULL)
		return OpStatus::ERR_NO_MEMORY;
	return SendAsyncResponse(tag, proxy, Command_GetEvents);
}

// Enum introspection: BEGIN

/*virtual*/
OpScopeService::EnumIDRange
OpScopeProfiler_SI::GetEnumIDs() const
{
	Descriptors *descriptors = GetDescriptors();
	return EnumIDRange(descriptors ? descriptors->enum_id_list : NULL, OpScopeProfiler_Descriptors::_gen_Enum_Count);
}

/*virtual*/
unsigned
OpScopeProfiler_SI::GetEnumCount() const
{
	return OpScopeProfiler_Descriptors::_gen_Enum_Count;
}

/*virtual*/
BOOL
OpScopeProfiler_SI::HasEnum(unsigned enum_id) const
{
	switch (enum_id)
	{
		case OpScopeProfiler_Descriptors::_gen_EnumID_StartProfilerArg_StartMode:
		case OpScopeProfiler_Descriptors::_gen_EnumID_GetEventsArg_Mode:
		case OpScopeProfiler_Descriptors::_gen_EnumID_EventType:
		case OpScopeProfiler_Descriptors::_gen_EnumID_ScriptThreadType:
		case OpScopeProfiler_Descriptors::_gen_EnumID_ScriptType:
			return TRUE;
	}
	return FALSE;
}

/*virtual*/
OP_STATUS
OpScopeProfiler_SI::GetEnum(unsigned enum_id, const uni_char *&name, unsigned &value_count) const
{
	switch (enum_id)
	{
		// StartProfilerArg_StartMode
		case OpScopeProfiler_Descriptors::_gen_EnumID_StartProfilerArg_StartMode:
			name = UNI_L("StartMode");
			value_count = OpScopeProfiler_Descriptors::_gen_EnumValueCount_StartProfilerArg_StartMode;
			return OpStatus::OK;
		// GetEventsArg_Mode
		case OpScopeProfiler_Descriptors::_gen_EnumID_GetEventsArg_Mode:
			name = UNI_L("Mode");
			value_count = OpScopeProfiler_Descriptors::_gen_EnumValueCount_GetEventsArg_Mode;
			return OpStatus::OK;
		// EventType
		case OpScopeProfiler_Descriptors::_gen_EnumID_EventType:
			name = UNI_L("EventType");
			value_count = OpScopeProfiler_Descriptors::_gen_EnumValueCount_EventType;
			return OpStatus::OK;
		// ScriptThreadType
		case OpScopeProfiler_Descriptors::_gen_EnumID_ScriptThreadType:
			name = UNI_L("ScriptThreadType");
			value_count = OpScopeProfiler_Descriptors::_gen_EnumValueCount_ScriptThreadType;
			return OpStatus::OK;
		// ScriptType
		case OpScopeProfiler_Descriptors::_gen_EnumID_ScriptType:
			name = UNI_L("ScriptType");
			value_count = OpScopeProfiler_Descriptors::_gen_EnumValueCount_ScriptType;
			return OpStatus::OK;
	}
	return OpStatus::ERR_NO_SUCH_RESOURCE;
}

/*virtual*/
OP_STATUS
OpScopeProfiler_SI::GetEnumValue(unsigned enum_id, unsigned idx, const uni_char *&value_name, unsigned &value_number) const
{
	switch (enum_id)
	{
		// StartProfilerArg_StartMode
		case OpScopeProfiler_Descriptors::_gen_EnumID_StartProfilerArg_StartMode:
		{
			if (idx > OpScopeProfiler_Descriptors::_gen_EnumValueCount_StartProfilerArg_StartMode)
				return OpStatus::ERR_OUT_OF_RANGE;
			// Values for StartProfilerArg_StartMode
			const unsigned enum_numbers[] = {
				  1
				, 2
			}; // ARRAY OK 2010-04-14 jborsodi
			const unsigned name_offsets[] = {
				  0
				, 10
			}; // ARRAY OK 2010-04-14 jborsodi
			const uni_char *names = UNI_L( "IMMEDIATE\0URL" );
			OP_ASSERT(idx < sizeof(name_offsets));
			OP_ASSERT(idx < sizeof(enum_numbers));
			value_name = names + name_offsets[idx];
			value_number = enum_numbers[idx];
			return OpStatus::OK;
		}

		// GetEventsArg_Mode
		case OpScopeProfiler_Descriptors::_gen_EnumID_GetEventsArg_Mode:
		{
			if (idx > OpScopeProfiler_Descriptors::_gen_EnumValueCount_GetEventsArg_Mode)
				return OpStatus::ERR_OUT_OF_RANGE;
			// Values for GetEventsArg_Mode
			const unsigned enum_numbers[] = {
				  1
				, 2
				, 3
				, 4
			}; // ARRAY OK 2010-04-14 jborsodi
			const unsigned name_offsets[] = {
				  0
				, 4
				, 24
				, 45
			}; // ARRAY OK 2010-04-14 jborsodi
			const uni_char *names = UNI_L( "ALL\0REDUCE_UNIQUE_TYPES\0REDUCE_UNIQUE_EVENTS\0REDUCE_ALL" );
			OP_ASSERT(idx < sizeof(name_offsets));
			OP_ASSERT(idx < sizeof(enum_numbers));
			value_name = names + name_offsets[idx];
			value_number = enum_numbers[idx];
			return OpStatus::OK;
		}

		// EventType
		case OpScopeProfiler_Descriptors::_gen_EnumID_EventType:
		{
			if (idx > OpScopeProfiler_Descriptors::_gen_EnumValueCount_EventType)
				return OpStatus::ERR_OUT_OF_RANGE;
			// Values for EventType
			const unsigned enum_numbers[] = {
				  1
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
			}; // ARRAY OK 2010-04-14 jborsodi
			const unsigned name_offsets[] = {
				  0
				, 8
				, 16
				, 33
				, 45
				, 64
				, 89
				, 96
				, 116
				, 138
				, 145
			}; // ARRAY OK 2010-04-14 jborsodi
			const uni_char *names = UNI_L( "GENERIC\0PROCESS\0DOCUMENT_PARSING\0CSS_PARSING\0SCRIPT_COMPILATION\0SCRIPT_THREAD_EVALUATION\0REFLOW\0STYLE_RECALCULATION\0CSS_SELECTOR_MATCHING\0LAYOUT\0PAINT" );
			OP_ASSERT(idx < sizeof(name_offsets));
			OP_ASSERT(idx < sizeof(enum_numbers));
			value_name = names + name_offsets[idx];
			value_number = enum_numbers[idx];
			return OpStatus::OK;
		}

		// ScriptThreadType
		case OpScopeProfiler_Descriptors::_gen_EnumID_ScriptThreadType:
		{
			if (idx > OpScopeProfiler_Descriptors::_gen_EnumValueCount_ScriptThreadType)
				return OpStatus::ERR_OUT_OF_RANGE;
			// Values for ScriptThreadType
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
			}; // ARRAY OK 2010-04-14 jborsodi
			const unsigned name_offsets[] = {
				  0
				, 8
				, 15
				, 23
				, 29
				, 43
				, 58
				, 77
				, 87
			}; // ARRAY OK 2010-04-14 jborsodi
			const uni_char *names = UNI_L( "UNKNOWN\0COMMON\0TIMEOUT\0EVENT\0INLINE_SCRIPT\0JAVASCRIPT_URL\0HISTORY_NAVIGATION\0JAVA_EVAL\0DEBUGGER_EVAL" );
			OP_ASSERT(idx < sizeof(name_offsets));
			OP_ASSERT(idx < sizeof(enum_numbers));
			value_name = names + name_offsets[idx];
			value_number = enum_numbers[idx];
			return OpStatus::OK;
		}

		// ScriptType
		case OpScopeProfiler_Descriptors::_gen_EnumID_ScriptType:
		{
			if (idx > OpScopeProfiler_Descriptors::_gen_EnumValueCount_ScriptType)
				return OpStatus::ERR_OUT_OF_RANGE;
			// Values for ScriptType
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
			}; // ARRAY OK 2010-04-14 jborsodi
			const unsigned name_offsets[] = {
				  0
				, 8
				, 15
				, 22
				, 32
				, 37
				, 45
				, 49
				, 63
				, 70
				, 80
				, 92
			}; // ARRAY OK 2010-04-14 jborsodi
			const uni_char *names = UNI_L( "UNKNOWN\0LINKED\0INLINE\0GENERATED\0EVAL\0TIMEOUT\0URI\0EVENT_HANDLER\0USERJS\0BROWSERJS\0EXTENSIONJS\0DEBUGGER" );
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

#endif // SCOPE_PROFILER
