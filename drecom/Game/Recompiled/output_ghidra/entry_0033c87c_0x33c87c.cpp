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

// Function: entry_0033c87c
// Address: 0x33c87c - 0x33c8a0
void entry_0033c87c_0x33c87c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033c87c_0x33c87c");
#endif

    ctx->pc = 0x33c87cu;

    // 0x33c87c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x33c87cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x33c880: 0x8c22dcf0  lw          $v0, -0x2310($at)
    ctx->pc = 0x33c880u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x33c884: 0xc4410034  lwc1        $f1, 0x34($v0)
    ctx->pc = 0x33c884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33c888: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x33c888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33c88c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x33c88cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x33c890: 0x0  nop
    ctx->pc = 0x33c890u;
    // NOP
    // 0x33c894: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x33C894u;
    {
        const bool branch_taken_0x33c894 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x33c894) {
            ctx->pc = 0x33C8A0u;
            return;
        }
    }
    ctx->pc = 0x33C89Cu;
    // 0x33c89c: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x33c89cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x33c8a0u;
}
