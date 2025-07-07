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

#ifdef SCOPE_ECMASCRIPT_DEBUGGER

#include "modules/scope/src/generated/g_scope_ecmascript_debugger_interface.h"

// BEGIN: ES_ScopeDebugFrontend_Descriptors

ES_ScopeDebugFrontend_Descriptors::ES_ScopeDebugFrontend_Descriptors()
{
	for (unsigned i = 0; i < _gen_Message_Count; ++i)
	{
		message_list[i] = NULL;
	}
}

ES_ScopeDebugFrontend_Descriptors::~ES_ScopeDebugFrontend_Descriptors()
{
	for (unsigned i = 0; i < _gen_Message_Count; ++i)
	{
		OP_DELETE(message_list[i]);
	}
}

OP_STATUS
ES_ScopeDebugFrontend_Descriptors::Construct()
{
	enum_id_list[0] = _gen_EnumID_PseudoElement_Type;
	enum_id_list[1] = _gen_EnumID_NodeType;
	enum_id_list[2] = _gen_EnumID_EventListener_Origin;
	enum_id_list[3] = _gen_EnumID_NodeInfo_MatchReason;
	enum_id_list[4] = _gen_EnumID_PseudoSelector;
	enum_id_list[5] = _gen_EnumID_Value_Type;
	enum_id_list[6] = _gen_EnumID_RuleOrigin;
	enum_id_list[7] = _gen_EnumID_DeclarationStatus;
	enum_id_list[8] = _gen_EnumID_SearchDomArg_Type;
	enum_id_list[9] = _gen_EnumID_ConsoleLogType;
	enum_id_list[10] = _gen_EnumID_FunctionCallCompletedInfo_Result;
	return OpStatus::OK;
}

const OpProtobufMessage *
ES_ScopeDebugFrontend_Descriptors::Get(unsigned id) const
{
	ES_ScopeDebugFrontend_Descriptors *descriptors = const_cast<ES_ScopeDebugFrontend_Descriptors *>(this);
	switch (id)
	{
	case _gen_MsgID_node_info_attribute_:
		return ES_ScopeDebugFrontend_MessageSet::NodeInfo_Attribute::GetMessageDescriptor(descriptors);

	case _gen_MsgID_backtrace_frame_:
		return ES_ScopeDebugFrontend_MessageSet::BacktraceFrame::GetMessageDescriptor(descriptors);

	case _gen_MsgID_backtrace_frame_list_:
		return ES_ScopeDebugFrontend_MessageSet::BacktraceFrameList::GetMessageDescriptor(descriptors);

	case _gen_MsgID_backtrace_selection_:
		return ES_ScopeDebugFrontend_MessageSet::BacktraceSelection::GetMessageDescriptor(descriptors);

	case _gen_MsgID_break_selection_:
		return ES_ScopeDebugFrontend_MessageSet::BreakSelection::GetMessageDescriptor(descriptors);

	case _gen_MsgID_breakpoint_:
		return ES_ScopeDebugFrontend_MessageSet::Breakpoint::GetMessageDescriptor(descriptors);

	case _gen_MsgID_breakpoint_id_:
		return ES_ScopeDebugFrontend_MessageSet::BreakpointID::GetMessageDescriptor(descriptors);

	case _gen_MsgID_property_filter_class_mask_:
		return ES_ScopeDebugFrontend_MessageSet::PropertyFilter_ClassMask::GetMessageDescriptor(descriptors);

	case _gen_MsgID_configuration_:
		return ES_ScopeDebugFrontend_MessageSet::Configuration::GetMessageDescriptor(descriptors);

	case _gen_MsgID_console_log_info_:
		return ES_ScopeDebugFrontend_MessageSet::ConsoleLogInfo::GetMessageDescriptor(descriptors);

	case _gen_MsgID_console_profile_end_info_:
		return ES_ScopeDebugFrontend_MessageSet::ConsoleProfileEndInfo::GetMessageDescriptor(descriptors);

	case _gen_MsgID_console_profile_info_:
		return ES_ScopeDebugFrontend_MessageSet::ConsoleProfileInfo::GetMessageDescriptor(descriptors);

	case _gen_MsgID_console_time_end_info_:
		return ES_ScopeDebugFrontend_MessageSet::ConsoleTimeEndInfo::GetMessageDescriptor(descriptors);

	case _gen_MsgID_console_time_info_:
		return ES_ScopeDebugFrontend_MessageSet::ConsoleTimeInfo::GetMessageDescriptor(descriptors);

	case _gen_MsgID_console_trace_info_:
		return ES_ScopeDebugFrontend_MessageSet::ConsoleTraceInfo::GetMessageDescriptor(descriptors);

	case _gen_MsgID_css_element_selection_:
		return ES_ScopeDebugFrontend_MessageSet::CssElementSelection::GetMessageDescriptor(descriptors);

	case _gen_MsgID_css_index_map_:
		return ES_ScopeDebugFrontend_MessageSet::CssIndexMap::GetMessageDescriptor(descriptors);

	case _gen_MsgID_css_style_declarations_:
		return ES_ScopeDebugFrontend_MessageSet::CssStyleDeclarations::GetMessageDescriptor(descriptors);

	case _gen_MsgID_css_stylesheet_list_:
		return ES_ScopeDebugFrontend_MessageSet::CssStylesheetList::GetMessageDescriptor(descriptors);

	case _gen_MsgID_css_stylesheet_rules_:
		return ES_ScopeDebugFrontend_MessageSet::CssStylesheetRules::GetMessageDescriptor(descriptors);

	case _gen_MsgID_css_stylesheet_selection_:
		return ES_ScopeDebugFrontend_MessageSet::CssStylesheetSelection::GetMessageDescriptor(descriptors);

	case _gen_MsgID_dom_event_:
		return ES_ScopeDebugFrontend_MessageSet::DomEvent::GetMessageDescriptor(descriptors);

	case _gen_MsgID_dom_parse_error_:
		return ES_ScopeDebugFrontend_MessageSet::DomParseError::GetMessageDescriptor(descriptors);

	case _gen_MsgID_dom_traversal_:
		return ES_ScopeDebugFrontend_MessageSet::DomTraversal::GetMessageDescriptor(descriptors);

	case _gen_MsgID_eval_data_:
		return ES_ScopeDebugFrontend_MessageSet::EvalData::GetMessageDescriptor(descriptors);

	case _gen_MsgID_eval_result_:
		return ES_ScopeDebugFrontend_MessageSet::EvalResult::GetMessageDescriptor(descriptors);

	case _gen_MsgID_event_breakpoint_:
		return ES_ScopeDebugFrontend_MessageSet::EventBreakpoint::GetMessageDescriptor(descriptors);

	case _gen_MsgID_event_handler_:
		return ES_ScopeDebugFrontend_MessageSet::EventHandler::GetMessageDescriptor(descriptors);

	case _gen_MsgID_event_handler_id_:
		return ES_ScopeDebugFrontend_MessageSet::EventHandlerID::GetMessageDescriptor(descriptors);

	case _gen_MsgID_event_listener_:
		return ES_ScopeDebugFrontend_MessageSet::EventListener::GetMessageDescriptor(descriptors);

	case _gen_MsgID_event_names_:
		return ES_ScopeDebugFrontend_MessageSet::EventNames::GetMessageDescriptor(descriptors);

	case _gen_MsgID_event_target_:
		return ES_ScopeDebugFrontend_MessageSet::EventTarget::GetMessageDescriptor(descriptors);

	case _gen_MsgID_event_targets_:
		return ES_ScopeDebugFrontend_MessageSet::EventTargets::GetMessageDescriptor(descriptors);

	case _gen_MsgID_examine_list_:
		return ES_ScopeDebugFrontend_MessageSet::ExamineList::GetMessageDescriptor(descriptors);

	case _gen_MsgID_frame_selection_:
		return ES_ScopeDebugFrontend_MessageSet::FrameSelection::GetMessageDescriptor(descriptors);

	case _gen_MsgID_function_call_completed_info_:
		return ES_ScopeDebugFrontend_MessageSet::FunctionCallCompletedInfo::GetMessageDescriptor(descriptors);

	case _gen_MsgID_function_call_starting_info_:
		return ES_ScopeDebugFrontend_MessageSet::FunctionCallStartingInfo::GetMessageDescriptor(descriptors);

	case _gen_MsgID_function_filter_:
		return ES_ScopeDebugFrontend_MessageSet::FunctionFilter::GetMessageDescriptor(descriptors);

	case _gen_MsgID_function_position_list_function_position_:
		return ES_ScopeDebugFrontend_MessageSet::FunctionPositionList_FunctionPosition::GetMessageDescriptor(descriptors);

	case _gen_MsgID_function_position_list_:
		return ES_ScopeDebugFrontend_MessageSet::FunctionPositionList::GetMessageDescriptor(descriptors);

	case _gen_MsgID_get_event_listeners_arg_:
		return ES_ScopeDebugFrontend_MessageSet::GetEventListenersArg::GetMessageDescriptor(descriptors);

	case _gen_MsgID_get_event_names_arg_:
		return ES_ScopeDebugFrontend_MessageSet::GetEventNamesArg::GetMessageDescriptor(descriptors);

	case _gen_MsgID_get_function_positions_arg_:
		return ES_ScopeDebugFrontend_MessageSet::GetFunctionPositionsArg::GetMessageDescriptor(descriptors);

	case _gen_MsgID_node_info_:
		return ES_ScopeDebugFrontend_MessageSet::NodeInfo::GetMessageDescriptor(descriptors);

	case _gen_MsgID_node_list_:
		return ES_ScopeDebugFrontend_MessageSet::NodeList::GetMessageDescriptor(descriptors);

	case _gen_MsgID_css_style_declarations_node_style_:
		return ES_ScopeDebugFrontend_MessageSet::CssStyleDeclarations_NodeStyle::GetMessageDescriptor(descriptors);

	case _gen_MsgID_object_chain_list_:
		return ES_ScopeDebugFrontend_MessageSet::ObjectChainList::GetMessageDescriptor(descriptors);

	case _gen_MsgID_object_info_:
		return ES_ScopeDebugFrontend_MessageSet::ObjectInfo::GetMessageDescriptor(descriptors);

	case _gen_MsgID_object_list_:
		return ES_ScopeDebugFrontend_MessageSet::ObjectList::GetMessageDescriptor(descriptors);

	case _gen_MsgID_object_reference_:
		return ES_ScopeDebugFrontend_MessageSet::ObjectReference::GetMessageDescriptor(descriptors);

	case _gen_MsgID_object_selection_:
		return ES_ScopeDebugFrontend_MessageSet::ObjectSelection::GetMessageDescriptor(descriptors);

	case _gen_MsgID_object_value_:
		return ES_ScopeDebugFrontend_MessageSet::ObjectValue::GetMessageDescriptor(descriptors);

	case _gen_MsgID_position_:
		return ES_ScopeDebugFrontend_MessageSet::Position::GetMessageDescriptor(descriptors);

	case _gen_MsgID_object_info_property_:
		return ES_ScopeDebugFrontend_MessageSet::ObjectInfo_Property::GetMessageDescriptor(descriptors);

	case _gen_MsgID_property_filter_:
		return ES_ScopeDebugFrontend_MessageSet::PropertyFilter::GetMessageDescriptor(descriptors);

	case _gen_MsgID_property_filter_class_mask_property_mask_:
		return ES_ScopeDebugFrontend_MessageSet::PropertyFilter_ClassMask_PropertyMask::GetMessageDescriptor(descriptors);

	case _gen_MsgID_pseudo_element_:
		return ES_ScopeDebugFrontend_MessageSet::PseudoElement::GetMessageDescriptor(descriptors);

	case _gen_MsgID_ready_state_info_:
		return ES_ScopeDebugFrontend_MessageSet::ReadyStateInfo::GetMessageDescriptor(descriptors);

	case _gen_MsgID_release_objects_arg_:
		return ES_ScopeDebugFrontend_MessageSet::ReleaseObjectsArg::GetMessageDescriptor(descriptors);

	case _gen_MsgID_return_value_:
		return ES_ScopeDebugFrontend_MessageSet::ReturnValue::GetMessageDescriptor(descriptors);

	case _gen_MsgID_runtime_id_:
		return ES_ScopeDebugFrontend_MessageSet::RuntimeID::GetMessageDescriptor(descriptors);

	case _gen_MsgID_runtime_info_:
		return ES_ScopeDebugFrontend_MessageSet::RuntimeInfo::GetMessageDescriptor(descriptors);

	case _gen_MsgID_runtime_list_:
		return ES_ScopeDebugFrontend_MessageSet::RuntimeList::GetMessageDescriptor(descriptors);

	case _gen_MsgID_runtime_selection_:
		return ES_ScopeDebugFrontend_MessageSet::RuntimeSelection::GetMessageDescriptor(descriptors);

	case _gen_MsgID_script_info_:
		return ES_ScopeDebugFrontend_MessageSet::ScriptInfo::GetMessageDescriptor(descriptors);

	case _gen_MsgID_search_dom_arg_:
		return ES_ScopeDebugFrontend_MessageSet::SearchDomArg::GetMessageDescriptor(descriptors);

	case _gen_MsgID_set_property_filter_arg_:
		return ES_ScopeDebugFrontend_MessageSet::SetPropertyFilterArg::GetMessageDescriptor(descriptors);

	case _gen_MsgID_spotlight_object_spotlight_box_:
		return ES_ScopeDebugFrontend_MessageSet::SpotlightObject_SpotlightBox::GetMessageDescriptor(descriptors);

	case _gen_MsgID_spotlight_object_:
		return ES_ScopeDebugFrontend_MessageSet::SpotlightObject::GetMessageDescriptor(descriptors);

	case _gen_MsgID_spotlight_object_selection_:
		return ES_ScopeDebugFrontend_MessageSet::SpotlightObjectSelection::GetMessageDescriptor(descriptors);

	case _gen_MsgID_spotlight_selection_:
		return ES_ScopeDebugFrontend_MessageSet::SpotlightSelection::GetMessageDescriptor(descriptors);

	case _gen_MsgID_css_style_declarations_node_style_style_declaration_:
		return ES_ScopeDebugFrontend_MessageSet::CssStyleDeclarations_NodeStyle_StyleDeclaration::GetMessageDescriptor(descriptors);

	case _gen_MsgID_css_stylesheet_list_stylesheet_:
		return ES_ScopeDebugFrontend_MessageSet::CssStylesheetList_Stylesheet::GetMessageDescriptor(descriptors);

	case _gen_MsgID_css_stylesheet_rules_stylesheet_rule_:
		return ES_ScopeDebugFrontend_MessageSet::CssStylesheetRules_StylesheetRule::GetMessageDescriptor(descriptors);

	case _gen_MsgID_thread_info_:
		return ES_ScopeDebugFrontend_MessageSet::ThreadInfo::GetMessageDescriptor(descriptors);

	case _gen_MsgID_thread_migration_:
		return ES_ScopeDebugFrontend_MessageSet::ThreadMigration::GetMessageDescriptor(descriptors);

	case _gen_MsgID_thread_mode_:
		return ES_ScopeDebugFrontend_MessageSet::ThreadMode::GetMessageDescriptor(descriptors);

	case _gen_MsgID_thread_result_:
		return ES_ScopeDebugFrontend_MessageSet::ThreadResult::GetMessageDescriptor(descriptors);

	case _gen_MsgID_thread_stop_info_:
		return ES_ScopeDebugFrontend_MessageSet::ThreadStopInfo::GetMessageDescriptor(descriptors);

	case _gen_MsgID_console_log_info_value_:
		return ES_ScopeDebugFrontend_MessageSet::ConsoleLogInfo_Value::GetMessageDescriptor(descriptors);

	case _gen_MsgID_value_:
		return ES_ScopeDebugFrontend_MessageSet::Value::GetMessageDescriptor(descriptors);

	case _gen_MsgID_eval_data_variable_:
		return ES_ScopeDebugFrontend_MessageSet::EvalData_Variable::GetMessageDescriptor(descriptors);

	default:
		return NULL;
	}
}


// END: ES_ScopeDebugFrontend_Descriptors


// BEGIN: ES_ScopeDebugFrontend_MessageSet

ES_ScopeDebugFrontend_MessageSet::ES_ScopeDebugFrontend_MessageSet()
{
}

/*virtual*/
ES_ScopeDebugFrontend_MessageSet::~ES_ScopeDebugFrontend_MessageSet()
{
}

// END: ES_ScopeDebugFrontend_MessageSet

// BEGIN: Messages

//   BEGIN: Message: Attribute
/*static*/
const OpProtobufMessage *
ES_ScopeDebugFrontend_MessageSet::NodeInfo_Attribute::GetMessageDescriptor(ES_ScopeDebugFrontend_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[ES_ScopeDebugFrontend_Descriptors::_gen_MessageOffs_node_info_attribute_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::String,
						1,
						UNI_L("namePrefix"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::String,
						2,
						UNI_L("name"),
						OpProtobufField::Required
						);
	fields[2] = OpProtobufField(
						OpProtobufFormat::String,
						3,
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
						ES_ScopeDebugFrontend_MessageSet::NodeInfo_Attribute,
						_namePrefix
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::NodeInfo_Attribute,
						_name
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::NodeInfo_Attribute,
						_value
						);

	message = OP_NEW(OpProtobufMessage,
					(ES_ScopeDebugFrontend_Descriptors::_gen_MsgID_node_info_attribute_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(ES_ScopeDebugFrontend_MessageSet::NodeInfo_Attribute, has_bits_),
					OP_PROTO_OFFSETOF(ES_ScopeDebugFrontend_MessageSet::NodeInfo_Attribute, encoded_size_),
					"Attribute",
					OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::NodeInfo_Attribute>::Make,
					OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::NodeInfo_Attribute>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	const OpProtobufMessage *parent = ES_ScopeDebugFrontend_MessageSet::NodeInfo::GetMessageDescriptor(descriptors);
	if (!parent)
		return NULL;
	message->SetParentId(parent->GetInternalId());

	return message;
}

// BEGIN: NodeInfo.Attribute: Implementation

// Setters

OP_STATUS
ES_ScopeDebugFrontend_MessageSet::NodeInfo_Attribute::SetNamePrefix(const uni_char * v, int l) 
{
	return _namePrefix.Set(v, l);
}


OP_STATUS
ES_ScopeDebugFrontend_MessageSet::NodeInfo_Attribute::SetName(const uni_char * v, int l) 
{
	return _name.Set(v, l);
}


OP_STATUS
ES_ScopeDebugFrontend_MessageSet::NodeInfo_Attribute::SetValue(const uni_char * v, int l) 
{
	return _value.Set(v, l);
}

// END: NodeInfo.Attribute: Implementation

//   END: Message: Attribute

//   BEGIN: Message: BacktraceFrame
/*static*/
const OpProtobufMessage *
ES_ScopeDebugFrontend_MessageSet::BacktraceFrame::GetMessageDescriptor(ES_ScopeDebugFrontend_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[ES_ScopeDebugFrontend_Descriptors::_gen_MessageOffs_backtrace_frame_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Uint32,
						1,
						UNI_L("functionID"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Uint32,
						2,
						UNI_L("argumentObject"),
						OpProtobufField::Required
						);
	fields[2] = OpProtobufField(
						OpProtobufFormat::Uint32,
						3,
						UNI_L("variableObject"),
						OpProtobufField::Required
						);
	fields[3] = OpProtobufField(
						OpProtobufFormat::Uint32,
						4,
						UNI_L("thisObject"),
						OpProtobufField::Required
						);
	fields[4] = OpProtobufField(
						OpProtobufFormat::Message,
						5,
						UNI_L("objectValue"),
						OpProtobufField::Optional
						);
	fields[5] = OpProtobufField(
						OpProtobufFormat::Uint32,
						6,
						UNI_L("scriptID"),
						OpProtobufField::Optional
						);
	fields[6] = OpProtobufField(
						OpProtobufFormat::Uint32,
						7,
						UNI_L("lineNumber"),
						OpProtobufField::Optional
						);
	fields[7] = OpProtobufField(
						OpProtobufFormat::Uint32,
						8,
						UNI_L("scopeList"),
						OpProtobufField::Repeated
						);
	fields[8] = OpProtobufField(
						OpProtobufFormat::Message,
						9,
						UNI_L("argumentValue"),
						OpProtobufField::Optional
						);
	fields[9] = OpProtobufField(
						OpProtobufFormat::Message,
						10,
						UNI_L("thisValue"),
						OpProtobufField::Optional
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::BacktraceFrame,
						_functionID
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::BacktraceFrame,
						_argumentObject
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::BacktraceFrame,
						_variableObject
						);
	offsets[3] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::BacktraceFrame,
						_thisObject
						);
	offsets[4] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::BacktraceFrame,
						_objectValue
						);
	offsets[5] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::BacktraceFrame,
						_scriptID
						);
	offsets[6] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::BacktraceFrame,
						_lineNumber
						);
	offsets[7] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::BacktraceFrame,
						_scopeList
						);
	offsets[8] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::BacktraceFrame,
						_argumentValue
						);
	offsets[9] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::BacktraceFrame,
						_thisValue
						);

	message = OP_NEW(OpProtobufMessage,
					(ES_ScopeDebugFrontend_Descriptors::_gen_MsgID_backtrace_frame_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(ES_ScopeDebugFrontend_MessageSet::BacktraceFrame, has_bits_),
					OP_PROTO_OFFSETOF(ES_ScopeDebugFrontend_MessageSet::BacktraceFrame, encoded_size_),
					"BacktraceFrame",
					OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::BacktraceFrame>::Make,
					OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::BacktraceFrame>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	fields[4].SetMessage(ObjectValue::GetMessageDescriptor(descriptors));
	fields[8].SetMessage(ObjectValue::GetMessageDescriptor(descriptors));
	fields[9].SetMessage(ObjectValue::GetMessageDescriptor(descriptors));

	return message;
}

// BEGIN: BacktraceFrame: Implementation

// Setters

void
ES_ScopeDebugFrontend_MessageSet::BacktraceFrame::SetObjectValue(ES_ScopeDebugFrontend_MessageSet::ObjectValue * v) 
{
	has_bits_.Reference().SetBit(4);
	OP_DELETE(_objectValue);
	_objectValue = v;
}


OpValueVector<UINT32> &
ES_ScopeDebugFrontend_MessageSet::BacktraceFrame::GetScopeListRef() 
{
	has_bits_.Reference().SetBit(7);
	return _scopeList;
}


OP_STATUS
ES_ScopeDebugFrontend_MessageSet::BacktraceFrame::AppendToScopeList(UINT32 v) 
{
	has_bits_.Reference().SetBit(7);
	return _scopeList.Add(v);
}


void
ES_ScopeDebugFrontend_MessageSet::BacktraceFrame::SetArgumentValue(ES_ScopeDebugFrontend_MessageSet::ObjectValue * v) 
{
	has_bits_.Reference().SetBit(8);
	OP_DELETE(_argumentValue);
	_argumentValue = v;
}


void
ES_ScopeDebugFrontend_MessageSet::BacktraceFrame::SetThisValue(ES_ScopeDebugFrontend_MessageSet::ObjectValue * v) 
{
	has_bits_.Reference().SetBit(9);
	OP_DELETE(_thisValue);
	_thisValue = v;
}

// END: BacktraceFrame: Implementation

//   END: Message: BacktraceFrame

//   BEGIN: Message: BacktraceFrameList
/*static*/
const OpProtobufMessage *
ES_ScopeDebugFrontend_MessageSet::BacktraceFrameList::GetMessageDescriptor(ES_ScopeDebugFrontend_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[ES_ScopeDebugFrontend_Descriptors::_gen_MessageOffs_backtrace_frame_list_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Message,
						1,
						UNI_L("frameList"),
						OpProtobufField::Repeated
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Message,
						2,
						UNI_L("returnValueList"),
						OpProtobufField::Repeated
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::BacktraceFrameList,
						_frameList
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::BacktraceFrameList,
						_returnValueList
						);

	message = OP_NEW(OpProtobufMessage,
					(ES_ScopeDebugFrontend_Descriptors::_gen_MsgID_backtrace_frame_list_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(ES_ScopeDebugFrontend_MessageSet::BacktraceFrameList, has_bits_),
					OP_PROTO_OFFSETOF(ES_ScopeDebugFrontend_MessageSet::BacktraceFrameList, encoded_size_),
					"BacktraceFrameList",
					OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::BacktraceFrameList>::Make,
					OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::BacktraceFrameList>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	fields[0].SetMessage(BacktraceFrame::GetMessageDescriptor(descriptors));
	fields[1].SetMessage(ReturnValue::GetMessageDescriptor(descriptors));

	return message;
}

// BEGIN: BacktraceFrameList: Implementation

// Setters

OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::BacktraceFrame> &
ES_ScopeDebugFrontend_MessageSet::BacktraceFrameList::GetFrameListRef() 
{
	has_bits_.Reference().SetBit(0);
	return _frameList;
}


OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::ReturnValue> &
ES_ScopeDebugFrontend_MessageSet::BacktraceFrameList::GetReturnValueListRef() 
{
	has_bits_.Reference().SetBit(1);
	return _returnValueList;
}

// END: BacktraceFrameList: Implementation

//   END: Message: BacktraceFrameList

//   BEGIN: Message: BacktraceSelection
/*static*/
const OpProtobufMessage *
ES_ScopeDebugFrontend_MessageSet::BacktraceSelection::GetMessageDescriptor(ES_ScopeDebugFrontend_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[ES_ScopeDebugFrontend_Descriptors::_gen_MessageOffs_backtrace_selection_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Uint32,
						1,
						UNI_L("runtimeID"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Uint32,
						2,
						UNI_L("threadID"),
						OpProtobufField::Required
						);
	fields[2] = OpProtobufField(
						OpProtobufFormat::Uint32,
						3,
						UNI_L("maxFrames"),
						OpProtobufField::Optional
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::BacktraceSelection,
						_runtimeID
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::BacktraceSelection,
						_threadID
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::BacktraceSelection,
						_maxFrames
						);

	message = OP_NEW(OpProtobufMessage,
					(ES_ScopeDebugFrontend_Descriptors::_gen_MsgID_backtrace_selection_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(ES_ScopeDebugFrontend_MessageSet::BacktraceSelection, has_bits_),
					OP_PROTO_OFFSETOF(ES_ScopeDebugFrontend_MessageSet::BacktraceSelection, encoded_size_),
					"BacktraceSelection",
					OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::BacktraceSelection>::Make,
					OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::BacktraceSelection>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: BacktraceSelection: Implementation


// END: BacktraceSelection: Implementation

//   END: Message: BacktraceSelection

//   BEGIN: Message: BreakSelection
/*static*/
const OpProtobufMessage *
ES_ScopeDebugFrontend_MessageSet::BreakSelection::GetMessageDescriptor(ES_ScopeDebugFrontend_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[ES_ScopeDebugFrontend_Descriptors::_gen_MessageOffs_break_selection_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Uint32,
						1,
						UNI_L("runtimeID"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Uint32,
						2,
						UNI_L("threadID"),
						OpProtobufField::Required
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::BreakSelection,
						_runtimeID
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::BreakSelection,
						_threadID
						);

	message = OP_NEW(OpProtobufMessage,
					(ES_ScopeDebugFrontend_Descriptors::_gen_MsgID_break_selection_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(ES_ScopeDebugFrontend_MessageSet::BreakSelection, has_bits_),
					OP_PROTO_OFFSETOF(ES_ScopeDebugFrontend_MessageSet::BreakSelection, encoded_size_),
					"BreakSelection",
					OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::BreakSelection>::Make,
					OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::BreakSelection>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: BreakSelection: Implementation


// END: BreakSelection: Implementation

//   END: Message: BreakSelection

//   BEGIN: Message: Breakpoint
/*static*/
const OpProtobufMessage *
ES_ScopeDebugFrontend_MessageSet::Breakpoint::GetMessageDescriptor(ES_ScopeDebugFrontend_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[ES_ScopeDebugFrontend_Descriptors::_gen_MessageOffs_breakpoint_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Uint32,
						1,
						UNI_L("breakpointID"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Uint32,
						2,
						UNI_L("scriptID"),
						OpProtobufField::Required
						);
	fields[2] = OpProtobufField(
						OpProtobufFormat::Uint32,
						3,
						UNI_L("lineNumber"),
						OpProtobufField::Required
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::Breakpoint,
						_breakpointID
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::Breakpoint,
						_scriptID
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::Breakpoint,
						_lineNumber
						);

	message = OP_NEW(OpProtobufMessage,
					(ES_ScopeDebugFrontend_Descriptors::_gen_MsgID_breakpoint_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(ES_ScopeDebugFrontend_MessageSet::Breakpoint, has_bits_),
					OP_PROTO_OFFSETOF(ES_ScopeDebugFrontend_MessageSet::Breakpoint, encoded_size_),
					"Breakpoint",
					OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::Breakpoint>::Make,
					OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::Breakpoint>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: Breakpoint: Implementation


// END: Breakpoint: Implementation

//   END: Message: Breakpoint

//   BEGIN: Message: BreakpointID
/*static*/
const OpProtobufMessage *
ES_ScopeDebugFrontend_MessageSet::BreakpointID::GetMessageDescriptor(ES_ScopeDebugFrontend_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[ES_ScopeDebugFrontend_Descriptors::_gen_MessageOffs_breakpoint_id_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Uint32,
						1,
						UNI_L("breakpointID"),
						OpProtobufField::Required
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::BreakpointID,
						_breakpointID
						);

	message = OP_NEW(OpProtobufMessage,
					(ES_ScopeDebugFrontend_Descriptors::_gen_MsgID_breakpoint_id_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(ES_ScopeDebugFrontend_MessageSet::BreakpointID, has_bits_),
					OP_PROTO_OFFSETOF(ES_ScopeDebugFrontend_MessageSet::BreakpointID, encoded_size_),
					"BreakpointID",
					OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::BreakpointID>::Make,
					OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::BreakpointID>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: BreakpointID: Implementation


// END: BreakpointID: Implementation

//   END: Message: BreakpointID

//   BEGIN: Message: ClassMask
/*static*/
const OpProtobufMessage *
ES_ScopeDebugFrontend_MessageSet::PropertyFilter_ClassMask::GetMessageDescriptor(ES_ScopeDebugFrontend_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[ES_ScopeDebugFrontend_Descriptors::_gen_MessageOffs_property_filter_class_mask_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::String,
						1,
						UNI_L("className"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Message,
						2,
						UNI_L("propertyMaskList"),
						OpProtobufField::Repeated
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::PropertyFilter_ClassMask,
						_className
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::PropertyFilter_ClassMask,
						_propertyMaskList
						);

	message = OP_NEW(OpProtobufMessage,
					(ES_ScopeDebugFrontend_Descriptors::_gen_MsgID_property_filter_class_mask_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(ES_ScopeDebugFrontend_MessageSet::PropertyFilter_ClassMask, has_bits_),
					OP_PROTO_OFFSETOF(ES_ScopeDebugFrontend_MessageSet::PropertyFilter_ClassMask, encoded_size_),
					"ClassMask",
					OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::PropertyFilter_ClassMask>::Make,
					OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::PropertyFilter_ClassMask>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	fields[1].SetMessage(PropertyFilter_ClassMask_PropertyMask::GetMessageDescriptor(descriptors));
	const OpProtobufMessage *parent = ES_ScopeDebugFrontend_MessageSet::PropertyFilter::GetMessageDescriptor(descriptors);
	if (!parent)
		return NULL;
	message->SetParentId(parent->GetInternalId());

	return message;
}

// BEGIN: PropertyFilter.ClassMask: Implementation


// Setters

OP_STATUS
ES_ScopeDebugFrontend_MessageSet::PropertyFilter_ClassMask::SetClassName(const uni_char * v, int l) 
{
	return _className.Set(v, l);
}


OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::PropertyFilter_ClassMask_PropertyMask> &
ES_ScopeDebugFrontend_MessageSet::PropertyFilter_ClassMask::GetPropertyMaskListRef() 
{
	has_bits_.Reference().SetBit(1);
	return _propertyMaskList;
}

// END: PropertyFilter.ClassMask: Implementation

//   END: Message: ClassMask

//   BEGIN: Message: Configuration
/*static*/
const OpProtobufMessage *
ES_ScopeDebugFrontend_MessageSet::Configuration::GetMessageDescriptor(ES_ScopeDebugFrontend_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[ES_ScopeDebugFrontend_Descriptors::_gen_MessageOffs_configuration_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Bool,
						1,
						UNI_L("stopAtScript"),
						OpProtobufField::Optional
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Bool,
						2,
						UNI_L("stopAtException"),
						OpProtobufField::Optional
						);
	fields[2] = OpProtobufField(
						OpProtobufFormat::Bool,
						3,
						UNI_L("stopAtError"),
						OpProtobufField::Optional
						);
	fields[3] = OpProtobufField(
						OpProtobufFormat::Bool,
						4,
						UNI_L("stopAtAbort"),
						OpProtobufField::Optional
						);
	fields[4] = OpProtobufField(
						OpProtobufFormat::Bool,
						5,
						UNI_L("stopAtGc"),
						OpProtobufField::Optional
						);
	fields[5] = OpProtobufField(
						OpProtobufFormat::Bool,
						6,
						UNI_L("stopAtDebuggerStatement"),
						OpProtobufField::Optional
						);
	fields[6] = OpProtobufField(
						OpProtobufFormat::Bool,
						7,
						UNI_L("reformatScriptData"),
						OpProtobufField::Optional
						);
	fields[7] = OpProtobufField(
						OpProtobufFormat::String,
						8,
						UNI_L("reformatConditionFunction"),
						OpProtobufField::Optional
						);
	fields[8] = OpProtobufField(
						OpProtobufFormat::Bool,
						9,
						UNI_L("stopAtCaughtError"),
						OpProtobufField::Optional
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::Configuration,
						_stopAtScript
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::Configuration,
						_stopAtException
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::Configuration,
						_stopAtError
						);
	offsets[3] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::Configuration,
						_stopAtAbort
						);
	offsets[4] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::Configuration,
						_stopAtGc
						);
	offsets[5] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::Configuration,
						_stopAtDebuggerStatement
						);
	offsets[6] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::Configuration,
						_reformatScriptData
						);
	offsets[7] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::Configuration,
						_reformatConditionFunction
						);
	offsets[8] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::Configuration,
						_stopAtCaughtError
						);

	message = OP_NEW(OpProtobufMessage,
					(ES_ScopeDebugFrontend_Descriptors::_gen_MsgID_configuration_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(ES_ScopeDebugFrontend_MessageSet::Configuration, has_bits_),
					OP_PROTO_OFFSETOF(ES_ScopeDebugFrontend_MessageSet::Configuration, encoded_size_),
					"Configuration",
					OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::Configuration>::Make,
					OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::Configuration>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: Configuration: Implementation

// Setters

OP_STATUS
ES_ScopeDebugFrontend_MessageSet::Configuration::SetReformatConditionFunction(const uni_char * v, int l) 
{
	has_bits_.Reference().SetBit(7);
	return _reformatConditionFunction.Set(v, l);
}

// END: Configuration: Implementation

//   END: Message: Configuration

//   BEGIN: Message: ConsoleLogInfo
/*static*/
const OpProtobufMessage *
ES_ScopeDebugFrontend_MessageSet::ConsoleLogInfo::GetMessageDescriptor(ES_ScopeDebugFrontend_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[ES_ScopeDebugFrontend_Descriptors::_gen_MessageOffs_console_log_info_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Uint32,
						1,
						UNI_L("runtimeID"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Int32,
						2,
						UNI_L("type"),
						OpProtobufField::Required
						, NULL // const OpProtobufMessage *message
						, 0 // int message_id
						, ES_ScopeDebugFrontend_Descriptors::_gen_EnumID_ConsoleLogType // unsigned enum_id
						);
	fields[2] = OpProtobufField(
						OpProtobufFormat::Message,
						3,
						UNI_L("valueList"),
						OpProtobufField::Repeated
						);
	fields[3] = OpProtobufField(
						OpProtobufFormat::Message,
						4,
						UNI_L("position"),
						OpProtobufField::Optional
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::ConsoleLogInfo,
						_runtimeID
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::ConsoleLogInfo,
						_type
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::ConsoleLogInfo,
						_valueList
						);
	offsets[3] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::ConsoleLogInfo,
						_position
						);

	message = OP_NEW(OpProtobufMessage,
					(ES_ScopeDebugFrontend_Descriptors::_gen_MsgID_console_log_info_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(ES_ScopeDebugFrontend_MessageSet::ConsoleLogInfo, has_bits_),
					OP_PROTO_OFFSETOF(ES_ScopeDebugFrontend_MessageSet::ConsoleLogInfo, encoded_size_),
					"ConsoleLogInfo",
					OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::ConsoleLogInfo>::Make,
					OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::ConsoleLogInfo>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	fields[2].SetMessage(ConsoleLogInfo_Value::GetMessageDescriptor(descriptors));
	fields[3].SetMessage(Position::GetMessageDescriptor(descriptors));

	return message;
}

// BEGIN: ConsoleLogInfo: Implementation


// Setters

void
ES_ScopeDebugFrontend_MessageSet::ConsoleLogInfo::SetType(ES_ScopeDebugFrontend_MessageSet::ConsoleLogType v) 
{
	_type = static_cast<ES_ScopeDebugFrontend_MessageSet::ConsoleLogType>(v);
}


ES_ScopeDebugFrontend_MessageSet::ConsoleLogInfo_Value *
ES_ScopeDebugFrontend_MessageSet::ConsoleLogInfo::AppendNewValueList() 
{
	has_bits_.Reference().SetBit(2);
	OpAutoPtr<ES_ScopeDebugFrontend_MessageSet::ConsoleLogInfo_Value> tmp(OP_NEW(ES_ScopeDebugFrontend_MessageSet::ConsoleLogInfo_Value, ()));
	if (!tmp.get())
	    return NULL;
	RETURN_VALUE_IF_ERROR(_valueList.Add(tmp.get()), NULL);
	return tmp.release();
}


void
ES_ScopeDebugFrontend_MessageSet::ConsoleLogInfo::SetPosition(ES_ScopeDebugFrontend_MessageSet::Position * v) 
{
	has_bits_.Reference().SetBit(3);
	OP_DELETE(_position);
	_position = v;
}

// END: ConsoleLogInfo: Implementation

//   END: Message: ConsoleLogInfo

//   BEGIN: Message: ConsoleProfileEndInfo
/*static*/
const OpProtobufMessage *
ES_ScopeDebugFrontend_MessageSet::ConsoleProfileEndInfo::GetMessageDescriptor(ES_ScopeDebugFrontend_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[ES_ScopeDebugFrontend_Descriptors::_gen_MessageOffs_console_profile_end_info_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Uint32,
						1,
						UNI_L("runtimeID"),
						OpProtobufField::Required
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::ConsoleProfileEndInfo,
						_runtimeID
						);

	message = OP_NEW(OpProtobufMessage,
					(ES_ScopeDebugFrontend_Descriptors::_gen_MsgID_console_profile_end_info_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(ES_ScopeDebugFrontend_MessageSet::ConsoleProfileEndInfo, has_bits_),
					OP_PROTO_OFFSETOF(ES_ScopeDebugFrontend_MessageSet::ConsoleProfileEndInfo, encoded_size_),
					"ConsoleProfileEndInfo",
					OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::ConsoleProfileEndInfo>::Make,
					OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::ConsoleProfileEndInfo>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: ConsoleProfileEndInfo: Implementation


// END: ConsoleProfileEndInfo: Implementation

//   END: Message: ConsoleProfileEndInfo

//   BEGIN: Message: ConsoleProfileInfo
/*static*/
const OpProtobufMessage *
ES_ScopeDebugFrontend_MessageSet::ConsoleProfileInfo::GetMessageDescriptor(ES_ScopeDebugFrontend_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[ES_ScopeDebugFrontend_Descriptors::_gen_MessageOffs_console_profile_info_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Uint32,
						1,
						UNI_L("runtimeID"),
						OpProtobufField::Required
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::ConsoleProfileInfo,
						_runtimeID
						);

	message = OP_NEW(OpProtobufMessage,
					(ES_ScopeDebugFrontend_Descriptors::_gen_MsgID_console_profile_info_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(ES_ScopeDebugFrontend_MessageSet::ConsoleProfileInfo, has_bits_),
					OP_PROTO_OFFSETOF(ES_ScopeDebugFrontend_MessageSet::ConsoleProfileInfo, encoded_size_),
					"ConsoleProfileInfo",
					OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::ConsoleProfileInfo>::Make,
					OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::ConsoleProfileInfo>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: ConsoleProfileInfo: Implementation


// END: ConsoleProfileInfo: Implementation

//   END: Message: ConsoleProfileInfo

//   BEGIN: Message: ConsoleTimeEndInfo
/*static*/
const OpProtobufMessage *
ES_ScopeDebugFrontend_MessageSet::ConsoleTimeEndInfo::GetMessageDescriptor(ES_ScopeDebugFrontend_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[ES_ScopeDebugFrontend_Descriptors::_gen_MessageOffs_console_time_end_info_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Uint32,
						1,
						UNI_L("runtimeID"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::String,
						2,
						UNI_L("title"),
						OpProtobufField::Required
						);
	fields[2] = OpProtobufField(
						OpProtobufFormat::Uint32,
						3,
						UNI_L("elapsed"),
						OpProtobufField::Required
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::ConsoleTimeEndInfo,
						_runtimeID
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::ConsoleTimeEndInfo,
						_title
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::ConsoleTimeEndInfo,
						_elapsed
						);

	message = OP_NEW(OpProtobufMessage,
					(ES_ScopeDebugFrontend_Descriptors::_gen_MsgID_console_time_end_info_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(ES_ScopeDebugFrontend_MessageSet::ConsoleTimeEndInfo, has_bits_),
					OP_PROTO_OFFSETOF(ES_ScopeDebugFrontend_MessageSet::ConsoleTimeEndInfo, encoded_size_),
					"ConsoleTimeEndInfo",
					OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::ConsoleTimeEndInfo>::Make,
					OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::ConsoleTimeEndInfo>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: ConsoleTimeEndInfo: Implementation

// Setters

OP_STATUS
ES_ScopeDebugFrontend_MessageSet::ConsoleTimeEndInfo::SetTitle(const uni_char * v, int l) 
{
	return _title.Set(v, l);
}

// END: ConsoleTimeEndInfo: Implementation

//   END: Message: ConsoleTimeEndInfo

//   BEGIN: Message: ConsoleTimeInfo
/*static*/
const OpProtobufMessage *
ES_ScopeDebugFrontend_MessageSet::ConsoleTimeInfo::GetMessageDescriptor(ES_ScopeDebugFrontend_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[ES_ScopeDebugFrontend_Descriptors::_gen_MessageOffs_console_time_info_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Uint32,
						1,
						UNI_L("runtimeID"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::String,
						2,
						UNI_L("title"),
						OpProtobufField::Required
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::ConsoleTimeInfo,
						_runtimeID
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::ConsoleTimeInfo,
						_title
						);

	message = OP_NEW(OpProtobufMessage,
					(ES_ScopeDebugFrontend_Descriptors::_gen_MsgID_console_time_info_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(ES_ScopeDebugFrontend_MessageSet::ConsoleTimeInfo, has_bits_),
					OP_PROTO_OFFSETOF(ES_ScopeDebugFrontend_MessageSet::ConsoleTimeInfo, encoded_size_),
					"ConsoleTimeInfo",
					OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::ConsoleTimeInfo>::Make,
					OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::ConsoleTimeInfo>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: ConsoleTimeInfo: Implementation

// Setters

OP_STATUS
ES_ScopeDebugFrontend_MessageSet::ConsoleTimeInfo::SetTitle(const uni_char * v, int l) 
{
	return _title.Set(v, l);
}

// END: ConsoleTimeInfo: Implementation

//   END: Message: ConsoleTimeInfo

//   BEGIN: Message: ConsoleTraceInfo
/*static*/
const OpProtobufMessage *
ES_ScopeDebugFrontend_MessageSet::ConsoleTraceInfo::GetMessageDescriptor(ES_ScopeDebugFrontend_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[ES_ScopeDebugFrontend_Descriptors::_gen_MessageOffs_console_trace_info_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Uint32,
						1,
						UNI_L("runtimeID"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Message,
						2,
						UNI_L("frameList"),
						OpProtobufField::Repeated
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::ConsoleTraceInfo,
						_runtimeID
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::ConsoleTraceInfo,
						_frameList
						);

	message = OP_NEW(OpProtobufMessage,
					(ES_ScopeDebugFrontend_Descriptors::_gen_MsgID_console_trace_info_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(ES_ScopeDebugFrontend_MessageSet::ConsoleTraceInfo, has_bits_),
					OP_PROTO_OFFSETOF(ES_ScopeDebugFrontend_MessageSet::ConsoleTraceInfo, encoded_size_),
					"ConsoleTraceInfo",
					OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::ConsoleTraceInfo>::Make,
					OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::ConsoleTraceInfo>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	fields[1].SetMessage(BacktraceFrame::GetMessageDescriptor(descriptors));

	return message;
}

// BEGIN: ConsoleTraceInfo: Implementation

// Setters

OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::BacktraceFrame> &
ES_ScopeDebugFrontend_MessageSet::ConsoleTraceInfo::GetFrameListRef() 
{
	has_bits_.Reference().SetBit(1);
	return _frameList;
}

// END: ConsoleTraceInfo: Implementation

//   END: Message: ConsoleTraceInfo

//   BEGIN: Message: CssElementSelection
/*static*/
const OpProtobufMessage *
ES_ScopeDebugFrontend_MessageSet::CssElementSelection::GetMessageDescriptor(ES_ScopeDebugFrontend_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[ES_ScopeDebugFrontend_Descriptors::_gen_MessageOffs_css_element_selection_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Uint32,
						1,
						UNI_L("runtimeID"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Uint32,
						2,
						UNI_L("objectID"),
						OpProtobufField::Required
						);
	fields[2] = OpProtobufField(
						OpProtobufFormat::Int32,
						3,
						UNI_L("pseudoSelectorList"),
						OpProtobufField::Repeated
						, NULL // const OpProtobufMessage *message
						, 0 // int message_id
						, ES_ScopeDebugFrontend_Descriptors::_gen_EnumID_PseudoSelector // unsigned enum_id
						);
	fields[3] = OpProtobufField(
						OpProtobufFormat::Int32,
						4,
						UNI_L("pseudoElement"),
						OpProtobufField::Optional
						, NULL // const OpProtobufMessage *message
						, 0 // int message_id
						, ES_ScopeDebugFrontend_Descriptors::_gen_EnumID_PseudoSelector // unsigned enum_id
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::CssElementSelection,
						_runtimeID
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::CssElementSelection,
						_objectID
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::CssElementSelection,
						_pseudoSelectorList
						);
	offsets[3] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::CssElementSelection,
						_pseudoElement
						);

	message = OP_NEW(OpProtobufMessage,
					(ES_ScopeDebugFrontend_Descriptors::_gen_MsgID_css_element_selection_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(ES_ScopeDebugFrontend_MessageSet::CssElementSelection, has_bits_),
					OP_PROTO_OFFSETOF(ES_ScopeDebugFrontend_MessageSet::CssElementSelection, encoded_size_),
					"CssElementSelection",
					OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::CssElementSelection>::Make,
					OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::CssElementSelection>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: CssElementSelection: Implementation

// Setters

OpValueVector<INT32> &
ES_ScopeDebugFrontend_MessageSet::CssElementSelection::GetPseudoSelectorListRef() 
{
	has_bits_.Reference().SetBit(2);
	return _pseudoSelectorList;
}


OP_STATUS
ES_ScopeDebugFrontend_MessageSet::CssElementSelection::AppendToPseudoSelectorList(ES_ScopeDebugFrontend_MessageSet::PseudoSelector v) 
{
	has_bits_.Reference().SetBit(2);
	return _pseudoSelectorList.Add(static_cast<INT32>(v));
}


OP_STATUS
ES_ScopeDebugFrontend_MessageSet::CssElementSelection::SetPseudoSelectorListItem(UINT32 i, ES_ScopeDebugFrontend_MessageSet::PseudoSelector v) 
{
	has_bits_.Reference().SetBit(2);
	OP_ASSERT(i < _pseudoSelectorList.GetCount());
	return _pseudoSelectorList.Replace(i, static_cast<INT32>(v));
}


void
ES_ScopeDebugFrontend_MessageSet::CssElementSelection::SetPseudoElement(ES_ScopeDebugFrontend_MessageSet::PseudoSelector v) 
{
	has_bits_.Reference().SetBit(3);
	_pseudoElement = static_cast<ES_ScopeDebugFrontend_MessageSet::PseudoSelector>(v);
}

// END: CssElementSelection: Implementation

//   END: Message: CssElementSelection

//   BEGIN: Message: CssIndexMap
/*static*/
const OpProtobufMessage *
ES_ScopeDebugFrontend_MessageSet::CssIndexMap::GetMessageDescriptor(ES_ScopeDebugFrontend_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[ES_ScopeDebugFrontend_Descriptors::_gen_MessageOffs_css_index_map_];
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
						ES_ScopeDebugFrontend_MessageSet::CssIndexMap,
						_nameList
						);

	message = OP_NEW(OpProtobufMessage,
					(ES_ScopeDebugFrontend_Descriptors::_gen_MsgID_css_index_map_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(ES_ScopeDebugFrontend_MessageSet::CssIndexMap, has_bits_),
					OP_PROTO_OFFSETOF(ES_ScopeDebugFrontend_MessageSet::CssIndexMap, encoded_size_),
					"CssIndexMap",
					OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::CssIndexMap>::Make,
					OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::CssIndexMap>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: CssIndexMap: Implementation

// Setters

OpAutoVector<OpString> &
ES_ScopeDebugFrontend_MessageSet::CssIndexMap::GetNameListRef() 
{
	has_bits_.Reference().SetBit(0);
	return _nameList;
}

// END: CssIndexMap: Implementation

//   END: Message: CssIndexMap

//   BEGIN: Message: CssStyleDeclarations
/*static*/
const OpProtobufMessage *
ES_ScopeDebugFrontend_MessageSet::CssStyleDeclarations::GetMessageDescriptor(ES_ScopeDebugFrontend_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[ES_ScopeDebugFrontend_Descriptors::_gen_MessageOffs_css_style_declarations_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::String,
						1,
						UNI_L("computedStyleList"),
						OpProtobufField::Repeated
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Message,
						2,
						UNI_L("nodeStyleList"),
						OpProtobufField::Repeated
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::CssStyleDeclarations,
						_computedStyleList
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::CssStyleDeclarations,
						_nodeStyleList
						);

	message = OP_NEW(OpProtobufMessage,
					(ES_ScopeDebugFrontend_Descriptors::_gen_MsgID_css_style_declarations_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(ES_ScopeDebugFrontend_MessageSet::CssStyleDeclarations, has_bits_),
					OP_PROTO_OFFSETOF(ES_ScopeDebugFrontend_MessageSet::CssStyleDeclarations, encoded_size_),
					"CssStyleDeclarations",
					OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::CssStyleDeclarations>::Make,
					OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::CssStyleDeclarations>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	fields[1].SetMessage(CssStyleDeclarations_NodeStyle::GetMessageDescriptor(descriptors));

	return message;
}

// BEGIN: CssStyleDeclarations: Implementation


// Setters

OpAutoVector<OpString> &
ES_ScopeDebugFrontend_MessageSet::CssStyleDeclarations::GetComputedStyleListRef() 
{
	has_bits_.Reference().SetBit(0);
	return _computedStyleList;
}


OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::CssStyleDeclarations_NodeStyle> &
ES_ScopeDebugFrontend_MessageSet::CssStyleDeclarations::GetNodeStyleListRef() 
{
	has_bits_.Reference().SetBit(1);
	return _nodeStyleList;
}

// END: CssStyleDeclarations: Implementation

//   END: Message: CssStyleDeclarations

//   BEGIN: Message: CssStylesheetList
/*static*/
const OpProtobufMessage *
ES_ScopeDebugFrontend_MessageSet::CssStylesheetList::GetMessageDescriptor(ES_ScopeDebugFrontend_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[ES_ScopeDebugFrontend_Descriptors::_gen_MessageOffs_css_stylesheet_list_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Message,
						1,
						UNI_L("stylesheetList"),
						OpProtobufField::Repeated
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::CssStylesheetList,
						_stylesheetList
						);

	message = OP_NEW(OpProtobufMessage,
					(ES_ScopeDebugFrontend_Descriptors::_gen_MsgID_css_stylesheet_list_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(ES_ScopeDebugFrontend_MessageSet::CssStylesheetList, has_bits_),
					OP_PROTO_OFFSETOF(ES_ScopeDebugFrontend_MessageSet::CssStylesheetList, encoded_size_),
					"CssStylesheetList",
					OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::CssStylesheetList>::Make,
					OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::CssStylesheetList>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	fields[0].SetMessage(CssStylesheetList_Stylesheet::GetMessageDescriptor(descriptors));

	return message;
}

// BEGIN: CssStylesheetList: Implementation


// Setters

OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::CssStylesheetList_Stylesheet> &
ES_ScopeDebugFrontend_MessageSet::CssStylesheetList::GetStylesheetListRef() 
{
	has_bits_.Reference().SetBit(0);
	return _stylesheetList;
}

// END: CssStylesheetList: Implementation

//   END: Message: CssStylesheetList

//   BEGIN: Message: CssStylesheetRules
/*static*/
const OpProtobufMessage *
ES_ScopeDebugFrontend_MessageSet::CssStylesheetRules::GetMessageDescriptor(ES_ScopeDebugFrontend_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[ES_ScopeDebugFrontend_Descriptors::_gen_MessageOffs_css_stylesheet_rules_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Message,
						1,
						UNI_L("ruleList"),
						OpProtobufField::Repeated
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::CssStylesheetRules,
						_ruleList
						);

	message = OP_NEW(OpProtobufMessage,
					(ES_ScopeDebugFrontend_Descriptors::_gen_MsgID_css_stylesheet_rules_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(ES_ScopeDebugFrontend_MessageSet::CssStylesheetRules, has_bits_),
					OP_PROTO_OFFSETOF(ES_ScopeDebugFrontend_MessageSet::CssStylesheetRules, encoded_size_),
					"CssStylesheetRules",
					OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::CssStylesheetRules>::Make,
					OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::CssStylesheetRules>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	fields[0].SetMessage(CssStylesheetRules_StylesheetRule::GetMessageDescriptor(descriptors));

	return message;
}

// BEGIN: CssStylesheetRules: Implementation


// Setters

OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::CssStylesheetRules_StylesheetRule> &
ES_ScopeDebugFrontend_MessageSet::CssStylesheetRules::GetRuleListRef() 
{
	has_bits_.Reference().SetBit(0);
	return _ruleList;
}

// END: CssStylesheetRules: Implementation

//   END: Message: CssStylesheetRules

//   BEGIN: Message: CssStylesheetSelection
/*static*/
const OpProtobufMessage *
ES_ScopeDebugFrontend_MessageSet::CssStylesheetSelection::GetMessageDescriptor(ES_ScopeDebugFrontend_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[ES_ScopeDebugFrontend_Descriptors::_gen_MessageOffs_css_stylesheet_selection_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Uint32,
						1,
						UNI_L("runtimeID"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Uint32,
						2,
						UNI_L("stylesheetID"),
						OpProtobufField::Required
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::CssStylesheetSelection,
						_runtimeID
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::CssStylesheetSelection,
						_stylesheetID
						);

	message = OP_NEW(OpProtobufMessage,
					(ES_ScopeDebugFrontend_Descriptors::_gen_MsgID_css_stylesheet_selection_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(ES_ScopeDebugFrontend_MessageSet::CssStylesheetSelection, has_bits_),
					OP_PROTO_OFFSETOF(ES_ScopeDebugFrontend_MessageSet::CssStylesheetSelection, encoded_size_),
					"CssStylesheetSelection",
					OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::CssStylesheetSelection>::Make,
					OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::CssStylesheetSelection>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: CssStylesheetSelection: Implementation


// END: CssStylesheetSelection: Implementation

//   END: Message: CssStylesheetSelection

//   BEGIN: Message: DomEvent
/*static*/
const OpProtobufMessage *
ES_ScopeDebugFrontend_MessageSet::DomEvent::GetMessageDescriptor(ES_ScopeDebugFrontend_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[ES_ScopeDebugFrontend_Descriptors::_gen_MessageOffs_dom_event_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Uint32,
						1,
						UNI_L("objectID"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Uint32,
						2,
						UNI_L("handlerID"),
						OpProtobufField::Required
						);
	fields[2] = OpProtobufField(
						OpProtobufFormat::String,
						3,
						UNI_L("eventType"),
						OpProtobufField::Required
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::DomEvent,
						_objectID
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::DomEvent,
						_handlerID
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::DomEvent,
						_eventType
						);

	message = OP_NEW(OpProtobufMessage,
					(ES_ScopeDebugFrontend_Descriptors::_gen_MsgID_dom_event_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(ES_ScopeDebugFrontend_MessageSet::DomEvent, has_bits_),
					OP_PROTO_OFFSETOF(ES_ScopeDebugFrontend_MessageSet::DomEvent, encoded_size_),
					"DomEvent",
					OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::DomEvent>::Make,
					OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::DomEvent>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: DomEvent: Implementation

// Setters

OP_STATUS
ES_ScopeDebugFrontend_MessageSet::DomEvent::SetEventType(const uni_char * v, int l) 
{
	return _eventType.Set(v, l);
}

// END: DomEvent: Implementation

//   END: Message: DomEvent

//   BEGIN: Message: DomParseError
/*static*/
const OpProtobufMessage *
ES_ScopeDebugFrontend_MessageSet::DomParseError::GetMessageDescriptor(ES_ScopeDebugFrontend_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[ES_ScopeDebugFrontend_Descriptors::_gen_MessageOffs_dom_parse_error_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Uint32,
						1,
						UNI_L("runtimeID"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Uint32,
						2,
						UNI_L("scriptID"),
						OpProtobufField::Required
						);
	fields[2] = OpProtobufField(
						OpProtobufFormat::Uint32,
						3,
						UNI_L("lineNumber"),
						OpProtobufField::Required
						);
	fields[3] = OpProtobufField(
						OpProtobufFormat::Uint32,
						4,
						UNI_L("offset"),
						OpProtobufField::Required
						);
	fields[4] = OpProtobufField(
						OpProtobufFormat::String,
						5,
						UNI_L("context"),
						OpProtobufField::Required
						);
	fields[5] = OpProtobufField(
						OpProtobufFormat::String,
						6,
						UNI_L("description"),
						OpProtobufField::Required
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::DomParseError,
						_runtimeID
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::DomParseError,
						_scriptID
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::DomParseError,
						_lineNumber
						);
	offsets[3] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::DomParseError,
						_offset
						);
	offsets[4] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::DomParseError,
						_context
						);
	offsets[5] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::DomParseError,
						_description
						);

	message = OP_NEW(OpProtobufMessage,
					(ES_ScopeDebugFrontend_Descriptors::_gen_MsgID_dom_parse_error_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(ES_ScopeDebugFrontend_MessageSet::DomParseError, has_bits_),
					OP_PROTO_OFFSETOF(ES_ScopeDebugFrontend_MessageSet::DomParseError, encoded_size_),
					"DomParseError",
					OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::DomParseError>::Make,
					OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::DomParseError>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: DomParseError: Implementation

// Setters

OP_STATUS
ES_ScopeDebugFrontend_MessageSet::DomParseError::SetContext(const uni_char * v, int l) 
{
	return _context.Set(v, l);
}


OP_STATUS
ES_ScopeDebugFrontend_MessageSet::DomParseError::SetDescription(const uni_char * v, int l) 
{
	return _description.Set(v, l);
}

// END: DomParseError: Implementation

//   END: Message: DomParseError

//   BEGIN: Message: DomTraversal
/*static*/
const OpProtobufMessage *
ES_ScopeDebugFrontend_MessageSet::DomTraversal::GetMessageDescriptor(ES_ScopeDebugFrontend_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[ES_ScopeDebugFrontend_Descriptors::_gen_MessageOffs_dom_traversal_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Uint32,
						1,
						UNI_L("objectID"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::String,
						2,
						UNI_L("traversal"),
						OpProtobufField::Required
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::DomTraversal,
						_objectID
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::DomTraversal,
						_traversal
						);

	message = OP_NEW(OpProtobufMessage,
					(ES_ScopeDebugFrontend_Descriptors::_gen_MsgID_dom_traversal_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(ES_ScopeDebugFrontend_MessageSet::DomTraversal, has_bits_),
					OP_PROTO_OFFSETOF(ES_ScopeDebugFrontend_MessageSet::DomTraversal, encoded_size_),
					"DomTraversal",
					OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::DomTraversal>::Make,
					OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::DomTraversal>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: DomTraversal: Implementation

// Setters

OP_STATUS
ES_ScopeDebugFrontend_MessageSet::DomTraversal::SetTraversal(const uni_char * v, int l) 
{
	return _traversal.Set(v, l);
}

// END: DomTraversal: Implementation

//   END: Message: DomTraversal

//   BEGIN: Message: EvalData
/*static*/
const OpProtobufMessage *
ES_ScopeDebugFrontend_MessageSet::EvalData::GetMessageDescriptor(ES_ScopeDebugFrontend_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[ES_ScopeDebugFrontend_Descriptors::_gen_MessageOffs_eval_data_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Uint32,
						1,
						UNI_L("runtimeID"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Uint32,
						2,
						UNI_L("threadID"),
						OpProtobufField::Required
						);
	fields[2] = OpProtobufField(
						OpProtobufFormat::Uint32,
						3,
						UNI_L("frameIndex"),
						OpProtobufField::Required
						);
	fields[3] = OpProtobufField(
						OpProtobufFormat::String,
						4,
						UNI_L("scriptData"),
						OpProtobufField::Required
						);
	fields[4] = OpProtobufField(
						OpProtobufFormat::Message,
						5,
						UNI_L("variableList"),
						OpProtobufField::Repeated
						);
	fields[5] = OpProtobufField(
						OpProtobufFormat::Bool,
						6,
						UNI_L("wantDebugging"),
						OpProtobufField::Optional
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::EvalData,
						_runtimeID
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::EvalData,
						_threadID
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::EvalData,
						_frameIndex
						);
	offsets[3] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::EvalData,
						_scriptData
						);
	offsets[4] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::EvalData,
						_variableList
						);
	offsets[5] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::EvalData,
						_wantDebugging
						);

	message = OP_NEW(OpProtobufMessage,
					(ES_ScopeDebugFrontend_Descriptors::_gen_MsgID_eval_data_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(ES_ScopeDebugFrontend_MessageSet::EvalData, has_bits_),
					OP_PROTO_OFFSETOF(ES_ScopeDebugFrontend_MessageSet::EvalData, encoded_size_),
					"EvalData",
					OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::EvalData>::Make,
					OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::EvalData>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	fields[4].SetMessage(EvalData_Variable::GetMessageDescriptor(descriptors));

	return message;
}

// BEGIN: EvalData: Implementation


// Setters

OP_STATUS
ES_ScopeDebugFrontend_MessageSet::EvalData::SetScriptData(const uni_char * v, int l) 
{
	return _scriptData.Set(v, l);
}


OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::EvalData_Variable> &
ES_ScopeDebugFrontend_MessageSet::EvalData::GetVariableListRef() 
{
	has_bits_.Reference().SetBit(4);
	return _variableList;
}

// END: EvalData: Implementation

//   END: Message: EvalData

//   BEGIN: Message: EvalResult
/*static*/
const OpProtobufMessage *
ES_ScopeDebugFrontend_MessageSet::EvalResult::GetMessageDescriptor(ES_ScopeDebugFrontend_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[ES_ScopeDebugFrontend_Descriptors::_gen_MessageOffs_eval_result_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::String,
						1,
						UNI_L("status"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::String,
						2,
						UNI_L("type"),
						OpProtobufField::Required
						);
	fields[2] = OpProtobufField(
						OpProtobufFormat::String,
						3,
						UNI_L("value"),
						OpProtobufField::Optional
						);
	fields[3] = OpProtobufField(
						OpProtobufFormat::Message,
						4,
						UNI_L("objectValue"),
						OpProtobufField::Optional
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::EvalResult,
						_status
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::EvalResult,
						_type
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::EvalResult,
						_value
						);
	offsets[3] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::EvalResult,
						_objectValue
						);

	message = OP_NEW(OpProtobufMessage,
					(ES_ScopeDebugFrontend_Descriptors::_gen_MsgID_eval_result_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(ES_ScopeDebugFrontend_MessageSet::EvalResult, has_bits_),
					OP_PROTO_OFFSETOF(ES_ScopeDebugFrontend_MessageSet::EvalResult, encoded_size_),
					"EvalResult",
					OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::EvalResult>::Make,
					OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::EvalResult>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	fields[3].SetMessage(ObjectValue::GetMessageDescriptor(descriptors));

	return message;
}

// BEGIN: EvalResult: Implementation

// Setters

OP_STATUS
ES_ScopeDebugFrontend_MessageSet::EvalResult::SetStatus(const uni_char * v, int l) 
{
	return _status.Set(v, l);
}


OpString &
ES_ScopeDebugFrontend_MessageSet::EvalResult::GetTypeRef() 
{
	return _type;
}


OP_STATUS
ES_ScopeDebugFrontend_MessageSet::EvalResult::SetType(const uni_char * v, int l) 
{
	return _type.Set(v, l);
}


OP_STATUS
ES_ScopeDebugFrontend_MessageSet::EvalResult::SetValue(const uni_char * v, int l) 
{
	has_bits_.Reference().SetBit(2);
	return _value.Set(v, l);
}


void
ES_ScopeDebugFrontend_MessageSet::EvalResult::SetObjectValue(ES_ScopeDebugFrontend_MessageSet::ObjectValue * v) 
{
	has_bits_.Reference().SetBit(3);
	OP_DELETE(_objectValue);
	_objectValue = v;
}

// END: EvalResult: Implementation

//   END: Message: EvalResult

//   BEGIN: Message: EventBreakpoint
/*static*/
const OpProtobufMessage *
ES_ScopeDebugFrontend_MessageSet::EventBreakpoint::GetMessageDescriptor(ES_ScopeDebugFrontend_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[ES_ScopeDebugFrontend_Descriptors::_gen_MessageOffs_event_breakpoint_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Uint32,
						1,
						UNI_L("breakpointID"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::String,
						2,
						UNI_L("eventType"),
						OpProtobufField::Required
						);
	fields[2] = OpProtobufField(
						OpProtobufFormat::Uint32,
						3,
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
						ES_ScopeDebugFrontend_MessageSet::EventBreakpoint,
						_breakpointID
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::EventBreakpoint,
						_eventType
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::EventBreakpoint,
						_windowID
						);

	message = OP_NEW(OpProtobufMessage,
					(ES_ScopeDebugFrontend_Descriptors::_gen_MsgID_event_breakpoint_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(ES_ScopeDebugFrontend_MessageSet::EventBreakpoint, has_bits_),
					OP_PROTO_OFFSETOF(ES_ScopeDebugFrontend_MessageSet::EventBreakpoint, encoded_size_),
					"EventBreakpoint",
					OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::EventBreakpoint>::Make,
					OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::EventBreakpoint>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: EventBreakpoint: Implementation

// Setters

OP_STATUS
ES_ScopeDebugFrontend_MessageSet::EventBreakpoint::SetEventType(const uni_char * v, int l) 
{
	return _eventType.Set(v, l);
}

// END: EventBreakpoint: Implementation

//   END: Message: EventBreakpoint

//   BEGIN: Message: EventHandler
/*static*/
const OpProtobufMessage *
ES_ScopeDebugFrontend_MessageSet::EventHandler::GetMessageDescriptor(ES_ScopeDebugFrontend_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[ES_ScopeDebugFrontend_Descriptors::_gen_MessageOffs_event_handler_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Uint32,
						1,
						UNI_L("handlerID"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Uint32,
						2,
						UNI_L("objectID"),
						OpProtobufField::Required
						);
	fields[2] = OpProtobufField(
						OpProtobufFormat::String,
						3,
						UNI_L("namespace"),
						OpProtobufField::Required
						);
	fields[3] = OpProtobufField(
						OpProtobufFormat::String,
						4,
						UNI_L("eventType"),
						OpProtobufField::Required
						);
	fields[4] = OpProtobufField(
						OpProtobufFormat::Bool,
						5,
						UNI_L("preventDefaultHandler"),
						OpProtobufField::Required
						);
	fields[5] = OpProtobufField(
						OpProtobufFormat::Bool,
						6,
						UNI_L("stopPropagation"),
						OpProtobufField::Required
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::EventHandler,
						_handlerID
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::EventHandler,
						_objectID
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::EventHandler,
						_namespace
						);
	offsets[3] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::EventHandler,
						_eventType
						);
	offsets[4] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::EventHandler,
						_preventDefaultHandler
						);
	offsets[5] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::EventHandler,
						_stopPropagation
						);

	message = OP_NEW(OpProtobufMessage,
					(ES_ScopeDebugFrontend_Descriptors::_gen_MsgID_event_handler_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(ES_ScopeDebugFrontend_MessageSet::EventHandler, has_bits_),
					OP_PROTO_OFFSETOF(ES_ScopeDebugFrontend_MessageSet::EventHandler, encoded_size_),
					"EventHandler",
					OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::EventHandler>::Make,
					OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::EventHandler>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: EventHandler: Implementation

// Setters

OP_STATUS
ES_ScopeDebugFrontend_MessageSet::EventHandler::SetNamespace(const uni_char * v, int l) 
{
	return _namespace.Set(v, l);
}


OP_STATUS
ES_ScopeDebugFrontend_MessageSet::EventHandler::SetEventType(const uni_char * v, int l) 
{
	return _eventType.Set(v, l);
}

// END: EventHandler: Implementation

//   END: Message: EventHandler

//   BEGIN: Message: EventHandlerID
/*static*/
const OpProtobufMessage *
ES_ScopeDebugFrontend_MessageSet::EventHandlerID::GetMessageDescriptor(ES_ScopeDebugFrontend_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[ES_ScopeDebugFrontend_Descriptors::_gen_MessageOffs_event_handler_id_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Uint32,
						1,
						UNI_L("handlerID"),
						OpProtobufField::Required
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::EventHandlerID,
						_handlerID
						);

	message = OP_NEW(OpProtobufMessage,
					(ES_ScopeDebugFrontend_Descriptors::_gen_MsgID_event_handler_id_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(ES_ScopeDebugFrontend_MessageSet::EventHandlerID, has_bits_),
					OP_PROTO_OFFSETOF(ES_ScopeDebugFrontend_MessageSet::EventHandlerID, encoded_size_),
					"EventHandlerID",
					OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::EventHandlerID>::Make,
					OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::EventHandlerID>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: EventHandlerID: Implementation


// END: EventHandlerID: Implementation

//   END: Message: EventHandlerID

//   BEGIN: Message: EventListener
/*static*/
const OpProtobufMessage *
ES_ScopeDebugFrontend_MessageSet::EventListener::GetMessageDescriptor(ES_ScopeDebugFrontend_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[ES_ScopeDebugFrontend_Descriptors::_gen_MessageOffs_event_listener_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::String,
						1,
						UNI_L("eventType"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Int32,
						2,
						UNI_L("origin"),
						OpProtobufField::Required
						, NULL // const OpProtobufMessage *message
						, 0 // int message_id
						, ES_ScopeDebugFrontend_Descriptors::_gen_EnumID_EventListener_Origin // unsigned enum_id
						);
	fields[2] = OpProtobufField(
						OpProtobufFormat::Message,
						3,
						UNI_L("position"),
						OpProtobufField::Optional
						);
	fields[3] = OpProtobufField(
						OpProtobufFormat::Bool,
						4,
						UNI_L("useCapture"),
						OpProtobufField::Optional
						);
	fields[4] = OpProtobufField(
						OpProtobufFormat::Uint32,
						5,
						UNI_L("listenerObjectID"),
						OpProtobufField::Optional
						);
	fields[5] = OpProtobufField(
						OpProtobufFormat::String,
						6,
						UNI_L("listenerScriptData"),
						OpProtobufField::Optional
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::EventListener,
						_eventType
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::EventListener,
						_origin
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::EventListener,
						_position
						);
	offsets[3] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::EventListener,
						_useCapture
						);
	offsets[4] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::EventListener,
						_listenerObjectID
						);
	offsets[5] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::EventListener,
						_listenerScriptData
						);

	message = OP_NEW(OpProtobufMessage,
					(ES_ScopeDebugFrontend_Descriptors::_gen_MsgID_event_listener_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(ES_ScopeDebugFrontend_MessageSet::EventListener, has_bits_),
					OP_PROTO_OFFSETOF(ES_ScopeDebugFrontend_MessageSet::EventListener, encoded_size_),
					"EventListener",
					OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::EventListener>::Make,
					OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::EventListener>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	fields[2].SetMessage(Position::GetMessageDescriptor(descriptors));

	return message;
}

// BEGIN: EventListener: Implementation

// Enum value EventListener.Origin.EVENT_TARGET
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const ES_ScopeDebugFrontend_MessageSet::EventListener_Origin ES_ScopeDebugFrontend_MessageSet::EventListener::ORIGIN_EVENT_TARGET;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)


// Enum value EventListener.Origin.ATTRIBUTE
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const ES_ScopeDebugFrontend_MessageSet::EventListener_Origin ES_ScopeDebugFrontend_MessageSet::EventListener::ORIGIN_ATTRIBUTE;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)



// Setters

OP_STATUS
ES_ScopeDebugFrontend_MessageSet::EventListener::SetEventType(const uni_char * v, int l) 
{
	return _eventType.Set(v, l);
}


OP_STATUS
ES_ScopeDebugFrontend_MessageSet::EventListener::SetEventType(const char * v, int l) 
{
	return _eventType.Set(v, l);
}


void
ES_ScopeDebugFrontend_MessageSet::EventListener::SetOrigin(ES_ScopeDebugFrontend_MessageSet::EventListener_Origin v) 
{
	_origin = static_cast<ES_ScopeDebugFrontend_MessageSet::EventListener_Origin>(v);
}


void
ES_ScopeDebugFrontend_MessageSet::EventListener::SetPosition(ES_ScopeDebugFrontend_MessageSet::Position * v) 
{
	has_bits_.Reference().SetBit(2);
	OP_DELETE(_position);
	_position = v;
}


OP_STATUS
ES_ScopeDebugFrontend_MessageSet::EventListener::SetListenerScriptData(const uni_char * v, int l) 
{
	has_bits_.Reference().SetBit(5);
	return _listenerScriptData.Set(v, l);
}

// END: EventListener: Implementation

//   END: Message: EventListener

//   BEGIN: Message: EventNames
/*static*/
const OpProtobufMessage *
ES_ScopeDebugFrontend_MessageSet::EventNames::GetMessageDescriptor(ES_ScopeDebugFrontend_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[ES_ScopeDebugFrontend_Descriptors::_gen_MessageOffs_event_names_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Uint32,
						1,
						UNI_L("runtimeID"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Uint32,
						2,
						UNI_L("objectID"),
						OpProtobufField::Required
						);
	fields[2] = OpProtobufField(
						OpProtobufFormat::String,
						3,
						UNI_L("eventNameList"),
						OpProtobufField::Repeated
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::EventNames,
						_runtimeID
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::EventNames,
						_objectID
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::EventNames,
						_eventNameList
						);

	message = OP_NEW(OpProtobufMessage,
					(ES_ScopeDebugFrontend_Descriptors::_gen_MsgID_event_names_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(ES_ScopeDebugFrontend_MessageSet::EventNames, has_bits_),
					OP_PROTO_OFFSETOF(ES_ScopeDebugFrontend_MessageSet::EventNames, encoded_size_),
					"EventNames",
					OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::EventNames>::Make,
					OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::EventNames>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: EventNames: Implementation

// Setters

OpAutoVector<OpString> &
ES_ScopeDebugFrontend_MessageSet::EventNames::GetEventNameListRef() 
{
	has_bits_.Reference().SetBit(2);
	return _eventNameList;
}

// END: EventNames: Implementation

//   END: Message: EventNames

//   BEGIN: Message: EventTarget
/*static*/
const OpProtobufMessage *
ES_ScopeDebugFrontend_MessageSet::EventTarget::GetMessageDescriptor(ES_ScopeDebugFrontend_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[ES_ScopeDebugFrontend_Descriptors::_gen_MessageOffs_event_target_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Uint32,
						1,
						UNI_L("objectID"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Message,
						2,
						UNI_L("eventListenerList"),
						OpProtobufField::Repeated
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::EventTarget,
						_objectID
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::EventTarget,
						_eventListenerList
						);

	message = OP_NEW(OpProtobufMessage,
					(ES_ScopeDebugFrontend_Descriptors::_gen_MsgID_event_target_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(ES_ScopeDebugFrontend_MessageSet::EventTarget, has_bits_),
					OP_PROTO_OFFSETOF(ES_ScopeDebugFrontend_MessageSet::EventTarget, encoded_size_),
					"EventTarget",
					OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::EventTarget>::Make,
					OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::EventTarget>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	fields[1].SetMessage(EventListener::GetMessageDescriptor(descriptors));

	return message;
}

// BEGIN: EventTarget: Implementation

// Setters

ES_ScopeDebugFrontend_MessageSet::EventListener *
ES_ScopeDebugFrontend_MessageSet::EventTarget::AppendNewEventListenerList() 
{
	has_bits_.Reference().SetBit(1);
	OpAutoPtr<ES_ScopeDebugFrontend_MessageSet::EventListener> tmp(OP_NEW(ES_ScopeDebugFrontend_MessageSet::EventListener, ()));
	if (!tmp.get())
	    return NULL;
	RETURN_VALUE_IF_ERROR(_eventListenerList.Add(tmp.get()), NULL);
	return tmp.release();
}

// END: EventTarget: Implementation

//   END: Message: EventTarget

//   BEGIN: Message: EventTargets
/*static*/
const OpProtobufMessage *
ES_ScopeDebugFrontend_MessageSet::EventTargets::GetMessageDescriptor(ES_ScopeDebugFrontend_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[ES_ScopeDebugFrontend_Descriptors::_gen_MessageOffs_event_targets_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Uint32,
						1,
						UNI_L("runtimeID"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Message,
						2,
						UNI_L("targetList"),
						OpProtobufField::Repeated
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::EventTargets,
						_runtimeID
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::EventTargets,
						_targetList
						);

	message = OP_NEW(OpProtobufMessage,
					(ES_ScopeDebugFrontend_Descriptors::_gen_MsgID_event_targets_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(ES_ScopeDebugFrontend_MessageSet::EventTargets, has_bits_),
					OP_PROTO_OFFSETOF(ES_ScopeDebugFrontend_MessageSet::EventTargets, encoded_size_),
					"EventTargets",
					OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::EventTargets>::Make,
					OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::EventTargets>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	fields[1].SetMessage(EventTarget::GetMessageDescriptor(descriptors));

	return message;
}

// BEGIN: EventTargets: Implementation

// Setters

ES_ScopeDebugFrontend_MessageSet::EventTarget *
ES_ScopeDebugFrontend_MessageSet::EventTargets::AppendNewTargetList() 
{
	has_bits_.Reference().SetBit(1);
	OpAutoPtr<ES_ScopeDebugFrontend_MessageSet::EventTarget> tmp(OP_NEW(ES_ScopeDebugFrontend_MessageSet::EventTarget, ()));
	if (!tmp.get())
	    return NULL;
	RETURN_VALUE_IF_ERROR(_targetList.Add(tmp.get()), NULL);
	return tmp.release();
}

// END: EventTargets: Implementation

//   END: Message: EventTargets

//   BEGIN: Message: ExamineList
/*static*/
const OpProtobufMessage *
ES_ScopeDebugFrontend_MessageSet::ExamineList::GetMessageDescriptor(ES_ScopeDebugFrontend_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[ES_ScopeDebugFrontend_Descriptors::_gen_MessageOffs_examine_list_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Uint32,
						1,
						UNI_L("runtimeID"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Uint32,
						2,
						UNI_L("objectList"),
						OpProtobufField::Repeated
						);
	fields[2] = OpProtobufField(
						OpProtobufFormat::Bool,
						3,
						UNI_L("examinePrototypes"),
						OpProtobufField::Optional
						);
	fields[3] = OpProtobufField(
						OpProtobufFormat::Bool,
						4,
						UNI_L("skipNonenumerables"),
						OpProtobufField::Optional
						);
	fields[4] = OpProtobufField(
						OpProtobufFormat::Bool,
						5,
						UNI_L("filterProperties"),
						OpProtobufField::Optional
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::ExamineList,
						_runtimeID
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::ExamineList,
						_objectList
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::ExamineList,
						_examinePrototypes
						);
	offsets[3] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::ExamineList,
						_skipNonenumerables
						);
	offsets[4] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::ExamineList,
						_filterProperties
						);

	message = OP_NEW(OpProtobufMessage,
					(ES_ScopeDebugFrontend_Descriptors::_gen_MsgID_examine_list_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(ES_ScopeDebugFrontend_MessageSet::ExamineList, has_bits_),
					OP_PROTO_OFFSETOF(ES_ScopeDebugFrontend_MessageSet::ExamineList, encoded_size_),
					"ExamineList",
					OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::ExamineList>::Make,
					OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::ExamineList>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: ExamineList: Implementation

// Setters

OpValueVector<UINT32> &
ES_ScopeDebugFrontend_MessageSet::ExamineList::GetObjectListRef() 
{
	has_bits_.Reference().SetBit(1);
	return _objectList;
}


OP_STATUS
ES_ScopeDebugFrontend_MessageSet::ExamineList::AppendToObjectList(UINT32 v) 
{
	has_bits_.Reference().SetBit(1);
	return _objectList.Add(v);
}

// END: ExamineList: Implementation

//   END: Message: ExamineList

//   BEGIN: Message: FrameSelection
/*static*/
const OpProtobufMessage *
ES_ScopeDebugFrontend_MessageSet::FrameSelection::GetMessageDescriptor(ES_ScopeDebugFrontend_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[ES_ScopeDebugFrontend_Descriptors::_gen_MessageOffs_frame_selection_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Uint32,
						1,
						UNI_L("runtimeID"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Uint32,
						2,
						UNI_L("threadID"),
						OpProtobufField::Required
						);
	fields[2] = OpProtobufField(
						OpProtobufFormat::Uint32,
						3,
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
						ES_ScopeDebugFrontend_MessageSet::FrameSelection,
						_runtimeID
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::FrameSelection,
						_threadID
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::FrameSelection,
						_frameID
						);

	message = OP_NEW(OpProtobufMessage,
					(ES_ScopeDebugFrontend_Descriptors::_gen_MsgID_frame_selection_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(ES_ScopeDebugFrontend_MessageSet::FrameSelection, has_bits_),
					OP_PROTO_OFFSETOF(ES_ScopeDebugFrontend_MessageSet::FrameSelection, encoded_size_),
					"FrameSelection",
					OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::FrameSelection>::Make,
					OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::FrameSelection>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: FrameSelection: Implementation


// END: FrameSelection: Implementation

//   END: Message: FrameSelection

//   BEGIN: Message: FunctionCallCompletedInfo
/*static*/
const OpProtobufMessage *
ES_ScopeDebugFrontend_MessageSet::FunctionCallCompletedInfo::GetMessageDescriptor(ES_ScopeDebugFrontend_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[ES_ScopeDebugFrontend_Descriptors::_gen_MessageOffs_function_call_completed_info_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Uint32,
						1,
						UNI_L("runtimeID"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Uint32,
						2,
						UNI_L("threadID"),
						OpProtobufField::Required
						);
	fields[2] = OpProtobufField(
						OpProtobufFormat::Double,
						3,
						UNI_L("time"),
						OpProtobufField::Required
						);
	fields[3] = OpProtobufField(
						OpProtobufFormat::Int32,
						4,
						UNI_L("result"),
						OpProtobufField::Required
						, NULL // const OpProtobufMessage *message
						, 0 // int message_id
						, ES_ScopeDebugFrontend_Descriptors::_gen_EnumID_FunctionCallCompletedInfo_Result // unsigned enum_id
						);
	fields[4] = OpProtobufField(
						OpProtobufFormat::Message,
						5,
						UNI_L("returnValue"),
						OpProtobufField::Optional
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::FunctionCallCompletedInfo,
						_runtimeID
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::FunctionCallCompletedInfo,
						_threadID
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::FunctionCallCompletedInfo,
						_time
						);
	offsets[3] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::FunctionCallCompletedInfo,
						_result
						);
	offsets[4] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::FunctionCallCompletedInfo,
						_returnValue
						);

	message = OP_NEW(OpProtobufMessage,
					(ES_ScopeDebugFrontend_Descriptors::_gen_MsgID_function_call_completed_info_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(ES_ScopeDebugFrontend_MessageSet::FunctionCallCompletedInfo, has_bits_),
					OP_PROTO_OFFSETOF(ES_ScopeDebugFrontend_MessageSet::FunctionCallCompletedInfo, encoded_size_),
					"FunctionCallCompletedInfo",
					OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::FunctionCallCompletedInfo>::Make,
					OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::FunctionCallCompletedInfo>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	fields[4].SetMessage(Value::GetMessageDescriptor(descriptors));

	return message;
}

// BEGIN: FunctionCallCompletedInfo: Implementation

// Enum value FunctionCallCompletedInfo.Result.SUCCESS
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const ES_ScopeDebugFrontend_MessageSet::FunctionCallCompletedInfo_Result ES_ScopeDebugFrontend_MessageSet::FunctionCallCompletedInfo::RESULT_SUCCESS;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)


// Enum value FunctionCallCompletedInfo.Result.EXCEPTION
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const ES_ScopeDebugFrontend_MessageSet::FunctionCallCompletedInfo_Result ES_ScopeDebugFrontend_MessageSet::FunctionCallCompletedInfo::RESULT_EXCEPTION;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)



// Setters

void
ES_ScopeDebugFrontend_MessageSet::FunctionCallCompletedInfo::SetResult(ES_ScopeDebugFrontend_MessageSet::FunctionCallCompletedInfo_Result v) 
{
	_result = static_cast<ES_ScopeDebugFrontend_MessageSet::FunctionCallCompletedInfo_Result>(v);
}


void
ES_ScopeDebugFrontend_MessageSet::FunctionCallCompletedInfo::SetReturnValue(ES_ScopeDebugFrontend_MessageSet::Value * v) 
{
	has_bits_.Reference().SetBit(4);
	OP_DELETE(_returnValue);
	_returnValue = v;
}

// END: FunctionCallCompletedInfo: Implementation

//   END: Message: FunctionCallCompletedInfo

//   BEGIN: Message: FunctionCallStartingInfo
/*static*/
const OpProtobufMessage *
ES_ScopeDebugFrontend_MessageSet::FunctionCallStartingInfo::GetMessageDescriptor(ES_ScopeDebugFrontend_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[ES_ScopeDebugFrontend_Descriptors::_gen_MessageOffs_function_call_starting_info_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Uint32,
						1,
						UNI_L("runtimeID"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Uint32,
						2,
						UNI_L("threadID"),
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
						UNI_L("thisObject"),
						OpProtobufField::Required
						);
	fields[4] = OpProtobufField(
						OpProtobufFormat::Message,
						5,
						UNI_L("functionObject"),
						OpProtobufField::Required
						);
	fields[5] = OpProtobufField(
						OpProtobufFormat::Message,
						6,
						UNI_L("argumentList"),
						OpProtobufField::Repeated
						);
	fields[6] = OpProtobufField(
						OpProtobufFormat::Message,
						7,
						UNI_L("position"),
						OpProtobufField::Optional
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::FunctionCallStartingInfo,
						_runtimeID
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::FunctionCallStartingInfo,
						_threadID
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::FunctionCallStartingInfo,
						_time
						);
	offsets[3] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::FunctionCallStartingInfo,
						_thisObject
						);
	offsets[4] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::FunctionCallStartingInfo,
						_functionObject
						);
	offsets[5] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::FunctionCallStartingInfo,
						_argumentList
						);
	offsets[6] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::FunctionCallStartingInfo,
						_position
						);

	message = OP_NEW(OpProtobufMessage,
					(ES_ScopeDebugFrontend_Descriptors::_gen_MsgID_function_call_starting_info_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(ES_ScopeDebugFrontend_MessageSet::FunctionCallStartingInfo, has_bits_),
					OP_PROTO_OFFSETOF(ES_ScopeDebugFrontend_MessageSet::FunctionCallStartingInfo, encoded_size_),
					"FunctionCallStartingInfo",
					OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::FunctionCallStartingInfo>::Make,
					OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::FunctionCallStartingInfo>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	fields[3].SetMessage(ObjectValue::GetMessageDescriptor(descriptors));
	fields[4].SetMessage(ObjectValue::GetMessageDescriptor(descriptors));
	fields[5].SetMessage(Value::GetMessageDescriptor(descriptors));
	fields[6].SetMessage(Position::GetMessageDescriptor(descriptors));

	return message;
}

// BEGIN: FunctionCallStartingInfo: Implementation

// Setters

ES_ScopeDebugFrontend_MessageSet::ObjectValue &
ES_ScopeDebugFrontend_MessageSet::FunctionCallStartingInfo::GetThisObjectRef() 
{
	return _thisObject;
}


ES_ScopeDebugFrontend_MessageSet::ObjectValue &
ES_ScopeDebugFrontend_MessageSet::FunctionCallStartingInfo::GetFunctionObjectRef() 
{
	return _functionObject;
}


ES_ScopeDebugFrontend_MessageSet::Value *
ES_ScopeDebugFrontend_MessageSet::FunctionCallStartingInfo::AppendNewArgumentList() 
{
	has_bits_.Reference().SetBit(5);
	OpAutoPtr<ES_ScopeDebugFrontend_MessageSet::Value> tmp(OP_NEW(ES_ScopeDebugFrontend_MessageSet::Value, ()));
	if (!tmp.get())
	    return NULL;
	RETURN_VALUE_IF_ERROR(_argumentList.Add(tmp.get()), NULL);
	return tmp.release();
}


void
ES_ScopeDebugFrontend_MessageSet::FunctionCallStartingInfo::SetPosition(ES_ScopeDebugFrontend_MessageSet::Position * v) 
{
	has_bits_.Reference().SetBit(6);
	OP_DELETE(_position);
	_position = v;
}

// END: FunctionCallStartingInfo: Implementation

//   END: Message: FunctionCallStartingInfo

//   BEGIN: Message: FunctionFilter
/*static*/
const OpProtobufMessage *
ES_ScopeDebugFrontend_MessageSet::FunctionFilter::GetMessageDescriptor(ES_ScopeDebugFrontend_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[ES_ScopeDebugFrontend_Descriptors::_gen_MessageOffs_function_filter_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::String,
						1,
						UNI_L("classList"),
						OpProtobufField::Repeated
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::FunctionFilter,
						_classList
						);

	message = OP_NEW(OpProtobufMessage,
					(ES_ScopeDebugFrontend_Descriptors::_gen_MsgID_function_filter_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(ES_ScopeDebugFrontend_MessageSet::FunctionFilter, has_bits_),
					OP_PROTO_OFFSETOF(ES_ScopeDebugFrontend_MessageSet::FunctionFilter, encoded_size_),
					"FunctionFilter",
					OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::FunctionFilter>::Make,
					OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::FunctionFilter>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: FunctionFilter: Implementation

// Setters

OpAutoVector<OpString> &
ES_ScopeDebugFrontend_MessageSet::FunctionFilter::GetClassListRef() 
{
	has_bits_.Reference().SetBit(0);
	return _classList;
}

// END: FunctionFilter: Implementation

//   END: Message: FunctionFilter

//   BEGIN: Message: FunctionPosition
/*static*/
const OpProtobufMessage *
ES_ScopeDebugFrontend_MessageSet::FunctionPositionList_FunctionPosition::GetMessageDescriptor(ES_ScopeDebugFrontend_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[ES_ScopeDebugFrontend_Descriptors::_gen_MessageOffs_function_position_list_function_position_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Uint32,
						1,
						UNI_L("objectID"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Message,
						2,
						UNI_L("position"),
						OpProtobufField::Optional
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::FunctionPositionList_FunctionPosition,
						_objectID
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::FunctionPositionList_FunctionPosition,
						_position
						);

	message = OP_NEW(OpProtobufMessage,
					(ES_ScopeDebugFrontend_Descriptors::_gen_MsgID_function_position_list_function_position_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(ES_ScopeDebugFrontend_MessageSet::FunctionPositionList_FunctionPosition, has_bits_),
					OP_PROTO_OFFSETOF(ES_ScopeDebugFrontend_MessageSet::FunctionPositionList_FunctionPosition, encoded_size_),
					"FunctionPosition",
					OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::FunctionPositionList_FunctionPosition>::Make,
					OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::FunctionPositionList_FunctionPosition>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	fields[1].SetMessage(Position::GetMessageDescriptor(descriptors));
	const OpProtobufMessage *parent = ES_ScopeDebugFrontend_MessageSet::FunctionPositionList::GetMessageDescriptor(descriptors);
	if (!parent)
		return NULL;
	message->SetParentId(parent->GetInternalId());

	return message;
}

// BEGIN: FunctionPositionList.FunctionPosition: Implementation

// Setters

void
ES_ScopeDebugFrontend_MessageSet::FunctionPositionList_FunctionPosition::SetPosition(ES_ScopeDebugFrontend_MessageSet::Position * v) 
{
	has_bits_.Reference().SetBit(1);
	OP_DELETE(_position);
	_position = v;
}

// END: FunctionPositionList.FunctionPosition: Implementation

//   END: Message: FunctionPosition

//   BEGIN: Message: FunctionPositionList
/*static*/
const OpProtobufMessage *
ES_ScopeDebugFrontend_MessageSet::FunctionPositionList::GetMessageDescriptor(ES_ScopeDebugFrontend_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[ES_ScopeDebugFrontend_Descriptors::_gen_MessageOffs_function_position_list_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Message,
						1,
						UNI_L("functionPositionList"),
						OpProtobufField::Repeated
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::FunctionPositionList,
						_functionPositionList
						);

	message = OP_NEW(OpProtobufMessage,
					(ES_ScopeDebugFrontend_Descriptors::_gen_MsgID_function_position_list_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(ES_ScopeDebugFrontend_MessageSet::FunctionPositionList, has_bits_),
					OP_PROTO_OFFSETOF(ES_ScopeDebugFrontend_MessageSet::FunctionPositionList, encoded_size_),
					"FunctionPositionList",
					OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::FunctionPositionList>::Make,
					OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::FunctionPositionList>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	fields[0].SetMessage(FunctionPositionList_FunctionPosition::GetMessageDescriptor(descriptors));

	return message;
}

// BEGIN: FunctionPositionList: Implementation


// Setters

ES_ScopeDebugFrontend_MessageSet::FunctionPositionList_FunctionPosition *
ES_ScopeDebugFrontend_MessageSet::FunctionPositionList::AppendNewFunctionPositionList() 
{
	has_bits_.Reference().SetBit(0);
	OpAutoPtr<ES_ScopeDebugFrontend_MessageSet::FunctionPositionList_FunctionPosition> tmp(OP_NEW(ES_ScopeDebugFrontend_MessageSet::FunctionPositionList_FunctionPosition, ()));
	if (!tmp.get())
	    return NULL;
	RETURN_VALUE_IF_ERROR(_functionPositionList.Add(tmp.get()), NULL);
	return tmp.release();
}

// END: FunctionPositionList: Implementation

//   END: Message: FunctionPositionList

//   BEGIN: Message: GetEventListenersArg
/*static*/
const OpProtobufMessage *
ES_ScopeDebugFrontend_MessageSet::GetEventListenersArg::GetMessageDescriptor(ES_ScopeDebugFrontend_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[ES_ScopeDebugFrontend_Descriptors::_gen_MessageOffs_get_event_listeners_arg_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Uint32,
						1,
						UNI_L("runtimeID"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Uint32,
						2,
						UNI_L("objectList"),
						OpProtobufField::Repeated
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::GetEventListenersArg,
						_runtimeID
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::GetEventListenersArg,
						_objectList
						);

	message = OP_NEW(OpProtobufMessage,
					(ES_ScopeDebugFrontend_Descriptors::_gen_MsgID_get_event_listeners_arg_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(ES_ScopeDebugFrontend_MessageSet::GetEventListenersArg, has_bits_),
					OP_PROTO_OFFSETOF(ES_ScopeDebugFrontend_MessageSet::GetEventListenersArg, encoded_size_),
					"GetEventListenersArg",
					OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::GetEventListenersArg>::Make,
					OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::GetEventListenersArg>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: GetEventListenersArg: Implementation

// Setters

OpValueVector<UINT32> &
ES_ScopeDebugFrontend_MessageSet::GetEventListenersArg::GetObjectListRef() 
{
	has_bits_.Reference().SetBit(1);
	return _objectList;
}


OP_STATUS
ES_ScopeDebugFrontend_MessageSet::GetEventListenersArg::AppendToObjectList(UINT32 v) 
{
	has_bits_.Reference().SetBit(1);
	return _objectList.Add(v);
}

// END: GetEventListenersArg: Implementation

//   END: Message: GetEventListenersArg

//   BEGIN: Message: GetEventNamesArg
/*static*/
const OpProtobufMessage *
ES_ScopeDebugFrontend_MessageSet::GetEventNamesArg::GetMessageDescriptor(ES_ScopeDebugFrontend_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[ES_ScopeDebugFrontend_Descriptors::_gen_MessageOffs_get_event_names_arg_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Uint32,
						1,
						UNI_L("runtimeID"),
						OpProtobufField::Required
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::GetEventNamesArg,
						_runtimeID
						);

	message = OP_NEW(OpProtobufMessage,
					(ES_ScopeDebugFrontend_Descriptors::_gen_MsgID_get_event_names_arg_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(ES_ScopeDebugFrontend_MessageSet::GetEventNamesArg, has_bits_),
					OP_PROTO_OFFSETOF(ES_ScopeDebugFrontend_MessageSet::GetEventNamesArg, encoded_size_),
					"GetEventNamesArg",
					OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::GetEventNamesArg>::Make,
					OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::GetEventNamesArg>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: GetEventNamesArg: Implementation


// END: GetEventNamesArg: Implementation

//   END: Message: GetEventNamesArg

//   BEGIN: Message: GetFunctionPositionsArg
/*static*/
const OpProtobufMessage *
ES_ScopeDebugFrontend_MessageSet::GetFunctionPositionsArg::GetMessageDescriptor(ES_ScopeDebugFrontend_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[ES_ScopeDebugFrontend_Descriptors::_gen_MessageOffs_get_function_positions_arg_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Uint32,
						1,
						UNI_L("runtimeID"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Uint32,
						2,
						UNI_L("objectList"),
						OpProtobufField::Repeated
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::GetFunctionPositionsArg,
						_runtimeID
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::GetFunctionPositionsArg,
						_objectList
						);

	message = OP_NEW(OpProtobufMessage,
					(ES_ScopeDebugFrontend_Descriptors::_gen_MsgID_get_function_positions_arg_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(ES_ScopeDebugFrontend_MessageSet::GetFunctionPositionsArg, has_bits_),
					OP_PROTO_OFFSETOF(ES_ScopeDebugFrontend_MessageSet::GetFunctionPositionsArg, encoded_size_),
					"GetFunctionPositionsArg",
					OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::GetFunctionPositionsArg>::Make,
					OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::GetFunctionPositionsArg>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: GetFunctionPositionsArg: Implementation

// Setters

OpValueVector<UINT32> &
ES_ScopeDebugFrontend_MessageSet::GetFunctionPositionsArg::GetObjectListRef() 
{
	has_bits_.Reference().SetBit(1);
	return _objectList;
}


OP_STATUS
ES_ScopeDebugFrontend_MessageSet::GetFunctionPositionsArg::AppendToObjectList(UINT32 v) 
{
	has_bits_.Reference().SetBit(1);
	return _objectList.Add(v);
}

// END: GetFunctionPositionsArg: Implementation

//   END: Message: GetFunctionPositionsArg

//   BEGIN: Message: NodeInfo
/*static*/
const OpProtobufMessage *
ES_ScopeDebugFrontend_MessageSet::NodeInfo::GetMessageDescriptor(ES_ScopeDebugFrontend_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[ES_ScopeDebugFrontend_Descriptors::_gen_MessageOffs_node_info_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Uint32,
						1,
						UNI_L("objectID"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Int32,
						2,
						UNI_L("type"),
						OpProtobufField::Required
						, NULL // const OpProtobufMessage *message
						, 0 // int message_id
						, ES_ScopeDebugFrontend_Descriptors::_gen_EnumID_NodeType // unsigned enum_id
						);
	fields[2] = OpProtobufField(
						OpProtobufFormat::String,
						3,
						UNI_L("name"),
						OpProtobufField::Required
						);
	fields[3] = OpProtobufField(
						OpProtobufFormat::Uint32,
						4,
						UNI_L("depth"),
						OpProtobufField::Required
						);
	fields[4] = OpProtobufField(
						OpProtobufFormat::String,
						5,
						UNI_L("namespacePrefix"),
						OpProtobufField::Optional
						);
	fields[5] = OpProtobufField(
						OpProtobufFormat::Message,
						6,
						UNI_L("attributeList"),
						OpProtobufField::Repeated
						);
	fields[6] = OpProtobufField(
						OpProtobufFormat::Uint32,
						7,
						UNI_L("childrenLength"),
						OpProtobufField::Optional
						);
	fields[7] = OpProtobufField(
						OpProtobufFormat::String,
						8,
						UNI_L("value"),
						OpProtobufField::Optional
						);
	fields[8] = OpProtobufField(
						OpProtobufFormat::String,
						9,
						UNI_L("publicID"),
						OpProtobufField::Optional
						);
	fields[9] = OpProtobufField(
						OpProtobufFormat::String,
						10,
						UNI_L("systemID"),
						OpProtobufField::Optional
						);
	fields[10] = OpProtobufField(
						OpProtobufFormat::Uint32,
						11,
						UNI_L("runtimeID"),
						OpProtobufField::Optional
						);
	fields[11] = OpProtobufField(
						OpProtobufFormat::Message,
						12,
						UNI_L("contentDocument"),
						OpProtobufField::Optional
						);
	fields[12] = OpProtobufField(
						OpProtobufFormat::Message,
						13,
						UNI_L("frameElement"),
						OpProtobufField::Optional
						);
	fields[13] = OpProtobufField(
						OpProtobufFormat::Int32,
						14,
						UNI_L("matchReason"),
						OpProtobufField::Optional
						, NULL // const OpProtobufMessage *message
						, 0 // int message_id
						, ES_ScopeDebugFrontend_Descriptors::_gen_EnumID_NodeInfo_MatchReason // unsigned enum_id
						);
	fields[14] = OpProtobufField(
						OpProtobufFormat::Message,
						15,
						UNI_L("pseudoElementList"),
						OpProtobufField::Repeated
						);
	fields[15] = OpProtobufField(
						OpProtobufFormat::Message,
						16,
						UNI_L("eventListenerList"),
						OpProtobufField::Repeated
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::NodeInfo,
						_objectID
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::NodeInfo,
						_type
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::NodeInfo,
						_name
						);
	offsets[3] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::NodeInfo,
						_depth
						);
	offsets[4] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::NodeInfo,
						_namespacePrefix
						);
	offsets[5] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::NodeInfo,
						_attributeList
						);
	offsets[6] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::NodeInfo,
						_childrenLength
						);
	offsets[7] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::NodeInfo,
						_value
						);
	offsets[8] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::NodeInfo,
						_publicID
						);
	offsets[9] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::NodeInfo,
						_systemID
						);
	offsets[10] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::NodeInfo,
						_runtimeID
						);
	offsets[11] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::NodeInfo,
						_contentDocument
						);
	offsets[12] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::NodeInfo,
						_frameElement
						);
	offsets[13] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::NodeInfo,
						_matchReason
						);
	offsets[14] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::NodeInfo,
						_pseudoElementList
						);
	offsets[15] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::NodeInfo,
						_eventListenerList
						);

	message = OP_NEW(OpProtobufMessage,
					(ES_ScopeDebugFrontend_Descriptors::_gen_MsgID_node_info_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(ES_ScopeDebugFrontend_MessageSet::NodeInfo, has_bits_),
					OP_PROTO_OFFSETOF(ES_ScopeDebugFrontend_MessageSet::NodeInfo, encoded_size_),
					"NodeInfo",
					OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::NodeInfo>::Make,
					OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::NodeInfo>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	fields[5].SetMessage(NodeInfo_Attribute::GetMessageDescriptor(descriptors));
	fields[11].SetMessage(ObjectReference::GetMessageDescriptor(descriptors));
	fields[12].SetMessage(ObjectReference::GetMessageDescriptor(descriptors));
	fields[14].SetMessage(PseudoElement::GetMessageDescriptor(descriptors));
	fields[15].SetMessage(EventListener::GetMessageDescriptor(descriptors));

	return message;
}

// BEGIN: NodeInfo: Implementation

// Enum value NodeInfo.MatchReason.TRAVERSAL
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const ES_ScopeDebugFrontend_MessageSet::NodeInfo_MatchReason ES_ScopeDebugFrontend_MessageSet::NodeInfo::MATCHREASON_TRAVERSAL;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)


// Enum value NodeInfo.MatchReason.SEARCH_ANCESTOR
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const ES_ScopeDebugFrontend_MessageSet::NodeInfo_MatchReason ES_ScopeDebugFrontend_MessageSet::NodeInfo::MATCHREASON_SEARCH_ANCESTOR;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)


// Enum value NodeInfo.MatchReason.SEARCH_HIT
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const ES_ScopeDebugFrontend_MessageSet::NodeInfo_MatchReason ES_ScopeDebugFrontend_MessageSet::NodeInfo::MATCHREASON_SEARCH_HIT;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)





// Setters

void
ES_ScopeDebugFrontend_MessageSet::NodeInfo::SetType(ES_ScopeDebugFrontend_MessageSet::NodeType v) 
{
	_type = static_cast<ES_ScopeDebugFrontend_MessageSet::NodeType>(v);
}


OP_STATUS
ES_ScopeDebugFrontend_MessageSet::NodeInfo::SetName(const uni_char * v, int l) 
{
	return _name.Set(v, l);
}


OP_STATUS
ES_ScopeDebugFrontend_MessageSet::NodeInfo::SetNamespacePrefix(const uni_char * v, int l) 
{
	has_bits_.Reference().SetBit(4);
	return _namespacePrefix.Set(v, l);
}


OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::NodeInfo_Attribute> &
ES_ScopeDebugFrontend_MessageSet::NodeInfo::GetAttributeListRef() 
{
	has_bits_.Reference().SetBit(5);
	return _attributeList;
}


OP_STATUS
ES_ScopeDebugFrontend_MessageSet::NodeInfo::SetValue(const uni_char * v, int l) 
{
	has_bits_.Reference().SetBit(7);
	return _value.Set(v, l);
}


OP_STATUS
ES_ScopeDebugFrontend_MessageSet::NodeInfo::SetPublicID(const uni_char * v, int l) 
{
	has_bits_.Reference().SetBit(8);
	return _publicID.Set(v, l);
}


OP_STATUS
ES_ScopeDebugFrontend_MessageSet::NodeInfo::SetSystemID(const uni_char * v, int l) 
{
	has_bits_.Reference().SetBit(9);
	return _systemID.Set(v, l);
}


void
ES_ScopeDebugFrontend_MessageSet::NodeInfo::SetContentDocument(ES_ScopeDebugFrontend_MessageSet::ObjectReference * v) 
{
	has_bits_.Reference().SetBit(11);
	OP_DELETE(_contentDocument);
	_contentDocument = v;
}


void
ES_ScopeDebugFrontend_MessageSet::NodeInfo::SetFrameElement(ES_ScopeDebugFrontend_MessageSet::ObjectReference * v) 
{
	has_bits_.Reference().SetBit(12);
	OP_DELETE(_frameElement);
	_frameElement = v;
}


void
ES_ScopeDebugFrontend_MessageSet::NodeInfo::SetMatchReason(ES_ScopeDebugFrontend_MessageSet::NodeInfo_MatchReason v) 
{
	has_bits_.Reference().SetBit(13);
	_matchReason = static_cast<ES_ScopeDebugFrontend_MessageSet::NodeInfo_MatchReason>(v);
}


OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::PseudoElement> &
ES_ScopeDebugFrontend_MessageSet::NodeInfo::GetPseudoElementListRef() 
{
	has_bits_.Reference().SetBit(14);
	return _pseudoElementList;
}


ES_ScopeDebugFrontend_MessageSet::EventListener *
ES_ScopeDebugFrontend_MessageSet::NodeInfo::AppendNewEventListenerList() 
{
	has_bits_.Reference().SetBit(15);
	OpAutoPtr<ES_ScopeDebugFrontend_MessageSet::EventListener> tmp(OP_NEW(ES_ScopeDebugFrontend_MessageSet::EventListener, ()));
	if (!tmp.get())
	    return NULL;
	RETURN_VALUE_IF_ERROR(_eventListenerList.Add(tmp.get()), NULL);
	return tmp.release();
}

// END: NodeInfo: Implementation

//   END: Message: NodeInfo

//   BEGIN: Message: NodeList
/*static*/
const OpProtobufMessage *
ES_ScopeDebugFrontend_MessageSet::NodeList::GetMessageDescriptor(ES_ScopeDebugFrontend_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[ES_ScopeDebugFrontend_Descriptors::_gen_MessageOffs_node_list_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Message,
						1,
						UNI_L("nodeList"),
						OpProtobufField::Repeated
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::NodeList,
						_nodeList
						);

	message = OP_NEW(OpProtobufMessage,
					(ES_ScopeDebugFrontend_Descriptors::_gen_MsgID_node_list_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(ES_ScopeDebugFrontend_MessageSet::NodeList, has_bits_),
					OP_PROTO_OFFSETOF(ES_ScopeDebugFrontend_MessageSet::NodeList, encoded_size_),
					"NodeList",
					OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::NodeList>::Make,
					OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::NodeList>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	fields[0].SetMessage(NodeInfo::GetMessageDescriptor(descriptors));

	return message;
}

// BEGIN: NodeList: Implementation

// Setters

OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::NodeInfo> &
ES_ScopeDebugFrontend_MessageSet::NodeList::GetNodeListRef() 
{
	has_bits_.Reference().SetBit(0);
	return _nodeList;
}

// END: NodeList: Implementation

//   END: Message: NodeList

//   BEGIN: Message: NodeStyle
/*static*/
const OpProtobufMessage *
ES_ScopeDebugFrontend_MessageSet::CssStyleDeclarations_NodeStyle::GetMessageDescriptor(ES_ScopeDebugFrontend_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[ES_ScopeDebugFrontend_Descriptors::_gen_MessageOffs_css_style_declarations_node_style_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Uint32,
						1,
						UNI_L("objectID"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::String,
						2,
						UNI_L("elementName"),
						OpProtobufField::Required
						);
	fields[2] = OpProtobufField(
						OpProtobufFormat::Message,
						3,
						UNI_L("styleList"),
						OpProtobufField::Repeated
						);
	fields[3] = OpProtobufField(
						OpProtobufFormat::Int32,
						4,
						UNI_L("pseudoElement"),
						OpProtobufField::Optional
						, NULL // const OpProtobufMessage *message
						, 0 // int message_id
						, ES_ScopeDebugFrontend_Descriptors::_gen_EnumID_PseudoSelector // unsigned enum_id
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::CssStyleDeclarations_NodeStyle,
						_objectID
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::CssStyleDeclarations_NodeStyle,
						_elementName
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::CssStyleDeclarations_NodeStyle,
						_styleList
						);
	offsets[3] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::CssStyleDeclarations_NodeStyle,
						_pseudoElement
						);

	message = OP_NEW(OpProtobufMessage,
					(ES_ScopeDebugFrontend_Descriptors::_gen_MsgID_css_style_declarations_node_style_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(ES_ScopeDebugFrontend_MessageSet::CssStyleDeclarations_NodeStyle, has_bits_),
					OP_PROTO_OFFSETOF(ES_ScopeDebugFrontend_MessageSet::CssStyleDeclarations_NodeStyle, encoded_size_),
					"NodeStyle",
					OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::CssStyleDeclarations_NodeStyle>::Make,
					OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::CssStyleDeclarations_NodeStyle>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	fields[2].SetMessage(CssStyleDeclarations_NodeStyle_StyleDeclaration::GetMessageDescriptor(descriptors));
	const OpProtobufMessage *parent = ES_ScopeDebugFrontend_MessageSet::CssStyleDeclarations::GetMessageDescriptor(descriptors);
	if (!parent)
		return NULL;
	message->SetParentId(parent->GetInternalId());

	return message;
}

// BEGIN: CssStyleDeclarations.NodeStyle: Implementation


// Setters

OP_STATUS
ES_ScopeDebugFrontend_MessageSet::CssStyleDeclarations_NodeStyle::SetElementName(const uni_char * v, int l) 
{
	return _elementName.Set(v, l);
}


OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::CssStyleDeclarations_NodeStyle_StyleDeclaration> &
ES_ScopeDebugFrontend_MessageSet::CssStyleDeclarations_NodeStyle::GetStyleListRef() 
{
	has_bits_.Reference().SetBit(2);
	return _styleList;
}


void
ES_ScopeDebugFrontend_MessageSet::CssStyleDeclarations_NodeStyle::SetPseudoElement(ES_ScopeDebugFrontend_MessageSet::PseudoSelector v) 
{
	has_bits_.Reference().SetBit(3);
	_pseudoElement = static_cast<ES_ScopeDebugFrontend_MessageSet::PseudoSelector>(v);
}

// END: CssStyleDeclarations.NodeStyle: Implementation

//   END: Message: NodeStyle

//   BEGIN: Message: ObjectChainList
/*static*/
const OpProtobufMessage *
ES_ScopeDebugFrontend_MessageSet::ObjectChainList::GetMessageDescriptor(ES_ScopeDebugFrontend_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[ES_ScopeDebugFrontend_Descriptors::_gen_MessageOffs_object_chain_list_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Message,
						1,
						UNI_L("objectChainList"),
						OpProtobufField::Repeated
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::ObjectChainList,
						_objectChainList
						);

	message = OP_NEW(OpProtobufMessage,
					(ES_ScopeDebugFrontend_Descriptors::_gen_MsgID_object_chain_list_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(ES_ScopeDebugFrontend_MessageSet::ObjectChainList, has_bits_),
					OP_PROTO_OFFSETOF(ES_ScopeDebugFrontend_MessageSet::ObjectChainList, encoded_size_),
					"ObjectChainList",
					OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::ObjectChainList>::Make,
					OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::ObjectChainList>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	fields[0].SetMessage(ObjectList::GetMessageDescriptor(descriptors));

	return message;
}

// BEGIN: ObjectChainList: Implementation

// Setters

OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::ObjectList> &
ES_ScopeDebugFrontend_MessageSet::ObjectChainList::GetObjectChainListRef() 
{
	has_bits_.Reference().SetBit(0);
	return _objectChainList;
}

// END: ObjectChainList: Implementation

//   END: Message: ObjectChainList

//   BEGIN: Message: ObjectInfo
/*static*/
const OpProtobufMessage *
ES_ScopeDebugFrontend_MessageSet::ObjectInfo::GetMessageDescriptor(ES_ScopeDebugFrontend_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[ES_ScopeDebugFrontend_Descriptors::_gen_MessageOffs_object_info_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Message,
						1,
						UNI_L("value"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Message,
						2,
						UNI_L("propertyList"),
						OpProtobufField::Repeated
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::ObjectInfo,
						_value
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::ObjectInfo,
						_propertyList
						);

	message = OP_NEW(OpProtobufMessage,
					(ES_ScopeDebugFrontend_Descriptors::_gen_MsgID_object_info_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(ES_ScopeDebugFrontend_MessageSet::ObjectInfo, has_bits_),
					OP_PROTO_OFFSETOF(ES_ScopeDebugFrontend_MessageSet::ObjectInfo, encoded_size_),
					"ObjectInfo",
					OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::ObjectInfo>::Make,
					OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::ObjectInfo>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	fields[0].SetMessage(ObjectValue::GetMessageDescriptor(descriptors));
	fields[1].SetMessage(ObjectInfo_Property::GetMessageDescriptor(descriptors));

	return message;
}

// BEGIN: ObjectInfo: Implementation


// Setters

ES_ScopeDebugFrontend_MessageSet::ObjectValue &
ES_ScopeDebugFrontend_MessageSet::ObjectInfo::GetValueRef() 
{
	return _value;
}


OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::ObjectInfo_Property> &
ES_ScopeDebugFrontend_MessageSet::ObjectInfo::GetPropertyListRef() 
{
	has_bits_.Reference().SetBit(1);
	return _propertyList;
}

// END: ObjectInfo: Implementation

//   END: Message: ObjectInfo

//   BEGIN: Message: ObjectList
/*static*/
const OpProtobufMessage *
ES_ScopeDebugFrontend_MessageSet::ObjectList::GetMessageDescriptor(ES_ScopeDebugFrontend_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[ES_ScopeDebugFrontend_Descriptors::_gen_MessageOffs_object_list_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Message,
						1,
						UNI_L("objectList"),
						OpProtobufField::Repeated
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::ObjectList,
						_objectList
						);

	message = OP_NEW(OpProtobufMessage,
					(ES_ScopeDebugFrontend_Descriptors::_gen_MsgID_object_list_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(ES_ScopeDebugFrontend_MessageSet::ObjectList, has_bits_),
					OP_PROTO_OFFSETOF(ES_ScopeDebugFrontend_MessageSet::ObjectList, encoded_size_),
					"ObjectList",
					OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::ObjectList>::Make,
					OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::ObjectList>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	fields[0].SetMessage(ObjectInfo::GetMessageDescriptor(descriptors));

	return message;
}

// BEGIN: ObjectList: Implementation

// Setters

OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::ObjectInfo> &
ES_ScopeDebugFrontend_MessageSet::ObjectList::GetObjectListRef() 
{
	has_bits_.Reference().SetBit(0);
	return _objectList;
}

// END: ObjectList: Implementation

//   END: Message: ObjectList

//   BEGIN: Message: ObjectReference
/*static*/
const OpProtobufMessage *
ES_ScopeDebugFrontend_MessageSet::ObjectReference::GetMessageDescriptor(ES_ScopeDebugFrontend_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[ES_ScopeDebugFrontend_Descriptors::_gen_MessageOffs_object_reference_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Uint32,
						1,
						UNI_L("runtimeID"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Uint32,
						2,
						UNI_L("objectID"),
						OpProtobufField::Required
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::ObjectReference,
						_runtimeID
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::ObjectReference,
						_objectID
						);

	message = OP_NEW(OpProtobufMessage,
					(ES_ScopeDebugFrontend_Descriptors::_gen_MsgID_object_reference_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(ES_ScopeDebugFrontend_MessageSet::ObjectReference, has_bits_),
					OP_PROTO_OFFSETOF(ES_ScopeDebugFrontend_MessageSet::ObjectReference, encoded_size_),
					"ObjectReference",
					OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::ObjectReference>::Make,
					OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::ObjectReference>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: ObjectReference: Implementation


// END: ObjectReference: Implementation

//   END: Message: ObjectReference

//   BEGIN: Message: ObjectSelection
/*static*/
const OpProtobufMessage *
ES_ScopeDebugFrontend_MessageSet::ObjectSelection::GetMessageDescriptor(ES_ScopeDebugFrontend_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[ES_ScopeDebugFrontend_Descriptors::_gen_MessageOffs_object_selection_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Uint32,
						1,
						UNI_L("objectID"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Uint32,
						2,
						UNI_L("windowID"),
						OpProtobufField::Required
						);
	fields[2] = OpProtobufField(
						OpProtobufFormat::Uint32,
						3,
						UNI_L("runtimeID"),
						OpProtobufField::Optional
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::ObjectSelection,
						_objectID
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::ObjectSelection,
						_windowID
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::ObjectSelection,
						_runtimeID
						);

	message = OP_NEW(OpProtobufMessage,
					(ES_ScopeDebugFrontend_Descriptors::_gen_MsgID_object_selection_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(ES_ScopeDebugFrontend_MessageSet::ObjectSelection, has_bits_),
					OP_PROTO_OFFSETOF(ES_ScopeDebugFrontend_MessageSet::ObjectSelection, encoded_size_),
					"ObjectSelection",
					OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::ObjectSelection>::Make,
					OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::ObjectSelection>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: ObjectSelection: Implementation


// END: ObjectSelection: Implementation

//   END: Message: ObjectSelection

//   BEGIN: Message: ObjectValue
/*static*/
const OpProtobufMessage *
ES_ScopeDebugFrontend_MessageSet::ObjectValue::GetMessageDescriptor(ES_ScopeDebugFrontend_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[ES_ScopeDebugFrontend_Descriptors::_gen_MessageOffs_object_value_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Uint32,
						1,
						UNI_L("objectID"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Bool,
						2,
						UNI_L("isCallable"),
						OpProtobufField::Required
						);
	fields[2] = OpProtobufField(
						OpProtobufFormat::String,
						3,
						UNI_L("type"),
						OpProtobufField::Required
						);
	fields[3] = OpProtobufField(
						OpProtobufFormat::Uint32,
						4,
						UNI_L("prototypeID"),
						OpProtobufField::Optional
						);
	fields[4] = OpProtobufField(
						OpProtobufFormat::String,
						5,
						UNI_L("className"),
						OpProtobufField::Optional
						);
	fields[5] = OpProtobufField(
						OpProtobufFormat::String,
						6,
						UNI_L("functionName"),
						OpProtobufField::Optional
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::ObjectValue,
						_objectID
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::ObjectValue,
						_isCallable
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::ObjectValue,
						_type
						);
	offsets[3] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::ObjectValue,
						_prototypeID
						);
	offsets[4] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::ObjectValue,
						_className
						);
	offsets[5] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::ObjectValue,
						_functionName
						);

	message = OP_NEW(OpProtobufMessage,
					(ES_ScopeDebugFrontend_Descriptors::_gen_MsgID_object_value_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(ES_ScopeDebugFrontend_MessageSet::ObjectValue, has_bits_),
					OP_PROTO_OFFSETOF(ES_ScopeDebugFrontend_MessageSet::ObjectValue, encoded_size_),
					"ObjectValue",
					OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::ObjectValue>::Make,
					OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::ObjectValue>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: ObjectValue: Implementation

// Setters

OP_STATUS
ES_ScopeDebugFrontend_MessageSet::ObjectValue::SetType(const uni_char * v, int l) 
{
	return _type.Set(v, l);
}


OP_STATUS
ES_ScopeDebugFrontend_MessageSet::ObjectValue::SetClassName(const uni_char * v, int l) 
{
	has_bits_.Reference().SetBit(4);
	return _className.Set(v, l);
}


OP_STATUS
ES_ScopeDebugFrontend_MessageSet::ObjectValue::SetFunctionName(const uni_char * v, int l) 
{
	has_bits_.Reference().SetBit(5);
	return _functionName.Set(v, l);
}

// END: ObjectValue: Implementation

//   END: Message: ObjectValue

//   BEGIN: Message: Position
/*static*/
const OpProtobufMessage *
ES_ScopeDebugFrontend_MessageSet::Position::GetMessageDescriptor(ES_ScopeDebugFrontend_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[ES_ScopeDebugFrontend_Descriptors::_gen_MessageOffs_position_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Uint32,
						1,
						UNI_L("scriptID"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Uint32,
						2,
						UNI_L("lineNumber"),
						OpProtobufField::Required
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::Position,
						_scriptID
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::Position,
						_lineNumber
						);

	message = OP_NEW(OpProtobufMessage,
					(ES_ScopeDebugFrontend_Descriptors::_gen_MsgID_position_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(ES_ScopeDebugFrontend_MessageSet::Position, has_bits_),
					OP_PROTO_OFFSETOF(ES_ScopeDebugFrontend_MessageSet::Position, encoded_size_),
					"Position",
					OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::Position>::Make,
					OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::Position>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: Position: Implementation


// END: Position: Implementation

//   END: Message: Position

//   BEGIN: Message: Property
/*static*/
const OpProtobufMessage *
ES_ScopeDebugFrontend_MessageSet::ObjectInfo_Property::GetMessageDescriptor(ES_ScopeDebugFrontend_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[ES_ScopeDebugFrontend_Descriptors::_gen_MessageOffs_object_info_property_];
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
						UNI_L("type"),
						OpProtobufField::Required
						);
	fields[2] = OpProtobufField(
						OpProtobufFormat::String,
						3,
						UNI_L("value"),
						OpProtobufField::Optional
						);
	fields[3] = OpProtobufField(
						OpProtobufFormat::Message,
						4,
						UNI_L("objectValue"),
						OpProtobufField::Optional
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::ObjectInfo_Property,
						_name
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::ObjectInfo_Property,
						_type
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::ObjectInfo_Property,
						_value
						);
	offsets[3] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::ObjectInfo_Property,
						_objectValue
						);

	message = OP_NEW(OpProtobufMessage,
					(ES_ScopeDebugFrontend_Descriptors::_gen_MsgID_object_info_property_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(ES_ScopeDebugFrontend_MessageSet::ObjectInfo_Property, has_bits_),
					OP_PROTO_OFFSETOF(ES_ScopeDebugFrontend_MessageSet::ObjectInfo_Property, encoded_size_),
					"Property",
					OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::ObjectInfo_Property>::Make,
					OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::ObjectInfo_Property>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	fields[3].SetMessage(ObjectValue::GetMessageDescriptor(descriptors));
	const OpProtobufMessage *parent = ES_ScopeDebugFrontend_MessageSet::ObjectInfo::GetMessageDescriptor(descriptors);
	if (!parent)
		return NULL;
	message->SetParentId(parent->GetInternalId());

	return message;
}

// BEGIN: ObjectInfo.Property: Implementation

// Setters

OP_STATUS
ES_ScopeDebugFrontend_MessageSet::ObjectInfo_Property::SetName(const uni_char * v, int l) 
{
	return _name.Set(v, l);
}


OpString &
ES_ScopeDebugFrontend_MessageSet::ObjectInfo_Property::GetTypeRef() 
{
	return _type;
}


OP_STATUS
ES_ScopeDebugFrontend_MessageSet::ObjectInfo_Property::SetType(const uni_char * v, int l) 
{
	return _type.Set(v, l);
}


OP_STATUS
ES_ScopeDebugFrontend_MessageSet::ObjectInfo_Property::SetValue(const uni_char * v, int l) 
{
	has_bits_.Reference().SetBit(2);
	return _value.Set(v, l);
}


void
ES_ScopeDebugFrontend_MessageSet::ObjectInfo_Property::SetObjectValue(ES_ScopeDebugFrontend_MessageSet::ObjectValue * v) 
{
	has_bits_.Reference().SetBit(3);
	OP_DELETE(_objectValue);
	_objectValue = v;
}

// END: ObjectInfo.Property: Implementation

//   END: Message: Property

//   BEGIN: Message: PropertyFilter
/*static*/
const OpProtobufMessage *
ES_ScopeDebugFrontend_MessageSet::PropertyFilter::GetMessageDescriptor(ES_ScopeDebugFrontend_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[ES_ScopeDebugFrontend_Descriptors::_gen_MessageOffs_property_filter_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Message,
						1,
						UNI_L("classMaskList"),
						OpProtobufField::Repeated
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::PropertyFilter,
						_classMaskList
						);

	message = OP_NEW(OpProtobufMessage,
					(ES_ScopeDebugFrontend_Descriptors::_gen_MsgID_property_filter_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(ES_ScopeDebugFrontend_MessageSet::PropertyFilter, has_bits_),
					OP_PROTO_OFFSETOF(ES_ScopeDebugFrontend_MessageSet::PropertyFilter, encoded_size_),
					"PropertyFilter",
					OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::PropertyFilter>::Make,
					OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::PropertyFilter>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	fields[0].SetMessage(PropertyFilter_ClassMask::GetMessageDescriptor(descriptors));

	return message;
}

// BEGIN: PropertyFilter: Implementation


// Setters

OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::PropertyFilter_ClassMask> &
ES_ScopeDebugFrontend_MessageSet::PropertyFilter::GetClassMaskListRef() 
{
	has_bits_.Reference().SetBit(0);
	return _classMaskList;
}

// END: PropertyFilter: Implementation

//   END: Message: PropertyFilter

//   BEGIN: Message: PropertyMask
/*static*/
const OpProtobufMessage *
ES_ScopeDebugFrontend_MessageSet::PropertyFilter_ClassMask_PropertyMask::GetMessageDescriptor(ES_ScopeDebugFrontend_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[ES_ScopeDebugFrontend_Descriptors::_gen_MessageOffs_property_filter_class_mask_property_mask_];
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
						OpProtobufFormat::Uint32,
						2,
						UNI_L("type"),
						OpProtobufField::Optional
						);
	fields[2] = OpProtobufField(
						OpProtobufFormat::Bool,
						3,
						UNI_L("boolean"),
						OpProtobufField::Optional
						);
	fields[3] = OpProtobufField(
						OpProtobufFormat::Uint32,
						4,
						UNI_L("number"),
						OpProtobufField::Optional
						);
	fields[4] = OpProtobufField(
						OpProtobufFormat::String,
						5,
						UNI_L("string"),
						OpProtobufField::Optional
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::PropertyFilter_ClassMask_PropertyMask,
						_name
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::PropertyFilter_ClassMask_PropertyMask,
						_type
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::PropertyFilter_ClassMask_PropertyMask,
						_boolean
						);
	offsets[3] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::PropertyFilter_ClassMask_PropertyMask,
						_number
						);
	offsets[4] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::PropertyFilter_ClassMask_PropertyMask,
						_string
						);

	message = OP_NEW(OpProtobufMessage,
					(ES_ScopeDebugFrontend_Descriptors::_gen_MsgID_property_filter_class_mask_property_mask_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(ES_ScopeDebugFrontend_MessageSet::PropertyFilter_ClassMask_PropertyMask, has_bits_),
					OP_PROTO_OFFSETOF(ES_ScopeDebugFrontend_MessageSet::PropertyFilter_ClassMask_PropertyMask, encoded_size_),
					"PropertyMask",
					OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::PropertyFilter_ClassMask_PropertyMask>::Make,
					OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::PropertyFilter_ClassMask_PropertyMask>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	const OpProtobufMessage *parent = ES_ScopeDebugFrontend_MessageSet::PropertyFilter_ClassMask::GetMessageDescriptor(descriptors);
	if (!parent)
		return NULL;
	message->SetParentId(parent->GetInternalId());

	return message;
}

// BEGIN: PropertyFilter.ClassMask.PropertyMask: Implementation

// Setters

OP_STATUS
ES_ScopeDebugFrontend_MessageSet::PropertyFilter_ClassMask_PropertyMask::SetName(const uni_char * v, int l) 
{
	return _name.Set(v, l);
}


OP_STATUS
ES_ScopeDebugFrontend_MessageSet::PropertyFilter_ClassMask_PropertyMask::SetString(const uni_char * v, int l) 
{
	has_bits_.Reference().SetBit(4);
	return _string.Set(v, l);
}

// END: PropertyFilter.ClassMask.PropertyMask: Implementation

//   END: Message: PropertyMask

//   BEGIN: Message: PseudoElement
/*static*/
const OpProtobufMessage *
ES_ScopeDebugFrontend_MessageSet::PseudoElement::GetMessageDescriptor(ES_ScopeDebugFrontend_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[ES_ScopeDebugFrontend_Descriptors::_gen_MessageOffs_pseudo_element_];
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
						, ES_ScopeDebugFrontend_Descriptors::_gen_EnumID_PseudoElement_Type // unsigned enum_id
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::String,
						2,
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
						ES_ScopeDebugFrontend_MessageSet::PseudoElement,
						_type
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::PseudoElement,
						_content
						);

	message = OP_NEW(OpProtobufMessage,
					(ES_ScopeDebugFrontend_Descriptors::_gen_MsgID_pseudo_element_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(ES_ScopeDebugFrontend_MessageSet::PseudoElement, has_bits_),
					OP_PROTO_OFFSETOF(ES_ScopeDebugFrontend_MessageSet::PseudoElement, encoded_size_),
					"PseudoElement",
					OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::PseudoElement>::Make,
					OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::PseudoElement>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: PseudoElement: Implementation

// Enum value PseudoElement.Type.BEFORE
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const ES_ScopeDebugFrontend_MessageSet::PseudoElement_Type ES_ScopeDebugFrontend_MessageSet::PseudoElement::TYPE_BEFORE;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)


// Enum value PseudoElement.Type.AFTER
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const ES_ScopeDebugFrontend_MessageSet::PseudoElement_Type ES_ScopeDebugFrontend_MessageSet::PseudoElement::TYPE_AFTER;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)


// Enum value PseudoElement.Type.FIRST_LETTER
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const ES_ScopeDebugFrontend_MessageSet::PseudoElement_Type ES_ScopeDebugFrontend_MessageSet::PseudoElement::TYPE_FIRST_LETTER;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)


// Enum value PseudoElement.Type.FIRST_LINE
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const ES_ScopeDebugFrontend_MessageSet::PseudoElement_Type ES_ScopeDebugFrontend_MessageSet::PseudoElement::TYPE_FIRST_LINE;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)



// Setters

void
ES_ScopeDebugFrontend_MessageSet::PseudoElement::SetType(ES_ScopeDebugFrontend_MessageSet::PseudoElement_Type v) 
{
	_type = static_cast<ES_ScopeDebugFrontend_MessageSet::PseudoElement_Type>(v);
}


OP_STATUS
ES_ScopeDebugFrontend_MessageSet::PseudoElement::SetContent(const uni_char * v, int l) 
{
	has_bits_.Reference().SetBit(1);
	return _content.Set(v, l);
}

// END: PseudoElement: Implementation

//   END: Message: PseudoElement

//   BEGIN: Message: ReadyStateInfo
/*static*/
const OpProtobufMessage *
ES_ScopeDebugFrontend_MessageSet::ReadyStateInfo::GetMessageDescriptor(ES_ScopeDebugFrontend_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[ES_ScopeDebugFrontend_Descriptors::_gen_MessageOffs_ready_state_info_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Uint32,
						1,
						UNI_L("runtimeID"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Uint32,
						2,
						UNI_L("state"),
						OpProtobufField::Required
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::ReadyStateInfo,
						_runtimeID
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::ReadyStateInfo,
						_state
						);

	message = OP_NEW(OpProtobufMessage,
					(ES_ScopeDebugFrontend_Descriptors::_gen_MsgID_ready_state_info_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(ES_ScopeDebugFrontend_MessageSet::ReadyStateInfo, has_bits_),
					OP_PROTO_OFFSETOF(ES_ScopeDebugFrontend_MessageSet::ReadyStateInfo, encoded_size_),
					"ReadyStateInfo",
					OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::ReadyStateInfo>::Make,
					OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::ReadyStateInfo>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: ReadyStateInfo: Implementation


// END: ReadyStateInfo: Implementation

//   END: Message: ReadyStateInfo

//   BEGIN: Message: ReleaseObjectsArg
/*static*/
const OpProtobufMessage *
ES_ScopeDebugFrontend_MessageSet::ReleaseObjectsArg::GetMessageDescriptor(ES_ScopeDebugFrontend_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[ES_ScopeDebugFrontend_Descriptors::_gen_MessageOffs_release_objects_arg_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Uint32,
						1,
						UNI_L("objectList"),
						OpProtobufField::Repeated
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::ReleaseObjectsArg,
						_objectList
						);

	message = OP_NEW(OpProtobufMessage,
					(ES_ScopeDebugFrontend_Descriptors::_gen_MsgID_release_objects_arg_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(ES_ScopeDebugFrontend_MessageSet::ReleaseObjectsArg, has_bits_),
					OP_PROTO_OFFSETOF(ES_ScopeDebugFrontend_MessageSet::ReleaseObjectsArg, encoded_size_),
					"ReleaseObjectsArg",
					OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::ReleaseObjectsArg>::Make,
					OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::ReleaseObjectsArg>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: ReleaseObjectsArg: Implementation

// Setters

OpValueVector<UINT32> &
ES_ScopeDebugFrontend_MessageSet::ReleaseObjectsArg::GetObjectListRef() 
{
	has_bits_.Reference().SetBit(0);
	return _objectList;
}


OP_STATUS
ES_ScopeDebugFrontend_MessageSet::ReleaseObjectsArg::AppendToObjectList(UINT32 v) 
{
	has_bits_.Reference().SetBit(0);
	return _objectList.Add(v);
}

// END: ReleaseObjectsArg: Implementation

//   END: Message: ReleaseObjectsArg

//   BEGIN: Message: ReturnValue
/*static*/
const OpProtobufMessage *
ES_ScopeDebugFrontend_MessageSet::ReturnValue::GetMessageDescriptor(ES_ScopeDebugFrontend_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[ES_ScopeDebugFrontend_Descriptors::_gen_MessageOffs_return_value_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Message,
						1,
						UNI_L("value"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Message,
						4,
						UNI_L("functionFrom"),
						OpProtobufField::Required
						);
	fields[2] = OpProtobufField(
						OpProtobufFormat::Message,
						2,
						UNI_L("positionFrom"),
						OpProtobufField::Required
						);
	fields[3] = OpProtobufField(
						OpProtobufFormat::Message,
						3,
						UNI_L("positionTo"),
						OpProtobufField::Required
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::ReturnValue,
						_value
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::ReturnValue,
						_functionFrom
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::ReturnValue,
						_positionFrom
						);
	offsets[3] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::ReturnValue,
						_positionTo
						);

	message = OP_NEW(OpProtobufMessage,
					(ES_ScopeDebugFrontend_Descriptors::_gen_MsgID_return_value_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(ES_ScopeDebugFrontend_MessageSet::ReturnValue, has_bits_),
					OP_PROTO_OFFSETOF(ES_ScopeDebugFrontend_MessageSet::ReturnValue, encoded_size_),
					"ReturnValue",
					OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::ReturnValue>::Make,
					OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::ReturnValue>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	fields[0].SetMessage(Value::GetMessageDescriptor(descriptors));
	fields[1].SetMessage(ObjectValue::GetMessageDescriptor(descriptors));
	fields[2].SetMessage(Position::GetMessageDescriptor(descriptors));
	fields[3].SetMessage(Position::GetMessageDescriptor(descriptors));

	return message;
}

// BEGIN: ReturnValue: Implementation

// Setters

ES_ScopeDebugFrontend_MessageSet::Value &
ES_ScopeDebugFrontend_MessageSet::ReturnValue::GetValueRef() 
{
	return _value;
}


ES_ScopeDebugFrontend_MessageSet::ObjectValue &
ES_ScopeDebugFrontend_MessageSet::ReturnValue::GetFunctionFromRef() 
{
	return _functionFrom;
}


ES_ScopeDebugFrontend_MessageSet::Position &
ES_ScopeDebugFrontend_MessageSet::ReturnValue::GetPositionFromRef() 
{
	return _positionFrom;
}


ES_ScopeDebugFrontend_MessageSet::Position &
ES_ScopeDebugFrontend_MessageSet::ReturnValue::GetPositionToRef() 
{
	return _positionTo;
}

// END: ReturnValue: Implementation

//   END: Message: ReturnValue

//   BEGIN: Message: RuntimeID
/*static*/
const OpProtobufMessage *
ES_ScopeDebugFrontend_MessageSet::RuntimeID::GetMessageDescriptor(ES_ScopeDebugFrontend_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[ES_ScopeDebugFrontend_Descriptors::_gen_MessageOffs_runtime_id_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Uint32,
						1,
						UNI_L("runtimeID"),
						OpProtobufField::Required
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::RuntimeID,
						_runtimeID
						);

	message = OP_NEW(OpProtobufMessage,
					(ES_ScopeDebugFrontend_Descriptors::_gen_MsgID_runtime_id_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(ES_ScopeDebugFrontend_MessageSet::RuntimeID, has_bits_),
					OP_PROTO_OFFSETOF(ES_ScopeDebugFrontend_MessageSet::RuntimeID, encoded_size_),
					"RuntimeID",
					OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::RuntimeID>::Make,
					OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::RuntimeID>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: RuntimeID: Implementation


// END: RuntimeID: Implementation

//   END: Message: RuntimeID

//   BEGIN: Message: RuntimeInfo
/*static*/
const OpProtobufMessage *
ES_ScopeDebugFrontend_MessageSet::RuntimeInfo::GetMessageDescriptor(ES_ScopeDebugFrontend_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[ES_ScopeDebugFrontend_Descriptors::_gen_MessageOffs_runtime_info_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Uint32,
						1,
						UNI_L("runtimeID"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::String,
						2,
						UNI_L("htmlFramePath"),
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
						UNI_L("objectID"),
						OpProtobufField::Required
						);
	fields[4] = OpProtobufField(
						OpProtobufFormat::String,
						5,
						UNI_L("uri"),
						OpProtobufField::Required
						);
	fields[5] = OpProtobufField(
						OpProtobufFormat::String,
						6,
						UNI_L("description"),
						OpProtobufField::Optional
						);
	fields[6] = OpProtobufField(
						OpProtobufFormat::Uint32,
						7,
						UNI_L("windowIDList"),
						OpProtobufField::Repeated
						);
	fields[7] = OpProtobufField(
						OpProtobufFormat::String,
						8,
						UNI_L("extensionName"),
						OpProtobufField::Optional
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::RuntimeInfo,
						_runtimeID
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::RuntimeInfo,
						_htmlFramePath
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::RuntimeInfo,
						_windowID
						);
	offsets[3] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::RuntimeInfo,
						_objectID
						);
	offsets[4] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::RuntimeInfo,
						_uri
						);
	offsets[5] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::RuntimeInfo,
						_description
						);
	offsets[6] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::RuntimeInfo,
						_windowIDList
						);
	offsets[7] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::RuntimeInfo,
						_extensionName
						);

	message = OP_NEW(OpProtobufMessage,
					(ES_ScopeDebugFrontend_Descriptors::_gen_MsgID_runtime_info_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(ES_ScopeDebugFrontend_MessageSet::RuntimeInfo, has_bits_),
					OP_PROTO_OFFSETOF(ES_ScopeDebugFrontend_MessageSet::RuntimeInfo, encoded_size_),
					"RuntimeInfo",
					OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::RuntimeInfo>::Make,
					OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::RuntimeInfo>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: RuntimeInfo: Implementation

// Setters

OP_STATUS
ES_ScopeDebugFrontend_MessageSet::RuntimeInfo::SetHtmlFramePath(const uni_char * v, int l) 
{
	return _htmlFramePath.Set(v, l);
}


OP_STATUS
ES_ScopeDebugFrontend_MessageSet::RuntimeInfo::SetUri(const uni_char * v, int l) 
{
	return _uri.Set(v, l);
}


OpString &
ES_ScopeDebugFrontend_MessageSet::RuntimeInfo::GetDescriptionRef() 
{
	has_bits_.Reference().SetBit(5);
	return _description;
}


OpValueVector<UINT32> &
ES_ScopeDebugFrontend_MessageSet::RuntimeInfo::GetWindowIDListRef() 
{
	has_bits_.Reference().SetBit(6);
	return _windowIDList;
}


OP_STATUS
ES_ScopeDebugFrontend_MessageSet::RuntimeInfo::AppendToWindowIDList(UINT32 v) 
{
	has_bits_.Reference().SetBit(6);
	return _windowIDList.Add(v);
}


OP_STATUS
ES_ScopeDebugFrontend_MessageSet::RuntimeInfo::SetExtensionName(const uni_char * v, int l) 
{
	has_bits_.Reference().SetBit(7);
	return _extensionName.Set(v, l);
}

// END: RuntimeInfo: Implementation

//   END: Message: RuntimeInfo

//   BEGIN: Message: RuntimeList
/*static*/
const OpProtobufMessage *
ES_ScopeDebugFrontend_MessageSet::RuntimeList::GetMessageDescriptor(ES_ScopeDebugFrontend_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[ES_ScopeDebugFrontend_Descriptors::_gen_MessageOffs_runtime_list_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Message,
						1,
						UNI_L("runtimeList"),
						OpProtobufField::Repeated
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::RuntimeList,
						_runtimeList
						);

	message = OP_NEW(OpProtobufMessage,
					(ES_ScopeDebugFrontend_Descriptors::_gen_MsgID_runtime_list_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(ES_ScopeDebugFrontend_MessageSet::RuntimeList, has_bits_),
					OP_PROTO_OFFSETOF(ES_ScopeDebugFrontend_MessageSet::RuntimeList, encoded_size_),
					"RuntimeList",
					OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::RuntimeList>::Make,
					OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::RuntimeList>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	fields[0].SetMessage(RuntimeInfo::GetMessageDescriptor(descriptors));

	return message;
}

// BEGIN: RuntimeList: Implementation

// Setters

OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::RuntimeInfo> &
ES_ScopeDebugFrontend_MessageSet::RuntimeList::GetRuntimeListRef() 
{
	has_bits_.Reference().SetBit(0);
	return _runtimeList;
}

// END: RuntimeList: Implementation

//   END: Message: RuntimeList

//   BEGIN: Message: RuntimeSelection
/*static*/
const OpProtobufMessage *
ES_ScopeDebugFrontend_MessageSet::RuntimeSelection::GetMessageDescriptor(ES_ScopeDebugFrontend_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[ES_ScopeDebugFrontend_Descriptors::_gen_MessageOffs_runtime_selection_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Uint32,
						1,
						UNI_L("runtimeList"),
						OpProtobufField::Repeated
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Bool,
						2,
						UNI_L("allRuntimes"),
						OpProtobufField::Optional
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::RuntimeSelection,
						_runtimeList
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::RuntimeSelection,
						_allRuntimes
						);

	message = OP_NEW(OpProtobufMessage,
					(ES_ScopeDebugFrontend_Descriptors::_gen_MsgID_runtime_selection_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(ES_ScopeDebugFrontend_MessageSet::RuntimeSelection, has_bits_),
					OP_PROTO_OFFSETOF(ES_ScopeDebugFrontend_MessageSet::RuntimeSelection, encoded_size_),
					"RuntimeSelection",
					OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::RuntimeSelection>::Make,
					OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::RuntimeSelection>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: RuntimeSelection: Implementation

// Setters

OpValueVector<UINT32> &
ES_ScopeDebugFrontend_MessageSet::RuntimeSelection::GetRuntimeListRef() 
{
	has_bits_.Reference().SetBit(0);
	return _runtimeList;
}


OP_STATUS
ES_ScopeDebugFrontend_MessageSet::RuntimeSelection::AppendToRuntimeList(UINT32 v) 
{
	has_bits_.Reference().SetBit(0);
	return _runtimeList.Add(v);
}

// END: RuntimeSelection: Implementation

//   END: Message: RuntimeSelection

//   BEGIN: Message: ScriptInfo
/*static*/
const OpProtobufMessage *
ES_ScopeDebugFrontend_MessageSet::ScriptInfo::GetMessageDescriptor(ES_ScopeDebugFrontend_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[ES_ScopeDebugFrontend_Descriptors::_gen_MessageOffs_script_info_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Uint32,
						1,
						UNI_L("runtimeID"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Uint32,
						2,
						UNI_L("scriptID"),
						OpProtobufField::Required
						);
	fields[2] = OpProtobufField(
						OpProtobufFormat::String,
						3,
						UNI_L("scriptType"),
						OpProtobufField::Required
						);
	fields[3] = OpProtobufField(
						OpProtobufFormat::String,
						4,
						UNI_L("scriptData"),
						OpProtobufField::Required
						);
	fields[4] = OpProtobufField(
						OpProtobufFormat::String,
						5,
						UNI_L("uri"),
						OpProtobufField::Optional
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::ScriptInfo,
						_runtimeID
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::ScriptInfo,
						_scriptID
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::ScriptInfo,
						_scriptType
						);
	offsets[3] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::ScriptInfo,
						_scriptData
						);
	offsets[4] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::ScriptInfo,
						_uri
						);

	message = OP_NEW(OpProtobufMessage,
					(ES_ScopeDebugFrontend_Descriptors::_gen_MsgID_script_info_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(ES_ScopeDebugFrontend_MessageSet::ScriptInfo, has_bits_),
					OP_PROTO_OFFSETOF(ES_ScopeDebugFrontend_MessageSet::ScriptInfo, encoded_size_),
					"ScriptInfo",
					OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::ScriptInfo>::Make,
					OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::ScriptInfo>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: ScriptInfo: Implementation

// Setters

OP_STATUS
ES_ScopeDebugFrontend_MessageSet::ScriptInfo::SetScriptType(const uni_char * v, int l) 
{
	return _scriptType.Set(v, l);
}


OP_STATUS
ES_ScopeDebugFrontend_MessageSet::ScriptInfo::SetScriptData(const uni_char * v, int l) 
{
	return _scriptData.Set(v, l);
}


OP_STATUS
ES_ScopeDebugFrontend_MessageSet::ScriptInfo::SetUri(const uni_char * v, int l) 
{
	has_bits_.Reference().SetBit(4);
	return _uri.Set(v, l);
}

// END: ScriptInfo: Implementation

//   END: Message: ScriptInfo

//   BEGIN: Message: SearchDomArg
/*static*/
const OpProtobufMessage *
ES_ScopeDebugFrontend_MessageSet::SearchDomArg::GetMessageDescriptor(ES_ScopeDebugFrontend_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[ES_ScopeDebugFrontend_Descriptors::_gen_MessageOffs_search_dom_arg_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Uint32,
						1,
						UNI_L("runtimeID"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::String,
						2,
						UNI_L("query"),
						OpProtobufField::Required
						);
	fields[2] = OpProtobufField(
						OpProtobufFormat::Int32,
						3,
						UNI_L("type"),
						OpProtobufField::Optional
						, NULL // const OpProtobufMessage *message
						, 0 // int message_id
						, ES_ScopeDebugFrontend_Descriptors::_gen_EnumID_SearchDomArg_Type // unsigned enum_id
						);
	fields[3] = OpProtobufField(
						OpProtobufFormat::Uint32,
						4,
						UNI_L("objectID"),
						OpProtobufField::Optional
						);
	fields[4] = OpProtobufField(
						OpProtobufFormat::Bool,
						5,
						UNI_L("ignoreCase"),
						OpProtobufField::Optional
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::SearchDomArg,
						_runtimeID
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::SearchDomArg,
						_query
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::SearchDomArg,
						_type
						);
	offsets[3] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::SearchDomArg,
						_objectID
						);
	offsets[4] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::SearchDomArg,
						_ignoreCase
						);

	message = OP_NEW(OpProtobufMessage,
					(ES_ScopeDebugFrontend_Descriptors::_gen_MsgID_search_dom_arg_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(ES_ScopeDebugFrontend_MessageSet::SearchDomArg, has_bits_),
					OP_PROTO_OFFSETOF(ES_ScopeDebugFrontend_MessageSet::SearchDomArg, encoded_size_),
					"SearchDomArg",
					OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::SearchDomArg>::Make,
					OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::SearchDomArg>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: SearchDomArg: Implementation

// Enum value SearchDomArg.Type.PLAIN_TEXT
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const ES_ScopeDebugFrontend_MessageSet::SearchDomArg_Type ES_ScopeDebugFrontend_MessageSet::SearchDomArg::TYPE_PLAIN_TEXT;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)


// Enum value SearchDomArg.Type.REGEXP
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const ES_ScopeDebugFrontend_MessageSet::SearchDomArg_Type ES_ScopeDebugFrontend_MessageSet::SearchDomArg::TYPE_REGEXP;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)


// Enum value SearchDomArg.Type.XPATH
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const ES_ScopeDebugFrontend_MessageSet::SearchDomArg_Type ES_ScopeDebugFrontend_MessageSet::SearchDomArg::TYPE_XPATH;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)


// Enum value SearchDomArg.Type.SELECTOR
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const ES_ScopeDebugFrontend_MessageSet::SearchDomArg_Type ES_ScopeDebugFrontend_MessageSet::SearchDomArg::TYPE_SELECTOR;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)


// Enum value SearchDomArg.Type.EVENT
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const ES_ScopeDebugFrontend_MessageSet::SearchDomArg_Type ES_ScopeDebugFrontend_MessageSet::SearchDomArg::TYPE_EVENT;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)



// Setters

OP_STATUS
ES_ScopeDebugFrontend_MessageSet::SearchDomArg::SetQuery(const uni_char * v, int l) 
{
	return _query.Set(v, l);
}


void
ES_ScopeDebugFrontend_MessageSet::SearchDomArg::SetType(ES_ScopeDebugFrontend_MessageSet::SearchDomArg_Type v) 
{
	has_bits_.Reference().SetBit(2);
	_type = static_cast<ES_ScopeDebugFrontend_MessageSet::SearchDomArg_Type>(v);
}

// END: SearchDomArg: Implementation

//   END: Message: SearchDomArg

//   BEGIN: Message: SetPropertyFilterArg
/*static*/
const OpProtobufMessage *
ES_ScopeDebugFrontend_MessageSet::SetPropertyFilterArg::GetMessageDescriptor(ES_ScopeDebugFrontend_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[ES_ScopeDebugFrontend_Descriptors::_gen_MessageOffs_set_property_filter_arg_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Message,
						1,
						UNI_L("propertyFilter"),
						OpProtobufField::Required
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::SetPropertyFilterArg,
						_propertyFilter
						);

	message = OP_NEW(OpProtobufMessage,
					(ES_ScopeDebugFrontend_Descriptors::_gen_MsgID_set_property_filter_arg_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(ES_ScopeDebugFrontend_MessageSet::SetPropertyFilterArg, has_bits_),
					OP_PROTO_OFFSETOF(ES_ScopeDebugFrontend_MessageSet::SetPropertyFilterArg, encoded_size_),
					"SetPropertyFilterArg",
					OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::SetPropertyFilterArg>::Make,
					OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::SetPropertyFilterArg>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	fields[0].SetMessage(PropertyFilter::GetMessageDescriptor(descriptors));

	return message;
}

// BEGIN: SetPropertyFilterArg: Implementation

// Setters

ES_ScopeDebugFrontend_MessageSet::PropertyFilter &
ES_ScopeDebugFrontend_MessageSet::SetPropertyFilterArg::GetPropertyFilterRef() 
{
	return _propertyFilter;
}

// END: SetPropertyFilterArg: Implementation

//   END: Message: SetPropertyFilterArg

//   BEGIN: Message: SpotlightBox
/*static*/
const OpProtobufMessage *
ES_ScopeDebugFrontend_MessageSet::SpotlightObject_SpotlightBox::GetMessageDescriptor(ES_ScopeDebugFrontend_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[ES_ScopeDebugFrontend_Descriptors::_gen_MessageOffs_spotlight_object_spotlight_box_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Uint32,
						1,
						UNI_L("boxType"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Uint32,
						2,
						UNI_L("fillColor"),
						OpProtobufField::Optional
						);
	fields[2] = OpProtobufField(
						OpProtobufFormat::Uint32,
						3,
						UNI_L("frameColor"),
						OpProtobufField::Optional
						);
	fields[3] = OpProtobufField(
						OpProtobufFormat::Uint32,
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
						ES_ScopeDebugFrontend_MessageSet::SpotlightObject_SpotlightBox,
						_boxType
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::SpotlightObject_SpotlightBox,
						_fillColor
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::SpotlightObject_SpotlightBox,
						_frameColor
						);
	offsets[3] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::SpotlightObject_SpotlightBox,
						_gridColor
						);

	message = OP_NEW(OpProtobufMessage,
					(ES_ScopeDebugFrontend_Descriptors::_gen_MsgID_spotlight_object_spotlight_box_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(ES_ScopeDebugFrontend_MessageSet::SpotlightObject_SpotlightBox, has_bits_),
					OP_PROTO_OFFSETOF(ES_ScopeDebugFrontend_MessageSet::SpotlightObject_SpotlightBox, encoded_size_),
					"SpotlightBox",
					OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::SpotlightObject_SpotlightBox>::Make,
					OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::SpotlightObject_SpotlightBox>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	const OpProtobufMessage *parent = ES_ScopeDebugFrontend_MessageSet::SpotlightObject::GetMessageDescriptor(descriptors);
	if (!parent)
		return NULL;
	message->SetParentId(parent->GetInternalId());

	return message;
}

// BEGIN: SpotlightObject.SpotlightBox: Implementation


// END: SpotlightObject.SpotlightBox: Implementation

//   END: Message: SpotlightBox

//   BEGIN: Message: SpotlightObject
/*static*/
const OpProtobufMessage *
ES_ScopeDebugFrontend_MessageSet::SpotlightObject::GetMessageDescriptor(ES_ScopeDebugFrontend_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[ES_ScopeDebugFrontend_Descriptors::_gen_MessageOffs_spotlight_object_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Uint32,
						1,
						UNI_L("objectID"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Bool,
						2,
						UNI_L("scrollIntoView"),
						OpProtobufField::Required
						);
	fields[2] = OpProtobufField(
						OpProtobufFormat::Message,
						3,
						UNI_L("boxList"),
						OpProtobufField::Repeated
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::SpotlightObject,
						_objectID
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::SpotlightObject,
						_scrollIntoView
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::SpotlightObject,
						_boxList
						);

	message = OP_NEW(OpProtobufMessage,
					(ES_ScopeDebugFrontend_Descriptors::_gen_MsgID_spotlight_object_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(ES_ScopeDebugFrontend_MessageSet::SpotlightObject, has_bits_),
					OP_PROTO_OFFSETOF(ES_ScopeDebugFrontend_MessageSet::SpotlightObject, encoded_size_),
					"SpotlightObject",
					OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::SpotlightObject>::Make,
					OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::SpotlightObject>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	fields[2].SetMessage(SpotlightObject_SpotlightBox::GetMessageDescriptor(descriptors));

	return message;
}

// BEGIN: SpotlightObject: Implementation


// Setters

OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::SpotlightObject_SpotlightBox> &
ES_ScopeDebugFrontend_MessageSet::SpotlightObject::GetBoxListRef() 
{
	has_bits_.Reference().SetBit(2);
	return _boxList;
}

// END: SpotlightObject: Implementation

//   END: Message: SpotlightObject

//   BEGIN: Message: SpotlightObjectSelection
/*static*/
const OpProtobufMessage *
ES_ScopeDebugFrontend_MessageSet::SpotlightObjectSelection::GetMessageDescriptor(ES_ScopeDebugFrontend_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[ES_ScopeDebugFrontend_Descriptors::_gen_MessageOffs_spotlight_object_selection_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Uint32,
						1,
						UNI_L("objectID"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Bool,
						2,
						UNI_L("scrollIntoView"),
						OpProtobufField::Required
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::SpotlightObjectSelection,
						_objectID
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::SpotlightObjectSelection,
						_scrollIntoView
						);

	message = OP_NEW(OpProtobufMessage,
					(ES_ScopeDebugFrontend_Descriptors::_gen_MsgID_spotlight_object_selection_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(ES_ScopeDebugFrontend_MessageSet::SpotlightObjectSelection, has_bits_),
					OP_PROTO_OFFSETOF(ES_ScopeDebugFrontend_MessageSet::SpotlightObjectSelection, encoded_size_),
					"SpotlightObjectSelection",
					OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::SpotlightObjectSelection>::Make,
					OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::SpotlightObjectSelection>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: SpotlightObjectSelection: Implementation


// END: SpotlightObjectSelection: Implementation

//   END: Message: SpotlightObjectSelection

//   BEGIN: Message: SpotlightSelection
/*static*/
const OpProtobufMessage *
ES_ScopeDebugFrontend_MessageSet::SpotlightSelection::GetMessageDescriptor(ES_ScopeDebugFrontend_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[ES_ScopeDebugFrontend_Descriptors::_gen_MessageOffs_spotlight_selection_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Message,
						1,
						UNI_L("spotlightObjectList"),
						OpProtobufField::Repeated
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::SpotlightSelection,
						_spotlightObjectList
						);

	message = OP_NEW(OpProtobufMessage,
					(ES_ScopeDebugFrontend_Descriptors::_gen_MsgID_spotlight_selection_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(ES_ScopeDebugFrontend_MessageSet::SpotlightSelection, has_bits_),
					OP_PROTO_OFFSETOF(ES_ScopeDebugFrontend_MessageSet::SpotlightSelection, encoded_size_),
					"SpotlightSelection",
					OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::SpotlightSelection>::Make,
					OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::SpotlightSelection>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	fields[0].SetMessage(SpotlightObject::GetMessageDescriptor(descriptors));

	return message;
}

// BEGIN: SpotlightSelection: Implementation

// Setters

OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::SpotlightObject> &
ES_ScopeDebugFrontend_MessageSet::SpotlightSelection::GetSpotlightObjectListRef() 
{
	has_bits_.Reference().SetBit(0);
	return _spotlightObjectList;
}

// END: SpotlightSelection: Implementation

//   END: Message: SpotlightSelection

//   BEGIN: Message: StyleDeclaration
/*static*/
const OpProtobufMessage *
ES_ScopeDebugFrontend_MessageSet::CssStyleDeclarations_NodeStyle_StyleDeclaration::GetMessageDescriptor(ES_ScopeDebugFrontend_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[ES_ScopeDebugFrontend_Descriptors::_gen_MessageOffs_css_style_declarations_node_style_style_declaration_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Int32,
						1,
						UNI_L("origin"),
						OpProtobufField::Required
						, NULL // const OpProtobufMessage *message
						, 0 // int message_id
						, ES_ScopeDebugFrontend_Descriptors::_gen_EnumID_RuleOrigin // unsigned enum_id
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Uint32,
						2,
						UNI_L("indexList"),
						OpProtobufField::Repeated
						);
	fields[2] = OpProtobufField(
						OpProtobufFormat::String,
						3,
						UNI_L("valueList"),
						OpProtobufField::Repeated
						);
	fields[3] = OpProtobufField(
						OpProtobufFormat::Bool,
						4,
						UNI_L("priorityList"),
						OpProtobufField::Repeated
						);
	fields[4] = OpProtobufField(
						OpProtobufFormat::Int32,
						5,
						UNI_L("statusList"),
						OpProtobufField::Repeated
						, NULL // const OpProtobufMessage *message
						, 0 // int message_id
						, ES_ScopeDebugFrontend_Descriptors::_gen_EnumID_DeclarationStatus // unsigned enum_id
						);
	fields[5] = OpProtobufField(
						OpProtobufFormat::String,
						6,
						UNI_L("selector"),
						OpProtobufField::Optional
						);
	fields[6] = OpProtobufField(
						OpProtobufFormat::Uint32,
						7,
						UNI_L("specificity"),
						OpProtobufField::Optional
						);
	fields[7] = OpProtobufField(
						OpProtobufFormat::Uint32,
						8,
						UNI_L("stylesheetID"),
						OpProtobufField::Optional
						);
	fields[8] = OpProtobufField(
						OpProtobufFormat::Uint32,
						9,
						UNI_L("ruleID"),
						OpProtobufField::Optional
						);
	fields[9] = OpProtobufField(
						OpProtobufFormat::Uint32,
						10,
						UNI_L("ruleType"),
						OpProtobufField::Optional
						);
	fields[10] = OpProtobufField(
						OpProtobufFormat::Uint32,
						11,
						UNI_L("lineNumber"),
						OpProtobufField::Optional
						);
	fields[11] = OpProtobufField(
						OpProtobufFormat::Bool,
						12,
						UNI_L("fullscreenList"),
						OpProtobufField::Repeated
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::CssStyleDeclarations_NodeStyle_StyleDeclaration,
						_origin
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::CssStyleDeclarations_NodeStyle_StyleDeclaration,
						_indexList
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::CssStyleDeclarations_NodeStyle_StyleDeclaration,
						_valueList
						);
	offsets[3] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::CssStyleDeclarations_NodeStyle_StyleDeclaration,
						_priorityList
						);
	offsets[4] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::CssStyleDeclarations_NodeStyle_StyleDeclaration,
						_statusList
						);
	offsets[5] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::CssStyleDeclarations_NodeStyle_StyleDeclaration,
						_selector
						);
	offsets[6] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::CssStyleDeclarations_NodeStyle_StyleDeclaration,
						_specificity
						);
	offsets[7] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::CssStyleDeclarations_NodeStyle_StyleDeclaration,
						_stylesheetID
						);
	offsets[8] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::CssStyleDeclarations_NodeStyle_StyleDeclaration,
						_ruleID
						);
	offsets[9] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::CssStyleDeclarations_NodeStyle_StyleDeclaration,
						_ruleType
						);
	offsets[10] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::CssStyleDeclarations_NodeStyle_StyleDeclaration,
						_lineNumber
						);
	offsets[11] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::CssStyleDeclarations_NodeStyle_StyleDeclaration,
						_fullscreenList
						);

	message = OP_NEW(OpProtobufMessage,
					(ES_ScopeDebugFrontend_Descriptors::_gen_MsgID_css_style_declarations_node_style_style_declaration_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(ES_ScopeDebugFrontend_MessageSet::CssStyleDeclarations_NodeStyle_StyleDeclaration, has_bits_),
					OP_PROTO_OFFSETOF(ES_ScopeDebugFrontend_MessageSet::CssStyleDeclarations_NodeStyle_StyleDeclaration, encoded_size_),
					"StyleDeclaration",
					OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::CssStyleDeclarations_NodeStyle_StyleDeclaration>::Make,
					OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::CssStyleDeclarations_NodeStyle_StyleDeclaration>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	const OpProtobufMessage *parent = ES_ScopeDebugFrontend_MessageSet::CssStyleDeclarations_NodeStyle::GetMessageDescriptor(descriptors);
	if (!parent)
		return NULL;
	message->SetParentId(parent->GetInternalId());

	return message;
}

// BEGIN: CssStyleDeclarations.NodeStyle.StyleDeclaration: Implementation

// Setters

void
ES_ScopeDebugFrontend_MessageSet::CssStyleDeclarations_NodeStyle_StyleDeclaration::SetOrigin(ES_ScopeDebugFrontend_MessageSet::RuleOrigin v) 
{
	_origin = static_cast<ES_ScopeDebugFrontend_MessageSet::RuleOrigin>(v);
}


OpValueVector<UINT32> &
ES_ScopeDebugFrontend_MessageSet::CssStyleDeclarations_NodeStyle_StyleDeclaration::GetIndexListRef() 
{
	has_bits_.Reference().SetBit(1);
	return _indexList;
}


OP_STATUS
ES_ScopeDebugFrontend_MessageSet::CssStyleDeclarations_NodeStyle_StyleDeclaration::AppendToIndexList(UINT32 v) 
{
	has_bits_.Reference().SetBit(1);
	return _indexList.Add(v);
}


OpAutoVector<OpString> &
ES_ScopeDebugFrontend_MessageSet::CssStyleDeclarations_NodeStyle_StyleDeclaration::GetValueListRef() 
{
	has_bits_.Reference().SetBit(2);
	return _valueList;
}


OpINT32Vector &
ES_ScopeDebugFrontend_MessageSet::CssStyleDeclarations_NodeStyle_StyleDeclaration::GetPriorityListRef() 
{
	has_bits_.Reference().SetBit(3);
	return _priorityList;
}


OP_STATUS
ES_ScopeDebugFrontend_MessageSet::CssStyleDeclarations_NodeStyle_StyleDeclaration::AppendToPriorityList(BOOL v) 
{
	has_bits_.Reference().SetBit(3);
	return _priorityList.Add(v);
}


OpValueVector<INT32> &
ES_ScopeDebugFrontend_MessageSet::CssStyleDeclarations_NodeStyle_StyleDeclaration::GetStatusListRef() 
{
	has_bits_.Reference().SetBit(4);
	return _statusList;
}


OP_STATUS
ES_ScopeDebugFrontend_MessageSet::CssStyleDeclarations_NodeStyle_StyleDeclaration::AppendToStatusList(ES_ScopeDebugFrontend_MessageSet::DeclarationStatus v) 
{
	has_bits_.Reference().SetBit(4);
	return _statusList.Add(static_cast<INT32>(v));
}


OP_STATUS
ES_ScopeDebugFrontend_MessageSet::CssStyleDeclarations_NodeStyle_StyleDeclaration::SetStatusListItem(UINT32 i, ES_ScopeDebugFrontend_MessageSet::DeclarationStatus v) 
{
	has_bits_.Reference().SetBit(4);
	OP_ASSERT(i < _statusList.GetCount());
	return _statusList.Replace(i, static_cast<INT32>(v));
}


OP_STATUS
ES_ScopeDebugFrontend_MessageSet::CssStyleDeclarations_NodeStyle_StyleDeclaration::SetSelector(const uni_char * v, int l) 
{
	has_bits_.Reference().SetBit(5);
	return _selector.Set(v, l);
}


OpINT32Vector &
ES_ScopeDebugFrontend_MessageSet::CssStyleDeclarations_NodeStyle_StyleDeclaration::GetFullscreenListRef() 
{
	has_bits_.Reference().SetBit(11);
	return _fullscreenList;
}


OP_STATUS
ES_ScopeDebugFrontend_MessageSet::CssStyleDeclarations_NodeStyle_StyleDeclaration::AppendToFullscreenList(BOOL v) 
{
	has_bits_.Reference().SetBit(11);
	return _fullscreenList.Add(v);
}

// END: CssStyleDeclarations.NodeStyle.StyleDeclaration: Implementation

//   END: Message: StyleDeclaration

//   BEGIN: Message: Stylesheet
/*static*/
const OpProtobufMessage *
ES_ScopeDebugFrontend_MessageSet::CssStylesheetList_Stylesheet::GetMessageDescriptor(ES_ScopeDebugFrontend_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[ES_ScopeDebugFrontend_Descriptors::_gen_MessageOffs_css_stylesheet_list_stylesheet_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Uint32,
						1,
						UNI_L("objectID"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Bool,
						2,
						UNI_L("isDisabled"),
						OpProtobufField::Required
						);
	fields[2] = OpProtobufField(
						OpProtobufFormat::String,
						3,
						UNI_L("href"),
						OpProtobufField::Required
						);
	fields[3] = OpProtobufField(
						OpProtobufFormat::String,
						4,
						UNI_L("title"),
						OpProtobufField::Required
						);
	fields[4] = OpProtobufField(
						OpProtobufFormat::String,
						5,
						UNI_L("type"),
						OpProtobufField::Required
						);
	fields[5] = OpProtobufField(
						OpProtobufFormat::String,
						6,
						UNI_L("mediaList"),
						OpProtobufField::Repeated
						);
	fields[6] = OpProtobufField(
						OpProtobufFormat::Uint32,
						7,
						UNI_L("ownerNodeID"),
						OpProtobufField::Optional
						);
	fields[7] = OpProtobufField(
						OpProtobufFormat::Uint32,
						8,
						UNI_L("ownerRuleID"),
						OpProtobufField::Optional
						);
	fields[8] = OpProtobufField(
						OpProtobufFormat::Uint32,
						9,
						UNI_L("parentStylesheetID"),
						OpProtobufField::Optional
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::CssStylesheetList_Stylesheet,
						_objectID
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::CssStylesheetList_Stylesheet,
						_isDisabled
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::CssStylesheetList_Stylesheet,
						_href
						);
	offsets[3] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::CssStylesheetList_Stylesheet,
						_title
						);
	offsets[4] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::CssStylesheetList_Stylesheet,
						_type
						);
	offsets[5] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::CssStylesheetList_Stylesheet,
						_mediaList
						);
	offsets[6] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::CssStylesheetList_Stylesheet,
						_ownerNodeID
						);
	offsets[7] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::CssStylesheetList_Stylesheet,
						_ownerRuleID
						);
	offsets[8] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::CssStylesheetList_Stylesheet,
						_parentStylesheetID
						);

	message = OP_NEW(OpProtobufMessage,
					(ES_ScopeDebugFrontend_Descriptors::_gen_MsgID_css_stylesheet_list_stylesheet_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(ES_ScopeDebugFrontend_MessageSet::CssStylesheetList_Stylesheet, has_bits_),
					OP_PROTO_OFFSETOF(ES_ScopeDebugFrontend_MessageSet::CssStylesheetList_Stylesheet, encoded_size_),
					"Stylesheet",
					OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::CssStylesheetList_Stylesheet>::Make,
					OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::CssStylesheetList_Stylesheet>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	const OpProtobufMessage *parent = ES_ScopeDebugFrontend_MessageSet::CssStylesheetList::GetMessageDescriptor(descriptors);
	if (!parent)
		return NULL;
	message->SetParentId(parent->GetInternalId());

	return message;
}

// BEGIN: CssStylesheetList.Stylesheet: Implementation

// Setters

OP_STATUS
ES_ScopeDebugFrontend_MessageSet::CssStylesheetList_Stylesheet::SetHref(const uni_char * v, int l) 
{
	return _href.Set(v, l);
}


OP_STATUS
ES_ScopeDebugFrontend_MessageSet::CssStylesheetList_Stylesheet::SetTitle(const uni_char * v, int l) 
{
	return _title.Set(v, l);
}


OP_STATUS
ES_ScopeDebugFrontend_MessageSet::CssStylesheetList_Stylesheet::SetType(const uni_char * v, int l) 
{
	return _type.Set(v, l);
}


OpAutoVector<OpString> &
ES_ScopeDebugFrontend_MessageSet::CssStylesheetList_Stylesheet::GetMediaListRef() 
{
	has_bits_.Reference().SetBit(5);
	return _mediaList;
}

// END: CssStylesheetList.Stylesheet: Implementation

//   END: Message: Stylesheet

//   BEGIN: Message: StylesheetRule
/*static*/
const OpProtobufMessage *
ES_ScopeDebugFrontend_MessageSet::CssStylesheetRules_StylesheetRule::GetMessageDescriptor(ES_ScopeDebugFrontend_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[ES_ScopeDebugFrontend_Descriptors::_gen_MessageOffs_css_stylesheet_rules_stylesheet_rule_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Uint32,
						1,
						UNI_L("type"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Uint32,
						2,
						UNI_L("stylesheetID"),
						OpProtobufField::Required
						);
	fields[2] = OpProtobufField(
						OpProtobufFormat::Uint32,
						3,
						UNI_L("ruleID"),
						OpProtobufField::Required
						);
	fields[3] = OpProtobufField(
						OpProtobufFormat::Uint32,
						4,
						UNI_L("indexList"),
						OpProtobufField::Repeated
						);
	fields[4] = OpProtobufField(
						OpProtobufFormat::String,
						5,
						UNI_L("valueList"),
						OpProtobufField::Repeated
						);
	fields[5] = OpProtobufField(
						OpProtobufFormat::Bool,
						6,
						UNI_L("priorityList"),
						OpProtobufField::Repeated
						);
	fields[6] = OpProtobufField(
						OpProtobufFormat::String,
						7,
						UNI_L("selectorList"),
						OpProtobufField::Repeated
						);
	fields[7] = OpProtobufField(
						OpProtobufFormat::Uint32,
						8,
						UNI_L("specificityList"),
						OpProtobufField::Repeated
						);
	fields[8] = OpProtobufField(
						OpProtobufFormat::String,
						9,
						UNI_L("mediaList"),
						OpProtobufField::Repeated
						);
	fields[9] = OpProtobufField(
						OpProtobufFormat::Message,
						10,
						UNI_L("ruleList"),
						OpProtobufField::Repeated
						);
	fields[10] = OpProtobufField(
						OpProtobufFormat::String,
						11,
						UNI_L("href"),
						OpProtobufField::Optional
						);
	fields[11] = OpProtobufField(
						OpProtobufFormat::Uint32,
						12,
						UNI_L("importStylesheetID"),
						OpProtobufField::Optional
						);
	fields[12] = OpProtobufField(
						OpProtobufFormat::Uint32,
						13,
						UNI_L("pseudoClass"),
						OpProtobufField::Optional
						);
	fields[13] = OpProtobufField(
						OpProtobufFormat::String,
						14,
						UNI_L("charset"),
						OpProtobufField::Optional
						);
	fields[14] = OpProtobufField(
						OpProtobufFormat::Uint32,
						15,
						UNI_L("lineNumber"),
						OpProtobufField::Optional
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::CssStylesheetRules_StylesheetRule,
						_type
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::CssStylesheetRules_StylesheetRule,
						_stylesheetID
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::CssStylesheetRules_StylesheetRule,
						_ruleID
						);
	offsets[3] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::CssStylesheetRules_StylesheetRule,
						_indexList
						);
	offsets[4] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::CssStylesheetRules_StylesheetRule,
						_valueList
						);
	offsets[5] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::CssStylesheetRules_StylesheetRule,
						_priorityList
						);
	offsets[6] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::CssStylesheetRules_StylesheetRule,
						_selectorList
						);
	offsets[7] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::CssStylesheetRules_StylesheetRule,
						_specificityList
						);
	offsets[8] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::CssStylesheetRules_StylesheetRule,
						_mediaList
						);
	offsets[9] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::CssStylesheetRules_StylesheetRule,
						_ruleList
						);
	offsets[10] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::CssStylesheetRules_StylesheetRule,
						_href
						);
	offsets[11] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::CssStylesheetRules_StylesheetRule,
						_importStylesheetID
						);
	offsets[12] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::CssStylesheetRules_StylesheetRule,
						_pseudoClass
						);
	offsets[13] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::CssStylesheetRules_StylesheetRule,
						_charset
						);
	offsets[14] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::CssStylesheetRules_StylesheetRule,
						_lineNumber
						);

	message = OP_NEW(OpProtobufMessage,
					(ES_ScopeDebugFrontend_Descriptors::_gen_MsgID_css_stylesheet_rules_stylesheet_rule_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(ES_ScopeDebugFrontend_MessageSet::CssStylesheetRules_StylesheetRule, has_bits_),
					OP_PROTO_OFFSETOF(ES_ScopeDebugFrontend_MessageSet::CssStylesheetRules_StylesheetRule, encoded_size_),
					"StylesheetRule",
					OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::CssStylesheetRules_StylesheetRule>::Make,
					OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::CssStylesheetRules_StylesheetRule>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	fields[9].SetMessage(CssStylesheetRules_StylesheetRule::GetMessageDescriptor(descriptors));
	const OpProtobufMessage *parent = ES_ScopeDebugFrontend_MessageSet::CssStylesheetRules::GetMessageDescriptor(descriptors);
	if (!parent)
		return NULL;
	message->SetParentId(parent->GetInternalId());

	return message;
}

// BEGIN: CssStylesheetRules.StylesheetRule: Implementation

// Setters

OpValueVector<UINT32> &
ES_ScopeDebugFrontend_MessageSet::CssStylesheetRules_StylesheetRule::GetIndexListRef() 
{
	has_bits_.Reference().SetBit(3);
	return _indexList;
}


OP_STATUS
ES_ScopeDebugFrontend_MessageSet::CssStylesheetRules_StylesheetRule::AppendToIndexList(UINT32 v) 
{
	has_bits_.Reference().SetBit(3);
	return _indexList.Add(v);
}


OpAutoVector<OpString> &
ES_ScopeDebugFrontend_MessageSet::CssStylesheetRules_StylesheetRule::GetValueListRef() 
{
	has_bits_.Reference().SetBit(4);
	return _valueList;
}


OpINT32Vector &
ES_ScopeDebugFrontend_MessageSet::CssStylesheetRules_StylesheetRule::GetPriorityListRef() 
{
	has_bits_.Reference().SetBit(5);
	return _priorityList;
}


OP_STATUS
ES_ScopeDebugFrontend_MessageSet::CssStylesheetRules_StylesheetRule::AppendToPriorityList(BOOL v) 
{
	has_bits_.Reference().SetBit(5);
	return _priorityList.Add(v);
}


OpAutoVector<OpString> &
ES_ScopeDebugFrontend_MessageSet::CssStylesheetRules_StylesheetRule::GetSelectorListRef() 
{
	has_bits_.Reference().SetBit(6);
	return _selectorList;
}


OpValueVector<UINT32> &
ES_ScopeDebugFrontend_MessageSet::CssStylesheetRules_StylesheetRule::GetSpecificityListRef() 
{
	has_bits_.Reference().SetBit(7);
	return _specificityList;
}


OP_STATUS
ES_ScopeDebugFrontend_MessageSet::CssStylesheetRules_StylesheetRule::AppendToSpecificityList(UINT32 v) 
{
	has_bits_.Reference().SetBit(7);
	return _specificityList.Add(v);
}


OpAutoVector<OpString> &
ES_ScopeDebugFrontend_MessageSet::CssStylesheetRules_StylesheetRule::GetMediaListRef() 
{
	has_bits_.Reference().SetBit(8);
	return _mediaList;
}


OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::CssStylesheetRules_StylesheetRule> &
ES_ScopeDebugFrontend_MessageSet::CssStylesheetRules_StylesheetRule::GetRuleListRef() 
{
	has_bits_.Reference().SetBit(9);
	return _ruleList;
}


OP_STATUS
ES_ScopeDebugFrontend_MessageSet::CssStylesheetRules_StylesheetRule::SetHref(const uni_char * v, int l) 
{
	has_bits_.Reference().SetBit(10);
	return _href.Set(v, l);
}


OP_STATUS
ES_ScopeDebugFrontend_MessageSet::CssStylesheetRules_StylesheetRule::SetCharset(const uni_char * v, int l) 
{
	has_bits_.Reference().SetBit(13);
	return _charset.Set(v, l);
}

// END: CssStylesheetRules.StylesheetRule: Implementation

//   END: Message: StylesheetRule

//   BEGIN: Message: ThreadInfo
/*static*/
const OpProtobufMessage *
ES_ScopeDebugFrontend_MessageSet::ThreadInfo::GetMessageDescriptor(ES_ScopeDebugFrontend_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[ES_ScopeDebugFrontend_Descriptors::_gen_MessageOffs_thread_info_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Uint32,
						1,
						UNI_L("runtimeID"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Uint32,
						2,
						UNI_L("threadID"),
						OpProtobufField::Required
						);
	fields[2] = OpProtobufField(
						OpProtobufFormat::Uint32,
						3,
						UNI_L("parentThreadID"),
						OpProtobufField::Required
						);
	fields[3] = OpProtobufField(
						OpProtobufFormat::String,
						4,
						UNI_L("threadType"),
						OpProtobufField::Required
						);
	fields[4] = OpProtobufField(
						OpProtobufFormat::String,
						5,
						UNI_L("eventNamespace"),
						OpProtobufField::Optional
						);
	fields[5] = OpProtobufField(
						OpProtobufFormat::String,
						6,
						UNI_L("eventType"),
						OpProtobufField::Optional
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::ThreadInfo,
						_runtimeID
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::ThreadInfo,
						_threadID
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::ThreadInfo,
						_parentThreadID
						);
	offsets[3] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::ThreadInfo,
						_threadType
						);
	offsets[4] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::ThreadInfo,
						_eventNamespace
						);
	offsets[5] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::ThreadInfo,
						_eventType
						);

	message = OP_NEW(OpProtobufMessage,
					(ES_ScopeDebugFrontend_Descriptors::_gen_MsgID_thread_info_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(ES_ScopeDebugFrontend_MessageSet::ThreadInfo, has_bits_),
					OP_PROTO_OFFSETOF(ES_ScopeDebugFrontend_MessageSet::ThreadInfo, encoded_size_),
					"ThreadInfo",
					OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::ThreadInfo>::Make,
					OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::ThreadInfo>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: ThreadInfo: Implementation

// Setters

OP_STATUS
ES_ScopeDebugFrontend_MessageSet::ThreadInfo::SetThreadType(const uni_char * v, int l) 
{
	return _threadType.Set(v, l);
}


OP_STATUS
ES_ScopeDebugFrontend_MessageSet::ThreadInfo::SetEventNamespace(const uni_char * v, int l) 
{
	has_bits_.Reference().SetBit(4);
	return _eventNamespace.Set(v, l);
}


OP_STATUS
ES_ScopeDebugFrontend_MessageSet::ThreadInfo::SetEventType(const uni_char * v, int l) 
{
	has_bits_.Reference().SetBit(5);
	return _eventType.Set(v, l);
}

// END: ThreadInfo: Implementation

//   END: Message: ThreadInfo

//   BEGIN: Message: ThreadMigration
/*static*/
const OpProtobufMessage *
ES_ScopeDebugFrontend_MessageSet::ThreadMigration::GetMessageDescriptor(ES_ScopeDebugFrontend_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[ES_ScopeDebugFrontend_Descriptors::_gen_MessageOffs_thread_migration_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Uint32,
						1,
						UNI_L("threadID"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Uint32,
						2,
						UNI_L("fromRuntimeID"),
						OpProtobufField::Required
						);
	fields[2] = OpProtobufField(
						OpProtobufFormat::Uint32,
						3,
						UNI_L("toRuntimeID"),
						OpProtobufField::Required
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::ThreadMigration,
						_threadID
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::ThreadMigration,
						_fromRuntimeID
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::ThreadMigration,
						_toRuntimeID
						);

	message = OP_NEW(OpProtobufMessage,
					(ES_ScopeDebugFrontend_Descriptors::_gen_MsgID_thread_migration_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(ES_ScopeDebugFrontend_MessageSet::ThreadMigration, has_bits_),
					OP_PROTO_OFFSETOF(ES_ScopeDebugFrontend_MessageSet::ThreadMigration, encoded_size_),
					"ThreadMigration",
					OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::ThreadMigration>::Make,
					OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::ThreadMigration>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: ThreadMigration: Implementation


// END: ThreadMigration: Implementation

//   END: Message: ThreadMigration

//   BEGIN: Message: ThreadMode
/*static*/
const OpProtobufMessage *
ES_ScopeDebugFrontend_MessageSet::ThreadMode::GetMessageDescriptor(ES_ScopeDebugFrontend_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[ES_ScopeDebugFrontend_Descriptors::_gen_MessageOffs_thread_mode_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Uint32,
						1,
						UNI_L("runtimeID"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Uint32,
						2,
						UNI_L("threadID"),
						OpProtobufField::Required
						);
	fields[2] = OpProtobufField(
						OpProtobufFormat::String,
						3,
						UNI_L("mode"),
						OpProtobufField::Required
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::ThreadMode,
						_runtimeID
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::ThreadMode,
						_threadID
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::ThreadMode,
						_mode
						);

	message = OP_NEW(OpProtobufMessage,
					(ES_ScopeDebugFrontend_Descriptors::_gen_MsgID_thread_mode_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(ES_ScopeDebugFrontend_MessageSet::ThreadMode, has_bits_),
					OP_PROTO_OFFSETOF(ES_ScopeDebugFrontend_MessageSet::ThreadMode, encoded_size_),
					"ThreadMode",
					OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::ThreadMode>::Make,
					OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::ThreadMode>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: ThreadMode: Implementation

// Setters

OP_STATUS
ES_ScopeDebugFrontend_MessageSet::ThreadMode::SetMode(const uni_char * v, int l) 
{
	return _mode.Set(v, l);
}

// END: ThreadMode: Implementation

//   END: Message: ThreadMode

//   BEGIN: Message: ThreadResult
/*static*/
const OpProtobufMessage *
ES_ScopeDebugFrontend_MessageSet::ThreadResult::GetMessageDescriptor(ES_ScopeDebugFrontend_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[ES_ScopeDebugFrontend_Descriptors::_gen_MessageOffs_thread_result_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Uint32,
						1,
						UNI_L("runtimeID"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Uint32,
						2,
						UNI_L("threadID"),
						OpProtobufField::Required
						);
	fields[2] = OpProtobufField(
						OpProtobufFormat::String,
						3,
						UNI_L("status"),
						OpProtobufField::Required
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::ThreadResult,
						_runtimeID
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::ThreadResult,
						_threadID
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::ThreadResult,
						_status
						);

	message = OP_NEW(OpProtobufMessage,
					(ES_ScopeDebugFrontend_Descriptors::_gen_MsgID_thread_result_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(ES_ScopeDebugFrontend_MessageSet::ThreadResult, has_bits_),
					OP_PROTO_OFFSETOF(ES_ScopeDebugFrontend_MessageSet::ThreadResult, encoded_size_),
					"ThreadResult",
					OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::ThreadResult>::Make,
					OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::ThreadResult>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: ThreadResult: Implementation

// Setters

OP_STATUS
ES_ScopeDebugFrontend_MessageSet::ThreadResult::SetStatus(const uni_char * v, int l) 
{
	return _status.Set(v, l);
}

// END: ThreadResult: Implementation

//   END: Message: ThreadResult

//   BEGIN: Message: ThreadStopInfo
/*static*/
const OpProtobufMessage *
ES_ScopeDebugFrontend_MessageSet::ThreadStopInfo::GetMessageDescriptor(ES_ScopeDebugFrontend_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[ES_ScopeDebugFrontend_Descriptors::_gen_MessageOffs_thread_stop_info_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Uint32,
						1,
						UNI_L("runtimeID"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Uint32,
						2,
						UNI_L("threadID"),
						OpProtobufField::Required
						);
	fields[2] = OpProtobufField(
						OpProtobufFormat::Uint32,
						3,
						UNI_L("scriptID"),
						OpProtobufField::Required
						);
	fields[3] = OpProtobufField(
						OpProtobufFormat::Uint32,
						4,
						UNI_L("lineNumber"),
						OpProtobufField::Required
						);
	fields[4] = OpProtobufField(
						OpProtobufFormat::String,
						5,
						UNI_L("stoppedReason"),
						OpProtobufField::Required
						);
	fields[5] = OpProtobufField(
						OpProtobufFormat::Uint32,
						6,
						UNI_L("breakpointID"),
						OpProtobufField::Optional
						);
	fields[6] = OpProtobufField(
						OpProtobufFormat::Message,
						7,
						UNI_L("exceptionValue"),
						OpProtobufField::Optional
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::ThreadStopInfo,
						_runtimeID
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::ThreadStopInfo,
						_threadID
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::ThreadStopInfo,
						_scriptID
						);
	offsets[3] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::ThreadStopInfo,
						_lineNumber
						);
	offsets[4] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::ThreadStopInfo,
						_stoppedReason
						);
	offsets[5] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::ThreadStopInfo,
						_breakpointID
						);
	offsets[6] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::ThreadStopInfo,
						_exceptionValue
						);

	message = OP_NEW(OpProtobufMessage,
					(ES_ScopeDebugFrontend_Descriptors::_gen_MsgID_thread_stop_info_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(ES_ScopeDebugFrontend_MessageSet::ThreadStopInfo, has_bits_),
					OP_PROTO_OFFSETOF(ES_ScopeDebugFrontend_MessageSet::ThreadStopInfo, encoded_size_),
					"ThreadStopInfo",
					OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::ThreadStopInfo>::Make,
					OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::ThreadStopInfo>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	fields[6].SetMessage(Value::GetMessageDescriptor(descriptors));

	return message;
}

// BEGIN: ThreadStopInfo: Implementation

// Setters

OP_STATUS
ES_ScopeDebugFrontend_MessageSet::ThreadStopInfo::SetStoppedReason(const uni_char * v, int l) 
{
	return _stoppedReason.Set(v, l);
}


void
ES_ScopeDebugFrontend_MessageSet::ThreadStopInfo::SetExceptionValue(ES_ScopeDebugFrontend_MessageSet::Value * v) 
{
	has_bits_.Reference().SetBit(6);
	OP_DELETE(_exceptionValue);
	_exceptionValue = v;
}

// END: ThreadStopInfo: Implementation

//   END: Message: ThreadStopInfo

//   BEGIN: Message: Value
/*static*/
const OpProtobufMessage *
ES_ScopeDebugFrontend_MessageSet::ConsoleLogInfo_Value::GetMessageDescriptor(ES_ScopeDebugFrontend_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[ES_ScopeDebugFrontend_Descriptors::_gen_MessageOffs_console_log_info_value_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::String,
						1,
						UNI_L("value"),
						OpProtobufField::Optional
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Message,
						2,
						UNI_L("objectValue"),
						OpProtobufField::Optional
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::ConsoleLogInfo_Value,
						_value
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::ConsoleLogInfo_Value,
						_objectValue
						);

	message = OP_NEW(OpProtobufMessage,
					(ES_ScopeDebugFrontend_Descriptors::_gen_MsgID_console_log_info_value_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(ES_ScopeDebugFrontend_MessageSet::ConsoleLogInfo_Value, has_bits_),
					OP_PROTO_OFFSETOF(ES_ScopeDebugFrontend_MessageSet::ConsoleLogInfo_Value, encoded_size_),
					"Value",
					OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::ConsoleLogInfo_Value>::Make,
					OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::ConsoleLogInfo_Value>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	fields[1].SetMessage(ObjectValue::GetMessageDescriptor(descriptors));
	const OpProtobufMessage *parent = ES_ScopeDebugFrontend_MessageSet::ConsoleLogInfo::GetMessageDescriptor(descriptors);
	if (!parent)
		return NULL;
	message->SetParentId(parent->GetInternalId());

	return message;
}

// BEGIN: ConsoleLogInfo.Value: Implementation

// Setters

OP_STATUS
ES_ScopeDebugFrontend_MessageSet::ConsoleLogInfo_Value::SetValue(const uni_char * v, int l) 
{
	has_bits_.Reference().SetBit(0);
	return _value.Set(v, l);
}


void
ES_ScopeDebugFrontend_MessageSet::ConsoleLogInfo_Value::SetObjectValue(ES_ScopeDebugFrontend_MessageSet::ObjectValue * v) 
{
	has_bits_.Reference().SetBit(1);
	OP_DELETE(_objectValue);
	_objectValue = v;
}

// END: ConsoleLogInfo.Value: Implementation

//   END: Message: Value

//   BEGIN: Message: Value
/*static*/
const OpProtobufMessage *
ES_ScopeDebugFrontend_MessageSet::Value::GetMessageDescriptor(ES_ScopeDebugFrontend_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[ES_ScopeDebugFrontend_Descriptors::_gen_MessageOffs_value_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Int32,
						1,
						UNI_L("type"),
						OpProtobufField::Optional
						, NULL // const OpProtobufMessage *message
						, 0 // int message_id
						, ES_ScopeDebugFrontend_Descriptors::_gen_EnumID_Value_Type // unsigned enum_id
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Double,
						2,
						UNI_L("number"),
						OpProtobufField::Optional
						);
	fields[2] = OpProtobufField(
						OpProtobufFormat::String,
						3,
						UNI_L("str"),
						OpProtobufField::Optional
						);
	fields[3] = OpProtobufField(
						OpProtobufFormat::Message,
						4,
						UNI_L("object"),
						OpProtobufField::Optional
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::Value,
						_type
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::Value,
						_number
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::Value,
						_str
						);
	offsets[3] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::Value,
						_object
						);

	message = OP_NEW(OpProtobufMessage,
					(ES_ScopeDebugFrontend_Descriptors::_gen_MsgID_value_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(ES_ScopeDebugFrontend_MessageSet::Value, has_bits_),
					OP_PROTO_OFFSETOF(ES_ScopeDebugFrontend_MessageSet::Value, encoded_size_),
					"Value",
					OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::Value>::Make,
					OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::Value>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	fields[3].SetMessage(ObjectValue::GetMessageDescriptor(descriptors));

	return message;
}

// BEGIN: Value: Implementation

// Enum value Value.Type.UNDEFINED
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const ES_ScopeDebugFrontend_MessageSet::Value_Type ES_ScopeDebugFrontend_MessageSet::Value::TYPE_UNDEFINED;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)


// Enum value Value.Type.NULL
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const ES_ScopeDebugFrontend_MessageSet::Value_Type ES_ScopeDebugFrontend_MessageSet::Value::TYPE_NULL;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)


// Enum value Value.Type.TRUE
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const ES_ScopeDebugFrontend_MessageSet::Value_Type ES_ScopeDebugFrontend_MessageSet::Value::TYPE_TRUE;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)


// Enum value Value.Type.FALSE
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const ES_ScopeDebugFrontend_MessageSet::Value_Type ES_ScopeDebugFrontend_MessageSet::Value::TYPE_FALSE;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)


// Enum value Value.Type.NAN
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const ES_ScopeDebugFrontend_MessageSet::Value_Type ES_ScopeDebugFrontend_MessageSet::Value::TYPE_NAN;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)


// Enum value Value.Type.PLUS_INFINITY
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const ES_ScopeDebugFrontend_MessageSet::Value_Type ES_ScopeDebugFrontend_MessageSet::Value::TYPE_PLUS_INFINITY;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)


// Enum value Value.Type.MINUS_INFINITY
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const ES_ScopeDebugFrontend_MessageSet::Value_Type ES_ScopeDebugFrontend_MessageSet::Value::TYPE_MINUS_INFINITY;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)


// Enum value Value.Type.NUMBER
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const ES_ScopeDebugFrontend_MessageSet::Value_Type ES_ScopeDebugFrontend_MessageSet::Value::TYPE_NUMBER;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)


// Enum value Value.Type.STRING
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const ES_ScopeDebugFrontend_MessageSet::Value_Type ES_ScopeDebugFrontend_MessageSet::Value::TYPE_STRING;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)


// Enum value Value.Type.OBJECT
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const ES_ScopeDebugFrontend_MessageSet::Value_Type ES_ScopeDebugFrontend_MessageSet::Value::TYPE_OBJECT;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)



// Setters

void
ES_ScopeDebugFrontend_MessageSet::Value::SetType(ES_ScopeDebugFrontend_MessageSet::Value_Type v) 
{
	has_bits_.Reference().SetBit(0);
	_type = static_cast<ES_ScopeDebugFrontend_MessageSet::Value_Type>(v);
}


OpString &
ES_ScopeDebugFrontend_MessageSet::Value::GetStrRef() 
{
	has_bits_.Reference().SetBit(2);
	return _str;
}


void
ES_ScopeDebugFrontend_MessageSet::Value::SetObject(ES_ScopeDebugFrontend_MessageSet::ObjectValue * v) 
{
	has_bits_.Reference().SetBit(3);
	OP_DELETE(_object);
	_object = v;
}

// END: Value: Implementation

//   END: Message: Value

//   BEGIN: Message: Variable
/*static*/
const OpProtobufMessage *
ES_ScopeDebugFrontend_MessageSet::EvalData_Variable::GetMessageDescriptor(ES_ScopeDebugFrontend_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[ES_ScopeDebugFrontend_Descriptors::_gen_MessageOffs_eval_data_variable_];
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
						OpProtobufFormat::Uint32,
						2,
						UNI_L("objectID"),
						OpProtobufField::Required
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::EvalData_Variable,
						_name
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						ES_ScopeDebugFrontend_MessageSet::EvalData_Variable,
						_objectID
						);

	message = OP_NEW(OpProtobufMessage,
					(ES_ScopeDebugFrontend_Descriptors::_gen_MsgID_eval_data_variable_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(ES_ScopeDebugFrontend_MessageSet::EvalData_Variable, has_bits_),
					OP_PROTO_OFFSETOF(ES_ScopeDebugFrontend_MessageSet::EvalData_Variable, encoded_size_),
					"Variable",
					OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::EvalData_Variable>::Make,
					OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::EvalData_Variable>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	const OpProtobufMessage *parent = ES_ScopeDebugFrontend_MessageSet::EvalData::GetMessageDescriptor(descriptors);
	if (!parent)
		return NULL;
	message->SetParentId(parent->GetInternalId());

	return message;
}

// BEGIN: EvalData.Variable: Implementation

// Setters

OP_STATUS
ES_ScopeDebugFrontend_MessageSet::EvalData_Variable::SetName(const uni_char * v, int l) 
{
	return _name.Set(v, l);
}

// END: EvalData.Variable: Implementation

//   END: Message: Variable


// END: Messages


#include "modules/protobuf/src/protobuf_utils.h"
#include "modules/scope/src/scope_tp_message.h"
#include "modules/scope/src/scope_default_message.h"
#include "modules/scope/src/scope_manager.h"
#include "modules/scope/src/generated/g_scope_manager.h"
#include "modules/scope/src/generated/g_scope_ecmascript_debugger_interface.h"
#include "modules/scope/src/scope_ecmascript_debugger.h"

// BEGIN: ES_ScopeDebugFrontend_SI::Descriptors

ES_ScopeDebugFrontend_SI::Descriptors::Descriptors()
{
}

ES_ScopeDebugFrontend_SI::Descriptors::~Descriptors()
{
}

OP_STATUS
ES_ScopeDebugFrontend_SI::Descriptors::Construct()
{
    RETURN_IF_ERROR(ES_ScopeDebugFrontend_Descriptors::Construct());
	// Initialize commands
	command_list[0] = OpScopeCommand("ListRuntimes",
						Command_ListRuntimes,
						OpScopeCommand::Type_Call,
						_gen_MsgID_runtime_selection_,
						_gen_MsgID_runtime_list_
						);
	command_list[1] = OpScopeCommand("ContinueThread",
						Command_ContinueThread,
						OpScopeCommand::Type_Call,
						_gen_MsgID_thread_mode_,
						_gen_void_MsgID
						);
	command_list[2] = OpScopeCommand("Eval",
						Command_Eval,
						OpScopeCommand::Type_Call,
						_gen_MsgID_eval_data_,
						_gen_MsgID_eval_result_
						);
	command_list[3] = OpScopeCommand("ExamineObjects",
						Command_ExamineObjects,
						OpScopeCommand::Type_Call,
						_gen_MsgID_examine_list_,
						_gen_MsgID_object_chain_list_
						);
	command_list[4] = OpScopeCommand("SpotlightObject",
						Command_SpotlightObject,
						OpScopeCommand::Type_Call,
						_gen_MsgID_spotlight_object_selection_,
						_gen_void_MsgID
						);
	command_list[5] = OpScopeCommand("AddBreakpoint",
						Command_AddBreakpoint,
						OpScopeCommand::Type_Call,
						_gen_MsgID_breakpoint_,
						_gen_void_MsgID
						);
	command_list[6] = OpScopeCommand("RemoveBreakpoint",
						Command_RemoveBreakpoint,
						OpScopeCommand::Type_Call,
						_gen_MsgID_breakpoint_id_,
						_gen_void_MsgID
						);
	command_list[7] = OpScopeCommand("AddEventHandler",
						Command_AddEventHandler,
						OpScopeCommand::Type_Call,
						_gen_MsgID_event_handler_,
						_gen_void_MsgID
						);
	command_list[8] = OpScopeCommand("RemoveEventHandler",
						Command_RemoveEventHandler,
						OpScopeCommand::Type_Call,
						_gen_MsgID_event_handler_id_,
						_gen_void_MsgID
						);
	command_list[9] = OpScopeCommand("SetConfiguration",
						Command_SetConfiguration,
						OpScopeCommand::Type_Call,
						_gen_MsgID_configuration_,
						_gen_void_MsgID
						);
	command_list[10] = OpScopeCommand("GetBacktrace",
						Command_GetBacktrace,
						OpScopeCommand::Type_Call,
						_gen_MsgID_backtrace_selection_,
						_gen_MsgID_backtrace_frame_list_
						);
	command_list[11] = OpScopeCommand("Break",
						Command_Break,
						OpScopeCommand::Type_Call,
						_gen_MsgID_break_selection_,
						_gen_void_MsgID
						);
	command_list[12] = OpScopeCommand("InspectDom",
						Command_InspectDom,
						OpScopeCommand::Type_Call,
						_gen_MsgID_dom_traversal_,
						_gen_MsgID_node_list_
						);
	command_list[13] = OpScopeCommand("OnRuntimeStarted",
						Command_OnRuntimeStarted,
						OpScopeCommand::Type_Event,
						_gen_void_MsgID,
						_gen_MsgID_runtime_info_
						);
	command_list[14] = OpScopeCommand("OnRuntimeStopped",
						Command_OnRuntimeStopped,
						OpScopeCommand::Type_Event,
						_gen_void_MsgID,
						_gen_MsgID_runtime_id_
						);
	command_list[15] = OpScopeCommand("OnNewScript",
						Command_OnNewScript,
						OpScopeCommand::Type_Event,
						_gen_void_MsgID,
						_gen_MsgID_script_info_
						);
	command_list[16] = OpScopeCommand("OnThreadStarted",
						Command_OnThreadStarted,
						OpScopeCommand::Type_Event,
						_gen_void_MsgID,
						_gen_MsgID_thread_info_
						);
	command_list[17] = OpScopeCommand("OnThreadFinished",
						Command_OnThreadFinished,
						OpScopeCommand::Type_Event,
						_gen_void_MsgID,
						_gen_MsgID_thread_result_
						);
	command_list[18] = OpScopeCommand("OnThreadStoppedAt",
						Command_OnThreadStoppedAt,
						OpScopeCommand::Type_Event,
						_gen_void_MsgID,
						_gen_MsgID_thread_stop_info_
						);
	command_list[19] = OpScopeCommand("OnHandleEvent",
						Command_OnHandleEvent,
						OpScopeCommand::Type_Event,
						_gen_void_MsgID,
						_gen_MsgID_dom_event_
						);
	command_list[20] = OpScopeCommand("OnObjectSelected",
						Command_OnObjectSelected,
						OpScopeCommand::Type_Event,
						_gen_void_MsgID,
						_gen_MsgID_object_selection_
						);
	command_list[21] = OpScopeCommand("CssGetIndexMap",
						Command_CssGetIndexMap,
						OpScopeCommand::Type_Call,
						_gen_void_MsgID,
						_gen_MsgID_css_index_map_
						);
	command_list[22] = OpScopeCommand("CssGetAllStylesheets",
						Command_CssGetAllStylesheets,
						OpScopeCommand::Type_Call,
						_gen_MsgID_runtime_id_,
						_gen_MsgID_css_stylesheet_list_
						);
	command_list[23] = OpScopeCommand("CssGetStylesheet",
						Command_CssGetStylesheet,
						OpScopeCommand::Type_Call,
						_gen_MsgID_css_stylesheet_selection_,
						_gen_MsgID_css_stylesheet_rules_
						);
	command_list[24] = OpScopeCommand("CssGetStyleDeclarations",
						Command_CssGetStyleDeclarations,
						OpScopeCommand::Type_Call,
						_gen_MsgID_css_element_selection_,
						_gen_MsgID_css_style_declarations_
						);
	command_list[25] = OpScopeCommand("GetSelectedObject",
						Command_GetSelectedObject,
						OpScopeCommand::Type_Call,
						_gen_void_MsgID,
						_gen_MsgID_object_selection_
						);
	command_list[26] = OpScopeCommand("SpotlightObjects",
						Command_SpotlightObjects,
						OpScopeCommand::Type_Call,
						_gen_MsgID_spotlight_selection_,
						_gen_void_MsgID
						);
	command_list[27] = OpScopeCommand("OnParseError",
						Command_OnParseError,
						OpScopeCommand::Type_Event,
						_gen_void_MsgID,
						_gen_MsgID_dom_parse_error_
						);
	command_list[28] = OpScopeCommand("ReleaseObjects",
						Command_ReleaseObjects,
						OpScopeCommand::Type_Call,
						_gen_MsgID_release_objects_arg_,
						_gen_void_MsgID
						);
	command_list[29] = OpScopeCommand("SetPropertyFilter",
						Command_SetPropertyFilter,
						OpScopeCommand::Type_Call,
						_gen_MsgID_set_property_filter_arg_,
						_gen_void_MsgID
						);
	command_list[30] = OpScopeCommand("OnReadyStateChanged",
						Command_OnReadyStateChanged,
						OpScopeCommand::Type_Event,
						_gen_void_MsgID,
						_gen_MsgID_ready_state_info_
						);
	command_list[31] = OpScopeCommand("OnConsoleLog",
						Command_OnConsoleLog,
						OpScopeCommand::Type_Event,
						_gen_void_MsgID,
						_gen_MsgID_console_log_info_
						);
	command_list[32] = OpScopeCommand("OnConsoleTime",
						Command_OnConsoleTime,
						OpScopeCommand::Type_Event,
						_gen_void_MsgID,
						_gen_MsgID_console_time_info_
						);
	command_list[33] = OpScopeCommand("OnConsoleTimeEnd",
						Command_OnConsoleTimeEnd,
						OpScopeCommand::Type_Event,
						_gen_void_MsgID,
						_gen_MsgID_console_time_end_info_
						);
	command_list[34] = OpScopeCommand("OnConsoleTrace",
						Command_OnConsoleTrace,
						OpScopeCommand::Type_Event,
						_gen_void_MsgID,
						_gen_MsgID_console_trace_info_
						);
	command_list[35] = OpScopeCommand("OnConsoleProfile",
						Command_OnConsoleProfile,
						OpScopeCommand::Type_Event,
						_gen_void_MsgID,
						_gen_MsgID_console_profile_info_
						);
	command_list[36] = OpScopeCommand("OnConsoleProfileEnd",
						Command_OnConsoleProfileEnd,
						OpScopeCommand::Type_Event,
						_gen_void_MsgID,
						_gen_MsgID_console_profile_end_info_
						);
	command_list[37] = OpScopeCommand("AddEventBreakpoint",
						Command_AddEventBreakpoint,
						OpScopeCommand::Type_Call,
						_gen_MsgID_event_breakpoint_,
						_gen_void_MsgID
						);
	command_list[38] = OpScopeCommand("SetFunctionFilter",
						Command_SetFunctionFilter,
						OpScopeCommand::Type_Call,
						_gen_MsgID_function_filter_,
						_gen_void_MsgID
						);
	command_list[39] = OpScopeCommand("OnFunctionCallStarting",
						Command_OnFunctionCallStarting,
						OpScopeCommand::Type_Event,
						_gen_void_MsgID,
						_gen_MsgID_function_call_starting_info_
						);
	command_list[40] = OpScopeCommand("OnFunctionCallCompleted",
						Command_OnFunctionCallCompleted,
						OpScopeCommand::Type_Event,
						_gen_void_MsgID,
						_gen_MsgID_function_call_completed_info_
						);
	command_list[41] = OpScopeCommand("SearchDom",
						Command_SearchDom,
						OpScopeCommand::Type_Call,
						_gen_MsgID_search_dom_arg_,
						_gen_MsgID_node_list_
						);
	command_list[42] = OpScopeCommand("OnThreadMigrated",
						Command_OnThreadMigrated,
						OpScopeCommand::Type_Event,
						_gen_void_MsgID,
						_gen_MsgID_thread_migration_
						);
	command_list[43] = OpScopeCommand("GetFunctionPositions",
						Command_GetFunctionPositions,
						OpScopeCommand::Type_Call,
						_gen_MsgID_get_function_positions_arg_,
						_gen_MsgID_function_position_list_
						);
	command_list[44] = OpScopeCommand("GetEventNames",
						Command_GetEventNames,
						OpScopeCommand::Type_Call,
						_gen_MsgID_get_event_names_arg_,
						_gen_MsgID_event_names_
						);
	command_list[45] = OpScopeCommand("GetEventListeners",
						Command_GetEventListeners,
						OpScopeCommand::Type_Call,
						_gen_MsgID_get_event_listeners_arg_,
						_gen_MsgID_event_targets_
						);
	return OpStatus::OK;
}

// END: ES_ScopeDebugFrontend_SI::Descriptors
// Service implementation: BEGIN


// Service implementation

ES_ScopeDebugFrontend_SI::ES_ScopeDebugFrontend_SI(const uni_char* id, OpScopeServiceManager *manager, ControlType control)
		: OpScopeService(id == NULL ? UNI_L("ecmascript-debugger") : id, manager, control)
{
}

/*virtual*/
ES_ScopeDebugFrontend_SI::~ES_ScopeDebugFrontend_SI()
{
}

/*virtual*/
int
ES_ScopeDebugFrontend_SI::GetCommandCount() const
{
	return Command_Count;
}

/*virtual*/
OpScopeService::CommandRange
ES_ScopeDebugFrontend_SI::GetCommands() const
{
	Descriptors *descriptors = g_scope_manager->GetDescriptorSet().ecmascript_debugger_;
	OP_ASSERT(descriptors);
	return CommandRange(descriptors ? descriptors->command_list : NULL, Command_Count);
}

/*virtual*/
OP_STATUS
ES_ScopeDebugFrontend_SI::DoReceive( OpScopeClient *client, const OpScopeTPMessage &msg )
{
	// Check for invalid request data
	if (msg.Status() != OpScopeTPMessage::OK) // All calls must have status OK
		return SetCommandError(OpScopeTPMessage::BadRequest, GetInvalidStatusFieldText());
	if (msg.ServiceName().Compare(GetName()) != 0) // Make sure the service name matches the one in the message
		return SetCommandError(OpScopeTPMessage::InternalError, GetIncorrectServiceText());

	if (msg.CommandID() == Command_ListRuntimes) // ListRuntimes
	{
		OP_STATUS status = OpStatus::OK;
		RuntimeSelection in;
		RuntimeList out;

		OpProtobufInstanceProxy in_proxy(RuntimeSelection::GetMessageDescriptor(GetDescriptors()), &in);
		if (in_proxy.GetProtoMessage() == NULL)
			return OpStatus::ERR_NO_MEMORY;
		status = ParseMessage(client, msg, in_proxy);
		if (OpStatus::IsError(status))
		{
			if (GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if none was set by a parser
				RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetParseCommandMessageFailedText()));
			return status;
		}

		status = DoListRuntimes(in, out);
		if (OpStatus::IsError(status))
		{
			if (GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if none was set by command
			RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetCommandExecutionFailedText()));
			return status;
		}

		OpProtobufInstanceProxy out_proxy(RuntimeList::GetMessageDescriptor(GetDescriptors()), &out);
		if (out_proxy.GetProtoMessage() == NULL)
			return OpStatus::ERR_NO_MEMORY;
		RETURN_IF_ERROR(SendResponse(client, msg, out_proxy));
	}
	else if (msg.CommandID() == Command_ContinueThread) // ContinueThread
	{
		OP_STATUS status = OpStatus::OK;
		ThreadMode in;

		OpProtobufInstanceProxy in_proxy(ThreadMode::GetMessageDescriptor(GetDescriptors()), &in);
		if (in_proxy.GetProtoMessage() == NULL)
			return OpStatus::ERR_NO_MEMORY;
		status = ParseMessage(client, msg, in_proxy);
		if (OpStatus::IsError(status))
		{
			if (GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if none was set by a parser
				RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetParseCommandMessageFailedText()));
			return status;
		}

		status = DoContinueThread(in);
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
	else if (msg.CommandID() == Command_SpotlightObject) // SpotlightObject
	{
		OP_STATUS status = OpStatus::OK;
		SpotlightObjectSelection in;

		OpProtobufInstanceProxy in_proxy(SpotlightObjectSelection::GetMessageDescriptor(GetDescriptors()), &in);
		if (in_proxy.GetProtoMessage() == NULL)
			return OpStatus::ERR_NO_MEMORY;
		status = ParseMessage(client, msg, in_proxy);
		if (OpStatus::IsError(status))
		{
			if (GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if none was set by a parser
				RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetParseCommandMessageFailedText()));
			return status;
		}

		status = DoSpotlightObject(in);
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
	else if (msg.CommandID() == Command_AddBreakpoint) // AddBreakpoint
	{
		OP_STATUS status = OpStatus::OK;
		Breakpoint in;

		OpProtobufInstanceProxy in_proxy(Breakpoint::GetMessageDescriptor(GetDescriptors()), &in);
		if (in_proxy.GetProtoMessage() == NULL)
			return OpStatus::ERR_NO_MEMORY;
		status = ParseMessage(client, msg, in_proxy);
		if (OpStatus::IsError(status))
		{
			if (GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if none was set by a parser
				RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetParseCommandMessageFailedText()));
			return status;
		}

		status = DoAddBreakpoint(in);
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
	else if (msg.CommandID() == Command_RemoveBreakpoint) // RemoveBreakpoint
	{
		OP_STATUS status = OpStatus::OK;
		BreakpointID in;

		OpProtobufInstanceProxy in_proxy(BreakpointID::GetMessageDescriptor(GetDescriptors()), &in);
		if (in_proxy.GetProtoMessage() == NULL)
			return OpStatus::ERR_NO_MEMORY;
		status = ParseMessage(client, msg, in_proxy);
		if (OpStatus::IsError(status))
		{
			if (GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if none was set by a parser
				RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetParseCommandMessageFailedText()));
			return status;
		}

		status = DoRemoveBreakpoint(in);
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
	else if (msg.CommandID() == Command_AddEventHandler) // AddEventHandler
	{
		OP_STATUS status = OpStatus::OK;
		EventHandler in;

		OpProtobufInstanceProxy in_proxy(EventHandler::GetMessageDescriptor(GetDescriptors()), &in);
		if (in_proxy.GetProtoMessage() == NULL)
			return OpStatus::ERR_NO_MEMORY;
		status = ParseMessage(client, msg, in_proxy);
		if (OpStatus::IsError(status))
		{
			if (GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if none was set by a parser
				RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetParseCommandMessageFailedText()));
			return status;
		}

		status = DoAddEventHandler(in);
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
	else if (msg.CommandID() == Command_RemoveEventHandler) // RemoveEventHandler
	{
		OP_STATUS status = OpStatus::OK;
		EventHandlerID in;

		OpProtobufInstanceProxy in_proxy(EventHandlerID::GetMessageDescriptor(GetDescriptors()), &in);
		if (in_proxy.GetProtoMessage() == NULL)
			return OpStatus::ERR_NO_MEMORY;
		status = ParseMessage(client, msg, in_proxy);
		if (OpStatus::IsError(status))
		{
			if (GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if none was set by a parser
				RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetParseCommandMessageFailedText()));
			return status;
		}

		status = DoRemoveEventHandler(in);
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
	else if (msg.CommandID() == Command_SetConfiguration) // SetConfiguration
	{
		OP_STATUS status = OpStatus::OK;
		Configuration in;

		OpProtobufInstanceProxy in_proxy(Configuration::GetMessageDescriptor(GetDescriptors()), &in);
		if (in_proxy.GetProtoMessage() == NULL)
			return OpStatus::ERR_NO_MEMORY;
		status = ParseMessage(client, msg, in_proxy);
		if (OpStatus::IsError(status))
		{
			if (GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if none was set by a parser
				RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetParseCommandMessageFailedText()));
			return status;
		}

		status = DoSetConfiguration(in);
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
	else if (msg.CommandID() == Command_GetBacktrace) // GetBacktrace
	{
		OP_STATUS status = OpStatus::OK;
		BacktraceSelection in;
		BacktraceFrameList out;

		OpProtobufInstanceProxy in_proxy(BacktraceSelection::GetMessageDescriptor(GetDescriptors()), &in);
		if (in_proxy.GetProtoMessage() == NULL)
			return OpStatus::ERR_NO_MEMORY;
		status = ParseMessage(client, msg, in_proxy);
		if (OpStatus::IsError(status))
		{
			if (GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if none was set by a parser
				RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetParseCommandMessageFailedText()));
			return status;
		}

		status = DoGetBacktrace(in, out);
		if (OpStatus::IsError(status))
		{
			if (GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if none was set by command
			RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetCommandExecutionFailedText()));
			return status;
		}

		OpProtobufInstanceProxy out_proxy(BacktraceFrameList::GetMessageDescriptor(GetDescriptors()), &out);
		if (out_proxy.GetProtoMessage() == NULL)
			return OpStatus::ERR_NO_MEMORY;
		RETURN_IF_ERROR(SendResponse(client, msg, out_proxy));
	}
	else if (msg.CommandID() == Command_Break) // Break
	{
		OP_STATUS status = OpStatus::OK;
		BreakSelection in;

		OpProtobufInstanceProxy in_proxy(BreakSelection::GetMessageDescriptor(GetDescriptors()), &in);
		if (in_proxy.GetProtoMessage() == NULL)
			return OpStatus::ERR_NO_MEMORY;
		status = ParseMessage(client, msg, in_proxy);
		if (OpStatus::IsError(status))
		{
			if (GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if none was set by a parser
				RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetParseCommandMessageFailedText()));
			return status;
		}

		status = DoBreak(in);
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
	else if (msg.CommandID() == Command_InspectDom) // InspectDom
	{
		OP_STATUS status = OpStatus::OK;
		DomTraversal in;
		NodeList out;

		OpProtobufInstanceProxy in_proxy(DomTraversal::GetMessageDescriptor(GetDescriptors()), &in);
		if (in_proxy.GetProtoMessage() == NULL)
			return OpStatus::ERR_NO_MEMORY;
		status = ParseMessage(client, msg, in_proxy);
		if (OpStatus::IsError(status))
		{
			if (GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if none was set by a parser
				RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetParseCommandMessageFailedText()));
			return status;
		}

		status = DoInspectDom(in, out);
		if (OpStatus::IsError(status))
		{
			if (GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if none was set by command
			RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetCommandExecutionFailedText()));
			return status;
		}

		OpProtobufInstanceProxy out_proxy(NodeList::GetMessageDescriptor(GetDescriptors()), &out);
		if (out_proxy.GetProtoMessage() == NULL)
			return OpStatus::ERR_NO_MEMORY;
		RETURN_IF_ERROR(SendResponse(client, msg, out_proxy));
	}
	else if (msg.CommandID() == Command_CssGetIndexMap) // CssGetIndexMap
	{
		OP_STATUS status = OpStatus::OK;
		CssIndexMap out;

		status = DoCssGetIndexMap(out);
		if (OpStatus::IsError(status))
		{
			if (GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if none was set by command
			RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetCommandExecutionFailedText()));
			return status;
		}

		OpProtobufInstanceProxy out_proxy(CssIndexMap::GetMessageDescriptor(GetDescriptors()), &out);
		if (out_proxy.GetProtoMessage() == NULL)
			return OpStatus::ERR_NO_MEMORY;
		RETURN_IF_ERROR(SendResponse(client, msg, out_proxy));
	}
	else if (msg.CommandID() == Command_CssGetAllStylesheets) // CssGetAllStylesheets
	{
		OP_STATUS status = OpStatus::OK;
		RuntimeID in;
		CssStylesheetList out;

		OpProtobufInstanceProxy in_proxy(RuntimeID::GetMessageDescriptor(GetDescriptors()), &in);
		if (in_proxy.GetProtoMessage() == NULL)
			return OpStatus::ERR_NO_MEMORY;
		status = ParseMessage(client, msg, in_proxy);
		if (OpStatus::IsError(status))
		{
			if (GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if none was set by a parser
				RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetParseCommandMessageFailedText()));
			return status;
		}

		status = DoCssGetAllStylesheets(in, out);
		if (OpStatus::IsError(status))
		{
			if (GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if none was set by command
			RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetCommandExecutionFailedText()));
			return status;
		}

		OpProtobufInstanceProxy out_proxy(CssStylesheetList::GetMessageDescriptor(GetDescriptors()), &out);
		if (out_proxy.GetProtoMessage() == NULL)
			return OpStatus::ERR_NO_MEMORY;
		RETURN_IF_ERROR(SendResponse(client, msg, out_proxy));
	}
	else if (msg.CommandID() == Command_CssGetStylesheet) // CssGetStylesheet
	{
		OP_STATUS status = OpStatus::OK;
		CssStylesheetSelection in;
		CssStylesheetRules out;

		OpProtobufInstanceProxy in_proxy(CssStylesheetSelection::GetMessageDescriptor(GetDescriptors()), &in);
		if (in_proxy.GetProtoMessage() == NULL)
			return OpStatus::ERR_NO_MEMORY;
		status = ParseMessage(client, msg, in_proxy);
		if (OpStatus::IsError(status))
		{
			if (GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if none was set by a parser
				RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetParseCommandMessageFailedText()));
			return status;
		}

		status = DoCssGetStylesheet(in, out);
		if (OpStatus::IsError(status))
		{
			if (GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if none was set by command
			RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetCommandExecutionFailedText()));
			return status;
		}

		OpProtobufInstanceProxy out_proxy(CssStylesheetRules::GetMessageDescriptor(GetDescriptors()), &out);
		if (out_proxy.GetProtoMessage() == NULL)
			return OpStatus::ERR_NO_MEMORY;
		RETURN_IF_ERROR(SendResponse(client, msg, out_proxy));
	}
	else if (msg.CommandID() == Command_CssGetStyleDeclarations) // CssGetStyleDeclarations
	{
		OP_STATUS status = OpStatus::OK;
		CssElementSelection in;
		CssStyleDeclarations out;

		OpProtobufInstanceProxy in_proxy(CssElementSelection::GetMessageDescriptor(GetDescriptors()), &in);
		if (in_proxy.GetProtoMessage() == NULL)
			return OpStatus::ERR_NO_MEMORY;
		status = ParseMessage(client, msg, in_proxy);
		if (OpStatus::IsError(status))
		{
			if (GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if none was set by a parser
				RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetParseCommandMessageFailedText()));
			return status;
		}

		status = DoCssGetStyleDeclarations(in, out);
		if (OpStatus::IsError(status))
		{
			if (GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if none was set by command
			RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetCommandExecutionFailedText()));
			return status;
		}

		OpProtobufInstanceProxy out_proxy(CssStyleDeclarations::GetMessageDescriptor(GetDescriptors()), &out);
		if (out_proxy.GetProtoMessage() == NULL)
			return OpStatus::ERR_NO_MEMORY;
		RETURN_IF_ERROR(SendResponse(client, msg, out_proxy));
	}
	else if (msg.CommandID() == Command_GetSelectedObject) // GetSelectedObject
	{
		OP_STATUS status = OpStatus::OK;
		ObjectSelection out;

		status = DoGetSelectedObject(out);
		if (OpStatus::IsError(status))
		{
			if (GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if none was set by command
			RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetCommandExecutionFailedText()));
			return status;
		}

		OpProtobufInstanceProxy out_proxy(ObjectSelection::GetMessageDescriptor(GetDescriptors()), &out);
		if (out_proxy.GetProtoMessage() == NULL)
			return OpStatus::ERR_NO_MEMORY;
		RETURN_IF_ERROR(SendResponse(client, msg, out_proxy));
	}
	else if (msg.CommandID() == Command_SpotlightObjects) // SpotlightObjects
	{
		OP_STATUS status = OpStatus::OK;
		SpotlightSelection in;

		OpProtobufInstanceProxy in_proxy(SpotlightSelection::GetMessageDescriptor(GetDescriptors()), &in);
		if (in_proxy.GetProtoMessage() == NULL)
			return OpStatus::ERR_NO_MEMORY;
		status = ParseMessage(client, msg, in_proxy);
		if (OpStatus::IsError(status))
		{
			if (GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if none was set by a parser
				RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetParseCommandMessageFailedText()));
			return status;
		}

		status = DoSpotlightObjects(in);
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
	else if (msg.CommandID() == Command_ReleaseObjects) // ReleaseObjects
	{
		OP_STATUS status = OpStatus::OK;
		ReleaseObjectsArg in;

		OpProtobufInstanceProxy in_proxy(ReleaseObjectsArg::GetMessageDescriptor(GetDescriptors()), &in);
		if (in_proxy.GetProtoMessage() == NULL)
			return OpStatus::ERR_NO_MEMORY;
		status = ParseMessage(client, msg, in_proxy);
		if (OpStatus::IsError(status))
		{
			if (GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if none was set by a parser
				RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetParseCommandMessageFailedText()));
			return status;
		}

		status = DoReleaseObjects(in);
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
	else if (msg.CommandID() == Command_SetPropertyFilter) // SetPropertyFilter
	{
		OP_STATUS status = OpStatus::OK;
		SetPropertyFilterArg in;

		OpProtobufInstanceProxy in_proxy(SetPropertyFilterArg::GetMessageDescriptor(GetDescriptors()), &in);
		if (in_proxy.GetProtoMessage() == NULL)
			return OpStatus::ERR_NO_MEMORY;
		status = ParseMessage(client, msg, in_proxy);
		if (OpStatus::IsError(status))
		{
			if (GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if none was set by a parser
				RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetParseCommandMessageFailedText()));
			return status;
		}

		status = DoSetPropertyFilter(in);
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
	else if (msg.CommandID() == Command_AddEventBreakpoint) // AddEventBreakpoint
	{
		OP_STATUS status = OpStatus::OK;
		EventBreakpoint in;

		OpProtobufInstanceProxy in_proxy(EventBreakpoint::GetMessageDescriptor(GetDescriptors()), &in);
		if (in_proxy.GetProtoMessage() == NULL)
			return OpStatus::ERR_NO_MEMORY;
		status = ParseMessage(client, msg, in_proxy);
		if (OpStatus::IsError(status))
		{
			if (GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if none was set by a parser
				RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetParseCommandMessageFailedText()));
			return status;
		}

		status = DoAddEventBreakpoint(in);
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
	else if (msg.CommandID() == Command_SetFunctionFilter) // SetFunctionFilter
	{
		OP_STATUS status = OpStatus::OK;
		FunctionFilter in;

		OpProtobufInstanceProxy in_proxy(FunctionFilter::GetMessageDescriptor(GetDescriptors()), &in);
		if (in_proxy.GetProtoMessage() == NULL)
			return OpStatus::ERR_NO_MEMORY;
		status = ParseMessage(client, msg, in_proxy);
		if (OpStatus::IsError(status))
		{
			if (GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if none was set by a parser
				RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetParseCommandMessageFailedText()));
			return status;
		}

		status = DoSetFunctionFilter(in);
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
	else if (msg.CommandID() == Command_SearchDom) // SearchDom
	{
		OP_STATUS status = OpStatus::OK;
		SearchDomArg in;
		NodeList out;

		OpProtobufInstanceProxy in_proxy(SearchDomArg::GetMessageDescriptor(GetDescriptors()), &in);
		if (in_proxy.GetProtoMessage() == NULL)
			return OpStatus::ERR_NO_MEMORY;
		status = ParseMessage(client, msg, in_proxy);
		if (OpStatus::IsError(status))
		{
			if (GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if none was set by a parser
				RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetParseCommandMessageFailedText()));
			return status;
		}

		status = DoSearchDom(in, out);
		if (OpStatus::IsError(status))
		{
			if (GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if none was set by command
			RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetCommandExecutionFailedText()));
			return status;
		}

		OpProtobufInstanceProxy out_proxy(NodeList::GetMessageDescriptor(GetDescriptors()), &out);
		if (out_proxy.GetProtoMessage() == NULL)
			return OpStatus::ERR_NO_MEMORY;
		RETURN_IF_ERROR(SendResponse(client, msg, out_proxy));
	}
	else if (msg.CommandID() == Command_GetFunctionPositions) // GetFunctionPositions
	{
		OP_STATUS status = OpStatus::OK;
		GetFunctionPositionsArg in;
		FunctionPositionList out;

		OpProtobufInstanceProxy in_proxy(GetFunctionPositionsArg::GetMessageDescriptor(GetDescriptors()), &in);
		if (in_proxy.GetProtoMessage() == NULL)
			return OpStatus::ERR_NO_MEMORY;
		status = ParseMessage(client, msg, in_proxy);
		if (OpStatus::IsError(status))
		{
			if (GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if none was set by a parser
				RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetParseCommandMessageFailedText()));
			return status;
		}

		status = DoGetFunctionPositions(in, out);
		if (OpStatus::IsError(status))
		{
			if (GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if none was set by command
			RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetCommandExecutionFailedText()));
			return status;
		}

		OpProtobufInstanceProxy out_proxy(FunctionPositionList::GetMessageDescriptor(GetDescriptors()), &out);
		if (out_proxy.GetProtoMessage() == NULL)
			return OpStatus::ERR_NO_MEMORY;
		RETURN_IF_ERROR(SendResponse(client, msg, out_proxy));
	}
	else if (msg.CommandID() == Command_GetEventNames) // GetEventNames
	{
		OP_STATUS status = OpStatus::OK;
		GetEventNamesArg in;
		EventNames out;

		OpProtobufInstanceProxy in_proxy(GetEventNamesArg::GetMessageDescriptor(GetDescriptors()), &in);
		if (in_proxy.GetProtoMessage() == NULL)
			return OpStatus::ERR_NO_MEMORY;
		status = ParseMessage(client, msg, in_proxy);
		if (OpStatus::IsError(status))
		{
			if (GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if none was set by a parser
				RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetParseCommandMessageFailedText()));
			return status;
		}

		status = DoGetEventNames(in, out);
		if (OpStatus::IsError(status))
		{
			if (GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if none was set by command
			RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetCommandExecutionFailedText()));
			return status;
		}

		OpProtobufInstanceProxy out_proxy(EventNames::GetMessageDescriptor(GetDescriptors()), &out);
		if (out_proxy.GetProtoMessage() == NULL)
			return OpStatus::ERR_NO_MEMORY;
		RETURN_IF_ERROR(SendResponse(client, msg, out_proxy));
	}
	else if (msg.CommandID() == Command_GetEventListeners) // GetEventListeners
	{
		OP_STATUS status = OpStatus::OK;
		GetEventListenersArg in;
		EventTargets out;

		OpProtobufInstanceProxy in_proxy(GetEventListenersArg::GetMessageDescriptor(GetDescriptors()), &in);
		if (in_proxy.GetProtoMessage() == NULL)
			return OpStatus::ERR_NO_MEMORY;
		status = ParseMessage(client, msg, in_proxy);
		if (OpStatus::IsError(status))
		{
			if (GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if none was set by a parser
				RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetParseCommandMessageFailedText()));
			return status;
		}

		status = DoGetEventListeners(in, out);
		if (OpStatus::IsError(status))
		{
			if (GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if none was set by command
			RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetCommandExecutionFailedText()));
			return status;
		}

		OpProtobufInstanceProxy out_proxy(EventTargets::GetMessageDescriptor(GetDescriptors()), &out);
		if (out_proxy.GetProtoMessage() == NULL)
			return OpStatus::ERR_NO_MEMORY;
		RETURN_IF_ERROR(SendResponse(client, msg, out_proxy));
	}
	else if (msg.CommandID() == Command_Eval) // Eval
	{
		OP_STATUS status = OpStatus::OK;
		unsigned async_tag;
		status = InitAsyncCommand(msg, async_tag); // Needed for async requests, the response will use this info when request is done
		if (OpStatus::IsError(status))
		{
			RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetInitAsyncCommandFailedText()));
			return status;
		}
		EvalData in;

		OpProtobufInstanceProxy in_proxy(EvalData::GetMessageDescriptor(GetDescriptors()), &in);
		if (in_proxy.GetProtoMessage() == NULL)
			return OpStatus::ERR_NO_MEMORY;
		status = ParseMessage(client, msg, in_proxy);
		if (OpStatus::IsError(status))
		{
			if (GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if none was set by a parser
				RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetParseCommandMessageFailedText()));
			return status;
		}

		status = DoEval(in, async_tag);
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
	else if (msg.CommandID() == Command_ExamineObjects) // ExamineObjects
	{
		OP_STATUS status = OpStatus::OK;
		unsigned async_tag;
		status = InitAsyncCommand(msg, async_tag); // Needed for async requests, the response will use this info when request is done
		if (OpStatus::IsError(status))
		{
			RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetInitAsyncCommandFailedText()));
			return status;
		}
		ExamineList in;

		OpProtobufInstanceProxy in_proxy(ExamineList::GetMessageDescriptor(GetDescriptors()), &in);
		if (in_proxy.GetProtoMessage() == NULL)
			return OpStatus::ERR_NO_MEMORY;
		status = ParseMessage(client, msg, in_proxy);
		if (OpStatus::IsError(status))
		{
			if (GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if none was set by a parser
				RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetParseCommandMessageFailedText()));
			return status;
		}

		status = DoExamineObjects(in, async_tag);
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
ES_ScopeDebugFrontend_SI::GetMessage(unsigned message_id) const
{
	Descriptors *descriptors = GetDescriptors();
	if (!descriptors)
		return NULL;
	return descriptors->Get(message_id);
}

ES_ScopeDebugFrontend_SI::Descriptors *
ES_ScopeDebugFrontend_SI::GetDescriptors() const
{
	Descriptors *d = g_scope_manager->GetDescriptorSet().ecmascript_debugger_;
	OP_ASSERT(d);
	return d;
}

/*virtual*/
unsigned
ES_ScopeDebugFrontend_SI::GetMessageCount() const
{
	return ES_ScopeDebugFrontend_Descriptors::_gen_Message_Count;
}

/*virtual*/
OpScopeService::MessageIDRange
ES_ScopeDebugFrontend_SI::GetMessageIDs() const
{
	unsigned start = ES_ScopeDebugFrontend_Descriptors::_gen_Message_Count > 0 ? 1 : 0;
	return MessageIDRange(start, start + ES_ScopeDebugFrontend_Descriptors::_gen_Message_Count);
}

/*virtual*/
OpScopeService::MessageRange
ES_ScopeDebugFrontend_SI::GetMessages() const
{
	unsigned start = ES_ScopeDebugFrontend_Descriptors::_gen_Message_Count > 0 ? 1 : 0;
	return MessageRange(this, start, start + ES_ScopeDebugFrontend_Descriptors::_gen_Message_Count);
}

/* virtual */
const char *
ES_ScopeDebugFrontend_SI::GetVersionString() const
{
	return "6.15";
}

/* virtual */
int
ES_ScopeDebugFrontend_SI::GetMajorVersion() const
{
	return 6;
}

/* virtual */
int
ES_ScopeDebugFrontend_SI::GetMinorVersion() const
{
	return 15;
}

/* virtual */
const char *
ES_ScopeDebugFrontend_SI::GetPatchVersion() const
{
	return "0";
}

OP_STATUS
ES_ScopeDebugFrontend_SI::SendOnRuntimeStarted(const RuntimeInfo &msg) // OnRuntimeStarted
{
	OpProtobufInstanceProxy proxy(RuntimeInfo::GetMessageDescriptor(GetDescriptors()), const_cast<RuntimeInfo *>(&msg));
	if (proxy.GetProtoMessage() == NULL)
		return OpStatus::ERR_NO_MEMORY;
	return SendEvent(proxy, Command_OnRuntimeStarted);
}


OP_STATUS
ES_ScopeDebugFrontend_SI::SendOnRuntimeStopped(const RuntimeID &msg) // OnRuntimeStopped
{
	OpProtobufInstanceProxy proxy(RuntimeID::GetMessageDescriptor(GetDescriptors()), const_cast<RuntimeID *>(&msg));
	if (proxy.GetProtoMessage() == NULL)
		return OpStatus::ERR_NO_MEMORY;
	return SendEvent(proxy, Command_OnRuntimeStopped);
}


OP_STATUS
ES_ScopeDebugFrontend_SI::SendOnNewScript(const ScriptInfo &msg) // OnNewScript
{
	OpProtobufInstanceProxy proxy(ScriptInfo::GetMessageDescriptor(GetDescriptors()), const_cast<ScriptInfo *>(&msg));
	if (proxy.GetProtoMessage() == NULL)
		return OpStatus::ERR_NO_MEMORY;
	return SendEvent(proxy, Command_OnNewScript);
}


OP_STATUS
ES_ScopeDebugFrontend_SI::SendOnThreadStarted(const ThreadInfo &msg) // OnThreadStarted
{
	OpProtobufInstanceProxy proxy(ThreadInfo::GetMessageDescriptor(GetDescriptors()), const_cast<ThreadInfo *>(&msg));
	if (proxy.GetProtoMessage() == NULL)
		return OpStatus::ERR_NO_MEMORY;
	return SendEvent(proxy, Command_OnThreadStarted);
}


OP_STATUS
ES_ScopeDebugFrontend_SI::SendOnThreadFinished(const ThreadResult &msg) // OnThreadFinished
{
	OpProtobufInstanceProxy proxy(ThreadResult::GetMessageDescriptor(GetDescriptors()), const_cast<ThreadResult *>(&msg));
	if (proxy.GetProtoMessage() == NULL)
		return OpStatus::ERR_NO_MEMORY;
	return SendEvent(proxy, Command_OnThreadFinished);
}


OP_STATUS
ES_ScopeDebugFrontend_SI::SendOnThreadStoppedAt(const ThreadStopInfo &msg) // OnThreadStoppedAt
{
	OpProtobufInstanceProxy proxy(ThreadStopInfo::GetMessageDescriptor(GetDescriptors()), const_cast<ThreadStopInfo *>(&msg));
	if (proxy.GetProtoMessage() == NULL)
		return OpStatus::ERR_NO_MEMORY;
	return SendEvent(proxy, Command_OnThreadStoppedAt);
}


OP_STATUS
ES_ScopeDebugFrontend_SI::SendOnHandleEvent(const DomEvent &msg) // OnHandleEvent
{
	OpProtobufInstanceProxy proxy(DomEvent::GetMessageDescriptor(GetDescriptors()), const_cast<DomEvent *>(&msg));
	if (proxy.GetProtoMessage() == NULL)
		return OpStatus::ERR_NO_MEMORY;
	return SendEvent(proxy, Command_OnHandleEvent);
}


OP_STATUS
ES_ScopeDebugFrontend_SI::SendOnObjectSelected(const ObjectSelection &msg) // OnObjectSelected
{
	OpProtobufInstanceProxy proxy(ObjectSelection::GetMessageDescriptor(GetDescriptors()), const_cast<ObjectSelection *>(&msg));
	if (proxy.GetProtoMessage() == NULL)
		return OpStatus::ERR_NO_MEMORY;
	return SendEvent(proxy, Command_OnObjectSelected);
}


OP_STATUS
ES_ScopeDebugFrontend_SI::SendOnParseError(const DomParseError &msg) // OnParseError
{
	OpProtobufInstanceProxy proxy(DomParseError::GetMessageDescriptor(GetDescriptors()), const_cast<DomParseError *>(&msg));
	if (proxy.GetProtoMessage() == NULL)
		return OpStatus::ERR_NO_MEMORY;
	return SendEvent(proxy, Command_OnParseError);
}


OP_STATUS
ES_ScopeDebugFrontend_SI::SendOnReadyStateChanged(const ReadyStateInfo &msg) // OnReadyStateChanged
{
	OpProtobufInstanceProxy proxy(ReadyStateInfo::GetMessageDescriptor(GetDescriptors()), const_cast<ReadyStateInfo *>(&msg));
	if (proxy.GetProtoMessage() == NULL)
		return OpStatus::ERR_NO_MEMORY;
	return SendEvent(proxy, Command_OnReadyStateChanged);
}


OP_STATUS
ES_ScopeDebugFrontend_SI::SendOnConsoleLog(const ConsoleLogInfo &msg) // OnConsoleLog
{
	OpProtobufInstanceProxy proxy(ConsoleLogInfo::GetMessageDescriptor(GetDescriptors()), const_cast<ConsoleLogInfo *>(&msg));
	if (proxy.GetProtoMessage() == NULL)
		return OpStatus::ERR_NO_MEMORY;
	return SendEvent(proxy, Command_OnConsoleLog);
}


OP_STATUS
ES_ScopeDebugFrontend_SI::SendOnConsoleTime(const ConsoleTimeInfo &msg) // OnConsoleTime
{
	OpProtobufInstanceProxy proxy(ConsoleTimeInfo::GetMessageDescriptor(GetDescriptors()), const_cast<ConsoleTimeInfo *>(&msg));
	if (proxy.GetProtoMessage() == NULL)
		return OpStatus::ERR_NO_MEMORY;
	return SendEvent(proxy, Command_OnConsoleTime);
}


OP_STATUS
ES_ScopeDebugFrontend_SI::SendOnConsoleTimeEnd(const ConsoleTimeEndInfo &msg) // OnConsoleTimeEnd
{
	OpProtobufInstanceProxy proxy(ConsoleTimeEndInfo::GetMessageDescriptor(GetDescriptors()), const_cast<ConsoleTimeEndInfo *>(&msg));
	if (proxy.GetProtoMessage() == NULL)
		return OpStatus::ERR_NO_MEMORY;
	return SendEvent(proxy, Command_OnConsoleTimeEnd);
}


OP_STATUS
ES_ScopeDebugFrontend_SI::SendOnConsoleTrace(const ConsoleTraceInfo &msg) // OnConsoleTrace
{
	OpProtobufInstanceProxy proxy(ConsoleTraceInfo::GetMessageDescriptor(GetDescriptors()), const_cast<ConsoleTraceInfo *>(&msg));
	if (proxy.GetProtoMessage() == NULL)
		return OpStatus::ERR_NO_MEMORY;
	return SendEvent(proxy, Command_OnConsoleTrace);
}


OP_STATUS
ES_ScopeDebugFrontend_SI::SendOnConsoleProfile(const ConsoleProfileInfo &msg) // OnConsoleProfile
{
	OpProtobufInstanceProxy proxy(ConsoleProfileInfo::GetMessageDescriptor(GetDescriptors()), const_cast<ConsoleProfileInfo *>(&msg));
	if (proxy.GetProtoMessage() == NULL)
		return OpStatus::ERR_NO_MEMORY;
	return SendEvent(proxy, Command_OnConsoleProfile);
}


OP_STATUS
ES_ScopeDebugFrontend_SI::SendOnConsoleProfileEnd(const ConsoleProfileEndInfo &msg) // OnConsoleProfileEnd
{
	OpProtobufInstanceProxy proxy(ConsoleProfileEndInfo::GetMessageDescriptor(GetDescriptors()), const_cast<ConsoleProfileEndInfo *>(&msg));
	if (proxy.GetProtoMessage() == NULL)
		return OpStatus::ERR_NO_MEMORY;
	return SendEvent(proxy, Command_OnConsoleProfileEnd);
}


OP_STATUS
ES_ScopeDebugFrontend_SI::SendOnFunctionCallStarting(const FunctionCallStartingInfo &msg) // OnFunctionCallStarting
{
	OpProtobufInstanceProxy proxy(FunctionCallStartingInfo::GetMessageDescriptor(GetDescriptors()), const_cast<FunctionCallStartingInfo *>(&msg));
	if (proxy.GetProtoMessage() == NULL)
		return OpStatus::ERR_NO_MEMORY;
	return SendEvent(proxy, Command_OnFunctionCallStarting);
}


OP_STATUS
ES_ScopeDebugFrontend_SI::SendOnFunctionCallCompleted(const FunctionCallCompletedInfo &msg) // OnFunctionCallCompleted
{
	OpProtobufInstanceProxy proxy(FunctionCallCompletedInfo::GetMessageDescriptor(GetDescriptors()), const_cast<FunctionCallCompletedInfo *>(&msg));
	if (proxy.GetProtoMessage() == NULL)
		return OpStatus::ERR_NO_MEMORY;
	return SendEvent(proxy, Command_OnFunctionCallCompleted);
}


OP_STATUS
ES_ScopeDebugFrontend_SI::SendOnThreadMigrated(const ThreadMigration &msg) // OnThreadMigrated
{
	OpProtobufInstanceProxy proxy(ThreadMigration::GetMessageDescriptor(GetDescriptors()), const_cast<ThreadMigration *>(&msg));
	if (proxy.GetProtoMessage() == NULL)
		return OpStatus::ERR_NO_MEMORY;
	return SendEvent(proxy, Command_OnThreadMigrated);
}


OP_STATUS
ES_ScopeDebugFrontend_SI::SendEval(const EvalResult &msg, unsigned int tag) // Eval
{
	OpProtobufInstanceProxy proxy(EvalResult::GetMessageDescriptor(GetDescriptors()), const_cast<EvalResult *>(&msg));
	if (proxy.GetProtoMessage() == NULL)
		return OpStatus::ERR_NO_MEMORY;
	return SendAsyncResponse(tag, proxy, Command_Eval);
}


OP_STATUS
ES_ScopeDebugFrontend_SI::SendExamineObjects(const ObjectChainList &msg, unsigned int tag) // ExamineObjects
{
	OpProtobufInstanceProxy proxy(ObjectChainList::GetMessageDescriptor(GetDescriptors()), const_cast<ObjectChainList *>(&msg));
	if (proxy.GetProtoMessage() == NULL)
		return OpStatus::ERR_NO_MEMORY;
	return SendAsyncResponse(tag, proxy, Command_ExamineObjects);
}

// Enum introspection: BEGIN

/*virtual*/
OpScopeService::EnumIDRange
ES_ScopeDebugFrontend_SI::GetEnumIDs() const
{
	Descriptors *descriptors = GetDescriptors();
	return EnumIDRange(descriptors ? descriptors->enum_id_list : NULL, ES_ScopeDebugFrontend_Descriptors::_gen_Enum_Count);
}

/*virtual*/
unsigned
ES_ScopeDebugFrontend_SI::GetEnumCount() const
{
	return ES_ScopeDebugFrontend_Descriptors::_gen_Enum_Count;
}

/*virtual*/
BOOL
ES_ScopeDebugFrontend_SI::HasEnum(unsigned enum_id) const
{
	switch (enum_id)
	{
		case ES_ScopeDebugFrontend_Descriptors::_gen_EnumID_PseudoElement_Type:
		case ES_ScopeDebugFrontend_Descriptors::_gen_EnumID_NodeType:
		case ES_ScopeDebugFrontend_Descriptors::_gen_EnumID_EventListener_Origin:
		case ES_ScopeDebugFrontend_Descriptors::_gen_EnumID_NodeInfo_MatchReason:
		case ES_ScopeDebugFrontend_Descriptors::_gen_EnumID_PseudoSelector:
		case ES_ScopeDebugFrontend_Descriptors::_gen_EnumID_Value_Type:
		case ES_ScopeDebugFrontend_Descriptors::_gen_EnumID_RuleOrigin:
		case ES_ScopeDebugFrontend_Descriptors::_gen_EnumID_DeclarationStatus:
		case ES_ScopeDebugFrontend_Descriptors::_gen_EnumID_SearchDomArg_Type:
		case ES_ScopeDebugFrontend_Descriptors::_gen_EnumID_ConsoleLogType:
		case ES_ScopeDebugFrontend_Descriptors::_gen_EnumID_FunctionCallCompletedInfo_Result:
			return TRUE;
	}
	return FALSE;
}

/*virtual*/
OP_STATUS
ES_ScopeDebugFrontend_SI::GetEnum(unsigned enum_id, const uni_char *&name, unsigned &value_count) const
{
	switch (enum_id)
	{
		// PseudoElement_Type
		case ES_ScopeDebugFrontend_Descriptors::_gen_EnumID_PseudoElement_Type:
			name = UNI_L("Type");
			value_count = ES_ScopeDebugFrontend_Descriptors::_gen_EnumValueCount_PseudoElement_Type;
			return OpStatus::OK;
		// NodeType
		case ES_ScopeDebugFrontend_Descriptors::_gen_EnumID_NodeType:
			name = UNI_L("NodeType");
			value_count = ES_ScopeDebugFrontend_Descriptors::_gen_EnumValueCount_NodeType;
			return OpStatus::OK;
		// EventListener_Origin
		case ES_ScopeDebugFrontend_Descriptors::_gen_EnumID_EventListener_Origin:
			name = UNI_L("Origin");
			value_count = ES_ScopeDebugFrontend_Descriptors::_gen_EnumValueCount_EventListener_Origin;
			return OpStatus::OK;
		// NodeInfo_MatchReason
		case ES_ScopeDebugFrontend_Descriptors::_gen_EnumID_NodeInfo_MatchReason:
			name = UNI_L("MatchReason");
			value_count = ES_ScopeDebugFrontend_Descriptors::_gen_EnumValueCount_NodeInfo_MatchReason;
			return OpStatus::OK;
		// PseudoSelector
		case ES_ScopeDebugFrontend_Descriptors::_gen_EnumID_PseudoSelector:
			name = UNI_L("PseudoSelector");
			value_count = ES_ScopeDebugFrontend_Descriptors::_gen_EnumValueCount_PseudoSelector;
			return OpStatus::OK;
		// Value_Type
		case ES_ScopeDebugFrontend_Descriptors::_gen_EnumID_Value_Type:
			name = UNI_L("Type");
			value_count = ES_ScopeDebugFrontend_Descriptors::_gen_EnumValueCount_Value_Type;
			return OpStatus::OK;
		// RuleOrigin
		case ES_ScopeDebugFrontend_Descriptors::_gen_EnumID_RuleOrigin:
			name = UNI_L("RuleOrigin");
			value_count = ES_ScopeDebugFrontend_Descriptors::_gen_EnumValueCount_RuleOrigin;
			return OpStatus::OK;
		// DeclarationStatus
		case ES_ScopeDebugFrontend_Descriptors::_gen_EnumID_DeclarationStatus:
			name = UNI_L("DeclarationStatus");
			value_count = ES_ScopeDebugFrontend_Descriptors::_gen_EnumValueCount_DeclarationStatus;
			return OpStatus::OK;
		// SearchDomArg_Type
		case ES_ScopeDebugFrontend_Descriptors::_gen_EnumID_SearchDomArg_Type:
			name = UNI_L("Type");
			value_count = ES_ScopeDebugFrontend_Descriptors::_gen_EnumValueCount_SearchDomArg_Type;
			return OpStatus::OK;
		// ConsoleLogType
		case ES_ScopeDebugFrontend_Descriptors::_gen_EnumID_ConsoleLogType:
			name = UNI_L("ConsoleLogType");
			value_count = ES_ScopeDebugFrontend_Descriptors::_gen_EnumValueCount_ConsoleLogType;
			return OpStatus::OK;
		// FunctionCallCompletedInfo_Result
		case ES_ScopeDebugFrontend_Descriptors::_gen_EnumID_FunctionCallCompletedInfo_Result:
			name = UNI_L("Result");
			value_count = ES_ScopeDebugFrontend_Descriptors::_gen_EnumValueCount_FunctionCallCompletedInfo_Result;
			return OpStatus::OK;
	}
	return OpStatus::ERR_NO_SUCH_RESOURCE;
}

/*virtual*/
OP_STATUS
ES_ScopeDebugFrontend_SI::GetEnumValue(unsigned enum_id, unsigned idx, const uni_char *&value_name, unsigned &value_number) const
{
	switch (enum_id)
	{
		// PseudoElement_Type
		case ES_ScopeDebugFrontend_Descriptors::_gen_EnumID_PseudoElement_Type:
		{
			if (idx > ES_ScopeDebugFrontend_Descriptors::_gen_EnumValueCount_PseudoElement_Type)
				return OpStatus::ERR_OUT_OF_RANGE;
			// Values for PseudoElement_Type
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
				, 26
			}; // ARRAY OK 2010-04-14 jborsodi
			const uni_char *names = UNI_L( "BEFORE\0AFTER\0FIRST_LETTER\0FIRST_LINE" );
			OP_ASSERT(idx < sizeof(name_offsets));
			OP_ASSERT(idx < sizeof(enum_numbers));
			value_name = names + name_offsets[idx];
			value_number = enum_numbers[idx];
			return OpStatus::OK;
		}

		// NodeType
		case ES_ScopeDebugFrontend_Descriptors::_gen_EnumID_NodeType:
		{
			if (idx > ES_ScopeDebugFrontend_Descriptors::_gen_EnumValueCount_NodeType)
				return OpStatus::ERR_OUT_OF_RANGE;
			// Values for NodeType
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
			}; // ARRAY OK 2010-04-14 jborsodi
			const unsigned name_offsets[] = {
				  0
				, 8
				, 16
				, 26
				, 31
				, 45
				, 62
				, 69
				, 92
				, 100
				, 109
				, 123
				, 141
				, 150
				, 166
			}; // ARRAY OK 2010-04-14 jborsodi
			const uni_char *names = UNI_L( "UNKNOWN\0ELEMENT\0ATTRIBUTE\0TEXT\0CDATA_SECTION\0ENTITY_REFERENCE\0ENTITY\0PROCESSING_INSTRUCTION\0COMMENT\0DOCUMENT\0DOCUMENT_TYPE\0DOCUMENT_FRAGMENT\0NOTATION\0XPATH_NAMESPACE\0SVG_ELEMENTINSTANCE" );
			OP_ASSERT(idx < sizeof(name_offsets));
			OP_ASSERT(idx < sizeof(enum_numbers));
			value_name = names + name_offsets[idx];
			value_number = enum_numbers[idx];
			return OpStatus::OK;
		}

		// EventListener_Origin
		case ES_ScopeDebugFrontend_Descriptors::_gen_EnumID_EventListener_Origin:
		{
			if (idx > ES_ScopeDebugFrontend_Descriptors::_gen_EnumValueCount_EventListener_Origin)
				return OpStatus::ERR_OUT_OF_RANGE;
			// Values for EventListener_Origin
			const unsigned enum_numbers[] = {
				  1
				, 2
			}; // ARRAY OK 2010-04-14 jborsodi
			const unsigned name_offsets[] = {
				  0
				, 13
			}; // ARRAY OK 2010-04-14 jborsodi
			const uni_char *names = UNI_L( "EVENT_TARGET\0ATTRIBUTE" );
			OP_ASSERT(idx < sizeof(name_offsets));
			OP_ASSERT(idx < sizeof(enum_numbers));
			value_name = names + name_offsets[idx];
			value_number = enum_numbers[idx];
			return OpStatus::OK;
		}

		// NodeInfo_MatchReason
		case ES_ScopeDebugFrontend_Descriptors::_gen_EnumID_NodeInfo_MatchReason:
		{
			if (idx > ES_ScopeDebugFrontend_Descriptors::_gen_EnumValueCount_NodeInfo_MatchReason)
				return OpStatus::ERR_OUT_OF_RANGE;
			// Values for NodeInfo_MatchReason
			const unsigned enum_numbers[] = {
				  1
				, 2
				, 3
			}; // ARRAY OK 2010-04-14 jborsodi
			const unsigned name_offsets[] = {
				  0
				, 10
				, 26
			}; // ARRAY OK 2010-04-14 jborsodi
			const uni_char *names = UNI_L( "TRAVERSAL\0SEARCH_ANCESTOR\0SEARCH_HIT" );
			OP_ASSERT(idx < sizeof(name_offsets));
			OP_ASSERT(idx < sizeof(enum_numbers));
			value_name = names + name_offsets[idx];
			value_number = enum_numbers[idx];
			return OpStatus::OK;
		}

		// PseudoSelector
		case ES_ScopeDebugFrontend_Descriptors::_gen_EnumID_PseudoSelector:
		{
			if (idx > ES_ScopeDebugFrontend_Descriptors::_gen_EnumValueCount_PseudoSelector)
				return OpStatus::ERR_OUT_OF_RANGE;
			// Values for PseudoSelector
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
			}; // ARRAY OK 2010-04-14 jborsodi
			const unsigned name_offsets[] = {
				  0
				, 5
				, 11
				, 18
				, 24
				, 29
				, 37
				, 48
				, 61
				, 68
				, 74
			}; // ARRAY OK 2010-04-14 jborsodi
			const uni_char *names = UNI_L( "NONE\0HOVER\0ACTIVE\0FOCUS\0LINK\0VISITED\0FIRST_LINE\0FIRST_LETTER\0BEFORE\0AFTER\0SELECTION" );
			OP_ASSERT(idx < sizeof(name_offsets));
			OP_ASSERT(idx < sizeof(enum_numbers));
			value_name = names + name_offsets[idx];
			value_number = enum_numbers[idx];
			return OpStatus::OK;
		}

		// Value_Type
		case ES_ScopeDebugFrontend_Descriptors::_gen_EnumID_Value_Type:
		{
			if (idx > ES_ScopeDebugFrontend_Descriptors::_gen_EnumValueCount_Value_Type)
				return OpStatus::ERR_OUT_OF_RANGE;
			// Values for Value_Type
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
			}; // ARRAY OK 2010-04-14 jborsodi
			const unsigned name_offsets[] = {
				  0
				, 10
				, 15
				, 20
				, 26
				, 30
				, 44
				, 59
				, 66
				, 73
			}; // ARRAY OK 2010-04-14 jborsodi
			const uni_char *names = UNI_L( "UNDEFINED\0NULL\0TRUE\0FALSE\0NAN\0PLUS_INFINITY\0MINUS_INFINITY\0NUMBER\0STRING\0OBJECT" );
			OP_ASSERT(idx < sizeof(name_offsets));
			OP_ASSERT(idx < sizeof(enum_numbers));
			value_name = names + name_offsets[idx];
			value_number = enum_numbers[idx];
			return OpStatus::OK;
		}

		// RuleOrigin
		case ES_ScopeDebugFrontend_Descriptors::_gen_EnumID_RuleOrigin:
		{
			if (idx > ES_ScopeDebugFrontend_Descriptors::_gen_EnumValueCount_RuleOrigin)
				return OpStatus::ERR_OUT_OF_RANGE;
			// Values for RuleOrigin
			const unsigned enum_numbers[] = {
				  1
				, 2
				, 3
				, 4
				, 5
			}; // ARRAY OK 2010-04-14 jborsodi
			const unsigned name_offsets[] = {
				  0
				, 11
				, 17
				, 24
				, 32
			}; // ARRAY OK 2010-04-14 jborsodi
			const uni_char *names = UNI_L( "USER_AGENT\0LOCAL\0AUTHOR\0ELEMENT\0SVG" );
			OP_ASSERT(idx < sizeof(name_offsets));
			OP_ASSERT(idx < sizeof(enum_numbers));
			value_name = names + name_offsets[idx];
			value_number = enum_numbers[idx];
			return OpStatus::OK;
		}

		// DeclarationStatus
		case ES_ScopeDebugFrontend_Descriptors::_gen_EnumID_DeclarationStatus:
		{
			if (idx > ES_ScopeDebugFrontend_Descriptors::_gen_EnumValueCount_DeclarationStatus)
				return OpStatus::ERR_OUT_OF_RANGE;
			// Values for DeclarationStatus
			const unsigned enum_numbers[] = {
				  0
				, 1
			}; // ARRAY OK 2010-04-14 jborsodi
			const unsigned name_offsets[] = {
				  0
				, 12
			}; // ARRAY OK 2010-04-14 jborsodi
			const uni_char *names = UNI_L( "OVERWRITTEN\0USED" );
			OP_ASSERT(idx < sizeof(name_offsets));
			OP_ASSERT(idx < sizeof(enum_numbers));
			value_name = names + name_offsets[idx];
			value_number = enum_numbers[idx];
			return OpStatus::OK;
		}

		// SearchDomArg_Type
		case ES_ScopeDebugFrontend_Descriptors::_gen_EnumID_SearchDomArg_Type:
		{
			if (idx > ES_ScopeDebugFrontend_Descriptors::_gen_EnumValueCount_SearchDomArg_Type)
				return OpStatus::ERR_OUT_OF_RANGE;
			// Values for SearchDomArg_Type
			const unsigned enum_numbers[] = {
				  1
				, 2
				, 3
				, 4
				, 5
			}; // ARRAY OK 2010-04-14 jborsodi
			const unsigned name_offsets[] = {
				  0
				, 11
				, 18
				, 24
				, 33
			}; // ARRAY OK 2010-04-14 jborsodi
			const uni_char *names = UNI_L( "PLAIN_TEXT\0REGEXP\0XPATH\0SELECTOR\0EVENT" );
			OP_ASSERT(idx < sizeof(name_offsets));
			OP_ASSERT(idx < sizeof(enum_numbers));
			value_name = names + name_offsets[idx];
			value_number = enum_numbers[idx];
			return OpStatus::OK;
		}

		// ConsoleLogType
		case ES_ScopeDebugFrontend_Descriptors::_gen_EnumID_ConsoleLogType:
		{
			if (idx > ES_ScopeDebugFrontend_Descriptors::_gen_EnumValueCount_ConsoleLogType)
				return OpStatus::ERR_OUT_OF_RANGE;
			// Values for ConsoleLogType
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
				, 12
				, 13
				, 14
			}; // ARRAY OK 2010-04-14 jborsodi
			const unsigned name_offsets[] = {
				  0
				, 4
				, 10
				, 15
				, 20
				, 26
				, 33
				, 37
				, 44
				, 50
				, 66
				, 76
				, 82
				, 88
			}; // ARRAY OK 2010-04-14 jborsodi
			const uni_char *names = UNI_L( "LOG\0DEBUG\0INFO\0WARN\0ERROR\0ASSERT\0DIR\0DIRXML\0GROUP\0GROUP_COLLAPSED\0GROUP_END\0COUNT\0TABLE\0CLEAR" );
			OP_ASSERT(idx < sizeof(name_offsets));
			OP_ASSERT(idx < sizeof(enum_numbers));
			value_name = names + name_offsets[idx];
			value_number = enum_numbers[idx];
			return OpStatus::OK;
		}

		// FunctionCallCompletedInfo_Result
		case ES_ScopeDebugFrontend_Descriptors::_gen_EnumID_FunctionCallCompletedInfo_Result:
		{
			if (idx > ES_ScopeDebugFrontend_Descriptors::_gen_EnumValueCount_FunctionCallCompletedInfo_Result)
				return OpStatus::ERR_OUT_OF_RANGE;
			// Values for FunctionCallCompletedInfo_Result
			const unsigned enum_numbers[] = {
				  1
				, 2
			}; // ARRAY OK 2010-04-14 jborsodi
			const unsigned name_offsets[] = {
				  0
				, 8
			}; // ARRAY OK 2010-04-14 jborsodi
			const uni_char *names = UNI_L( "SUCCESS\0EXCEPTION" );
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

#endif // SCOPE_ECMASCRIPT_DEBUGGER
