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

// Function: ectrl0e_move10
// Address: 0x2f94d0 - 0x2fa1f0
void ectrl0e_move10_0x2f94d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ectrl0e_move10_0x2f94d0");
#endif

    switch (ctx->pc) {
        case 0x2f9604u: goto label_2f9604;
        case 0x2f9610u: goto label_2f9610;
        case 0x2f9710u: goto label_2f9710;
        case 0x2f971cu: goto label_2f971c;
        case 0x2f981cu: goto label_2f981c;
        case 0x2f9828u: goto label_2f9828;
        case 0x2f9938u: goto label_2f9938;
        case 0x2f9944u: goto label_2f9944;
        case 0x2f9a58u: goto label_2f9a58;
        case 0x2f9a64u: goto label_2f9a64;
        case 0x2f9b70u: goto label_2f9b70;
        case 0x2f9b80u: goto label_2f9b80;
        case 0x2f9c20u: goto label_2f9c20;
        case 0x2f9c2cu: goto label_2f9c2c;
        case 0x2f9cc8u: goto label_2f9cc8;
        case 0x2f9cd4u: goto label_2f9cd4;
        case 0x2f9de4u: goto label_2f9de4;
        case 0x2f9df0u: goto label_2f9df0;
        case 0x2f9eb4u: goto label_2f9eb4;
        case 0x2f9ec0u: goto label_2f9ec0;
        case 0x2f9f28u: goto label_2f9f28;
        case 0x2f9f34u: goto label_2f9f34;
        case 0x2f9fe4u: goto label_2f9fe4;
        case 0x2f9ff0u: goto label_2f9ff0;
        case 0x2fa060u: goto label_2fa060;
        case 0x2fa070u: goto label_2fa070;
        case 0x2fa0bcu: goto label_2fa0bc;
        case 0x2fa0e8u: goto label_2fa0e8;
        case 0x2fa114u: goto label_2fa114;
        case 0x2fa14cu: goto label_2fa14c;
        case 0x2fa180u: goto label_2fa180;
        case 0x2fa1b0u: goto label_2fa1b0;
        default: break;
    }

    ctx->pc = 0x2f94d0u;

    // 0x2f94d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2f94d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2f94d4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x2f94d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x2f94d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f94d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2f94dc: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x2f94dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x2f94e0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2f94e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2f94e4: 0x8c6400d4  lw          $a0, 0xD4($v1)
    ctx->pc = 0x2f94e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x2f94e8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f94e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f94ec: 0x148301a5  bne         $a0, $v1, . + 4 + (0x1A5 << 2)
    ctx->pc = 0x2F94ECu;
    {
        const bool branch_taken_0x2f94ec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2f94ec) {
            ctx->pc = 0x2F9B84u;
            goto label_2f9b84;
        }
    }
    ctx->pc = 0x2F94F4u;
    // 0x2f94f4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2f94f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2f94f8: 0x8c480008  lw          $t0, 0x8($v0)
    ctx->pc = 0x2f94f8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2f94fc: 0x150000cd  bnez        $t0, . + 4 + (0xCD << 2)
    ctx->pc = 0x2F94FCu;
    {
        const bool branch_taken_0x2f94fc = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f94fc) {
            ctx->pc = 0x2F9834u;
            goto label_2f9834;
        }
    }
    ctx->pc = 0x2F9504u;
    // 0x2f9504: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2f9504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2f9508: 0x8c460010  lw          $a2, 0x10($v0)
    ctx->pc = 0x2f9508u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2f950c: 0x6183c  dsll32      $v1, $a2, 0
    ctx->pc = 0x2f950cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 0));
    // 0x2f9510: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2f9510u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2f9514: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x2f9514u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2f9518: 0x34441d00  ori         $a0, $v0, 0x1D00
    ctx->pc = 0x2f9518u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)7424);
    // 0x2f951c: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2f951cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2f9520: 0x24428ff0  addiu       $v0, $v0, -0x7010
    ctx->pc = 0x2f9520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938608));
    // 0x2f9524: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x2f9524u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2f9528: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x2f9528u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x2f952c: 0x3407ffff  ori         $a3, $zero, 0xFFFF
    ctx->pc = 0x2f952cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2f9530: 0x71438  dsll        $v0, $a3, 16
    ctx->pc = 0x2f9530u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << 16);
    // 0x2f9534: 0x3446ffff  ori         $a2, $v0, 0xFFFF
    ctx->pc = 0x2f9534u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2f9538: 0xa61024  and         $v0, $a1, $a2
    ctx->pc = 0x2f9538u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
    // 0x2f953c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2f953cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2f9540: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x2f9540u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x2f9544: 0x24638ff0  addiu       $v1, $v1, -0x7010
    ctx->pc = 0x2f9544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938608));
    // 0x2f9548: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2f9548u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2f954c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2f954cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2f9550: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x2f9550u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2f9554: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x2f9554u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x2f9558: 0x34a6ffff  ori         $a2, $a1, 0xFFFF
    ctx->pc = 0x2f9558u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x2f955c: 0x662824  and         $a1, $v1, $a2
    ctx->pc = 0x2f955cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x2f9560: 0x452825  or          $a1, $v0, $a1
    ctx->pc = 0x2f9560u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x2f9564: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2f9564u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2f9568: 0x2442dbc0  addiu       $v0, $v0, -0x2440
    ctx->pc = 0x2f9568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x2f956c: 0x2483c  dsll32      $t1, $v0, 0
    ctx->pc = 0x2f956cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2f9570: 0x9483e  dsrl32      $t1, $t1, 0
    ctx->pc = 0x2f9570u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) >> (32 + 0));
    // 0x2f9574: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2f9574u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2f9578: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2f9578u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2f957c: 0x3447ffff  ori         $a3, $v0, 0xFFFF
    ctx->pc = 0x2f957cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2f9580: 0x1271024  and         $v0, $t1, $a3
    ctx->pc = 0x2f9580u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & GPR_U64(ctx, 7));
    // 0x2f9584: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x2f9584u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2f9588: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2f9588u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2f958c: 0x2442dbc0  addiu       $v0, $v0, -0x2440
    ctx->pc = 0x2f958cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x2f9590: 0x2583c  dsll32      $t3, $v0, 0
    ctx->pc = 0x2f9590u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2f9594: 0xb583e  dsrl32      $t3, $t3, 0
    ctx->pc = 0x2f9594u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) >> (32 + 0));
    // 0x2f9598: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2f9598u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2f959c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2f959cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2f95a0: 0x3449ffff  ori         $t1, $v0, 0xFFFF
    ctx->pc = 0x2f95a0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2f95a4: 0x1693824  and         $a3, $t3, $t1
    ctx->pc = 0x2f95a4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 11) & GPR_U64(ctx, 9));
    // 0x2f95a8: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x2f95a8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x2f95ac: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2f95acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2f95b0: 0x8c22dcf0  lw          $v0, -0x2310($at)
    ctx->pc = 0x2f95b0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x2f95b4: 0x24420340  addiu       $v0, $v0, 0x340
    ctx->pc = 0x2f95b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 832));
    // 0x2f95b8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2f95b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2f95bc: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2f95bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2f95c0: 0x3407ffff  ori         $a3, $zero, 0xFFFF
    ctx->pc = 0x2f95c0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2f95c4: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x2f95c4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x2f95c8: 0x34e9ffff  ori         $t1, $a3, 0xFFFF
    ctx->pc = 0x2f95c8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x2f95cc: 0x493824  and         $a3, $v0, $t1
    ctx->pc = 0x2f95ccu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
    // 0x2f95d0: 0x7503c  dsll32      $t2, $a3, 0
    ctx->pc = 0x2f95d0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 7) << (32 + 0));
    // 0x2f95d4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2f95d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2f95d8: 0x8c27dcf0  lw          $a3, -0x2310($at)
    ctx->pc = 0x2f95d8u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x2f95dc: 0x24e70340  addiu       $a3, $a3, 0x340
    ctx->pc = 0x2f95dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 832));
    // 0x2f95e0: 0x7483c  dsll32      $t1, $a3, 0
    ctx->pc = 0x2f95e0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 7) << (32 + 0));
    // 0x2f95e4: 0x9483e  dsrl32      $t1, $t1, 0
    ctx->pc = 0x2f95e4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) >> (32 + 0));
    // 0x2f95e8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2f95e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2f95ec: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2f95ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2f95f0: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x2f95f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2f95f4: 0x1231024  and         $v0, $t1, $v1
    ctx->pc = 0x2f95f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & GPR_U64(ctx, 3));
    // 0x2f95f8: 0x1423825  or          $a3, $t2, $v0
    ctx->pc = 0x2f95f8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 10) | GPR_U64(ctx, 2));
    // 0x2f95fc: 0xc0631f0  jal         func_18C7C0
    ctx->pc = 0x2F95FCu;
    SET_GPR_U32(ctx, 31, 0x2F9604u);
    ctx->pc = 0x18C7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C7C0u, 0x2F95FCu, 0x2F9604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9604u;
label_2f9604:
    // 0x2f9604: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2f9604u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2f9608: 0xc06332c  jal         func_18CCB0
    ctx->pc = 0x2F9608u;
    SET_GPR_U32(ctx, 31, 0x2F9610u);
    ctx->pc = 0x18CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CCB0u, 0x2F9608u, 0x2F9610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9610u;
label_2f9610:
    // 0x2f9610: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2f9610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2f9614: 0x8c660010  lw          $a2, 0x10($v1)
    ctx->pc = 0x2f9614u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2f9618: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x2f9618u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x2f961c: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x2f961cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x2f9620: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x2f9620u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x2f9624: 0x34641d00  ori         $a0, $v1, 0x1D00
    ctx->pc = 0x2f9624u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)7424);
    // 0x2f9628: 0x3c05003a  lui         $a1, 0x3A
    ctx->pc = 0x2f9628u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)58 << 16));
    // 0x2f962c: 0x24a38ff0  addiu       $v1, $a1, -0x7010
    ctx->pc = 0x2f962cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938608));
    // 0x2f9630: 0x3403c  dsll32      $t0, $v1, 0
    ctx->pc = 0x2f9630u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2f9634: 0x8403e  dsrl32      $t0, $t0, 0
    ctx->pc = 0x2f9634u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) >> (32 + 0));
    // 0x2f9638: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x2f9638u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2f963c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x2f963cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x2f9640: 0x3467ffff  ori         $a3, $v1, 0xFFFF
    ctx->pc = 0x2f9640u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2f9644: 0x1071824  and         $v1, $t0, $a3
    ctx->pc = 0x2f9644u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & GPR_U64(ctx, 7));
    // 0x2f9648: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x2f9648u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2f964c: 0x3c06003a  lui         $a2, 0x3A
    ctx->pc = 0x2f964cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)58 << 16));
    // 0x2f9650: 0x24c38ff0  addiu       $v1, $a2, -0x7010
    ctx->pc = 0x2f9650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294938608));
    // 0x2f9654: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2f9654u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2f9658: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2f9658u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2f965c: 0x3407ffff  ori         $a3, $zero, 0xFFFF
    ctx->pc = 0x2f965cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2f9660: 0x73438  dsll        $a2, $a3, 16
    ctx->pc = 0x2f9660u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) << 16);
    // 0x2f9664: 0x34c8ffff  ori         $t0, $a2, 0xFFFF
    ctx->pc = 0x2f9664u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x2f9668: 0x683024  and         $a2, $v1, $t0
    ctx->pc = 0x2f9668u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & GPR_U64(ctx, 8));
    // 0x2f966c: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x2f966cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x2f9670: 0x3c06003f  lui         $a2, 0x3F
    ctx->pc = 0x2f9670u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)63 << 16));
    // 0x2f9674: 0x24c7dbc0  addiu       $a3, $a2, -0x2440
    ctx->pc = 0x2f9674u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 4294958016));
    // 0x2f9678: 0x7483c  dsll32      $t1, $a3, 0
    ctx->pc = 0x2f9678u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 7) << (32 + 0));
    // 0x2f967c: 0x9483e  dsrl32      $t1, $t1, 0
    ctx->pc = 0x2f967cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) >> (32 + 0));
    // 0x2f9680: 0x3406ffff  ori         $a2, $zero, 0xFFFF
    ctx->pc = 0x2f9680u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2f9684: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x2f9684u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x2f9688: 0x34c8ffff  ori         $t0, $a2, 0xFFFF
    ctx->pc = 0x2f9688u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x2f968c: 0x1283024  and         $a2, $t1, $t0
    ctx->pc = 0x2f968cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 9) & GPR_U64(ctx, 8));
    // 0x2f9690: 0x6383c  dsll32      $a3, $a2, 0
    ctx->pc = 0x2f9690u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) << (32 + 0));
    // 0x2f9694: 0x3c06003f  lui         $a2, 0x3F
    ctx->pc = 0x2f9694u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)63 << 16));
    // 0x2f9698: 0x24c6dbc0  addiu       $a2, $a2, -0x2440
    ctx->pc = 0x2f9698u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294958016));
    // 0x2f969c: 0x6603c  dsll32      $t4, $a2, 0
    ctx->pc = 0x2f969cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 6) << (32 + 0));
    // 0x2f96a0: 0xc603e  dsrl32      $t4, $t4, 0
    ctx->pc = 0x2f96a0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) >> (32 + 0));
    // 0x2f96a4: 0x3406ffff  ori         $a2, $zero, 0xFFFF
    ctx->pc = 0x2f96a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2f96a8: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x2f96a8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x2f96ac: 0x34c8ffff  ori         $t0, $a2, 0xFFFF
    ctx->pc = 0x2f96acu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x2f96b0: 0x1883024  and         $a2, $t4, $t0
    ctx->pc = 0x2f96b0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 12) & GPR_U64(ctx, 8));
    // 0x2f96b4: 0xe63025  or          $a2, $a3, $a2
    ctx->pc = 0x2f96b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x2f96b8: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2f96b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2f96bc: 0x8c27dcf0  lw          $a3, -0x2310($at)
    ctx->pc = 0x2f96bcu;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x2f96c0: 0x24e70380  addiu       $a3, $a3, 0x380
    ctx->pc = 0x2f96c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 896));
    // 0x2f96c4: 0x7583c  dsll32      $t3, $a3, 0
    ctx->pc = 0x2f96c4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 7) << (32 + 0));
    // 0x2f96c8: 0xb583e  dsrl32      $t3, $t3, 0
    ctx->pc = 0x2f96c8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) >> (32 + 0));
    // 0x2f96cc: 0x3407ffff  ori         $a3, $zero, 0xFFFF
    ctx->pc = 0x2f96ccu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2f96d0: 0x74438  dsll        $t0, $a3, 16
    ctx->pc = 0x2f96d0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) << 16);
    // 0x2f96d4: 0x350affff  ori         $t2, $t0, 0xFFFF
    ctx->pc = 0x2f96d4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x2f96d8: 0x16a4024  and         $t0, $t3, $t2
    ctx->pc = 0x2f96d8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 11) & GPR_U64(ctx, 10));
    // 0x2f96dc: 0x8483c  dsll32      $t1, $t0, 0
    ctx->pc = 0x2f96dcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) << (32 + 0));
    // 0x2f96e0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2f96e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2f96e4: 0x8c27dcf0  lw          $a3, -0x2310($at)
    ctx->pc = 0x2f96e4u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x2f96e8: 0x24e70380  addiu       $a3, $a3, 0x380
    ctx->pc = 0x2f96e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 896));
    // 0x2f96ec: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x2f96ecu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x2f96f0: 0x7383e  dsrl32      $a3, $a3, 0
    ctx->pc = 0x2f96f0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> (32 + 0));
    // 0x2f96f4: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x2f96f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2f96f8: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x2f96f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x2f96fc: 0x3468ffff  ori         $t0, $v1, 0xFFFF
    ctx->pc = 0x2f96fcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2f9700: 0xe81824  and         $v1, $a3, $t0
    ctx->pc = 0x2f9700u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 8));
    // 0x2f9704: 0x1233825  or          $a3, $t1, $v1
    ctx->pc = 0x2f9704u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 9) | GPR_U64(ctx, 3));
    // 0x2f9708: 0xc0631f0  jal         func_18C7C0
    ctx->pc = 0x2F9708u;
    SET_GPR_U32(ctx, 31, 0x2F9710u);
    ctx->pc = 0x18C7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C7C0u, 0x2F9708u, 0x2F9710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9710u;
label_2f9710:
    // 0x2f9710: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2f9710u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2f9714: 0xc06332c  jal         func_18CCB0
    ctx->pc = 0x2F9714u;
    SET_GPR_U32(ctx, 31, 0x2F971Cu);
    ctx->pc = 0x18CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CCB0u, 0x2F9714u, 0x2F971Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F971Cu;
label_2f971c:
    // 0x2f971c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2f971cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2f9720: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x2f9720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2f9724: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2f9724u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2f9728: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2f9728u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2f972c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2f972cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f9730: 0x34441d00  ori         $a0, $v0, 0x1D00
    ctx->pc = 0x2f9730u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)7424);
    // 0x2f9734: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2f9734u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2f9738: 0x24428ff0  addiu       $v0, $v0, -0x7010
    ctx->pc = 0x2f9738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938608));
    // 0x2f973c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2f973cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2f9740: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2f9740u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2f9744: 0x3406ffff  ori         $a2, $zero, 0xFFFF
    ctx->pc = 0x2f9744u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2f9748: 0x61438  dsll        $v0, $a2, 16
    ctx->pc = 0x2f9748u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << 16);
    // 0x2f974c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2f974cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2f9750: 0x622824  and         $a1, $v1, $v0
    ctx->pc = 0x2f9750u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2f9754: 0x5183c  dsll32      $v1, $a1, 0
    ctx->pc = 0x2f9754u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 0));
    // 0x2f9758: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2f9758u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2f975c: 0x24428ff0  addiu       $v0, $v0, -0x7010
    ctx->pc = 0x2f975cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938608));
    // 0x2f9760: 0x2383c  dsll32      $a3, $v0, 0
    ctx->pc = 0x2f9760u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2f9764: 0x7383e  dsrl32      $a3, $a3, 0
    ctx->pc = 0x2f9764u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> (32 + 0));
    // 0x2f9768: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2f9768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2f976c: 0x23438  dsll        $a2, $v0, 16
    ctx->pc = 0x2f976cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << 16);
    // 0x2f9770: 0x34c2ffff  ori         $v0, $a2, 0xFFFF
    ctx->pc = 0x2f9770u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x2f9774: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x2f9774u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x2f9778: 0x622825  or          $a1, $v1, $v0
    ctx->pc = 0x2f9778u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2f977c: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x2f977cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x2f9780: 0x2463dbc0  addiu       $v1, $v1, -0x2440
    ctx->pc = 0x2f9780u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958016));
    // 0x2f9784: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2f9784u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2f9788: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2f9788u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2f978c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2f978cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2f9790: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2f9790u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2f9794: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2f9794u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2f9798: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2f9798u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2f979c: 0x2383c  dsll32      $a3, $v0, 0
    ctx->pc = 0x2f979cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2f97a0: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2f97a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2f97a4: 0x2448dbc0  addiu       $t0, $v0, -0x2440
    ctx->pc = 0x2f97a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x2f97a8: 0x8303c  dsll32      $a2, $t0, 0
    ctx->pc = 0x2f97a8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) << (32 + 0));
    // 0x2f97ac: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x2f97acu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x2f97b0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2f97b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2f97b4: 0x21c38  dsll        $v1, $v0, 16
    ctx->pc = 0x2f97b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 16);
    // 0x2f97b8: 0x3462ffff  ori         $v0, $v1, 0xFFFF
    ctx->pc = 0x2f97b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2f97bc: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x2f97bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x2f97c0: 0xe23025  or          $a2, $a3, $v0
    ctx->pc = 0x2f97c0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x2f97c4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2f97c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2f97c8: 0x8c27dcf0  lw          $a3, -0x2310($at)
    ctx->pc = 0x2f97c8u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x2f97cc: 0x24e203c0  addiu       $v0, $a3, 0x3C0
    ctx->pc = 0x2f97ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 960));
    // 0x2f97d0: 0x2403c  dsll32      $t0, $v0, 0
    ctx->pc = 0x2f97d0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2f97d4: 0x8403e  dsrl32      $t0, $t0, 0
    ctx->pc = 0x2f97d4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) >> (32 + 0));
    // 0x2f97d8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2f97d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2f97dc: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2f97dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2f97e0: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x2f97e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2f97e4: 0x1031824  and         $v1, $t0, $v1
    ctx->pc = 0x2f97e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & GPR_U64(ctx, 3));
    // 0x2f97e8: 0x3403c  dsll32      $t0, $v1, 0
    ctx->pc = 0x2f97e8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2f97ec: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2f97ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2f97f0: 0x8c23dcf0  lw          $v1, -0x2310($at)
    ctx->pc = 0x2f97f0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x2f97f4: 0x246303c0  addiu       $v1, $v1, 0x3C0
    ctx->pc = 0x2f97f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 960));
    // 0x2f97f8: 0x3383c  dsll32      $a3, $v1, 0
    ctx->pc = 0x2f97f8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2f97fc: 0x7383e  dsrl32      $a3, $a3, 0
    ctx->pc = 0x2f97fcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> (32 + 0));
    // 0x2f9800: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x2f9800u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2f9804: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x2f9804u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x2f9808: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2f9808u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2f980c: 0xe31824  and         $v1, $a3, $v1
    ctx->pc = 0x2f980cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x2f9810: 0x1033825  or          $a3, $t0, $v1
    ctx->pc = 0x2f9810u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x2f9814: 0xc0631f0  jal         func_18C7C0
    ctx->pc = 0x2F9814u;
    SET_GPR_U32(ctx, 31, 0x2F981Cu);
    ctx->pc = 0x18C7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C7C0u, 0x2F9814u, 0x2F981Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F981Cu;
label_2f981c:
    // 0x2f981c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2f981cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2f9820: 0xc06332c  jal         func_18CCB0
    ctx->pc = 0x2F9820u;
    SET_GPR_U32(ctx, 31, 0x2F9828u);
    ctx->pc = 0x18CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CCB0u, 0x2F9820u, 0x2F9828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9828u;
label_2f9828:
    // 0x2f9828: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2f9828u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2f982c: 0x100000d5  b           . + 4 + (0xD5 << 2)
    ctx->pc = 0x2F982Cu;
    {
        const bool branch_taken_0x2f982c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f982c) {
            ctx->pc = 0x2F9B84u;
            goto label_2f9b84;
        }
    }
    ctx->pc = 0x2F9834u;
label_2f9834:
    // 0x2f9834: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2f9834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2f9838: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x2f9838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2f983c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2f983cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2f9840: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2f9840u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2f9844: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x2f9844u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2f9848: 0x34441d00  ori         $a0, $v0, 0x1D00
    ctx->pc = 0x2f9848u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)7424);
    // 0x2f984c: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2f984cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2f9850: 0x24428ff0  addiu       $v0, $v0, -0x7010
    ctx->pc = 0x2f9850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938608));
    // 0x2f9854: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2f9854u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2f9858: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2f9858u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2f985c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2f985cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2f9860: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2f9860u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2f9864: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2f9864u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2f9868: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2f9868u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2f986c: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x2f986cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2f9870: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2f9870u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2f9874: 0x24428ff0  addiu       $v0, $v0, -0x7010
    ctx->pc = 0x2f9874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938608));
    // 0x2f9878: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2f9878u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2f987c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2f987cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2f9880: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2f9880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2f9884: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2f9884u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2f9888: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2f9888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2f988c: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x2f988cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2f9890: 0xa71825  or          $v1, $a1, $a3
    ctx->pc = 0x2f9890u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 7));
    // 0x2f9894: 0x3c06003f  lui         $a2, 0x3F
    ctx->pc = 0x2f9894u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)63 << 16));
    // 0x2f9898: 0x24c2dbc0  addiu       $v0, $a2, -0x2440
    ctx->pc = 0x2f9898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294958016));
    // 0x2f989c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2f989cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2f98a0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2f98a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2f98a4: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x2f98a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2f98a8: 0x53438  dsll        $a2, $a1, 16
    ctx->pc = 0x2f98a8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << 16);
    // 0x2f98ac: 0x34c5ffff  ori         $a1, $a2, 0xFFFF
    ctx->pc = 0x2f98acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x2f98b0: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x2f98b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x2f98b4: 0x2383c  dsll32      $a3, $v0, 0
    ctx->pc = 0x2f98b4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2f98b8: 0x3c06003f  lui         $a2, 0x3F
    ctx->pc = 0x2f98b8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)63 << 16));
    // 0x2f98bc: 0x24c2dbc0  addiu       $v0, $a2, -0x2440
    ctx->pc = 0x2f98bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294958016));
    // 0x2f98c0: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x2f98c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2f98c4: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x2f98c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x2f98c8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2f98c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2f98cc: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2f98ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2f98d0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2f98d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2f98d4: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x2f98d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x2f98d8: 0xe23025  or          $a2, $a3, $v0
    ctx->pc = 0x2f98d8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x2f98dc: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2f98dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2f98e0: 0x8c22dcf0  lw          $v0, -0x2310($at)
    ctx->pc = 0x2f98e0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x2f98e4: 0x24420180  addiu       $v0, $v0, 0x180
    ctx->pc = 0x2f98e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x2f98e8: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x2f98e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2f98ec: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x2f98ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x2f98f0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2f98f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2f98f4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2f98f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2f98f8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2f98f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2f98fc: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x2f98fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x2f9900: 0x2483c  dsll32      $t1, $v0, 0
    ctx->pc = 0x2f9900u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2f9904: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2f9904u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2f9908: 0x8c22dcf0  lw          $v0, -0x2310($at)
    ctx->pc = 0x2f9908u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x2f990c: 0x24480180  addiu       $t0, $v0, 0x180
    ctx->pc = 0x2f990cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x2f9910: 0x8383c  dsll32      $a3, $t0, 0
    ctx->pc = 0x2f9910u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) << (32 + 0));
    // 0x2f9914: 0x7383e  dsrl32      $a3, $a3, 0
    ctx->pc = 0x2f9914u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> (32 + 0));
    // 0x2f9918: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2f9918u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2f991c: 0x22c38  dsll        $a1, $v0, 16
    ctx->pc = 0x2f991cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << 16);
    // 0x2f9920: 0x34a2ffff  ori         $v0, $a1, 0xFFFF
    ctx->pc = 0x2f9920u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x2f9924: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x2f9924u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x2f9928: 0x1223825  or          $a3, $t1, $v0
    ctx->pc = 0x2f9928u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x2f992c: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x2f992cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x2f9930: 0xc0631f0  jal         func_18C7C0
    ctx->pc = 0x2F9930u;
    SET_GPR_U32(ctx, 31, 0x2F9938u);
    ctx->pc = 0x18C7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C7C0u, 0x2F9930u, 0x2F9938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9938u;
label_2f9938:
    // 0x2f9938: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2f9938u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2f993c: 0xc06332c  jal         func_18CCB0
    ctx->pc = 0x2F993Cu;
    SET_GPR_U32(ctx, 31, 0x2F9944u);
    ctx->pc = 0x18CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CCB0u, 0x2F993Cu, 0x2F9944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9944u;
label_2f9944:
    // 0x2f9944: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2f9944u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2f9948: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2f9948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2f994c: 0x8c640010  lw          $a0, 0x10($v1)
    ctx->pc = 0x2f994cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2f9950: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x2f9950u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2f9954: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2f9954u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2f9958: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x2f9958u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2f995c: 0x34481d00  ori         $t0, $v0, 0x1D00
    ctx->pc = 0x2f995cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)7424);
    // 0x2f9960: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2f9960u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2f9964: 0x24468ff0  addiu       $a2, $v0, -0x7010
    ctx->pc = 0x2f9964u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938608));
    // 0x2f9968: 0x6183c  dsll32      $v1, $a2, 0
    ctx->pc = 0x2f9968u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 0));
    // 0x2f996c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2f996cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2f9970: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2f9970u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2f9974: 0x22438  dsll        $a0, $v0, 16
    ctx->pc = 0x2f9974u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << 16);
    // 0x2f9978: 0x3482ffff  ori         $v0, $a0, 0xFFFF
    ctx->pc = 0x2f9978u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x2f997c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2f997cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2f9980: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x2f9980u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2f9984: 0x3c07003a  lui         $a3, 0x3A
    ctx->pc = 0x2f9984u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)58 << 16));
    // 0x2f9988: 0x24e28ff0  addiu       $v0, $a3, -0x7010
    ctx->pc = 0x2f9988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294938608));
    // 0x2f998c: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x2f998cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2f9990: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x2f9990u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x2f9994: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2f9994u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2f9998: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2f9998u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2f999c: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x2f999cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2f99a0: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x2f99a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x2f99a4: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x2f99a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x2f99a8: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x2f99a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x2f99ac: 0x24a5dbc0  addiu       $a1, $a1, -0x2440
    ctx->pc = 0x2f99acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958016));
    // 0x2f99b0: 0x5303c  dsll32      $a2, $a1, 0
    ctx->pc = 0x2f99b0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << (32 + 0));
    // 0x2f99b4: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x2f99b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x2f99b8: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x2f99b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2f99bc: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x2f99bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x2f99c0: 0x34a2ffff  ori         $v0, $a1, 0xFFFF
    ctx->pc = 0x2f99c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x2f99c4: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x2f99c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x2f99c8: 0x2483c  dsll32      $t1, $v0, 0
    ctx->pc = 0x2f99c8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2f99cc: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2f99ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2f99d0: 0x2442dbc0  addiu       $v0, $v0, -0x2440
    ctx->pc = 0x2f99d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x2f99d4: 0x2383c  dsll32      $a3, $v0, 0
    ctx->pc = 0x2f99d4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2f99d8: 0x7383e  dsrl32      $a3, $a3, 0
    ctx->pc = 0x2f99d8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> (32 + 0));
    // 0x2f99dc: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2f99dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2f99e0: 0x23438  dsll        $a2, $v0, 16
    ctx->pc = 0x2f99e0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << 16);
    // 0x2f99e4: 0x34c2ffff  ori         $v0, $a2, 0xFFFF
    ctx->pc = 0x2f99e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x2f99e8: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x2f99e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x2f99ec: 0x1225825  or          $t3, $t1, $v0
    ctx->pc = 0x2f99ecu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x2f99f0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2f99f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2f99f4: 0x8c22dcf0  lw          $v0, -0x2310($at)
    ctx->pc = 0x2f99f4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x2f99f8: 0x244201c0  addiu       $v0, $v0, 0x1C0
    ctx->pc = 0x2f99f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 448));
    // 0x2f99fc: 0x2483c  dsll32      $t1, $v0, 0
    ctx->pc = 0x2f99fcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2f9a00: 0x9483e  dsrl32      $t1, $t1, 0
    ctx->pc = 0x2f9a00u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) >> (32 + 0));
    // 0x2f9a04: 0x3407ffff  ori         $a3, $zero, 0xFFFF
    ctx->pc = 0x2f9a04u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2f9a08: 0x73438  dsll        $a2, $a3, 16
    ctx->pc = 0x2f9a08u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) << 16);
    // 0x2f9a0c: 0x34c2ffff  ori         $v0, $a2, 0xFFFF
    ctx->pc = 0x2f9a0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x2f9a10: 0x1221024  and         $v0, $t1, $v0
    ctx->pc = 0x2f9a10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & GPR_U64(ctx, 2));
    // 0x2f9a14: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2f9a14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2f9a18: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2f9a18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2f9a1c: 0x8c27dcf0  lw          $a3, -0x2310($at)
    ctx->pc = 0x2f9a1cu;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x2f9a20: 0x24e701c0  addiu       $a3, $a3, 0x1C0
    ctx->pc = 0x2f9a20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 448));
    // 0x2f9a24: 0x7483c  dsll32      $t1, $a3, 0
    ctx->pc = 0x2f9a24u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 7) << (32 + 0));
    // 0x2f9a28: 0x9483e  dsrl32      $t1, $t1, 0
    ctx->pc = 0x2f9a28u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) >> (32 + 0));
    // 0x2f9a2c: 0x3407ffff  ori         $a3, $zero, 0xFFFF
    ctx->pc = 0x2f9a2cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2f9a30: 0x75438  dsll        $t2, $a3, 16
    ctx->pc = 0x2f9a30u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 7) << 16);
    // 0x2f9a34: 0x3547ffff  ori         $a3, $t2, 0xFFFF
    ctx->pc = 0x2f9a34u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
    // 0x2f9a38: 0x1273824  and         $a3, $t1, $a3
    ctx->pc = 0x2f9a38u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 9) & GPR_U64(ctx, 7));
    // 0x2f9a3c: 0x474825  or          $t1, $v0, $a3
    ctx->pc = 0x2f9a3cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x2f9a40: 0x71002628  paddub      $a0, $t0, $zero
    ctx->pc = 0x2f9a40u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x2f9a44: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x2f9a44u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x2f9a48: 0x71603628  paddub      $a2, $t3, $zero
    ctx->pc = 0x2f9a48u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 11), GPR_VEC(ctx, 0)));
    // 0x2f9a4c: 0x71203e28  paddub      $a3, $t1, $zero
    ctx->pc = 0x2f9a4cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x2f9a50: 0xc0631f0  jal         func_18C7C0
    ctx->pc = 0x2F9A50u;
    SET_GPR_U32(ctx, 31, 0x2F9A58u);
    ctx->pc = 0x18C7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C7C0u, 0x2F9A50u, 0x2F9A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9A58u;
label_2f9a58:
    // 0x2f9a58: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2f9a58u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2f9a5c: 0xc06332c  jal         func_18CCB0
    ctx->pc = 0x2F9A5Cu;
    SET_GPR_U32(ctx, 31, 0x2F9A64u);
    ctx->pc = 0x18CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CCB0u, 0x2F9A5Cu, 0x2F9A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9A64u;
label_2f9a64:
    // 0x2f9a64: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2f9a64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2f9a68: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x2f9a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2f9a6c: 0x2383c  dsll32      $a3, $v0, 0
    ctx->pc = 0x2f9a6cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2f9a70: 0x7383e  dsrl32      $a3, $a3, 0
    ctx->pc = 0x2f9a70u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> (32 + 0));
    // 0x2f9a74: 0x30e200ff  andi        $v0, $a3, 0xFF
    ctx->pc = 0x2f9a74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x2f9a78: 0x34421d00  ori         $v0, $v0, 0x1D00
    ctx->pc = 0x2f9a78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)7424);
    // 0x2f9a7c: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x2f9a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x2f9a80: 0x24668ff0  addiu       $a2, $v1, -0x7010
    ctx->pc = 0x2f9a80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938608));
    // 0x2f9a84: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x2f9a84u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x2f9a88: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x2f9a88u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x2f9a8c: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x2f9a8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2f9a90: 0x32438  dsll        $a0, $v1, 16
    ctx->pc = 0x2f9a90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << 16);
    // 0x2f9a94: 0x3485ffff  ori         $a1, $a0, 0xFFFF
    ctx->pc = 0x2f9a94u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x2f9a98: 0xc51824  and         $v1, $a2, $a1
    ctx->pc = 0x2f9a98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x2f9a9c: 0x3403c  dsll32      $t0, $v1, 0
    ctx->pc = 0x2f9a9cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2f9aa0: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x2f9aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x2f9aa4: 0x24638ff0  addiu       $v1, $v1, -0x7010
    ctx->pc = 0x2f9aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938608));
    // 0x2f9aa8: 0x3383c  dsll32      $a3, $v1, 0
    ctx->pc = 0x2f9aa8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2f9aac: 0x7383e  dsrl32      $a3, $a3, 0
    ctx->pc = 0x2f9aacu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> (32 + 0));
    // 0x2f9ab0: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x2f9ab0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2f9ab4: 0x32c38  dsll        $a1, $v1, 16
    ctx->pc = 0x2f9ab4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << 16);
    // 0x2f9ab8: 0x34a6ffff  ori         $a2, $a1, 0xFFFF
    ctx->pc = 0x2f9ab8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x2f9abc: 0xe61824  and         $v1, $a3, $a2
    ctx->pc = 0x2f9abcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 6));
    // 0x2f9ac0: 0x1031825  or          $v1, $t0, $v1
    ctx->pc = 0x2f9ac0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x2f9ac4: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x2f9ac4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x2f9ac8: 0x24e6dbc0  addiu       $a2, $a3, -0x2440
    ctx->pc = 0x2f9ac8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 4294958016));
    // 0x2f9acc: 0x6403c  dsll32      $t0, $a2, 0
    ctx->pc = 0x2f9accu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) << (32 + 0));
    // 0x2f9ad0: 0x8403e  dsrl32      $t0, $t0, 0
    ctx->pc = 0x2f9ad0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) >> (32 + 0));
    // 0x2f9ad4: 0x3406ffff  ori         $a2, $zero, 0xFFFF
    ctx->pc = 0x2f9ad4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2f9ad8: 0x62c38  dsll        $a1, $a2, 16
    ctx->pc = 0x2f9ad8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) << 16);
    // 0x2f9adc: 0x34a6ffff  ori         $a2, $a1, 0xFFFF
    ctx->pc = 0x2f9adcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x2f9ae0: 0x1063824  and         $a3, $t0, $a2
    ctx->pc = 0x2f9ae0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) & GPR_U64(ctx, 6));
    // 0x2f9ae4: 0x7483c  dsll32      $t1, $a3, 0
    ctx->pc = 0x2f9ae4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 7) << (32 + 0));
    // 0x2f9ae8: 0x3c06003f  lui         $a2, 0x3F
    ctx->pc = 0x2f9ae8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)63 << 16));
    // 0x2f9aec: 0x24c6dbc0  addiu       $a2, $a2, -0x2440
    ctx->pc = 0x2f9aecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294958016));
    // 0x2f9af0: 0x6403c  dsll32      $t0, $a2, 0
    ctx->pc = 0x2f9af0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) << (32 + 0));
    // 0x2f9af4: 0x8403e  dsrl32      $t0, $t0, 0
    ctx->pc = 0x2f9af4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) >> (32 + 0));
    // 0x2f9af8: 0x3406ffff  ori         $a2, $zero, 0xFFFF
    ctx->pc = 0x2f9af8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2f9afc: 0x63c38  dsll        $a3, $a2, 16
    ctx->pc = 0x2f9afcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) << 16);
    // 0x2f9b00: 0x34e6ffff  ori         $a2, $a3, 0xFFFF
    ctx->pc = 0x2f9b00u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x2f9b04: 0x1063024  and         $a2, $t0, $a2
    ctx->pc = 0x2f9b04u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) & GPR_U64(ctx, 6));
    // 0x2f9b08: 0x1266025  or          $t4, $t1, $a2
    ctx->pc = 0x2f9b08u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 9) | GPR_U64(ctx, 6));
    // 0x2f9b0c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2f9b0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2f9b10: 0x8c26dcf0  lw          $a2, -0x2310($at)
    ctx->pc = 0x2f9b10u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x2f9b14: 0x24c60200  addiu       $a2, $a2, 0x200
    ctx->pc = 0x2f9b14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 512));
    // 0x2f9b18: 0x6403c  dsll32      $t0, $a2, 0
    ctx->pc = 0x2f9b18u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) << (32 + 0));
    // 0x2f9b1c: 0x8403e  dsrl32      $t0, $t0, 0
    ctx->pc = 0x2f9b1cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) >> (32 + 0));
    // 0x2f9b20: 0x3406ffff  ori         $a2, $zero, 0xFFFF
    ctx->pc = 0x2f9b20u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2f9b24: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x2f9b24u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x2f9b28: 0x34c7ffff  ori         $a3, $a2, 0xFFFF
    ctx->pc = 0x2f9b28u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x2f9b2c: 0x1073824  and         $a3, $t0, $a3
    ctx->pc = 0x2f9b2cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) & GPR_U64(ctx, 7));
    // 0x2f9b30: 0x7583c  dsll32      $t3, $a3, 0
    ctx->pc = 0x2f9b30u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 7) << (32 + 0));
    // 0x2f9b34: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2f9b34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2f9b38: 0x8c27dcf0  lw          $a3, -0x2310($at)
    ctx->pc = 0x2f9b38u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x2f9b3c: 0x24e80200  addiu       $t0, $a3, 0x200
    ctx->pc = 0x2f9b3cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 512));
    // 0x2f9b40: 0x8503c  dsll32      $t2, $t0, 0
    ctx->pc = 0x2f9b40u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 8) << (32 + 0));
    // 0x2f9b44: 0xa503e  dsrl32      $t2, $t2, 0
    ctx->pc = 0x2f9b44u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) >> (32 + 0));
    // 0x2f9b48: 0x3408ffff  ori         $t0, $zero, 0xFFFF
    ctx->pc = 0x2f9b48u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2f9b4c: 0x84c38  dsll        $t1, $t0, 16
    ctx->pc = 0x2f9b4cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) << 16);
    // 0x2f9b50: 0x3527ffff  ori         $a3, $t1, 0xFFFF
    ctx->pc = 0x2f9b50u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x2f9b54: 0x1473824  and         $a3, $t2, $a3
    ctx->pc = 0x2f9b54u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 10) & GPR_U64(ctx, 7));
    // 0x2f9b58: 0x1673825  or          $a3, $t3, $a3
    ctx->pc = 0x2f9b58u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 11) | GPR_U64(ctx, 7));
    // 0x2f9b5c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2f9b5cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2f9b60: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x2f9b60u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x2f9b64: 0x71803628  paddub      $a2, $t4, $zero
    ctx->pc = 0x2f9b64u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 12), GPR_VEC(ctx, 0)));
    // 0x2f9b68: 0xc0631f0  jal         func_18C7C0
    ctx->pc = 0x2F9B68u;
    SET_GPR_U32(ctx, 31, 0x2F9B70u);
    ctx->pc = 0x18C7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C7C0u, 0x2F9B68u, 0x2F9B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9B70u;
label_2f9b70:
    // 0x2f9b70: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2f9b70u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2f9b74: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x2f9b74u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x2f9b78: 0xc06332c  jal         func_18CCB0
    ctx->pc = 0x2F9B78u;
    SET_GPR_U32(ctx, 31, 0x2F9B80u);
    ctx->pc = 0x18CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CCB0u, 0x2F9B78u, 0x2F9B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9B80u;
label_2f9b80:
    // 0x2f9b80: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2f9b80u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2f9b84:
    // 0x2f9b84: 0x8fa80028  lw          $t0, 0x28($sp)
    ctx->pc = 0x2f9b84u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2f9b88: 0x8d0300d4  lw          $v1, 0xD4($t0)
    ctx->pc = 0x2f9b88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 212)));
    // 0x2f9b8c: 0x28610007  slti        $at, $v1, 0x7
    ctx->pc = 0x2f9b8cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x2f9b90: 0x1420005b  bnez        $at, . + 4 + (0x5B << 2)
    ctx->pc = 0x2F9B90u;
    {
        const bool branch_taken_0x2f9b90 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f9b90) {
            ctx->pc = 0x2F9D00u;
            goto label_2f9d00;
        }
    }
    ctx->pc = 0x2F9B98u;
    // 0x2f9b98: 0x8fa70028  lw          $a3, 0x28($sp)
    ctx->pc = 0x2f9b98u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2f9b9c: 0x8ce400d4  lw          $a0, 0xD4($a3)
    ctx->pc = 0x2f9b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 212)));
    // 0x2f9ba0: 0x28810011  slti        $at, $a0, 0x11
    ctx->pc = 0x2f9ba0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x2f9ba4: 0x10200056  beqz        $at, . + 4 + (0x56 << 2)
    ctx->pc = 0x2F9BA4u;
    {
        const bool branch_taken_0x2f9ba4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f9ba4) {
            ctx->pc = 0x2F9D00u;
            goto label_2f9d00;
        }
    }
    ctx->pc = 0x2F9BACu;
    // 0x2f9bac: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2f9bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2f9bb0: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x2f9bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2f9bb4: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x2F9BB4u;
    {
        const bool branch_taken_0x2f9bb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f9bb4) {
            ctx->pc = 0x2F9C60u;
            goto label_2f9c60;
        }
    }
    ctx->pc = 0x2F9BBCu;
    // 0x2f9bbc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2f9bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2f9bc0: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x2f9bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2f9bc4: 0x2442000a  addiu       $v0, $v0, 0xA
    ctx->pc = 0x2f9bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
    // 0x2f9bc8: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x2f9bc8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2f9bcc: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x2f9bccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x2f9bd0: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x2f9bd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2f9bd4: 0x34420300  ori         $v0, $v0, 0x300
    ctx->pc = 0x2f9bd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)768);
    // 0x2f9bd8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2f9bd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2f9bdc: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2f9bdcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2f9be0: 0x3066ffff  andi        $a2, $v1, 0xFFFF
    ctx->pc = 0x2f9be0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2f9be4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2f9be4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2f9be8: 0x8c22dcf0  lw          $v0, -0x2310($at)
    ctx->pc = 0x2f9be8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x2f9bec: 0x244203c0  addiu       $v0, $v0, 0x3C0
    ctx->pc = 0x2f9becu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 960));
    // 0x2f9bf0: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x2f9bf0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2f9bf4: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x2f9bf4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x2f9bf8: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x2f9bf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2f9bfc: 0x31438  dsll        $v0, $v1, 16
    ctx->pc = 0x2f9bfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 16);
    // 0x2f9c00: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2f9c00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2f9c04: 0xa23824  and         $a3, $a1, $v0
    ctx->pc = 0x2f9c04u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x2f9c08: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x2f9c08u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x2f9c0c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2f9c0cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f9c10: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2f9c10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2f9c14: 0x24468ff0  addiu       $a2, $v0, -0x7010
    ctx->pc = 0x2f9c14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938608));
    // 0x2f9c18: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2F9C18u;
    SET_GPR_U32(ctx, 31, 0x2F9C20u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2F9C18u, 0x2F9C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9C20u;
label_2f9c20:
    // 0x2f9c20: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2f9c20u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2f9c24: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2F9C24u;
    SET_GPR_U32(ctx, 31, 0x2F9C2Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2F9C24u, 0x2F9C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9C2Cu;
label_2f9c2c:
    // 0x2f9c2c: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x2f9c2cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2f9c30: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2f9c30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2f9c34: 0x34650011  ori         $a1, $v1, 0x11
    ctx->pc = 0x2f9c34u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2f9c38: 0x12050031  beq         $s0, $a1, . + 4 + (0x31 << 2)
    ctx->pc = 0x2F9C38u;
    {
        const bool branch_taken_0x2f9c38 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 5));
        if (branch_taken_0x2f9c38) {
            ctx->pc = 0x2F9D00u;
            goto label_2f9d00;
        }
    }
    ctx->pc = 0x2F9C40u;
    // 0x2f9c40: 0xc6010104  lwc1        $f1, 0x104($s0)
    ctx->pc = 0x2f9c40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f9c44: 0x3c034220  lui         $v1, 0x4220
    ctx->pc = 0x2f9c44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16928 << 16));
    // 0x2f9c48: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2f9c48u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f9c4c: 0x0  nop
    ctx->pc = 0x2f9c4cu;
    // NOP
    // 0x2f9c50: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2f9c50u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2f9c54: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x2f9c54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x2f9c58: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x2F9C58u;
    {
        const bool branch_taken_0x2f9c58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f9c58) {
            ctx->pc = 0x2F9D00u;
            goto label_2f9d00;
        }
    }
    ctx->pc = 0x2F9C60u;
label_2f9c60:
    // 0x2f9c60: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2f9c60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2f9c64: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x2f9c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2f9c68: 0x2442000a  addiu       $v0, $v0, 0xA
    ctx->pc = 0x2f9c68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
    // 0x2f9c6c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2f9c6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2f9c70: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2f9c70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2f9c74: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2f9c74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f9c78: 0x34470300  ori         $a3, $v0, 0x300
    ctx->pc = 0x2f9c78u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)768);
    // 0x2f9c7c: 0x7103c  dsll32      $v0, $a3, 0
    ctx->pc = 0x2f9c7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 0));
    // 0x2f9c80: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2f9c80u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2f9c84: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x2f9c84u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2f9c88: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2f9c88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2f9c8c: 0x8c26dcf0  lw          $a2, -0x2310($at)
    ctx->pc = 0x2f9c8cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x2f9c90: 0x24c20200  addiu       $v0, $a2, 0x200
    ctx->pc = 0x2f9c90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 512));
    // 0x2f9c94: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2f9c94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2f9c98: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2f9c98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2f9c9c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2f9c9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2f9ca0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2f9ca0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2f9ca4: 0x3446ffff  ori         $a2, $v0, 0xFFFF
    ctx->pc = 0x2f9ca4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2f9ca8: 0x663824  and         $a3, $v1, $a2
    ctx->pc = 0x2f9ca8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x2f9cac: 0x71002628  paddub      $a0, $t0, $zero
    ctx->pc = 0x2f9cacu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x2f9cb0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2f9cb0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f9cb4: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2f9cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2f9cb8: 0x24488ff0  addiu       $t0, $v0, -0x7010
    ctx->pc = 0x2f9cb8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938608));
    // 0x2f9cbc: 0x71003628  paddub      $a2, $t0, $zero
    ctx->pc = 0x2f9cbcu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x2f9cc0: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2F9CC0u;
    SET_GPR_U32(ctx, 31, 0x2F9CC8u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2F9CC0u, 0x2F9CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9CC8u;
label_2f9cc8:
    // 0x2f9cc8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2f9cc8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2f9ccc: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2F9CCCu;
    SET_GPR_U32(ctx, 31, 0x2F9CD4u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2F9CCCu, 0x2F9CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9CD4u;
label_2f9cd4:
    // 0x2f9cd4: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x2f9cd4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2f9cd8: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2f9cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2f9cdc: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2f9cdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2f9ce0: 0x12030007  beq         $s0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2F9CE0u;
    {
        const bool branch_taken_0x2f9ce0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x2f9ce0) {
            ctx->pc = 0x2F9D00u;
            goto label_2f9d00;
        }
    }
    ctx->pc = 0x2F9CE8u;
    // 0x2f9ce8: 0xc6010104  lwc1        $f1, 0x104($s0)
    ctx->pc = 0x2f9ce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f9cec: 0x3c084220  lui         $t0, 0x4220
    ctx->pc = 0x2f9cecu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16928 << 16));
    // 0x2f9cf0: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x2f9cf0u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f9cf4: 0x0  nop
    ctx->pc = 0x2f9cf4u;
    // NOP
    // 0x2f9cf8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2f9cf8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2f9cfc: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x2f9cfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
label_2f9d00:
    // 0x2f9d00: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2f9d00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2f9d04: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x2f9d04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2f9d08: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2F9D08u;
    {
        const bool branch_taken_0x2f9d08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f9d08) {
            ctx->pc = 0x2F9D38u;
            goto label_2f9d38;
        }
    }
    ctx->pc = 0x2F9D10u;
    // 0x2f9d10: 0x8fa70028  lw          $a3, 0x28($sp)
    ctx->pc = 0x2f9d10u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2f9d14: 0x8ce300d4  lw          $v1, 0xD4($a3)
    ctx->pc = 0x2f9d14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 212)));
    // 0x2f9d18: 0x2861000b  slti        $at, $v1, 0xB
    ctx->pc = 0x2f9d18u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x2f9d1c: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F9D1Cu;
    {
        const bool branch_taken_0x2f9d1c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f9d1c) {
            ctx->pc = 0x2F9D38u;
            goto label_2f9d38;
        }
    }
    ctx->pc = 0x2F9D24u;
    // 0x2f9d24: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2f9d24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2f9d28: 0x8c6300d4  lw          $v1, 0xD4($v1)
    ctx->pc = 0x2f9d28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x2f9d2c: 0x2863000e  slti        $v1, $v1, 0xE
    ctx->pc = 0x2f9d2cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)14) ? 1 : 0);
    // 0x2f9d30: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x2F9D30u;
    {
        const bool branch_taken_0x2f9d30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f9d30) {
            ctx->pc = 0x2F9D70u;
            goto label_2f9d70;
        }
    }
    ctx->pc = 0x2F9D38u;
label_2f9d38:
    // 0x2f9d38: 0x8fa70028  lw          $a3, 0x28($sp)
    ctx->pc = 0x2f9d38u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2f9d3c: 0x8ce40010  lw          $a0, 0x10($a3)
    ctx->pc = 0x2f9d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x2f9d40: 0x1080007c  beqz        $a0, . + 4 + (0x7C << 2)
    ctx->pc = 0x2F9D40u;
    {
        const bool branch_taken_0x2f9d40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f9d40) {
            ctx->pc = 0x2F9F34u;
            goto label_2f9f34;
        }
    }
    ctx->pc = 0x2F9D48u;
    // 0x2f9d48: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2f9d48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2f9d4c: 0x8c6300d4  lw          $v1, 0xD4($v1)
    ctx->pc = 0x2f9d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x2f9d50: 0x2861000b  slti        $at, $v1, 0xB
    ctx->pc = 0x2f9d50u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x2f9d54: 0x14200077  bnez        $at, . + 4 + (0x77 << 2)
    ctx->pc = 0x2F9D54u;
    {
        const bool branch_taken_0x2f9d54 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f9d54) {
            ctx->pc = 0x2F9F34u;
            goto label_2f9f34;
        }
    }
    ctx->pc = 0x2F9D5Cu;
    // 0x2f9d5c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2f9d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2f9d60: 0x8c6300d4  lw          $v1, 0xD4($v1)
    ctx->pc = 0x2f9d60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x2f9d64: 0x28610011  slti        $at, $v1, 0x11
    ctx->pc = 0x2f9d64u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x2f9d68: 0x10200072  beqz        $at, . + 4 + (0x72 << 2)
    ctx->pc = 0x2F9D68u;
    {
        const bool branch_taken_0x2f9d68 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f9d68) {
            ctx->pc = 0x2F9F34u;
            goto label_2f9f34;
        }
    }
    ctx->pc = 0x2F9D70u;
label_2f9d70:
    // 0x2f9d70: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2f9d70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2f9d74: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x2f9d74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2f9d78: 0x1480001f  bnez        $a0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2F9D78u;
    {
        const bool branch_taken_0x2f9d78 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f9d78) {
            ctx->pc = 0x2F9DF8u;
            goto label_2f9df8;
        }
    }
    ctx->pc = 0x2F9D80u;
    // 0x2f9d80: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2f9d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2f9d84: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x2f9d84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2f9d88: 0x2443000a  addiu       $v1, $v0, 0xA
    ctx->pc = 0x2f9d88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
    // 0x2f9d8c: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x2f9d8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2f9d90: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2f9d90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2f9d94: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2f9d94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f9d98: 0x34420300  ori         $v0, $v0, 0x300
    ctx->pc = 0x2f9d98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)768);
    // 0x2f9d9c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2f9d9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2f9da0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2f9da0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2f9da4: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x2f9da4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2f9da8: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2f9da8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2f9dac: 0x8c22dcf0  lw          $v0, -0x2310($at)
    ctx->pc = 0x2f9dacu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x2f9db0: 0x24420380  addiu       $v0, $v0, 0x380
    ctx->pc = 0x2f9db0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 896));
    // 0x2f9db4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2f9db4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2f9db8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2f9db8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2f9dbc: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2f9dbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2f9dc0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2f9dc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2f9dc4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2f9dc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2f9dc8: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x2f9dc8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2f9dcc: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x2f9dccu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x2f9dd0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2f9dd0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f9dd4: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x2f9dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x2f9dd8: 0x24668ff0  addiu       $a2, $v1, -0x7010
    ctx->pc = 0x2f9dd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938608));
    // 0x2f9ddc: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2F9DDCu;
    SET_GPR_U32(ctx, 31, 0x2F9DE4u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2F9DDCu, 0x2F9DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9DE4u;
label_2f9de4:
    // 0x2f9de4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2f9de4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2f9de8: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2F9DE8u;
    SET_GPR_U32(ctx, 31, 0x2F9DF0u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2F9DE8u, 0x2F9DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9DF0u;
label_2f9df0:
    // 0x2f9df0: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x2F9DF0u;
    {
        const bool branch_taken_0x2f9df0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f9df0) {
            ctx->pc = 0x2F9F34u;
            goto label_2f9f34;
        }
    }
    ctx->pc = 0x2F9DF8u;
label_2f9df8:
    // 0x2f9df8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f9df8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f9dfc: 0x8c257508  lw          $a1, 0x7508($at)
    ctx->pc = 0x2f9dfcu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x387508u));
    // 0x2f9e00: 0x30a6ffff  andi        $a2, $a1, 0xFFFF
    ctx->pc = 0x2f9e00u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x2f9e04: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x2f9e04u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2f9e08: 0xa61021  addu        $v0, $a1, $a2
    ctx->pc = 0x2f9e08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x2f9e0c: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x2f9e0cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f9e10: 0x73200  sll         $a2, $a3, 8
    ctx->pc = 0x2f9e10u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x2f9e14: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f9e14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f9e18: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2f9e18u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2f9e1c: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x2f9e1cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2f9e20: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x2f9e20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2f9e24: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2f9e24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2f9e28: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2f9e28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2f9e2c: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2f9e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2f9e30: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x2f9e30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2f9e34: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f9e34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f9e38: 0xac267508  sw          $a2, 0x7508($at)
    ctx->pc = 0x2f9e38u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2f9e3c: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x2f9e3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x2f9e40: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2f9e40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2f9e44: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x2F9E44u;
    {
        const bool branch_taken_0x2f9e44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f9e44) {
            ctx->pc = 0x2F9EC8u;
            goto label_2f9ec8;
        }
    }
    ctx->pc = 0x2F9E4Cu;
    // 0x2f9e4c: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x2f9e4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2f9e50: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x2f9e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2f9e54: 0x2442000a  addiu       $v0, $v0, 0xA
    ctx->pc = 0x2f9e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
    // 0x2f9e58: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2f9e58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2f9e5c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2f9e5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2f9e60: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2f9e60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f9e64: 0x34490300  ori         $t1, $v0, 0x300
    ctx->pc = 0x2f9e64u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)768);
    // 0x2f9e68: 0x9103c  dsll32      $v0, $t1, 0
    ctx->pc = 0x2f9e68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) << (32 + 0));
    // 0x2f9e6c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2f9e6cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2f9e70: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x2f9e70u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2f9e74: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2f9e74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2f9e78: 0x8c27dcf0  lw          $a3, -0x2310($at)
    ctx->pc = 0x2f9e78u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x2f9e7c: 0x24e201c0  addiu       $v0, $a3, 0x1C0
    ctx->pc = 0x2f9e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 448));
    // 0x2f9e80: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x2f9e80u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2f9e84: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x2f9e84u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x2f9e88: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2f9e88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2f9e8c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2f9e8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2f9e90: 0x3447ffff  ori         $a3, $v0, 0xFFFF
    ctx->pc = 0x2f9e90u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2f9e94: 0xa71024  and         $v0, $a1, $a3
    ctx->pc = 0x2f9e94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 7));
    // 0x2f9e98: 0x71002628  paddub      $a0, $t0, $zero
    ctx->pc = 0x2f9e98u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x2f9e9c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2f9e9cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f9ea0: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x2f9ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x2f9ea4: 0x24668ff0  addiu       $a2, $v1, -0x7010
    ctx->pc = 0x2f9ea4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938608));
    // 0x2f9ea8: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x2f9ea8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2f9eac: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2F9EACu;
    SET_GPR_U32(ctx, 31, 0x2F9EB4u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2F9EACu, 0x2F9EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9EB4u;
label_2f9eb4:
    // 0x2f9eb4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2f9eb4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2f9eb8: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2F9EB8u;
    SET_GPR_U32(ctx, 31, 0x2F9EC0u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2F9EB8u, 0x2F9EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9EC0u;
label_2f9ec0:
    // 0x2f9ec0: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x2F9EC0u;
    {
        const bool branch_taken_0x2f9ec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f9ec0) {
            ctx->pc = 0x2F9F34u;
            goto label_2f9f34;
        }
    }
    ctx->pc = 0x2F9EC8u;
label_2f9ec8:
    // 0x2f9ec8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2f9ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2f9ecc: 0x8c640010  lw          $a0, 0x10($v1)
    ctx->pc = 0x2f9eccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2f9ed0: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x2f9ed0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2f9ed4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2f9ed4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2f9ed8: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x2f9ed8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2f9edc: 0x34488500  ori         $t0, $v0, 0x8500
    ctx->pc = 0x2f9edcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34048);
    // 0x2f9ee0: 0x8103c  dsll32      $v0, $t0, 0
    ctx->pc = 0x2f9ee0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) << (32 + 0));
    // 0x2f9ee4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2f9ee4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2f9ee8: 0x3046ffff  andi        $a2, $v0, 0xFFFF
    ctx->pc = 0x2f9ee8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2f9eec: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2f9eecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2f9ef0: 0x8c23dcf0  lw          $v1, -0x2310($at)
    ctx->pc = 0x2f9ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x2f9ef4: 0x246201c0  addiu       $v0, $v1, 0x1C0
    ctx->pc = 0x2f9ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 448));
    // 0x2f9ef8: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x2f9ef8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2f9efc: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x2f9efcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x2f9f00: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2f9f00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2f9f04: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2f9f04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2f9f08: 0x3445ffff  ori         $a1, $v0, 0xFFFF
    ctx->pc = 0x2f9f08u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2f9f0c: 0x853824  and         $a3, $a0, $a1
    ctx->pc = 0x2f9f0cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x2f9f10: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x2f9f10u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x2f9f14: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2f9f14u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f9f18: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2f9f18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2f9f1c: 0x24468ff0  addiu       $a2, $v0, -0x7010
    ctx->pc = 0x2f9f1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938608));
    // 0x2f9f20: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2F9F20u;
    SET_GPR_U32(ctx, 31, 0x2F9F28u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2F9F20u, 0x2F9F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9F28u;
label_2f9f28:
    // 0x2f9f28: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2f9f28u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2f9f2c: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2F9F2Cu;
    SET_GPR_U32(ctx, 31, 0x2F9F34u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2F9F2Cu, 0x2F9F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9F34u;
label_2f9f34:
    // 0x2f9f34: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2f9f34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2f9f38: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x2f9f38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2f9f3c: 0x1060004d  beqz        $v1, . + 4 + (0x4D << 2)
    ctx->pc = 0x2F9F3Cu;
    {
        const bool branch_taken_0x2f9f3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f9f3c) {
            ctx->pc = 0x2FA074u;
            goto label_2fa074;
        }
    }
    ctx->pc = 0x2F9F44u;
    // 0x2f9f44: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2f9f44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2f9f48: 0x8c6500d4  lw          $a1, 0xD4($v1)
    ctx->pc = 0x2f9f48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x2f9f4c: 0x28a1000d  slti        $at, $a1, 0xD
    ctx->pc = 0x2f9f4cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)13) ? 1 : 0);
    // 0x2f9f50: 0x14200048  bnez        $at, . + 4 + (0x48 << 2)
    ctx->pc = 0x2F9F50u;
    {
        const bool branch_taken_0x2f9f50 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f9f50) {
            ctx->pc = 0x2FA074u;
            goto label_2fa074;
        }
    }
    ctx->pc = 0x2F9F58u;
    // 0x2f9f58: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x2f9f58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2f9f5c: 0x8ca600d4  lw          $a2, 0xD4($a1)
    ctx->pc = 0x2f9f5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 212)));
    // 0x2f9f60: 0x28c1000e  slti        $at, $a2, 0xE
    ctx->pc = 0x2f9f60u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)14) ? 1 : 0);
    // 0x2f9f64: 0x10200043  beqz        $at, . + 4 + (0x43 << 2)
    ctx->pc = 0x2F9F64u;
    {
        const bool branch_taken_0x2f9f64 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f9f64) {
            ctx->pc = 0x2FA074u;
            goto label_2fa074;
        }
    }
    ctx->pc = 0x2F9F6Cu;
    // 0x2f9f6c: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x2f9f6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2f9f70: 0x8ca50008  lw          $a1, 0x8($a1)
    ctx->pc = 0x2f9f70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2f9f74: 0x14a00020  bnez        $a1, . + 4 + (0x20 << 2)
    ctx->pc = 0x2F9F74u;
    {
        const bool branch_taken_0x2f9f74 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f9f74) {
            ctx->pc = 0x2F9FF8u;
            goto label_2f9ff8;
        }
    }
    ctx->pc = 0x2F9F7Cu;
    // 0x2f9f7c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2f9f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2f9f80: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x2f9f80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2f9f84: 0x2449000a  addiu       $t1, $v0, 0xA
    ctx->pc = 0x2f9f84u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
    // 0x2f9f88: 0x9103c  dsll32      $v0, $t1, 0
    ctx->pc = 0x2f9f88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) << (32 + 0));
    // 0x2f9f8c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2f9f8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2f9f90: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2f9f90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f9f94: 0x34470300  ori         $a3, $v0, 0x300
    ctx->pc = 0x2f9f94u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)768);
    // 0x2f9f98: 0x7103c  dsll32      $v0, $a3, 0
    ctx->pc = 0x2f9f98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 0));
    // 0x2f9f9c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2f9f9cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2f9fa0: 0x3046ffff  andi        $a2, $v0, 0xFFFF
    ctx->pc = 0x2f9fa0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2f9fa4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2f9fa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2f9fa8: 0x8c22dcf0  lw          $v0, -0x2310($at)
    ctx->pc = 0x2f9fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x2f9fac: 0x24420380  addiu       $v0, $v0, 0x380
    ctx->pc = 0x2f9facu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 896));
    // 0x2f9fb0: 0x2583c  dsll32      $t3, $v0, 0
    ctx->pc = 0x2f9fb0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2f9fb4: 0xb583e  dsrl32      $t3, $t3, 0
    ctx->pc = 0x2f9fb4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) >> (32 + 0));
    // 0x2f9fb8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2f9fb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2f9fbc: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2f9fbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2f9fc0: 0x3449ffff  ori         $t1, $v0, 0xFFFF
    ctx->pc = 0x2f9fc0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2f9fc4: 0x1693824  and         $a3, $t3, $t1
    ctx->pc = 0x2f9fc4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 11) & GPR_U64(ctx, 9));
    // 0x2f9fc8: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x2f9fc8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x2f9fcc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2f9fccu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f9fd0: 0x3c06003a  lui         $a2, 0x3A
    ctx->pc = 0x2f9fd0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)58 << 16));
    // 0x2f9fd4: 0x24c28ff0  addiu       $v0, $a2, -0x7010
    ctx->pc = 0x2f9fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294938608));
    // 0x2f9fd8: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x2f9fd8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2f9fdc: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2F9FDCu;
    SET_GPR_U32(ctx, 31, 0x2F9FE4u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2F9FDCu, 0x2F9FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9FE4u;
label_2f9fe4:
    // 0x2f9fe4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2f9fe4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2f9fe8: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2F9FE8u;
    SET_GPR_U32(ctx, 31, 0x2F9FF0u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2F9FE8u, 0x2F9FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9FF0u;
label_2f9ff0:
    // 0x2f9ff0: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x2F9FF0u;
    {
        const bool branch_taken_0x2f9ff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f9ff0) {
            ctx->pc = 0x2FA074u;
            goto label_2fa074;
        }
    }
    ctx->pc = 0x2F9FF8u;
label_2f9ff8:
    // 0x2f9ff8: 0x8fa70028  lw          $a3, 0x28($sp)
    ctx->pc = 0x2f9ff8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2f9ffc: 0x8ce70010  lw          $a3, 0x10($a3)
    ctx->pc = 0x2f9ffcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x2fa000: 0x24e9000a  addiu       $t1, $a3, 0xA
    ctx->pc = 0x2fa000u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), 10));
    // 0x2fa004: 0x9383c  dsll32      $a3, $t1, 0
    ctx->pc = 0x2fa004u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 9) << (32 + 0));
    // 0x2fa008: 0x7383e  dsrl32      $a3, $a3, 0
    ctx->pc = 0x2fa008u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> (32 + 0));
    // 0x2fa00c: 0x30ea00ff  andi        $t2, $a3, 0xFF
    ctx->pc = 0x2fa00cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x2fa010: 0x35470300  ori         $a3, $t2, 0x300
    ctx->pc = 0x2fa010u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)768);
    // 0x2fa014: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x2fa014u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x2fa018: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x2fa018u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
    // 0x2fa01c: 0x30e9ffff  andi        $t1, $a3, 0xFFFF
    ctx->pc = 0x2fa01cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x2fa020: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2fa020u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2fa024: 0x8c22dcf0  lw          $v0, -0x2310($at)
    ctx->pc = 0x2fa024u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x2fa028: 0x24420180  addiu       $v0, $v0, 0x180
    ctx->pc = 0x2fa028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x2fa02c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2fa02cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2fa030: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2fa030u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2fa034: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2fa034u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2fa038: 0x23c38  dsll        $a3, $v0, 16
    ctx->pc = 0x2fa038u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << 16);
    // 0x2fa03c: 0x34e2ffff  ori         $v0, $a3, 0xFFFF
    ctx->pc = 0x2fa03cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x2fa040: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2fa040u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2fa044: 0x71202628  paddub      $a0, $t1, $zero
    ctx->pc = 0x2fa044u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x2fa048: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2fa048u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2fa04c: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x2fa04cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x2fa050: 0x24668ff0  addiu       $a2, $v1, -0x7010
    ctx->pc = 0x2fa050u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938608));
    // 0x2fa054: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x2fa054u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2fa058: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2FA058u;
    SET_GPR_U32(ctx, 31, 0x2FA060u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2FA058u, 0x2FA060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA060u;
label_2fa060:
    // 0x2fa060: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x2fa060u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2fa064: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x2fa064u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x2fa068: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2FA068u;
    SET_GPR_U32(ctx, 31, 0x2FA070u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2FA068u, 0x2FA070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA070u;
label_2fa070:
    // 0x2fa070: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2fa070u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2fa074:
    // 0x2fa074: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2fa074u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2fa078: 0x8c8500d4  lw          $a1, 0xD4($a0)
    ctx->pc = 0x2fa078u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 212)));
    // 0x2fa07c: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x2fa07cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x2fa080: 0x14a3004c  bne         $a1, $v1, . + 4 + (0x4C << 2)
    ctx->pc = 0x2FA080u;
    {
        const bool branch_taken_0x2fa080 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x2fa080) {
            ctx->pc = 0x2FA1B4u;
            goto label_2fa1b4;
        }
    }
    ctx->pc = 0x2FA088u;
    // 0x2fa088: 0x8fa80028  lw          $t0, 0x28($sp)
    ctx->pc = 0x2fa088u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2fa08c: 0x8d030008  lw          $v1, 0x8($t0)
    ctx->pc = 0x2fa08cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x2fa090: 0x14600023  bnez        $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x2FA090u;
    {
        const bool branch_taken_0x2fa090 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fa090) {
            ctx->pc = 0x2FA120u;
            goto label_2fa120;
        }
    }
    ctx->pc = 0x2FA098u;
    // 0x2fa098: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2fa098u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2fa09c: 0x8c23dcf0  lw          $v1, -0x2310($at)
    ctx->pc = 0x2fa09cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x2fa0a0: 0x24670340  addiu       $a3, $v1, 0x340
    ctx->pc = 0x2fa0a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 832));
    // 0x2fa0a4: 0x2403001d  addiu       $v1, $zero, 0x1D
    ctx->pc = 0x2fa0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x2fa0a8: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x2fa0a8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x2fa0ac: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x2fa0acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2fa0b0: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x2fa0b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2fa0b4: 0xc065580  jal         func_195600
    ctx->pc = 0x2FA0B4u;
    SET_GPR_U32(ctx, 31, 0x2FA0BCu);
    ctx->pc = 0x195600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x195600u, 0x2FA0B4u, 0x2FA0BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA0BCu;
label_2fa0bc:
    // 0x2fa0bc: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2fa0bcu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2fa0c0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2fa0c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2fa0c4: 0x8c23dcf0  lw          $v1, -0x2310($at)
    ctx->pc = 0x2fa0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x2fa0c8: 0x24670380  addiu       $a3, $v1, 0x380
    ctx->pc = 0x2fa0c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 896));
    // 0x2fa0cc: 0x2406001d  addiu       $a2, $zero, 0x1D
    ctx->pc = 0x2fa0ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x2fa0d0: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x2fa0d0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x2fa0d4: 0x240800ff  addiu       $t0, $zero, 0xFF
    ctx->pc = 0x2fa0d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2fa0d8: 0x71002e28  paddub      $a1, $t0, $zero
    ctx->pc = 0x2fa0d8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x2fa0dc: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x2fa0dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2fa0e0: 0xc065580  jal         func_195600
    ctx->pc = 0x2FA0E0u;
    SET_GPR_U32(ctx, 31, 0x2FA0E8u);
    ctx->pc = 0x195600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x195600u, 0x2FA0E0u, 0x2FA0E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA0E8u;
label_2fa0e8:
    // 0x2fa0e8: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x2fa0e8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2fa0ec: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2fa0ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2fa0f0: 0x8c26dcf0  lw          $a2, -0x2310($at)
    ctx->pc = 0x2fa0f0u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x2fa0f4: 0x24c703c0  addiu       $a3, $a2, 0x3C0
    ctx->pc = 0x2fa0f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 960));
    // 0x2fa0f8: 0x2409001d  addiu       $t1, $zero, 0x1D
    ctx->pc = 0x2fa0f8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x2fa0fc: 0x71202628  paddub      $a0, $t1, $zero
    ctx->pc = 0x2fa0fcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x2fa100: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x2fa100u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2fa104: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x2fa104u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x2fa108: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x2fa108u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2fa10c: 0xc065580  jal         func_195600
    ctx->pc = 0x2FA10Cu;
    SET_GPR_U32(ctx, 31, 0x2FA114u);
    ctx->pc = 0x195600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x195600u, 0x2FA10Cu, 0x2FA114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA114u;
label_2fa114:
    // 0x2fa114: 0x70404628  paddub      $t0, $v0, $zero
    ctx->pc = 0x2fa114u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2fa118: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x2FA118u;
    {
        const bool branch_taken_0x2fa118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fa118) {
            ctx->pc = 0x2FA1B4u;
            goto label_2fa1b4;
        }
    }
    ctx->pc = 0x2FA120u;
label_2fa120:
    // 0x2fa120: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2fa120u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2fa124: 0x8c26dcf0  lw          $a2, -0x2310($at)
    ctx->pc = 0x2fa124u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x2fa128: 0x24c70180  addiu       $a3, $a2, 0x180
    ctx->pc = 0x2fa128u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 384));
    // 0x2fa12c: 0x2406001d  addiu       $a2, $zero, 0x1D
    ctx->pc = 0x2fa12cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x2fa130: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x2fa130u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x2fa134: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x2fa134u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2fa138: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x2fa138u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x2fa13c: 0x240c00ff  addiu       $t4, $zero, 0xFF
    ctx->pc = 0x2fa13cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2fa140: 0x71803628  paddub      $a2, $t4, $zero
    ctx->pc = 0x2fa140u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 12), GPR_VEC(ctx, 0)));
    // 0x2fa144: 0xc065580  jal         func_195600
    ctx->pc = 0x2FA144u;
    SET_GPR_U32(ctx, 31, 0x2FA14Cu);
    ctx->pc = 0x195600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x195600u, 0x2FA144u, 0x2FA14Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA14Cu;
label_2fa14c:
    // 0x2fa14c: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x2fa14cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2fa150: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2fa150u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2fa154: 0x8c26dcf0  lw          $a2, -0x2310($at)
    ctx->pc = 0x2fa154u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x2fa158: 0x24c801c0  addiu       $t0, $a2, 0x1C0
    ctx->pc = 0x2fa158u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 448));
    // 0x2fa15c: 0x2406001d  addiu       $a2, $zero, 0x1D
    ctx->pc = 0x2fa15cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x2fa160: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x2fa160u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x2fa164: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x2fa164u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2fa168: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x2fa168u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x2fa16c: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x2fa16cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2fa170: 0x70e03628  paddub      $a2, $a3, $zero
    ctx->pc = 0x2fa170u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x2fa174: 0x71003e28  paddub      $a3, $t0, $zero
    ctx->pc = 0x2fa174u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x2fa178: 0xc065580  jal         func_195600
    ctx->pc = 0x2FA178u;
    SET_GPR_U32(ctx, 31, 0x2FA180u);
    ctx->pc = 0x195600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x195600u, 0x2FA178u, 0x2FA180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA180u;
label_2fa180:
    // 0x2fa180: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x2fa180u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2fa184: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2fa184u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2fa188: 0x8c2bdcf0  lw          $t3, -0x2310($at)
    ctx->pc = 0x2fa188u;
    SET_GPR_S32(ctx, 11, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x2fa18c: 0x25670200  addiu       $a3, $t3, 0x200
    ctx->pc = 0x2fa18cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 11), 512));
    // 0x2fa190: 0x2408001d  addiu       $t0, $zero, 0x1D
    ctx->pc = 0x2fa190u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x2fa194: 0x71002628  paddub      $a0, $t0, $zero
    ctx->pc = 0x2fa194u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x2fa198: 0x240a00ff  addiu       $t2, $zero, 0xFF
    ctx->pc = 0x2fa198u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2fa19c: 0x71402e28  paddub      $a1, $t2, $zero
    ctx->pc = 0x2fa19cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x2fa1a0: 0x240800ff  addiu       $t0, $zero, 0xFF
    ctx->pc = 0x2fa1a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2fa1a4: 0x71003628  paddub      $a2, $t0, $zero
    ctx->pc = 0x2fa1a4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x2fa1a8: 0xc065580  jal         func_195600
    ctx->pc = 0x2FA1A8u;
    SET_GPR_U32(ctx, 31, 0x2FA1B0u);
    ctx->pc = 0x195600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x195600u, 0x2FA1A8u, 0x2FA1B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA1B0u;
label_2fa1b0:
    // 0x2fa1b0: 0x70404e28  paddub      $t1, $v0, $zero
    ctx->pc = 0x2fa1b0u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2fa1b4:
    // 0x2fa1b4: 0x8fa70028  lw          $a3, 0x28($sp)
    ctx->pc = 0x2fa1b4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2fa1b8: 0x8ce700d4  lw          $a3, 0xD4($a3)
    ctx->pc = 0x2fa1b8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 212)));
    // 0x2fa1bc: 0x28e7001e  slti        $a3, $a3, 0x1E
    ctx->pc = 0x2fa1bcu;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)30) ? 1 : 0);
    // 0x2fa1c0: 0x14e00006  bnez        $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FA1C0u;
    {
        const bool branch_taken_0x2fa1c0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fa1c0) {
            ctx->pc = 0x2FA1DCu;
            goto label_2fa1dc;
        }
    }
    ctx->pc = 0x2FA1C8u;
    // 0x2fa1c8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2fa1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2fa1cc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2fa1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2fa1d0: 0x38680010  xori        $t0, $v1, 0x10
    ctx->pc = 0x2fa1d0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)16);
    // 0x2fa1d4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2fa1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2fa1d8: 0xac680000  sw          $t0, 0x0($v1)
    ctx->pc = 0x2fa1d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 8));
label_2fa1dc:
    // 0x2fa1dc: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x2fa1dcu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fa1e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2fa1e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fa1e4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2fa1e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2fa1e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2FA1E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FA1E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FA1F0u;
}
