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

// Function: entry_0011318c
// Address: 0x11318c - 0x11319c
void entry_0011318c_0x11318c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011318c_0x11318c");
#endif

    switch (ctx->pc) {
        case 0x113194u: goto label_113194;
        default: break;
    }

    ctx->pc = 0x11318cu;

    // 0x11318c: 0xc047c7c  jal         func_11F1F0
    ctx->pc = 0x11318Cu;
    SET_GPR_U32(ctx, 31, 0x113194u);
    ctx->pc = 0x11F1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F1F0u, 0x11318Cu, 0x113194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113194u;
label_113194:
    // 0x113194: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x113194u;
    {
        const bool branch_taken_0x113194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113194u;
        // 0x113198: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113194) {
            ctx->pc = 0x1131A0u;
            return;
        }
    }
    ctx->pc = 0x11319Cu;
}
