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

// Function: entry_0023a700
// Address: 0x23a700 - 0x23a720
void entry_0023a700_0x23a700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023a700_0x23a700");
#endif

    ctx->pc = 0x23a700u;

    // 0x23a700: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x23a700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23a704: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x23a704u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23a708: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x23a708u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x23a70c: 0x2406321f  addiu       $a2, $zero, 0x321F
    ctx->pc = 0x23a70cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12831));
    // 0x23a710: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x23a710u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23a714: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x23a714u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x23a718: 0xc0965d0  jal         func_259740
    ctx->pc = 0x23A718u;
    SET_GPR_U32(ctx, 31, 0x23A720u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x23A718u, 0x23A720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A720u;
}
