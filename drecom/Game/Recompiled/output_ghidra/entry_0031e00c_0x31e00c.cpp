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

// Function: entry_0031e00c
// Address: 0x31e00c - 0x31e08c
void entry_0031e00c_0x31e00c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031e00c_0x31e00c");
#endif

    switch (ctx->pc) {
        case 0x31e040u: goto label_31e040;
        case 0x31e04cu: goto label_31e04c;
        case 0x31e080u: goto label_31e080;
        default: break;
    }

    ctx->pc = 0x31e00cu;

    // 0x31e00c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x31e00cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x31e010: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x31e010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x31e014: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x31e014u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31e018: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x31e018u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x31e01c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x31e01cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x31e020: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x31e020u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x31e024: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x31e024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x31e028: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x31e028u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x31e02c: 0x24046107  addiu       $a0, $zero, 0x6107
    ctx->pc = 0x31e02cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24839));
    // 0x31e030: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x31e030u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31e034: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x31e034u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x31e038: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x31E038u;
    SET_GPR_U32(ctx, 31, 0x31E040u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x31E038u, 0x31E040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E040u;
label_31e040:
    // 0x31e040: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x31e040u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x31e044: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x31E044u;
    SET_GPR_U32(ctx, 31, 0x31E04Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x31E044u, 0x31E04Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E04Cu;
label_31e04c:
    // 0x31e04c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x31e04cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x31e050: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x31e050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x31e054: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x31e054u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31e058: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x31e058u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x31e05c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x31e05cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x31e060: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x31e060u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x31e064: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x31e064u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x31e068: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x31e068u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x31e06c: 0x24046207  addiu       $a0, $zero, 0x6207
    ctx->pc = 0x31e06cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25095));
    // 0x31e070: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x31e070u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31e074: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x31e074u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x31e078: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x31E078u;
    SET_GPR_U32(ctx, 31, 0x31E080u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x31E078u, 0x31E080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E080u;
label_31e080:
    // 0x31e080: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x31e080u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x31e084: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x31E084u;
    SET_GPR_U32(ctx, 31, 0x31E08Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x31E084u, 0x31E08Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E08Cu;
}
