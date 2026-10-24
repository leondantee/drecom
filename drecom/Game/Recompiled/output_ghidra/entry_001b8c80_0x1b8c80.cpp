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

// Function: entry_001b8c80
// Address: 0x1b8c80 - 0x1b8c94
void entry_001b8c80_0x1b8c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b8c80_0x1b8c80");
#endif

    switch (ctx->pc) {
        case 0x1b8c88u: goto label_1b8c88;
        default: break;
    }

    ctx->pc = 0x1b8c80u;

    // 0x1b8c80: 0xc0c5238  jal         func_3148E0
    ctx->pc = 0x1B8C80u;
    SET_GPR_U32(ctx, 31, 0x1B8C88u);
    ctx->pc = 0x3148E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3148E0u, 0x1B8C80u, 0x1B8C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8C88u;
label_1b8c88:
    // 0x1b8c88: 0x70404628  paddub      $t0, $v0, $zero
    ctx->pc = 0x1b8c88u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1b8c8c: 0x100002bf  b           . + 4 + (0x2BF << 2)
    ctx->pc = 0x1B8C8Cu;
    {
        const bool branch_taken_0x1b8c8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b8c8c) {
            ctx->pc = 0x1B978Cu;
            return;
        }
    }
    ctx->pc = 0x1B8C94u;
}
