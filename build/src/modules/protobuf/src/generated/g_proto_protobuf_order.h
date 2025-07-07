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

// Generated from ../../modules/protobuf/selftest/order.proto



#ifndef G_PROTO_PROTOBUF_ORDER_H
#define G_PROTO_PROTOBUF_ORDER_H

#ifdef SELFTEST

#include "modules/opdata/OpData.h"
#include "modules/opdata/UniString.h"
#include "modules/protobuf/src/protobuf.h"
#include "modules/protobuf/src/protobuf_bitfield.h"
#include "modules/protobuf/src/protobuf_message.h"
#include "modules/util/opstring.h"



class OpProtobufOrder_Descriptors;

class OpProtobufOrder_MessageSet
{
public:
	// BEGIN: ctor/dtor

	OpProtobufOrder_MessageSet();
	virtual ~OpProtobufOrder_MessageSet();

	// END: ctor/dtor
	// BEGIN: Enums

	// End: Enums

	// BEGIN: Message classes

	// Forward declarations
	class TestOpStringOrder;
	class TestOrder;

	class TestOpStringOrder
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 5
		};
		// END: Internal enums


		TestOpStringOrder(
			INT32 size_arg = 5,
			const OpData & data_arg = OpData(),
			const UniString * name_arg = NULL
			)
			: _size(size_arg)
			, _data(data_arg)
			, encoded_size_(-1)
		{
			if (name_arg)
			{
				_name = *name_arg;
				has_bits_.Reference().SetBit(2);

			}
		}
		OP_STATUS Construct(
			const OpString & order_type_arg,
			const OpString & kind_arg
			)
		{
			RETURN_IF_ERROR(_orderType.Set(order_type_arg));
			RETURN_IF_ERROR(_kind.Set(kind_arg));
			return OpStatus::OK;
		}

		// Checkers
		/**
		 * Check if the field @c size is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasSize() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c data is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasData() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c name is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasName() const
		{
			return has_bits_.Reference().IsSet(2);
		}

		/**
		 * Check if the field @c orderType is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasOrderType() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c kind is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasKind() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c size.
		 */
		INT32 GetSize() const
		{
			return _size;
		}

		/**
		 * Get the field @c data.
		 */
		const OpData & GetData() const
		{
			return _data;
		}

		/**
		 * Get the field @c name.
		 */
		const UniString & GetName() const
		{
			return _name;
		}

		/**
		 * Get the field @c orderType.
		 */
		const OpString & GetOrderType() const
		{
			return _orderType;
		}

		/**
		 * Get the field @c kind.
		 */
		const OpString & GetKind() const
		{
			return _kind;
		}

		// Setters

		/**
		 * Set the field @c size.
		 */
		void SetSize(INT32 v)
		{
			_size = v;
		}

		/**
		 * Set the field @c data.
		 */
		OP_STATUS SetData(const OpData & v);

		/**
		 * Set the field @c data.
		 */
		OP_STATUS SetData(const char * v, int l);

		/**
		 * Set the field @c name.
		 */
		OP_STATUS SetName(const UniString & v);

		/**
		 * Set the field @c name.
		 */
		OP_STATUS SetName(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c orderType.
		 */
		OP_STATUS SetOrderType(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c kind.
		 */
		OP_STATUS SetKind(const uni_char * v, int l = KAll);

		static const OpProtobufMessage *GetMessageDescriptor(OpProtobufOrder_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		INT32 _size;
		OpData _data;
		UniString _name;
		OpString _orderType;
		OpString _kind;

		OpProtobufBitField<5> has_bits_;
		mutable int                 encoded_size_;
	};


	class TestOrder
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 5
		};
		// END: Internal enums


		TestOrder(
			INT32 size_arg = 5,
			const OpData & data_arg = OpData(),
			const UniString * name_arg = NULL,
			const UniString & order_type_arg = UniString(),
			const UniString & kind_arg = UniString()
			)
			: _size(size_arg)
			, _data(data_arg)
			, _orderType(order_type_arg)
			, _kind(kind_arg)
			, encoded_size_(-1)
		{
			if (name_arg)
			{
				_name = *name_arg;
				has_bits_.Reference().SetBit(2);

			}
		}
		OP_STATUS Construct(
			)
		{
			return OpStatus::OK;
		}

		// Checkers
		/**
		 * Check if the field @c size is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasSize() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c data is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasData() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c name is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasName() const
		{
			return has_bits_.Reference().IsSet(2);
		}

		/**
		 * Check if the field @c orderType is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasOrderType() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c kind is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasKind() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c size.
		 */
		INT32 GetSize() const
		{
			return _size;
		}

		/**
		 * Get the field @c data.
		 */
		const OpData & GetData() const
		{
			return _data;
		}

		/**
		 * Get the field @c name.
		 */
		const UniString & GetName() const
		{
			return _name;
		}

		/**
		 * Get the field @c orderType.
		 */
		const UniString & GetOrderType() const
		{
			return _orderType;
		}

		/**
		 * Get the field @c kind.
		 */
		const UniString & GetKind() const
		{
			return _kind;
		}

		// Setters

		/**
		 * Set the field @c size.
		 */
		void SetSize(INT32 v)
		{
			_size = v;
		}

		/**
		 * Set the field @c data.
		 */
		OP_STATUS SetData(const OpData & v);

		/**
		 * Set the field @c data.
		 */
		OP_STATUS SetData(const char * v, int l);

		/**
		 * Set the field @c name.
		 */
		OP_STATUS SetName(const UniString & v);

		/**
		 * Set the field @c name.
		 */
		OP_STATUS SetName(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c orderType.
		 */
		OP_STATUS SetOrderType(const UniString & v);

		/**
		 * Set the field @c orderType.
		 */
		OP_STATUS SetOrderType(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c kind.
		 */
		OP_STATUS SetKind(const UniString & v);

		/**
		 * Set the field @c kind.
		 */
		OP_STATUS SetKind(const uni_char * v, int l = KAll);

		static const OpProtobufMessage *GetMessageDescriptor(OpProtobufOrder_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		INT32 _size;
		OpData _data;
		UniString _name;
		UniString _orderType;
		UniString _kind;

		OpProtobufBitField<5> has_bits_;
		mutable int                 encoded_size_;
	};



	// END: Message classes

};




#endif // SELFTEST

#endif // G_PROTO_PROTOBUF_ORDER_H
