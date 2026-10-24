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

// Function: entry_001ee434
// Address: 0x1ee434 - 0x1ee454
void entry_001ee434_0x1ee434(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ee434_0x1ee434");
#endif

    ctx->pc = 0x1ee434u;

    // 0x1ee434: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ee434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee438: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1ee438u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee43c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1ee43cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x1ee440: 0x24067808  addiu       $a2, $zero, 0x7808
    ctx->pc = 0x1ee440u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30728));
    // 0x1ee444: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1ee444u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ee448: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1ee448u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1ee44c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1EE44Cu;
    SET_GPR_U32(ctx, 31, 0x1EE454u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1EE44Cu, 0x1EE454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE454u;
}
