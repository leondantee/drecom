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

// Function: entry_00187f44
// Address: 0x187f44 - 0x187f58
void entry_00187f44_0x187f44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00187f44_0x187f44");
#endif

    switch (ctx->pc) {
        case 0x187f50u: goto label_187f50;
        default: break;
    }

    ctx->pc = 0x187f44u;

    // 0x187f44: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x187f44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x187f48: 0xc061014  jal         func_184050
    ctx->pc = 0x187F48u;
    SET_GPR_U32(ctx, 31, 0x187F50u);
    ctx->pc = 0x184050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184050u, 0x187F48u, 0x187F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187F50u;
label_187f50:
    // 0x187f50: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x187F50u;
    {
        const bool branch_taken_0x187f50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x187f50) {
            ctx->pc = 0x187FF0u;
            return;
        }
    }
    ctx->pc = 0x187F58u;
}
