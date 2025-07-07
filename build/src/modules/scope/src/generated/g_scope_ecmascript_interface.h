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

// Generated from ../../modules/scope/services/ecmascript/ecmascript.proto



#ifndef G_SCOPE_ECMASCRIPT_INTERFACE_H
#define G_SCOPE_ECMASCRIPT_INTERFACE_H

#ifdef SCOPE_ECMASCRIPT

#include "modules/protobuf/src/opvaluevector.h"
#include "modules/protobuf/src/protobuf_message.h"
#include "modules/scope/src/scope_service.h"
#include "modules/util/opstring.h"



#include "modules/protobuf/src/protobuf_utils.h"
#include "modules/protobuf/src/protobuf_message.h"

class OpScopeTPMessage;
class OpProtobufField;
class OpProtobufMessage;


class OpScopeEcmascript_Descriptors;

class OpScopeEcmascript_MessageSet
{
public:
	// BEGIN: ctor/dtor

	OpScopeEcmascript_MessageSet();
	virtual ~OpScopeEcmascript_MessageSet();

	// END: ctor/dtor
	// BEGIN: Enums

	enum EvalResult_Status
	{
	    EvalResult_Status_STATUS_SUCCESS = 1,
	    EvalResult_Status_STATUS_FAILURE = 2,
	    EvalResult_Status_STATUS_EXCEPTION = 3,
	    EvalResult_Status_STATUS_OOM = 4,
	    EvalResult_Status_STATUS_CANCELLED = 5
	};

	enum Object_ObjectType
	{
	    Object_ObjectType_OBJECTTYPE_OBJECT = 1,
	    Object_ObjectType_OBJECTTYPE_FUNCTION = 2
	};

	enum Value_Type
	{
	    Value_Type_TYPE_UNDEFINED,
	    Value_Type_TYPE_NULL = 1,
	    Value_Type_TYPE_TRUE = 2,
	    Value_Type_TYPE_FALSE = 3,
	    Value_Type_TYPE_NAN = 4,
	    Value_Type_TYPE_PLUS_INFINITY = 5,
	    Value_Type_TYPE_MINUS_INFINITY = 6,
	    Value_Type_TYPE_NUMBER = 7,
	    Value_Type_TYPE_STRING = 8,
	    Value_Type_TYPE_OBJECT = 9
	};

	enum ReadyStateChange_State
	{
	    ReadyStateChange_State_STATE_DOM_ENVIRONMENT_CREATED = 1,
	    ReadyStateChange_State_STATE_DOM_CONTENT_LOADED = 2,
	    ReadyStateChange_State_STATE_AFTER_ONLOAD = 3
	};

	// End: Enums

	// BEGIN: Message classes

	// Forward declarations
	class Value;
	class Object_Property;
	class EvalArg_Variable;
	class SetFormElementValueArg;
	class ReadyStateChange;
	class ReleaseObjectsArg;
	class Object;
	class PrototypeChain;
	class ObjectList;
	class ExamineObjectsArg;
	class EvalResult;
	class EvalArg;
	class Runtime;
	class RuntimeList;
	class ListRuntimesArg;

	/**
	 * Represents an ECMAScript value, a value is either one of the primitives
	 * like string or boolean or an object.
	 */
	class Value
	{
	public:
		// BEGIN: Nested items

		// Enum Value.Type
		typedef Value_Type Type;
		static const Value_Type TYPE_UNDEFINED = Value_Type_TYPE_UNDEFINED;
		static const Value_Type TYPE_NULL = Value_Type_TYPE_NULL;
		static const Value_Type TYPE_TRUE = Value_Type_TYPE_TRUE;
		static const Value_Type TYPE_FALSE = Value_Type_TYPE_FALSE;
		static const Value_Type TYPE_NAN = Value_Type_TYPE_NAN;
		static const Value_Type TYPE_PLUS_INFINITY = Value_Type_TYPE_PLUS_INFINITY;
		static const Value_Type TYPE_MINUS_INFINITY = Value_Type_TYPE_MINUS_INFINITY;
		static const Value_Type TYPE_NUMBER = Value_Type_TYPE_NUMBER;
		static const Value_Type TYPE_STRING = Value_Type_TYPE_STRING;
		static const Value_Type TYPE_OBJECT = Value_Type_TYPE_OBJECT;

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 4
		};
		// END: Internal enums


		Value(
			)
			: _type(Value_Type_TYPE_UNDEFINED)
			, _number(0.0)
			, _object(NULL)
			, encoded_size_(-1)
		{
		}
		OP_STATUS Construct(
			const OpString * str_arg = NULL
			)
		{
			if (str_arg)
			{
				RETURN_IF_ERROR(_str.Set(*str_arg));
				has_bits_.Reference().SetBit(2);

			}
			return OpStatus::OK;
		}
		~Value()
		{
			OP_DELETE(_object);
		}

		// Checkers
		/**
		 * Check if the field @c type is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasType() const
		{
			return has_bits_.Reference().IsSet(0);
		}

		/**
		 * Check if the field @c number is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasNumber() const
		{
			return has_bits_.Reference().IsSet(1);
		}

		/**
		 * Check if the field @c str is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasStr() const
		{
			return has_bits_.Reference().IsSet(2);
		}

		/**
		 * Check if the field @c object is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasObject() const
		{
			return has_bits_.Reference().IsSet(3);
		}

		// Getters

		/**
		 * Get the field @c type.
		 * 
		 * The type of value.
		 * 
		 * @note Booleans are encoded as either TRUE or FALSE to shorten the number
		 * fields in use.
		 */
		OpScopeEcmascript_MessageSet::Value_Type GetType() const
		{
			return static_cast<OpScopeEcmascript_MessageSet::Value_Type>(_type);
		}

		/**
		 * Get the field @c number.
		 * 
		 * The numeric value, set if type = NUMBER.
		 */
		double GetNumber() const
		{
			return _number;
		}

		/**
		 * Get the field @c str.
		 * 
		 * The string, set if type = STRING.
		 */
		const OpString & GetStr() const
		{
			return _str;
		}

		/**
		 * Get the field @c object.
		 * 
		 * Object information, set if type = OBJECT.
		 */
		OpScopeEcmascript_MessageSet::Object * GetObject() const
		{
			return _object;
		}

		// Setters

		/**
		 * Set the field @c type.
		 * 
		 * The type of value.
		 * 
		 * @note Booleans are encoded as either TRUE or FALSE to shorten the number
		 * fields in use.
		 */
		void SetType(OpScopeEcmascript_MessageSet::Value_Type v);

		/**
		 * Set the field @c number.
		 * 
		 * The numeric value, set if type = NUMBER.
		 */
		void SetNumber(double v)
		{
			has_bits_.Reference().SetBit(1);
			_number = v;
		}

		/**
		 * Set the field @c str.
		 * 
		 * The string, set if type = STRING.
		 */
		OP_STATUS SetStr(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c object.
		 * 
		 * Object information, set if type = OBJECT.
		 */
		void SetObject(OpScopeEcmascript_MessageSet::Object * v);

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeEcmascript_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		INT32 _type;
		double _number;
		OpString _str;
		OpScopeEcmascript_MessageSet::Object * _object;

		OpProtobufBitField<4> has_bits_;
		mutable int                 encoded_size_;
	};


	class Object_Property
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 2
		};
		// END: Internal enums


		Object_Property(
			)
			: encoded_size_(-1)
		{
		}
		OP_STATUS Construct(
			const OpString & name_arg
			)
		{
			RETURN_IF_ERROR(_name.Set(name_arg));
			return OpStatus::OK;
		}

		// Checkers
		/**
		 * Check if the field @c name is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasName() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c value is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasValue() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c name.
		 */
		const OpString & GetName() const
		{
			return _name;
		}

		/**
		 * Get the field @c value.
		 */
		const OpScopeEcmascript_MessageSet::Value & GetValue() const
		{
			return _value;
		}

		// Setters

		/**
		 * Set the field @c name.
		 */
		OP_STATUS SetName(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c value.
		 */
		OpScopeEcmascript_MessageSet::Value & GetValueRef();

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeEcmascript_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		OpString _name;
		OpScopeEcmascript_MessageSet::Value _value;

		OpProtobufBitField<2> has_bits_;
		mutable int                 encoded_size_;
	};


	/**
	 * A variable to assign in the execution environment before evaluating
	 * the script.
	 */
	class EvalArg_Variable
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 2
		};
		// END: Internal enums


		EvalArg_Variable(
			UINT32 object_id_arg = 0
			)
			: _objectID(object_id_arg)
			, encoded_size_(-1)
		{
		}
		OP_STATUS Construct(
			const OpString & name_arg
			)
		{
			RETURN_IF_ERROR(_name.Set(name_arg));
			return OpStatus::OK;
		}

		// Checkers
		/**
		 * Check if the field @c name is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasName() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c objectID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasObjectID() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c name.
		 * 
		 * Name of variable to create.
		 */
		const OpString & GetName() const
		{
			return _name;
		}

		/**
		 * Get the field @c objectID.
		 * 
		 * ID of object to retrieve, the object is assigned to the specified
		 * name.
		 */
		UINT32 GetObjectID() const
		{
			return _objectID;
		}

		// Setters

		/**
		 * Set the field @c name.
		 * 
		 * Name of variable to create.
		 */
		OP_STATUS SetName(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c objectID.
		 * 
		 * ID of object to retrieve, the object is assigned to the specified
		 * name.
		 */
		void SetObjectID(UINT32 v)
		{
			_objectID = v;
		}

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeEcmascript_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		OpString _name;
		UINT32 _objectID;

		OpProtobufBitField<2> has_bits_;
		mutable int                 encoded_size_;
	};


	class SetFormElementValueArg
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 2
		};
		// END: Internal enums


		SetFormElementValueArg(
			UINT32 object_id_arg = 0
			)
			: _objectID(object_id_arg)
			, encoded_size_(-1)
		{
		}
		OP_STATUS Construct(
			const OpString & value_arg
			)
		{
			RETURN_IF_ERROR(_value.Set(value_arg));
			return OpStatus::OK;
		}

		// Checkers
		/**
		 * Check if the field @c objectID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasObjectID() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c value is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasValue() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c objectID.
		 * 
		 * ID of object to set value.
		 */
		UINT32 GetObjectID() const
		{
			return _objectID;
		}

		/**
		 * Get the field @c value.
		 * 
		 * Value to set.
		 */
		const OpString & GetValue() const
		{
			return _value;
		}

		// Setters

		/**
		 * Set the field @c objectID.
		 * 
		 * ID of object to set value.
		 */
		void SetObjectID(UINT32 v)
		{
			_objectID = v;
		}

		/**
		 * Set the field @c value.
		 * 
		 * Value to set.
		 */
		OP_STATUS SetValue(const uni_char * v, int l = KAll);

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeEcmascript_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		UINT32 _objectID;
		OpString _value;

		OpProtobufBitField<2> has_bits_;
		mutable int                 encoded_size_;
	};


	class ReadyStateChange
	{
	public:
		// BEGIN: Nested items

		// Enum ReadyStateChange.State
		typedef ReadyStateChange_State State;
		static const ReadyStateChange_State STATE_DOM_ENVIRONMENT_CREATED = ReadyStateChange_State_STATE_DOM_ENVIRONMENT_CREATED;
		static const ReadyStateChange_State STATE_DOM_CONTENT_LOADED = ReadyStateChange_State_STATE_DOM_CONTENT_LOADED;
		static const ReadyStateChange_State STATE_AFTER_ONLOAD = ReadyStateChange_State_STATE_AFTER_ONLOAD;

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 2
		};
		// END: Internal enums


		ReadyStateChange(
			UINT32 runtime_id_arg = 0,
			ReadyStateChange_State state_arg = ReadyStateChange_State_STATE_DOM_ENVIRONMENT_CREATED
			)
			: _runtimeID(runtime_id_arg)
			, _state(state_arg)
			, encoded_size_(-1)
		{
		}
		OP_STATUS Construct(
			)
		{
			return OpStatus::OK;
		}

		// Checkers
		/**
		 * Check if the field @c runtimeID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasRuntimeID() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c state is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasState() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c runtimeID.
		 */
		UINT32 GetRuntimeID() const
		{
			return _runtimeID;
		}

		/**
		 * Get the field @c state.
		 */
		OpScopeEcmascript_MessageSet::ReadyStateChange_State GetState() const
		{
			return static_cast<OpScopeEcmascript_MessageSet::ReadyStateChange_State>(_state);
		}

		// Setters

		/**
		 * Set the field @c runtimeID.
		 */
		void SetRuntimeID(UINT32 v)
		{
			_runtimeID = v;
		}

		/**
		 * Set the field @c state.
		 */
		void SetState(OpScopeEcmascript_MessageSet::ReadyStateChange_State v);

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeEcmascript_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		UINT32 _runtimeID;
		INT32 _state;

		OpProtobufBitField<2> has_bits_;
		mutable int                 encoded_size_;
	};


	/**
	 * List of objects to release.
	 */
	class ReleaseObjectsArg
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 1
		};
		// END: Internal enums


		ReleaseObjectsArg(
			)
			: encoded_size_(-1)
		{
		}
		OP_STATUS Construct(
			)
		{
			return OpStatus::OK;
		}

		// Checkers
		/**
		 * Check if the field @c objectIDList is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasObjectIDList() const
		{
			return has_bits_.Reference().IsSet(0);
		}

		// Getters

		/**
		 * Get the field @c objectIDList.
		 */
		const OpValueVector<UINT32> & GetObjectIDList() const
		{
			return _objectIDList;
		}

		// Setters

		/**
		 * Set the field @c objectIDList.
		 */
		OpValueVector<UINT32> & GetObjectIDListRef();

		/**
		 * Set the field @c objectIDList.
		 */
		OP_STATUS AppendToObjectIDList(UINT32 v);

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeEcmascript_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		OpValueVector<UINT32> _objectIDList;

		OpProtobufBitField<1> has_bits_;
		mutable int                 encoded_size_;
	};


	/**
	 * An Object is any non-primitive value in ECMAScript. Functions
	 * and arrays, for instance, are also Objects.
	 */
	class Object
	{
	public:
		// BEGIN: Nested items

		// Enum Object.ObjectType
		typedef Object_ObjectType ObjectType;
		static const Object_ObjectType OBJECTTYPE_OBJECT = Object_ObjectType_OBJECTTYPE_OBJECT;
		static const Object_ObjectType OBJECTTYPE_FUNCTION = Object_ObjectType_OBJECTTYPE_FUNCTION;

		// Message Object.Property
		typedef Object_Property Property;

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 7
		};
		// END: Internal enums


		Object(
			UINT32 object_id_arg = 0,
			BOOL is_callable_arg = FALSE,
			Object_ObjectType type_arg = Object_ObjectType_OBJECTTYPE_OBJECT
			)
			: _objectID(object_id_arg)
			, _isCallable(is_callable_arg)
			, _type(type_arg)
			, _prototypeID(0)
			, encoded_size_(-1)
		{
		}
		OP_STATUS Construct(
			const OpString * class_name_arg = NULL,
			const OpString * function_name_arg = NULL
			)
		{
			if (class_name_arg)
			{
				RETURN_IF_ERROR(_className.Set(*class_name_arg));
				has_bits_.Reference().SetBit(4);

			}
			if (function_name_arg)
			{
				RETURN_IF_ERROR(_functionName.Set(*function_name_arg));
				has_bits_.Reference().SetBit(5);

			}
			return OpStatus::OK;
		}

		// Checkers
		/**
		 * Check if the field @c objectID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasObjectID() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c isCallable is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasIsCallable() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c type is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasType() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c prototypeID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasPrototypeID() const
		{
			return has_bits_.Reference().IsSet(3);
		}

		/**
		 * Check if the field @c className is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasClassName() const
		{
			return has_bits_.Reference().IsSet(4);
		}

		/**
		 * Check if the field @c functionName is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasFunctionName() const
		{
			return has_bits_.Reference().IsSet(5);
		}

		/**
		 * Check if the field @c propertyList is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasPropertyList() const
		{
			return has_bits_.Reference().IsSet(6);
		}

		// Getters

		/**
		 * Get the field @c objectID.
		 * 
		 * The unique ID of the object, valid until the object is garbage collected
		 * or the service is disabled.
		 * 
		 * Is an integer from 1 and up.
		 */
		UINT32 GetObjectID() const
		{
			return _objectID;
		}

		/**
		 * Get the field @c isCallable.
		 * 
		 * true if the object can be called, this is typically functions but
		 * other objects are also possible.
		 */
		BOOL GetIsCallable() const
		{
			return _isCallable;
		}

		/**
		 * Get the field @c type.
		 * 
		 * The type of object, either a plain object or a function.
		 */
		OpScopeEcmascript_MessageSet::Object_ObjectType GetType() const
		{
			return static_cast<OpScopeEcmascript_MessageSet::Object_ObjectType>(_type);
		}

		/**
		 * Get the field @c prototypeID.
		 * 
		 * The ID of the prototype for this object if it has a prototype.
		 * A prototype is just another object and can be examined with
		 * ExamineObjects().
		 */
		UINT32 GetPrototypeID() const
		{
			return _prototypeID;
		}

		/**
		 * Get the field @c className.
		 * 
		 * The name of the class used to create this object. Examples::
		 * 
		 *   "Object"
		 *   "Array"
		 *   "Function"
		 *   "HTMLHtmlElement"
		 */
		const OpString & GetClassName() const
		{
			return _className;
		}

		/**
		 * Get the field @c functionName.
		 * 
		 * The name of the function, only set if type = FUNCTION. If the function
		 * is anonymous, then a suitable alias *may* be assigned based on context,
		 * if possible. For instance::
		 * 
		 *   foo.bar = function(){}
		 * 
		 * Would get the functionName 'bar'.
		 */
		const OpString & GetFunctionName() const
		{
			return _functionName;
		}

		/**
		 * Get the field @c propertyList.
		 * 
		 * A list of properties available on the object.
		 * 
		 * Is omitted in some cases when a full property list (can be huge) is not
		 * desirable.
		 */
		const OpProtobufMessageVector<OpScopeEcmascript_MessageSet::Object_Property> & GetPropertyList() const
		{
			return _propertyList;
		}

		// Setters

		/**
		 * Set the field @c objectID.
		 * 
		 * The unique ID of the object, valid until the object is garbage collected
		 * or the service is disabled.
		 * 
		 * Is an integer from 1 and up.
		 */
		void SetObjectID(UINT32 v)
		{
			_objectID = v;
		}

		/**
		 * Set the field @c isCallable.
		 * 
		 * true if the object can be called, this is typically functions but
		 * other objects are also possible.
		 */
		void SetIsCallable(BOOL v)
		{
			_isCallable = v;
		}

		/**
		 * Set the field @c type.
		 * 
		 * The type of object, either a plain object or a function.
		 */
		void SetType(OpScopeEcmascript_MessageSet::Object_ObjectType v);

		/**
		 * Set the field @c prototypeID.
		 * 
		 * The ID of the prototype for this object if it has a prototype.
		 * A prototype is just another object and can be examined with
		 * ExamineObjects().
		 */
		void SetPrototypeID(UINT32 v)
		{
			has_bits_.Reference().SetBit(3);
			_prototypeID = v;
		}

		/**
		 * Set the field @c className.
		 * 
		 * The name of the class used to create this object. Examples::
		 * 
		 *   "Object"
		 *   "Array"
		 *   "Function"
		 *   "HTMLHtmlElement"
		 */
		OP_STATUS SetClassName(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c className.
		 * 
		 * The name of the class used to create this object. Examples::
		 * 
		 *   "Object"
		 *   "Array"
		 *   "Function"
		 *   "HTMLHtmlElement"
		 */
		OP_STATUS SetClassName(const char * v, int l = KAll);

		/**
		 * Set the field @c functionName.
		 * 
		 * The name of the function, only set if type = FUNCTION. If the function
		 * is anonymous, then a suitable alias *may* be assigned based on context,
		 * if possible. For instance::
		 * 
		 *   foo.bar = function(){}
		 * 
		 * Would get the functionName 'bar'.
		 */
		OP_STATUS SetFunctionName(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c propertyList.
		 * 
		 * A list of properties available on the object.
		 * 
		 * Is omitted in some cases when a full property list (can be huge) is not
		 * desirable.
		 */
		OpScopeEcmascript_MessageSet::Object_Property * AppendNewPropertyList();

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeEcmascript_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		UINT32 _objectID;
		BOOL _isCallable;
		INT32 _type;
		UINT32 _prototypeID;
		OpString _className;
		OpString _functionName;
		OpProtobufMessageVector<OpScopeEcmascript_MessageSet::Object_Property> _propertyList;

		OpProtobufBitField<7> has_bits_;
		mutable int                 encoded_size_;
	};


	/**
	 * A list of prototypes for the examined object, the first entry [0] is the
	 * examined object while the rest are the object info for each prototype in the
	 * chain.
	 * 
	 * If prototype were not examined the list contains only one entry.
	 */
	class PrototypeChain
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 1
		};
		// END: Internal enums


		PrototypeChain(
			)
			: encoded_size_(-1)
		{
		}
		OP_STATUS Construct(
			)
		{
			return OpStatus::OK;
		}

		// Checkers
		/**
		 * Check if the field @c objectList is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasObjectList() const
		{
			return has_bits_.Reference().IsSet(0);
		}

		// Getters

		/**
		 * Get the field @c objectList.
		 */
		const OpProtobufMessageVector<OpScopeEcmascript_MessageSet::Object> & GetObjectList() const
		{
			return _objectList;
		}

		// Setters

		/**
		 * Set the field @c objectList.
		 */
		OpScopeEcmascript_MessageSet::Object * AppendNewObjectList();

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeEcmascript_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		OpProtobufMessageVector<OpScopeEcmascript_MessageSet::Object> _objectList;

		OpProtobufBitField<1> has_bits_;
		mutable int                 encoded_size_;
	};


	/**
	 * Contains a list of prototype chains from the ExamineObject() command.
	 */
	class ObjectList
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 1
		};
		// END: Internal enums


		ObjectList(
			)
			: encoded_size_(-1)
		{
		}
		OP_STATUS Construct(
			)
		{
			return OpStatus::OK;
		}

		// Checkers
		/**
		 * Check if the field @c prototypeList is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasPrototypeList() const
		{
			return has_bits_.Reference().IsSet(0);
		}

		// Getters

		/**
		 * Get the field @c prototypeList.
		 */
		const OpProtobufMessageVector<OpScopeEcmascript_MessageSet::PrototypeChain> & GetPrototypeList() const
		{
			return _prototypeList;
		}

		// Setters

		/**
		 * Set the field @c prototypeList.
		 */
		OpScopeEcmascript_MessageSet::PrototypeChain * AppendNewPrototypeList();

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeEcmascript_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		OpProtobufMessageVector<OpScopeEcmascript_MessageSet::PrototypeChain> _prototypeList;

		OpProtobufBitField<1> has_bits_;
		mutable int                 encoded_size_;
	};


	class ExamineObjectsArg
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 3
		};
		// END: Internal enums


		ExamineObjectsArg(
			UINT32 runtime_id_arg = 0
			)
			: _runtimeID(runtime_id_arg)
			, _examinePrototypes(FALSE)
			, encoded_size_(-1)
		{
		}
		OP_STATUS Construct(
			)
		{
			return OpStatus::OK;
		}

		// Checkers
		/**
		 * Check if the field @c runtimeID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasRuntimeID() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c objectIDList is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasObjectIDList() const
		{
			return has_bits_.Reference().IsSet(1);
		}

		/**
		 * Check if the field @c examinePrototypes is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasExaminePrototypes() const
		{
			return has_bits_.Reference().IsSet(2);
		}

		// Getters

		/**
		 * Get the field @c runtimeID.
		 * 
		 * ID of runtime to examine object in.
		 */
		UINT32 GetRuntimeID() const
		{
			return _runtimeID;
		}

		/**
		 * Get the field @c objectIDList.
		 * 
		 * List of object IDs to examine.
		 */
		const OpValueVector<UINT32> & GetObjectIDList() const
		{
			return _objectIDList;
		}

		/**
		 * Get the field @c examinePrototypes.
		 * 
		 * If true then each examined object will also include the prototype
		 * chain.
		 */
		BOOL GetExaminePrototypes() const
		{
			return _examinePrototypes;
		}

		// Setters

		/**
		 * Set the field @c runtimeID.
		 * 
		 * ID of runtime to examine object in.
		 */
		void SetRuntimeID(UINT32 v)
		{
			_runtimeID = v;
		}

		/**
		 * Set the field @c objectIDList.
		 * 
		 * List of object IDs to examine.
		 */
		OpValueVector<UINT32> & GetObjectIDListRef();

		/**
		 * Set the field @c objectIDList.
		 * 
		 * List of object IDs to examine.
		 */
		OP_STATUS AppendToObjectIDList(UINT32 v);

		/**
		 * Set the field @c examinePrototypes.
		 * 
		 * If true then each examined object will also include the prototype
		 * chain.
		 */
		void SetExaminePrototypes(BOOL v)
		{
			has_bits_.Reference().SetBit(2);
			_examinePrototypes = v;
		}

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeEcmascript_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		UINT32 _runtimeID;
		OpValueVector<UINT32> _objectIDList;
		BOOL _examinePrototypes;

		OpProtobufBitField<3> has_bits_;
		mutable int                 encoded_size_;
	};


	/**
	 * Result of a script execution.
	 */
	class EvalResult
	{
	public:
		// BEGIN: Nested items

		// Enum EvalResult.Status
		typedef EvalResult_Status Status;
		static const EvalResult_Status STATUS_SUCCESS = EvalResult_Status_STATUS_SUCCESS;
		static const EvalResult_Status STATUS_FAILURE = EvalResult_Status_STATUS_FAILURE;
		static const EvalResult_Status STATUS_EXCEPTION = EvalResult_Status_STATUS_EXCEPTION;
		static const EvalResult_Status STATUS_OOM = EvalResult_Status_STATUS_OOM;
		static const EvalResult_Status STATUS_CANCELLED = EvalResult_Status_STATUS_CANCELLED;

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 2
		};
		// END: Internal enums


		EvalResult(
			EvalResult_Status status_arg = EvalResult_Status_STATUS_SUCCESS
			)
			: _status(status_arg)
			, encoded_size_(-1)
		{
		}
		OP_STATUS Construct(
			)
		{
			return OpStatus::OK;
		}

		// Checkers
		/**
		 * Check if the field @c status is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasStatus() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c value is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasValue() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c status.
		 * 
		 * Evaluation status, a successful evaluation returns SUCCESS.
		 */
		OpScopeEcmascript_MessageSet::EvalResult_Status GetStatus() const
		{
			return static_cast<OpScopeEcmascript_MessageSet::EvalResult_Status>(_status);
		}

		/**
		 * Get the field @c value.
		 * 
		 * The result of the evaluated script.
		 * 
		 * If execution failed (status != SUCCESS) then this will contain
		 * the undefined value.
		 */
		const OpScopeEcmascript_MessageSet::Value & GetValue() const
		{
			return _value;
		}

		// Setters

		/**
		 * Set the field @c status.
		 * 
		 * Evaluation status, a successful evaluation returns SUCCESS.
		 */
		void SetStatus(OpScopeEcmascript_MessageSet::EvalResult_Status v);

		/**
		 * Set the field @c value.
		 * 
		 * The result of the evaluated script.
		 * 
		 * If execution failed (status != SUCCESS) then this will contain
		 * the undefined value.
		 */
		OpScopeEcmascript_MessageSet::Value & GetValueRef();

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeEcmascript_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		INT32 _status;
		OpScopeEcmascript_MessageSet::Value _value;

		OpProtobufBitField<2> has_bits_;
		mutable int                 encoded_size_;
	};


	class EvalArg
	{
	public:
		// BEGIN: Nested items

		// Message EvalArg.Variable
		typedef EvalArg_Variable Variable;

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 3
		};
		// END: Internal enums


		EvalArg(
			UINT32 runtime_id_arg = 0
			)
			: _runtimeID(runtime_id_arg)
			, encoded_size_(-1)
		{
		}
		OP_STATUS Construct(
			const OpString & script_data_arg
			)
		{
			RETURN_IF_ERROR(_scriptData.Set(script_data_arg));
			return OpStatus::OK;
		}

		// Checkers
		/**
		 * Check if the field @c runtimeID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasRuntimeID() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c scriptData is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasScriptData() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c variableList is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasVariableList() const
		{
			return has_bits_.Reference().IsSet(2);
		}

		// Getters

		/**
		 * Get the field @c runtimeID.
		 * 
		 * ID of runtime to execute script in.
		 */
		UINT32 GetRuntimeID() const
		{
			return _runtimeID;
		}

		/**
		 * Get the field @c scriptData.
		 * 
		 * The script data to execute, this can either be an expression or a
		 * statement. The semi-colon can be omitted.
		 * 
		 * Eval() will return the value of the last expression that is evaluated.
		 * 
		 * Some examples::
		 * 
		 *   "2 + 2"
		 *   "window" // returns the window object
		 *   "x = 5; x*x"
		 *   "my_function()"
		 */
		const OpString & GetScriptData() const
		{
			return _scriptData;
		}

		/**
		 * Get the field @c variableList.
		 * 
		 * A list of objects to place in the execution environment when evaluating
		 * **scriptData**.
		 * 
		 * Each object is assigned to variable specified in **Variable.name**.
		 */
		const OpProtobufMessageVector<OpScopeEcmascript_MessageSet::EvalArg_Variable> & GetVariableList() const
		{
			return _variableList;
		}

		// Setters

		/**
		 * Set the field @c runtimeID.
		 * 
		 * ID of runtime to execute script in.
		 */
		void SetRuntimeID(UINT32 v)
		{
			_runtimeID = v;
		}

		/**
		 * Set the field @c scriptData.
		 * 
		 * The script data to execute, this can either be an expression or a
		 * statement. The semi-colon can be omitted.
		 * 
		 * Eval() will return the value of the last expression that is evaluated.
		 * 
		 * Some examples::
		 * 
		 *   "2 + 2"
		 *   "window" // returns the window object
		 *   "x = 5; x*x"
		 *   "my_function()"
		 */
		OP_STATUS SetScriptData(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c variableList.
		 * 
		 * A list of objects to place in the execution environment when evaluating
		 * **scriptData**.
		 * 
		 * Each object is assigned to variable specified in **Variable.name**.
		 */
		OpProtobufMessageVector<OpScopeEcmascript_MessageSet::EvalArg_Variable> & GetVariableListRef();

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeEcmascript_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		UINT32 _runtimeID;
		OpString _scriptData;
		OpProtobufMessageVector<OpScopeEcmascript_MessageSet::EvalArg_Variable> _variableList;

		OpProtobufBitField<3> has_bits_;
		mutable int                 encoded_size_;
	};


	/**
	 * A runtime is an ECMAScript execution environment.
	 */
	class Runtime
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 5
		};
		// END: Internal enums


		Runtime(
			UINT32 runtime_id_arg = 0,
			UINT32 window_id_arg = 0,
			UINT32 object_id_arg = 0
			)
			: _runtimeID(runtime_id_arg)
			, _windowID(window_id_arg)
			, _objectID(object_id_arg)
			, encoded_size_(-1)
		{
		}
		OP_STATUS Construct(
			const OpString & html_frame_path_arg,
			const OpString & uri_arg
			)
		{
			RETURN_IF_ERROR(_htmlFramePath.Set(html_frame_path_arg));
			RETURN_IF_ERROR(_uri.Set(uri_arg));
			return OpStatus::OK;
		}

		// Checkers
		/**
		 * Check if the field @c runtimeID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasRuntimeID() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c htmlFramePath is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasHtmlFramePath() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c windowID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasWindowID() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c objectID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasObjectID() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c uri is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasUri() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c runtimeID.
		 * 
		 * A unique ID for this runtime, persists through the entire session or
		 * until the runtime is destroyed.
		 * 
		 * Is an integer from 1 and up.
		 */
		UINT32 GetRuntimeID() const
		{
			return _runtimeID;
		}

		/**
		 * Get the field @c htmlFramePath.
		 * 
		 * The frame path in the window, for instance "_top" means the top-most
		 * frame of a window.
		 * 
		 * Other examples are::
		 * 
		 *   "_top/[1]"
		 *   "_top/[1]/[1]"
		 */
		const OpString & GetHtmlFramePath() const
		{
			return _htmlFramePath;
		}

		/**
		 * Get the field @c windowID.
		 * 
		 * The ID this window belongs to.
		 * 
		 * Multiple frames in a window will be reported as multiple runtimes and
		 * they will all share the same windowID.
		 */
		UINT32 GetWindowID() const
		{
			return _windowID;
		}

		/**
		 * Get the field @c objectID.
		 * 
		 * The global object associated with this runtime.
		 */
		UINT32 GetObjectID() const
		{
			return _objectID;
		}

		/**
		 * Get the field @c uri.
		 * 
		 * The URI of the resource loaded in the runtime. This can be a normal
		 * URI (HTTP etc.) or a special interal URI like *"opera:blank"* or
		 * "opera:debug".
		 */
		const OpString & GetUri() const
		{
			return _uri;
		}

		// Setters

		/**
		 * Set the field @c runtimeID.
		 * 
		 * A unique ID for this runtime, persists through the entire session or
		 * until the runtime is destroyed.
		 * 
		 * Is an integer from 1 and up.
		 */
		void SetRuntimeID(UINT32 v)
		{
			_runtimeID = v;
		}

		/**
		 * Set the field @c htmlFramePath.
		 * 
		 * The frame path in the window, for instance "_top" means the top-most
		 * frame of a window.
		 * 
		 * Other examples are::
		 * 
		 *   "_top/[1]"
		 *   "_top/[1]/[1]"
		 */
		OP_STATUS SetHtmlFramePath(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c windowID.
		 * 
		 * The ID this window belongs to.
		 * 
		 * Multiple frames in a window will be reported as multiple runtimes and
		 * they will all share the same windowID.
		 */
		void SetWindowID(UINT32 v)
		{
			_windowID = v;
		}

		/**
		 * Set the field @c objectID.
		 * 
		 * The global object associated with this runtime.
		 */
		void SetObjectID(UINT32 v)
		{
			_objectID = v;
		}

		/**
		 * Set the field @c uri.
		 * 
		 * The URI of the resource loaded in the runtime. This can be a normal
		 * URI (HTTP etc.) or a special interal URI like *"opera:blank"* or
		 * "opera:debug".
		 */
		OP_STATUS SetUri(const uni_char * v, int l = KAll);

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeEcmascript_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		UINT32 _runtimeID;
		OpString _htmlFramePath;
		UINT32 _windowID;
		UINT32 _objectID;
		OpString _uri;

		OpProtobufBitField<5> has_bits_;
		mutable int                 encoded_size_;
	};


	class RuntimeList
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 1
		};
		// END: Internal enums


		RuntimeList(
			)
			: encoded_size_(-1)
		{
		}
		OP_STATUS Construct(
			)
		{
			return OpStatus::OK;
		}

		// Checkers
		/**
		 * Check if the field @c runtimeList is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasRuntimeList() const
		{
			return has_bits_.Reference().IsSet(0);
		}

		// Getters

		/**
		 * Get the field @c runtimeList.
		 */
		const OpProtobufMessageVector<OpScopeEcmascript_MessageSet::Runtime> & GetRuntimeList() const
		{
			return _runtimeList;
		}

		// Setters

		/**
		 * Set the field @c runtimeList.
		 */
		OpProtobufMessageVector<OpScopeEcmascript_MessageSet::Runtime> & GetRuntimeListRef();

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeEcmascript_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		OpProtobufMessageVector<OpScopeEcmascript_MessageSet::Runtime> _runtimeList;

		OpProtobufBitField<1> has_bits_;
		mutable int                 encoded_size_;
	};


	class ListRuntimesArg
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 2
		};
		// END: Internal enums


		ListRuntimesArg(
			)
			: _create(FALSE)
			, encoded_size_(-1)
		{
		}
		OP_STATUS Construct(
			)
		{
			return OpStatus::OK;
		}

		// Checkers
		/**
		 * Check if the field @c runtimeIDList is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasRuntimeIDList() const
		{
			return has_bits_.Reference().IsSet(0);
		}

		/**
		 * Check if the field @c create is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasCreate() const
		{
			return has_bits_.Reference().IsSet(1);
		}

		// Getters

		/**
		 * Get the field @c runtimeIDList.
		 * 
		 * If non-empty, only information about the specified runtime(s) will
		 * be received.
		 */
		const OpValueVector<UINT32> & GetRuntimeIDList() const
		{
			return _runtimeIDList;
		}

		/**
		 * Get the field @c create.
		 * 
		 * If true, runtimes will be created for documents which would otherwise
		 * not require them.
		 */
		BOOL GetCreate() const
		{
			return _create;
		}

		// Setters

		/**
		 * Set the field @c runtimeIDList.
		 * 
		 * If non-empty, only information about the specified runtime(s) will
		 * be received.
		 */
		OpValueVector<UINT32> & GetRuntimeIDListRef();

		/**
		 * Set the field @c runtimeIDList.
		 * 
		 * If non-empty, only information about the specified runtime(s) will
		 * be received.
		 */
		OP_STATUS AppendToRuntimeIDList(UINT32 v);

		/**
		 * Set the field @c create.
		 * 
		 * If true, runtimes will be created for documents which would otherwise
		 * not require them.
		 */
		void SetCreate(BOOL v)
		{
			has_bits_.Reference().SetBit(1);
			_create = v;
		}

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeEcmascript_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		OpValueVector<UINT32> _runtimeIDList;
		BOOL _create;

		OpProtobufBitField<2> has_bits_;
		mutable int                 encoded_size_;
	};



	// END: Message classes

};


class OpProtobufMessage;

// This class contains the descriptors of all messages in the given set
// When a message descriptor is first requested it is allocated and put in this structure,
// subsequent uses of the descriptor will just use the previously allocated object.
class OpScopeEcmascript_Descriptors
{
public:
	OpScopeEcmascript_Descriptors();
	~OpScopeEcmascript_Descriptors();

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
		_gen_MessageOffs_eval_arg_,
		_gen_MessageOffs_eval_result_,
		_gen_MessageOffs_examine_objects_arg_,
		_gen_MessageOffs_list_runtimes_arg_,
		_gen_MessageOffs_object_,
		_gen_MessageOffs_object_list_,
		_gen_MessageOffs_object_property_,
		_gen_MessageOffs_prototype_chain_,
		_gen_MessageOffs_ready_state_change_,
		_gen_MessageOffs_release_objects_arg_,
		_gen_MessageOffs_runtime_,
		_gen_MessageOffs_runtime_list_,
		_gen_MessageOffs_set_form_element_value_arg_,
		_gen_MessageOffs_value_,
		_gen_MessageOffs_eval_arg_variable_,

		// Message count is calculated at compile time
		_gen_Message_Count
	};

	// The IDs for all messages
	enum // message IDs
	{
		  _gen_void_MsgID // The Default/void message. Also ensures that all other IDs start at 1
		, _gen_MsgID_eval_arg_
		, _gen_MsgID_eval_result_
		, _gen_MsgID_examine_objects_arg_
		, _gen_MsgID_list_runtimes_arg_
		, _gen_MsgID_object_
		, _gen_MsgID_object_list_
		, _gen_MsgID_object_property_
		, _gen_MsgID_prototype_chain_
		, _gen_MsgID_ready_state_change_
		, _gen_MsgID_release_objects_arg_
		, _gen_MsgID_runtime_
		, _gen_MsgID_runtime_list_
		, _gen_MsgID_set_form_element_value_arg_
		, _gen_MsgID_value_
		, _gen_MsgID_eval_arg_variable_
	};
	enum // Enum IDs
	{
		Enum_void_ID_, // Dummy entry, ensures IDs starts at 1
		// Meta info for Status
		_gen_EnumID_EvalResult_Status,
		// Meta info for Type
		_gen_EnumID_Value_Type,
		// Meta info for ObjectType
		_gen_EnumID_Object_ObjectType,
		// Meta info for State
		_gen_EnumID_ReadyStateChange_State,

		_gen_dummy_EnumID // Only present to allow preceding entries to always end in a comma
	};

	enum // Enum values
	{
		// Meta info for Status
		_gen_EnumValueCount_EvalResult_Status = 5,
		// Meta info for Type
		_gen_EnumValueCount_Value_Type = 10,
		// Meta info for ObjectType
		_gen_EnumValueCount_Object_ObjectType = 2,
		// Meta info for State
		_gen_EnumValueCount_ReadyStateChange_State = 3,

		_gen_dummy_EnumValue // Only present to allow preceding entries to always end in a comma
	};
	enum // Enum names
	{
		// Meta info for Status
		_gen_Enum_EvalResult_Status,
		// Meta info for Type
		_gen_Enum_Value_Type,
		// Meta info for ObjectType
		_gen_Enum_Object_ObjectType,
		// Meta info for State
		_gen_Enum_ReadyStateChange_State,

		// Enum count is calculated at compile time
		_gen_Enum_Count
	};

	// List of message descriptors. They are initially NULL and assigned an object when the message is used.
	mutable OpProtobufMessage *message_list[_gen_Message_Count];

	// List of IDs for enums, assigned in Construct().
	unsigned enum_id_list[4];

};


class OpScopeEcmascript_SI
	: public OpScopeService
	, public OpScopeEcmascript_MessageSet
{
public:
	OpScopeEcmascript_SI(const uni_char* id = NULL, OpScopeServiceManager *manager = NULL, ControlType control = CONTROL_MANUAL);
	virtual ~OpScopeEcmascript_SI();

	enum CommandEnum
	{
		  Command_ListRuntimes = 1
		, Command_Eval = 2
		, Command_ExamineObjects = 3
		, Command_ReleaseObjects = 4
		, Command_OnReadyStateChanged = 5
		, Command_SetFormElementValue = 6

		, Command_Count = 6 // Number of commands in this service
	};
	// This class contains the descriptors or all commands of this service
	class Descriptors
	    : public OpScopeEcmascript_Descriptors
	{
	public:
		Descriptors();
		~Descriptors();

		OP_STATUS Construct();


		// List of commands
		OpScopeCommand command_list[Command_Count];
	};


// Service API implementation: BEGIN


	virtual OP_STATUS             DoReceive( OpScopeClient *client, const OpScopeTPMessage &msg );
	virtual int                   GetCommandCount() const;
	virtual CommandRange          GetCommands() const;

	virtual const OpProtobufMessage *GetMessage(unsigned int message_id) const;
	virtual unsigned                 GetMessageCount() const;
	virtual MessageIDRange           GetMessageIDs() const;
	virtual MessageRange             GetMessages() const;

	// Introspection of enums
	virtual EnumIDRange GetEnumIDs() const;
	virtual unsigned  GetEnumCount() const;
	virtual BOOL      HasEnum(unsigned enum_id) const;
	virtual OP_STATUS GetEnum(unsigned enum_id, const uni_char *&name, unsigned &value_count) const;
	virtual OP_STATUS GetEnumValue(unsigned enum_id, unsigned idx, const uni_char *&value_name, unsigned &value_number) const;

	virtual const char *GetVersionString() const;
	virtual int         GetMajorVersion() const;
	virtual int         GetMinorVersion() const;
	virtual const char *GetPatchVersion() const;

	// Request/Response functions
	virtual OP_STATUS DoListRuntimes(const ListRuntimesArg &in, RuntimeList &out) = 0;
	virtual OP_STATUS DoReleaseObjects(const ReleaseObjectsArg &in) = 0;
	virtual OP_STATUS DoSetFormElementValue(const SetFormElementValueArg &in) = 0;
	virtual OP_STATUS DoEval(const EvalArg &in, unsigned int async_tag) = 0;
	virtual OP_STATUS DoExamineObjects(const ExamineObjectsArg &in, unsigned int async_tag) = 0;

	// Event functions
	OP_STATUS SendOnReadyStateChanged(const ReadyStateChange &msg);
	OP_STATUS SendEval(const EvalResult &msg, unsigned int tag);
	OP_STATUS SendExamineObjects(const ObjectList &msg, unsigned int tag);


	Descriptors *GetDescriptors() const;



// Service API implementation: END

};




#endif // SCOPE_ECMASCRIPT

#endif // G_SCOPE_ECMASCRIPT_INTERFACE_H
