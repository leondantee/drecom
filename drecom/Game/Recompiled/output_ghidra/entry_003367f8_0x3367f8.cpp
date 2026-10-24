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

// Function: entry_003367f8
// Address: 0x3367f8 - 0x336808
void entry_003367f8_0x3367f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003367f8_0x3367f8");
#endif

    switch (ctx->pc) {
        case 0x336800u: goto label_336800;
        default: break;
    }

    ctx->pc = 0x3367f8u;

    // 0x3367f8: 0xc0cdb50  jal         func_336D40
    ctx->pc = 0x3367F8u;
    SET_GPR_U32(ctx, 31, 0x336800u);
    ctx->pc = 0x336D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336D40u, 0x3367F8u, 0x336800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336800u;
label_336800:
    // 0x336800: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x336800u;
    {
        const bool branch_taken_0x336800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x336800) {
            ctx->pc = 0x336810u;
            return;
        }
    }
    ctx->pc = 0x336808u;
}
