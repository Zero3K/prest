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



#ifndef G_PROTO_WINDOWCOMMANDER_MESSAGES_H
#define G_PROTO_WINDOWCOMMANDER_MESSAGES_H



#include "modules/opdata/UniString.h"
#include "modules/protobuf/src/protobuf.h"
#include "modules/protobuf/src/protobuf_bitfield.h"
#include "modules/protobuf/src/protobuf_message.h"



class OpWindowcommanderMessages_Descriptors;

class OpWindowcommanderMessages_MessageSet
{
public:
	// BEGIN: ctor/dtor

	OpWindowcommanderMessages_MessageSet();
	virtual ~OpWindowcommanderMessages_MessageSet();

	// END: ctor/dtor
	// BEGIN: Enums

	// End: Enums

	// BEGIN: Message classes

	// Forward declarations
	class PopupMenuRequest_MenuItem;
	class PopupMenuRequest_MenuItemList;
	class PopupMenuRequest;

	class PopupMenuRequest_MenuItem
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 4
		};
		// END: Internal enums


		PopupMenuRequest_MenuItem(
			UINT32 id_arg = 0,
			const UniString * label_arg = NULL
			)
			: _id(id_arg)
			, _iconId(0)
			, _subMenuItemList(NULL)
			, encoded_size_(-1)
		{
			if (label_arg)
			{
				_label = *label_arg;
				has_bits_.Reference().SetBit(1);

			}
		}
		OP_STATUS Construct(
			)
		{
			return OpStatus::OK;
		}
		~PopupMenuRequest_MenuItem()
		{
			OP_DELETE(_subMenuItemList);
		}

		// Checkers
		/**
		 * Check if the field @c id is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasId() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c label is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasLabel() const
		{
			return has_bits_.Reference().IsSet(1);
		}

		/**
		 * Check if the field @c iconId is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasIconId() const
		{
			return has_bits_.Reference().IsSet(2);
		}

		/**
		 * Check if the field @c subMenuItemList is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasSubMenuItemList() const
		{
			return has_bits_.Reference().IsSet(3);
		}

		// Getters

		/**
		 * Get the field @c id.
		 * 
		 * Unique id of menu item.
		 * id = 0  = non interactable (submenu or separator).
		 */
		UINT32 GetId() const
		{
			return _id;
		}

		/**
		 * Get the field @c label.
		 * 
		 * Label of menu item.
		 */
		const UniString & GetLabel() const
		{
			return _label;
		}

		/**
		 * Get the field @c iconId.
		 * 
		 *  Id of an icon. The OpBitmap corresponding to it
		 * can by obtained using OpWindowCommander::GetMenuItemIcon().
		 */
		UINT32 GetIconId() const
		{
			return _iconId;
		}

		/**
		 * Get the field @c subMenuItemList.
		 * 
		 * Sub menu items for this menu items.
		 */
		OpWindowcommanderMessages_MessageSet::PopupMenuRequest_MenuItemList * GetSubMenuItemList() const
		{
			return _subMenuItemList;
		}

		// Setters

		/**
		 * Set the field @c id.
		 * 
		 * Unique id of menu item.
		 * id = 0  = non interactable (submenu or separator).
		 */
		void SetId(UINT32 v)
		{
			_id = v;
		}

		/**
		 * Set the field @c label.
		 * 
		 * Label of menu item.
		 */
		OP_STATUS SetLabel(const UniString & v);

		/**
		 * Set the field @c label.
		 * 
		 * Label of menu item.
		 */
		OP_STATUS SetLabel(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c iconId.
		 * 
		 *  Id of an icon. The OpBitmap corresponding to it
		 * can by obtained using OpWindowCommander::GetMenuItemIcon().
		 */
		void SetIconId(UINT32 v)
		{
			has_bits_.Reference().SetBit(2);
			_iconId = v;
		}

		/**
		 * Set the field @c subMenuItemList.
		 * 
		 * Sub menu items for this menu items.
		 */
		void SetSubMenuItemList(OpWindowcommanderMessages_MessageSet::PopupMenuRequest_MenuItemList * v);

		static const OpProtobufMessage *GetMessageDescriptor(OpWindowcommanderMessages_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		UINT32 _id;
		UniString _label;
		UINT32 _iconId;
		OpWindowcommanderMessages_MessageSet::PopupMenuRequest_MenuItemList * _subMenuItemList;

		OpProtobufBitField<4> has_bits_;
		mutable int                 encoded_size_;
	};


	/**
	 * List of menu items. *
	 */
	class PopupMenuRequest_MenuItemList
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 1
		};
		// END: Internal enums


		PopupMenuRequest_MenuItemList(
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
		 * Check if the field @c menuItems is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasMenuItems() const
		{
			return has_bits_.Reference().IsSet(0);
		}

		// Getters

		/**
		 * Get the field @c menuItems.
		 */
		const OpProtobufMessageVector<OpWindowcommanderMessages_MessageSet::PopupMenuRequest_MenuItem> & GetMenuItems() const
		{
			return _menuItems;
		}

		// Setters

		/**
		 * Set the field @c menuItems.
		 */
		OpProtobufMessageVector<OpWindowcommanderMessages_MessageSet::PopupMenuRequest_MenuItem> & GetMenuItemsRef();

		static const OpProtobufMessage *GetMessageDescriptor(OpWindowcommanderMessages_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		OpProtobufMessageVector<OpWindowcommanderMessages_MessageSet::PopupMenuRequest_MenuItem> _menuItems;

		OpProtobufBitField<1> has_bits_;
		mutable int                 encoded_size_;
	};


	/**
	 * The OpPopupMenuRequestMessage is used by a document to request that the UI
	 * displays a popupmenu.
	 * 
	 * @see @ref OpMenuListener for more information about the complete workflow. *
	 */
	class PopupMenuRequest
	{
	public:
		// BEGIN: Nested items

		// Message PopupMenuRequest.MenuItem
		typedef PopupMenuRequest_MenuItem MenuItem;

		// Message PopupMenuRequest.MenuItemList
		typedef PopupMenuRequest_MenuItemList MenuItemList;

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 1
		};
		// END: Internal enums


		PopupMenuRequest(
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
		 * Check if the field @c documentMenuItemList is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasDocumentMenuItemList() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c documentMenuItemList.
		 * 
		 * List of additional menu items requested by the document
		 * or extensions.
		 */
		const OpWindowcommanderMessages_MessageSet::PopupMenuRequest_MenuItemList & GetDocumentMenuItemList() const
		{
			return _documentMenuItemList;
		}

		// Setters

		/**
		 * Set the field @c documentMenuItemList.
		 * 
		 * List of additional menu items requested by the document
		 * or extensions.
		 */
		OpWindowcommanderMessages_MessageSet::PopupMenuRequest_MenuItemList & GetDocumentMenuItemListRef();

		static const OpProtobufMessage *GetMessageDescriptor(OpWindowcommanderMessages_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		OpWindowcommanderMessages_MessageSet::PopupMenuRequest_MenuItemList _documentMenuItemList;

		OpProtobufBitField<1> has_bits_;
		mutable int                 encoded_size_;
	};



	// END: Message classes

};






#endif // G_PROTO_WINDOWCOMMANDER_MESSAGES_H
