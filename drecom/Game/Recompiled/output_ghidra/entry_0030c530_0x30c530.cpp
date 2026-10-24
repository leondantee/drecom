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

// Function: entry_0030c530
// Address: 0x30c530 - 0x30c5d0
void entry_0030c530_0x30c530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0030c530_0x30c530");
#endif

    switch (ctx->pc) {
        case 0x30c580u: goto label_30c580;
        case 0x30c58cu: goto label_30c58c;
        case 0x30c5c4u: goto label_30c5c4;
        default: break;
    }

    ctx->pc = 0x30c530u;

    // 0x30c530: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x30c530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30c534: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x30c534u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x30c538: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x30c538u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x30c53c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x30c53cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x30c540: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x30C540u;
    {
        const bool branch_taken_0x30c540 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30c540) {
            ctx->pc = 0x30C5D0u;
            return;
        }
    }
    ctx->pc = 0x30C548u;
    // 0x30c548: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x30c548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30c54c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x30c54cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x30c550: 0x24420140  addiu       $v0, $v0, 0x140
    ctx->pc = 0x30c550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 320));
    // 0x30c554: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x30c554u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x30c558: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x30c558u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x30c55c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x30c55cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x30c560: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x30c560u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x30c564: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x30c564u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x30c568: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x30c568u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x30c56c: 0x24045500  addiu       $a0, $zero, 0x5500
    ctx->pc = 0x30c56cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21760));
    // 0x30c570: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x30c570u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30c574: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x30c574u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x30c578: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x30C578u;
    SET_GPR_U32(ctx, 31, 0x30C580u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x30C578u, 0x30C580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C580u;
label_30c580:
    // 0x30c580: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x30c580u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x30c584: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x30C584u;
    SET_GPR_U32(ctx, 31, 0x30C58Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x30C584u, 0x30C58Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C58Cu;
label_30c58c:
    // 0x30c58c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x30c58cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30c590: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x30c590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x30c594: 0x24420140  addiu       $v0, $v0, 0x140
    ctx->pc = 0x30c594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 320));
    // 0x30c598: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x30c598u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x30c59c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x30c59cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x30c5a0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x30c5a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x30c5a4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x30c5a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x30c5a8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x30c5a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x30c5ac: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x30c5acu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x30c5b0: 0x24045500  addiu       $a0, $zero, 0x5500
    ctx->pc = 0x30c5b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21760));
    // 0x30c5b4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x30c5b4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30c5b8: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x30c5b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x30c5bc: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x30C5BCu;
    SET_GPR_U32(ctx, 31, 0x30C5C4u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x30C5BCu, 0x30C5C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C5C4u;
label_30c5c4:
    // 0x30c5c4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x30c5c4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x30c5c8: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x30C5C8u;
    SET_GPR_U32(ctx, 31, 0x30C5D0u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x30C5C8u, 0x30C5D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C5D0u;
}
