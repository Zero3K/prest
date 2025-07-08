#ifndef TLSCLIENT_H
#define TLSCLIENT_H

#pragma once

typedef unsigned char uchar;
typedef unsigned int uint;

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
    
    TLS_ECDHE_ECDSA_WITH_AES_128_GCM_SHA256 = 0xC02B, //0xC0,0x2B   Y[RFC5289]
    TLS_ECDHE_ECDSA_WITH_AES_256_GCM_SHA384,//0xC0,0x2C   Y[RFC5289]
    TLS_ECDHE_RSA_WITH_AES_128_GCM_SHA256 = 0xC02F,  //0xC0,0x2F   Y[RFC5289]
    TLS_ECDHE_RSA_WITH_AES_256_GCM_SHA384,  //0xC0,0x30   Y[RFC5289]
    TLS_ECDHE_RSA_WITH_CHACHA20_POLY1305_SHA256=0xCCA8, //0xCC,0xA8 Y[RFC7905]
    TLS_ECDHE_ECDSA_WITH_CHACHA20_POLY1305_SHA256,  //0xCC, 0xA9  Y[RFC7905]
    
    TLS_LAST=0xFFFF
} TLS_CIPHER;

// Forward declarations for TLSClient structures
struct TLSContext;
struct TLSCertificate;

// TLSClient API functions (will be implemented in tlsclient.cpp)
extern "C" {
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
}

#endif // TLSCLIENT_H