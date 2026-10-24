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

// Function: entry_0015d428
// Address: 0x15d428 - 0x15d440
void entry_0015d428_0x15d428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015d428_0x15d428");
#endif

    switch (ctx->pc) {
        case 0x15d438u: goto label_15d438;
        default: break;
    }

    ctx->pc = 0x15d428u;

    // 0x15d428: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x15d428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15d42c: 0x244410b0  addiu       $a0, $v0, 0x10B0
    ctx->pc = 0x15d42cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4272));
    // 0x15d430: 0xc0624f8  jal         func_1893E0
    ctx->pc = 0x15D430u;
    SET_GPR_U32(ctx, 31, 0x15D438u);
    ctx->pc = 0x1893E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1893E0u, 0x15D430u, 0x15D438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D438u;
label_15d438:
    // 0x15d438: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x15D438u;
    {
        const bool branch_taken_0x15d438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15d438) {
            ctx->pc = 0x15D518u;
            return;
        }
    }
    ctx->pc = 0x15D440u;
}
