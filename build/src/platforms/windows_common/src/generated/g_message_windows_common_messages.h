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

// Generated from ../../platforms/windows_common/messages.proto

#ifndef G_MESSAGE_WINDOWS_COMMON_MESSAGES_H
#define G_MESSAGE_WINDOWS_COMMON_MESSAGES_H

#ifdef _WIN32

#include "platforms/windows_common/src/generated/g_proto_windows_common_messages.h"
#include "modules/hardcore/component/OpTypedMessage.h"


	// BEGIN: Message classes
	/**
	 * Request plugin window information.
	 * 
	 * @return WindowsPluginWindowInfoResponse
	 */
	class OpWindowsPluginWindowInfoMessage
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
		static const unsigned Type = 2200300119u;

		virtual ~OpWindowsPluginWindowInfoMessage();

		static OpWindowsPluginWindowInfoMessage* Create()
		{
		    OpMessageAddress src;
		    OpMessageAddress dst;
		    double delay = 0;
		    return OP_NEW(OpWindowsPluginWindowInfoMessage, (src, dst, delay));
		}

		static OpWindowsPluginWindowInfoMessage* Create(
			const OpMessageAddress& src,
			const OpMessageAddress& dst = OpMessageAddress(),
			double delay = 0)
		{
			return OP_NEW(OpWindowsPluginWindowInfoMessage, (src, dst, delay));
		}



		static OpWindowsPluginWindowInfoMessage* Cast(const OpTypedMessage* msg);

		static OpWindowsPluginWindowInfoMessage* Deserialize(
			const OpMessageAddress& src,
			const OpMessageAddress& dst,
			double delay,
			const OpData& data);

		virtual OP_STATUS Serialize(OpData& data) const;

		virtual const char *GetTypeString() const;

		// Accessors/modifiers comes here


	protected:

		OpWindowsPluginWindowInfoMessage(
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
		OpWindows_commonMessages_MessageSet::WindowsPluginWindowInfo protobuf_data;
	};


	/**
	 * Send plugin window information.
	 * 
	 * @field window Top-level window
	 */
	class OpWindowsPluginWindowInfoResponseMessage
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
		static const unsigned Type = 2652452076u;

		virtual ~OpWindowsPluginWindowInfoResponseMessage();



		static OpWindowsPluginWindowInfoResponseMessage* Create(
			const OpMessageAddress& src,
			const OpMessageAddress& dst = OpMessageAddress(),
			double delay = 0)
		{
			return OP_NEW(OpWindowsPluginWindowInfoResponseMessage, (src, dst, delay));
		}

		static OpWindowsPluginWindowInfoResponseMessage* Create(
			UINT64 window_arg = 0,
			UINT64 render_context_arg = 0,
			const OpMessageAddress& src = OpMessageAddress(),
			const OpMessageAddress& dst = OpMessageAddress(),
			double delay = 0)
		{
			OpWindowsPluginWindowInfoResponseMessage *obj = OP_NEW(OpWindowsPluginWindowInfoResponseMessage, (src, dst, delay, window_arg, render_context_arg));
			if (obj)
			{
				if (OpStatus::IsSuccess(obj->Construct()))
					return obj;

				OP_DELETE(obj);
			}
			return NULL;
		}

		static OpWindowsPluginWindowInfoResponseMessage* Cast(const OpTypedMessage* msg);

		static OpWindowsPluginWindowInfoResponseMessage* Deserialize(
			const OpMessageAddress& src,
			const OpMessageAddress& dst,
			double delay,
			const OpData& data);

		virtual OP_STATUS Serialize(OpData& data) const;

		virtual const char *GetTypeString() const;

		// Accessors/modifiers comes here
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
		UINT64 GetWindow() const
		{
			return protobuf_data.GetWindow();
		}

		/**
		 * Set the field @c window.
		 */
		void SetWindow(UINT64 v)
		{
			protobuf_data.SetWindow(v);
		}

		/**
		 * Check if the field @c renderContext is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasRenderContext() const
		{
			return protobuf_data.HasRenderContext();
		}

		/**
		 * Get the field @c renderContext.
		 */
		UINT64 GetRenderContext() const
		{
			return protobuf_data.GetRenderContext();
		}

		/**
		 * Set the field @c renderContext.
		 */
		void SetRenderContext(UINT64 v)
		{
			protobuf_data.SetRenderContext(v);
		}



	protected:

		OpWindowsPluginWindowInfoResponseMessage(
				const OpMessageAddress& src,
				const OpMessageAddress& dst,
				double delay
				, UINT64 window_arg = 0
				, UINT64 render_context_arg = 0
				)
			: OpTypedMessage(Type, src, dst, delay)
			, protobuf_data(window_arg, render_context_arg)
		{
		}



		OP_STATUS Construct(

		)
		{
			return protobuf_data.Construct();
		}

	private:
		OpWindows_commonMessages_MessageSet::WindowsPluginWindowInfoResponse protobuf_data;
	};



	// END: Message classes
#endif // _WIN32

#endif // G_MESSAGE_WINDOWS_COMMON_MESSAGES_H
