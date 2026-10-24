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

// Function: entry_00227840
// Address: 0x227840 - 0x2278e8
void entry_00227840_0x227840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00227840_0x227840");
#endif

    ctx->pc = 0x227840u;

    // 0x227840: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x227840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x227844: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x227844u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x227848: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x227848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22784c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22784cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x227850: 0x0  nop
    ctx->pc = 0x227850u;
    // NOP
    // 0x227854: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x227854u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x227858: 0x0  nop
    ctx->pc = 0x227858u;
    // NOP
    // 0x22785c: 0x45010038  bc1t        . + 4 + (0x38 << 2)
    ctx->pc = 0x22785Cu;
    {
        const bool branch_taken_0x22785c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22785c) {
            ctx->pc = 0x227940u;
            return;
        }
    }
    ctx->pc = 0x227864u;
    // 0x227864: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x227864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x227868: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x227868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22786c: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x22786cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x227870: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x227870u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x227874: 0x0  nop
    ctx->pc = 0x227874u;
    // NOP
    // 0x227878: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x227878u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22787c: 0x0  nop
    ctx->pc = 0x22787cu;
    // NOP
    // 0x227880: 0x45010019  bc1t        . + 4 + (0x19 << 2)
    ctx->pc = 0x227880u;
    {
        const bool branch_taken_0x227880 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x227880) {
            ctx->pc = 0x2278E8u;
            return;
        }
    }
    ctx->pc = 0x227888u;
    // 0x227888: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x227888u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x22788c: 0x24a41330  addiu       $a0, $a1, 0x1330
    ctx->pc = 0x22788cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x227890: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x227890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x227894: 0x3c033cc9  lui         $v1, 0x3CC9
    ctx->pc = 0x227894u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15561 << 16));
    // 0x227898: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x227898u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x22789c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22789cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2278a0: 0x0  nop
    ctx->pc = 0x2278a0u;
    // NOP
    // 0x2278a4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2278a4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2278a8: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x2278a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x2278ac: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2278acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2278b0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2278b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2278b4: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x2278b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2278b8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2278b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2278bc: 0x0  nop
    ctx->pc = 0x2278bcu;
    // NOP
    // 0x2278c0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2278c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2278c4: 0x0  nop
    ctx->pc = 0x2278c4u;
    // NOP
    // 0x2278c8: 0x4500001d  bc1f        . + 4 + (0x1D << 2)
    ctx->pc = 0x2278C8u;
    {
        const bool branch_taken_0x2278c8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2278c8) {
            ctx->pc = 0x227940u;
            return;
        }
    }
    ctx->pc = 0x2278D0u;
    // 0x2278d0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2278d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2278d4: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x2278d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2278d8: 0x24a31330  addiu       $v1, $a1, 0x1330
    ctx->pc = 0x2278d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x2278dc: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x2278dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x2278e0: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2278E0u;
    {
        const bool branch_taken_0x2278e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2278e0) {
            ctx->pc = 0x227940u;
            return;
        }
    }
    ctx->pc = 0x2278E8u;
}
