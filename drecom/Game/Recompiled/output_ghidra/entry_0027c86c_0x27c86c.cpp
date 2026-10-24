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

// Function: entry_0027c86c
// Address: 0x27c86c - 0x27c880
void entry_0027c86c_0x27c86c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027c86c_0x27c86c");
#endif

    switch (ctx->pc) {
        case 0x27c878u: goto label_27c878;
        default: break;
    }

    ctx->pc = 0x27c86cu;

    // 0x27c86c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x27c86cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27c870: 0xc084964  jal         func_212590
    ctx->pc = 0x27C870u;
    SET_GPR_U32(ctx, 31, 0x27C878u);
    ctx->pc = 0x212590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212590u, 0x27C870u, 0x27C878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C878u;
label_27c878:
    // 0x27c878: 0x1000ffe2  b           . + 4 + (-0x1E << 2)
    ctx->pc = 0x27C878u;
    {
        const bool branch_taken_0x27c878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c878) {
            ctx->pc = 0x27C804u;
            return;
        }
    }
    ctx->pc = 0x27C880u;
}
