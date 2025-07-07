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

#ifndef G_MESSAGE_M2_MAPIMESSAGE_H
#define G_MESSAGE_M2_MAPIMESSAGE_H



#include "adjunct/m2/src/generated/g_proto_m2_mapimessage.h"
#include "modules/hardcore/component/OpTypedMessage.h"


	// BEGIN: Message classes
	/**
	 * CreateNewMail message.
	 */
	class OpCreateNewMailMessage
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
		static const unsigned Type = 2973733437u;

		virtual ~OpCreateNewMailMessage();



		static OpCreateNewMailMessage* Create(
			const OpMessageAddress& src,
			const OpMessageAddress& dst = OpMessageAddress(),
			double delay = 0)
		{
			return OP_NEW(OpCreateNewMailMessage, (src, dst, delay));
		}

		static OpCreateNewMailMessage* Create(
			const UniString & subject_arg = UniString(),
			const UniString & text_arg = UniString(),
			const UniString & date_arg = UniString(),
			const UniString & to_arg = UniString(),
			const UniString & cc_arg = UniString(),
			const UniString & bcc_arg = UniString(),
			const UniString & file_paths_arg = UniString(),
			const UniString & file_names_arg = UniString(),
			INT32 event_id_arg = 0,
			const OpMessageAddress& src = OpMessageAddress(),
			const OpMessageAddress& dst = OpMessageAddress(),
			double delay = 0)
		{
			OpCreateNewMailMessage *obj = OP_NEW(OpCreateNewMailMessage, (src, dst, delay, subject_arg, text_arg, date_arg, to_arg, cc_arg, bcc_arg, file_paths_arg, file_names_arg, event_id_arg));
			if (obj)
			{
				if (OpStatus::IsSuccess(obj->Construct()))
					return obj;

				OP_DELETE(obj);
			}
			return NULL;
		}

		static OpCreateNewMailMessage* Cast(const OpTypedMessage* msg);

		static OpCreateNewMailMessage* Deserialize(
			const OpMessageAddress& src,
			const OpMessageAddress& dst,
			double delay,
			const OpData& data);

		virtual OP_STATUS Serialize(OpData& data) const;

		virtual const char *GetTypeString() const;

		// Accessors/modifiers comes here
		/**
		 * Check if the field @c subject is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasSubject() const
		{
			return protobuf_data.HasSubject();
		}

		/**
		 * Get the field @c subject.
		 */
		const UniString & GetSubject() const
		{
			return protobuf_data.GetSubject();
		}

		/**
		 * Set the field @c subject.
		 */
		OP_STATUS SetSubject(const UniString & v);

		/**
		 * Set the field @c subject.
		 */
		OP_STATUS SetSubject(const uni_char * v, int l = KAll);

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

		/**
		 * Check if the field @c date is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasDate() const
		{
			return protobuf_data.HasDate();
		}

		/**
		 * Get the field @c date.
		 */
		const UniString & GetDate() const
		{
			return protobuf_data.GetDate();
		}

		/**
		 * Set the field @c date.
		 */
		OP_STATUS SetDate(const UniString & v);

		/**
		 * Set the field @c date.
		 */
		OP_STATUS SetDate(const uni_char * v, int l = KAll);

		/**
		 * Check if the field @c to is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasTo() const
		{
			return protobuf_data.HasTo();
		}

		/**
		 * Get the field @c to.
		 */
		const UniString & GetTo() const
		{
			return protobuf_data.GetTo();
		}

		/**
		 * Set the field @c to.
		 */
		OP_STATUS SetTo(const UniString & v);

		/**
		 * Set the field @c to.
		 */
		OP_STATUS SetTo(const uni_char * v, int l = KAll);

		/**
		 * Check if the field @c cc is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasCc() const
		{
			return protobuf_data.HasCc();
		}

		/**
		 * Get the field @c cc.
		 */
		const UniString & GetCc() const
		{
			return protobuf_data.GetCc();
		}

		/**
		 * Set the field @c cc.
		 */
		OP_STATUS SetCc(const UniString & v);

		/**
		 * Set the field @c cc.
		 */
		OP_STATUS SetCc(const uni_char * v, int l = KAll);

		/**
		 * Check if the field @c bcc is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasBcc() const
		{
			return protobuf_data.HasBcc();
		}

		/**
		 * Get the field @c bcc.
		 */
		const UniString & GetBcc() const
		{
			return protobuf_data.GetBcc();
		}

		/**
		 * Set the field @c bcc.
		 */
		OP_STATUS SetBcc(const UniString & v);

		/**
		 * Set the field @c bcc.
		 */
		OP_STATUS SetBcc(const uni_char * v, int l = KAll);

		/**
		 * Check if the field @c filePaths is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasFilePaths() const
		{
			return protobuf_data.HasFilePaths();
		}

		/**
		 * Get the field @c filePaths.
		 */
		const UniString & GetFilePaths() const
		{
			return protobuf_data.GetFilePaths();
		}

		/**
		 * Set the field @c filePaths.
		 */
		OP_STATUS SetFilePaths(const UniString & v);

		/**
		 * Set the field @c filePaths.
		 */
		OP_STATUS SetFilePaths(const uni_char * v, int l = KAll);

		/**
		 * Check if the field @c fileNames is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasFileNames() const
		{
			return protobuf_data.HasFileNames();
		}

		/**
		 * Get the field @c fileNames.
		 */
		const UniString & GetFileNames() const
		{
			return protobuf_data.GetFileNames();
		}

		/**
		 * Set the field @c fileNames.
		 */
		OP_STATUS SetFileNames(const UniString & v);

		/**
		 * Set the field @c fileNames.
		 */
		OP_STATUS SetFileNames(const uni_char * v, int l = KAll);

		/**
		 * Check if the field @c eventId is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasEventId() const
		{
			return protobuf_data.HasEventId();
		}

		/**
		 * Get the field @c eventId.
		 */
		INT32 GetEventId() const
		{
			return protobuf_data.GetEventId();
		}

		/**
		 * Set the field @c eventId.
		 */
		void SetEventId(INT32 v)
		{
			protobuf_data.SetEventId(v);
		}



	protected:

		OpCreateNewMailMessage(
				const OpMessageAddress& src,
				const OpMessageAddress& dst,
				double delay
				, const UniString & subject_arg = UniString()
				, const UniString & text_arg = UniString()
				, const UniString & date_arg = UniString()
				, const UniString & to_arg = UniString()
				, const UniString & cc_arg = UniString()
				, const UniString & bcc_arg = UniString()
				, const UniString & file_paths_arg = UniString()
				, const UniString & file_names_arg = UniString()
				, INT32 event_id_arg = 0
				)
			: OpTypedMessage(Type, src, dst, delay)
			, protobuf_data(subject_arg, text_arg, date_arg, to_arg, cc_arg, bcc_arg, file_paths_arg, file_names_arg, event_id_arg)
		{
		}



		OP_STATUS Construct(

		)
		{
			return protobuf_data.Construct();
		}

	private:
		OpM2Mapimessage_MessageSet::CreateNewMail protobuf_data;
	};



	// END: Message classes


#endif // G_MESSAGE_M2_MAPIMESSAGE_H
