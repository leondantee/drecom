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

// Function: entry_00124b28
// Address: 0x124b28 - 0x124b48
void entry_00124b28_0x124b28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00124b28_0x124b28");
#endif

    ctx->pc = 0x124b28u;

    // 0x124b28: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x124b28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x124b2c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x124b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x124b30: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x124b30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x124b34: 0x24060049  addiu       $a2, $zero, 0x49
    ctx->pc = 0x124b34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
    // 0x124b38: 0x24070100  addiu       $a3, $zero, 0x100
    ctx->pc = 0x124b38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x124b3c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x124b3cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x124b40: 0xc0965d0  jal         func_259740
    ctx->pc = 0x124B40u;
    SET_GPR_U32(ctx, 31, 0x124B48u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x124B40u, 0x124B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124B48u;
}
