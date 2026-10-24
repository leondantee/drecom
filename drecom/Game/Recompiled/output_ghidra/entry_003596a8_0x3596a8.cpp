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

// Function: entry_003596a8
// Address: 0x3596a8 - 0x3596b4
void entry_003596a8_0x3596a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003596a8_0x3596a8");
#endif

    switch (ctx->pc) {
        case 0x3596b0u: goto label_3596b0;
        default: break;
    }

    ctx->pc = 0x3596a8u;

    // 0x3596a8: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x3596A8u;
    SET_GPR_U32(ctx, 31, 0x3596B0u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x3596A8u, 0x3596B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3596B0u;
label_3596b0:
    // 0x3596b0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3596b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    ctx->pc = 0x3596b4u;
}
