#ifndef TLSCLIENT_H
#define TLSCLIENT_H

#pragma once

#include <stdint.h>  // For uint64_t, uint32_t
#include <stddef.h>  // For size_t

typedef unsigned char uchar;
typedef unsigned int uint;
typedef unsigned char u8;
typedef unsigned char uint8;
typedef unsigned long long uint64;

// Forward declarations for GCM cryptography
#define ENCRYPT         1       // specify whether we're encrypting
#define DECRYPT         0       // or decrypting

// Forward declaration of AES context for GCM
#ifndef AES_CONTEXT_DEFINED
#define AES_CONTEXT_DEFINED
typedef struct {
    int mode;           // 1 for Encryption, 0 for Decryption
    int rounds;         // keysize-based rounds count
    uint32_t *rk;       // pointer to current round key
    uint32_t buf[68];   // key expansion buffer
} aes_context;
#endif

// GCM context structure 
#ifndef GCM_CONTEXT_DEFINED
#define GCM_CONTEXT_DEFINED
typedef struct {
    int mode;               // cipher direction: encrypt/decrypt
    uint64_t len;           // cipher data length processed so far
    uint64_t add_len;       // total add data length
    uint64_t HL[16];        // precalculated lo-half HTable
    uint64_t HH[16];        // precalculated hi-half HTable
    uchar base_ectr[16];    // first counter-mode cipher output for tag
    uchar y[16];            // the current cipher-input IV|Counter value
    uchar buf[16];          // buf working value
    aes_context aes_ctx;    // cipher context used
    uchar table[16][256][16];
} gcm_context;
#endif

// GCM function declarations
#ifdef __cplusplus
extern "C" {
#endif

// AES initialization
void aes_init_keygen_tables(void);

// GCM functions
int gcm_setkey(gcm_context *ctx, const uchar *key, const uint keysize);
int gcm_start(gcm_context *ctx, int mode, const uchar *iv, size_t iv_len, const uchar *add, size_t add_len);
int gcm_update(gcm_context *ctx, size_t length, const uchar *input, uchar *output);
int gcm_finish(gcm_context *ctx, uchar *tag, size_t tag_len);

// ChaCha20 constants and types
#define TLS_CHACHA20_IV_LENGTH    12
#define CHACHA_BLOCKLEN           64
#define POLY1305_KEYLEN           32
#define POLY1305_TAGLEN           16

// ChaCha20 context structure definition
#ifndef CHACHA_CTX_DEFINED
#define CHACHA_CTX_DEFINED
typedef struct chacha_ctx {
    unsigned int input[16];
    uint8_t ks[CHACHA_BLOCKLEN];
    uint8_t unused;
} chacha_ctx;
#endif

// ChaCha20 function declarations
void chacha_keysetup(chacha_ctx *x, const unsigned char *k, unsigned int kbits);
void chacha_key(chacha_ctx *x, unsigned char *k);
void chacha_nonce(chacha_ctx *x, unsigned char *nonce);
void chacha_ivsetup(chacha_ctx *x, const unsigned char *iv, const unsigned char *ctr);
void chacha_ivsetup_96bitnonce(chacha_ctx *x, const unsigned char *iv, const unsigned char *ctr);
void chacha_ivupdate(chacha_ctx *x, const unsigned char *iv, const unsigned char *aad, const unsigned char *counter);
void chacha_encrypt_bytes(chacha_ctx *x, const unsigned char *m, unsigned char *c, unsigned int bytes);
void chacha20_block(chacha_ctx *x, unsigned char *c, unsigned int len);
void chacha20_poly1305_key(chacha_ctx *ctx, unsigned char *poly1305_key);
int chacha20_poly1305_aead(chacha_ctx *ctx, unsigned char *pt, unsigned int len, unsigned char *aad, unsigned int aad_len, unsigned char *poly_key, unsigned char *out);
int chacha20_poly1305_decode(chacha_ctx *remote_ctx, unsigned char *pt, unsigned int len, unsigned char *aad, unsigned int aad_len, unsigned char *poly_key, unsigned char *out);

// SHA2 constants and types
#define SHA224_DIGEST_SIZE ( 224 / 8)
#define SHA256_DIGEST_SIZE ( 256 / 8)
#define SHA384_DIGEST_SIZE ( 384 / 8)
#define SHA512_DIGEST_SIZE ( 512 / 8)

#define SHA256_BLOCK_SIZE  ( 512 / 8)
#define SHA512_BLOCK_SIZE  (1024 / 8)
#define SHA384_BLOCK_SIZE  SHA512_BLOCK_SIZE
#define SHA224_BLOCK_SIZE  SHA256_BLOCK_SIZE

// SHA2 context structures
// SHA2 context structures
#ifndef SHA2_STRUCTS_DEFINED
#define SHA2_STRUCTS_DEFINED

typedef struct {
    uint64_t tot_len;
    uint64_t len;
    uchar block[2 * SHA256_BLOCK_SIZE];
    uint32_t h[8];
} sha256_ctx;

typedef struct {
    uint64_t tot_len;
    uint64_t len;
    uchar block[2 * SHA512_BLOCK_SIZE];
    uint64_t h[8];
} sha512_ctx;

typedef sha512_ctx sha384_ctx;
typedef sha256_ctx sha224_ctx;

#endif /* SHA2_STRUCTS_DEFINED */

// SHA2 function declarations
void sha256_init(sha256_ctx *ctx);
void sha256_update(sha256_ctx *ctx, const uint8 *message, uint64 len);
void sha256_final(sha256_ctx *ctx, uint8 *digest);
void sha384_init(sha384_ctx *ctx);
void sha384_update(sha384_ctx *ctx, const uint8 *message, uint64 len);
void sha384_final(sha384_ctx *ctx, uint8 *digest);

// HMAC context structures
#ifndef HMAC_STRUCTS_DEFINED
#define HMAC_STRUCTS_DEFINED

typedef struct {
    sha224_ctx ctx_inside;
    sha224_ctx ctx_outside;
    sha224_ctx ctx_inside_reinit;
    sha224_ctx ctx_outside_reinit;
    unsigned char block_ipad[SHA224_BLOCK_SIZE];
    unsigned char block_opad[SHA224_BLOCK_SIZE];
} hmac_sha224_ctx;

typedef struct {
    sha256_ctx ctx_inside;
    sha256_ctx ctx_outside;
    sha256_ctx ctx_inside_reinit;
    sha256_ctx ctx_outside_reinit;
    unsigned char block_ipad[SHA256_BLOCK_SIZE];
    unsigned char block_opad[SHA256_BLOCK_SIZE];
} hmac_sha256_ctx;

typedef struct {
    sha384_ctx ctx_inside;
    sha384_ctx ctx_outside;
    sha384_ctx ctx_inside_reinit;
    sha384_ctx ctx_outside_reinit;
    unsigned char block_ipad[SHA384_BLOCK_SIZE];
    unsigned char block_opad[SHA384_BLOCK_SIZE];
} hmac_sha384_ctx;

typedef struct {
    sha512_ctx ctx_inside;
    sha512_ctx ctx_outside;
    sha512_ctx ctx_inside_reinit;
    sha512_ctx ctx_outside_reinit;
    unsigned char block_ipad[SHA512_BLOCK_SIZE];
    unsigned char block_opad[SHA512_BLOCK_SIZE];
} hmac_sha512_ctx;

#endif /* HMAC_STRUCTS_DEFINED */

// HMAC function declarations
void hmac_sha256_init(hmac_sha256_ctx *ctx, const unsigned char *key, unsigned int key_size);
void hmac_sha256_update(hmac_sha256_ctx *ctx, const unsigned char *message, unsigned int message_len);
void hmac_sha256_final(hmac_sha256_ctx *ctx, unsigned char *mac, unsigned int mac_size);
void hmac_sha384_init(hmac_sha384_ctx *ctx, const unsigned char *key, unsigned int key_size);
void hmac_sha384_update(hmac_sha384_ctx *ctx, const unsigned char *message, unsigned int message_len);
void hmac_sha384_final(hmac_sha384_ctx *ctx, unsigned char *mac, unsigned int mac_size);

#ifdef __cplusplus
}
#endif

// ECC Group definitions for elliptic curve cryptography
typedef enum {
    ECC_NONE = 0,
    ECC_secp256r1 = 23,  // IANA assigned number for secp256r1/prime256v1
    ECC_secp384r1 = 24   // IANA assigned number for secp384r1
} ECC_GROUP;

// ECC constants
#define secp384r1 48
#define MAX_NUM_ECC_DIGITS (secp384r1/8)

// ECC structures  
typedef struct EccPoint {
    uint64_t x[MAX_NUM_ECC_DIGITS];
    uint64_t y[MAX_NUM_ECC_DIGITS];
} EccPoint;

typedef struct EccState {
    uint32_t ECC_BYTES;
    uint32_t NUM_ECC_DIGITS;
    uint64_t curve_p[MAX_NUM_ECC_DIGITS];
    uint64_t curve_b[MAX_NUM_ECC_DIGITS];
    EccPoint curve_G;
    uint64_t curve_n[MAX_NUM_ECC_DIGITS];
    uint64_t privatekey[MAX_NUM_ECC_DIGITS];
    EccPoint publickey;
} EccState;

// ECC function declarations
int ecc_init(EccState *s, int bytes);
int ecc_export_public_key(EccState *s, uint8_t *p_publicKey, uint32_t publicKeySize);
int ecdh_shared_secret(EccState *s, const uint8_t *p_publicKey, uint32_t publicKeySize, uint8_t *p_secret);
int ecdsa_sign(EccState *s, const uint8_t *p_privateKey, const uint8_t *p_hash, uint8_t *p_signature);
int ecdsa_verify(EccState *s, const uint8_t *p_publicKey, const uint8_t *p_hash, const uint8_t *p_signature);

//Implement secure re-negotiation per RFC5746.


#define ISCLIENT    1
#define ISSERVER    0


#define SSL_VERSION_MAJOR   3
#define SSL_VERSION_MINOR   1
#define SSL_VERSION_MINOR1  1
#define SSL_VERSION_MINOR3  3


// The following defines SSL 3.0 content types
#define CONTENT_CHANGECIPHERSPEC    0x14
#define CONTENT_ALERT               0x15
#define CONTENT_HANDSHAKE           0x16
#define CONTENT_APPLICATION_DATA    0x17


//The following defines SSL 3.0/TLS 1.0 Handshake message types
#define MSG_HELLO_REQUEST           0x00
#define MSG_CLIENT_HELLO            0x01
#define MSG_SERVER_HELLO            0x02
#define MSG_NEW_SESSION_TICKET      0x04
#define MSG_END_OF_EARLY_DATA       0x05  // RFC8446
#define MSG_ENCRYPTED_EXTENSIONS    0x08  // RFC8446
#define MSG_CERTIFICATE             0x0B
#define MSG_SERVER_KEY_EXCHANGE     0x0C  // Used in TLS1.2 but not in TLS1.3
#define MSG_CERTIFICATE_REQUEST     0x0D
#define MSG_SERVER_HELLO_DONE       0x0E  // Not used in TLS1.3
#define MSG_CERTIFICATE_VERIFY      0x0F
#define MSG_CLIENT_KEY_EXCHANGE     0x10  // Not used in TLS1.3
#define MSG_FINISHED                0x14
#define MSG_KEY_UPDATE              0x18  // RFC8446
#define MSG_MESSAGE_HASH            0xFE  // RFC8446

//The followings are used for secured re-negotiation. See RFC5746.
#define MSG_EXTENTION               0xFF
#define MSG_EXTENTION_RENEGOTIATION 0x01

//This is only used in CONTENT_CHANGECIPHERSPEC content type
#define MSG_CHANGE_CIPHER_SPEC      0x01


//The following defines SSL 3.0/TLS 1.0 ALERT message types
//1st byte of ALERT message indicates whether it is a warning or fatal.
#define ALERT_WARNING               0x01
#define ALERT_FATAL                 0x02
//2nd byte of ALERT message indicates the nature of the alert.
#define ALERT_NOTIFY_CLOSE          0x00
#define ALERT_MESSAGE_UNEXPECTED    0x0A
#define ALERT_RECORD_MAC_BAD        0x14
#define ALERT_DECRYPTION_FAILED     0x15
#define ALERT_RECORD_OVERFLOW       0x16
#define ALERT_DECOMPRESSION_FAILED  0x1E
#define ALERT_HANDSHAKE_FAILED      0x28
#define ALERT_CERTIFICATE_BAD       0x2A
#define ALERT_CERTIFICATE_UNSUPPORTED   0x2B
#define ALERT_CERTIFICATE_REVOKED   0x2C
#define ALERT_CERTIFICATE_EXPIRED   0x2D
#define ALERT_CERTIFICATE_UNKNOWN   0x2E
#define ALERT_PARAMETER_ILLEGAL     0x2F
#define ALERT_CA_UNKNOWN            0x30
#define ALERT_ACCESS_DENIED         0x31
#define ALERT_DECODE_ERROR          0x32
#define ALERT_DECRYPT_ERROR         0x33
#define ALERT_EXPORT_RESTRICTION    0x3C
#define ALERT_PROTOCOL_VERSION      0x46
#define ALERT_SECURITY_INSUFFICIENT 0x47
#define ALERT_INTERNAL_ERROR        0x50
#define ALERT_USER_CANCELED         0x5A
#define ALERT_NO_NEGOTIATION        0x64
#define ALERT_UNSUPPORTED_EXTENSION 0x6E // RFC8446


#define PAD1_BYTE                   0x36
#define PAD2_BYTE                   0x5C
#define PADSIZE_MD5                 0x30
#define PADSIZE_SHA                 0x28
#define MD5_SIZE                    16
#define SHA1_SIZE                   20

//Do not change these values. They are defined by SSL 3.0.
#define RANDOM_SIZE             32
#define TLS_SECRET_LEN          32  // Length of TLS1.3 secret
#define SSL_SECRET_LEN          48  // Length of TLS1.2 secret

#define MAC_SECRET_LEN          16
#define WRITE_KEY_LEN           16

#define CHALLENGE_LEN           16  //Challenge length of V.20 ClientHello
#define TLS_VERIFY_LEN          12  //Verify block length for TLS 1.0 and later.

typedef struct CTX {
    uint    data[54];  // Was 28
} CTX;

// https://www.iana.org/assignments/tls-parameters/tls-parameters.xml#tls-parameters-3
typedef enum {
    TLS_NONE = 0x0000,                  // 0x00, 0x00   Y[RFC5246]
    TLS_RSA_WITH_NULL_MD5,              // 0x00, 0x01   Y[RFC5246]
    TLS_RSA_WITH_NULL_SHA,              // 0x00, 0x02   Y[RFC5246]
    TLS_RSA_EXPORT_WITH_RC4_40_MD5,     // 0x00, 0x03   N[RFC4346][RFC6347]
    TLS_RSA_WITH_RC4_128_MD5,           // 0x00, 0x04   N[RFC5246][RFC6347]
    TLS_RSA_WITH_RC4_128_SHA,           // 0x00, 0x05   N[RFC5246][RFC6347]
    TLS_RSA_EXPORT_WITH_RC2_CBC_40_MD5, // 0x00, 0x06   Y[RFC4346]
    TLS_RSA_WITH_IDEA_CBC_SHA,          // 0x00, 0x07   Y[RFC5469]
    TLS_RSA_EXPORT_WITH_DES40_CBC_SHA,  // 0x00, 0x08   Y[RFC4346]
    TLS_RSA_WITH_DES_CBC_SHA,           // 0x00, 0x09   Y[RFC5469]
    TLS_RSA_WITH_3DES_EDE_CBC_SHA,      // 0x00, 0x0A   Y[RFC5246]
    TLS_DH_DSS_EXPORT_WITH_DES40_CBC_SHA, //0x00,0x0B   Y[RFC4346]
    TLS_DH_DSS_WITH_DES_CBC_SHA,        // 0x00, 0x0C   Y[RFC5469]
    TLS_DH_DSS_WITH_3DES_EDE_CBC_SHA,   // 0x00, 0x0D   Y[RFC5246]
    TLS_DH_RSA_EXPORT_WITH_DES40_CBC_SHA, //0x00,0x0E   Y[RFC4346]
    TLS_DH_RSA_WITH_DES_CBC_SHA,        // 0x00, 0x0F   Y[RFC5469]
    TLS_DH_RSA_WITH_3DES_EDE_CBC_SHA,   // 0x00, 0x10   Y[RFC5246]
    TLS_DHE_DSS_EXPORT_WITH_DES40_CBC_SHA,//0x00,0x11   Y[RFC4346]
    TLS_DHE_DSS_WITH_DES_CBC_SHA,       // 0x00, 0x12   Y[RFC5469]
    TLS_DHE_DSS_WITH_3DES_EDE_CBC_SHA,  // 0x00, 0x13   Y[RFC5246]
    TLS_DHE_RSA_EXPORT_WITH_DES40_CBC_SHA,//0x00,0x14   Y[RFC4346]
    TLS_DHE_RSA_WITH_DES_CBC_SHA,       // 0x00, 0x15   Y[RFC5469]
    TLS_DHE_RSA_WITH_3DES_EDE_CBC_SHA,  // 0x00, 0x16   Y[RFC5246]
    TLS_DH_anon_EXPORT_WITH_RC4_40_MD5, // 0x00, 0x17   N[RFC4346][RFC6347]
    TLS_DH_anon_WITH_RC4_128_MD5,       // 0x00, 0x18   N[RFC5246][RFC6347]
    TLS_DH_anon_EXPORT_WITH_DES40_CBC_SHA,//0x00,0x19   Y[RFC4346]
    TLS_DH_anon_WITH_DES_CBC_SHA,       // 0x00, 0x1A   Y[RFC5469]
    TLS_DH_anon_WITH_3DES_EDE_CBC_SHA,  // 0x00, 0x1B   Y[RFC5246]
    
    // TLS 1.2/1.3 cipher suites that TLSClient supports
    TLS_RSA_WITH_AES_128_GCM_SHA256,    // 0x00, 0x9C   Y[RFC5288]
    TLS_RSA_WITH_AES_256_GCM_SHA384,    // 0x00, 0x9D   Y[RFC5288]
    
    // These are new ciphers in TLS1.3. See RFC5116, RFC8439, RFC6655 and RFC8446#ref-SHS
    TLS_AES_128_GCM_SHA256 = 0x1301,        // 0x13, 0x01 RFC8446 Appendix-B.4
    TLS_AES_256_GCM_SHA384 = 0x1302,        // 0x13, 0x02 RFC8446 Appendix-B.4
    TLS_CHACHA20_POLY1305_SHA256 = 0x1303,  // 0x13, 0x03 RFC8446 Appendix-B.4
    TLS_AES_128_CCM_8_SHA256 = 0x1305,      // 0x13, 0x05 RFC8446 Appendix-B.4
    
    TLS_ECDHE_ECDSA_WITH_AES_128_GCM_SHA256 = 0xC02B, //0xC0,0x2B   Y[RFC5289]
    TLS_ECDHE_ECDSA_WITH_AES_256_GCM_SHA384,//0xC0,0x2C   Y[RFC5289]
    TLS_ECDHE_RSA_WITH_AES_128_GCM_SHA256 = 0xC02F,  //0xC0,0x2F   Y[RFC5289]
    TLS_ECDHE_RSA_WITH_AES_256_GCM_SHA384,  //0xC0,0x30   Y[RFC5289]
    TLS_ECDHE_RSA_WITH_CHACHA20_POLY1305_SHA256=0xCCA8, //0xCC,0xA8 Y[RFC7905]
    TLS_ECDHE_ECDSA_WITH_CHACHA20_POLY1305_SHA256,  //0xCC, 0xA9  Y[RFC7905]
    
    TLS_LAST=0xFFFF
} TLS_CIPHER;

// TLS Extension Types (RFC 5246, RFC 6066)
#define EXT_SERVER_NAME          0x0000  // RFC 6066
#define EXT_SUPPORTED_GROUPS     0x000a  // RFC 7919 (formerly known as EXT_ELLIPTIC_CURVES)
#define EXT_SIGNATURE_ALGORITHMS 0x000d  // RFC 5246
#define EXT_KEY_SHARE           0x0033  // RFC 8446 (TLS 1.3)
#define EXT_SUPPORTED_VERSION   0x002b  // RFC 8446 (TLS 1.3)

// SSL Extension type definition
typedef int SSL_EXTENSION;

// TLS Message types
#define MSG_CHANGE_CIPHER_SPEC  0x01

// Portable network byte order conversion for 64-bit integers
#ifndef htonll
#ifdef _WIN32
// Windows doesn't have htonll, provide implementation
#include <winsock2.h>
static inline uint64_t htonll(uint64_t value) {
    return (((uint64_t)htonl((uint32_t)(value & 0xFFFFFFFF))) << 32) | htonl((uint32_t)(value >> 32));
}
#else
// Unix-like systems may have it, but provide fallback
#include <arpa/inet.h>
#ifndef htonll
static inline uint64_t htonll(uint64_t value) {
    return (((uint64_t)htonl((uint32_t)(value & 0xFFFFFFFF))) << 32) | htonl((uint32_t)(value >> 32));
}
#endif
#endif
#endif

// Forward declarations for TLSClient structures
struct TLSContext;
struct TLSCertificate;

// Type definitions  
typedef struct TLSContext TLSContext;
typedef struct TLSCertificate TLSCertificate;

// TLSClient API functions (will be implemented in tlsclient_wrapper.cpp)
#ifdef __cplusplus
extern "C" {
#endif

    // Context management
    TLSContext* tls_create_context(int is_server);
    void tls_destroy_context(TLSContext* context);
    
    // Connection establishment
    int tls_connect(TLSContext* context, const char* hostname);
    int tls_accept(TLSContext* context);
    
    // Data transfer
    int tls_write(TLSContext* context, const void* data, int len);
    int tls_read(TLSContext* context, void* data, int len);
    
    // Connection shutdown
    int tls_shutdown(TLSContext* context);
    
    // Error handling
    int tls_get_error(TLSContext* context, int ret);
    const char* tls_get_error_string(int error);
    
    // Certificate management
    int tls_set_certificate(TLSContext* context, const char* cert_file, const char* key_file);
    TLSCertificate* tls_get_peer_certificate(TLSContext* context);
    void tls_free_certificate(TLSCertificate* cert);
    
    // Configuration
    int tls_set_cipher_list(TLSContext* context, const char* cipher_list);
    int tls_set_verify_mode(TLSContext* context, int mode);

#ifdef __cplusplus
}
#endif

#endif // TLSCLIENT_H