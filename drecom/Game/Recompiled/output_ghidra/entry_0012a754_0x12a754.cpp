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

// Function: entry_0012a754
// Address: 0x12a754 - 0x12a768
void entry_0012a754_0x12a754(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012a754_0x12a754");
#endif

    switch (ctx->pc) {
        case 0x12a760u: goto label_12a760;
        default: break;
    }

    ctx->pc = 0x12a754u;

    // 0x12a754: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x12a754u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12a758: 0xc04a574  jal         func_1295D0
    ctx->pc = 0x12A758u;
    SET_GPR_U32(ctx, 31, 0x12A760u);
    ctx->pc = 0x1295D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1295D0u, 0x12A758u, 0x12A760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A760u;
label_12a760:
    // 0x12a760: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x12A760u;
    {
        const bool branch_taken_0x12a760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a760) {
            ctx->pc = 0x12A7ECu;
            return;
        }
    }
    ctx->pc = 0x12A768u;
}
