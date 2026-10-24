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

// Function: entry_00308870
// Address: 0x308870 - 0x3088d0
void entry_00308870_0x308870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00308870_0x308870");
#endif

    ctx->pc = 0x308870u;

    // 0x308870: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x308870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308874: 0xc4620124  lwc1        $f2, 0x124($v1)
    ctx->pc = 0x308874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x308878: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x308878u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x30887c: 0xc421dce4  lwc1        $f1, -0x231C($at)
    ctx->pc = 0x30887cu;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x308880: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x308880u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
    // 0x308884: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x308884u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x308888: 0x0  nop
    ctx->pc = 0x308888u;
    // NOP
    // 0x30888c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x30888cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x308890: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x308890u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x308894: 0x0  nop
    ctx->pc = 0x308894u;
    // NOP
    // 0x308898: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x308898u;
    {
        const bool branch_taken_0x308898 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x308898) {
            ctx->pc = 0x3088D0u;
            return;
        }
    }
    ctx->pc = 0x3088A0u;
    // 0x3088a0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3088a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3088a4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3088a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3088a8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x3088a8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x3088ac: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x3088acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3088b0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3088b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3088b4: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x3088b4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x3088b8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3088b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3088bc: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x3088bcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3088c0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3088c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3088c4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x3088c4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3088c8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3088c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3088cc: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x3088ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x3088d0u;
}
