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

// Function: entry_0036ec40
// Address: 0x36ec40 - 0x36ec4c
void entry_0036ec40_0x36ec40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0036ec40_0x36ec40");
#endif

    switch (ctx->pc) {
        case 0x36ec48u: goto label_36ec48;
        default: break;
    }

    ctx->pc = 0x36ec40u;

    // 0x36ec40: 0xc05cd10  jal         func_173440
    ctx->pc = 0x36EC40u;
    SET_GPR_U32(ctx, 31, 0x36EC48u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x36EC40u, 0x36EC48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36EC48u;
label_36ec48:
    // 0x36ec48: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x36ec48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    ctx->pc = 0x36ec4cu;
}
