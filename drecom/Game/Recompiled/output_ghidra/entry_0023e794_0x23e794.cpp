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

// Function: entry_0023e794
// Address: 0x23e794 - 0x23e908
void entry_0023e794_0x23e794(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023e794_0x23e794");
#endif

    switch (ctx->pc) {
        case 0x23e7dcu: goto label_23e7dc;
        case 0x23e800u: goto label_23e800;
        case 0x23e814u: goto label_23e814;
        case 0x23e828u: goto label_23e828;
        case 0x23e898u: goto label_23e898;
        case 0x23e8d0u: goto label_23e8d0;
        default: break;
    }

    ctx->pc = 0x23e794u;

    // 0x23e794: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x23e794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23e798: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x23e798u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x23e79c: 0x10600098  beqz        $v1, . + 4 + (0x98 << 2)
    ctx->pc = 0x23E79Cu;
    {
        const bool branch_taken_0x23e79c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23e79c) {
            ctx->pc = 0x23EA00u;
            return;
        }
    }
    ctx->pc = 0x23E7A4u;
    // 0x23e7a4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23e7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23e7a8: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x23e7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23e7ac: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x23e7acu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x23e7b0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23e7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23e7b4: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x23e7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23e7b8: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x23e7b8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x23e7bc: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x23e7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23e7c0: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x23e7c0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x23e7c4: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x23e7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23e7c8: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x23e7c8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x23e7cc: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x23e7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23e7d0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x23e7d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x23e7d4: 0xc067694  jal         func_19DA50
    ctx->pc = 0x23E7D4u;
    SET_GPR_U32(ctx, 31, 0x23E7DCu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x23E7D4u, 0x23E7DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E7DCu;
label_23e7dc:
    // 0x23e7dc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x23e7dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x23e7e0: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x23e7e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x23e7e4: 0x244200b4  addiu       $v0, $v0, 0xB4
    ctx->pc = 0x23e7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 180));
    // 0x23e7e8: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x23e7e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x23e7ec: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x23e7ecu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x23e7f0: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x23e7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23e7f4: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x23e7f4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x23e7f8: 0xc067694  jal         func_19DA50
    ctx->pc = 0x23E7F8u;
    SET_GPR_U32(ctx, 31, 0x23E800u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x23E7F8u, 0x23E800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E800u;
label_23e800:
    // 0x23e800: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x23e800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x23e804: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x23e804u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x23e808: 0x2451000a  addiu       $s1, $v0, 0xA
    ctx->pc = 0x23e808u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
    // 0x23e80c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x23E80Cu;
    SET_GPR_U32(ctx, 31, 0x23E814u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x23E80Cu, 0x23E814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E814u;
label_23e814:
    // 0x23e814: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x23e814u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x23e818: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x23e818u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x23e81c: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x23e81cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x23e820: 0xc067694  jal         func_19DA50
    ctx->pc = 0x23E820u;
    SET_GPR_U32(ctx, 31, 0x23E828u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x23E820u, 0x23E828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E828u;
label_23e828:
    // 0x23e828: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x23e828u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x23e82c: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x23e82cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x23e830: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x23e830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x23e834: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x23e834u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x23e838: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x23e838u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x23e83c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x23e83cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23e840: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23e840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23e844: 0xa443005c  sh          $v1, 0x5C($v0)
    ctx->pc = 0x23e844u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 92), (uint16_t)GPR_U32(ctx, 3));
    // 0x23e848: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x23e848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23e84c: 0xc4411288  lwc1        $f1, 0x1288($v0)
    ctx->pc = 0x23e84cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23e850: 0x3c0244fa  lui         $v0, 0x44FA
    ctx->pc = 0x23e850u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17658 << 16));
    // 0x23e854: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23e854u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23e858: 0x0  nop
    ctx->pc = 0x23e858u;
    // NOP
    // 0x23e85c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x23e85cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23e860: 0x0  nop
    ctx->pc = 0x23e860u;
    // NOP
    // 0x23e864: 0x45000028  bc1f        . + 4 + (0x28 << 2)
    ctx->pc = 0x23E864u;
    {
        const bool branch_taken_0x23e864 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23e864) {
            ctx->pc = 0x23E908u;
            return;
        }
    }
    ctx->pc = 0x23E86Cu;
    // 0x23e86c: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x23e86cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23e870: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x23e870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23e874: 0x3c023f86  lui         $v0, 0x3F86
    ctx->pc = 0x23e874u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16262 << 16));
    // 0x23e878: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x23e878u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x23e87c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x23e87cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x23e880: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x23e880u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x23e884: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x23e884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x23e888: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x23e888u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x23e88c: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x23e88cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x23e890: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x23E890u;
    SET_GPR_U32(ctx, 31, 0x23E898u);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x23E890u, 0x23E898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E898u;
label_23e898:
    // 0x23e898: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x23E898u;
    {
        const bool branch_taken_0x23e898 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23e898) {
            ctx->pc = 0x23E908u;
            return;
        }
    }
    ctx->pc = 0x23E8A0u;
    // 0x23e8a0: 0x8fa60088  lw          $a2, 0x88($sp)
    ctx->pc = 0x23e8a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23e8a4: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x23e8a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23e8a8: 0x3c034006  lui         $v1, 0x4006
    ctx->pc = 0x23e8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16390 << 16));
    // 0x23e8ac: 0x34640a92  ori         $a0, $v1, 0xA92
    ctx->pc = 0x23e8acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2706);
    // 0x23e8b0: 0x44846800  mtc1        $a0, $f13
    ctx->pc = 0x23e8b0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x23e8b4: 0x24c40120  addiu       $a0, $a2, 0x120
    ctx->pc = 0x23e8b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 288));
    // 0x23e8b8: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x23e8b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x23e8bc: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x23e8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x23e8c0: 0x2450dce0  addiu       $s0, $v0, -0x2320
    ctx->pc = 0x23e8c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x23e8c4: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x23e8c4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x23e8c8: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x23E8C8u;
    SET_GPR_U32(ctx, 31, 0x23E8D0u);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x23E8C8u, 0x23E8D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E8D0u;
label_23e8d0:
    // 0x23e8d0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x23E8D0u;
    {
        const bool branch_taken_0x23e8d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23e8d0) {
            ctx->pc = 0x23E908u;
            return;
        }
    }
    ctx->pc = 0x23E8D8u;
    // 0x23e8d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23e8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23e8dc: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x23e8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23e8e0: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x23e8e0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x23e8e4: 0x24100005  addiu       $s0, $zero, 0x5
    ctx->pc = 0x23e8e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x23e8e8: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x23e8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23e8ec: 0xa0500001  sb          $s0, 0x1($v0)
    ctx->pc = 0x23e8ecu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 16));
    // 0x23e8f0: 0x8fa60088  lw          $a2, 0x88($sp)
    ctx->pc = 0x23e8f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23e8f4: 0xa0c00002  sb          $zero, 0x2($a2)
    ctx->pc = 0x23e8f4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x23e8f8: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x23e8f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23e8fc: 0xa0800003  sb          $zero, 0x3($a0)
    ctx->pc = 0x23e8fcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x23e900: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x23e900u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23e904: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x23e904u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x23e908u;
}
