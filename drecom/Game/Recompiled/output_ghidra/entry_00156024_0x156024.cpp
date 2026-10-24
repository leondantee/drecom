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

// Function: entry_00156024
// Address: 0x156024 - 0x156034
void entry_00156024_0x156024(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00156024_0x156024");
#endif

    switch (ctx->pc) {
        case 0x15602cu: goto label_15602c;
        default: break;
    }

    ctx->pc = 0x156024u;

    // 0x156024: 0xc055818  jal         func_156060
    ctx->pc = 0x156024u;
    SET_GPR_U32(ctx, 31, 0x15602Cu);
    ctx->pc = 0x156060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156060u, 0x156024u, 0x15602Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15602Cu;
label_15602c:
    // 0x15602c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x15602Cu;
    {
        const bool branch_taken_0x15602c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15602c) {
            ctx->pc = 0x15604Cu;
            return;
        }
    }
    ctx->pc = 0x156034u;
}
