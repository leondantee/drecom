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

// Function: entry_0015e2c0
// Address: 0x15e2c0 - 0x15e2d8
void entry_0015e2c0_0x15e2c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015e2c0_0x15e2c0");
#endif

    ctx->pc = 0x15e2c0u;

    // 0x15e2c0: 0x3c024302  lui         $v0, 0x4302
    ctx->pc = 0x15e2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17154 << 16));
    // 0x15e2c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15e2c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15e2c8: 0x0  nop
    ctx->pc = 0x15e2c8u;
    // NOP
    // 0x15e2cc: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x15e2ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x15e2d0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x15E2D0u;
    {
        const bool branch_taken_0x15e2d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e2d0) {
            ctx->pc = 0x15E318u;
            return;
        }
    }
    ctx->pc = 0x15E2D8u;
}
