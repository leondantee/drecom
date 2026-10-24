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

// Function: entry_00213874
// Address: 0x213874 - 0x213884
void entry_00213874_0x213874(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00213874_0x213874");
#endif

    switch (ctx->pc) {
        case 0x21387cu: goto label_21387c;
        default: break;
    }

    ctx->pc = 0x213874u;

    // 0x213874: 0xc0852d4  jal         func_214B50
    ctx->pc = 0x213874u;
    SET_GPR_U32(ctx, 31, 0x21387Cu);
    ctx->pc = 0x214B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214B50u, 0x213874u, 0x21387Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21387Cu;
label_21387c:
    // 0x21387c: 0x1000ffe2  b           . + 4 + (-0x1E << 2)
    ctx->pc = 0x21387Cu;
    {
        const bool branch_taken_0x21387c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21387c) {
            ctx->pc = 0x213808u;
            return;
        }
    }
    ctx->pc = 0x213884u;
}
