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

// Generated from ../../adjunct/desktop_scope/services/desktop_window_manager/desktop_window_manager.proto



#ifndef G_SCOPE_DESKTOP_WINDOW_MANAGER_INTERFACE_H
#define G_SCOPE_DESKTOP_WINDOW_MANAGER_INTERFACE_H

#ifdef SCOPE_DESKTOP_SUPPORT

#include "modules/protobuf/src/protobuf_message.h"
#include "modules/scope/src/scope_service.h"
#include "modules/util/opstring.h"



#include "modules/protobuf/src/protobuf_utils.h"
#include "modules/protobuf/src/protobuf_message.h"

class OpScopeTPMessage;
class OpProtobufField;
class OpProtobufMessage;


class OpScopeDesktopWindowManager_Descriptors;

class OpScopeDesktopWindowManager_MessageSet
{
public:
	// BEGIN: ctor/dtor

	OpScopeDesktopWindowManager_MessageSet();
	virtual ~OpScopeDesktopWindowManager_MessageSet();

	// END: ctor/dtor
	// BEGIN: Enums

	enum DesktopWindowInfo_DesktopWindowType
	{
	    DesktopWindowInfo_DesktopWindowType_DESKTOPWINDOWTYPE_UNKNOWN,
	    DesktopWindowInfo_DesktopWindowType_DESKTOPWINDOWTYPE_DIALOG = 1,
	    DesktopWindowInfo_DesktopWindowType_DESKTOPWINDOWTYPE_NORMAL = 2
	};

	enum DesktopWindowInfo_DesktopWindowState
	{
	    DesktopWindowInfo_DesktopWindowState_DESKTOPWINDOWSTATE_RESTORED,
	    DesktopWindowInfo_DesktopWindowState_DESKTOPWINDOWSTATE_MINIMIZED = 1,
	    DesktopWindowInfo_DesktopWindowState_DESKTOPWINDOWSTATE_MAXIMIZED = 2,
	    DesktopWindowInfo_DesktopWindowState_DESKTOPWINDOWSTATE_FULLSCREEN = 3
	};

	enum QuickWidgetInfo_QuickWidgetType
	{
	    QuickWidgetInfo_QuickWidgetType_QUICKWIDGETTYPE_UNKNOWN,
	    QuickWidgetInfo_QuickWidgetType_QUICKWIDGETTYPE_BUTTON = 1,
	    QuickWidgetInfo_QuickWidgetType_QUICKWIDGETTYPE_CHECKBOX = 2,
	    QuickWidgetInfo_QuickWidgetType_QUICKWIDGETTYPE_DIALOGTAB = 3,
	    QuickWidgetInfo_QuickWidgetType_QUICKWIDGETTYPE_DROPDOWN = 4,
	    QuickWidgetInfo_QuickWidgetType_QUICKWIDGETTYPE_DROPDOWNITEM = 5,
	    QuickWidgetInfo_QuickWidgetType_QUICKWIDGETTYPE_EDITFIELD = 6,
	    QuickWidgetInfo_QuickWidgetType_QUICKWIDGETTYPE_LABEL = 7,
	    QuickWidgetInfo_QuickWidgetType_QUICKWIDGETTYPE_RADIOBUTTON = 8,
	    QuickWidgetInfo_QuickWidgetType_QUICKWIDGETTYPE_ADDRESSFIELD = 9,
	    QuickWidgetInfo_QuickWidgetType_QUICKWIDGETTYPE_SEARCH = 10,
	    QuickWidgetInfo_QuickWidgetType_QUICKWIDGETTYPE_TOOLBAR = 11,
	    QuickWidgetInfo_QuickWidgetType_QUICKWIDGETTYPE_TREEVIEW = 12,
	    QuickWidgetInfo_QuickWidgetType_QUICKWIDGETTYPE_TREEITEM = 13,
	    QuickWidgetInfo_QuickWidgetType_QUICKWIDGETTYPE_TABBUTTON = 14,
	    QuickWidgetInfo_QuickWidgetType_QUICKWIDGETTYPE_THUMBNAIL = 15,
	    QuickWidgetInfo_QuickWidgetType_QUICKWIDGETTYPE_GRIDLAYOUT = 16,
	    QuickWidgetInfo_QuickWidgetType_QUICKWIDGETTYPE_GRIDITEM = 17,
	    QuickWidgetInfo_QuickWidgetType_QUICKWIDGETTYPE_QUICKFIND = 18,
	    QuickWidgetInfo_QuickWidgetType_QUICKWIDGETTYPE_ICON = 19,
	    QuickWidgetInfo_QuickWidgetType_QUICKWIDGETTYPE_PROGRESSBAR = 20,
	    QuickWidgetInfo_QuickWidgetType_QUICKWIDGETTYPE_LISTBOX = 21
	};

	enum QuickWidgetSearch_QuickWidgetSearchType
	{
	    QuickWidgetSearch_QuickWidgetSearchType_QUICKWIDGETSEARCHTYPE_NAME,
	    QuickWidgetSearch_QuickWidgetSearchType_QUICKWIDGETSEARCHTYPE_TEXT = 1,
	    QuickWidgetSearch_QuickWidgetSearchType_QUICKWIDGETSEARCHTYPE_POS = 2
	};

	// End: Enums

	// BEGIN: Message classes

	// Forward declarations
	class DesktopWindowID;
	class QuickWidgetSearch;
	class QuickWidgetInfoList;
	class DesktopWindowList;
	class DesktopWindowRect;
	class QuickWidgetInfo;
	class QuickMenuItemInfo;
	class QuickMenuItemID;
	class QuickMenuID;
	class QuickMenuInfo;
	class QuickMenuList;
	class DesktopWindowInfo;

	class DesktopWindowID
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 1
		};
		// END: Internal enums


		DesktopWindowID(
			UINT32 window_id_arg = 0
			)
			: _windowID(window_id_arg)
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
		 * Check if the field @c windowID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasWindowID() const
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

		// Setters

		/**
		 * Set the field @c windowID.
		 */
		void SetWindowID(UINT32 v)
		{
			_windowID = v;
		}

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeDesktopWindowManager_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		UINT32 _windowID;

		OpProtobufBitField<1> has_bits_;
		mutable int                 encoded_size_;
	};


	class QuickWidgetSearch
	{
	public:
		// BEGIN: Nested items

		// Enum QuickWidgetSearch.QuickWidgetSearchType
		typedef QuickWidgetSearch_QuickWidgetSearchType QuickWidgetSearchType;
		static const QuickWidgetSearch_QuickWidgetSearchType QUICKWIDGETSEARCHTYPE_NAME = QuickWidgetSearch_QuickWidgetSearchType_QUICKWIDGETSEARCHTYPE_NAME;
		static const QuickWidgetSearch_QuickWidgetSearchType QUICKWIDGETSEARCHTYPE_TEXT = QuickWidgetSearch_QuickWidgetSearchType_QUICKWIDGETSEARCHTYPE_TEXT;
		static const QuickWidgetSearch_QuickWidgetSearchType QUICKWIDGETSEARCHTYPE_POS = QuickWidgetSearch_QuickWidgetSearchType_QUICKWIDGETSEARCHTYPE_POS;

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 3
		};
		// END: Internal enums


		QuickWidgetSearch(
			QuickWidgetSearch_QuickWidgetSearchType search_type_arg = QuickWidgetSearch_QuickWidgetSearchType_QUICKWIDGETSEARCHTYPE_NAME
			)
			: _searchType(search_type_arg)
			, encoded_size_(-1)
		{
		}
		OP_STATUS Construct(
			const OpString & data_arg
			)
		{
			RETURN_IF_ERROR(_data.Set(data_arg));
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
		 * Check if the field @c searchType is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasSearchType() const
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

		// Getters

		/**
		 * Get the field @c windowID.
		 */
		const OpScopeDesktopWindowManager_MessageSet::DesktopWindowID & GetWindowID() const
		{
			return _windowID;
		}

		/**
		 * Get the field @c searchType.
		 */
		OpScopeDesktopWindowManager_MessageSet::QuickWidgetSearch_QuickWidgetSearchType GetSearchType() const
		{
			return static_cast<OpScopeDesktopWindowManager_MessageSet::QuickWidgetSearch_QuickWidgetSearchType>(_searchType);
		}

		/**
		 * Get the field @c data.
		 * 
		 * Is the name of a widget (i.e. "label_for_x")
		 */
		const OpString & GetData() const
		{
			return _data;
		}

		// Setters

		/**
		 * Set the field @c windowID.
		 */
		OpScopeDesktopWindowManager_MessageSet::DesktopWindowID & GetWindowIDRef();

		/**
		 * Set the field @c searchType.
		 */
		void SetSearchType(OpScopeDesktopWindowManager_MessageSet::QuickWidgetSearch_QuickWidgetSearchType v);

		/**
		 * Set the field @c data.
		 * 
		 * Is the name of a widget (i.e. "label_for_x")
		 */
		OP_STATUS SetData(const uni_char * v, int l = KAll);

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeDesktopWindowManager_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		OpScopeDesktopWindowManager_MessageSet::DesktopWindowID _windowID;
		INT32 _searchType;
		OpString _data;

		OpProtobufBitField<3> has_bits_;
		mutable int                 encoded_size_;
	};


	class QuickWidgetInfoList
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 1
		};
		// END: Internal enums


		QuickWidgetInfoList(
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
		 * Check if the field @c quickwidgetList is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasQuickwidgetList() const
		{
			return has_bits_.Reference().IsSet(0);
		}

		// Getters

		/**
		 * Get the field @c quickwidgetList.
		 */
		const OpProtobufMessageVector<OpScopeDesktopWindowManager_MessageSet::QuickWidgetInfo> & GetQuickwidgetList() const
		{
			return _quickwidgetList;
		}

		// Setters

		/**
		 * Set the field @c quickwidgetList.
		 */
		OpProtobufMessageVector<OpScopeDesktopWindowManager_MessageSet::QuickWidgetInfo> & GetQuickwidgetListRef();

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeDesktopWindowManager_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		OpProtobufMessageVector<OpScopeDesktopWindowManager_MessageSet::QuickWidgetInfo> _quickwidgetList;

		OpProtobufBitField<1> has_bits_;
		mutable int                 encoded_size_;
	};


	class DesktopWindowList
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 1
		};
		// END: Internal enums


		DesktopWindowList(
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
		 * Check if the field @c windowList is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasWindowList() const
		{
			return has_bits_.Reference().IsSet(0);
		}

		// Getters

		/**
		 * Get the field @c windowList.
		 */
		const OpProtobufMessageVector<OpScopeDesktopWindowManager_MessageSet::DesktopWindowInfo> & GetWindowList() const
		{
			return _windowList;
		}

		// Setters

		/**
		 * Set the field @c windowList.
		 */
		OpProtobufMessageVector<OpScopeDesktopWindowManager_MessageSet::DesktopWindowInfo> & GetWindowListRef();

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeDesktopWindowManager_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		OpProtobufMessageVector<OpScopeDesktopWindowManager_MessageSet::DesktopWindowInfo> _windowList;

		OpProtobufBitField<1> has_bits_;
		mutable int                 encoded_size_;
	};


	class DesktopWindowRect
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 4
		};
		// END: Internal enums


		DesktopWindowRect(
			UINT32 x_arg = 0,
			UINT32 y_arg = 0,
			UINT32 width_arg = 0,
			UINT32 height_arg = 0
			)
			: _x(x_arg)
			, _y(y_arg)
			, _width(width_arg)
			, _height(height_arg)
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
		 * Check if the field @c x is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasX() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c y is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasY() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c width is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasWidth() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c height is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasHeight() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c x.
		 */
		UINT32 GetX() const
		{
			return _x;
		}

		/**
		 * Get the field @c y.
		 */
		UINT32 GetY() const
		{
			return _y;
		}

		/**
		 * Get the field @c width.
		 */
		UINT32 GetWidth() const
		{
			return _width;
		}

		/**
		 * Get the field @c height.
		 */
		UINT32 GetHeight() const
		{
			return _height;
		}

		// Setters

		/**
		 * Set the field @c x.
		 */
		void SetX(UINT32 v)
		{
			_x = v;
		}

		/**
		 * Set the field @c y.
		 */
		void SetY(UINT32 v)
		{
			_y = v;
		}

		/**
		 * Set the field @c width.
		 */
		void SetWidth(UINT32 v)
		{
			_width = v;
		}

		/**
		 * Set the field @c height.
		 */
		void SetHeight(UINT32 v)
		{
			_height = v;
		}

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeDesktopWindowManager_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		UINT32 _x;
		UINT32 _y;
		UINT32 _width;
		UINT32 _height;

		OpProtobufBitField<4> has_bits_;
		mutable int                 encoded_size_;
	};


	class QuickWidgetInfo
	{
	public:
		// BEGIN: Nested items

		// Enum QuickWidgetInfo.QuickWidgetType
		typedef QuickWidgetInfo_QuickWidgetType QuickWidgetType;
		static const QuickWidgetInfo_QuickWidgetType QUICKWIDGETTYPE_UNKNOWN = QuickWidgetInfo_QuickWidgetType_QUICKWIDGETTYPE_UNKNOWN;
		static const QuickWidgetInfo_QuickWidgetType QUICKWIDGETTYPE_BUTTON = QuickWidgetInfo_QuickWidgetType_QUICKWIDGETTYPE_BUTTON;
		static const QuickWidgetInfo_QuickWidgetType QUICKWIDGETTYPE_CHECKBOX = QuickWidgetInfo_QuickWidgetType_QUICKWIDGETTYPE_CHECKBOX;
		static const QuickWidgetInfo_QuickWidgetType QUICKWIDGETTYPE_DIALOGTAB = QuickWidgetInfo_QuickWidgetType_QUICKWIDGETTYPE_DIALOGTAB;
		static const QuickWidgetInfo_QuickWidgetType QUICKWIDGETTYPE_DROPDOWN = QuickWidgetInfo_QuickWidgetType_QUICKWIDGETTYPE_DROPDOWN;
		static const QuickWidgetInfo_QuickWidgetType QUICKWIDGETTYPE_DROPDOWNITEM = QuickWidgetInfo_QuickWidgetType_QUICKWIDGETTYPE_DROPDOWNITEM;
		static const QuickWidgetInfo_QuickWidgetType QUICKWIDGETTYPE_EDITFIELD = QuickWidgetInfo_QuickWidgetType_QUICKWIDGETTYPE_EDITFIELD;
		static const QuickWidgetInfo_QuickWidgetType QUICKWIDGETTYPE_LABEL = QuickWidgetInfo_QuickWidgetType_QUICKWIDGETTYPE_LABEL;
		static const QuickWidgetInfo_QuickWidgetType QUICKWIDGETTYPE_RADIOBUTTON = QuickWidgetInfo_QuickWidgetType_QUICKWIDGETTYPE_RADIOBUTTON;
		static const QuickWidgetInfo_QuickWidgetType QUICKWIDGETTYPE_ADDRESSFIELD = QuickWidgetInfo_QuickWidgetType_QUICKWIDGETTYPE_ADDRESSFIELD;
		static const QuickWidgetInfo_QuickWidgetType QUICKWIDGETTYPE_SEARCH = QuickWidgetInfo_QuickWidgetType_QUICKWIDGETTYPE_SEARCH;
		static const QuickWidgetInfo_QuickWidgetType QUICKWIDGETTYPE_TOOLBAR = QuickWidgetInfo_QuickWidgetType_QUICKWIDGETTYPE_TOOLBAR;
		static const QuickWidgetInfo_QuickWidgetType QUICKWIDGETTYPE_TREEVIEW = QuickWidgetInfo_QuickWidgetType_QUICKWIDGETTYPE_TREEVIEW;
		static const QuickWidgetInfo_QuickWidgetType QUICKWIDGETTYPE_TREEITEM = QuickWidgetInfo_QuickWidgetType_QUICKWIDGETTYPE_TREEITEM;
		static const QuickWidgetInfo_QuickWidgetType QUICKWIDGETTYPE_TABBUTTON = QuickWidgetInfo_QuickWidgetType_QUICKWIDGETTYPE_TABBUTTON;
		static const QuickWidgetInfo_QuickWidgetType QUICKWIDGETTYPE_THUMBNAIL = QuickWidgetInfo_QuickWidgetType_QUICKWIDGETTYPE_THUMBNAIL;
		static const QuickWidgetInfo_QuickWidgetType QUICKWIDGETTYPE_GRIDLAYOUT = QuickWidgetInfo_QuickWidgetType_QUICKWIDGETTYPE_GRIDLAYOUT;
		static const QuickWidgetInfo_QuickWidgetType QUICKWIDGETTYPE_GRIDITEM = QuickWidgetInfo_QuickWidgetType_QUICKWIDGETTYPE_GRIDITEM;
		static const QuickWidgetInfo_QuickWidgetType QUICKWIDGETTYPE_QUICKFIND = QuickWidgetInfo_QuickWidgetType_QUICKWIDGETTYPE_QUICKFIND;
		static const QuickWidgetInfo_QuickWidgetType QUICKWIDGETTYPE_ICON = QuickWidgetInfo_QuickWidgetType_QUICKWIDGETTYPE_ICON;
		static const QuickWidgetInfo_QuickWidgetType QUICKWIDGETTYPE_PROGRESSBAR = QuickWidgetInfo_QuickWidgetType_QUICKWIDGETTYPE_PROGRESSBAR;
		static const QuickWidgetInfo_QuickWidgetType QUICKWIDGETTYPE_LISTBOX = QuickWidgetInfo_QuickWidgetType_QUICKWIDGETTYPE_LISTBOX;

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 14
		};
		// END: Internal enums


		QuickWidgetInfo(
			QuickWidgetInfo_QuickWidgetType type_arg = QuickWidgetInfo_QuickWidgetType_QUICKWIDGETTYPE_UNKNOWN,
			BOOL visible_arg = FALSE,
			UINT32 value_arg = 0,
			BOOL enabled_arg = FALSE,
			BOOL default_look_arg = FALSE,
			BOOL focused_look_arg = FALSE
			)
			: _type(type_arg)
			, _visible(visible_arg)
			, _value(value_arg)
			, _enabled(enabled_arg)
			, _defaultLook(default_look_arg)
			, _focusedLook(focused_look_arg)
			, _row(0)
			, _col(0)
			, encoded_size_(-1)
		{
		}
		OP_STATUS Construct(
			const OpString & name_arg,
			const OpString & text_arg,
			const OpString * parent_arg = NULL,
			const OpString * visible_text_arg = NULL,
			const OpString * additional_text_arg = NULL
			)
		{
			RETURN_IF_ERROR(_name.Set(name_arg));
			RETURN_IF_ERROR(_text.Set(text_arg));
			if (parent_arg)
			{
				RETURN_IF_ERROR(_parent.Set(*parent_arg));
				has_bits_.Reference().SetBit(9);

			}
			if (visible_text_arg)
			{
				RETURN_IF_ERROR(_visible_text.Set(*visible_text_arg));
				has_bits_.Reference().SetBit(12);

			}
			if (additional_text_arg)
			{
				RETURN_IF_ERROR(_additional_text.Set(*additional_text_arg));
				has_bits_.Reference().SetBit(13);

			}
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
		 * Check if the field @c type is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasType() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c visible is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasVisible() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c text is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasText() const
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

		/**
		 * Check if the field @c enabled is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasEnabled() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c defaultLook is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasDefaultLook() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c focusedLook is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasFocusedLook() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c rect is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasRect() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c parent is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasParent() const
		{
			return has_bits_.Reference().IsSet(9);
		}

		/**
		 * Check if the field @c row is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasRow() const
		{
			return has_bits_.Reference().IsSet(10);
		}

		/**
		 * Check if the field @c col is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasCol() const
		{
			return has_bits_.Reference().IsSet(11);
		}

		/**
		 * Check if the field @c visible_text is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasVisible_text() const
		{
			return has_bits_.Reference().IsSet(12);
		}

		/**
		 * Check if the field @c additional_text is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasAdditional_text() const
		{
			return has_bits_.Reference().IsSet(13);
		}

		// Getters

		/**
		 * Get the field @c name.
		 * 
		 * Name of the widget (e.g. "label_for_x")
		 * 
		 */
		const OpString & GetName() const
		{
			return _name;
		}

		/**
		 * Get the field @c type.
		 */
		OpScopeDesktopWindowManager_MessageSet::QuickWidgetInfo_QuickWidgetType GetType() const
		{
			return static_cast<OpScopeDesktopWindowManager_MessageSet::QuickWidgetInfo_QuickWidgetType>(_type);
		}

		/**
		 * Get the field @c visible.
		 */
		BOOL GetVisible() const
		{
			return _visible;
		}

		/**
		 * Get the field @c text.
		 */
		const OpString & GetText() const
		{
			return _text;
		}

		/**
		 * Get the field @c value.
		 * 
		 * value depends on the widget type
		 *   e.g. for checkboxes value = checked (1) or unchecked (0)
		 */
		UINT32 GetValue() const
		{
			return _value;
		}

		/**
		 * Get the field @c enabled.
		 */
		BOOL GetEnabled() const
		{
			return _enabled;
		}

		/**
		 * Get the field @c defaultLook.
		 * 
		 * Set on buttons when they are the default on a dialog/window
		 */
		BOOL GetDefaultLook() const
		{
			return _defaultLook;
		}

		/**
		 * Get the field @c focusedLook.
		 * 
		 * Set when a widget has a forced focused look (e.g. speed dials)
		 */
		BOOL GetFocusedLook() const
		{
			return _focusedLook;
		}

		/**
		 * Get the field @c rect.
		 */
		const OpScopeDesktopWindowManager_MessageSet::DesktopWindowRect & GetRect() const
		{
			return _rect;
		}

		/**
		 * Get the field @c parent.
		 * 
		 * Name, text or other field to specify of the parent widget, used in treeviews, toolbars etc.
		 */
		const OpString & GetParent() const
		{
			return _parent;
		}

		/**
		 * Get the field @c row.
		 * 
		 * Row and column position of this item inside the parent widget
		 */
		UINT32 GetRow() const
		{
			return _row;
		}

		/**
		 * Get the field @c col.
		 */
		UINT32 GetCol() const
		{
			return _col;
		}

		/**
		 * Get the field @c visible_text.
		 * 
		 * Text fields for additional text (e.g. for the address field)
		 */
		const OpString & GetVisible_text() const
		{
			return _visible_text;
		}

		/**
		 * Get the field @c additional_text.
		 */
		const OpString & GetAdditional_text() const
		{
			return _additional_text;
		}

		// Setters

		/**
		 * Set the field @c name.
		 * 
		 * Name of the widget (e.g. "label_for_x")
		 * 
		 */
		OP_STATUS SetName(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c type.
		 */
		void SetType(OpScopeDesktopWindowManager_MessageSet::QuickWidgetInfo_QuickWidgetType v);

		/**
		 * Set the field @c visible.
		 */
		void SetVisible(BOOL v)
		{
			_visible = v;
		}

		/**
		 * Set the field @c text.
		 */
		OP_STATUS SetText(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c value.
		 * 
		 * value depends on the widget type
		 *   e.g. for checkboxes value = checked (1) or unchecked (0)
		 */
		void SetValue(UINT32 v)
		{
			_value = v;
		}

		/**
		 * Set the field @c enabled.
		 */
		void SetEnabled(BOOL v)
		{
			_enabled = v;
		}

		/**
		 * Set the field @c defaultLook.
		 * 
		 * Set on buttons when they are the default on a dialog/window
		 */
		void SetDefaultLook(BOOL v)
		{
			_defaultLook = v;
		}

		/**
		 * Set the field @c focusedLook.
		 * 
		 * Set when a widget has a forced focused look (e.g. speed dials)
		 */
		void SetFocusedLook(BOOL v)
		{
			_focusedLook = v;
		}

		/**
		 * Set the field @c rect.
		 */
		OpScopeDesktopWindowManager_MessageSet::DesktopWindowRect & GetRectRef();

		/**
		 * Set the field @c parent.
		 * 
		 * Name, text or other field to specify of the parent widget, used in treeviews, toolbars etc.
		 */
		OP_STATUS SetParent(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c row.
		 * 
		 * Row and column position of this item inside the parent widget
		 */
		void SetRow(UINT32 v)
		{
			has_bits_.Reference().SetBit(10);
			_row = v;
		}

		/**
		 * Set the field @c col.
		 */
		void SetCol(UINT32 v)
		{
			has_bits_.Reference().SetBit(11);
			_col = v;
		}

		/**
		 * Set the field @c visible_text.
		 * 
		 * Text fields for additional text (e.g. for the address field)
		 */
		OP_STATUS SetVisible_text(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c additional_text.
		 */
		OP_STATUS SetAdditional_text(const uni_char * v, int l = KAll);

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeDesktopWindowManager_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		OpString _name;
		INT32 _type;
		BOOL _visible;
		OpString _text;
		UINT32 _value;
		BOOL _enabled;
		BOOL _defaultLook;
		BOOL _focusedLook;
		OpScopeDesktopWindowManager_MessageSet::DesktopWindowRect _rect;
		OpString _parent;
		UINT32 _row;
		UINT32 _col;
		OpString _visible_text;
		OpString _additional_text;

		OpProtobufBitField<14> has_bits_;
		mutable int                 encoded_size_;
	};


	class QuickMenuItemInfo
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 12
		};
		// END: Internal enums


		QuickMenuItemInfo(
			UINT32 row_arg = 0,
			BOOL enabled_arg = FALSE,
			BOOL checked_arg = FALSE,
			BOOL bold_arg = FALSE,
			BOOL separator_arg = FALSE
			)
			: _row(row_arg)
			, _enabled(enabled_arg)
			, _checked(checked_arg)
			, _bold(bold_arg)
			, _separator(separator_arg)
			, encoded_size_(-1)
		{
		}
		OP_STATUS Construct(
			const OpString & text_arg,
			const OpString * action_arg = NULL,
			const OpString * submenu_arg = NULL,
			const OpString * action_param_arg = NULL,
			const OpString * shortcut_letter_arg = NULL,
			const OpString * shortcut_arg = NULL
			)
		{
			RETURN_IF_ERROR(_text.Set(text_arg));
			if (action_arg)
			{
				RETURN_IF_ERROR(_action.Set(*action_arg));
				has_bits_.Reference().SetBit(1);

			}
			if (submenu_arg)
			{
				RETURN_IF_ERROR(_submenu.Set(*submenu_arg));
				has_bits_.Reference().SetBit(2);

			}
			if (action_param_arg)
			{
				RETURN_IF_ERROR(_actionParam.Set(*action_param_arg));
				has_bits_.Reference().SetBit(3);

			}
			if (shortcut_letter_arg)
			{
				RETURN_IF_ERROR(_shortcutLetter.Set(*shortcut_letter_arg));
				has_bits_.Reference().SetBit(5);

			}
			if (shortcut_arg)
			{
				RETURN_IF_ERROR(_shortcut.Set(*shortcut_arg));
				has_bits_.Reference().SetBit(6);

			}
			return OpStatus::OK;
		}

		// Checkers
		/**
		 * Check if the field @c text is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasText() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c action is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasAction() const
		{
			return has_bits_.Reference().IsSet(1);
		}

		/**
		 * Check if the field @c submenu is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasSubmenu() const
		{
			return has_bits_.Reference().IsSet(2);
		}

		/**
		 * Check if the field @c actionParam is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasActionParam() const
		{
			return has_bits_.Reference().IsSet(3);
		}

		/**
		 * Check if the field @c row is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasRow() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c shortcutLetter is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasShortcutLetter() const
		{
			return has_bits_.Reference().IsSet(5);
		}

		/**
		 * Check if the field @c shortcut is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasShortcut() const
		{
			return has_bits_.Reference().IsSet(6);
		}

		/**
		 * Check if the field @c rect is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasRect() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c enabled is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasEnabled() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c checked is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasChecked() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c bold is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasBold() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c separator is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasSeparator() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c text.
		 */
		const OpString & GetText() const
		{
			return _text;
		}

		/**
		 * Get the field @c action.
		 */
		const OpString & GetAction() const
		{
			return _action;
		}

		/**
		 * Get the field @c submenu.
		 */
		const OpString & GetSubmenu() const
		{
			return _submenu;
		}

		/**
		 * Get the field @c actionParam.
		 */
		const OpString & GetActionParam() const
		{
			return _actionParam;
		}

		/**
		 * Get the field @c row.
		 */
		UINT32 GetRow() const
		{
			return _row;
		}

		/**
		 * Get the field @c shortcutLetter.
		 */
		const OpString & GetShortcutLetter() const
		{
			return _shortcutLetter;
		}

		/**
		 * Get the field @c shortcut.
		 */
		const OpString & GetShortcut() const
		{
			return _shortcut;
		}

		/**
		 * Get the field @c rect.
		 */
		const OpScopeDesktopWindowManager_MessageSet::DesktopWindowRect & GetRect() const
		{
			return _rect;
		}

		/**
		 * Get the field @c enabled.
		 */
		BOOL GetEnabled() const
		{
			return _enabled;
		}

		/**
		 * Get the field @c checked.
		 */
		BOOL GetChecked() const
		{
			return _checked;
		}

		/**
		 * Get the field @c bold.
		 */
		BOOL GetBold() const
		{
			return _bold;
		}

		/**
		 * Get the field @c separator.
		 */
		BOOL GetSeparator() const
		{
			return _separator;
		}

		// Setters

		/**
		 * Set the field @c text.
		 */
		OP_STATUS SetText(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c action.
		 */
		OP_STATUS SetAction(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c submenu.
		 */
		OP_STATUS SetSubmenu(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c actionParam.
		 */
		OP_STATUS SetActionParam(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c row.
		 */
		void SetRow(UINT32 v)
		{
			_row = v;
		}

		/**
		 * Set the field @c shortcutLetter.
		 */
		OP_STATUS SetShortcutLetter(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c shortcut.
		 */
		OP_STATUS SetShortcut(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c rect.
		 */
		OpScopeDesktopWindowManager_MessageSet::DesktopWindowRect & GetRectRef();

		/**
		 * Set the field @c enabled.
		 */
		void SetEnabled(BOOL v)
		{
			_enabled = v;
		}

		/**
		 * Set the field @c checked.
		 */
		void SetChecked(BOOL v)
		{
			_checked = v;
		}

		/**
		 * Set the field @c bold.
		 */
		void SetBold(BOOL v)
		{
			_bold = v;
		}

		/**
		 * Set the field @c separator.
		 */
		void SetSeparator(BOOL v)
		{
			_separator = v;
		}

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeDesktopWindowManager_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		OpString _text;
		OpString _action;
		OpString _submenu;
		OpString _actionParam;
		UINT32 _row;
		OpString _shortcutLetter;
		OpString _shortcut;
		OpScopeDesktopWindowManager_MessageSet::DesktopWindowRect _rect;
		BOOL _enabled;
		BOOL _checked;
		BOOL _bold;
		BOOL _separator;

		OpProtobufBitField<12> has_bits_;
		mutable int                 encoded_size_;
	};


	class QuickMenuItemID
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 2
		};
		// END: Internal enums


		QuickMenuItemID(
			)
			: _popupMenu(FALSE)
			, encoded_size_(-1)
		{
		}
		OP_STATUS Construct(
			const OpString & menu_text_arg
			)
		{
			RETURN_IF_ERROR(_menuText.Set(menu_text_arg));
			return OpStatus::OK;
		}

		// Checkers
		/**
		 * Check if the field @c menuText is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasMenuText() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c popupMenu is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasPopupMenu() const
		{
			return has_bits_.Reference().IsSet(1);
		}

		// Getters

		/**
		 * Get the field @c menuText.
		 */
		const OpString & GetMenuText() const
		{
			return _menuText;
		}

		/**
		 * Get the field @c popupMenu.
		 */
		BOOL GetPopupMenu() const
		{
			return _popupMenu;
		}

		// Setters

		/**
		 * Set the field @c menuText.
		 */
		OP_STATUS SetMenuText(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c popupMenu.
		 */
		void SetPopupMenu(BOOL v)
		{
			has_bits_.Reference().SetBit(1);
			_popupMenu = v;
		}

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeDesktopWindowManager_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		OpString _menuText;
		BOOL _popupMenu;

		OpProtobufBitField<2> has_bits_;
		mutable int                 encoded_size_;
	};


	class QuickMenuID
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 1
		};
		// END: Internal enums


		QuickMenuID(
			)
			: encoded_size_(-1)
		{
		}
		OP_STATUS Construct(
			const OpString & menu_name_arg
			)
		{
			RETURN_IF_ERROR(_menuName.Set(menu_name_arg));
			return OpStatus::OK;
		}

		// Checkers
		/**
		 * Check if the field @c menuName is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasMenuName() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c menuName.
		 */
		const OpString & GetMenuName() const
		{
			return _menuName;
		}

		// Setters

		/**
		 * Set the field @c menuName.
		 */
		OP_STATUS SetMenuName(const uni_char * v, int l = KAll);

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeDesktopWindowManager_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		OpString _menuName;

		OpProtobufBitField<1> has_bits_;
		mutable int                 encoded_size_;
	};


	class QuickMenuInfo
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 4
		};
		// END: Internal enums


		QuickMenuInfo(
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
		 * Check if the field @c menuId is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasMenuId() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c rect is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasRect() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c windowId is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasWindowId() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c menuItemList is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasMenuItemList() const
		{
			return has_bits_.Reference().IsSet(3);
		}

		// Getters

		/**
		 * Get the field @c menuId.
		 */
		const OpScopeDesktopWindowManager_MessageSet::QuickMenuID & GetMenuId() const
		{
			return _menuId;
		}

		/**
		 * Get the field @c rect.
		 */
		const OpScopeDesktopWindowManager_MessageSet::DesktopWindowRect & GetRect() const
		{
			return _rect;
		}

		/**
		 * Get the field @c windowId.
		 */
		const OpScopeDesktopWindowManager_MessageSet::DesktopWindowID & GetWindowId() const
		{
			return _windowId;
		}

		/**
		 * Get the field @c menuItemList.
		 */
		const OpProtobufMessageVector<OpScopeDesktopWindowManager_MessageSet::QuickMenuItemInfo> & GetMenuItemList() const
		{
			return _menuItemList;
		}

		// Setters

		/**
		 * Set the field @c menuId.
		 */
		OpScopeDesktopWindowManager_MessageSet::QuickMenuID & GetMenuIdRef();

		/**
		 * Set the field @c rect.
		 */
		OpScopeDesktopWindowManager_MessageSet::DesktopWindowRect & GetRectRef();

		/**
		 * Set the field @c windowId.
		 */
		OpScopeDesktopWindowManager_MessageSet::DesktopWindowID & GetWindowIdRef();

		/**
		 * Set the field @c menuItemList.
		 */
		OpProtobufMessageVector<OpScopeDesktopWindowManager_MessageSet::QuickMenuItemInfo> & GetMenuItemListRef();

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeDesktopWindowManager_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		OpScopeDesktopWindowManager_MessageSet::QuickMenuID _menuId;
		OpScopeDesktopWindowManager_MessageSet::DesktopWindowRect _rect;
		OpScopeDesktopWindowManager_MessageSet::DesktopWindowID _windowId;
		OpProtobufMessageVector<OpScopeDesktopWindowManager_MessageSet::QuickMenuItemInfo> _menuItemList;

		OpProtobufBitField<4> has_bits_;
		mutable int                 encoded_size_;
	};


	class QuickMenuList
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 1
		};
		// END: Internal enums


		QuickMenuList(
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
		 * Check if the field @c menuList is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasMenuList() const
		{
			return has_bits_.Reference().IsSet(0);
		}

		// Getters

		/**
		 * Get the field @c menuList.
		 */
		const OpProtobufMessageVector<OpScopeDesktopWindowManager_MessageSet::QuickMenuInfo> & GetMenuList() const
		{
			return _menuList;
		}

		// Setters

		/**
		 * Set the field @c menuList.
		 */
		OpProtobufMessageVector<OpScopeDesktopWindowManager_MessageSet::QuickMenuInfo> & GetMenuListRef();

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeDesktopWindowManager_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		OpProtobufMessageVector<OpScopeDesktopWindowManager_MessageSet::QuickMenuInfo> _menuList;

		OpProtobufBitField<1> has_bits_;
		mutable int                 encoded_size_;
	};


	/**
	 * Desktop Window Information
	 */
	class DesktopWindowInfo
	{
	public:
		// BEGIN: Nested items

		// Enum DesktopWindowInfo.DesktopWindowType
		typedef DesktopWindowInfo_DesktopWindowType DesktopWindowType;
		static const DesktopWindowInfo_DesktopWindowType DESKTOPWINDOWTYPE_UNKNOWN = DesktopWindowInfo_DesktopWindowType_DESKTOPWINDOWTYPE_UNKNOWN;
		static const DesktopWindowInfo_DesktopWindowType DESKTOPWINDOWTYPE_DIALOG = DesktopWindowInfo_DesktopWindowType_DESKTOPWINDOWTYPE_DIALOG;
		static const DesktopWindowInfo_DesktopWindowType DESKTOPWINDOWTYPE_NORMAL = DesktopWindowInfo_DesktopWindowType_DESKTOPWINDOWTYPE_NORMAL;

		// Enum DesktopWindowInfo.DesktopWindowState
		typedef DesktopWindowInfo_DesktopWindowState DesktopWindowState;
		static const DesktopWindowInfo_DesktopWindowState DESKTOPWINDOWSTATE_RESTORED = DesktopWindowInfo_DesktopWindowState_DESKTOPWINDOWSTATE_RESTORED;
		static const DesktopWindowInfo_DesktopWindowState DESKTOPWINDOWSTATE_MINIMIZED = DesktopWindowInfo_DesktopWindowState_DESKTOPWINDOWSTATE_MINIMIZED;
		static const DesktopWindowInfo_DesktopWindowState DESKTOPWINDOWSTATE_MAXIMIZED = DesktopWindowInfo_DesktopWindowState_DESKTOPWINDOWSTATE_MAXIMIZED;
		static const DesktopWindowInfo_DesktopWindowState DESKTOPWINDOWSTATE_FULLSCREEN = DesktopWindowInfo_DesktopWindowState_DESKTOPWINDOWSTATE_FULLSCREEN;

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 8
		};
		// END: Internal enums


		DesktopWindowInfo(
			UINT32 window_id_arg = 0,
			DesktopWindowInfo_DesktopWindowType window_type_arg = DesktopWindowInfo_DesktopWindowType_DESKTOPWINDOWTYPE_UNKNOWN,
			BOOL on_screen_arg = FALSE,
			DesktopWindowInfo_DesktopWindowState state_arg = DesktopWindowInfo_DesktopWindowState_DESKTOPWINDOWSTATE_RESTORED,
			BOOL active_arg = FALSE
			)
			: _windowID(window_id_arg)
			, _windowType(window_type_arg)
			, _onScreen(on_screen_arg)
			, _state(state_arg)
			, _active(active_arg)
			, encoded_size_(-1)
		{
		}
		OP_STATUS Construct(
			const OpString & title_arg,
			const OpString & name_arg
			)
		{
			RETURN_IF_ERROR(_title.Set(title_arg));
			RETURN_IF_ERROR(_name.Set(name_arg));
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
		 * Check if the field @c title is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasTitle() const
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

		/**
		 * Check if the field @c windowType is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasWindowType() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c onScreen is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasOnScreen() const
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

		/**
		 * Check if the field @c rect is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasRect() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c active is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasActive() const
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
		 * Get the field @c title.
		 */
		const OpString & GetTitle() const
		{
			return _title;
		}

		/**
		 * Get the field @c name.
		 * 
		 * 
		 * Name of the window (e.g. "Account Subscription Dialog")
		 * from dialog ini or quick-widget-names.h
		 */
		const OpString & GetName() const
		{
			return _name;
		}

		/**
		 * Get the field @c windowType.
		 */
		OpScopeDesktopWindowManager_MessageSet::DesktopWindowInfo_DesktopWindowType GetWindowType() const
		{
			return static_cast<OpScopeDesktopWindowManager_MessageSet::DesktopWindowInfo_DesktopWindowType>(_windowType);
		}

		/**
		 * Get the field @c onScreen.
		 * 
		 * 
		 * Set if the window is entirely on the screen
		 * 
		 */
		BOOL GetOnScreen() const
		{
			return _onScreen;
		}

		/**
		 * Get the field @c state.
		 */
		OpScopeDesktopWindowManager_MessageSet::DesktopWindowInfo_DesktopWindowState GetState() const
		{
			return static_cast<OpScopeDesktopWindowManager_MessageSet::DesktopWindowInfo_DesktopWindowState>(_state);
		}

		/**
		 * Get the field @c rect.
		 */
		const OpScopeDesktopWindowManager_MessageSet::DesktopWindowRect & GetRect() const
		{
			return _rect;
		}

		/**
		 * Get the field @c active.
		 */
		BOOL GetActive() const
		{
			return _active;
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
		 * Set the field @c title.
		 */
		OP_STATUS SetTitle(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c name.
		 * 
		 * 
		 * Name of the window (e.g. "Account Subscription Dialog")
		 * from dialog ini or quick-widget-names.h
		 */
		OP_STATUS SetName(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c windowType.
		 */
		void SetWindowType(OpScopeDesktopWindowManager_MessageSet::DesktopWindowInfo_DesktopWindowType v);

		/**
		 * Set the field @c onScreen.
		 * 
		 * 
		 * Set if the window is entirely on the screen
		 * 
		 */
		void SetOnScreen(BOOL v)
		{
			_onScreen = v;
		}

		/**
		 * Set the field @c state.
		 */
		void SetState(OpScopeDesktopWindowManager_MessageSet::DesktopWindowInfo_DesktopWindowState v);

		/**
		 * Set the field @c rect.
		 */
		OpScopeDesktopWindowManager_MessageSet::DesktopWindowRect & GetRectRef();

		/**
		 * Set the field @c active.
		 */
		void SetActive(BOOL v)
		{
			_active = v;
		}

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeDesktopWindowManager_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		UINT32 _windowID;
		OpString _title;
		OpString _name;
		INT32 _windowType;
		BOOL _onScreen;
		INT32 _state;
		OpScopeDesktopWindowManager_MessageSet::DesktopWindowRect _rect;
		BOOL _active;

		OpProtobufBitField<8> has_bits_;
		mutable int                 encoded_size_;
	};



	// END: Message classes

};


class OpProtobufMessage;

// This class contains the descriptors of all messages in the given set
// When a message descriptor is first requested it is allocated and put in this structure,
// subsequent uses of the descriptor will just use the previously allocated object.
class OpScopeDesktopWindowManager_Descriptors
{
public:
	OpScopeDesktopWindowManager_Descriptors();
	~OpScopeDesktopWindowManager_Descriptors();

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
		_gen_MessageOffs_desktop_window_id_,
		_gen_MessageOffs_desktop_window_info_,
		_gen_MessageOffs_desktop_window_list_,
		_gen_MessageOffs_desktop_window_rect_,
		_gen_MessageOffs_quick_menu_id_,
		_gen_MessageOffs_quick_menu_info_,
		_gen_MessageOffs_quick_menu_item_id_,
		_gen_MessageOffs_quick_menu_item_info_,
		_gen_MessageOffs_quick_menu_list_,
		_gen_MessageOffs_quick_widget_info_,
		_gen_MessageOffs_quick_widget_info_list_,
		_gen_MessageOffs_quick_widget_search_,

		// Message count is calculated at compile time
		_gen_Message_Count
	};

	// The IDs for all messages
	enum // message IDs
	{
		  _gen_void_MsgID // The Default/void message. Also ensures that all other IDs start at 1
		, _gen_MsgID_desktop_window_id_
		, _gen_MsgID_desktop_window_info_
		, _gen_MsgID_desktop_window_list_
		, _gen_MsgID_desktop_window_rect_
		, _gen_MsgID_quick_menu_id_
		, _gen_MsgID_quick_menu_info_
		, _gen_MsgID_quick_menu_item_id_
		, _gen_MsgID_quick_menu_item_info_
		, _gen_MsgID_quick_menu_list_
		, _gen_MsgID_quick_widget_info_
		, _gen_MsgID_quick_widget_info_list_
		, _gen_MsgID_quick_widget_search_
	};
	enum // Enum IDs
	{
		Enum_void_ID_, // Dummy entry, ensures IDs starts at 1
		// Meta info for DesktopWindowType
		_gen_EnumID_DesktopWindowInfo_DesktopWindowType,
		// Meta info for DesktopWindowState
		_gen_EnumID_DesktopWindowInfo_DesktopWindowState,
		// Meta info for QuickWidgetType
		_gen_EnumID_QuickWidgetInfo_QuickWidgetType,
		// Meta info for QuickWidgetSearchType
		_gen_EnumID_QuickWidgetSearch_QuickWidgetSearchType,

		_gen_dummy_EnumID // Only present to allow preceding entries to always end in a comma
	};

	enum // Enum values
	{
		// Meta info for DesktopWindowType
		_gen_EnumValueCount_DesktopWindowInfo_DesktopWindowType = 3,
		// Meta info for DesktopWindowState
		_gen_EnumValueCount_DesktopWindowInfo_DesktopWindowState = 4,
		// Meta info for QuickWidgetType
		_gen_EnumValueCount_QuickWidgetInfo_QuickWidgetType = 22,
		// Meta info for QuickWidgetSearchType
		_gen_EnumValueCount_QuickWidgetSearch_QuickWidgetSearchType = 3,

		_gen_dummy_EnumValue // Only present to allow preceding entries to always end in a comma
	};
	enum // Enum names
	{
		// Meta info for DesktopWindowType
		_gen_Enum_DesktopWindowInfo_DesktopWindowType,
		// Meta info for DesktopWindowState
		_gen_Enum_DesktopWindowInfo_DesktopWindowState,
		// Meta info for QuickWidgetType
		_gen_Enum_QuickWidgetInfo_QuickWidgetType,
		// Meta info for QuickWidgetSearchType
		_gen_Enum_QuickWidgetSearch_QuickWidgetSearchType,

		// Enum count is calculated at compile time
		_gen_Enum_Count
	};

	// List of message descriptors. They are initially NULL and assigned an object when the message is used.
	mutable OpProtobufMessage *message_list[_gen_Message_Count];

	// List of IDs for enums, assigned in Construct().
	unsigned enum_id_list[4];

};


class OpScopeDesktopWindowManager_SI
	: public OpScopeService
	, public OpScopeDesktopWindowManager_MessageSet
{
public:
	OpScopeDesktopWindowManager_SI(const uni_char* id = NULL, OpScopeServiceManager *manager = NULL, ControlType control = CONTROL_MANUAL);
	virtual ~OpScopeDesktopWindowManager_SI();

	enum CommandEnum
	{
		  Command_GetActiveWindow = 1
		, Command_ListWindows = 2
		, Command_ListQuickWidgets = 3
		, Command_GetQuickWidget = 4
		, Command_OnWindowShown = 5
		, Command_OnWindowUpdated = 6
		, Command_OnWindowClosed = 7
		, Command_OnWindowActivated = 8
		, Command_OnWindowPageLoaded = 9
		, Command_ListQuickMenus = 10
		, Command_OnMenuShown = 11
		, Command_OnMenuClosed = 12
		, Command_PressQuickMenuItem = 13
		, Command_OnMenuItemPressed = 14
		, Command_OnWindowPageChanged = 15

		, Command_Count = 15 // Number of commands in this service
	};
	// This class contains the descriptors or all commands of this service
	class Descriptors
	    : public OpScopeDesktopWindowManager_Descriptors
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
	virtual OP_STATUS DoGetActiveWindow(DesktopWindowID &out) = 0;
	virtual OP_STATUS DoListWindows(DesktopWindowList &out) = 0;
	virtual OP_STATUS DoListQuickWidgets(const DesktopWindowID &in, QuickWidgetInfoList &out) = 0;
	virtual OP_STATUS DoGetQuickWidget(const QuickWidgetSearch &in, QuickWidgetInfo &out) = 0;
	virtual OP_STATUS DoListQuickMenus(QuickMenuList &out) = 0;
	virtual OP_STATUS DoPressQuickMenuItem(const QuickMenuItemID &in) = 0;

	// Event functions
	OP_STATUS SendOnWindowShown(const DesktopWindowInfo &msg);
	OP_STATUS SendOnWindowUpdated(const DesktopWindowInfo &msg);
	OP_STATUS SendOnWindowClosed(const DesktopWindowInfo &msg);
	OP_STATUS SendOnWindowActivated(const DesktopWindowInfo &msg);
	OP_STATUS SendOnWindowPageLoaded(const DesktopWindowInfo &msg);
	OP_STATUS SendOnMenuShown(const QuickMenuInfo &msg);
	OP_STATUS SendOnMenuClosed(const QuickMenuID &msg);
	OP_STATUS SendOnMenuItemPressed(const QuickMenuItemID &msg);
	OP_STATUS SendOnWindowPageChanged(const DesktopWindowInfo &msg);


	Descriptors *GetDescriptors() const;



// Service API implementation: END

};




#endif // SCOPE_DESKTOP_SUPPORT

#endif // G_SCOPE_DESKTOP_WINDOW_MANAGER_INTERFACE_H
