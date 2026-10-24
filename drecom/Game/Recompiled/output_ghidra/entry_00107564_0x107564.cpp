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

// Function: entry_00107564
// Address: 0x107564 - 0x107574
void entry_00107564_0x107564(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00107564_0x107564");
#endif

    switch (ctx->pc) {
        case 0x10756cu: goto label_10756c;
        default: break;
    }

    ctx->pc = 0x107564u;

    // 0x107564: 0xc041eaa  jal         func_107AA8
    ctx->pc = 0x107564u;
    SET_GPR_U32(ctx, 31, 0x10756Cu);
    ctx->pc = 0x107AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107AA8u, 0x107564u, 0x10756Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10756Cu;
label_10756c:
    // 0x10756c: 0x1000ffe6  b           . + 4 + (-0x1A << 2)
    ctx->pc = 0x10756Cu;
    {
        const bool branch_taken_0x10756c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10756c) {
            ctx->pc = 0x107508u;
            return;
        }
    }
    ctx->pc = 0x107574u;
}
