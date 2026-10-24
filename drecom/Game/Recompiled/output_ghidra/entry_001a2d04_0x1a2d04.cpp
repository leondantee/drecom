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

// Function: entry_001a2d04
// Address: 0x1a2d04 - 0x1a2d10
void entry_001a2d04_0x1a2d04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a2d04_0x1a2d04");
#endif

    ctx->pc = 0x1a2d04u;

    // 0x1a2d04: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1a2d04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a2d08: 0xc068a24  jal         func_1A2890
    ctx->pc = 0x1A2D08u;
    SET_GPR_U32(ctx, 31, 0x1A2D10u);
    ctx->pc = 0x1A2890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2890u, 0x1A2D08u, 0x1A2D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2D10u;
}
