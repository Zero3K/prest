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

// Generated from ../../modules/scope/services/resource_manager/resource_manager.proto



#ifndef G_SCOPE_RESOURCE_MANAGER_INTERFACE_H
#define G_SCOPE_RESOURCE_MANAGER_INTERFACE_H

#ifdef SCOPE_RESOURCE_MANAGER

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


class OpScopeResourceManager_Descriptors;

class OpScopeResourceManager_MessageSet
{
public:
	// BEGIN: ctor/dtor

	OpScopeResourceManager_MessageSet();
	virtual ~OpScopeResourceManager_MessageSet();

	// END: ctor/dtor
	// BEGIN: Enums

	enum ReloadPolicy
	{
	    RELOADPOLICY_DEFAULT = 1,
	    RELOADPOLICY_NO_CACHE = 2
	};

	enum ContentMode_Transport
	{
	    ContentMode_Transport_TRANSPORT_STRING = 1,
	    ContentMode_Transport_TRANSPORT_BYTES = 2,
	    ContentMode_Transport_TRANSPORT_DATA_URI = 3,
	    ContentMode_Transport_TRANSPORT_OFF = 4
	};

	enum CreateRequestArg_HeaderPolicy
	{
	    CreateRequestArg_HeaderPolicy_HEADERPOLICY_NORMAL = 1,
	    CreateRequestArg_HeaderPolicy_HEADERPOLICY_OVERWRITE = 2,
	    CreateRequestArg_HeaderPolicy_HEADERPOLICY_REPLACE = 3
	};

	enum LoadOrigin
	{
	    LOADORIGIN_XHR = 1
	};

	enum UrlLoad_URLType
	{
	    UrlLoad_URLType_URLTYPE_UNKNOWN,
	    UrlLoad_URLType_URLTYPE_HTTP = 1,
	    UrlLoad_URLType_URLTYPE_HTTPS = 2,
	    UrlLoad_URLType_URLTYPE_FILE = 3,
	    UrlLoad_URLType_URLTYPE_DATA = 4,
	    UrlLoad_URLType_URLTYPE_FTP = 5,
	    UrlLoad_URLType_URLTYPE_GOPHER = 6,
	    UrlLoad_URLType_URLTYPE_WAIS = 7,
	    UrlLoad_URLType_URLTYPE_NEWS = 8,
	    UrlLoad_URLType_URLTYPE_SNEWS = 9,
	    UrlLoad_URLType_URLTYPE_NEWSATTACHMENT = 10,
	    UrlLoad_URLType_URLTYPE_SNEWSATTACHMENT = 11,
	    UrlLoad_URLType_URLTYPE_EMAIL = 12,
	    UrlLoad_URLType_URLTYPE_ATTACHMENT = 13,
	    UrlLoad_URLType_URLTYPE_TELNET = 14,
	    UrlLoad_URLType_URLTYPE_MAILTO = 15,
	    UrlLoad_URLType_URLTYPE_OPERA = 16,
	    UrlLoad_URLType_URLTYPE_JAVASCRIPT = 17,
	    UrlLoad_URLType_URLTYPE_CONTENT_ID = 18,
	    UrlLoad_URLType_URLTYPE_TN3270 = 19,
	    UrlLoad_URLType_URLTYPE_SOURCE = 21,
	    UrlLoad_URLType_URLTYPE_CLIENT = 22,
	    UrlLoad_URLType_URLTYPE_NNTP = 23,
	    UrlLoad_URLType_URLTYPE_NNTPS = 25,
	    UrlLoad_URLType_URLTYPE_SHARE = 26,
	    UrlLoad_URLType_URLTYPE_GHTTP = 27,
	    UrlLoad_URLType_URLTYPE_TV = 28,
	    UrlLoad_URLType_URLTYPE_EDITED = 29,
	    UrlLoad_URLType_URLTYPE_ERROR = 30,
	    UrlLoad_URLType_URLTYPE_DVB = 31,
	    UrlLoad_URLType_URLTYPE_TEL = 32,
	    UrlLoad_URLType_URLTYPE_MAIL = 33,
	    UrlLoad_URLType_URLTYPE_IRC = 34,
	    UrlLoad_URLType_URLTYPE_SMS = 35,
	    UrlLoad_URLType_URLTYPE_SMSTO = 36,
	    UrlLoad_URLType_URLTYPE_CHAT_TRANSFER = 39,
	    UrlLoad_URLType_URLTYPE_DEVICE = 40,
	    UrlLoad_URLType_URLTYPE_MOUNTPOINT = 41,
	    UrlLoad_URLType_URLTYPE_WIDGET = 42,
	    UrlLoad_URLType_URLTYPE_OBMLSERVER = 43,
	    UrlLoad_URLType_URLTYPE_UNITE = 44,
	    UrlLoad_URLType_URLTYPE_INTERNAL = 100
	};

	enum UrlFinished_Result
	{
	    UrlFinished_Result_RESULT_FINISHED = 1,
	    UrlFinished_Result_RESULT_FAILED = 2,
	    UrlFinished_Result_RESULT_STOPPED = 3
	};

	enum DnsLookupFinished_Status
	{
	    DnsLookupFinished_Status_STATUS_NETWORK_NO_ERROR = 1,
	    DnsLookupFinished_Status_STATUS_ERROR_HANDLED = 2,
	    DnsLookupFinished_Status_STATUS_HOST_ADDRESS_NOT_FOUND = 3,
	    DnsLookupFinished_Status_STATUS_TIMED_OUT = 4,
	    DnsLookupFinished_Status_STATUS_NETWORK_ERROR = 5,
	    DnsLookupFinished_Status_STATUS_INTERNET_CONNECTION_CLOSED = 6,
	    DnsLookupFinished_Status_STATUS_OUT_OF_COVERAGE = 7,
	    DnsLookupFinished_Status_STATUS_OUT_OF_MEMORY = 8
	};

	// End: Enums

	// BEGIN: Message classes

	// Forward declarations
	class RequestData_Part;
	class CreateRequestArg_Payload;
	class DnsLookupFinished;
	class DnsLookupStarted;
	class GetResourceIDArg;
	class ResourceData;
	class ResponseFinished;
	class ResponseHeader;
	class Response;
	class RequestData;
	class RequestRetry;
	class RequestFinished;
	class RequestHeader;
	class Request;
	class UrlUnload;
	class UrlRedirect;
	class UrlFinished;
	class UrlLoad;
	class CreateRequestArg;
	class RemoveHeaderOverridesArg;
	class AddHeaderOverridesArg;
	class SetResponseModeArg;
	class SetRequestModeArg;
	class ContentMode;
	class MimeMode;
	class SetReloadPolicyArg;
	class GetResourceArg;
	class Content;
	class Header;
	class ResourceID;

	class RequestData_Part
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 3
		};
		// END: Internal enums


		RequestData_Part(
			)
			: _contentLength(0)
			, _content(NULL)
			, encoded_size_(-1)
		{
		}
		OP_STATUS Construct(
			)
		{
			return OpStatus::OK;
		}
		~RequestData_Part()
		{
			OP_DELETE(_content);
		}

		// Checkers
		/**
		 * Check if the field @c headerList is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasHeaderList() const
		{
			return has_bits_.Reference().IsSet(0);
		}

		/**
		 * Check if the field @c contentLength is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasContentLength() const
		{
			return has_bits_.Reference().IsSet(1);
		}

		/**
		 * Check if the field @c content is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasContent() const
		{
			return has_bits_.Reference().IsSet(2);
		}

		// Getters

		/**
		 * Get the field @c headerList.
		 * 
		 * In multi-part, each part may have its own headers.
		 */
		const OpProtobufMessageVector<OpScopeResourceManager_MessageSet::Header> & GetHeaderList() const
		{
			return _headerList;
		}

		/**
		 * Get the field @c contentLength.
		 * 
		 * The length of this part.
		 */
		UINT32 GetContentLength() const
		{
			return _contentLength;
		}

		/**
		 * Get the field @c content.
		 */
		OpScopeResourceManager_MessageSet::Content * GetContent() const
		{
			return _content;
		}

		// Setters

		/**
		 * Set the field @c headerList.
		 * 
		 * In multi-part, each part may have its own headers.
		 */
		OpProtobufMessageVector<OpScopeResourceManager_MessageSet::Header> & GetHeaderListRef();

		/**
		 * Set the field @c contentLength.
		 * 
		 * The length of this part.
		 */
		void SetContentLength(UINT32 v)
		{
			has_bits_.Reference().SetBit(1);
			_contentLength = v;
		}

		/**
		 * Set the field @c content.
		 */
		void SetContent(OpScopeResourceManager_MessageSet::Content * v);

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeResourceManager_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		OpProtobufMessageVector<OpScopeResourceManager_MessageSet::Header> _headerList;
		UINT32 _contentLength;
		OpScopeResourceManager_MessageSet::Content * _content;

		OpProtobufBitField<3> has_bits_;
		mutable int                 encoded_size_;
	};


	class CreateRequestArg_Payload
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 3
		};
		// END: Internal enums


		CreateRequestArg_Payload(
			)
			: encoded_size_(-1)
		{
		}
		OP_STATUS Construct(
			const OpString & mime_type_arg,
			const ByteBuffer * byte_data_arg = NULL,
			const OpString * string_data_arg = NULL
			)
		{
			RETURN_IF_ERROR(_mimeType.Set(mime_type_arg));
			if (byte_data_arg)
			{
				RETURN_IF_ERROR(OpProtobufAppend(_byteData, *byte_data_arg));
				has_bits_.Reference().SetBit(1);

			}
			if (string_data_arg)
			{
				RETURN_IF_ERROR(_stringData.Set(*string_data_arg));
				has_bits_.Reference().SetBit(2);

			}
			return OpStatus::OK;
		}

		// Checkers
		/**
		 * Check if the field @c mimeType is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasMimeType() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c byteData is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasByteData() const
		{
			return has_bits_.Reference().IsSet(1);
		}

		/**
		 * Check if the field @c stringData is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasStringData() const
		{
			return has_bits_.Reference().IsSet(2);
		}

		// Getters

		/**
		 * Get the field @c mimeType.
		 * 
		 * The mime type of this payload.
		 */
		const OpString & GetMimeType() const
		{
			return _mimeType;
		}

		/**
		 * Get the field @c byteData.
		 * 
		 * The bytes to use as the payload. If this field is set, the stringData
		 * can not also be set.
		 */
		const ByteBuffer & GetByteData() const
		{
			return _byteData;
		}

		/**
		 * Get the field @c stringData.
		 * 
		 * The string to use as the payload. This is an alternative to using bytes
		 * directly. If this field is set, byteData can not also be set.
		 */
		const OpString & GetStringData() const
		{
			return _stringData;
		}

		// Setters

		/**
		 * Set the field @c mimeType.
		 * 
		 * The mime type of this payload.
		 */
		OP_STATUS SetMimeType(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c byteData.
		 * 
		 * The bytes to use as the payload. If this field is set, the stringData
		 * can not also be set.
		 */
		ByteBuffer & GetByteDataRef();

		/**
		 * Set the field @c stringData.
		 * 
		 * The string to use as the payload. This is an alternative to using bytes
		 * directly. If this field is set, byteData can not also be set.
		 */
		OP_STATUS SetStringData(const uni_char * v, int l = KAll);

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeResourceManager_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		OpString _mimeType;
		ByteBuffer _byteData;
		OpString _stringData;

		OpProtobufBitField<3> has_bits_;
		mutable int                 encoded_size_;
	};


	class DnsLookupFinished
	{
	public:
		// BEGIN: Nested items

		// Enum DnsLookupFinished.Status
		typedef DnsLookupFinished_Status Status;
		static const DnsLookupFinished_Status STATUS_NETWORK_NO_ERROR = DnsLookupFinished_Status_STATUS_NETWORK_NO_ERROR;
		static const DnsLookupFinished_Status STATUS_ERROR_HANDLED = DnsLookupFinished_Status_STATUS_ERROR_HANDLED;
		static const DnsLookupFinished_Status STATUS_HOST_ADDRESS_NOT_FOUND = DnsLookupFinished_Status_STATUS_HOST_ADDRESS_NOT_FOUND;
		static const DnsLookupFinished_Status STATUS_TIMED_OUT = DnsLookupFinished_Status_STATUS_TIMED_OUT;
		static const DnsLookupFinished_Status STATUS_NETWORK_ERROR = DnsLookupFinished_Status_STATUS_NETWORK_ERROR;
		static const DnsLookupFinished_Status STATUS_INTERNET_CONNECTION_CLOSED = DnsLookupFinished_Status_STATUS_INTERNET_CONNECTION_CLOSED;
		static const DnsLookupFinished_Status STATUS_OUT_OF_COVERAGE = DnsLookupFinished_Status_STATUS_OUT_OF_COVERAGE;
		static const DnsLookupFinished_Status STATUS_OUT_OF_MEMORY = DnsLookupFinished_Status_STATUS_OUT_OF_MEMORY;

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 3
		};
		// END: Internal enums


		DnsLookupFinished(
			UINT32 resource_id_arg = 0,
			double time_arg = 0.0,
			DnsLookupFinished_Status status_arg = DnsLookupFinished_Status_STATUS_NETWORK_NO_ERROR
			)
			: _resourceID(resource_id_arg)
			, _time(time_arg)
			, _status(status_arg)
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
		 * Check if the field @c resourceID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasResourceID() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c time is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasTime() const
		{
			return TRUE;
		}

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
		 * Get the field @c resourceID.
		 */
		UINT32 GetResourceID() const
		{
			return _resourceID;
		}

		/**
		 * Get the field @c time.
		 * 
		 * Milliseconds since Unix epoch.
		 */
		double GetTime() const
		{
			return _time;
		}

		/**
		 * Get the field @c status.
		 * 
		 * Status of the lookup.
		 */
		OpScopeResourceManager_MessageSet::DnsLookupFinished_Status GetStatus() const
		{
			return static_cast<OpScopeResourceManager_MessageSet::DnsLookupFinished_Status>(_status);
		}

		// Setters

		/**
		 * Set the field @c resourceID.
		 */
		void SetResourceID(UINT32 v)
		{
			_resourceID = v;
		}

		/**
		 * Set the field @c time.
		 * 
		 * Milliseconds since Unix epoch.
		 */
		void SetTime(double v)
		{
			_time = v;
		}

		/**
		 * Set the field @c status.
		 * 
		 * Status of the lookup.
		 */
		void SetStatus(OpScopeResourceManager_MessageSet::DnsLookupFinished_Status v);

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeResourceManager_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		UINT32 _resourceID;
		double _time;
		INT32 _status;

		OpProtobufBitField<3> has_bits_;
		mutable int                 encoded_size_;
	};


	class DnsLookupStarted
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 2
		};
		// END: Internal enums


		DnsLookupStarted(
			UINT32 resource_id_arg = 0,
			double time_arg = 0.0
			)
			: _resourceID(resource_id_arg)
			, _time(time_arg)
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
		 * Check if the field @c resourceID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasResourceID() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c time is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasTime() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c resourceID.
		 */
		UINT32 GetResourceID() const
		{
			return _resourceID;
		}

		/**
		 * Get the field @c time.
		 * 
		 * Milliseconds since Unix epoch.
		 */
		double GetTime() const
		{
			return _time;
		}

		// Setters

		/**
		 * Set the field @c resourceID.
		 */
		void SetResourceID(UINT32 v)
		{
			_resourceID = v;
		}

		/**
		 * Set the field @c time.
		 * 
		 * Milliseconds since Unix epoch.
		 */
		void SetTime(double v)
		{
			_time = v;
		}

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeResourceManager_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		UINT32 _resourceID;
		double _time;

		OpProtobufBitField<2> has_bits_;
		mutable int                 encoded_size_;
	};


	class GetResourceIDArg
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 1
		};
		// END: Internal enums


		GetResourceIDArg(
			)
			: encoded_size_(-1)
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
		 * Check if the field @c url is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasUrl() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c url.
		 * 
		 * The URL of the resource to get the ID for.
		 */
		const OpString & GetUrl() const
		{
			return _url;
		}

		// Setters

		/**
		 * Set the field @c url.
		 * 
		 * The URL of the resource to get the ID for.
		 */
		OP_STATUS SetUrl(const uni_char * v, int l = KAll);

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeResourceManager_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		OpString _url;

		OpProtobufBitField<1> has_bits_;
		mutable int                 encoded_size_;
	};


	class ResourceData
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 6
		};
		// END: Internal enums


		ResourceData(
			UINT32 resource_id_arg = 0
			)
			: _resourceID(resource_id_arg)
			, _contentLength(0)
			, _content(NULL)
			, encoded_size_(-1)
		{
		}
		OP_STATUS Construct(
			const OpString & url_arg,
			const OpString * mime_type_arg = NULL,
			const OpString * character_encoding_arg = NULL
			)
		{
			RETURN_IF_ERROR(_url.Set(url_arg));
			if (mime_type_arg)
			{
				RETURN_IF_ERROR(_mimeType.Set(*mime_type_arg));
				has_bits_.Reference().SetBit(2);

			}
			if (character_encoding_arg)
			{
				RETURN_IF_ERROR(_characterEncoding.Set(*character_encoding_arg));
				has_bits_.Reference().SetBit(3);

			}
			return OpStatus::OK;
		}
		~ResourceData()
		{
			OP_DELETE(_content);
		}

		// Checkers
		/**
		 * Check if the field @c resourceID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasResourceID() const
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

		/**
		 * Check if the field @c mimeType is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasMimeType() const
		{
			return has_bits_.Reference().IsSet(2);
		}

		/**
		 * Check if the field @c characterEncoding is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasCharacterEncoding() const
		{
			return has_bits_.Reference().IsSet(3);
		}

		/**
		 * Check if the field @c contentLength is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasContentLength() const
		{
			return has_bits_.Reference().IsSet(4);
		}

		/**
		 * Check if the field @c content is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasContent() const
		{
			return has_bits_.Reference().IsSet(5);
		}

		// Getters

		/**
		 * Get the field @c resourceID.
		 */
		UINT32 GetResourceID() const
		{
			return _resourceID;
		}

		/**
		 * Get the field @c url.
		 */
		const OpString & GetUrl() const
		{
			return _url;
		}

		/**
		 * Get the field @c mimeType.
		 * 
		 * The used mime type. This may be different from the mime type
		 * advertised in the HTTP headers.
		 */
		const OpString & GetMimeType() const
		{
			return _mimeType;
		}

		/**
		 * Get the field @c characterEncoding.
		 * 
		 * Original character encoding (if applicable).
		 */
		const OpString & GetCharacterEncoding() const
		{
			return _characterEncoding;
		}

		/**
		 * Get the field @c contentLength.
		 * 
		 * Content-Length, as advertised by HTTP headers.
		 */
		UINT32 GetContentLength() const
		{
			return _contentLength;
		}

		/**
		 * Get the field @c content.
		 */
		OpScopeResourceManager_MessageSet::Content * GetContent() const
		{
			return _content;
		}

		// Setters

		/**
		 * Set the field @c resourceID.
		 */
		void SetResourceID(UINT32 v)
		{
			_resourceID = v;
		}

		/**
		 * Set the field @c url.
		 */
		OpString & GetUrlRef();

		/**
		 * Set the field @c mimeType.
		 * 
		 * The used mime type. This may be different from the mime type
		 * advertised in the HTTP headers.
		 */
		OpString & GetMimeTypeRef();

		/**
		 * Set the field @c characterEncoding.
		 * 
		 * Original character encoding (if applicable).
		 */
		OpString & GetCharacterEncodingRef();

		/**
		 * Set the field @c contentLength.
		 * 
		 * Content-Length, as advertised by HTTP headers.
		 */
		void SetContentLength(UINT32 v)
		{
			has_bits_.Reference().SetBit(4);
			_contentLength = v;
		}

		/**
		 * Set the field @c content.
		 */
		void SetContent(OpScopeResourceManager_MessageSet::Content * v);

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeResourceManager_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		UINT32 _resourceID;
		OpString _url;
		OpString _mimeType;
		OpString _characterEncoding;
		UINT32 _contentLength;
		OpScopeResourceManager_MessageSet::Content * _content;

		OpProtobufBitField<6> has_bits_;
		mutable int                 encoded_size_;
	};


	class ResponseFinished
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 5
		};
		// END: Internal enums


		ResponseFinished(
			UINT32 request_id_arg = 0,
			UINT32 resource_id_arg = 0,
			double time_arg = 0.0,
			UINT32 content_length_arg = 0
			)
			: _requestID(request_id_arg)
			, _resourceID(resource_id_arg)
			, _time(time_arg)
			, _contentLength(content_length_arg)
			, _data(NULL)
			, encoded_size_(-1)
		{
		}
		OP_STATUS Construct(
			)
		{
			return OpStatus::OK;
		}
		~ResponseFinished()
		{
			OP_DELETE(_data);
		}

		// Checkers
		/**
		 * Check if the field @c requestID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasRequestID() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c resourceID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasResourceID() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c time is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasTime() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c contentLength is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasContentLength() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c data is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasData() const
		{
			return has_bits_.Reference().IsSet(4);
		}

		// Getters

		/**
		 * Get the field @c requestID.
		 */
		UINT32 GetRequestID() const
		{
			return _requestID;
		}

		/**
		 * Get the field @c resourceID.
		 */
		UINT32 GetResourceID() const
		{
			return _resourceID;
		}

		/**
		 * Get the field @c time.
		 * 
		 * Milliseconds since Unix epoch.
		 */
		double GetTime() const
		{
			return _time;
		}

		/**
		 * Get the field @c contentLength.
		 */
		UINT32 GetContentLength() const
		{
			return _contentLength;
		}

		/**
		 * Get the field @c data.
		 */
		OpScopeResourceManager_MessageSet::ResourceData * GetData() const
		{
			return _data;
		}

		// Setters

		/**
		 * Set the field @c requestID.
		 */
		void SetRequestID(UINT32 v)
		{
			_requestID = v;
		}

		/**
		 * Set the field @c resourceID.
		 */
		void SetResourceID(UINT32 v)
		{
			_resourceID = v;
		}

		/**
		 * Set the field @c time.
		 * 
		 * Milliseconds since Unix epoch.
		 */
		void SetTime(double v)
		{
			_time = v;
		}

		/**
		 * Set the field @c contentLength.
		 */
		void SetContentLength(UINT32 v)
		{
			_contentLength = v;
		}

		/**
		 * Set the field @c data.
		 */
		void SetData(OpScopeResourceManager_MessageSet::ResourceData * v);

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeResourceManager_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		UINT32 _requestID;
		UINT32 _resourceID;
		double _time;
		UINT32 _contentLength;
		OpScopeResourceManager_MessageSet::ResourceData * _data;

		OpProtobufBitField<5> has_bits_;
		mutable int                 encoded_size_;
	};


	class ResponseHeader
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 5
		};
		// END: Internal enums


		ResponseHeader(
			UINT32 request_id_arg = 0,
			UINT32 resource_id_arg = 0,
			double time_arg = 0.0
			)
			: _requestID(request_id_arg)
			, _resourceID(resource_id_arg)
			, _time(time_arg)
			, encoded_size_(-1)
		{
		}
		OP_STATUS Construct(
			const OpString & raw_arg
			)
		{
			RETURN_IF_ERROR(_raw.Set(raw_arg));
			return OpStatus::OK;
		}

		// Checkers
		/**
		 * Check if the field @c requestID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasRequestID() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c resourceID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasResourceID() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c time is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasTime() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c raw is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasRaw() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c headerList is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasHeaderList() const
		{
			return has_bits_.Reference().IsSet(4);
		}

		// Getters

		/**
		 * Get the field @c requestID.
		 */
		UINT32 GetRequestID() const
		{
			return _requestID;
		}

		/**
		 * Get the field @c resourceID.
		 */
		UINT32 GetResourceID() const
		{
			return _resourceID;
		}

		/**
		 * Get the field @c time.
		 * 
		 * Milliseconds since Unix epoch.
		 */
		double GetTime() const
		{
			return _time;
		}

		/**
		 * Get the field @c raw.
		 */
		const OpString & GetRaw() const
		{
			return _raw;
		}

		/**
		 * Get the field @c headerList.
		 */
		const OpProtobufMessageVector<OpScopeResourceManager_MessageSet::Header> & GetHeaderList() const
		{
			return _headerList;
		}

		// Setters

		/**
		 * Set the field @c requestID.
		 */
		void SetRequestID(UINT32 v)
		{
			_requestID = v;
		}

		/**
		 * Set the field @c resourceID.
		 */
		void SetResourceID(UINT32 v)
		{
			_resourceID = v;
		}

		/**
		 * Set the field @c time.
		 * 
		 * Milliseconds since Unix epoch.
		 */
		void SetTime(double v)
		{
			_time = v;
		}

		/**
		 * Set the field @c raw.
		 */
		OP_STATUS SetRaw(const char * v, int l = KAll);

		/**
		 * Set the field @c headerList.
		 */
		OpProtobufMessageVector<OpScopeResourceManager_MessageSet::Header> & GetHeaderListRef();

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeResourceManager_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		UINT32 _requestID;
		UINT32 _resourceID;
		double _time;
		OpString _raw;
		OpProtobufMessageVector<OpScopeResourceManager_MessageSet::Header> _headerList;

		OpProtobufBitField<5> has_bits_;
		mutable int                 encoded_size_;
	};


	class Response
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 4
		};
		// END: Internal enums


		Response(
			UINT32 request_id_arg = 0,
			UINT32 resource_id_arg = 0,
			double time_arg = 0.0
			)
			: _requestID(request_id_arg)
			, _resourceID(resource_id_arg)
			, _time(time_arg)
			, _responseCode(0)
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
		 * Check if the field @c requestID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasRequestID() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c resourceID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasResourceID() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c time is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasTime() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c responseCode is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasResponseCode() const
		{
			return has_bits_.Reference().IsSet(3);
		}

		// Getters

		/**
		 * Get the field @c requestID.
		 */
		UINT32 GetRequestID() const
		{
			return _requestID;
		}

		/**
		 * Get the field @c resourceID.
		 */
		UINT32 GetResourceID() const
		{
			return _resourceID;
		}

		/**
		 * Get the field @c time.
		 * 
		 * Milliseconds since Unix epoch.
		 */
		double GetTime() const
		{
			return _time;
		}

		/**
		 * Get the field @c responseCode.
		 * 
		 * HTTP response code, such as 200, 404, etc.
		 */
		UINT32 GetResponseCode() const
		{
			return _responseCode;
		}

		// Setters

		/**
		 * Set the field @c requestID.
		 */
		void SetRequestID(UINT32 v)
		{
			_requestID = v;
		}

		/**
		 * Set the field @c resourceID.
		 */
		void SetResourceID(UINT32 v)
		{
			_resourceID = v;
		}

		/**
		 * Set the field @c time.
		 * 
		 * Milliseconds since Unix epoch.
		 */
		void SetTime(double v)
		{
			_time = v;
		}

		/**
		 * Set the field @c responseCode.
		 * 
		 * HTTP response code, such as 200, 404, etc.
		 */
		void SetResponseCode(UINT32 v)
		{
			has_bits_.Reference().SetBit(3);
			_responseCode = v;
		}

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeResourceManager_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		UINT32 _requestID;
		UINT32 _resourceID;
		double _time;
		UINT32 _responseCode;

		OpProtobufBitField<4> has_bits_;
		mutable int                 encoded_size_;
	};


	class RequestData
	{
	public:
		// BEGIN: Nested items

		// Message RequestData.Part
		typedef RequestData_Part Part;

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 7
		};
		// END: Internal enums


		RequestData(
			UINT32 request_id_arg = 0,
			UINT32 resource_id_arg = 0
			)
			: _requestID(request_id_arg)
			, _resourceID(resource_id_arg)
			, _contentLength(0)
			, _content(NULL)
			, encoded_size_(-1)
		{
		}
		OP_STATUS Construct(
			const OpString * mime_type_arg = NULL,
			const OpString * character_encoding_arg = NULL
			)
		{
			if (mime_type_arg)
			{
				RETURN_IF_ERROR(_mimeType.Set(*mime_type_arg));
				has_bits_.Reference().SetBit(2);

			}
			if (character_encoding_arg)
			{
				RETURN_IF_ERROR(_characterEncoding.Set(*character_encoding_arg));
				has_bits_.Reference().SetBit(3);

			}
			return OpStatus::OK;
		}
		~RequestData()
		{
			OP_DELETE(_content);
		}

		// Checkers
		/**
		 * Check if the field @c requestID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasRequestID() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c resourceID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasResourceID() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c mimeType is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasMimeType() const
		{
			return has_bits_.Reference().IsSet(2);
		}

		/**
		 * Check if the field @c characterEncoding is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasCharacterEncoding() const
		{
			return has_bits_.Reference().IsSet(3);
		}

		/**
		 * Check if the field @c contentLength is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasContentLength() const
		{
			return has_bits_.Reference().IsSet(4);
		}

		/**
		 * Check if the field @c content is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasContent() const
		{
			return has_bits_.Reference().IsSet(5);
		}

		/**
		 * Check if the field @c partList is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasPartList() const
		{
			return has_bits_.Reference().IsSet(6);
		}

		// Getters

		/**
		 * Get the field @c requestID.
		 */
		UINT32 GetRequestID() const
		{
			return _requestID;
		}

		/**
		 * Get the field @c resourceID.
		 */
		UINT32 GetResourceID() const
		{
			return _resourceID;
		}

		/**
		 * Get the field @c mimeType.
		 */
		const OpString & GetMimeType() const
		{
			return _mimeType;
		}

		/**
		 * Get the field @c characterEncoding.
		 * 
		 * The character encoding of the payload. Not applicable when the
		 * payload is of a non-text type.
		 * 
		 * Example: utf-8
		 */
		const OpString & GetCharacterEncoding() const
		{
			return _characterEncoding;
		}

		/**
		 * Get the field @c contentLength.
		 */
		UINT32 GetContentLength() const
		{
			return _contentLength;
		}

		/**
		 * Get the field @c content.
		 */
		OpScopeResourceManager_MessageSet::Content * GetContent() const
		{
			return _content;
		}

		/**
		 * Get the field @c partList.
		 * 
		 * If the payload is multipart, this list contains the
		 * individual parts.
		 */
		const OpProtobufMessageVector<OpScopeResourceManager_MessageSet::RequestData_Part> & GetPartList() const
		{
			return _partList;
		}

		// Setters

		/**
		 * Set the field @c requestID.
		 */
		void SetRequestID(UINT32 v)
		{
			_requestID = v;
		}

		/**
		 * Set the field @c resourceID.
		 */
		void SetResourceID(UINT32 v)
		{
			_resourceID = v;
		}

		/**
		 * Set the field @c mimeType.
		 */
		OpString & GetMimeTypeRef();

		/**
		 * Set the field @c characterEncoding.
		 * 
		 * The character encoding of the payload. Not applicable when the
		 * payload is of a non-text type.
		 * 
		 * Example: utf-8
		 */
		OpString & GetCharacterEncodingRef();

		/**
		 * Set the field @c contentLength.
		 */
		void SetContentLength(UINT32 v)
		{
			has_bits_.Reference().SetBit(4);
			_contentLength = v;
		}

		/**
		 * Set the field @c content.
		 */
		void SetContent(OpScopeResourceManager_MessageSet::Content * v);

		/**
		 * Set the field @c partList.
		 * 
		 * If the payload is multipart, this list contains the
		 * individual parts.
		 */
		OpProtobufMessageVector<OpScopeResourceManager_MessageSet::RequestData_Part> & GetPartListRef();

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeResourceManager_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		UINT32 _requestID;
		UINT32 _resourceID;
		OpString _mimeType;
		OpString _characterEncoding;
		UINT32 _contentLength;
		OpScopeResourceManager_MessageSet::Content * _content;
		OpProtobufMessageVector<OpScopeResourceManager_MessageSet::RequestData_Part> _partList;

		OpProtobufBitField<7> has_bits_;
		mutable int                 encoded_size_;
	};


	class RequestRetry
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 5
		};
		// END: Internal enums


		RequestRetry(
			UINT32 resource_id_arg = 0,
			UINT32 from_request_id_arg = 0,
			UINT32 to_request_id_arg = 0,
			double time_arg = 0.0
			)
			: _resourceID(resource_id_arg)
			, _fromRequestID(from_request_id_arg)
			, _toRequestID(to_request_id_arg)
			, _time(time_arg)
			, _requestID(0)
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
		 * Check if the field @c resourceID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasResourceID() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c fromRequestID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasFromRequestID() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c toRequestID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasToRequestID() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c time is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasTime() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c requestID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasRequestID() const
		{
			return has_bits_.Reference().IsSet(4);
		}

		// Getters

		/**
		 * Get the field @c resourceID.
		 */
		UINT32 GetResourceID() const
		{
			return _resourceID;
		}

		/**
		 * Get the field @c fromRequestID.
		 */
		UINT32 GetFromRequestID() const
		{
			return _fromRequestID;
		}

		/**
		 * Get the field @c toRequestID.
		 */
		UINT32 GetToRequestID() const
		{
			return _toRequestID;
		}

		/**
		 * Get the field @c time.
		 */
		double GetTime() const
		{
			return _time;
		}

		/**
		 * Get the field @c requestID.
		 * 
		 * fromRequestID alias
		 * 
		 * @since 1.3
		 */
		UINT32 GetRequestID() const
		{
			return _requestID;
		}

		// Setters

		/**
		 * Set the field @c resourceID.
		 */
		void SetResourceID(UINT32 v)
		{
			_resourceID = v;
		}

		/**
		 * Set the field @c fromRequestID.
		 */
		void SetFromRequestID(UINT32 v)
		{
			_fromRequestID = v;
		}

		/**
		 * Set the field @c toRequestID.
		 */
		void SetToRequestID(UINT32 v)
		{
			_toRequestID = v;
		}

		/**
		 * Set the field @c time.
		 */
		void SetTime(double v)
		{
			_time = v;
		}

		/**
		 * Set the field @c requestID.
		 * 
		 * fromRequestID alias
		 * 
		 * @since 1.3
		 */
		void SetRequestID(UINT32 v)
		{
			has_bits_.Reference().SetBit(4);
			_requestID = v;
		}

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeResourceManager_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		UINT32 _resourceID;
		UINT32 _fromRequestID;
		UINT32 _toRequestID;
		double _time;
		UINT32 _requestID;

		OpProtobufBitField<5> has_bits_;
		mutable int                 encoded_size_;
	};


	class RequestFinished
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 4
		};
		// END: Internal enums


		RequestFinished(
			UINT32 request_id_arg = 0,
			UINT32 resource_id_arg = 0,
			double time_arg = 0.0
			)
			: _requestID(request_id_arg)
			, _resourceID(resource_id_arg)
			, _time(time_arg)
			, _data(NULL)
			, encoded_size_(-1)
		{
		}
		OP_STATUS Construct(
			)
		{
			return OpStatus::OK;
		}
		~RequestFinished()
		{
			OP_DELETE(_data);
		}

		// Checkers
		/**
		 * Check if the field @c requestID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasRequestID() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c resourceID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasResourceID() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c time is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasTime() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c data is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasData() const
		{
			return has_bits_.Reference().IsSet(3);
		}

		// Getters

		/**
		 * Get the field @c requestID.
		 */
		UINT32 GetRequestID() const
		{
			return _requestID;
		}

		/**
		 * Get the field @c resourceID.
		 */
		UINT32 GetResourceID() const
		{
			return _resourceID;
		}

		/**
		 * Get the field @c time.
		 * 
		 * Milliseconds since Unix epoch.
		 */
		double GetTime() const
		{
			return _time;
		}

		/**
		 * Get the field @c data.
		 */
		OpScopeResourceManager_MessageSet::RequestData * GetData() const
		{
			return _data;
		}

		// Setters

		/**
		 * Set the field @c requestID.
		 */
		void SetRequestID(UINT32 v)
		{
			_requestID = v;
		}

		/**
		 * Set the field @c resourceID.
		 */
		void SetResourceID(UINT32 v)
		{
			_resourceID = v;
		}

		/**
		 * Set the field @c time.
		 * 
		 * Milliseconds since Unix epoch.
		 */
		void SetTime(double v)
		{
			_time = v;
		}

		/**
		 * Set the field @c data.
		 */
		void SetData(OpScopeResourceManager_MessageSet::RequestData * v);

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeResourceManager_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		UINT32 _requestID;
		UINT32 _resourceID;
		double _time;
		OpScopeResourceManager_MessageSet::RequestData * _data;

		OpProtobufBitField<4> has_bits_;
		mutable int                 encoded_size_;
	};


	class RequestHeader
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 5
		};
		// END: Internal enums


		RequestHeader(
			UINT32 request_id_arg = 0,
			UINT32 resource_id_arg = 0,
			double time_arg = 0.0
			)
			: _requestID(request_id_arg)
			, _resourceID(resource_id_arg)
			, _time(time_arg)
			, encoded_size_(-1)
		{
		}
		OP_STATUS Construct(
			const OpString & raw_arg
			)
		{
			RETURN_IF_ERROR(_raw.Set(raw_arg));
			return OpStatus::OK;
		}

		// Checkers
		/**
		 * Check if the field @c requestID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasRequestID() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c resourceID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasResourceID() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c time is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasTime() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c raw is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasRaw() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c headerList is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasHeaderList() const
		{
			return has_bits_.Reference().IsSet(4);
		}

		// Getters

		/**
		 * Get the field @c requestID.
		 */
		UINT32 GetRequestID() const
		{
			return _requestID;
		}

		/**
		 * Get the field @c resourceID.
		 */
		UINT32 GetResourceID() const
		{
			return _resourceID;
		}

		/**
		 * Get the field @c time.
		 * 
		 * Milliseconds since Unix epoch.
		 */
		double GetTime() const
		{
			return _time;
		}

		/**
		 * Get the field @c raw.
		 */
		const OpString & GetRaw() const
		{
			return _raw;
		}

		/**
		 * Get the field @c headerList.
		 */
		const OpProtobufMessageVector<OpScopeResourceManager_MessageSet::Header> & GetHeaderList() const
		{
			return _headerList;
		}

		// Setters

		/**
		 * Set the field @c requestID.
		 */
		void SetRequestID(UINT32 v)
		{
			_requestID = v;
		}

		/**
		 * Set the field @c resourceID.
		 */
		void SetResourceID(UINT32 v)
		{
			_resourceID = v;
		}

		/**
		 * Set the field @c time.
		 * 
		 * Milliseconds since Unix epoch.
		 */
		void SetTime(double v)
		{
			_time = v;
		}

		/**
		 * Set the field @c raw.
		 */
		OP_STATUS SetRaw(const char * v, int l = KAll);

		/**
		 * Set the field @c headerList.
		 */
		OpProtobufMessageVector<OpScopeResourceManager_MessageSet::Header> & GetHeaderListRef();

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeResourceManager_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		UINT32 _requestID;
		UINT32 _resourceID;
		double _time;
		OpString _raw;
		OpProtobufMessageVector<OpScopeResourceManager_MessageSet::Header> _headerList;

		OpProtobufBitField<5> has_bits_;
		mutable int                 encoded_size_;
	};


	class Request
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 8
		};
		// END: Internal enums


		Request(
			UINT32 request_id_arg = 0,
			UINT32 resource_id_arg = 0,
			UINT32 window_id_arg = 0,
			double time_arg = 0.0
			)
			: _requestID(request_id_arg)
			, _resourceID(resource_id_arg)
			, _windowID(window_id_arg)
			, _frameID(0)
			, _documentID(0)
			, _time(time_arg)
			, encoded_size_(-1)
		{
		}
		OP_STATUS Construct(
			const OpString & url_arg,
			const OpString & method_arg
			)
		{
			RETURN_IF_ERROR(_url.Set(url_arg));
			RETURN_IF_ERROR(_method.Set(method_arg));
			return OpStatus::OK;
		}

		// Checkers
		/**
		 * Check if the field @c requestID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasRequestID() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c resourceID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasResourceID() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c windowID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasWindowID() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c frameID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasFrameID() const
		{
			return has_bits_.Reference().IsSet(3);
		}

		/**
		 * Check if the field @c documentID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasDocumentID() const
		{
			return has_bits_.Reference().IsSet(4);
		}

		/**
		 * Check if the field @c url is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasUrl() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c time is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasTime() const
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

		// Getters

		/**
		 * Get the field @c requestID.
		 */
		UINT32 GetRequestID() const
		{
			return _requestID;
		}

		/**
		 * Get the field @c resourceID.
		 */
		UINT32 GetResourceID() const
		{
			return _resourceID;
		}

		/**
		 * Get the field @c windowID.
		 */
		UINT32 GetWindowID() const
		{
			return _windowID;
		}

		/**
		 * Get the field @c frameID.
		 */
		UINT32 GetFrameID() const
		{
			return _frameID;
		}

		/**
		 * Get the field @c documentID.
		 */
		UINT32 GetDocumentID() const
		{
			return _documentID;
		}

		/**
		 * Get the field @c url.
		 */
		const OpString & GetUrl() const
		{
			return _url;
		}

		/**
		 * Get the field @c time.
		 * 
		 * Milliseconds since Unix epoch.
		 */
		double GetTime() const
		{
			return _time;
		}

		/**
		 * Get the field @c method.
		 */
		const OpString & GetMethod() const
		{
			return _method;
		}

		// Setters

		/**
		 * Set the field @c requestID.
		 */
		void SetRequestID(UINT32 v)
		{
			_requestID = v;
		}

		/**
		 * Set the field @c resourceID.
		 */
		void SetResourceID(UINT32 v)
		{
			_resourceID = v;
		}

		/**
		 * Set the field @c windowID.
		 */
		void SetWindowID(UINT32 v)
		{
			_windowID = v;
		}

		/**
		 * Set the field @c frameID.
		 */
		void SetFrameID(UINT32 v)
		{
			has_bits_.Reference().SetBit(3);
			_frameID = v;
		}

		/**
		 * Set the field @c documentID.
		 */
		void SetDocumentID(UINT32 v)
		{
			has_bits_.Reference().SetBit(4);
			_documentID = v;
		}

		/**
		 * Set the field @c url.
		 */
		OP_STATUS SetUrl(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c time.
		 * 
		 * Milliseconds since Unix epoch.
		 */
		void SetTime(double v)
		{
			_time = v;
		}

		/**
		 * Set the field @c method.
		 */
		OpString & GetMethodRef();

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeResourceManager_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		UINT32 _requestID;
		UINT32 _resourceID;
		UINT32 _windowID;
		UINT32 _frameID;
		UINT32 _documentID;
		OpString _url;
		double _time;
		OpString _method;

		OpProtobufBitField<8> has_bits_;
		mutable int                 encoded_size_;
	};


	class UrlUnload
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 2
		};
		// END: Internal enums


		UrlUnload(
			UINT32 resource_id_arg = 0,
			double time_arg = 0.0
			)
			: _resourceID(resource_id_arg)
			, _time(time_arg)
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
		 * Check if the field @c resourceID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasResourceID() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c time is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasTime() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c resourceID.
		 */
		UINT32 GetResourceID() const
		{
			return _resourceID;
		}

		/**
		 * Get the field @c time.
		 * 
		 * Milliseconds since Unix epoch.
		 */
		double GetTime() const
		{
			return _time;
		}

		// Setters

		/**
		 * Set the field @c resourceID.
		 */
		void SetResourceID(UINT32 v)
		{
			_resourceID = v;
		}

		/**
		 * Set the field @c time.
		 * 
		 * Milliseconds since Unix epoch.
		 */
		void SetTime(double v)
		{
			_time = v;
		}

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeResourceManager_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		UINT32 _resourceID;
		double _time;

		OpProtobufBitField<2> has_bits_;
		mutable int                 encoded_size_;
	};


	class UrlRedirect
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 3
		};
		// END: Internal enums


		UrlRedirect(
			UINT32 from_resource_id_arg = 0,
			UINT32 to_resource_id_arg = 0,
			double time_arg = 0.0
			)
			: _fromResourceID(from_resource_id_arg)
			, _toResourceID(to_resource_id_arg)
			, _time(time_arg)
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
		 * Check if the field @c fromResourceID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasFromResourceID() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c toResourceID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasToResourceID() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c time is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasTime() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c fromResourceID.
		 */
		UINT32 GetFromResourceID() const
		{
			return _fromResourceID;
		}

		/**
		 * Get the field @c toResourceID.
		 */
		UINT32 GetToResourceID() const
		{
			return _toResourceID;
		}

		/**
		 * Get the field @c time.
		 * 
		 * Milliseconds since Unix epoch.
		 */
		double GetTime() const
		{
			return _time;
		}

		// Setters

		/**
		 * Set the field @c fromResourceID.
		 */
		void SetFromResourceID(UINT32 v)
		{
			_fromResourceID = v;
		}

		/**
		 * Set the field @c toResourceID.
		 */
		void SetToResourceID(UINT32 v)
		{
			_toResourceID = v;
		}

		/**
		 * Set the field @c time.
		 * 
		 * Milliseconds since Unix epoch.
		 */
		void SetTime(double v)
		{
			_time = v;
		}

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeResourceManager_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		UINT32 _fromResourceID;
		UINT32 _toResourceID;
		double _time;

		OpProtobufBitField<3> has_bits_;
		mutable int                 encoded_size_;
	};


	class UrlFinished
	{
	public:
		// BEGIN: Nested items

		// Enum UrlFinished.Result
		typedef UrlFinished_Result Result;
		static const UrlFinished_Result RESULT_FINISHED = UrlFinished_Result_RESULT_FINISHED;
		static const UrlFinished_Result RESULT_FAILED = UrlFinished_Result_RESULT_FAILED;
		static const UrlFinished_Result RESULT_STOPPED = UrlFinished_Result_RESULT_STOPPED;

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 6
		};
		// END: Internal enums


		UrlFinished(
			UINT32 resource_id_arg = 0,
			UrlFinished_Result result_arg = UrlFinished_Result_RESULT_FINISHED,
			double time_arg = 0.0
			)
			: _resourceID(resource_id_arg)
			, _result(result_arg)
			, _time(time_arg)
			, _contentLength(0)
			, encoded_size_(-1)
		{
		}
		OP_STATUS Construct(
			const OpString * mime_type_arg = NULL,
			const OpString * character_encoding_arg = NULL
			)
		{
			if (mime_type_arg)
			{
				RETURN_IF_ERROR(_mimeType.Set(*mime_type_arg));
				has_bits_.Reference().SetBit(3);

			}
			if (character_encoding_arg)
			{
				RETURN_IF_ERROR(_characterEncoding.Set(*character_encoding_arg));
				has_bits_.Reference().SetBit(4);

			}
			return OpStatus::OK;
		}

		// Checkers
		/**
		 * Check if the field @c resourceID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasResourceID() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c result is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasResult() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c time is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasTime() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c mimeType is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasMimeType() const
		{
			return has_bits_.Reference().IsSet(3);
		}

		/**
		 * Check if the field @c characterEncoding is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasCharacterEncoding() const
		{
			return has_bits_.Reference().IsSet(4);
		}

		/**
		 * Check if the field @c contentLength is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasContentLength() const
		{
			return has_bits_.Reference().IsSet(5);
		}

		// Getters

		/**
		 * Get the field @c resourceID.
		 */
		UINT32 GetResourceID() const
		{
			return _resourceID;
		}

		/**
		 * Get the field @c result.
		 */
		OpScopeResourceManager_MessageSet::UrlFinished_Result GetResult() const
		{
			return static_cast<OpScopeResourceManager_MessageSet::UrlFinished_Result>(_result);
		}

		/**
		 * Get the field @c time.
		 * 
		 * Milliseconds since Unix epoch.
		 */
		double GetTime() const
		{
			return _time;
		}

		/**
		 * Get the field @c mimeType.
		 * 
		 * The MIME type of the resource. This information might not be available if the server
		 * did not specify the MIME type, and if content detection has not yet run (or was unable
		 * to detect the type).
		 */
		const OpString & GetMimeType() const
		{
			return _mimeType;
		}

		/**
		 * Get the field @c characterEncoding.
		 * 
		 * The character encoding of the resource. This information might not be available if the server
		 * did not specify the character encoding, and if character encoding detection has not yet run
		 * (or was unable to detect the type).
		 */
		const OpString & GetCharacterEncoding() const
		{
			return _characterEncoding;
		}

		/**
		 * Get the field @c contentLength.
		 * 
		 * The size of the body (if any).
		 */
		UINT32 GetContentLength() const
		{
			return _contentLength;
		}

		// Setters

		/**
		 * Set the field @c resourceID.
		 */
		void SetResourceID(UINT32 v)
		{
			_resourceID = v;
		}

		/**
		 * Set the field @c result.
		 */
		void SetResult(OpScopeResourceManager_MessageSet::UrlFinished_Result v);

		/**
		 * Set the field @c time.
		 * 
		 * Milliseconds since Unix epoch.
		 */
		void SetTime(double v)
		{
			_time = v;
		}

		/**
		 * Set the field @c mimeType.
		 * 
		 * The MIME type of the resource. This information might not be available if the server
		 * did not specify the MIME type, and if content detection has not yet run (or was unable
		 * to detect the type).
		 */
		OpString & GetMimeTypeRef();

		/**
		 * Set the field @c characterEncoding.
		 * 
		 * The character encoding of the resource. This information might not be available if the server
		 * did not specify the character encoding, and if character encoding detection has not yet run
		 * (or was unable to detect the type).
		 */
		OpString & GetCharacterEncodingRef();

		/**
		 * Set the field @c contentLength.
		 * 
		 * The size of the body (if any).
		 */
		void SetContentLength(UINT32 v)
		{
			has_bits_.Reference().SetBit(5);
			_contentLength = v;
		}

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeResourceManager_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		UINT32 _resourceID;
		INT32 _result;
		double _time;
		OpString _mimeType;
		OpString _characterEncoding;
		UINT32 _contentLength;

		OpProtobufBitField<6> has_bits_;
		mutable int                 encoded_size_;
	};


	class UrlLoad
	{
	public:
		// BEGIN: Nested items

		// Enum UrlLoad.URLType
		typedef UrlLoad_URLType URLType;
		static const UrlLoad_URLType URLTYPE_UNKNOWN = UrlLoad_URLType_URLTYPE_UNKNOWN;
		static const UrlLoad_URLType URLTYPE_HTTP = UrlLoad_URLType_URLTYPE_HTTP;
		static const UrlLoad_URLType URLTYPE_HTTPS = UrlLoad_URLType_URLTYPE_HTTPS;
		static const UrlLoad_URLType URLTYPE_FILE = UrlLoad_URLType_URLTYPE_FILE;
		static const UrlLoad_URLType URLTYPE_DATA = UrlLoad_URLType_URLTYPE_DATA;
		static const UrlLoad_URLType URLTYPE_FTP = UrlLoad_URLType_URLTYPE_FTP;
		static const UrlLoad_URLType URLTYPE_GOPHER = UrlLoad_URLType_URLTYPE_GOPHER;
		static const UrlLoad_URLType URLTYPE_WAIS = UrlLoad_URLType_URLTYPE_WAIS;
		static const UrlLoad_URLType URLTYPE_NEWS = UrlLoad_URLType_URLTYPE_NEWS;
		static const UrlLoad_URLType URLTYPE_SNEWS = UrlLoad_URLType_URLTYPE_SNEWS;
		static const UrlLoad_URLType URLTYPE_NEWSATTACHMENT = UrlLoad_URLType_URLTYPE_NEWSATTACHMENT;
		static const UrlLoad_URLType URLTYPE_SNEWSATTACHMENT = UrlLoad_URLType_URLTYPE_SNEWSATTACHMENT;
		static const UrlLoad_URLType URLTYPE_EMAIL = UrlLoad_URLType_URLTYPE_EMAIL;
		static const UrlLoad_URLType URLTYPE_ATTACHMENT = UrlLoad_URLType_URLTYPE_ATTACHMENT;
		static const UrlLoad_URLType URLTYPE_TELNET = UrlLoad_URLType_URLTYPE_TELNET;
		static const UrlLoad_URLType URLTYPE_MAILTO = UrlLoad_URLType_URLTYPE_MAILTO;
		static const UrlLoad_URLType URLTYPE_OPERA = UrlLoad_URLType_URLTYPE_OPERA;
		static const UrlLoad_URLType URLTYPE_JAVASCRIPT = UrlLoad_URLType_URLTYPE_JAVASCRIPT;
		static const UrlLoad_URLType URLTYPE_CONTENT_ID = UrlLoad_URLType_URLTYPE_CONTENT_ID;
		static const UrlLoad_URLType URLTYPE_TN3270 = UrlLoad_URLType_URLTYPE_TN3270;
		static const UrlLoad_URLType URLTYPE_SOURCE = UrlLoad_URLType_URLTYPE_SOURCE;
		static const UrlLoad_URLType URLTYPE_CLIENT = UrlLoad_URLType_URLTYPE_CLIENT;
		static const UrlLoad_URLType URLTYPE_NNTP = UrlLoad_URLType_URLTYPE_NNTP;
		static const UrlLoad_URLType URLTYPE_NNTPS = UrlLoad_URLType_URLTYPE_NNTPS;
		static const UrlLoad_URLType URLTYPE_SHARE = UrlLoad_URLType_URLTYPE_SHARE;
		static const UrlLoad_URLType URLTYPE_GHTTP = UrlLoad_URLType_URLTYPE_GHTTP;
		static const UrlLoad_URLType URLTYPE_TV = UrlLoad_URLType_URLTYPE_TV;
		static const UrlLoad_URLType URLTYPE_EDITED = UrlLoad_URLType_URLTYPE_EDITED;
		static const UrlLoad_URLType URLTYPE_ERROR = UrlLoad_URLType_URLTYPE_ERROR;
		static const UrlLoad_URLType URLTYPE_DVB = UrlLoad_URLType_URLTYPE_DVB;
		static const UrlLoad_URLType URLTYPE_TEL = UrlLoad_URLType_URLTYPE_TEL;
		static const UrlLoad_URLType URLTYPE_MAIL = UrlLoad_URLType_URLTYPE_MAIL;
		static const UrlLoad_URLType URLTYPE_IRC = UrlLoad_URLType_URLTYPE_IRC;
		static const UrlLoad_URLType URLTYPE_SMS = UrlLoad_URLType_URLTYPE_SMS;
		static const UrlLoad_URLType URLTYPE_SMSTO = UrlLoad_URLType_URLTYPE_SMSTO;
		static const UrlLoad_URLType URLTYPE_CHAT_TRANSFER = UrlLoad_URLType_URLTYPE_CHAT_TRANSFER;
		static const UrlLoad_URLType URLTYPE_DEVICE = UrlLoad_URLType_URLTYPE_DEVICE;
		static const UrlLoad_URLType URLTYPE_MOUNTPOINT = UrlLoad_URLType_URLTYPE_MOUNTPOINT;
		static const UrlLoad_URLType URLTYPE_WIDGET = UrlLoad_URLType_URLTYPE_WIDGET;
		static const UrlLoad_URLType URLTYPE_OBMLSERVER = UrlLoad_URLType_URLTYPE_OBMLSERVER;
		static const UrlLoad_URLType URLTYPE_UNITE = UrlLoad_URLType_URLTYPE_UNITE;
		static const UrlLoad_URLType URLTYPE_INTERNAL = UrlLoad_URLType_URLTYPE_INTERNAL;

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 8
		};
		// END: Internal enums


		UrlLoad(
			UINT32 window_id_arg = 0,
			UINT32 resource_id_arg = 0,
			UrlLoad_URLType url_type_arg = UrlLoad_URLType_URLTYPE_UNKNOWN,
			double time_arg = 0.0
			)
			: _windowID(window_id_arg)
			, _frameID(0)
			, _documentID(0)
			, _resourceID(resource_id_arg)
			, _urlType(url_type_arg)
			, _time(time_arg)
			, _loadOrigin(LOADORIGIN_XHR)
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
		 * Check if the field @c frameID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasFrameID() const
		{
			return has_bits_.Reference().IsSet(1);
		}

		/**
		 * Check if the field @c documentID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasDocumentID() const
		{
			return has_bits_.Reference().IsSet(2);
		}

		/**
		 * Check if the field @c resourceID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasResourceID() const
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

		/**
		 * Check if the field @c urlType is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasUrlType() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c time is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasTime() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c loadOrigin is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasLoadOrigin() const
		{
			return has_bits_.Reference().IsSet(7);
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
		 * Get the field @c frameID.
		 */
		UINT32 GetFrameID() const
		{
			return _frameID;
		}

		/**
		 * Get the field @c documentID.
		 */
		UINT32 GetDocumentID() const
		{
			return _documentID;
		}

		/**
		 * Get the field @c resourceID.
		 */
		UINT32 GetResourceID() const
		{
			return _resourceID;
		}

		/**
		 * Get the field @c url.
		 * 
		 * The URL which which is about to be loaded.
		 */
		const OpString & GetUrl() const
		{
			return _url;
		}

		/**
		 * Get the field @c urlType.
		 * 
		 * The type of URL that was started, this can referer to a specific protocol
		 * or a special URL type.
		 * 
		 * @note More types may be added in the future, make sure the client supports that.
		 */
		OpScopeResourceManager_MessageSet::UrlLoad_URLType GetUrlType() const
		{
			return static_cast<OpScopeResourceManager_MessageSet::UrlLoad_URLType>(_urlType);
		}

		/**
		 * Get the field @c time.
		 * 
		 * Milliseconds since Unix epoch.
		 */
		double GetTime() const
		{
			return _time;
		}

		/**
		 * Get the field @c loadOrigin.
		 * 
		 * This field may be set to provide additional information about the
		 * origin of a URL load.
		 * 
		 * If the field is not set, the origin is unknown.
		 * 
		 * @since 1.2
		 */
		OpScopeResourceManager_MessageSet::LoadOrigin GetLoadOrigin() const
		{
			return static_cast<OpScopeResourceManager_MessageSet::LoadOrigin>(_loadOrigin);
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
		 * Set the field @c frameID.
		 */
		void SetFrameID(UINT32 v)
		{
			has_bits_.Reference().SetBit(1);
			_frameID = v;
		}

		/**
		 * Set the field @c documentID.
		 */
		void SetDocumentID(UINT32 v)
		{
			has_bits_.Reference().SetBit(2);
			_documentID = v;
		}

		/**
		 * Set the field @c resourceID.
		 */
		void SetResourceID(UINT32 v)
		{
			_resourceID = v;
		}

		/**
		 * Set the field @c url.
		 * 
		 * The URL which which is about to be loaded.
		 */
		OpString & GetUrlRef();

		/**
		 * Set the field @c urlType.
		 * 
		 * The type of URL that was started, this can referer to a specific protocol
		 * or a special URL type.
		 * 
		 * @note More types may be added in the future, make sure the client supports that.
		 */
		void SetUrlType(OpScopeResourceManager_MessageSet::UrlLoad_URLType v);

		/**
		 * Set the field @c time.
		 * 
		 * Milliseconds since Unix epoch.
		 */
		void SetTime(double v)
		{
			_time = v;
		}

		/**
		 * Set the field @c loadOrigin.
		 * 
		 * This field may be set to provide additional information about the
		 * origin of a URL load.
		 * 
		 * If the field is not set, the origin is unknown.
		 * 
		 * @since 1.2
		 */
		void SetLoadOrigin(OpScopeResourceManager_MessageSet::LoadOrigin v);

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeResourceManager_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		UINT32 _windowID;
		UINT32 _frameID;
		UINT32 _documentID;
		UINT32 _resourceID;
		OpString _url;
		INT32 _urlType;
		double _time;
		INT32 _loadOrigin;

		OpProtobufBitField<8> has_bits_;
		mutable int                 encoded_size_;
	};


	class CreateRequestArg
	{
	public:
		// BEGIN: Nested items

		// Enum CreateRequestArg.HeaderPolicy
		typedef CreateRequestArg_HeaderPolicy HeaderPolicy;
		static const CreateRequestArg_HeaderPolicy HEADERPOLICY_NORMAL = CreateRequestArg_HeaderPolicy_HEADERPOLICY_NORMAL;
		static const CreateRequestArg_HeaderPolicy HEADERPOLICY_OVERWRITE = CreateRequestArg_HeaderPolicy_HEADERPOLICY_OVERWRITE;
		static const CreateRequestArg_HeaderPolicy HEADERPOLICY_REPLACE = CreateRequestArg_HeaderPolicy_HEADERPOLICY_REPLACE;

		// Message CreateRequestArg.Payload
		typedef CreateRequestArg_Payload Payload;

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 9
		};
		// END: Internal enums


		CreateRequestArg(
			UINT32 window_id_arg = 0
			)
			: _windowID(window_id_arg)
			, _payload(NULL)
			, _headerPolicy(CreateRequestArg_HeaderPolicy_HEADERPOLICY_NORMAL)
			, _reloadPolicy(RELOADPOLICY_DEFAULT)
			, _requestContentMode(NULL)
			, _responseContentMode(NULL)
			, encoded_size_(-1)
		{
		}
		OP_STATUS Construct(
			const OpString & url_arg,
			const OpString & method_arg
			)
		{
			RETURN_IF_ERROR(_url.Set(url_arg));
			RETURN_IF_ERROR(_method.Set(method_arg));
			return OpStatus::OK;
		}
		~CreateRequestArg()
		{
			OP_DELETE(_payload);
			OP_DELETE(_requestContentMode);
			OP_DELETE(_responseContentMode);
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

		/**
		 * Check if the field @c method is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasMethod() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c headerList is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasHeaderList() const
		{
			return has_bits_.Reference().IsSet(3);
		}

		/**
		 * Check if the field @c payload is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasPayload() const
		{
			return has_bits_.Reference().IsSet(4);
		}

		/**
		 * Check if the field @c headerPolicy is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasHeaderPolicy() const
		{
			return has_bits_.Reference().IsSet(5);
		}

		/**
		 * Check if the field @c reloadPolicy is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasReloadPolicy() const
		{
			return has_bits_.Reference().IsSet(6);
		}

		/**
		 * Check if the field @c requestContentMode is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasRequestContentMode() const
		{
			return has_bits_.Reference().IsSet(7);
		}

		/**
		 * Check if the field @c responseContentMode is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasResponseContentMode() const
		{
			return has_bits_.Reference().IsSet(8);
		}

		// Getters

		/**
		 * Get the field @c windowID.
		 * 
		 * The Window to perform the request in. (The events triggered by this
		 * command will appear to come from this Window).
		 */
		UINT32 GetWindowID() const
		{
			return _windowID;
		}

		/**
		 * Get the field @c url.
		 * 
		 * The URL to request.
		 */
		const OpString & GetUrl() const
		{
			return _url;
		}

		/**
		 * Get the field @c method.
		 * 
		 * The HTTP method, e.g. "GET", "POST".
		 */
		const OpString & GetMethod() const
		{
			return _method;
		}

		/**
		 * Get the field @c headerList.
		 * 
		 * Set HTTP headers for this request. When HeaderPolicy NORMAL is chosen,
		 * Opera will set reasonable default headers. With HeaderPolicy NORMAL, the
		 * following headers can not be set by the caller:
		 * 
		 * - Accept-Charset
		 * - Accept-Encoding
		 * - Cache-Control
		 * - Connection
		 * - Cookie
		 * - Cookie2
		 * - Date
		 * - Expect
		 * - Host
		 * - If-Range
		 * - Pragma
		 * - Range
		 * - TE
		 * - Trailer
		 * - Upgrade
		 * - User-Agent
		 * - Via
		 * 
		 * Use either HeaderPolicy OVERWRITE, or REPLACE to set these headers.
		 */
		const OpProtobufMessageVector<OpScopeResourceManager_MessageSet::Header> & GetHeaderList() const
		{
			return _headerList;
		}

		/**
		 * Get the field @c payload.
		 */
		OpScopeResourceManager_MessageSet::CreateRequestArg_Payload * GetPayload() const
		{
			return _payload;
		}

		/**
		 * Get the field @c headerPolicy.
		 * 
		 * Controls how custom headers are handled.
		 */
		OpScopeResourceManager_MessageSet::CreateRequestArg_HeaderPolicy GetHeaderPolicy() const
		{
			return static_cast<OpScopeResourceManager_MessageSet::CreateRequestArg_HeaderPolicy>(_headerPolicy);
		}

		/**
		 * Get the field @c reloadPolicy.
		 * 
		 * Override the global reload policy for this resource.
		 */
		OpScopeResourceManager_MessageSet::ReloadPolicy GetReloadPolicy() const
		{
			return static_cast<OpScopeResourceManager_MessageSet::ReloadPolicy>(_reloadPolicy);
		}

		/**
		 * Get the field @c requestContentMode.
		 * 
		 * Override the global request content mode for this resource.
		 */
		OpScopeResourceManager_MessageSet::ContentMode * GetRequestContentMode() const
		{
			return _requestContentMode;
		}

		/**
		 * Get the field @c responseContentMode.
		 * 
		 * Override the global response content mode for this resource.
		 */
		OpScopeResourceManager_MessageSet::ContentMode * GetResponseContentMode() const
		{
			return _responseContentMode;
		}

		// Setters

		/**
		 * Set the field @c windowID.
		 * 
		 * The Window to perform the request in. (The events triggered by this
		 * command will appear to come from this Window).
		 */
		void SetWindowID(UINT32 v)
		{
			_windowID = v;
		}

		/**
		 * Set the field @c url.
		 * 
		 * The URL to request.
		 */
		OP_STATUS SetUrl(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c method.
		 * 
		 * The HTTP method, e.g. "GET", "POST".
		 */
		OP_STATUS SetMethod(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c headerList.
		 * 
		 * Set HTTP headers for this request. When HeaderPolicy NORMAL is chosen,
		 * Opera will set reasonable default headers. With HeaderPolicy NORMAL, the
		 * following headers can not be set by the caller:
		 * 
		 * - Accept-Charset
		 * - Accept-Encoding
		 * - Cache-Control
		 * - Connection
		 * - Cookie
		 * - Cookie2
		 * - Date
		 * - Expect
		 * - Host
		 * - If-Range
		 * - Pragma
		 * - Range
		 * - TE
		 * - Trailer
		 * - Upgrade
		 * - User-Agent
		 * - Via
		 * 
		 * Use either HeaderPolicy OVERWRITE, or REPLACE to set these headers.
		 */
		OpProtobufMessageVector<OpScopeResourceManager_MessageSet::Header> & GetHeaderListRef();

		/**
		 * Set the field @c payload.
		 */
		void SetPayload(OpScopeResourceManager_MessageSet::CreateRequestArg_Payload * v);

		/**
		 * Set the field @c headerPolicy.
		 * 
		 * Controls how custom headers are handled.
		 */
		void SetHeaderPolicy(OpScopeResourceManager_MessageSet::CreateRequestArg_HeaderPolicy v);

		/**
		 * Set the field @c reloadPolicy.
		 * 
		 * Override the global reload policy for this resource.
		 */
		void SetReloadPolicy(OpScopeResourceManager_MessageSet::ReloadPolicy v);

		/**
		 * Set the field @c requestContentMode.
		 * 
		 * Override the global request content mode for this resource.
		 */
		void SetRequestContentMode(OpScopeResourceManager_MessageSet::ContentMode * v);

		/**
		 * Set the field @c responseContentMode.
		 * 
		 * Override the global response content mode for this resource.
		 */
		void SetResponseContentMode(OpScopeResourceManager_MessageSet::ContentMode * v);

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeResourceManager_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		UINT32 _windowID;
		OpString _url;
		OpString _method;
		OpProtobufMessageVector<OpScopeResourceManager_MessageSet::Header> _headerList;
		OpScopeResourceManager_MessageSet::CreateRequestArg_Payload * _payload;
		INT32 _headerPolicy;
		INT32 _reloadPolicy;
		OpScopeResourceManager_MessageSet::ContentMode * _requestContentMode;
		OpScopeResourceManager_MessageSet::ContentMode * _responseContentMode;

		OpProtobufBitField<9> has_bits_;
		mutable int                 encoded_size_;
	};


	class RemoveHeaderOverridesArg
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 1
		};
		// END: Internal enums


		RemoveHeaderOverridesArg(
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
		 * Check if the field @c nameList is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasNameList() const
		{
			return has_bits_.Reference().IsSet(0);
		}

		// Getters

		/**
		 * Get the field @c nameList.
		 * 
		 * A list of header names to remove overrides for. If there is no override
		 * for a certain name, it will be ignored.
		 */
		const OpAutoVector<OpString> & GetNameList() const
		{
			return _nameList;
		}

		// Setters

		/**
		 * Set the field @c nameList.
		 * 
		 * A list of header names to remove overrides for. If there is no override
		 * for a certain name, it will be ignored.
		 */
		OpAutoVector<OpString> & GetNameListRef();

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeResourceManager_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		OpAutoVector<OpString> _nameList;

		OpProtobufBitField<1> has_bits_;
		mutable int                 encoded_size_;
	};


	class AddHeaderOverridesArg
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 1
		};
		// END: Internal enums


		AddHeaderOverridesArg(
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
		 * Check if the field @c headerList is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasHeaderList() const
		{
			return has_bits_.Reference().IsSet(0);
		}

		// Getters

		/**
		 * Get the field @c headerList.
		 * 
		 * A list of headers to override. If the 'value' field of any Header
		 * is missing, that header will be removed from the request (if present).
		 */
		const OpProtobufMessageVector<OpScopeResourceManager_MessageSet::Header> & GetHeaderList() const
		{
			return _headerList;
		}

		// Setters

		/**
		 * Set the field @c headerList.
		 * 
		 * A list of headers to override. If the 'value' field of any Header
		 * is missing, that header will be removed from the request (if present).
		 */
		OpProtobufMessageVector<OpScopeResourceManager_MessageSet::Header> & GetHeaderListRef();

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeResourceManager_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		OpProtobufMessageVector<OpScopeResourceManager_MessageSet::Header> _headerList;

		OpProtobufBitField<1> has_bits_;
		mutable int                 encoded_size_;
	};


	class SetResponseModeArg
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 2
		};
		// END: Internal enums


		SetResponseModeArg(
			)
			: _defaultContentMode(NULL)
			, encoded_size_(-1)
		{
		}
		OP_STATUS Construct(
			)
		{
			return OpStatus::OK;
		}
		~SetResponseModeArg()
		{
			OP_DELETE(_defaultContentMode);
		}

		// Checkers
		/**
		 * Check if the field @c defaultContentMode is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasDefaultContentMode() const
		{
			return has_bits_.Reference().IsSet(0);
		}

		/**
		 * Check if the field @c mimeModeList is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasMimeModeList() const
		{
			return has_bits_.Reference().IsSet(1);
		}

		// Getters

		/**
		 * Get the field @c defaultContentMode.
		 * 
		 * If there is no matching mode for a certain mime type, then this
		 * mode will be used. If not present, no data is received by default.
		 */
		OpScopeResourceManager_MessageSet::ContentMode * GetDefaultContentMode() const
		{
			return _defaultContentMode;
		}

		/**
		 * Get the field @c mimeModeList.
		 * 
		 * Whenever a resource matches a mime type found in this list, the
		 * corresponding ContentMode is used for that resource.
		 */
		const OpProtobufMessageVector<OpScopeResourceManager_MessageSet::MimeMode> & GetMimeModeList() const
		{
			return _mimeModeList;
		}

		// Setters

		/**
		 * Set the field @c defaultContentMode.
		 * 
		 * If there is no matching mode for a certain mime type, then this
		 * mode will be used. If not present, no data is received by default.
		 */
		void SetDefaultContentMode(OpScopeResourceManager_MessageSet::ContentMode * v);

		/**
		 * Set the field @c mimeModeList.
		 * 
		 * Whenever a resource matches a mime type found in this list, the
		 * corresponding ContentMode is used for that resource.
		 */
		OpProtobufMessageVector<OpScopeResourceManager_MessageSet::MimeMode> & GetMimeModeListRef();

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeResourceManager_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		OpScopeResourceManager_MessageSet::ContentMode * _defaultContentMode;
		OpProtobufMessageVector<OpScopeResourceManager_MessageSet::MimeMode> _mimeModeList;

		OpProtobufBitField<2> has_bits_;
		mutable int                 encoded_size_;
	};


	class SetRequestModeArg
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 3
		};
		// END: Internal enums


		SetRequestModeArg(
			)
			: _defaultContentMode(NULL)
			, encoded_size_(-1)
		{
		}
		OP_STATUS Construct(
			)
		{
			return OpStatus::OK;
		}
		~SetRequestModeArg()
		{
			OP_DELETE(_defaultContentMode);
		}

		// Checkers
		/**
		 * Check if the field @c defaultContentMode is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasDefaultContentMode() const
		{
			return has_bits_.Reference().IsSet(0);
		}

		/**
		 * Check if the field @c mimeModeList is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasMimeModeList() const
		{
			return has_bits_.Reference().IsSet(1);
		}

		/**
		 * Check if the field @c multipartMimeModeList is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasMultipartMimeModeList() const
		{
			return has_bits_.Reference().IsSet(2);
		}

		// Getters

		/**
		 * Get the field @c defaultContentMode.
		 * 
		 * If there is no matching mode for a certain mime type, then this
		 * mode will be used. If not present, no data is received by default.
		 */
		OpScopeResourceManager_MessageSet::ContentMode * GetDefaultContentMode() const
		{
			return _defaultContentMode;
		}

		/**
		 * Get the field @c mimeModeList.
		 * 
		 * Whenever a resource matches a mime type found in this list, the
		 * corresponding ContentMode is used for that resource.
		 */
		const OpProtobufMessageVector<OpScopeResourceManager_MessageSet::MimeMode> & GetMimeModeList() const
		{
			return _mimeModeList;
		}

		/**
		 * Get the field @c multipartMimeModeList.
		 * 
		 * Whenever an individual part of a multipart/form-data matches a
		 * type found in this list, the corresponding ContentMode is used
		 * for that part.
		 */
		const OpProtobufMessageVector<OpScopeResourceManager_MessageSet::MimeMode> & GetMultipartMimeModeList() const
		{
			return _multipartMimeModeList;
		}

		// Setters

		/**
		 * Set the field @c defaultContentMode.
		 * 
		 * If there is no matching mode for a certain mime type, then this
		 * mode will be used. If not present, no data is received by default.
		 */
		void SetDefaultContentMode(OpScopeResourceManager_MessageSet::ContentMode * v);

		/**
		 * Set the field @c mimeModeList.
		 * 
		 * Whenever a resource matches a mime type found in this list, the
		 * corresponding ContentMode is used for that resource.
		 */
		OpProtobufMessageVector<OpScopeResourceManager_MessageSet::MimeMode> & GetMimeModeListRef();

		/**
		 * Set the field @c multipartMimeModeList.
		 * 
		 * Whenever an individual part of a multipart/form-data matches a
		 * type found in this list, the corresponding ContentMode is used
		 * for that part.
		 */
		OpProtobufMessageVector<OpScopeResourceManager_MessageSet::MimeMode> & GetMultipartMimeModeListRef();

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeResourceManager_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		OpScopeResourceManager_MessageSet::ContentMode * _defaultContentMode;
		OpProtobufMessageVector<OpScopeResourceManager_MessageSet::MimeMode> _mimeModeList;
		OpProtobufMessageVector<OpScopeResourceManager_MessageSet::MimeMode> _multipartMimeModeList;

		OpProtobufBitField<3> has_bits_;
		mutable int                 encoded_size_;
	};


	class ContentMode
	{
	public:
		// BEGIN: Nested items

		// Enum ContentMode.Transport
		typedef ContentMode_Transport Transport;
		static const ContentMode_Transport TRANSPORT_STRING = ContentMode_Transport_TRANSPORT_STRING;
		static const ContentMode_Transport TRANSPORT_BYTES = ContentMode_Transport_TRANSPORT_BYTES;
		static const ContentMode_Transport TRANSPORT_DATA_URI = ContentMode_Transport_TRANSPORT_DATA_URI;
		static const ContentMode_Transport TRANSPORT_OFF = ContentMode_Transport_TRANSPORT_OFF;

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 3
		};
		// END: Internal enums


		ContentMode(
			)
			: _transport(ContentMode_Transport_TRANSPORT_OFF)
			, _decode(FALSE)
			, _sizeLimit(1000000)
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
		 * Check if the field @c transport is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasTransport() const
		{
			return has_bits_.Reference().IsSet(0);
		}

		/**
		 * Check if the field @c decode is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasDecode() const
		{
			return has_bits_.Reference().IsSet(1);
		}

		/**
		 * Check if the field @c sizeLimit is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasSizeLimit() const
		{
			return has_bits_.Reference().IsSet(2);
		}

		// Getters

		/**
		 * Get the field @c transport.
		 * 
		 * Indicates how to send the payload.
		 */
		OpScopeResourceManager_MessageSet::ContentMode_Transport GetTransport() const
		{
			return static_cast<OpScopeResourceManager_MessageSet::ContentMode_Transport>(_transport);
		}

		/**
		 * Get the field @c decode.
		 * 
		 * Decode the data (for instance, decompress it, decrypt it, etc). This is
		 * unrelated to character encoding.
		 */
		BOOL GetDecode() const
		{
			return _decode;
		}

		/**
		 * Get the field @c sizeLimit.
		 * 
		 * Even if other conditions are met, do not send the payload if it
		 * exceeds the specified amout (in bytes).
		 * 
		 * By default, only payloads under one megabyte are sent.
		 */
		UINT32 GetSizeLimit() const
		{
			return _sizeLimit;
		}

		// Setters

		/**
		 * Set the field @c transport.
		 * 
		 * Indicates how to send the payload.
		 */
		void SetTransport(OpScopeResourceManager_MessageSet::ContentMode_Transport v);

		/**
		 * Set the field @c decode.
		 * 
		 * Decode the data (for instance, decompress it, decrypt it, etc). This is
		 * unrelated to character encoding.
		 */
		void SetDecode(BOOL v)
		{
			has_bits_.Reference().SetBit(1);
			_decode = v;
		}

		/**
		 * Set the field @c sizeLimit.
		 * 
		 * Even if other conditions are met, do not send the payload if it
		 * exceeds the specified amout (in bytes).
		 * 
		 * By default, only payloads under one megabyte are sent.
		 */
		void SetSizeLimit(UINT32 v)
		{
			has_bits_.Reference().SetBit(2);
			_sizeLimit = v;
		}

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeResourceManager_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		INT32 _transport;
		BOOL _decode;
		UINT32 _sizeLimit;

		OpProtobufBitField<3> has_bits_;
		mutable int                 encoded_size_;
	};


	/**
	 * Used to override the default ContentMode for resources with a
	 * certain mime type.
	 */
	class MimeMode
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 2
		};
		// END: Internal enums


		MimeMode(
			)
			: encoded_size_(-1)
		{
		}
		OP_STATUS Construct(
			const OpString & type_arg
			)
		{
			RETURN_IF_ERROR(_type.Set(type_arg));
			return OpStatus::OK;
		}

		// Checkers
		/**
		 * Check if the field @c type is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasType() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c contentMode is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasContentMode() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c type.
		 * 
		 * The mime type, for instance 'text/plain'.
		 */
		const OpString & GetType() const
		{
			return _type;
		}

		/**
		 * Get the field @c contentMode.
		 * 
		 * How to treat this mime type.
		 */
		const OpScopeResourceManager_MessageSet::ContentMode & GetContentMode() const
		{
			return _contentMode;
		}

		// Setters

		/**
		 * Set the field @c type.
		 * 
		 * The mime type, for instance 'text/plain'.
		 */
		OP_STATUS SetType(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c contentMode.
		 * 
		 * How to treat this mime type.
		 */
		OpScopeResourceManager_MessageSet::ContentMode & GetContentModeRef();

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeResourceManager_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		OpString _type;
		OpScopeResourceManager_MessageSet::ContentMode _contentMode;

		OpProtobufBitField<2> has_bits_;
		mutable int                 encoded_size_;
	};


	class SetReloadPolicyArg
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 1
		};
		// END: Internal enums


		SetReloadPolicyArg(
			ReloadPolicy policy_arg = RELOADPOLICY_DEFAULT
			)
			: _policy(policy_arg)
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
		 * Check if the field @c policy is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasPolicy() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c policy.
		 */
		OpScopeResourceManager_MessageSet::ReloadPolicy GetPolicy() const
		{
			return static_cast<OpScopeResourceManager_MessageSet::ReloadPolicy>(_policy);
		}

		// Setters

		/**
		 * Set the field @c policy.
		 */
		void SetPolicy(OpScopeResourceManager_MessageSet::ReloadPolicy v);

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeResourceManager_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		INT32 _policy;

		OpProtobufBitField<1> has_bits_;
		mutable int                 encoded_size_;
	};


	class GetResourceArg
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 2
		};
		// END: Internal enums


		GetResourceArg(
			UINT32 resource_id_arg = 0
			)
			: _resourceID(resource_id_arg)
			, _contentMode(NULL)
			, encoded_size_(-1)
		{
		}
		OP_STATUS Construct(
			)
		{
			return OpStatus::OK;
		}
		~GetResourceArg()
		{
			OP_DELETE(_contentMode);
		}

		// Checkers
		/**
		 * Check if the field @c resourceID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasResourceID() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c contentMode is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasContentMode() const
		{
			return has_bits_.Reference().IsSet(1);
		}

		// Getters

		/**
		 * Get the field @c resourceID.
		 */
		UINT32 GetResourceID() const
		{
			return _resourceID;
		}

		/**
		 * Get the field @c contentMode.
		 * 
		 * Use this ContentMode instead of the one configured with
		 * SetResponseModeArg (if any).
		 */
		OpScopeResourceManager_MessageSet::ContentMode * GetContentMode() const
		{
			return _contentMode;
		}

		// Setters

		/**
		 * Set the field @c resourceID.
		 */
		void SetResourceID(UINT32 v)
		{
			_resourceID = v;
		}

		/**
		 * Set the field @c contentMode.
		 * 
		 * Use this ContentMode instead of the one configured with
		 * SetResponseModeArg (if any).
		 */
		void SetContentMode(OpScopeResourceManager_MessageSet::ContentMode * v);

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeResourceManager_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		UINT32 _resourceID;
		OpScopeResourceManager_MessageSet::ContentMode * _contentMode;

		OpProtobufBitField<2> has_bits_;
		mutable int                 encoded_size_;
	};


	class Content
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 4
		};
		// END: Internal enums


		Content(
			)
			: _length(0)
			, encoded_size_(-1)
		{
		}
		OP_STATUS Construct(
			const OpString * character_encoding_arg = NULL,
			const ByteBuffer * byte_data_arg = NULL,
			const OpString * string_data_arg = NULL
			)
		{
			if (character_encoding_arg)
			{
				RETURN_IF_ERROR(_characterEncoding.Set(*character_encoding_arg));
				has_bits_.Reference().SetBit(1);

			}
			if (byte_data_arg)
			{
				RETURN_IF_ERROR(OpProtobufAppend(_byteData, *byte_data_arg));
				has_bits_.Reference().SetBit(2);

			}
			if (string_data_arg)
			{
				RETURN_IF_ERROR(_stringData.Set(*string_data_arg));
				has_bits_.Reference().SetBit(3);

			}
			return OpStatus::OK;
		}

		// Checkers
		/**
		 * Check if the field @c length is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasLength() const
		{
			return has_bits_.Reference().IsSet(0);
		}

		/**
		 * Check if the field @c characterEncoding is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasCharacterEncoding() const
		{
			return has_bits_.Reference().IsSet(1);
		}

		/**
		 * Check if the field @c byteData is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasByteData() const
		{
			return has_bits_.Reference().IsSet(2);
		}

		/**
		 * Check if the field @c stringData is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasStringData() const
		{
			return has_bits_.Reference().IsSet(3);
		}

		// Getters

		/**
		 * Get the field @c length.
		 * 
		 * If BYTES or DATA_URI was chosen as the transport mode, this field
		 * contains the size of the data. (If, in addition, decoding was enabled,
		 * the field contains the size of the decoded data).
		 * 
		 * If STRING was chosen as the transport mode, this field contains the
		 * string length (regardless of encoding), i.e. the number of characters,
		 * not including zero terminator.
		 */
		UINT32 GetLength() const
		{
			return _length;
		}

		/**
		 * Get the field @c characterEncoding.
		 * 
		 * The (original) character encoding of the data (if applicable).
		 */
		const OpString & GetCharacterEncoding() const
		{
			return _characterEncoding;
		}

		/**
		 * Get the field @c byteData.
		 * 
		 * This field contains the data if BYTES was chosen as the transport
		 * mode. If other modes were chosen, this field is not set.
		 * 
		 * @see ContentMode::Transport
		 */
		const ByteBuffer & GetByteData() const
		{
			return _byteData;
		}

		/**
		 * Get the field @c stringData.
		 * 
		 * This field contains the data if either STRING or DATA_URI were chosen
		 * as transport mode. If some other mode was chosen, this field is not set.
		 * 
		 * @see ContentMode::Transport
		 */
		const OpString & GetStringData() const
		{
			return _stringData;
		}

		// Setters

		/**
		 * Set the field @c length.
		 * 
		 * If BYTES or DATA_URI was chosen as the transport mode, this field
		 * contains the size of the data. (If, in addition, decoding was enabled,
		 * the field contains the size of the decoded data).
		 * 
		 * If STRING was chosen as the transport mode, this field contains the
		 * string length (regardless of encoding), i.e. the number of characters,
		 * not including zero terminator.
		 */
		void SetLength(UINT32 v)
		{
			has_bits_.Reference().SetBit(0);
			_length = v;
		}

		/**
		 * Set the field @c characterEncoding.
		 * 
		 * The (original) character encoding of the data (if applicable).
		 */
		OpString & GetCharacterEncodingRef();

		/**
		 * Set the field @c byteData.
		 * 
		 * This field contains the data if BYTES was chosen as the transport
		 * mode. If other modes were chosen, this field is not set.
		 * 
		 * @see ContentMode::Transport
		 */
		ByteBuffer & GetByteDataRef();

		/**
		 * Set the field @c stringData.
		 * 
		 * This field contains the data if either STRING or DATA_URI were chosen
		 * as transport mode. If some other mode was chosen, this field is not set.
		 * 
		 * @see ContentMode::Transport
		 */
		OpString & GetStringDataRef();

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeResourceManager_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		UINT32 _length;
		OpString _characterEncoding;
		ByteBuffer _byteData;
		OpString _stringData;

		OpProtobufBitField<4> has_bits_;
		mutable int                 encoded_size_;
	};


	class Header
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 2
		};
		// END: Internal enums


		Header(
			)
			: encoded_size_(-1)
		{
		}
		OP_STATUS Construct(
			const OpString & name_arg,
			const OpString & value_arg
			)
		{
			RETURN_IF_ERROR(_name.Set(name_arg));
			RETURN_IF_ERROR(_value.Set(value_arg));
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
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c name.
		 * 
		 * The name of the HTTP header, for instance "Accept-Charset".
		 */
		const OpString & GetName() const
		{
			return _name;
		}

		/**
		 * Get the field @c value.
		 * 
		 * The value of the HTTP header, for instance "utf-8" when using
		 * Accept-Charset, or "text/html; charset=utf8" for Content-Type.
		 */
		const OpString & GetValue() const
		{
			return _value;
		}

		// Setters

		/**
		 * Set the field @c name.
		 * 
		 * The name of the HTTP header, for instance "Accept-Charset".
		 */
		OP_STATUS SetName(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c name.
		 * 
		 * The name of the HTTP header, for instance "Accept-Charset".
		 */
		OP_STATUS SetName(const char * v, int l = KAll);

		/**
		 * Set the field @c value.
		 * 
		 * The value of the HTTP header, for instance "utf-8" when using
		 * Accept-Charset, or "text/html; charset=utf8" for Content-Type.
		 */
		OP_STATUS SetValue(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c value.
		 * 
		 * The value of the HTTP header, for instance "utf-8" when using
		 * Accept-Charset, or "text/html; charset=utf8" for Content-Type.
		 */
		OP_STATUS SetValue(const char * v, int l = KAll);

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeResourceManager_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		OpString _name;
		OpString _value;

		OpProtobufBitField<2> has_bits_;
		mutable int                 encoded_size_;
	};


	class ResourceID
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 1
		};
		// END: Internal enums


		ResourceID(
			UINT32 resource_id_arg = 0
			)
			: _resourceID(resource_id_arg)
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
		 * Check if the field @c resourceID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasResourceID() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c resourceID.
		 */
		UINT32 GetResourceID() const
		{
			return _resourceID;
		}

		// Setters

		/**
		 * Set the field @c resourceID.
		 */
		void SetResourceID(UINT32 v)
		{
			_resourceID = v;
		}

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeResourceManager_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		UINT32 _resourceID;

		OpProtobufBitField<1> has_bits_;
		mutable int                 encoded_size_;
	};



	// END: Message classes

};


class OpProtobufMessage;

// This class contains the descriptors of all messages in the given set
// When a message descriptor is first requested it is allocated and put in this structure,
// subsequent uses of the descriptor will just use the previously allocated object.
class OpScopeResourceManager_Descriptors
{
public:
	OpScopeResourceManager_Descriptors();
	~OpScopeResourceManager_Descriptors();

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
		_gen_MessageOffs_add_header_overrides_arg_,
		_gen_MessageOffs_content_,
		_gen_MessageOffs_content_mode_,
		_gen_MessageOffs_create_request_arg_,
		_gen_MessageOffs_dns_lookup_finished_,
		_gen_MessageOffs_dns_lookup_started_,
		_gen_MessageOffs_get_resource_arg_,
		_gen_MessageOffs_get_resource_id_arg_,
		_gen_MessageOffs_header_,
		_gen_MessageOffs_mime_mode_,
		_gen_MessageOffs_request_data_part_,
		_gen_MessageOffs_create_request_arg_payload_,
		_gen_MessageOffs_remove_header_overrides_arg_,
		_gen_MessageOffs_request_,
		_gen_MessageOffs_request_data_,
		_gen_MessageOffs_request_finished_,
		_gen_MessageOffs_request_header_,
		_gen_MessageOffs_request_retry_,
		_gen_MessageOffs_resource_data_,
		_gen_MessageOffs_resource_id_,
		_gen_MessageOffs_response_,
		_gen_MessageOffs_response_finished_,
		_gen_MessageOffs_response_header_,
		_gen_MessageOffs_set_reload_policy_arg_,
		_gen_MessageOffs_set_request_mode_arg_,
		_gen_MessageOffs_set_response_mode_arg_,
		_gen_MessageOffs_url_finished_,
		_gen_MessageOffs_url_load_,
		_gen_MessageOffs_url_redirect_,
		_gen_MessageOffs_url_unload_,

		// Message count is calculated at compile time
		_gen_Message_Count
	};

	// The IDs for all messages
	enum // message IDs
	{
		  _gen_void_MsgID // The Default/void message. Also ensures that all other IDs start at 1
		, _gen_MsgID_add_header_overrides_arg_
		, _gen_MsgID_content_
		, _gen_MsgID_content_mode_
		, _gen_MsgID_create_request_arg_
		, _gen_MsgID_dns_lookup_finished_
		, _gen_MsgID_dns_lookup_started_
		, _gen_MsgID_get_resource_arg_
		, _gen_MsgID_get_resource_id_arg_
		, _gen_MsgID_header_
		, _gen_MsgID_mime_mode_
		, _gen_MsgID_request_data_part_
		, _gen_MsgID_create_request_arg_payload_
		, _gen_MsgID_remove_header_overrides_arg_
		, _gen_MsgID_request_
		, _gen_MsgID_request_data_
		, _gen_MsgID_request_finished_
		, _gen_MsgID_request_header_
		, _gen_MsgID_request_retry_
		, _gen_MsgID_resource_data_
		, _gen_MsgID_resource_id_
		, _gen_MsgID_response_
		, _gen_MsgID_response_finished_
		, _gen_MsgID_response_header_
		, _gen_MsgID_set_reload_policy_arg_
		, _gen_MsgID_set_request_mode_arg_
		, _gen_MsgID_set_response_mode_arg_
		, _gen_MsgID_url_finished_
		, _gen_MsgID_url_load_
		, _gen_MsgID_url_redirect_
		, _gen_MsgID_url_unload_
	};
	enum // Enum IDs
	{
		Enum_void_ID_, // Dummy entry, ensures IDs starts at 1
		// Meta info for Transport
		_gen_EnumID_ContentMode_Transport,
		// Meta info for ReloadPolicy
		_gen_EnumID_ReloadPolicy,
		// Meta info for HeaderPolicy
		_gen_EnumID_CreateRequestArg_HeaderPolicy,
		// Meta info for LoadOrigin
		_gen_EnumID_LoadOrigin,
		// Meta info for URLType
		_gen_EnumID_UrlLoad_URLType,
		// Meta info for Result
		_gen_EnumID_UrlFinished_Result,
		// Meta info for Status
		_gen_EnumID_DnsLookupFinished_Status,

		_gen_dummy_EnumID // Only present to allow preceding entries to always end in a comma
	};

	enum // Enum values
	{
		// Meta info for Transport
		_gen_EnumValueCount_ContentMode_Transport = 4,
		// Meta info for ReloadPolicy
		_gen_EnumValueCount_ReloadPolicy = 2,
		// Meta info for HeaderPolicy
		_gen_EnumValueCount_CreateRequestArg_HeaderPolicy = 3,
		// Meta info for LoadOrigin
		_gen_EnumValueCount_LoadOrigin = 1,
		// Meta info for URLType
		_gen_EnumValueCount_UrlLoad_URLType = 42,
		// Meta info for Result
		_gen_EnumValueCount_UrlFinished_Result = 3,
		// Meta info for Status
		_gen_EnumValueCount_DnsLookupFinished_Status = 8,

		_gen_dummy_EnumValue // Only present to allow preceding entries to always end in a comma
	};
	enum // Enum names
	{
		// Meta info for Transport
		_gen_Enum_ContentMode_Transport,
		// Meta info for ReloadPolicy
		_gen_Enum_ReloadPolicy,
		// Meta info for HeaderPolicy
		_gen_Enum_CreateRequestArg_HeaderPolicy,
		// Meta info for LoadOrigin
		_gen_Enum_LoadOrigin,
		// Meta info for URLType
		_gen_Enum_UrlLoad_URLType,
		// Meta info for Result
		_gen_Enum_UrlFinished_Result,
		// Meta info for Status
		_gen_Enum_DnsLookupFinished_Status,

		// Enum count is calculated at compile time
		_gen_Enum_Count
	};

	// List of message descriptors. They are initially NULL and assigned an object when the message is used.
	mutable OpProtobufMessage *message_list[_gen_Message_Count];

	// List of IDs for enums, assigned in Construct().
	unsigned enum_id_list[7];

};


class OpScopeResourceManager_SI
	: public OpScopeService
	, public OpScopeResourceManager_MessageSet
{
public:
	OpScopeResourceManager_SI(const uni_char* id = NULL, OpScopeServiceManager *manager = NULL, ControlType control = CONTROL_MANUAL);
	virtual ~OpScopeResourceManager_SI();

	enum CommandEnum
	{
		  Command_GetResource = 1
		, Command_SetReloadPolicy = 2
		, Command_SetResponseMode = 3
		, Command_SetRequestMode = 4
		, Command_AddHeaderOverrides = 5
		, Command_RemoveHeaderOverrides = 6
		, Command_ClearHeaderOverrides = 7
		, Command_CreateRequest = 8
		, Command_ClearCache = 9
		, Command_OnUrlLoad = 10
		, Command_OnUrlFinished = 11
		, Command_OnUrlRedirect = 12
		, Command_OnUrlUnload = 13
		, Command_OnRequest = 14
		, Command_OnRequestHeader = 15
		, Command_OnRequestFinished = 16
		, Command_OnRequestRetry = 17
		, Command_OnResponse = 18
		, Command_OnResponseHeader = 19
		, Command_OnResponseFinished = 20
		, Command_GetResourceID = 21
		, Command_OnDnsLookupStarted = 22
		, Command_OnDnsLookupFinished = 23

		, Command_Count = 23 // Number of commands in this service
	};
	// This class contains the descriptors or all commands of this service
	class Descriptors
	    : public OpScopeResourceManager_Descriptors
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
	virtual OP_STATUS DoGetResource(const GetResourceArg &in, ResourceData &out) = 0;
	virtual OP_STATUS DoSetReloadPolicy(const SetReloadPolicyArg &in) = 0;
	virtual OP_STATUS DoSetResponseMode(const SetResponseModeArg &in) = 0;
	virtual OP_STATUS DoSetRequestMode(const SetRequestModeArg &in) = 0;
	virtual OP_STATUS DoAddHeaderOverrides(const AddHeaderOverridesArg &in) = 0;
	virtual OP_STATUS DoRemoveHeaderOverrides(const RemoveHeaderOverridesArg &in) = 0;
	virtual OP_STATUS DoClearHeaderOverrides() = 0;
	virtual OP_STATUS DoCreateRequest(const CreateRequestArg &in, ResourceID &out) = 0;
	virtual OP_STATUS DoClearCache() = 0;
	virtual OP_STATUS DoGetResourceID(const GetResourceIDArg &in, ResourceID &out) = 0;

	// Event functions
	OP_STATUS SendOnUrlLoad(const UrlLoad &msg);
	OP_STATUS SendOnUrlFinished(const UrlFinished &msg);
	OP_STATUS SendOnUrlRedirect(const UrlRedirect &msg);
	OP_STATUS SendOnUrlUnload(const UrlUnload &msg);
	OP_STATUS SendOnRequest(const Request &msg);
	OP_STATUS SendOnRequestHeader(const RequestHeader &msg);
	OP_STATUS SendOnRequestFinished(const RequestFinished &msg);
	OP_STATUS SendOnRequestRetry(const RequestRetry &msg);
	OP_STATUS SendOnResponse(const Response &msg);
	OP_STATUS SendOnResponseHeader(const ResponseHeader &msg);
	OP_STATUS SendOnResponseFinished(const ResponseFinished &msg);
	OP_STATUS SendOnDnsLookupStarted(const DnsLookupStarted &msg);
	OP_STATUS SendOnDnsLookupFinished(const DnsLookupFinished &msg);


	Descriptors *GetDescriptors() const;



// Service API implementation: END

};




#endif // SCOPE_RESOURCE_MANAGER

#endif // G_SCOPE_RESOURCE_MANAGER_INTERFACE_H
