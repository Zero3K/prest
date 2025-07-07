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

// Generated from ../../modules/windowcommander/component/messages.proto

#ifndef G_MESSAGE_WINDOWCOMMANDER_MESSAGES_H
#define G_MESSAGE_WINDOWCOMMANDER_MESSAGES_H



#include "modules/windowcommander/src/generated/g_proto_windowcommander_messages.h"
#include "modules/hardcore/component/OpTypedMessage.h"


	// BEGIN: Message classes
	/**
	 * The OpPopupMenuRequestMessage is used by a document to request that the UI
	 * displays a popupmenu.
	 * 
	 * @see @ref OpMenuListener for more information about the complete workflow. *
	 */
	class OpPopupMenuRequestMessage
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
		static const unsigned Type = 3992884584u;

		virtual ~OpPopupMenuRequestMessage();

		static OpPopupMenuRequestMessage* Create()
		{
		    OpMessageAddress src;
		    OpMessageAddress dst;
		    double delay = 0;
		    return OP_NEW(OpPopupMenuRequestMessage, (src, dst, delay));
		}

		static OpPopupMenuRequestMessage* Create(
			const OpMessageAddress& src,
			const OpMessageAddress& dst = OpMessageAddress(),
			double delay = 0)
		{
			return OP_NEW(OpPopupMenuRequestMessage, (src, dst, delay));
		}



		static OpPopupMenuRequestMessage* Cast(const OpTypedMessage* msg);

		static OpPopupMenuRequestMessage* Deserialize(
			const OpMessageAddress& src,
			const OpMessageAddress& dst,
			double delay,
			const OpData& data);

		virtual OP_STATUS Serialize(OpData& data) const;

		virtual const char *GetTypeString() const;

		// Accessors/modifiers comes here
		/**
		 * Check if the field @c documentMenuItemList is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasDocumentMenuItemList() const
		{
			return protobuf_data.HasDocumentMenuItemList();
		}

		/**
		 * Get the field @c documentMenuItemList.
		 * 
		 * List of additional menu items requested by the document
		 * or extensions.
		 */
		const OpWindowcommanderMessages_MessageSet::PopupMenuRequest_MenuItemList & GetDocumentMenuItemList() const
		{
			return protobuf_data.GetDocumentMenuItemList();
		}

		/**
		 * Set the field @c documentMenuItemList.
		 * 
		 * List of additional menu items requested by the document
		 * or extensions.
		 */
		OpWindowcommanderMessages_MessageSet::PopupMenuRequest_MenuItemList & GetDocumentMenuItemListRef();



	protected:

		OpPopupMenuRequestMessage(
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
		OpWindowcommanderMessages_MessageSet::PopupMenuRequest protobuf_data;
	};



	// END: Message classes


#endif // G_MESSAGE_WINDOWCOMMANDER_MESSAGES_H
