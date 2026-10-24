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

// Function: Em09_R1_mv03
// Address: 0x345630 - 0x3458ec
void Em09_R1_mv03_0x345630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em09_R1_mv03_0x345630");
#endif

    switch (ctx->pc) {
        case 0x3456d4u: goto label_3456d4;
        case 0x345708u: goto label_345708;
        case 0x345734u: goto label_345734;
        case 0x345810u: goto label_345810;
        case 0x34582cu: goto label_34582c;
        case 0x345844u: goto label_345844;
        case 0x345850u: goto label_345850;
        case 0x345860u: goto label_345860;
        case 0x34586cu: goto label_34586c;
        default: break;
    }

    ctx->pc = 0x345630u;

    // 0x345630: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x345630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x345634: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x345634u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x345638: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x345638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x34563c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x34563cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x345640: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x345640u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
    // 0x345644: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x345644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x345648: 0x8c7102d0  lw          $s1, 0x2D0($v1)
    ctx->pc = 0x345648u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x34564c: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x34564cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x345650: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x345650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x345654: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x345654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x345658: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x345658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x34565c: 0x24630014  addiu       $v1, $v1, 0x14
    ctx->pc = 0x34565cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x345660: 0xac830020  sw          $v1, 0x20($a0)
    ctx->pc = 0x345660u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 3));
    // 0x345664: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x345664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x345668: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x345668u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x34566c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x34566cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x345670: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x345670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x345674: 0x1083005b  beq         $a0, $v1, . + 4 + (0x5B << 2)
    ctx->pc = 0x345674u;
    {
        const bool branch_taken_0x345674 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x345674) {
            ctx->pc = 0x3457E4u;
            goto label_3457e4;
        }
    }
    ctx->pc = 0x34567Cu;
    // 0x34567c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x34567Cu;
    {
        const bool branch_taken_0x34567c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x34567c) {
            ctx->pc = 0x34568Cu;
            goto label_34568c;
        }
    }
    ctx->pc = 0x345684u;
    // 0x345684: 0x10000093  b           . + 4 + (0x93 << 2)
    ctx->pc = 0x345684u;
    {
        const bool branch_taken_0x345684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x345684) {
            ctx->pc = 0x3458D4u;
            goto label_3458d4;
        }
    }
    ctx->pc = 0x34568Cu;
label_34568c:
    // 0x34568c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34568cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x345690: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x345690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x345694: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x345694u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x345698: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x345698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x34569c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34569cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x3456a0: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x3456a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x3456a4: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x3456a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x3456a8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3456A8u;
    {
        const bool branch_taken_0x3456a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3456a8) {
            ctx->pc = 0x3456B4u;
            goto label_3456b4;
        }
    }
    ctx->pc = 0x3456B0u;
    // 0x3456b0: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x3456b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3456b4:
    // 0x3456b4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x3456b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3456b8: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x3456b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x3456bc: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x3456bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x3456c0: 0x2402feff  addiu       $v0, $zero, -0x101
    ctx->pc = 0x3456c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967039));
    // 0x3456c4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3456c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3456c8: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x3456c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x3456cc: 0xc067694  jal         func_19DA50
    ctx->pc = 0x3456CCu;
    SET_GPR_U32(ctx, 31, 0x3456D4u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x3456CCu, 0x3456D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3456D4u;
label_3456d4:
    // 0x3456d4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3456d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3456d8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3456d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3456dc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x3456DCu;
    {
        const bool branch_taken_0x3456dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3456dc) {
            ctx->pc = 0x345710u;
            goto label_345710;
        }
    }
    ctx->pc = 0x3456E4u;
    // 0x3456e4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3456e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3456e8: 0x26020014  addiu       $v0, $s0, 0x14
    ctx->pc = 0x3456e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x3456ec: 0x34460f00  ori         $a2, $v0, 0xF00
    ctx->pc = 0x3456ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3840);
    // 0x3456f0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x3456f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3456f4: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x3456f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x3456f8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3456f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3456fc: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x3456fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x345700: 0xc0965d0  jal         func_259740
    ctx->pc = 0x345700u;
    SET_GPR_U32(ctx, 31, 0x345708u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x345700u, 0x345708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345708u;
label_345708:
    // 0x345708: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x345708u;
    {
        const bool branch_taken_0x345708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x345708) {
            ctx->pc = 0x345734u;
            goto label_345734;
        }
    }
    ctx->pc = 0x345710u;
label_345710:
    // 0x345710: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x345710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x345714: 0x26020019  addiu       $v0, $s0, 0x19
    ctx->pc = 0x345714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 25));
    // 0x345718: 0x34460f00  ori         $a2, $v0, 0xF00
    ctx->pc = 0x345718u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3840);
    // 0x34571c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x34571cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x345720: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x345720u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x345724: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x345724u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x345728: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x345728u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x34572c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x34572Cu;
    SET_GPR_U32(ctx, 31, 0x345734u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x34572Cu, 0x345734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345734u;
label_345734:
    // 0x345734: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x345734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x345738: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x345738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34573c: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x34573cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x345740: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x345740u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x345744: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x345744u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x345748: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x345748u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x34574c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x34574cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x345750: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x345750u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x345754: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x345754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x345758: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x345758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x34575c: 0x24510960  addiu       $s1, $v0, 0x960
    ctx->pc = 0x34575cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 2400));
    // 0x345760: 0x26230150  addiu       $v1, $s1, 0x150
    ctx->pc = 0x345760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    // 0x345764: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x345764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x345768: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x345768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x34576c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x34576cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x345770: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x345770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x345774: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x345774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x345778: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x345778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x34577c: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x34577cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x345780: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x345780u;
    {
        const bool branch_taken_0x345780 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x345780) {
            ctx->pc = 0x3457BCu;
            goto label_3457bc;
        }
    }
    ctx->pc = 0x345788u;
    // 0x345788: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x345788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x34578c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34578cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x345790: 0xa040006e  sb          $zero, 0x6E($v0)
    ctx->pc = 0x345790u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 110), (uint8_t)GPR_U32(ctx, 0));
    // 0x345794: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x345794u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x345798: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x345798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x34579c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34579cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x3457a0: 0xa043006f  sb          $v1, 0x6F($v0)
    ctx->pc = 0x3457a0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 111), (uint8_t)GPR_U32(ctx, 3));
    // 0x3457a4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3457a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3457a8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x3457a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3457ac: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x3457acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x3457b0: 0xa0430072  sb          $v1, 0x72($v0)
    ctx->pc = 0x3457b0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 114), (uint8_t)GPR_U32(ctx, 3));
    // 0x3457b4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3457B4u;
    {
        const bool branch_taken_0x3457b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3457b4) {
            ctx->pc = 0x3457E4u;
            goto label_3457e4;
        }
    }
    ctx->pc = 0x3457BCu;
label_3457bc:
    // 0x3457bc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x3457bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3457c0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x3457c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x3457c4: 0xa040006e  sb          $zero, 0x6E($v0)
    ctx->pc = 0x3457c4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 110), (uint8_t)GPR_U32(ctx, 0));
    // 0x3457c8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x3457c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3457cc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x3457ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x3457d0: 0xa040006f  sb          $zero, 0x6F($v0)
    ctx->pc = 0x3457d0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 111), (uint8_t)GPR_U32(ctx, 0));
    // 0x3457d4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3457d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3457d8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x3457d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3457dc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x3457dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x3457e0: 0xa0430072  sb          $v1, 0x72($v0)
    ctx->pc = 0x3457e0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 114), (uint8_t)GPR_U32(ctx, 3));
label_3457e4:
    // 0x3457e4: 0x3c023dd6  lui         $v0, 0x3DD6
    ctx->pc = 0x3457e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15830 << 16));
    // 0x3457e8: 0x34427750  ori         $v0, $v0, 0x7750
    ctx->pc = 0x3457e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30544);
    // 0x3457ec: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x3457ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x3457f0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3457f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3457f4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x3457f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3457f8: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x3457f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x3457fc: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x3457fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x345800: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x345800u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x345804: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x345804u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x345808: 0xc05c848  jal         func_172120
    ctx->pc = 0x345808u;
    SET_GPR_U32(ctx, 31, 0x345810u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x345808u, 0x345810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345810u;
label_345810:
    // 0x345810: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x345810u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x345814: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x345814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x345818: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x345818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34581c: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x34581cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x345820: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x345820u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x345824: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x345824u;
    SET_GPR_U32(ctx, 31, 0x34582Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x345824u, 0x34582Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34582Cu;
label_34582c:
    // 0x34582c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x34582cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x345830: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x345830u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x345834: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x345834u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x345838: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x345838u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x34583c: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x34583Cu;
    SET_GPR_U32(ctx, 31, 0x345844u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x34583Cu, 0x345844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345844u;
label_345844:
    // 0x345844: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x345844u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x345848: 0xc05cd10  jal         func_173440
    ctx->pc = 0x345848u;
    SET_GPR_U32(ctx, 31, 0x345850u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x345848u, 0x345850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345850u;
label_345850:
    // 0x345850: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x345850u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x345854: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x345854u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x345858: 0xc0d0704  jal         func_341C10
    ctx->pc = 0x345858u;
    SET_GPR_U32(ctx, 31, 0x345860u);
    ctx->pc = 0x341C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341C10u, 0x345858u, 0x345860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345860u;
label_345860:
    // 0x345860: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x345860u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x345864: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x345864u;
    SET_GPR_U32(ctx, 31, 0x34586Cu);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x345864u, 0x34586Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34586Cu;
label_34586c:
    // 0x34586c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x34586cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x345870: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x345870u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x345874: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x345874u;
    {
        const bool branch_taken_0x345874 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x345874) {
            ctx->pc = 0x3458D4u;
            goto label_3458d4;
        }
    }
    ctx->pc = 0x34587Cu;
    // 0x34587c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x34587cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x345880: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x345880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x345884: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x345884u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x345888: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x345888u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34588c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x34588cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x345890: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x345890u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x345894: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x345894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x345898: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x345898u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x34589c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x34589cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3458a0: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x3458a0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3458a4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3458a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3458a8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x3458a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x3458ac: 0x24040078  addiu       $a0, $zero, 0x78
    ctx->pc = 0x3458acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x3458b0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3458b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3458b4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x3458b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x3458b8: 0xa4640068  sh          $a0, 0x68($v1)
    ctx->pc = 0x3458b8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 104), (uint16_t)GPR_U32(ctx, 4));
    // 0x3458bc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3458bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3458c0: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x3458c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x3458c4: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x3458c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x3458c8: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x3458c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x3458cc: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3458ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x3458d0: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x3458d0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
label_3458d4:
    // 0x3458d4: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x3458d4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3458d8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3458d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3458dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3458dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3458e0: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x3458e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3458e4: 0x3e00008  jr          $ra
    ctx->pc = 0x3458E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3458E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3458ECu;
}
