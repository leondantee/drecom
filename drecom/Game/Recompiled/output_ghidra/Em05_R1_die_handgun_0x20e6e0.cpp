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

// Function: Em05_R1_die_handgun
// Address: 0x20e6e0 - 0x20ea4c
void Em05_R1_die_handgun_0x20e6e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em05_R1_die_handgun_0x20e6e0");
#endif

    switch (ctx->pc) {
        case 0x20e758u: goto label_20e758;
        case 0x20e7bcu: goto label_20e7bc;
        case 0x20e7d0u: goto label_20e7d0;
        case 0x20e818u: goto label_20e818;
        case 0x20e828u: goto label_20e828;
        case 0x20e838u: goto label_20e838;
        case 0x20e844u: goto label_20e844;
        case 0x20e854u: goto label_20e854;
        case 0x20e860u: goto label_20e860;
        default: break;
    }

    ctx->pc = 0x20e6e0u;

    // 0x20e6e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x20e6e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x20e6e4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x20e6e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x20e6e8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x20e6e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x20e6ec: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x20e6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20e6f0: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x20e6f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x20e6f4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x20e6f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x20e6f8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x20e6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x20e6fc: 0x108300cf  beq         $a0, $v1, . + 4 + (0xCF << 2)
    ctx->pc = 0x20E6FCu;
    {
        const bool branch_taken_0x20e6fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x20e6fc) {
            ctx->pc = 0x20EA3Cu;
            goto label_20ea3c;
        }
    }
    ctx->pc = 0x20E704u;
    // 0x20e704: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x20e704u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x20e708: 0x1083008c  beq         $a0, $v1, . + 4 + (0x8C << 2)
    ctx->pc = 0x20E708u;
    {
        const bool branch_taken_0x20e708 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x20e708) {
            ctx->pc = 0x20E93Cu;
            goto label_20e93c;
        }
    }
    ctx->pc = 0x20E710u;
    // 0x20e710: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x20e710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20e714: 0x10830061  beq         $a0, $v1, . + 4 + (0x61 << 2)
    ctx->pc = 0x20E714u;
    {
        const bool branch_taken_0x20e714 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x20e714) {
            ctx->pc = 0x20E89Cu;
            goto label_20e89c;
        }
    }
    ctx->pc = 0x20E71Cu;
    // 0x20e71c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20e71cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20e720: 0x10830017  beq         $a0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x20E720u;
    {
        const bool branch_taken_0x20e720 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x20e720) {
            ctx->pc = 0x20E780u;
            goto label_20e780;
        }
    }
    ctx->pc = 0x20E728u;
    // 0x20e728: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20E728u;
    {
        const bool branch_taken_0x20e728 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x20e728) {
            ctx->pc = 0x20E738u;
            goto label_20e738;
        }
    }
    ctx->pc = 0x20E730u;
    // 0x20e730: 0x100000c2  b           . + 4 + (0xC2 << 2)
    ctx->pc = 0x20E730u;
    {
        const bool branch_taken_0x20e730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20e730) {
            ctx->pc = 0x20EA3Cu;
            goto label_20ea3c;
        }
    }
    ctx->pc = 0x20E738u;
label_20e738:
    // 0x20e738: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x20e738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20e73c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x20e73cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20e740: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x20e740u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x20e744: 0x24066416  addiu       $a2, $zero, 0x6416
    ctx->pc = 0x20e744u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 25622));
    // 0x20e748: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x20e748u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20e74c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x20e74cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x20e750: 0xc0965d0  jal         func_259740
    ctx->pc = 0x20E750u;
    SET_GPR_U32(ctx, 31, 0x20E758u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x20E750u, 0x20E758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E758u;
label_20e758:
    // 0x20e758: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x20e758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20e75c: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x20e75cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x20e760: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x20e760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20e764: 0x906210a8  lbu         $v0, 0x10A8($v1)
    ctx->pc = 0x20e764u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4264)));
    // 0x20e768: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x20e768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x20e76c: 0xa06210a8  sb          $v0, 0x10A8($v1)
    ctx->pc = 0x20e76cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 2));
    // 0x20e770: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x20e770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20e774: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x20e774u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x20e778: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x20e778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x20e77c: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x20e77cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_20e780:
    // 0x20e780: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x20e780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20e784: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x20e784u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x20e788: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x20e788u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x20e78c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x20e78cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x20e790: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x20e790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x20e794: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x20E794u;
    {
        const bool branch_taken_0x20e794 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x20e794) {
            ctx->pc = 0x20E7D8u;
            goto label_20e7d8;
        }
    }
    ctx->pc = 0x20E79Cu;
    // 0x20e79c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x20e79cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20e7a0: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x20e7a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x20e7a4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x20e7a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x20e7a8: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x20e7a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x20e7ac: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x20E7ACu;
    {
        const bool branch_taken_0x20e7ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20e7ac) {
            ctx->pc = 0x20E7D0u;
            goto label_20e7d0;
        }
    }
    ctx->pc = 0x20E7B4u;
    // 0x20e7b4: 0xc067694  jal         func_19DA50
    ctx->pc = 0x20E7B4u;
    SET_GPR_U32(ctx, 31, 0x20E7BCu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x20E7B4u, 0x20E7BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E7BCu;
label_20e7bc:
    // 0x20e7bc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x20e7bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x20e7c0: 0x3045001f  andi        $a1, $v0, 0x1F
    ctx->pc = 0x20e7c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x20e7c4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x20e7c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20e7c8: 0xc0baaf4  jal         func_2EABD0
    ctx->pc = 0x20E7C8u;
    SET_GPR_U32(ctx, 31, 0x20E7D0u);
    ctx->pc = 0x2EABD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EABD0u, 0x20E7C8u, 0x20E7D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E7D0u;
label_20e7d0:
    // 0x20e7d0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x20e7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20e7d4: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x20e7d4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
label_20e7d8:
    // 0x20e7d8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x20e7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20e7dc: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x20e7dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x20e7e0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x20e7e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x20e7e4: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x20e7e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x20e7e8: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x20E7E8u;
    {
        const bool branch_taken_0x20e7e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20e7e8) {
            ctx->pc = 0x20E828u;
            goto label_20e828;
        }
    }
    ctx->pc = 0x20E7F0u;
    // 0x20e7f0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x20e7f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x20e7f4: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x20e7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x20e7f8: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x20e7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x20e7fc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x20e7fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x20e800: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20E800u;
    {
        const bool branch_taken_0x20e800 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20e800) {
            ctx->pc = 0x20E818u;
            goto label_20e818;
        }
    }
    ctx->pc = 0x20E808u;
    // 0x20e808: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x20e808u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20e80c: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x20e80cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x20e810: 0xc0bac10  jal         func_2EB040
    ctx->pc = 0x20E810u;
    SET_GPR_U32(ctx, 31, 0x20E818u);
    ctx->pc = 0x2EB040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EB040u, 0x20E810u, 0x20E818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E818u;
label_20e818:
    // 0x20e818: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x20e818u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20e81c: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x20e81cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x20e820: 0xc0baff8  jal         func_2EBFE0
    ctx->pc = 0x20E820u;
    SET_GPR_U32(ctx, 31, 0x20E828u);
    ctx->pc = 0x2EBFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EBFE0u, 0x20E820u, 0x20E828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E828u;
label_20e828:
    // 0x20e828: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x20e828u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20e82c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x20e82cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20e830: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x20E830u;
    SET_GPR_U32(ctx, 31, 0x20E838u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x20E830u, 0x20E838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E838u;
label_20e838:
    // 0x20e838: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x20e838u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20e83c: 0xc05cd10  jal         func_173440
    ctx->pc = 0x20E83Cu;
    SET_GPR_U32(ctx, 31, 0x20E844u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x20E83Cu, 0x20E844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E844u;
label_20e844:
    // 0x20e844: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x20e844u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20e848: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x20e848u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x20e84c: 0xc080f60  jal         func_203D80
    ctx->pc = 0x20E84Cu;
    SET_GPR_U32(ctx, 31, 0x20E854u);
    ctx->pc = 0x203D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203D80u, 0x20E84Cu, 0x20E854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E854u;
label_20e854:
    // 0x20e854: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x20e854u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20e858: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x20E858u;
    SET_GPR_U32(ctx, 31, 0x20E860u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x20E858u, 0x20E860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E860u;
label_20e860:
    // 0x20e860: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x20e860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20e864: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x20e864u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x20e868: 0x10600074  beqz        $v1, . + 4 + (0x74 << 2)
    ctx->pc = 0x20E868u;
    {
        const bool branch_taken_0x20e868 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20e868) {
            ctx->pc = 0x20EA3Cu;
            goto label_20ea3c;
        }
    }
    ctx->pc = 0x20E870u;
    // 0x20e870: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x20e870u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x20e874: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x20e874u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20e878: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x20e878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20e87c: 0x24631350  addiu       $v1, $v1, 0x1350
    ctx->pc = 0x20e87cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4944));
    // 0x20e880: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x20e880u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x20e884: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x20e884u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20e888: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x20e888u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x20e88c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x20e88cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x20e890: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x20e890u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x20e894: 0x10000069  b           . + 4 + (0x69 << 2)
    ctx->pc = 0x20E894u;
    {
        const bool branch_taken_0x20e894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20e894) {
            ctx->pc = 0x20EA3Cu;
            goto label_20ea3c;
        }
    }
    ctx->pc = 0x20E89Cu;
label_20e89c:
    // 0x20e89c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x20e89cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20e8a0: 0x24631350  addiu       $v1, $v1, 0x1350
    ctx->pc = 0x20e8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4944));
    // 0x20e8a4: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x20e8a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20e8a8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20e8a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20e8ac: 0x0  nop
    ctx->pc = 0x20e8acu;
    // NOP
    // 0x20e8b0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x20e8b0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20e8b4: 0x0  nop
    ctx->pc = 0x20e8b4u;
    // NOP
    // 0x20e8b8: 0x4501000c  bc1t        . + 4 + (0xC << 2)
    ctx->pc = 0x20E8B8u;
    {
        const bool branch_taken_0x20e8b8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x20e8b8) {
            ctx->pc = 0x20E8ECu;
            goto label_20e8ec;
        }
    }
    ctx->pc = 0x20E8C0u;
    // 0x20e8c0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x20e8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20e8c4: 0x24641350  addiu       $a0, $v1, 0x1350
    ctx->pc = 0x20e8c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4944));
    // 0x20e8c8: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x20e8c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20e8cc: 0x3c033ba3  lui         $v1, 0x3BA3
    ctx->pc = 0x20e8ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15267 << 16));
    // 0x20e8d0: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x20e8d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x20e8d4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x20e8d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20e8d8: 0x0  nop
    ctx->pc = 0x20e8d8u;
    // NOP
    // 0x20e8dc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x20e8dcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x20e8e0: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x20e8e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x20e8e4: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x20E8E4u;
    {
        const bool branch_taken_0x20e8e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20e8e4) {
            ctx->pc = 0x20EA3Cu;
            goto label_20ea3c;
        }
    }
    ctx->pc = 0x20E8ECu;
label_20e8ec:
    // 0x20e8ec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20e8ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20e8f0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x20e8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20e8f4: 0x24631350  addiu       $v1, $v1, 0x1350
    ctx->pc = 0x20e8f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4944));
    // 0x20e8f8: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x20e8f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x20e8fc: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x20e8fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20e900: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x20e900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20e904: 0xa4640096  sh          $a0, 0x96($v1)
    ctx->pc = 0x20e904u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 150), (uint16_t)GPR_U32(ctx, 4));
    // 0x20e908: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20e908u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20e90c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x20e90cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20e910: 0xe4600090  swc1        $f0, 0x90($v1)
    ctx->pc = 0x20e910u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 144), bits); }
    // 0x20e914: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x20e914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20e918: 0xa4600094  sh          $zero, 0x94($v1)
    ctx->pc = 0x20e918u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 148), (uint16_t)GPR_U32(ctx, 0));
    // 0x20e91c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x20e91cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20e920: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x20e920u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x20e924: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x20e924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x20e928: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x20e928u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x20e92c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x20e92cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20e930: 0xa4601278  sh          $zero, 0x1278($v1)
    ctx->pc = 0x20e930u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x20e934: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x20E934u;
    {
        const bool branch_taken_0x20e934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20e934) {
            ctx->pc = 0x20EA3Cu;
            goto label_20ea3c;
        }
    }
    ctx->pc = 0x20E93Cu;
label_20e93c:
    // 0x20e93c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x20e93cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20e940: 0x94630094  lhu         $v1, 0x94($v1)
    ctx->pc = 0x20e940u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 148)));
    // 0x20e944: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x20e944u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x20e948: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x20e948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x20e94c: 0x14830014  bne         $a0, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x20E94Cu;
    {
        const bool branch_taken_0x20e94c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x20e94c) {
            ctx->pc = 0x20E9A0u;
            goto label_20e9a0;
        }
    }
    ctx->pc = 0x20E954u;
    // 0x20e954: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x20e954u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20e958: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x20e958u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x20e95c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x20e95cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x20e960: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x20e960u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x20e964: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x20e964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20e968: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x20e968u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x20e96c: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x20e96cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x20e970: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x20e970u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x20e974: 0x286100b5  slti        $at, $v1, 0xB5
    ctx->pc = 0x20e974u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)181) ? 1 : 0);
    // 0x20e978: 0x14200009  bnez        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x20E978u;
    {
        const bool branch_taken_0x20e978 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x20e978) {
            ctx->pc = 0x20E9A0u;
            goto label_20e9a0;
        }
    }
    ctx->pc = 0x20E980u;
    // 0x20e980: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x20e980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x20e984: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x20e984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20e988: 0xa4640094  sh          $a0, 0x94($v1)
    ctx->pc = 0x20e988u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 148), (uint16_t)GPR_U32(ctx, 4));
    // 0x20e98c: 0x3c033e19  lui         $v1, 0x3E19
    ctx->pc = 0x20e98cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15897 << 16));
    // 0x20e990: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x20e990u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x20e994: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x20e994u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20e998: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x20e998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20e99c: 0xe4600090  swc1        $f0, 0x90($v1)
    ctx->pc = 0x20e99cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 144), bits); }
label_20e9a0:
    // 0x20e9a0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x20e9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20e9a4: 0x94630094  lhu         $v1, 0x94($v1)
    ctx->pc = 0x20e9a4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 148)));
    // 0x20e9a8: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x20e9a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x20e9ac: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x20e9acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x20e9b0: 0x1483000f  bne         $a0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x20E9B0u;
    {
        const bool branch_taken_0x20e9b0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x20e9b0) {
            ctx->pc = 0x20E9F0u;
            goto label_20e9f0;
        }
    }
    ctx->pc = 0x20E9B8u;
    // 0x20e9b8: 0x3c033fc0  lui         $v1, 0x3FC0
    ctx->pc = 0x20e9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16320 << 16));
    // 0x20e9bc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x20e9bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20e9c0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x20e9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20e9c4: 0x24631350  addiu       $v1, $v1, 0x1350
    ctx->pc = 0x20e9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4944));
    // 0x20e9c8: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x20e9c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x20e9cc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x20e9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20e9d0: 0xa4600096  sh          $zero, 0x96($v1)
    ctx->pc = 0x20e9d0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 150), (uint16_t)GPR_U32(ctx, 0));
    // 0x20e9d4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x20e9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20e9d8: 0xa4600094  sh          $zero, 0x94($v1)
    ctx->pc = 0x20e9d8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 148), (uint16_t)GPR_U32(ctx, 0));
    // 0x20e9dc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20e9dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20e9e0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x20e9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20e9e4: 0xe4600090  swc1        $f0, 0x90($v1)
    ctx->pc = 0x20e9e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 144), bits); }
    // 0x20e9e8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x20e9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20e9ec: 0xa4601278  sh          $zero, 0x1278($v1)
    ctx->pc = 0x20e9ecu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 0));
label_20e9f0:
    // 0x20e9f0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x20e9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20e9f4: 0x84630096  lh          $v1, 0x96($v1)
    ctx->pc = 0x20e9f4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 150)));
    // 0x20e9f8: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x20E9F8u;
    {
        const bool branch_taken_0x20e9f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x20e9f8) {
            ctx->pc = 0x20EA3Cu;
            goto label_20ea3c;
        }
    }
    ctx->pc = 0x20EA00u;
    // 0x20ea00: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x20ea00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20ea04: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x20ea04u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x20ea08: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x20ea08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x20ea0c: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x20ea0cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x20ea10: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x20ea10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20ea14: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x20ea14u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x20ea18: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x20ea18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x20ea1c: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x20ea1cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x20ea20: 0x2403005a  addiu       $v1, $zero, 0x5A
    ctx->pc = 0x20ea20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x20ea24: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x20EA24u;
    {
        const bool branch_taken_0x20ea24 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x20ea24) {
            ctx->pc = 0x20EA3Cu;
            goto label_20ea3c;
        }
    }
    ctx->pc = 0x20EA2Cu;
    // 0x20ea2c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x20ea2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20ea30: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x20ea30u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x20ea34: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x20ea34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x20ea38: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x20ea38u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_20ea3c:
    // 0x20ea3c: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x20ea3cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20ea40: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x20ea40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x20ea44: 0x3e00008  jr          $ra
    ctx->pc = 0x20EA44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20EA44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20EA4Cu;
}
