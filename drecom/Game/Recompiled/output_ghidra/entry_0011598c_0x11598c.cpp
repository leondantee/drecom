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

// Function: entry_0011598c
// Address: 0x11598c - 0x1159a4
void entry_0011598c_0x11598c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011598c_0x11598c");
#endif

    switch (ctx->pc) {
        case 0x11599cu: goto label_11599c;
        default: break;
    }

    ctx->pc = 0x11598cu;

    // 0x11598c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11598Cu;
    {
        const bool branch_taken_0x11598c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11598c) {
            ctx->pc = 0x1159A4u;
            return;
        }
    }
    ctx->pc = 0x115994u;
    // 0x115994: 0xc045bbc  jal         func_116EF0
    ctx->pc = 0x115994u;
    SET_GPR_U32(ctx, 31, 0x11599Cu);
    ctx->pc = 0x116EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116EF0u, 0x115994u, 0x11599Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11599Cu;
label_11599c:
    // 0x11599c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x11599cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1159a0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1159a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x1159a4u;
}
