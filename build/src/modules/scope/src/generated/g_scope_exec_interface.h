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

// Generated from ../../modules/scope/services/exec/exec.proto



#ifndef G_SCOPE_EXEC_INTERFACE_H
#define G_SCOPE_EXEC_INTERFACE_H

#ifdef SCOPE_EXEC_SUPPORT

#include "modules/protobuf/src/protobuf_message.h"
#include "modules/scope/src/scope_service.h"
#include "modules/util/adt/bytebuffer.h"
#include "modules/util/adt/opvector.h"
#include "modules/util/opstring.h"



#include "modules/protobuf/src/protobuf_utils.h"
#include "modules/protobuf/src/protobuf_message.h"

class OpScopeTPMessage;
class OpProtobufField;
class OpProtobufMessage;


class OpScopeExec_Descriptors;

class OpScopeExec_MessageSet
{
public:
	// BEGIN: ctor/dtor

	OpScopeExec_MessageSet();
	virtual ~OpScopeExec_MessageSet();

	// END: ctor/dtor
	// BEGIN: Enums

	// End: Enums

	// BEGIN: Message classes

	// Forward declarations
	class ActionList_Action;
	class ScreenWatcher_ColorSpec;
	class ScreenWatcherResult_ColorMatch;
	class ActionInfoList_ActionInfo;
	class ActionList;
	class Area;
	class ScreenWatcher;
	class MouseAction;
	class ScreenWatcherResult;
	class ActionInfoList;

	class ActionList_Action
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 5
		};
		// END: Internal enums


		ActionList_Action(
			)
			: _windowID(0)
			, _data(0)
			, encoded_size_(-1)
		{
		}
		OP_STATUS Construct(
			const OpString & name_arg,
			const OpString * value_arg = NULL,
			const OpString * string_param_arg = NULL
			)
		{
			RETURN_IF_ERROR(_name.Set(name_arg));
			if (value_arg)
			{
				RETURN_IF_ERROR(_value.Set(*value_arg));
				has_bits_.Reference().SetBit(1);

			}
			if (string_param_arg)
			{
				RETURN_IF_ERROR(_stringParam.Set(*string_param_arg));
				has_bits_.Reference().SetBit(4);

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
		 * Check if the field @c value is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasValue() const
		{
			return has_bits_.Reference().IsSet(1);
		}

		/**
		 * Check if the field @c windowID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasWindowID() const
		{
			return has_bits_.Reference().IsSet(2);
		}

		/**
		 * Check if the field @c data is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasData() const
		{
			return has_bits_.Reference().IsSet(3);
		}

		/**
		 * Check if the field @c stringParam is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasStringParam() const
		{
			return has_bits_.Reference().IsSet(4);
		}

		// Getters

		/**
		 * Get the field @c name.
		 * 
		 * The name of the action to execute. 
		 * This is either a regular Opera action (e.g. "Page Down"),
		 * or a special exec-action. Both kinds can be found by 
		 * calling `GetActionInfoList`. The special cases are
		 * prefixed with underscore ("_"), and these require `value` 
		 * parameter to work, but always ignores `windowID`.
		 * 
		 * The special cases may include:
		 *     _keydown | _keyup: 
		 *         The `value` is either a key-name ("ctrl", "down", etc.)
		 *         or a single character ("a", "b", etc.)
		 *     _type: 
		 *         Types the text present in `value` 
		 *         (a different approach is the "Insert" action)
		 * 
		 * It is currently not possible to figure out which actions 
		 * take parameters (`value`), and which don't. Optimistically, 
		 * we have made the `Action` type extendable to include 
		 * such information later.
		 */
		const OpString & GetName() const
		{
			return _name;
		}

		/**
		 * Get the field @c value.
		 * 
		 * String parameter for extra string data to be sent with the action
		 * E.g. "opera.com" to the command "go"
		 */
		const OpString & GetValue() const
		{
			return _value;
		}

		/**
		 * Get the field @c windowID.
		 * 
		 * Window to send the action to, 0 for the currently active window
		 * 
		 * WARNING: Please be sure you want this is you use it as you
		 *          might not actually know the correct window and then
		 *          the action will fail. 0 is best if you are unsure
		 */
		UINT32 GetWindowID() const
		{
			return _windowID;
		}

		/**
		 * Get the field @c data.
		 * 
		 * Data parameter for extra integer data to be sent with the action
		 * 
		 * In some actions the data parameter is interpreted as a pointer
		 * rather than an integer. In these cases the action will fail.
		 */
		INT32 GetData() const
		{
			return _data;
		}

		/**
		 * Get the field @c stringParam.
		 * 
		 * Extra string parameter for action, sent in addition to the 'value'
		 * parameter for actions that need two strings
		 */
		const OpString & GetStringParam() const
		{
			return _stringParam;
		}

		// Setters

		/**
		 * Set the field @c name.
		 * 
		 * The name of the action to execute. 
		 * This is either a regular Opera action (e.g. "Page Down"),
		 * or a special exec-action. Both kinds can be found by 
		 * calling `GetActionInfoList`. The special cases are
		 * prefixed with underscore ("_"), and these require `value` 
		 * parameter to work, but always ignores `windowID`.
		 * 
		 * The special cases may include:
		 *     _keydown | _keyup: 
		 *         The `value` is either a key-name ("ctrl", "down", etc.)
		 *         or a single character ("a", "b", etc.)
		 *     _type: 
		 *         Types the text present in `value` 
		 *         (a different approach is the "Insert" action)
		 * 
		 * It is currently not possible to figure out which actions 
		 * take parameters (`value`), and which don't. Optimistically, 
		 * we have made the `Action` type extendable to include 
		 * such information later.
		 */
		OP_STATUS SetName(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c value.
		 * 
		 * String parameter for extra string data to be sent with the action
		 * E.g. "opera.com" to the command "go"
		 */
		OP_STATUS SetValue(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c windowID.
		 * 
		 * Window to send the action to, 0 for the currently active window
		 * 
		 * WARNING: Please be sure you want this is you use it as you
		 *          might not actually know the correct window and then
		 *          the action will fail. 0 is best if you are unsure
		 */
		void SetWindowID(UINT32 v)
		{
			has_bits_.Reference().SetBit(2);
			_windowID = v;
		}

		/**
		 * Set the field @c data.
		 * 
		 * Data parameter for extra integer data to be sent with the action
		 * 
		 * In some actions the data parameter is interpreted as a pointer
		 * rather than an integer. In these cases the action will fail.
		 */
		void SetData(INT32 v)
		{
			has_bits_.Reference().SetBit(3);
			_data = v;
		}

		/**
		 * Set the field @c stringParam.
		 * 
		 * Extra string parameter for action, sent in addition to the 'value'
		 * parameter for actions that need two strings
		 */
		OP_STATUS SetStringParam(const uni_char * v, int l = KAll);

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeExec_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		OpString _name;
		OpString _value;
		UINT32 _windowID;
		INT32 _data;
		OpString _stringParam;

		OpProtobufBitField<5> has_bits_;
		mutable int                 encoded_size_;
	};


	/**
	 * Specifies a new color specification.
	 * The `id` is used when reporting back the results.
	 * You can have overlapping color specifications.
	 * Note: There can be a maximum of 16 color specifications!
	 * 
	 * Color values ranges from 0 (no color) to 255 (maximal saturation), other values are not allowed.
	 * Default (meaning field missing) is 0 for any low fields and 255 for any high fields.
	 */
	class ScreenWatcher_ColorSpec
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 7
		};
		// END: Internal enums


		ScreenWatcher_ColorSpec(
			UINT32 id_arg = 0
			)
			: _id(id_arg)
			, _redLow(0)
			, _redHigh(255)
			, _greenLow(0)
			, _greenHigh(255)
			, _blueLow(0)
			, _blueHigh(255)
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
		 * Check if the field @c id is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasId() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c redLow is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasRedLow() const
		{
			return has_bits_.Reference().IsSet(1);
		}

		/**
		 * Check if the field @c redHigh is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasRedHigh() const
		{
			return has_bits_.Reference().IsSet(2);
		}

		/**
		 * Check if the field @c greenLow is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasGreenLow() const
		{
			return has_bits_.Reference().IsSet(3);
		}

		/**
		 * Check if the field @c greenHigh is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasGreenHigh() const
		{
			return has_bits_.Reference().IsSet(4);
		}

		/**
		 * Check if the field @c blueLow is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasBlueLow() const
		{
			return has_bits_.Reference().IsSet(5);
		}

		/**
		 * Check if the field @c blueHigh is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasBlueHigh() const
		{
			return has_bits_.Reference().IsSet(6);
		}

		// Getters

		/**
		 * Get the field @c id.
		 */
		UINT32 GetId() const
		{
			return _id;
		}

		/**
		 * Get the field @c redLow.
		 */
		UINT32 GetRedLow() const
		{
			return _redLow;
		}

		/**
		 * Get the field @c redHigh.
		 */
		UINT32 GetRedHigh() const
		{
			return _redHigh;
		}

		/**
		 * Get the field @c greenLow.
		 */
		UINT32 GetGreenLow() const
		{
			return _greenLow;
		}

		/**
		 * Get the field @c greenHigh.
		 */
		UINT32 GetGreenHigh() const
		{
			return _greenHigh;
		}

		/**
		 * Get the field @c blueLow.
		 */
		UINT32 GetBlueLow() const
		{
			return _blueLow;
		}

		/**
		 * Get the field @c blueHigh.
		 */
		UINT32 GetBlueHigh() const
		{
			return _blueHigh;
		}

		// Setters

		/**
		 * Set the field @c id.
		 */
		void SetId(UINT32 v)
		{
			_id = v;
		}

		/**
		 * Set the field @c redLow.
		 */
		void SetRedLow(UINT32 v)
		{
			has_bits_.Reference().SetBit(1);
			_redLow = v;
		}

		/**
		 * Set the field @c redHigh.
		 */
		void SetRedHigh(UINT32 v)
		{
			has_bits_.Reference().SetBit(2);
			_redHigh = v;
		}

		/**
		 * Set the field @c greenLow.
		 */
		void SetGreenLow(UINT32 v)
		{
			has_bits_.Reference().SetBit(3);
			_greenLow = v;
		}

		/**
		 * Set the field @c greenHigh.
		 */
		void SetGreenHigh(UINT32 v)
		{
			has_bits_.Reference().SetBit(4);
			_greenHigh = v;
		}

		/**
		 * Set the field @c blueLow.
		 */
		void SetBlueLow(UINT32 v)
		{
			has_bits_.Reference().SetBit(5);
			_blueLow = v;
		}

		/**
		 * Set the field @c blueHigh.
		 */
		void SetBlueHigh(UINT32 v)
		{
			has_bits_.Reference().SetBit(6);
			_blueHigh = v;
		}

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeExec_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		UINT32 _id;
		UINT32 _redLow;
		UINT32 _redHigh;
		UINT32 _greenLow;
		UINT32 _greenHigh;
		UINT32 _blueLow;
		UINT32 _blueHigh;

		OpProtobufBitField<7> has_bits_;
		mutable int                 encoded_size_;
	};


	class ScreenWatcherResult_ColorMatch
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 2
		};
		// END: Internal enums


		ScreenWatcherResult_ColorMatch(
			UINT32 id_arg = 0,
			UINT32 count_arg = 0
			)
			: _id(id_arg)
			, _count(count_arg)
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
		 * Check if the field @c id is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasId() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c count is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasCount() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c id.
		 * 
		 * The `ColorSpec.id` which matched a color
		 */
		UINT32 GetId() const
		{
			return _id;
		}

		/**
		 * Get the field @c count.
		 * 
		 * Number of pixels for the matching `id`
		 */
		UINT32 GetCount() const
		{
			return _count;
		}

		// Setters

		/**
		 * Set the field @c id.
		 * 
		 * The `ColorSpec.id` which matched a color
		 */
		void SetId(UINT32 v)
		{
			_id = v;
		}

		/**
		 * Set the field @c count.
		 * 
		 * Number of pixels for the matching `id`
		 */
		void SetCount(UINT32 v)
		{
			_count = v;
		}

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeExec_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		UINT32 _id;
		UINT32 _count;

		OpProtobufBitField<2> has_bits_;
		mutable int                 encoded_size_;
	};


	/**
	 * Name of an action, to be used in the `Action` message.
	 */
	class ActionInfoList_ActionInfo
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 1
		};
		// END: Internal enums


		ActionInfoList_ActionInfo(
			)
			: encoded_size_(-1)
		{
		}
		OP_STATUS Construct(
			const OpString & name_arg
			)
		{
			RETURN_IF_ERROR(_name.Set(name_arg));
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

		// Getters

		/**
		 * Get the field @c name.
		 */
		const OpString & GetName() const
		{
			return _name;
		}

		// Setters

		/**
		 * Set the field @c name.
		 */
		OP_STATUS SetName(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c name.
		 */
		OP_STATUS SetName(const char * v, int l = KAll);

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeExec_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		OpString _name;

		OpProtobufBitField<1> has_bits_;
		mutable int                 encoded_size_;
	};


	class ActionList
	{
	public:
		// BEGIN: Nested items

		// Message ActionList.Action
		typedef ActionList_Action Action;

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 1
		};
		// END: Internal enums


		ActionList(
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
		 * Check if the field @c actionList is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasActionList() const
		{
			return has_bits_.Reference().IsSet(0);
		}

		// Getters

		/**
		 * Get the field @c actionList.
		 */
		const OpProtobufMessageVector<OpScopeExec_MessageSet::ActionList_Action> & GetActionList() const
		{
			return _actionList;
		}

		// Setters

		/**
		 * Set the field @c actionList.
		 */
		OpProtobufMessageVector<OpScopeExec_MessageSet::ActionList_Action> & GetActionListRef();

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeExec_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		OpProtobufMessageVector<OpScopeExec_MessageSet::ActionList_Action> _actionList;

		OpProtobufBitField<1> has_bits_;
		mutable int                 encoded_size_;
	};


	class Area
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 4
		};
		// END: Internal enums


		Area(
			INT32 x_arg = 0,
			INT32 y_arg = 0,
			INT32 w_arg = 0,
			INT32 h_arg = 0
			)
			: _x(x_arg)
			, _y(y_arg)
			, _w(w_arg)
			, _h(h_arg)
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
		 * Check if the field @c w is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasW() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c h is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasH() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c x.
		 */
		INT32 GetX() const
		{
			return _x;
		}

		/**
		 * Get the field @c y.
		 */
		INT32 GetY() const
		{
			return _y;
		}

		/**
		 * Get the field @c w.
		 */
		INT32 GetW() const
		{
			return _w;
		}

		/**
		 * Get the field @c h.
		 */
		INT32 GetH() const
		{
			return _h;
		}

		// Setters

		/**
		 * Set the field @c x.
		 */
		void SetX(INT32 v)
		{
			_x = v;
		}

		/**
		 * Set the field @c y.
		 */
		void SetY(INT32 v)
		{
			_y = v;
		}

		/**
		 * Set the field @c w.
		 */
		void SetW(INT32 v)
		{
			_w = v;
		}

		/**
		 * Set the field @c h.
		 */
		void SetH(INT32 v)
		{
			_h = v;
		}

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeExec_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		INT32 _x;
		INT32 _y;
		INT32 _w;
		INT32 _h;

		OpProtobufBitField<4> has_bits_;
		mutable int                 encoded_size_;
	};


	class ScreenWatcher
	{
	public:
		// BEGIN: Nested items

		// Message ScreenWatcher.ColorSpec
		typedef ScreenWatcher_ColorSpec ColorSpec;

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 6
		};
		// END: Internal enums


		ScreenWatcher(
			UINT32 time_out_arg = 10000
			)
			: _timeOut(time_out_arg)
			, _windowID(0)
			, _includeImage(TRUE)
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
		 * Check if the field @c timeOut is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasTimeOut() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c area is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasArea() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c md5List is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasMd5List() const
		{
			return has_bits_.Reference().IsSet(2);
		}

		/**
		 * Check if the field @c windowID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasWindowID() const
		{
			return has_bits_.Reference().IsSet(3);
		}

		/**
		 * Check if the field @c colorSpecList is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasColorSpecList() const
		{
			return has_bits_.Reference().IsSet(4);
		}

		/**
		 * Check if the field @c includeImage is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasIncludeImage() const
		{
			return has_bits_.Reference().IsSet(5);
		}

		// Getters

		/**
		 * Get the field @c timeOut.
		 * 
		 * Number of milliseconds to wait before capturing the screen area.
		 * 
		 * The default is 10 seconds.
		 */
		UINT32 GetTimeOut() const
		{
			return _timeOut;
		}

		/**
		 * Get the field @c area.
		 * 
		 * Define an area on the page, relative to the page (not viewport).
		 * 
		 * The default area is {x=0, y=0, w=200, h=100}.
		 */
		const OpScopeExec_MessageSet::Area & GetArea() const
		{
			return _area;
		}

		/**
		 * Get the field @c md5List.
		 * 
		 * ``MD5`` sum of an image, in hexadecimal.
		 */
		const OpAutoVector<OpString> & GetMd5List() const
		{
			return _md5List;
		}

		/**
		 * Get the field @c windowID.
		 * 
		 * The ID of the window to watch, the default (or 0) is to watch the current window
		 */
		UINT32 GetWindowID() const
		{
			return _windowID;
		}

		/**
		 * Get the field @c colorSpecList.
		 */
		const OpProtobufMessageVector<OpScopeExec_MessageSet::ScreenWatcher_ColorSpec> & GetColorSpecList() const
		{
			return _colorSpecList;
		}

		/**
		 * Get the field @c includeImage.
		 * 
		 * If true then the image data will be sent in the response `WatcherResult.png`, otherwise the field will be omitted
		 * Can be used to reduce bandwith usage in applications where only hashes are needed.
		 */
		BOOL GetIncludeImage() const
		{
			return _includeImage;
		}

		// Setters

		/**
		 * Set the field @c timeOut.
		 * 
		 * Number of milliseconds to wait before capturing the screen area.
		 * 
		 * The default is 10 seconds.
		 */
		void SetTimeOut(UINT32 v)
		{
			_timeOut = v;
		}

		/**
		 * Set the field @c area.
		 * 
		 * Define an area on the page, relative to the page (not viewport).
		 * 
		 * The default area is {x=0, y=0, w=200, h=100}.
		 */
		OpScopeExec_MessageSet::Area & GetAreaRef();

		/**
		 * Set the field @c md5List.
		 * 
		 * ``MD5`` sum of an image, in hexadecimal.
		 */
		OpAutoVector<OpString> & GetMd5ListRef();

		/**
		 * Set the field @c windowID.
		 * 
		 * The ID of the window to watch, the default (or 0) is to watch the current window
		 */
		void SetWindowID(UINT32 v)
		{
			has_bits_.Reference().SetBit(3);
			_windowID = v;
		}

		/**
		 * Set the field @c colorSpecList.
		 */
		OpProtobufMessageVector<OpScopeExec_MessageSet::ScreenWatcher_ColorSpec> & GetColorSpecListRef();

		/**
		 * Set the field @c includeImage.
		 * 
		 * If true then the image data will be sent in the response `WatcherResult.png`, otherwise the field will be omitted
		 * Can be used to reduce bandwith usage in applications where only hashes are needed.
		 */
		void SetIncludeImage(BOOL v)
		{
			has_bits_.Reference().SetBit(5);
			_includeImage = v;
		}

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeExec_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		UINT32 _timeOut;
		OpScopeExec_MessageSet::Area _area;
		OpAutoVector<OpString> _md5List;
		UINT32 _windowID;
		OpProtobufMessageVector<OpScopeExec_MessageSet::ScreenWatcher_ColorSpec> _colorSpecList;
		BOOL _includeImage;

		OpProtobufBitField<6> has_bits_;
		mutable int                 encoded_size_;
	};


	class MouseAction
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 4
		};
		// END: Internal enums


		MouseAction(
			UINT32 window_id_arg = 0,
			INT32 x_arg = 0,
			INT32 y_arg = 0,
			UINT32 button_action_arg = 0
			)
			: _windowID(window_id_arg)
			, _x(x_arg)
			, _y(y_arg)
			, _buttonAction(button_action_arg)
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
		 * Check if the field @c buttonAction is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasButtonAction() const
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
		 * Get the field @c x.
		 */
		INT32 GetX() const
		{
			return _x;
		}

		/**
		 * Get the field @c y.
		 */
		INT32 GetY() const
		{
			return _y;
		}

		/**
		 * Get the field @c buttonAction.
		 * 
		 * `buttonAction` specifies the buttons to press or release
		 * It is specifies as the sum of button actions:
		 *       1 - Button 1 down
		 *       2 - Button 1 up
		 * 
		 *       4 - Button 2 down
		 *       8 - Button 2 up
		 * 
		 *      16 - Button 3 down
		 *      32 - Button 3 up
		 * 
		 * For example, to press button 1 and release button 2, the value is 9 (1+8)
		 * 
		 * Buttons are clicked in the sequence listed above. Note that down actions are
		 * listed before up actions, thus allowing single-clicking with one command
		 * (e.g. using value 3)
		 */
		UINT32 GetButtonAction() const
		{
			return _buttonAction;
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
		 * Set the field @c x.
		 */
		void SetX(INT32 v)
		{
			_x = v;
		}

		/**
		 * Set the field @c y.
		 */
		void SetY(INT32 v)
		{
			_y = v;
		}

		/**
		 * Set the field @c buttonAction.
		 * 
		 * `buttonAction` specifies the buttons to press or release
		 * It is specifies as the sum of button actions:
		 *       1 - Button 1 down
		 *       2 - Button 1 up
		 * 
		 *       4 - Button 2 down
		 *       8 - Button 2 up
		 * 
		 *      16 - Button 3 down
		 *      32 - Button 3 up
		 * 
		 * For example, to press button 1 and release button 2, the value is 9 (1+8)
		 * 
		 * Buttons are clicked in the sequence listed above. Note that down actions are
		 * listed before up actions, thus allowing single-clicking with one command
		 * (e.g. using value 3)
		 */
		void SetButtonAction(UINT32 v)
		{
			_buttonAction = v;
		}

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeExec_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		UINT32 _windowID;
		INT32 _x;
		INT32 _y;
		UINT32 _buttonAction;

		OpProtobufBitField<4> has_bits_;
		mutable int                 encoded_size_;
	};


	class ScreenWatcherResult
	{
	public:
		// BEGIN: Nested items

		// Message ScreenWatcherResult.ColorMatch
		typedef ScreenWatcherResult_ColorMatch ColorMatch;

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 4
		};
		// END: Internal enums


		ScreenWatcherResult(
			UINT32 window_id_arg = 0
			)
			: _windowID(window_id_arg)
			, encoded_size_(-1)
		{
		}
		OP_STATUS Construct(
			const OpString & md5_arg,
			const ByteBuffer * png_arg = NULL
			)
		{
			RETURN_IF_ERROR(_md5.Set(md5_arg));
			if (png_arg)
			{
				RETURN_IF_ERROR(OpProtobufAppend(_png, *png_arg));
				has_bits_.Reference().SetBit(2);

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
		 * Check if the field @c md5 is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasMd5() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c png is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasPng() const
		{
			return has_bits_.Reference().IsSet(2);
		}

		/**
		 * Check if the field @c colorMatchList is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasColorMatchList() const
		{
			return has_bits_.Reference().IsSet(3);
		}

		// Getters

		/**
		 * Get the field @c windowID.
		 * 
		 * The ID of the window that was triggered by a screen watch, or 0 if the screen watch failed or was cancelled
		 */
		UINT32 GetWindowID() const
		{
			return _windowID;
		}

		/**
		 * Get the field @c md5.
		 * 
		 * ``MD5`` sum of an image, in hexadecimal.
		 */
		const OpString & GetMd5() const
		{
			return _md5;
		}

		/**
		 * Get the field @c png.
		 */
		const ByteBuffer & GetPng() const
		{
			return _png;
		}

		/**
		 * Get the field @c colorMatchList.
		 */
		const OpProtobufMessageVector<OpScopeExec_MessageSet::ScreenWatcherResult_ColorMatch> & GetColorMatchList() const
		{
			return _colorMatchList;
		}

		// Setters

		/**
		 * Set the field @c windowID.
		 * 
		 * The ID of the window that was triggered by a screen watch, or 0 if the screen watch failed or was cancelled
		 */
		void SetWindowID(UINT32 v)
		{
			_windowID = v;
		}

		/**
		 * Set the field @c md5.
		 * 
		 * ``MD5`` sum of an image, in hexadecimal.
		 */
		OP_STATUS SetMd5(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c png.
		 */
		ByteBuffer & GetPngRef();

		/**
		 * Set the field @c colorMatchList.
		 */
		OpProtobufMessageVector<OpScopeExec_MessageSet::ScreenWatcherResult_ColorMatch> & GetColorMatchListRef();

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeExec_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		UINT32 _windowID;
		OpString _md5;
		ByteBuffer _png;
		OpProtobufMessageVector<OpScopeExec_MessageSet::ScreenWatcherResult_ColorMatch> _colorMatchList;

		OpProtobufBitField<4> has_bits_;
		mutable int                 encoded_size_;
	};


	/**
	 * List all valid `Action` `name`s
	 */
	class ActionInfoList
	{
	public:
		// BEGIN: Nested items

		// Message ActionInfoList.ActionInfo
		typedef ActionInfoList_ActionInfo ActionInfo;

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 1
		};
		// END: Internal enums


		ActionInfoList(
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
		 * Check if the field @c actionInfoList is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasActionInfoList() const
		{
			return has_bits_.Reference().IsSet(0);
		}

		// Getters

		/**
		 * Get the field @c actionInfoList.
		 */
		const OpProtobufMessageVector<OpScopeExec_MessageSet::ActionInfoList_ActionInfo> & GetActionInfoList() const
		{
			return _actionInfoList;
		}

		// Setters

		/**
		 * Set the field @c actionInfoList.
		 */
		OpProtobufMessageVector<OpScopeExec_MessageSet::ActionInfoList_ActionInfo> & GetActionInfoListRef();

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeExec_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		OpProtobufMessageVector<OpScopeExec_MessageSet::ActionInfoList_ActionInfo> _actionInfoList;

		OpProtobufBitField<1> has_bits_;
		mutable int                 encoded_size_;
	};



	// END: Message classes

};


class OpProtobufMessage;

// This class contains the descriptors of all messages in the given set
// When a message descriptor is first requested it is allocated and put in this structure,
// subsequent uses of the descriptor will just use the previously allocated object.
class OpScopeExec_Descriptors
{
public:
	OpScopeExec_Descriptors();
	~OpScopeExec_Descriptors();

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
		_gen_MessageOffs_action_list_action_,
		_gen_MessageOffs_action_info_list_action_info_,
		_gen_MessageOffs_action_info_list_,
		_gen_MessageOffs_action_list_,
		_gen_MessageOffs_area_,
		_gen_MessageOffs_screen_watcher_result_color_match_,
		_gen_MessageOffs_screen_watcher_color_spec_,
		_gen_MessageOffs_mouse_action_,
		_gen_MessageOffs_screen_watcher_,
		_gen_MessageOffs_screen_watcher_result_,

		// Message count is calculated at compile time
		_gen_Message_Count
	};

	// The IDs for all messages
	enum // message IDs
	{
		  _gen_void_MsgID // The Default/void message. Also ensures that all other IDs start at 1
		, _gen_MsgID_action_list_action_
		, _gen_MsgID_action_info_list_action_info_
		, _gen_MsgID_action_info_list_
		, _gen_MsgID_action_list_
		, _gen_MsgID_area_
		, _gen_MsgID_screen_watcher_result_color_match_
		, _gen_MsgID_screen_watcher_color_spec_
		, _gen_MsgID_mouse_action_
		, _gen_MsgID_screen_watcher_
		, _gen_MsgID_screen_watcher_result_
	};

	// List of message descriptors. They are initially NULL and assigned an object when the message is used.
	mutable OpProtobufMessage *message_list[_gen_Message_Count];

};


class OpScopeExec_SI
	: public OpScopeService
	, public OpScopeExec_MessageSet
{
public:
	OpScopeExec_SI(const uni_char* id = NULL, OpScopeServiceManager *manager = NULL, ControlType control = CONTROL_MANUAL);
	virtual ~OpScopeExec_SI();

	enum CommandEnum
	{
		  Command_Exec = 1
		, Command_GetActionInfoList = 2
		, Command_SetupScreenWatcher = 3
		, Command_SendMouseAction = 5

		, Command_Count = 4 // Number of commands in this service
	};
	// This class contains the descriptors or all commands of this service
	class Descriptors
	    : public OpScopeExec_Descriptors
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
	virtual OP_STATUS DoExec(const ActionList &in) = 0;
	virtual OP_STATUS DoGetActionInfoList(ActionInfoList &out) = 0;
	virtual OP_STATUS DoSendMouseAction(const MouseAction &in) = 0;
	virtual OP_STATUS DoSetupScreenWatcher(const ScreenWatcher &in, unsigned int async_tag) = 0;

	// Event functions
	OP_STATUS SendSetupScreenWatcher(const ScreenWatcherResult &msg, unsigned int tag);


	Descriptors *GetDescriptors() const;



// Service API implementation: END

};




#endif // SCOPE_EXEC_SUPPORT

#endif // G_SCOPE_EXEC_INTERFACE_H
