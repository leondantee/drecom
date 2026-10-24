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

// Function: entry_001b6504
// Address: 0x1b6504 - 0x1b6518
void entry_001b6504_0x1b6504(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b6504_0x1b6504");
#endif

    switch (ctx->pc) {
        case 0x1b650cu: goto label_1b650c;
        default: break;
    }

    ctx->pc = 0x1b6504u;

    // 0x1b6504: 0xc0c5238  jal         func_3148E0
    ctx->pc = 0x1B6504u;
    SET_GPR_U32(ctx, 31, 0x1B650Cu);
    ctx->pc = 0x3148E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3148E0u, 0x1B6504u, 0x1B650Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B650Cu;
label_1b650c:
    // 0x1b650c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1b650cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1b6510: 0x100001f3  b           . + 4 + (0x1F3 << 2)
    ctx->pc = 0x1B6510u;
    {
        const bool branch_taken_0x1b6510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6510) {
            ctx->pc = 0x1B6CE0u;
            return;
        }
    }
    ctx->pc = 0x1B6518u;
}
