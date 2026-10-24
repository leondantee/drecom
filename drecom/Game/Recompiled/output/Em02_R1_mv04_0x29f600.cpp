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

// Function: Em02_R1_mv04
// Address: 0x29f600 - 0x29f8bc
void Em02_R1_mv04_0x29f600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em02_R1_mv04_0x29f600");
#endif

    switch (ctx->pc) {
        case 0x29f668u: goto label_29f668;
        case 0x29f69cu: goto label_29f69c;
        case 0x29f6a4u: goto label_29f6a4;
        case 0x29f6d0u: goto label_29f6d0;
        case 0x29f6dcu: goto label_29f6dc;
        case 0x29f6ecu: goto label_29f6ec;
        case 0x29f6f8u: goto label_29f6f8;
        case 0x29f704u: goto label_29f704;
        case 0x29f71cu: goto label_29f71c;
        case 0x29f750u: goto label_29f750;
        case 0x29f7a0u: goto label_29f7a0;
        default: break;
    }

    ctx->pc = 0x29f600u;

    // 0x29f600: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x29f600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x29f604: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x29f604u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x29f608: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29f608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x29f60c: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x29f60cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x29f610: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x29f610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29f614: 0x8c7002d0  lw          $s0, 0x2D0($v1)
    ctx->pc = 0x29f614u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x29f618: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x29f618u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x29f61c: 0x24636b68  addiu       $v1, $v1, 0x6B68
    ctx->pc = 0x29f61cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27496));
    // 0x29f620: 0x27a40028  addiu       $a0, $sp, 0x28
    ctx->pc = 0x29f620u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x29f624: 0xdc630000  ld          $v1, 0x0($v1)
    ctx->pc = 0x29f624u;
    SET_GPR_U64(ctx, 3, FAST_READ64(0x396B68u));
    // 0x29f628: 0xfc830000  sd          $v1, 0x0($a0)
    ctx->pc = 0x29f628u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
    // 0x29f62c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x29f62cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29f630: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x29f630u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x29f634: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x29f634u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x29f638: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x29f638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29f63c: 0x10830020  beq         $a0, $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x29F63Cu;
    {
        const bool branch_taken_0x29f63c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x29f63c) {
            ctx->pc = 0x29F6C0u;
            goto label_29f6c0;
        }
    }
    ctx->pc = 0x29F644u;
    // 0x29f644: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x29F644u;
    {
        const bool branch_taken_0x29f644 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x29f644) {
            ctx->pc = 0x29F654u;
            goto label_29f654;
        }
    }
    ctx->pc = 0x29F64Cu;
    // 0x29f64c: 0x10000096  b           . + 4 + (0x96 << 2)
    ctx->pc = 0x29F64Cu;
    {
        const bool branch_taken_0x29f64c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29f64c) {
            ctx->pc = 0x29F8A8u;
            goto label_29f8a8;
        }
    }
    ctx->pc = 0x29F654u;
label_29f654:
    // 0x29f654: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x29f654u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29f658: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x29f658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29f65c: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x29f65cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x29f660: 0xc067694  jal         func_19DA50
    ctx->pc = 0x29F660u;
    SET_GPR_U32(ctx, 31, 0x29F668u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x29F660u, 0x29F668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F668u;
label_29f668:
    // 0x29f668: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29f668u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29f66c: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x29f66cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x29f670: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x29f670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x29f674: 0x90420028  lbu         $v0, 0x28($v0)
    ctx->pc = 0x29f674u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x29f678: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29f678u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29f67c: 0x34460800  ori         $a2, $v0, 0x800
    ctx->pc = 0x29f67cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
    // 0x29f680: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x29f680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29f684: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x29f684u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29f688: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x29f688u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x29f68c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x29f68cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29f690: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x29f690u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x29f694: 0xc0965d0  jal         func_259740
    ctx->pc = 0x29F694u;
    SET_GPR_U32(ctx, 31, 0x29F69Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x29F694u, 0x29F69Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F69Cu;
label_29f69c:
    // 0x29f69c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x29F69Cu;
    SET_GPR_U32(ctx, 31, 0x29F6A4u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x29F69Cu, 0x29F6A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F6A4u;
label_29f6a4:
    // 0x29f6a4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29f6a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29f6a8: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x29f6a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x29f6ac: 0x2442001e  addiu       $v0, $v0, 0x1E
    ctx->pc = 0x29f6acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30));
    // 0x29f6b0: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x29f6b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x29f6b4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x29f6b4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x29f6b8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x29f6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29f6bc: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x29f6bcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
label_29f6c0:
    // 0x29f6c0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x29f6c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29f6c4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x29f6c4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x29f6c8: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x29F6C8u;
    SET_GPR_U32(ctx, 31, 0x29F6D0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x29F6C8u, 0x29F6D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F6D0u;
label_29f6d0:
    // 0x29f6d0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x29f6d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29f6d4: 0xc0b3778  jal         func_2CDDE0
    ctx->pc = 0x29F6D4u;
    SET_GPR_U32(ctx, 31, 0x29F6DCu);
    ctx->pc = 0x2CDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDDE0u, 0x29F6D4u, 0x29F6DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F6DCu;
label_29f6dc:
    // 0x29f6dc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x29f6dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29f6e0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x29f6e0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x29f6e4: 0xc0a748c  jal         func_29D230
    ctx->pc = 0x29F6E4u;
    SET_GPR_U32(ctx, 31, 0x29F6ECu);
    ctx->pc = 0x29D230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D230u, 0x29F6E4u, 0x29F6ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F6ECu;
label_29f6ec:
    // 0x29f6ec: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x29f6ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29f6f0: 0xc0b3764  jal         func_2CDD90
    ctx->pc = 0x29F6F0u;
    SET_GPR_U32(ctx, 31, 0x29F6F8u);
    ctx->pc = 0x2CDD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDD90u, 0x29F6F0u, 0x29F6F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F6F8u;
label_29f6f8:
    // 0x29f6f8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x29f6f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29f6fc: 0xc0aa354  jal         func_2A8D50
    ctx->pc = 0x29F6FCu;
    SET_GPR_U32(ctx, 31, 0x29F704u);
    ctx->pc = 0x2A8D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8D50u, 0x29F6FCu, 0x29F704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F704u;
label_29f704:
    // 0x29f704: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x29f704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29f708: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x29f708u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x29f70c: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x29F70Cu;
    {
        const bool branch_taken_0x29f70c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29f70c) {
            ctx->pc = 0x29F750u;
            goto label_29f750;
        }
    }
    ctx->pc = 0x29F714u;
    // 0x29f714: 0xc067694  jal         func_19DA50
    ctx->pc = 0x29F714u;
    SET_GPR_U32(ctx, 31, 0x29F71Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x29F714u, 0x29F71Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F71Cu;
label_29f71c:
    // 0x29f71c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29f71cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29f720: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x29f720u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x29f724: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x29f724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x29f728: 0x90420028  lbu         $v0, 0x28($v0)
    ctx->pc = 0x29f728u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x29f72c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29f72cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29f730: 0x34460400  ori         $a2, $v0, 0x400
    ctx->pc = 0x29f730u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    // 0x29f734: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x29f734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29f738: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x29f738u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29f73c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x29f73cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x29f740: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x29f740u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29f744: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x29f744u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x29f748: 0xc0965d0  jal         func_259740
    ctx->pc = 0x29F748u;
    SET_GPR_U32(ctx, 31, 0x29F750u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x29F748u, 0x29F750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F750u;
label_29f750:
    // 0x29f750: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x29f750u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29f754: 0x84a41278  lh          $a0, 0x1278($a1)
    ctx->pc = 0x29f754u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4728)));
    // 0x29f758: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x29f758u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x29f75c: 0xa4a31278  sh          $v1, 0x1278($a1)
    ctx->pc = 0x29f75cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x29f760: 0x14800051  bnez        $a0, . + 4 + (0x51 << 2)
    ctx->pc = 0x29F760u;
    {
        const bool branch_taken_0x29f760 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x29f760) {
            ctx->pc = 0x29F8A8u;
            goto label_29f8a8;
        }
    }
    ctx->pc = 0x29F768u;
    // 0x29f768: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x29f768u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29f76c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x29f76cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29f770: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x29f770u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x29f774: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x29f774u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29f778: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x29f778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29f77c: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x29f77cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x29f780: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x29f780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29f784: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x29f784u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x29f788: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x29f788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29f78c: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x29f78cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x29f790: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x29f790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29f794: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x29f794u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x29f798: 0xc067694  jal         func_19DA50
    ctx->pc = 0x29F798u;
    SET_GPR_U32(ctx, 31, 0x29F7A0u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x29F798u, 0x29F7A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F7A0u;
label_29f7a0:
    // 0x29f7a0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x29f7a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29f7a4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x29f7a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x29f7a8: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x29F7A8u;
    {
        const bool branch_taken_0x29f7a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29f7a8) {
            ctx->pc = 0x29F7E0u;
            goto label_29f7e0;
        }
    }
    ctx->pc = 0x29F7B0u;
    // 0x29f7b0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x29f7b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29f7b4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x29f7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29f7b8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x29f7b8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x29f7bc: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x29f7bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29f7c0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x29f7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29f7c4: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x29f7c4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x29f7c8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x29f7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29f7cc: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x29f7ccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x29f7d0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x29f7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29f7d4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x29f7d4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x29f7d8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x29f7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29f7dc: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x29f7dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_29f7e0:
    // 0x29f7e0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x29f7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29f7e4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x29f7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x29f7e8: 0x8c630014  lw          $v1, 0x14($v1)
    ctx->pc = 0x29f7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x29f7ec: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x29f7ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x29f7f0: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x29F7F0u;
    {
        const bool branch_taken_0x29f7f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29f7f0) {
            ctx->pc = 0x29F854u;
            goto label_29f854;
        }
    }
    ctx->pc = 0x29F7F8u;
    // 0x29f7f8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x29f7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29f7fc: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x29f7fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29f800: 0x3c03447a  lui         $v1, 0x447A
    ctx->pc = 0x29f800u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17530 << 16));
    // 0x29f804: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x29f804u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29f808: 0x0  nop
    ctx->pc = 0x29f808u;
    // NOP
    // 0x29f80c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x29f80cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29f810: 0x0  nop
    ctx->pc = 0x29f810u;
    // NOP
    // 0x29f814: 0x45000024  bc1f        . + 4 + (0x24 << 2)
    ctx->pc = 0x29F814u;
    {
        const bool branch_taken_0x29f814 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29f814) {
            ctx->pc = 0x29F8A8u;
            goto label_29f8a8;
        }
    }
    ctx->pc = 0x29F81Cu;
    // 0x29f81c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x29f81cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29f820: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x29f820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29f824: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x29f824u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x29f828: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x29f828u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x29f82c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x29f82cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29f830: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x29f830u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x29f834: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x29f834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29f838: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x29f838u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x29f83c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x29f83cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29f840: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x29f840u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x29f844: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x29f844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29f848: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x29f848u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x29f84c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x29F84Cu;
    {
        const bool branch_taken_0x29f84c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29f84c) {
            ctx->pc = 0x29F8A8u;
            goto label_29f8a8;
        }
    }
    ctx->pc = 0x29F854u;
label_29f854:
    // 0x29f854: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x29f854u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29f858: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x29f858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29f85c: 0x3c03457a  lui         $v1, 0x457A
    ctx->pc = 0x29f85cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17786 << 16));
    // 0x29f860: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x29f860u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29f864: 0x0  nop
    ctx->pc = 0x29f864u;
    // NOP
    // 0x29f868: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x29f868u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29f86c: 0x0  nop
    ctx->pc = 0x29f86cu;
    // NOP
    // 0x29f870: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x29F870u;
    {
        const bool branch_taken_0x29f870 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29f870) {
            ctx->pc = 0x29F8A8u;
            goto label_29f8a8;
        }
    }
    ctx->pc = 0x29F878u;
    // 0x29f878: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x29f878u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29f87c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x29f87cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29f880: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x29f880u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x29f884: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x29f884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x29f888: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x29f888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29f88c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x29f88cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x29f890: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x29f890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29f894: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x29f894u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x29f898: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x29f898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29f89c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x29f89cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x29f8a0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x29f8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29f8a4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x29f8a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_29f8a8:
    // 0x29f8a8: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x29f8a8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29f8ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29f8acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29f8b0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x29f8b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x29f8b4: 0x3e00008  jr          $ra
    ctx->pc = 0x29F8B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29F8B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29F8BCu;
}
