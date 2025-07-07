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

// Generated from ../../platforms/x11api/messages.proto

#ifndef G_MESSAGE_X11API_MESSAGES_H
#define G_MESSAGE_X11API_MESSAGES_H

#ifdef NS4P_UNIX_PLATFORM

#include "platforms/x11api/src/generated/g_proto_x11api_messages.h"
#include "modules/hardcore/component/OpTypedMessage.h"


	// BEGIN: Message classes
	/**
	 * Request browser window information.
	 * 
	 * @return BrowserWindowInformationResponse
	 */
	class OpBrowserWindowInformationMessage
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
		static const unsigned Type = 753634781u;

		virtual ~OpBrowserWindowInformationMessage();

		static OpBrowserWindowInformationMessage* Create()
		{
		    OpMessageAddress src;
		    OpMessageAddress dst;
		    double delay = 0;
		    return OP_NEW(OpBrowserWindowInformationMessage, (src, dst, delay));
		}

		static OpBrowserWindowInformationMessage* Create(
			const OpMessageAddress& src,
			const OpMessageAddress& dst = OpMessageAddress(),
			double delay = 0)
		{
			return OP_NEW(OpBrowserWindowInformationMessage, (src, dst, delay));
		}



		static OpBrowserWindowInformationMessage* Cast(const OpTypedMessage* msg);

		static OpBrowserWindowInformationMessage* Deserialize(
			const OpMessageAddress& src,
			const OpMessageAddress& dst,
			double delay,
			const OpData& data);

		virtual OP_STATUS Serialize(OpData& data) const;

		virtual const char *GetTypeString() const;

		// Accessors/modifiers comes here


	protected:

		OpBrowserWindowInformationMessage(
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
		OpX11apiMessages_MessageSet::BrowserWindowInformation protobuf_data;
	};


	/**
	 * Send browser window information.
	 * 
	 * Additional information can be obtained using Xlib:
	 *     Display* OpenDisplay(display_name)
	 *     Colormap DefaultColormap(display, screen_number)
	 *     GC       DefaultGC(display, screen_number)
	 *     int      DefaultDepth(display, screen_number)
	 *     Visual*  DefaultVisual(display, screen_number)
	 * 
	 * @field displayName Name of X11 display.
	 * @field screenNumber The screen referenced by the display.
	 * @field window Top-level browser window that contains the plug-in sending this request.
	 */
	class OpBrowserWindowInformationResponseMessage
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
		static const unsigned Type = 3412502550u;

		virtual ~OpBrowserWindowInformationResponseMessage();



		static OpBrowserWindowInformationResponseMessage* Create(
			const OpMessageAddress& src,
			const OpMessageAddress& dst = OpMessageAddress(),
			double delay = 0)
		{
			return OP_NEW(OpBrowserWindowInformationResponseMessage, (src, dst, delay));
		}

		static OpBrowserWindowInformationResponseMessage* Create(
			const UniString & display_name_arg = UniString(),
			INT32 screen_number_arg = 0,
			UINT32 window_arg = 0,
			const OpMessageAddress& src = OpMessageAddress(),
			const OpMessageAddress& dst = OpMessageAddress(),
			double delay = 0)
		{
			OpBrowserWindowInformationResponseMessage *obj = OP_NEW(OpBrowserWindowInformationResponseMessage, (src, dst, delay, display_name_arg, screen_number_arg, window_arg));
			if (obj)
			{
				if (OpStatus::IsSuccess(obj->Construct()))
					return obj;

				OP_DELETE(obj);
			}
			return NULL;
		}

		static OpBrowserWindowInformationResponseMessage* Cast(const OpTypedMessage* msg);

		static OpBrowserWindowInformationResponseMessage* Deserialize(
			const OpMessageAddress& src,
			const OpMessageAddress& dst,
			double delay,
			const OpData& data);

		virtual OP_STATUS Serialize(OpData& data) const;

		virtual const char *GetTypeString() const;

		// Accessors/modifiers comes here
		/**
		 * Check if the field @c displayName is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasDisplayName() const
		{
			return protobuf_data.HasDisplayName();
		}

		/**
		 * Get the field @c displayName.
		 */
		const UniString & GetDisplayName() const
		{
			return protobuf_data.GetDisplayName();
		}

		/**
		 * Set the field @c displayName.
		 */
		OP_STATUS SetDisplayName(const UniString & v);

		/**
		 * Set the field @c displayName.
		 */
		OP_STATUS SetDisplayName(const uni_char * v, int l = KAll);

		/**
		 * Check if the field @c screenNumber is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasScreenNumber() const
		{
			return protobuf_data.HasScreenNumber();
		}

		/**
		 * Get the field @c screenNumber.
		 */
		INT32 GetScreenNumber() const
		{
			return protobuf_data.GetScreenNumber();
		}

		/**
		 * Set the field @c screenNumber.
		 */
		void SetScreenNumber(INT32 v)
		{
			protobuf_data.SetScreenNumber(v);
		}

		/**
		 * Check if the field @c window is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasWindow() const
		{
			return protobuf_data.HasWindow();
		}

		/**
		 * Get the field @c window.
		 */
		UINT32 GetWindow() const
		{
			return protobuf_data.GetWindow();
		}

		/**
		 * Set the field @c window.
		 */
		void SetWindow(UINT32 v)
		{
			protobuf_data.SetWindow(v);
		}



	protected:

		OpBrowserWindowInformationResponseMessage(
				const OpMessageAddress& src,
				const OpMessageAddress& dst,
				double delay
				, const UniString & display_name_arg = UniString()
				, INT32 screen_number_arg = 0
				, UINT32 window_arg = 0
				)
			: OpTypedMessage(Type, src, dst, delay)
			, protobuf_data(display_name_arg, screen_number_arg, window_arg)
		{
		}



		OP_STATUS Construct(

		)
		{
			return protobuf_data.Construct();
		}

	private:
		OpX11apiMessages_MessageSet::BrowserWindowInformationResponse protobuf_data;
	};


	/**
	 * Notify the browser plugin window that the plugin has created and added its
	 * window on top of it.
	 * 
	 * This message does not have a response.
	 */
	class OpPluginGtkPlugAddedMessage
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
		static const unsigned Type = 4122141295u;

		virtual ~OpPluginGtkPlugAddedMessage();



		static OpPluginGtkPlugAddedMessage* Create(
			const OpMessageAddress& src,
			const OpMessageAddress& dst = OpMessageAddress(),
			double delay = 0)
		{
			return OP_NEW(OpPluginGtkPlugAddedMessage, (src, dst, delay));
		}

		static OpPluginGtkPlugAddedMessage* Create(
			UINT64 plug_arg = 0,
			const OpMessageAddress& src = OpMessageAddress(),
			const OpMessageAddress& dst = OpMessageAddress(),
			double delay = 0)
		{
			OpPluginGtkPlugAddedMessage *obj = OP_NEW(OpPluginGtkPlugAddedMessage, (src, dst, delay, plug_arg));
			if (obj)
			{
				if (OpStatus::IsSuccess(obj->Construct()))
					return obj;

				OP_DELETE(obj);
			}
			return NULL;
		}

		static OpPluginGtkPlugAddedMessage* Cast(const OpTypedMessage* msg);

		static OpPluginGtkPlugAddedMessage* Deserialize(
			const OpMessageAddress& src,
			const OpMessageAddress& dst,
			double delay,
			const OpData& data);

		virtual OP_STATUS Serialize(OpData& data) const;

		virtual const char *GetTypeString() const;

		// Accessors/modifiers comes here
		/**
		 * Check if the field @c plug is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasPlug() const
		{
			return protobuf_data.HasPlug();
		}

		/**
		 * Get the field @c plug.
		 */
		UINT64 GetPlug() const
		{
			return protobuf_data.GetPlug();
		}

		/**
		 * Set the field @c plug.
		 */
		void SetPlug(UINT64 v)
		{
			protobuf_data.SetPlug(v);
		}



	protected:

		OpPluginGtkPlugAddedMessage(
				const OpMessageAddress& src,
				const OpMessageAddress& dst,
				double delay
				, UINT64 plug_arg = 0
				)
			: OpTypedMessage(Type, src, dst, delay)
			, protobuf_data(plug_arg)
		{
		}



		OP_STATUS Construct(

		)
		{
			return protobuf_data.Construct();
		}

	private:
		OpX11apiMessages_MessageSet::PluginGtkPlugAdded protobuf_data;
	};


	/**
	 * Notify plug-in of a reparenting.
	 * 
	 * A reparenting occurs when a tab is torn from its current browser window
	 * and put into another existing or a new browser window. The plug-in needs
	 * this notification in order to be able to propagate input events properly.
	 * 
	 * @field parent The identifier of the new top-level browser window that now
	 *               contains this plug-in instance.
	 * 
	 * This message does not have a response.
	 */
	class OpPluginParentChangedMessage
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
		static const unsigned Type = 121956073u;

		virtual ~OpPluginParentChangedMessage();



		static OpPluginParentChangedMessage* Create(
			const OpMessageAddress& src,
			const OpMessageAddress& dst = OpMessageAddress(),
			double delay = 0)
		{
			return OP_NEW(OpPluginParentChangedMessage, (src, dst, delay));
		}

		static OpPluginParentChangedMessage* Create(
			UINT64 parent_arg = 0,
			const OpMessageAddress& src = OpMessageAddress(),
			const OpMessageAddress& dst = OpMessageAddress(),
			double delay = 0)
		{
			OpPluginParentChangedMessage *obj = OP_NEW(OpPluginParentChangedMessage, (src, dst, delay, parent_arg));
			if (obj)
			{
				if (OpStatus::IsSuccess(obj->Construct()))
					return obj;

				OP_DELETE(obj);
			}
			return NULL;
		}

		static OpPluginParentChangedMessage* Cast(const OpTypedMessage* msg);

		static OpPluginParentChangedMessage* Deserialize(
			const OpMessageAddress& src,
			const OpMessageAddress& dst,
			double delay,
			const OpData& data);

		virtual OP_STATUS Serialize(OpData& data) const;

		virtual const char *GetTypeString() const;

		// Accessors/modifiers comes here
		/**
		 * Check if the field @c parent is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasParent() const
		{
			return protobuf_data.HasParent();
		}

		/**
		 * Get the field @c parent.
		 */
		UINT64 GetParent() const
		{
			return protobuf_data.GetParent();
		}

		/**
		 * Set the field @c parent.
		 */
		void SetParent(UINT64 v)
		{
			protobuf_data.SetParent(v);
		}



	protected:

		OpPluginParentChangedMessage(
				const OpMessageAddress& src,
				const OpMessageAddress& dst,
				double delay
				, UINT64 parent_arg = 0
				)
			: OpTypedMessage(Type, src, dst, delay)
			, protobuf_data(parent_arg)
		{
		}



		OP_STATUS Construct(

		)
		{
			return protobuf_data.Construct();
		}

	private:
		OpX11apiMessages_MessageSet::PluginParentChanged protobuf_data;
	};



	// END: Message classes
#endif // NS4P_UNIX_PLATFORM

#endif // G_MESSAGE_X11API_MESSAGES_H
