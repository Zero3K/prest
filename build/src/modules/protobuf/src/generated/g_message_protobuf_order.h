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

#ifndef G_MESSAGE_PROTOBUF_ORDER_H
#define G_MESSAGE_PROTOBUF_ORDER_H

#ifdef SELFTEST

#include "modules/protobuf/src/generated/g_proto_protobuf_order.h"
#include "modules/hardcore/component/OpTypedMessage.h"


	// BEGIN: Message classes
	class OpTestOpStringOrderMessage
		: public OpTypedMessage
	{
	public:
		/**
		 * The type for this message class.
		 *
		 * @note The reason this contains a integer value and not an enum
		 *       is to avoid uneccesary dependencies and helps avoid
		 *       re-compiles whenever a message is added, removed or renamed.
		 */
		static const unsigned Type = 3108980057u;

		virtual ~OpTestOpStringOrderMessage();

		static OpTestOpStringOrderMessage* Create()
		{
		    OpMessageAddress src;
		    OpMessageAddress dst;
		    double delay = 0;
		    return OP_NEW(OpTestOpStringOrderMessage, (src, dst, delay));
		}

		static OpTestOpStringOrderMessage* Create(
			const OpMessageAddress& src,
			const OpMessageAddress& dst = OpMessageAddress(),
			double delay = 0)
		{
			return OP_NEW(OpTestOpStringOrderMessage, (src, dst, delay));
		}

		static OpTestOpStringOrderMessage* Create(
			const OpString & order_type_arg,
			const OpString & kind_arg,
			INT32 size_arg = 5,
			const OpData & data_arg = OpData(),
			const UniString * name_arg = NULL,
			const OpMessageAddress& src = OpMessageAddress(),
			const OpMessageAddress& dst = OpMessageAddress(),
			double delay = 0)
		{
			OpTestOpStringOrderMessage *obj = OP_NEW(OpTestOpStringOrderMessage, (src, dst, delay, size_arg, data_arg, name_arg));
			if (obj)
			{
				if (OpStatus::IsSuccess(obj->Construct(order_type_arg, kind_arg)))
					return obj;

				OP_DELETE(obj);
			}
			return NULL;
		}

		static OpTestOpStringOrderMessage* Cast(const OpTypedMessage* msg);

		static OpTestOpStringOrderMessage* Deserialize(
			const OpMessageAddress& src,
			const OpMessageAddress& dst,
			double delay,
			const OpData& data);

		virtual OP_STATUS Serialize(OpData& data) const;

		virtual const char *GetTypeString() const;

		// Accessors/modifiers comes here
		/**
		 * Check if the field @c size is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasSize() const
		{
			return protobuf_data.HasSize();
		}

		/**
		 * Get the field @c size.
		 */
		INT32 GetSize() const
		{
			return protobuf_data.GetSize();
		}

		/**
		 * Set the field @c size.
		 */
		void SetSize(INT32 v)
		{
			protobuf_data.SetSize(v);
		}

		/**
		 * Check if the field @c data is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasData() const
		{
			return protobuf_data.HasData();
		}

		/**
		 * Get the field @c data.
		 */
		const OpData & GetData() const
		{
			return protobuf_data.GetData();
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
		 * Check if the field @c name is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasName() const
		{
			return protobuf_data.HasName();
		}

		/**
		 * Get the field @c name.
		 */
		const UniString & GetName() const
		{
			return protobuf_data.GetName();
		}

		/**
		 * Set the field @c name.
		 */
		OP_STATUS SetName(const UniString & v);

		/**
		 * Set the field @c name.
		 */
		OP_STATUS SetName(const uni_char * v, int l = KAll);

		/**
		 * Check if the field @c orderType is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasOrderType() const
		{
			return protobuf_data.HasOrderType();
		}

		/**
		 * Get the field @c orderType.
		 */
		const OpString & GetOrderType() const
		{
			return protobuf_data.GetOrderType();
		}

		/**
		 * Set the field @c orderType.
		 */
		OP_STATUS SetOrderType(const uni_char * v, int l = KAll);

		/**
		 * Check if the field @c kind is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasKind() const
		{
			return protobuf_data.HasKind();
		}

		/**
		 * Get the field @c kind.
		 */
		const OpString & GetKind() const
		{
			return protobuf_data.GetKind();
		}

		/**
		 * Set the field @c kind.
		 */
		OP_STATUS SetKind(const uni_char * v, int l = KAll);



	protected:

		OpTestOpStringOrderMessage(
				const OpMessageAddress& src,
				const OpMessageAddress& dst,
				double delay
				, INT32 size_arg = 5
				, const OpData & data_arg = OpData()
				, const UniString * name_arg = NULL
				)
			: OpTypedMessage(Type, src, dst, delay)
			, protobuf_data(size_arg, data_arg, name_arg)
		{
		}



		OP_STATUS Construct(
			const OpString & order_type_arg,
			const OpString & kind_arg
		)
		{
			return protobuf_data.Construct(order_type_arg, kind_arg);
		}

	private:
		OpProtobufOrder_MessageSet::TestOpStringOrder protobuf_data;
	};


	class OpTestOrderMessage
		: public OpTypedMessage
	{
	public:
		/**
		 * The type for this message class.
		 *
		 * @note The reason this contains a integer value and not an enum
		 *       is to avoid uneccesary dependencies and helps avoid
		 *       re-compiles whenever a message is added, removed or renamed.
		 */
		static const unsigned Type = 1811273577u;

		virtual ~OpTestOrderMessage();



		static OpTestOrderMessage* Create(
			const OpMessageAddress& src,
			const OpMessageAddress& dst = OpMessageAddress(),
			double delay = 0)
		{
			return OP_NEW(OpTestOrderMessage, (src, dst, delay));
		}

		static OpTestOrderMessage* Create(
			INT32 size_arg = 5,
			const OpData & data_arg = OpData(),
			const UniString * name_arg = NULL,
			const UniString & order_type_arg = UniString(),
			const UniString & kind_arg = UniString(),
			const OpMessageAddress& src = OpMessageAddress(),
			const OpMessageAddress& dst = OpMessageAddress(),
			double delay = 0)
		{
			OpTestOrderMessage *obj = OP_NEW(OpTestOrderMessage, (src, dst, delay, size_arg, data_arg, name_arg, order_type_arg, kind_arg));
			if (obj)
			{
				if (OpStatus::IsSuccess(obj->Construct()))
					return obj;

				OP_DELETE(obj);
			}
			return NULL;
		}

		static OpTestOrderMessage* Cast(const OpTypedMessage* msg);

		static OpTestOrderMessage* Deserialize(
			const OpMessageAddress& src,
			const OpMessageAddress& dst,
			double delay,
			const OpData& data);

		virtual OP_STATUS Serialize(OpData& data) const;

		virtual const char *GetTypeString() const;

		// Accessors/modifiers comes here
		/**
		 * Check if the field @c size is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasSize() const
		{
			return protobuf_data.HasSize();
		}

		/**
		 * Get the field @c size.
		 */
		INT32 GetSize() const
		{
			return protobuf_data.GetSize();
		}

		/**
		 * Set the field @c size.
		 */
		void SetSize(INT32 v)
		{
			protobuf_data.SetSize(v);
		}

		/**
		 * Check if the field @c data is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasData() const
		{
			return protobuf_data.HasData();
		}

		/**
		 * Get the field @c data.
		 */
		const OpData & GetData() const
		{
			return protobuf_data.GetData();
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
		 * Check if the field @c name is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasName() const
		{
			return protobuf_data.HasName();
		}

		/**
		 * Get the field @c name.
		 */
		const UniString & GetName() const
		{
			return protobuf_data.GetName();
		}

		/**
		 * Set the field @c name.
		 */
		OP_STATUS SetName(const UniString & v);

		/**
		 * Set the field @c name.
		 */
		OP_STATUS SetName(const uni_char * v, int l = KAll);

		/**
		 * Check if the field @c orderType is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasOrderType() const
		{
			return protobuf_data.HasOrderType();
		}

		/**
		 * Get the field @c orderType.
		 */
		const UniString & GetOrderType() const
		{
			return protobuf_data.GetOrderType();
		}

		/**
		 * Set the field @c orderType.
		 */
		OP_STATUS SetOrderType(const UniString & v);

		/**
		 * Set the field @c orderType.
		 */
		OP_STATUS SetOrderType(const uni_char * v, int l = KAll);

		/**
		 * Check if the field @c kind is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasKind() const
		{
			return protobuf_data.HasKind();
		}

		/**
		 * Get the field @c kind.
		 */
		const UniString & GetKind() const
		{
			return protobuf_data.GetKind();
		}

		/**
		 * Set the field @c kind.
		 */
		OP_STATUS SetKind(const UniString & v);

		/**
		 * Set the field @c kind.
		 */
		OP_STATUS SetKind(const uni_char * v, int l = KAll);



	protected:

		OpTestOrderMessage(
				const OpMessageAddress& src,
				const OpMessageAddress& dst,
				double delay
				, INT32 size_arg = 5
				, const OpData & data_arg = OpData()
				, const UniString * name_arg = NULL
				, const UniString & order_type_arg = UniString()
				, const UniString & kind_arg = UniString()
				)
			: OpTypedMessage(Type, src, dst, delay)
			, protobuf_data(size_arg, data_arg, name_arg, order_type_arg, kind_arg)
		{
		}



		OP_STATUS Construct(

		)
		{
			return protobuf_data.Construct();
		}

	private:
		OpProtobufOrder_MessageSet::TestOrder protobuf_data;
	};



	// END: Message classes
#endif // SELFTEST

#endif // G_MESSAGE_PROTOBUF_ORDER_H
