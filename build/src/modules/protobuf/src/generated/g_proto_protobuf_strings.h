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

// Generated from ../../modules/protobuf/selftest/strings.proto



#ifndef G_PROTO_PROTOBUF_STRINGS_H
#define G_PROTO_PROTOBUF_STRINGS_H

#ifdef SELFTEST

#include "modules/opdata/UniString.h"
#include "modules/protobuf/src/protobuf.h"
#include "modules/protobuf/src/protobuf_bitfield.h"
#include "modules/protobuf/src/protobuf_message.h"
#include "modules/protobuf/src/protobuf_vector.h"
#include "modules/util/adt/opvector.h"
#include "modules/util/opstring.h"



class OpProtobufStrings_Descriptors;

class OpProtobufStrings_MessageSet
{
public:
	// BEGIN: ctor/dtor

	OpProtobufStrings_MessageSet();
	virtual ~OpProtobufStrings_MessageSet();

	// END: ctor/dtor
	// BEGIN: Enums

	// End: Enums

	// BEGIN: Message classes

	// Forward declarations
	class TestString;

	class TestString
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 6
		};
		// END: Internal enums


		TestString(
			const UniString & name1_arg = UniString(),
			const UniString * name3_arg = NULL
			)
			: _name1(name1_arg)
			, encoded_size_(-1)
		{
			if (name3_arg)
			{
				_name3 = *name3_arg;
				has_bits_.Reference().SetBit(2);

			}
		}
		OP_STATUS Construct(
			const OpString & name2_arg,
			const OpString * name4_arg = NULL
			)
		{
			RETURN_IF_ERROR(_name2.Set(name2_arg));
			if (name4_arg)
			{
				RETURN_IF_ERROR(_name4.Set(*name4_arg));
				has_bits_.Reference().SetBit(3);

			}
			return OpStatus::OK;
		}

		// Checkers
		/**
		 * Check if the field @c name1 is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasName1() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c name2 is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasName2() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c name3 is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasName3() const
		{
			return has_bits_.Reference().IsSet(2);
		}

		/**
		 * Check if the field @c name4 is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasName4() const
		{
			return has_bits_.Reference().IsSet(3);
		}

		/**
		 * Check if the field @c name5 is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasName5() const
		{
			return has_bits_.Reference().IsSet(4);
		}

		/**
		 * Check if the field @c name6 is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasName6() const
		{
			return has_bits_.Reference().IsSet(5);
		}

		// Getters

		/**
		 * Get the field @c name1.
		 */
		const UniString & GetName1() const
		{
			return _name1;
		}

		/**
		 * Get the field @c name2.
		 */
		const OpString & GetName2() const
		{
			return _name2;
		}

		/**
		 * Get the field @c name3.
		 */
		const UniString & GetName3() const
		{
			return _name3;
		}

		/**
		 * Get the field @c name4.
		 */
		const OpString & GetName4() const
		{
			return _name4;
		}

		/**
		 * Get the field @c name5.
		 */
		const OpProtobufValueVector<UniString> & GetName5() const
		{
			return _name5;
		}

		/**
		 * Get the field @c name6.
		 */
		const OpAutoVector<OpString> & GetName6() const
		{
			return _name6;
		}

		// Setters

		/**
		 * Set the field @c name1.
		 */
		UniString & GetName1Ref();

		/**
		 * Set the field @c name1.
		 */
		OP_STATUS SetName1(const UniString & v);

		/**
		 * Set the field @c name1.
		 */
		OP_STATUS SetName1(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c name1.
		 */
		OP_STATUS SetName1(const char * v, int l = KAll);

		/**
		 * Set the field @c name2.
		 */
		OpString & GetName2Ref();

		/**
		 * Set the field @c name2.
		 */
		OP_STATUS SetName2(const OpString & v);

		/**
		 * Set the field @c name2.
		 */
		OP_STATUS SetName2(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c name2.
		 */
		OP_STATUS SetName2(const char * v, int l = KAll);

		/**
		 * Set the field @c name3.
		 */
		UniString & GetName3Ref();

		/**
		 * Set the field @c name3.
		 */
		OP_STATUS SetName3(const UniString & v);

		/**
		 * Set the field @c name3.
		 */
		OP_STATUS SetName3(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c name3.
		 */
		OP_STATUS SetName3(const char * v, int l = KAll);

		/**
		 * Set the field @c name4.
		 */
		OpString & GetName4Ref();

		/**
		 * Set the field @c name4.
		 */
		OP_STATUS SetName4(const OpString & v);

		/**
		 * Set the field @c name4.
		 */
		OP_STATUS SetName4(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c name4.
		 */
		OP_STATUS SetName4(const char * v, int l = KAll);

		/**
		 * Set the field @c name5.
		 */
		OpProtobufValueVector<UniString> & GetName5Ref();

		/**
		 * Set the field @c name5.
		 */
		OP_STATUS AppendToName5(const UniString &v);

		/**
		 * Set the field @c name5.
		 */
		OP_STATUS AppendToName5(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c name5.
		 */
		OP_STATUS AppendToName5(const char * v, int l = KAll);

		/**
		 * Set the field @c name6.
		 */
		OpAutoVector<OpString> & GetName6Ref();

		/**
		 * Set the field @c name6.
		 */
		OP_STATUS AppendToName6(const OpString &v);

		/**
		 * Set the field @c name6.
		 */
		OP_STATUS AppendToName6(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c name6.
		 */
		OP_STATUS AppendToName6(const char * v, int l = KAll);

		/**
		 * Set the field @c name6.
		 */
		OpString * AppendNewName6();

		static const OpProtobufMessage *GetMessageDescriptor(OpProtobufStrings_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		UniString _name1;
		OpString _name2;
		UniString _name3;
		OpString _name4;
		OpProtobufValueVector<UniString> _name5;
		OpAutoVector<OpString> _name6;

		OpProtobufBitField<6> has_bits_;
		mutable int                 encoded_size_;
	};



	// END: Message classes

};




#endif // SELFTEST

#endif // G_PROTO_PROTOBUF_STRINGS_H
