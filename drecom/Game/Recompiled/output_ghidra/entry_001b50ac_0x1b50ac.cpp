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

// Function: entry_001b50ac
// Address: 0x1b50ac - 0x1b50c8
void entry_001b50ac_0x1b50ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b50ac_0x1b50ac");
#endif

    switch (ctx->pc) {
        case 0x1b50b4u: goto label_1b50b4;
        default: break;
    }

    ctx->pc = 0x1b50acu;

    // 0x1b50ac: 0xc058294  jal         func_160A50
    ctx->pc = 0x1B50ACu;
    SET_GPR_U32(ctx, 31, 0x1B50B4u);
    ctx->pc = 0x160A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160A50u, 0x1B50ACu, 0x1B50B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B50B4u;
label_1b50b4:
    // 0x1b50b4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B50B4u;
    {
        const bool branch_taken_0x1b50b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b50b4) {
            ctx->pc = 0x1B50C8u;
            return;
        }
    }
    ctx->pc = 0x1B50BCu;
    // 0x1b50bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b50bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b50c0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B50C0u;
    {
        const bool branch_taken_0x1b50c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b50c0) {
            ctx->pc = 0x1B50CCu;
            return;
        }
    }
    ctx->pc = 0x1B50C8u;
}
