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

// Function: entry_001d9774
// Address: 0x1d9774 - 0x1d9784
void entry_001d9774_0x1d9774(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d9774_0x1d9774");
#endif

    switch (ctx->pc) {
        case 0x1d977cu: goto label_1d977c;
        default: break;
    }

    ctx->pc = 0x1d9774u;

    // 0x1d9774: 0xc0766a4  jal         func_1D9A90
    ctx->pc = 0x1D9774u;
    SET_GPR_U32(ctx, 31, 0x1D977Cu);
    ctx->pc = 0x1D9A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A90u, 0x1D9774u, 0x1D977Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D977Cu;
label_1d977c:
    // 0x1d977c: 0x100000b6  b           . + 4 + (0xB6 << 2)
    ctx->pc = 0x1D977Cu;
    {
        const bool branch_taken_0x1d977c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d977c) {
            ctx->pc = 0x1D9A58u;
            return;
        }
    }
    ctx->pc = 0x1D9784u;
}
