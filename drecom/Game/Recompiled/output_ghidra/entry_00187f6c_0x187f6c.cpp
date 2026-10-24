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

// Function: entry_00187f6c
// Address: 0x187f6c - 0x187f80
void entry_00187f6c_0x187f6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00187f6c_0x187f6c");
#endif

    switch (ctx->pc) {
        case 0x187f78u: goto label_187f78;
        default: break;
    }

    ctx->pc = 0x187f6cu;

    // 0x187f6c: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x187f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x187f70: 0xc061014  jal         func_184050
    ctx->pc = 0x187F70u;
    SET_GPR_U32(ctx, 31, 0x187F78u);
    ctx->pc = 0x184050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184050u, 0x187F70u, 0x187F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187F78u;
label_187f78:
    // 0x187f78: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x187F78u;
    {
        const bool branch_taken_0x187f78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x187f78) {
            ctx->pc = 0x187FF0u;
            return;
        }
    }
    ctx->pc = 0x187F80u;
}
