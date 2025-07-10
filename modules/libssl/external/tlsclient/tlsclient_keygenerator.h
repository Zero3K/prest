#ifndef TLSCLIENT_KEYGENERATOR_H_
#define TLSCLIENT_KEYGENERATOR_H_

#if defined _NATIVE_SSL_SUPPORT_ && defined _SSL_USE_TLSCLIENT_ && defined LIBSSL_ENABLE_KEYGEN

#include "modules/libssl/keygen_tracker.h"

/** TLSClient-based private key generator implementation */
class TLSClient_KeyPairGenerator : public SSL_Private_Key_Generator
{
private:
	/** Current state of key generation */
	int m_progress;
	/** Generated private key data */
	OpAutoPtr<SSL_secure_varvector32> m_generated_private_key;
	/** Generated public key hash */
	OpAutoPtr<SSL_secure_varvector32> m_generated_public_key_hash;

public:
	TLSClient_KeyPairGenerator();
	virtual ~TLSClient_KeyPairGenerator();

protected:

	/** Implementation specific
	 *
	 *  Set up the key generation process, 
	 *  If generation is finished, the implementation MUST call StoreKey
	 *
	 *	returns:
	 *
	 *		InstallerStatus::KEYGEN_FINISHED if the entire process is finished; a message will be posted, but need not be handled
	 *		OpStatus::OK  if the process continues, wait for finished message
	 */
	virtual OP_STATUS InitiateKeyGeneration();

	/** Implementation specific
	 * 
	 *	Execute the next step of the generation procedure
	 *  If generation is finished, the implementation MUST call StoreKey
	 *
	 *	returns:
	 *
	 *		OpStatus::OK  if the process continues, wait for finished message
	 *		InstallerStatus::ERR_PASSWORD_NEEDED if the security password is needed
	 */
	virtual OP_STATUS IterateKeyGeneration();

private:
	/** Generate RSA key pair using TLSClient */
	OP_STATUS GenerateRSAKeyPair();
	
	/** Create PKCS#8 private key format */
	OP_STATUS CreatePKCS8PrivateKey(SSL_secure_varvector32 &private_key);
	
	/** Calculate public key hash */
	OP_STATUS CalculatePublicKeyHash(SSL_secure_varvector32 &public_key_hash);
};

#endif // _NATIVE_SSL_SUPPORT_ && _SSL_USE_TLSCLIENT_ && LIBSSL_ENABLE_KEYGEN

#endif // TLSCLIENT_KEYGENERATOR_H_