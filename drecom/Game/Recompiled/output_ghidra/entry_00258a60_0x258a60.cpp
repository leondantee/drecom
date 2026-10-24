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

// Function: entry_00258a60
// Address: 0x258a60 - 0x258a78
void entry_00258a60_0x258a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00258a60_0x258a60");
#endif

    switch (ctx->pc) {
        case 0x258a74u: goto label_258a74;
        default: break;
    }

    ctx->pc = 0x258a60u;

    // 0x258a60: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x258a60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x258a64: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x258a64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x258a68: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x258a68u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x258a6c: 0xc0962a8  jal         func_258AA0
    ctx->pc = 0x258A6Cu;
    SET_GPR_U32(ctx, 31, 0x258A74u);
    ctx->pc = 0x258AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258AA0u, 0x258A6Cu, 0x258A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258A74u;
label_258a74:
    // 0x258a74: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x258a74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x258a78u;
}
