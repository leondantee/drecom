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

// Function: entry_0031df84
// Address: 0x31df84 - 0x31e00c
void entry_0031df84_0x31df84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031df84_0x31df84");
#endif

    switch (ctx->pc) {
        case 0x31dfb8u: goto label_31dfb8;
        case 0x31dfc4u: goto label_31dfc4;
        case 0x31dff8u: goto label_31dff8;
        case 0x31e004u: goto label_31e004;
        default: break;
    }

    ctx->pc = 0x31df84u;

    // 0x31df84: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x31df84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x31df88: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x31df88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x31df8c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x31df8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31df90: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x31df90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x31df94: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x31df94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x31df98: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x31df98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x31df9c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x31df9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x31dfa0: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x31dfa0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x31dfa4: 0x24046102  addiu       $a0, $zero, 0x6102
    ctx->pc = 0x31dfa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24834));
    // 0x31dfa8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x31dfa8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31dfac: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x31dfacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x31dfb0: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x31DFB0u;
    SET_GPR_U32(ctx, 31, 0x31DFB8u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x31DFB0u, 0x31DFB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31DFB8u;
label_31dfb8:
    // 0x31dfb8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x31dfb8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x31dfbc: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x31DFBCu;
    SET_GPR_U32(ctx, 31, 0x31DFC4u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x31DFBCu, 0x31DFC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31DFC4u;
label_31dfc4:
    // 0x31dfc4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x31dfc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x31dfc8: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x31dfc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x31dfcc: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x31dfccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31dfd0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x31dfd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x31dfd4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x31dfd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x31dfd8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x31dfd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x31dfdc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x31dfdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x31dfe0: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x31dfe0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x31dfe4: 0x24046202  addiu       $a0, $zero, 0x6202
    ctx->pc = 0x31dfe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25090));
    // 0x31dfe8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x31dfe8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31dfec: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x31dfecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x31dff0: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x31DFF0u;
    SET_GPR_U32(ctx, 31, 0x31DFF8u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x31DFF0u, 0x31DFF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31DFF8u;
label_31dff8:
    // 0x31dff8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x31dff8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x31dffc: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x31DFFCu;
    SET_GPR_U32(ctx, 31, 0x31E004u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x31DFFCu, 0x31E004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E004u;
label_31e004:
    // 0x31e004: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x31E004u;
    {
        const bool branch_taken_0x31e004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31e004) {
            ctx->pc = 0x31E08Cu;
            return;
        }
    }
    ctx->pc = 0x31E00Cu;
}
