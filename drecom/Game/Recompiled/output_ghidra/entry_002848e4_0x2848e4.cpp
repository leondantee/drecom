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

// Function: entry_002848e4
// Address: 0x2848e4 - 0x2848f0
void entry_002848e4_0x2848e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002848e4_0x2848e4");
#endif

    ctx->pc = 0x2848e4u;

    // 0x2848e4: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x2848e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2848e8: 0xc084954  jal         func_212550
    ctx->pc = 0x2848E8u;
    SET_GPR_U32(ctx, 31, 0x2848F0u);
    ctx->pc = 0x212550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212550u, 0x2848E8u, 0x2848F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2848F0u;
}
