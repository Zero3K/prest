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

// Generated from ../../modules/scope/services/test_service/test_service.proto



#ifndef G_SCOPE_TEST_SERVICE_INTERFACE_H
#define G_SCOPE_TEST_SERVICE_INTERFACE_H

#if defined(SELFTEST) && defined(SCOPE_SUPPORT)

#include "modules/opdata/OpData.h"
#include "modules/protobuf/src/opvaluevector.h"
#include "modules/protobuf/src/protobuf_message.h"
#include "modules/protobuf/src/protobuf_vector.h"
#include "modules/scope/src/scope_service.h"
#include "modules/util/adt/bytebuffer.h"
#include "modules/util/adt/opvector.h"
#include "modules/util/opstring.h"
#include "modules/util/tempbuf.h"



#include "modules/protobuf/src/protobuf_utils.h"
#include "modules/protobuf/src/protobuf_message.h"

class OpScopeTPMessage;
class OpProtobufField;
class OpProtobufMessage;


class OtScopeTestService_Descriptors;

class OtScopeTestService_MessageSet
{
public:
	// BEGIN: ctor/dtor

	OtScopeTestService_MessageSet();
	virtual ~OtScopeTestService_MessageSet();

	// END: ctor/dtor
	// BEGIN: Enums

	enum EnumData_Type
	{
	    EnumData_Type_OP_TYPE_BOOL = 1,
	    EnumData_Type_OP_TYPE_NUMBER = 2,
	    EnumData_Type_OP_TYPE_OBJECT = 10
	};

	enum EnumData_Empty
	{
	};

	enum GlobalType
	{
	    GLOBALTYPE_Zero,
	    GLOBALTYPE_One = 1
	};

	// End: Enums

	// BEGIN: Message classes

	// Forward declarations
	class MessageSizeProblem_SubMessage_SameAddress_Other;
	class MessageSizeProblem_SubMessage_SameAddress_SubWithSameAddress;
	class MessageSizeProblem_SubMessage_SameAddress;
	class RepeatedData_Nested_MoreNested;
	class MessageSizeProblem_SubMessage;
	class RepeatedData_Nested;
	class Outer_Inner_Innermost;
	class MissingTrail_Inner;
	class OptionalSub_OptionalSubInner;
	class RepeatedSub_RepeatedSubInner;
	class Repeated_RepeatedInner;
	class Optional_OptionalInner;
	class InspectElementArg;
	class EnumData;
	class MessageSizeProblem;
	class MixedByteType;
	class MixedStringType;
	class RepeatedData;
	class GetRepeatedDataArg;
	class InData;
	class Outer_Inner;
	class Outer;
	class FloatMessage;
	class MissingTrail;
	class FloatAccess;
	class OptionalInteger;
	class RepeatedString;
	class IntAccess;
	class MissingInput;
	class OptionalSub;
	class RepeatedBinary;
	class IntegerMessage;
	class OnesAndZeroes;
	class OutData;
	class RepeatedInteger;
	class MissingInputSub;
	class RepeatedSub;
	class OutAdd;
	class StringMessage;
	class AsyncData;
	class AsyncArgs;
	class FormatErrorArg;
	class Repeated;
	class StringAccess;
	class BytesAccess;
	class Optional;
	class Event;
	class UnsignedIntegerMessage;
	class RepeatedFloat;
	class InAdd;

	class MessageSizeProblem_SubMessage_SameAddress_Other
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 1
		};
		// END: Internal enums


		MessageSizeProblem_SubMessage_SameAddress_Other(
			BOOL is_set_arg = FALSE
			)
			: _isSet(is_set_arg)
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
		 * Check if the field @c isSet is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasIsSet() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c isSet.
		 */
		BOOL GetIsSet() const
		{
			return _isSet;
		}

		// Setters

		/**
		 * Set the field @c isSet.
		 */
		void SetIsSet(BOOL v)
		{
			_isSet = v;
		}

		static const OpProtobufMessage *GetMessageDescriptor(OtScopeTestService_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		BOOL _isSet;

		OpProtobufBitField<1> has_bits_;
		mutable int                 encoded_size_;
	};


	class MessageSizeProblem_SubMessage_SameAddress_SubWithSameAddress
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 1
		};
		// END: Internal enums


		MessageSizeProblem_SubMessage_SameAddress_SubWithSameAddress(
			UINT32 some_value_arg = 0
			)
			: _someValue(some_value_arg)
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
		 * Check if the field @c someValue is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasSomeValue() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c someValue.
		 */
		UINT32 GetSomeValue() const
		{
			return _someValue;
		}

		// Setters

		/**
		 * Set the field @c someValue.
		 */
		void SetSomeValue(UINT32 v)
		{
			_someValue = v;
		}

		static const OpProtobufMessage *GetMessageDescriptor(OtScopeTestService_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		UINT32 _someValue;

		OpProtobufBitField<1> has_bits_;
		mutable int                 encoded_size_;
	};


	class MessageSizeProblem_SubMessage_SameAddress
	{
	public:
		// BEGIN: Nested items

		// Message MessageSizeProblem.SubMessage.SameAddress.SubWithSameAddress
		typedef MessageSizeProblem_SubMessage_SameAddress_SubWithSameAddress SubWithSameAddress;

		// Message MessageSizeProblem.SubMessage.SameAddress.Other
		typedef MessageSizeProblem_SubMessage_SameAddress_Other Other;

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 2
		};
		// END: Internal enums


		MessageSizeProblem_SubMessage_SameAddress(
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
		 * Check if the field @c firstMember is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasFirstMember() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c secondMemberList is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasSecondMemberList() const
		{
			return has_bits_.Reference().IsSet(1);
		}

		// Getters

		/**
		 * Get the field @c firstMember.
		 */
		const OtScopeTestService_MessageSet::MessageSizeProblem_SubMessage_SameAddress_SubWithSameAddress & GetFirstMember() const
		{
			return _firstMember;
		}

		/**
		 * Get the field @c secondMemberList.
		 */
		const OpProtobufMessageVector<OtScopeTestService_MessageSet::MessageSizeProblem_SubMessage_SameAddress_Other> & GetSecondMemberList() const
		{
			return _secondMemberList;
		}

		// Setters

		/**
		 * Set the field @c firstMember.
		 */
		OtScopeTestService_MessageSet::MessageSizeProblem_SubMessage_SameAddress_SubWithSameAddress & GetFirstMemberRef();

		/**
		 * Set the field @c secondMemberList.
		 */
		OpProtobufMessageVector<OtScopeTestService_MessageSet::MessageSizeProblem_SubMessage_SameAddress_Other> & GetSecondMemberListRef();

		/**
		 * Set the field @c secondMemberList.
		 */
		OtScopeTestService_MessageSet::MessageSizeProblem_SubMessage_SameAddress_Other * AppendNewSecondMemberList();

		/**
		 * Set the field @c secondMemberList.
		 */
		OtScopeTestService_MessageSet::MessageSizeProblem_SubMessage_SameAddress_Other * AppendNewSecondMemberList_L();

		/**
		 * Set the field @c secondMemberList.
		 */
		OP_STATUS AppendToSecondMemberList(OtScopeTestService_MessageSet::MessageSizeProblem_SubMessage_SameAddress_Other * v);

		static const OpProtobufMessage *GetMessageDescriptor(OtScopeTestService_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		OtScopeTestService_MessageSet::MessageSizeProblem_SubMessage_SameAddress_SubWithSameAddress _firstMember;
		OpProtobufMessageVector<OtScopeTestService_MessageSet::MessageSizeProblem_SubMessage_SameAddress_Other> _secondMemberList;

		OpProtobufBitField<2> has_bits_;
		mutable int                 encoded_size_;
	};


	class RepeatedData_Nested_MoreNested
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 4
		};
		// END: Internal enums


		RepeatedData_Nested_MoreNested(
			INT32 a_arg = 0,
			INT32 b_arg = 0,
			INT32 c_arg = 0,
			INT32 d_arg = 0
			)
			: _a(a_arg)
			, _b(b_arg)
			, _c(c_arg)
			, _d(d_arg)
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
		 * Check if the field @c a is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasA() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c b is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasB() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c c is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasC() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c d is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasD() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c a.
		 */
		INT32 GetA() const
		{
			return _a;
		}

		/**
		 * Get the field @c b.
		 */
		INT32 GetB() const
		{
			return _b;
		}

		/**
		 * Get the field @c c.
		 */
		INT32 GetC() const
		{
			return _c;
		}

		/**
		 * Get the field @c d.
		 */
		INT32 GetD() const
		{
			return _d;
		}

		// Setters

		/**
		 * Set the field @c a.
		 */
		void SetA(INT32 v)
		{
			_a = v;
		}

		/**
		 * Set the field @c b.
		 */
		void SetB(INT32 v)
		{
			_b = v;
		}

		/**
		 * Set the field @c c.
		 */
		void SetC(INT32 v)
		{
			_c = v;
		}

		/**
		 * Set the field @c d.
		 */
		void SetD(INT32 v)
		{
			_d = v;
		}

		static const OpProtobufMessage *GetMessageDescriptor(OtScopeTestService_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		INT32 _a;
		INT32 _b;
		INT32 _c;
		INT32 _d;

		OpProtobufBitField<4> has_bits_;
		mutable int                 encoded_size_;
	};


	class MessageSizeProblem_SubMessage
	{
	public:
		// BEGIN: Nested items

		// Message MessageSizeProblem.SubMessage.SameAddress
		typedef MessageSizeProblem_SubMessage_SameAddress SameAddress;

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 1
		};
		// END: Internal enums


		MessageSizeProblem_SubMessage(
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
		 * Check if the field @c sameAddressList is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasSameAddressList() const
		{
			return has_bits_.Reference().IsSet(0);
		}

		// Getters

		/**
		 * Get the field @c sameAddressList.
		 */
		const OpProtobufMessageVector<OtScopeTestService_MessageSet::MessageSizeProblem_SubMessage_SameAddress> & GetSameAddressList() const
		{
			return _sameAddressList;
		}

		// Setters

		/**
		 * Set the field @c sameAddressList.
		 */
		OpProtobufMessageVector<OtScopeTestService_MessageSet::MessageSizeProblem_SubMessage_SameAddress> & GetSameAddressListRef();

		/**
		 * Set the field @c sameAddressList.
		 */
		OtScopeTestService_MessageSet::MessageSizeProblem_SubMessage_SameAddress * AppendNewSameAddressList();

		/**
		 * Set the field @c sameAddressList.
		 */
		OtScopeTestService_MessageSet::MessageSizeProblem_SubMessage_SameAddress * AppendNewSameAddressList_L();

		/**
		 * Set the field @c sameAddressList.
		 */
		OP_STATUS AppendToSameAddressList(OtScopeTestService_MessageSet::MessageSizeProblem_SubMessage_SameAddress * v);

		static const OpProtobufMessage *GetMessageDescriptor(OtScopeTestService_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		OpProtobufMessageVector<OtScopeTestService_MessageSet::MessageSizeProblem_SubMessage_SameAddress> _sameAddressList;

		OpProtobufBitField<1> has_bits_;
		mutable int                 encoded_size_;
	};


	class RepeatedData_Nested
	{
	public:
		// BEGIN: Nested items

		// Message RepeatedData.Nested.MoreNested
		typedef RepeatedData_Nested_MoreNested MoreNested;

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 1
		};
		// END: Internal enums


		RepeatedData_Nested(
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
		 * Check if the field @c moreNestedList is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasMoreNestedList() const
		{
			return has_bits_.Reference().IsSet(0);
		}

		// Getters

		/**
		 * Get the field @c moreNestedList.
		 */
		const OpProtobufMessageVector<OtScopeTestService_MessageSet::RepeatedData_Nested_MoreNested> & GetMoreNestedList() const
		{
			return _moreNestedList;
		}

		// Setters

		/**
		 * Set the field @c moreNestedList.
		 */
		OpProtobufMessageVector<OtScopeTestService_MessageSet::RepeatedData_Nested_MoreNested> & GetMoreNestedListRef();

		/**
		 * Set the field @c moreNestedList.
		 */
		OtScopeTestService_MessageSet::RepeatedData_Nested_MoreNested * AppendNewMoreNestedList();

		/**
		 * Set the field @c moreNestedList.
		 */
		OtScopeTestService_MessageSet::RepeatedData_Nested_MoreNested * AppendNewMoreNestedList_L();

		/**
		 * Set the field @c moreNestedList.
		 */
		OP_STATUS AppendToMoreNestedList(OtScopeTestService_MessageSet::RepeatedData_Nested_MoreNested * v);

		static const OpProtobufMessage *GetMessageDescriptor(OtScopeTestService_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		OpProtobufMessageVector<OtScopeTestService_MessageSet::RepeatedData_Nested_MoreNested> _moreNestedList;

		OpProtobufBitField<1> has_bits_;
		mutable int                 encoded_size_;
	};


	class Outer_Inner_Innermost
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 1
		};
		// END: Internal enums


		Outer_Inner_Innermost(
			INT32 a_arg = 0
			)
			: _a(a_arg)
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
		 * Check if the field @c a is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasA() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c a.
		 */
		INT32 GetA() const
		{
			return _a;
		}

		// Setters

		/**
		 * Set the field @c a.
		 */
		void SetA(INT32 v)
		{
			_a = v;
		}

		static const OpProtobufMessage *GetMessageDescriptor(OtScopeTestService_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		INT32 _a;

		OpProtobufBitField<1> has_bits_;
		mutable int                 encoded_size_;
	};


	class MissingTrail_Inner
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 1
		};
		// END: Internal enums


		MissingTrail_Inner(
			)
			: encoded_size_(-1)
		{
		}
		OP_STATUS Construct(
			const OpString & a_arg
			)
		{
			RETURN_IF_ERROR(_a.Set(a_arg));
			return OpStatus::OK;
		}

		// Checkers
		/**
		 * Check if the field @c a is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasA() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c a.
		 */
		const OpString & GetA() const
		{
			return _a;
		}

		// Setters

		/**
		 * Set the field @c a.
		 */
		OpString & GetARef();

		/**
		 * Set the field @c a.
		 */
		OP_STATUS SetA(const OpString & v);

		/**
		 * Set the field @c a.
		 */
		OP_STATUS SetA(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c a.
		 */
		OP_STATUS SetA(const char * v, int l = KAll);

		static const OpProtobufMessage *GetMessageDescriptor(OtScopeTestService_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		OpString _a;

		OpProtobufBitField<1> has_bits_;
		mutable int                 encoded_size_;
	};


	class OptionalSub_OptionalSubInner
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 1
		};
		// END: Internal enums


		OptionalSub_OptionalSubInner(
			)
			: encoded_size_(-1)
		{
		}
		OP_STATUS Construct(
			const OpString & a_arg
			)
		{
			RETURN_IF_ERROR(_a.Set(a_arg));
			return OpStatus::OK;
		}

		// Checkers
		/**
		 * Check if the field @c a is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasA() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c a.
		 */
		const OpString & GetA() const
		{
			return _a;
		}

		// Setters

		/**
		 * Set the field @c a.
		 */
		OpString & GetARef();

		/**
		 * Set the field @c a.
		 */
		OP_STATUS SetA(const OpString & v);

		/**
		 * Set the field @c a.
		 */
		OP_STATUS SetA(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c a.
		 */
		OP_STATUS SetA(const char * v, int l = KAll);

		static const OpProtobufMessage *GetMessageDescriptor(OtScopeTestService_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		OpString _a;

		OpProtobufBitField<1> has_bits_;
		mutable int                 encoded_size_;
	};


	class RepeatedSub_RepeatedSubInner
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 1
		};
		// END: Internal enums


		RepeatedSub_RepeatedSubInner(
			INT32 value_arg = 0
			)
			: _value(value_arg)
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
		 * Check if the field @c value is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasValue() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c value.
		 */
		INT32 GetValue() const
		{
			return _value;
		}

		// Setters

		/**
		 * Set the field @c value.
		 */
		void SetValue(INT32 v)
		{
			_value = v;
		}

		static const OpProtobufMessage *GetMessageDescriptor(OtScopeTestService_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		INT32 _value;

		OpProtobufBitField<1> has_bits_;
		mutable int                 encoded_size_;
	};


	class Repeated_RepeatedInner
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 3
		};
		// END: Internal enums


		Repeated_RepeatedInner(
			)
			: _a(0)
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
		 * Check if the field @c a is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasA() const
		{
			return has_bits_.Reference().IsSet(0);
		}

		/**
		 * Check if the field @c bList is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasBList() const
		{
			return has_bits_.Reference().IsSet(1);
		}

		/**
		 * Check if the field @c cList is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasCList() const
		{
			return has_bits_.Reference().IsSet(2);
		}

		// Getters

		/**
		 * Get the field @c a.
		 */
		INT32 GetA() const
		{
			return _a;
		}

		/**
		 * Get the field @c bList.
		 */
		const OpAutoVector<OpString> & GetBList() const
		{
			return _bList;
		}

		/**
		 * Get the field @c cList.
		 */
		const OpAutoVector<ByteBuffer> & GetCList() const
		{
			return _cList;
		}

		// Setters

		/**
		 * Set the field @c a.
		 */
		void SetA(INT32 v)
		{
			has_bits_.Reference().SetBit(0);
			_a = v;
		}

		/**
		 * Set the field @c bList.
		 */
		OpAutoVector<OpString> & GetBListRef();

		/**
		 * Set the field @c bList.
		 */
		OP_STATUS AppendToBList(const OpString &v);

		/**
		 * Set the field @c bList.
		 */
		OP_STATUS AppendToBList(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c bList.
		 */
		OP_STATUS AppendToBList(const char * v, int l = KAll);

		/**
		 * Set the field @c bList.
		 */
		OpString * AppendNewBList();

		/**
		 * Set the field @c cList.
		 */
		OpAutoVector<ByteBuffer> & GetCListRef();

		/**
		 * Set the field @c cList.
		 */
		OP_STATUS AppendToCList(const ByteBuffer &v);

		/**
		 * Set the field @c cList.
		 */
		OP_STATUS AppendToCList(const char * v, int l);

		/**
		 * Set the field @c cList.
		 */
		ByteBuffer * AppendNewCList();

		static const OpProtobufMessage *GetMessageDescriptor(OtScopeTestService_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		INT32 _a;
		OpAutoVector<OpString> _bList;
		OpAutoVector<ByteBuffer> _cList;

		OpProtobufBitField<3> has_bits_;
		mutable int                 encoded_size_;
	};


	class Optional_OptionalInner
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 1
		};
		// END: Internal enums


		Optional_OptionalInner(
			)
			: encoded_size_(-1)
		{
		}
		OP_STATUS Construct(
			const OpString & a_arg
			)
		{
			RETURN_IF_ERROR(_a.Set(a_arg));
			return OpStatus::OK;
		}

		// Checkers
		/**
		 * Check if the field @c a is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasA() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c a.
		 */
		const OpString & GetA() const
		{
			return _a;
		}

		// Setters

		/**
		 * Set the field @c a.
		 */
		OpString & GetARef();

		/**
		 * Set the field @c a.
		 */
		OP_STATUS SetA(const OpString & v);

		/**
		 * Set the field @c a.
		 */
		OP_STATUS SetA(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c a.
		 */
		OP_STATUS SetA(const char * v, int l = KAll);

		static const OpProtobufMessage *GetMessageDescriptor(OtScopeTestService_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		OpString _a;

		OpProtobufBitField<1> has_bits_;
		mutable int                 encoded_size_;
	};


	/**
	 * @since 1.4
	 */
	class InspectElementArg
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 2
		};
		// END: Internal enums


		InspectElementArg(
			UINT32 window_id_arg = 0
			)
			: _windowID(window_id_arg)
			, encoded_size_(-1)
		{
		}
		OP_STATUS Construct(
			const OpString & selector_arg
			)
		{
			RETURN_IF_ERROR(_selector.Set(selector_arg));
			return OpStatus::OK;
		}

		// Checkers
		/**
		 * Check if the field @c windowID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasWindowID() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c selector is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasSelector() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c windowID.
		 */
		UINT32 GetWindowID() const
		{
			return _windowID;
		}

		/**
		 * Get the field @c selector.
		 */
		const OpString & GetSelector() const
		{
			return _selector;
		}

		// Setters

		/**
		 * Set the field @c windowID.
		 */
		void SetWindowID(UINT32 v)
		{
			_windowID = v;
		}

		/**
		 * Set the field @c selector.
		 */
		OpString & GetSelectorRef();

		/**
		 * Set the field @c selector.
		 */
		OP_STATUS SetSelector(const OpString & v);

		/**
		 * Set the field @c selector.
		 */
		OP_STATUS SetSelector(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c selector.
		 */
		OP_STATUS SetSelector(const char * v, int l = KAll);

		static const OpProtobufMessage *GetMessageDescriptor(OtScopeTestService_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		UINT32 _windowID;
		OpString _selector;

		OpProtobufBitField<2> has_bits_;
		mutable int                 encoded_size_;
	};


	/**
	 * @since 1.1
	 */
	class EnumData
	{
	public:
		// BEGIN: Nested items

		// Enum EnumData.Type
		typedef EnumData_Type Type;
		static const EnumData_Type OP_TYPE_BOOL = EnumData_Type_OP_TYPE_BOOL;
		static const EnumData_Type OP_TYPE_NUMBER = EnumData_Type_OP_TYPE_NUMBER;
		static const EnumData_Type OP_TYPE_OBJECT = EnumData_Type_OP_TYPE_OBJECT;

		// Enum EnumData.Empty
		typedef EnumData_Empty Empty;

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 2
		};
		// END: Internal enums


		EnumData(
			)
			: _type(EnumData_Type_OP_TYPE_BOOL)
			, encoded_size_(-1)
		{
		}
		EnumData(
			EnumData_Empty empty_arg,
			EnumData_Type type_arg = EnumData_Type_OP_TYPE_BOOL
			)
			: _type(type_arg)
			, _empty(empty_arg)
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
		 * Check if the field @c type is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasType() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c empty is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasEmpty() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c type.
		 */
		OtScopeTestService_MessageSet::EnumData_Type GetType() const
		{
			return static_cast<OtScopeTestService_MessageSet::EnumData_Type>(_type);
		}

		/**
		 * Get the field @c empty.
		 */
		OtScopeTestService_MessageSet::EnumData_Empty GetEmpty() const
		{
			return static_cast<OtScopeTestService_MessageSet::EnumData_Empty>(_empty);
		}

		// Setters

		/**
		 * Set the field @c type.
		 */
		void SetType(OtScopeTestService_MessageSet::EnumData_Type v);

		/**
		 * Set the field @c empty.
		 */
		void SetEmpty(OtScopeTestService_MessageSet::EnumData_Empty v);

		static const OpProtobufMessage *GetMessageDescriptor(OtScopeTestService_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		INT32 _type;
		INT32 _empty;

		OpProtobufBitField<2> has_bits_;
		mutable int                 encoded_size_;
	};


	class MessageSizeProblem
	{
	public:
		// BEGIN: Nested items

		// Message MessageSizeProblem.SubMessage
		typedef MessageSizeProblem_SubMessage SubMessage;

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 1
		};
		// END: Internal enums


		MessageSizeProblem(
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
		 * Check if the field @c subMessageList is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasSubMessageList() const
		{
			return has_bits_.Reference().IsSet(0);
		}

		// Getters

		/**
		 * Get the field @c subMessageList.
		 */
		const OpProtobufMessageVector<OtScopeTestService_MessageSet::MessageSizeProblem_SubMessage> & GetSubMessageList() const
		{
			return _subMessageList;
		}

		// Setters

		/**
		 * Set the field @c subMessageList.
		 */
		OpProtobufMessageVector<OtScopeTestService_MessageSet::MessageSizeProblem_SubMessage> & GetSubMessageListRef();

		/**
		 * Set the field @c subMessageList.
		 */
		OtScopeTestService_MessageSet::MessageSizeProblem_SubMessage * AppendNewSubMessageList();

		/**
		 * Set the field @c subMessageList.
		 */
		OtScopeTestService_MessageSet::MessageSizeProblem_SubMessage * AppendNewSubMessageList_L();

		/**
		 * Set the field @c subMessageList.
		 */
		OP_STATUS AppendToSubMessageList(OtScopeTestService_MessageSet::MessageSizeProblem_SubMessage * v);

		static const OpProtobufMessage *GetMessageDescriptor(OtScopeTestService_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		OpProtobufMessageVector<OtScopeTestService_MessageSet::MessageSizeProblem_SubMessage> _subMessageList;

		OpProtobufBitField<1> has_bits_;
		mutable int                 encoded_size_;
	};


	class MixedByteType
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 6
		};
		// END: Internal enums


		MixedByteType(
			const OpData & type2_arg = OpData(),
			const OpData * type4_arg = NULL
			)
			: _type2(type2_arg)
			, encoded_size_(-1)
		{
			if (type4_arg)
			{
				_type4 = *type4_arg;
				has_bits_.Reference().SetBit(3);

			}
		}
		OP_STATUS Construct(
			const ByteBuffer & type1_arg,
			const ByteBuffer * type3_arg = NULL
			)
		{
			RETURN_IF_ERROR(OpProtobufAppend(_type1, type1_arg));
			if (type3_arg)
			{
				RETURN_IF_ERROR(OpProtobufAppend(_type3, *type3_arg));
				has_bits_.Reference().SetBit(2);

			}
			return OpStatus::OK;
		}

		// Checkers
		/**
		 * Check if the field @c type1 is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasType1() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c type2 is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasType2() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c type3 is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasType3() const
		{
			return has_bits_.Reference().IsSet(2);
		}

		/**
		 * Check if the field @c type4 is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasType4() const
		{
			return has_bits_.Reference().IsSet(3);
		}

		/**
		 * Check if the field @c type5List is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasType5List() const
		{
			return has_bits_.Reference().IsSet(4);
		}

		/**
		 * Check if the field @c type6List is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasType6List() const
		{
			return has_bits_.Reference().IsSet(5);
		}

		// Getters

		/**
		 * Get the field @c type1.
		 */
		const ByteBuffer & GetType1() const
		{
			return _type1;
		}

		/**
		 * Get the field @c type2.
		 */
		const OpData & GetType2() const
		{
			return _type2;
		}

		/**
		 * Get the field @c type3.
		 */
		const ByteBuffer & GetType3() const
		{
			return _type3;
		}

		/**
		 * Get the field @c type4.
		 */
		const OpData & GetType4() const
		{
			return _type4;
		}

		/**
		 * Get the field @c type5List.
		 */
		const OpAutoVector<ByteBuffer> & GetType5List() const
		{
			return _type5List;
		}

		/**
		 * Get the field @c type6List.
		 */
		const OpProtobufValueVector<OpData> & GetType6List() const
		{
			return _type6List;
		}

		// Setters

		/**
		 * Set the field @c type1.
		 */
		ByteBuffer & GetType1Ref();

		/**
		 * Set the field @c type1.
		 */
		OP_STATUS SetType1(const ByteBuffer & v);

		/**
		 * Set the field @c type1.
		 */
		OP_STATUS SetType1(const char * v, int l);

		/**
		 * Set the field @c type2.
		 */
		OpData & GetType2Ref();

		/**
		 * Set the field @c type2.
		 */
		OP_STATUS SetType2(const OpData & v);

		/**
		 * Set the field @c type2.
		 */
		OP_STATUS SetType2(const char * v, int l);

		/**
		 * Set the field @c type3.
		 */
		ByteBuffer & GetType3Ref();

		/**
		 * Set the field @c type3.
		 */
		OP_STATUS SetType3(const ByteBuffer & v);

		/**
		 * Set the field @c type3.
		 */
		OP_STATUS SetType3(const char * v, int l);

		/**
		 * Set the field @c type4.
		 */
		OpData & GetType4Ref();

		/**
		 * Set the field @c type4.
		 */
		OP_STATUS SetType4(const OpData & v);

		/**
		 * Set the field @c type4.
		 */
		OP_STATUS SetType4(const char * v, int l);

		/**
		 * Set the field @c type5List.
		 */
		OpAutoVector<ByteBuffer> & GetType5ListRef();

		/**
		 * Set the field @c type5List.
		 */
		OP_STATUS AppendToType5List(const ByteBuffer &v);

		/**
		 * Set the field @c type5List.
		 */
		OP_STATUS AppendToType5List(const char * v, int l);

		/**
		 * Set the field @c type5List.
		 */
		ByteBuffer * AppendNewType5List();

		/**
		 * Set the field @c type6List.
		 */
		OpProtobufValueVector<OpData> & GetType6ListRef();

		/**
		 * Set the field @c type6List.
		 */
		OP_STATUS AppendToType6List(const OpData &v);

		/**
		 * Set the field @c type6List.
		 */
		OP_STATUS AppendToType6List(const char * v, int l);

		static const OpProtobufMessage *GetMessageDescriptor(OtScopeTestService_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		ByteBuffer _type1;
		OpData _type2;
		ByteBuffer _type3;
		OpData _type4;
		OpAutoVector<ByteBuffer> _type5List;
		OpProtobufValueVector<OpData> _type6List;

		OpProtobufBitField<6> has_bits_;
		mutable int                 encoded_size_;
	};


	class MixedStringType
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 6
		};
		// END: Internal enums


		MixedStringType(
			)
			: encoded_size_(-1)
		{
		}
		OP_STATUS Construct(
			const OpString & type1_arg,
			const TempBuffer & type2_arg,
			const OpString * type3_arg = NULL,
			const TempBuffer * type4_arg = NULL
			)
		{
			RETURN_IF_ERROR(_type1.Set(type1_arg));
			_type2.Clear();
			RETURN_IF_ERROR(_type2.Append(type2_arg.GetStorage(), type2_arg.Length()));
			if (type3_arg)
			{
				RETURN_IF_ERROR(_type3.Set(*type3_arg));
				has_bits_.Reference().SetBit(2);

			}
			if (type4_arg)
			{
				_type4.Clear();
				RETURN_IF_ERROR(_type4.Append(type4_arg->GetStorage(), type4_arg->Length()));
				has_bits_.Reference().SetBit(3);

			}
			return OpStatus::OK;
		}

		// Checkers
		/**
		 * Check if the field @c type1 is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasType1() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c type2 is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasType2() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c type3 is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasType3() const
		{
			return has_bits_.Reference().IsSet(2);
		}

		/**
		 * Check if the field @c type4 is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasType4() const
		{
			return has_bits_.Reference().IsSet(3);
		}

		/**
		 * Check if the field @c type5List is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasType5List() const
		{
			return has_bits_.Reference().IsSet(4);
		}

		/**
		 * Check if the field @c type6List is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasType6List() const
		{
			return has_bits_.Reference().IsSet(5);
		}

		// Getters

		/**
		 * Get the field @c type1.
		 */
		const OpString & GetType1() const
		{
			return _type1;
		}

		/**
		 * Get the field @c type2.
		 */
		const TempBuffer & GetType2() const
		{
			return _type2;
		}

		/**
		 * Get the field @c type3.
		 */
		const OpString & GetType3() const
		{
			return _type3;
		}

		/**
		 * Get the field @c type4.
		 */
		const TempBuffer & GetType4() const
		{
			return _type4;
		}

		/**
		 * Get the field @c type5List.
		 */
		const OpAutoVector<OpString> & GetType5List() const
		{
			return _type5List;
		}

		/**
		 * Get the field @c type6List.
		 */
		const OpAutoVector<TempBuffer> & GetType6List() const
		{
			return _type6List;
		}

		// Setters

		/**
		 * Set the field @c type1.
		 */
		OpString & GetType1Ref();

		/**
		 * Set the field @c type1.
		 */
		OP_STATUS SetType1(const OpString & v);

		/**
		 * Set the field @c type1.
		 */
		OP_STATUS SetType1(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c type1.
		 */
		OP_STATUS SetType1(const char * v, int l = KAll);

		/**
		 * Set the field @c type2.
		 */
		TempBuffer & GetType2Ref();

		/**
		 * Set the field @c type2.
		 */
		OP_STATUS SetType2(const TempBuffer & v);

		/**
		 * Set the field @c type2.
		 */
		OP_STATUS SetType2(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c type2.
		 */
		OP_STATUS SetType2(const char * v, int l = KAll);

		/**
		 * Set the field @c type3.
		 */
		OpString & GetType3Ref();

		/**
		 * Set the field @c type3.
		 */
		OP_STATUS SetType3(const OpString & v);

		/**
		 * Set the field @c type3.
		 */
		OP_STATUS SetType3(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c type3.
		 */
		OP_STATUS SetType3(const char * v, int l = KAll);

		/**
		 * Set the field @c type4.
		 */
		TempBuffer & GetType4Ref();

		/**
		 * Set the field @c type4.
		 */
		OP_STATUS SetType4(const TempBuffer & v);

		/**
		 * Set the field @c type4.
		 */
		OP_STATUS SetType4(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c type4.
		 */
		OP_STATUS SetType4(const char * v, int l = KAll);

		/**
		 * Set the field @c type5List.
		 */
		OpAutoVector<OpString> & GetType5ListRef();

		/**
		 * Set the field @c type5List.
		 */
		OP_STATUS AppendToType5List(const OpString &v);

		/**
		 * Set the field @c type5List.
		 */
		OP_STATUS AppendToType5List(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c type5List.
		 */
		OP_STATUS AppendToType5List(const char * v, int l = KAll);

		/**
		 * Set the field @c type5List.
		 */
		OpString * AppendNewType5List();

		/**
		 * Set the field @c type6List.
		 */
		OpAutoVector<TempBuffer> & GetType6ListRef();

		/**
		 * Set the field @c type6List.
		 */
		OP_STATUS AppendToType6List(const TempBuffer &v);

		/**
		 * Set the field @c type6List.
		 */
		OP_STATUS AppendToType6List(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c type6List.
		 */
		OP_STATUS AppendToType6List(const char * v, int l = KAll);

		/**
		 * Set the field @c type6List.
		 */
		TempBuffer * AppendNewType6List();

		static const OpProtobufMessage *GetMessageDescriptor(OtScopeTestService_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		OpString _type1;
		TempBuffer _type2;
		OpString _type3;
		TempBuffer _type4;
		OpAutoVector<OpString> _type5List;
		OpAutoVector<TempBuffer> _type6List;

		OpProtobufBitField<6> has_bits_;
		mutable int                 encoded_size_;
	};


	class RepeatedData
	{
	public:
		// BEGIN: Nested items

		// Message RepeatedData.Nested
		typedef RepeatedData_Nested Nested;

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 4
		};
		// END: Internal enums


		RepeatedData(
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
		 * Check if the field @c integerList is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasIntegerList() const
		{
			return has_bits_.Reference().IsSet(0);
		}

		/**
		 * Check if the field @c booleanList is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasBooleanList() const
		{
			return has_bits_.Reference().IsSet(1);
		}

		/**
		 * Check if the field @c stringList is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasStringList() const
		{
			return has_bits_.Reference().IsSet(2);
		}

		/**
		 * Check if the field @c nestedList is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasNestedList() const
		{
			return has_bits_.Reference().IsSet(3);
		}

		// Getters

		/**
		 * Get the field @c integerList.
		 */
		const OpValueVector<UINT32> & GetIntegerList() const
		{
			return _integerList;
		}

		/**
		 * Get the field @c booleanList.
		 */
		const OpINT32Vector & GetBooleanList() const
		{
			return _booleanList;
		}

		/**
		 * Get the field @c stringList.
		 */
		const OpAutoVector<OpString> & GetStringList() const
		{
			return _stringList;
		}

		/**
		 * Get the field @c nestedList.
		 */
		const OpProtobufMessageVector<OtScopeTestService_MessageSet::RepeatedData_Nested> & GetNestedList() const
		{
			return _nestedList;
		}

		// Setters

		/**
		 * Set the field @c integerList.
		 */
		OpValueVector<UINT32> & GetIntegerListRef();

		/**
		 * Set the field @c integerList.
		 */
		OP_STATUS AppendToIntegerList(UINT32 v);

		/**
		 * Set the field @c booleanList.
		 */
		OpINT32Vector & GetBooleanListRef();

		/**
		 * Set the field @c booleanList.
		 */
		OP_STATUS AppendToBooleanList(BOOL v);

		/**
		 * Set the field @c stringList.
		 */
		OpAutoVector<OpString> & GetStringListRef();

		/**
		 * Set the field @c stringList.
		 */
		OP_STATUS AppendToStringList(const OpString &v);

		/**
		 * Set the field @c stringList.
		 */
		OP_STATUS AppendToStringList(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c stringList.
		 */
		OP_STATUS AppendToStringList(const char * v, int l = KAll);

		/**
		 * Set the field @c stringList.
		 */
		OpString * AppendNewStringList();

		/**
		 * Set the field @c nestedList.
		 */
		OpProtobufMessageVector<OtScopeTestService_MessageSet::RepeatedData_Nested> & GetNestedListRef();

		/**
		 * Set the field @c nestedList.
		 */
		OtScopeTestService_MessageSet::RepeatedData_Nested * AppendNewNestedList();

		/**
		 * Set the field @c nestedList.
		 */
		OtScopeTestService_MessageSet::RepeatedData_Nested * AppendNewNestedList_L();

		/**
		 * Set the field @c nestedList.
		 */
		OP_STATUS AppendToNestedList(OtScopeTestService_MessageSet::RepeatedData_Nested * v);

		static const OpProtobufMessage *GetMessageDescriptor(OtScopeTestService_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		OpValueVector<UINT32> _integerList;
		OpINT32Vector _booleanList;
		OpAutoVector<OpString> _stringList;
		OpProtobufMessageVector<OtScopeTestService_MessageSet::RepeatedData_Nested> _nestedList;

		OpProtobufBitField<4> has_bits_;
		mutable int                 encoded_size_;
	};


	class GetRepeatedDataArg
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 4
		};
		// END: Internal enums


		GetRepeatedDataArg(
			UINT32 integers_arg = 0,
			UINT32 booleans_arg = 0,
			UINT32 strings_arg = 0,
			UINT32 nested_arg = 0
			)
			: _integers(integers_arg)
			, _booleans(booleans_arg)
			, _strings(strings_arg)
			, _nested(nested_arg)
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
		 * Check if the field @c integers is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasIntegers() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c booleans is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasBooleans() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c strings is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasStrings() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c nested is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasNested() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c integers.
		 * 
		 * How many integers to send back.
		 */
		UINT32 GetIntegers() const
		{
			return _integers;
		}

		/**
		 * Get the field @c booleans.
		 * 
		 * How many booleans to send back.
		 */
		UINT32 GetBooleans() const
		{
			return _booleans;
		}

		/**
		 * Get the field @c strings.
		 * 
		 * How many strings to send back.
		 */
		UINT32 GetStrings() const
		{
			return _strings;
		}

		/**
		 * Get the field @c nested.
		 * 
		 * How many Nested messages to send back. Each Nested
		 * also has a list of MoreNested messages. In each of
		 * the 'n' Nested messages, there will be 'n' MoreNested
		 * messages.
		 */
		UINT32 GetNested() const
		{
			return _nested;
		}

		// Setters

		/**
		 * Set the field @c integers.
		 * 
		 * How many integers to send back.
		 */
		void SetIntegers(UINT32 v)
		{
			_integers = v;
		}

		/**
		 * Set the field @c booleans.
		 * 
		 * How many booleans to send back.
		 */
		void SetBooleans(UINT32 v)
		{
			_booleans = v;
		}

		/**
		 * Set the field @c strings.
		 * 
		 * How many strings to send back.
		 */
		void SetStrings(UINT32 v)
		{
			_strings = v;
		}

		/**
		 * Set the field @c nested.
		 * 
		 * How many Nested messages to send back. Each Nested
		 * also has a list of MoreNested messages. In each of
		 * the 'n' Nested messages, there will be 'n' MoreNested
		 * messages.
		 */
		void SetNested(UINT32 v)
		{
			_nested = v;
		}

		static const OpProtobufMessage *GetMessageDescriptor(OtScopeTestService_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		UINT32 _integers;
		UINT32 _booleans;
		UINT32 _strings;
		UINT32 _nested;

		OpProtobufBitField<4> has_bits_;
		mutable int                 encoded_size_;
	};


	class InData
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 2
		};
		// END: Internal enums


		InData(
			UINT32 runtime_id_arg = 0
			)
			: _runtimeID(runtime_id_arg)
			, encoded_size_(-1)
		{
		}
		OP_STATUS Construct(
			const OpString & title_arg
			)
		{
			RETURN_IF_ERROR(_title.Set(title_arg));
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
		 * Check if the field @c title is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasTitle() const
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
		 * Get the field @c title.
		 */
		const OpString & GetTitle() const
		{
			return _title;
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
		 * Set the field @c title.
		 */
		OpString & GetTitleRef();

		/**
		 * Set the field @c title.
		 */
		OP_STATUS SetTitle(const OpString & v);

		/**
		 * Set the field @c title.
		 */
		OP_STATUS SetTitle(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c title.
		 */
		OP_STATUS SetTitle(const char * v, int l = KAll);

		static const OpProtobufMessage *GetMessageDescriptor(OtScopeTestService_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		UINT32 _runtimeID;
		OpString _title;

		OpProtobufBitField<2> has_bits_;
		mutable int                 encoded_size_;
	};


	class Outer_Inner
	{
	public:
		// BEGIN: Nested items

		// Message Outer.Inner.Innermost
		typedef Outer_Inner_Innermost Innermost;

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 4
		};
		// END: Internal enums


		Outer_Inner(
			INT32 a_arg = 0
			)
			: _a(a_arg)
			, encoded_size_(-1)
		{
		}
		OP_STATUS Construct(
			const OpString & b_arg,
			const ByteBuffer & d_arg
			)
		{
			RETURN_IF_ERROR(_b.Set(b_arg));
			RETURN_IF_ERROR(OpProtobufAppend(_d, d_arg));
			return OpStatus::OK;
		}

		// Checkers
		/**
		 * Check if the field @c a is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasA() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c b is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasB() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c c is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasC() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c d is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasD() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c a.
		 */
		INT32 GetA() const
		{
			return _a;
		}

		/**
		 * Get the field @c b.
		 */
		const OpString & GetB() const
		{
			return _b;
		}

		/**
		 * Get the field @c c.
		 */
		const OtScopeTestService_MessageSet::Outer_Inner_Innermost & GetC() const
		{
			return _c;
		}

		/**
		 * Get the field @c d.
		 */
		const ByteBuffer & GetD() const
		{
			return _d;
		}

		// Setters

		/**
		 * Set the field @c a.
		 */
		void SetA(INT32 v)
		{
			_a = v;
		}

		/**
		 * Set the field @c b.
		 */
		OpString & GetBRef();

		/**
		 * Set the field @c b.
		 */
		OP_STATUS SetB(const OpString & v);

		/**
		 * Set the field @c b.
		 */
		OP_STATUS SetB(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c b.
		 */
		OP_STATUS SetB(const char * v, int l = KAll);

		/**
		 * Set the field @c c.
		 */
		OtScopeTestService_MessageSet::Outer_Inner_Innermost & GetCRef();

		/**
		 * Set the field @c d.
		 */
		ByteBuffer & GetDRef();

		/**
		 * Set the field @c d.
		 */
		OP_STATUS SetD(const ByteBuffer & v);

		/**
		 * Set the field @c d.
		 */
		OP_STATUS SetD(const char * v, int l);

		static const OpProtobufMessage *GetMessageDescriptor(OtScopeTestService_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		INT32 _a;
		OpString _b;
		OtScopeTestService_MessageSet::Outer_Inner_Innermost _c;
		ByteBuffer _d;

		OpProtobufBitField<4> has_bits_;
		mutable int                 encoded_size_;
	};


	class Outer
	{
	public:
		// BEGIN: Nested items

		// Message Outer.Inner
		typedef Outer_Inner Inner;

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 3
		};
		// END: Internal enums


		Outer(
			INT32 a_arg = 0
			)
			: _a(a_arg)
			, encoded_size_(-1)
		{
		}
		OP_STATUS Construct(
			const OpString & b_arg
			)
		{
			RETURN_IF_ERROR(_b.Set(b_arg));
			return OpStatus::OK;
		}

		// Checkers
		/**
		 * Check if the field @c a is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasA() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c b is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasB() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c c is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasC() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c a.
		 */
		INT32 GetA() const
		{
			return _a;
		}

		/**
		 * Get the field @c b.
		 */
		const OpString & GetB() const
		{
			return _b;
		}

		/**
		 * Get the field @c c.
		 */
		const OtScopeTestService_MessageSet::Outer_Inner & GetC() const
		{
			return _c;
		}

		// Setters

		/**
		 * Set the field @c a.
		 */
		void SetA(INT32 v)
		{
			_a = v;
		}

		/**
		 * Set the field @c b.
		 */
		OpString & GetBRef();

		/**
		 * Set the field @c b.
		 */
		OP_STATUS SetB(const OpString & v);

		/**
		 * Set the field @c b.
		 */
		OP_STATUS SetB(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c b.
		 */
		OP_STATUS SetB(const char * v, int l = KAll);

		/**
		 * Set the field @c c.
		 */
		OtScopeTestService_MessageSet::Outer_Inner & GetCRef();

		static const OpProtobufMessage *GetMessageDescriptor(OtScopeTestService_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		INT32 _a;
		OpString _b;
		OtScopeTestService_MessageSet::Outer_Inner _c;

		OpProtobufBitField<3> has_bits_;
		mutable int                 encoded_size_;
	};


	class FloatMessage
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 4
		};
		// END: Internal enums


		FloatMessage(
			float fuzzy_arg = 0.0f,
			double pi_arg = 0.0,
			double sqr_arg = 0.0,
			double sci_arg = 0.0
			)
			: _fuzzy(fuzzy_arg)
			, _pi(pi_arg)
			, _sqr(sqr_arg)
			, _sci(sci_arg)
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
		 * Check if the field @c fuzzy is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasFuzzy() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c pi is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasPi() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c sqr is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasSqr() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c sci is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasSci() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c fuzzy.
		 */
		float GetFuzzy() const
		{
			return _fuzzy;
		}

		/**
		 * Get the field @c pi.
		 */
		double GetPi() const
		{
			return _pi;
		}

		/**
		 * Get the field @c sqr.
		 */
		double GetSqr() const
		{
			return _sqr;
		}

		/**
		 * Get the field @c sci.
		 */
		double GetSci() const
		{
			return _sci;
		}

		// Setters

		/**
		 * Set the field @c fuzzy.
		 */
		void SetFuzzy(float v)
		{
			_fuzzy = v;
		}

		/**
		 * Set the field @c pi.
		 */
		void SetPi(double v)
		{
			_pi = v;
		}

		/**
		 * Set the field @c sqr.
		 */
		void SetSqr(double v)
		{
			_sqr = v;
		}

		/**
		 * Set the field @c sci.
		 */
		void SetSci(double v)
		{
			_sci = v;
		}

		static const OpProtobufMessage *GetMessageDescriptor(OtScopeTestService_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		float _fuzzy;
		double _pi;
		double _sqr;
		double _sci;

		OpProtobufBitField<4> has_bits_;
		mutable int                 encoded_size_;
	};


	class MissingTrail
	{
	public:
		// BEGIN: Nested items

		// Message MissingTrail.Inner
		typedef MissingTrail_Inner Inner;

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 8
		};
		// END: Internal enums


		MissingTrail(
			)
			: _a(0)
			, _d(NULL)
			, encoded_size_(-1)
		{
		}
		OP_STATUS Construct(
			const OpString * b_arg = NULL,
			const ByteBuffer * c_arg = NULL
			)
		{
			if (b_arg)
			{
				RETURN_IF_ERROR(_b.Set(*b_arg));
				has_bits_.Reference().SetBit(1);

			}
			if (c_arg)
			{
				RETURN_IF_ERROR(OpProtobufAppend(_c, *c_arg));
				has_bits_.Reference().SetBit(2);

			}
			return OpStatus::OK;
		}
		~MissingTrail()
		{
			OP_DELETE(_d);
		}

		// Checkers
		/**
		 * Check if the field @c a is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasA() const
		{
			return has_bits_.Reference().IsSet(0);
		}

		/**
		 * Check if the field @c b is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasB() const
		{
			return has_bits_.Reference().IsSet(1);
		}

		/**
		 * Check if the field @c c is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasC() const
		{
			return has_bits_.Reference().IsSet(2);
		}

		/**
		 * Check if the field @c d is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasD() const
		{
			return has_bits_.Reference().IsSet(3);
		}

		/**
		 * Check if the field @c eList is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasEList() const
		{
			return has_bits_.Reference().IsSet(4);
		}

		/**
		 * Check if the field @c fList is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasFList() const
		{
			return has_bits_.Reference().IsSet(5);
		}

		/**
		 * Check if the field @c gList is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasGList() const
		{
			return has_bits_.Reference().IsSet(6);
		}

		/**
		 * Check if the field @c hList is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasHList() const
		{
			return has_bits_.Reference().IsSet(7);
		}

		// Getters

		/**
		 * Get the field @c a.
		 */
		INT32 GetA() const
		{
			return _a;
		}

		/**
		 * Get the field @c b.
		 */
		const OpString & GetB() const
		{
			return _b;
		}

		/**
		 * Get the field @c c.
		 */
		const ByteBuffer & GetC() const
		{
			return _c;
		}

		/**
		 * Get the field @c d.
		 */
		OtScopeTestService_MessageSet::MissingTrail_Inner * GetD() const
		{
			return _d;
		}

		/**
		 * Get the field @c eList.
		 */
		const OpValueVector<INT32> & GetEList() const
		{
			return _eList;
		}

		/**
		 * Get the field @c fList.
		 */
		const OpAutoVector<OpString> & GetFList() const
		{
			return _fList;
		}

		/**
		 * Get the field @c gList.
		 */
		const OpAutoVector<ByteBuffer> & GetGList() const
		{
			return _gList;
		}

		/**
		 * Get the field @c hList.
		 */
		const OpProtobufMessageVector<OtScopeTestService_MessageSet::MissingTrail_Inner> & GetHList() const
		{
			return _hList;
		}

		// Setters

		/**
		 * Set the field @c a.
		 */
		void SetA(INT32 v)
		{
			has_bits_.Reference().SetBit(0);
			_a = v;
		}

		/**
		 * Set the field @c b.
		 */
		OpString & GetBRef();

		/**
		 * Set the field @c b.
		 */
		OP_STATUS SetB(const OpString & v);

		/**
		 * Set the field @c b.
		 */
		OP_STATUS SetB(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c b.
		 */
		OP_STATUS SetB(const char * v, int l = KAll);

		/**
		 * Set the field @c c.
		 */
		ByteBuffer & GetCRef();

		/**
		 * Set the field @c c.
		 */
		OP_STATUS SetC(const ByteBuffer & v);

		/**
		 * Set the field @c c.
		 */
		OP_STATUS SetC(const char * v, int l);

		/**
		 * Set the field @c d.
		 */
		void SetD(OtScopeTestService_MessageSet::MissingTrail_Inner * v);

		/**
		 * Set the field @c d.
		 */
		OtScopeTestService_MessageSet::MissingTrail_Inner * NewD_L();

		/**
		 * Set the field @c eList.
		 */
		OpValueVector<INT32> & GetEListRef();

		/**
		 * Set the field @c eList.
		 */
		OP_STATUS AppendToEList(INT32 v);

		/**
		 * Set the field @c fList.
		 */
		OpAutoVector<OpString> & GetFListRef();

		/**
		 * Set the field @c fList.
		 */
		OP_STATUS AppendToFList(const OpString &v);

		/**
		 * Set the field @c fList.
		 */
		OP_STATUS AppendToFList(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c fList.
		 */
		OP_STATUS AppendToFList(const char * v, int l = KAll);

		/**
		 * Set the field @c fList.
		 */
		OpString * AppendNewFList();

		/**
		 * Set the field @c gList.
		 */
		OpAutoVector<ByteBuffer> & GetGListRef();

		/**
		 * Set the field @c gList.
		 */
		OP_STATUS AppendToGList(const ByteBuffer &v);

		/**
		 * Set the field @c gList.
		 */
		OP_STATUS AppendToGList(const char * v, int l);

		/**
		 * Set the field @c gList.
		 */
		ByteBuffer * AppendNewGList();

		/**
		 * Set the field @c hList.
		 */
		OpProtobufMessageVector<OtScopeTestService_MessageSet::MissingTrail_Inner> & GetHListRef();

		/**
		 * Set the field @c hList.
		 */
		OtScopeTestService_MessageSet::MissingTrail_Inner * AppendNewHList();

		/**
		 * Set the field @c hList.
		 */
		OtScopeTestService_MessageSet::MissingTrail_Inner * AppendNewHList_L();

		/**
		 * Set the field @c hList.
		 */
		OP_STATUS AppendToHList(OtScopeTestService_MessageSet::MissingTrail_Inner * v);

		static const OpProtobufMessage *GetMessageDescriptor(OtScopeTestService_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		INT32 _a;
		OpString _b;
		ByteBuffer _c;
		OtScopeTestService_MessageSet::MissingTrail_Inner * _d;
		OpValueVector<INT32> _eList;
		OpAutoVector<OpString> _fList;
		OpAutoVector<ByteBuffer> _gList;
		OpProtobufMessageVector<OtScopeTestService_MessageSet::MissingTrail_Inner> _hList;

		OpProtobufBitField<8> has_bits_;
		mutable int                 encoded_size_;
	};


	class FloatAccess
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 2
		};
		// END: Internal enums


		FloatAccess(
			float a_arg = 0.0f,
			double b_arg = 0.0
			)
			: _a(a_arg)
			, _b(b_arg)
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
		 * Check if the field @c a is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasA() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c b is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasB() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c a.
		 */
		float GetA() const
		{
			return _a;
		}

		/**
		 * Get the field @c b.
		 */
		double GetB() const
		{
			return _b;
		}

		// Setters

		/**
		 * Set the field @c a.
		 */
		void SetA(float v)
		{
			_a = v;
		}

		/**
		 * Set the field @c b.
		 */
		void SetB(double v)
		{
			_b = v;
		}

		static const OpProtobufMessage *GetMessageDescriptor(OtScopeTestService_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		float _a;
		double _b;

		OpProtobufBitField<2> has_bits_;
		mutable int                 encoded_size_;
	};


	class OptionalInteger
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 6
		};
		// END: Internal enums


		OptionalInteger(
			)
			: _runtimeID(0)
			, _objectID(0)
			, _windowID(0)
			, _scriptID(0)
			, _htmlID(0)
			, _isActive(FALSE)
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
			return has_bits_.Reference().IsSet(0);
		}

		/**
		 * Check if the field @c objectID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasObjectID() const
		{
			return has_bits_.Reference().IsSet(1);
		}

		/**
		 * Check if the field @c windowID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasWindowID() const
		{
			return has_bits_.Reference().IsSet(2);
		}

		/**
		 * Check if the field @c scriptID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasScriptID() const
		{
			return has_bits_.Reference().IsSet(3);
		}

		/**
		 * Check if the field @c htmlID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasHtmlID() const
		{
			return has_bits_.Reference().IsSet(4);
		}

		/**
		 * Check if the field @c isActive is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasIsActive() const
		{
			return has_bits_.Reference().IsSet(5);
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
		 * Get the field @c objectID.
		 */
		UINT32 GetObjectID() const
		{
			return _objectID;
		}

		/**
		 * Get the field @c windowID.
		 */
		INT32 GetWindowID() const
		{
			return _windowID;
		}

		/**
		 * Get the field @c scriptID.
		 */
		INT32 GetScriptID() const
		{
			return _scriptID;
		}

		/**
		 * Get the field @c htmlID.
		 */
		INT32 GetHtmlID() const
		{
			return _htmlID;
		}

		/**
		 * Get the field @c isActive.
		 */
		BOOL GetIsActive() const
		{
			return _isActive;
		}

		// Setters

		/**
		 * Set the field @c runtimeID.
		 */
		void SetRuntimeID(UINT32 v)
		{
			has_bits_.Reference().SetBit(0);
			_runtimeID = v;
		}

		/**
		 * Set the field @c objectID.
		 */
		void SetObjectID(UINT32 v)
		{
			has_bits_.Reference().SetBit(1);
			_objectID = v;
		}

		/**
		 * Set the field @c windowID.
		 */
		void SetWindowID(INT32 v)
		{
			has_bits_.Reference().SetBit(2);
			_windowID = v;
		}

		/**
		 * Set the field @c scriptID.
		 */
		void SetScriptID(INT32 v)
		{
			has_bits_.Reference().SetBit(3);
			_scriptID = v;
		}

		/**
		 * Set the field @c htmlID.
		 */
		void SetHtmlID(INT32 v)
		{
			has_bits_.Reference().SetBit(4);
			_htmlID = v;
		}

		/**
		 * Set the field @c isActive.
		 */
		void SetIsActive(BOOL v)
		{
			has_bits_.Reference().SetBit(5);
			_isActive = v;
		}

		static const OpProtobufMessage *GetMessageDescriptor(OtScopeTestService_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		UINT32 _runtimeID;
		UINT32 _objectID;
		INT32 _windowID;
		INT32 _scriptID;
		INT32 _htmlID;
		BOOL _isActive;

		OpProtobufBitField<6> has_bits_;
		mutable int                 encoded_size_;
	};


	class RepeatedString
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 1
		};
		// END: Internal enums


		RepeatedString(
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
		 * Check if the field @c descriptionList is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasDescriptionList() const
		{
			return has_bits_.Reference().IsSet(0);
		}

		// Getters

		/**
		 * Get the field @c descriptionList.
		 */
		const OpAutoVector<OpString> & GetDescriptionList() const
		{
			return _descriptionList;
		}

		// Setters

		/**
		 * Set the field @c descriptionList.
		 */
		OpAutoVector<OpString> & GetDescriptionListRef();

		/**
		 * Set the field @c descriptionList.
		 */
		OP_STATUS AppendToDescriptionList(const OpString &v);

		/**
		 * Set the field @c descriptionList.
		 */
		OP_STATUS AppendToDescriptionList(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c descriptionList.
		 */
		OP_STATUS AppendToDescriptionList(const char * v, int l = KAll);

		/**
		 * Set the field @c descriptionList.
		 */
		OpString * AppendNewDescriptionList();

		static const OpProtobufMessage *GetMessageDescriptor(OtScopeTestService_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		OpAutoVector<OpString> _descriptionList;

		OpProtobufBitField<1> has_bits_;
		mutable int                 encoded_size_;
	};


	class IntAccess
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 5
		};
		// END: Internal enums


		IntAccess(
			INT32 a_arg = 0,
			UINT32 b_arg = 0,
			INT32 c_arg = 0,
			BOOL d_arg = FALSE,
			BOOL e_arg = FALSE
			)
			: _a(a_arg)
			, _b(b_arg)
			, _c(c_arg)
			, _d(d_arg)
			, _e(e_arg)
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
		 * Check if the field @c a is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasA() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c b is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasB() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c c is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasC() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c d is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasD() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c e is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasE() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c a.
		 */
		INT32 GetA() const
		{
			return _a;
		}

		/**
		 * Get the field @c b.
		 */
		UINT32 GetB() const
		{
			return _b;
		}

		/**
		 * Get the field @c c.
		 */
		INT32 GetC() const
		{
			return _c;
		}

		/**
		 * Get the field @c d.
		 */
		BOOL GetD() const
		{
			return _d;
		}

		/**
		 * Get the field @c e.
		 */
		BOOL GetE() const
		{
			return _e;
		}

		// Setters

		/**
		 * Set the field @c a.
		 */
		void SetA(INT32 v)
		{
			_a = v;
		}

		/**
		 * Set the field @c b.
		 */
		void SetB(UINT32 v)
		{
			_b = v;
		}

		/**
		 * Set the field @c c.
		 */
		void SetC(INT32 v)
		{
			_c = v;
		}

		/**
		 * Set the field @c d.
		 */
		void SetD(BOOL v)
		{
			_d = v;
		}

		/**
		 * Set the field @c e.
		 */
		void SetE(BOOL v)
		{
			_e = v;
		}

		static const OpProtobufMessage *GetMessageDescriptor(OtScopeTestService_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		INT32 _a;
		UINT32 _b;
		INT32 _c;
		BOOL _d;
		BOOL _e;

		OpProtobufBitField<5> has_bits_;
		mutable int                 encoded_size_;
	};


	class MissingInput
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 8
		};
		// END: Internal enums


		MissingInput(
			)
			: _a(0)
			, _d(NULL)
			, encoded_size_(-1)
		{
		}
		OP_STATUS Construct(
			const OpString * b_arg = NULL,
			const ByteBuffer * c_arg = NULL
			)
		{
			if (b_arg)
			{
				RETURN_IF_ERROR(_b.Set(*b_arg));
				has_bits_.Reference().SetBit(1);

			}
			if (c_arg)
			{
				RETURN_IF_ERROR(OpProtobufAppend(_c, *c_arg));
				has_bits_.Reference().SetBit(2);

			}
			return OpStatus::OK;
		}
		~MissingInput()
		{
			OP_DELETE(_d);
		}

		// Checkers
		/**
		 * Check if the field @c a is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasA() const
		{
			return has_bits_.Reference().IsSet(0);
		}

		/**
		 * Check if the field @c b is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasB() const
		{
			return has_bits_.Reference().IsSet(1);
		}

		/**
		 * Check if the field @c c is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasC() const
		{
			return has_bits_.Reference().IsSet(2);
		}

		/**
		 * Check if the field @c d is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasD() const
		{
			return has_bits_.Reference().IsSet(3);
		}

		/**
		 * Check if the field @c eList is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasEList() const
		{
			return has_bits_.Reference().IsSet(4);
		}

		/**
		 * Check if the field @c fList is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasFList() const
		{
			return has_bits_.Reference().IsSet(5);
		}

		/**
		 * Check if the field @c gList is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasGList() const
		{
			return has_bits_.Reference().IsSet(6);
		}

		/**
		 * Check if the field @c hList is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasHList() const
		{
			return has_bits_.Reference().IsSet(7);
		}

		// Getters

		/**
		 * Get the field @c a.
		 */
		UINT32 GetA() const
		{
			return _a;
		}

		/**
		 * Get the field @c b.
		 */
		const OpString & GetB() const
		{
			return _b;
		}

		/**
		 * Get the field @c c.
		 */
		const ByteBuffer & GetC() const
		{
			return _c;
		}

		/**
		 * Get the field @c d.
		 */
		OtScopeTestService_MessageSet::MissingInputSub * GetD() const
		{
			return _d;
		}

		/**
		 * Get the field @c eList.
		 */
		const OpValueVector<UINT32> & GetEList() const
		{
			return _eList;
		}

		/**
		 * Get the field @c fList.
		 */
		const OpAutoVector<OpString> & GetFList() const
		{
			return _fList;
		}

		/**
		 * Get the field @c gList.
		 */
		const OpAutoVector<ByteBuffer> & GetGList() const
		{
			return _gList;
		}

		/**
		 * Get the field @c hList.
		 */
		const OpProtobufMessageVector<OtScopeTestService_MessageSet::MissingInputSub> & GetHList() const
		{
			return _hList;
		}

		// Setters

		/**
		 * Set the field @c a.
		 */
		void SetA(UINT32 v)
		{
			has_bits_.Reference().SetBit(0);
			_a = v;
		}

		/**
		 * Set the field @c b.
		 */
		OpString & GetBRef();

		/**
		 * Set the field @c b.
		 */
		OP_STATUS SetB(const OpString & v);

		/**
		 * Set the field @c b.
		 */
		OP_STATUS SetB(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c b.
		 */
		OP_STATUS SetB(const char * v, int l = KAll);

		/**
		 * Set the field @c c.
		 */
		ByteBuffer & GetCRef();

		/**
		 * Set the field @c c.
		 */
		OP_STATUS SetC(const ByteBuffer & v);

		/**
		 * Set the field @c c.
		 */
		OP_STATUS SetC(const char * v, int l);

		/**
		 * Set the field @c d.
		 */
		void SetD(OtScopeTestService_MessageSet::MissingInputSub * v);

		/**
		 * Set the field @c d.
		 */
		OtScopeTestService_MessageSet::MissingInputSub * NewD_L();

		/**
		 * Set the field @c eList.
		 */
		OpValueVector<UINT32> & GetEListRef();

		/**
		 * Set the field @c eList.
		 */
		OP_STATUS AppendToEList(UINT32 v);

		/**
		 * Set the field @c fList.
		 */
		OpAutoVector<OpString> & GetFListRef();

		/**
		 * Set the field @c fList.
		 */
		OP_STATUS AppendToFList(const OpString &v);

		/**
		 * Set the field @c fList.
		 */
		OP_STATUS AppendToFList(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c fList.
		 */
		OP_STATUS AppendToFList(const char * v, int l = KAll);

		/**
		 * Set the field @c fList.
		 */
		OpString * AppendNewFList();

		/**
		 * Set the field @c gList.
		 */
		OpAutoVector<ByteBuffer> & GetGListRef();

		/**
		 * Set the field @c gList.
		 */
		OP_STATUS AppendToGList(const ByteBuffer &v);

		/**
		 * Set the field @c gList.
		 */
		OP_STATUS AppendToGList(const char * v, int l);

		/**
		 * Set the field @c gList.
		 */
		ByteBuffer * AppendNewGList();

		/**
		 * Set the field @c hList.
		 */
		OpProtobufMessageVector<OtScopeTestService_MessageSet::MissingInputSub> & GetHListRef();

		/**
		 * Set the field @c hList.
		 */
		OtScopeTestService_MessageSet::MissingInputSub * AppendNewHList();

		/**
		 * Set the field @c hList.
		 */
		OtScopeTestService_MessageSet::MissingInputSub * AppendNewHList_L();

		/**
		 * Set the field @c hList.
		 */
		OP_STATUS AppendToHList(OtScopeTestService_MessageSet::MissingInputSub * v);

		static const OpProtobufMessage *GetMessageDescriptor(OtScopeTestService_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		UINT32 _a;
		OpString _b;
		ByteBuffer _c;
		OtScopeTestService_MessageSet::MissingInputSub * _d;
		OpValueVector<UINT32> _eList;
		OpAutoVector<OpString> _fList;
		OpAutoVector<ByteBuffer> _gList;
		OpProtobufMessageVector<OtScopeTestService_MessageSet::MissingInputSub> _hList;

		OpProtobufBitField<8> has_bits_;
		mutable int                 encoded_size_;
	};


	class OptionalSub
	{
	public:
		// BEGIN: Nested items

		// Message OptionalSub.OptionalSubInner
		typedef OptionalSub_OptionalSubInner OptionalSubInner;

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 2
		};
		// END: Internal enums


		OptionalSub(
			)
			: _a(NULL)
			, _b(NULL)
			, encoded_size_(-1)
		{
		}
		OP_STATUS Construct(
			)
		{
			return OpStatus::OK;
		}
		~OptionalSub()
		{
			OP_DELETE(_a);
			OP_DELETE(_b);
		}

		// Checkers
		/**
		 * Check if the field @c a is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasA() const
		{
			return has_bits_.Reference().IsSet(0);
		}

		/**
		 * Check if the field @c b is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasB() const
		{
			return has_bits_.Reference().IsSet(1);
		}

		// Getters

		/**
		 * Get the field @c a.
		 */
		OtScopeTestService_MessageSet::OptionalSub_OptionalSubInner * GetA() const
		{
			return _a;
		}

		/**
		 * Get the field @c b.
		 */
		OtScopeTestService_MessageSet::OptionalSub_OptionalSubInner * GetB() const
		{
			return _b;
		}

		// Setters

		/**
		 * Set the field @c a.
		 */
		void SetA(OtScopeTestService_MessageSet::OptionalSub_OptionalSubInner * v);

		/**
		 * Set the field @c a.
		 */
		OtScopeTestService_MessageSet::OptionalSub_OptionalSubInner * NewA_L();

		/**
		 * Set the field @c b.
		 */
		void SetB(OtScopeTestService_MessageSet::OptionalSub_OptionalSubInner * v);

		/**
		 * Set the field @c b.
		 */
		OtScopeTestService_MessageSet::OptionalSub_OptionalSubInner * NewB_L();

		static const OpProtobufMessage *GetMessageDescriptor(OtScopeTestService_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		OtScopeTestService_MessageSet::OptionalSub_OptionalSubInner * _a;
		OtScopeTestService_MessageSet::OptionalSub_OptionalSubInner * _b;

		OpProtobufBitField<2> has_bits_;
		mutable int                 encoded_size_;
	};


	class RepeatedBinary
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 1
		};
		// END: Internal enums


		RepeatedBinary(
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
		 * Check if the field @c moccaList is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasMoccaList() const
		{
			return has_bits_.Reference().IsSet(0);
		}

		// Getters

		/**
		 * Get the field @c moccaList.
		 */
		const OpAutoVector<ByteBuffer> & GetMoccaList() const
		{
			return _moccaList;
		}

		// Setters

		/**
		 * Set the field @c moccaList.
		 */
		OpAutoVector<ByteBuffer> & GetMoccaListRef();

		/**
		 * Set the field @c moccaList.
		 */
		OP_STATUS AppendToMoccaList(const ByteBuffer &v);

		/**
		 * Set the field @c moccaList.
		 */
		OP_STATUS AppendToMoccaList(const char * v, int l);

		/**
		 * Set the field @c moccaList.
		 */
		ByteBuffer * AppendNewMoccaList();

		static const OpProtobufMessage *GetMessageDescriptor(OtScopeTestService_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		OpAutoVector<ByteBuffer> _moccaList;

		OpProtobufBitField<1> has_bits_;
		mutable int                 encoded_size_;
	};


	class IntegerMessage
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 6
		};
		// END: Internal enums


		IntegerMessage(
			UINT32 runtime_id_arg = 0,
			UINT32 object_id_arg = 0,
			INT32 window_id_arg = 0,
			INT32 script_id_arg = 0,
			INT32 html_id_arg = 0,
			BOOL is_active_arg = FALSE
			)
			: _runtimeID(runtime_id_arg)
			, _objectID(object_id_arg)
			, _windowID(window_id_arg)
			, _scriptID(script_id_arg)
			, _htmlID(html_id_arg)
			, _isActive(is_active_arg)
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
		 * Check if the field @c objectID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasObjectID() const
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
		 * Check if the field @c scriptID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasScriptID() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c htmlID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasHtmlID() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c isActive is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasIsActive() const
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
		 * Get the field @c objectID.
		 */
		UINT32 GetObjectID() const
		{
			return _objectID;
		}

		/**
		 * Get the field @c windowID.
		 */
		INT32 GetWindowID() const
		{
			return _windowID;
		}

		/**
		 * Get the field @c scriptID.
		 */
		INT32 GetScriptID() const
		{
			return _scriptID;
		}

		/**
		 * Get the field @c htmlID.
		 */
		INT32 GetHtmlID() const
		{
			return _htmlID;
		}

		/**
		 * Get the field @c isActive.
		 */
		BOOL GetIsActive() const
		{
			return _isActive;
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
		 * Set the field @c objectID.
		 */
		void SetObjectID(UINT32 v)
		{
			_objectID = v;
		}

		/**
		 * Set the field @c windowID.
		 */
		void SetWindowID(INT32 v)
		{
			_windowID = v;
		}

		/**
		 * Set the field @c scriptID.
		 */
		void SetScriptID(INT32 v)
		{
			_scriptID = v;
		}

		/**
		 * Set the field @c htmlID.
		 */
		void SetHtmlID(INT32 v)
		{
			_htmlID = v;
		}

		/**
		 * Set the field @c isActive.
		 */
		void SetIsActive(BOOL v)
		{
			_isActive = v;
		}

		static const OpProtobufMessage *GetMessageDescriptor(OtScopeTestService_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		UINT32 _runtimeID;
		UINT32 _objectID;
		INT32 _windowID;
		INT32 _scriptID;
		INT32 _htmlID;
		BOOL _isActive;

		OpProtobufBitField<6> has_bits_;
		mutable int                 encoded_size_;
	};


	class OnesAndZeroes
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 2
		};
		// END: Internal enums


		OnesAndZeroes(
			)
			: encoded_size_(-1)
		{
		}
		OP_STATUS Construct(
			const ByteBuffer & first_arg,
			const ByteBuffer & empty_arg
			)
		{
			RETURN_IF_ERROR(OpProtobufAppend(_first, first_arg));
			RETURN_IF_ERROR(OpProtobufAppend(_empty, empty_arg));
			return OpStatus::OK;
		}

		// Checkers
		/**
		 * Check if the field @c first is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasFirst() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c empty is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasEmpty() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c first.
		 */
		const ByteBuffer & GetFirst() const
		{
			return _first;
		}

		/**
		 * Get the field @c empty.
		 */
		const ByteBuffer & GetEmpty() const
		{
			return _empty;
		}

		// Setters

		/**
		 * Set the field @c first.
		 */
		ByteBuffer & GetFirstRef();

		/**
		 * Set the field @c first.
		 */
		OP_STATUS SetFirst(const ByteBuffer & v);

		/**
		 * Set the field @c first.
		 */
		OP_STATUS SetFirst(const char * v, int l);

		/**
		 * Set the field @c empty.
		 */
		ByteBuffer & GetEmptyRef();

		/**
		 * Set the field @c empty.
		 */
		OP_STATUS SetEmpty(const ByteBuffer & v);

		/**
		 * Set the field @c empty.
		 */
		OP_STATUS SetEmpty(const char * v, int l);

		static const OpProtobufMessage *GetMessageDescriptor(OtScopeTestService_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		ByteBuffer _first;
		ByteBuffer _empty;

		OpProtobufBitField<2> has_bits_;
		mutable int                 encoded_size_;
	};


	class OutData
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 2
		};
		// END: Internal enums


		OutData(
			UINT32 runtime_id_arg = 0
			)
			: _runtimeID(runtime_id_arg)
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
		 * Check if the field @c runtimeID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasRuntimeID() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c name is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasName() const
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
		 * Get the field @c name.
		 */
		const OpString & GetName() const
		{
			return _name;
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
		 * Set the field @c name.
		 */
		OpString & GetNameRef();

		/**
		 * Set the field @c name.
		 */
		OP_STATUS SetName(const OpString & v);

		/**
		 * Set the field @c name.
		 */
		OP_STATUS SetName(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c name.
		 */
		OP_STATUS SetName(const char * v, int l = KAll);

		static const OpProtobufMessage *GetMessageDescriptor(OtScopeTestService_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		UINT32 _runtimeID;
		OpString _name;

		OpProtobufBitField<2> has_bits_;
		mutable int                 encoded_size_;
	};


	class RepeatedInteger
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 6
		};
		// END: Internal enums


		RepeatedInteger(
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
		 * Check if the field @c runtimeIDList is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasRuntimeIDList() const
		{
			return has_bits_.Reference().IsSet(0);
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
		 * Check if the field @c windowIDList is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasWindowIDList() const
		{
			return has_bits_.Reference().IsSet(2);
		}

		/**
		 * Check if the field @c scriptIDList is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasScriptIDList() const
		{
			return has_bits_.Reference().IsSet(3);
		}

		/**
		 * Check if the field @c htmlIDList is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasHtmlIDList() const
		{
			return has_bits_.Reference().IsSet(4);
		}

		/**
		 * Check if the field @c activationList is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasActivationList() const
		{
			return has_bits_.Reference().IsSet(5);
		}

		// Getters

		/**
		 * Get the field @c runtimeIDList.
		 */
		const OpValueVector<UINT32> & GetRuntimeIDList() const
		{
			return _runtimeIDList;
		}

		/**
		 * Get the field @c objectIDList.
		 */
		const OpValueVector<UINT32> & GetObjectIDList() const
		{
			return _objectIDList;
		}

		/**
		 * Get the field @c windowIDList.
		 */
		const OpValueVector<INT32> & GetWindowIDList() const
		{
			return _windowIDList;
		}

		/**
		 * Get the field @c scriptIDList.
		 */
		const OpValueVector<INT32> & GetScriptIDList() const
		{
			return _scriptIDList;
		}

		/**
		 * Get the field @c htmlIDList.
		 */
		const OpValueVector<INT32> & GetHtmlIDList() const
		{
			return _htmlIDList;
		}

		/**
		 * Get the field @c activationList.
		 */
		const OpINT32Vector & GetActivationList() const
		{
			return _activationList;
		}

		// Setters

		/**
		 * Set the field @c runtimeIDList.
		 */
		OpValueVector<UINT32> & GetRuntimeIDListRef();

		/**
		 * Set the field @c runtimeIDList.
		 */
		OP_STATUS AppendToRuntimeIDList(UINT32 v);

		/**
		 * Set the field @c objectIDList.
		 */
		OpValueVector<UINT32> & GetObjectIDListRef();

		/**
		 * Set the field @c objectIDList.
		 */
		OP_STATUS AppendToObjectIDList(UINT32 v);

		/**
		 * Set the field @c windowIDList.
		 */
		OpValueVector<INT32> & GetWindowIDListRef();

		/**
		 * Set the field @c windowIDList.
		 */
		OP_STATUS AppendToWindowIDList(INT32 v);

		/**
		 * Set the field @c scriptIDList.
		 */
		OpValueVector<INT32> & GetScriptIDListRef();

		/**
		 * Set the field @c scriptIDList.
		 */
		OP_STATUS AppendToScriptIDList(INT32 v);

		/**
		 * Set the field @c htmlIDList.
		 */
		OpValueVector<INT32> & GetHtmlIDListRef();

		/**
		 * Set the field @c htmlIDList.
		 */
		OP_STATUS AppendToHtmlIDList(INT32 v);

		/**
		 * Set the field @c activationList.
		 */
		OpINT32Vector & GetActivationListRef();

		/**
		 * Set the field @c activationList.
		 */
		OP_STATUS AppendToActivationList(BOOL v);

		static const OpProtobufMessage *GetMessageDescriptor(OtScopeTestService_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		OpValueVector<UINT32> _runtimeIDList;
		OpValueVector<UINT32> _objectIDList;
		OpValueVector<INT32> _windowIDList;
		OpValueVector<INT32> _scriptIDList;
		OpValueVector<INT32> _htmlIDList;
		OpINT32Vector _activationList;

		OpProtobufBitField<6> has_bits_;
		mutable int                 encoded_size_;
	};


	class MissingInputSub
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 1
		};
		// END: Internal enums


		MissingInputSub(
			)
			: encoded_size_(-1)
		{
		}
		OP_STATUS Construct(
			const OpString & a_arg
			)
		{
			RETURN_IF_ERROR(_a.Set(a_arg));
			return OpStatus::OK;
		}

		// Checkers
		/**
		 * Check if the field @c a is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasA() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c a.
		 */
		const OpString & GetA() const
		{
			return _a;
		}

		// Setters

		/**
		 * Set the field @c a.
		 */
		OpString & GetARef();

		/**
		 * Set the field @c a.
		 */
		OP_STATUS SetA(const OpString & v);

		/**
		 * Set the field @c a.
		 */
		OP_STATUS SetA(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c a.
		 */
		OP_STATUS SetA(const char * v, int l = KAll);

		static const OpProtobufMessage *GetMessageDescriptor(OtScopeTestService_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		OpString _a;

		OpProtobufBitField<1> has_bits_;
		mutable int                 encoded_size_;
	};


	class RepeatedSub
	{
	public:
		// BEGIN: Nested items

		// Message RepeatedSub.RepeatedSubInner
		typedef RepeatedSub_RepeatedSubInner RepeatedSubInner;

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 1
		};
		// END: Internal enums


		RepeatedSub(
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
		 * Check if the field @c itemList is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasItemList() const
		{
			return has_bits_.Reference().IsSet(0);
		}

		// Getters

		/**
		 * Get the field @c itemList.
		 */
		const OpProtobufMessageVector<OtScopeTestService_MessageSet::RepeatedSub_RepeatedSubInner> & GetItemList() const
		{
			return _itemList;
		}

		// Setters

		/**
		 * Set the field @c itemList.
		 */
		OpProtobufMessageVector<OtScopeTestService_MessageSet::RepeatedSub_RepeatedSubInner> & GetItemListRef();

		/**
		 * Set the field @c itemList.
		 */
		OtScopeTestService_MessageSet::RepeatedSub_RepeatedSubInner * AppendNewItemList();

		/**
		 * Set the field @c itemList.
		 */
		OtScopeTestService_MessageSet::RepeatedSub_RepeatedSubInner * AppendNewItemList_L();

		/**
		 * Set the field @c itemList.
		 */
		OP_STATUS AppendToItemList(OtScopeTestService_MessageSet::RepeatedSub_RepeatedSubInner * v);

		static const OpProtobufMessage *GetMessageDescriptor(OtScopeTestService_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		OpProtobufMessageVector<OtScopeTestService_MessageSet::RepeatedSub_RepeatedSubInner> _itemList;

		OpProtobufBitField<1> has_bits_;
		mutable int                 encoded_size_;
	};


	class OutAdd
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 1
		};
		// END: Internal enums


		OutAdd(
			UINT32 result_arg = 0
			)
			: _result(result_arg)
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
		 * Check if the field @c result is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasResult() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c result.
		 */
		UINT32 GetResult() const
		{
			return _result;
		}

		// Setters

		/**
		 * Set the field @c result.
		 */
		void SetResult(UINT32 v)
		{
			_result = v;
		}

		static const OpProtobufMessage *GetMessageDescriptor(OtScopeTestService_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		UINT32 _result;

		OpProtobufBitField<1> has_bits_;
		mutable int                 encoded_size_;
	};


	class StringMessage
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 3
		};
		// END: Internal enums


		StringMessage(
			)
			: encoded_size_(-1)
		{
		}
		OP_STATUS Construct(
			const OpString & first_arg,
			const OpString & second_arg,
			const OpString & empty_arg
			)
		{
			RETURN_IF_ERROR(_first.Set(first_arg));
			RETURN_IF_ERROR(_second.Set(second_arg));
			RETURN_IF_ERROR(_empty.Set(empty_arg));
			return OpStatus::OK;
		}

		// Checkers
		/**
		 * Check if the field @c first is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasFirst() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c second is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasSecond() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c empty is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasEmpty() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c first.
		 */
		const OpString & GetFirst() const
		{
			return _first;
		}

		/**
		 * Get the field @c second.
		 */
		const OpString & GetSecond() const
		{
			return _second;
		}

		/**
		 * Get the field @c empty.
		 */
		const OpString & GetEmpty() const
		{
			return _empty;
		}

		// Setters

		/**
		 * Set the field @c first.
		 */
		OpString & GetFirstRef();

		/**
		 * Set the field @c first.
		 */
		OP_STATUS SetFirst(const OpString & v);

		/**
		 * Set the field @c first.
		 */
		OP_STATUS SetFirst(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c first.
		 */
		OP_STATUS SetFirst(const char * v, int l = KAll);

		/**
		 * Set the field @c second.
		 */
		OpString & GetSecondRef();

		/**
		 * Set the field @c second.
		 */
		OP_STATUS SetSecond(const OpString & v);

		/**
		 * Set the field @c second.
		 */
		OP_STATUS SetSecond(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c second.
		 */
		OP_STATUS SetSecond(const char * v, int l = KAll);

		/**
		 * Set the field @c empty.
		 */
		OpString & GetEmptyRef();

		/**
		 * Set the field @c empty.
		 */
		OP_STATUS SetEmpty(const OpString & v);

		/**
		 * Set the field @c empty.
		 */
		OP_STATUS SetEmpty(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c empty.
		 */
		OP_STATUS SetEmpty(const char * v, int l = KAll);

		static const OpProtobufMessage *GetMessageDescriptor(OtScopeTestService_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		OpString _first;
		OpString _second;
		OpString _empty;

		OpProtobufBitField<3> has_bits_;
		mutable int                 encoded_size_;
	};


	class AsyncData
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 1
		};
		// END: Internal enums


		AsyncData(
			INT32 result_arg = 0
			)
			: _result(result_arg)
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
		 * Check if the field @c result is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasResult() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c result.
		 */
		INT32 GetResult() const
		{
			return _result;
		}

		// Setters

		/**
		 * Set the field @c result.
		 */
		void SetResult(INT32 v)
		{
			_result = v;
		}

		static const OpProtobufMessage *GetMessageDescriptor(OtScopeTestService_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		INT32 _result;

		OpProtobufBitField<1> has_bits_;
		mutable int                 encoded_size_;
	};


	class AsyncArgs
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 1
		};
		// END: Internal enums


		AsyncArgs(
			INT32 value_arg = 0
			)
			: _value(value_arg)
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
		 * Check if the field @c value is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasValue() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c value.
		 */
		INT32 GetValue() const
		{
			return _value;
		}

		// Setters

		/**
		 * Set the field @c value.
		 */
		void SetValue(INT32 v)
		{
			_value = v;
		}

		static const OpProtobufMessage *GetMessageDescriptor(OtScopeTestService_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		INT32 _value;

		OpProtobufBitField<1> has_bits_;
		mutable int                 encoded_size_;
	};


	class FormatErrorArg
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 1
		};
		// END: Internal enums


		FormatErrorArg(
			UINT32 index_arg = 0
			)
			: _index(index_arg)
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
		 * Check if the field @c index is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasIndex() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c index.
		 */
		UINT32 GetIndex() const
		{
			return _index;
		}

		// Setters

		/**
		 * Set the field @c index.
		 */
		void SetIndex(UINT32 v)
		{
			_index = v;
		}

		static const OpProtobufMessage *GetMessageDescriptor(OtScopeTestService_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		UINT32 _index;

		OpProtobufBitField<1> has_bits_;
		mutable int                 encoded_size_;
	};


	class Repeated
	{
	public:
		// BEGIN: Nested items

		// Message Repeated.RepeatedInner
		typedef Repeated_RepeatedInner RepeatedInner;

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 4
		};
		// END: Internal enums


		Repeated(
			INT32 a_arg = 0
			)
			: _a(a_arg)
			, _b(0)
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
		 * Check if the field @c a is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasA() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c b is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasB() const
		{
			return has_bits_.Reference().IsSet(1);
		}

		/**
		 * Check if the field @c cList is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasCList() const
		{
			return has_bits_.Reference().IsSet(2);
		}

		/**
		 * Check if the field @c dList is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasDList() const
		{
			return has_bits_.Reference().IsSet(3);
		}

		// Getters

		/**
		 * Get the field @c a.
		 */
		INT32 GetA() const
		{
			return _a;
		}

		/**
		 * Get the field @c b.
		 */
		UINT32 GetB() const
		{
			return _b;
		}

		/**
		 * Get the field @c cList.
		 */
		const OpValueVector<INT32> & GetCList() const
		{
			return _cList;
		}

		/**
		 * Get the field @c dList.
		 */
		const OpProtobufMessageVector<OtScopeTestService_MessageSet::Repeated_RepeatedInner> & GetDList() const
		{
			return _dList;
		}

		// Setters

		/**
		 * Set the field @c a.
		 */
		void SetA(INT32 v)
		{
			_a = v;
		}

		/**
		 * Set the field @c b.
		 */
		void SetB(UINT32 v)
		{
			has_bits_.Reference().SetBit(1);
			_b = v;
		}

		/**
		 * Set the field @c cList.
		 */
		OpValueVector<INT32> & GetCListRef();

		/**
		 * Set the field @c cList.
		 */
		OP_STATUS AppendToCList(INT32 v);

		/**
		 * Set the field @c dList.
		 */
		OpProtobufMessageVector<OtScopeTestService_MessageSet::Repeated_RepeatedInner> & GetDListRef();

		/**
		 * Set the field @c dList.
		 */
		OtScopeTestService_MessageSet::Repeated_RepeatedInner * AppendNewDList();

		/**
		 * Set the field @c dList.
		 */
		OtScopeTestService_MessageSet::Repeated_RepeatedInner * AppendNewDList_L();

		/**
		 * Set the field @c dList.
		 */
		OP_STATUS AppendToDList(OtScopeTestService_MessageSet::Repeated_RepeatedInner * v);

		static const OpProtobufMessage *GetMessageDescriptor(OtScopeTestService_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		INT32 _a;
		UINT32 _b;
		OpValueVector<INT32> _cList;
		OpProtobufMessageVector<OtScopeTestService_MessageSet::Repeated_RepeatedInner> _dList;

		OpProtobufBitField<4> has_bits_;
		mutable int                 encoded_size_;
	};


	class StringAccess
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 1
		};
		// END: Internal enums


		StringAccess(
			)
			: encoded_size_(-1)
		{
		}
		OP_STATUS Construct(
			const OpString & a_arg
			)
		{
			RETURN_IF_ERROR(_a.Set(a_arg));
			return OpStatus::OK;
		}

		// Checkers
		/**
		 * Check if the field @c a is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasA() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c a.
		 */
		const OpString & GetA() const
		{
			return _a;
		}

		// Setters

		/**
		 * Set the field @c a.
		 */
		OpString & GetARef();

		/**
		 * Set the field @c a.
		 */
		OP_STATUS SetA(const OpString & v);

		/**
		 * Set the field @c a.
		 */
		OP_STATUS SetA(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c a.
		 */
		OP_STATUS SetA(const char * v, int l = KAll);

		static const OpProtobufMessage *GetMessageDescriptor(OtScopeTestService_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		OpString _a;

		OpProtobufBitField<1> has_bits_;
		mutable int                 encoded_size_;
	};


	class BytesAccess
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 1
		};
		// END: Internal enums


		BytesAccess(
			)
			: encoded_size_(-1)
		{
		}
		OP_STATUS Construct(
			const ByteBuffer & a_arg
			)
		{
			RETURN_IF_ERROR(OpProtobufAppend(_a, a_arg));
			return OpStatus::OK;
		}

		// Checkers
		/**
		 * Check if the field @c a is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasA() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c a.
		 */
		const ByteBuffer & GetA() const
		{
			return _a;
		}

		// Setters

		/**
		 * Set the field @c a.
		 */
		ByteBuffer & GetARef();

		/**
		 * Set the field @c a.
		 */
		OP_STATUS SetA(const ByteBuffer & v);

		/**
		 * Set the field @c a.
		 */
		OP_STATUS SetA(const char * v, int l);

		static const OpProtobufMessage *GetMessageDescriptor(OtScopeTestService_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		ByteBuffer _a;

		OpProtobufBitField<1> has_bits_;
		mutable int                 encoded_size_;
	};


	class Optional
	{
	public:
		// BEGIN: Nested items

		// Message Optional.OptionalInner
		typedef Optional_OptionalInner OptionalInner;

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 7
		};
		// END: Internal enums


		Optional(
			INT32 a_arg = 0
			)
			: _a(a_arg)
			, _b(0)
			, _f(NULL)
			, _g(NULL)
			, encoded_size_(-1)
		{
		}
		OP_STATUS Construct(
			)
		{
			return OpStatus::OK;
		}
		~Optional()
		{
			OP_DELETE(_f);
			OP_DELETE(_g);
		}

		// Checkers
		/**
		 * Check if the field @c a is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasA() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c b is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasB() const
		{
			return has_bits_.Reference().IsSet(1);
		}

		/**
		 * Check if the field @c cList is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasCList() const
		{
			return has_bits_.Reference().IsSet(2);
		}

		/**
		 * Check if the field @c dList is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasDList() const
		{
			return has_bits_.Reference().IsSet(3);
		}

		/**
		 * Check if the field @c eList is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasEList() const
		{
			return has_bits_.Reference().IsSet(4);
		}

		/**
		 * Check if the field @c f is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasF() const
		{
			return has_bits_.Reference().IsSet(5);
		}

		/**
		 * Check if the field @c g is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasG() const
		{
			return has_bits_.Reference().IsSet(6);
		}

		// Getters

		/**
		 * Get the field @c a.
		 */
		INT32 GetA() const
		{
			return _a;
		}

		/**
		 * Get the field @c b.
		 */
		UINT32 GetB() const
		{
			return _b;
		}

		/**
		 * Get the field @c cList.
		 */
		const OpValueVector<INT32> & GetCList() const
		{
			return _cList;
		}

		/**
		 * Get the field @c dList.
		 */
		const OpAutoVector<OpString> & GetDList() const
		{
			return _dList;
		}

		/**
		 * Get the field @c eList.
		 */
		const OpValueVector<UINT32> & GetEList() const
		{
			return _eList;
		}

		/**
		 * Get the field @c f.
		 */
		OtScopeTestService_MessageSet::Optional_OptionalInner * GetF() const
		{
			return _f;
		}

		/**
		 * Get the field @c g.
		 */
		OtScopeTestService_MessageSet::Optional_OptionalInner * GetG() const
		{
			return _g;
		}

		// Setters

		/**
		 * Set the field @c a.
		 */
		void SetA(INT32 v)
		{
			_a = v;
		}

		/**
		 * Set the field @c b.
		 */
		void SetB(UINT32 v)
		{
			has_bits_.Reference().SetBit(1);
			_b = v;
		}

		/**
		 * Set the field @c cList.
		 */
		OpValueVector<INT32> & GetCListRef();

		/**
		 * Set the field @c cList.
		 */
		OP_STATUS AppendToCList(INT32 v);

		/**
		 * Set the field @c dList.
		 */
		OpAutoVector<OpString> & GetDListRef();

		/**
		 * Set the field @c dList.
		 */
		OP_STATUS AppendToDList(const OpString &v);

		/**
		 * Set the field @c dList.
		 */
		OP_STATUS AppendToDList(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c dList.
		 */
		OP_STATUS AppendToDList(const char * v, int l = KAll);

		/**
		 * Set the field @c dList.
		 */
		OpString * AppendNewDList();

		/**
		 * Set the field @c eList.
		 */
		OpValueVector<UINT32> & GetEListRef();

		/**
		 * Set the field @c eList.
		 */
		OP_STATUS AppendToEList(UINT32 v);

		/**
		 * Set the field @c f.
		 */
		void SetF(OtScopeTestService_MessageSet::Optional_OptionalInner * v);

		/**
		 * Set the field @c f.
		 */
		OtScopeTestService_MessageSet::Optional_OptionalInner * NewF_L();

		/**
		 * Set the field @c g.
		 */
		void SetG(OtScopeTestService_MessageSet::Optional_OptionalInner * v);

		/**
		 * Set the field @c g.
		 */
		OtScopeTestService_MessageSet::Optional_OptionalInner * NewG_L();

		static const OpProtobufMessage *GetMessageDescriptor(OtScopeTestService_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		INT32 _a;
		UINT32 _b;
		OpValueVector<INT32> _cList;
		OpAutoVector<OpString> _dList;
		OpValueVector<UINT32> _eList;
		OtScopeTestService_MessageSet::Optional_OptionalInner * _f;
		OtScopeTestService_MessageSet::Optional_OptionalInner * _g;

		OpProtobufBitField<7> has_bits_;
		mutable int                 encoded_size_;
	};


	class Event
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 1
		};
		// END: Internal enums


		Event(
			UINT32 current_id_arg = 0
			)
			: _currentID(current_id_arg)
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
		 * Check if the field @c currentID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasCurrentID() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c currentID.
		 */
		UINT32 GetCurrentID() const
		{
			return _currentID;
		}

		// Setters

		/**
		 * Set the field @c currentID.
		 */
		void SetCurrentID(UINT32 v)
		{
			_currentID = v;
		}

		static const OpProtobufMessage *GetMessageDescriptor(OtScopeTestService_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		UINT32 _currentID;

		OpProtobufBitField<1> has_bits_;
		mutable int                 encoded_size_;
	};


	class UnsignedIntegerMessage
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 3
		};
		// END: Internal enums


		UnsignedIntegerMessage(
			UINT32 runtime_id_arg = 0,
			UINT32 object_id_arg = 0,
			UINT32 html_id_arg = 0
			)
			: _runtimeID(runtime_id_arg)
			, _objectID(object_id_arg)
			, _htmlID(html_id_arg)
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
		 * Check if the field @c objectID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasObjectID() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c htmlID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasHtmlID() const
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
		 * Get the field @c objectID.
		 */
		UINT32 GetObjectID() const
		{
			return _objectID;
		}

		/**
		 * Get the field @c htmlID.
		 */
		UINT32 GetHtmlID() const
		{
			return _htmlID;
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
		 * Set the field @c objectID.
		 */
		void SetObjectID(UINT32 v)
		{
			_objectID = v;
		}

		/**
		 * Set the field @c htmlID.
		 */
		void SetHtmlID(UINT32 v)
		{
			_htmlID = v;
		}

		static const OpProtobufMessage *GetMessageDescriptor(OtScopeTestService_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		UINT32 _runtimeID;
		UINT32 _objectID;
		UINT32 _htmlID;

		OpProtobufBitField<3> has_bits_;
		mutable int                 encoded_size_;
	};


	class RepeatedFloat
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 2
		};
		// END: Internal enums


		RepeatedFloat(
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
		 * Check if the field @c fuzzyList is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasFuzzyList() const
		{
			return has_bits_.Reference().IsSet(0);
		}

		/**
		 * Check if the field @c piList is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasPiList() const
		{
			return has_bits_.Reference().IsSet(1);
		}

		// Getters

		/**
		 * Get the field @c fuzzyList.
		 */
		const OpValueVector<float> & GetFuzzyList() const
		{
			return _fuzzyList;
		}

		/**
		 * Get the field @c piList.
		 */
		const OpValueVector<double> & GetPiList() const
		{
			return _piList;
		}

		// Setters

		/**
		 * Set the field @c fuzzyList.
		 */
		OpValueVector<float> & GetFuzzyListRef();

		/**
		 * Set the field @c fuzzyList.
		 */
		OP_STATUS AppendToFuzzyList(float v);

		/**
		 * Set the field @c piList.
		 */
		OpValueVector<double> & GetPiListRef();

		/**
		 * Set the field @c piList.
		 */
		OP_STATUS AppendToPiList(double v);

		static const OpProtobufMessage *GetMessageDescriptor(OtScopeTestService_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		OpValueVector<float> _fuzzyList;
		OpValueVector<double> _piList;

		OpProtobufBitField<2> has_bits_;
		mutable int                 encoded_size_;
	};


	class InAdd
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 1
		};
		// END: Internal enums


		InAdd(
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
		 * Check if the field @c valueList is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasValueList() const
		{
			return has_bits_.Reference().IsSet(0);
		}

		// Getters

		/**
		 * Get the field @c valueList.
		 */
		const OpValueVector<UINT32> & GetValueList() const
		{
			return _valueList;
		}

		// Setters

		/**
		 * Set the field @c valueList.
		 */
		OpValueVector<UINT32> & GetValueListRef();

		/**
		 * Set the field @c valueList.
		 */
		OP_STATUS AppendToValueList(UINT32 v);

		static const OpProtobufMessage *GetMessageDescriptor(OtScopeTestService_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		OpValueVector<UINT32> _valueList;

		OpProtobufBitField<1> has_bits_;
		mutable int                 encoded_size_;
	};



	// END: Message classes

};


class OpProtobufMessage;

// This class contains the descriptors of all messages in the given set
// When a message descriptor is first requested it is allocated and put in this structure,
// subsequent uses of the descriptor will just use the previously allocated object.
class OtScopeTestService_Descriptors
{
public:
	OtScopeTestService_Descriptors();
	~OtScopeTestService_Descriptors();

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
		_gen_MessageOffs_async_args_,
		_gen_MessageOffs_async_data_,
		_gen_MessageOffs_bytes_access_,
		_gen_MessageOffs_enum_data_,
		_gen_MessageOffs_event_,
		_gen_MessageOffs_float_access_,
		_gen_MessageOffs_float_message_,
		_gen_MessageOffs_format_error_arg_,
		_gen_MessageOffs_get_repeated_data_arg_,
		_gen_MessageOffs_in_add_,
		_gen_MessageOffs_in_data_,
		_gen_MessageOffs_missing_trail_inner_,
		_gen_MessageOffs_outer_inner_,
		_gen_MessageOffs_outer_inner_innermost_,
		_gen_MessageOffs_inspect_element_arg_,
		_gen_MessageOffs_int_access_,
		_gen_MessageOffs_integer_message_,
		_gen_MessageOffs_message_size_problem_,
		_gen_MessageOffs_missing_input_,
		_gen_MessageOffs_missing_input_sub_,
		_gen_MessageOffs_missing_trail_,
		_gen_MessageOffs_mixed_byte_type_,
		_gen_MessageOffs_mixed_string_type_,
		_gen_MessageOffs_repeated_data_nested_more_nested_,
		_gen_MessageOffs_repeated_data_nested_,
		_gen_MessageOffs_ones_and_zeroes_,
		_gen_MessageOffs_optional_,
		_gen_MessageOffs_optional_optional_inner_,
		_gen_MessageOffs_optional_integer_,
		_gen_MessageOffs_optional_sub_,
		_gen_MessageOffs_optional_sub_optional_sub_inner_,
		_gen_MessageOffs_message_size_problem_sub_message_same_address_other_,
		_gen_MessageOffs_out_add_,
		_gen_MessageOffs_out_data_,
		_gen_MessageOffs_outer_,
		_gen_MessageOffs_repeated_,
		_gen_MessageOffs_repeated_binary_,
		_gen_MessageOffs_repeated_data_,
		_gen_MessageOffs_repeated_float_,
		_gen_MessageOffs_repeated_repeated_inner_,
		_gen_MessageOffs_repeated_integer_,
		_gen_MessageOffs_repeated_string_,
		_gen_MessageOffs_repeated_sub_,
		_gen_MessageOffs_repeated_sub_repeated_sub_inner_,
		_gen_MessageOffs_message_size_problem_sub_message_same_address_,
		_gen_MessageOffs_string_access_,
		_gen_MessageOffs_string_message_,
		_gen_MessageOffs_message_size_problem_sub_message_,
		_gen_MessageOffs_message_size_problem_sub_message_same_address_sub_with_same_address_,
		_gen_MessageOffs_unsigned_integer_message_,

		// Message count is calculated at compile time
		_gen_Message_Count
	};

	// The IDs for all messages
	enum // message IDs
	{
		  _gen_void_MsgID // The Default/void message. Also ensures that all other IDs start at 1
		, _gen_MsgID_async_args_
		, _gen_MsgID_async_data_
		, _gen_MsgID_bytes_access_
		, _gen_MsgID_enum_data_
		, _gen_MsgID_event_
		, _gen_MsgID_float_access_
		, _gen_MsgID_float_message_
		, _gen_MsgID_format_error_arg_
		, _gen_MsgID_get_repeated_data_arg_
		, _gen_MsgID_in_add_
		, _gen_MsgID_in_data_
		, _gen_MsgID_missing_trail_inner_
		, _gen_MsgID_outer_inner_
		, _gen_MsgID_outer_inner_innermost_
		, _gen_MsgID_inspect_element_arg_
		, _gen_MsgID_int_access_
		, _gen_MsgID_integer_message_
		, _gen_MsgID_message_size_problem_
		, _gen_MsgID_missing_input_
		, _gen_MsgID_missing_input_sub_
		, _gen_MsgID_missing_trail_
		, _gen_MsgID_mixed_byte_type_
		, _gen_MsgID_mixed_string_type_
		, _gen_MsgID_repeated_data_nested_more_nested_
		, _gen_MsgID_repeated_data_nested_
		, _gen_MsgID_ones_and_zeroes_
		, _gen_MsgID_optional_
		, _gen_MsgID_optional_optional_inner_
		, _gen_MsgID_optional_integer_
		, _gen_MsgID_optional_sub_
		, _gen_MsgID_optional_sub_optional_sub_inner_
		, _gen_MsgID_message_size_problem_sub_message_same_address_other_
		, _gen_MsgID_out_add_
		, _gen_MsgID_out_data_
		, _gen_MsgID_outer_
		, _gen_MsgID_repeated_
		, _gen_MsgID_repeated_binary_
		, _gen_MsgID_repeated_data_
		, _gen_MsgID_repeated_float_
		, _gen_MsgID_repeated_repeated_inner_
		, _gen_MsgID_repeated_integer_
		, _gen_MsgID_repeated_string_
		, _gen_MsgID_repeated_sub_
		, _gen_MsgID_repeated_sub_repeated_sub_inner_
		, _gen_MsgID_message_size_problem_sub_message_same_address_
		, _gen_MsgID_string_access_
		, _gen_MsgID_string_message_
		, _gen_MsgID_message_size_problem_sub_message_
		, _gen_MsgID_message_size_problem_sub_message_same_address_sub_with_same_address_
		, _gen_MsgID_unsigned_integer_message_
	};
	enum // Enum IDs
	{
		Enum_void_ID_, // Dummy entry, ensures IDs starts at 1
		// Meta info for Type
		_gen_EnumID_EnumData_Type,
		// Meta info for Empty
		_gen_EnumID_EnumData_Empty,
		// Meta info for GlobalType
		_gen_EnumID_GlobalType,

		_gen_dummy_EnumID // Only present to allow preceding entries to always end in a comma
	};

	enum // Enum values
	{
		// Meta info for Type
		_gen_EnumValueCount_EnumData_Type = 3,
		// Meta info for Empty
		_gen_EnumValueCount_EnumData_Empty = 0,
		// Meta info for GlobalType
		_gen_EnumValueCount_GlobalType = 2,

		_gen_dummy_EnumValue // Only present to allow preceding entries to always end in a comma
	};
	enum // Enum names
	{
		// Meta info for Type
		_gen_Enum_EnumData_Type,
		// Meta info for Empty
		_gen_Enum_EnumData_Empty,
		// Meta info for GlobalType
		_gen_Enum_GlobalType,

		// Enum count is calculated at compile time
		_gen_Enum_Count
	};

	// List of message descriptors. They are initially NULL and assigned an object when the message is used.
	mutable OpProtobufMessage *message_list[_gen_Message_Count];

	// List of IDs for enums, assigned in Construct().
	unsigned enum_id_list[3];

};


class OtScopeTestService_SI
	: public OpScopeService
	, public OtScopeTestService_MessageSet
{
public:
	OtScopeTestService_SI(const uni_char* id = NULL, OpScopeServiceManager *manager = NULL, ControlType control = CONTROL_MANUAL);
	virtual ~OtScopeTestService_SI();

	enum CommandEnum
	{
		  Command_GetData = 1
		, Command_SetData = 2
		, Command_Add = 3
		, Command_Nop = 4
		, Command_OnEvent = 5
		, Command_OnNestedMessage = 8
		, Command_OnOptionalMessage = 9
		, Command_OnRepeatedMessage = 10
		, Command_OnMissingTrailMessage = 11
		, Command_OnIntMessage = 12
		, Command_OnUintMessage = 13
		, Command_OnFloatMessage = 14
		, Command_OnStringMessage = 15
		, Command_OnBinaryMessage = 16
		, Command_OnOptionalSub = 17
		, Command_OnRepeatedInt = 18
		, Command_OnRepeatedFloat = 19
		, Command_OnRepeatedString = 20
		, Command_OnRepeatedBinary = 21
		, Command_OnRepeatedSub = 22
		, Command_OnOptionalInt = 23
		, Command_OnMissingInput = 24
		, Command_OnIntAccess = 25
		, Command_OnFloatAccess = 26
		, Command_OnByteAccess = 27
		, Command_OnStringAccess = 28
		, Command_GetRepeatedData = 29
		, Command_OnSizeProblem = 30
		, Command_OnEnum = 31
		, Command_AsyncCommand = 32
		, Command_FormatError = 33
		, Command_TestMixedStrings = 34
		, Command_TestMixedBytes = 35
		, Command_InspectElement = 36

		, Command_Count = 34 // Number of commands in this service
	};
	// This class contains the descriptors or all commands of this service
	class Descriptors
	    : public OtScopeTestService_Descriptors
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
	virtual OP_STATUS DoGetData(OutData &out) = 0;
	virtual OP_STATUS DoSetData(const InData &in) = 0;
	virtual OP_STATUS DoAdd(const InAdd &in, OutAdd &out) = 0;
	virtual OP_STATUS DoNop() = 0;
	virtual OP_STATUS DoGetRepeatedData(const GetRepeatedDataArg &in, RepeatedData &out) = 0;
	virtual OP_STATUS DoFormatError(const FormatErrorArg &in) = 0;
	virtual OP_STATUS DoTestMixedStrings(const MixedStringType &in, MixedStringType &out) = 0;
	virtual OP_STATUS DoTestMixedBytes(const MixedByteType &in, MixedByteType &out) = 0;
	virtual OP_STATUS DoInspectElement(const InspectElementArg &in) = 0;
	virtual OP_STATUS DoAsyncCommand(const AsyncArgs &in, unsigned int async_tag) = 0;

	// Event functions
	OP_STATUS SendOnEvent(const Event &msg);
	OP_STATUS SendOnNestedMessage(const Outer &msg);
	OP_STATUS SendOnOptionalMessage(const Optional &msg);
	OP_STATUS SendOnRepeatedMessage(const Repeated &msg);
	OP_STATUS SendOnMissingTrailMessage(const MissingTrail &msg);
	OP_STATUS SendOnIntMessage(const IntegerMessage &msg);
	OP_STATUS SendOnUintMessage(const UnsignedIntegerMessage &msg);
	OP_STATUS SendOnFloatMessage(const FloatMessage &msg);
	OP_STATUS SendOnStringMessage(const StringMessage &msg);
	OP_STATUS SendOnBinaryMessage(const OnesAndZeroes &msg);
	OP_STATUS SendOnOptionalSub(const OptionalSub &msg);
	OP_STATUS SendOnRepeatedInt(const RepeatedInteger &msg);
	OP_STATUS SendOnRepeatedFloat(const RepeatedFloat &msg);
	OP_STATUS SendOnRepeatedString(const RepeatedString &msg);
	OP_STATUS SendOnRepeatedBinary(const RepeatedBinary &msg);
	OP_STATUS SendOnRepeatedSub(const RepeatedSub &msg);
	OP_STATUS SendOnOptionalInt(const OptionalInteger &msg);
	OP_STATUS SendOnMissingInput(const MissingInput &msg);
	OP_STATUS SendOnIntAccess(const IntAccess &msg);
	OP_STATUS SendOnFloatAccess(const FloatAccess &msg);
	OP_STATUS SendOnByteAccess(const BytesAccess &msg);
	OP_STATUS SendOnStringAccess(const StringAccess &msg);
	OP_STATUS SendOnSizeProblem(const MessageSizeProblem &msg);
	OP_STATUS SendOnEnum(const EnumData &msg);
	OP_STATUS SendAsyncCommand(const AsyncData &msg, unsigned int tag);


	Descriptors *GetDescriptors() const;



// Service API implementation: END

};




#endif // defined(SELFTEST) && defined(SCOPE_SUPPORT)

#endif // G_SCOPE_TEST_SERVICE_INTERFACE_H
