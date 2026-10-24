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

// Function: entry_001f5c58
// Address: 0x1f5c58 - 0x1f5c78
void entry_001f5c58_0x1f5c58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f5c58_0x1f5c58");
#endif

    ctx->pc = 0x1f5c58u;

    // 0x1f5c58: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f5c58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f5c5c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1f5c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f5c60: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1f5c60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x1f5c64: 0x24061e0c  addiu       $a2, $zero, 0x1E0C
    ctx->pc = 0x1f5c64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7692));
    // 0x1f5c68: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1f5c68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f5c6c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1f5c6cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1f5c70: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1F5C70u;
    SET_GPR_U32(ctx, 31, 0x1F5C78u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1F5C70u, 0x1F5C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5C78u;
}
