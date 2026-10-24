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

// Function: set_eff_em09_bomb_core
// Address: 0x357000 - 0x357314
void set_eff_em09_bomb_core_0x357000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("set_eff_em09_bomb_core_0x357000");
#endif

    switch (ctx->pc) {
        case 0x357028u: goto label_357028;
        case 0x35704cu: goto label_35704c;
        case 0x357058u: goto label_357058;
        case 0x3570a4u: goto label_3570a4;
        case 0x3570b0u: goto label_3570b0;
        case 0x3570f0u: goto label_3570f0;
        case 0x3570fcu: goto label_3570fc;
        case 0x357148u: goto label_357148;
        case 0x357154u: goto label_357154;
        case 0x35717cu: goto label_35717c;
        case 0x357188u: goto label_357188;
        case 0x3571d4u: goto label_3571d4;
        case 0x3571e0u: goto label_3571e0;
        case 0x357208u: goto label_357208;
        case 0x357214u: goto label_357214;
        case 0x357260u: goto label_357260;
        case 0x35726cu: goto label_35726c;
        case 0x357294u: goto label_357294;
        case 0x3572a0u: goto label_3572a0;
        case 0x3572ecu: goto label_3572ec;
        case 0x3572f8u: goto label_3572f8;
        default: break;
    }

    ctx->pc = 0x357000u;

    // 0x357000: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x357000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x357004: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x357004u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x357008: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x357008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x35700c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x35700cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x357010: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x357010u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x357014: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x357014u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x357018: 0xafa60048  sw          $a2, 0x48($sp)
    ctx->pc = 0x357018u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 6));
    // 0x35701c: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x35701cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x357020: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x357020u;
    {
        const bool branch_taken_0x357020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x357020) {
            ctx->pc = 0x3570C0u;
            goto label_3570c0;
        }
    }
    ctx->pc = 0x357028u;
label_357028:
    // 0x357028: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x357028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35702c: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x35702Cu;
    {
        const bool branch_taken_0x35702c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35702c) {
            ctx->pc = 0x357064u;
            goto label_357064;
        }
    }
    ctx->pc = 0x357034u;
    // 0x357034: 0x34048400  ori         $a0, $zero, 0x8400
    ctx->pc = 0x357034u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33792);
    // 0x357038: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x357038u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x35703c: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x35703cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x357040: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x357040u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x357044: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x357044u;
    SET_GPR_U32(ctx, 31, 0x35704Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x357044u, 0x35704Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35704Cu;
label_35704c:
    // 0x35704c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x35704cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x357050: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x357050u;
    SET_GPR_U32(ctx, 31, 0x357058u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x357050u, 0x357058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357058u;
label_357058:
    // 0x357058: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x357058u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x35705c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x35705Cu;
    {
        const bool branch_taken_0x35705c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35705c) {
            ctx->pc = 0x3570B8u;
            goto label_3570b8;
        }
    }
    ctx->pc = 0x357064u;
label_357064:
    // 0x357064: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x357064u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x357068: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x357068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x35706c: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x35706cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x357070: 0x8c820130  lw          $v0, 0x130($a0)
    ctx->pc = 0x357070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x357074: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x357074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x357078: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x357078u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x35707c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x35707cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x357080: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x357080u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x357084: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x357084u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x357088: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x357088u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x35708c: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x35708cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x357090: 0x34048400  ori         $a0, $zero, 0x8400
    ctx->pc = 0x357090u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33792);
    // 0x357094: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x357094u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x357098: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x357098u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35709c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x35709Cu;
    SET_GPR_U32(ctx, 31, 0x3570A4u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x35709Cu, 0x3570A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3570A4u;
label_3570a4:
    // 0x3570a4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x3570a4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3570a8: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x3570A8u;
    SET_GPR_U32(ctx, 31, 0x3570B0u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x3570A8u, 0x3570B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3570B0u;
label_3570b0:
    // 0x3570b0: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x3570b0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3570b4: 0x0  nop
    ctx->pc = 0x3570b4u;
    // NOP
label_3570b8:
    // 0x3570b8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3570b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3570bc: 0x0  nop
    ctx->pc = 0x3570bcu;
    // NOP
label_3570c0:
    // 0x3570c0: 0x2a220003  slti        $v0, $s1, 0x3
    ctx->pc = 0x3570c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3570c4: 0x1440ffd8  bnez        $v0, . + 4 + (-0x28 << 2)
    ctx->pc = 0x3570C4u;
    {
        const bool branch_taken_0x3570c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3570c4) {
            ctx->pc = 0x357028u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_357028;
        }
    }
    ctx->pc = 0x3570CCu;
    // 0x3570cc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3570ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3570d0: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x3570D0u;
    {
        const bool branch_taken_0x3570d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3570d0) {
            ctx->pc = 0x357108u;
            goto label_357108;
        }
    }
    ctx->pc = 0x3570D8u;
    // 0x3570d8: 0x2404171f  addiu       $a0, $zero, 0x171F
    ctx->pc = 0x3570d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5919));
    // 0x3570dc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3570dcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3570e0: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x3570e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3570e4: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x3570e4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3570e8: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x3570E8u;
    SET_GPR_U32(ctx, 31, 0x3570F0u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x3570E8u, 0x3570F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3570F0u;
label_3570f0:
    // 0x3570f0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x3570f0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3570f4: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x3570F4u;
    SET_GPR_U32(ctx, 31, 0x3570FCu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x3570F4u, 0x3570FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3570FCu;
label_3570fc:
    // 0x3570fc: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x3570fcu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x357100: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x357100u;
    {
        const bool branch_taken_0x357100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x357100) {
            ctx->pc = 0x357158u;
            goto label_357158;
        }
    }
    ctx->pc = 0x357108u;
label_357108:
    // 0x357108: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x357108u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35710c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x35710cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x357110: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x357110u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x357114: 0x8c820130  lw          $v0, 0x130($a0)
    ctx->pc = 0x357114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x357118: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x357118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x35711c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x35711cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x357120: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x357120u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x357124: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x357124u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x357128: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x357128u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x35712c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x35712cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x357130: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x357130u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x357134: 0x2404171f  addiu       $a0, $zero, 0x171F
    ctx->pc = 0x357134u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5919));
    // 0x357138: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x357138u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x35713c: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x35713cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x357140: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x357140u;
    SET_GPR_U32(ctx, 31, 0x357148u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x357140u, 0x357148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357148u;
label_357148:
    // 0x357148: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x357148u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x35714c: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x35714Cu;
    SET_GPR_U32(ctx, 31, 0x357154u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x35714Cu, 0x357154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357154u;
label_357154:
    // 0x357154: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x357154u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_357158:
    // 0x357158: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x357158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35715c: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x35715Cu;
    {
        const bool branch_taken_0x35715c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35715c) {
            ctx->pc = 0x357194u;
            goto label_357194;
        }
    }
    ctx->pc = 0x357164u;
    // 0x357164: 0x2404171f  addiu       $a0, $zero, 0x171F
    ctx->pc = 0x357164u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5919));
    // 0x357168: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x357168u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x35716c: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x35716cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x357170: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x357170u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x357174: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x357174u;
    SET_GPR_U32(ctx, 31, 0x35717Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x357174u, 0x35717Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35717Cu;
label_35717c:
    // 0x35717c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x35717cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x357180: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x357180u;
    SET_GPR_U32(ctx, 31, 0x357188u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x357180u, 0x357188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357188u;
label_357188:
    // 0x357188: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x357188u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x35718c: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x35718Cu;
    {
        const bool branch_taken_0x35718c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35718c) {
            ctx->pc = 0x3571E4u;
            goto label_3571e4;
        }
    }
    ctx->pc = 0x357194u;
label_357194:
    // 0x357194: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x357194u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x357198: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x357198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x35719c: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x35719cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x3571a0: 0x8c820130  lw          $v0, 0x130($a0)
    ctx->pc = 0x3571a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x3571a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3571a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3571a8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x3571a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3571ac: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x3571acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x3571b0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x3571b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3571b4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x3571b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x3571b8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3571b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3571bc: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x3571bcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3571c0: 0x2404171f  addiu       $a0, $zero, 0x171F
    ctx->pc = 0x3571c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5919));
    // 0x3571c4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3571c4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3571c8: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x3571c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3571cc: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x3571CCu;
    SET_GPR_U32(ctx, 31, 0x3571D4u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x3571CCu, 0x3571D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3571D4u;
label_3571d4:
    // 0x3571d4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x3571d4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3571d8: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x3571D8u;
    SET_GPR_U32(ctx, 31, 0x3571E0u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x3571D8u, 0x3571E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3571E0u;
label_3571e0:
    // 0x3571e0: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x3571e0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_3571e4:
    // 0x3571e4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3571e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3571e8: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x3571E8u;
    {
        const bool branch_taken_0x3571e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3571e8) {
            ctx->pc = 0x357220u;
            goto label_357220;
        }
    }
    ctx->pc = 0x3571F0u;
    // 0x3571f0: 0x2404171f  addiu       $a0, $zero, 0x171F
    ctx->pc = 0x3571f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5919));
    // 0x3571f4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3571f4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3571f8: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x3571f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3571fc: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x3571fcu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x357200: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x357200u;
    SET_GPR_U32(ctx, 31, 0x357208u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x357200u, 0x357208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357208u;
label_357208:
    // 0x357208: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x357208u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x35720c: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x35720Cu;
    SET_GPR_U32(ctx, 31, 0x357214u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x35720Cu, 0x357214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357214u;
label_357214:
    // 0x357214: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x357214u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x357218: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x357218u;
    {
        const bool branch_taken_0x357218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x357218) {
            ctx->pc = 0x357270u;
            goto label_357270;
        }
    }
    ctx->pc = 0x357220u;
label_357220:
    // 0x357220: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x357220u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x357224: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x357224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x357228: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x357228u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x35722c: 0x8c820130  lw          $v0, 0x130($a0)
    ctx->pc = 0x35722cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x357230: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x357230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x357234: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x357234u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x357238: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x357238u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x35723c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x35723cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x357240: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x357240u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x357244: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x357244u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x357248: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x357248u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x35724c: 0x2404171f  addiu       $a0, $zero, 0x171F
    ctx->pc = 0x35724cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5919));
    // 0x357250: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x357250u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x357254: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x357254u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x357258: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x357258u;
    SET_GPR_U32(ctx, 31, 0x357260u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x357258u, 0x357260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357260u;
label_357260:
    // 0x357260: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x357260u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x357264: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x357264u;
    SET_GPR_U32(ctx, 31, 0x35726Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x357264u, 0x35726Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35726Cu;
label_35726c:
    // 0x35726c: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x35726cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_357270:
    // 0x357270: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x357270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x357274: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x357274u;
    {
        const bool branch_taken_0x357274 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x357274) {
            ctx->pc = 0x3572ACu;
            goto label_3572ac;
        }
    }
    ctx->pc = 0x35727Cu;
    // 0x35727c: 0x24041720  addiu       $a0, $zero, 0x1720
    ctx->pc = 0x35727cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5920));
    // 0x357280: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x357280u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x357284: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x357284u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x357288: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x357288u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x35728c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x35728Cu;
    SET_GPR_U32(ctx, 31, 0x357294u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x35728Cu, 0x357294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357294u;
label_357294:
    // 0x357294: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x357294u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x357298: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x357298u;
    SET_GPR_U32(ctx, 31, 0x3572A0u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x357298u, 0x3572A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3572A0u;
label_3572a0:
    // 0x3572a0: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x3572a0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3572a4: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x3572A4u;
    {
        const bool branch_taken_0x3572a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3572a4) {
            ctx->pc = 0x3572FCu;
            goto label_3572fc;
        }
    }
    ctx->pc = 0x3572ACu;
label_3572ac:
    // 0x3572ac: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x3572acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3572b0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x3572b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3572b4: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x3572b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x3572b8: 0x8c820130  lw          $v0, 0x130($a0)
    ctx->pc = 0x3572b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x3572bc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3572bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3572c0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x3572c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3572c4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x3572c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x3572c8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x3572c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3572cc: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x3572ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x3572d0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3572d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3572d4: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x3572d4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3572d8: 0x24041720  addiu       $a0, $zero, 0x1720
    ctx->pc = 0x3572d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5920));
    // 0x3572dc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3572dcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3572e0: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x3572e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3572e4: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x3572E4u;
    SET_GPR_U32(ctx, 31, 0x3572ECu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x3572E4u, 0x3572ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3572ECu;
label_3572ec:
    // 0x3572ec: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x3572ecu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3572f0: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x3572F0u;
    SET_GPR_U32(ctx, 31, 0x3572F8u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x3572F0u, 0x3572F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3572F8u;
label_3572f8:
    // 0x3572f8: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x3572f8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_3572fc:
    // 0x3572fc: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x3572fcu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x357300: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x357300u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x357304: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x357304u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x357308: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x357308u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x35730c: 0x3e00008  jr          $ra
    ctx->pc = 0x35730Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35730Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x357314u;
}
