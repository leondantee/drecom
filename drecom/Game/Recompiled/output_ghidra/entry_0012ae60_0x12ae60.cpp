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

// Function: entry_0012ae60
// Address: 0x12ae60 - 0x12ae80
void entry_0012ae60_0x12ae60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012ae60_0x12ae60");
#endif

    ctx->pc = 0x12ae60u;

    // 0x12ae60: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x12ae60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12ae64: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x12ae64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12ae68: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x12ae68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x12ae6c: 0x24063c45  addiu       $a2, $zero, 0x3C45
    ctx->pc = 0x12ae6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15429));
    // 0x12ae70: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x12ae70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12ae74: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x12ae74u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x12ae78: 0xc0965d0  jal         func_259740
    ctx->pc = 0x12AE78u;
    SET_GPR_U32(ctx, 31, 0x12AE80u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x12AE78u, 0x12AE80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12AE80u;
}
