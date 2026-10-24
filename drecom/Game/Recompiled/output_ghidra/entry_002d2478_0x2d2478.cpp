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

// Function: entry_002d2478
// Address: 0x2d2478 - 0x2d2484
void entry_002d2478_0x2d2478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d2478_0x2d2478");
#endif

    switch (ctx->pc) {
        case 0x2d2480u: goto label_2d2480;
        default: break;
    }

    ctx->pc = 0x2d2478u;

    // 0x2d2478: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x2D2478u;
    SET_GPR_U32(ctx, 31, 0x2D2480u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x2D2478u, 0x2D2480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2480u;
label_2d2480:
    // 0x2d2480: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d2480u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    ctx->pc = 0x2d2484u;
}
