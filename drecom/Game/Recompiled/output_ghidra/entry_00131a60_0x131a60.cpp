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

// Function: entry_00131a60
// Address: 0x131a60 - 0x131a88
void entry_00131a60_0x131a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00131a60_0x131a60");
#endif

    switch (ctx->pc) {
        case 0x131a80u: goto label_131a80;
        default: break;
    }

    ctx->pc = 0x131a60u;

    // 0x131a60: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x131a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x131a64: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x131a64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x131a68: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x131a68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x131a6c: 0x2406003a  addiu       $a2, $zero, 0x3A
    ctx->pc = 0x131a6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x131a70: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x131a70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x131a74: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x131a74u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x131a78: 0xc0965d0  jal         func_259740
    ctx->pc = 0x131A78u;
    SET_GPR_U32(ctx, 31, 0x131A80u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x131A78u, 0x131A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131A80u;
label_131a80:
    // 0x131a80: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x131A80u;
    {
        const bool branch_taken_0x131a80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x131a80) {
            ctx->pc = 0x131AA8u;
            return;
        }
    }
    ctx->pc = 0x131A88u;
}
