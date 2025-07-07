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

// Generated from ../../modules/scope/services/window_manager/window_manager.proto



#ifndef G_SCOPE_WINDOW_MANAGER_INTERFACE_H
#define G_SCOPE_WINDOW_MANAGER_INTERFACE_H

#ifdef SCOPE_WINDOW_MANAGER_SUPPORT

#include "modules/protobuf/src/opvaluevector.h"
#include "modules/protobuf/src/protobuf_message.h"
#include "modules/scope/src/scope_service.h"
#include "modules/util/adt/opvector.h"
#include "modules/util/opstring.h"



#include "modules/protobuf/src/protobuf_utils.h"
#include "modules/protobuf/src/protobuf_message.h"

class OpScopeTPMessage;
class OpProtobufField;
class OpProtobufMessage;


class OpScopeWindowManager_Descriptors;

class OpScopeWindowManager_MessageSet
{
public:
	// BEGIN: ctor/dtor

	OpScopeWindowManager_MessageSet();
	virtual ~OpScopeWindowManager_MessageSet();

	// END: ctor/dtor
	// BEGIN: Enums

	// End: Enums

	// BEGIN: Message classes

	// Forward declarations
	class ModifyTypeFilterArg;
	class OpenURLArg;
	class CloseWindowArg;
	class CreateWindowArg;
	class WindowList;
	class WindowFilter;
	class WindowID;
	class WindowInfo;

	class ModifyTypeFilterArg
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 2
		};
		// END: Internal enums


		ModifyTypeFilterArg(
			)
			: encoded_size_(-1)
		{
		}
		OP_STATUS Construct(
			const OpString & mode_arg
			)
		{
			RETURN_IF_ERROR(_mode.Set(mode_arg));
			return OpStatus::OK;
		}

		// Checkers
		/**
		 * Check if the field @c mode is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasMode() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c typeList is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasTypeList() const
		{
			return has_bits_.Reference().IsSet(1);
		}

		// Getters

		/**
		 * Get the field @c mode.
		 * 
		 * Possible values:
		 * 
		 *  - "replace" clears the current filter, and replaces it with the input values.
		 *  - "append" adds the input values to the current filter. It is acceptable to
		 *    add a value already present in the filter (silent fail).
		 *  - "default" resets the filter to its defaults. The input values are ignored.
		 *    The default is ["normal_hidden", "devtools"].
		 */
		const OpString & GetMode() const
		{
			return _mode;
		}

		/**
		 * Get the field @c typeList.
		 * 
		 * A list of window types to exclude. For valid window types, see CreateWindowArg.
		 */
		const OpAutoVector<OpString> & GetTypeList() const
		{
			return _typeList;
		}

		// Setters

		/**
		 * Set the field @c mode.
		 * 
		 * Possible values:
		 * 
		 *  - "replace" clears the current filter, and replaces it with the input values.
		 *  - "append" adds the input values to the current filter. It is acceptable to
		 *    add a value already present in the filter (silent fail).
		 *  - "default" resets the filter to its defaults. The input values are ignored.
		 *    The default is ["normal_hidden", "devtools"].
		 */
		OP_STATUS SetMode(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c typeList.
		 * 
		 * A list of window types to exclude. For valid window types, see CreateWindowArg.
		 */
		OpAutoVector<OpString> & GetTypeListRef();

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeWindowManager_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		OpString _mode;
		OpAutoVector<OpString> _typeList;

		OpProtobufBitField<2> has_bits_;
		mutable int                 encoded_size_;
	};


	class OpenURLArg
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 2
		};
		// END: Internal enums


		OpenURLArg(
			UINT32 window_id_arg = 0
			)
			: _windowID(window_id_arg)
			, encoded_size_(-1)
		{
		}
		OP_STATUS Construct(
			const OpString & url_arg
			)
		{
			RETURN_IF_ERROR(_url.Set(url_arg));
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
		 * Check if the field @c url is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasUrl() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c windowID.
		 * 
		 * Start loading the URL in this Window.
		 */
		UINT32 GetWindowID() const
		{
			return _windowID;
		}

		/**
		 * Get the field @c url.
		 * 
		 * The URL to load.
		 */
		const OpString & GetUrl() const
		{
			return _url;
		}

		// Setters

		/**
		 * Set the field @c windowID.
		 * 
		 * Start loading the URL in this Window.
		 */
		void SetWindowID(UINT32 v)
		{
			_windowID = v;
		}

		/**
		 * Set the field @c url.
		 * 
		 * The URL to load.
		 */
		OP_STATUS SetUrl(const uni_char * v, int l = KAll);

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeWindowManager_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		UINT32 _windowID;
		OpString _url;

		OpProtobufBitField<2> has_bits_;
		mutable int                 encoded_size_;
	};


	class CloseWindowArg
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 1
		};
		// END: Internal enums


		CloseWindowArg(
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
		 * 
		 * Close window with the specified ID. If a window with that ID does
		 * not exist, an error is returned.
		 */
		UINT32 GetWindowID() const
		{
			return _windowID;
		}

		// Setters

		/**
		 * Set the field @c windowID.
		 * 
		 * Close window with the specified ID. If a window with that ID does
		 * not exist, an error is returned.
		 */
		void SetWindowID(UINT32 v)
		{
			_windowID = v;
		}

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeWindowManager_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		UINT32 _windowID;

		OpProtobufBitField<1> has_bits_;
		mutable int                 encoded_size_;
	};


	class CreateWindowArg
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 2
		};
		// END: Internal enums


		CreateWindowArg(
			)
			: _isPrivate(FALSE)
			, encoded_size_(-1)
		{
		}
		OP_STATUS Construct(
			const OpString * window_type_arg = NULL
			)
		{
			if (window_type_arg)
			{
				RETURN_IF_ERROR(_windowType.Set(*window_type_arg));
				has_bits_.Reference().SetBit(0);

			}
			return OpStatus::OK;
		}

		// Checkers
		/**
		 * Check if the field @c windowType is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasWindowType() const
		{
			return has_bits_.Reference().IsSet(0);
		}

		/**
		 * Check if the field @c isPrivate is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasIsPrivate() const
		{
			return has_bits_.Reference().IsSet(1);
		}

		// Getters

		/**
		 * Get the field @c windowType.
		 * 
		 * Type is one of:
		 * - "normal"
		 * - "download"
		 * - "cache"
		 * - "plugins"
		 * - "history"
		 * - "help"
		 * - "mail_view"
		 * - "mail_compose"
		 * - "newsfeed_view"
		 * - "ad"
		 * - "im_view"
		 * - "p2p_view"
		 * - "brand_view"
		 * - "print_selection"
		 * - "js_console"
		 * - "gadget"
		 * - "controller"
		 * - "info"
		 * - "dialog"
		 * - "thumbnail"
		 * - "normal_hidden"
		 * - "devtools"
		 */
		const OpString & GetWindowType() const
		{
			return _windowType;
		}

		/**
		 * Get the field @c isPrivate.
		 * 
		 * If set then it forces Privacy Mode of a window
		 * else the default setting will be used.
		 * @since 2.3
		 */
		BOOL GetIsPrivate() const
		{
			return _isPrivate;
		}

		// Setters

		/**
		 * Set the field @c windowType.
		 * 
		 * Type is one of:
		 * - "normal"
		 * - "download"
		 * - "cache"
		 * - "plugins"
		 * - "history"
		 * - "help"
		 * - "mail_view"
		 * - "mail_compose"
		 * - "newsfeed_view"
		 * - "ad"
		 * - "im_view"
		 * - "p2p_view"
		 * - "brand_view"
		 * - "print_selection"
		 * - "js_console"
		 * - "gadget"
		 * - "controller"
		 * - "info"
		 * - "dialog"
		 * - "thumbnail"
		 * - "normal_hidden"
		 * - "devtools"
		 */
		OP_STATUS SetWindowType(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c isPrivate.
		 * 
		 * If set then it forces Privacy Mode of a window
		 * else the default setting will be used.
		 * @since 2.3
		 */
		void SetIsPrivate(BOOL v)
		{
			has_bits_.Reference().SetBit(1);
			_isPrivate = v;
		}

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeWindowManager_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		OpString _windowType;
		BOOL _isPrivate;

		OpProtobufBitField<2> has_bits_;
		mutable int                 encoded_size_;
	};


	class WindowList
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 1
		};
		// END: Internal enums


		WindowList(
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
		const OpProtobufMessageVector<OpScopeWindowManager_MessageSet::WindowInfo> & GetWindowList() const
		{
			return _windowList;
		}

		// Setters

		/**
		 * Set the field @c windowList.
		 */
		OpProtobufMessageVector<OpScopeWindowManager_MessageSet::WindowInfo> & GetWindowListRef();

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeWindowManager_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		OpProtobufMessageVector<OpScopeWindowManager_MessageSet::WindowInfo> _windowList;

		OpProtobufBitField<1> has_bits_;
		mutable int                 encoded_size_;
	};


	class WindowFilter
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 5
		};
		// END: Internal enums


		WindowFilter(
			BOOL clear_filter_arg = FALSE
			)
			: _clearFilter(clear_filter_arg)
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
		 * Check if the field @c clearFilter is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasClearFilter() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c includeIDList is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasIncludeIDList() const
		{
			return has_bits_.Reference().IsSet(1);
		}

		/**
		 * Check if the field @c includePatternList is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasIncludePatternList() const
		{
			return has_bits_.Reference().IsSet(2);
		}

		/**
		 * Check if the field @c excludeIDList is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasExcludeIDList() const
		{
			return has_bits_.Reference().IsSet(3);
		}

		/**
		 * Check if the field @c excludePatternList is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasExcludePatternList() const
		{
			return has_bits_.Reference().IsSet(4);
		}

		// Getters

		/**
		 * Get the field @c clearFilter.
		 * 
		 * Clears the list of included and excluded ID's before modifying them.
		 * Does not touch window type filter.
		 */
		BOOL GetClearFilter() const
		{
			return _clearFilter;
		}

		/**
		 * Get the field @c includeIDList.
		 */
		const OpValueVector<UINT32> & GetIncludeIDList() const
		{
			return _includeIDList;
		}

		/**
		 * Get the field @c includePatternList.
		 * 
		 * The string can currently only have one value: `"*"`, meaning all window-ids.
		 * The filter automatically includes windows that are opened from windows
		 * in the INCLUDE filter.
		 */
		const OpAutoVector<OpString> & GetIncludePatternList() const
		{
			return _includePatternList;
		}

		/**
		 * Get the field @c excludeIDList.
		 */
		const OpValueVector<UINT32> & GetExcludeIDList() const
		{
			return _excludeIDList;
		}

		/**
		 * Get the field @c excludePatternList.
		 */
		const OpAutoVector<OpString> & GetExcludePatternList() const
		{
			return _excludePatternList;
		}

		// Setters

		/**
		 * Set the field @c clearFilter.
		 * 
		 * Clears the list of included and excluded ID's before modifying them.
		 * Does not touch window type filter.
		 */
		void SetClearFilter(BOOL v)
		{
			_clearFilter = v;
		}

		/**
		 * Set the field @c includeIDList.
		 */
		OpValueVector<UINT32> & GetIncludeIDListRef();

		/**
		 * Set the field @c includeIDList.
		 */
		OP_STATUS AppendToIncludeIDList(UINT32 v);

		/**
		 * Set the field @c includePatternList.
		 * 
		 * The string can currently only have one value: `"*"`, meaning all window-ids.
		 * The filter automatically includes windows that are opened from windows
		 * in the INCLUDE filter.
		 */
		OpAutoVector<OpString> & GetIncludePatternListRef();

		/**
		 * Set the field @c excludeIDList.
		 */
		OpValueVector<UINT32> & GetExcludeIDListRef();

		/**
		 * Set the field @c excludeIDList.
		 */
		OP_STATUS AppendToExcludeIDList(UINT32 v);

		/**
		 * Set the field @c excludePatternList.
		 */
		OpAutoVector<OpString> & GetExcludePatternListRef();

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeWindowManager_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		BOOL _clearFilter;
		OpValueVector<UINT32> _includeIDList;
		OpAutoVector<OpString> _includePatternList;
		OpValueVector<UINT32> _excludeIDList;
		OpAutoVector<OpString> _excludePatternList;

		OpProtobufBitField<5> has_bits_;
		mutable int                 encoded_size_;
	};


	class WindowID
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 1
		};
		// END: Internal enums


		WindowID(
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

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeWindowManager_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		UINT32 _windowID;

		OpProtobufBitField<1> has_bits_;
		mutable int                 encoded_size_;
	};


	/**
	 * TODO: We probably want a lot more information about each window, like URL, shortcut
	 *       icon, etc.
	 */
	class WindowInfo
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 6
		};
		// END: Internal enums


		WindowInfo(
			UINT32 window_id_arg = 0,
			UINT32 opener_id_arg = 0
			)
			: _windowID(window_id_arg)
			, _openerID(opener_id_arg)
			, _isPrivate(FALSE)
			, encoded_size_(-1)
		{
		}
		OP_STATUS Construct(
			const OpString & title_arg,
			const OpString & window_type_arg,
			const OpString * extension_name_arg = NULL
			)
		{
			RETURN_IF_ERROR(_title.Set(title_arg));
			RETURN_IF_ERROR(_windowType.Set(window_type_arg));
			if (extension_name_arg)
			{
				RETURN_IF_ERROR(_extensionName.Set(*extension_name_arg));
				has_bits_.Reference().SetBit(4);

			}
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
		 * Check if the field @c windowType is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasWindowType() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c openerID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasOpenerID() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c extensionName is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasExtensionName() const
		{
			return has_bits_.Reference().IsSet(4);
		}

		/**
		 * Check if the field @c isPrivate is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasIsPrivate() const
		{
			return has_bits_.Reference().IsSet(5);
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
		 * Get the field @c windowType.
		 * 
		 * 
		 * TODO: Some of these are obsolete, like "ad". Figure out which ones should really be present.
		 * 
		 * Type is one of:
		 * - "normal"
		 * - "download"
		 * - "cache"
		 * - "plugins"
		 * - "history"
		 * - "help"
		 * - "mail_view"
		 * - "mail_compose"
		 * - "newsfeed_view"
		 * - "ad"
		 * - "im_view"
		 * - "p2p_view"
		 * - "brand_view"
		 * - "print_selection"
		 * - "js_console"
		 * - "gadget"
		 * - "controller"
		 * - "info"
		 * - "dialog"
		 * - "thumbnail"
		 * - "normal_hidden"
		 * - "devtools"
		 */
		const OpString & GetWindowType() const
		{
			return _windowType;
		}

		/**
		 * Get the field @c openerID.
		 * 
		 * The `window-id` of the window who opened the window in question,
		 * or 0 if it was not opened by another window.
		 */
		UINT32 GetOpenerID() const
		{
			return _openerID;
		}

		/**
		 * Get the field @c extensionName.
		 * 
		 * The name of the extension if window type is 'gadget'.
		 * 
		 * @since 2.2
		 */
		const OpString & GetExtensionName() const
		{
			return _extensionName;
		}

		/**
		 * Get the field @c isPrivate.
		 * 
		 * true if the window is in Privacy Mode.
		 * @since 2.3
		 */
		BOOL GetIsPrivate() const
		{
			return _isPrivate;
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
		 * Set the field @c windowType.
		 * 
		 * 
		 * TODO: Some of these are obsolete, like "ad". Figure out which ones should really be present.
		 * 
		 * Type is one of:
		 * - "normal"
		 * - "download"
		 * - "cache"
		 * - "plugins"
		 * - "history"
		 * - "help"
		 * - "mail_view"
		 * - "mail_compose"
		 * - "newsfeed_view"
		 * - "ad"
		 * - "im_view"
		 * - "p2p_view"
		 * - "brand_view"
		 * - "print_selection"
		 * - "js_console"
		 * - "gadget"
		 * - "controller"
		 * - "info"
		 * - "dialog"
		 * - "thumbnail"
		 * - "normal_hidden"
		 * - "devtools"
		 */
		OP_STATUS SetWindowType(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c openerID.
		 * 
		 * The `window-id` of the window who opened the window in question,
		 * or 0 if it was not opened by another window.
		 */
		void SetOpenerID(UINT32 v)
		{
			_openerID = v;
		}

		/**
		 * Set the field @c extensionName.
		 * 
		 * The name of the extension if window type is 'gadget'.
		 * 
		 * @since 2.2
		 */
		OP_STATUS SetExtensionName(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c isPrivate.
		 * 
		 * true if the window is in Privacy Mode.
		 * @since 2.3
		 */
		void SetIsPrivate(BOOL v)
		{
			has_bits_.Reference().SetBit(5);
			_isPrivate = v;
		}

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeWindowManager_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		UINT32 _windowID;
		OpString _title;
		OpString _windowType;
		UINT32 _openerID;
		OpString _extensionName;
		BOOL _isPrivate;

		OpProtobufBitField<6> has_bits_;
		mutable int                 encoded_size_;
	};



	// END: Message classes

};


class OpProtobufMessage;

// This class contains the descriptors of all messages in the given set
// When a message descriptor is first requested it is allocated and put in this structure,
// subsequent uses of the descriptor will just use the previously allocated object.
class OpScopeWindowManager_Descriptors
{
public:
	OpScopeWindowManager_Descriptors();
	~OpScopeWindowManager_Descriptors();

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
		_gen_MessageOffs_close_window_arg_,
		_gen_MessageOffs_create_window_arg_,
		_gen_MessageOffs_modify_type_filter_arg_,
		_gen_MessageOffs_open_url_arg_,
		_gen_MessageOffs_window_filter_,
		_gen_MessageOffs_window_id_,
		_gen_MessageOffs_window_info_,
		_gen_MessageOffs_window_list_,

		// Message count is calculated at compile time
		_gen_Message_Count
	};

	// The IDs for all messages
	enum // message IDs
	{
		  _gen_void_MsgID // The Default/void message. Also ensures that all other IDs start at 1
		, _gen_MsgID_close_window_arg_
		, _gen_MsgID_create_window_arg_
		, _gen_MsgID_modify_type_filter_arg_
		, _gen_MsgID_open_url_arg_
		, _gen_MsgID_window_filter_
		, _gen_MsgID_window_id_
		, _gen_MsgID_window_info_
		, _gen_MsgID_window_list_
	};

	// List of message descriptors. They are initially NULL and assigned an object when the message is used.
	mutable OpProtobufMessage *message_list[_gen_Message_Count];

};


class OpScopeWindowManager_SI
	: public OpScopeService
	, public OpScopeWindowManager_MessageSet
{
public:
	OpScopeWindowManager_SI(const uni_char* id = NULL, OpScopeServiceManager *manager = NULL, ControlType control = CONTROL_MANUAL);
	virtual ~OpScopeWindowManager_SI();

	enum CommandEnum
	{
		  Command_GetActiveWindow = 1
		, Command_ListWindows = 2
		, Command_ModifyFilter = 3
		, Command_OnWindowUpdated = 4
		, Command_OnWindowClosed = 5
		, Command_OnWindowActivated = 6
		, Command_OnWindowLoaded = 7
		, Command_CreateWindow = 8
		, Command_CloseWindow = 9
		, Command_OpenURL = 10
		, Command_ModifyTypeFilter = 11

		, Command_Count = 11 // Number of commands in this service
	};
	// This class contains the descriptors or all commands of this service
	class Descriptors
	    : public OpScopeWindowManager_Descriptors
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

	virtual const char *GetVersionString() const;
	virtual int         GetMajorVersion() const;
	virtual int         GetMinorVersion() const;
	virtual const char *GetPatchVersion() const;

	// Request/Response functions
	virtual OP_STATUS DoGetActiveWindow(WindowID &out) = 0;
	virtual OP_STATUS DoListWindows(WindowList &out) = 0;
	virtual OP_STATUS DoModifyFilter(const WindowFilter &in) = 0;
	virtual OP_STATUS DoCreateWindow(const CreateWindowArg &in, WindowID &out) = 0;
	virtual OP_STATUS DoCloseWindow(const CloseWindowArg &in) = 0;
	virtual OP_STATUS DoOpenURL(const OpenURLArg &in) = 0;
	virtual OP_STATUS DoModifyTypeFilter(const ModifyTypeFilterArg &in) = 0;

	// Event functions
	OP_STATUS SendOnWindowUpdated(const WindowInfo &msg);
	OP_STATUS SendOnWindowClosed(const WindowID &msg);
	OP_STATUS SendOnWindowActivated(const WindowID &msg);
	OP_STATUS SendOnWindowLoaded(const WindowID &msg);


	Descriptors *GetDescriptors() const;



// Service API implementation: END

};




#endif // SCOPE_WINDOW_MANAGER_SUPPORT

#endif // G_SCOPE_WINDOW_MANAGER_INTERFACE_H
