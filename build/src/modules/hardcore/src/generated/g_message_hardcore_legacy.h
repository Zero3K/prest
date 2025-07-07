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

// Generated from ../../modules/hardcore/component/legacy.proto

#ifndef G_MESSAGE_HARDCORE_LEGACY_H
#define G_MESSAGE_HARDCORE_LEGACY_H



#include "modules/hardcore/src/generated/g_proto_hardcore_legacy.h"
#include "modules/hardcore/component/OpTypedMessage.h"


	// BEGIN: Message classes
	/**
	 * Message wrapping the legacy (Message, MH_PARAM_1, MH_PARAM_2, MessageHandler*) structure.
	 * 
	 * These messages are automatically pooled for performance reasons.
	 */
	class OpLegacyMessage
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
		static const unsigned Type = 1552190051u;

		virtual ~OpLegacyMessage();

		static OpLegacyMessage* Create()
		{
		    OpMessageAddress src;
		    OpMessageAddress dst;
		    double delay = 0;
		    return OP_NEW(OpLegacyMessage, (src, dst, delay));
		}

		static OpLegacyMessage* Create(
			const OpMessageAddress& src,
			const OpMessageAddress& dst = OpMessageAddress(),
			double delay = 0)
		{
			return OP_NEW(OpLegacyMessage, (src, dst, delay));
		}

		static OpLegacyMessage* Create(
			OpMessage message_arg,
			MH_PARAM_1 param1_arg,
			MH_PARAM_2 param2_arg,
			MessageHandler* message_handler_arg,
			const OpMessageAddress& src = OpMessageAddress(),
			const OpMessageAddress& dst = OpMessageAddress(),
			double delay = 0)
		{
			OpLegacyMessage *obj = OP_NEW(OpLegacyMessage, (src, dst, delay, message_arg, param1_arg, param2_arg, message_handler_arg));
			if (obj)
			{
				if (OpStatus::IsSuccess(obj->Construct()))
					return obj;

				OP_DELETE(obj);
			}
			return NULL;
		}

		static OpLegacyMessage* Cast(const OpTypedMessage* msg);

		static OpLegacyMessage* Deserialize(
			const OpMessageAddress& src,
			const OpMessageAddress& dst,
			double delay,
			const OpData& data);

		virtual OP_STATUS Serialize(OpData& data) const;

		virtual const char *GetTypeString() const;

		// Accessors/modifiers comes here
		/**
		 * Check if the field @c message is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasMessage() const
		{
			return protobuf_data.HasMessage();
		}

		/**
		 * Get the field @c message.
		 * 
		 * OpMessage numeric type.
		 */
		OpMessage GetMessage() const
		{
			return protobuf_data.GetMessage();
		}

		/**
		 * Set the field @c message.
		 * 
		 * OpMessage numeric type.
		 */
		void SetMessage(OpMessage v)
		{
			protobuf_data.SetMessage(v);
		}

		/**
		 * Check if the field @c param1 is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasParam1() const
		{
			return protobuf_data.HasParam1();
		}

		/**
		 * Get the field @c param1.
		 * 
		 * Parameter 1.
		 */
		MH_PARAM_1 GetParam1() const
		{
			return protobuf_data.GetParam1();
		}

		/**
		 * Set the field @c param1.
		 * 
		 * Parameter 1.
		 */
		void SetParam1(MH_PARAM_1 v)
		{
			protobuf_data.SetParam1(v);
		}

		/**
		 * Check if the field @c param2 is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasParam2() const
		{
			return protobuf_data.HasParam2();
		}

		/**
		 * Get the field @c param2.
		 * 
		 * Parameter 2.
		 */
		MH_PARAM_2 GetParam2() const
		{
			return protobuf_data.GetParam2();
		}

		/**
		 * Set the field @c param2.
		 * 
		 * Parameter 2.
		 */
		void SetParam2(MH_PARAM_2 v)
		{
			protobuf_data.SetParam2(v);
		}

		/**
		 * Check if the field @c messageHandler is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasMessageHandler() const
		{
			return protobuf_data.HasMessageHandler();
		}

		/**
		 * Get the field @c messageHandler.
		 * 
		 * Pointer to the message handler that is to receive the callback.
		 */
		MessageHandler* GetMessageHandler() const
		{
			return protobuf_data.GetMessageHandler();
		}

		/**
		 * Set the field @c messageHandler.
		 * 
		 * Pointer to the message handler that is to receive the callback.
		 */
		void SetMessageHandler(MessageHandler* v)
		{
			protobuf_data.SetMessageHandler(v);
		}



	protected:
		/** Use OpMemoryPool allocation with OP_NEW */
		OP_USE_MEMORY_POOL_DECL;

		OpLegacyMessage(
				const OpMessageAddress& src,
				const OpMessageAddress& dst,
				double delay
				, OpMessage message_arg
				, MH_PARAM_1 param1_arg
				, MH_PARAM_2 param2_arg
				, MessageHandler* message_handler_arg
				)
			: OpTypedMessage(Type, src, dst, delay)
			, protobuf_data(message_arg, param1_arg, param2_arg, message_handler_arg)
		{
		}

		OpLegacyMessage(
				const OpMessageAddress& src,
				const OpMessageAddress& dst,
				double delay
				)
			: OpTypedMessage(Type, src, dst, delay)
			, protobuf_data()
		{
		}

		OP_STATUS Construct(

		)
		{
			return protobuf_data.Construct();
		}

	private:
		OpHardcoreLegacy_MessageSet::Legacy protobuf_data;
	};



	// END: Message classes


#endif // G_MESSAGE_HARDCORE_LEGACY_H
