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

// Function: entry_001c4a68
// Address: 0x1c4a68 - 0x1c4a88
void entry_001c4a68_0x1c4a68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c4a68_0x1c4a68");
#endif

    ctx->pc = 0x1c4a68u;

    // 0x1c4a68: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x1c4a68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1c4a6c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1c4a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1c4a70: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1c4a70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c4a74: 0x24060503  addiu       $a2, $zero, 0x503
    ctx->pc = 0x1c4a74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1283));
    // 0x1c4a78: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c4a78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c4a7c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1c4a7cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c4a80: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1C4A80u;
    SET_GPR_U32(ctx, 31, 0x1C4A88u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1C4A80u, 0x1C4A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4A88u;
}
