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

// Function: entry_00312b80
// Address: 0x312b80 - 0x312be8
void entry_00312b80_0x312b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00312b80_0x312b80");
#endif

    switch (ctx->pc) {
        case 0x312be4u: goto label_312be4;
        default: break;
    }

    ctx->pc = 0x312b80u;

    // 0x312b80: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x312b80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x312b84: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x312b84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x312b88: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x312b88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x312b8c: 0x8c820130  lw          $v0, 0x130($a0)
    ctx->pc = 0x312b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x312b90: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x312b90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x312b94: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x312b94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x312b98: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x312b98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x312b9c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x312b9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x312ba0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x312ba0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x312ba4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x312ba4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x312ba8: 0x622024  and         $a0, $v1, $v0
    ctx->pc = 0x312ba8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x312bac: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x312bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x312bb0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x312bb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x312bb4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x312bb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x312bb8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x312bb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x312bbc: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x312bbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x312bc0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x312bc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x312bc4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x312bc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x312bc8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x312bc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x312bcc: 0x443825  or          $a3, $v0, $a0
    ctx->pc = 0x312bccu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x312bd0: 0x24043403  addiu       $a0, $zero, 0x3403
    ctx->pc = 0x312bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13315));
    // 0x312bd4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x312bd4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x312bd8: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x312bd8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x312bdc: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x312BDCu;
    SET_GPR_U32(ctx, 31, 0x312BE4u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x312BDCu, 0x312BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312BE4u;
label_312be4:
    // 0x312be4: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x312be4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x312be8u;
}
