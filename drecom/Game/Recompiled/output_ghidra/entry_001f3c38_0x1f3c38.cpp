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

// Function: entry_001f3c38
// Address: 0x1f3c38 - 0x1f3c58
void entry_001f3c38_0x1f3c38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f3c38_0x1f3c38");
#endif

    ctx->pc = 0x1f3c38u;

    // 0x1f3c38: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f3c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f3c3c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1f3c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f3c40: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1f3c40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x1f3c44: 0x24067809  addiu       $a2, $zero, 0x7809
    ctx->pc = 0x1f3c44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30729));
    // 0x1f3c48: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1f3c48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f3c4c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1f3c4cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1f3c50: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1F3C50u;
    SET_GPR_U32(ctx, 31, 0x1F3C58u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1F3C50u, 0x1F3C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3C58u;
}
