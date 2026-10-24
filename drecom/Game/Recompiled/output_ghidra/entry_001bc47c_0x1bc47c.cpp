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

// Function: entry_001bc47c
// Address: 0x1bc47c - 0x1bc48c
void entry_001bc47c_0x1bc47c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bc47c_0x1bc47c");
#endif

    switch (ctx->pc) {
        case 0x1bc484u: goto label_1bc484;
        default: break;
    }

    ctx->pc = 0x1bc47cu;

    // 0x1bc47c: 0xc0c5238  jal         func_3148E0
    ctx->pc = 0x1BC47Cu;
    SET_GPR_U32(ctx, 31, 0x1BC484u);
    ctx->pc = 0x3148E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3148E0u, 0x1BC47Cu, 0x1BC484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC484u;
label_1bc484:
    // 0x1bc484: 0x10000329  b           . + 4 + (0x329 << 2)
    ctx->pc = 0x1BC484u;
    {
        const bool branch_taken_0x1bc484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc484) {
            ctx->pc = 0x1BD12Cu;
            return;
        }
    }
    ctx->pc = 0x1BC48Cu;
}
