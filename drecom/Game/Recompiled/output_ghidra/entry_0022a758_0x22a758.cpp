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

// Function: entry_0022a758
// Address: 0x22a758 - 0x22a9a8
void entry_0022a758_0x22a758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022a758_0x22a758");
#endif

    switch (ctx->pc) {
        case 0x22a784u: goto label_22a784;
        case 0x22a7a0u: goto label_22a7a0;
        case 0x22a7b8u: goto label_22a7b8;
        case 0x22a7c4u: goto label_22a7c4;
        case 0x22a800u: goto label_22a800;
        case 0x22a8a0u: goto label_22a8a0;
        case 0x22a920u: goto label_22a920;
        case 0x22a930u: goto label_22a930;
        case 0x22a940u: goto label_22a940;
        case 0x22a964u: goto label_22a964;
        case 0x22a988u: goto label_22a988;
        default: break;
    }

    ctx->pc = 0x22a758u;

    // 0x22a758: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x22a758u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22a75c: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x22a75cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22a760: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22a760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22a764: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x22a764u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22a768: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x22a768u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x22a76c: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x22a76cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x22a770: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x22a770u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x22a774: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x22a774u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x22a778: 0xc46d003c  lwc1        $f13, 0x3C($v1)
    ctx->pc = 0x22a778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x22a77c: 0xc05c848  jal         func_172120
    ctx->pc = 0x22A77Cu;
    SET_GPR_U32(ctx, 31, 0x22A784u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x22A77Cu, 0x22A784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A784u;
label_22a784:
    // 0x22a784: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x22a784u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x22a788: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22a788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22a78c: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x22a78cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22a790: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x22a790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22a794: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x22a794u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x22a798: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x22A798u;
    SET_GPR_U32(ctx, 31, 0x22A7A0u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x22A798u, 0x22A7A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A7A0u;
label_22a7a0:
    // 0x22a7a0: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22a7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22a7a4: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x22a7a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x22a7a8: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x22a7a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22a7ac: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x22a7acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x22a7b0: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x22A7B0u;
    SET_GPR_U32(ctx, 31, 0x22A7B8u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x22A7B0u, 0x22A7B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A7B8u;
label_22a7b8:
    // 0x22a7b8: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x22a7b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22a7bc: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x22A7BCu;
    SET_GPR_U32(ctx, 31, 0x22A7C4u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x22A7BCu, 0x22A7C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A7C4u;
label_22a7c4:
    // 0x22a7c4: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22a7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22a7c8: 0x906309db  lbu         $v1, 0x9DB($v1)
    ctx->pc = 0x22a7c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2523)));
    // 0x22a7cc: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x22a7ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x22a7d0: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x22a7d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x22a7d4: 0x10600074  beqz        $v1, . + 4 + (0x74 << 2)
    ctx->pc = 0x22A7D4u;
    {
        const bool branch_taken_0x22a7d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a7d4) {
            ctx->pc = 0x22A9A8u;
            return;
        }
    }
    ctx->pc = 0x22A7DCu;
    // 0x22a7dc: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22a7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22a7e0: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x22a7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x22a7e4: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x22a7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x22a7e8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x22a7e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22a7ec: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x22a7ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x22a7f0: 0x8c24dcf0  lw          $a0, -0x2310($at)
    ctx->pc = 0x22a7f0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x22a7f4: 0x24650880  addiu       $a1, $v1, 0x880
    ctx->pc = 0x22a7f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 2176));
    // 0x22a7f8: 0xc05cad8  jal         func_172B60
    ctx->pc = 0x22A7F8u;
    SET_GPR_U32(ctx, 31, 0x22A800u);
    ctx->pc = 0x172B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172B60u, 0x22A7F8u, 0x22A800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A800u;
label_22a800:
    // 0x22a800: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x22a800u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22a804: 0x0  nop
    ctx->pc = 0x22a804u;
    // NOP
    // 0x22a808: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x22a808u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22a80c: 0x0  nop
    ctx->pc = 0x22a80cu;
    // NOP
    // 0x22a810: 0x45000065  bc1f        . + 4 + (0x65 << 2)
    ctx->pc = 0x22A810u;
    {
        const bool branch_taken_0x22a810 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22a810) {
            ctx->pc = 0x22A9A8u;
            return;
        }
    }
    ctx->pc = 0x22A818u;
    // 0x22a818: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22a818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22a81c: 0x8463127e  lh          $v1, 0x127E($v1)
    ctx->pc = 0x22a81cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4734)));
    // 0x22a820: 0x14600061  bnez        $v1, . + 4 + (0x61 << 2)
    ctx->pc = 0x22A820u;
    {
        const bool branch_taken_0x22a820 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22a820) {
            ctx->pc = 0x22A9A8u;
            return;
        }
    }
    ctx->pc = 0x22A828u;
    // 0x22a828: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x22a828u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22a82c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22a82cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22a830: 0xa443127e  sh          $v1, 0x127E($v0)
    ctx->pc = 0x22a830u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4734), (uint16_t)GPR_U32(ctx, 3));
    // 0x22a834: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22a834u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22a838: 0x0  nop
    ctx->pc = 0x22a838u;
    // NOP
    // 0x22a83c: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x22a83cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x22a840: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22a840u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22a844: 0x0  nop
    ctx->pc = 0x22a844u;
    // NOP
    // 0x22a848: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x22a848u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x22a84c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22a84cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22a850: 0x0  nop
    ctx->pc = 0x22a850u;
    // NOP
    // 0x22a854: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x22a854u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x22a858: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x22a858u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x22a85c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22a85cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22a860: 0x0  nop
    ctx->pc = 0x22a860u;
    // NOP
    // 0x22a864: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x22a864u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x22a868: 0x10283c  dsll32      $a1, $s0, 0
    ctx->pc = 0x22a868u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) << (32 + 0));
    // 0x22a86c: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x22a86cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x22a870: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x22a870u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x22a874: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x22a874u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x22a878: 0x3464ffff  ori         $a0, $v1, 0xFFFF
    ctx->pc = 0x22a878u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x22a87c: 0xa42824  and         $a1, $a1, $a0
    ctx->pc = 0x22a87cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x22a880: 0x5183c  dsll32      $v1, $a1, 0
    ctx->pc = 0x22a880u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 0));
    // 0x22a884: 0x34640006  ori         $a0, $v1, 0x6
    ctx->pc = 0x22a884u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)6);
    // 0x22a888: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x22a888u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x22a88c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x22a88cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x22a890: 0x8e070130  lw          $a3, 0x130($s0)
    ctx->pc = 0x22a890u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x22a894: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x22a894u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x22a898: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x22A898u;
    SET_GPR_U32(ctx, 31, 0x22A8A0u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x22A898u, 0x22A8A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A8A0u;
label_22a8a0:
    // 0x22a8a0: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x22a8a0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x22a8a4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22a8a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22a8a8: 0x0  nop
    ctx->pc = 0x22a8a8u;
    // NOP
    // 0x22a8ac: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x22a8acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x22a8b0: 0x3c034396  lui         $v1, 0x4396
    ctx->pc = 0x22a8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
    // 0x22a8b4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22a8b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22a8b8: 0x0  nop
    ctx->pc = 0x22a8b8u;
    // NOP
    // 0x22a8bc: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x22a8bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x22a8c0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22a8c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22a8c4: 0x0  nop
    ctx->pc = 0x22a8c4u;
    // NOP
    // 0x22a8c8: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x22a8c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x22a8cc: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x22a8ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x22a8d0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x22a8d0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22a8d4: 0x0  nop
    ctx->pc = 0x22a8d4u;
    // NOP
    // 0x22a8d8: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x22a8d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x22a8dc: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22a8dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22a8e0: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x22a8e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x22a8e4: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x22a8e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x22a8e8: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x22a8e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x22a8ec: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x22a8ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x22a8f0: 0x3462ffff  ori         $v0, $v1, 0xFFFF
    ctx->pc = 0x22a8f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x22a8f4: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x22a8f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x22a8f8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x22a8f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x22a8fc: 0x34440006  ori         $a0, $v0, 0x6
    ctx->pc = 0x22a8fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x22a900: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22a900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22a904: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x22a904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x22a908: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x22a908u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x22a90c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x22a90cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x22a910: 0x24470880  addiu       $a3, $v0, 0x880
    ctx->pc = 0x22a910u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 2176));
    // 0x22a914: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x22a914u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x22a918: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x22A918u;
    SET_GPR_U32(ctx, 31, 0x22A920u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x22A918u, 0x22A920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A920u;
label_22a920:
    // 0x22a920: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x22a920u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x22a924: 0x3c050005  lui         $a1, 0x5
    ctx->pc = 0x22a924u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)5 << 16));
    // 0x22a928: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x22A928u;
    SET_GPR_U32(ctx, 31, 0x22A930u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x22A928u, 0x22A930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A930u;
label_22a930:
    // 0x22a930: 0x3c0402fa  lui         $a0, 0x2FA
    ctx->pc = 0x22a930u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)762 << 16));
    // 0x22a934: 0x3c050002  lui         $a1, 0x2
    ctx->pc = 0x22a934u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
    // 0x22a938: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x22A938u;
    SET_GPR_U32(ctx, 31, 0x22A940u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x22A938u, 0x22A940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A940u;
label_22a940:
    // 0x22a940: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22a940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22a944: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x22a944u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x22a948: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x22a948u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x22a94c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x22a94cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22a950: 0x24040511  addiu       $a0, $zero, 0x511
    ctx->pc = 0x22a950u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1297));
    // 0x22a954: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x22a954u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x22a958: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x22a958u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x22a95c: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x22A95Cu;
    SET_GPR_U32(ctx, 31, 0x22A964u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x22A95Cu, 0x22A964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A964u;
label_22a964:
    // 0x22a964: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x22a964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x22a968: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x22a968u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x22a96c: 0xa022ec68  sb          $v0, -0x1398($at)
    ctx->pc = 0x22a96cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3EEC68u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3EEC68u, _value); } while (0);
    // 0x22a970: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x22a970u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x22a974: 0x2444dbc0  addiu       $a0, $v0, -0x2440
    ctx->pc = 0x22a974u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x22a978: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x22a978u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22a97c: 0x24060032  addiu       $a2, $zero, 0x32
    ctx->pc = 0x22a97cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x22a980: 0xc06d1d8  jal         func_1B4760
    ctx->pc = 0x22A980u;
    SET_GPR_U32(ctx, 31, 0x22A988u);
    ctx->pc = 0x1B4760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4760u, 0x22A980u, 0x22A988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A988u;
label_22a988:
    // 0x22a988: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x22a988u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x22a98c: 0x8423ec66  lh          $v1, -0x139A($at)
    ctx->pc = 0x22a98cu;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x3EEC66u));
    // 0x22a990: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x22a990u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x22a994: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x22a994u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x22a998: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x22A998u;
    {
        const bool branch_taken_0x22a998 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x22a998) {
            ctx->pc = 0x22A9A8u;
            return;
        }
    }
    ctx->pc = 0x22A9A0u;
    // 0x22a9a0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x22a9a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x22a9a4: 0xa420ec66  sh          $zero, -0x139A($at)
    ctx->pc = 0x22a9a4u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3EEC66u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x3EEC66u, _value); } while (0);
    ctx->pc = 0x22a9a8u;
}
