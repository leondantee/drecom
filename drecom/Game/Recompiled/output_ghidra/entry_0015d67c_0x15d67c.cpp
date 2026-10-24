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

// Function: entry_0015d67c
// Address: 0x15d67c - 0x15d694
void entry_0015d67c_0x15d67c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015d67c_0x15d67c");
#endif

    switch (ctx->pc) {
        case 0x15d68cu: goto label_15d68c;
        default: break;
    }

    ctx->pc = 0x15d67cu;

    // 0x15d67c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x15d67cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15d680: 0x244410b0  addiu       $a0, $v0, 0x10B0
    ctx->pc = 0x15d680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4272));
    // 0x15d684: 0xc0624f8  jal         func_1893E0
    ctx->pc = 0x15D684u;
    SET_GPR_U32(ctx, 31, 0x15D68Cu);
    ctx->pc = 0x1893E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1893E0u, 0x15D684u, 0x15D68Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D68Cu;
label_15d68c:
    // 0x15d68c: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x15D68Cu;
    {
        const bool branch_taken_0x15d68c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15d68c) {
            ctx->pc = 0x15D76Cu;
            return;
        }
    }
    ctx->pc = 0x15D694u;
}
