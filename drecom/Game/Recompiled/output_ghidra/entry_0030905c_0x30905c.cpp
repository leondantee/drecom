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

// Function: entry_0030905c
// Address: 0x30905c - 0x3090d4
void entry_0030905c_0x30905c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0030905c_0x30905c");
#endif

    ctx->pc = 0x30905cu;

    // 0x30905c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30905cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x309060: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x309060u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x309064: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x309064u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x309068: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x309068u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x30906c: 0x14830030  bne         $a0, $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x30906Cu;
    {
        const bool branch_taken_0x30906c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x30906c) {
            ctx->pc = 0x309130u;
            return;
        }
    }
    ctx->pc = 0x309074u;
    // 0x309074: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x309074u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x309078: 0xc4620124  lwc1        $f2, 0x124($v1)
    ctx->pc = 0x309078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30907c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x30907cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x309080: 0xc421dce4  lwc1        $f1, -0x231C($at)
    ctx->pc = 0x309080u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x309084: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x309084u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
    // 0x309088: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x309088u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30908c: 0x0  nop
    ctx->pc = 0x30908cu;
    // NOP
    // 0x309090: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x309090u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x309094: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x309094u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x309098: 0x0  nop
    ctx->pc = 0x309098u;
    // NOP
    // 0x30909c: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x30909Cu;
    {
        const bool branch_taken_0x30909c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x30909c) {
            ctx->pc = 0x3090D4u;
            return;
        }
    }
    ctx->pc = 0x3090A4u;
    // 0x3090a4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3090a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3090a8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3090a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3090ac: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x3090acu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x3090b0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x3090b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3090b4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3090b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3090b8: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x3090b8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x3090bc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3090bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3090c0: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x3090c0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3090c4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3090c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3090c8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x3090c8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3090cc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3090ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3090d0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x3090d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x3090d4u;
}
