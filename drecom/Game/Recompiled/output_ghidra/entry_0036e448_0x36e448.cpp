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

// Function: entry_0036e448
// Address: 0x36e448 - 0x36e454
void entry_0036e448_0x36e448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0036e448_0x36e448");
#endif

    switch (ctx->pc) {
        case 0x36e450u: goto label_36e450;
        default: break;
    }

    ctx->pc = 0x36e448u;

    // 0x36e448: 0xc05cd10  jal         func_173440
    ctx->pc = 0x36E448u;
    SET_GPR_U32(ctx, 31, 0x36E450u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x36E448u, 0x36E450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E450u;
label_36e450:
    // 0x36e450: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x36e450u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    ctx->pc = 0x36e454u;
}
