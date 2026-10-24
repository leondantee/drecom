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

// Function: entry_0036e2e8
// Address: 0x36e2e8 - 0x36e2f4
void entry_0036e2e8_0x36e2e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0036e2e8_0x36e2e8");
#endif

    switch (ctx->pc) {
        case 0x36e2f0u: goto label_36e2f0;
        default: break;
    }

    ctx->pc = 0x36e2e8u;

    // 0x36e2e8: 0xc05cd10  jal         func_173440
    ctx->pc = 0x36E2E8u;
    SET_GPR_U32(ctx, 31, 0x36E2F0u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x36E2E8u, 0x36E2F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E2F0u;
label_36e2f0:
    // 0x36e2f0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x36e2f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    ctx->pc = 0x36e2f4u;
}
