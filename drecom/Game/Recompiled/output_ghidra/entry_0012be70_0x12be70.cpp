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

// Function: entry_0012be70
// Address: 0x12be70 - 0x12be7c
void entry_0012be70_0x12be70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012be70_0x12be70");
#endif

    switch (ctx->pc) {
        case 0x12be78u: goto label_12be78;
        default: break;
    }

    ctx->pc = 0x12be70u;

    // 0x12be70: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x12BE70u;
    SET_GPR_U32(ctx, 31, 0x12BE78u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x12BE70u, 0x12BE78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BE78u;
label_12be78:
    // 0x12be78: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x12be78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    ctx->pc = 0x12be7cu;
}
