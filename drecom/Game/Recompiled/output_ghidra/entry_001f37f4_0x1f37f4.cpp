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

// Function: entry_001f37f4
// Address: 0x1f37f4 - 0x1f38ec
void entry_001f37f4_0x1f37f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f37f4_0x1f37f4");
#endif

    ctx->pc = 0x1f37f4u;

    // 0x1f37f4: 0x26031330  addiu       $v1, $s0, 0x1330
    ctx->pc = 0x1f37f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4912));
    // 0x1f37f8: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x1f37f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x1f37fc: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1f37fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x1f3800: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1f3800u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f3804: 0xc460003c  lwc1        $f0, 0x3C($v1)
    ctx->pc = 0x1f3804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f3808: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1f3808u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1f380c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f380cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f3810: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f3810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f3814: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x1f3814u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x1f3818: 0x26031330  addiu       $v1, $s0, 0x1330
    ctx->pc = 0x1f3818u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4912));
    // 0x1f381c: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x1f381cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x1f3820: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1f3820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x1f3824: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1f3824u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f3828: 0xc4600058  lwc1        $f0, 0x58($v1)
    ctx->pc = 0x1f3828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f382c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1f382cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1f3830: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f3830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f3834: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f3834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f3838: 0xe4400058  swc1        $f0, 0x58($v0)
    ctx->pc = 0x1f3838u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
    // 0x1f383c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f383cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f3840: 0x944209ea  lhu         $v0, 0x9EA($v0)
    ctx->pc = 0x1f3840u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2538)));
    // 0x1f3844: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x1f3844u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1f3848: 0x960209ea  lhu         $v0, 0x9EA($s0)
    ctx->pc = 0x1f3848u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2538)));
    // 0x1f384c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1f384cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1f3850: 0x10620035  beq         $v1, $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x1F3850u;
    {
        const bool branch_taken_0x1f3850 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1f3850) {
            ctx->pc = 0x1F3928u;
            return;
        }
    }
    ctx->pc = 0x1F3858u;
    // 0x1f3858: 0x960209ea  lhu         $v0, 0x9EA($s0)
    ctx->pc = 0x1f3858u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2538)));
    // 0x1f385c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1f385cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1f3860: 0x2841000c  slti        $at, $v0, 0xC
    ctx->pc = 0x1f3860u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x1f3864: 0x10200030  beqz        $at, . + 4 + (0x30 << 2)
    ctx->pc = 0x1F3864u;
    {
        const bool branch_taken_0x1f3864 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f3864) {
            ctx->pc = 0x1F3928u;
            return;
        }
    }
    ctx->pc = 0x1F386Cu;
    // 0x1f386c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f386cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f3870: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f3870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f3874: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x1f3874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f3878: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f3878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f387c: 0xc4400188  lwc1        $f0, 0x188($v0)
    ctx->pc = 0x1f387cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f3880: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1f3880u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f3884: 0x0  nop
    ctx->pc = 0x1f3884u;
    // NOP
    // 0x1f3888: 0x45000027  bc1f        . + 4 + (0x27 << 2)
    ctx->pc = 0x1F3888u;
    {
        const bool branch_taken_0x1f3888 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f3888) {
            ctx->pc = 0x1F3928u;
            return;
        }
    }
    ctx->pc = 0x1F3890u;
    // 0x1f3890: 0x960309ea  lhu         $v1, 0x9EA($s0)
    ctx->pc = 0x1f3890u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2538)));
    // 0x1f3894: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f3894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f3898: 0xa44309ea  sh          $v1, 0x9EA($v0)
    ctx->pc = 0x1f3898u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2538), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f389c: 0x960209ea  lhu         $v0, 0x9EA($s0)
    ctx->pc = 0x1f389cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2538)));
    // 0x1f38a0: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x1f38a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1f38a4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1f38a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f38a8: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1F38A8u;
    {
        const bool branch_taken_0x1f38a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1f38a8) {
            ctx->pc = 0x1F38ECu;
            return;
        }
    }
    ctx->pc = 0x1F38B0u;
    // 0x1f38b0: 0x960209ea  lhu         $v0, 0x9EA($s0)
    ctx->pc = 0x1f38b0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2538)));
    // 0x1f38b4: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x1f38b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1f38b8: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1f38b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1f38bc: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1F38BCu;
    {
        const bool branch_taken_0x1f38bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1f38bc) {
            ctx->pc = 0x1F38ECu;
            return;
        }
    }
    ctx->pc = 0x1F38C4u;
    // 0x1f38c4: 0x960209ea  lhu         $v0, 0x9EA($s0)
    ctx->pc = 0x1f38c4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2538)));
    // 0x1f38c8: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x1f38c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1f38cc: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1f38ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1f38d0: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F38D0u;
    {
        const bool branch_taken_0x1f38d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1f38d0) {
            ctx->pc = 0x1F38ECu;
            return;
        }
    }
    ctx->pc = 0x1F38D8u;
    // 0x1f38d8: 0x960209ea  lhu         $v0, 0x9EA($s0)
    ctx->pc = 0x1f38d8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2538)));
    // 0x1f38dc: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x1f38dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1f38e0: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1f38e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1f38e4: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F38E4u;
    {
        const bool branch_taken_0x1f38e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f38e4) {
            ctx->pc = 0x1F38FCu;
            return;
        }
    }
    ctx->pc = 0x1F38ECu;
}
