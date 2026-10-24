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

// Function: entry_00283c78
// Address: 0x283c78 - 0x283c9c
void entry_00283c78_0x283c78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00283c78_0x283c78");
#endif

    switch (ctx->pc) {
        case 0x283c90u: goto label_283c90;
        default: break;
    }

    ctx->pc = 0x283c78u;

    // 0x283c78: 0x34049302  ori         $a0, $zero, 0x9302
    ctx->pc = 0x283c78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)37634);
    // 0x283c7c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x283c7cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x283c80: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x283c80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x283c84: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x283c84u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x283c88: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x283C88u;
    SET_GPR_U32(ctx, 31, 0x283C90u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x283C88u, 0x283C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283C90u;
label_283c90:
    // 0x283c90: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x283c90u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x283c94: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x283C94u;
    SET_GPR_U32(ctx, 31, 0x283C9Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x283C94u, 0x283C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283C9Cu;
}
