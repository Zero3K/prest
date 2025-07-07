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

// Generated from ../../modules/ns4plugins/component/messages.proto

#ifndef G_MESSAGE_NS4PLUGINS_MESSAGES_H
#define G_MESSAGE_NS4PLUGINS_MESSAGES_H



#include "modules/ns4plugins/src/generated/g_proto_ns4plugins_messages.h"
#include "modules/hardcore/component/OpTypedMessage.h"


	// BEGIN: Message classes
	/**
	 * Request a callback on a plug-in component thread.
	 * 
	 * @field func Pointer to callback.
	 * @field data Pointer to data to supply to callback.
	 * 
	 * @return None.
	 */
	class OpPluginCallbackMessage
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
		static const unsigned Type = 291065625u;

		virtual ~OpPluginCallbackMessage();



		static OpPluginCallbackMessage* Create(
			const OpMessageAddress& src,
			const OpMessageAddress& dst = OpMessageAddress(),
			double delay = 0)
		{
			return OP_NEW(OpPluginCallbackMessage, (src, dst, delay));
		}

		static OpPluginCallbackMessage* Create(
			UINT64 func_arg = 0,
			UINT64 data_arg = 0,
			const OpMessageAddress& src = OpMessageAddress(),
			const OpMessageAddress& dst = OpMessageAddress(),
			double delay = 0)
		{
			OpPluginCallbackMessage *obj = OP_NEW(OpPluginCallbackMessage, (src, dst, delay, func_arg, data_arg));
			if (obj)
			{
				if (OpStatus::IsSuccess(obj->Construct()))
					return obj;

				OP_DELETE(obj);
			}
			return NULL;
		}

		static OpPluginCallbackMessage* Cast(const OpTypedMessage* msg);

		static OpPluginCallbackMessage* Deserialize(
			const OpMessageAddress& src,
			const OpMessageAddress& dst,
			double delay,
			const OpData& data);

		virtual OP_STATUS Serialize(OpData& data) const;

		virtual const char *GetTypeString() const;

		// Accessors/modifiers comes here
		/**
		 * Check if the field @c func is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasFunc() const
		{
			return protobuf_data.HasFunc();
		}

		/**
		 * Get the field @c func.
		 */
		UINT64 GetFunc() const
		{
			return protobuf_data.GetFunc();
		}

		/**
		 * Set the field @c func.
		 */
		void SetFunc(UINT64 v)
		{
			protobuf_data.SetFunc(v);
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
		UINT64 GetData() const
		{
			return protobuf_data.GetData();
		}

		/**
		 * Set the field @c data.
		 */
		void SetData(UINT64 v)
		{
			protobuf_data.SetData(v);
		}



	protected:

		OpPluginCallbackMessage(
				const OpMessageAddress& src,
				const OpMessageAddress& dst,
				double delay
				, UINT64 func_arg = 0
				, UINT64 data_arg = 0
				)
			: OpTypedMessage(Type, src, dst, delay)
			, protobuf_data(func_arg, data_arg)
		{
		}



		OP_STATUS Construct(

		)
		{
			return protobuf_data.Construct();
		}

	private:
		OpNs4pluginsMessages_MessageSet::PluginCallback protobuf_data;
	};


	/**
	 * Tell the plug-in to clear site data.
	 * 
	 * @param site
	 *      The site for which to clear data. If NULL, then all sites and more
	 *      generic data as well. String must be lowercase for ASCII domains,
	 *      and NKFC-encoded UTF8 for international domains. IP address
	 *      literals must be enclosed in square brackets '[]' (see RFC-3987).
	 * @param flags
	 *      The types of data to clear.
	 * @param maxAge
	 *      How old the data should be (in seconds). If max_age is the maximum
	 *      unsigned 64-bit integer, all data is cleared.
	 */
	class OpPluginClearSiteDataMessage
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
		static const unsigned Type = 142756476u;

		virtual ~OpPluginClearSiteDataMessage();



		static OpPluginClearSiteDataMessage* Create(
			const OpMessageAddress& src,
			const OpMessageAddress& dst = OpMessageAddress(),
			double delay = 0)
		{
			return OP_NEW(OpPluginClearSiteDataMessage, (src, dst, delay));
		}

		static OpPluginClearSiteDataMessage* Create(
			const UniString & site_arg = UniString(),
			UINT64 flags_arg = 0,
			UINT64 max_age_arg = 0,
			const OpMessageAddress& src = OpMessageAddress(),
			const OpMessageAddress& dst = OpMessageAddress(),
			double delay = 0)
		{
			OpPluginClearSiteDataMessage *obj = OP_NEW(OpPluginClearSiteDataMessage, (src, dst, delay, site_arg, flags_arg, max_age_arg));
			if (obj)
			{
				if (OpStatus::IsSuccess(obj->Construct()))
					return obj;

				OP_DELETE(obj);
			}
			return NULL;
		}

		static OpPluginClearSiteDataMessage* Cast(const OpTypedMessage* msg);

		static OpPluginClearSiteDataMessage* Deserialize(
			const OpMessageAddress& src,
			const OpMessageAddress& dst,
			double delay,
			const OpData& data);

		virtual OP_STATUS Serialize(OpData& data) const;

		virtual const char *GetTypeString() const;

		// Accessors/modifiers comes here
		/**
		 * Check if the field @c site is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasSite() const
		{
			return protobuf_data.HasSite();
		}

		/**
		 * Get the field @c site.
		 */
		const UniString & GetSite() const
		{
			return protobuf_data.GetSite();
		}

		/**
		 * Set the field @c site.
		 */
		OP_STATUS SetSite(const UniString & v);

		/**
		 * Set the field @c site.
		 */
		OP_STATUS SetSite(const uni_char * v, int l = KAll);

		/**
		 * Check if the field @c flags is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasFlags() const
		{
			return protobuf_data.HasFlags();
		}

		/**
		 * Get the field @c flags.
		 */
		UINT64 GetFlags() const
		{
			return protobuf_data.GetFlags();
		}

		/**
		 * Set the field @c flags.
		 */
		void SetFlags(UINT64 v)
		{
			protobuf_data.SetFlags(v);
		}

		/**
		 * Check if the field @c maxAge is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasMaxAge() const
		{
			return protobuf_data.HasMaxAge();
		}

		/**
		 * Get the field @c maxAge.
		 */
		UINT64 GetMaxAge() const
		{
			return protobuf_data.GetMaxAge();
		}

		/**
		 * Set the field @c maxAge.
		 */
		void SetMaxAge(UINT64 v)
		{
			protobuf_data.SetMaxAge(v);
		}



	protected:

		OpPluginClearSiteDataMessage(
				const OpMessageAddress& src,
				const OpMessageAddress& dst,
				double delay
				, const UniString & site_arg = UniString()
				, UINT64 flags_arg = 0
				, UINT64 max_age_arg = 0
				)
			: OpTypedMessage(Type, src, dst, delay)
			, protobuf_data(site_arg, flags_arg, max_age_arg)
		{
		}



		OP_STATUS Construct(

		)
		{
			return protobuf_data.Construct();
		}

	private:
		OpNs4pluginsMessages_MessageSet::PluginClearSiteData protobuf_data;
	};


	/**
	 * Create NPObject.
	 * 
	 * Sent as part of NPN_CreateObject.
	 * 
	 * @return PluginCreateObjectResponse.
	 */
	class OpPluginCreateObjectMessage
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
		static const unsigned Type = 2093911330u;

		virtual ~OpPluginCreateObjectMessage();

		static OpPluginCreateObjectMessage* Create()
		{
		    OpMessageAddress src;
		    OpMessageAddress dst;
		    double delay = 0;
		    return OP_NEW(OpPluginCreateObjectMessage, (src, dst, delay));
		}

		static OpPluginCreateObjectMessage* Create(
			const OpMessageAddress& src,
			const OpMessageAddress& dst = OpMessageAddress(),
			double delay = 0)
		{
			return OP_NEW(OpPluginCreateObjectMessage, (src, dst, delay));
		}



		static OpPluginCreateObjectMessage* Cast(const OpTypedMessage* msg);

		static OpPluginCreateObjectMessage* Deserialize(
			const OpMessageAddress& src,
			const OpMessageAddress& dst,
			double delay,
			const OpData& data);

		virtual OP_STATUS Serialize(OpData& data) const;

		virtual const char *GetTypeString() const;

		// Accessors/modifiers comes here


	protected:

		OpPluginCreateObjectMessage(
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
		OpNs4pluginsMessages_MessageSet::PluginCreateObject protobuf_data;
	};


	/**
	 * Response to PluginCreateObject.
	 * 
	 * @field object Object created, if any.
	 */
	class OpPluginCreateObjectResponseMessage
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
		static const unsigned Type = 2187326910u;

		virtual ~OpPluginCreateObjectResponseMessage();

		static OpPluginCreateObjectResponseMessage* Create()
		{
		    OpMessageAddress src;
		    OpMessageAddress dst;
		    double delay = 0;
		    return OP_NEW(OpPluginCreateObjectResponseMessage, (src, dst, delay));
		}

		static OpPluginCreateObjectResponseMessage* Create(
			const OpMessageAddress& src,
			const OpMessageAddress& dst = OpMessageAddress(),
			double delay = 0)
		{
			return OP_NEW(OpPluginCreateObjectResponseMessage, (src, dst, delay));
		}



		static OpPluginCreateObjectResponseMessage* Cast(const OpTypedMessage* msg);

		static OpPluginCreateObjectResponseMessage* Deserialize(
			const OpMessageAddress& src,
			const OpMessageAddress& dst,
			double delay,
			const OpData& data);

		virtual OP_STATUS Serialize(OpData& data) const;

		virtual const char *GetTypeString() const;

		// Accessors/modifiers comes here
		/**
		 * Check if the field @c object is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasObject() const
		{
			return protobuf_data.HasObject();
		}

		/**
		 * Get the field @c object.
		 */
		OpNs4pluginsMessages_MessageSet::PluginObject * GetObject() const
		{
			return protobuf_data.GetObject();
		}

		/**
		 * Set the field @c object.
		 */
		void SetObject(OpNs4pluginsMessages_MessageSet::PluginObject * v);



	protected:

		OpPluginCreateObjectResponseMessage(
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
		OpNs4pluginsMessages_MessageSet::PluginCreateObjectResponse protobuf_data;
	};


	/**
	 * Destroy a plug-in instance by calling NPP_Destroy.
	 * 
	 * @return PluginDestroyResponse.
	 */
	class OpPluginDestroyMessage
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
		static const unsigned Type = 29508009u;

		virtual ~OpPluginDestroyMessage();

		static OpPluginDestroyMessage* Create()
		{
		    OpMessageAddress src;
		    OpMessageAddress dst;
		    double delay = 0;
		    return OP_NEW(OpPluginDestroyMessage, (src, dst, delay));
		}

		static OpPluginDestroyMessage* Create(
			const OpMessageAddress& src,
			const OpMessageAddress& dst = OpMessageAddress(),
			double delay = 0)
		{
			return OP_NEW(OpPluginDestroyMessage, (src, dst, delay));
		}



		static OpPluginDestroyMessage* Cast(const OpTypedMessage* msg);

		static OpPluginDestroyMessage* Deserialize(
			const OpMessageAddress& src,
			const OpMessageAddress& dst,
			double delay,
			const OpData& data);

		virtual OP_STATUS Serialize(OpData& data) const;

		virtual const char *GetTypeString() const;

		// Accessors/modifiers comes here


	protected:

		OpPluginDestroyMessage(
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
		OpNs4pluginsMessages_MessageSet::PluginDestroy protobuf_data;
	};


	/**
	 * Response to PluginDestroy.
	 * 
	 * @field npError Return value from NPP_Destroy.
	 * @field saved Plug-in specific library pointer, opaque to Opera.
	 * 
	 * @return None.
	 */
	class OpPluginDestroyResponseMessage
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
		static const unsigned Type = 4046683592u;

		virtual ~OpPluginDestroyResponseMessage();



		static OpPluginDestroyResponseMessage* Create(
			const OpMessageAddress& src,
			const OpMessageAddress& dst = OpMessageAddress(),
			double delay = 0)
		{
			return OP_NEW(OpPluginDestroyResponseMessage, (src, dst, delay));
		}

		static OpPluginDestroyResponseMessage* Create(
			INT32 np_error_arg = 0,
			UINT64 saved_arg = 0,
			const OpMessageAddress& src = OpMessageAddress(),
			const OpMessageAddress& dst = OpMessageAddress(),
			double delay = 0)
		{
			OpPluginDestroyResponseMessage *obj = OP_NEW(OpPluginDestroyResponseMessage, (src, dst, delay, np_error_arg, saved_arg));
			if (obj)
			{
				if (OpStatus::IsSuccess(obj->Construct()))
					return obj;

				OP_DELETE(obj);
			}
			return NULL;
		}

		static OpPluginDestroyResponseMessage* Cast(const OpTypedMessage* msg);

		static OpPluginDestroyResponseMessage* Deserialize(
			const OpMessageAddress& src,
			const OpMessageAddress& dst,
			double delay,
			const OpData& data);

		virtual OP_STATUS Serialize(OpData& data) const;

		virtual const char *GetTypeString() const;

		// Accessors/modifiers comes here
		/**
		 * Check if the field @c npError is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasNpError() const
		{
			return protobuf_data.HasNpError();
		}

		/**
		 * Get the field @c npError.
		 */
		INT32 GetNpError() const
		{
			return protobuf_data.GetNpError();
		}

		/**
		 * Set the field @c npError.
		 */
		void SetNpError(INT32 v)
		{
			protobuf_data.SetNpError(v);
		}

		/**
		 * Check if the field @c saved is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasSaved() const
		{
			return protobuf_data.HasSaved();
		}

		/**
		 * Get the field @c saved.
		 */
		UINT64 GetSaved() const
		{
			return protobuf_data.GetSaved();
		}

		/**
		 * Set the field @c saved.
		 */
		void SetSaved(UINT64 v)
		{
			protobuf_data.SetSaved(v);
		}



	protected:

		OpPluginDestroyResponseMessage(
				const OpMessageAddress& src,
				const OpMessageAddress& dst,
				double delay
				, INT32 np_error_arg = 0
				, UINT64 saved_arg = 0
				)
			: OpTypedMessage(Type, src, dst, delay)
			, protobuf_data(np_error_arg, saved_arg)
		{
		}



		OP_STATUS Construct(

		)
		{
			return protobuf_data.Construct();
		}

	private:
		OpNs4pluginsMessages_MessageSet::PluginDestroyResponse protobuf_data;
	};


	/**
	 * Announce destruction of stream.
	 * 
	 * @field stream The stream to be destroyed.
	 * @field reason The reason for the destruction.
	 * 
	 * @return PluginError (if Opera -> plug-in component), or
	 *         None        (if plug-in component -> Opera.)
	 */
	class OpPluginDestroyStreamMessage
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
		static const unsigned Type = 1900267087u;

		virtual ~OpPluginDestroyStreamMessage();



		static OpPluginDestroyStreamMessage* Create(
			const OpMessageAddress& src,
			const OpMessageAddress& dst = OpMessageAddress(),
			double delay = 0)
		{
			return OP_NEW(OpPluginDestroyStreamMessage, (src, dst, delay));
		}

		static OpPluginDestroyStreamMessage* Create(
			INT32 reason_arg = 0,
			const OpMessageAddress& src = OpMessageAddress(),
			const OpMessageAddress& dst = OpMessageAddress(),
			double delay = 0)
		{
			OpPluginDestroyStreamMessage *obj = OP_NEW(OpPluginDestroyStreamMessage, (src, dst, delay, reason_arg));
			if (obj)
			{
				if (OpStatus::IsSuccess(obj->Construct()))
					return obj;

				OP_DELETE(obj);
			}
			return NULL;
		}

		static OpPluginDestroyStreamMessage* Cast(const OpTypedMessage* msg);

		static OpPluginDestroyStreamMessage* Deserialize(
			const OpMessageAddress& src,
			const OpMessageAddress& dst,
			double delay,
			const OpData& data);

		virtual OP_STATUS Serialize(OpData& data) const;

		virtual const char *GetTypeString() const;

		// Accessors/modifiers comes here
		/**
		 * Check if the field @c stream is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasStream() const
		{
			return protobuf_data.HasStream();
		}

		/**
		 * Get the field @c stream.
		 */
		const OpNs4pluginsMessages_MessageSet::PluginStream & GetStream() const
		{
			return protobuf_data.GetStream();
		}

		/**
		 * Set the field @c stream.
		 */
		OpNs4pluginsMessages_MessageSet::PluginStream & GetStreamRef();

		/**
		 * Check if the field @c reason is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasReason() const
		{
			return protobuf_data.HasReason();
		}

		/**
		 * Get the field @c reason.
		 */
		INT32 GetReason() const
		{
			return protobuf_data.GetReason();
		}

		/**
		 * Set the field @c reason.
		 */
		void SetReason(INT32 v)
		{
			protobuf_data.SetReason(v);
		}



	protected:

		OpPluginDestroyStreamMessage(
				const OpMessageAddress& src,
				const OpMessageAddress& dst,
				double delay
				, INT32 reason_arg = 0
				)
			: OpTypedMessage(Type, src, dst, delay)
			, protobuf_data(reason_arg)
		{
		}



		OP_STATUS Construct(

		)
		{
			return protobuf_data.Construct();
		}

	private:
		OpNs4pluginsMessages_MessageSet::PluginDestroyStream protobuf_data;
	};


	/**
	 *  Find all potential plug-ins on the given search paths.
	 * 
	 *  Ns4plugins will send this message to a plug-in component
	 *  in order to construct a list of all potential plug-in libraries.
	 *  It's not necessary to verify that each potential plug-in is
	 *  in fact a valid NPAPI plugin, nor is it necessary to filter
	 *  out duplicates etc.
	 * 
	 *  For example, on Linux this list should contain the full path to
	 *  all .so files in the searched plug-in paths.
	 * 
	 *  @field searchPaths A string with file system paths which should be
	 *               explored. The paths are separated by colon on Unix-like
	 * 		platforms and by semi colon on Windows. These are an
	 * 		addition to the platform's known paths, not a replacement.
	 * 
	 *  @return The plug-in component will send a PluginEnumerateResponse
	 *          on success, or an OpStatusMessage indicating system error.
	 */
	class OpPluginEnumerateMessage
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
		static const unsigned Type = 651302106u;

		virtual ~OpPluginEnumerateMessage();



		static OpPluginEnumerateMessage* Create(
			const OpMessageAddress& src,
			const OpMessageAddress& dst = OpMessageAddress(),
			double delay = 0)
		{
			return OP_NEW(OpPluginEnumerateMessage, (src, dst, delay));
		}

		static OpPluginEnumerateMessage* Create(
			const UniString & search_paths_arg = UniString(),
			const OpMessageAddress& src = OpMessageAddress(),
			const OpMessageAddress& dst = OpMessageAddress(),
			double delay = 0)
		{
			OpPluginEnumerateMessage *obj = OP_NEW(OpPluginEnumerateMessage, (src, dst, delay, search_paths_arg));
			if (obj)
			{
				if (OpStatus::IsSuccess(obj->Construct()))
					return obj;

				OP_DELETE(obj);
			}
			return NULL;
		}

		static OpPluginEnumerateMessage* Cast(const OpTypedMessage* msg);

		static OpPluginEnumerateMessage* Deserialize(
			const OpMessageAddress& src,
			const OpMessageAddress& dst,
			double delay,
			const OpData& data);

		virtual OP_STATUS Serialize(OpData& data) const;

		virtual const char *GetTypeString() const;

		// Accessors/modifiers comes here
		/**
		 * Check if the field @c searchPaths is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasSearchPaths() const
		{
			return protobuf_data.HasSearchPaths();
		}

		/**
		 * Get the field @c searchPaths.
		 */
		const UniString & GetSearchPaths() const
		{
			return protobuf_data.GetSearchPaths();
		}

		/**
		 * Set the field @c searchPaths.
		 */
		OP_STATUS SetSearchPaths(const UniString & v);

		/**
		 * Set the field @c searchPaths.
		 */
		OP_STATUS SetSearchPaths(const uni_char * v, int l = KAll);



	protected:

		OpPluginEnumerateMessage(
				const OpMessageAddress& src,
				const OpMessageAddress& dst,
				double delay
				, const UniString & search_paths_arg = UniString()
				)
			: OpTypedMessage(Type, src, dst, delay)
			, protobuf_data(search_paths_arg)
		{
		}



		OP_STATUS Construct(

		)
		{
			return protobuf_data.Construct();
		}

	private:
		OpNs4pluginsMessages_MessageSet::PluginEnumerate protobuf_data;
	};


	/**
	 * Response to PluginEnumerate.
	 * 
	 * @field libraryPaths List of full file system paths pointing to
	 *                     each of the potential plug-in libraries.
	 * 
	 * @return None.
	 */
	class OpPluginEnumerateResponseMessage
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
		static const unsigned Type = 3526810660u;

		virtual ~OpPluginEnumerateResponseMessage();

		static OpPluginEnumerateResponseMessage* Create()
		{
		    OpMessageAddress src;
		    OpMessageAddress dst;
		    double delay = 0;
		    return OP_NEW(OpPluginEnumerateResponseMessage, (src, dst, delay));
		}

		static OpPluginEnumerateResponseMessage* Create(
			const OpMessageAddress& src,
			const OpMessageAddress& dst = OpMessageAddress(),
			double delay = 0)
		{
			return OP_NEW(OpPluginEnumerateResponseMessage, (src, dst, delay));
		}



		static OpPluginEnumerateResponseMessage* Cast(const OpTypedMessage* msg);

		static OpPluginEnumerateResponseMessage* Deserialize(
			const OpMessageAddress& src,
			const OpMessageAddress& dst,
			double delay,
			const OpData& data);

		virtual OP_STATUS Serialize(OpData& data) const;

		virtual const char *GetTypeString() const;

		// Accessors/modifiers comes here
		/**
		 * Check if the field @c libraryPaths is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasLibraryPaths() const
		{
			return protobuf_data.HasLibraryPaths();
		}

		/**
		 * Get the field @c libraryPaths.
		 */
		const OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginEnumerateResponse_LibraryPath> & GetLibraryPaths() const
		{
			return protobuf_data.GetLibraryPaths();
		}

		/**
		 * Set the field @c libraryPaths.
		 */
		OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginEnumerateResponse_LibraryPath> & GetLibraryPathsRef();



	protected:

		OpPluginEnumerateResponseMessage(
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
		OpNs4pluginsMessages_MessageSet::PluginEnumerateResponse protobuf_data;
	};


	/**
	 * Response to NPAPI stream requests.
	 * 
	 * @field npError NPError value.
	 */
	class OpPluginErrorMessage
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
		static const unsigned Type = 1629539501u;

		virtual ~OpPluginErrorMessage();



		static OpPluginErrorMessage* Create(
			const OpMessageAddress& src,
			const OpMessageAddress& dst = OpMessageAddress(),
			double delay = 0)
		{
			return OP_NEW(OpPluginErrorMessage, (src, dst, delay));
		}

		static OpPluginErrorMessage* Create(
			INT32 np_error_arg = 0,
			const OpMessageAddress& src = OpMessageAddress(),
			const OpMessageAddress& dst = OpMessageAddress(),
			double delay = 0)
		{
			OpPluginErrorMessage *obj = OP_NEW(OpPluginErrorMessage, (src, dst, delay, np_error_arg));
			if (obj)
			{
				if (OpStatus::IsSuccess(obj->Construct()))
					return obj;

				OP_DELETE(obj);
			}
			return NULL;
		}

		static OpPluginErrorMessage* Cast(const OpTypedMessage* msg);

		static OpPluginErrorMessage* Deserialize(
			const OpMessageAddress& src,
			const OpMessageAddress& dst,
			double delay,
			const OpData& data);

		virtual OP_STATUS Serialize(OpData& data) const;

		virtual const char *GetTypeString() const;

		// Accessors/modifiers comes here
		/**
		 * Check if the field @c npError is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasNpError() const
		{
			return protobuf_data.HasNpError();
		}

		/**
		 * Get the field @c npError.
		 */
		INT32 GetNpError() const
		{
			return protobuf_data.GetNpError();
		}

		/**
		 * Set the field @c npError.
		 */
		void SetNpError(INT32 v)
		{
			protobuf_data.SetNpError(v);
		}



	protected:

		OpPluginErrorMessage(
				const OpMessageAddress& src,
				const OpMessageAddress& dst,
				double delay
				, INT32 np_error_arg = 0
				)
			: OpTypedMessage(Type, src, dst, delay)
			, protobuf_data(np_error_arg)
		{
		}



		OP_STATUS Construct(

		)
		{
			return protobuf_data.Construct();
		}

	private:
		OpNs4pluginsMessages_MessageSet::PluginError protobuf_data;
	};


	/**
	 * Request execution of an EcmaScript script.
	 * 
	 * Sent from plug-in component to ns4plugins to perform NPN_Evaluate.
	 * 
	 * @field script The EcmaScript script to execute.
	 * @field object The object defining the scope of the execution.
	 * @field context The scripting context in which this request is made. See PluginHandler::PushScriptingContext().
	 * 
	 * @return PluginResult.
	 */
	class OpPluginEvaluateMessage
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
		static const unsigned Type = 3861131703u;

		virtual ~OpPluginEvaluateMessage();



		static OpPluginEvaluateMessage* Create(
			const OpMessageAddress& src,
			const OpMessageAddress& dst = OpMessageAddress(),
			double delay = 0)
		{
			return OP_NEW(OpPluginEvaluateMessage, (src, dst, delay));
		}

		static OpPluginEvaluateMessage* Create(
			const UniString & script_arg = UniString(),
			const OpMessageAddress& src = OpMessageAddress(),
			const OpMessageAddress& dst = OpMessageAddress(),
			double delay = 0)
		{
			OpPluginEvaluateMessage *obj = OP_NEW(OpPluginEvaluateMessage, (src, dst, delay, script_arg));
			if (obj)
			{
				if (OpStatus::IsSuccess(obj->Construct()))
					return obj;

				OP_DELETE(obj);
			}
			return NULL;
		}

		static OpPluginEvaluateMessage* Cast(const OpTypedMessage* msg);

		static OpPluginEvaluateMessage* Deserialize(
			const OpMessageAddress& src,
			const OpMessageAddress& dst,
			double delay,
			const OpData& data);

		virtual OP_STATUS Serialize(OpData& data) const;

		virtual const char *GetTypeString() const;

		// Accessors/modifiers comes here
		/**
		 * Check if the field @c script is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasScript() const
		{
			return protobuf_data.HasScript();
		}

		/**
		 * Get the field @c script.
		 */
		const UniString & GetScript() const
		{
			return protobuf_data.GetScript();
		}

		/**
		 * Set the field @c script.
		 */
		OP_STATUS SetScript(const UniString & v);

		/**
		 * Set the field @c script.
		 */
		OP_STATUS SetScript(const uni_char * v, int l = KAll);

		/**
		 * Check if the field @c object is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasObject() const
		{
			return protobuf_data.HasObject();
		}

		/**
		 * Get the field @c object.
		 */
		OpNs4pluginsMessages_MessageSet::PluginObject * GetObject() const
		{
			return protobuf_data.GetObject();
		}

		/**
		 * Set the field @c object.
		 */
		void SetObject(OpNs4pluginsMessages_MessageSet::PluginObject * v);

		/**
		 * Check if the field @c context is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasContext() const
		{
			return protobuf_data.HasContext();
		}

		/**
		 * Get the field @c context.
		 */
		UINT32 GetContext() const
		{
			return protobuf_data.GetContext();
		}

		/**
		 * Set the field @c context.
		 */
		void SetContext(UINT32 v)
		{
			protobuf_data.SetContext(v);
		}



	protected:

		OpPluginEvaluateMessage(
				const OpMessageAddress& src,
				const OpMessageAddress& dst,
				double delay
				, const UniString & script_arg = UniString()
				)
			: OpTypedMessage(Type, src, dst, delay)
			, protobuf_data(script_arg)
		{
		}



		OP_STATUS Construct(

		)
		{
			return protobuf_data.Construct();
		}

	private:
		OpNs4pluginsMessages_MessageSet::PluginEvaluate protobuf_data;
	};


	/**
	 * Set NPRuntime exception.
	 * 
	 * @field object Object to set exception for.
	 * @field message Exception message.
	 * 
	 * @return None.
	 */
	class OpPluginExceptionMessage
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
		static const unsigned Type = 3385262955u;

		virtual ~OpPluginExceptionMessage();



		static OpPluginExceptionMessage* Create(
			const OpMessageAddress& src,
			const OpMessageAddress& dst = OpMessageAddress(),
			double delay = 0)
		{
			return OP_NEW(OpPluginExceptionMessage, (src, dst, delay));
		}

		static OpPluginExceptionMessage* Create(
			const UniString & message_arg = UniString(),
			const OpMessageAddress& src = OpMessageAddress(),
			const OpMessageAddress& dst = OpMessageAddress(),
			double delay = 0)
		{
			OpPluginExceptionMessage *obj = OP_NEW(OpPluginExceptionMessage, (src, dst, delay, message_arg));
			if (obj)
			{
				if (OpStatus::IsSuccess(obj->Construct()))
					return obj;

				OP_DELETE(obj);
			}
			return NULL;
		}

		static OpPluginExceptionMessage* Cast(const OpTypedMessage* msg);

		static OpPluginExceptionMessage* Deserialize(
			const OpMessageAddress& src,
			const OpMessageAddress& dst,
			double delay,
			const OpData& data);

		virtual OP_STATUS Serialize(OpData& data) const;

		virtual const char *GetTypeString() const;

		// Accessors/modifiers comes here
		/**
		 * Check if the field @c object is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasObject() const
		{
			return protobuf_data.HasObject();
		}

		/**
		 * Get the field @c object.
		 */
		const OpNs4pluginsMessages_MessageSet::PluginObject & GetObject() const
		{
			return protobuf_data.GetObject();
		}

		/**
		 * Set the field @c object.
		 */
		OpNs4pluginsMessages_MessageSet::PluginObject & GetObjectRef();

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
		 */
		const UniString & GetMessage() const
		{
			return protobuf_data.GetMessage();
		}

		/**
		 * Set the field @c message.
		 */
		OP_STATUS SetMessage(const UniString & v);

		/**
		 * Set the field @c message.
		 */
		OP_STATUS SetMessage(const uni_char * v, int l = KAll);



	protected:

		OpPluginExceptionMessage(
				const OpMessageAddress& src,
				const OpMessageAddress& dst,
				double delay
				, const UniString & message_arg = UniString()
				)
			: OpTypedMessage(Type, src, dst, delay)
			, protobuf_data(message_arg)
		{
		}



		OP_STATUS Construct(

		)
		{
			return protobuf_data.Construct();
		}

	private:
		OpNs4pluginsMessages_MessageSet::PluginException protobuf_data;
	};


	/**
	 * Send focus event to plug-in instance.
	 * 
	 * @field focus True if the plug-in instance has received focus, otherwise false.
	 * @field reason Reason for obtaining focus. See FOCUS_REASON type.
	 * 
	 * @return PluginWindowlessHandleEventResponse.
	 */
	class OpPluginFocusEventMessage
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
		static const unsigned Type = 78843017u;

		virtual ~OpPluginFocusEventMessage();



		static OpPluginFocusEventMessage* Create(
			const OpMessageAddress& src,
			const OpMessageAddress& dst = OpMessageAddress(),
			double delay = 0)
		{
			return OP_NEW(OpPluginFocusEventMessage, (src, dst, delay));
		}

		static OpPluginFocusEventMessage* Create(
			BOOL focus_arg = FALSE,
			INT32 reason_arg = 0,
			const OpMessageAddress& src = OpMessageAddress(),
			const OpMessageAddress& dst = OpMessageAddress(),
			double delay = 0)
		{
			OpPluginFocusEventMessage *obj = OP_NEW(OpPluginFocusEventMessage, (src, dst, delay, focus_arg, reason_arg));
			if (obj)
			{
				if (OpStatus::IsSuccess(obj->Construct()))
					return obj;

				OP_DELETE(obj);
			}
			return NULL;
		}

		static OpPluginFocusEventMessage* Cast(const OpTypedMessage* msg);

		static OpPluginFocusEventMessage* Deserialize(
			const OpMessageAddress& src,
			const OpMessageAddress& dst,
			double delay,
			const OpData& data);

		virtual OP_STATUS Serialize(OpData& data) const;

		virtual const char *GetTypeString() const;

		// Accessors/modifiers comes here
		/**
		 * Check if the field @c focus is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasFocus() const
		{
			return protobuf_data.HasFocus();
		}

		/**
		 * Get the field @c focus.
		 */
		BOOL GetFocus() const
		{
			return protobuf_data.GetFocus();
		}

		/**
		 * Set the field @c focus.
		 */
		void SetFocus(BOOL v)
		{
			protobuf_data.SetFocus(v);
		}

		/**
		 * Check if the field @c reason is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasReason() const
		{
			return protobuf_data.HasReason();
		}

		/**
		 * Get the field @c reason.
		 */
		INT32 GetReason() const
		{
			return protobuf_data.GetReason();
		}

		/**
		 * Set the field @c reason.
		 */
		void SetReason(INT32 v)
		{
			protobuf_data.SetReason(v);
		}



	protected:

		OpPluginFocusEventMessage(
				const OpMessageAddress& src,
				const OpMessageAddress& dst,
				double delay
				, BOOL focus_arg = FALSE
				, INT32 reason_arg = 0
				)
			: OpTypedMessage(Type, src, dst, delay)
			, protobuf_data(focus_arg, reason_arg)
		{
		}



		OP_STATUS Construct(

		)
		{
			return protobuf_data.Construct();
		}

	private:
		OpNs4pluginsMessages_MessageSet::PluginFocusEvent protobuf_data;
	};


	/**
	 * Request authentication info.
	 * 
	 * See NPN_GetAuthenticationInfo.
	 * 
	 * @field protocol Protocol.
	 * @field host Host.
	 * @field port Port.
	 * @field scheme Scheme.
	 * @field realm Realm.
	 * 
	 * @return PluginGetAuthenticationInfoResponse.
	 */
	class OpPluginGetAuthenticationInfoMessage
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
		static const unsigned Type = 3374697974u;

		virtual ~OpPluginGetAuthenticationInfoMessage();



		static OpPluginGetAuthenticationInfoMessage* Create(
			const OpMessageAddress& src,
			const OpMessageAddress& dst = OpMessageAddress(),
			double delay = 0)
		{
			return OP_NEW(OpPluginGetAuthenticationInfoMessage, (src, dst, delay));
		}

		static OpPluginGetAuthenticationInfoMessage* Create(
			const UniString & protocol_arg = UniString(),
			const UniString & host_arg = UniString(),
			INT32 port_arg = 0,
			const UniString & scheme_arg = UniString(),
			const UniString & realm_arg = UniString(),
			const OpMessageAddress& src = OpMessageAddress(),
			const OpMessageAddress& dst = OpMessageAddress(),
			double delay = 0)
		{
			OpPluginGetAuthenticationInfoMessage *obj = OP_NEW(OpPluginGetAuthenticationInfoMessage, (src, dst, delay, protocol_arg, host_arg, port_arg, scheme_arg, realm_arg));
			if (obj)
			{
				if (OpStatus::IsSuccess(obj->Construct()))
					return obj;

				OP_DELETE(obj);
			}
			return NULL;
		}

		static OpPluginGetAuthenticationInfoMessage* Cast(const OpTypedMessage* msg);

		static OpPluginGetAuthenticationInfoMessage* Deserialize(
			const OpMessageAddress& src,
			const OpMessageAddress& dst,
			double delay,
			const OpData& data);

		virtual OP_STATUS Serialize(OpData& data) const;

		virtual const char *GetTypeString() const;

		// Accessors/modifiers comes here
		/**
		 * Check if the field @c protocol is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasProtocol() const
		{
			return protobuf_data.HasProtocol();
		}

		/**
		 * Get the field @c protocol.
		 */
		const UniString & GetProtocol() const
		{
			return protobuf_data.GetProtocol();
		}

		/**
		 * Set the field @c protocol.
		 */
		OP_STATUS SetProtocol(const UniString & v);

		/**
		 * Set the field @c protocol.
		 */
		OP_STATUS SetProtocol(const uni_char * v, int l = KAll);

		/**
		 * Check if the field @c host is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasHost() const
		{
			return protobuf_data.HasHost();
		}

		/**
		 * Get the field @c host.
		 */
		const UniString & GetHost() const
		{
			return protobuf_data.GetHost();
		}

		/**
		 * Set the field @c host.
		 */
		OP_STATUS SetHost(const UniString & v);

		/**
		 * Set the field @c host.
		 */
		OP_STATUS SetHost(const uni_char * v, int l = KAll);

		/**
		 * Check if the field @c port is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasPort() const
		{
			return protobuf_data.HasPort();
		}

		/**
		 * Get the field @c port.
		 */
		INT32 GetPort() const
		{
			return protobuf_data.GetPort();
		}

		/**
		 * Set the field @c port.
		 */
		void SetPort(INT32 v)
		{
			protobuf_data.SetPort(v);
		}

		/**
		 * Check if the field @c scheme is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasScheme() const
		{
			return protobuf_data.HasScheme();
		}

		/**
		 * Get the field @c scheme.
		 */
		const UniString & GetScheme() const
		{
			return protobuf_data.GetScheme();
		}

		/**
		 * Set the field @c scheme.
		 */
		OP_STATUS SetScheme(const UniString & v);

		/**
		 * Set the field @c scheme.
		 */
		OP_STATUS SetScheme(const uni_char * v, int l = KAll);

		/**
		 * Check if the field @c realm is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasRealm() const
		{
			return protobuf_data.HasRealm();
		}

		/**
		 * Get the field @c realm.
		 */
		const UniString & GetRealm() const
		{
			return protobuf_data.GetRealm();
		}

		/**
		 * Set the field @c realm.
		 */
		OP_STATUS SetRealm(const UniString & v);

		/**
		 * Set the field @c realm.
		 */
		OP_STATUS SetRealm(const uni_char * v, int l = KAll);



	protected:

		OpPluginGetAuthenticationInfoMessage(
				const OpMessageAddress& src,
				const OpMessageAddress& dst,
				double delay
				, const UniString & protocol_arg = UniString()
				, const UniString & host_arg = UniString()
				, INT32 port_arg = 0
				, const UniString & scheme_arg = UniString()
				, const UniString & realm_arg = UniString()
				)
			: OpTypedMessage(Type, src, dst, delay)
			, protobuf_data(protocol_arg, host_arg, port_arg, scheme_arg, realm_arg)
		{
		}



		OP_STATUS Construct(

		)
		{
			return protobuf_data.Construct();
		}

	private:
		OpNs4pluginsMessages_MessageSet::PluginGetAuthenticationInfo protobuf_data;
	};


	/**
	 * Response to PluginGetAuthenticationInfo.
	 * 
	 * @field npError  See NPError.
	 * @field username Username.
	 * @field password Password.
	 */
	class OpPluginGetAuthenticationInfoResponseMessage
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
		static const unsigned Type = 3769078788u;

		virtual ~OpPluginGetAuthenticationInfoResponseMessage();



		static OpPluginGetAuthenticationInfoResponseMessage* Create(
			const OpMessageAddress& src,
			const OpMessageAddress& dst = OpMessageAddress(),
			double delay = 0)
		{
			return OP_NEW(OpPluginGetAuthenticationInfoResponseMessage, (src, dst, delay));
		}

		static OpPluginGetAuthenticationInfoResponseMessage* Create(
			INT32 np_error_arg = 0,
			const UniString & username_arg = UniString(),
			const UniString & password_arg = UniString(),
			const OpMessageAddress& src = OpMessageAddress(),
			const OpMessageAddress& dst = OpMessageAddress(),
			double delay = 0)
		{
			OpPluginGetAuthenticationInfoResponseMessage *obj = OP_NEW(OpPluginGetAuthenticationInfoResponseMessage, (src, dst, delay, np_error_arg, username_arg, password_arg));
			if (obj)
			{
				if (OpStatus::IsSuccess(obj->Construct()))
					return obj;

				OP_DELETE(obj);
			}
			return NULL;
		}

		static OpPluginGetAuthenticationInfoResponseMessage* Cast(const OpTypedMessage* msg);

		static OpPluginGetAuthenticationInfoResponseMessage* Deserialize(
			const OpMessageAddress& src,
			const OpMessageAddress& dst,
			double delay,
			const OpData& data);

		virtual OP_STATUS Serialize(OpData& data) const;

		virtual const char *GetTypeString() const;

		// Accessors/modifiers comes here
		/**
		 * Check if the field @c npError is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasNpError() const
		{
			return protobuf_data.HasNpError();
		}

		/**
		 * Get the field @c npError.
		 */
		INT32 GetNpError() const
		{
			return protobuf_data.GetNpError();
		}

		/**
		 * Set the field @c npError.
		 */
		void SetNpError(INT32 v)
		{
			protobuf_data.SetNpError(v);
		}

		/**
		 * Check if the field @c username is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasUsername() const
		{
			return protobuf_data.HasUsername();
		}

		/**
		 * Get the field @c username.
		 */
		const UniString & GetUsername() const
		{
			return protobuf_data.GetUsername();
		}

		/**
		 * Set the field @c username.
		 */
		OP_STATUS SetUsername(const UniString & v);

		/**
		 * Set the field @c username.
		 */
		OP_STATUS SetUsername(const uni_char * v, int l = KAll);

		/**
		 * Check if the field @c password is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasPassword() const
		{
			return protobuf_data.HasPassword();
		}

		/**
		 * Get the field @c password.
		 */
		const UniString & GetPassword() const
		{
			return protobuf_data.GetPassword();
		}

		/**
		 * Set the field @c password.
		 */
		OP_STATUS SetPassword(const UniString & v);

		/**
		 * Set the field @c password.
		 */
		OP_STATUS SetPassword(const uni_char * v, int l = KAll);



	protected:

		OpPluginGetAuthenticationInfoResponseMessage(
				const OpMessageAddress& src,
				const OpMessageAddress& dst,
				double delay
				, INT32 np_error_arg = 0
				, const UniString & username_arg = UniString()
				, const UniString & password_arg = UniString()
				)
			: OpTypedMessage(Type, src, dst, delay)
			, protobuf_data(np_error_arg, username_arg, password_arg)
		{
		}



		OP_STATUS Construct(

		)
		{
			return protobuf_data.Construct();
		}

	private:
		OpNs4pluginsMessages_MessageSet::PluginGetAuthenticationInfoResponse protobuf_data;
	};


	/**
	 * Obtain integer identifier.
	 * 
	 * Sent by plug-in component as part of NPN_GetIntIdentifier.
	 * 
	 * @field number Number to obtain an identifier for.
	 * 
	 * @return PluginIdentifiers.
	 */
	class OpPluginGetIntIdentifierMessage
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
		static const unsigned Type = 2195163490u;

		virtual ~OpPluginGetIntIdentifierMessage();



		static OpPluginGetIntIdentifierMessage* Create(
			const OpMessageAddress& src,
			const OpMessageAddress& dst = OpMessageAddress(),
			double delay = 0)
		{
			return OP_NEW(OpPluginGetIntIdentifierMessage, (src, dst, delay));
		}

		static OpPluginGetIntIdentifierMessage* Create(
			INT32 number_arg = 0,
			const OpMessageAddress& src = OpMessageAddress(),
			const OpMessageAddress& dst = OpMessageAddress(),
			double delay = 0)
		{
			OpPluginGetIntIdentifierMessage *obj = OP_NEW(OpPluginGetIntIdentifierMessage, (src, dst, delay, number_arg));
			if (obj)
			{
				if (OpStatus::IsSuccess(obj->Construct()))
					return obj;

				OP_DELETE(obj);
			}
			return NULL;
		}

		static OpPluginGetIntIdentifierMessage* Cast(const OpTypedMessage* msg);

		static OpPluginGetIntIdentifierMessage* Deserialize(
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
		INT32 GetNumber() const
		{
			return protobuf_data.GetNumber();
		}

		/**
		 * Set the field @c number.
		 */
		void SetNumber(INT32 v)
		{
			protobuf_data.SetNumber(v);
		}



	protected:

		OpPluginGetIntIdentifierMessage(
				const OpMessageAddress& src,
				const OpMessageAddress& dst,
				double delay
				, INT32 number_arg = 0
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
		OpNs4pluginsMessages_MessageSet::PluginGetIntIdentifier protobuf_data;
	};


	/**
	 * Retrieve EcmaScript object property.
	 * 
	 * @field object Object whose property we wish to retrieve.
	 * @field property String identifier, name of property to retrieve.
	 * @field context The scripting context in which this request is made. See PluginHandler::PushScriptingContext().
	 * 
	 * @return PluginResult.
	 */
	class OpPluginGetPropertyMessage
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
		static const unsigned Type = 1511792718u;

		virtual ~OpPluginGetPropertyMessage();

		static OpPluginGetPropertyMessage* Create()
		{
		    OpMessageAddress src;
		    OpMessageAddress dst;
		    double delay = 0;
		    return OP_NEW(OpPluginGetPropertyMessage, (src, dst, delay));
		}

		static OpPluginGetPropertyMessage* Create(
			const OpMessageAddress& src,
			const OpMessageAddress& dst = OpMessageAddress(),
			double delay = 0)
		{
			return OP_NEW(OpPluginGetPropertyMessage, (src, dst, delay));
		}



		static OpPluginGetPropertyMessage* Cast(const OpTypedMessage* msg);

		static OpPluginGetPropertyMessage* Deserialize(
			const OpMessageAddress& src,
			const OpMessageAddress& dst,
			double delay,
			const OpData& data);

		virtual OP_STATUS Serialize(OpData& data) const;

		virtual const char *GetTypeString() const;

		// Accessors/modifiers comes here
		/**
		 * Check if the field @c object is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasObject() const
		{
			return protobuf_data.HasObject();
		}

		/**
		 * Get the field @c object.
		 */
		const OpNs4pluginsMessages_MessageSet::PluginObject & GetObject() const
		{
			return protobuf_data.GetObject();
		}

		/**
		 * Set the field @c object.
		 */
		OpNs4pluginsMessages_MessageSet::PluginObject & GetObjectRef();

		/**
		 * Check if the field @c property is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasProperty() const
		{
			return protobuf_data.HasProperty();
		}

		/**
		 * Get the field @c property.
		 */
		const OpNs4pluginsMessages_MessageSet::PluginIdentifier & GetProperty() const
		{
			return protobuf_data.GetProperty();
		}

		/**
		 * Set the field @c property.
		 */
		OpNs4pluginsMessages_MessageSet::PluginIdentifier & GetPropertyRef();

		/**
		 * Check if the field @c context is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasContext() const
		{
			return protobuf_data.HasContext();
		}

		/**
		 * Get the field @c context.
		 */
		UINT32 GetContext() const
		{
			return protobuf_data.GetContext();
		}

		/**
		 * Set the field @c context.
		 */
		void SetContext(UINT32 v)
		{
			protobuf_data.SetContext(v);
		}



	protected:

		OpPluginGetPropertyMessage(
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
		OpNs4pluginsMessages_MessageSet::PluginGetProperty protobuf_data;
	};


	/**
	 * Request a NULL-terminated array of sites with data.
	 */
	class OpPluginGetSitesWithDataMessage
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
		static const unsigned Type = 163019530u;

		virtual ~OpPluginGetSitesWithDataMessage();

		static OpPluginGetSitesWithDataMessage* Create()
		{
		    OpMessageAddress src;
		    OpMessageAddress dst;
		    double delay = 0;
		    return OP_NEW(OpPluginGetSitesWithDataMessage, (src, dst, delay));
		}

		static OpPluginGetSitesWithDataMessage* Create(
			const OpMessageAddress& src,
			const OpMessageAddress& dst = OpMessageAddress(),
			double delay = 0)
		{
			return OP_NEW(OpPluginGetSitesWithDataMessage, (src, dst, delay));
		}



		static OpPluginGetSitesWithDataMessage* Cast(const OpTypedMessage* msg);

		static OpPluginGetSitesWithDataMessage* Deserialize(
			const OpMessageAddress& src,
			const OpMessageAddress& dst,
			double delay,
			const OpData& data);

		virtual OP_STATUS Serialize(OpData& data) const;

		virtual const char *GetTypeString() const;

		// Accessors/modifiers comes here


	protected:

		OpPluginGetSitesWithDataMessage(
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
		OpNs4pluginsMessages_MessageSet::PluginGetSitesWithData protobuf_data;
	};


	/**
	 * Return a NULL-terminated array of sites with data.
	 */
	class OpPluginGetSitesWithDataResponseMessage
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
		static const unsigned Type = 2994581512u;

		virtual ~OpPluginGetSitesWithDataResponseMessage();

		static OpPluginGetSitesWithDataResponseMessage* Create()
		{
		    OpMessageAddress src;
		    OpMessageAddress dst;
		    double delay = 0;
		    return OP_NEW(OpPluginGetSitesWithDataResponseMessage, (src, dst, delay));
		}

		static OpPluginGetSitesWithDataResponseMessage* Create(
			const OpMessageAddress& src,
			const OpMessageAddress& dst = OpMessageAddress(),
			double delay = 0)
		{
			return OP_NEW(OpPluginGetSitesWithDataResponseMessage, (src, dst, delay));
		}



		static OpPluginGetSitesWithDataResponseMessage* Cast(const OpTypedMessage* msg);

		static OpPluginGetSitesWithDataResponseMessage* Deserialize(
			const OpMessageAddress& src,
			const OpMessageAddress& dst,
			double delay,
			const OpData& data);

		virtual OP_STATUS Serialize(OpData& data) const;

		virtual const char *GetTypeString() const;

		// Accessors/modifiers comes here
		/**
		 * Check if the field @c sites is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasSites() const
		{
			return protobuf_data.HasSites();
		}

		/**
		 * Get the field @c sites.
		 */
		const OpProtobufValueVector<UniString> & GetSites() const
		{
			return protobuf_data.GetSites();
		}

		/**
		 * Set the field @c sites.
		 */
		OpProtobufValueVector<UniString> & GetSitesRef();



	protected:

		OpPluginGetSitesWithDataResponseMessage(
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
		OpNs4pluginsMessages_MessageSet::PluginGetSitesWithDataResponse protobuf_data;
	};


	/**
	 * Obtain string identifier(s).
	 * 
	 * Sent by plug-in component as part of NPN_GetStringIdentifier(s).
	 * 
	 * @field names Name(s) to obtain an identifier for.
	 * 
	 * @return PluginIdentifiers.
	 */
	class OpPluginGetStringIdentifiersMessage
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
		static const unsigned Type = 404198096u;

		virtual ~OpPluginGetStringIdentifiersMessage();

		static OpPluginGetStringIdentifiersMessage* Create()
		{
		    OpMessageAddress src;
		    OpMessageAddress dst;
		    double delay = 0;
		    return OP_NEW(OpPluginGetStringIdentifiersMessage, (src, dst, delay));
		}

		static OpPluginGetStringIdentifiersMessage* Create(
			const OpMessageAddress& src,
			const OpMessageAddress& dst = OpMessageAddress(),
			double delay = 0)
		{
			return OP_NEW(OpPluginGetStringIdentifiersMessage, (src, dst, delay));
		}



		static OpPluginGetStringIdentifiersMessage* Cast(const OpTypedMessage* msg);

		static OpPluginGetStringIdentifiersMessage* Deserialize(
			const OpMessageAddress& src,
			const OpMessageAddress& dst,
			double delay,
			const OpData& data);

		virtual OP_STATUS Serialize(OpData& data) const;

		virtual const char *GetTypeString() const;

		// Accessors/modifiers comes here
		/**
		 * Check if the field @c names is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasNames() const
		{
			return protobuf_data.HasNames();
		}

		/**
		 * Get the field @c names.
		 */
		const OpProtobufValueVector<UniString> & GetNames() const
		{
			return protobuf_data.GetNames();
		}

		/**
		 * Set the field @c names.
		 */
		OpProtobufValueVector<UniString> & GetNamesRef();



	protected:

		OpPluginGetStringIdentifiersMessage(
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
		OpNs4pluginsMessages_MessageSet::PluginGetStringIdentifiers protobuf_data;
	};


	/**
	 * Request stream from URL.
	 * 
	 * @field URL The URL to request data from.
	 * @field window The window to open the URL in. See NPN_GetURL().
	 * 
	 * @return PluginError.
	 */
	class OpPluginGetURLMessage
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
		static const unsigned Type = 58059790u;

		virtual ~OpPluginGetURLMessage();



		static OpPluginGetURLMessage* Create(
			const OpMessageAddress& src,
			const OpMessageAddress& dst = OpMessageAddress(),
			double delay = 0)
		{
			return OP_NEW(OpPluginGetURLMessage, (src, dst, delay));
		}

		static OpPluginGetURLMessage* Create(
			const OpData & url_arg = OpData(),
			const OpData * window_arg = NULL,
			const OpMessageAddress& src = OpMessageAddress(),
			const OpMessageAddress& dst = OpMessageAddress(),
			double delay = 0)
		{
			OpPluginGetURLMessage *obj = OP_NEW(OpPluginGetURLMessage, (src, dst, delay, url_arg, window_arg));
			if (obj)
			{
				if (OpStatus::IsSuccess(obj->Construct()))
					return obj;

				OP_DELETE(obj);
			}
			return NULL;
		}

		static OpPluginGetURLMessage* Cast(const OpTypedMessage* msg);

		static OpPluginGetURLMessage* Deserialize(
			const OpMessageAddress& src,
			const OpMessageAddress& dst,
			double delay,
			const OpData& data);

		virtual OP_STATUS Serialize(OpData& data) const;

		virtual const char *GetTypeString() const;

		// Accessors/modifiers comes here
		/**
		 * Check if the field @c URL is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasURL() const
		{
			return protobuf_data.HasURL();
		}

		/**
		 * Get the field @c URL.
		 */
		const OpData & GetURL() const
		{
			return protobuf_data.GetURL();
		}

		/**
		 * Set the field @c URL.
		 */
		OP_STATUS SetURL(const OpData & v);

		/**
		 * Set the field @c URL.
		 */
		OP_STATUS SetURL(const char * v, int l);

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
		const OpData & GetWindow() const
		{
			return protobuf_data.GetWindow();
		}

		/**
		 * Set the field @c window.
		 */
		OP_STATUS SetWindow(const OpData & v);

		/**
		 * Set the field @c window.
		 */
		OP_STATUS SetWindow(const char * v, int l);



	protected:

		OpPluginGetURLMessage(
				const OpMessageAddress& src,
				const OpMessageAddress& dst,
				double delay
				, const OpData & url_arg = OpData()
				, const OpData * window_arg = NULL
				)
			: OpTypedMessage(Type, src, dst, delay)
			, protobuf_data(url_arg, window_arg)
		{
		}



		OP_STATUS Construct(

		)
		{
			return protobuf_data.Construct();
		}

	private:
		OpNs4pluginsMessages_MessageSet::PluginGetURL protobuf_data;
	};


	/**
	 * Request stream from URL and notification.
	 * 
	 * @field URL The URL to request data from.
	 * @field window The window to open the URL in. See NPN_GetURL().
	 * @field notifyData User-defined data to be returned later.
	 * 
	 * @return PluginError.
	 */
	class OpPluginGetURLNotifyMessage
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
		static const unsigned Type = 2942193063u;

		virtual ~OpPluginGetURLNotifyMessage();



		static OpPluginGetURLNotifyMessage* Create(
			const OpMessageAddress& src,
			const OpMessageAddress& dst = OpMessageAddress(),
			double delay = 0)
		{
			return OP_NEW(OpPluginGetURLNotifyMessage, (src, dst, delay));
		}

		static OpPluginGetURLNotifyMessage* Create(
			const OpData & url_arg = OpData(),
			const OpData * window_arg = NULL,
			UINT64 notify_data_arg = 0,
			const OpMessageAddress& src = OpMessageAddress(),
			const OpMessageAddress& dst = OpMessageAddress(),
			double delay = 0)
		{
			OpPluginGetURLNotifyMessage *obj = OP_NEW(OpPluginGetURLNotifyMessage, (src, dst, delay, url_arg, window_arg, notify_data_arg));
			if (obj)
			{
				if (OpStatus::IsSuccess(obj->Construct()))
					return obj;

				OP_DELETE(obj);
			}
			return NULL;
		}

		static OpPluginGetURLNotifyMessage* Cast(const OpTypedMessage* msg);

		static OpPluginGetURLNotifyMessage* Deserialize(
			const OpMessageAddress& src,
			const OpMessageAddress& dst,
			double delay,
			const OpData& data);

		virtual OP_STATUS Serialize(OpData& data) const;

		virtual const char *GetTypeString() const;

		// Accessors/modifiers comes here
		/**
		 * Check if the field @c URL is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasURL() const
		{
			return protobuf_data.HasURL();
		}

		/**
		 * Get the field @c URL.
		 */
		const OpData & GetURL() const
		{
			return protobuf_data.GetURL();
		}

		/**
		 * Set the field @c URL.
		 */
		OP_STATUS SetURL(const OpData & v);

		/**
		 * Set the field @c URL.
		 */
		OP_STATUS SetURL(const char * v, int l);

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
		const OpData & GetWindow() const
		{
			return protobuf_data.GetWindow();
		}

		/**
		 * Set the field @c window.
		 */
		OP_STATUS SetWindow(const OpData & v);

		/**
		 * Set the field @c window.
		 */
		OP_STATUS SetWindow(const char * v, int l);

		/**
		 * Check if the field @c notifyData is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasNotifyData() const
		{
			return protobuf_data.HasNotifyData();
		}

		/**
		 * Get the field @c notifyData.
		 */
		UINT64 GetNotifyData() const
		{
			return protobuf_data.GetNotifyData();
		}

		/**
		 * Set the field @c notifyData.
		 */
		void SetNotifyData(UINT64 v)
		{
			protobuf_data.SetNotifyData(v);
		}



	protected:

		OpPluginGetURLNotifyMessage(
				const OpMessageAddress& src,
				const OpMessageAddress& dst,
				double delay
				, const OpData & url_arg = OpData()
				, const OpData * window_arg = NULL
				, UINT64 notify_data_arg = 0
				)
			: OpTypedMessage(Type, src, dst, delay)
			, protobuf_data(url_arg, window_arg, notify_data_arg)
		{
		}



		OP_STATUS Construct(

		)
		{
			return protobuf_data.Construct();
		}

	private:
		OpNs4pluginsMessages_MessageSet::PluginGetURLNotify protobuf_data;
	};


	/**
	 * Request a value.
	 * 
	 * This message can be sent from the browser to the plug-in when the browser
	 * requires the use of NPP_GetValue, and from the plug-in to the browser when
	 * the plug-in calls NPN_Getvalue.
	 * 
	 * @field variable Numeric variable identifier.
	 * 
	 * @return PluginGetValueResponse.
	 */
	class OpPluginGetValueMessage
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
		static const unsigned Type = 2214977868u;

		virtual ~OpPluginGetValueMessage();



		static OpPluginGetValueMessage* Create(
			const OpMessageAddress& src,
			const OpMessageAddress& dst = OpMessageAddress(),
			double delay = 0)
		{
			return OP_NEW(OpPluginGetValueMessage, (src, dst, delay));
		}

		static OpPluginGetValueMessage* Create(
			INT32 variable_arg = 0,
			const OpMessageAddress& src = OpMessageAddress(),
			const OpMessageAddress& dst = OpMessageAddress(),
			double delay = 0)
		{
			OpPluginGetValueMessage *obj = OP_NEW(OpPluginGetValueMessage, (src, dst, delay, variable_arg));
			if (obj)
			{
				if (OpStatus::IsSuccess(obj->Construct()))
					return obj;

				OP_DELETE(obj);
			}
			return NULL;
		}

		static OpPluginGetValueMessage* Cast(const OpTypedMessage* msg);

		static OpPluginGetValueMessage* Deserialize(
			const OpMessageAddress& src,
			const OpMessageAddress& dst,
			double delay,
			const OpData& data);

		virtual OP_STATUS Serialize(OpData& data) const;

		virtual const char *GetTypeString() const;

		// Accessors/modifiers comes here
		/**
		 * Check if the field @c variable is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasVariable() const
		{
			return protobuf_data.HasVariable();
		}

		/**
		 * Get the field @c variable.
		 */
		INT32 GetVariable() const
		{
			return protobuf_data.GetVariable();
		}

		/**
		 * Set the field @c variable.
		 */
		void SetVariable(INT32 v)
		{
			protobuf_data.SetVariable(v);
		}



	protected:

		OpPluginGetValueMessage(
				const OpMessageAddress& src,
				const OpMessageAddress& dst,
				double delay
				, INT32 variable_arg = 0
				)
			: OpTypedMessage(Type, src, dst, delay)
			, protobuf_data(variable_arg)
		{
		}



		OP_STATUS Construct(

		)
		{
			return protobuf_data.Construct();
		}

	private:
		OpNs4pluginsMessages_MessageSet::PluginGetValue protobuf_data;
	};


	/**
	 * Retrieve cookie or proxy value from URL.
	 * 
	 * @field variable The type of value to retrieve.
	 * @field URL The URL for which to retrieve a value.
	 * 
	 * @return PluginGetValueForURLResponse.
	 */
	class OpPluginGetValueForURLMessage
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
		static const unsigned Type = 2479585657u;

		virtual ~OpPluginGetValueForURLMessage();



		static OpPluginGetValueForURLMessage* Create(
			const OpMessageAddress& src,
			const OpMessageAddress& dst = OpMessageAddress(),
			double delay = 0)
		{
			return OP_NEW(OpPluginGetValueForURLMessage, (src, dst, delay));
		}

		static OpPluginGetValueForURLMessage* Create(
			INT32 variable_arg = 0,
			const UniString & url_arg = UniString(),
			const OpMessageAddress& src = OpMessageAddress(),
			const OpMessageAddress& dst = OpMessageAddress(),
			double delay = 0)
		{
			OpPluginGetValueForURLMessage *obj = OP_NEW(OpPluginGetValueForURLMessage, (src, dst, delay, variable_arg, url_arg));
			if (obj)
			{
				if (OpStatus::IsSuccess(obj->Construct()))
					return obj;

				OP_DELETE(obj);
			}
			return NULL;
		}

		static OpPluginGetValueForURLMessage* Cast(const OpTypedMessage* msg);

		static OpPluginGetValueForURLMessage* Deserialize(
			const OpMessageAddress& src,
			const OpMessageAddress& dst,
			double delay,
			const OpData& data);

		virtual OP_STATUS Serialize(OpData& data) const;

		virtual const char *GetTypeString() const;

		// Accessors/modifiers comes here
		/**
		 * Check if the field @c variable is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasVariable() const
		{
			return protobuf_data.HasVariable();
		}

		/**
		 * Get the field @c variable.
		 */
		INT32 GetVariable() const
		{
			return protobuf_data.GetVariable();
		}

		/**
		 * Set the field @c variable.
		 */
		void SetVariable(INT32 v)
		{
			protobuf_data.SetVariable(v);
		}

		/**
		 * Check if the field @c URL is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasURL() const
		{
			return protobuf_data.HasURL();
		}

		/**
		 * Get the field @c URL.
		 */
		const UniString & GetURL() const
		{
			return protobuf_data.GetURL();
		}

		/**
		 * Set the field @c URL.
		 */
		OP_STATUS SetURL(const UniString & v);

		/**
		 * Set the field @c URL.
		 */
		OP_STATUS SetURL(const uni_char * v, int l = KAll);



	protected:

		OpPluginGetValueForURLMessage(
				const OpMessageAddress& src,
				const OpMessageAddress& dst,
				double delay
				, INT32 variable_arg = 0
				, const UniString & url_arg = UniString()
				)
			: OpTypedMessage(Type, src, dst, delay)
			, protobuf_data(variable_arg, url_arg)
		{
		}



		OP_STATUS Construct(

		)
		{
			return protobuf_data.Construct();
		}

	private:
		OpNs4pluginsMessages_MessageSet::PluginGetValueForURL protobuf_data;
	};


	/**
	 * Response to PluginGetValueForURL.
	 * 
	 * @field npError See NPError.
	 * @field value The requested value.
	 */
	class OpPluginGetValueForURLResponseMessage
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
		static const unsigned Type = 3765159257u;

		virtual ~OpPluginGetValueForURLResponseMessage();



		static OpPluginGetValueForURLResponseMessage* Create(
			const OpMessageAddress& src,
			const OpMessageAddress& dst = OpMessageAddress(),
			double delay = 0)
		{
			return OP_NEW(OpPluginGetValueForURLResponseMessage, (src, dst, delay));
		}

		static OpPluginGetValueForURLResponseMessage* Create(
			INT32 np_error_arg = 0,
			const UniString & value_arg = UniString(),
			const OpMessageAddress& src = OpMessageAddress(),
			const OpMessageAddress& dst = OpMessageAddress(),
			double delay = 0)
		{
			OpPluginGetValueForURLResponseMessage *obj = OP_NEW(OpPluginGetValueForURLResponseMessage, (src, dst, delay, np_error_arg, value_arg));
			if (obj)
			{
				if (OpStatus::IsSuccess(obj->Construct()))
					return obj;

				OP_DELETE(obj);
			}
			return NULL;
		}

		static OpPluginGetValueForURLResponseMessage* Cast(const OpTypedMessage* msg);

		static OpPluginGetValueForURLResponseMessage* Deserialize(
			const OpMessageAddress& src,
			const OpMessageAddress& dst,
			double delay,
			const OpData& data);

		virtual OP_STATUS Serialize(OpData& data) const;

		virtual const char *GetTypeString() const;

		// Accessors/modifiers comes here
		/**
		 * Check if the field @c npError is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasNpError() const
		{
			return protobuf_data.HasNpError();
		}

		/**
		 * Get the field @c npError.
		 */
		INT32 GetNpError() const
		{
			return protobuf_data.GetNpError();
		}

		/**
		 * Set the field @c npError.
		 */
		void SetNpError(INT32 v)
		{
			protobuf_data.SetNpError(v);
		}

		/**
		 * Check if the field @c value is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasValue() const
		{
			return protobuf_data.HasValue();
		}

		/**
		 * Get the field @c value.
		 */
		const UniString & GetValue() const
		{
			return protobuf_data.GetValue();
		}

		/**
		 * Set the field @c value.
		 */
		OP_STATUS SetValue(const UniString & v);

		/**
		 * Set the field @c value.
		 */
		OP_STATUS SetValue(const uni_char * v, int l = KAll);



	protected:

		OpPluginGetValueForURLResponseMessage(
				const OpMessageAddress& src,
				const OpMessageAddress& dst,
				double delay
				, INT32 np_error_arg = 0
				, const UniString & value_arg = UniString()
				)
			: OpTypedMessage(Type, src, dst, delay)
			, protobuf_data(np_error_arg, value_arg)
		{
		}



		OP_STATUS Construct(

		)
		{
			return protobuf_data.Construct();
		}

	private:
		OpNs4pluginsMessages_MessageSet::PluginGetValueForURLResponse protobuf_data;
	};


	/**
	 * Response to PluginGetValue.
	 * 
	 * @field npError The return value of NPN_GetValue. If non-zero, no optional fields are set.
	 * @field objectValue The NPObject requested, if applicable.
	 * @field booleanValue The boolean value requested, if applicable.
	 * @field integerValue The integer value requested, if applicable.
	 * @field stringValue The string value requested, if applicable.
	 */
	class OpPluginGetValueResponseMessage
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
		static const unsigned Type = 138646605u;

		virtual ~OpPluginGetValueResponseMessage();



		static OpPluginGetValueResponseMessage* Create(
			const OpMessageAddress& src,
			const OpMessageAddress& dst = OpMessageAddress(),
			double delay = 0)
		{
			return OP_NEW(OpPluginGetValueResponseMessage, (src, dst, delay));
		}

		static OpPluginGetValueResponseMessage* Create(
			INT32 np_error_arg = 0,
			const UniString * string_value_arg = NULL,
			const OpMessageAddress& src = OpMessageAddress(),
			const OpMessageAddress& dst = OpMessageAddress(),
			double delay = 0)
		{
			OpPluginGetValueResponseMessage *obj = OP_NEW(OpPluginGetValueResponseMessage, (src, dst, delay, np_error_arg, string_value_arg));
			if (obj)
			{
				if (OpStatus::IsSuccess(obj->Construct()))
					return obj;

				OP_DELETE(obj);
			}
			return NULL;
		}

		static OpPluginGetValueResponseMessage* Cast(const OpTypedMessage* msg);

		static OpPluginGetValueResponseMessage* Deserialize(
			const OpMessageAddress& src,
			const OpMessageAddress& dst,
			double delay,
			const OpData& data);

		virtual OP_STATUS Serialize(OpData& data) const;

		virtual const char *GetTypeString() const;

		// Accessors/modifiers comes here
		/**
		 * Check if the field @c npError is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasNpError() const
		{
			return protobuf_data.HasNpError();
		}

		/**
		 * Get the field @c npError.
		 */
		INT32 GetNpError() const
		{
			return protobuf_data.GetNpError();
		}

		/**
		 * Set the field @c npError.
		 */
		void SetNpError(INT32 v)
		{
			protobuf_data.SetNpError(v);
		}

		/**
		 * Check if the field @c objectValue is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasObjectValue() const
		{
			return protobuf_data.HasObjectValue();
		}

		/**
		 * Get the field @c objectValue.
		 */
		OpNs4pluginsMessages_MessageSet::PluginObject * GetObjectValue() const
		{
			return protobuf_data.GetObjectValue();
		}

		/**
		 * Set the field @c objectValue.
		 */
		void SetObjectValue(OpNs4pluginsMessages_MessageSet::PluginObject * v);

		/**
		 * Check if the field @c booleanValue is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasBooleanValue() const
		{
			return protobuf_data.HasBooleanValue();
		}

		/**
		 * Get the field @c booleanValue.
		 */
		BOOL GetBooleanValue() const
		{
			return protobuf_data.GetBooleanValue();
		}

		/**
		 * Set the field @c booleanValue.
		 */
		void SetBooleanValue(BOOL v)
		{
			protobuf_data.SetBooleanValue(v);
		}

		/**
		 * Check if the field @c integerValue is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasIntegerValue() const
		{
			return protobuf_data.HasIntegerValue();
		}

		/**
		 * Get the field @c integerValue.
		 */
		INT64 GetIntegerValue() const
		{
			return protobuf_data.GetIntegerValue();
		}

		/**
		 * Set the field @c integerValue.
		 */
		void SetIntegerValue(INT64 v)
		{
			protobuf_data.SetIntegerValue(v);
		}

		/**
		 * Check if the field @c stringValue is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasStringValue() const
		{
			return protobuf_data.HasStringValue();
		}

		/**
		 * Get the field @c stringValue.
		 */
		const UniString & GetStringValue() const
		{
			return protobuf_data.GetStringValue();
		}

		/**
		 * Set the field @c stringValue.
		 */
		OP_STATUS SetStringValue(const UniString & v);

		/**
		 * Set the field @c stringValue.
		 */
		OP_STATUS SetStringValue(const uni_char * v, int l = KAll);



	protected:

		OpPluginGetValueResponseMessage(
				const OpMessageAddress& src,
				const OpMessageAddress& dst,
				double delay
				, INT32 np_error_arg = 0
				, const UniString * string_value_arg = NULL
				)
			: OpTypedMessage(Type, src, dst, delay)
			, protobuf_data(np_error_arg, string_value_arg)
		{
		}



		OP_STATUS Construct(

		)
		{
			return protobuf_data.Construct();
		}

	private:
		OpNs4pluginsMessages_MessageSet::PluginGetValueResponse protobuf_data;
	};


	/**
	 * Check for presence of EcmaScript object method.
	 * 
	 * @field object Object whose method we wish to determine presence of.
	 * @field method String identifier, name of method to determine presence of.
	 * @field context The scripting context in which this request is made. See PluginHandler::PushScriptingContext().
	 * 
	 * @return PluginResult.
	 */
	class OpPluginHasMethodMessage
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
		static const unsigned Type = 2655669874u;

		virtual ~OpPluginHasMethodMessage();

		static OpPluginHasMethodMessage* Create()
		{
		    OpMessageAddress src;
		    OpMessageAddress dst;
		    double delay = 0;
		    return OP_NEW(OpPluginHasMethodMessage, (src, dst, delay));
		}

		static OpPluginHasMethodMessage* Create(
			const OpMessageAddress& src,
			const OpMessageAddress& dst = OpMessageAddress(),
			double delay = 0)
		{
			return OP_NEW(OpPluginHasMethodMessage, (src, dst, delay));
		}



		static OpPluginHasMethodMessage* Cast(const OpTypedMessage* msg);

		static OpPluginHasMethodMessage* Deserialize(
			const OpMessageAddress& src,
			const OpMessageAddress& dst,
			double delay,
			const OpData& data);

		virtual OP_STATUS Serialize(OpData& data) const;

		virtual const char *GetTypeString() const;

		// Accessors/modifiers comes here
		/**
		 * Check if the field @c object is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasObject() const
		{
			return protobuf_data.HasObject();
		}

		/**
		 * Get the field @c object.
		 */
		const OpNs4pluginsMessages_MessageSet::PluginObject & GetObject() const
		{
			return protobuf_data.GetObject();
		}

		/**
		 * Set the field @c object.
		 */
		OpNs4pluginsMessages_MessageSet::PluginObject & GetObjectRef();

		/**
		 * Check if the field @c method is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasMethod() const
		{
			return protobuf_data.HasMethod();
		}

		/**
		 * Get the field @c method.
		 */
		const OpNs4pluginsMessages_MessageSet::PluginIdentifier & GetMethod() const
		{
			return protobuf_data.GetMethod();
		}

		/**
		 * Set the field @c method.
		 */
		OpNs4pluginsMessages_MessageSet::PluginIdentifier & GetMethodRef();

		/**
		 * Check if the field @c context is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasContext() const
		{
			return protobuf_data.HasContext();
		}

		/**
		 * Get the field @c context.
		 */
		UINT32 GetContext() const
		{
			return protobuf_data.GetContext();
		}

		/**
		 * Set the field @c context.
		 */
		void SetContext(UINT32 v)
		{
			protobuf_data.SetContext(v);
		}



	protected:

		OpPluginHasMethodMessage(
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
		OpNs4pluginsMessages_MessageSet::PluginHasMethod protobuf_data;
	};


	/**
	 * Check for presence of EcmaScript object property.
	 * 
	 * @field object Object whose property we wish to determine presence of.
	 * @field property String identifier, name of property to determine presence of.
	 * @field context The scripting context in which this request is made. See PluginHandler::PushScriptingContext().
	 * 
	 * @return PluginResult.
	 */
	class OpPluginHasPropertyMessage
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
		static const unsigned Type = 2758678843u;

		virtual ~OpPluginHasPropertyMessage();

		static OpPluginHasPropertyMessage* Create()
		{
		    OpMessageAddress src;
		    OpMessageAddress dst;
		    double delay = 0;
		    return OP_NEW(OpPluginHasPropertyMessage, (src, dst, delay));
		}

		static OpPluginHasPropertyMessage* Create(
			const OpMessageAddress& src,
			const OpMessageAddress& dst = OpMessageAddress(),
			double delay = 0)
		{
			return OP_NEW(OpPluginHasPropertyMessage, (src, dst, delay));
		}



		static OpPluginHasPropertyMessage* Cast(const OpTypedMessage* msg);

		static OpPluginHasPropertyMessage* Deserialize(
			const OpMessageAddress& src,
			const OpMessageAddress& dst,
			double delay,
			const OpData& data);

		virtual OP_STATUS Serialize(OpData& data) const;

		virtual const char *GetTypeString() const;

		// Accessors/modifiers comes here
		/**
		 * Check if the field @c object is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasObject() const
		{
			return protobuf_data.HasObject();
		}

		/**
		 * Get the field @c object.
		 */
		const OpNs4pluginsMessages_MessageSet::PluginObject & GetObject() const
		{
			return protobuf_data.GetObject();
		}

		/**
		 * Set the field @c object.
		 */
		OpNs4pluginsMessages_MessageSet::PluginObject & GetObjectRef();

		/**
		 * Check if the field @c property is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasProperty() const
		{
			return protobuf_data.HasProperty();
		}

		/**
		 * Get the field @c property.
		 */
		const OpNs4pluginsMessages_MessageSet::PluginIdentifier & GetProperty() const
		{
			return protobuf_data.GetProperty();
		}

		/**
		 * Set the field @c property.
		 */
		OpNs4pluginsMessages_MessageSet::PluginIdentifier & GetPropertyRef();

		/**
		 * Check if the field @c context is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasContext() const
		{
			return protobuf_data.HasContext();
		}

		/**
		 * Get the field @c context.
		 */
		UINT32 GetContext() const
		{
			return protobuf_data.GetContext();
		}

		/**
		 * Set the field @c context.
		 */
		void SetContext(UINT32 v)
		{
			protobuf_data.SetContext(v);
		}



	protected:

		OpPluginHasPropertyMessage(
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
		OpNs4pluginsMessages_MessageSet::PluginHasProperty protobuf_data;
	};


	/**
	 * Response to PluginGet*Identifier(s).
	 * 
	 * @field identifiers Identifier(s).
	 */
	class OpPluginIdentifiersMessage
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
		static const unsigned Type = 1934460891u;

		virtual ~OpPluginIdentifiersMessage();

		static OpPluginIdentifiersMessage* Create()
		{
		    OpMessageAddress src;
		    OpMessageAddress dst;
		    double delay = 0;
		    return OP_NEW(OpPluginIdentifiersMessage, (src, dst, delay));
		}

		static OpPluginIdentifiersMessage* Create(
			const OpMessageAddress& src,
			const OpMessageAddress& dst = OpMessageAddress(),
			double delay = 0)
		{
			return OP_NEW(OpPluginIdentifiersMessage, (src, dst, delay));
		}



		static OpPluginIdentifiersMessage* Cast(const OpTypedMessage* msg);

		static OpPluginIdentifiersMessage* Deserialize(
			const OpMessageAddress& src,
			const OpMessageAddress& dst,
			double delay,
			const OpData& data);

		virtual OP_STATUS Serialize(OpData& data) const;

		virtual const char *GetTypeString() const;

		// Accessors/modifiers comes here
		/**
		 * Check if the field @c identifiers is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasIdentifiers() const
		{
			return protobuf_data.HasIdentifiers();
		}

		/**
		 * Get the field @c identifiers.
		 */
		const OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginIdentifier> & GetIdentifiers() const
		{
			return protobuf_data.GetIdentifiers();
		}

		/**
		 * Set the field @c identifiers.
		 */
		OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginIdentifier> & GetIdentifiersRef();



	protected:

		OpPluginIdentifiersMessage(
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
		OpNs4pluginsMessages_MessageSet::PluginIdentifiers protobuf_data;
	};


	/**
	 * Initialize a plug-in library through its NP_Initialize method.
	 * 
	 * Ns4plugins will send this message to a plug-in component.
	 * 
	 * @return PluginInitializeResponse containing NP_Initialize return
	 *         value, or OpStatusMessage on error.
	 */
	class OpPluginInitializeMessage
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
		static const unsigned Type = 836257082u;

		virtual ~OpPluginInitializeMessage();

		static OpPluginInitializeMessage* Create()
		{
		    OpMessageAddress src;
		    OpMessageAddress dst;
		    double delay = 0;
		    return OP_NEW(OpPluginInitializeMessage, (src, dst, delay));
		}

		static OpPluginInitializeMessage* Create(
			const OpMessageAddress& src,
			const OpMessageAddress& dst = OpMessageAddress(),
			double delay = 0)
		{
			return OP_NEW(OpPluginInitializeMessage, (src, dst, delay));
		}



		static OpPluginInitializeMessage* Cast(const OpTypedMessage* msg);

		static OpPluginInitializeMessage* Deserialize(
			const OpMessageAddress& src,
			const OpMessageAddress& dst,
			double delay,
			const OpData& data);

		virtual OP_STATUS Serialize(OpData& data) const;

		virtual const char *GetTypeString() const;

		// Accessors/modifiers comes here


	protected:

		OpPluginInitializeMessage(
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
		OpNs4pluginsMessages_MessageSet::PluginInitialize protobuf_data;
	};


	/**
	 * Library loaded and initialized.
	 * 
	 * @field npError Return value from plug-in library NP_Initialize. Only valid if status is OpStatus::OK.
	 * 
	 * @return None.
	 */
	class OpPluginInitializeResponseMessage
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
		static const unsigned Type = 2803856306u;

		virtual ~OpPluginInitializeResponseMessage();



		static OpPluginInitializeResponseMessage* Create(
			const OpMessageAddress& src,
			const OpMessageAddress& dst = OpMessageAddress(),
			double delay = 0)
		{
			return OP_NEW(OpPluginInitializeResponseMessage, (src, dst, delay));
		}

		static OpPluginInitializeResponseMessage* Create(
			INT32 np_error_arg = 0,
			const OpMessageAddress& src = OpMessageAddress(),
			const OpMessageAddress& dst = OpMessageAddress(),
			double delay = 0)
		{
			OpPluginInitializeResponseMessage *obj = OP_NEW(OpPluginInitializeResponseMessage, (src, dst, delay, np_error_arg));
			if (obj)
			{
				if (OpStatus::IsSuccess(obj->Construct()))
					return obj;

				OP_DELETE(obj);
			}
			return NULL;
		}

		static OpPluginInitializeResponseMessage* Cast(const OpTypedMessage* msg);

		static OpPluginInitializeResponseMessage* Deserialize(
			const OpMessageAddress& src,
			const OpMessageAddress& dst,
			double delay,
			const OpData& data);

		virtual OP_STATUS Serialize(OpData& data) const;

		virtual const char *GetTypeString() const;

		// Accessors/modifiers comes here
		/**
		 * Check if the field @c npError is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasNpError() const
		{
			return protobuf_data.HasNpError();
		}

		/**
		 * Get the field @c npError.
		 */
		INT32 GetNpError() const
		{
			return protobuf_data.GetNpError();
		}

		/**
		 * Set the field @c npError.
		 */
		void SetNpError(INT32 v)
		{
			protobuf_data.SetNpError(v);
		}



	protected:

		OpPluginInitializeResponseMessage(
				const OpMessageAddress& src,
				const OpMessageAddress& dst,
				double delay
				, INT32 np_error_arg = 0
				)
			: OpTypedMessage(Type, src, dst, delay)
			, protobuf_data(np_error_arg)
		{
		}



		OP_STATUS Construct(

		)
		{
			return protobuf_data.Construct();
		}

	private:
		OpNs4pluginsMessages_MessageSet::PluginInitializeResponse protobuf_data;
	};


	/**
	 * Request invalidation of a plug-in window rectangle.
	 * 
	 * @field rect The rectangle to invalidate, in plug-in window coordinates.
	 * 
	 * @return None.
	 */
	class OpPluginInvalidateMessage
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
		static const unsigned Type = 2486983551u;

		virtual ~OpPluginInvalidateMessage();

		static OpPluginInvalidateMessage* Create()
		{
		    OpMessageAddress src;
		    OpMessageAddress dst;
		    double delay = 0;
		    return OP_NEW(OpPluginInvalidateMessage, (src, dst, delay));
		}

		static OpPluginInvalidateMessage* Create(
			const OpMessageAddress& src,
			const OpMessageAddress& dst = OpMessageAddress(),
			double delay = 0)
		{
			return OP_NEW(OpPluginInvalidateMessage, (src, dst, delay));
		}



		static OpPluginInvalidateMessage* Cast(const OpTypedMessage* msg);

		static OpPluginInvalidateMessage* Deserialize(
			const OpMessageAddress& src,
			const OpMessageAddress& dst,
			double delay,
			const OpData& data);

		virtual OP_STATUS Serialize(OpData& data) const;

		virtual const char *GetTypeString() const;

		// Accessors/modifiers comes here
		/**
		 * Check if the field @c rect is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasRect() const
		{
			return protobuf_data.HasRect();
		}

		/**
		 * Get the field @c rect.
		 */
		const OpNs4pluginsMessages_MessageSet::PluginRect & GetRect() const
		{
			return protobuf_data.GetRect();
		}

		/**
		 * Set the field @c rect.
		 */
		OpNs4pluginsMessages_MessageSet::PluginRect & GetRectRef();



	protected:

		OpPluginInvalidateMessage(
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
		OpNs4pluginsMessages_MessageSet::PluginInvalidate protobuf_data;
	};


	/**
	 * Invoke an EcmaScript method.
	 * 
	 * @field object Object whose method we wish to invoke.
	 * @field method The method to invoke.
	 * @field arguments Method arguments.
	 * @field context The scripting context in which this request is made. See PluginHandler::PushScriptingContext().
	 * 
	 * @return PluginResult.
	 */
	class OpPluginInvokeMessage
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
		static const unsigned Type = 2171339124u;

		virtual ~OpPluginInvokeMessage();

		static OpPluginInvokeMessage* Create()
		{
		    OpMessageAddress src;
		    OpMessageAddress dst;
		    double delay = 0;
		    return OP_NEW(OpPluginInvokeMessage, (src, dst, delay));
		}

		static OpPluginInvokeMessage* Create(
			const OpMessageAddress& src,
			const OpMessageAddress& dst = OpMessageAddress(),
			double delay = 0)
		{
			return OP_NEW(OpPluginInvokeMessage, (src, dst, delay));
		}



		static OpPluginInvokeMessage* Cast(const OpTypedMessage* msg);

		static OpPluginInvokeMessage* Deserialize(
			const OpMessageAddress& src,
			const OpMessageAddress& dst,
			double delay,
			const OpData& data);

		virtual OP_STATUS Serialize(OpData& data) const;

		virtual const char *GetTypeString() const;

		// Accessors/modifiers comes here
		/**
		 * Check if the field @c object is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasObject() const
		{
			return protobuf_data.HasObject();
		}

		/**
		 * Get the field @c object.
		 */
		const OpNs4pluginsMessages_MessageSet::PluginObject & GetObject() const
		{
			return protobuf_data.GetObject();
		}

		/**
		 * Set the field @c object.
		 */
		OpNs4pluginsMessages_MessageSet::PluginObject & GetObjectRef();

		/**
		 * Check if the field @c method is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasMethod() const
		{
			return protobuf_data.HasMethod();
		}

		/**
		 * Get the field @c method.
		 */
		const OpNs4pluginsMessages_MessageSet::PluginIdentifier & GetMethod() const
		{
			return protobuf_data.GetMethod();
		}

		/**
		 * Set the field @c method.
		 */
		OpNs4pluginsMessages_MessageSet::PluginIdentifier & GetMethodRef();

		/**
		 * Check if the field @c arguments is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasArguments() const
		{
			return protobuf_data.HasArguments();
		}

		/**
		 * Get the field @c arguments.
		 */
		const OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginVariant> & GetArguments() const
		{
			return protobuf_data.GetArguments();
		}

		/**
		 * Set the field @c arguments.
		 */
		OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginVariant> & GetArgumentsRef();

		/**
		 * Check if the field @c context is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasContext() const
		{
			return protobuf_data.HasContext();
		}

		/**
		 * Get the field @c context.
		 */
		UINT32 GetContext() const
		{
			return protobuf_data.GetContext();
		}

		/**
		 * Set the field @c context.
		 */
		void SetContext(UINT32 v)
		{
			protobuf_data.SetContext(v);
		}



	protected:

		OpPluginInvokeMessage(
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
		OpNs4pluginsMessages_MessageSet::PluginInvoke protobuf_data;
	};


	/**
	 * Invoke an EcmaScript function.
	 * 
	 * @field object Function we wish to invoke.
	 * @field arguments Function arguments.
	 * @field context The scripting context in which this request is made. See PluginHandler::PushScriptingContext().
	 * 
	 * @return PluginResult.
	 */
	class OpPluginInvokeDefaultMessage
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
		static const unsigned Type = 4139734476u;

		virtual ~OpPluginInvokeDefaultMessage();

		static OpPluginInvokeDefaultMessage* Create()
		{
		    OpMessageAddress src;
		    OpMessageAddress dst;
		    double delay = 0;
		    return OP_NEW(OpPluginInvokeDefaultMessage, (src, dst, delay));
		}

		static OpPluginInvokeDefaultMessage* Create(
			const OpMessageAddress& src,
			const OpMessageAddress& dst = OpMessageAddress(),
			double delay = 0)
		{
			return OP_NEW(OpPluginInvokeDefaultMessage, (src, dst, delay));
		}



		static OpPluginInvokeDefaultMessage* Cast(const OpTypedMessage* msg);

		static OpPluginInvokeDefaultMessage* Deserialize(
			const OpMessageAddress& src,
			const OpMessageAddress& dst,
			double delay,
			const OpData& data);

		virtual OP_STATUS Serialize(OpData& data) const;

		virtual const char *GetTypeString() const;

		// Accessors/modifiers comes here
		/**
		 * Check if the field @c object is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasObject() const
		{
			return protobuf_data.HasObject();
		}

		/**
		 * Get the field @c object.
		 */
		const OpNs4pluginsMessages_MessageSet::PluginObject & GetObject() const
		{
			return protobuf_data.GetObject();
		}

		/**
		 * Set the field @c object.
		 */
		OpNs4pluginsMessages_MessageSet::PluginObject & GetObjectRef();

		/**
		 * Check if the field @c arguments is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasArguments() const
		{
			return protobuf_data.HasArguments();
		}

		/**
		 * Get the field @c arguments.
		 */
		const OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginVariant> & GetArguments() const
		{
			return protobuf_data.GetArguments();
		}

		/**
		 * Set the field @c arguments.
		 */
		OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginVariant> & GetArgumentsRef();

		/**
		 * Check if the field @c context is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasContext() const
		{
			return protobuf_data.HasContext();
		}

		/**
		 * Get the field @c context.
		 */
		UINT32 GetContext() const
		{
			return protobuf_data.GetContext();
		}

		/**
		 * Set the field @c context.
		 */
		void SetContext(UINT32 v)
		{
			protobuf_data.SetContext(v);
		}



	protected:

		OpPluginInvokeDefaultMessage(
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
		OpNs4pluginsMessages_MessageSet::PluginInvokeDefault protobuf_data;
	};


	/**
	 * Load a plug-in library.
	 * 
	 * @field path Library path.
	 * 
	 * @return The plug-in component will send a PluginLoadResponse with
	 *         the status code on success, or an OpStatusMessage indicating
	 *         error.
	 */
	class OpPluginLoadMessage
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
		static const unsigned Type = 3683838265u;

		virtual ~OpPluginLoadMessage();



		static OpPluginLoadMessage* Create(
			const OpMessageAddress& src,
			const OpMessageAddress& dst = OpMessageAddress(),
			double delay = 0)
		{
			return OP_NEW(OpPluginLoadMessage, (src, dst, delay));
		}

		static OpPluginLoadMessage* Create(
			const UniString & path_arg = UniString(),
			const OpMessageAddress& src = OpMessageAddress(),
			const OpMessageAddress& dst = OpMessageAddress(),
			double delay = 0)
		{
			OpPluginLoadMessage *obj = OP_NEW(OpPluginLoadMessage, (src, dst, delay, path_arg));
			if (obj)
			{
				if (OpStatus::IsSuccess(obj->Construct()))
					return obj;

				OP_DELETE(obj);
			}
			return NULL;
		}

		static OpPluginLoadMessage* Cast(const OpTypedMessage* msg);

		static OpPluginLoadMessage* Deserialize(
			const OpMessageAddress& src,
			const OpMessageAddress& dst,
			double delay,
			const OpData& data);

		virtual OP_STATUS Serialize(OpData& data) const;

		virtual const char *GetTypeString() const;

		// Accessors/modifiers comes here
		/**
		 * Check if the field @c path is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasPath() const
		{
			return protobuf_data.HasPath();
		}

		/**
		 * Get the field @c path.
		 */
		const UniString & GetPath() const
		{
			return protobuf_data.GetPath();
		}

		/**
		 * Set the field @c path.
		 */
		OP_STATUS SetPath(const UniString & v);

		/**
		 * Set the field @c path.
		 */
		OP_STATUS SetPath(const uni_char * v, int l = KAll);



	protected:

		OpPluginLoadMessage(
				const OpMessageAddress& src,
				const OpMessageAddress& dst,
				double delay
				, const UniString & path_arg = UniString()
				)
			: OpTypedMessage(Type, src, dst, delay)
			, protobuf_data(path_arg)
		{
		}



		OP_STATUS Construct(

		)
		{
			return protobuf_data.Construct();
		}

	private:
		OpNs4pluginsMessages_MessageSet::PluginLoad protobuf_data;
	};


	/**
	 * Response to PluginLoad.
	 * 
	 * @field status See OpStatus; OK if the plug-in loaded successfully.
	 * 
	 * @return None.
	 */
	class OpPluginLoadResponseMessage
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
		static const unsigned Type = 1698446143u;

		virtual ~OpPluginLoadResponseMessage();



		static OpPluginLoadResponseMessage* Create(
			const OpMessageAddress& src,
			const OpMessageAddress& dst = OpMessageAddress(),
			double delay = 0)
		{
			return OP_NEW(OpPluginLoadResponseMessage, (src, dst, delay));
		}

		static OpPluginLoadResponseMessage* Create(
			INT32 status_arg = 0,
			const OpMessageAddress& src = OpMessageAddress(),
			const OpMessageAddress& dst = OpMessageAddress(),
			double delay = 0)
		{
			OpPluginLoadResponseMessage *obj = OP_NEW(OpPluginLoadResponseMessage, (src, dst, delay, status_arg));
			if (obj)
			{
				if (OpStatus::IsSuccess(obj->Construct()))
					return obj;

				OP_DELETE(obj);
			}
			return NULL;
		}

		static OpPluginLoadResponseMessage* Cast(const OpTypedMessage* msg);

		static OpPluginLoadResponseMessage* Deserialize(
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
		 */
		INT32 GetStatus() const
		{
			return protobuf_data.GetStatus();
		}

		/**
		 * Set the field @c status.
		 */
		void SetStatus(INT32 v)
		{
			protobuf_data.SetStatus(v);
		}



	protected:

		OpPluginLoadResponseMessage(
				const OpMessageAddress& src,
				const OpMessageAddress& dst,
				double delay
				, INT32 status_arg = 0
				)
			: OpTypedMessage(Type, src, dst, delay)
			, protobuf_data(status_arg)
		{
		}



		OP_STATUS Construct(

		)
		{
			return protobuf_data.Construct();
		}

	private:
		OpNs4pluginsMessages_MessageSet::PluginLoadResponse protobuf_data;
	};


	/**
	 * Obtain string represented by identifier.
	 * 
	 * Sent by plug-in component as part of NPN_UTF8FromIdentifier.
	 * 
	 * @field identifier Identifier to look up.
	 * 
	 * @return PluginLookupIdentifierResponse or OpStatusMessage.
	 */
	class OpPluginLookupIdentifierMessage
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
		static const unsigned Type = 2297961606u;

		virtual ~OpPluginLookupIdentifierMessage();

		static OpPluginLookupIdentifierMessage* Create()
		{
		    OpMessageAddress src;
		    OpMessageAddress dst;
		    double delay = 0;
		    return OP_NEW(OpPluginLookupIdentifierMessage, (src, dst, delay));
		}

		static OpPluginLookupIdentifierMessage* Create(
			const OpMessageAddress& src,
			const OpMessageAddress& dst = OpMessageAddress(),
			double delay = 0)
		{
			return OP_NEW(OpPluginLookupIdentifierMessage, (src, dst, delay));
		}



		static OpPluginLookupIdentifierMessage* Cast(const OpTypedMessage* msg);

		static OpPluginLookupIdentifierMessage* Deserialize(
			const OpMessageAddress& src,
			const OpMessageAddress& dst,
			double delay,
			const OpData& data);

		virtual OP_STATUS Serialize(OpData& data) const;

		virtual const char *GetTypeString() const;

		// Accessors/modifiers comes here
		/**
		 * Check if the field @c identifier is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasIdentifier() const
		{
			return protobuf_data.HasIdentifier();
		}

		/**
		 * Get the field @c identifier.
		 */
		const OpNs4pluginsMessages_MessageSet::PluginIdentifier & GetIdentifier() const
		{
			return protobuf_data.GetIdentifier();
		}

		/**
		 * Set the field @c identifier.
		 */
		OpNs4pluginsMessages_MessageSet::PluginIdentifier & GetIdentifierRef();



	protected:

		OpPluginLookupIdentifierMessage(
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
		OpNs4pluginsMessages_MessageSet::PluginLookupIdentifier protobuf_data;
	};


	/**
	 * Response to PluginLookupIdentifier.
	 * 
	 * @field stringValue The returned value.
	 * 
	 * @return None.
	 */
	class OpPluginLookupIdentifierResponseMessage
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
		static const unsigned Type = 2322625389u;

		virtual ~OpPluginLookupIdentifierResponseMessage();



		static OpPluginLookupIdentifierResponseMessage* Create(
			const OpMessageAddress& src,
			const OpMessageAddress& dst = OpMessageAddress(),
			double delay = 0)
		{
			return OP_NEW(OpPluginLookupIdentifierResponseMessage, (src, dst, delay));
		}

		static OpPluginLookupIdentifierResponseMessage* Create(
			const UniString & string_value_arg = UniString(),
			const OpMessageAddress& src = OpMessageAddress(),
			const OpMessageAddress& dst = OpMessageAddress(),
			double delay = 0)
		{
			OpPluginLookupIdentifierResponseMessage *obj = OP_NEW(OpPluginLookupIdentifierResponseMessage, (src, dst, delay, string_value_arg));
			if (obj)
			{
				if (OpStatus::IsSuccess(obj->Construct()))
					return obj;

				OP_DELETE(obj);
			}
			return NULL;
		}

		static OpPluginLookupIdentifierResponseMessage* Cast(const OpTypedMessage* msg);

		static OpPluginLookupIdentifierResponseMessage* Deserialize(
			const OpMessageAddress& src,
			const OpMessageAddress& dst,
			double delay,
			const OpData& data);

		virtual OP_STATUS Serialize(OpData& data) const;

		virtual const char *GetTypeString() const;

		// Accessors/modifiers comes here
		/**
		 * Check if the field @c stringValue is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasStringValue() const
		{
			return protobuf_data.HasStringValue();
		}

		/**
		 * Get the field @c stringValue.
		 */
		const UniString & GetStringValue() const
		{
			return protobuf_data.GetStringValue();
		}

		/**
		 * Set the field @c stringValue.
		 */
		OP_STATUS SetStringValue(const UniString & v);

		/**
		 * Set the field @c stringValue.
		 */
		OP_STATUS SetStringValue(const uni_char * v, int l = KAll);



	protected:

		OpPluginLookupIdentifierResponseMessage(
				const OpMessageAddress& src,
				const OpMessageAddress& dst,
				double delay
				, const UniString & string_value_arg = UniString()
				)
			: OpTypedMessage(Type, src, dst, delay)
			, protobuf_data(string_value_arg)
		{
		}



		OP_STATUS Construct(

		)
		{
			return protobuf_data.Construct();
		}

	private:
		OpNs4pluginsMessages_MessageSet::PluginLookupIdentifierResponse protobuf_data;
	};


	/**
	 * Create a new plug-in instance by calling NPP_New.
	 * 
	 * @field contentType Content-type of instance to create.
	 * @field mode See mode parameter of NPP_New.
	 * @field arguments Arguments to NPP_New.
	 * @field saved Plug-in library specific pointer, opaque to Opera.
	 * @field adapterAddress If set, address of the channel returned by OpPluginAdapter::GetChannel().
	 *        See that method for more information.
	 * 
	 * @return PluginNewResponse or OpStatusMessage on error.
	 */
	class OpPluginNewMessage
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
		static const unsigned Type = 737482461u;

		virtual ~OpPluginNewMessage();



		static OpPluginNewMessage* Create(
			const OpMessageAddress& src,
			const OpMessageAddress& dst = OpMessageAddress(),
			double delay = 0)
		{
			return OP_NEW(OpPluginNewMessage, (src, dst, delay));
		}

		static OpPluginNewMessage* Create(
			const UniString & content_type_arg = UniString(),
			INT32 mode_arg = 0,
			UINT64 saved_arg = 0,
			const OpMessageAddress& src = OpMessageAddress(),
			const OpMessageAddress& dst = OpMessageAddress(),
			double delay = 0)
		{
			OpPluginNewMessage *obj = OP_NEW(OpPluginNewMessage, (src, dst, delay, content_type_arg, mode_arg, saved_arg));
			if (obj)
			{
				if (OpStatus::IsSuccess(obj->Construct()))
					return obj;

				OP_DELETE(obj);
			}
			return NULL;
		}

		static OpPluginNewMessage* Cast(const OpTypedMessage* msg);

		static OpPluginNewMessage* Deserialize(
			const OpMessageAddress& src,
			const OpMessageAddress& dst,
			double delay,
			const OpData& data);

		virtual OP_STATUS Serialize(OpData& data) const;

		virtual const char *GetTypeString() const;

		// Accessors/modifiers comes here
		/**
		 * Check if the field @c contentType is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasContentType() const
		{
			return protobuf_data.HasContentType();
		}

		/**
		 * Get the field @c contentType.
		 */
		const UniString & GetContentType() const
		{
			return protobuf_data.GetContentType();
		}

		/**
		 * Set the field @c contentType.
		 */
		OP_STATUS SetContentType(const UniString & v);

		/**
		 * Set the field @c contentType.
		 */
		OP_STATUS SetContentType(const uni_char * v, int l = KAll);

		/**
		 * Check if the field @c mode is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasMode() const
		{
			return protobuf_data.HasMode();
		}

		/**
		 * Get the field @c mode.
		 */
		INT32 GetMode() const
		{
			return protobuf_data.GetMode();
		}

		/**
		 * Set the field @c mode.
		 */
		void SetMode(INT32 v)
		{
			protobuf_data.SetMode(v);
		}

		/**
		 * Check if the field @c arguments is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasArguments() const
		{
			return protobuf_data.HasArguments();
		}

		/**
		 * Get the field @c arguments.
		 */
		const OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginNew_Argument> & GetArguments() const
		{
			return protobuf_data.GetArguments();
		}

		/**
		 * Set the field @c arguments.
		 */
		OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginNew_Argument> & GetArgumentsRef();

		/**
		 * Check if the field @c saved is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasSaved() const
		{
			return protobuf_data.HasSaved();
		}

		/**
		 * Get the field @c saved.
		 */
		UINT64 GetSaved() const
		{
			return protobuf_data.GetSaved();
		}

		/**
		 * Set the field @c saved.
		 */
		void SetSaved(UINT64 v)
		{
			protobuf_data.SetSaved(v);
		}

		/**
		 * Check if the field @c adapterAddress is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasAdapterAddress() const
		{
			return protobuf_data.HasAdapterAddress();
		}

		/**
		 * Get the field @c adapterAddress.
		 */
		OpNs4pluginsMessages_MessageSet::MessageAddress * GetAdapterAddress() const
		{
			return protobuf_data.GetAdapterAddress();
		}

		/**
		 * Set the field @c adapterAddress.
		 */
		void SetAdapterAddress(OpNs4pluginsMessages_MessageSet::MessageAddress * v);



	protected:

		OpPluginNewMessage(
				const OpMessageAddress& src,
				const OpMessageAddress& dst,
				double delay
				, const UniString & content_type_arg = UniString()
				, INT32 mode_arg = 0
				, UINT64 saved_arg = 0
				)
			: OpTypedMessage(Type, src, dst, delay)
			, protobuf_data(content_type_arg, mode_arg, saved_arg)
		{
		}



		OP_STATUS Construct(

		)
		{
			return protobuf_data.Construct();
		}

	private:
		OpNs4pluginsMessages_MessageSet::PluginNew protobuf_data;
	};


	/**
	 * Response to PluginNew.
	 * 
	 * @field npError Return value from NPP_New.
	 * 
	 * @return None.
	 */
	class OpPluginNewResponseMessage
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
		static const unsigned Type = 2908042539u;

		virtual ~OpPluginNewResponseMessage();



		static OpPluginNewResponseMessage* Create(
			const OpMessageAddress& src,
			const OpMessageAddress& dst = OpMessageAddress(),
			double delay = 0)
		{
			return OP_NEW(OpPluginNewResponseMessage, (src, dst, delay));
		}

		static OpPluginNewResponseMessage* Create(
			INT32 np_error_arg = 0,
			const OpMessageAddress& src = OpMessageAddress(),
			const OpMessageAddress& dst = OpMessageAddress(),
			double delay = 0)
		{
			OpPluginNewResponseMessage *obj = OP_NEW(OpPluginNewResponseMessage, (src, dst, delay, np_error_arg));
			if (obj)
			{
				if (OpStatus::IsSuccess(obj->Construct()))
					return obj;

				OP_DELETE(obj);
			}
			return NULL;
		}

		static OpPluginNewResponseMessage* Cast(const OpTypedMessage* msg);

		static OpPluginNewResponseMessage* Deserialize(
			const OpMessageAddress& src,
			const OpMessageAddress& dst,
			double delay,
			const OpData& data);

		virtual OP_STATUS Serialize(OpData& data) const;

		virtual const char *GetTypeString() const;

		// Accessors/modifiers comes here
		/**
		 * Check if the field @c npError is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasNpError() const
		{
			return protobuf_data.HasNpError();
		}

		/**
		 * Get the field @c npError.
		 */
		INT32 GetNpError() const
		{
			return protobuf_data.GetNpError();
		}

		/**
		 * Set the field @c npError.
		 */
		void SetNpError(INT32 v)
		{
			protobuf_data.SetNpError(v);
		}



	protected:

		OpPluginNewResponseMessage(
				const OpMessageAddress& src,
				const OpMessageAddress& dst,
				double delay
				, INT32 np_error_arg = 0
				)
			: OpTypedMessage(Type, src, dst, delay)
			, protobuf_data(np_error_arg)
		{
		}



		OP_STATUS Construct(

		)
		{
			return protobuf_data.Construct();
		}

	private:
		OpNs4pluginsMessages_MessageSet::PluginNewResponse protobuf_data;
	};


	/**
	 * Announce new stream.
	 * 
	 * @field contentType Content type of the stream data.
	 * @field stream Stream announced.
	 * @field seekable True if seeking in the stream is supported.
	 * @field streamType Type of stream. See PluginNewStreamResponse.
	 * 
	 * @return PluginNewStreamResponse.
	 */
	class OpPluginNewStreamMessage
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
		static const unsigned Type = 870685037u;

		virtual ~OpPluginNewStreamMessage();



		static OpPluginNewStreamMessage* Create(
			const OpMessageAddress& src,
			const OpMessageAddress& dst = OpMessageAddress(),
			double delay = 0)
		{
			return OP_NEW(OpPluginNewStreamMessage, (src, dst, delay));
		}

		static OpPluginNewStreamMessage* Create(
			const UniString & content_type_arg = UniString(),
			BOOL seekable_arg = FALSE,
			INT32 stream_type_arg = 0,
			const OpMessageAddress& src = OpMessageAddress(),
			const OpMessageAddress& dst = OpMessageAddress(),
			double delay = 0)
		{
			OpPluginNewStreamMessage *obj = OP_NEW(OpPluginNewStreamMessage, (src, dst, delay, content_type_arg, seekable_arg, stream_type_arg));
			if (obj)
			{
				if (OpStatus::IsSuccess(obj->Construct()))
					return obj;

				OP_DELETE(obj);
			}
			return NULL;
		}

		static OpPluginNewStreamMessage* Cast(const OpTypedMessage* msg);

		static OpPluginNewStreamMessage* Deserialize(
			const OpMessageAddress& src,
			const OpMessageAddress& dst,
			double delay,
			const OpData& data);

		virtual OP_STATUS Serialize(OpData& data) const;

		virtual const char *GetTypeString() const;

		// Accessors/modifiers comes here
		/**
		 * Check if the field @c contentType is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasContentType() const
		{
			return protobuf_data.HasContentType();
		}

		/**
		 * Get the field @c contentType.
		 */
		const UniString & GetContentType() const
		{
			return protobuf_data.GetContentType();
		}

		/**
		 * Set the field @c contentType.
		 */
		OP_STATUS SetContentType(const UniString & v);

		/**
		 * Set the field @c contentType.
		 */
		OP_STATUS SetContentType(const uni_char * v, int l = KAll);

		/**
		 * Check if the field @c stream is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasStream() const
		{
			return protobuf_data.HasStream();
		}

		/**
		 * Get the field @c stream.
		 */
		const OpNs4pluginsMessages_MessageSet::PluginStream & GetStream() const
		{
			return protobuf_data.GetStream();
		}

		/**
		 * Set the field @c stream.
		 */
		OpNs4pluginsMessages_MessageSet::PluginStream & GetStreamRef();

		/**
		 * Check if the field @c seekable is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasSeekable() const
		{
			return protobuf_data.HasSeekable();
		}

		/**
		 * Get the field @c seekable.
		 */
		BOOL GetSeekable() const
		{
			return protobuf_data.GetSeekable();
		}

		/**
		 * Set the field @c seekable.
		 */
		void SetSeekable(BOOL v)
		{
			protobuf_data.SetSeekable(v);
		}

		/**
		 * Check if the field @c streamType is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasStreamType() const
		{
			return protobuf_data.HasStreamType();
		}

		/**
		 * Get the field @c streamType.
		 */
		INT32 GetStreamType() const
		{
			return protobuf_data.GetStreamType();
		}

		/**
		 * Set the field @c streamType.
		 */
		void SetStreamType(INT32 v)
		{
			protobuf_data.SetStreamType(v);
		}



	protected:

		OpPluginNewStreamMessage(
				const OpMessageAddress& src,
				const OpMessageAddress& dst,
				double delay
				, const UniString & content_type_arg = UniString()
				, BOOL seekable_arg = FALSE
				, INT32 stream_type_arg = 0
				)
			: OpTypedMessage(Type, src, dst, delay)
			, protobuf_data(content_type_arg, seekable_arg, stream_type_arg)
		{
		}



		OP_STATUS Construct(

		)
		{
			return protobuf_data.Construct();
		}

	private:
		OpNs4pluginsMessages_MessageSet::PluginNewStream protobuf_data;
	};


	/**
	 * Response to PluginNewStream.
	 * 
	 * @field npError Return value of NPP_NewStream.
	 * @field streamType Side-channel return value of NPP_NewStream. Should be a
	 *        copy of PluginNewStream::streamType if it has not been changed.
	 */
	class OpPluginNewStreamResponseMessage
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
		static const unsigned Type = 1455138639u;

		virtual ~OpPluginNewStreamResponseMessage();



		static OpPluginNewStreamResponseMessage* Create(
			const OpMessageAddress& src,
			const OpMessageAddress& dst = OpMessageAddress(),
			double delay = 0)
		{
			return OP_NEW(OpPluginNewStreamResponseMessage, (src, dst, delay));
		}

		static OpPluginNewStreamResponseMessage* Create(
			INT32 np_error_arg = 0,
			INT32 stream_type_arg = 0,
			const OpMessageAddress& src = OpMessageAddress(),
			const OpMessageAddress& dst = OpMessageAddress(),
			double delay = 0)
		{
			OpPluginNewStreamResponseMessage *obj = OP_NEW(OpPluginNewStreamResponseMessage, (src, dst, delay, np_error_arg, stream_type_arg));
			if (obj)
			{
				if (OpStatus::IsSuccess(obj->Construct()))
					return obj;

				OP_DELETE(obj);
			}
			return NULL;
		}

		static OpPluginNewStreamResponseMessage* Cast(const OpTypedMessage* msg);

		static OpPluginNewStreamResponseMessage* Deserialize(
			const OpMessageAddress& src,
			const OpMessageAddress& dst,
			double delay,
			const OpData& data);

		virtual OP_STATUS Serialize(OpData& data) const;

		virtual const char *GetTypeString() const;

		// Accessors/modifiers comes here
		/**
		 * Check if the field @c npError is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasNpError() const
		{
			return protobuf_data.HasNpError();
		}

		/**
		 * Get the field @c npError.
		 */
		INT32 GetNpError() const
		{
			return protobuf_data.GetNpError();
		}

		/**
		 * Set the field @c npError.
		 */
		void SetNpError(INT32 v)
		{
			protobuf_data.SetNpError(v);
		}

		/**
		 * Check if the field @c streamType is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasStreamType() const
		{
			return protobuf_data.HasStreamType();
		}

		/**
		 * Get the field @c streamType.
		 */
		INT32 GetStreamType() const
		{
			return protobuf_data.GetStreamType();
		}

		/**
		 * Set the field @c streamType.
		 */
		void SetStreamType(INT32 v)
		{
			protobuf_data.SetStreamType(v);
		}



	protected:

		OpPluginNewStreamResponseMessage(
				const OpMessageAddress& src,
				const OpMessageAddress& dst,
				double delay
				, INT32 np_error_arg = 0
				, INT32 stream_type_arg = 0
				)
			: OpTypedMessage(Type, src, dst, delay)
			, protobuf_data(np_error_arg, stream_type_arg)
		{
		}



		OP_STATUS Construct(

		)
		{
			return protobuf_data.Construct();
		}

	private:
		OpNs4pluginsMessages_MessageSet::PluginNewStreamResponse protobuf_data;
	};


	/**
	 * Notify plug-in of URL request completion.
	 * 
	 * @field URL The URL whose data was requested.
	 * @field reason The reason for the completion.
	 * @field notifyData The user data previously submitted.
	 * 
	 * @return PluginError.
	 */
	class OpPluginNotifyMessage
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
		static const unsigned Type = 2921500231u;

		virtual ~OpPluginNotifyMessage();



		static OpPluginNotifyMessage* Create(
			const OpMessageAddress& src,
			const OpMessageAddress& dst = OpMessageAddress(),
			double delay = 0)
		{
			return OP_NEW(OpPluginNotifyMessage, (src, dst, delay));
		}

		static OpPluginNotifyMessage* Create(
			const UniString & url_arg = UniString(),
			INT32 reason_arg = 0,
			UINT64 notify_data_arg = 0,
			const OpMessageAddress& src = OpMessageAddress(),
			const OpMessageAddress& dst = OpMessageAddress(),
			double delay = 0)
		{
			OpPluginNotifyMessage *obj = OP_NEW(OpPluginNotifyMessage, (src, dst, delay, url_arg, reason_arg, notify_data_arg));
			if (obj)
			{
				if (OpStatus::IsSuccess(obj->Construct()))
					return obj;

				OP_DELETE(obj);
			}
			return NULL;
		}

		static OpPluginNotifyMessage* Cast(const OpTypedMessage* msg);

		static OpPluginNotifyMessage* Deserialize(
			const OpMessageAddress& src,
			const OpMessageAddress& dst,
			double delay,
			const OpData& data);

		virtual OP_STATUS Serialize(OpData& data) const;

		virtual const char *GetTypeString() const;

		// Accessors/modifiers comes here
		/**
		 * Check if the field @c URL is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasURL() const
		{
			return protobuf_data.HasURL();
		}

		/**
		 * Get the field @c URL.
		 */
		const UniString & GetURL() const
		{
			return protobuf_data.GetURL();
		}

		/**
		 * Set the field @c URL.
		 */
		OP_STATUS SetURL(const UniString & v);

		/**
		 * Set the field @c URL.
		 */
		OP_STATUS SetURL(const uni_char * v, int l = KAll);

		/**
		 * Check if the field @c reason is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasReason() const
		{
			return protobuf_data.HasReason();
		}

		/**
		 * Get the field @c reason.
		 */
		INT32 GetReason() const
		{
			return protobuf_data.GetReason();
		}

		/**
		 * Set the field @c reason.
		 */
		void SetReason(INT32 v)
		{
			protobuf_data.SetReason(v);
		}

		/**
		 * Check if the field @c notifyData is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasNotifyData() const
		{
			return protobuf_data.HasNotifyData();
		}

		/**
		 * Get the field @c notifyData.
		 */
		UINT64 GetNotifyData() const
		{
			return protobuf_data.GetNotifyData();
		}

		/**
		 * Set the field @c notifyData.
		 */
		void SetNotifyData(UINT64 v)
		{
			protobuf_data.SetNotifyData(v);
		}



	protected:

		OpPluginNotifyMessage(
				const OpMessageAddress& src,
				const OpMessageAddress& dst,
				double delay
				, const UniString & url_arg = UniString()
				, INT32 reason_arg = 0
				, UINT64 notify_data_arg = 0
				)
			: OpTypedMessage(Type, src, dst, delay)
			, protobuf_data(url_arg, reason_arg, notify_data_arg)
		{
		}



		OP_STATUS Construct(

		)
		{
			return protobuf_data.Construct();
		}

	private:
		OpNs4pluginsMessages_MessageSet::PluginNotify protobuf_data;
	};


	/**
	 * Construct EcmaScript object.
	 * 
	 * @field object Object to construct instance of.
	 * @field arguments Constructor arguments.
	 * @field context The scripting context in which this request is made. See PluginHandler::PushScriptingContext().
	 * 
	 * @return PluginResult.
	 */
	class OpPluginObjectConstructMessage
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
		static const unsigned Type = 2654016233u;

		virtual ~OpPluginObjectConstructMessage();

		static OpPluginObjectConstructMessage* Create()
		{
		    OpMessageAddress src;
		    OpMessageAddress dst;
		    double delay = 0;
		    return OP_NEW(OpPluginObjectConstructMessage, (src, dst, delay));
		}

		static OpPluginObjectConstructMessage* Create(
			const OpMessageAddress& src,
			const OpMessageAddress& dst = OpMessageAddress(),
			double delay = 0)
		{
			return OP_NEW(OpPluginObjectConstructMessage, (src, dst, delay));
		}



		static OpPluginObjectConstructMessage* Cast(const OpTypedMessage* msg);

		static OpPluginObjectConstructMessage* Deserialize(
			const OpMessageAddress& src,
			const OpMessageAddress& dst,
			double delay,
			const OpData& data);

		virtual OP_STATUS Serialize(OpData& data) const;

		virtual const char *GetTypeString() const;

		// Accessors/modifiers comes here
		/**
		 * Check if the field @c object is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasObject() const
		{
			return protobuf_data.HasObject();
		}

		/**
		 * Get the field @c object.
		 */
		const OpNs4pluginsMessages_MessageSet::PluginObject & GetObject() const
		{
			return protobuf_data.GetObject();
		}

		/**
		 * Set the field @c object.
		 */
		OpNs4pluginsMessages_MessageSet::PluginObject & GetObjectRef();

		/**
		 * Check if the field @c arguments is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasArguments() const
		{
			return protobuf_data.HasArguments();
		}

		/**
		 * Get the field @c arguments.
		 */
		const OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginVariant> & GetArguments() const
		{
			return protobuf_data.GetArguments();
		}

		/**
		 * Set the field @c arguments.
		 */
		OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginVariant> & GetArgumentsRef();

		/**
		 * Check if the field @c context is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasContext() const
		{
			return protobuf_data.HasContext();
		}

		/**
		 * Get the field @c context.
		 */
		UINT32 GetContext() const
		{
			return protobuf_data.GetContext();
		}

		/**
		 * Set the field @c context.
		 */
		void SetContext(UINT32 v)
		{
			protobuf_data.SetContext(v);
		}



	protected:

		OpPluginObjectConstructMessage(
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
		OpNs4pluginsMessages_MessageSet::PluginObjectConstruct protobuf_data;
	};


	/**
	 * Call NPObject class method 'deallocate'.
	 * 
	 * @field object Object on which to invoke deallocate.
	 * 
	 * @return None.
	 */
	class OpPluginObjectDeallocateMessage
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
		static const unsigned Type = 148205840u;

		virtual ~OpPluginObjectDeallocateMessage();

		static OpPluginObjectDeallocateMessage* Create()
		{
		    OpMessageAddress src;
		    OpMessageAddress dst;
		    double delay = 0;
		    return OP_NEW(OpPluginObjectDeallocateMessage, (src, dst, delay));
		}

		static OpPluginObjectDeallocateMessage* Create(
			const OpMessageAddress& src,
			const OpMessageAddress& dst = OpMessageAddress(),
			double delay = 0)
		{
			return OP_NEW(OpPluginObjectDeallocateMessage, (src, dst, delay));
		}



		static OpPluginObjectDeallocateMessage* Cast(const OpTypedMessage* msg);

		static OpPluginObjectDeallocateMessage* Deserialize(
			const OpMessageAddress& src,
			const OpMessageAddress& dst,
			double delay,
			const OpData& data);

		virtual OP_STATUS Serialize(OpData& data) const;

		virtual const char *GetTypeString() const;

		// Accessors/modifiers comes here
		/**
		 * Check if the field @c object is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasObject() const
		{
			return protobuf_data.HasObject();
		}

		/**
		 * Get the field @c object.
		 */
		const OpNs4pluginsMessages_MessageSet::PluginObject & GetObject() const
		{
			return protobuf_data.GetObject();
		}

		/**
		 * Set the field @c object.
		 */
		OpNs4pluginsMessages_MessageSet::PluginObject & GetObjectRef();



	protected:

		OpPluginObjectDeallocateMessage(
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
		OpNs4pluginsMessages_MessageSet::PluginObjectDeallocate protobuf_data;
	};


	/**
	 * Enumerate properties of an EcmaScript object.
	 * 
	 * @field object Object to enumerate properties of.
	 * @field context The scripting context in which this request is made. See PluginHandler::PushScriptingContext().
	 * 
	 * @return PluginObjectEnumerateResponse.
	 */
	class OpPluginObjectEnumerateMessage
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
		static const unsigned Type = 1410912728u;

		virtual ~OpPluginObjectEnumerateMessage();

		static OpPluginObjectEnumerateMessage* Create()
		{
		    OpMessageAddress src;
		    OpMessageAddress dst;
		    double delay = 0;
		    return OP_NEW(OpPluginObjectEnumerateMessage, (src, dst, delay));
		}

		static OpPluginObjectEnumerateMessage* Create(
			const OpMessageAddress& src,
			const OpMessageAddress& dst = OpMessageAddress(),
			double delay = 0)
		{
			return OP_NEW(OpPluginObjectEnumerateMessage, (src, dst, delay));
		}



		static OpPluginObjectEnumerateMessage* Cast(const OpTypedMessage* msg);

		static OpPluginObjectEnumerateMessage* Deserialize(
			const OpMessageAddress& src,
			const OpMessageAddress& dst,
			double delay,
			const OpData& data);

		virtual OP_STATUS Serialize(OpData& data) const;

		virtual const char *GetTypeString() const;

		// Accessors/modifiers comes here
		/**
		 * Check if the field @c object is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasObject() const
		{
			return protobuf_data.HasObject();
		}

		/**
		 * Get the field @c object.
		 */
		const OpNs4pluginsMessages_MessageSet::PluginObject & GetObject() const
		{
			return protobuf_data.GetObject();
		}

		/**
		 * Set the field @c object.
		 */
		OpNs4pluginsMessages_MessageSet::PluginObject & GetObjectRef();

		/**
		 * Check if the field @c context is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasContext() const
		{
			return protobuf_data.HasContext();
		}

		/**
		 * Get the field @c context.
		 */
		UINT32 GetContext() const
		{
			return protobuf_data.GetContext();
		}

		/**
		 * Set the field @c context.
		 */
		void SetContext(UINT32 v)
		{
			protobuf_data.SetContext(v);
		}



	protected:

		OpPluginObjectEnumerateMessage(
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
		OpNs4pluginsMessages_MessageSet::PluginObjectEnumerate protobuf_data;
	};


	/**
	 * Response to PluginObjectEnumerate.
	 * 
	 * @field success true if successful, false otherwise.
	 * @field properties Enumerated properties.
	 */
	class OpPluginObjectEnumerateResponseMessage
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
		static const unsigned Type = 1029170440u;

		virtual ~OpPluginObjectEnumerateResponseMessage();



		static OpPluginObjectEnumerateResponseMessage* Create(
			const OpMessageAddress& src,
			const OpMessageAddress& dst = OpMessageAddress(),
			double delay = 0)
		{
			return OP_NEW(OpPluginObjectEnumerateResponseMessage, (src, dst, delay));
		}

		static OpPluginObjectEnumerateResponseMessage* Create(
			BOOL success_arg = FALSE,
			const OpMessageAddress& src = OpMessageAddress(),
			const OpMessageAddress& dst = OpMessageAddress(),
			double delay = 0)
		{
			OpPluginObjectEnumerateResponseMessage *obj = OP_NEW(OpPluginObjectEnumerateResponseMessage, (src, dst, delay, success_arg));
			if (obj)
			{
				if (OpStatus::IsSuccess(obj->Construct()))
					return obj;

				OP_DELETE(obj);
			}
			return NULL;
		}

		static OpPluginObjectEnumerateResponseMessage* Cast(const OpTypedMessage* msg);

		static OpPluginObjectEnumerateResponseMessage* Deserialize(
			const OpMessageAddress& src,
			const OpMessageAddress& dst,
			double delay,
			const OpData& data);

		virtual OP_STATUS Serialize(OpData& data) const;

		virtual const char *GetTypeString() const;

		// Accessors/modifiers comes here
		/**
		 * Check if the field @c success is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasSuccess() const
		{
			return protobuf_data.HasSuccess();
		}

		/**
		 * Get the field @c success.
		 */
		BOOL GetSuccess() const
		{
			return protobuf_data.GetSuccess();
		}

		/**
		 * Set the field @c success.
		 */
		void SetSuccess(BOOL v)
		{
			protobuf_data.SetSuccess(v);
		}

		/**
		 * Check if the field @c properties is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasProperties() const
		{
			return protobuf_data.HasProperties();
		}

		/**
		 * Get the field @c properties.
		 */
		const OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginIdentifier> & GetProperties() const
		{
			return protobuf_data.GetProperties();
		}

		/**
		 * Set the field @c properties.
		 */
		OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginIdentifier> & GetPropertiesRef();



	protected:

		OpPluginObjectEnumerateResponseMessage(
				const OpMessageAddress& src,
				const OpMessageAddress& dst,
				double delay
				, BOOL success_arg = FALSE
				)
			: OpTypedMessage(Type, src, dst, delay)
			, protobuf_data(success_arg)
		{
		}



		OP_STATUS Construct(

		)
		{
			return protobuf_data.Construct();
		}

	private:
		OpNs4pluginsMessages_MessageSet::PluginObjectEnumerateResponse protobuf_data;
	};


	/**
	 * Call NPObject class method 'invalidate'.
	 * 
	 * @field object Object on which to invoke invalidate.
	 * 
	 * @return None.
	 */
	class OpPluginObjectInvalidateMessage
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
		static const unsigned Type = 2051076246u;

		virtual ~OpPluginObjectInvalidateMessage();

		static OpPluginObjectInvalidateMessage* Create()
		{
		    OpMessageAddress src;
		    OpMessageAddress dst;
		    double delay = 0;
		    return OP_NEW(OpPluginObjectInvalidateMessage, (src, dst, delay));
		}

		static OpPluginObjectInvalidateMessage* Create(
			const OpMessageAddress& src,
			const OpMessageAddress& dst = OpMessageAddress(),
			double delay = 0)
		{
			return OP_NEW(OpPluginObjectInvalidateMessage, (src, dst, delay));
		}



		static OpPluginObjectInvalidateMessage* Cast(const OpTypedMessage* msg);

		static OpPluginObjectInvalidateMessage* Deserialize(
			const OpMessageAddress& src,
			const OpMessageAddress& dst,
			double delay,
			const OpData& data);

		virtual OP_STATUS Serialize(OpData& data) const;

		virtual const char *GetTypeString() const;

		// Accessors/modifiers comes here
		/**
		 * Check if the field @c object is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasObject() const
		{
			return protobuf_data.HasObject();
		}

		/**
		 * Get the field @c object.
		 */
		const OpNs4pluginsMessages_MessageSet::PluginObject & GetObject() const
		{
			return protobuf_data.GetObject();
		}

		/**
		 * Set the field @c object.
		 */
		OpNs4pluginsMessages_MessageSet::PluginObject & GetObjectRef();



	protected:

		OpPluginObjectInvalidateMessage(
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
		OpNs4pluginsMessages_MessageSet::PluginObjectInvalidate protobuf_data;
	};


	/**
	 * Update the reference count of an NPObject.
	 * 
	 * Sent by the browser to the plug-in component when the reference count of an
	 * object changes.
	 * 
	 * @field object Object whose reference count has changed.
	 */
	class OpPluginObjectStateMessage
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
		static const unsigned Type = 1731289058u;

		virtual ~OpPluginObjectStateMessage();

		static OpPluginObjectStateMessage* Create()
		{
		    OpMessageAddress src;
		    OpMessageAddress dst;
		    double delay = 0;
		    return OP_NEW(OpPluginObjectStateMessage, (src, dst, delay));
		}

		static OpPluginObjectStateMessage* Create(
			const OpMessageAddress& src,
			const OpMessageAddress& dst = OpMessageAddress(),
			double delay = 0)
		{
			return OP_NEW(OpPluginObjectStateMessage, (src, dst, delay));
		}



		static OpPluginObjectStateMessage* Cast(const OpTypedMessage* msg);

		static OpPluginObjectStateMessage* Deserialize(
			const OpMessageAddress& src,
			const OpMessageAddress& dst,
			double delay,
			const OpData& data);

		virtual OP_STATUS Serialize(OpData& data) const;

		virtual const char *GetTypeString() const;

		// Accessors/modifiers comes here
		/**
		 * Check if the field @c object is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasObject() const
		{
			return protobuf_data.HasObject();
		}

		/**
		 * Get the field @c object.
		 */
		const OpNs4pluginsMessages_MessageSet::PluginObject & GetObject() const
		{
			return protobuf_data.GetObject();
		}

		/**
		 * Set the field @c object.
		 */
		OpNs4pluginsMessages_MessageSet::PluginObject & GetObjectRef();



	protected:

		OpPluginObjectStateMessage(
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
		OpNs4pluginsMessages_MessageSet::PluginObjectState protobuf_data;
	};


	/**
	 * Send a platform specific event to a plug-in.
	 * 
	 * This message may only be sent internally in one process.
	 * 
	 * The purpose of this message is to allow platform code to send platform-specific
	 * messages to plug-ins at arbitrary times, and still allow core to track and
	 * control NPAPI interaction.
	 * 
	 * The latter supervisory requirement exists to allow us to ensure that only one
	 * event is handled at a time, that we know that we have plug-in code on the stack
	 * and may not delete the plug-in directly, and also makes it possible to prevent
	 * an event from being handed to the plug-in if the plug-in has been destroyed or
	 * may not receive events for other reasons.
	 * 
	 * @field event Pointer to object of type OpPlatformEvent. Receiver assumes ownership
	 *        and will OP_DELETE() the object after delivering the event it contains.
	 * 
	 * @return PluginWindowlessHandleEventResponse.
	 */
	class OpPluginPlatformEventMessage
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
		static const unsigned Type = 1397087916u;

		virtual ~OpPluginPlatformEventMessage();



		static OpPluginPlatformEventMessage* Create(
			const OpMessageAddress& src,
			const OpMessageAddress& dst = OpMessageAddress(),
			double delay = 0)
		{
			return OP_NEW(OpPluginPlatformEventMessage, (src, dst, delay));
		}

		static OpPluginPlatformEventMessage* Create(
			UINT64 event_arg = 0,
			const OpMessageAddress& src = OpMessageAddress(),
			const OpMessageAddress& dst = OpMessageAddress(),
			double delay = 0)
		{
			OpPluginPlatformEventMessage *obj = OP_NEW(OpPluginPlatformEventMessage, (src, dst, delay, event_arg));
			if (obj)
			{
				if (OpStatus::IsSuccess(obj->Construct()))
					return obj;

				OP_DELETE(obj);
			}
			return NULL;
		}

		static OpPluginPlatformEventMessage* Cast(const OpTypedMessage* msg);

		static OpPluginPlatformEventMessage* Deserialize(
			const OpMessageAddress& src,
			const OpMessageAddress& dst,
			double delay,
			const OpData& data);

		virtual OP_STATUS Serialize(OpData& data) const;

		virtual const char *GetTypeString() const;

		// Accessors/modifiers comes here
		/**
		 * Check if the field @c event is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasEvent() const
		{
			return protobuf_data.HasEvent();
		}

		/**
		 * Get the field @c event.
		 */
		UINT64 GetEvent() const
		{
			return protobuf_data.GetEvent();
		}

		/**
		 * Set the field @c event.
		 */
		void SetEvent(UINT64 v)
		{
			protobuf_data.SetEvent(v);
		}



	protected:

		OpPluginPlatformEventMessage(
				const OpMessageAddress& src,
				const OpMessageAddress& dst,
				double delay
				, UINT64 event_arg = 0
				)
			: OpTypedMessage(Type, src, dst, delay)
			, protobuf_data(event_arg)
		{
		}



		OP_STATUS Construct(

		)
		{
			return protobuf_data.Construct();
		}

	private:
		OpNs4pluginsMessages_MessageSet::PluginPlatformEvent protobuf_data;
	};


	/**
	 * Pop "Pop-ups enabled" state.
	 * 
	 * @return PluginError.
	 */
	class OpPluginPopPopupsEnabledMessage
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
		static const unsigned Type = 3834216587u;

		virtual ~OpPluginPopPopupsEnabledMessage();

		static OpPluginPopPopupsEnabledMessage* Create()
		{
		    OpMessageAddress src;
		    OpMessageAddress dst;
		    double delay = 0;
		    return OP_NEW(OpPluginPopPopupsEnabledMessage, (src, dst, delay));
		}

		static OpPluginPopPopupsEnabledMessage* Create(
			const OpMessageAddress& src,
			const OpMessageAddress& dst = OpMessageAddress(),
			double delay = 0)
		{
			return OP_NEW(OpPluginPopPopupsEnabledMessage, (src, dst, delay));
		}



		static OpPluginPopPopupsEnabledMessage* Cast(const OpTypedMessage* msg);

		static OpPluginPopPopupsEnabledMessage* Deserialize(
			const OpMessageAddress& src,
			const OpMessageAddress& dst,
			double delay,
			const OpData& data);

		virtual OP_STATUS Serialize(OpData& data) const;

		virtual const char *GetTypeString() const;

		// Accessors/modifiers comes here


	protected:

		OpPluginPopPopupsEnabledMessage(
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
		OpNs4pluginsMessages_MessageSet::PluginPopPopupsEnabled protobuf_data;
	};


	/**
	 * Post to URL with notification.
	 * 
	 * See NPN_PostURLNotify.
	 * 
	 * @field URL The URL to post to.
	 * @field data Data to post if toFile is false, otherwise filename whose contents to post.
	 * @field isFile Whether the data is a filename or data to be posted.
	 * @field window Target window.
	 * 
	 * @return PluginError.
	 */
	class OpPluginPostURLMessage
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
		static const unsigned Type = 848365290u;

		virtual ~OpPluginPostURLMessage();



		static OpPluginPostURLMessage* Create(
			const OpMessageAddress& src,
			const OpMessageAddress& dst = OpMessageAddress(),
			double delay = 0)
		{
			return OP_NEW(OpPluginPostURLMessage, (src, dst, delay));
		}

		static OpPluginPostURLMessage* Create(
			const OpData & url_arg = OpData(),
			const OpData & data_arg = OpData(),
			BOOL is_file_arg = FALSE,
			const OpData * window_arg = NULL,
			const OpMessageAddress& src = OpMessageAddress(),
			const OpMessageAddress& dst = OpMessageAddress(),
			double delay = 0)
		{
			OpPluginPostURLMessage *obj = OP_NEW(OpPluginPostURLMessage, (src, dst, delay, url_arg, data_arg, is_file_arg, window_arg));
			if (obj)
			{
				if (OpStatus::IsSuccess(obj->Construct()))
					return obj;

				OP_DELETE(obj);
			}
			return NULL;
		}

		static OpPluginPostURLMessage* Cast(const OpTypedMessage* msg);

		static OpPluginPostURLMessage* Deserialize(
			const OpMessageAddress& src,
			const OpMessageAddress& dst,
			double delay,
			const OpData& data);

		virtual OP_STATUS Serialize(OpData& data) const;

		virtual const char *GetTypeString() const;

		// Accessors/modifiers comes here
		/**
		 * Check if the field @c URL is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasURL() const
		{
			return protobuf_data.HasURL();
		}

		/**
		 * Get the field @c URL.
		 */
		const OpData & GetURL() const
		{
			return protobuf_data.GetURL();
		}

		/**
		 * Set the field @c URL.
		 */
		OP_STATUS SetURL(const OpData & v);

		/**
		 * Set the field @c URL.
		 */
		OP_STATUS SetURL(const char * v, int l);

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
		 * Check if the field @c isFile is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasIsFile() const
		{
			return protobuf_data.HasIsFile();
		}

		/**
		 * Get the field @c isFile.
		 */
		BOOL GetIsFile() const
		{
			return protobuf_data.GetIsFile();
		}

		/**
		 * Set the field @c isFile.
		 */
		void SetIsFile(BOOL v)
		{
			protobuf_data.SetIsFile(v);
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
		const OpData & GetWindow() const
		{
			return protobuf_data.GetWindow();
		}

		/**
		 * Set the field @c window.
		 */
		OP_STATUS SetWindow(const OpData & v);

		/**
		 * Set the field @c window.
		 */
		OP_STATUS SetWindow(const char * v, int l);



	protected:

		OpPluginPostURLMessage(
				const OpMessageAddress& src,
				const OpMessageAddress& dst,
				double delay
				, const OpData & url_arg = OpData()
				, const OpData & data_arg = OpData()
				, BOOL is_file_arg = FALSE
				, const OpData * window_arg = NULL
				)
			: OpTypedMessage(Type, src, dst, delay)
			, protobuf_data(url_arg, data_arg, is_file_arg, window_arg)
		{
		}



		OP_STATUS Construct(

		)
		{
			return protobuf_data.Construct();
		}

	private:
		OpNs4pluginsMessages_MessageSet::PluginPostURL protobuf_data;
	};


	/**
	 * Post to URL with notification.
	 * 
	 * See NPN_PostURL.
	 * 
	 * @field URL The URL to post to.
	 * @field data Data to post if toFile is false, otherwise filename whose contents to post.
	 * @field isFile Whether the data is a filename or data to be posted.
	 * @field notifyData User-defined data to be returned later.
	 * @field window Target window.
	 * 
	 * @return PluginError.
	 */
	class OpPluginPostURLNotifyMessage
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
		static const unsigned Type = 1012634245u;

		virtual ~OpPluginPostURLNotifyMessage();



		static OpPluginPostURLNotifyMessage* Create(
			const OpMessageAddress& src,
			const OpMessageAddress& dst = OpMessageAddress(),
			double delay = 0)
		{
			return OP_NEW(OpPluginPostURLNotifyMessage, (src, dst, delay));
		}

		static OpPluginPostURLNotifyMessage* Create(
			const OpData & url_arg = OpData(),
			const OpData & data_arg = OpData(),
			BOOL is_file_arg = FALSE,
			UINT64 notify_data_arg = 0,
			const OpData * window_arg = NULL,
			const OpMessageAddress& src = OpMessageAddress(),
			const OpMessageAddress& dst = OpMessageAddress(),
			double delay = 0)
		{
			OpPluginPostURLNotifyMessage *obj = OP_NEW(OpPluginPostURLNotifyMessage, (src, dst, delay, url_arg, data_arg, is_file_arg, notify_data_arg, window_arg));
			if (obj)
			{
				if (OpStatus::IsSuccess(obj->Construct()))
					return obj;

				OP_DELETE(obj);
			}
			return NULL;
		}

		static OpPluginPostURLNotifyMessage* Cast(const OpTypedMessage* msg);

		static OpPluginPostURLNotifyMessage* Deserialize(
			const OpMessageAddress& src,
			const OpMessageAddress& dst,
			double delay,
			const OpData& data);

		virtual OP_STATUS Serialize(OpData& data) const;

		virtual const char *GetTypeString() const;

		// Accessors/modifiers comes here
		/**
		 * Check if the field @c URL is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasURL() const
		{
			return protobuf_data.HasURL();
		}

		/**
		 * Get the field @c URL.
		 */
		const OpData & GetURL() const
		{
			return protobuf_data.GetURL();
		}

		/**
		 * Set the field @c URL.
		 */
		OP_STATUS SetURL(const OpData & v);

		/**
		 * Set the field @c URL.
		 */
		OP_STATUS SetURL(const char * v, int l);

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
		 * Check if the field @c isFile is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasIsFile() const
		{
			return protobuf_data.HasIsFile();
		}

		/**
		 * Get the field @c isFile.
		 */
		BOOL GetIsFile() const
		{
			return protobuf_data.GetIsFile();
		}

		/**
		 * Set the field @c isFile.
		 */
		void SetIsFile(BOOL v)
		{
			protobuf_data.SetIsFile(v);
		}

		/**
		 * Check if the field @c notifyData is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasNotifyData() const
		{
			return protobuf_data.HasNotifyData();
		}

		/**
		 * Get the field @c notifyData.
		 */
		UINT64 GetNotifyData() const
		{
			return protobuf_data.GetNotifyData();
		}

		/**
		 * Set the field @c notifyData.
		 */
		void SetNotifyData(UINT64 v)
		{
			protobuf_data.SetNotifyData(v);
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
		const OpData & GetWindow() const
		{
			return protobuf_data.GetWindow();
		}

		/**
		 * Set the field @c window.
		 */
		OP_STATUS SetWindow(const OpData & v);

		/**
		 * Set the field @c window.
		 */
		OP_STATUS SetWindow(const char * v, int l);



	protected:

		OpPluginPostURLNotifyMessage(
				const OpMessageAddress& src,
				const OpMessageAddress& dst,
				double delay
				, const OpData & url_arg = OpData()
				, const OpData & data_arg = OpData()
				, BOOL is_file_arg = FALSE
				, UINT64 notify_data_arg = 0
				, const OpData * window_arg = NULL
				)
			: OpTypedMessage(Type, src, dst, delay)
			, protobuf_data(url_arg, data_arg, is_file_arg, notify_data_arg, window_arg)
		{
		}



		OP_STATUS Construct(

		)
		{
			return protobuf_data.Construct();
		}

	private:
		OpNs4pluginsMessages_MessageSet::PluginPostURLNotify protobuf_data;
	};


	/**
	 * Find content-type, version number, name and description for a plug-in library
	 * or return error for libraries that are not valid NPAPI plug-ins.
	 * 
	 * Ns4plugins sends a PluginProbe message for each library returned by the
	 * PluginEnumerate message in order to find out which ones are actually valid
	 * NPAPI plug-ins and to build a list of which plug-ins to load for each
	 * content type.
	 * 
	 * @field path Full file system path to the library that are to be probed.
	 * 
	 * @return PluginProbeResponse or an OpStatusMessage if this library should be ignored.
	 */
	class OpPluginProbeMessage
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
		static const unsigned Type = 3953336310u;

		virtual ~OpPluginProbeMessage();



		static OpPluginProbeMessage* Create(
			const OpMessageAddress& src,
			const OpMessageAddress& dst = OpMessageAddress(),
			double delay = 0)
		{
			return OP_NEW(OpPluginProbeMessage, (src, dst, delay));
		}

		static OpPluginProbeMessage* Create(
			const UniString & path_arg = UniString(),
			const OpMessageAddress& src = OpMessageAddress(),
			const OpMessageAddress& dst = OpMessageAddress(),
			double delay = 0)
		{
			OpPluginProbeMessage *obj = OP_NEW(OpPluginProbeMessage, (src, dst, delay, path_arg));
			if (obj)
			{
				if (OpStatus::IsSuccess(obj->Construct()))
					return obj;

				OP_DELETE(obj);
			}
			return NULL;
		}

		static OpPluginProbeMessage* Cast(const OpTypedMessage* msg);

		static OpPluginProbeMessage* Deserialize(
			const OpMessageAddress& src,
			const OpMessageAddress& dst,
			double delay,
			const OpData& data);

		virtual OP_STATUS Serialize(OpData& data) const;

		virtual const char *GetTypeString() const;

		// Accessors/modifiers comes here
		/**
		 * Check if the field @c path is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasPath() const
		{
			return protobuf_data.HasPath();
		}

		/**
		 * Get the field @c path.
		 */
		const UniString & GetPath() const
		{
			return protobuf_data.GetPath();
		}

		/**
		 * Set the field @c path.
		 */
		OP_STATUS SetPath(const UniString & v);

		/**
		 * Set the field @c path.
		 */
		OP_STATUS SetPath(const uni_char * v, int l = KAll);



	protected:

		OpPluginProbeMessage(
				const OpMessageAddress& src,
				const OpMessageAddress& dst,
				double delay
				, const UniString & path_arg = UniString()
				)
			: OpTypedMessage(Type, src, dst, delay)
			, protobuf_data(path_arg)
		{
		}



		OP_STATUS Construct(

		)
		{
			return protobuf_data.Construct();
		}

	private:
		OpNs4pluginsMessages_MessageSet::PluginProbe protobuf_data;
	};


	/**
	 * Response to PluginProbe.
	 * 
	 * @field path Full file system path to the plug-in retrieved from PluginProbe.
	 * @field name Name of the plug-in.
	 * @field description Description of the plug-in.
	 * @field version Plug-in version.
	 * @field contentTypes List of content-types handled by the plug-in.
	 * 
	 * @return None.
	 */
	class OpPluginProbeResponseMessage
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
		static const unsigned Type = 2937261513u;

		virtual ~OpPluginProbeResponseMessage();



		static OpPluginProbeResponseMessage* Create(
			const OpMessageAddress& src,
			const OpMessageAddress& dst = OpMessageAddress(),
			double delay = 0)
		{
			return OP_NEW(OpPluginProbeResponseMessage, (src, dst, delay));
		}

		static OpPluginProbeResponseMessage* Create(
			const UniString & path_arg = UniString(),
			const UniString & name_arg = UniString(),
			const UniString & description_arg = UniString(),
			const UniString & version_arg = UniString(),
			const OpMessageAddress& src = OpMessageAddress(),
			const OpMessageAddress& dst = OpMessageAddress(),
			double delay = 0)
		{
			OpPluginProbeResponseMessage *obj = OP_NEW(OpPluginProbeResponseMessage, (src, dst, delay, path_arg, name_arg, description_arg, version_arg));
			if (obj)
			{
				if (OpStatus::IsSuccess(obj->Construct()))
					return obj;

				OP_DELETE(obj);
			}
			return NULL;
		}

		static OpPluginProbeResponseMessage* Cast(const OpTypedMessage* msg);

		static OpPluginProbeResponseMessage* Deserialize(
			const OpMessageAddress& src,
			const OpMessageAddress& dst,
			double delay,
			const OpData& data);

		virtual OP_STATUS Serialize(OpData& data) const;

		virtual const char *GetTypeString() const;

		// Accessors/modifiers comes here
		/**
		 * Check if the field @c path is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasPath() const
		{
			return protobuf_data.HasPath();
		}

		/**
		 * Get the field @c path.
		 */
		const UniString & GetPath() const
		{
			return protobuf_data.GetPath();
		}

		/**
		 * Set the field @c path.
		 */
		OP_STATUS SetPath(const UniString & v);

		/**
		 * Set the field @c path.
		 */
		OP_STATUS SetPath(const uni_char * v, int l = KAll);

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
		 * Check if the field @c description is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasDescription() const
		{
			return protobuf_data.HasDescription();
		}

		/**
		 * Get the field @c description.
		 */
		const UniString & GetDescription() const
		{
			return protobuf_data.GetDescription();
		}

		/**
		 * Set the field @c description.
		 */
		OP_STATUS SetDescription(const UniString & v);

		/**
		 * Set the field @c description.
		 */
		OP_STATUS SetDescription(const uni_char * v, int l = KAll);

		/**
		 * Check if the field @c version is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasVersion() const
		{
			return protobuf_data.HasVersion();
		}

		/**
		 * Get the field @c version.
		 */
		const UniString & GetVersion() const
		{
			return protobuf_data.GetVersion();
		}

		/**
		 * Set the field @c version.
		 */
		OP_STATUS SetVersion(const UniString & v);

		/**
		 * Set the field @c version.
		 */
		OP_STATUS SetVersion(const uni_char * v, int l = KAll);

		/**
		 * Check if the field @c contentTypes is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasContentTypes() const
		{
			return protobuf_data.HasContentTypes();
		}

		/**
		 * Get the field @c contentTypes.
		 */
		const OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginProbeResponse_ContentType> & GetContentTypes() const
		{
			return protobuf_data.GetContentTypes();
		}

		/**
		 * Set the field @c contentTypes.
		 */
		OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginProbeResponse_ContentType> & GetContentTypesRef();



	protected:

		OpPluginProbeResponseMessage(
				const OpMessageAddress& src,
				const OpMessageAddress& dst,
				double delay
				, const UniString & path_arg = UniString()
				, const UniString & name_arg = UniString()
				, const UniString & description_arg = UniString()
				, const UniString & version_arg = UniString()
				)
			: OpTypedMessage(Type, src, dst, delay)
			, protobuf_data(path_arg, name_arg, description_arg, version_arg)
		{
		}



		OP_STATUS Construct(

		)
		{
			return protobuf_data.Construct();
		}

	private:
		OpNs4pluginsMessages_MessageSet::PluginProbeResponse protobuf_data;
	};


	/**
	 * Push "Pop-ups enabled" state.
	 * 
	 * @field enabled If true, enable plug-in pop-ups. Otherwise disable them.
	 * 
	 * @return PluginError.
	 */
	class OpPluginPushPopupsEnabledMessage
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
		static const unsigned Type = 1203289757u;

		virtual ~OpPluginPushPopupsEnabledMessage();



		static OpPluginPushPopupsEnabledMessage* Create(
			const OpMessageAddress& src,
			const OpMessageAddress& dst = OpMessageAddress(),
			double delay = 0)
		{
			return OP_NEW(OpPluginPushPopupsEnabledMessage, (src, dst, delay));
		}

		static OpPluginPushPopupsEnabledMessage* Create(
			BOOL enabled_arg = FALSE,
			const OpMessageAddress& src = OpMessageAddress(),
			const OpMessageAddress& dst = OpMessageAddress(),
			double delay = 0)
		{
			OpPluginPushPopupsEnabledMessage *obj = OP_NEW(OpPluginPushPopupsEnabledMessage, (src, dst, delay, enabled_arg));
			if (obj)
			{
				if (OpStatus::IsSuccess(obj->Construct()))
					return obj;

				OP_DELETE(obj);
			}
			return NULL;
		}

		static OpPluginPushPopupsEnabledMessage* Cast(const OpTypedMessage* msg);

		static OpPluginPushPopupsEnabledMessage* Deserialize(
			const OpMessageAddress& src,
			const OpMessageAddress& dst,
			double delay,
			const OpData& data);

		virtual OP_STATUS Serialize(OpData& data) const;

		virtual const char *GetTypeString() const;

		// Accessors/modifiers comes here
		/**
		 * Check if the field @c enabled is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasEnabled() const
		{
			return protobuf_data.HasEnabled();
		}

		/**
		 * Get the field @c enabled.
		 */
		BOOL GetEnabled() const
		{
			return protobuf_data.GetEnabled();
		}

		/**
		 * Set the field @c enabled.
		 */
		void SetEnabled(BOOL v)
		{
			protobuf_data.SetEnabled(v);
		}



	protected:

		OpPluginPushPopupsEnabledMessage(
				const OpMessageAddress& src,
				const OpMessageAddress& dst,
				double delay
				, BOOL enabled_arg = FALSE
				)
			: OpTypedMessage(Type, src, dst, delay)
			, protobuf_data(enabled_arg)
		{
		}



		OP_STATUS Construct(

		)
		{
			return protobuf_data.Construct();
		}

	private:
		OpNs4pluginsMessages_MessageSet::PluginPushPopupsEnabled protobuf_data;
	};


	/**
	 * Request a decrement of the reference count of an NPObject.
	 * 
	 * Sent from the plug-in component on NPN_ReleaseObject.
	 * 
	 * @field object Object to decrement reference count of.
	 * 
	 * @return PluginObjectState.
	 */
	class OpPluginReleaseObjectMessage
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
		static const unsigned Type = 3600866313u;

		virtual ~OpPluginReleaseObjectMessage();

		static OpPluginReleaseObjectMessage* Create()
		{
		    OpMessageAddress src;
		    OpMessageAddress dst;
		    double delay = 0;
		    return OP_NEW(OpPluginReleaseObjectMessage, (src, dst, delay));
		}

		static OpPluginReleaseObjectMessage* Create(
			const OpMessageAddress& src,
			const OpMessageAddress& dst = OpMessageAddress(),
			double delay = 0)
		{
			return OP_NEW(OpPluginReleaseObjectMessage, (src, dst, delay));
		}



		static OpPluginReleaseObjectMessage* Cast(const OpTypedMessage* msg);

		static OpPluginReleaseObjectMessage* Deserialize(
			const OpMessageAddress& src,
			const OpMessageAddress& dst,
			double delay,
			const OpData& data);

		virtual OP_STATUS Serialize(OpData& data) const;

		virtual const char *GetTypeString() const;

		// Accessors/modifiers comes here
		/**
		 * Check if the field @c object is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasObject() const
		{
			return protobuf_data.HasObject();
		}

		/**
		 * Get the field @c object.
		 */
		const OpNs4pluginsMessages_MessageSet::PluginObject & GetObject() const
		{
			return protobuf_data.GetObject();
		}

		/**
		 * Set the field @c object.
		 */
		OpNs4pluginsMessages_MessageSet::PluginObject & GetObjectRef();



	protected:

		OpPluginReleaseObjectMessage(
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
		OpNs4pluginsMessages_MessageSet::PluginReleaseObject protobuf_data;
	};


	/**
	 * Request that the browser re-enumerate plug-in libraries.
	 * 
	 * @field reloadPages If true, all pages are reloaded once the plug-ins are reloaded. Otherwise,
	 *        they are not.
	 * 
	 * @return PluginError.
	 */
	class OpPluginReloadMessage
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
		static const unsigned Type = 769764826u;

		virtual ~OpPluginReloadMessage();



		static OpPluginReloadMessage* Create(
			const OpMessageAddress& src,
			const OpMessageAddress& dst = OpMessageAddress(),
			double delay = 0)
		{
			return OP_NEW(OpPluginReloadMessage, (src, dst, delay));
		}

		static OpPluginReloadMessage* Create(
			BOOL reload_pages_arg = FALSE,
			const OpMessageAddress& src = OpMessageAddress(),
			const OpMessageAddress& dst = OpMessageAddress(),
			double delay = 0)
		{
			OpPluginReloadMessage *obj = OP_NEW(OpPluginReloadMessage, (src, dst, delay, reload_pages_arg));
			if (obj)
			{
				if (OpStatus::IsSuccess(obj->Construct()))
					return obj;

				OP_DELETE(obj);
			}
			return NULL;
		}

		static OpPluginReloadMessage* Cast(const OpTypedMessage* msg);

		static OpPluginReloadMessage* Deserialize(
			const OpMessageAddress& src,
			const OpMessageAddress& dst,
			double delay,
			const OpData& data);

		virtual OP_STATUS Serialize(OpData& data) const;

		virtual const char *GetTypeString() const;

		// Accessors/modifiers comes here
		/**
		 * Check if the field @c reloadPages is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasReloadPages() const
		{
			return protobuf_data.HasReloadPages();
		}

		/**
		 * Get the field @c reloadPages.
		 */
		BOOL GetReloadPages() const
		{
			return protobuf_data.GetReloadPages();
		}

		/**
		 * Set the field @c reloadPages.
		 */
		void SetReloadPages(BOOL v)
		{
			protobuf_data.SetReloadPages(v);
		}



	protected:

		OpPluginReloadMessage(
				const OpMessageAddress& src,
				const OpMessageAddress& dst,
				double delay
				, BOOL reload_pages_arg = FALSE
				)
			: OpTypedMessage(Type, src, dst, delay)
			, protobuf_data(reload_pages_arg)
		{
		}



		OP_STATUS Construct(

		)
		{
			return protobuf_data.Construct();
		}

	private:
		OpNs4pluginsMessages_MessageSet::PluginReload protobuf_data;
	};


	/**
	 * Remove EcmaScript property from object.
	 * 
	 * @field object Object whose property we wish to remove the property from.
	 * @field property String identifier, name of property to remove.
	 * @field context The scripting context in which this request is made. See PluginHandler::PushScriptingContext().
	 * 
	 * @return PluginResult.
	 */
	class OpPluginRemovePropertyMessage
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
		static const unsigned Type = 1858095069u;

		virtual ~OpPluginRemovePropertyMessage();

		static OpPluginRemovePropertyMessage* Create()
		{
		    OpMessageAddress src;
		    OpMessageAddress dst;
		    double delay = 0;
		    return OP_NEW(OpPluginRemovePropertyMessage, (src, dst, delay));
		}

		static OpPluginRemovePropertyMessage* Create(
			const OpMessageAddress& src,
			const OpMessageAddress& dst = OpMessageAddress(),
			double delay = 0)
		{
			return OP_NEW(OpPluginRemovePropertyMessage, (src, dst, delay));
		}



		static OpPluginRemovePropertyMessage* Cast(const OpTypedMessage* msg);

		static OpPluginRemovePropertyMessage* Deserialize(
			const OpMessageAddress& src,
			const OpMessageAddress& dst,
			double delay,
			const OpData& data);

		virtual OP_STATUS Serialize(OpData& data) const;

		virtual const char *GetTypeString() const;

		// Accessors/modifiers comes here
		/**
		 * Check if the field @c object is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasObject() const
		{
			return protobuf_data.HasObject();
		}

		/**
		 * Get the field @c object.
		 */
		const OpNs4pluginsMessages_MessageSet::PluginObject & GetObject() const
		{
			return protobuf_data.GetObject();
		}

		/**
		 * Set the field @c object.
		 */
		OpNs4pluginsMessages_MessageSet::PluginObject & GetObjectRef();

		/**
		 * Check if the field @c property is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasProperty() const
		{
			return protobuf_data.HasProperty();
		}

		/**
		 * Get the field @c property.
		 */
		const OpNs4pluginsMessages_MessageSet::PluginIdentifier & GetProperty() const
		{
			return protobuf_data.GetProperty();
		}

		/**
		 * Set the field @c property.
		 */
		OpNs4pluginsMessages_MessageSet::PluginIdentifier & GetPropertyRef();

		/**
		 * Check if the field @c context is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasContext() const
		{
			return protobuf_data.HasContext();
		}

		/**
		 * Get the field @c context.
		 */
		UINT32 GetContext() const
		{
			return protobuf_data.GetContext();
		}

		/**
		 * Set the field @c context.
		 */
		void SetContext(UINT32 v)
		{
			protobuf_data.SetContext(v);
		}



	protected:

		OpPluginRemovePropertyMessage(
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
		OpNs4pluginsMessages_MessageSet::PluginRemoveProperty protobuf_data;
	};


	/**
	 * Response to NPRuntime requests.
	 * 
	 * @field success true if successful, false otherwise.
	 * @field result PluginVariant value returned by request, if applicable.
	 */
	class OpPluginResultMessage
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
		static const unsigned Type = 2620629660u;

		virtual ~OpPluginResultMessage();



		static OpPluginResultMessage* Create(
			const OpMessageAddress& src,
			const OpMessageAddress& dst = OpMessageAddress(),
			double delay = 0)
		{
			return OP_NEW(OpPluginResultMessage, (src, dst, delay));
		}

		static OpPluginResultMessage* Create(
			BOOL success_arg = FALSE,
			const OpMessageAddress& src = OpMessageAddress(),
			const OpMessageAddress& dst = OpMessageAddress(),
			double delay = 0)
		{
			OpPluginResultMessage *obj = OP_NEW(OpPluginResultMessage, (src, dst, delay, success_arg));
			if (obj)
			{
				if (OpStatus::IsSuccess(obj->Construct()))
					return obj;

				OP_DELETE(obj);
			}
			return NULL;
		}

		static OpPluginResultMessage* Cast(const OpTypedMessage* msg);

		static OpPluginResultMessage* Deserialize(
			const OpMessageAddress& src,
			const OpMessageAddress& dst,
			double delay,
			const OpData& data);

		virtual OP_STATUS Serialize(OpData& data) const;

		virtual const char *GetTypeString() const;

		// Accessors/modifiers comes here
		/**
		 * Check if the field @c success is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasSuccess() const
		{
			return protobuf_data.HasSuccess();
		}

		/**
		 * Get the field @c success.
		 */
		BOOL GetSuccess() const
		{
			return protobuf_data.GetSuccess();
		}

		/**
		 * Set the field @c success.
		 */
		void SetSuccess(BOOL v)
		{
			protobuf_data.SetSuccess(v);
		}

		/**
		 * Check if the field @c result is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasResult() const
		{
			return protobuf_data.HasResult();
		}

		/**
		 * Get the field @c result.
		 */
		OpNs4pluginsMessages_MessageSet::PluginVariant * GetResult() const
		{
			return protobuf_data.GetResult();
		}

		/**
		 * Set the field @c result.
		 */
		void SetResult(OpNs4pluginsMessages_MessageSet::PluginVariant * v);



	protected:

		OpPluginResultMessage(
				const OpMessageAddress& src,
				const OpMessageAddress& dst,
				double delay
				, BOOL success_arg = FALSE
				)
			: OpTypedMessage(Type, src, dst, delay)
			, protobuf_data(success_arg)
		{
		}



		OP_STATUS Construct(

		)
		{
			return protobuf_data.Construct();
		}

	private:
		OpNs4pluginsMessages_MessageSet::PluginResult protobuf_data;
	};


	/**
	 * Request an increment of the reference count of an NPObject.
	 * 
	 * Sent from the plug-in component on NPN_RetainObject.
	 * 
	 * @field object Object to increment reference count of.
	 * 
	 * @return None.
	 */
	class OpPluginRetainObjectMessage
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
		static const unsigned Type = 1097557807u;

		virtual ~OpPluginRetainObjectMessage();

		static OpPluginRetainObjectMessage* Create()
		{
		    OpMessageAddress src;
		    OpMessageAddress dst;
		    double delay = 0;
		    return OP_NEW(OpPluginRetainObjectMessage, (src, dst, delay));
		}

		static OpPluginRetainObjectMessage* Create(
			const OpMessageAddress& src,
			const OpMessageAddress& dst = OpMessageAddress(),
			double delay = 0)
		{
			return OP_NEW(OpPluginRetainObjectMessage, (src, dst, delay));
		}



		static OpPluginRetainObjectMessage* Cast(const OpTypedMessage* msg);

		static OpPluginRetainObjectMessage* Deserialize(
			const OpMessageAddress& src,
			const OpMessageAddress& dst,
			double delay,
			const OpData& data);

		virtual OP_STATUS Serialize(OpData& data) const;

		virtual const char *GetTypeString() const;

		// Accessors/modifiers comes here
		/**
		 * Check if the field @c object is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasObject() const
		{
			return protobuf_data.HasObject();
		}

		/**
		 * Get the field @c object.
		 */
		const OpNs4pluginsMessages_MessageSet::PluginObject & GetObject() const
		{
			return protobuf_data.GetObject();
		}

		/**
		 * Set the field @c object.
		 */
		OpNs4pluginsMessages_MessageSet::PluginObject & GetObjectRef();



	protected:

		OpPluginRetainObjectMessage(
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
		OpNs4pluginsMessages_MessageSet::PluginRetainObject protobuf_data;
	};


	/**
	 * Set EcmaScript object property.
	 * 
	 * @field property String identifier, name of property to set.
	 * @field object Object whose property we wish to set.
	 * @field value Value to set.
	 * @field context The scripting context in which this request is made. See PluginHandler::PushScriptingContext().
	 * 
	 * @return PluginResult.
	 */
	class OpPluginSetPropertyMessage
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
		static const unsigned Type = 1144231687u;

		virtual ~OpPluginSetPropertyMessage();

		static OpPluginSetPropertyMessage* Create()
		{
		    OpMessageAddress src;
		    OpMessageAddress dst;
		    double delay = 0;
		    return OP_NEW(OpPluginSetPropertyMessage, (src, dst, delay));
		}

		static OpPluginSetPropertyMessage* Create(
			const OpMessageAddress& src,
			const OpMessageAddress& dst = OpMessageAddress(),
			double delay = 0)
		{
			return OP_NEW(OpPluginSetPropertyMessage, (src, dst, delay));
		}



		static OpPluginSetPropertyMessage* Cast(const OpTypedMessage* msg);

		static OpPluginSetPropertyMessage* Deserialize(
			const OpMessageAddress& src,
			const OpMessageAddress& dst,
			double delay,
			const OpData& data);

		virtual OP_STATUS Serialize(OpData& data) const;

		virtual const char *GetTypeString() const;

		// Accessors/modifiers comes here
		/**
		 * Check if the field @c property is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasProperty() const
		{
			return protobuf_data.HasProperty();
		}

		/**
		 * Get the field @c property.
		 */
		const OpNs4pluginsMessages_MessageSet::PluginIdentifier & GetProperty() const
		{
			return protobuf_data.GetProperty();
		}

		/**
		 * Set the field @c property.
		 */
		OpNs4pluginsMessages_MessageSet::PluginIdentifier & GetPropertyRef();

		/**
		 * Check if the field @c object is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasObject() const
		{
			return protobuf_data.HasObject();
		}

		/**
		 * Get the field @c object.
		 */
		const OpNs4pluginsMessages_MessageSet::PluginObject & GetObject() const
		{
			return protobuf_data.GetObject();
		}

		/**
		 * Set the field @c object.
		 */
		OpNs4pluginsMessages_MessageSet::PluginObject & GetObjectRef();

		/**
		 * Check if the field @c value is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasValue() const
		{
			return protobuf_data.HasValue();
		}

		/**
		 * Get the field @c value.
		 */
		const OpNs4pluginsMessages_MessageSet::PluginVariant & GetValue() const
		{
			return protobuf_data.GetValue();
		}

		/**
		 * Set the field @c value.
		 */
		OpNs4pluginsMessages_MessageSet::PluginVariant & GetValueRef();

		/**
		 * Check if the field @c context is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasContext() const
		{
			return protobuf_data.HasContext();
		}

		/**
		 * Get the field @c context.
		 */
		UINT32 GetContext() const
		{
			return protobuf_data.GetContext();
		}

		/**
		 * Set the field @c context.
		 */
		void SetContext(UINT32 v)
		{
			protobuf_data.SetContext(v);
		}



	protected:

		OpPluginSetPropertyMessage(
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
		OpNs4pluginsMessages_MessageSet::PluginSetProperty protobuf_data;
	};


	/**
	 * Set a value.
	 * 
	 * This message can be sent from the browser to the plug-in when the browser
	 * requires the use of NPP_SetValue, and from the plug-in to the browser when
	 * the plug-in calls NPN_Setvalue.
	 * 
	 * @field variable Numeric variable identifier.
	 * @field objectValue The NPObject to be set, if applicable.
	 * @field integerValue The integer value to be set, if applicable.
	 * @field booleanValue The boolean value to be set, if applicable.
	 * 
	 * @return PluginError.
	 */
	class OpPluginSetValueMessage
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
		static const unsigned Type = 2096422557u;

		virtual ~OpPluginSetValueMessage();



		static OpPluginSetValueMessage* Create(
			const OpMessageAddress& src,
			const OpMessageAddress& dst = OpMessageAddress(),
			double delay = 0)
		{
			return OP_NEW(OpPluginSetValueMessage, (src, dst, delay));
		}

		static OpPluginSetValueMessage* Create(
			INT32 variable_arg = 0,
			const OpMessageAddress& src = OpMessageAddress(),
			const OpMessageAddress& dst = OpMessageAddress(),
			double delay = 0)
		{
			OpPluginSetValueMessage *obj = OP_NEW(OpPluginSetValueMessage, (src, dst, delay, variable_arg));
			if (obj)
			{
				if (OpStatus::IsSuccess(obj->Construct()))
					return obj;

				OP_DELETE(obj);
			}
			return NULL;
		}

		static OpPluginSetValueMessage* Cast(const OpTypedMessage* msg);

		static OpPluginSetValueMessage* Deserialize(
			const OpMessageAddress& src,
			const OpMessageAddress& dst,
			double delay,
			const OpData& data);

		virtual OP_STATUS Serialize(OpData& data) const;

		virtual const char *GetTypeString() const;

		// Accessors/modifiers comes here
		/**
		 * Check if the field @c variable is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasVariable() const
		{
			return protobuf_data.HasVariable();
		}

		/**
		 * Get the field @c variable.
		 */
		INT32 GetVariable() const
		{
			return protobuf_data.GetVariable();
		}

		/**
		 * Set the field @c variable.
		 */
		void SetVariable(INT32 v)
		{
			protobuf_data.SetVariable(v);
		}

		/**
		 * Check if the field @c objectValue is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasObjectValue() const
		{
			return protobuf_data.HasObjectValue();
		}

		/**
		 * Get the field @c objectValue.
		 */
		OpNs4pluginsMessages_MessageSet::PluginObject * GetObjectValue() const
		{
			return protobuf_data.GetObjectValue();
		}

		/**
		 * Set the field @c objectValue.
		 */
		void SetObjectValue(OpNs4pluginsMessages_MessageSet::PluginObject * v);

		/**
		 * Check if the field @c integerValue is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasIntegerValue() const
		{
			return protobuf_data.HasIntegerValue();
		}

		/**
		 * Get the field @c integerValue.
		 */
		INT64 GetIntegerValue() const
		{
			return protobuf_data.GetIntegerValue();
		}

		/**
		 * Set the field @c integerValue.
		 */
		void SetIntegerValue(INT64 v)
		{
			protobuf_data.SetIntegerValue(v);
		}

		/**
		 * Check if the field @c booleanValue is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasBooleanValue() const
		{
			return protobuf_data.HasBooleanValue();
		}

		/**
		 * Get the field @c booleanValue.
		 */
		BOOL GetBooleanValue() const
		{
			return protobuf_data.GetBooleanValue();
		}

		/**
		 * Set the field @c booleanValue.
		 */
		void SetBooleanValue(BOOL v)
		{
			protobuf_data.SetBooleanValue(v);
		}



	protected:

		OpPluginSetValueMessage(
				const OpMessageAddress& src,
				const OpMessageAddress& dst,
				double delay
				, INT32 variable_arg = 0
				)
			: OpTypedMessage(Type, src, dst, delay)
			, protobuf_data(variable_arg)
		{
		}



		OP_STATUS Construct(

		)
		{
			return protobuf_data.Construct();
		}

	private:
		OpNs4pluginsMessages_MessageSet::PluginSetValue protobuf_data;
	};


	/**
	 * Set cookie or proxy value for URL.
	 * 
	 * @field variable The type of value to set.
	 * @field URL The URL for which to set a value.
	 * @field value The value to set.
	 * 
	 * @return PluginError.
	 */
	class OpPluginSetValueForURLMessage
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
		static const unsigned Type = 3973433870u;

		virtual ~OpPluginSetValueForURLMessage();



		static OpPluginSetValueForURLMessage* Create(
			const OpMessageAddress& src,
			const OpMessageAddress& dst = OpMessageAddress(),
			double delay = 0)
		{
			return OP_NEW(OpPluginSetValueForURLMessage, (src, dst, delay));
		}

		static OpPluginSetValueForURLMessage* Create(
			INT32 variable_arg = 0,
			const UniString & url_arg = UniString(),
			const UniString & value_arg = UniString(),
			const OpMessageAddress& src = OpMessageAddress(),
			const OpMessageAddress& dst = OpMessageAddress(),
			double delay = 0)
		{
			OpPluginSetValueForURLMessage *obj = OP_NEW(OpPluginSetValueForURLMessage, (src, dst, delay, variable_arg, url_arg, value_arg));
			if (obj)
			{
				if (OpStatus::IsSuccess(obj->Construct()))
					return obj;

				OP_DELETE(obj);
			}
			return NULL;
		}

		static OpPluginSetValueForURLMessage* Cast(const OpTypedMessage* msg);

		static OpPluginSetValueForURLMessage* Deserialize(
			const OpMessageAddress& src,
			const OpMessageAddress& dst,
			double delay,
			const OpData& data);

		virtual OP_STATUS Serialize(OpData& data) const;

		virtual const char *GetTypeString() const;

		// Accessors/modifiers comes here
		/**
		 * Check if the field @c variable is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasVariable() const
		{
			return protobuf_data.HasVariable();
		}

		/**
		 * Get the field @c variable.
		 */
		INT32 GetVariable() const
		{
			return protobuf_data.GetVariable();
		}

		/**
		 * Set the field @c variable.
		 */
		void SetVariable(INT32 v)
		{
			protobuf_data.SetVariable(v);
		}

		/**
		 * Check if the field @c URL is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasURL() const
		{
			return protobuf_data.HasURL();
		}

		/**
		 * Get the field @c URL.
		 */
		const UniString & GetURL() const
		{
			return protobuf_data.GetURL();
		}

		/**
		 * Set the field @c URL.
		 */
		OP_STATUS SetURL(const UniString & v);

		/**
		 * Set the field @c URL.
		 */
		OP_STATUS SetURL(const uni_char * v, int l = KAll);

		/**
		 * Check if the field @c value is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasValue() const
		{
			return protobuf_data.HasValue();
		}

		/**
		 * Get the field @c value.
		 */
		const UniString & GetValue() const
		{
			return protobuf_data.GetValue();
		}

		/**
		 * Set the field @c value.
		 */
		OP_STATUS SetValue(const UniString & v);

		/**
		 * Set the field @c value.
		 */
		OP_STATUS SetValue(const uni_char * v, int l = KAll);



	protected:

		OpPluginSetValueForURLMessage(
				const OpMessageAddress& src,
				const OpMessageAddress& dst,
				double delay
				, INT32 variable_arg = 0
				, const UniString & url_arg = UniString()
				, const UniString & value_arg = UniString()
				)
			: OpTypedMessage(Type, src, dst, delay)
			, protobuf_data(variable_arg, url_arg, value_arg)
		{
		}



		OP_STATUS Construct(

		)
		{
			return protobuf_data.Construct();
		}

	private:
		OpNs4pluginsMessages_MessageSet::PluginSetValueForURL protobuf_data;
	};


	/**
	 * Release a library thorugh its NP_Shutdown method.
	 * 
	 * @return None.
	 */
	class OpPluginShutdownMessage
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
		static const unsigned Type = 4244825597u;

		virtual ~OpPluginShutdownMessage();

		static OpPluginShutdownMessage* Create()
		{
		    OpMessageAddress src;
		    OpMessageAddress dst;
		    double delay = 0;
		    return OP_NEW(OpPluginShutdownMessage, (src, dst, delay));
		}

		static OpPluginShutdownMessage* Create(
			const OpMessageAddress& src,
			const OpMessageAddress& dst = OpMessageAddress(),
			double delay = 0)
		{
			return OP_NEW(OpPluginShutdownMessage, (src, dst, delay));
		}



		static OpPluginShutdownMessage* Cast(const OpTypedMessage* msg);

		static OpPluginShutdownMessage* Deserialize(
			const OpMessageAddress& src,
			const OpMessageAddress& dst,
			double delay,
			const OpData& data);

		virtual OP_STATUS Serialize(OpData& data) const;

		virtual const char *GetTypeString() const;

		// Accessors/modifiers comes here


	protected:

		OpPluginShutdownMessage(
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
		OpNs4pluginsMessages_MessageSet::PluginShutdown protobuf_data;
	};


	/**
	 * Request change of browser status message.
	 * 
	 * @field text The new status message.
	 * 
	 * @return None.
	 */
	class OpPluginStatusTextMessage
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
		static const unsigned Type = 3781749273u;

		virtual ~OpPluginStatusTextMessage();



		static OpPluginStatusTextMessage* Create(
			const OpMessageAddress& src,
			const OpMessageAddress& dst = OpMessageAddress(),
			double delay = 0)
		{
			return OP_NEW(OpPluginStatusTextMessage, (src, dst, delay));
		}

		static OpPluginStatusTextMessage* Create(
			const UniString & text_arg = UniString(),
			const OpMessageAddress& src = OpMessageAddress(),
			const OpMessageAddress& dst = OpMessageAddress(),
			double delay = 0)
		{
			OpPluginStatusTextMessage *obj = OP_NEW(OpPluginStatusTextMessage, (src, dst, delay, text_arg));
			if (obj)
			{
				if (OpStatus::IsSuccess(obj->Construct()))
					return obj;

				OP_DELETE(obj);
			}
			return NULL;
		}

		static OpPluginStatusTextMessage* Cast(const OpTypedMessage* msg);

		static OpPluginStatusTextMessage* Deserialize(
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

		OpPluginStatusTextMessage(
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
		OpNs4pluginsMessages_MessageSet::PluginStatusText protobuf_data;
	};


	/**
	 * Provides a local file name for the data from a stream.
	 * 
	 * @field stream The stream on which the data arrives.
	 * @field fname The pointer to the local file.
	 * 
	 * @return None.
	 */
	class OpPluginStreamAsFileMessage
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
		static const unsigned Type = 1846876853u;

		virtual ~OpPluginStreamAsFileMessage();



		static OpPluginStreamAsFileMessage* Create(
			const OpMessageAddress& src,
			const OpMessageAddress& dst = OpMessageAddress(),
			double delay = 0)
		{
			return OP_NEW(OpPluginStreamAsFileMessage, (src, dst, delay));
		}

		static OpPluginStreamAsFileMessage* Create(
			const OpData * fname_arg = NULL,
			const OpMessageAddress& src = OpMessageAddress(),
			const OpMessageAddress& dst = OpMessageAddress(),
			double delay = 0)
		{
			OpPluginStreamAsFileMessage *obj = OP_NEW(OpPluginStreamAsFileMessage, (src, dst, delay, fname_arg));
			if (obj)
			{
				if (OpStatus::IsSuccess(obj->Construct()))
					return obj;

				OP_DELETE(obj);
			}
			return NULL;
		}

		static OpPluginStreamAsFileMessage* Cast(const OpTypedMessage* msg);

		static OpPluginStreamAsFileMessage* Deserialize(
			const OpMessageAddress& src,
			const OpMessageAddress& dst,
			double delay,
			const OpData& data);

		virtual OP_STATUS Serialize(OpData& data) const;

		virtual const char *GetTypeString() const;

		// Accessors/modifiers comes here
		/**
		 * Check if the field @c stream is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasStream() const
		{
			return protobuf_data.HasStream();
		}

		/**
		 * Get the field @c stream.
		 */
		const OpNs4pluginsMessages_MessageSet::PluginStream & GetStream() const
		{
			return protobuf_data.GetStream();
		}

		/**
		 * Set the field @c stream.
		 */
		OpNs4pluginsMessages_MessageSet::PluginStream & GetStreamRef();

		/**
		 * Check if the field @c fname is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasFname() const
		{
			return protobuf_data.HasFname();
		}

		/**
		 * Get the field @c fname.
		 */
		const OpData & GetFname() const
		{
			return protobuf_data.GetFname();
		}

		/**
		 * Set the field @c fname.
		 */
		OP_STATUS SetFname(const OpData & v);

		/**
		 * Set the field @c fname.
		 */
		OP_STATUS SetFname(const char * v, int l);



	protected:

		OpPluginStreamAsFileMessage(
				const OpMessageAddress& src,
				const OpMessageAddress& dst,
				double delay
				, const OpData * fname_arg = NULL
				)
			: OpTypedMessage(Type, src, dst, delay)
			, protobuf_data(fname_arg)
		{
		}



		OP_STATUS Construct(

		)
		{
			return protobuf_data.Construct();
		}

	private:
		OpNs4pluginsMessages_MessageSet::PluginStreamAsFile protobuf_data;
	};


	/**
	 * Timer triggers used internally by the plug-in component.
	 * 
	 * See NPN_ScheduleTimer.
	 * 
	 * @field timerID Positive integer ID of timer callback to trigger.
	 * 
	 * @return None.
	 */
	class OpPluginTimerMessage
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
		static const unsigned Type = 1445834438u;

		virtual ~OpPluginTimerMessage();



		static OpPluginTimerMessage* Create(
			const OpMessageAddress& src,
			const OpMessageAddress& dst = OpMessageAddress(),
			double delay = 0)
		{
			return OP_NEW(OpPluginTimerMessage, (src, dst, delay));
		}

		static OpPluginTimerMessage* Create(
			INT32 timer_id_arg = 0,
			const OpMessageAddress& src = OpMessageAddress(),
			const OpMessageAddress& dst = OpMessageAddress(),
			double delay = 0)
		{
			OpPluginTimerMessage *obj = OP_NEW(OpPluginTimerMessage, (src, dst, delay, timer_id_arg));
			if (obj)
			{
				if (OpStatus::IsSuccess(obj->Construct()))
					return obj;

				OP_DELETE(obj);
			}
			return NULL;
		}

		static OpPluginTimerMessage* Cast(const OpTypedMessage* msg);

		static OpPluginTimerMessage* Deserialize(
			const OpMessageAddress& src,
			const OpMessageAddress& dst,
			double delay,
			const OpData& data);

		virtual OP_STATUS Serialize(OpData& data) const;

		virtual const char *GetTypeString() const;

		// Accessors/modifiers comes here
		/**
		 * Check if the field @c timerID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasTimerID() const
		{
			return protobuf_data.HasTimerID();
		}

		/**
		 * Get the field @c timerID.
		 */
		INT32 GetTimerID() const
		{
			return protobuf_data.GetTimerID();
		}

		/**
		 * Set the field @c timerID.
		 */
		void SetTimerID(INT32 v)
		{
			protobuf_data.SetTimerID(v);
		}



	protected:

		OpPluginTimerMessage(
				const OpMessageAddress& src,
				const OpMessageAddress& dst,
				double delay
				, INT32 timer_id_arg = 0
				)
			: OpTypedMessage(Type, src, dst, delay)
			, protobuf_data(timer_id_arg)
		{
		}



		OP_STATUS Construct(

		)
		{
			return protobuf_data.Construct();
		}

	private:
		OpNs4pluginsMessages_MessageSet::PluginTimer protobuf_data;
	};


	/**
	 * Request the user agent string of the browser.
	 * 
	 * @return PluginUserAgentResponse.
	 */
	class OpPluginUserAgentMessage
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
		static const unsigned Type = 1994392141u;

		virtual ~OpPluginUserAgentMessage();

		static OpPluginUserAgentMessage* Create()
		{
		    OpMessageAddress src;
		    OpMessageAddress dst;
		    double delay = 0;
		    return OP_NEW(OpPluginUserAgentMessage, (src, dst, delay));
		}

		static OpPluginUserAgentMessage* Create(
			const OpMessageAddress& src,
			const OpMessageAddress& dst = OpMessageAddress(),
			double delay = 0)
		{
			return OP_NEW(OpPluginUserAgentMessage, (src, dst, delay));
		}



		static OpPluginUserAgentMessage* Cast(const OpTypedMessage* msg);

		static OpPluginUserAgentMessage* Deserialize(
			const OpMessageAddress& src,
			const OpMessageAddress& dst,
			double delay,
			const OpData& data);

		virtual OP_STATUS Serialize(OpData& data) const;

		virtual const char *GetTypeString() const;

		// Accessors/modifiers comes here


	protected:

		OpPluginUserAgentMessage(
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
		OpNs4pluginsMessages_MessageSet::PluginUserAgent protobuf_data;
	};


	/**
	 * Response to PluginUserAgent.
	 * 
	 * @field userAgent User agent string.
	 */
	class OpPluginUserAgentResponseMessage
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
		static const unsigned Type = 2195497301u;

		virtual ~OpPluginUserAgentResponseMessage();



		static OpPluginUserAgentResponseMessage* Create(
			const OpMessageAddress& src,
			const OpMessageAddress& dst = OpMessageAddress(),
			double delay = 0)
		{
			return OP_NEW(OpPluginUserAgentResponseMessage, (src, dst, delay));
		}

		static OpPluginUserAgentResponseMessage* Create(
			const UniString & user_agent_arg = UniString(),
			const OpMessageAddress& src = OpMessageAddress(),
			const OpMessageAddress& dst = OpMessageAddress(),
			double delay = 0)
		{
			OpPluginUserAgentResponseMessage *obj = OP_NEW(OpPluginUserAgentResponseMessage, (src, dst, delay, user_agent_arg));
			if (obj)
			{
				if (OpStatus::IsSuccess(obj->Construct()))
					return obj;

				OP_DELETE(obj);
			}
			return NULL;
		}

		static OpPluginUserAgentResponseMessage* Cast(const OpTypedMessage* msg);

		static OpPluginUserAgentResponseMessage* Deserialize(
			const OpMessageAddress& src,
			const OpMessageAddress& dst,
			double delay,
			const OpData& data);

		virtual OP_STATUS Serialize(OpData& data) const;

		virtual const char *GetTypeString() const;

		// Accessors/modifiers comes here
		/**
		 * Check if the field @c userAgent is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasUserAgent() const
		{
			return protobuf_data.HasUserAgent();
		}

		/**
		 * Get the field @c userAgent.
		 */
		const UniString & GetUserAgent() const
		{
			return protobuf_data.GetUserAgent();
		}

		/**
		 * Set the field @c userAgent.
		 */
		OP_STATUS SetUserAgent(const UniString & v);

		/**
		 * Set the field @c userAgent.
		 */
		OP_STATUS SetUserAgent(const uni_char * v, int l = KAll);



	protected:

		OpPluginUserAgentResponseMessage(
				const OpMessageAddress& src,
				const OpMessageAddress& dst,
				double delay
				, const UniString & user_agent_arg = UniString()
				)
			: OpTypedMessage(Type, src, dst, delay)
			, protobuf_data(user_agent_arg)
		{
		}



		OP_STATUS Construct(

		)
		{
			return protobuf_data.Construct();
		}

	private:
		OpNs4pluginsMessages_MessageSet::PluginUserAgentResponse protobuf_data;
	};


	/**
	 * Send window/display information to plug-in.
	 * 
	 * @field window Parent window (or simply 0 if windowless).
	 * @field rect Window location and size. Coordinates of top left corner relative to a page.
	 * @field clipRect Clip rectangle. Origin is the top left corner of the drawable or window.
	 * @field windowType Window type (Window or drawable target.)
	 * @field context The scripting context in which resulting scripting requests should be made. See PluginHandler::PushScriptingContext().
	 * 
	 * @return PluginError.
	 */
	class OpPluginWindowMessage
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
		static const unsigned Type = 79534674u;

		virtual ~OpPluginWindowMessage();



		static OpPluginWindowMessage* Create(
			const OpMessageAddress& src,
			const OpMessageAddress& dst = OpMessageAddress(),
			double delay = 0)
		{
			return OP_NEW(OpPluginWindowMessage, (src, dst, delay));
		}

		static OpPluginWindowMessage* Create(
			UINT64 window_arg = 0,
			INT32 window_type_arg = 0,
			UINT32 context_arg = 0,
			const OpMessageAddress& src = OpMessageAddress(),
			const OpMessageAddress& dst = OpMessageAddress(),
			double delay = 0)
		{
			OpPluginWindowMessage *obj = OP_NEW(OpPluginWindowMessage, (src, dst, delay, window_arg, window_type_arg, context_arg));
			if (obj)
			{
				if (OpStatus::IsSuccess(obj->Construct()))
					return obj;

				OP_DELETE(obj);
			}
			return NULL;
		}

		static OpPluginWindowMessage* Cast(const OpTypedMessage* msg);

		static OpPluginWindowMessage* Deserialize(
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
		 * Check if the field @c rect is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasRect() const
		{
			return protobuf_data.HasRect();
		}

		/**
		 * Get the field @c rect.
		 */
		const OpNs4pluginsMessages_MessageSet::PluginRect & GetRect() const
		{
			return protobuf_data.GetRect();
		}

		/**
		 * Set the field @c rect.
		 */
		OpNs4pluginsMessages_MessageSet::PluginRect & GetRectRef();

		/**
		 * Check if the field @c clipRect is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasClipRect() const
		{
			return protobuf_data.HasClipRect();
		}

		/**
		 * Get the field @c clipRect.
		 */
		const OpNs4pluginsMessages_MessageSet::PluginRect & GetClipRect() const
		{
			return protobuf_data.GetClipRect();
		}

		/**
		 * Set the field @c clipRect.
		 */
		OpNs4pluginsMessages_MessageSet::PluginRect & GetClipRectRef();

		/**
		 * Check if the field @c windowType is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasWindowType() const
		{
			return protobuf_data.HasWindowType();
		}

		/**
		 * Get the field @c windowType.
		 */
		INT32 GetWindowType() const
		{
			return protobuf_data.GetWindowType();
		}

		/**
		 * Set the field @c windowType.
		 */
		void SetWindowType(INT32 v)
		{
			protobuf_data.SetWindowType(v);
		}

		/**
		 * Check if the field @c context is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasContext() const
		{
			return protobuf_data.HasContext();
		}

		/**
		 * Get the field @c context.
		 */
		UINT32 GetContext() const
		{
			return protobuf_data.GetContext();
		}

		/**
		 * Set the field @c context.
		 */
		void SetContext(UINT32 v)
		{
			protobuf_data.SetContext(v);
		}



	protected:

		OpPluginWindowMessage(
				const OpMessageAddress& src,
				const OpMessageAddress& dst,
				double delay
				, UINT64 window_arg = 0
				, INT32 window_type_arg = 0
				, UINT32 context_arg = 0
				)
			: OpTypedMessage(Type, src, dst, delay)
			, protobuf_data(window_arg, window_type_arg, context_arg)
		{
		}



		OP_STATUS Construct(

		)
		{
			return protobuf_data.Construct();
		}

	private:
		OpNs4pluginsMessages_MessageSet::PluginWindow protobuf_data;
	};


	/**
	 * Response to PluginWindowlessWindowPosChanged.
	 * 
	 * @field isEventHandled Boolean value (yes, masked as int), indicating
	 *        whether the event was handled.
	 */
	class OpPluginWindowlessHandleEventResponseMessage
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
		static const unsigned Type = 3374505088u;

		virtual ~OpPluginWindowlessHandleEventResponseMessage();



		static OpPluginWindowlessHandleEventResponseMessage* Create(
			const OpMessageAddress& src,
			const OpMessageAddress& dst = OpMessageAddress(),
			double delay = 0)
		{
			return OP_NEW(OpPluginWindowlessHandleEventResponseMessage, (src, dst, delay));
		}

		static OpPluginWindowlessHandleEventResponseMessage* Create(
			INT32 is_event_handled_arg = 0,
			const OpMessageAddress& src = OpMessageAddress(),
			const OpMessageAddress& dst = OpMessageAddress(),
			double delay = 0)
		{
			OpPluginWindowlessHandleEventResponseMessage *obj = OP_NEW(OpPluginWindowlessHandleEventResponseMessage, (src, dst, delay, is_event_handled_arg));
			if (obj)
			{
				if (OpStatus::IsSuccess(obj->Construct()))
					return obj;

				OP_DELETE(obj);
			}
			return NULL;
		}

		static OpPluginWindowlessHandleEventResponseMessage* Cast(const OpTypedMessage* msg);

		static OpPluginWindowlessHandleEventResponseMessage* Deserialize(
			const OpMessageAddress& src,
			const OpMessageAddress& dst,
			double delay,
			const OpData& data);

		virtual OP_STATUS Serialize(OpData& data) const;

		virtual const char *GetTypeString() const;

		// Accessors/modifiers comes here
		/**
		 * Check if the field @c isEventHandled is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasIsEventHandled() const
		{
			return protobuf_data.HasIsEventHandled();
		}

		/**
		 * Get the field @c isEventHandled.
		 */
		INT32 GetIsEventHandled() const
		{
			return protobuf_data.GetIsEventHandled();
		}

		/**
		 * Set the field @c isEventHandled.
		 */
		void SetIsEventHandled(INT32 v)
		{
			protobuf_data.SetIsEventHandled(v);
		}



	protected:

		OpPluginWindowlessHandleEventResponseMessage(
				const OpMessageAddress& src,
				const OpMessageAddress& dst,
				double delay
				, INT32 is_event_handled_arg = 0
				)
			: OpTypedMessage(Type, src, dst, delay)
			, protobuf_data(is_event_handled_arg)
		{
		}



		OP_STATUS Construct(

		)
		{
			return protobuf_data.Construct();
		}

	private:
		OpNs4pluginsMessages_MessageSet::PluginWindowlessHandleEventResponse protobuf_data;
	};


	/**
	 * Send keyboard event to windowless plug-in instance.
	 * 
	 * @field key Core virtual key code.
	 * @field keyValue Key character value, zero if none.
	 * @field keyState Key state. See OpPluginKeyState.
	 * @field shiftKeyState Keyboard modifiers. See ShiftKeyState.
	 * @field platformData1 User data supplied by OpPluginAdapter::GetKeyEventPlatformData().
	 * @field platformData2 User data supplied by OpPluginAdapter::GetKeyEventPlatformData().
	 * 
	 * @return None.
	 */
	class OpPluginWindowlessKeyEventMessage
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
		static const unsigned Type = 3545961375u;

		virtual ~OpPluginWindowlessKeyEventMessage();



		static OpPluginWindowlessKeyEventMessage* Create(
			const OpMessageAddress& src,
			const OpMessageAddress& dst = OpMessageAddress(),
			double delay = 0)
		{
			return OP_NEW(OpPluginWindowlessKeyEventMessage, (src, dst, delay));
		}

		static OpPluginWindowlessKeyEventMessage* Create(
			INT32 key_arg = 0,
			INT32 key_value_arg = 0,
			INT32 key_state_arg = 0,
			INT32 shift_key_state_arg = 0,
			UINT64 platform_data1_arg = 0,
			UINT64 platform_data2_arg = 0,
			const OpMessageAddress& src = OpMessageAddress(),
			const OpMessageAddress& dst = OpMessageAddress(),
			double delay = 0)
		{
			OpPluginWindowlessKeyEventMessage *obj = OP_NEW(OpPluginWindowlessKeyEventMessage, (src, dst, delay, key_arg, key_value_arg, key_state_arg, shift_key_state_arg, platform_data1_arg, platform_data2_arg));
			if (obj)
			{
				if (OpStatus::IsSuccess(obj->Construct()))
					return obj;

				OP_DELETE(obj);
			}
			return NULL;
		}

		static OpPluginWindowlessKeyEventMessage* Cast(const OpTypedMessage* msg);

		static OpPluginWindowlessKeyEventMessage* Deserialize(
			const OpMessageAddress& src,
			const OpMessageAddress& dst,
			double delay,
			const OpData& data);

		virtual OP_STATUS Serialize(OpData& data) const;

		virtual const char *GetTypeString() const;

		// Accessors/modifiers comes here
		/**
		 * Check if the field @c key is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasKey() const
		{
			return protobuf_data.HasKey();
		}

		/**
		 * Get the field @c key.
		 */
		INT32 GetKey() const
		{
			return protobuf_data.GetKey();
		}

		/**
		 * Set the field @c key.
		 */
		void SetKey(INT32 v)
		{
			protobuf_data.SetKey(v);
		}

		/**
		 * Check if the field @c keyValue is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasKeyValue() const
		{
			return protobuf_data.HasKeyValue();
		}

		/**
		 * Get the field @c keyValue.
		 */
		INT32 GetKeyValue() const
		{
			return protobuf_data.GetKeyValue();
		}

		/**
		 * Set the field @c keyValue.
		 */
		void SetKeyValue(INT32 v)
		{
			protobuf_data.SetKeyValue(v);
		}

		/**
		 * Check if the field @c keyState is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasKeyState() const
		{
			return protobuf_data.HasKeyState();
		}

		/**
		 * Get the field @c keyState.
		 */
		INT32 GetKeyState() const
		{
			return protobuf_data.GetKeyState();
		}

		/**
		 * Set the field @c keyState.
		 */
		void SetKeyState(INT32 v)
		{
			protobuf_data.SetKeyState(v);
		}

		/**
		 * Check if the field @c shiftKeyState is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasShiftKeyState() const
		{
			return protobuf_data.HasShiftKeyState();
		}

		/**
		 * Get the field @c shiftKeyState.
		 */
		INT32 GetShiftKeyState() const
		{
			return protobuf_data.GetShiftKeyState();
		}

		/**
		 * Set the field @c shiftKeyState.
		 */
		void SetShiftKeyState(INT32 v)
		{
			protobuf_data.SetShiftKeyState(v);
		}

		/**
		 * Check if the field @c platformData1 is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasPlatformData1() const
		{
			return protobuf_data.HasPlatformData1();
		}

		/**
		 * Get the field @c platformData1.
		 */
		UINT64 GetPlatformData1() const
		{
			return protobuf_data.GetPlatformData1();
		}

		/**
		 * Set the field @c platformData1.
		 */
		void SetPlatformData1(UINT64 v)
		{
			protobuf_data.SetPlatformData1(v);
		}

		/**
		 * Check if the field @c platformData2 is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasPlatformData2() const
		{
			return protobuf_data.HasPlatformData2();
		}

		/**
		 * Get the field @c platformData2.
		 */
		UINT64 GetPlatformData2() const
		{
			return protobuf_data.GetPlatformData2();
		}

		/**
		 * Set the field @c platformData2.
		 */
		void SetPlatformData2(UINT64 v)
		{
			protobuf_data.SetPlatformData2(v);
		}



	protected:

		OpPluginWindowlessKeyEventMessage(
				const OpMessageAddress& src,
				const OpMessageAddress& dst,
				double delay
				, INT32 key_arg = 0
				, INT32 key_value_arg = 0
				, INT32 key_state_arg = 0
				, INT32 shift_key_state_arg = 0
				, UINT64 platform_data1_arg = 0
				, UINT64 platform_data2_arg = 0
				)
			: OpTypedMessage(Type, src, dst, delay)
			, protobuf_data(key_arg, key_value_arg, key_state_arg, shift_key_state_arg, platform_data1_arg, platform_data2_arg)
		{
		}



		OP_STATUS Construct(

		)
		{
			return protobuf_data.Construct();
		}

	private:
		OpNs4pluginsMessages_MessageSet::PluginWindowlessKeyEvent protobuf_data;
	};


	/**
	 * Send mouse event to windowless plug-in instance.
	 * 
	 * @field eventType Mouse event type. See OpPluginEventType.
	 * @field point Location of event in scaled coordinates relative to the origin of
	 *              the plug-in element.
	 * @field button Mouse button (1 = Left, 2 = Right, 3 = Middle.)
	 * @field modifiers Keyboard modifiers. See ShiftKeyState.
	 * 
	 * @return None.
	 */
	class OpPluginWindowlessMouseEventMessage
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
		static const unsigned Type = 1464759131u;

		virtual ~OpPluginWindowlessMouseEventMessage();



		static OpPluginWindowlessMouseEventMessage* Create(
			const OpMessageAddress& src,
			const OpMessageAddress& dst = OpMessageAddress(),
			double delay = 0)
		{
			return OP_NEW(OpPluginWindowlessMouseEventMessage, (src, dst, delay));
		}

		static OpPluginWindowlessMouseEventMessage* Create(
			INT32 event_type_arg = 0,
			INT32 button_arg = 0,
			INT32 modifiers_arg = 0,
			const OpMessageAddress& src = OpMessageAddress(),
			const OpMessageAddress& dst = OpMessageAddress(),
			double delay = 0)
		{
			OpPluginWindowlessMouseEventMessage *obj = OP_NEW(OpPluginWindowlessMouseEventMessage, (src, dst, delay, event_type_arg, button_arg, modifiers_arg));
			if (obj)
			{
				if (OpStatus::IsSuccess(obj->Construct()))
					return obj;

				OP_DELETE(obj);
			}
			return NULL;
		}

		static OpPluginWindowlessMouseEventMessage* Cast(const OpTypedMessage* msg);

		static OpPluginWindowlessMouseEventMessage* Deserialize(
			const OpMessageAddress& src,
			const OpMessageAddress& dst,
			double delay,
			const OpData& data);

		virtual OP_STATUS Serialize(OpData& data) const;

		virtual const char *GetTypeString() const;

		// Accessors/modifiers comes here
		/**
		 * Check if the field @c eventType is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasEventType() const
		{
			return protobuf_data.HasEventType();
		}

		/**
		 * Get the field @c eventType.
		 */
		INT32 GetEventType() const
		{
			return protobuf_data.GetEventType();
		}

		/**
		 * Set the field @c eventType.
		 */
		void SetEventType(INT32 v)
		{
			protobuf_data.SetEventType(v);
		}

		/**
		 * Check if the field @c point is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasPoint() const
		{
			return protobuf_data.HasPoint();
		}

		/**
		 * Get the field @c point.
		 */
		const OpNs4pluginsMessages_MessageSet::PluginPoint & GetPoint() const
		{
			return protobuf_data.GetPoint();
		}

		/**
		 * Set the field @c point.
		 */
		OpNs4pluginsMessages_MessageSet::PluginPoint & GetPointRef();

		/**
		 * Check if the field @c button is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasButton() const
		{
			return protobuf_data.HasButton();
		}

		/**
		 * Get the field @c button.
		 */
		INT32 GetButton() const
		{
			return protobuf_data.GetButton();
		}

		/**
		 * Set the field @c button.
		 */
		void SetButton(INT32 v)
		{
			protobuf_data.SetButton(v);
		}

		/**
		 * Check if the field @c modifiers is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasModifiers() const
		{
			return protobuf_data.HasModifiers();
		}

		/**
		 * Get the field @c modifiers.
		 */
		INT32 GetModifiers() const
		{
			return protobuf_data.GetModifiers();
		}

		/**
		 * Set the field @c modifiers.
		 */
		void SetModifiers(INT32 v)
		{
			protobuf_data.SetModifiers(v);
		}



	protected:

		OpPluginWindowlessMouseEventMessage(
				const OpMessageAddress& src,
				const OpMessageAddress& dst,
				double delay
				, INT32 event_type_arg = 0
				, INT32 button_arg = 0
				, INT32 modifiers_arg = 0
				)
			: OpTypedMessage(Type, src, dst, delay)
			, protobuf_data(event_type_arg, button_arg, modifiers_arg)
		{
		}



		OP_STATUS Construct(

		)
		{
			return protobuf_data.Construct();
		}

	private:
		OpNs4pluginsMessages_MessageSet::PluginWindowlessMouseEvent protobuf_data;
	};


	/**
	 * Request windowless plugin instance to trigger paint.
	 * 
	 * In the plugin component, this message typically causes
	 * NPP_HandleEvent(a_native_paint_event) where the painting
	 * targets the platform drawable given by an earlier call
	 * to NPP_SetWindow().
	 * 
	 * @field opPluginImageGlobalIdentifier The image frame the plug-in can draw on.
	 * @field opPluginBackgroundGlobalIdentifier The plugin background (or the area under the plugin).
	 * @field paintRect The area that needs to be painted. Rectangle is in scaled
	 *        coordinates, relative to the plugin rectangle.
	 * @field context The scripting context in which resulting scripting requests should be made. See PluginHandler::PushScriptingContext().
	 * 
	 * @return PluginWindowlessHandleEventResponse.
	 */
	class OpPluginWindowlessPaintMessage
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
		static const unsigned Type = 4230843561u;

		virtual ~OpPluginWindowlessPaintMessage();



		static OpPluginWindowlessPaintMessage* Create(
			const OpMessageAddress& src,
			const OpMessageAddress& dst = OpMessageAddress(),
			double delay = 0)
		{
			return OP_NEW(OpPluginWindowlessPaintMessage, (src, dst, delay));
		}

		static OpPluginWindowlessPaintMessage* Create(
			UINT64 op_plugin_image_global_identifier_arg = 0,
			UINT64 op_plugin_background_global_identifier_arg = 0,
			UINT32 context_arg = 0,
			const OpMessageAddress& src = OpMessageAddress(),
			const OpMessageAddress& dst = OpMessageAddress(),
			double delay = 0)
		{
			OpPluginWindowlessPaintMessage *obj = OP_NEW(OpPluginWindowlessPaintMessage, (src, dst, delay, op_plugin_image_global_identifier_arg, op_plugin_background_global_identifier_arg, context_arg));
			if (obj)
			{
				if (OpStatus::IsSuccess(obj->Construct()))
					return obj;

				OP_DELETE(obj);
			}
			return NULL;
		}

		static OpPluginWindowlessPaintMessage* Cast(const OpTypedMessage* msg);

		static OpPluginWindowlessPaintMessage* Deserialize(
			const OpMessageAddress& src,
			const OpMessageAddress& dst,
			double delay,
			const OpData& data);

		virtual OP_STATUS Serialize(OpData& data) const;

		virtual const char *GetTypeString() const;

		// Accessors/modifiers comes here
		/**
		 * Check if the field @c opPluginImageGlobalIdentifier is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasOpPluginImageGlobalIdentifier() const
		{
			return protobuf_data.HasOpPluginImageGlobalIdentifier();
		}

		/**
		 * Get the field @c opPluginImageGlobalIdentifier.
		 */
		UINT64 GetOpPluginImageGlobalIdentifier() const
		{
			return protobuf_data.GetOpPluginImageGlobalIdentifier();
		}

		/**
		 * Set the field @c opPluginImageGlobalIdentifier.
		 */
		void SetOpPluginImageGlobalIdentifier(UINT64 v)
		{
			protobuf_data.SetOpPluginImageGlobalIdentifier(v);
		}

		/**
		 * Check if the field @c opPluginBackgroundGlobalIdentifier is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasOpPluginBackgroundGlobalIdentifier() const
		{
			return protobuf_data.HasOpPluginBackgroundGlobalIdentifier();
		}

		/**
		 * Get the field @c opPluginBackgroundGlobalIdentifier.
		 */
		UINT64 GetOpPluginBackgroundGlobalIdentifier() const
		{
			return protobuf_data.GetOpPluginBackgroundGlobalIdentifier();
		}

		/**
		 * Set the field @c opPluginBackgroundGlobalIdentifier.
		 */
		void SetOpPluginBackgroundGlobalIdentifier(UINT64 v)
		{
			protobuf_data.SetOpPluginBackgroundGlobalIdentifier(v);
		}

		/**
		 * Check if the field @c paintRect is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasPaintRect() const
		{
			return protobuf_data.HasPaintRect();
		}

		/**
		 * Get the field @c paintRect.
		 */
		const OpNs4pluginsMessages_MessageSet::PluginRect & GetPaintRect() const
		{
			return protobuf_data.GetPaintRect();
		}

		/**
		 * Set the field @c paintRect.
		 */
		OpNs4pluginsMessages_MessageSet::PluginRect & GetPaintRectRef();

		/**
		 * Check if the field @c context is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasContext() const
		{
			return protobuf_data.HasContext();
		}

		/**
		 * Get the field @c context.
		 */
		UINT32 GetContext() const
		{
			return protobuf_data.GetContext();
		}

		/**
		 * Set the field @c context.
		 */
		void SetContext(UINT32 v)
		{
			protobuf_data.SetContext(v);
		}



	protected:

		OpPluginWindowlessPaintMessage(
				const OpMessageAddress& src,
				const OpMessageAddress& dst,
				double delay
				, UINT64 op_plugin_image_global_identifier_arg = 0
				, UINT64 op_plugin_background_global_identifier_arg = 0
				, UINT32 context_arg = 0
				)
			: OpTypedMessage(Type, src, dst, delay)
			, protobuf_data(op_plugin_image_global_identifier_arg, op_plugin_background_global_identifier_arg, context_arg)
		{
		}



		OP_STATUS Construct(

		)
		{
			return protobuf_data.Construct();
		}

	private:
		OpNs4pluginsMessages_MessageSet::PluginWindowlessPaint protobuf_data;
	};


	/**
	 * Send network stream data to plug-in.
	 * 
	 * @field stream The stream on which the data arrives.
	 * @field offset The offset of this data chunk in the stream.
	 * @field buffer Data chunk.
	 * 
	 * @return PluginWriteResponse.
	 */
	class OpPluginWriteMessage
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
		static const unsigned Type = 1100352131u;

		virtual ~OpPluginWriteMessage();



		static OpPluginWriteMessage* Create(
			const OpMessageAddress& src,
			const OpMessageAddress& dst = OpMessageAddress(),
			double delay = 0)
		{
			return OP_NEW(OpPluginWriteMessage, (src, dst, delay));
		}

		static OpPluginWriteMessage* Create(
			INT32 offset_arg = 0,
			const OpData & buffer_arg = OpData(),
			const OpMessageAddress& src = OpMessageAddress(),
			const OpMessageAddress& dst = OpMessageAddress(),
			double delay = 0)
		{
			OpPluginWriteMessage *obj = OP_NEW(OpPluginWriteMessage, (src, dst, delay, offset_arg, buffer_arg));
			if (obj)
			{
				if (OpStatus::IsSuccess(obj->Construct()))
					return obj;

				OP_DELETE(obj);
			}
			return NULL;
		}

		static OpPluginWriteMessage* Cast(const OpTypedMessage* msg);

		static OpPluginWriteMessage* Deserialize(
			const OpMessageAddress& src,
			const OpMessageAddress& dst,
			double delay,
			const OpData& data);

		virtual OP_STATUS Serialize(OpData& data) const;

		virtual const char *GetTypeString() const;

		// Accessors/modifiers comes here
		/**
		 * Check if the field @c stream is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasStream() const
		{
			return protobuf_data.HasStream();
		}

		/**
		 * Get the field @c stream.
		 */
		const OpNs4pluginsMessages_MessageSet::PluginStream & GetStream() const
		{
			return protobuf_data.GetStream();
		}

		/**
		 * Set the field @c stream.
		 */
		OpNs4pluginsMessages_MessageSet::PluginStream & GetStreamRef();

		/**
		 * Check if the field @c offset is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasOffset() const
		{
			return protobuf_data.HasOffset();
		}

		/**
		 * Get the field @c offset.
		 */
		INT32 GetOffset() const
		{
			return protobuf_data.GetOffset();
		}

		/**
		 * Set the field @c offset.
		 */
		void SetOffset(INT32 v)
		{
			protobuf_data.SetOffset(v);
		}

		/**
		 * Check if the field @c buffer is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasBuffer() const
		{
			return protobuf_data.HasBuffer();
		}

		/**
		 * Get the field @c buffer.
		 */
		const OpData & GetBuffer() const
		{
			return protobuf_data.GetBuffer();
		}

		/**
		 * Set the field @c buffer.
		 */
		OP_STATUS SetBuffer(const OpData & v);

		/**
		 * Set the field @c buffer.
		 */
		OP_STATUS SetBuffer(const char * v, int l);



	protected:

		OpPluginWriteMessage(
				const OpMessageAddress& src,
				const OpMessageAddress& dst,
				double delay
				, INT32 offset_arg = 0
				, const OpData & buffer_arg = OpData()
				)
			: OpTypedMessage(Type, src, dst, delay)
			, protobuf_data(offset_arg, buffer_arg)
		{
		}



		OP_STATUS Construct(

		)
		{
			return protobuf_data.Construct();
		}

	private:
		OpNs4pluginsMessages_MessageSet::PluginWrite protobuf_data;
	};


	/**
	 * Query plug-in as to how many bytes it is ready to receive.
	 * 
	 * @field stream The stream on which to receive data.
	 * 
	 * @return PluginWriteReadyResponse.
	 */
	class OpPluginWriteReadyMessage
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
		static const unsigned Type = 1616067211u;

		virtual ~OpPluginWriteReadyMessage();

		static OpPluginWriteReadyMessage* Create()
		{
		    OpMessageAddress src;
		    OpMessageAddress dst;
		    double delay = 0;
		    return OP_NEW(OpPluginWriteReadyMessage, (src, dst, delay));
		}

		static OpPluginWriteReadyMessage* Create(
			const OpMessageAddress& src,
			const OpMessageAddress& dst = OpMessageAddress(),
			double delay = 0)
		{
			return OP_NEW(OpPluginWriteReadyMessage, (src, dst, delay));
		}



		static OpPluginWriteReadyMessage* Cast(const OpTypedMessage* msg);

		static OpPluginWriteReadyMessage* Deserialize(
			const OpMessageAddress& src,
			const OpMessageAddress& dst,
			double delay,
			const OpData& data);

		virtual OP_STATUS Serialize(OpData& data) const;

		virtual const char *GetTypeString() const;

		// Accessors/modifiers comes here
		/**
		 * Check if the field @c stream is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasStream() const
		{
			return protobuf_data.HasStream();
		}

		/**
		 * Get the field @c stream.
		 */
		const OpNs4pluginsMessages_MessageSet::PluginStream & GetStream() const
		{
			return protobuf_data.GetStream();
		}

		/**
		 * Set the field @c stream.
		 */
		OpNs4pluginsMessages_MessageSet::PluginStream & GetStreamRef();



	protected:

		OpPluginWriteReadyMessage(
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
		OpNs4pluginsMessages_MessageSet::PluginWriteReady protobuf_data;
	};


	/**
	 * Response to PluginWriteReady.
	 * 
	 * @field bytes Number of bytes plug-in is ready to receive.
	 */
	class OpPluginWriteReadyResponseMessage
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
		static const unsigned Type = 3597076265u;

		virtual ~OpPluginWriteReadyResponseMessage();



		static OpPluginWriteReadyResponseMessage* Create(
			const OpMessageAddress& src,
			const OpMessageAddress& dst = OpMessageAddress(),
			double delay = 0)
		{
			return OP_NEW(OpPluginWriteReadyResponseMessage, (src, dst, delay));
		}

		static OpPluginWriteReadyResponseMessage* Create(
			INT32 bytes_arg = 0,
			const OpMessageAddress& src = OpMessageAddress(),
			const OpMessageAddress& dst = OpMessageAddress(),
			double delay = 0)
		{
			OpPluginWriteReadyResponseMessage *obj = OP_NEW(OpPluginWriteReadyResponseMessage, (src, dst, delay, bytes_arg));
			if (obj)
			{
				if (OpStatus::IsSuccess(obj->Construct()))
					return obj;

				OP_DELETE(obj);
			}
			return NULL;
		}

		static OpPluginWriteReadyResponseMessage* Cast(const OpTypedMessage* msg);

		static OpPluginWriteReadyResponseMessage* Deserialize(
			const OpMessageAddress& src,
			const OpMessageAddress& dst,
			double delay,
			const OpData& data);

		virtual OP_STATUS Serialize(OpData& data) const;

		virtual const char *GetTypeString() const;

		// Accessors/modifiers comes here
		/**
		 * Check if the field @c bytes is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasBytes() const
		{
			return protobuf_data.HasBytes();
		}

		/**
		 * Get the field @c bytes.
		 */
		INT32 GetBytes() const
		{
			return protobuf_data.GetBytes();
		}

		/**
		 * Set the field @c bytes.
		 */
		void SetBytes(INT32 v)
		{
			protobuf_data.SetBytes(v);
		}



	protected:

		OpPluginWriteReadyResponseMessage(
				const OpMessageAddress& src,
				const OpMessageAddress& dst,
				double delay
				, INT32 bytes_arg = 0
				)
			: OpTypedMessage(Type, src, dst, delay)
			, protobuf_data(bytes_arg)
		{
		}



		OP_STATUS Construct(

		)
		{
			return protobuf_data.Construct();
		}

	private:
		OpNs4pluginsMessages_MessageSet::PluginWriteReadyResponse protobuf_data;
	};


	/**
	 * Response to PluginWrite.
	 * 
	 * @field bytes Bytes written.
	 */
	class OpPluginWriteResponseMessage
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
		static const unsigned Type = 275067005u;

		virtual ~OpPluginWriteResponseMessage();



		static OpPluginWriteResponseMessage* Create(
			const OpMessageAddress& src,
			const OpMessageAddress& dst = OpMessageAddress(),
			double delay = 0)
		{
			return OP_NEW(OpPluginWriteResponseMessage, (src, dst, delay));
		}

		static OpPluginWriteResponseMessage* Create(
			INT32 bytes_arg = 0,
			const OpMessageAddress& src = OpMessageAddress(),
			const OpMessageAddress& dst = OpMessageAddress(),
			double delay = 0)
		{
			OpPluginWriteResponseMessage *obj = OP_NEW(OpPluginWriteResponseMessage, (src, dst, delay, bytes_arg));
			if (obj)
			{
				if (OpStatus::IsSuccess(obj->Construct()))
					return obj;

				OP_DELETE(obj);
			}
			return NULL;
		}

		static OpPluginWriteResponseMessage* Cast(const OpTypedMessage* msg);

		static OpPluginWriteResponseMessage* Deserialize(
			const OpMessageAddress& src,
			const OpMessageAddress& dst,
			double delay,
			const OpData& data);

		virtual OP_STATUS Serialize(OpData& data) const;

		virtual const char *GetTypeString() const;

		// Accessors/modifiers comes here
		/**
		 * Check if the field @c bytes is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasBytes() const
		{
			return protobuf_data.HasBytes();
		}

		/**
		 * Get the field @c bytes.
		 */
		INT32 GetBytes() const
		{
			return protobuf_data.GetBytes();
		}

		/**
		 * Set the field @c bytes.
		 */
		void SetBytes(INT32 v)
		{
			protobuf_data.SetBytes(v);
		}



	protected:

		OpPluginWriteResponseMessage(
				const OpMessageAddress& src,
				const OpMessageAddress& dst,
				double delay
				, INT32 bytes_arg = 0
				)
			: OpTypedMessage(Type, src, dst, delay)
			, protobuf_data(bytes_arg)
		{
		}



		OP_STATUS Construct(

		)
		{
			return protobuf_data.Construct();
		}

	private:
		OpNs4pluginsMessages_MessageSet::PluginWriteResponse protobuf_data;
	};



	// END: Message classes


#endif // G_MESSAGE_NS4PLUGINS_MESSAGES_H
