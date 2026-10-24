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

// Function: entry_0019a5c0
// Address: 0x19a5c0 - 0x19a5cc
void entry_0019a5c0_0x19a5c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019a5c0_0x19a5c0");
#endif

    ctx->pc = 0x19a5c0u;

    // 0x19a5c0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x19a5c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x19a5c4: 0xc420d360  lwc1        $f0, -0x2CA0($at)
    ctx->pc = 0x19a5c4u;
    { uint32_t bits = FAST_READ32(0x5CD360u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19a5c8: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x19a5c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    ctx->pc = 0x19a5ccu;
}
