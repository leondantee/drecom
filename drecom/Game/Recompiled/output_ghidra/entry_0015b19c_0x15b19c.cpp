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

// Function: entry_0015b19c
// Address: 0x15b19c - 0x15b1d0
void entry_0015b19c_0x15b19c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015b19c_0x15b19c");
#endif

    switch (ctx->pc) {
        case 0x15b1a8u: goto label_15b1a8;
        case 0x15b1b4u: goto label_15b1b4;
        default: break;
    }

    ctx->pc = 0x15b19cu;

    // 0x15b19c: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x15b19cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x15b1a0: 0xc05c04c  jal         func_170130
    ctx->pc = 0x15B1A0u;
    SET_GPR_U32(ctx, 31, 0x15B1A8u);
    ctx->pc = 0x170130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x170130u, 0x15B1A0u, 0x15B1A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B1A8u;
label_15b1a8:
    // 0x15b1a8: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x15b1a8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x15b1ac: 0xc097a5c  jal         func_25E970
    ctx->pc = 0x15B1ACu;
    SET_GPR_U32(ctx, 31, 0x15B1B4u);
    ctx->pc = 0x25E970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E970u, 0x15B1ACu, 0x15B1B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B1B4u;
label_15b1b4:
    // 0x15b1b4: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x15b1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x15b1b8: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x15b1b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x15b1bc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x15B1BCu;
    {
        const bool branch_taken_0x15b1bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b1bc) {
            ctx->pc = 0x15B1D0u;
            return;
        }
    }
    ctx->pc = 0x15B1C4u;
    // 0x15b1c4: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x15b1c4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x15b1c8: 0xc095df0  jal         func_2577C0
    ctx->pc = 0x15B1C8u;
    SET_GPR_U32(ctx, 31, 0x15B1D0u);
    ctx->pc = 0x2577C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2577C0u, 0x15B1C8u, 0x15B1D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B1D0u;
}
