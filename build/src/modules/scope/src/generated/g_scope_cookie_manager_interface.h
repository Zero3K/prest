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

// Generated from ../../modules/scope/services/cookie_manager/cookie_manager.proto



#ifndef G_SCOPE_COOKIE_MANAGER_INTERFACE_H
#define G_SCOPE_COOKIE_MANAGER_INTERFACE_H

#ifdef SCOPE_COOKIE_MANAGER

#include "modules/protobuf/src/protobuf_message.h"
#include "modules/scope/src/scope_service.h"
#include "modules/util/opstring.h"



#include "modules/protobuf/src/protobuf_utils.h"
#include "modules/protobuf/src/protobuf_message.h"

class OpScopeTPMessage;
class OpProtobufField;
class OpProtobufMessage;


class OpScopeCookieManager_Descriptors;

class OpScopeCookieManager_MessageSet
{
public:
	// BEGIN: ctor/dtor

	OpScopeCookieManager_MessageSet();
	virtual ~OpScopeCookieManager_MessageSet();

	// END: ctor/dtor
	// BEGIN: Enums

	// End: Enums

	// BEGIN: Message classes

	// Forward declarations
	class AddCookieArg;
	class CookieSettings;
	class RemoveCookieArg;
	class GetCookieArg;
	class CookieList;
	class Cookie;

	class AddCookieArg
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 7
		};
		// END: Internal enums


		AddCookieArg(
			)
			: _expires(0)
			, _isSecure(FALSE)
			, _isHTTPOnly(FALSE)
			, encoded_size_(-1)
		{
		}
		OP_STATUS Construct(
			const OpString & domain_arg,
			const OpString & name_arg,
			const OpString * path_arg = NULL,
			const OpString * value_arg = NULL
			)
		{
			RETURN_IF_ERROR(_domain.Set(domain_arg));
			RETURN_IF_ERROR(_name.Set(name_arg));
			if (path_arg)
			{
				RETURN_IF_ERROR(_path.Set(*path_arg));
				has_bits_.Reference().SetBit(2);

			}
			if (value_arg)
			{
				RETURN_IF_ERROR(_value.Set(*value_arg));
				has_bits_.Reference().SetBit(3);

			}
			return OpStatus::OK;
		}

		// Checkers
		/**
		 * Check if the field @c domain is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasDomain() const
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
		 * Check if the field @c path is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasPath() const
		{
			return has_bits_.Reference().IsSet(2);
		}

		/**
		 * Check if the field @c value is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasValue() const
		{
			return has_bits_.Reference().IsSet(3);
		}

		/**
		 * Check if the field @c expires is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasExpires() const
		{
			return has_bits_.Reference().IsSet(4);
		}

		/**
		 * Check if the field @c isSecure is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasIsSecure() const
		{
			return has_bits_.Reference().IsSet(5);
		}

		/**
		 * Check if the field @c isHTTPOnly is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasIsHTTPOnly() const
		{
			return has_bits_.Reference().IsSet(6);
		}

		// Getters

		/**
		 * Get the field @c domain.
		 * 
		 * Domain name of cookie
		 */
		const OpString & GetDomain() const
		{
			return _domain;
		}

		/**
		 * Get the field @c name.
		 * 
		 * Name of cookie
		 */
		const OpString & GetName() const
		{
			return _name;
		}

		/**
		 * Get the field @c path.
		 * 
		 * Path of cookie, defaults to /
		 */
		const OpString & GetPath() const
		{
			return _path;
		}

		/**
		 * Get the field @c value.
		 * 
		 * Cookie value
		 */
		const OpString & GetValue() const
		{
			return _value;
		}

		/**
		 * Get the field @c expires.
		 * 
		 * Expiry time set via seconds since epoch
		 */
		UINT32 GetExpires() const
		{
			return _expires;
		}

		/**
		 * Get the field @c isSecure.
		 * 
		 * If true cookie is only accessible via secure connections
		 */
		BOOL GetIsSecure() const
		{
			return _isSecure;
		}

		/**
		 * Get the field @c isHTTPOnly.
		 * 
		 * If true the cookie is only accessible via HTTP
		 */
		BOOL GetIsHTTPOnly() const
		{
			return _isHTTPOnly;
		}

		// Setters

		/**
		 * Set the field @c domain.
		 * 
		 * Domain name of cookie
		 */
		OP_STATUS SetDomain(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c name.
		 * 
		 * Name of cookie
		 */
		OP_STATUS SetName(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c path.
		 * 
		 * Path of cookie, defaults to /
		 */
		OP_STATUS SetPath(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c value.
		 * 
		 * Cookie value
		 */
		OP_STATUS SetValue(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c expires.
		 * 
		 * Expiry time set via seconds since epoch
		 */
		void SetExpires(UINT32 v)
		{
			has_bits_.Reference().SetBit(4);
			_expires = v;
		}

		/**
		 * Set the field @c isSecure.
		 * 
		 * If true cookie is only accessible via secure connections
		 */
		void SetIsSecure(BOOL v)
		{
			has_bits_.Reference().SetBit(5);
			_isSecure = v;
		}

		/**
		 * Set the field @c isHTTPOnly.
		 * 
		 * If true the cookie is only accessible via HTTP
		 */
		void SetIsHTTPOnly(BOOL v)
		{
			has_bits_.Reference().SetBit(6);
			_isHTTPOnly = v;
		}

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeCookieManager_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		OpString _domain;
		OpString _name;
		OpString _path;
		OpString _value;
		UINT32 _expires;
		BOOL _isSecure;
		BOOL _isHTTPOnly;

		OpProtobufBitField<7> has_bits_;
		mutable int                 encoded_size_;
	};


	/**
	 * The current settings for the cookie manager in the opera host, these settings are read-only and may vary depending on the platform or device used.
	 */
	class CookieSettings
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 3
		};
		// END: Internal enums


		CookieSettings(
			UINT32 max_cookies_arg = 0,
			UINT32 max_cookies_per_domain_arg = 0,
			UINT32 max_cookie_length_arg = 0
			)
			: _maxCookies(max_cookies_arg)
			, _maxCookiesPerDomain(max_cookies_per_domain_arg)
			, _maxCookieLength(max_cookie_length_arg)
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
		 * Check if the field @c maxCookies is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasMaxCookies() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c maxCookiesPerDomain is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasMaxCookiesPerDomain() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c maxCookieLength is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasMaxCookieLength() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c maxCookies.
		 * 
		 * The maximum number of cookies the host can store in total.
		 * If there is no room for new cookies the host will remove the least recently used cookies to get enough space.
		 */
		UINT32 GetMaxCookies() const
		{
			return _maxCookies;
		}

		/**
		 * Get the field @c maxCookiesPerDomain.
		 * 
		 * The maximum number of cookies allowed in one domain.
		 * If there is no room for new cookies the host will remove the least recently used cookies in the domain to get enough space.
		 */
		UINT32 GetMaxCookiesPerDomain() const
		{
			return _maxCookiesPerDomain;
		}

		/**
		 * Get the field @c maxCookieLength.
		 * 
		 * The maxium byte length of a single cookie, if the cookie exceeds this length it will be discarded.
		 */
		UINT32 GetMaxCookieLength() const
		{
			return _maxCookieLength;
		}

		// Setters

		/**
		 * Set the field @c maxCookies.
		 * 
		 * The maximum number of cookies the host can store in total.
		 * If there is no room for new cookies the host will remove the least recently used cookies to get enough space.
		 */
		void SetMaxCookies(UINT32 v)
		{
			_maxCookies = v;
		}

		/**
		 * Set the field @c maxCookiesPerDomain.
		 * 
		 * The maximum number of cookies allowed in one domain.
		 * If there is no room for new cookies the host will remove the least recently used cookies in the domain to get enough space.
		 */
		void SetMaxCookiesPerDomain(UINT32 v)
		{
			_maxCookiesPerDomain = v;
		}

		/**
		 * Set the field @c maxCookieLength.
		 * 
		 * The maxium byte length of a single cookie, if the cookie exceeds this length it will be discarded.
		 */
		void SetMaxCookieLength(UINT32 v)
		{
			_maxCookieLength = v;
		}

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeCookieManager_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		UINT32 _maxCookies;
		UINT32 _maxCookiesPerDomain;
		UINT32 _maxCookieLength;

		OpProtobufBitField<3> has_bits_;
		mutable int                 encoded_size_;
	};


	class RemoveCookieArg
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 3
		};
		// END: Internal enums


		RemoveCookieArg(
			)
			: encoded_size_(-1)
		{
		}
		OP_STATUS Construct(
			const OpString & domain_arg,
			const OpString * path_arg = NULL,
			const OpString * name_arg = NULL
			)
		{
			RETURN_IF_ERROR(_domain.Set(domain_arg));
			if (path_arg)
			{
				RETURN_IF_ERROR(_path.Set(*path_arg));
				has_bits_.Reference().SetBit(1);

			}
			if (name_arg)
			{
				RETURN_IF_ERROR(_name.Set(*name_arg));
				has_bits_.Reference().SetBit(2);

			}
			return OpStatus::OK;
		}

		// Checkers
		/**
		 * Check if the field @c domain is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasDomain() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c path is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasPath() const
		{
			return has_bits_.Reference().IsSet(1);
		}

		/**
		 * Check if the field @c name is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasName() const
		{
			return has_bits_.Reference().IsSet(2);
		}

		// Getters

		/**
		 * Get the field @c domain.
		 */
		const OpString & GetDomain() const
		{
			return _domain;
		}

		/**
		 * Get the field @c path.
		 */
		const OpString & GetPath() const
		{
			return _path;
		}

		/**
		 * Get the field @c name.
		 */
		const OpString & GetName() const
		{
			return _name;
		}

		// Setters

		/**
		 * Set the field @c domain.
		 */
		OP_STATUS SetDomain(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c path.
		 */
		OP_STATUS SetPath(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c name.
		 */
		OP_STATUS SetName(const uni_char * v, int l = KAll);

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeCookieManager_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		OpString _domain;
		OpString _path;
		OpString _name;

		OpProtobufBitField<3> has_bits_;
		mutable int                 encoded_size_;
	};


	class GetCookieArg
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 2
		};
		// END: Internal enums


		GetCookieArg(
			)
			: encoded_size_(-1)
		{
		}
		OP_STATUS Construct(
			const OpString & domain_arg,
			const OpString * path_arg = NULL
			)
		{
			RETURN_IF_ERROR(_domain.Set(domain_arg));
			if (path_arg)
			{
				RETURN_IF_ERROR(_path.Set(*path_arg));
				has_bits_.Reference().SetBit(1);

			}
			return OpStatus::OK;
		}

		// Checkers
		/**
		 * Check if the field @c domain is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasDomain() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c path is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasPath() const
		{
			return has_bits_.Reference().IsSet(1);
		}

		// Getters

		/**
		 * Get the field @c domain.
		 */
		const OpString & GetDomain() const
		{
			return _domain;
		}

		/**
		 * Get the field @c path.
		 */
		const OpString & GetPath() const
		{
			return _path;
		}

		// Setters

		/**
		 * Set the field @c domain.
		 */
		OP_STATUS SetDomain(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c path.
		 */
		OP_STATUS SetPath(const uni_char * v, int l = KAll);

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeCookieManager_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		OpString _domain;
		OpString _path;

		OpProtobufBitField<2> has_bits_;
		mutable int                 encoded_size_;
	};


	class CookieList
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 1
		};
		// END: Internal enums


		CookieList(
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
		 * Check if the field @c cookieList is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasCookieList() const
		{
			return has_bits_.Reference().IsSet(0);
		}

		// Getters

		/**
		 * Get the field @c cookieList.
		 */
		const OpProtobufMessageVector<OpScopeCookieManager_MessageSet::Cookie> & GetCookieList() const
		{
			return _cookieList;
		}

		// Setters

		/**
		 * Set the field @c cookieList.
		 */
		OpScopeCookieManager_MessageSet::Cookie * AppendNewCookieList();

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeCookieManager_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		OpProtobufMessageVector<OpScopeCookieManager_MessageSet::Cookie> _cookieList;

		OpProtobufBitField<1> has_bits_;
		mutable int                 encoded_size_;
	};


	class Cookie
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 7
		};
		// END: Internal enums


		Cookie(
			UINT32 expires_arg = 0,
			BOOL is_secure_arg = FALSE,
			BOOL is_http_only_arg = FALSE
			)
			: _expires(expires_arg)
			, _isSecure(is_secure_arg)
			, _isHTTPOnly(is_http_only_arg)
			, encoded_size_(-1)
		{
		}
		OP_STATUS Construct(
			const OpString & domain_arg,
			const OpString & path_arg,
			const OpString & name_arg,
			const OpString & value_arg
			)
		{
			RETURN_IF_ERROR(_domain.Set(domain_arg));
			RETURN_IF_ERROR(_path.Set(path_arg));
			RETURN_IF_ERROR(_name.Set(name_arg));
			RETURN_IF_ERROR(_value.Set(value_arg));
			return OpStatus::OK;
		}

		// Checkers
		/**
		 * Check if the field @c domain is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasDomain() const
		{
			return TRUE;
		}

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
		 * Check if the field @c value is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasValue() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c expires is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasExpires() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c isSecure is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasIsSecure() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c isHTTPOnly is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasIsHTTPOnly() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c domain.
		 */
		const OpString & GetDomain() const
		{
			return _domain;
		}

		/**
		 * Get the field @c path.
		 */
		const OpString & GetPath() const
		{
			return _path;
		}

		/**
		 * Get the field @c name.
		 */
		const OpString & GetName() const
		{
			return _name;
		}

		/**
		 * Get the field @c value.
		 */
		const OpString & GetValue() const
		{
			return _value;
		}

		/**
		 * Get the field @c expires.
		 * 
		 * Expiry time for cookie specified in seconds from epoch (Unix timestamp).
		 * A value of 0 means the cookie is expired when the session ends (browser closes).
		 */
		UINT32 GetExpires() const
		{
			return _expires;
		}

		/**
		 * Get the field @c isSecure.
		 * 
		 * If true the cookie will only be transferred on secure connections (HTTPS).
		 */
		BOOL GetIsSecure() const
		{
			return _isSecure;
		}

		/**
		 * Get the field @c isHTTPOnly.
		 * 
		 * If true the cookie is only accessible via HTTP.
		 */
		BOOL GetIsHTTPOnly() const
		{
			return _isHTTPOnly;
		}

		// Setters

		/**
		 * Set the field @c domain.
		 */
		OP_STATUS SetDomain(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c domain.
		 */
		OP_STATUS SetDomain(const char * v, int l = KAll);

		/**
		 * Set the field @c path.
		 */
		OP_STATUS SetPath(const char * v, int l = KAll);

		/**
		 * Set the field @c name.
		 */
		OP_STATUS SetName(const char * v, int l = KAll);

		/**
		 * Set the field @c value.
		 */
		OP_STATUS SetValue(const char * v, int l = KAll);

		/**
		 * Set the field @c expires.
		 * 
		 * Expiry time for cookie specified in seconds from epoch (Unix timestamp).
		 * A value of 0 means the cookie is expired when the session ends (browser closes).
		 */
		void SetExpires(UINT32 v)
		{
			_expires = v;
		}

		/**
		 * Set the field @c isSecure.
		 * 
		 * If true the cookie will only be transferred on secure connections (HTTPS).
		 */
		void SetIsSecure(BOOL v)
		{
			_isSecure = v;
		}

		/**
		 * Set the field @c isHTTPOnly.
		 * 
		 * If true the cookie is only accessible via HTTP.
		 */
		void SetIsHTTPOnly(BOOL v)
		{
			_isHTTPOnly = v;
		}

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeCookieManager_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		OpString _domain;
		OpString _path;
		OpString _name;
		OpString _value;
		UINT32 _expires;
		BOOL _isSecure;
		BOOL _isHTTPOnly;

		OpProtobufBitField<7> has_bits_;
		mutable int                 encoded_size_;
	};



	// END: Message classes

};


class OpProtobufMessage;

// This class contains the descriptors of all messages in the given set
// When a message descriptor is first requested it is allocated and put in this structure,
// subsequent uses of the descriptor will just use the previously allocated object.
class OpScopeCookieManager_Descriptors
{
public:
	OpScopeCookieManager_Descriptors();
	~OpScopeCookieManager_Descriptors();

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
		_gen_MessageOffs_add_cookie_arg_,
		_gen_MessageOffs_cookie_,
		_gen_MessageOffs_cookie_list_,
		_gen_MessageOffs_cookie_settings_,
		_gen_MessageOffs_get_cookie_arg_,
		_gen_MessageOffs_remove_cookie_arg_,

		// Message count is calculated at compile time
		_gen_Message_Count
	};

	// The IDs for all messages
	enum // message IDs
	{
		  _gen_void_MsgID // The Default/void message. Also ensures that all other IDs start at 1
		, _gen_MsgID_add_cookie_arg_
		, _gen_MsgID_cookie_
		, _gen_MsgID_cookie_list_
		, _gen_MsgID_cookie_settings_
		, _gen_MsgID_get_cookie_arg_
		, _gen_MsgID_remove_cookie_arg_
	};

	// List of message descriptors. They are initially NULL and assigned an object when the message is used.
	mutable OpProtobufMessage *message_list[_gen_Message_Count];

};


class OpScopeCookieManager_SI
	: public OpScopeService
	, public OpScopeCookieManager_MessageSet
{
public:
	OpScopeCookieManager_SI(const uni_char* id = NULL, OpScopeServiceManager *manager = NULL, ControlType control = CONTROL_MANUAL);
	virtual ~OpScopeCookieManager_SI();

	enum CommandEnum
	{
		  Command_GetCookie = 1
		, Command_RemoveCookie = 2
		, Command_RemoveAllCookies = 3
		, Command_GetCookieSettings = 4
		, Command_AddCookie = 5

		, Command_Count = 5 // Number of commands in this service
	};
	// This class contains the descriptors or all commands of this service
	class Descriptors
	    : public OpScopeCookieManager_Descriptors
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
	virtual OP_STATUS DoGetCookie(const GetCookieArg &in, CookieList &out) = 0;
	virtual OP_STATUS DoRemoveCookie(const RemoveCookieArg &in) = 0;
	virtual OP_STATUS DoRemoveAllCookies() = 0;
	virtual OP_STATUS DoGetCookieSettings(CookieSettings &out) = 0;
	virtual OP_STATUS DoAddCookie(const AddCookieArg &in) = 0;


	Descriptors *GetDescriptors() const;



// Service API implementation: END

};




#endif // SCOPE_COOKIE_MANAGER

#endif // G_SCOPE_COOKIE_MANAGER_INTERFACE_H
