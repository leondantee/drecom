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

// Function: entry_0029d270
// Address: 0x29d270 - 0x29d280
void entry_0029d270_0x29d270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029d270_0x29d270");
#endif

    ctx->pc = 0x29d270u;

    // 0x29d270: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x29d270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29d274: 0x244410b0  addiu       $a0, $v0, 0x10B0
    ctx->pc = 0x29d274u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4272));
    // 0x29d278: 0xc0624f8  jal         func_1893E0
    ctx->pc = 0x29D278u;
    SET_GPR_U32(ctx, 31, 0x29D280u);
    ctx->pc = 0x1893E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1893E0u, 0x29D278u, 0x29D280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D280u;
}
