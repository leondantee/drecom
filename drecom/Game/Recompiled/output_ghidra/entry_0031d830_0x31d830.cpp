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

// Function: entry_0031d830
// Address: 0x31d830 - 0x31d8b0
void entry_0031d830_0x31d830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031d830_0x31d830");
#endif

    switch (ctx->pc) {
        case 0x31d864u: goto label_31d864;
        case 0x31d870u: goto label_31d870;
        case 0x31d8a4u: goto label_31d8a4;
        default: break;
    }

    ctx->pc = 0x31d830u;

    // 0x31d830: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x31d830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x31d834: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x31d834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x31d838: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x31d838u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31d83c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x31d83cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x31d840: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x31d840u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x31d844: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x31d844u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x31d848: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x31d848u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x31d84c: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x31d84cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x31d850: 0x24046107  addiu       $a0, $zero, 0x6107
    ctx->pc = 0x31d850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24839));
    // 0x31d854: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x31d854u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31d858: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x31d858u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x31d85c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x31D85Cu;
    SET_GPR_U32(ctx, 31, 0x31D864u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x31D85Cu, 0x31D864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D864u;
label_31d864:
    // 0x31d864: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x31d864u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x31d868: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x31D868u;
    SET_GPR_U32(ctx, 31, 0x31D870u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x31D868u, 0x31D870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D870u;
label_31d870:
    // 0x31d870: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x31d870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x31d874: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x31d874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x31d878: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x31d878u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31d87c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x31d87cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x31d880: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x31d880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x31d884: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x31d884u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x31d888: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x31d888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x31d88c: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x31d88cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x31d890: 0x24046207  addiu       $a0, $zero, 0x6207
    ctx->pc = 0x31d890u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25095));
    // 0x31d894: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x31d894u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31d898: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x31d898u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x31d89c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x31D89Cu;
    SET_GPR_U32(ctx, 31, 0x31D8A4u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x31D89Cu, 0x31D8A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D8A4u;
label_31d8a4:
    // 0x31d8a4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x31d8a4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x31d8a8: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x31D8A8u;
    SET_GPR_U32(ctx, 31, 0x31D8B0u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x31D8A8u, 0x31D8B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D8B0u;
}
