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

#ifdef SCOPE_ECMASCRIPT

#include "modules/scope/src/generated/g_scope_ecmascript_interface.h"

// BEGIN: OpScopeEcmascript_Descriptors

OpScopeEcmascript_Descriptors::OpScopeEcmascript_Descriptors()
{
	for (unsigned i = 0; i < _gen_Message_Count; ++i)
	{
		message_list[i] = NULL;
	}
}

OpScopeEcmascript_Descriptors::~OpScopeEcmascript_Descriptors()
{
	for (unsigned i = 0; i < _gen_Message_Count; ++i)
	{
		OP_DELETE(message_list[i]);
	}
}

OP_STATUS
OpScopeEcmascript_Descriptors::Construct()
{
	enum_id_list[0] = _gen_EnumID_EvalResult_Status;
	enum_id_list[1] = _gen_EnumID_Value_Type;
	enum_id_list[2] = _gen_EnumID_Object_ObjectType;
	enum_id_list[3] = _gen_EnumID_ReadyStateChange_State;
	return OpStatus::OK;
}

const OpProtobufMessage *
OpScopeEcmascript_Descriptors::Get(unsigned id) const
{
	OpScopeEcmascript_Descriptors *descriptors = const_cast<OpScopeEcmascript_Descriptors *>(this);
	switch (id)
	{
	case _gen_MsgID_eval_arg_:
		return OpScopeEcmascript_MessageSet::EvalArg::GetMessageDescriptor(descriptors);

	case _gen_MsgID_eval_result_:
		return OpScopeEcmascript_MessageSet::EvalResult::GetMessageDescriptor(descriptors);

	case _gen_MsgID_examine_objects_arg_:
		return OpScopeEcmascript_MessageSet::ExamineObjectsArg::GetMessageDescriptor(descriptors);

	case _gen_MsgID_list_runtimes_arg_:
		return OpScopeEcmascript_MessageSet::ListRuntimesArg::GetMessageDescriptor(descriptors);

	case _gen_MsgID_object_:
		return OpScopeEcmascript_MessageSet::Object::GetMessageDescriptor(descriptors);

	case _gen_MsgID_object_list_:
		return OpScopeEcmascript_MessageSet::ObjectList::GetMessageDescriptor(descriptors);

	case _gen_MsgID_object_property_:
		return OpScopeEcmascript_MessageSet::Object_Property::GetMessageDescriptor(descriptors);

	case _gen_MsgID_prototype_chain_:
		return OpScopeEcmascript_MessageSet::PrototypeChain::GetMessageDescriptor(descriptors);

	case _gen_MsgID_ready_state_change_:
		return OpScopeEcmascript_MessageSet::ReadyStateChange::GetMessageDescriptor(descriptors);

	case _gen_MsgID_release_objects_arg_:
		return OpScopeEcmascript_MessageSet::ReleaseObjectsArg::GetMessageDescriptor(descriptors);

	case _gen_MsgID_runtime_:
		return OpScopeEcmascript_MessageSet::Runtime::GetMessageDescriptor(descriptors);

	case _gen_MsgID_runtime_list_:
		return OpScopeEcmascript_MessageSet::RuntimeList::GetMessageDescriptor(descriptors);

	case _gen_MsgID_set_form_element_value_arg_:
		return OpScopeEcmascript_MessageSet::SetFormElementValueArg::GetMessageDescriptor(descriptors);

	case _gen_MsgID_value_:
		return OpScopeEcmascript_MessageSet::Value::GetMessageDescriptor(descriptors);

	case _gen_MsgID_eval_arg_variable_:
		return OpScopeEcmascript_MessageSet::EvalArg_Variable::GetMessageDescriptor(descriptors);

	default:
		return NULL;
	}
}


// END: OpScopeEcmascript_Descriptors


// BEGIN: OpScopeEcmascript_MessageSet

OpScopeEcmascript_MessageSet::OpScopeEcmascript_MessageSet()
{
}

/*virtual*/
OpScopeEcmascript_MessageSet::~OpScopeEcmascript_MessageSet()
{
}

// END: OpScopeEcmascript_MessageSet

// BEGIN: Messages

//   BEGIN: Message: EvalArg
/*static*/
const OpProtobufMessage *
OpScopeEcmascript_MessageSet::EvalArg::GetMessageDescriptor(OpScopeEcmascript_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeEcmascript_Descriptors::_gen_MessageOffs_eval_arg_];
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
						UNI_L("scriptData"),
						OpProtobufField::Required
						);
	fields[2] = OpProtobufField(
						OpProtobufFormat::Message,
						3,
						UNI_L("variableList"),
						OpProtobufField::Repeated
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpScopeEcmascript_MessageSet::EvalArg,
						_runtimeID
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpScopeEcmascript_MessageSet::EvalArg,
						_scriptData
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						OpScopeEcmascript_MessageSet::EvalArg,
						_variableList
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeEcmascript_Descriptors::_gen_MsgID_eval_arg_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeEcmascript_MessageSet::EvalArg, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeEcmascript_MessageSet::EvalArg, encoded_size_),
					"EvalArg",
					OpProtobufMessageVector<OpScopeEcmascript_MessageSet::EvalArg>::Make,
					OpProtobufMessageVector<OpScopeEcmascript_MessageSet::EvalArg>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	fields[2].SetMessage(EvalArg_Variable::GetMessageDescriptor(descriptors));

	return message;
}

// BEGIN: EvalArg: Implementation


// Setters

OP_STATUS
OpScopeEcmascript_MessageSet::EvalArg::SetScriptData(const uni_char * v, int l) 
{
	return _scriptData.Set(v, l);
}


OpProtobufMessageVector<OpScopeEcmascript_MessageSet::EvalArg_Variable> &
OpScopeEcmascript_MessageSet::EvalArg::GetVariableListRef() 
{
	has_bits_.Reference().SetBit(2);
	return _variableList;
}

// END: EvalArg: Implementation

//   END: Message: EvalArg

//   BEGIN: Message: EvalResult
/*static*/
const OpProtobufMessage *
OpScopeEcmascript_MessageSet::EvalResult::GetMessageDescriptor(OpScopeEcmascript_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeEcmascript_Descriptors::_gen_MessageOffs_eval_result_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Int32,
						1,
						UNI_L("status"),
						OpProtobufField::Required
						, NULL // const OpProtobufMessage *message
						, 0 // int message_id
						, OpScopeEcmascript_Descriptors::_gen_EnumID_EvalResult_Status // unsigned enum_id
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Message,
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
						OpScopeEcmascript_MessageSet::EvalResult,
						_status
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpScopeEcmascript_MessageSet::EvalResult,
						_value
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeEcmascript_Descriptors::_gen_MsgID_eval_result_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeEcmascript_MessageSet::EvalResult, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeEcmascript_MessageSet::EvalResult, encoded_size_),
					"EvalResult",
					OpProtobufMessageVector<OpScopeEcmascript_MessageSet::EvalResult>::Make,
					OpProtobufMessageVector<OpScopeEcmascript_MessageSet::EvalResult>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	fields[1].SetMessage(Value::GetMessageDescriptor(descriptors));

	return message;
}

// BEGIN: EvalResult: Implementation

// Enum value EvalResult.Status.SUCCESS
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const OpScopeEcmascript_MessageSet::EvalResult_Status OpScopeEcmascript_MessageSet::EvalResult::STATUS_SUCCESS;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)


// Enum value EvalResult.Status.FAILURE
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const OpScopeEcmascript_MessageSet::EvalResult_Status OpScopeEcmascript_MessageSet::EvalResult::STATUS_FAILURE;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)


// Enum value EvalResult.Status.EXCEPTION
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const OpScopeEcmascript_MessageSet::EvalResult_Status OpScopeEcmascript_MessageSet::EvalResult::STATUS_EXCEPTION;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)


// Enum value EvalResult.Status.NO_MEMORY
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const OpScopeEcmascript_MessageSet::EvalResult_Status OpScopeEcmascript_MessageSet::EvalResult::STATUS_OOM;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)


// Enum value EvalResult.Status.CANCELLED
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const OpScopeEcmascript_MessageSet::EvalResult_Status OpScopeEcmascript_MessageSet::EvalResult::STATUS_CANCELLED;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)



// Setters

void
OpScopeEcmascript_MessageSet::EvalResult::SetStatus(OpScopeEcmascript_MessageSet::EvalResult_Status v) 
{
	_status = static_cast<OpScopeEcmascript_MessageSet::EvalResult_Status>(v);
}


OpScopeEcmascript_MessageSet::Value &
OpScopeEcmascript_MessageSet::EvalResult::GetValueRef() 
{
	return _value;
}

// END: EvalResult: Implementation

//   END: Message: EvalResult

//   BEGIN: Message: ExamineObjectsArg
/*static*/
const OpProtobufMessage *
OpScopeEcmascript_MessageSet::ExamineObjectsArg::GetMessageDescriptor(OpScopeEcmascript_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeEcmascript_Descriptors::_gen_MessageOffs_examine_objects_arg_];
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
						UNI_L("objectIDList"),
						OpProtobufField::Repeated
						);
	fields[2] = OpProtobufField(
						OpProtobufFormat::Bool,
						3,
						UNI_L("examinePrototypes"),
						OpProtobufField::Optional
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpScopeEcmascript_MessageSet::ExamineObjectsArg,
						_runtimeID
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpScopeEcmascript_MessageSet::ExamineObjectsArg,
						_objectIDList
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						OpScopeEcmascript_MessageSet::ExamineObjectsArg,
						_examinePrototypes
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeEcmascript_Descriptors::_gen_MsgID_examine_objects_arg_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeEcmascript_MessageSet::ExamineObjectsArg, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeEcmascript_MessageSet::ExamineObjectsArg, encoded_size_),
					"ExamineObjectsArg",
					OpProtobufMessageVector<OpScopeEcmascript_MessageSet::ExamineObjectsArg>::Make,
					OpProtobufMessageVector<OpScopeEcmascript_MessageSet::ExamineObjectsArg>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: ExamineObjectsArg: Implementation

// Setters

OpValueVector<UINT32> &
OpScopeEcmascript_MessageSet::ExamineObjectsArg::GetObjectIDListRef() 
{
	has_bits_.Reference().SetBit(1);
	return _objectIDList;
}


OP_STATUS
OpScopeEcmascript_MessageSet::ExamineObjectsArg::AppendToObjectIDList(UINT32 v) 
{
	has_bits_.Reference().SetBit(1);
	return _objectIDList.Add(v);
}

// END: ExamineObjectsArg: Implementation

//   END: Message: ExamineObjectsArg

//   BEGIN: Message: ListRuntimesArg
/*static*/
const OpProtobufMessage *
OpScopeEcmascript_MessageSet::ListRuntimesArg::GetMessageDescriptor(OpScopeEcmascript_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeEcmascript_Descriptors::_gen_MessageOffs_list_runtimes_arg_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Uint32,
						1,
						UNI_L("runtimeIDList"),
						OpProtobufField::Repeated
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Bool,
						2,
						UNI_L("create"),
						OpProtobufField::Optional
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpScopeEcmascript_MessageSet::ListRuntimesArg,
						_runtimeIDList
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpScopeEcmascript_MessageSet::ListRuntimesArg,
						_create
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeEcmascript_Descriptors::_gen_MsgID_list_runtimes_arg_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeEcmascript_MessageSet::ListRuntimesArg, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeEcmascript_MessageSet::ListRuntimesArg, encoded_size_),
					"ListRuntimesArg",
					OpProtobufMessageVector<OpScopeEcmascript_MessageSet::ListRuntimesArg>::Make,
					OpProtobufMessageVector<OpScopeEcmascript_MessageSet::ListRuntimesArg>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: ListRuntimesArg: Implementation

// Setters

OpValueVector<UINT32> &
OpScopeEcmascript_MessageSet::ListRuntimesArg::GetRuntimeIDListRef() 
{
	has_bits_.Reference().SetBit(0);
	return _runtimeIDList;
}


OP_STATUS
OpScopeEcmascript_MessageSet::ListRuntimesArg::AppendToRuntimeIDList(UINT32 v) 
{
	has_bits_.Reference().SetBit(0);
	return _runtimeIDList.Add(v);
}

// END: ListRuntimesArg: Implementation

//   END: Message: ListRuntimesArg

//   BEGIN: Message: Object
/*static*/
const OpProtobufMessage *
OpScopeEcmascript_MessageSet::Object::GetMessageDescriptor(OpScopeEcmascript_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeEcmascript_Descriptors::_gen_MessageOffs_object_];
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
						OpProtobufFormat::Int32,
						3,
						UNI_L("type"),
						OpProtobufField::Required
						, NULL // const OpProtobufMessage *message
						, 0 // int message_id
						, OpScopeEcmascript_Descriptors::_gen_EnumID_Object_ObjectType // unsigned enum_id
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
	fields[6] = OpProtobufField(
						OpProtobufFormat::Message,
						7,
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
						OpScopeEcmascript_MessageSet::Object,
						_objectID
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpScopeEcmascript_MessageSet::Object,
						_isCallable
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						OpScopeEcmascript_MessageSet::Object,
						_type
						);
	offsets[3] = OP_PROTO_OFFSETOF(
						OpScopeEcmascript_MessageSet::Object,
						_prototypeID
						);
	offsets[4] = OP_PROTO_OFFSETOF(
						OpScopeEcmascript_MessageSet::Object,
						_className
						);
	offsets[5] = OP_PROTO_OFFSETOF(
						OpScopeEcmascript_MessageSet::Object,
						_functionName
						);
	offsets[6] = OP_PROTO_OFFSETOF(
						OpScopeEcmascript_MessageSet::Object,
						_propertyList
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeEcmascript_Descriptors::_gen_MsgID_object_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeEcmascript_MessageSet::Object, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeEcmascript_MessageSet::Object, encoded_size_),
					"Object",
					OpProtobufMessageVector<OpScopeEcmascript_MessageSet::Object>::Make,
					OpProtobufMessageVector<OpScopeEcmascript_MessageSet::Object>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	fields[6].SetMessage(Object_Property::GetMessageDescriptor(descriptors));

	return message;
}

// BEGIN: Object: Implementation

// Enum value Object.ObjectType.OBJECT
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const OpScopeEcmascript_MessageSet::Object_ObjectType OpScopeEcmascript_MessageSet::Object::OBJECTTYPE_OBJECT;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)


// Enum value Object.ObjectType.FUNCTION
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const OpScopeEcmascript_MessageSet::Object_ObjectType OpScopeEcmascript_MessageSet::Object::OBJECTTYPE_FUNCTION;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)





// Setters

void
OpScopeEcmascript_MessageSet::Object::SetType(OpScopeEcmascript_MessageSet::Object_ObjectType v) 
{
	_type = static_cast<OpScopeEcmascript_MessageSet::Object_ObjectType>(v);
}


OP_STATUS
OpScopeEcmascript_MessageSet::Object::SetClassName(const uni_char * v, int l) 
{
	has_bits_.Reference().SetBit(4);
	return _className.Set(v, l);
}


OP_STATUS
OpScopeEcmascript_MessageSet::Object::SetClassName(const char * v, int l) 
{
	has_bits_.Reference().SetBit(4);
	return _className.Set(v, l);
}


OP_STATUS
OpScopeEcmascript_MessageSet::Object::SetFunctionName(const uni_char * v, int l) 
{
	has_bits_.Reference().SetBit(5);
	return _functionName.Set(v, l);
}


OpScopeEcmascript_MessageSet::Object_Property *
OpScopeEcmascript_MessageSet::Object::AppendNewPropertyList() 
{
	has_bits_.Reference().SetBit(6);
	OpAutoPtr<OpScopeEcmascript_MessageSet::Object_Property> tmp(OP_NEW(OpScopeEcmascript_MessageSet::Object_Property, ()));
	if (!tmp.get())
	    return NULL;
	RETURN_VALUE_IF_ERROR(_propertyList.Add(tmp.get()), NULL);
	return tmp.release();
}

// END: Object: Implementation

//   END: Message: Object

//   BEGIN: Message: ObjectList
/*static*/
const OpProtobufMessage *
OpScopeEcmascript_MessageSet::ObjectList::GetMessageDescriptor(OpScopeEcmascript_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeEcmascript_Descriptors::_gen_MessageOffs_object_list_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Message,
						1,
						UNI_L("prototypeList"),
						OpProtobufField::Repeated
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpScopeEcmascript_MessageSet::ObjectList,
						_prototypeList
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeEcmascript_Descriptors::_gen_MsgID_object_list_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeEcmascript_MessageSet::ObjectList, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeEcmascript_MessageSet::ObjectList, encoded_size_),
					"ObjectList",
					OpProtobufMessageVector<OpScopeEcmascript_MessageSet::ObjectList>::Make,
					OpProtobufMessageVector<OpScopeEcmascript_MessageSet::ObjectList>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	fields[0].SetMessage(PrototypeChain::GetMessageDescriptor(descriptors));

	return message;
}

// BEGIN: ObjectList: Implementation

// Setters

OpScopeEcmascript_MessageSet::PrototypeChain *
OpScopeEcmascript_MessageSet::ObjectList::AppendNewPrototypeList() 
{
	has_bits_.Reference().SetBit(0);
	OpAutoPtr<OpScopeEcmascript_MessageSet::PrototypeChain> tmp(OP_NEW(OpScopeEcmascript_MessageSet::PrototypeChain, ()));
	if (!tmp.get())
	    return NULL;
	RETURN_VALUE_IF_ERROR(_prototypeList.Add(tmp.get()), NULL);
	return tmp.release();
}

// END: ObjectList: Implementation

//   END: Message: ObjectList

//   BEGIN: Message: Property
/*static*/
const OpProtobufMessage *
OpScopeEcmascript_MessageSet::Object_Property::GetMessageDescriptor(OpScopeEcmascript_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeEcmascript_Descriptors::_gen_MessageOffs_object_property_];
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
						OpProtobufFormat::Message,
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
						OpScopeEcmascript_MessageSet::Object_Property,
						_name
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpScopeEcmascript_MessageSet::Object_Property,
						_value
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeEcmascript_Descriptors::_gen_MsgID_object_property_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeEcmascript_MessageSet::Object_Property, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeEcmascript_MessageSet::Object_Property, encoded_size_),
					"Property",
					OpProtobufMessageVector<OpScopeEcmascript_MessageSet::Object_Property>::Make,
					OpProtobufMessageVector<OpScopeEcmascript_MessageSet::Object_Property>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	fields[1].SetMessage(Value::GetMessageDescriptor(descriptors));
	const OpProtobufMessage *parent = OpScopeEcmascript_MessageSet::Object::GetMessageDescriptor(descriptors);
	if (!parent)
		return NULL;
	message->SetParentId(parent->GetInternalId());

	return message;
}

// BEGIN: Object.Property: Implementation

// Setters

OP_STATUS
OpScopeEcmascript_MessageSet::Object_Property::SetName(const uni_char * v, int l) 
{
	return _name.Set(v, l);
}


OpScopeEcmascript_MessageSet::Value &
OpScopeEcmascript_MessageSet::Object_Property::GetValueRef() 
{
	return _value;
}

// END: Object.Property: Implementation

//   END: Message: Property

//   BEGIN: Message: PrototypeChain
/*static*/
const OpProtobufMessage *
OpScopeEcmascript_MessageSet::PrototypeChain::GetMessageDescriptor(OpScopeEcmascript_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeEcmascript_Descriptors::_gen_MessageOffs_prototype_chain_];
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
						OpScopeEcmascript_MessageSet::PrototypeChain,
						_objectList
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeEcmascript_Descriptors::_gen_MsgID_prototype_chain_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeEcmascript_MessageSet::PrototypeChain, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeEcmascript_MessageSet::PrototypeChain, encoded_size_),
					"PrototypeChain",
					OpProtobufMessageVector<OpScopeEcmascript_MessageSet::PrototypeChain>::Make,
					OpProtobufMessageVector<OpScopeEcmascript_MessageSet::PrototypeChain>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	fields[0].SetMessage(Object::GetMessageDescriptor(descriptors));

	return message;
}

// BEGIN: PrototypeChain: Implementation

// Setters

OpScopeEcmascript_MessageSet::Object *
OpScopeEcmascript_MessageSet::PrototypeChain::AppendNewObjectList() 
{
	has_bits_.Reference().SetBit(0);
	OpAutoPtr<OpScopeEcmascript_MessageSet::Object> tmp(OP_NEW(OpScopeEcmascript_MessageSet::Object, ()));
	if (!tmp.get())
	    return NULL;
	RETURN_VALUE_IF_ERROR(_objectList.Add(tmp.get()), NULL);
	return tmp.release();
}

// END: PrototypeChain: Implementation

//   END: Message: PrototypeChain

//   BEGIN: Message: ReadyStateChange
/*static*/
const OpProtobufMessage *
OpScopeEcmascript_MessageSet::ReadyStateChange::GetMessageDescriptor(OpScopeEcmascript_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeEcmascript_Descriptors::_gen_MessageOffs_ready_state_change_];
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
						UNI_L("state"),
						OpProtobufField::Required
						, NULL // const OpProtobufMessage *message
						, 0 // int message_id
						, OpScopeEcmascript_Descriptors::_gen_EnumID_ReadyStateChange_State // unsigned enum_id
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpScopeEcmascript_MessageSet::ReadyStateChange,
						_runtimeID
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpScopeEcmascript_MessageSet::ReadyStateChange,
						_state
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeEcmascript_Descriptors::_gen_MsgID_ready_state_change_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeEcmascript_MessageSet::ReadyStateChange, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeEcmascript_MessageSet::ReadyStateChange, encoded_size_),
					"ReadyStateChange",
					OpProtobufMessageVector<OpScopeEcmascript_MessageSet::ReadyStateChange>::Make,
					OpProtobufMessageVector<OpScopeEcmascript_MessageSet::ReadyStateChange>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: ReadyStateChange: Implementation

// Enum value ReadyStateChange.State.DOM_ENVIRONMENT_CREATED
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const OpScopeEcmascript_MessageSet::ReadyStateChange_State OpScopeEcmascript_MessageSet::ReadyStateChange::STATE_DOM_ENVIRONMENT_CREATED;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)


// Enum value ReadyStateChange.State.DOM_CONTENT_LOADED
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const OpScopeEcmascript_MessageSet::ReadyStateChange_State OpScopeEcmascript_MessageSet::ReadyStateChange::STATE_DOM_CONTENT_LOADED;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)


// Enum value ReadyStateChange.State.AFTER_ONLOAD
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const OpScopeEcmascript_MessageSet::ReadyStateChange_State OpScopeEcmascript_MessageSet::ReadyStateChange::STATE_AFTER_ONLOAD;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)



// Setters

void
OpScopeEcmascript_MessageSet::ReadyStateChange::SetState(OpScopeEcmascript_MessageSet::ReadyStateChange_State v) 
{
	_state = static_cast<OpScopeEcmascript_MessageSet::ReadyStateChange_State>(v);
}

// END: ReadyStateChange: Implementation

//   END: Message: ReadyStateChange

//   BEGIN: Message: ReleaseObjectsArg
/*static*/
const OpProtobufMessage *
OpScopeEcmascript_MessageSet::ReleaseObjectsArg::GetMessageDescriptor(OpScopeEcmascript_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeEcmascript_Descriptors::_gen_MessageOffs_release_objects_arg_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Uint32,
						1,
						UNI_L("objectIDList"),
						OpProtobufField::Repeated
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpScopeEcmascript_MessageSet::ReleaseObjectsArg,
						_objectIDList
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeEcmascript_Descriptors::_gen_MsgID_release_objects_arg_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeEcmascript_MessageSet::ReleaseObjectsArg, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeEcmascript_MessageSet::ReleaseObjectsArg, encoded_size_),
					"ReleaseObjectsArg",
					OpProtobufMessageVector<OpScopeEcmascript_MessageSet::ReleaseObjectsArg>::Make,
					OpProtobufMessageVector<OpScopeEcmascript_MessageSet::ReleaseObjectsArg>::Destroy));
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
OpScopeEcmascript_MessageSet::ReleaseObjectsArg::GetObjectIDListRef() 
{
	has_bits_.Reference().SetBit(0);
	return _objectIDList;
}


OP_STATUS
OpScopeEcmascript_MessageSet::ReleaseObjectsArg::AppendToObjectIDList(UINT32 v) 
{
	has_bits_.Reference().SetBit(0);
	return _objectIDList.Add(v);
}

// END: ReleaseObjectsArg: Implementation

//   END: Message: ReleaseObjectsArg

//   BEGIN: Message: Runtime
/*static*/
const OpProtobufMessage *
OpScopeEcmascript_MessageSet::Runtime::GetMessageDescriptor(OpScopeEcmascript_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeEcmascript_Descriptors::_gen_MessageOffs_runtime_];
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

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpScopeEcmascript_MessageSet::Runtime,
						_runtimeID
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpScopeEcmascript_MessageSet::Runtime,
						_htmlFramePath
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						OpScopeEcmascript_MessageSet::Runtime,
						_windowID
						);
	offsets[3] = OP_PROTO_OFFSETOF(
						OpScopeEcmascript_MessageSet::Runtime,
						_objectID
						);
	offsets[4] = OP_PROTO_OFFSETOF(
						OpScopeEcmascript_MessageSet::Runtime,
						_uri
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeEcmascript_Descriptors::_gen_MsgID_runtime_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeEcmascript_MessageSet::Runtime, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeEcmascript_MessageSet::Runtime, encoded_size_),
					"Runtime",
					OpProtobufMessageVector<OpScopeEcmascript_MessageSet::Runtime>::Make,
					OpProtobufMessageVector<OpScopeEcmascript_MessageSet::Runtime>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: Runtime: Implementation

// Setters

OP_STATUS
OpScopeEcmascript_MessageSet::Runtime::SetHtmlFramePath(const uni_char * v, int l) 
{
	return _htmlFramePath.Set(v, l);
}


OP_STATUS
OpScopeEcmascript_MessageSet::Runtime::SetUri(const uni_char * v, int l) 
{
	return _uri.Set(v, l);
}

// END: Runtime: Implementation

//   END: Message: Runtime

//   BEGIN: Message: RuntimeList
/*static*/
const OpProtobufMessage *
OpScopeEcmascript_MessageSet::RuntimeList::GetMessageDescriptor(OpScopeEcmascript_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeEcmascript_Descriptors::_gen_MessageOffs_runtime_list_];
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
						OpScopeEcmascript_MessageSet::RuntimeList,
						_runtimeList
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeEcmascript_Descriptors::_gen_MsgID_runtime_list_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeEcmascript_MessageSet::RuntimeList, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeEcmascript_MessageSet::RuntimeList, encoded_size_),
					"RuntimeList",
					OpProtobufMessageVector<OpScopeEcmascript_MessageSet::RuntimeList>::Make,
					OpProtobufMessageVector<OpScopeEcmascript_MessageSet::RuntimeList>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	fields[0].SetMessage(Runtime::GetMessageDescriptor(descriptors));

	return message;
}

// BEGIN: RuntimeList: Implementation

// Setters

OpProtobufMessageVector<OpScopeEcmascript_MessageSet::Runtime> &
OpScopeEcmascript_MessageSet::RuntimeList::GetRuntimeListRef() 
{
	has_bits_.Reference().SetBit(0);
	return _runtimeList;
}

// END: RuntimeList: Implementation

//   END: Message: RuntimeList

//   BEGIN: Message: SetFormElementValueArg
/*static*/
const OpProtobufMessage *
OpScopeEcmascript_MessageSet::SetFormElementValueArg::GetMessageDescriptor(OpScopeEcmascript_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeEcmascript_Descriptors::_gen_MessageOffs_set_form_element_value_arg_];
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
						OpScopeEcmascript_MessageSet::SetFormElementValueArg,
						_objectID
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpScopeEcmascript_MessageSet::SetFormElementValueArg,
						_value
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeEcmascript_Descriptors::_gen_MsgID_set_form_element_value_arg_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeEcmascript_MessageSet::SetFormElementValueArg, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeEcmascript_MessageSet::SetFormElementValueArg, encoded_size_),
					"SetFormElementValueArg",
					OpProtobufMessageVector<OpScopeEcmascript_MessageSet::SetFormElementValueArg>::Make,
					OpProtobufMessageVector<OpScopeEcmascript_MessageSet::SetFormElementValueArg>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: SetFormElementValueArg: Implementation

// Setters

OP_STATUS
OpScopeEcmascript_MessageSet::SetFormElementValueArg::SetValue(const uni_char * v, int l) 
{
	return _value.Set(v, l);
}

// END: SetFormElementValueArg: Implementation

//   END: Message: SetFormElementValueArg

//   BEGIN: Message: Value
/*static*/
const OpProtobufMessage *
OpScopeEcmascript_MessageSet::Value::GetMessageDescriptor(OpScopeEcmascript_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeEcmascript_Descriptors::_gen_MessageOffs_value_];
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
						, OpScopeEcmascript_Descriptors::_gen_EnumID_Value_Type // unsigned enum_id
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
						OpScopeEcmascript_MessageSet::Value,
						_type
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpScopeEcmascript_MessageSet::Value,
						_number
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						OpScopeEcmascript_MessageSet::Value,
						_str
						);
	offsets[3] = OP_PROTO_OFFSETOF(
						OpScopeEcmascript_MessageSet::Value,
						_object
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeEcmascript_Descriptors::_gen_MsgID_value_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeEcmascript_MessageSet::Value, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeEcmascript_MessageSet::Value, encoded_size_),
					"Value",
					OpProtobufMessageVector<OpScopeEcmascript_MessageSet::Value>::Make,
					OpProtobufMessageVector<OpScopeEcmascript_MessageSet::Value>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	fields[3].SetMessage(Object::GetMessageDescriptor(descriptors));

	return message;
}

// BEGIN: Value: Implementation

// Enum value Value.Type.UNDEFINED
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const OpScopeEcmascript_MessageSet::Value_Type OpScopeEcmascript_MessageSet::Value::TYPE_UNDEFINED;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)


// Enum value Value.Type.NULL
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const OpScopeEcmascript_MessageSet::Value_Type OpScopeEcmascript_MessageSet::Value::TYPE_NULL;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)


// Enum value Value.Type.TRUE
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const OpScopeEcmascript_MessageSet::Value_Type OpScopeEcmascript_MessageSet::Value::TYPE_TRUE;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)


// Enum value Value.Type.FALSE
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const OpScopeEcmascript_MessageSet::Value_Type OpScopeEcmascript_MessageSet::Value::TYPE_FALSE;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)


// Enum value Value.Type.NAN
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const OpScopeEcmascript_MessageSet::Value_Type OpScopeEcmascript_MessageSet::Value::TYPE_NAN;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)


// Enum value Value.Type.PLUS_INFINITY
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const OpScopeEcmascript_MessageSet::Value_Type OpScopeEcmascript_MessageSet::Value::TYPE_PLUS_INFINITY;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)


// Enum value Value.Type.MINUS_INFINITY
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const OpScopeEcmascript_MessageSet::Value_Type OpScopeEcmascript_MessageSet::Value::TYPE_MINUS_INFINITY;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)


// Enum value Value.Type.NUMBER
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const OpScopeEcmascript_MessageSet::Value_Type OpScopeEcmascript_MessageSet::Value::TYPE_NUMBER;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)


// Enum value Value.Type.STRING
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const OpScopeEcmascript_MessageSet::Value_Type OpScopeEcmascript_MessageSet::Value::TYPE_STRING;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)


// Enum value Value.Type.OBJECT
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const OpScopeEcmascript_MessageSet::Value_Type OpScopeEcmascript_MessageSet::Value::TYPE_OBJECT;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)



// Setters

void
OpScopeEcmascript_MessageSet::Value::SetType(OpScopeEcmascript_MessageSet::Value_Type v) 
{
	has_bits_.Reference().SetBit(0);
	_type = static_cast<OpScopeEcmascript_MessageSet::Value_Type>(v);
}


OP_STATUS
OpScopeEcmascript_MessageSet::Value::SetStr(const uni_char * v, int l) 
{
	has_bits_.Reference().SetBit(2);
	return _str.Set(v, l);
}


void
OpScopeEcmascript_MessageSet::Value::SetObject(OpScopeEcmascript_MessageSet::Object * v) 
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
OpScopeEcmascript_MessageSet::EvalArg_Variable::GetMessageDescriptor(OpScopeEcmascript_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeEcmascript_Descriptors::_gen_MessageOffs_eval_arg_variable_];
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
						OpScopeEcmascript_MessageSet::EvalArg_Variable,
						_name
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpScopeEcmascript_MessageSet::EvalArg_Variable,
						_objectID
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeEcmascript_Descriptors::_gen_MsgID_eval_arg_variable_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeEcmascript_MessageSet::EvalArg_Variable, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeEcmascript_MessageSet::EvalArg_Variable, encoded_size_),
					"Variable",
					OpProtobufMessageVector<OpScopeEcmascript_MessageSet::EvalArg_Variable>::Make,
					OpProtobufMessageVector<OpScopeEcmascript_MessageSet::EvalArg_Variable>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	const OpProtobufMessage *parent = OpScopeEcmascript_MessageSet::EvalArg::GetMessageDescriptor(descriptors);
	if (!parent)
		return NULL;
	message->SetParentId(parent->GetInternalId());

	return message;
}

// BEGIN: EvalArg.Variable: Implementation

// Setters

OP_STATUS
OpScopeEcmascript_MessageSet::EvalArg_Variable::SetName(const uni_char * v, int l) 
{
	return _name.Set(v, l);
}

// END: EvalArg.Variable: Implementation

//   END: Message: Variable


// END: Messages


#include "modules/protobuf/src/protobuf_utils.h"
#include "modules/scope/src/scope_tp_message.h"
#include "modules/scope/src/scope_default_message.h"
#include "modules/scope/src/scope_manager.h"
#include "modules/scope/src/generated/g_scope_manager.h"
#include "modules/scope/src/generated/g_scope_ecmascript_interface.h"
#include "modules/scope/src/scope_ecmascript.h"

// BEGIN: OpScopeEcmascript_SI::Descriptors

OpScopeEcmascript_SI::Descriptors::Descriptors()
{
}

OpScopeEcmascript_SI::Descriptors::~Descriptors()
{
}

OP_STATUS
OpScopeEcmascript_SI::Descriptors::Construct()
{
    RETURN_IF_ERROR(OpScopeEcmascript_Descriptors::Construct());
	// Initialize commands
	command_list[0] = OpScopeCommand("ListRuntimes",
						Command_ListRuntimes,
						OpScopeCommand::Type_Call,
						_gen_MsgID_list_runtimes_arg_,
						_gen_MsgID_runtime_list_
						);
	command_list[1] = OpScopeCommand("Eval",
						Command_Eval,
						OpScopeCommand::Type_Call,
						_gen_MsgID_eval_arg_,
						_gen_MsgID_eval_result_
						);
	command_list[2] = OpScopeCommand("ExamineObjects",
						Command_ExamineObjects,
						OpScopeCommand::Type_Call,
						_gen_MsgID_examine_objects_arg_,
						_gen_MsgID_object_list_
						);
	command_list[3] = OpScopeCommand("ReleaseObjects",
						Command_ReleaseObjects,
						OpScopeCommand::Type_Call,
						_gen_MsgID_release_objects_arg_,
						_gen_void_MsgID
						);
	command_list[4] = OpScopeCommand("OnReadyStateChanged",
						Command_OnReadyStateChanged,
						OpScopeCommand::Type_Event,
						_gen_void_MsgID,
						_gen_MsgID_ready_state_change_
						);
	command_list[5] = OpScopeCommand("SetFormElementValue",
						Command_SetFormElementValue,
						OpScopeCommand::Type_Call,
						_gen_MsgID_set_form_element_value_arg_,
						_gen_void_MsgID
						);
	return OpStatus::OK;
}

// END: OpScopeEcmascript_SI::Descriptors
// Service implementation: BEGIN


// Service implementation

OpScopeEcmascript_SI::OpScopeEcmascript_SI(const uni_char* id, OpScopeServiceManager *manager, ControlType control)
		: OpScopeService(id == NULL ? UNI_L("ecmascript") : id, manager, control)
{
}

/*virtual*/
OpScopeEcmascript_SI::~OpScopeEcmascript_SI()
{
}

/*virtual*/
int
OpScopeEcmascript_SI::GetCommandCount() const
{
	return Command_Count;
}

/*virtual*/
OpScopeService::CommandRange
OpScopeEcmascript_SI::GetCommands() const
{
	Descriptors *descriptors = g_scope_manager->GetDescriptorSet().ecmascript_;
	OP_ASSERT(descriptors);
	return CommandRange(descriptors ? descriptors->command_list : NULL, Command_Count);
}

/*virtual*/
OP_STATUS
OpScopeEcmascript_SI::DoReceive( OpScopeClient *client, const OpScopeTPMessage &msg )
{
	// Check for invalid request data
	if (msg.Status() != OpScopeTPMessage::OK) // All calls must have status OK
		return SetCommandError(OpScopeTPMessage::BadRequest, GetInvalidStatusFieldText());
	if (msg.ServiceName().Compare(GetName()) != 0) // Make sure the service name matches the one in the message
		return SetCommandError(OpScopeTPMessage::InternalError, GetIncorrectServiceText());

	if (msg.CommandID() == Command_ListRuntimes) // ListRuntimes
	{
		OP_STATUS status = OpStatus::OK;
		ListRuntimesArg in;
		RuntimeList out;

		OpProtobufInstanceProxy in_proxy(ListRuntimesArg::GetMessageDescriptor(GetDescriptors()), &in);
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
	else if (msg.CommandID() == Command_SetFormElementValue) // SetFormElementValue
	{
		OP_STATUS status = OpStatus::OK;
		SetFormElementValueArg in;

		OpProtobufInstanceProxy in_proxy(SetFormElementValueArg::GetMessageDescriptor(GetDescriptors()), &in);
		if (in_proxy.GetProtoMessage() == NULL)
			return OpStatus::ERR_NO_MEMORY;
		status = ParseMessage(client, msg, in_proxy);
		if (OpStatus::IsError(status))
		{
			if (GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if none was set by a parser
				RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetParseCommandMessageFailedText()));
			return status;
		}

		status = DoSetFormElementValue(in);
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
		EvalArg in;

		OpProtobufInstanceProxy in_proxy(EvalArg::GetMessageDescriptor(GetDescriptors()), &in);
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
		ExamineObjectsArg in;

		OpProtobufInstanceProxy in_proxy(ExamineObjectsArg::GetMessageDescriptor(GetDescriptors()), &in);
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
OpScopeEcmascript_SI::GetMessage(unsigned message_id) const
{
	Descriptors *descriptors = GetDescriptors();
	if (!descriptors)
		return NULL;
	return descriptors->Get(message_id);
}

OpScopeEcmascript_SI::Descriptors *
OpScopeEcmascript_SI::GetDescriptors() const
{
	Descriptors *d = g_scope_manager->GetDescriptorSet().ecmascript_;
	OP_ASSERT(d);
	return d;
}

/*virtual*/
unsigned
OpScopeEcmascript_SI::GetMessageCount() const
{
	return OpScopeEcmascript_Descriptors::_gen_Message_Count;
}

/*virtual*/
OpScopeService::MessageIDRange
OpScopeEcmascript_SI::GetMessageIDs() const
{
	unsigned start = OpScopeEcmascript_Descriptors::_gen_Message_Count > 0 ? 1 : 0;
	return MessageIDRange(start, start + OpScopeEcmascript_Descriptors::_gen_Message_Count);
}

/*virtual*/
OpScopeService::MessageRange
OpScopeEcmascript_SI::GetMessages() const
{
	unsigned start = OpScopeEcmascript_Descriptors::_gen_Message_Count > 0 ? 1 : 0;
	return MessageRange(this, start, start + OpScopeEcmascript_Descriptors::_gen_Message_Count);
}

/* virtual */
const char *
OpScopeEcmascript_SI::GetVersionString() const
{
	return "1.1";
}

/* virtual */
int
OpScopeEcmascript_SI::GetMajorVersion() const
{
	return 1;
}

/* virtual */
int
OpScopeEcmascript_SI::GetMinorVersion() const
{
	return 1;
}

/* virtual */
const char *
OpScopeEcmascript_SI::GetPatchVersion() const
{
	return "0";
}

OP_STATUS
OpScopeEcmascript_SI::SendOnReadyStateChanged(const ReadyStateChange &msg) // OnReadyStateChanged
{
	OpProtobufInstanceProxy proxy(ReadyStateChange::GetMessageDescriptor(GetDescriptors()), const_cast<ReadyStateChange *>(&msg));
	if (proxy.GetProtoMessage() == NULL)
		return OpStatus::ERR_NO_MEMORY;
	return SendEvent(proxy, Command_OnReadyStateChanged);
}


OP_STATUS
OpScopeEcmascript_SI::SendEval(const EvalResult &msg, unsigned int tag) // Eval
{
	OpProtobufInstanceProxy proxy(EvalResult::GetMessageDescriptor(GetDescriptors()), const_cast<EvalResult *>(&msg));
	if (proxy.GetProtoMessage() == NULL)
		return OpStatus::ERR_NO_MEMORY;
	return SendAsyncResponse(tag, proxy, Command_Eval);
}


OP_STATUS
OpScopeEcmascript_SI::SendExamineObjects(const ObjectList &msg, unsigned int tag) // ExamineObjects
{
	OpProtobufInstanceProxy proxy(ObjectList::GetMessageDescriptor(GetDescriptors()), const_cast<ObjectList *>(&msg));
	if (proxy.GetProtoMessage() == NULL)
		return OpStatus::ERR_NO_MEMORY;
	return SendAsyncResponse(tag, proxy, Command_ExamineObjects);
}

// Enum introspection: BEGIN

/*virtual*/
OpScopeService::EnumIDRange
OpScopeEcmascript_SI::GetEnumIDs() const
{
	Descriptors *descriptors = GetDescriptors();
	return EnumIDRange(descriptors ? descriptors->enum_id_list : NULL, OpScopeEcmascript_Descriptors::_gen_Enum_Count);
}

/*virtual*/
unsigned
OpScopeEcmascript_SI::GetEnumCount() const
{
	return OpScopeEcmascript_Descriptors::_gen_Enum_Count;
}

/*virtual*/
BOOL
OpScopeEcmascript_SI::HasEnum(unsigned enum_id) const
{
	switch (enum_id)
	{
		case OpScopeEcmascript_Descriptors::_gen_EnumID_EvalResult_Status:
		case OpScopeEcmascript_Descriptors::_gen_EnumID_Value_Type:
		case OpScopeEcmascript_Descriptors::_gen_EnumID_Object_ObjectType:
		case OpScopeEcmascript_Descriptors::_gen_EnumID_ReadyStateChange_State:
			return TRUE;
	}
	return FALSE;
}

/*virtual*/
OP_STATUS
OpScopeEcmascript_SI::GetEnum(unsigned enum_id, const uni_char *&name, unsigned &value_count) const
{
	switch (enum_id)
	{
		// EvalResult_Status
		case OpScopeEcmascript_Descriptors::_gen_EnumID_EvalResult_Status:
			name = UNI_L("Status");
			value_count = OpScopeEcmascript_Descriptors::_gen_EnumValueCount_EvalResult_Status;
			return OpStatus::OK;
		// Value_Type
		case OpScopeEcmascript_Descriptors::_gen_EnumID_Value_Type:
			name = UNI_L("Type");
			value_count = OpScopeEcmascript_Descriptors::_gen_EnumValueCount_Value_Type;
			return OpStatus::OK;
		// Object_ObjectType
		case OpScopeEcmascript_Descriptors::_gen_EnumID_Object_ObjectType:
			name = UNI_L("ObjectType");
			value_count = OpScopeEcmascript_Descriptors::_gen_EnumValueCount_Object_ObjectType;
			return OpStatus::OK;
		// ReadyStateChange_State
		case OpScopeEcmascript_Descriptors::_gen_EnumID_ReadyStateChange_State:
			name = UNI_L("State");
			value_count = OpScopeEcmascript_Descriptors::_gen_EnumValueCount_ReadyStateChange_State;
			return OpStatus::OK;
	}
	return OpStatus::ERR_NO_SUCH_RESOURCE;
}

/*virtual*/
OP_STATUS
OpScopeEcmascript_SI::GetEnumValue(unsigned enum_id, unsigned idx, const uni_char *&value_name, unsigned &value_number) const
{
	switch (enum_id)
	{
		// EvalResult_Status
		case OpScopeEcmascript_Descriptors::_gen_EnumID_EvalResult_Status:
		{
			if (idx > OpScopeEcmascript_Descriptors::_gen_EnumValueCount_EvalResult_Status)
				return OpStatus::ERR_OUT_OF_RANGE;
			// Values for EvalResult_Status
			const unsigned enum_numbers[] = {
				  1
				, 2
				, 3
				, 4
				, 5
			}; // ARRAY OK 2010-04-14 jborsodi
			const unsigned name_offsets[] = {
				  0
				, 8
				, 16
				, 26
				, 36
			}; // ARRAY OK 2010-04-14 jborsodi
			const uni_char *names = UNI_L( "SUCCESS\0FAILURE\0EXCEPTION\0NO_MEMORY\0CANCELLED" );
			OP_ASSERT(idx < sizeof(name_offsets));
			OP_ASSERT(idx < sizeof(enum_numbers));
			value_name = names + name_offsets[idx];
			value_number = enum_numbers[idx];
			return OpStatus::OK;
		}

		// Value_Type
		case OpScopeEcmascript_Descriptors::_gen_EnumID_Value_Type:
		{
			if (idx > OpScopeEcmascript_Descriptors::_gen_EnumValueCount_Value_Type)
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

		// Object_ObjectType
		case OpScopeEcmascript_Descriptors::_gen_EnumID_Object_ObjectType:
		{
			if (idx > OpScopeEcmascript_Descriptors::_gen_EnumValueCount_Object_ObjectType)
				return OpStatus::ERR_OUT_OF_RANGE;
			// Values for Object_ObjectType
			const unsigned enum_numbers[] = {
				  1
				, 2
			}; // ARRAY OK 2010-04-14 jborsodi
			const unsigned name_offsets[] = {
				  0
				, 7
			}; // ARRAY OK 2010-04-14 jborsodi
			const uni_char *names = UNI_L( "OBJECT\0FUNCTION" );
			OP_ASSERT(idx < sizeof(name_offsets));
			OP_ASSERT(idx < sizeof(enum_numbers));
			value_name = names + name_offsets[idx];
			value_number = enum_numbers[idx];
			return OpStatus::OK;
		}

		// ReadyStateChange_State
		case OpScopeEcmascript_Descriptors::_gen_EnumID_ReadyStateChange_State:
		{
			if (idx > OpScopeEcmascript_Descriptors::_gen_EnumValueCount_ReadyStateChange_State)
				return OpStatus::ERR_OUT_OF_RANGE;
			// Values for ReadyStateChange_State
			const unsigned enum_numbers[] = {
				  1
				, 2
				, 3
			}; // ARRAY OK 2010-04-14 jborsodi
			const unsigned name_offsets[] = {
				  0
				, 24
				, 43
			}; // ARRAY OK 2010-04-14 jborsodi
			const uni_char *names = UNI_L( "DOM_ENVIRONMENT_CREATED\0DOM_CONTENT_LOADED\0AFTER_ONLOAD" );
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

#endif // SCOPE_ECMASCRIPT
