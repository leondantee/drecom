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

// Function: entry_00292660
// Address: 0x292660 - 0x292670
void entry_00292660_0x292660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00292660_0x292660");
#endif

    switch (ctx->pc) {
        case 0x292668u: goto label_292668;
        default: break;
    }

    ctx->pc = 0x292660u;

    // 0x292660: 0xc0a4ab0  jal         func_292AC0
    ctx->pc = 0x292660u;
    SET_GPR_U32(ctx, 31, 0x292668u);
    ctx->pc = 0x292AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292AC0u, 0x292660u, 0x292668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292668u;
label_292668:
    // 0x292668: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x292668u;
    {
        const bool branch_taken_0x292668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x292668) {
            ctx->pc = 0x292688u;
            return;
        }
    }
    ctx->pc = 0x292670u;
}
