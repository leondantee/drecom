#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_0018f4f8
// Address: 0x18f4f8 - 0x18f504
void entry_0018f4f8_0x18f4f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018f4f8_0x18f4f8");
#endif

    ctx->pc = 0x18f4f8u;

    // 0x18f4f8: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x18f4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x18f4fc: 0xc4400104  lwc1        $f0, 0x104($v0)
    ctx->pc = 0x18f4fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18f500: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x18f500u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    ctx->pc = 0x18f504u;
}
