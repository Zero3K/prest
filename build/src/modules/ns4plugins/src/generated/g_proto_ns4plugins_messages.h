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



#ifndef G_PROTO_NS4PLUGINS_MESSAGES_H
#define G_PROTO_NS4PLUGINS_MESSAGES_H



#include "modules/opdata/OpData.h"
#include "modules/opdata/UniString.h"
#include "modules/protobuf/src/protobuf.h"
#include "modules/protobuf/src/protobuf_bitfield.h"
#include "modules/protobuf/src/protobuf_message.h"
#include "modules/protobuf/src/protobuf_vector.h"



class OpNs4pluginsMessages_Descriptors;

class OpNs4pluginsMessages_MessageSet
{
public:
	// BEGIN: ctor/dtor

	OpNs4pluginsMessages_MessageSet();
	virtual ~OpNs4pluginsMessages_MessageSet();

	// END: ctor/dtor
	// BEGIN: Enums

	// End: Enums

	// BEGIN: Message classes

	// Forward declarations
	class PluginNew_Argument;
	class PluginProbeResponse_ContentType;
	class PluginEnumerateResponse_LibraryPath;
	class PluginGetSitesWithDataResponse;
	class PluginGetSitesWithData;
	class PluginClearSiteData;
	class PluginPlatformEvent;
	class PluginCallback;
	class PluginGetAuthenticationInfoResponse;
	class PluginGetAuthenticationInfo;
	class PluginPopPopupsEnabled;
	class PluginPushPopupsEnabled;
	class PluginObject;
	class PluginException;
	class PluginReload;
	class PluginSetValueForURL;
	class PluginGetValueForURLResponse;
	class PluginGetValueForURL;
	class PluginTimer;
	class PluginStatusText;
	class PluginRect;
	class PluginInvalidate;
	class PluginUserAgentResponse;
	class PluginUserAgent;
	class PluginFocusEvent;
	class PluginWindowlessKeyEvent;
	class PluginPoint;
	class PluginWindowlessMouseEvent;
	class PluginWindowlessHandleEventResponse;
	class PluginWindowlessPaint;
	class PluginWindow;
	class PluginStream;
	class PluginStreamAsFile;
	class PluginWriteResponse;
	class PluginWrite;
	class PluginWriteReadyResponse;
	class PluginWriteReady;
	class PluginDestroyStream;
	class PluginNewStreamResponse;
	class PluginNewStream;
	class PluginNotify;
	class PluginPostURLNotify;
	class PluginPostURL;
	class PluginGetURLNotify;
	class PluginGetURL;
	class PluginObjectConstruct;
	class PluginObjectEnumerateResponse;
	class PluginObjectEnumerate;
	class PluginObjectInvalidate;
	class PluginObjectDeallocate;
	class PluginCreateObjectResponse;
	class PluginCreateObject;
	class PluginInvokeDefault;
	class PluginIdentifier;
	class PluginInvoke;
	class PluginRemoveProperty;
	class PluginHasProperty;
	class PluginHasMethod;
	class PluginLookupIdentifierResponse;
	class PluginLookupIdentifier;
	class PluginGetIntIdentifier;
	class PluginVariant;
	class PluginSetProperty;
	class PluginGetProperty;
	class PluginIdentifiers;
	class PluginGetStringIdentifiers;
	class PluginObjectState;
	class PluginReleaseObject;
	class PluginRetainObject;
	class PluginError;
	class PluginResult;
	class PluginEvaluate;
	class PluginSetValue;
	class PluginGetValueResponse;
	class PluginGetValue;
	class PluginDestroyResponse;
	class PluginDestroy;
	class PluginNewResponse;
	class PluginNew;
	class MessageAddress;
	class PluginShutdown;
	class PluginInitializeResponse;
	class PluginInitialize;
	class PluginLoadResponse;
	class PluginLoad;
	class PluginProbeResponse;
	class PluginProbe;
	class PluginEnumerateResponse;
	class PluginEnumerate;

	class PluginNew_Argument
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 2
		};
		// END: Internal enums


		PluginNew_Argument(
			const UniString & name_arg = UniString(),
			const UniString * value_arg = NULL
			)
			: _name(name_arg)
			, encoded_size_(-1)
		{
			if (value_arg)
			{
				_value = *value_arg;
				has_bits_.Reference().SetBit(1);

			}
		}
		OP_STATUS Construct(
			)
		{
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

		// Getters

		/**
		 * Get the field @c name.
		 */
		const UniString & GetName() const
		{
			return _name;
		}

		/**
		 * Get the field @c value.
		 */
		const UniString & GetValue() const
		{
			return _value;
		}

		// Setters

		/**
		 * Set the field @c name.
		 */
		OP_STATUS SetName(const UniString & v);

		/**
		 * Set the field @c name.
		 */
		OP_STATUS SetName(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c value.
		 */
		OP_STATUS SetValue(const UniString & v);

		/**
		 * Set the field @c value.
		 */
		OP_STATUS SetValue(const uni_char * v, int l = KAll);

		static const OpProtobufMessage *GetMessageDescriptor(OpNs4pluginsMessages_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		UniString _name;
		UniString _value;

		OpProtobufBitField<2> has_bits_;
		mutable int                 encoded_size_;
	};


	class PluginProbeResponse_ContentType
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 3
		};
		// END: Internal enums


		PluginProbeResponse_ContentType(
			const UniString & content_type_arg = UniString(),
			const UniString & description_arg = UniString()
			)
			: _contentType(content_type_arg)
			, _description(description_arg)
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
		 * Check if the field @c contentType is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasContentType() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c description is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasDescription() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c extensions is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasExtensions() const
		{
			return has_bits_.Reference().IsSet(2);
		}

		// Getters

		/**
		 * Get the field @c contentType.
		 */
		const UniString & GetContentType() const
		{
			return _contentType;
		}

		/**
		 * Get the field @c description.
		 */
		const UniString & GetDescription() const
		{
			return _description;
		}

		/**
		 * Get the field @c extensions.
		 */
		const OpProtobufValueVector<UniString> & GetExtensions() const
		{
			return _extensions;
		}

		// Setters

		/**
		 * Set the field @c contentType.
		 */
		OP_STATUS SetContentType(const UniString & v);

		/**
		 * Set the field @c contentType.
		 */
		OP_STATUS SetContentType(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c description.
		 */
		OP_STATUS SetDescription(const UniString & v);

		/**
		 * Set the field @c description.
		 */
		OP_STATUS SetDescription(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c extensions.
		 */
		OpProtobufValueVector<UniString> & GetExtensionsRef();

		static const OpProtobufMessage *GetMessageDescriptor(OpNs4pluginsMessages_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		UniString _contentType;
		UniString _description;
		OpProtobufValueVector<UniString> _extensions;

		OpProtobufBitField<3> has_bits_;
		mutable int                 encoded_size_;
	};


	class PluginEnumerateResponse_LibraryPath
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 2
		};
		// END: Internal enums


		PluginEnumerateResponse_LibraryPath(
			const UniString & path_arg = UniString(),
			INT32 type_arg = 0
			)
			: _path(path_arg)
			, _type(type_arg)
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
		 * Check if the field @c path is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasPath() const
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

		// Getters

		/**
		 * Get the field @c path.
		 */
		const UniString & GetPath() const
		{
			return _path;
		}

		/**
		 * Get the field @c type.
		 */
		INT32 GetType() const
		{
			return _type;
		}

		// Setters

		/**
		 * Set the field @c path.
		 */
		OP_STATUS SetPath(const UniString & v);

		/**
		 * Set the field @c path.
		 */
		OP_STATUS SetPath(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c type.
		 */
		void SetType(INT32 v)
		{
			_type = v;
		}

		static const OpProtobufMessage *GetMessageDescriptor(OpNs4pluginsMessages_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		UniString _path;
		INT32 _type;

		OpProtobufBitField<2> has_bits_;
		mutable int                 encoded_size_;
	};


	/**
	 * Return a NULL-terminated array of sites with data.
	 */
	class PluginGetSitesWithDataResponse
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 1
		};
		// END: Internal enums


		PluginGetSitesWithDataResponse(
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
		 * Check if the field @c sites is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasSites() const
		{
			return has_bits_.Reference().IsSet(0);
		}

		// Getters

		/**
		 * Get the field @c sites.
		 */
		const OpProtobufValueVector<UniString> & GetSites() const
		{
			return _sites;
		}

		// Setters

		/**
		 * Set the field @c sites.
		 */
		OpProtobufValueVector<UniString> & GetSitesRef();

		static const OpProtobufMessage *GetMessageDescriptor(OpNs4pluginsMessages_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		OpProtobufValueVector<UniString> _sites;

		OpProtobufBitField<1> has_bits_;
		mutable int                 encoded_size_;
	};


	/**
	 * Request a NULL-terminated array of sites with data.
	 */
	class PluginGetSitesWithData
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 0
		};
		// END: Internal enums


		PluginGetSitesWithData(
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

		// Getters

		// Setters

		static const OpProtobufMessage *GetMessageDescriptor(OpNs4pluginsMessages_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:

		OpProtobufBitField<1> has_bits_;
		mutable int                 encoded_size_;
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
	class PluginClearSiteData
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 3
		};
		// END: Internal enums


		PluginClearSiteData(
			const UniString & site_arg = UniString(),
			UINT64 flags_arg = 0,
			UINT64 max_age_arg = 0
			)
			: _site(site_arg)
			, _flags(flags_arg)
			, _maxAge(max_age_arg)
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
		 * Check if the field @c site is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasSite() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c flags is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasFlags() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c maxAge is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasMaxAge() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c site.
		 */
		const UniString & GetSite() const
		{
			return _site;
		}

		/**
		 * Get the field @c flags.
		 */
		UINT64 GetFlags() const
		{
			return _flags;
		}

		/**
		 * Get the field @c maxAge.
		 */
		UINT64 GetMaxAge() const
		{
			return _maxAge;
		}

		// Setters

		/**
		 * Set the field @c site.
		 */
		OP_STATUS SetSite(const UniString & v);

		/**
		 * Set the field @c site.
		 */
		OP_STATUS SetSite(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c flags.
		 */
		void SetFlags(UINT64 v)
		{
			_flags = v;
		}

		/**
		 * Set the field @c maxAge.
		 */
		void SetMaxAge(UINT64 v)
		{
			_maxAge = v;
		}

		static const OpProtobufMessage *GetMessageDescriptor(OpNs4pluginsMessages_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		UniString _site;
		UINT64 _flags;
		UINT64 _maxAge;

		OpProtobufBitField<3> has_bits_;
		mutable int                 encoded_size_;
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
	class PluginPlatformEvent
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 1
		};
		// END: Internal enums


		PluginPlatformEvent(
			UINT64 event_arg = 0
			)
			: _event(event_arg)
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
		 * Check if the field @c event is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasEvent() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c event.
		 */
		UINT64 GetEvent() const
		{
			return _event;
		}

		// Setters

		/**
		 * Set the field @c event.
		 */
		void SetEvent(UINT64 v)
		{
			_event = v;
		}

		static const OpProtobufMessage *GetMessageDescriptor(OpNs4pluginsMessages_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		UINT64 _event;

		OpProtobufBitField<1> has_bits_;
		mutable int                 encoded_size_;
	};


	/**
	 * Request a callback on a plug-in component thread.
	 * 
	 * @field func Pointer to callback.
	 * @field data Pointer to data to supply to callback.
	 * 
	 * @return None.
	 */
	class PluginCallback
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 2
		};
		// END: Internal enums


		PluginCallback(
			UINT64 func_arg = 0,
			UINT64 data_arg = 0
			)
			: _func(func_arg)
			, _data(data_arg)
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
		 * Check if the field @c func is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasFunc() const
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
		 * Get the field @c func.
		 */
		UINT64 GetFunc() const
		{
			return _func;
		}

		/**
		 * Get the field @c data.
		 */
		UINT64 GetData() const
		{
			return _data;
		}

		// Setters

		/**
		 * Set the field @c func.
		 */
		void SetFunc(UINT64 v)
		{
			_func = v;
		}

		/**
		 * Set the field @c data.
		 */
		void SetData(UINT64 v)
		{
			_data = v;
		}

		static const OpProtobufMessage *GetMessageDescriptor(OpNs4pluginsMessages_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		UINT64 _func;
		UINT64 _data;

		OpProtobufBitField<2> has_bits_;
		mutable int                 encoded_size_;
	};


	/**
	 * Response to PluginGetAuthenticationInfo.
	 * 
	 * @field npError  See NPError.
	 * @field username Username.
	 * @field password Password.
	 */
	class PluginGetAuthenticationInfoResponse
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 3
		};
		// END: Internal enums


		PluginGetAuthenticationInfoResponse(
			INT32 np_error_arg = 0,
			const UniString & username_arg = UniString(),
			const UniString & password_arg = UniString()
			)
			: _npError(np_error_arg)
			, _username(username_arg)
			, _password(password_arg)
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
		 * Check if the field @c npError is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasNpError() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c username is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasUsername() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c password is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasPassword() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c npError.
		 */
		INT32 GetNpError() const
		{
			return _npError;
		}

		/**
		 * Get the field @c username.
		 */
		const UniString & GetUsername() const
		{
			return _username;
		}

		/**
		 * Get the field @c password.
		 */
		const UniString & GetPassword() const
		{
			return _password;
		}

		// Setters

		/**
		 * Set the field @c npError.
		 */
		void SetNpError(INT32 v)
		{
			_npError = v;
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
		 * Set the field @c password.
		 */
		OP_STATUS SetPassword(const UniString & v);

		/**
		 * Set the field @c password.
		 */
		OP_STATUS SetPassword(const uni_char * v, int l = KAll);

		static const OpProtobufMessage *GetMessageDescriptor(OpNs4pluginsMessages_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		INT32 _npError;
		UniString _username;
		UniString _password;

		OpProtobufBitField<3> has_bits_;
		mutable int                 encoded_size_;
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
	class PluginGetAuthenticationInfo
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 5
		};
		// END: Internal enums


		PluginGetAuthenticationInfo(
			const UniString & protocol_arg = UniString(),
			const UniString & host_arg = UniString(),
			INT32 port_arg = 0,
			const UniString & scheme_arg = UniString(),
			const UniString & realm_arg = UniString()
			)
			: _protocol(protocol_arg)
			, _host(host_arg)
			, _port(port_arg)
			, _scheme(scheme_arg)
			, _realm(realm_arg)
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
		 * Check if the field @c protocol is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasProtocol() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c host is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasHost() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c port is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasPort() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c scheme is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasScheme() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c realm is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasRealm() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c protocol.
		 */
		const UniString & GetProtocol() const
		{
			return _protocol;
		}

		/**
		 * Get the field @c host.
		 */
		const UniString & GetHost() const
		{
			return _host;
		}

		/**
		 * Get the field @c port.
		 */
		INT32 GetPort() const
		{
			return _port;
		}

		/**
		 * Get the field @c scheme.
		 */
		const UniString & GetScheme() const
		{
			return _scheme;
		}

		/**
		 * Get the field @c realm.
		 */
		const UniString & GetRealm() const
		{
			return _realm;
		}

		// Setters

		/**
		 * Set the field @c protocol.
		 */
		OP_STATUS SetProtocol(const UniString & v);

		/**
		 * Set the field @c protocol.
		 */
		OP_STATUS SetProtocol(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c host.
		 */
		OP_STATUS SetHost(const UniString & v);

		/**
		 * Set the field @c host.
		 */
		OP_STATUS SetHost(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c port.
		 */
		void SetPort(INT32 v)
		{
			_port = v;
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
		 * Set the field @c realm.
		 */
		OP_STATUS SetRealm(const UniString & v);

		/**
		 * Set the field @c realm.
		 */
		OP_STATUS SetRealm(const uni_char * v, int l = KAll);

		static const OpProtobufMessage *GetMessageDescriptor(OpNs4pluginsMessages_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		UniString _protocol;
		UniString _host;
		INT32 _port;
		UniString _scheme;
		UniString _realm;

		OpProtobufBitField<5> has_bits_;
		mutable int                 encoded_size_;
	};


	/**
	 * Pop "Pop-ups enabled" state.
	 * 
	 * @return PluginError.
	 */
	class PluginPopPopupsEnabled
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 0
		};
		// END: Internal enums


		PluginPopPopupsEnabled(
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

		// Getters

		// Setters

		static const OpProtobufMessage *GetMessageDescriptor(OpNs4pluginsMessages_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:

		OpProtobufBitField<1> has_bits_;
		mutable int                 encoded_size_;
	};


	/**
	 * Push "Pop-ups enabled" state.
	 * 
	 * @field enabled If true, enable plug-in pop-ups. Otherwise disable them.
	 * 
	 * @return PluginError.
	 */
	class PluginPushPopupsEnabled
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 1
		};
		// END: Internal enums


		PluginPushPopupsEnabled(
			BOOL enabled_arg = FALSE
			)
			: _enabled(enabled_arg)
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
		 * Check if the field @c enabled is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasEnabled() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c enabled.
		 */
		BOOL GetEnabled() const
		{
			return _enabled;
		}

		// Setters

		/**
		 * Set the field @c enabled.
		 */
		void SetEnabled(BOOL v)
		{
			_enabled = v;
		}

		static const OpProtobufMessage *GetMessageDescriptor(OpNs4pluginsMessages_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		BOOL _enabled;

		OpProtobufBitField<1> has_bits_;
		mutable int                 encoded_size_;
	};


	/**
	 * NPObject representation.
	 * 
	 * @field object Browser-side pointer value. The value 0 indicates the
	 *        global object where applicable.
	 * @field referenceCount Browser-side reference count.
	 */
	class PluginObject
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 2
		};
		// END: Internal enums


		PluginObject(
			UINT64 object_arg = 0,
			INT32 reference_count_arg = 0
			)
			: _object(object_arg)
			, _referenceCount(reference_count_arg)
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
		 * Check if the field @c object is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasObject() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c referenceCount is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasReferenceCount() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c object.
		 */
		UINT64 GetObject() const
		{
			return _object;
		}

		/**
		 * Get the field @c referenceCount.
		 */
		INT32 GetReferenceCount() const
		{
			return _referenceCount;
		}

		// Setters

		/**
		 * Set the field @c object.
		 */
		void SetObject(UINT64 v)
		{
			_object = v;
		}

		/**
		 * Set the field @c referenceCount.
		 */
		void SetReferenceCount(INT32 v)
		{
			_referenceCount = v;
		}

		static const OpProtobufMessage *GetMessageDescriptor(OpNs4pluginsMessages_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		UINT64 _object;
		INT32 _referenceCount;

		OpProtobufBitField<2> has_bits_;
		mutable int                 encoded_size_;
	};


	/**
	 * Set NPRuntime exception.
	 * 
	 * @field object Object to set exception for.
	 * @field message Exception message.
	 * 
	 * @return None.
	 */
	class PluginException
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 2
		};
		// END: Internal enums


		PluginException(
			const UniString & message_arg = UniString()
			)
			: _message(message_arg)
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
		 * Check if the field @c object is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasObject() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c message is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasMessage() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c object.
		 */
		const OpNs4pluginsMessages_MessageSet::PluginObject & GetObject() const
		{
			return _object;
		}

		/**
		 * Get the field @c message.
		 */
		const UniString & GetMessage() const
		{
			return _message;
		}

		// Setters

		/**
		 * Set the field @c object.
		 */
		OpNs4pluginsMessages_MessageSet::PluginObject & GetObjectRef();

		/**
		 * Set the field @c message.
		 */
		OP_STATUS SetMessage(const UniString & v);

		/**
		 * Set the field @c message.
		 */
		OP_STATUS SetMessage(const uni_char * v, int l = KAll);

		static const OpProtobufMessage *GetMessageDescriptor(OpNs4pluginsMessages_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		OpNs4pluginsMessages_MessageSet::PluginObject _object;
		UniString _message;

		OpProtobufBitField<2> has_bits_;
		mutable int                 encoded_size_;
	};


	/**
	 * Request that the browser re-enumerate plug-in libraries.
	 * 
	 * @field reloadPages If true, all pages are reloaded once the plug-ins are reloaded. Otherwise,
	 *        they are not.
	 * 
	 * @return PluginError.
	 */
	class PluginReload
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 1
		};
		// END: Internal enums


		PluginReload(
			BOOL reload_pages_arg = FALSE
			)
			: _reloadPages(reload_pages_arg)
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
		 * Check if the field @c reloadPages is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasReloadPages() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c reloadPages.
		 */
		BOOL GetReloadPages() const
		{
			return _reloadPages;
		}

		// Setters

		/**
		 * Set the field @c reloadPages.
		 */
		void SetReloadPages(BOOL v)
		{
			_reloadPages = v;
		}

		static const OpProtobufMessage *GetMessageDescriptor(OpNs4pluginsMessages_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		BOOL _reloadPages;

		OpProtobufBitField<1> has_bits_;
		mutable int                 encoded_size_;
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
	class PluginSetValueForURL
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 3
		};
		// END: Internal enums


		PluginSetValueForURL(
			INT32 variable_arg = 0,
			const UniString & url_arg = UniString(),
			const UniString & value_arg = UniString()
			)
			: _variable(variable_arg)
			, _URL(url_arg)
			, _value(value_arg)
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
		 * Check if the field @c variable is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasVariable() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c URL is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasURL() const
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

		// Getters

		/**
		 * Get the field @c variable.
		 */
		INT32 GetVariable() const
		{
			return _variable;
		}

		/**
		 * Get the field @c URL.
		 */
		const UniString & GetURL() const
		{
			return _URL;
		}

		/**
		 * Get the field @c value.
		 */
		const UniString & GetValue() const
		{
			return _value;
		}

		// Setters

		/**
		 * Set the field @c variable.
		 */
		void SetVariable(INT32 v)
		{
			_variable = v;
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
		 * Set the field @c value.
		 */
		OP_STATUS SetValue(const UniString & v);

		/**
		 * Set the field @c value.
		 */
		OP_STATUS SetValue(const uni_char * v, int l = KAll);

		static const OpProtobufMessage *GetMessageDescriptor(OpNs4pluginsMessages_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		INT32 _variable;
		UniString _URL;
		UniString _value;

		OpProtobufBitField<3> has_bits_;
		mutable int                 encoded_size_;
	};


	/**
	 * Response to PluginGetValueForURL.
	 * 
	 * @field npError See NPError.
	 * @field value The requested value.
	 */
	class PluginGetValueForURLResponse
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 2
		};
		// END: Internal enums


		PluginGetValueForURLResponse(
			INT32 np_error_arg = 0,
			const UniString & value_arg = UniString()
			)
			: _npError(np_error_arg)
			, _value(value_arg)
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
		 * Check if the field @c npError is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasNpError() const
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

		// Getters

		/**
		 * Get the field @c npError.
		 */
		INT32 GetNpError() const
		{
			return _npError;
		}

		/**
		 * Get the field @c value.
		 */
		const UniString & GetValue() const
		{
			return _value;
		}

		// Setters

		/**
		 * Set the field @c npError.
		 */
		void SetNpError(INT32 v)
		{
			_npError = v;
		}

		/**
		 * Set the field @c value.
		 */
		OP_STATUS SetValue(const UniString & v);

		/**
		 * Set the field @c value.
		 */
		OP_STATUS SetValue(const uni_char * v, int l = KAll);

		static const OpProtobufMessage *GetMessageDescriptor(OpNs4pluginsMessages_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		INT32 _npError;
		UniString _value;

		OpProtobufBitField<2> has_bits_;
		mutable int                 encoded_size_;
	};


	/**
	 * Retrieve cookie or proxy value from URL.
	 * 
	 * @field variable The type of value to retrieve.
	 * @field URL The URL for which to retrieve a value.
	 * 
	 * @return PluginGetValueForURLResponse.
	 */
	class PluginGetValueForURL
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 2
		};
		// END: Internal enums


		PluginGetValueForURL(
			INT32 variable_arg = 0,
			const UniString & url_arg = UniString()
			)
			: _variable(variable_arg)
			, _URL(url_arg)
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
		 * Check if the field @c variable is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasVariable() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c URL is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasURL() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c variable.
		 */
		INT32 GetVariable() const
		{
			return _variable;
		}

		/**
		 * Get the field @c URL.
		 */
		const UniString & GetURL() const
		{
			return _URL;
		}

		// Setters

		/**
		 * Set the field @c variable.
		 */
		void SetVariable(INT32 v)
		{
			_variable = v;
		}

		/**
		 * Set the field @c URL.
		 */
		OP_STATUS SetURL(const UniString & v);

		/**
		 * Set the field @c URL.
		 */
		OP_STATUS SetURL(const uni_char * v, int l = KAll);

		static const OpProtobufMessage *GetMessageDescriptor(OpNs4pluginsMessages_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		INT32 _variable;
		UniString _URL;

		OpProtobufBitField<2> has_bits_;
		mutable int                 encoded_size_;
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
	class PluginTimer
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 1
		};
		// END: Internal enums


		PluginTimer(
			INT32 timer_id_arg = 0
			)
			: _timerID(timer_id_arg)
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
		 * Check if the field @c timerID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasTimerID() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c timerID.
		 */
		INT32 GetTimerID() const
		{
			return _timerID;
		}

		// Setters

		/**
		 * Set the field @c timerID.
		 */
		void SetTimerID(INT32 v)
		{
			_timerID = v;
		}

		static const OpProtobufMessage *GetMessageDescriptor(OpNs4pluginsMessages_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		INT32 _timerID;

		OpProtobufBitField<1> has_bits_;
		mutable int                 encoded_size_;
	};


	/**
	 * Request change of browser status message.
	 * 
	 * @field text The new status message.
	 * 
	 * @return None.
	 */
	class PluginStatusText
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 1
		};
		// END: Internal enums


		PluginStatusText(
			const UniString & text_arg = UniString()
			)
			: _text(text_arg)
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
		 * Check if the field @c text is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasText() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c text.
		 */
		const UniString & GetText() const
		{
			return _text;
		}

		// Setters

		/**
		 * Set the field @c text.
		 */
		OP_STATUS SetText(const UniString & v);

		/**
		 * Set the field @c text.
		 */
		OP_STATUS SetText(const uni_char * v, int l = KAll);

		static const OpProtobufMessage *GetMessageDescriptor(OpNs4pluginsMessages_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		UniString _text;

		OpProtobufBitField<1> has_bits_;
		mutable int                 encoded_size_;
	};


	/**
	 * Plugin rectangle representation.
	 * 
	 * @field x The position (x-coordinate) of the top left corner of this rectangle.
	 * @field y The position (y-coordinate) of the top left corner of this rectangle.
	 * @field width The width of the rectangle.
	 * @field height The height of the rectangle.
	 */
	class PluginRect
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 4
		};
		// END: Internal enums


		PluginRect(
			INT32 x_arg = 0,
			INT32 y_arg = 0,
			INT32 width_arg = 0,
			INT32 height_arg = 0
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
		 * Get the field @c width.
		 */
		INT32 GetWidth() const
		{
			return _width;
		}

		/**
		 * Get the field @c height.
		 */
		INT32 GetHeight() const
		{
			return _height;
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
		 * Set the field @c width.
		 */
		void SetWidth(INT32 v)
		{
			_width = v;
		}

		/**
		 * Set the field @c height.
		 */
		void SetHeight(INT32 v)
		{
			_height = v;
		}

		static const OpProtobufMessage *GetMessageDescriptor(OpNs4pluginsMessages_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		INT32 _x;
		INT32 _y;
		INT32 _width;
		INT32 _height;

		OpProtobufBitField<4> has_bits_;
		mutable int                 encoded_size_;
	};


	/**
	 * Request invalidation of a plug-in window rectangle.
	 * 
	 * @field rect The rectangle to invalidate, in plug-in window coordinates.
	 * 
	 * @return None.
	 */
	class PluginInvalidate
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 1
		};
		// END: Internal enums


		PluginInvalidate(
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
		 * Check if the field @c rect is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasRect() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c rect.
		 */
		const OpNs4pluginsMessages_MessageSet::PluginRect & GetRect() const
		{
			return _rect;
		}

		// Setters

		/**
		 * Set the field @c rect.
		 */
		OpNs4pluginsMessages_MessageSet::PluginRect & GetRectRef();

		static const OpProtobufMessage *GetMessageDescriptor(OpNs4pluginsMessages_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		OpNs4pluginsMessages_MessageSet::PluginRect _rect;

		OpProtobufBitField<1> has_bits_;
		mutable int                 encoded_size_;
	};


	/**
	 * Response to PluginUserAgent.
	 * 
	 * @field userAgent User agent string.
	 */
	class PluginUserAgentResponse
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 1
		};
		// END: Internal enums


		PluginUserAgentResponse(
			const UniString & user_agent_arg = UniString()
			)
			: _userAgent(user_agent_arg)
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
		 * Check if the field @c userAgent is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasUserAgent() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c userAgent.
		 */
		const UniString & GetUserAgent() const
		{
			return _userAgent;
		}

		// Setters

		/**
		 * Set the field @c userAgent.
		 */
		OP_STATUS SetUserAgent(const UniString & v);

		/**
		 * Set the field @c userAgent.
		 */
		OP_STATUS SetUserAgent(const uni_char * v, int l = KAll);

		static const OpProtobufMessage *GetMessageDescriptor(OpNs4pluginsMessages_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		UniString _userAgent;

		OpProtobufBitField<1> has_bits_;
		mutable int                 encoded_size_;
	};


	/**
	 * Request the user agent string of the browser.
	 * 
	 * @return PluginUserAgentResponse.
	 */
	class PluginUserAgent
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 0
		};
		// END: Internal enums


		PluginUserAgent(
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

		// Getters

		// Setters

		static const OpProtobufMessage *GetMessageDescriptor(OpNs4pluginsMessages_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:

		OpProtobufBitField<1> has_bits_;
		mutable int                 encoded_size_;
	};


	/**
	 * Send focus event to plug-in instance.
	 * 
	 * @field focus True if the plug-in instance has received focus, otherwise false.
	 * @field reason Reason for obtaining focus. See FOCUS_REASON type.
	 * 
	 * @return PluginWindowlessHandleEventResponse.
	 */
	class PluginFocusEvent
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 2
		};
		// END: Internal enums


		PluginFocusEvent(
			BOOL focus_arg = FALSE,
			INT32 reason_arg = 0
			)
			: _focus(focus_arg)
			, _reason(reason_arg)
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
		 * Check if the field @c focus is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasFocus() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c reason is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasReason() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c focus.
		 */
		BOOL GetFocus() const
		{
			return _focus;
		}

		/**
		 * Get the field @c reason.
		 */
		INT32 GetReason() const
		{
			return _reason;
		}

		// Setters

		/**
		 * Set the field @c focus.
		 */
		void SetFocus(BOOL v)
		{
			_focus = v;
		}

		/**
		 * Set the field @c reason.
		 */
		void SetReason(INT32 v)
		{
			_reason = v;
		}

		static const OpProtobufMessage *GetMessageDescriptor(OpNs4pluginsMessages_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		BOOL _focus;
		INT32 _reason;

		OpProtobufBitField<2> has_bits_;
		mutable int                 encoded_size_;
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
	class PluginWindowlessKeyEvent
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 6
		};
		// END: Internal enums


		PluginWindowlessKeyEvent(
			INT32 key_arg = 0,
			INT32 key_value_arg = 0,
			INT32 key_state_arg = 0,
			INT32 shift_key_state_arg = 0,
			UINT64 platform_data1_arg = 0,
			UINT64 platform_data2_arg = 0
			)
			: _key(key_arg)
			, _keyValue(key_value_arg)
			, _keyState(key_state_arg)
			, _shiftKeyState(shift_key_state_arg)
			, _platformData1(platform_data1_arg)
			, _platformData2(platform_data2_arg)
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
		 * Check if the field @c key is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasKey() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c keyValue is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasKeyValue() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c keyState is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasKeyState() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c shiftKeyState is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasShiftKeyState() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c platformData1 is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasPlatformData1() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c platformData2 is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasPlatformData2() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c key.
		 */
		INT32 GetKey() const
		{
			return _key;
		}

		/**
		 * Get the field @c keyValue.
		 */
		INT32 GetKeyValue() const
		{
			return _keyValue;
		}

		/**
		 * Get the field @c keyState.
		 */
		INT32 GetKeyState() const
		{
			return _keyState;
		}

		/**
		 * Get the field @c shiftKeyState.
		 */
		INT32 GetShiftKeyState() const
		{
			return _shiftKeyState;
		}

		/**
		 * Get the field @c platformData1.
		 */
		UINT64 GetPlatformData1() const
		{
			return _platformData1;
		}

		/**
		 * Get the field @c platformData2.
		 */
		UINT64 GetPlatformData2() const
		{
			return _platformData2;
		}

		// Setters

		/**
		 * Set the field @c key.
		 */
		void SetKey(INT32 v)
		{
			_key = v;
		}

		/**
		 * Set the field @c keyValue.
		 */
		void SetKeyValue(INT32 v)
		{
			_keyValue = v;
		}

		/**
		 * Set the field @c keyState.
		 */
		void SetKeyState(INT32 v)
		{
			_keyState = v;
		}

		/**
		 * Set the field @c shiftKeyState.
		 */
		void SetShiftKeyState(INT32 v)
		{
			_shiftKeyState = v;
		}

		/**
		 * Set the field @c platformData1.
		 */
		void SetPlatformData1(UINT64 v)
		{
			_platformData1 = v;
		}

		/**
		 * Set the field @c platformData2.
		 */
		void SetPlatformData2(UINT64 v)
		{
			_platformData2 = v;
		}

		static const OpProtobufMessage *GetMessageDescriptor(OpNs4pluginsMessages_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		INT32 _key;
		INT32 _keyValue;
		INT32 _keyState;
		INT32 _shiftKeyState;
		UINT64 _platformData1;
		UINT64 _platformData2;

		OpProtobufBitField<6> has_bits_;
		mutable int                 encoded_size_;
	};


	/**
	 * A coordinate.
	 * 
	 * @field x The x-component of a coordinate.
	 * @field y The y-component of a coordinate.
	 */
	class PluginPoint
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 2
		};
		// END: Internal enums


		PluginPoint(
			INT32 x_arg = 0,
			INT32 y_arg = 0
			)
			: _x(x_arg)
			, _y(y_arg)
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

		static const OpProtobufMessage *GetMessageDescriptor(OpNs4pluginsMessages_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		INT32 _x;
		INT32 _y;

		OpProtobufBitField<2> has_bits_;
		mutable int                 encoded_size_;
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
	class PluginWindowlessMouseEvent
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 4
		};
		// END: Internal enums


		PluginWindowlessMouseEvent(
			INT32 event_type_arg = 0,
			INT32 button_arg = 0,
			INT32 modifiers_arg = 0
			)
			: _eventType(event_type_arg)
			, _button(button_arg)
			, _modifiers(modifiers_arg)
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
		 * Check if the field @c eventType is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasEventType() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c point is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasPoint() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c button is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasButton() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c modifiers is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasModifiers() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c eventType.
		 */
		INT32 GetEventType() const
		{
			return _eventType;
		}

		/**
		 * Get the field @c point.
		 */
		const OpNs4pluginsMessages_MessageSet::PluginPoint & GetPoint() const
		{
			return _point;
		}

		/**
		 * Get the field @c button.
		 */
		INT32 GetButton() const
		{
			return _button;
		}

		/**
		 * Get the field @c modifiers.
		 */
		INT32 GetModifiers() const
		{
			return _modifiers;
		}

		// Setters

		/**
		 * Set the field @c eventType.
		 */
		void SetEventType(INT32 v)
		{
			_eventType = v;
		}

		/**
		 * Set the field @c point.
		 */
		OpNs4pluginsMessages_MessageSet::PluginPoint & GetPointRef();

		/**
		 * Set the field @c button.
		 */
		void SetButton(INT32 v)
		{
			_button = v;
		}

		/**
		 * Set the field @c modifiers.
		 */
		void SetModifiers(INT32 v)
		{
			_modifiers = v;
		}

		static const OpProtobufMessage *GetMessageDescriptor(OpNs4pluginsMessages_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		INT32 _eventType;
		OpNs4pluginsMessages_MessageSet::PluginPoint _point;
		INT32 _button;
		INT32 _modifiers;

		OpProtobufBitField<4> has_bits_;
		mutable int                 encoded_size_;
	};


	/**
	 * Response to PluginWindowlessWindowPosChanged.
	 * 
	 * @field isEventHandled Boolean value (yes, masked as int), indicating
	 *        whether the event was handled.
	 */
	class PluginWindowlessHandleEventResponse
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 1
		};
		// END: Internal enums


		PluginWindowlessHandleEventResponse(
			INT32 is_event_handled_arg = 0
			)
			: _isEventHandled(is_event_handled_arg)
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
		 * Check if the field @c isEventHandled is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasIsEventHandled() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c isEventHandled.
		 */
		INT32 GetIsEventHandled() const
		{
			return _isEventHandled;
		}

		// Setters

		/**
		 * Set the field @c isEventHandled.
		 */
		void SetIsEventHandled(INT32 v)
		{
			_isEventHandled = v;
		}

		static const OpProtobufMessage *GetMessageDescriptor(OpNs4pluginsMessages_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		INT32 _isEventHandled;

		OpProtobufBitField<1> has_bits_;
		mutable int                 encoded_size_;
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
	class PluginWindowlessPaint
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 4
		};
		// END: Internal enums


		PluginWindowlessPaint(
			UINT64 op_plugin_image_global_identifier_arg = 0,
			UINT64 op_plugin_background_global_identifier_arg = 0,
			UINT32 context_arg = 0
			)
			: _opPluginImageGlobalIdentifier(op_plugin_image_global_identifier_arg)
			, _opPluginBackgroundGlobalIdentifier(op_plugin_background_global_identifier_arg)
			, _context(context_arg)
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
		 * Check if the field @c opPluginImageGlobalIdentifier is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasOpPluginImageGlobalIdentifier() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c opPluginBackgroundGlobalIdentifier is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasOpPluginBackgroundGlobalIdentifier() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c paintRect is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasPaintRect() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c context is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasContext() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c opPluginImageGlobalIdentifier.
		 */
		UINT64 GetOpPluginImageGlobalIdentifier() const
		{
			return _opPluginImageGlobalIdentifier;
		}

		/**
		 * Get the field @c opPluginBackgroundGlobalIdentifier.
		 */
		UINT64 GetOpPluginBackgroundGlobalIdentifier() const
		{
			return _opPluginBackgroundGlobalIdentifier;
		}

		/**
		 * Get the field @c paintRect.
		 */
		const OpNs4pluginsMessages_MessageSet::PluginRect & GetPaintRect() const
		{
			return _paintRect;
		}

		/**
		 * Get the field @c context.
		 */
		UINT32 GetContext() const
		{
			return _context;
		}

		// Setters

		/**
		 * Set the field @c opPluginImageGlobalIdentifier.
		 */
		void SetOpPluginImageGlobalIdentifier(UINT64 v)
		{
			_opPluginImageGlobalIdentifier = v;
		}

		/**
		 * Set the field @c opPluginBackgroundGlobalIdentifier.
		 */
		void SetOpPluginBackgroundGlobalIdentifier(UINT64 v)
		{
			_opPluginBackgroundGlobalIdentifier = v;
		}

		/**
		 * Set the field @c paintRect.
		 */
		OpNs4pluginsMessages_MessageSet::PluginRect & GetPaintRectRef();

		/**
		 * Set the field @c context.
		 */
		void SetContext(UINT32 v)
		{
			_context = v;
		}

		static const OpProtobufMessage *GetMessageDescriptor(OpNs4pluginsMessages_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		UINT64 _opPluginImageGlobalIdentifier;
		UINT64 _opPluginBackgroundGlobalIdentifier;
		OpNs4pluginsMessages_MessageSet::PluginRect _paintRect;
		UINT32 _context;

		OpProtobufBitField<4> has_bits_;
		mutable int                 encoded_size_;
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
	class PluginWindow
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 5
		};
		// END: Internal enums


		PluginWindow(
			UINT64 window_arg = 0,
			INT32 window_type_arg = 0,
			UINT32 context_arg = 0
			)
			: _window(window_arg)
			, _windowType(window_type_arg)
			, _context(context_arg)
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
		 * Check if the field @c window is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasWindow() const
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
		 * Check if the field @c clipRect is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasClipRect() const
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
		 * Check if the field @c context is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasContext() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c window.
		 */
		UINT64 GetWindow() const
		{
			return _window;
		}

		/**
		 * Get the field @c rect.
		 */
		const OpNs4pluginsMessages_MessageSet::PluginRect & GetRect() const
		{
			return _rect;
		}

		/**
		 * Get the field @c clipRect.
		 */
		const OpNs4pluginsMessages_MessageSet::PluginRect & GetClipRect() const
		{
			return _clipRect;
		}

		/**
		 * Get the field @c windowType.
		 */
		INT32 GetWindowType() const
		{
			return _windowType;
		}

		/**
		 * Get the field @c context.
		 */
		UINT32 GetContext() const
		{
			return _context;
		}

		// Setters

		/**
		 * Set the field @c window.
		 */
		void SetWindow(UINT64 v)
		{
			_window = v;
		}

		/**
		 * Set the field @c rect.
		 */
		OpNs4pluginsMessages_MessageSet::PluginRect & GetRectRef();

		/**
		 * Set the field @c clipRect.
		 */
		OpNs4pluginsMessages_MessageSet::PluginRect & GetClipRectRef();

		/**
		 * Set the field @c windowType.
		 */
		void SetWindowType(INT32 v)
		{
			_windowType = v;
		}

		/**
		 * Set the field @c context.
		 */
		void SetContext(UINT32 v)
		{
			_context = v;
		}

		static const OpProtobufMessage *GetMessageDescriptor(OpNs4pluginsMessages_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		UINT64 _window;
		OpNs4pluginsMessages_MessageSet::PluginRect _rect;
		OpNs4pluginsMessages_MessageSet::PluginRect _clipRect;
		INT32 _windowType;
		UINT32 _context;

		OpProtobufBitField<5> has_bits_;
		mutable int                 encoded_size_;
	};


	/**
	 * Plugin stream representation.
	 * 
	 * @field identifier Browser-side pointer.
	 * @field URL Address of resource streamed.
	 * @field end See NPAPI/NPStream.
	 * @field lastModified See NPAPI/NPStream.
	 * @field notifyData Value set through PluginGetURLNotify or PluginPostURLNotify.
	 * @field headers Read HTTP response headers.
	 */
	class PluginStream
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 6
		};
		// END: Internal enums


		PluginStream(
			UINT64 identifier_arg = 0,
			const UniString & url_arg = UniString(),
			INT32 end_arg = 0,
			INT32 last_modified_arg = 0,
			UINT64 notify_data_arg = 0,
			const UniString & headers_arg = UniString()
			)
			: _identifier(identifier_arg)
			, _URL(url_arg)
			, _end(end_arg)
			, _lastModified(last_modified_arg)
			, _notifyData(notify_data_arg)
			, _headers(headers_arg)
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
		 * Check if the field @c identifier is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasIdentifier() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c URL is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasURL() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c end is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasEnd() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c lastModified is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasLastModified() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c notifyData is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasNotifyData() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c headers is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasHeaders() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c identifier.
		 */
		UINT64 GetIdentifier() const
		{
			return _identifier;
		}

		/**
		 * Get the field @c URL.
		 */
		const UniString & GetURL() const
		{
			return _URL;
		}

		/**
		 * Get the field @c end.
		 */
		INT32 GetEnd() const
		{
			return _end;
		}

		/**
		 * Get the field @c lastModified.
		 */
		INT32 GetLastModified() const
		{
			return _lastModified;
		}

		/**
		 * Get the field @c notifyData.
		 */
		UINT64 GetNotifyData() const
		{
			return _notifyData;
		}

		/**
		 * Get the field @c headers.
		 */
		const UniString & GetHeaders() const
		{
			return _headers;
		}

		// Setters

		/**
		 * Set the field @c identifier.
		 */
		void SetIdentifier(UINT64 v)
		{
			_identifier = v;
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
		 * Set the field @c end.
		 */
		void SetEnd(INT32 v)
		{
			_end = v;
		}

		/**
		 * Set the field @c lastModified.
		 */
		void SetLastModified(INT32 v)
		{
			_lastModified = v;
		}

		/**
		 * Set the field @c notifyData.
		 */
		void SetNotifyData(UINT64 v)
		{
			_notifyData = v;
		}

		/**
		 * Set the field @c headers.
		 */
		OP_STATUS SetHeaders(const UniString & v);

		/**
		 * Set the field @c headers.
		 */
		OP_STATUS SetHeaders(const uni_char * v, int l = KAll);

		static const OpProtobufMessage *GetMessageDescriptor(OpNs4pluginsMessages_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		UINT64 _identifier;
		UniString _URL;
		INT32 _end;
		INT32 _lastModified;
		UINT64 _notifyData;
		UniString _headers;

		OpProtobufBitField<6> has_bits_;
		mutable int                 encoded_size_;
	};


	/**
	 * Provides a local file name for the data from a stream.
	 * 
	 * @field stream The stream on which the data arrives.
	 * @field fname The pointer to the local file.
	 * 
	 * @return None.
	 */
	class PluginStreamAsFile
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 2
		};
		// END: Internal enums


		PluginStreamAsFile(
			const OpData * fname_arg = NULL
			)
			: encoded_size_(-1)
		{
			if (fname_arg)
			{
				_fname = *fname_arg;
				has_bits_.Reference().SetBit(1);

			}
		}
		OP_STATUS Construct(
			)
		{
			return OpStatus::OK;
		}

		// Checkers
		/**
		 * Check if the field @c stream is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasStream() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c fname is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasFname() const
		{
			return has_bits_.Reference().IsSet(1);
		}

		// Getters

		/**
		 * Get the field @c stream.
		 */
		const OpNs4pluginsMessages_MessageSet::PluginStream & GetStream() const
		{
			return _stream;
		}

		/**
		 * Get the field @c fname.
		 */
		const OpData & GetFname() const
		{
			return _fname;
		}

		// Setters

		/**
		 * Set the field @c stream.
		 */
		OpNs4pluginsMessages_MessageSet::PluginStream & GetStreamRef();

		/**
		 * Set the field @c fname.
		 */
		OP_STATUS SetFname(const OpData & v);

		/**
		 * Set the field @c fname.
		 */
		OP_STATUS SetFname(const char * v, int l);

		static const OpProtobufMessage *GetMessageDescriptor(OpNs4pluginsMessages_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		OpNs4pluginsMessages_MessageSet::PluginStream _stream;
		OpData _fname;

		OpProtobufBitField<2> has_bits_;
		mutable int                 encoded_size_;
	};


	/**
	 * Response to PluginWrite.
	 * 
	 * @field bytes Bytes written.
	 */
	class PluginWriteResponse
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 1
		};
		// END: Internal enums


		PluginWriteResponse(
			INT32 bytes_arg = 0
			)
			: _bytes(bytes_arg)
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
		 * Check if the field @c bytes is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasBytes() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c bytes.
		 */
		INT32 GetBytes() const
		{
			return _bytes;
		}

		// Setters

		/**
		 * Set the field @c bytes.
		 */
		void SetBytes(INT32 v)
		{
			_bytes = v;
		}

		static const OpProtobufMessage *GetMessageDescriptor(OpNs4pluginsMessages_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		INT32 _bytes;

		OpProtobufBitField<1> has_bits_;
		mutable int                 encoded_size_;
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
	class PluginWrite
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 3
		};
		// END: Internal enums


		PluginWrite(
			INT32 offset_arg = 0,
			const OpData & buffer_arg = OpData()
			)
			: _offset(offset_arg)
			, _buffer(buffer_arg)
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
		 * Check if the field @c stream is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasStream() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c offset is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasOffset() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c buffer is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasBuffer() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c stream.
		 */
		const OpNs4pluginsMessages_MessageSet::PluginStream & GetStream() const
		{
			return _stream;
		}

		/**
		 * Get the field @c offset.
		 */
		INT32 GetOffset() const
		{
			return _offset;
		}

		/**
		 * Get the field @c buffer.
		 */
		const OpData & GetBuffer() const
		{
			return _buffer;
		}

		// Setters

		/**
		 * Set the field @c stream.
		 */
		OpNs4pluginsMessages_MessageSet::PluginStream & GetStreamRef();

		/**
		 * Set the field @c offset.
		 */
		void SetOffset(INT32 v)
		{
			_offset = v;
		}

		/**
		 * Set the field @c buffer.
		 */
		OP_STATUS SetBuffer(const OpData & v);

		/**
		 * Set the field @c buffer.
		 */
		OP_STATUS SetBuffer(const char * v, int l);

		static const OpProtobufMessage *GetMessageDescriptor(OpNs4pluginsMessages_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		OpNs4pluginsMessages_MessageSet::PluginStream _stream;
		INT32 _offset;
		OpData _buffer;

		OpProtobufBitField<3> has_bits_;
		mutable int                 encoded_size_;
	};


	/**
	 * Response to PluginWriteReady.
	 * 
	 * @field bytes Number of bytes plug-in is ready to receive.
	 */
	class PluginWriteReadyResponse
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 1
		};
		// END: Internal enums


		PluginWriteReadyResponse(
			INT32 bytes_arg = 0
			)
			: _bytes(bytes_arg)
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
		 * Check if the field @c bytes is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasBytes() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c bytes.
		 */
		INT32 GetBytes() const
		{
			return _bytes;
		}

		// Setters

		/**
		 * Set the field @c bytes.
		 */
		void SetBytes(INT32 v)
		{
			_bytes = v;
		}

		static const OpProtobufMessage *GetMessageDescriptor(OpNs4pluginsMessages_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		INT32 _bytes;

		OpProtobufBitField<1> has_bits_;
		mutable int                 encoded_size_;
	};


	/**
	 * Query plug-in as to how many bytes it is ready to receive.
	 * 
	 * @field stream The stream on which to receive data.
	 * 
	 * @return PluginWriteReadyResponse.
	 */
	class PluginWriteReady
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 1
		};
		// END: Internal enums


		PluginWriteReady(
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
		 * Check if the field @c stream is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasStream() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c stream.
		 */
		const OpNs4pluginsMessages_MessageSet::PluginStream & GetStream() const
		{
			return _stream;
		}

		// Setters

		/**
		 * Set the field @c stream.
		 */
		OpNs4pluginsMessages_MessageSet::PluginStream & GetStreamRef();

		static const OpProtobufMessage *GetMessageDescriptor(OpNs4pluginsMessages_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		OpNs4pluginsMessages_MessageSet::PluginStream _stream;

		OpProtobufBitField<1> has_bits_;
		mutable int                 encoded_size_;
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
	class PluginDestroyStream
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 2
		};
		// END: Internal enums


		PluginDestroyStream(
			INT32 reason_arg = 0
			)
			: _reason(reason_arg)
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
		 * Check if the field @c stream is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasStream() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c reason is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasReason() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c stream.
		 */
		const OpNs4pluginsMessages_MessageSet::PluginStream & GetStream() const
		{
			return _stream;
		}

		/**
		 * Get the field @c reason.
		 */
		INT32 GetReason() const
		{
			return _reason;
		}

		// Setters

		/**
		 * Set the field @c stream.
		 */
		OpNs4pluginsMessages_MessageSet::PluginStream & GetStreamRef();

		/**
		 * Set the field @c reason.
		 */
		void SetReason(INT32 v)
		{
			_reason = v;
		}

		static const OpProtobufMessage *GetMessageDescriptor(OpNs4pluginsMessages_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		OpNs4pluginsMessages_MessageSet::PluginStream _stream;
		INT32 _reason;

		OpProtobufBitField<2> has_bits_;
		mutable int                 encoded_size_;
	};


	/**
	 * Response to PluginNewStream.
	 * 
	 * @field npError Return value of NPP_NewStream.
	 * @field streamType Side-channel return value of NPP_NewStream. Should be a
	 *        copy of PluginNewStream::streamType if it has not been changed.
	 */
	class PluginNewStreamResponse
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 2
		};
		// END: Internal enums


		PluginNewStreamResponse(
			INT32 np_error_arg = 0,
			INT32 stream_type_arg = 0
			)
			: _npError(np_error_arg)
			, _streamType(stream_type_arg)
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
		 * Check if the field @c npError is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasNpError() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c streamType is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasStreamType() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c npError.
		 */
		INT32 GetNpError() const
		{
			return _npError;
		}

		/**
		 * Get the field @c streamType.
		 */
		INT32 GetStreamType() const
		{
			return _streamType;
		}

		// Setters

		/**
		 * Set the field @c npError.
		 */
		void SetNpError(INT32 v)
		{
			_npError = v;
		}

		/**
		 * Set the field @c streamType.
		 */
		void SetStreamType(INT32 v)
		{
			_streamType = v;
		}

		static const OpProtobufMessage *GetMessageDescriptor(OpNs4pluginsMessages_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		INT32 _npError;
		INT32 _streamType;

		OpProtobufBitField<2> has_bits_;
		mutable int                 encoded_size_;
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
	class PluginNewStream
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 4
		};
		// END: Internal enums


		PluginNewStream(
			const UniString & content_type_arg = UniString(),
			BOOL seekable_arg = FALSE,
			INT32 stream_type_arg = 0
			)
			: _contentType(content_type_arg)
			, _seekable(seekable_arg)
			, _streamType(stream_type_arg)
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
		 * Check if the field @c contentType is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasContentType() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c stream is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasStream() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c seekable is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasSeekable() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c streamType is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasStreamType() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c contentType.
		 */
		const UniString & GetContentType() const
		{
			return _contentType;
		}

		/**
		 * Get the field @c stream.
		 */
		const OpNs4pluginsMessages_MessageSet::PluginStream & GetStream() const
		{
			return _stream;
		}

		/**
		 * Get the field @c seekable.
		 */
		BOOL GetSeekable() const
		{
			return _seekable;
		}

		/**
		 * Get the field @c streamType.
		 */
		INT32 GetStreamType() const
		{
			return _streamType;
		}

		// Setters

		/**
		 * Set the field @c contentType.
		 */
		OP_STATUS SetContentType(const UniString & v);

		/**
		 * Set the field @c contentType.
		 */
		OP_STATUS SetContentType(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c stream.
		 */
		OpNs4pluginsMessages_MessageSet::PluginStream & GetStreamRef();

		/**
		 * Set the field @c seekable.
		 */
		void SetSeekable(BOOL v)
		{
			_seekable = v;
		}

		/**
		 * Set the field @c streamType.
		 */
		void SetStreamType(INT32 v)
		{
			_streamType = v;
		}

		static const OpProtobufMessage *GetMessageDescriptor(OpNs4pluginsMessages_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		UniString _contentType;
		OpNs4pluginsMessages_MessageSet::PluginStream _stream;
		BOOL _seekable;
		INT32 _streamType;

		OpProtobufBitField<4> has_bits_;
		mutable int                 encoded_size_;
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
	class PluginNotify
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 3
		};
		// END: Internal enums


		PluginNotify(
			const UniString & url_arg = UniString(),
			INT32 reason_arg = 0,
			UINT64 notify_data_arg = 0
			)
			: _URL(url_arg)
			, _reason(reason_arg)
			, _notifyData(notify_data_arg)
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
		 * Check if the field @c URL is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasURL() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c reason is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasReason() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c notifyData is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasNotifyData() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c URL.
		 */
		const UniString & GetURL() const
		{
			return _URL;
		}

		/**
		 * Get the field @c reason.
		 */
		INT32 GetReason() const
		{
			return _reason;
		}

		/**
		 * Get the field @c notifyData.
		 */
		UINT64 GetNotifyData() const
		{
			return _notifyData;
		}

		// Setters

		/**
		 * Set the field @c URL.
		 */
		OP_STATUS SetURL(const UniString & v);

		/**
		 * Set the field @c URL.
		 */
		OP_STATUS SetURL(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c reason.
		 */
		void SetReason(INT32 v)
		{
			_reason = v;
		}

		/**
		 * Set the field @c notifyData.
		 */
		void SetNotifyData(UINT64 v)
		{
			_notifyData = v;
		}

		static const OpProtobufMessage *GetMessageDescriptor(OpNs4pluginsMessages_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		UniString _URL;
		INT32 _reason;
		UINT64 _notifyData;

		OpProtobufBitField<3> has_bits_;
		mutable int                 encoded_size_;
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
	class PluginPostURLNotify
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 5
		};
		// END: Internal enums


		PluginPostURLNotify(
			const OpData & url_arg = OpData(),
			const OpData & data_arg = OpData(),
			BOOL is_file_arg = FALSE,
			UINT64 notify_data_arg = 0,
			const OpData * window_arg = NULL
			)
			: _URL(url_arg)
			, _data(data_arg)
			, _isFile(is_file_arg)
			, _notifyData(notify_data_arg)
			, encoded_size_(-1)
		{
			if (window_arg)
			{
				_window = *window_arg;
				has_bits_.Reference().SetBit(4);

			}
		}
		OP_STATUS Construct(
			)
		{
			return OpStatus::OK;
		}

		// Checkers
		/**
		 * Check if the field @c URL is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasURL() const
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

		/**
		 * Check if the field @c isFile is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasIsFile() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c notifyData is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasNotifyData() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c window is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasWindow() const
		{
			return has_bits_.Reference().IsSet(4);
		}

		// Getters

		/**
		 * Get the field @c URL.
		 */
		const OpData & GetURL() const
		{
			return _URL;
		}

		/**
		 * Get the field @c data.
		 */
		const OpData & GetData() const
		{
			return _data;
		}

		/**
		 * Get the field @c isFile.
		 */
		BOOL GetIsFile() const
		{
			return _isFile;
		}

		/**
		 * Get the field @c notifyData.
		 */
		UINT64 GetNotifyData() const
		{
			return _notifyData;
		}

		/**
		 * Get the field @c window.
		 */
		const OpData & GetWindow() const
		{
			return _window;
		}

		// Setters

		/**
		 * Set the field @c URL.
		 */
		OP_STATUS SetURL(const OpData & v);

		/**
		 * Set the field @c URL.
		 */
		OP_STATUS SetURL(const char * v, int l);

		/**
		 * Set the field @c data.
		 */
		OP_STATUS SetData(const OpData & v);

		/**
		 * Set the field @c data.
		 */
		OP_STATUS SetData(const char * v, int l);

		/**
		 * Set the field @c isFile.
		 */
		void SetIsFile(BOOL v)
		{
			_isFile = v;
		}

		/**
		 * Set the field @c notifyData.
		 */
		void SetNotifyData(UINT64 v)
		{
			_notifyData = v;
		}

		/**
		 * Set the field @c window.
		 */
		OP_STATUS SetWindow(const OpData & v);

		/**
		 * Set the field @c window.
		 */
		OP_STATUS SetWindow(const char * v, int l);

		static const OpProtobufMessage *GetMessageDescriptor(OpNs4pluginsMessages_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		OpData _URL;
		OpData _data;
		BOOL _isFile;
		UINT64 _notifyData;
		OpData _window;

		OpProtobufBitField<5> has_bits_;
		mutable int                 encoded_size_;
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
	class PluginPostURL
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 4
		};
		// END: Internal enums


		PluginPostURL(
			const OpData & url_arg = OpData(),
			const OpData & data_arg = OpData(),
			BOOL is_file_arg = FALSE,
			const OpData * window_arg = NULL
			)
			: _URL(url_arg)
			, _data(data_arg)
			, _isFile(is_file_arg)
			, encoded_size_(-1)
		{
			if (window_arg)
			{
				_window = *window_arg;
				has_bits_.Reference().SetBit(3);

			}
		}
		OP_STATUS Construct(
			)
		{
			return OpStatus::OK;
		}

		// Checkers
		/**
		 * Check if the field @c URL is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasURL() const
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

		/**
		 * Check if the field @c isFile is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasIsFile() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c window is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasWindow() const
		{
			return has_bits_.Reference().IsSet(3);
		}

		// Getters

		/**
		 * Get the field @c URL.
		 */
		const OpData & GetURL() const
		{
			return _URL;
		}

		/**
		 * Get the field @c data.
		 */
		const OpData & GetData() const
		{
			return _data;
		}

		/**
		 * Get the field @c isFile.
		 */
		BOOL GetIsFile() const
		{
			return _isFile;
		}

		/**
		 * Get the field @c window.
		 */
		const OpData & GetWindow() const
		{
			return _window;
		}

		// Setters

		/**
		 * Set the field @c URL.
		 */
		OP_STATUS SetURL(const OpData & v);

		/**
		 * Set the field @c URL.
		 */
		OP_STATUS SetURL(const char * v, int l);

		/**
		 * Set the field @c data.
		 */
		OP_STATUS SetData(const OpData & v);

		/**
		 * Set the field @c data.
		 */
		OP_STATUS SetData(const char * v, int l);

		/**
		 * Set the field @c isFile.
		 */
		void SetIsFile(BOOL v)
		{
			_isFile = v;
		}

		/**
		 * Set the field @c window.
		 */
		OP_STATUS SetWindow(const OpData & v);

		/**
		 * Set the field @c window.
		 */
		OP_STATUS SetWindow(const char * v, int l);

		static const OpProtobufMessage *GetMessageDescriptor(OpNs4pluginsMessages_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		OpData _URL;
		OpData _data;
		BOOL _isFile;
		OpData _window;

		OpProtobufBitField<4> has_bits_;
		mutable int                 encoded_size_;
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
	class PluginGetURLNotify
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 3
		};
		// END: Internal enums


		PluginGetURLNotify(
			const OpData & url_arg = OpData(),
			const OpData * window_arg = NULL,
			UINT64 notify_data_arg = 0
			)
			: _URL(url_arg)
			, _notifyData(notify_data_arg)
			, encoded_size_(-1)
		{
			if (window_arg)
			{
				_window = *window_arg;
				has_bits_.Reference().SetBit(1);

			}
		}
		OP_STATUS Construct(
			)
		{
			return OpStatus::OK;
		}

		// Checkers
		/**
		 * Check if the field @c URL is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasURL() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c window is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasWindow() const
		{
			return has_bits_.Reference().IsSet(1);
		}

		/**
		 * Check if the field @c notifyData is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasNotifyData() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c URL.
		 */
		const OpData & GetURL() const
		{
			return _URL;
		}

		/**
		 * Get the field @c window.
		 */
		const OpData & GetWindow() const
		{
			return _window;
		}

		/**
		 * Get the field @c notifyData.
		 */
		UINT64 GetNotifyData() const
		{
			return _notifyData;
		}

		// Setters

		/**
		 * Set the field @c URL.
		 */
		OP_STATUS SetURL(const OpData & v);

		/**
		 * Set the field @c URL.
		 */
		OP_STATUS SetURL(const char * v, int l);

		/**
		 * Set the field @c window.
		 */
		OP_STATUS SetWindow(const OpData & v);

		/**
		 * Set the field @c window.
		 */
		OP_STATUS SetWindow(const char * v, int l);

		/**
		 * Set the field @c notifyData.
		 */
		void SetNotifyData(UINT64 v)
		{
			_notifyData = v;
		}

		static const OpProtobufMessage *GetMessageDescriptor(OpNs4pluginsMessages_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		OpData _URL;
		OpData _window;
		UINT64 _notifyData;

		OpProtobufBitField<3> has_bits_;
		mutable int                 encoded_size_;
	};


	/**
	 * Request stream from URL.
	 * 
	 * @field URL The URL to request data from.
	 * @field window The window to open the URL in. See NPN_GetURL().
	 * 
	 * @return PluginError.
	 */
	class PluginGetURL
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 2
		};
		// END: Internal enums


		PluginGetURL(
			const OpData & url_arg = OpData(),
			const OpData * window_arg = NULL
			)
			: _URL(url_arg)
			, encoded_size_(-1)
		{
			if (window_arg)
			{
				_window = *window_arg;
				has_bits_.Reference().SetBit(1);

			}
		}
		OP_STATUS Construct(
			)
		{
			return OpStatus::OK;
		}

		// Checkers
		/**
		 * Check if the field @c URL is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasURL() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c window is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasWindow() const
		{
			return has_bits_.Reference().IsSet(1);
		}

		// Getters

		/**
		 * Get the field @c URL.
		 */
		const OpData & GetURL() const
		{
			return _URL;
		}

		/**
		 * Get the field @c window.
		 */
		const OpData & GetWindow() const
		{
			return _window;
		}

		// Setters

		/**
		 * Set the field @c URL.
		 */
		OP_STATUS SetURL(const OpData & v);

		/**
		 * Set the field @c URL.
		 */
		OP_STATUS SetURL(const char * v, int l);

		/**
		 * Set the field @c window.
		 */
		OP_STATUS SetWindow(const OpData & v);

		/**
		 * Set the field @c window.
		 */
		OP_STATUS SetWindow(const char * v, int l);

		static const OpProtobufMessage *GetMessageDescriptor(OpNs4pluginsMessages_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		OpData _URL;
		OpData _window;

		OpProtobufBitField<2> has_bits_;
		mutable int                 encoded_size_;
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
	class PluginObjectConstruct
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 3
		};
		// END: Internal enums


		PluginObjectConstruct(
			)
			: _context(0)
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
		 * Check if the field @c object is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasObject() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c arguments is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasArguments() const
		{
			return has_bits_.Reference().IsSet(1);
		}

		/**
		 * Check if the field @c context is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasContext() const
		{
			return has_bits_.Reference().IsSet(2);
		}

		// Getters

		/**
		 * Get the field @c object.
		 */
		const OpNs4pluginsMessages_MessageSet::PluginObject & GetObject() const
		{
			return _object;
		}

		/**
		 * Get the field @c arguments.
		 */
		const OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginVariant> & GetArguments() const
		{
			return _arguments;
		}

		/**
		 * Get the field @c context.
		 */
		UINT32 GetContext() const
		{
			return _context;
		}

		// Setters

		/**
		 * Set the field @c object.
		 */
		OpNs4pluginsMessages_MessageSet::PluginObject & GetObjectRef();

		/**
		 * Set the field @c arguments.
		 */
		OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginVariant> & GetArgumentsRef();

		/**
		 * Set the field @c context.
		 */
		void SetContext(UINT32 v)
		{
			has_bits_.Reference().SetBit(2);
			_context = v;
		}

		static const OpProtobufMessage *GetMessageDescriptor(OpNs4pluginsMessages_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		OpNs4pluginsMessages_MessageSet::PluginObject _object;
		OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginVariant> _arguments;
		UINT32 _context;

		OpProtobufBitField<3> has_bits_;
		mutable int                 encoded_size_;
	};


	/**
	 * Response to PluginObjectEnumerate.
	 * 
	 * @field success true if successful, false otherwise.
	 * @field properties Enumerated properties.
	 */
	class PluginObjectEnumerateResponse
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 2
		};
		// END: Internal enums


		PluginObjectEnumerateResponse(
			BOOL success_arg = FALSE
			)
			: _success(success_arg)
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
		 * Check if the field @c success is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasSuccess() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c properties is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasProperties() const
		{
			return has_bits_.Reference().IsSet(1);
		}

		// Getters

		/**
		 * Get the field @c success.
		 */
		BOOL GetSuccess() const
		{
			return _success;
		}

		/**
		 * Get the field @c properties.
		 */
		const OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginIdentifier> & GetProperties() const
		{
			return _properties;
		}

		// Setters

		/**
		 * Set the field @c success.
		 */
		void SetSuccess(BOOL v)
		{
			_success = v;
		}

		/**
		 * Set the field @c properties.
		 */
		OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginIdentifier> & GetPropertiesRef();

		static const OpProtobufMessage *GetMessageDescriptor(OpNs4pluginsMessages_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		BOOL _success;
		OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginIdentifier> _properties;

		OpProtobufBitField<2> has_bits_;
		mutable int                 encoded_size_;
	};


	/**
	 * Enumerate properties of an EcmaScript object.
	 * 
	 * @field object Object to enumerate properties of.
	 * @field context The scripting context in which this request is made. See PluginHandler::PushScriptingContext().
	 * 
	 * @return PluginObjectEnumerateResponse.
	 */
	class PluginObjectEnumerate
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 2
		};
		// END: Internal enums


		PluginObjectEnumerate(
			)
			: _context(0)
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
		 * Check if the field @c object is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasObject() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c context is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasContext() const
		{
			return has_bits_.Reference().IsSet(1);
		}

		// Getters

		/**
		 * Get the field @c object.
		 */
		const OpNs4pluginsMessages_MessageSet::PluginObject & GetObject() const
		{
			return _object;
		}

		/**
		 * Get the field @c context.
		 */
		UINT32 GetContext() const
		{
			return _context;
		}

		// Setters

		/**
		 * Set the field @c object.
		 */
		OpNs4pluginsMessages_MessageSet::PluginObject & GetObjectRef();

		/**
		 * Set the field @c context.
		 */
		void SetContext(UINT32 v)
		{
			has_bits_.Reference().SetBit(1);
			_context = v;
		}

		static const OpProtobufMessage *GetMessageDescriptor(OpNs4pluginsMessages_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		OpNs4pluginsMessages_MessageSet::PluginObject _object;
		UINT32 _context;

		OpProtobufBitField<2> has_bits_;
		mutable int                 encoded_size_;
	};


	/**
	 * Call NPObject class method 'invalidate'.
	 * 
	 * @field object Object on which to invoke invalidate.
	 * 
	 * @return None.
	 */
	class PluginObjectInvalidate
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 1
		};
		// END: Internal enums


		PluginObjectInvalidate(
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
		 * Check if the field @c object is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasObject() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c object.
		 */
		const OpNs4pluginsMessages_MessageSet::PluginObject & GetObject() const
		{
			return _object;
		}

		// Setters

		/**
		 * Set the field @c object.
		 */
		OpNs4pluginsMessages_MessageSet::PluginObject & GetObjectRef();

		static const OpProtobufMessage *GetMessageDescriptor(OpNs4pluginsMessages_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		OpNs4pluginsMessages_MessageSet::PluginObject _object;

		OpProtobufBitField<1> has_bits_;
		mutable int                 encoded_size_;
	};


	/**
	 * Call NPObject class method 'deallocate'.
	 * 
	 * @field object Object on which to invoke deallocate.
	 * 
	 * @return None.
	 */
	class PluginObjectDeallocate
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 1
		};
		// END: Internal enums


		PluginObjectDeallocate(
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
		 * Check if the field @c object is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasObject() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c object.
		 */
		const OpNs4pluginsMessages_MessageSet::PluginObject & GetObject() const
		{
			return _object;
		}

		// Setters

		/**
		 * Set the field @c object.
		 */
		OpNs4pluginsMessages_MessageSet::PluginObject & GetObjectRef();

		static const OpProtobufMessage *GetMessageDescriptor(OpNs4pluginsMessages_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		OpNs4pluginsMessages_MessageSet::PluginObject _object;

		OpProtobufBitField<1> has_bits_;
		mutable int                 encoded_size_;
	};


	/**
	 * Response to PluginCreateObject.
	 * 
	 * @field object Object created, if any.
	 */
	class PluginCreateObjectResponse
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 1
		};
		// END: Internal enums


		PluginCreateObjectResponse(
			)
			: _object(NULL)
			, encoded_size_(-1)
		{
		}
		OP_STATUS Construct(
			)
		{
			return OpStatus::OK;
		}
		~PluginCreateObjectResponse()
		{
			OP_DELETE(_object);
		}

		// Checkers
		/**
		 * Check if the field @c object is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasObject() const
		{
			return has_bits_.Reference().IsSet(0);
		}

		// Getters

		/**
		 * Get the field @c object.
		 */
		OpNs4pluginsMessages_MessageSet::PluginObject * GetObject() const
		{
			return _object;
		}

		// Setters

		/**
		 * Set the field @c object.
		 */
		void SetObject(OpNs4pluginsMessages_MessageSet::PluginObject * v);

		static const OpProtobufMessage *GetMessageDescriptor(OpNs4pluginsMessages_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		OpNs4pluginsMessages_MessageSet::PluginObject * _object;

		OpProtobufBitField<1> has_bits_;
		mutable int                 encoded_size_;
	};


	/**
	 * Create NPObject.
	 * 
	 * Sent as part of NPN_CreateObject.
	 * 
	 * @return PluginCreateObjectResponse.
	 */
	class PluginCreateObject
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 0
		};
		// END: Internal enums


		PluginCreateObject(
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

		// Getters

		// Setters

		static const OpProtobufMessage *GetMessageDescriptor(OpNs4pluginsMessages_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:

		OpProtobufBitField<1> has_bits_;
		mutable int                 encoded_size_;
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
	class PluginInvokeDefault
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 3
		};
		// END: Internal enums


		PluginInvokeDefault(
			)
			: _context(0)
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
		 * Check if the field @c object is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasObject() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c arguments is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasArguments() const
		{
			return has_bits_.Reference().IsSet(1);
		}

		/**
		 * Check if the field @c context is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasContext() const
		{
			return has_bits_.Reference().IsSet(2);
		}

		// Getters

		/**
		 * Get the field @c object.
		 */
		const OpNs4pluginsMessages_MessageSet::PluginObject & GetObject() const
		{
			return _object;
		}

		/**
		 * Get the field @c arguments.
		 */
		const OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginVariant> & GetArguments() const
		{
			return _arguments;
		}

		/**
		 * Get the field @c context.
		 */
		UINT32 GetContext() const
		{
			return _context;
		}

		// Setters

		/**
		 * Set the field @c object.
		 */
		OpNs4pluginsMessages_MessageSet::PluginObject & GetObjectRef();

		/**
		 * Set the field @c arguments.
		 */
		OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginVariant> & GetArgumentsRef();

		/**
		 * Set the field @c context.
		 */
		void SetContext(UINT32 v)
		{
			has_bits_.Reference().SetBit(2);
			_context = v;
		}

		static const OpProtobufMessage *GetMessageDescriptor(OpNs4pluginsMessages_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		OpNs4pluginsMessages_MessageSet::PluginObject _object;
		OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginVariant> _arguments;
		UINT32 _context;

		OpProtobufBitField<3> has_bits_;
		mutable int                 encoded_size_;
	};


	/**
	 * NPIdentifier representation.
	 * 
	 * @field identifier Browser identifier.
	 * @field isString True if the identifier represents a string.
	 * @field intValue Integer value represented by this identifier, if not
	 *        a string.
	 */
	class PluginIdentifier
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 3
		};
		// END: Internal enums


		PluginIdentifier(
			UINT64 identifier_arg = 0,
			BOOL is_string_arg = FALSE
			)
			: _identifier(identifier_arg)
			, _isString(is_string_arg)
			, _intValue(0)
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
		 * Check if the field @c identifier is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasIdentifier() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c isString is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasIsString() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c intValue is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasIntValue() const
		{
			return has_bits_.Reference().IsSet(2);
		}

		// Getters

		/**
		 * Get the field @c identifier.
		 */
		UINT64 GetIdentifier() const
		{
			return _identifier;
		}

		/**
		 * Get the field @c isString.
		 */
		BOOL GetIsString() const
		{
			return _isString;
		}

		/**
		 * Get the field @c intValue.
		 */
		INT32 GetIntValue() const
		{
			return _intValue;
		}

		// Setters

		/**
		 * Set the field @c identifier.
		 */
		void SetIdentifier(UINT64 v)
		{
			_identifier = v;
		}

		/**
		 * Set the field @c isString.
		 */
		void SetIsString(BOOL v)
		{
			_isString = v;
		}

		/**
		 * Set the field @c intValue.
		 */
		void SetIntValue(INT32 v)
		{
			has_bits_.Reference().SetBit(2);
			_intValue = v;
		}

		static const OpProtobufMessage *GetMessageDescriptor(OpNs4pluginsMessages_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		UINT64 _identifier;
		BOOL _isString;
		INT32 _intValue;

		OpProtobufBitField<3> has_bits_;
		mutable int                 encoded_size_;
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
	class PluginInvoke
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 4
		};
		// END: Internal enums


		PluginInvoke(
			)
			: _context(0)
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
		 * Check if the field @c object is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasObject() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c method is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasMethod() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c arguments is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasArguments() const
		{
			return has_bits_.Reference().IsSet(2);
		}

		/**
		 * Check if the field @c context is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasContext() const
		{
			return has_bits_.Reference().IsSet(3);
		}

		// Getters

		/**
		 * Get the field @c object.
		 */
		const OpNs4pluginsMessages_MessageSet::PluginObject & GetObject() const
		{
			return _object;
		}

		/**
		 * Get the field @c method.
		 */
		const OpNs4pluginsMessages_MessageSet::PluginIdentifier & GetMethod() const
		{
			return _method;
		}

		/**
		 * Get the field @c arguments.
		 */
		const OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginVariant> & GetArguments() const
		{
			return _arguments;
		}

		/**
		 * Get the field @c context.
		 */
		UINT32 GetContext() const
		{
			return _context;
		}

		// Setters

		/**
		 * Set the field @c object.
		 */
		OpNs4pluginsMessages_MessageSet::PluginObject & GetObjectRef();

		/**
		 * Set the field @c method.
		 */
		OpNs4pluginsMessages_MessageSet::PluginIdentifier & GetMethodRef();

		/**
		 * Set the field @c arguments.
		 */
		OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginVariant> & GetArgumentsRef();

		/**
		 * Set the field @c context.
		 */
		void SetContext(UINT32 v)
		{
			has_bits_.Reference().SetBit(3);
			_context = v;
		}

		static const OpProtobufMessage *GetMessageDescriptor(OpNs4pluginsMessages_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		OpNs4pluginsMessages_MessageSet::PluginObject _object;
		OpNs4pluginsMessages_MessageSet::PluginIdentifier _method;
		OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginVariant> _arguments;
		UINT32 _context;

		OpProtobufBitField<4> has_bits_;
		mutable int                 encoded_size_;
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
	class PluginRemoveProperty
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 3
		};
		// END: Internal enums


		PluginRemoveProperty(
			)
			: _context(0)
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
		 * Check if the field @c object is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasObject() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c property is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasProperty() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c context is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasContext() const
		{
			return has_bits_.Reference().IsSet(2);
		}

		// Getters

		/**
		 * Get the field @c object.
		 */
		const OpNs4pluginsMessages_MessageSet::PluginObject & GetObject() const
		{
			return _object;
		}

		/**
		 * Get the field @c property.
		 */
		const OpNs4pluginsMessages_MessageSet::PluginIdentifier & GetProperty() const
		{
			return _property;
		}

		/**
		 * Get the field @c context.
		 */
		UINT32 GetContext() const
		{
			return _context;
		}

		// Setters

		/**
		 * Set the field @c object.
		 */
		OpNs4pluginsMessages_MessageSet::PluginObject & GetObjectRef();

		/**
		 * Set the field @c property.
		 */
		OpNs4pluginsMessages_MessageSet::PluginIdentifier & GetPropertyRef();

		/**
		 * Set the field @c context.
		 */
		void SetContext(UINT32 v)
		{
			has_bits_.Reference().SetBit(2);
			_context = v;
		}

		static const OpProtobufMessage *GetMessageDescriptor(OpNs4pluginsMessages_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		OpNs4pluginsMessages_MessageSet::PluginObject _object;
		OpNs4pluginsMessages_MessageSet::PluginIdentifier _property;
		UINT32 _context;

		OpProtobufBitField<3> has_bits_;
		mutable int                 encoded_size_;
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
	class PluginHasProperty
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 3
		};
		// END: Internal enums


		PluginHasProperty(
			)
			: _context(0)
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
		 * Check if the field @c object is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasObject() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c property is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasProperty() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c context is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasContext() const
		{
			return has_bits_.Reference().IsSet(2);
		}

		// Getters

		/**
		 * Get the field @c object.
		 */
		const OpNs4pluginsMessages_MessageSet::PluginObject & GetObject() const
		{
			return _object;
		}

		/**
		 * Get the field @c property.
		 */
		const OpNs4pluginsMessages_MessageSet::PluginIdentifier & GetProperty() const
		{
			return _property;
		}

		/**
		 * Get the field @c context.
		 */
		UINT32 GetContext() const
		{
			return _context;
		}

		// Setters

		/**
		 * Set the field @c object.
		 */
		OpNs4pluginsMessages_MessageSet::PluginObject & GetObjectRef();

		/**
		 * Set the field @c property.
		 */
		OpNs4pluginsMessages_MessageSet::PluginIdentifier & GetPropertyRef();

		/**
		 * Set the field @c context.
		 */
		void SetContext(UINT32 v)
		{
			has_bits_.Reference().SetBit(2);
			_context = v;
		}

		static const OpProtobufMessage *GetMessageDescriptor(OpNs4pluginsMessages_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		OpNs4pluginsMessages_MessageSet::PluginObject _object;
		OpNs4pluginsMessages_MessageSet::PluginIdentifier _property;
		UINT32 _context;

		OpProtobufBitField<3> has_bits_;
		mutable int                 encoded_size_;
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
	class PluginHasMethod
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 3
		};
		// END: Internal enums


		PluginHasMethod(
			)
			: _context(0)
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
		 * Check if the field @c object is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasObject() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c method is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasMethod() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c context is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasContext() const
		{
			return has_bits_.Reference().IsSet(2);
		}

		// Getters

		/**
		 * Get the field @c object.
		 */
		const OpNs4pluginsMessages_MessageSet::PluginObject & GetObject() const
		{
			return _object;
		}

		/**
		 * Get the field @c method.
		 */
		const OpNs4pluginsMessages_MessageSet::PluginIdentifier & GetMethod() const
		{
			return _method;
		}

		/**
		 * Get the field @c context.
		 */
		UINT32 GetContext() const
		{
			return _context;
		}

		// Setters

		/**
		 * Set the field @c object.
		 */
		OpNs4pluginsMessages_MessageSet::PluginObject & GetObjectRef();

		/**
		 * Set the field @c method.
		 */
		OpNs4pluginsMessages_MessageSet::PluginIdentifier & GetMethodRef();

		/**
		 * Set the field @c context.
		 */
		void SetContext(UINT32 v)
		{
			has_bits_.Reference().SetBit(2);
			_context = v;
		}

		static const OpProtobufMessage *GetMessageDescriptor(OpNs4pluginsMessages_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		OpNs4pluginsMessages_MessageSet::PluginObject _object;
		OpNs4pluginsMessages_MessageSet::PluginIdentifier _method;
		UINT32 _context;

		OpProtobufBitField<3> has_bits_;
		mutable int                 encoded_size_;
	};


	/**
	 * Response to PluginLookupIdentifier.
	 * 
	 * @field stringValue The returned value.
	 * 
	 * @return None.
	 */
	class PluginLookupIdentifierResponse
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 1
		};
		// END: Internal enums


		PluginLookupIdentifierResponse(
			const UniString & string_value_arg = UniString()
			)
			: _stringValue(string_value_arg)
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
		 * Check if the field @c stringValue is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasStringValue() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c stringValue.
		 */
		const UniString & GetStringValue() const
		{
			return _stringValue;
		}

		// Setters

		/**
		 * Set the field @c stringValue.
		 */
		OP_STATUS SetStringValue(const UniString & v);

		/**
		 * Set the field @c stringValue.
		 */
		OP_STATUS SetStringValue(const uni_char * v, int l = KAll);

		static const OpProtobufMessage *GetMessageDescriptor(OpNs4pluginsMessages_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		UniString _stringValue;

		OpProtobufBitField<1> has_bits_;
		mutable int                 encoded_size_;
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
	class PluginLookupIdentifier
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 1
		};
		// END: Internal enums


		PluginLookupIdentifier(
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
		 * Check if the field @c identifier is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasIdentifier() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c identifier.
		 */
		const OpNs4pluginsMessages_MessageSet::PluginIdentifier & GetIdentifier() const
		{
			return _identifier;
		}

		// Setters

		/**
		 * Set the field @c identifier.
		 */
		OpNs4pluginsMessages_MessageSet::PluginIdentifier & GetIdentifierRef();

		static const OpProtobufMessage *GetMessageDescriptor(OpNs4pluginsMessages_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		OpNs4pluginsMessages_MessageSet::PluginIdentifier _identifier;

		OpProtobufBitField<1> has_bits_;
		mutable int                 encoded_size_;
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
	class PluginGetIntIdentifier
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 1
		};
		// END: Internal enums


		PluginGetIntIdentifier(
			INT32 number_arg = 0
			)
			: _number(number_arg)
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
		 * Check if the field @c number is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasNumber() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c number.
		 */
		INT32 GetNumber() const
		{
			return _number;
		}

		// Setters

		/**
		 * Set the field @c number.
		 */
		void SetNumber(INT32 v)
		{
			_number = v;
		}

		static const OpProtobufMessage *GetMessageDescriptor(OpNs4pluginsMessages_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		INT32 _number;

		OpProtobufBitField<1> has_bits_;
		mutable int                 encoded_size_;
	};


	/**
	 * NPVariant representation.
	 * 
	 * @field voidValue JavaScript's undefined.
	 * @field nullValue JavaScript's null.
	 * @field boolValue Boolean value.
	 * @field intValue Integer value.
	 * @field doubleValue Floating point value.
	 * @field stringValue String value.
	 * @field objectValue Object value.
	 */
	class PluginVariant
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 7
		};
		// END: Internal enums


		PluginVariant(
			const UniString * string_value_arg = NULL
			)
			: _voidValue(FALSE)
			, _nullValue(FALSE)
			, _boolValue(FALSE)
			, _intValue(0)
			, _doubleValue(0.0)
			, _objectValue(NULL)
			, encoded_size_(-1)
		{
			if (string_value_arg)
			{
				_stringValue = *string_value_arg;
				has_bits_.Reference().SetBit(5);

			}
		}
		OP_STATUS Construct(
			)
		{
			return OpStatus::OK;
		}
		~PluginVariant()
		{
			OP_DELETE(_objectValue);
		}

		// Checkers
		/**
		 * Check if the field @c voidValue is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasVoidValue() const
		{
			return has_bits_.Reference().IsSet(0);
		}

		/**
		 * Check if the field @c nullValue is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasNullValue() const
		{
			return has_bits_.Reference().IsSet(1);
		}

		/**
		 * Check if the field @c boolValue is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasBoolValue() const
		{
			return has_bits_.Reference().IsSet(2);
		}

		/**
		 * Check if the field @c intValue is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasIntValue() const
		{
			return has_bits_.Reference().IsSet(3);
		}

		/**
		 * Check if the field @c doubleValue is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasDoubleValue() const
		{
			return has_bits_.Reference().IsSet(4);
		}

		/**
		 * Check if the field @c stringValue is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasStringValue() const
		{
			return has_bits_.Reference().IsSet(5);
		}

		/**
		 * Check if the field @c objectValue is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasObjectValue() const
		{
			return has_bits_.Reference().IsSet(6);
		}

		// Getters

		/**
		 * Get the field @c voidValue.
		 */
		BOOL GetVoidValue() const
		{
			return _voidValue;
		}

		/**
		 * Get the field @c nullValue.
		 */
		BOOL GetNullValue() const
		{
			return _nullValue;
		}

		/**
		 * Get the field @c boolValue.
		 */
		BOOL GetBoolValue() const
		{
			return _boolValue;
		}

		/**
		 * Get the field @c intValue.
		 */
		INT64 GetIntValue() const
		{
			return _intValue;
		}

		/**
		 * Get the field @c doubleValue.
		 */
		double GetDoubleValue() const
		{
			return _doubleValue;
		}

		/**
		 * Get the field @c stringValue.
		 */
		const UniString & GetStringValue() const
		{
			return _stringValue;
		}

		/**
		 * Get the field @c objectValue.
		 */
		OpNs4pluginsMessages_MessageSet::PluginObject * GetObjectValue() const
		{
			return _objectValue;
		}

		// Setters

		/**
		 * Set the field @c voidValue.
		 */
		void SetVoidValue(BOOL v)
		{
			has_bits_.Reference().SetBit(0);
			_voidValue = v;
		}

		/**
		 * Set the field @c nullValue.
		 */
		void SetNullValue(BOOL v)
		{
			has_bits_.Reference().SetBit(1);
			_nullValue = v;
		}

		/**
		 * Set the field @c boolValue.
		 */
		void SetBoolValue(BOOL v)
		{
			has_bits_.Reference().SetBit(2);
			_boolValue = v;
		}

		/**
		 * Set the field @c intValue.
		 */
		void SetIntValue(INT64 v)
		{
			has_bits_.Reference().SetBit(3);
			_intValue = v;
		}

		/**
		 * Set the field @c doubleValue.
		 */
		void SetDoubleValue(double v)
		{
			has_bits_.Reference().SetBit(4);
			_doubleValue = v;
		}

		/**
		 * Set the field @c stringValue.
		 */
		OP_STATUS SetStringValue(const UniString & v);

		/**
		 * Set the field @c stringValue.
		 */
		OP_STATUS SetStringValue(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c objectValue.
		 */
		void SetObjectValue(OpNs4pluginsMessages_MessageSet::PluginObject * v);

		static const OpProtobufMessage *GetMessageDescriptor(OpNs4pluginsMessages_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		BOOL _voidValue;
		BOOL _nullValue;
		BOOL _boolValue;
		INT64 _intValue;
		double _doubleValue;
		UniString _stringValue;
		OpNs4pluginsMessages_MessageSet::PluginObject * _objectValue;

		OpProtobufBitField<7> has_bits_;
		mutable int                 encoded_size_;
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
	class PluginSetProperty
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 4
		};
		// END: Internal enums


		PluginSetProperty(
			)
			: _context(0)
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
		 * Check if the field @c property is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasProperty() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c object is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasObject() const
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
		 * Check if the field @c context is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasContext() const
		{
			return has_bits_.Reference().IsSet(3);
		}

		// Getters

		/**
		 * Get the field @c property.
		 */
		const OpNs4pluginsMessages_MessageSet::PluginIdentifier & GetProperty() const
		{
			return _property;
		}

		/**
		 * Get the field @c object.
		 */
		const OpNs4pluginsMessages_MessageSet::PluginObject & GetObject() const
		{
			return _object;
		}

		/**
		 * Get the field @c value.
		 */
		const OpNs4pluginsMessages_MessageSet::PluginVariant & GetValue() const
		{
			return _value;
		}

		/**
		 * Get the field @c context.
		 */
		UINT32 GetContext() const
		{
			return _context;
		}

		// Setters

		/**
		 * Set the field @c property.
		 */
		OpNs4pluginsMessages_MessageSet::PluginIdentifier & GetPropertyRef();

		/**
		 * Set the field @c object.
		 */
		OpNs4pluginsMessages_MessageSet::PluginObject & GetObjectRef();

		/**
		 * Set the field @c value.
		 */
		OpNs4pluginsMessages_MessageSet::PluginVariant & GetValueRef();

		/**
		 * Set the field @c context.
		 */
		void SetContext(UINT32 v)
		{
			has_bits_.Reference().SetBit(3);
			_context = v;
		}

		static const OpProtobufMessage *GetMessageDescriptor(OpNs4pluginsMessages_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		OpNs4pluginsMessages_MessageSet::PluginIdentifier _property;
		OpNs4pluginsMessages_MessageSet::PluginObject _object;
		OpNs4pluginsMessages_MessageSet::PluginVariant _value;
		UINT32 _context;

		OpProtobufBitField<4> has_bits_;
		mutable int                 encoded_size_;
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
	class PluginGetProperty
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 3
		};
		// END: Internal enums


		PluginGetProperty(
			)
			: _context(0)
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
		 * Check if the field @c object is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasObject() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c property is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasProperty() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c context is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasContext() const
		{
			return has_bits_.Reference().IsSet(2);
		}

		// Getters

		/**
		 * Get the field @c object.
		 */
		const OpNs4pluginsMessages_MessageSet::PluginObject & GetObject() const
		{
			return _object;
		}

		/**
		 * Get the field @c property.
		 */
		const OpNs4pluginsMessages_MessageSet::PluginIdentifier & GetProperty() const
		{
			return _property;
		}

		/**
		 * Get the field @c context.
		 */
		UINT32 GetContext() const
		{
			return _context;
		}

		// Setters

		/**
		 * Set the field @c object.
		 */
		OpNs4pluginsMessages_MessageSet::PluginObject & GetObjectRef();

		/**
		 * Set the field @c property.
		 */
		OpNs4pluginsMessages_MessageSet::PluginIdentifier & GetPropertyRef();

		/**
		 * Set the field @c context.
		 */
		void SetContext(UINT32 v)
		{
			has_bits_.Reference().SetBit(2);
			_context = v;
		}

		static const OpProtobufMessage *GetMessageDescriptor(OpNs4pluginsMessages_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		OpNs4pluginsMessages_MessageSet::PluginObject _object;
		OpNs4pluginsMessages_MessageSet::PluginIdentifier _property;
		UINT32 _context;

		OpProtobufBitField<3> has_bits_;
		mutable int                 encoded_size_;
	};


	/**
	 * Response to PluginGet*Identifier(s).
	 * 
	 * @field identifiers Identifier(s).
	 */
	class PluginIdentifiers
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 1
		};
		// END: Internal enums


		PluginIdentifiers(
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
		 * Check if the field @c identifiers is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasIdentifiers() const
		{
			return has_bits_.Reference().IsSet(0);
		}

		// Getters

		/**
		 * Get the field @c identifiers.
		 */
		const OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginIdentifier> & GetIdentifiers() const
		{
			return _identifiers;
		}

		// Setters

		/**
		 * Set the field @c identifiers.
		 */
		OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginIdentifier> & GetIdentifiersRef();

		static const OpProtobufMessage *GetMessageDescriptor(OpNs4pluginsMessages_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginIdentifier> _identifiers;

		OpProtobufBitField<1> has_bits_;
		mutable int                 encoded_size_;
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
	class PluginGetStringIdentifiers
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 1
		};
		// END: Internal enums


		PluginGetStringIdentifiers(
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
		 * Check if the field @c names is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasNames() const
		{
			return has_bits_.Reference().IsSet(0);
		}

		// Getters

		/**
		 * Get the field @c names.
		 */
		const OpProtobufValueVector<UniString> & GetNames() const
		{
			return _names;
		}

		// Setters

		/**
		 * Set the field @c names.
		 */
		OpProtobufValueVector<UniString> & GetNamesRef();

		static const OpProtobufMessage *GetMessageDescriptor(OpNs4pluginsMessages_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		OpProtobufValueVector<UniString> _names;

		OpProtobufBitField<1> has_bits_;
		mutable int                 encoded_size_;
	};


	/**
	 * Update the reference count of an NPObject.
	 * 
	 * Sent by the browser to the plug-in component when the reference count of an
	 * object changes.
	 * 
	 * @field object Object whose reference count has changed.
	 */
	class PluginObjectState
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 1
		};
		// END: Internal enums


		PluginObjectState(
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
		 * Check if the field @c object is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasObject() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c object.
		 */
		const OpNs4pluginsMessages_MessageSet::PluginObject & GetObject() const
		{
			return _object;
		}

		// Setters

		/**
		 * Set the field @c object.
		 */
		OpNs4pluginsMessages_MessageSet::PluginObject & GetObjectRef();

		static const OpProtobufMessage *GetMessageDescriptor(OpNs4pluginsMessages_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		OpNs4pluginsMessages_MessageSet::PluginObject _object;

		OpProtobufBitField<1> has_bits_;
		mutable int                 encoded_size_;
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
	class PluginReleaseObject
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 1
		};
		// END: Internal enums


		PluginReleaseObject(
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
		 * Check if the field @c object is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasObject() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c object.
		 */
		const OpNs4pluginsMessages_MessageSet::PluginObject & GetObject() const
		{
			return _object;
		}

		// Setters

		/**
		 * Set the field @c object.
		 */
		OpNs4pluginsMessages_MessageSet::PluginObject & GetObjectRef();

		static const OpProtobufMessage *GetMessageDescriptor(OpNs4pluginsMessages_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		OpNs4pluginsMessages_MessageSet::PluginObject _object;

		OpProtobufBitField<1> has_bits_;
		mutable int                 encoded_size_;
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
	class PluginRetainObject
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 1
		};
		// END: Internal enums


		PluginRetainObject(
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
		 * Check if the field @c object is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasObject() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c object.
		 */
		const OpNs4pluginsMessages_MessageSet::PluginObject & GetObject() const
		{
			return _object;
		}

		// Setters

		/**
		 * Set the field @c object.
		 */
		OpNs4pluginsMessages_MessageSet::PluginObject & GetObjectRef();

		static const OpProtobufMessage *GetMessageDescriptor(OpNs4pluginsMessages_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		OpNs4pluginsMessages_MessageSet::PluginObject _object;

		OpProtobufBitField<1> has_bits_;
		mutable int                 encoded_size_;
	};


	/**
	 * Response to NPAPI stream requests.
	 * 
	 * @field npError NPError value.
	 */
	class PluginError
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 1
		};
		// END: Internal enums


		PluginError(
			INT32 np_error_arg = 0
			)
			: _npError(np_error_arg)
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
		 * Check if the field @c npError is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasNpError() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c npError.
		 */
		INT32 GetNpError() const
		{
			return _npError;
		}

		// Setters

		/**
		 * Set the field @c npError.
		 */
		void SetNpError(INT32 v)
		{
			_npError = v;
		}

		static const OpProtobufMessage *GetMessageDescriptor(OpNs4pluginsMessages_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		INT32 _npError;

		OpProtobufBitField<1> has_bits_;
		mutable int                 encoded_size_;
	};


	/**
	 * Response to NPRuntime requests.
	 * 
	 * @field success true if successful, false otherwise.
	 * @field result PluginVariant value returned by request, if applicable.
	 */
	class PluginResult
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 2
		};
		// END: Internal enums


		PluginResult(
			BOOL success_arg = FALSE
			)
			: _success(success_arg)
			, _result(NULL)
			, encoded_size_(-1)
		{
		}
		OP_STATUS Construct(
			)
		{
			return OpStatus::OK;
		}
		~PluginResult()
		{
			OP_DELETE(_result);
		}

		// Checkers
		/**
		 * Check if the field @c success is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasSuccess() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c result is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasResult() const
		{
			return has_bits_.Reference().IsSet(1);
		}

		// Getters

		/**
		 * Get the field @c success.
		 */
		BOOL GetSuccess() const
		{
			return _success;
		}

		/**
		 * Get the field @c result.
		 */
		OpNs4pluginsMessages_MessageSet::PluginVariant * GetResult() const
		{
			return _result;
		}

		// Setters

		/**
		 * Set the field @c success.
		 */
		void SetSuccess(BOOL v)
		{
			_success = v;
		}

		/**
		 * Set the field @c result.
		 */
		void SetResult(OpNs4pluginsMessages_MessageSet::PluginVariant * v);

		static const OpProtobufMessage *GetMessageDescriptor(OpNs4pluginsMessages_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		BOOL _success;
		OpNs4pluginsMessages_MessageSet::PluginVariant * _result;

		OpProtobufBitField<2> has_bits_;
		mutable int                 encoded_size_;
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
	class PluginEvaluate
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 3
		};
		// END: Internal enums


		PluginEvaluate(
			const UniString & script_arg = UniString()
			)
			: _script(script_arg)
			, _object(NULL)
			, _context(0)
			, encoded_size_(-1)
		{
		}
		OP_STATUS Construct(
			)
		{
			return OpStatus::OK;
		}
		~PluginEvaluate()
		{
			OP_DELETE(_object);
		}

		// Checkers
		/**
		 * Check if the field @c script is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasScript() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c object is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasObject() const
		{
			return has_bits_.Reference().IsSet(1);
		}

		/**
		 * Check if the field @c context is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasContext() const
		{
			return has_bits_.Reference().IsSet(2);
		}

		// Getters

		/**
		 * Get the field @c script.
		 */
		const UniString & GetScript() const
		{
			return _script;
		}

		/**
		 * Get the field @c object.
		 */
		OpNs4pluginsMessages_MessageSet::PluginObject * GetObject() const
		{
			return _object;
		}

		/**
		 * Get the field @c context.
		 */
		UINT32 GetContext() const
		{
			return _context;
		}

		// Setters

		/**
		 * Set the field @c script.
		 */
		OP_STATUS SetScript(const UniString & v);

		/**
		 * Set the field @c script.
		 */
		OP_STATUS SetScript(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c object.
		 */
		void SetObject(OpNs4pluginsMessages_MessageSet::PluginObject * v);

		/**
		 * Set the field @c context.
		 */
		void SetContext(UINT32 v)
		{
			has_bits_.Reference().SetBit(2);
			_context = v;
		}

		static const OpProtobufMessage *GetMessageDescriptor(OpNs4pluginsMessages_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		UniString _script;
		OpNs4pluginsMessages_MessageSet::PluginObject * _object;
		UINT32 _context;

		OpProtobufBitField<3> has_bits_;
		mutable int                 encoded_size_;
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
	class PluginSetValue
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 4
		};
		// END: Internal enums


		PluginSetValue(
			INT32 variable_arg = 0
			)
			: _variable(variable_arg)
			, _objectValue(NULL)
			, _integerValue(0)
			, _booleanValue(FALSE)
			, encoded_size_(-1)
		{
		}
		OP_STATUS Construct(
			)
		{
			return OpStatus::OK;
		}
		~PluginSetValue()
		{
			OP_DELETE(_objectValue);
		}

		// Checkers
		/**
		 * Check if the field @c variable is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasVariable() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c objectValue is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasObjectValue() const
		{
			return has_bits_.Reference().IsSet(1);
		}

		/**
		 * Check if the field @c integerValue is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasIntegerValue() const
		{
			return has_bits_.Reference().IsSet(2);
		}

		/**
		 * Check if the field @c booleanValue is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasBooleanValue() const
		{
			return has_bits_.Reference().IsSet(3);
		}

		// Getters

		/**
		 * Get the field @c variable.
		 */
		INT32 GetVariable() const
		{
			return _variable;
		}

		/**
		 * Get the field @c objectValue.
		 */
		OpNs4pluginsMessages_MessageSet::PluginObject * GetObjectValue() const
		{
			return _objectValue;
		}

		/**
		 * Get the field @c integerValue.
		 */
		INT64 GetIntegerValue() const
		{
			return _integerValue;
		}

		/**
		 * Get the field @c booleanValue.
		 */
		BOOL GetBooleanValue() const
		{
			return _booleanValue;
		}

		// Setters

		/**
		 * Set the field @c variable.
		 */
		void SetVariable(INT32 v)
		{
			_variable = v;
		}

		/**
		 * Set the field @c objectValue.
		 */
		void SetObjectValue(OpNs4pluginsMessages_MessageSet::PluginObject * v);

		/**
		 * Set the field @c integerValue.
		 */
		void SetIntegerValue(INT64 v)
		{
			has_bits_.Reference().SetBit(2);
			_integerValue = v;
		}

		/**
		 * Set the field @c booleanValue.
		 */
		void SetBooleanValue(BOOL v)
		{
			has_bits_.Reference().SetBit(3);
			_booleanValue = v;
		}

		static const OpProtobufMessage *GetMessageDescriptor(OpNs4pluginsMessages_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		INT32 _variable;
		OpNs4pluginsMessages_MessageSet::PluginObject * _objectValue;
		INT64 _integerValue;
		BOOL _booleanValue;

		OpProtobufBitField<4> has_bits_;
		mutable int                 encoded_size_;
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
	class PluginGetValueResponse
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 5
		};
		// END: Internal enums


		PluginGetValueResponse(
			INT32 np_error_arg = 0,
			const UniString * string_value_arg = NULL
			)
			: _npError(np_error_arg)
			, _objectValue(NULL)
			, _booleanValue(FALSE)
			, _integerValue(0)
			, encoded_size_(-1)
		{
			if (string_value_arg)
			{
				_stringValue = *string_value_arg;
				has_bits_.Reference().SetBit(4);

			}
		}
		OP_STATUS Construct(
			)
		{
			return OpStatus::OK;
		}
		~PluginGetValueResponse()
		{
			OP_DELETE(_objectValue);
		}

		// Checkers
		/**
		 * Check if the field @c npError is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasNpError() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c objectValue is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasObjectValue() const
		{
			return has_bits_.Reference().IsSet(1);
		}

		/**
		 * Check if the field @c booleanValue is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasBooleanValue() const
		{
			return has_bits_.Reference().IsSet(2);
		}

		/**
		 * Check if the field @c integerValue is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasIntegerValue() const
		{
			return has_bits_.Reference().IsSet(3);
		}

		/**
		 * Check if the field @c stringValue is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasStringValue() const
		{
			return has_bits_.Reference().IsSet(4);
		}

		// Getters

		/**
		 * Get the field @c npError.
		 */
		INT32 GetNpError() const
		{
			return _npError;
		}

		/**
		 * Get the field @c objectValue.
		 */
		OpNs4pluginsMessages_MessageSet::PluginObject * GetObjectValue() const
		{
			return _objectValue;
		}

		/**
		 * Get the field @c booleanValue.
		 */
		BOOL GetBooleanValue() const
		{
			return _booleanValue;
		}

		/**
		 * Get the field @c integerValue.
		 */
		INT64 GetIntegerValue() const
		{
			return _integerValue;
		}

		/**
		 * Get the field @c stringValue.
		 */
		const UniString & GetStringValue() const
		{
			return _stringValue;
		}

		// Setters

		/**
		 * Set the field @c npError.
		 */
		void SetNpError(INT32 v)
		{
			_npError = v;
		}

		/**
		 * Set the field @c objectValue.
		 */
		void SetObjectValue(OpNs4pluginsMessages_MessageSet::PluginObject * v);

		/**
		 * Set the field @c booleanValue.
		 */
		void SetBooleanValue(BOOL v)
		{
			has_bits_.Reference().SetBit(2);
			_booleanValue = v;
		}

		/**
		 * Set the field @c integerValue.
		 */
		void SetIntegerValue(INT64 v)
		{
			has_bits_.Reference().SetBit(3);
			_integerValue = v;
		}

		/**
		 * Set the field @c stringValue.
		 */
		OP_STATUS SetStringValue(const UniString & v);

		/**
		 * Set the field @c stringValue.
		 */
		OP_STATUS SetStringValue(const uni_char * v, int l = KAll);

		static const OpProtobufMessage *GetMessageDescriptor(OpNs4pluginsMessages_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		INT32 _npError;
		OpNs4pluginsMessages_MessageSet::PluginObject * _objectValue;
		BOOL _booleanValue;
		INT64 _integerValue;
		UniString _stringValue;

		OpProtobufBitField<5> has_bits_;
		mutable int                 encoded_size_;
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
	class PluginGetValue
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 1
		};
		// END: Internal enums


		PluginGetValue(
			INT32 variable_arg = 0
			)
			: _variable(variable_arg)
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
		 * Check if the field @c variable is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasVariable() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c variable.
		 */
		INT32 GetVariable() const
		{
			return _variable;
		}

		// Setters

		/**
		 * Set the field @c variable.
		 */
		void SetVariable(INT32 v)
		{
			_variable = v;
		}

		static const OpProtobufMessage *GetMessageDescriptor(OpNs4pluginsMessages_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		INT32 _variable;

		OpProtobufBitField<1> has_bits_;
		mutable int                 encoded_size_;
	};


	/**
	 * Response to PluginDestroy.
	 * 
	 * @field npError Return value from NPP_Destroy.
	 * @field saved Plug-in specific library pointer, opaque to Opera.
	 * 
	 * @return None.
	 */
	class PluginDestroyResponse
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 2
		};
		// END: Internal enums


		PluginDestroyResponse(
			INT32 np_error_arg = 0,
			UINT64 saved_arg = 0
			)
			: _npError(np_error_arg)
			, _saved(saved_arg)
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
		 * Check if the field @c npError is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasNpError() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c saved is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasSaved() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c npError.
		 */
		INT32 GetNpError() const
		{
			return _npError;
		}

		/**
		 * Get the field @c saved.
		 */
		UINT64 GetSaved() const
		{
			return _saved;
		}

		// Setters

		/**
		 * Set the field @c npError.
		 */
		void SetNpError(INT32 v)
		{
			_npError = v;
		}

		/**
		 * Set the field @c saved.
		 */
		void SetSaved(UINT64 v)
		{
			_saved = v;
		}

		static const OpProtobufMessage *GetMessageDescriptor(OpNs4pluginsMessages_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		INT32 _npError;
		UINT64 _saved;

		OpProtobufBitField<2> has_bits_;
		mutable int                 encoded_size_;
	};


	/**
	 * Destroy a plug-in instance by calling NPP_Destroy.
	 * 
	 * @return PluginDestroyResponse.
	 */
	class PluginDestroy
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 0
		};
		// END: Internal enums


		PluginDestroy(
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

		// Getters

		// Setters

		static const OpProtobufMessage *GetMessageDescriptor(OpNs4pluginsMessages_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:

		OpProtobufBitField<1> has_bits_;
		mutable int                 encoded_size_;
	};


	/**
	 * Response to PluginNew.
	 * 
	 * @field npError Return value from NPP_New.
	 * 
	 * @return None.
	 */
	class PluginNewResponse
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 1
		};
		// END: Internal enums


		PluginNewResponse(
			INT32 np_error_arg = 0
			)
			: _npError(np_error_arg)
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
		 * Check if the field @c npError is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasNpError() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c npError.
		 */
		INT32 GetNpError() const
		{
			return _npError;
		}

		// Setters

		/**
		 * Set the field @c npError.
		 */
		void SetNpError(INT32 v)
		{
			_npError = v;
		}

		static const OpProtobufMessage *GetMessageDescriptor(OpNs4pluginsMessages_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		INT32 _npError;

		OpProtobufBitField<1> has_bits_;
		mutable int                 encoded_size_;
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
	class PluginNew
	{
	public:
		// BEGIN: Nested items

		// Message PluginNew.Argument
		typedef PluginNew_Argument Argument;

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 5
		};
		// END: Internal enums


		PluginNew(
			const UniString & content_type_arg = UniString(),
			INT32 mode_arg = 0,
			UINT64 saved_arg = 0
			)
			: _contentType(content_type_arg)
			, _mode(mode_arg)
			, _saved(saved_arg)
			, _adapterAddress(NULL)
			, encoded_size_(-1)
		{
		}
		OP_STATUS Construct(
			)
		{
			return OpStatus::OK;
		}
		~PluginNew()
		{
			OP_DELETE(_adapterAddress);
		}

		// Checkers
		/**
		 * Check if the field @c contentType is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasContentType() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c mode is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasMode() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c arguments is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasArguments() const
		{
			return has_bits_.Reference().IsSet(2);
		}

		/**
		 * Check if the field @c saved is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasSaved() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c adapterAddress is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasAdapterAddress() const
		{
			return has_bits_.Reference().IsSet(4);
		}

		// Getters

		/**
		 * Get the field @c contentType.
		 */
		const UniString & GetContentType() const
		{
			return _contentType;
		}

		/**
		 * Get the field @c mode.
		 */
		INT32 GetMode() const
		{
			return _mode;
		}

		/**
		 * Get the field @c arguments.
		 */
		const OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginNew_Argument> & GetArguments() const
		{
			return _arguments;
		}

		/**
		 * Get the field @c saved.
		 */
		UINT64 GetSaved() const
		{
			return _saved;
		}

		/**
		 * Get the field @c adapterAddress.
		 */
		OpNs4pluginsMessages_MessageSet::MessageAddress * GetAdapterAddress() const
		{
			return _adapterAddress;
		}

		// Setters

		/**
		 * Set the field @c contentType.
		 */
		OP_STATUS SetContentType(const UniString & v);

		/**
		 * Set the field @c contentType.
		 */
		OP_STATUS SetContentType(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c mode.
		 */
		void SetMode(INT32 v)
		{
			_mode = v;
		}

		/**
		 * Set the field @c arguments.
		 */
		OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginNew_Argument> & GetArgumentsRef();

		/**
		 * Set the field @c saved.
		 */
		void SetSaved(UINT64 v)
		{
			_saved = v;
		}

		/**
		 * Set the field @c adapterAddress.
		 */
		void SetAdapterAddress(OpNs4pluginsMessages_MessageSet::MessageAddress * v);

		static const OpProtobufMessage *GetMessageDescriptor(OpNs4pluginsMessages_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		UniString _contentType;
		INT32 _mode;
		OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginNew_Argument> _arguments;
		UINT64 _saved;
		OpNs4pluginsMessages_MessageSet::MessageAddress * _adapterAddress;

		OpProtobufBitField<5> has_bits_;
		mutable int                 encoded_size_;
	};


	/**
	 * OpMessageAddress representation.
	 * 
	 * @field manager Component Manager ID.
	 * @field component Manager-local component ID.
	 * @field channel Component-local channel ID.
	 */
	class MessageAddress
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 3
		};
		// END: Internal enums


		MessageAddress(
			INT32 manager_arg = 0,
			INT32 component_arg = 0,
			INT32 channel_arg = 0
			)
			: _manager(manager_arg)
			, _component(component_arg)
			, _channel(channel_arg)
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
		 * Check if the field @c manager is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasManager() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c component is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasComponent() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c channel is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasChannel() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c manager.
		 */
		INT32 GetManager() const
		{
			return _manager;
		}

		/**
		 * Get the field @c component.
		 */
		INT32 GetComponent() const
		{
			return _component;
		}

		/**
		 * Get the field @c channel.
		 */
		INT32 GetChannel() const
		{
			return _channel;
		}

		// Setters

		/**
		 * Set the field @c manager.
		 */
		void SetManager(INT32 v)
		{
			_manager = v;
		}

		/**
		 * Set the field @c component.
		 */
		void SetComponent(INT32 v)
		{
			_component = v;
		}

		/**
		 * Set the field @c channel.
		 */
		void SetChannel(INT32 v)
		{
			_channel = v;
		}

		static const OpProtobufMessage *GetMessageDescriptor(OpNs4pluginsMessages_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		INT32 _manager;
		INT32 _component;
		INT32 _channel;

		OpProtobufBitField<3> has_bits_;
		mutable int                 encoded_size_;
	};


	/**
	 * Release a library thorugh its NP_Shutdown method.
	 * 
	 * @return None.
	 */
	class PluginShutdown
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 0
		};
		// END: Internal enums


		PluginShutdown(
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

		// Getters

		// Setters

		static const OpProtobufMessage *GetMessageDescriptor(OpNs4pluginsMessages_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:

		OpProtobufBitField<1> has_bits_;
		mutable int                 encoded_size_;
	};


	/**
	 * Library loaded and initialized.
	 * 
	 * @field npError Return value from plug-in library NP_Initialize. Only valid if status is OpStatus::OK.
	 * 
	 * @return None.
	 */
	class PluginInitializeResponse
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 1
		};
		// END: Internal enums


		PluginInitializeResponse(
			INT32 np_error_arg = 0
			)
			: _npError(np_error_arg)
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
		 * Check if the field @c npError is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasNpError() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c npError.
		 */
		INT32 GetNpError() const
		{
			return _npError;
		}

		// Setters

		/**
		 * Set the field @c npError.
		 */
		void SetNpError(INT32 v)
		{
			_npError = v;
		}

		static const OpProtobufMessage *GetMessageDescriptor(OpNs4pluginsMessages_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		INT32 _npError;

		OpProtobufBitField<1> has_bits_;
		mutable int                 encoded_size_;
	};


	/**
	 * Initialize a plug-in library through its NP_Initialize method.
	 * 
	 * Ns4plugins will send this message to a plug-in component.
	 * 
	 * @return PluginInitializeResponse containing NP_Initialize return
	 *         value, or OpStatusMessage on error.
	 */
	class PluginInitialize
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 0
		};
		// END: Internal enums


		PluginInitialize(
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

		// Getters

		// Setters

		static const OpProtobufMessage *GetMessageDescriptor(OpNs4pluginsMessages_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:

		OpProtobufBitField<1> has_bits_;
		mutable int                 encoded_size_;
	};


	/**
	 * Response to PluginLoad.
	 * 
	 * @field status See OpStatus; OK if the plug-in loaded successfully.
	 * 
	 * @return None.
	 */
	class PluginLoadResponse
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 1
		};
		// END: Internal enums


		PluginLoadResponse(
			INT32 status_arg = 0
			)
			: _status(status_arg)
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
		 * Check if the field @c status is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasStatus() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c status.
		 */
		INT32 GetStatus() const
		{
			return _status;
		}

		// Setters

		/**
		 * Set the field @c status.
		 */
		void SetStatus(INT32 v)
		{
			_status = v;
		}

		static const OpProtobufMessage *GetMessageDescriptor(OpNs4pluginsMessages_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		INT32 _status;

		OpProtobufBitField<1> has_bits_;
		mutable int                 encoded_size_;
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
	class PluginLoad
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 1
		};
		// END: Internal enums


		PluginLoad(
			const UniString & path_arg = UniString()
			)
			: _path(path_arg)
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
		 * Check if the field @c path is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasPath() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c path.
		 */
		const UniString & GetPath() const
		{
			return _path;
		}

		// Setters

		/**
		 * Set the field @c path.
		 */
		OP_STATUS SetPath(const UniString & v);

		/**
		 * Set the field @c path.
		 */
		OP_STATUS SetPath(const uni_char * v, int l = KAll);

		static const OpProtobufMessage *GetMessageDescriptor(OpNs4pluginsMessages_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		UniString _path;

		OpProtobufBitField<1> has_bits_;
		mutable int                 encoded_size_;
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
	class PluginProbeResponse
	{
	public:
		// BEGIN: Nested items

		// Message PluginProbeResponse.ContentType
		typedef PluginProbeResponse_ContentType ContentType;

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 5
		};
		// END: Internal enums


		PluginProbeResponse(
			const UniString & path_arg = UniString(),
			const UniString & name_arg = UniString(),
			const UniString & description_arg = UniString(),
			const UniString & version_arg = UniString()
			)
			: _path(path_arg)
			, _name(name_arg)
			, _description(description_arg)
			, _version(version_arg)
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
		 * Check if the field @c path is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasPath() const
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
		 * Check if the field @c description is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasDescription() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c version is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasVersion() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c contentTypes is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasContentTypes() const
		{
			return has_bits_.Reference().IsSet(4);
		}

		// Getters

		/**
		 * Get the field @c path.
		 */
		const UniString & GetPath() const
		{
			return _path;
		}

		/**
		 * Get the field @c name.
		 */
		const UniString & GetName() const
		{
			return _name;
		}

		/**
		 * Get the field @c description.
		 */
		const UniString & GetDescription() const
		{
			return _description;
		}

		/**
		 * Get the field @c version.
		 */
		const UniString & GetVersion() const
		{
			return _version;
		}

		/**
		 * Get the field @c contentTypes.
		 */
		const OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginProbeResponse_ContentType> & GetContentTypes() const
		{
			return _contentTypes;
		}

		// Setters

		/**
		 * Set the field @c path.
		 */
		OP_STATUS SetPath(const UniString & v);

		/**
		 * Set the field @c path.
		 */
		OP_STATUS SetPath(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c name.
		 */
		OP_STATUS SetName(const UniString & v);

		/**
		 * Set the field @c name.
		 */
		OP_STATUS SetName(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c description.
		 */
		OP_STATUS SetDescription(const UniString & v);

		/**
		 * Set the field @c description.
		 */
		OP_STATUS SetDescription(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c version.
		 */
		OP_STATUS SetVersion(const UniString & v);

		/**
		 * Set the field @c version.
		 */
		OP_STATUS SetVersion(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c contentTypes.
		 */
		OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginProbeResponse_ContentType> & GetContentTypesRef();

		static const OpProtobufMessage *GetMessageDescriptor(OpNs4pluginsMessages_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		UniString _path;
		UniString _name;
		UniString _description;
		UniString _version;
		OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginProbeResponse_ContentType> _contentTypes;

		OpProtobufBitField<5> has_bits_;
		mutable int                 encoded_size_;
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
	class PluginProbe
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 1
		};
		// END: Internal enums


		PluginProbe(
			const UniString & path_arg = UniString()
			)
			: _path(path_arg)
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
		 * Check if the field @c path is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasPath() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c path.
		 */
		const UniString & GetPath() const
		{
			return _path;
		}

		// Setters

		/**
		 * Set the field @c path.
		 */
		OP_STATUS SetPath(const UniString & v);

		/**
		 * Set the field @c path.
		 */
		OP_STATUS SetPath(const uni_char * v, int l = KAll);

		static const OpProtobufMessage *GetMessageDescriptor(OpNs4pluginsMessages_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		UniString _path;

		OpProtobufBitField<1> has_bits_;
		mutable int                 encoded_size_;
	};


	/**
	 * Response to PluginEnumerate.
	 * 
	 * @field libraryPaths List of full file system paths pointing to
	 *                     each of the potential plug-in libraries.
	 * 
	 * @return None.
	 */
	class PluginEnumerateResponse
	{
	public:
		// BEGIN: Nested items

		// Message PluginEnumerateResponse.LibraryPath
		typedef PluginEnumerateResponse_LibraryPath LibraryPath;

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 1
		};
		// END: Internal enums


		PluginEnumerateResponse(
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
		 * Check if the field @c libraryPaths is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasLibraryPaths() const
		{
			return has_bits_.Reference().IsSet(0);
		}

		// Getters

		/**
		 * Get the field @c libraryPaths.
		 */
		const OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginEnumerateResponse_LibraryPath> & GetLibraryPaths() const
		{
			return _libraryPaths;
		}

		// Setters

		/**
		 * Set the field @c libraryPaths.
		 */
		OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginEnumerateResponse_LibraryPath> & GetLibraryPathsRef();

		static const OpProtobufMessage *GetMessageDescriptor(OpNs4pluginsMessages_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginEnumerateResponse_LibraryPath> _libraryPaths;

		OpProtobufBitField<1> has_bits_;
		mutable int                 encoded_size_;
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
	class PluginEnumerate
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 1
		};
		// END: Internal enums


		PluginEnumerate(
			const UniString & search_paths_arg = UniString()
			)
			: _searchPaths(search_paths_arg)
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
		 * Check if the field @c searchPaths is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasSearchPaths() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c searchPaths.
		 */
		const UniString & GetSearchPaths() const
		{
			return _searchPaths;
		}

		// Setters

		/**
		 * Set the field @c searchPaths.
		 */
		OP_STATUS SetSearchPaths(const UniString & v);

		/**
		 * Set the field @c searchPaths.
		 */
		OP_STATUS SetSearchPaths(const uni_char * v, int l = KAll);

		static const OpProtobufMessage *GetMessageDescriptor(OpNs4pluginsMessages_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		UniString _searchPaths;

		OpProtobufBitField<1> has_bits_;
		mutable int                 encoded_size_;
	};



	// END: Message classes

};






#endif // G_PROTO_NS4PLUGINS_MESSAGES_H
