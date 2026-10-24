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

// Function: Em19_lightning_move
// Address: 0x2e4520 - 0x2e471c
void Em19_lightning_move_0x2e4520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em19_lightning_move_0x2e4520");
#endif

    switch (ctx->pc) {
        case 0x2e454cu: goto label_2e454c;
        case 0x2e4574u: goto label_2e4574;
        case 0x2e4594u: goto label_2e4594;
        case 0x2e4628u: goto label_2e4628;
        case 0x2e4650u: goto label_2e4650;
        case 0x2e4670u: goto label_2e4670;
        case 0x2e4704u: goto label_2e4704;
        default: break;
    }

    ctx->pc = 0x2e4520u;

    // 0x2e4520: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2e4520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2e4524: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x2e4524u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x2e4528: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e4528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2e452c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e452cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e4530: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x2e4530u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x2e4534: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2e4534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e4538: 0x24511330  addiu       $s1, $v0, 0x1330
    ctx->pc = 0x2e4538u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2e453c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2e453cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e4540: 0x240500c8  addiu       $a1, $zero, 0xC8
    ctx->pc = 0x2e4540u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x2e4544: 0xc0c94cc  jal         func_325330
    ctx->pc = 0x2E4544u;
    SET_GPR_U32(ctx, 31, 0x2E454Cu);
    ctx->pc = 0x325330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x325330u, 0x2E4544u, 0x2E454Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E454Cu;
label_2e454c:
    // 0x2e454c: 0x86230070  lh          $v1, 0x70($s1)
    ctx->pc = 0x2e454cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x2e4550: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E4550u;
    {
        const bool branch_taken_0x2e4550 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e4550) {
            ctx->pc = 0x2E456Cu;
            goto label_2e456c;
        }
    }
    ctx->pc = 0x2E4558u;
    // 0x2e4558: 0x86230070  lh          $v1, 0x70($s1)
    ctx->pc = 0x2e4558u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x2e455c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2e455cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2e4560: 0xa6230070  sh          $v1, 0x70($s1)
    ctx->pc = 0x2e4560u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 112), (uint16_t)GPR_U32(ctx, 3));
    // 0x2e4564: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x2E4564u;
    {
        const bool branch_taken_0x2e4564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e4564) {
            ctx->pc = 0x2E4628u;
            goto label_2e4628;
        }
    }
    ctx->pc = 0x2E456Cu;
label_2e456c:
    // 0x2e456c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2E456Cu;
    SET_GPR_U32(ctx, 31, 0x2E4574u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2E456Cu, 0x2E4574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4574u;
label_2e4574:
    // 0x2e4574: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2e4574u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e4578: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x2e4578u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x2e457c: 0x2442001e  addiu       $v0, $v0, 0x1E
    ctx->pc = 0x2e457cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30));
    // 0x2e4580: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2e4580u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2e4584: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2e4584u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2e4588: 0xa6220070  sh          $v0, 0x70($s1)
    ctx->pc = 0x2e4588u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 112), (uint16_t)GPR_U32(ctx, 2));
    // 0x2e458c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2E458Cu;
    SET_GPR_U32(ctx, 31, 0x2E4594u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2E458Cu, 0x2E4594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4594u;
label_2e4594:
    // 0x2e4594: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2e4594u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e4598: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x2e4598u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x2e459c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2e459cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e45a0: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x2e45a0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e45a4: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x2e45a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x2e45a8: 0x28420006  slti        $v0, $v0, 0x6
    ctx->pc = 0x2e45a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x2e45ac: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E45ACu;
    {
        const bool branch_taken_0x2e45ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e45ac) {
            ctx->pc = 0x2E45BCu;
            goto label_2e45bc;
        }
    }
    ctx->pc = 0x2E45B4u;
    // 0x2e45b4: 0x2602fffa  addiu       $v0, $s0, -0x6
    ctx->pc = 0x2e45b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967290));
    // 0x2e45b8: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x2e45b8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2e45bc:
    // 0x2e45bc: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x2e45bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x2e45c0: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2e45c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2e45c4: 0x24428d18  addiu       $v0, $v0, -0x72E8
    ctx->pc = 0x2e45c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937880));
    // 0x2e45c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e45c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e45cc: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x2e45ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e45d0: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x2e45d0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e45d4: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x2e45d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x2e45d8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2e45d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e45dc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2e45dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2e45e0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2e45e0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2e45e4: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x2e45e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
    // 0x2e45e8: 0x3444000b  ori         $a0, $v0, 0xB
    ctx->pc = 0x2e45e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)11);
    // 0x2e45ec: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2e45ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e45f0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2e45f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2e45f4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2e45f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2e45f8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2e45f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2e45fc: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2e45fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2e4600: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2e4600u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2e4604: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2e4604u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2e4608: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2e4608u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2e460c: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x2e460cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x2e4610: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2e4610u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2e4614: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x2e4614u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2e4618: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2e4618u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2e461c: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x2e461cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2e4620: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x2E4620u;
    SET_GPR_U32(ctx, 31, 0x2E4628u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x2E4620u, 0x2E4628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4628u;
label_2e4628:
    // 0x2e4628: 0x8623006e  lh          $v1, 0x6E($s1)
    ctx->pc = 0x2e4628u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 110)));
    // 0x2e462c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E462Cu;
    {
        const bool branch_taken_0x2e462c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e462c) {
            ctx->pc = 0x2E4648u;
            goto label_2e4648;
        }
    }
    ctx->pc = 0x2E4634u;
    // 0x2e4634: 0x8623006e  lh          $v1, 0x6E($s1)
    ctx->pc = 0x2e4634u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 110)));
    // 0x2e4638: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2e4638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2e463c: 0xa623006e  sh          $v1, 0x6E($s1)
    ctx->pc = 0x2e463cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 110), (uint16_t)GPR_U32(ctx, 3));
    // 0x2e4640: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x2E4640u;
    {
        const bool branch_taken_0x2e4640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e4640) {
            ctx->pc = 0x2E4704u;
            goto label_2e4704;
        }
    }
    ctx->pc = 0x2E4648u;
label_2e4648:
    // 0x2e4648: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2E4648u;
    SET_GPR_U32(ctx, 31, 0x2E4650u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2E4648u, 0x2E4650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4650u;
label_2e4650:
    // 0x2e4650: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2e4650u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e4654: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x2e4654u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x2e4658: 0x2442001e  addiu       $v0, $v0, 0x1E
    ctx->pc = 0x2e4658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30));
    // 0x2e465c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2e465cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2e4660: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2e4660u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2e4664: 0xa622006e  sh          $v0, 0x6E($s1)
    ctx->pc = 0x2e4664u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 110), (uint16_t)GPR_U32(ctx, 2));
    // 0x2e4668: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2E4668u;
    SET_GPR_U32(ctx, 31, 0x2E4670u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2E4668u, 0x2E4670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4670u;
label_2e4670:
    // 0x2e4670: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2e4670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e4674: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x2e4674u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x2e4678: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2e4678u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e467c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x2e467cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e4680: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x2e4680u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x2e4684: 0x28420006  slti        $v0, $v0, 0x6
    ctx->pc = 0x2e4684u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x2e4688: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E4688u;
    {
        const bool branch_taken_0x2e4688 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e4688) {
            ctx->pc = 0x2E4698u;
            goto label_2e4698;
        }
    }
    ctx->pc = 0x2E4690u;
    // 0x2e4690: 0x2602fffa  addiu       $v0, $s0, -0x6
    ctx->pc = 0x2e4690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967290));
    // 0x2e4694: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x2e4694u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2e4698:
    // 0x2e4698: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x2e4698u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x2e469c: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2e469cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2e46a0: 0x24428d20  addiu       $v0, $v0, -0x72E0
    ctx->pc = 0x2e46a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937888));
    // 0x2e46a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e46a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e46a8: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x2e46a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e46ac: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x2e46acu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e46b0: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x2e46b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x2e46b4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2e46b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e46b8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2e46b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2e46bc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2e46bcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2e46c0: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x2e46c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
    // 0x2e46c4: 0x3444000b  ori         $a0, $v0, 0xB
    ctx->pc = 0x2e46c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)11);
    // 0x2e46c8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2e46c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e46cc: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2e46ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2e46d0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2e46d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2e46d4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2e46d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2e46d8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2e46d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2e46dc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2e46dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2e46e0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2e46e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2e46e4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2e46e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2e46e8: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x2e46e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x2e46ec: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2e46ecu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2e46f0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x2e46f0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2e46f4: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2e46f4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2e46f8: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x2e46f8u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2e46fc: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x2E46FCu;
    SET_GPR_U32(ctx, 31, 0x2E4704u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x2E46FCu, 0x2E4704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4704u;
label_2e4704:
    // 0x2e4704: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x2e4704u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e4708: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e4708u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e470c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e470cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e4710: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2e4710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2e4714: 0x3e00008  jr          $ra
    ctx->pc = 0x2E4714u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E4714u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E471Cu;
}
