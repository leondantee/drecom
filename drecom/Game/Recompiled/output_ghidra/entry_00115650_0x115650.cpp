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

// Function: entry_00115650
// Address: 0x115650 - 0x115668
void entry_00115650_0x115650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00115650_0x115650");
#endif

    switch (ctx->pc) {
        case 0x115660u: goto label_115660;
        default: break;
    }

    ctx->pc = 0x115650u;

    // 0x115650: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x115650u;
    {
        const bool branch_taken_0x115650 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x115650) {
            ctx->pc = 0x115668u;
            return;
        }
    }
    ctx->pc = 0x115658u;
    // 0x115658: 0xc045bbc  jal         func_116EF0
    ctx->pc = 0x115658u;
    SET_GPR_U32(ctx, 31, 0x115660u);
    ctx->pc = 0x116EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116EF0u, 0x115658u, 0x115660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115660u;
label_115660:
    // 0x115660: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x115660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x115664: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x115664u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x115668u;
}
