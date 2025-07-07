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

// Generated from ../../modules/hardcore/component/messages.proto

#ifndef G_MESSAGE_HARDCORE_MESSAGES_H
#define G_MESSAGE_HARDCORE_MESSAGES_H



#include "modules/hardcore/src/generated/g_proto_hardcore_messages.h"
#include "modules/hardcore/component/OpTypedMessage.h"


	// BEGIN: Message classes
	/**
	 * Component manager response message.
	 * 
	 * Used internally by the component infrastructure layer.
	 */
	class OpComponentManagerResponseMessage
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
		static const unsigned Type = 2229245983u;

		virtual ~OpComponentManagerResponseMessage();

		static OpComponentManagerResponseMessage* Create()
		{
		    OpMessageAddress src;
		    OpMessageAddress dst;
		    double delay = 0;
		    return OP_NEW(OpComponentManagerResponseMessage, (src, dst, delay));
		}

		static OpComponentManagerResponseMessage* Create(
			const OpMessageAddress& src,
			const OpMessageAddress& dst = OpMessageAddress(),
			double delay = 0)
		{
			return OP_NEW(OpComponentManagerResponseMessage, (src, dst, delay));
		}

		static OpComponentManagerResponseMessage* Create(
			OpComponentType component_type_arg,
			INT32 request_arg = 0,
			const OpMessageAddress& src = OpMessageAddress(),
			const OpMessageAddress& dst = OpMessageAddress(),
			double delay = 0)
		{
			OpComponentManagerResponseMessage *obj = OP_NEW(OpComponentManagerResponseMessage, (src, dst, delay, component_type_arg, request_arg));
			if (obj)
			{
				if (OpStatus::IsSuccess(obj->Construct()))
					return obj;

				OP_DELETE(obj);
			}
			return NULL;
		}

		static OpComponentManagerResponseMessage* Cast(const OpTypedMessage* msg);

		static OpComponentManagerResponseMessage* Deserialize(
			const OpMessageAddress& src,
			const OpMessageAddress& dst,
			double delay,
			const OpData& data);

		virtual OP_STATUS Serialize(OpData& data) const;

		virtual const char *GetTypeString() const;

		// Accessors/modifiers comes here
		/**
		 * Check if the field @c request is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasRequest() const
		{
			return protobuf_data.HasRequest();
		}

		/**
		 * Get the field @c request.
		 * 
		 * Request identifier.
		 */
		INT32 GetRequest() const
		{
			return protobuf_data.GetRequest();
		}

		/**
		 * Set the field @c request.
		 * 
		 * Request identifier.
		 */
		void SetRequest(INT32 v)
		{
			protobuf_data.SetRequest(v);
		}

		/**
		 * Check if the field @c componentType is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasComponentType() const
		{
			return protobuf_data.HasComponentType();
		}

		/**
		 * Get the field @c componentType.
		 * 
		 * Type of component requested.
		 */
		OpComponentType GetComponentType() const
		{
			return protobuf_data.GetComponentType();
		}

		/**
		 * Set the field @c componentType.
		 * 
		 * Type of component requested.
		 */
		void SetComponentType(OpComponentType v)
		{
			protobuf_data.SetComponentType(v);
		}



	protected:

		OpComponentManagerResponseMessage(
				const OpMessageAddress& src,
				const OpMessageAddress& dst,
				double delay
				, OpComponentType component_type_arg
				, INT32 request_arg = 0
				)
			: OpTypedMessage(Type, src, dst, delay)
			, protobuf_data(component_type_arg, request_arg)
		{
		}

		OpComponentManagerResponseMessage(
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
		OpHardcoreMessages_MessageSet::ComponentManagerResponse protobuf_data;
	};


	/**
	 * Component request message.
	 * 
	 * Used internally by the component infrastructure layer. Sent from component
	 * where a request was made to the initial component manager.
	 */
	class OpComponentRequestMessage
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
		static const unsigned Type = 1472958387u;

		virtual ~OpComponentRequestMessage();

		static OpComponentRequestMessage* Create()
		{
		    OpMessageAddress src;
		    OpMessageAddress dst;
		    double delay = 0;
		    return OP_NEW(OpComponentRequestMessage, (src, dst, delay));
		}

		static OpComponentRequestMessage* Create(
			const OpMessageAddress& src,
			const OpMessageAddress& dst = OpMessageAddress(),
			double delay = 0)
		{
			return OP_NEW(OpComponentRequestMessage, (src, dst, delay));
		}

		static OpComponentRequestMessage* Create(
			OpComponentType component_type_arg,
			const OpMessageAddress& src = OpMessageAddress(),
			const OpMessageAddress& dst = OpMessageAddress(),
			double delay = 0)
		{
			OpComponentRequestMessage *obj = OP_NEW(OpComponentRequestMessage, (src, dst, delay, component_type_arg));
			if (obj)
			{
				if (OpStatus::IsSuccess(obj->Construct()))
					return obj;

				OP_DELETE(obj);
			}
			return NULL;
		}

		static OpComponentRequestMessage* Cast(const OpTypedMessage* msg);

		static OpComponentRequestMessage* Deserialize(
			const OpMessageAddress& src,
			const OpMessageAddress& dst,
			double delay,
			const OpData& data);

		virtual OP_STATUS Serialize(OpData& data) const;

		virtual const char *GetTypeString() const;

		// Accessors/modifiers comes here
		/**
		 * Check if the field @c componentType is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasComponentType() const
		{
			return protobuf_data.HasComponentType();
		}

		/**
		 * Get the field @c componentType.
		 * 
		 * Type of component requested.
		 */
		OpComponentType GetComponentType() const
		{
			return protobuf_data.GetComponentType();
		}

		/**
		 * Set the field @c componentType.
		 * 
		 * Type of component requested.
		 */
		void SetComponentType(OpComponentType v)
		{
			protobuf_data.SetComponentType(v);
		}



	protected:

		OpComponentRequestMessage(
				const OpMessageAddress& src,
				const OpMessageAddress& dst,
				double delay
				, OpComponentType component_type_arg
				)
			: OpTypedMessage(Type, src, dst, delay)
			, protobuf_data(component_type_arg)
		{
		}

		OpComponentRequestMessage(
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
		OpHardcoreMessages_MessageSet::ComponentRequest protobuf_data;
	};


	/**
	 * Simple numeric message.
	 * 
	 * Used for testing.
	 */
	class OpNumberMessage
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
		static const unsigned Type = 1690828208u;

		virtual ~OpNumberMessage();



		static OpNumberMessage* Create(
			const OpMessageAddress& src,
			const OpMessageAddress& dst = OpMessageAddress(),
			double delay = 0)
		{
			return OP_NEW(OpNumberMessage, (src, dst, delay));
		}

		static OpNumberMessage* Create(
			INT64 number_arg = 0,
			const OpMessageAddress& src = OpMessageAddress(),
			const OpMessageAddress& dst = OpMessageAddress(),
			double delay = 0)
		{
			OpNumberMessage *obj = OP_NEW(OpNumberMessage, (src, dst, delay, number_arg));
			if (obj)
			{
				if (OpStatus::IsSuccess(obj->Construct()))
					return obj;

				OP_DELETE(obj);
			}
			return NULL;
		}

		static OpNumberMessage* Cast(const OpTypedMessage* msg);

		static OpNumberMessage* Deserialize(
			const OpMessageAddress& src,
			const OpMessageAddress& dst,
			double delay,
			const OpData& data);

		virtual OP_STATUS Serialize(OpData& data) const;

		virtual const char *GetTypeString() const;

		// Accessors/modifiers comes here
		/**
		 * Check if the field @c number is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasNumber() const
		{
			return protobuf_data.HasNumber();
		}

		/**
		 * Get the field @c number.
		 */
		INT64 GetNumber() const
		{
			return protobuf_data.GetNumber();
		}

		/**
		 * Set the field @c number.
		 */
		void SetNumber(INT64 v)
		{
			protobuf_data.SetNumber(v);
		}



	protected:

		OpNumberMessage(
				const OpMessageAddress& src,
				const OpMessageAddress& dst,
				double delay
				, INT64 number_arg = 0
				)
			: OpTypedMessage(Type, src, dst, delay)
			, protobuf_data(number_arg)
		{
		}



		OP_STATUS Construct(

		)
		{
			return protobuf_data.Construct();
		}

	private:
		OpHardcoreMessages_MessageSet::Number protobuf_data;
	};


	/**
	 * Message signalling that an entity is present and ready to communicate.
	 * 
	 * Used internally by the component infrastructure layer.
	 * 
	 * Do NOT use this message for any other purpose. Channels receiving this
	 * message will update their internal records based on its origin, and
	 * this may break communication paths.
	 */
	class OpPeerConnectedMessage
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
		static const unsigned Type = 2721985795u;

		virtual ~OpPeerConnectedMessage();

		static OpPeerConnectedMessage* Create()
		{
		    OpMessageAddress src;
		    OpMessageAddress dst;
		    double delay = 0;
		    return OP_NEW(OpPeerConnectedMessage, (src, dst, delay));
		}

		static OpPeerConnectedMessage* Create(
			const OpMessageAddress& src,
			const OpMessageAddress& dst = OpMessageAddress(),
			double delay = 0)
		{
			return OP_NEW(OpPeerConnectedMessage, (src, dst, delay));
		}



		static OpPeerConnectedMessage* Cast(const OpTypedMessage* msg);

		static OpPeerConnectedMessage* Deserialize(
			const OpMessageAddress& src,
			const OpMessageAddress& dst,
			double delay,
			const OpData& data);

		virtual OP_STATUS Serialize(OpData& data) const;

		virtual const char *GetTypeString() const;

		// Accessors/modifiers comes here


	protected:

		OpPeerConnectedMessage(
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
		OpHardcoreMessages_MessageSet::PeerConnected protobuf_data;
	};


	/**
	 * Message to notify the disconnection of a channel.
	 * 
	 * Used internally by the component infrastructure layer.
	 * 
	 * Do NOT use this message for any other purpose. Channels receiving this
	 * message will update their internal records based on its origin, and
	 * this may break communication paths.
	 */
	class OpPeerDisconnectedMessage
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
		static const unsigned Type = 4014336084u;

		virtual ~OpPeerDisconnectedMessage();

		static OpPeerDisconnectedMessage* Create()
		{
		    OpMessageAddress src;
		    OpMessageAddress dst;
		    double delay = 0;
		    return OP_NEW(OpPeerDisconnectedMessage, (src, dst, delay));
		}

		static OpPeerDisconnectedMessage* Create(
			const OpMessageAddress& src,
			const OpMessageAddress& dst = OpMessageAddress(),
			double delay = 0)
		{
			return OP_NEW(OpPeerDisconnectedMessage, (src, dst, delay));
		}



		static OpPeerDisconnectedMessage* Cast(const OpTypedMessage* msg);

		static OpPeerDisconnectedMessage* Deserialize(
			const OpMessageAddress& src,
			const OpMessageAddress& dst,
			double delay,
			const OpData& data);

		virtual OP_STATUS Serialize(OpData& data) const;

		virtual const char *GetTypeString() const;

		// Accessors/modifiers comes here


	protected:

		OpPeerDisconnectedMessage(
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
		OpHardcoreMessages_MessageSet::PeerDisconnected protobuf_data;
	};


	/**
	 * Message to notify that a channel's peer is pending.
	 * This message is sent to the OpChannel that is returned by
	 * OpComponent::RequestComponent(). The initial OpComponentManager sends it
	 * after passing the corresponding OpComponentRequestMessage to the platform
	 * (see OpComponentPlatform::RequestPeer()). The source address of the message
	 * is the address of the destination OpComponentManager which will host the
	 * requested OpComponent.
	 * @see OpComponent::RequestComponent()
	 * 
	 * On requesting a new OpComponent, the returned root channel to the new
	 * component doesn't have a destination address yet. This message sets the
	 * destination address of the root channel to the address of the destination
	 * OpComponentManager. If the OpComponentManager dies before creating the
	 * requested component, the root channel will be notified by an
	 * OpPeerDisconnectedMessage.
	 * 
	 * @note It is possible that the destination OpComponentManager creates the
	 *       requested OpComponent before this message is sent. In that case the
	 *       root channel will receive an OpPeerConnectedMessage before receiving
	 *       this message and this message will be ignored.
	 * 
	 * This message is used internally by the component framework.
	 * 
	 * Do NOT use this message for any other purpose. Channels receiving this
	 * message will update their internal records based on its origin, and
	 * this may break communication paths.
	 */
	class OpPeerPendingMessage
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
		static const unsigned Type = 850768336u;

		virtual ~OpPeerPendingMessage();

		static OpPeerPendingMessage* Create()
		{
		    OpMessageAddress src;
		    OpMessageAddress dst;
		    double delay = 0;
		    return OP_NEW(OpPeerPendingMessage, (src, dst, delay));
		}

		static OpPeerPendingMessage* Create(
			const OpMessageAddress& src,
			const OpMessageAddress& dst = OpMessageAddress(),
			double delay = 0)
		{
			return OP_NEW(OpPeerPendingMessage, (src, dst, delay));
		}



		static OpPeerPendingMessage* Cast(const OpTypedMessage* msg);

		static OpPeerPendingMessage* Deserialize(
			const OpMessageAddress& src,
			const OpMessageAddress& dst,
			double delay,
			const OpData& data);

		virtual OP_STATUS Serialize(OpData& data) const;

		virtual const char *GetTypeString() const;

		// Accessors/modifiers comes here


	protected:

		OpPeerPendingMessage(
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
		OpHardcoreMessages_MessageSet::PeerPending protobuf_data;
	};


	/**
	 * Opera Status message.
	 * 
	 * The intended use case is code performing an operation on behalf of a caller
	 * in another component, and simply returning the status will automagically
	 * cause a message of this type to be sent to the caller on the local channel.
	 * 
	 * Example:
	 * @msc
	 * Component1, Component2;
	 * Component1 -> Component2
	 *    [label="1. SendMessage(SomeMessage::Create())",
	 *     url="\ref OpComponent::SendMessage()"];
	 * Component2 => Component2
	 *    [label="2. ProcessMessage()",
	 *     url="\ref OpComponent::ProcessMessage()"];
	 * Component2 -> Component1
	 *    [label="3. SendMessage(OpStatusMessage)",
	 *     url="\ref OpComponent::SendMessage()"];
	 * Component1 -> Component1
	 *    [label="4. ProcessMessage()",
	 *     url="\ref OpComponent::ProcessMessage()"];
	 * @endmsc
	 * 
	 * -# Component \#1: sends some message to a remote component:
	 *    @code
	 *        OpComponent* remote_component = ...;
	 *        remote_component->SendMessage(OpDoSomethingMessage::Create());
	 *    @endcode
	 * -# Component \#2: receives the message an handles it in
	 *    OpComponent::ProcessMessage() or OpMessageListener::ProcessMessage(). If
	 *    the handling method returns an error status on handling the message:
	 *    @code
	 *         switch (message->GetType()) {
	 *         case OpDoSomethingMessage::Type:
	 *            return OpStatus::ERR;
	 *         ...
	 *         }
	 *    @endcode
	 * -# Component \#2: ... sends an OpStatusMessage with the return OP_STATUS
	 *    value back to the sender.
	 * -# Component \#1: can then receive this message and handle it in its
	 *    OpMessageListener::ProcessMessage():
	 *    @code
	 *        switch (message->GetType()) {
	 *        case OpStatusMessage::Type:
	 *        {
	 *            OP_STATUS status = OpStatusMessage::Cast(message)->GetStatus();
	 *            // do something sensible with the status
	 *            ...
	 *            break;
	 *        }
	 *    @endcode
	 * 
	 * 
	 */
	class OpStatusMessage
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
		static const unsigned Type = 2304215032u;

		virtual ~OpStatusMessage();

		static OpStatusMessage* Create()
		{
		    OpMessageAddress src;
		    OpMessageAddress dst;
		    double delay = 0;
		    return OP_NEW(OpStatusMessage, (src, dst, delay));
		}

		static OpStatusMessage* Create(
			const OpMessageAddress& src,
			const OpMessageAddress& dst = OpMessageAddress(),
			double delay = 0)
		{
			return OP_NEW(OpStatusMessage, (src, dst, delay));
		}

		static OpStatusMessage* Create(
			OP_STATUS status_arg,
			const OpMessageAddress& src = OpMessageAddress(),
			const OpMessageAddress& dst = OpMessageAddress(),
			double delay = 0)
		{
			OpStatusMessage *obj = OP_NEW(OpStatusMessage, (src, dst, delay, status_arg));
			if (obj)
			{
				if (OpStatus::IsSuccess(obj->Construct()))
					return obj;

				OP_DELETE(obj);
			}
			return NULL;
		}

		static OpStatusMessage* Cast(const OpTypedMessage* msg);

		static OpStatusMessage* Deserialize(
			const OpMessageAddress& src,
			const OpMessageAddress& dst,
			double delay,
			const OpData& data);

		virtual OP_STATUS Serialize(OpData& data) const;

		virtual const char *GetTypeString() const;

		// Accessors/modifiers comes here
		/**
		 * Check if the field @c status is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasStatus() const
		{
			return protobuf_data.HasStatus();
		}

		/**
		 * Get the field @c status.
		 * 
		 * Numeric OP_STATUS code.
		 */
		OP_STATUS GetStatus() const
		{
			return protobuf_data.GetStatus();
		}

		/**
		 * Set the field @c status.
		 * 
		 * Numeric OP_STATUS code.
		 */
		void SetStatus(OP_STATUS v)
		{
			protobuf_data.SetStatus(v);
		}



	protected:

		OpStatusMessage(
				const OpMessageAddress& src,
				const OpMessageAddress& dst,
				double delay
				, OP_STATUS status_arg
				)
			: OpTypedMessage(Type, src, dst, delay)
			, protobuf_data(status_arg)
		{
		}

		OpStatusMessage(
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
		OpHardcoreMessages_MessageSet::Status protobuf_data;
	};


	/**
	 * Simple text message.
	 * 
	 * Used for testing.
	 */
	class OpTextMessage
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
		static const unsigned Type = 1820921583u;

		virtual ~OpTextMessage();



		static OpTextMessage* Create(
			const OpMessageAddress& src,
			const OpMessageAddress& dst = OpMessageAddress(),
			double delay = 0)
		{
			return OP_NEW(OpTextMessage, (src, dst, delay));
		}

		static OpTextMessage* Create(
			const UniString & text_arg = UniString(),
			const OpMessageAddress& src = OpMessageAddress(),
			const OpMessageAddress& dst = OpMessageAddress(),
			double delay = 0)
		{
			OpTextMessage *obj = OP_NEW(OpTextMessage, (src, dst, delay, text_arg));
			if (obj)
			{
				if (OpStatus::IsSuccess(obj->Construct()))
					return obj;

				OP_DELETE(obj);
			}
			return NULL;
		}

		static OpTextMessage* Cast(const OpTypedMessage* msg);

		static OpTextMessage* Deserialize(
			const OpMessageAddress& src,
			const OpMessageAddress& dst,
			double delay,
			const OpData& data);

		virtual OP_STATUS Serialize(OpData& data) const;

		virtual const char *GetTypeString() const;

		// Accessors/modifiers comes here
		/**
		 * Check if the field @c text is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasText() const
		{
			return protobuf_data.HasText();
		}

		/**
		 * Get the field @c text.
		 */
		const UniString & GetText() const
		{
			return protobuf_data.GetText();
		}

		/**
		 * Set the field @c text.
		 */
		OP_STATUS SetText(const UniString & v);

		/**
		 * Set the field @c text.
		 */
		OP_STATUS SetText(const uni_char * v, int l = KAll);



	protected:

		OpTextMessage(
				const OpMessageAddress& src,
				const OpMessageAddress& dst,
				double delay
				, const UniString & text_arg = UniString()
				)
			: OpTypedMessage(Type, src, dst, delay)
			, protobuf_data(text_arg)
		{
		}



		OP_STATUS Construct(

		)
		{
			return protobuf_data.Construct();
		}

	private:
		OpHardcoreMessages_MessageSet::Text protobuf_data;
	};



	// END: Message classes


#endif // G_MESSAGE_HARDCORE_MESSAGES_H
