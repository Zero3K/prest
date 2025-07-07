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

// Generated from ../../modules/protobuf/selftest/bytes.proto



#ifndef G_PROTO_PROTOBUF_BYTES_H
#define G_PROTO_PROTOBUF_BYTES_H

#ifdef SELFTEST

#include "modules/opdata/OpData.h"
#include "modules/protobuf/src/protobuf.h"
#include "modules/protobuf/src/protobuf_bitfield.h"
#include "modules/protobuf/src/protobuf_message.h"
#include "modules/protobuf/src/protobuf_vector.h"
#include "modules/util/adt/bytebuffer.h"
#include "modules/util/adt/opvector.h"



class OpProtobufBytes_Descriptors;

class OpProtobufBytes_MessageSet
{
public:
	// BEGIN: ctor/dtor

	OpProtobufBytes_MessageSet();
	virtual ~OpProtobufBytes_MessageSet();

	// END: ctor/dtor
	// BEGIN: Enums

	// End: Enums

	// BEGIN: Message classes

	// Forward declarations
	class TestBytes;

	class TestBytes
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 6
		};
		// END: Internal enums


		TestBytes(
			const OpData & bytes1_arg = OpData(),
			const OpData * bytes3_arg = NULL
			)
			: _bytes1(bytes1_arg)
			, encoded_size_(-1)
		{
			if (bytes3_arg)
			{
				_bytes3 = *bytes3_arg;
				has_bits_.Reference().SetBit(2);

			}
		}
		OP_STATUS Construct(
			const ByteBuffer & bytes2_arg,
			const ByteBuffer * bytes4_arg = NULL
			)
		{
			RETURN_IF_ERROR(OpProtobufAppend(_bytes2, bytes2_arg));
			if (bytes4_arg)
			{
				RETURN_IF_ERROR(OpProtobufAppend(_bytes4, *bytes4_arg));
				has_bits_.Reference().SetBit(3);

			}
			return OpStatus::OK;
		}

		// Checkers
		/**
		 * Check if the field @c bytes1 is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasBytes1() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c bytes2 is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasBytes2() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c bytes3 is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasBytes3() const
		{
			return has_bits_.Reference().IsSet(2);
		}

		/**
		 * Check if the field @c bytes4 is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasBytes4() const
		{
			return has_bits_.Reference().IsSet(3);
		}

		/**
		 * Check if the field @c bytes5 is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasBytes5() const
		{
			return has_bits_.Reference().IsSet(4);
		}

		/**
		 * Check if the field @c bytes6 is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasBytes6() const
		{
			return has_bits_.Reference().IsSet(5);
		}

		// Getters

		/**
		 * Get the field @c bytes1.
		 */
		const OpData & GetBytes1() const
		{
			return _bytes1;
		}

		/**
		 * Get the field @c bytes2.
		 */
		const ByteBuffer & GetBytes2() const
		{
			return _bytes2;
		}

		/**
		 * Get the field @c bytes3.
		 */
		const OpData & GetBytes3() const
		{
			return _bytes3;
		}

		/**
		 * Get the field @c bytes4.
		 */
		const ByteBuffer & GetBytes4() const
		{
			return _bytes4;
		}

		/**
		 * Get the field @c bytes5.
		 */
		const OpProtobufValueVector<OpData> & GetBytes5() const
		{
			return _bytes5;
		}

		/**
		 * Get the field @c bytes6.
		 */
		const OpAutoVector<ByteBuffer> & GetBytes6() const
		{
			return _bytes6;
		}

		// Setters

		/**
		 * Set the field @c bytes1.
		 */
		OpData & GetBytes1Ref();

		/**
		 * Set the field @c bytes1.
		 */
		OP_STATUS SetBytes1(const OpData & v);

		/**
		 * Set the field @c bytes1.
		 */
		OP_STATUS SetBytes1(const char * v, int l);

		/**
		 * Set the field @c bytes2.
		 */
		ByteBuffer & GetBytes2Ref();

		/**
		 * Set the field @c bytes2.
		 */
		OP_STATUS SetBytes2(const ByteBuffer & v);

		/**
		 * Set the field @c bytes2.
		 */
		OP_STATUS SetBytes2(const char * v, int l);

		/**
		 * Set the field @c bytes3.
		 */
		OpData & GetBytes3Ref();

		/**
		 * Set the field @c bytes3.
		 */
		OP_STATUS SetBytes3(const OpData & v);

		/**
		 * Set the field @c bytes3.
		 */
		OP_STATUS SetBytes3(const char * v, int l);

		/**
		 * Set the field @c bytes4.
		 */
		ByteBuffer & GetBytes4Ref();

		/**
		 * Set the field @c bytes4.
		 */
		OP_STATUS SetBytes4(const ByteBuffer & v);

		/**
		 * Set the field @c bytes4.
		 */
		OP_STATUS SetBytes4(const char * v, int l);

		/**
		 * Set the field @c bytes5.
		 */
		OpProtobufValueVector<OpData> & GetBytes5Ref();

		/**
		 * Set the field @c bytes5.
		 */
		OP_STATUS AppendToBytes5(const OpData &v);

		/**
		 * Set the field @c bytes5.
		 */
		OP_STATUS AppendToBytes5(const char * v, int l);

		/**
		 * Set the field @c bytes6.
		 */
		OpAutoVector<ByteBuffer> & GetBytes6Ref();

		/**
		 * Set the field @c bytes6.
		 */
		OP_STATUS AppendToBytes6(const ByteBuffer &v);

		/**
		 * Set the field @c bytes6.
		 */
		OP_STATUS AppendToBytes6(const char * v, int l);

		/**
		 * Set the field @c bytes6.
		 */
		ByteBuffer * AppendNewBytes6();

		static const OpProtobufMessage *GetMessageDescriptor(OpProtobufBytes_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		OpData _bytes1;
		ByteBuffer _bytes2;
		OpData _bytes3;
		ByteBuffer _bytes4;
		OpProtobufValueVector<OpData> _bytes5;
		OpAutoVector<ByteBuffer> _bytes6;

		OpProtobufBitField<6> has_bits_;
		mutable int                 encoded_size_;
	};



	// END: Message classes

};




#endif // SELFTEST

#endif // G_PROTO_PROTOBUF_BYTES_H
