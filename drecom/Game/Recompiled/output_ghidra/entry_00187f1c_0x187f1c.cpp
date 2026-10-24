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

// Function: entry_00187f1c
// Address: 0x187f1c - 0x187f30
void entry_00187f1c_0x187f1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00187f1c_0x187f1c");
#endif

    switch (ctx->pc) {
        case 0x187f28u: goto label_187f28;
        default: break;
    }

    ctx->pc = 0x187f1cu;

    // 0x187f1c: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x187f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x187f20: 0xc061014  jal         func_184050
    ctx->pc = 0x187F20u;
    SET_GPR_U32(ctx, 31, 0x187F28u);
    ctx->pc = 0x184050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184050u, 0x187F20u, 0x187F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187F28u;
label_187f28:
    // 0x187f28: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x187F28u;
    {
        const bool branch_taken_0x187f28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x187f28) {
            ctx->pc = 0x187FF0u;
            return;
        }
    }
    ctx->pc = 0x187F30u;
}
