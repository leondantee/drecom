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

// Function: entry_00374910
// Address: 0x374910 - 0x374920
void entry_00374910_0x374910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00374910_0x374910");
#endif

    ctx->pc = 0x374910u;

    // 0x374910: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x374910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x374914: 0x244410b0  addiu       $a0, $v0, 0x10B0
    ctx->pc = 0x374914u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4272));
    // 0x374918: 0xc0624f8  jal         func_1893E0
    ctx->pc = 0x374918u;
    SET_GPR_U32(ctx, 31, 0x374920u);
    ctx->pc = 0x1893E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1893E0u, 0x374918u, 0x374920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374920u;
}
