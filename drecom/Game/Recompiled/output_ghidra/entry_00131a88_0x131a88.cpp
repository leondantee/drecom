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

// Function: entry_00131a88
// Address: 0x131a88 - 0x131aa8
void entry_00131a88_0x131a88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00131a88_0x131a88");
#endif

    ctx->pc = 0x131a88u;

    // 0x131a88: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x131a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x131a8c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x131a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x131a90: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x131a90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x131a94: 0x2406003b  addiu       $a2, $zero, 0x3B
    ctx->pc = 0x131a94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x131a98: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x131a98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x131a9c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x131a9cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x131aa0: 0xc0965d0  jal         func_259740
    ctx->pc = 0x131AA0u;
    SET_GPR_U32(ctx, 31, 0x131AA8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x131AA0u, 0x131AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131AA8u;
}
