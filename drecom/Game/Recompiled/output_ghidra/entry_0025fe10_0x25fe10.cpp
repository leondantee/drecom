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

// Function: entry_0025fe10
// Address: 0x25fe10 - 0x25fe48
void entry_0025fe10_0x25fe10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025fe10_0x25fe10");
#endif

    ctx->pc = 0x25fe10u;

    // 0x25fe10: 0xc7a10258  lwc1        $f1, 0x258($sp)
    ctx->pc = 0x25fe10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25fe14: 0x3c03c2c8  lui         $v1, 0xC2C8
    ctx->pc = 0x25fe14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49864 << 16));
    // 0x25fe18: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x25fe18u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25fe1c: 0x0  nop
    ctx->pc = 0x25fe1cu;
    // NOP
    // 0x25fe20: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x25fe20u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25fe24: 0x0  nop
    ctx->pc = 0x25fe24u;
    // NOP
    // 0x25fe28: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x25FE28u;
    {
        const bool branch_taken_0x25fe28 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25fe28) {
            ctx->pc = 0x25FE48u;
            return;
        }
    }
    ctx->pc = 0x25FE30u;
    // 0x25fe30: 0x8fa20260  lw          $v0, 0x260($sp)
    ctx->pc = 0x25fe30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x25fe34: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x25fe34u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x25fe38: 0x8c4502d4  lw          $a1, 0x2D4($v0)
    ctx->pc = 0x25fe38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 724)));
    // 0x25fe3c: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x25fe3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x25fe40: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x25fe40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25fe44: 0xe7a00258  swc1        $f0, 0x258($sp)
    ctx->pc = 0x25fe44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 600), bits); }
    ctx->pc = 0x25fe48u;
}
