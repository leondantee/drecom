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

// Function: entry_001b7f50
// Address: 0x1b7f50 - 0x1b7f64
void entry_001b7f50_0x1b7f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b7f50_0x1b7f50");
#endif

    switch (ctx->pc) {
        case 0x1b7f58u: goto label_1b7f58;
        default: break;
    }

    ctx->pc = 0x1b7f50u;

    // 0x1b7f50: 0xc0c5238  jal         func_3148E0
    ctx->pc = 0x1B7F50u;
    SET_GPR_U32(ctx, 31, 0x1B7F58u);
    ctx->pc = 0x3148E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3148E0u, 0x1B7F50u, 0x1B7F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7F58u;
label_1b7f58:
    // 0x1b7f58: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1b7f58u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1b7f5c: 0x100000f6  b           . + 4 + (0xF6 << 2)
    ctx->pc = 0x1B7F5Cu;
    {
        const bool branch_taken_0x1b7f5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7f5c) {
            ctx->pc = 0x1B8338u;
            return;
        }
    }
    ctx->pc = 0x1B7F64u;
}
