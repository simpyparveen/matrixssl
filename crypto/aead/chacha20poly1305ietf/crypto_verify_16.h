#ifndef crypto_verify_16_H
#define crypto_verify_16_H

#include "osdep_stddef.h"
#include "export.h"

#ifdef __cplusplus
extern "C" {
#endif

#define crypto_verify_16_BYTES 16U
SODIUM_EXPORT
size_t psCrypto_verify_16_bytes(void);

SODIUM_EXPORT
int psCrypto_verify_16(const unsigned char *x, const unsigned char *y)
            __attribute__ ((warn_unused_result));

#ifdef __cplusplus
}
#endif

#endif
