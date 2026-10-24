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

// Function: entry_002633b0
// Address: 0x2633b0 - 0x2633d0
void entry_002633b0_0x2633b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002633b0_0x2633b0");
#endif

    ctx->pc = 0x2633b0u;

    // 0x2633b0: 0x3c03c049  lui         $v1, 0xC049
    ctx->pc = 0x2633b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49225 << 16));
    // 0x2633b4: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x2633b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x2633b8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2633b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2633bc: 0x0  nop
    ctx->pc = 0x2633bcu;
    // NOP
    // 0x2633c0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2633c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2633c4: 0x0  nop
    ctx->pc = 0x2633c4u;
    // NOP
    // 0x2633c8: 0x4501fff3  bc1t        . + 4 + (-0xD << 2)
    ctx->pc = 0x2633C8u;
    {
        const bool branch_taken_0x2633c8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2633c8) {
            ctx->pc = 0x263398u;
            return;
        }
    }
    ctx->pc = 0x2633D0u;
}
