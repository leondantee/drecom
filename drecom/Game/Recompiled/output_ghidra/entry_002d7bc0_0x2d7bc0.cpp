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

// Function: entry_002d7bc0
// Address: 0x2d7bc0 - 0x2d7be0
void entry_002d7bc0_0x2d7bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d7bc0_0x2d7bc0");
#endif

    ctx->pc = 0x2d7bc0u;

    // 0x2d7bc0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2d7bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d7bc4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2d7bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d7bc8: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2d7bc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2d7bcc: 0x24063c05  addiu       $a2, $zero, 0x3C05
    ctx->pc = 0x2d7bccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15365));
    // 0x2d7bd0: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x2d7bd0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2d7bd4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2d7bd4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2d7bd8: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2D7BD8u;
    SET_GPR_U32(ctx, 31, 0x2D7BE0u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2D7BD8u, 0x2D7BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7BE0u;
}
