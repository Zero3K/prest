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

// Generated from ../../adjunct/m2/src/mapi/mapimessage.proto



#ifndef G_PROTO_M2_MAPIMESSAGE_H
#define G_PROTO_M2_MAPIMESSAGE_H



#include "modules/opdata/UniString.h"
#include "modules/protobuf/src/protobuf.h"
#include "modules/protobuf/src/protobuf_bitfield.h"
#include "modules/protobuf/src/protobuf_message.h"



class OpM2Mapimessage_Descriptors;

class OpM2Mapimessage_MessageSet
{
public:
	// BEGIN: ctor/dtor

	OpM2Mapimessage_MessageSet();
	virtual ~OpM2Mapimessage_MessageSet();

	// END: ctor/dtor
	// BEGIN: Enums

	// End: Enums

	// BEGIN: Message classes

	// Forward declarations
	class CreateNewMail;

	/**
	 * CreateNewMail message.
	 */
	class CreateNewMail
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 9
		};
		// END: Internal enums


		CreateNewMail(
			const UniString & subject_arg = UniString(),
			const UniString & text_arg = UniString(),
			const UniString & date_arg = UniString(),
			const UniString & to_arg = UniString(),
			const UniString & cc_arg = UniString(),
			const UniString & bcc_arg = UniString(),
			const UniString & file_paths_arg = UniString(),
			const UniString & file_names_arg = UniString(),
			INT32 event_id_arg = 0
			)
			: _subject(subject_arg)
			, _text(text_arg)
			, _date(date_arg)
			, _to(to_arg)
			, _cc(cc_arg)
			, _bcc(bcc_arg)
			, _filePaths(file_paths_arg)
			, _fileNames(file_names_arg)
			, _eventId(event_id_arg)
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
		 * Check if the field @c subject is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasSubject() const
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
		 * Check if the field @c date is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasDate() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c to is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasTo() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c cc is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasCc() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c bcc is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasBcc() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c filePaths is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasFilePaths() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c fileNames is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasFileNames() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c eventId is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasEventId() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c subject.
		 */
		const UniString & GetSubject() const
		{
			return _subject;
		}

		/**
		 * Get the field @c text.
		 */
		const UniString & GetText() const
		{
			return _text;
		}

		/**
		 * Get the field @c date.
		 */
		const UniString & GetDate() const
		{
			return _date;
		}

		/**
		 * Get the field @c to.
		 */
		const UniString & GetTo() const
		{
			return _to;
		}

		/**
		 * Get the field @c cc.
		 */
		const UniString & GetCc() const
		{
			return _cc;
		}

		/**
		 * Get the field @c bcc.
		 */
		const UniString & GetBcc() const
		{
			return _bcc;
		}

		/**
		 * Get the field @c filePaths.
		 */
		const UniString & GetFilePaths() const
		{
			return _filePaths;
		}

		/**
		 * Get the field @c fileNames.
		 */
		const UniString & GetFileNames() const
		{
			return _fileNames;
		}

		/**
		 * Get the field @c eventId.
		 */
		INT32 GetEventId() const
		{
			return _eventId;
		}

		// Setters

		/**
		 * Set the field @c subject.
		 */
		OP_STATUS SetSubject(const UniString & v);

		/**
		 * Set the field @c subject.
		 */
		OP_STATUS SetSubject(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c text.
		 */
		OP_STATUS SetText(const UniString & v);

		/**
		 * Set the field @c text.
		 */
		OP_STATUS SetText(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c date.
		 */
		OP_STATUS SetDate(const UniString & v);

		/**
		 * Set the field @c date.
		 */
		OP_STATUS SetDate(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c to.
		 */
		OP_STATUS SetTo(const UniString & v);

		/**
		 * Set the field @c to.
		 */
		OP_STATUS SetTo(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c cc.
		 */
		OP_STATUS SetCc(const UniString & v);

		/**
		 * Set the field @c cc.
		 */
		OP_STATUS SetCc(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c bcc.
		 */
		OP_STATUS SetBcc(const UniString & v);

		/**
		 * Set the field @c bcc.
		 */
		OP_STATUS SetBcc(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c filePaths.
		 */
		OP_STATUS SetFilePaths(const UniString & v);

		/**
		 * Set the field @c filePaths.
		 */
		OP_STATUS SetFilePaths(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c fileNames.
		 */
		OP_STATUS SetFileNames(const UniString & v);

		/**
		 * Set the field @c fileNames.
		 */
		OP_STATUS SetFileNames(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c eventId.
		 */
		void SetEventId(INT32 v)
		{
			_eventId = v;
		}

		static const OpProtobufMessage *GetMessageDescriptor(OpM2Mapimessage_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		UniString _subject;
		UniString _text;
		UniString _date;
		UniString _to;
		UniString _cc;
		UniString _bcc;
		UniString _filePaths;
		UniString _fileNames;
		INT32 _eventId;

		OpProtobufBitField<9> has_bits_;
		mutable int                 encoded_size_;
	};



	// END: Message classes

};






#endif // G_PROTO_M2_MAPIMESSAGE_H
