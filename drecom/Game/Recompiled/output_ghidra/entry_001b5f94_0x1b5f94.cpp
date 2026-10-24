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

// Function: entry_001b5f94
// Address: 0x1b5f94 - 0x1b5fa8
void entry_001b5f94_0x1b5f94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b5f94_0x1b5f94");
#endif

    switch (ctx->pc) {
        case 0x1b5f9cu: goto label_1b5f9c;
        default: break;
    }

    ctx->pc = 0x1b5f94u;

    // 0x1b5f94: 0xc0c5238  jal         func_3148E0
    ctx->pc = 0x1B5F94u;
    SET_GPR_U32(ctx, 31, 0x1B5F9Cu);
    ctx->pc = 0x3148E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3148E0u, 0x1B5F94u, 0x1B5F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5F9Cu;
label_1b5f9c:
    // 0x1b5f9c: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x1b5f9cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1b5fa0: 0x1000034f  b           . + 4 + (0x34F << 2)
    ctx->pc = 0x1B5FA0u;
    {
        const bool branch_taken_0x1b5fa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5fa0) {
            ctx->pc = 0x1B6CE0u;
            return;
        }
    }
    ctx->pc = 0x1B5FA8u;
}
