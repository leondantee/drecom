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

// Function: entry_002058e8
// Address: 0x2058e8 - 0x2058f4
void entry_002058e8_0x2058e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002058e8_0x2058e8");
#endif

    switch (ctx->pc) {
        case 0x2058f0u: goto label_2058f0;
        default: break;
    }

    ctx->pc = 0x2058e8u;

    // 0x2058e8: 0xc080f60  jal         func_203D80
    ctx->pc = 0x2058E8u;
    SET_GPR_U32(ctx, 31, 0x2058F0u);
    ctx->pc = 0x203D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203D80u, 0x2058E8u, 0x2058F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2058F0u;
label_2058f0:
    // 0x2058f0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2058f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    ctx->pc = 0x2058f4u;
}
