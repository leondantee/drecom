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

// Function: entry_001617a0
// Address: 0x1617a0 - 0x1617bc
void entry_001617a0_0x1617a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001617a0_0x1617a0");
#endif

    switch (ctx->pc) {
        case 0x1617a8u: goto label_1617a8;
        default: break;
    }

    ctx->pc = 0x1617a0u;

    // 0x1617a0: 0xc058348  jal         func_160D20
    ctx->pc = 0x1617A0u;
    SET_GPR_U32(ctx, 31, 0x1617A8u);
    ctx->pc = 0x160D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160D20u, 0x1617A0u, 0x1617A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1617A8u;
label_1617a8:
    // 0x1617a8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1617A8u;
    {
        const bool branch_taken_0x1617a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1617a8) {
            ctx->pc = 0x1617BCu;
            return;
        }
    }
    ctx->pc = 0x1617B0u;
    // 0x1617b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1617b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1617b4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1617B4u;
    {
        const bool branch_taken_0x1617b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1617b4) {
            ctx->pc = 0x161800u;
            return;
        }
    }
    ctx->pc = 0x1617BCu;
}
