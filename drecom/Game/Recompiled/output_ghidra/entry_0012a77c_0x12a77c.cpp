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

// Function: entry_0012a77c
// Address: 0x12a77c - 0x12a790
void entry_0012a77c_0x12a77c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012a77c_0x12a77c");
#endif

    switch (ctx->pc) {
        case 0x12a788u: goto label_12a788;
        default: break;
    }

    ctx->pc = 0x12a77cu;

    // 0x12a77c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x12a77cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12a780: 0xc049770  jal         func_125DC0
    ctx->pc = 0x12A780u;
    SET_GPR_U32(ctx, 31, 0x12A788u);
    ctx->pc = 0x125DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125DC0u, 0x12A780u, 0x12A788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A788u;
label_12a788:
    // 0x12a788: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x12A788u;
    {
        const bool branch_taken_0x12a788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a788) {
            ctx->pc = 0x12A7ECu;
            return;
        }
    }
    ctx->pc = 0x12A790u;
}
