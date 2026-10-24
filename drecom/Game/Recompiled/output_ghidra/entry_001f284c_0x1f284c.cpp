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

// Function: entry_001f284c
// Address: 0x1f284c - 0x1f28cc
void entry_001f284c_0x1f284c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f284c_0x1f284c");
#endif

    ctx->pc = 0x1f284cu;

    // 0x1f284c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1f284cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f2850: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x1f2850u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x1f2854: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f2854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f2858: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x1f2858u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
    // 0x1f285c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f285cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f2860: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x1f2860u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x1f2864: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1f2864u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1f2868: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1f2868u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1f286c: 0x2842000a  slti        $v0, $v0, 0xA
    ctx->pc = 0x1f286cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x1f2870: 0x14400033  bnez        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x1F2870u;
    {
        const bool branch_taken_0x1f2870 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f2870) {
            ctx->pc = 0x1F2940u;
            return;
        }
    }
    ctx->pc = 0x1F2878u;
    // 0x1f2878: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f2878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f287c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f287cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f2880: 0xc4410028  lwc1        $f1, 0x28($v0)
    ctx->pc = 0x1f2880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f2884: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f2884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f2888: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f2888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f288c: 0xc440003c  lwc1        $f0, 0x3C($v0)
    ctx->pc = 0x1f288cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f2890: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1f2890u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1f2894: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x1f2894u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x1f2898: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f2898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f289c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f289cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f28a0: 0xc441003c  lwc1        $f1, 0x3C($v0)
    ctx->pc = 0x1f28a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f28a4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f28a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f28a8: 0x0  nop
    ctx->pc = 0x1f28a8u;
    // NOP
    // 0x1f28ac: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1f28acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f28b0: 0x0  nop
    ctx->pc = 0x1f28b0u;
    // NOP
    // 0x1f28b4: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1F28B4u;
    {
        const bool branch_taken_0x1f28b4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f28b4) {
            ctx->pc = 0x1F28CCu;
            return;
        }
    }
    ctx->pc = 0x1F28BCu;
    // 0x1f28bc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f28bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f28c0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f28c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f28c4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f28c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f28c8: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x1f28c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    ctx->pc = 0x1f28ccu;
}
