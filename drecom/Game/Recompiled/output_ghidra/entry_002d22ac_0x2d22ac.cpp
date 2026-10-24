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

// Function: entry_002d22ac
// Address: 0x2d22ac - 0x2d2300
void entry_002d22ac_0x2d22ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d22ac_0x2d22ac");
#endif

    ctx->pc = 0x2d22acu;

    // 0x2d22ac: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d22acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d22b0: 0xc4411288  lwc1        $f1, 0x1288($v0)
    ctx->pc = 0x2d22b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d22b4: 0x3c0244e1  lui         $v0, 0x44E1
    ctx->pc = 0x2d22b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17633 << 16));
    // 0x2d22b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d22b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d22bc: 0x0  nop
    ctx->pc = 0x2d22bcu;
    // NOP
    // 0x2d22c0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2d22c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d22c4: 0x0  nop
    ctx->pc = 0x2d22c4u;
    // NOP
    // 0x2d22c8: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x2D22C8u;
    {
        const bool branch_taken_0x2d22c8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d22c8) {
            ctx->pc = 0x2D2300u;
            return;
        }
    }
    ctx->pc = 0x2D22D0u;
    // 0x2d22d0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d22d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d22d4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d22d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d22d8: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x2d22d8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d22dc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d22dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d22e0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d22e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d22e4: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x2d22e4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d22e8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d22e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d22ec: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x2d22ecu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d22f0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d22f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d22f4: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x2d22f4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d22f8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d22f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d22fc: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2d22fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x2d2300u;
}
