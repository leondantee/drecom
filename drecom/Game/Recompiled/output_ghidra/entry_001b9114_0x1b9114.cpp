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

// Function: entry_001b9114
// Address: 0x1b9114 - 0x1b9128
void entry_001b9114_0x1b9114(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b9114_0x1b9114");
#endif

    switch (ctx->pc) {
        case 0x1b911cu: goto label_1b911c;
        default: break;
    }

    ctx->pc = 0x1b9114u;

    // 0x1b9114: 0xc0c5238  jal         func_3148E0
    ctx->pc = 0x1B9114u;
    SET_GPR_U32(ctx, 31, 0x1B911Cu);
    ctx->pc = 0x3148E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3148E0u, 0x1B9114u, 0x1B911Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B911Cu;
label_1b911c:
    // 0x1b911c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1b911cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1b9120: 0x1000019a  b           . + 4 + (0x19A << 2)
    ctx->pc = 0x1B9120u;
    {
        const bool branch_taken_0x1b9120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b9120) {
            ctx->pc = 0x1B978Cu;
            return;
        }
    }
    ctx->pc = 0x1B9128u;
}
