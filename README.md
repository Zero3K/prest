# Presto Web rendering engine: Opera 12.15

This repository contains the Presto rendering engine, used up to Opera 12.

**Note**: This version has been modified to replace OpenSSL with TLSClient for improved TLS 1.2/1.3 support.

## TLS Implementation

The SSL/TLS functionality has been migrated from OpenSSL to TLSClient:
- **TLS 1.2 and TLS 1.3 support** via the @Zero3K/tlsclient library
- **Modern cipher suites** including AES-GCM, ChaCha20-Poly1305, and ECDHE
- **Reduced dependency footprint** by removing OpenSSL
- **Maintained compatibility** with existing Opera SSL APIs

## Build Configuration

To use TLSClient instead of OpenSSL:
- Enable `TWEAK_LIBSSL_USE_TLSCLIENT_CRYPTO` 
- Enable `TWEAK_EXTERNAL_SSL_TLSCLIENT_IMPLEMENTATION`
- Disable `TWEAK_LIBSSL_USE_OPENSSL_CRYPTO`

.-Peace out
