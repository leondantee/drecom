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

// Function: Dest_pos
// Address: 0x173240 - 0x1733e8
void Dest_pos_0x173240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Dest_pos_0x173240");
#endif

    switch (ctx->pc) {
        case 0x173274u: goto label_173274;
        default: break;
    }

    ctx->pc = 0x173240u;

    // 0x173240: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x173240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x173244: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x173244u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x173248: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x173248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17324c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17324cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x173250: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x173250u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
    // 0x173254: 0xe7ac0050  swc1        $f12, 0x50($sp)
    ctx->pc = 0x173254u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x173258: 0xafa50058  sw          $a1, 0x58($sp)
    ctx->pc = 0x173258u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 5));
    // 0x17325c: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x17325cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x173260: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x173260u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x173264: 0xc7ac0050  lwc1        $f12, 0x50($sp)
    ctx->pc = 0x173264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x173268: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x173268u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x17326c: 0xc05cc20  jal         func_173080
    ctx->pc = 0x17326Cu;
    SET_GPR_U32(ctx, 31, 0x173274u);
    ctx->pc = 0x173080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173080u, 0x17326Cu, 0x173274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173274u;
label_173274:
    // 0x173274: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x173274u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x173278: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x173278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17327c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17327cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x173280: 0x0  nop
    ctx->pc = 0x173280u;
    // NOP
    // 0x173284: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x173284u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x173288: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x173288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17328c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x17328Cu;
    {
        const bool branch_taken_0x17328c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x17328c) {
            ctx->pc = 0x173298u;
            goto label_173298;
        }
    }
    ctx->pc = 0x173294u;
    // 0x173294: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x173294u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_173298:
    // 0x173298: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x173298u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x17329c: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x17329cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1732a0: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x1732a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1732a4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1732a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1732a8: 0x0  nop
    ctx->pc = 0x1732a8u;
    // NOP
    // 0x1732ac: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1732acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1732b0: 0x0  nop
    ctx->pc = 0x1732b0u;
    // NOP
    // 0x1732b4: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1732B4u;
    {
        const bool branch_taken_0x1732b4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1732b4) {
            ctx->pc = 0x1732D0u;
            goto label_1732d0;
        }
    }
    ctx->pc = 0x1732BCu;
    // 0x1732bc: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x1732bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1732c0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1732c0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1732c4: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x1732c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x1732c8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1732C8u;
    {
        const bool branch_taken_0x1732c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1732c8) {
            ctx->pc = 0x1732D8u;
            goto label_1732d8;
        }
    }
    ctx->pc = 0x1732D0u;
label_1732d0:
    // 0x1732d0: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x1732d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1732d4: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x1732d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_1732d8:
    // 0x1732d8: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x1732d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1732dc: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x1732dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x1732e0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1732e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1732e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1732e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1732e8: 0x0  nop
    ctx->pc = 0x1732e8u;
    // NOP
    // 0x1732ec: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1732ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1732f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1732f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1732f4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1732F4u;
    {
        const bool branch_taken_0x1732f4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1732f4) {
            ctx->pc = 0x173300u;
            goto label_173300;
        }
    }
    ctx->pc = 0x1732FCu;
    // 0x1732fc: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x1732fcu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_173300:
    // 0x173300: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x173300u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x173304: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x173304u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x173308: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x173308u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x17330c: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x17330cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x173310: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x173310u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x173314: 0x0  nop
    ctx->pc = 0x173314u;
    // NOP
    // 0x173318: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x173318u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17331c: 0x0  nop
    ctx->pc = 0x17331cu;
    // NOP
    // 0x173320: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x173320u;
    {
        const bool branch_taken_0x173320 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x173320) {
            ctx->pc = 0x17333Cu;
            goto label_17333c;
        }
    }
    ctx->pc = 0x173328u;
    // 0x173328: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x173328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17332c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x17332cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x173330: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x173330u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x173334: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x173334u;
    {
        const bool branch_taken_0x173334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x173334) {
            ctx->pc = 0x173344u;
            goto label_173344;
        }
    }
    ctx->pc = 0x17333Cu;
label_17333c:
    // 0x17333c: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x17333cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x173340: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x173340u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_173344:
    // 0x173344: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x173344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x173348: 0x3c023f49  lui         $v0, 0x3F49
    ctx->pc = 0x173348u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16201 << 16));
    // 0x17334c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x17334cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x173350: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x173350u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x173354: 0x0  nop
    ctx->pc = 0x173354u;
    // NOP
    // 0x173358: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x173358u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17335c: 0x0  nop
    ctx->pc = 0x17335cu;
    // NOP
    // 0x173360: 0x45010019  bc1t        . + 4 + (0x19 << 2)
    ctx->pc = 0x173360u;
    {
        const bool branch_taken_0x173360 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x173360) {
            ctx->pc = 0x1733C8u;
            goto label_1733c8;
        }
    }
    ctx->pc = 0x173368u;
    // 0x173368: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x173368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17336c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17336cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x173370: 0x0  nop
    ctx->pc = 0x173370u;
    // NOP
    // 0x173374: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x173374u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x173378: 0x0  nop
    ctx->pc = 0x173378u;
    // NOP
    // 0x17337c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x17337Cu;
    {
        const bool branch_taken_0x17337c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x17337c) {
            ctx->pc = 0x173398u;
            goto label_173398;
        }
    }
    ctx->pc = 0x173384u;
    // 0x173384: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x173384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x173388: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x173388u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x17338c: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x17338cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x173390: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x173390u;
    {
        const bool branch_taken_0x173390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x173390) {
            ctx->pc = 0x1733A0u;
            goto label_1733a0;
        }
    }
    ctx->pc = 0x173398u;
label_173398:
    // 0x173398: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x173398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17339c: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x17339cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_1733a0:
    // 0x1733a0: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x1733a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1733a4: 0x3c024016  lui         $v0, 0x4016
    ctx->pc = 0x1733a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16406 << 16));
    // 0x1733a8: 0x3442cbe4  ori         $v0, $v0, 0xCBE4
    ctx->pc = 0x1733a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52196);
    // 0x1733ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1733acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1733b0: 0x0  nop
    ctx->pc = 0x1733b0u;
    // NOP
    // 0x1733b4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1733b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1733b8: 0x0  nop
    ctx->pc = 0x1733b8u;
    // NOP
    // 0x1733bc: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1733BCu;
    {
        const bool branch_taken_0x1733bc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1733bc) {
            ctx->pc = 0x1733C8u;
            goto label_1733c8;
        }
    }
    ctx->pc = 0x1733C4u;
    // 0x1733c4: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1733c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1733c8:
    // 0x1733c8: 0x2118025  or          $s0, $s0, $s1
    ctx->pc = 0x1733c8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 17));
    // 0x1733cc: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x1733ccu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1733d0: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x1733d0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1733d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1733d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1733d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1733d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1733dc: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x1733dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1733e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1733E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1733E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1733E8u;
}
