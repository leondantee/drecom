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

// Function: entry_001bf84c
// Address: 0x1bf84c - 0x1bf86c
void entry_001bf84c_0x1bf84c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bf84c_0x1bf84c");
#endif

    ctx->pc = 0x1bf84cu;

    // 0x1bf84c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1bf84cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf850: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1bf850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf854: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1bf854u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1bf858: 0x24060a16  addiu       $a2, $zero, 0xA16
    ctx->pc = 0x1bf858u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2582));
    // 0x1bf85c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1bf85cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bf860: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1bf860u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1bf864: 0xc0967bc  jal         func_259EF0
    ctx->pc = 0x1BF864u;
    SET_GPR_U32(ctx, 31, 0x1BF86Cu);
    ctx->pc = 0x259EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259EF0u, 0x1BF864u, 0x1BF86Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF86Cu;
}
