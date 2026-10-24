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

// Function: entry_00187f94
// Address: 0x187f94 - 0x187fa8
void entry_00187f94_0x187f94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00187f94_0x187f94");
#endif

    switch (ctx->pc) {
        case 0x187fa0u: goto label_187fa0;
        default: break;
    }

    ctx->pc = 0x187f94u;

    // 0x187f94: 0x24040016  addiu       $a0, $zero, 0x16
    ctx->pc = 0x187f94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x187f98: 0xc061014  jal         func_184050
    ctx->pc = 0x187F98u;
    SET_GPR_U32(ctx, 31, 0x187FA0u);
    ctx->pc = 0x184050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184050u, 0x187F98u, 0x187FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187FA0u;
label_187fa0:
    // 0x187fa0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x187FA0u;
    {
        const bool branch_taken_0x187fa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x187fa0) {
            ctx->pc = 0x187FF0u;
            return;
        }
    }
    ctx->pc = 0x187FA8u;
}
