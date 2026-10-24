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

// Function: entry_002d3580
// Address: 0x2d3580 - 0x2d35a0
void entry_002d3580_0x2d3580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d3580_0x2d3580");
#endif

    ctx->pc = 0x2d3580u;

    // 0x2d3580: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d3580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3584: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d3584u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3588: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2d3588u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2d358c: 0x24063c13  addiu       $a2, $zero, 0x3C13
    ctx->pc = 0x2d358cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15379));
    // 0x2d3590: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x2d3590u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2d3594: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2d3594u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2d3598: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2D3598u;
    SET_GPR_U32(ctx, 31, 0x2D35A0u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2D3598u, 0x2D35A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D35A0u;
}
