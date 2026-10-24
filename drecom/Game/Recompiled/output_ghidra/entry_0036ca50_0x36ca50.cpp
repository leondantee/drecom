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

// Function: entry_0036ca50
// Address: 0x36ca50 - 0x36ca70
void entry_0036ca50_0x36ca50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0036ca50_0x36ca50");
#endif

    ctx->pc = 0x36ca50u;

    // 0x36ca50: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x36ca50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36ca54: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x36ca54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36ca58: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x36ca58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x36ca5c: 0x24065a0a  addiu       $a2, $zero, 0x5A0A
    ctx->pc = 0x36ca5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23050));
    // 0x36ca60: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x36ca60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36ca64: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x36ca64u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x36ca68: 0xc0965d0  jal         func_259740
    ctx->pc = 0x36CA68u;
    SET_GPR_U32(ctx, 31, 0x36CA70u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x36CA68u, 0x36CA70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36CA70u;
}
