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

// Generated from proto files in the system

#ifndef OPTYPEDMESSAGEBASE_H
#define OPTYPEDMESSAGEBASE_H



class OpTypedMessage;
struct OpMessageAddress;
class OpData;

class OpTypedMessageBase
{
public:

	/**
	 * Check if the type value @a type can be mapped to a type in an OpTypedMessage sub-class.
	 * @param type Integer value corresponding to type.
	 * @return @c TRUE if the value is valid, @c FALSE otherwise.
	 */
	static BOOL VerifyType(int type);

	/**
	 * Deserializes the message data in @p data based on the @p type.
	 * It will call the Class::Deserialize() method on the class that
	 * belongs to the type.
	 *
	 * @param type The type of message data to decode. This determines
	 *        the class of the returned instance.
	 * @param src Source address of the message. This will be placed in
	 *        the returned object.
	 * @param dst Destination address of the message. This will be
	 *        placed in the returned object.
	 * @param delay Number of milliseconds until this message should
	 *        be processed. This will be recorded in the returned object.
	 * @param data The data-stream from which to de-serialize the
	 *        message object.
	 * @return The deserialized message object or @c NULL on failure.
	 */
	static OpTypedMessage*
	DeserializeData(
	    int type,
	    const OpMessageAddress& src,
	    const OpMessageAddress& dst,
	    double delay,
	    const OpData& data);};



#endif // OPTYPEDMESSAGEBASE_H
