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

// Function: entry_002ca7c4
// Address: 0x2ca7c4 - 0x2caa28
void entry_002ca7c4_0x2ca7c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002ca7c4_0x2ca7c4");
#endif

    switch (ctx->pc) {
        case 0x2ca7f0u: goto label_2ca7f0;
        case 0x2ca80cu: goto label_2ca80c;
        case 0x2ca824u: goto label_2ca824;
        case 0x2ca844u: goto label_2ca844;
        case 0x2ca854u: goto label_2ca854;
        case 0x2ca860u: goto label_2ca860;
        case 0x2ca908u: goto label_2ca908;
        case 0x2ca9e4u: goto label_2ca9e4;
        default: break;
    }

    ctx->pc = 0x2ca7c4u;

    // 0x2ca7c4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2ca7c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca7c8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2ca7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca7cc: 0x3c023e0e  lui         $v0, 0x3E0E
    ctx->pc = 0x2ca7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15886 << 16));
    // 0x2ca7d0: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x2ca7d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x2ca7d4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2ca7d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2ca7d8: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x2ca7d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x2ca7dc: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x2ca7dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2ca7e0: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2ca7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2ca7e4: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x2ca7e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x2ca7e8: 0xc05c848  jal         func_172120
    ctx->pc = 0x2CA7E8u;
    SET_GPR_U32(ctx, 31, 0x2CA7F0u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x2CA7E8u, 0x2CA7F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA7F0u;
label_2ca7f0:
    // 0x2ca7f0: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x2ca7f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2ca7f4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2ca7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca7f8: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x2ca7f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ca7fc: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x2ca7fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ca800: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2ca800u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2ca804: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2CA804u;
    SET_GPR_U32(ctx, 31, 0x2CA80Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2CA804u, 0x2CA80Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA80Cu;
label_2ca80c:
    // 0x2ca80c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2ca80cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca810: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x2ca810u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x2ca814: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2ca814u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca818: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2ca818u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2ca81c: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2CA81Cu;
    SET_GPR_U32(ctx, 31, 0x2CA824u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2CA81Cu, 0x2CA824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA824u;
label_2ca824:
    // 0x2ca824: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2ca824u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca828: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2ca828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca82c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2ca82cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca830: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x2ca830u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x2ca834: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x2ca834u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x2ca838: 0x24460180  addiu       $a2, $v0, 0x180
    ctx->pc = 0x2ca838u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x2ca83c: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x2CA83Cu;
    SET_GPR_U32(ctx, 31, 0x2CA844u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x2CA83Cu, 0x2CA844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA844u;
label_2ca844:
    // 0x2ca844: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2ca844u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca848: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2ca848u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2ca84c: 0xc0b1094  jal         func_2C4250
    ctx->pc = 0x2CA84Cu;
    SET_GPR_U32(ctx, 31, 0x2CA854u);
    ctx->pc = 0x2C4250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4250u, 0x2CA84Cu, 0x2CA854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA854u;
label_2ca854:
    // 0x2ca854: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2ca854u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca858: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x2CA858u;
    SET_GPR_U32(ctx, 31, 0x2CA860u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2CA858u, 0x2CA860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA860u;
label_2ca860:
    // 0x2ca860: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2ca860u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca864: 0x3c033f73  lui         $v1, 0x3F73
    ctx->pc = 0x2ca864u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16243 << 16));
    // 0x2ca868: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x2ca868u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x2ca86c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2ca86cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ca870: 0xc4800180  lwc1        $f0, 0x180($a0)
    ctx->pc = 0x2ca870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ca874: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2ca874u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2ca878: 0xe4800180  swc1        $f0, 0x180($a0)
    ctx->pc = 0x2ca878u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 384), bits); }
    // 0x2ca87c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2ca87cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca880: 0x3c033f73  lui         $v1, 0x3F73
    ctx->pc = 0x2ca880u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16243 << 16));
    // 0x2ca884: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x2ca884u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x2ca888: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2ca888u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ca88c: 0xc4800188  lwc1        $f0, 0x188($a0)
    ctx->pc = 0x2ca88cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ca890: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2ca890u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2ca894: 0xe4800188  swc1        $f0, 0x188($a0)
    ctx->pc = 0x2ca894u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 392), bits); }
    // 0x2ca898: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2ca898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca89c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2ca89cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2ca8a0: 0xc4610020  lwc1        $f1, 0x20($v1)
    ctx->pc = 0x2ca8a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ca8a4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2ca8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca8a8: 0xc4600184  lwc1        $f0, 0x184($v1)
    ctx->pc = 0x2ca8a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ca8ac: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2ca8acu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2ca8b0: 0xe4600184  swc1        $f0, 0x184($v1)
    ctx->pc = 0x2ca8b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 388), bits); }
    // 0x2ca8b4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2ca8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca8b8: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x2ca8b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2ca8bc: 0xc4810020  lwc1        $f1, 0x20($a0)
    ctx->pc = 0x2ca8bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ca8c0: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x2ca8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x2ca8c4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ca8c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ca8c8: 0x0  nop
    ctx->pc = 0x2ca8c8u;
    // NOP
    // 0x2ca8cc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2ca8ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2ca8d0: 0xe4800020  swc1        $f0, 0x20($a0)
    ctx->pc = 0x2ca8d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x2ca8d4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2ca8d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca8d8: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2ca8d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2ca8dc: 0x10600082  beqz        $v1, . + 4 + (0x82 << 2)
    ctx->pc = 0x2CA8DCu;
    {
        const bool branch_taken_0x2ca8dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ca8dc) {
            ctx->pc = 0x2CAAE8u;
            return;
        }
    }
    ctx->pc = 0x2CA8E4u;
    // 0x2ca8e4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2ca8e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ca8e8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2ca8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca8ec: 0xe44000d0  swc1        $f0, 0xD0($v0)
    ctx->pc = 0x2ca8ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
    // 0x2ca8f0: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x2ca8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x2ca8f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ca8f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ca8f8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2ca8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca8fc: 0xe44011e0  swc1        $f0, 0x11E0($v0)
    ctx->pc = 0x2ca8fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4576), bits); }
    // 0x2ca900: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2CA900u;
    SET_GPR_U32(ctx, 31, 0x2CA908u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2CA900u, 0x2CA908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA908u;
label_2ca908:
    // 0x2ca908: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2ca908u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2ca90c: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x2ca90cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x2ca910: 0x2442003c  addiu       $v0, $v0, 0x3C
    ctx->pc = 0x2ca910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x2ca914: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x2ca914u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2ca918: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2ca918u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2ca91c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2ca91cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca920: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2ca920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2ca924: 0xa443000c  sh          $v1, 0xC($v0)
    ctx->pc = 0x2ca924u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x2ca928: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2ca928u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ca92c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2ca92cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca930: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2ca930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2ca934: 0xe4400040  swc1        $f0, 0x40($v0)
    ctx->pc = 0x2ca934u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
    // 0x2ca938: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2ca938u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ca93c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2ca93cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca940: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2ca940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2ca944: 0xe4400044  swc1        $f0, 0x44($v0)
    ctx->pc = 0x2ca944u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 68), bits); }
    // 0x2ca948: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2ca948u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ca94c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2ca94cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca950: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2ca950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2ca954: 0xe4400048  swc1        $f0, 0x48($v0)
    ctx->pc = 0x2ca954u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 72), bits); }
    // 0x2ca958: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2ca958u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ca95c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2ca95cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca960: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x2ca960u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    // 0x2ca964: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2ca964u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ca968: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2ca968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca96c: 0xe4400180  swc1        $f0, 0x180($v0)
    ctx->pc = 0x2ca96cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
    // 0x2ca970: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2ca970u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ca974: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2ca974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca978: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x2ca978u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    // 0x2ca97c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2ca97cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ca980: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2ca980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca984: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x2ca984u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    // 0x2ca988: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ca988u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ca98c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2ca98cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca990: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x2ca990u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ca994: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2ca994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2ca998: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2ca998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca99c: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x2ca99cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ca9a0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2ca9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca9a4: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x2ca9a4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ca9a8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2ca9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca9ac: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x2ca9acu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ca9b0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2ca9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca9b4: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2ca9b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2ca9b8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2ca9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca9bc: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x2ca9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2ca9c0: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x2ca9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x2ca9c4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2ca9c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2ca9c8: 0xac62001c  sw          $v0, 0x1C($v1)
    ctx->pc = 0x2ca9c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 2));
    // 0x2ca9cc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ca9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ca9d0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2ca9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca9d4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2ca9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2ca9d8: 0xa443000e  sh          $v1, 0xE($v0)
    ctx->pc = 0x2ca9d8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x2ca9dc: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2CA9DCu;
    SET_GPR_U32(ctx, 31, 0x2CA9E4u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2CA9DCu, 0x2CA9E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA9E4u;
label_2ca9e4:
    // 0x2ca9e4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2ca9e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2ca9e8: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x2ca9e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x2ca9ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ca9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ca9f0: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2CA9F0u;
    {
        const bool branch_taken_0x2ca9f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ca9f0) {
            ctx->pc = 0x2CAA28u;
            return;
        }
    }
    ctx->pc = 0x2CA9F8u;
    // 0x2ca9f8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ca9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ca9fc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2ca9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2caa00: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x2caa00u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2caa04: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2caa04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2caa08: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2caa08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2caa0c: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x2caa0cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x2caa10: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2caa10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2caa14: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x2caa14u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2caa18: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2caa18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2caa1c: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x2caa1cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2caa20: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2caa20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2caa24: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2caa24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x2caa28u;
}
