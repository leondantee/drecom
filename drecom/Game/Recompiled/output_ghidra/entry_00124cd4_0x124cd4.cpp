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

// Function: entry_00124cd4
// Address: 0x124cd4 - 0x124cf4
void entry_00124cd4_0x124cd4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00124cd4_0x124cd4");
#endif

    ctx->pc = 0x124cd4u;

    // 0x124cd4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x124cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x124cd8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x124cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x124cdc: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x124cdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x124ce0: 0x2406004a  addiu       $a2, $zero, 0x4A
    ctx->pc = 0x124ce0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
    // 0x124ce4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x124ce4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x124ce8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x124ce8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x124cec: 0xc0965d0  jal         func_259740
    ctx->pc = 0x124CECu;
    SET_GPR_U32(ctx, 31, 0x124CF4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x124CECu, 0x124CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124CF4u;
}
