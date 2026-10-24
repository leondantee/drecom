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

// Function: entry_0015d23c
// Address: 0x15d23c - 0x15d254
void entry_0015d23c_0x15d23c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015d23c_0x15d23c");
#endif

    switch (ctx->pc) {
        case 0x15d24cu: goto label_15d24c;
        default: break;
    }

    ctx->pc = 0x15d23cu;

    // 0x15d23c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x15d23cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15d240: 0x244410b0  addiu       $a0, $v0, 0x10B0
    ctx->pc = 0x15d240u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4272));
    // 0x15d244: 0xc0624f8  jal         func_1893E0
    ctx->pc = 0x15D244u;
    SET_GPR_U32(ctx, 31, 0x15D24Cu);
    ctx->pc = 0x1893E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1893E0u, 0x15D244u, 0x15D24Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D24Cu;
label_15d24c:
    // 0x15d24c: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x15D24Cu;
    {
        const bool branch_taken_0x15d24c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15d24c) {
            ctx->pc = 0x15D32Cu;
            return;
        }
    }
    ctx->pc = 0x15D254u;
}
