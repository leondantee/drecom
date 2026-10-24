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

// Function: entry_00187f30
// Address: 0x187f30 - 0x187f44
void entry_00187f30_0x187f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00187f30_0x187f30");
#endif

    switch (ctx->pc) {
        case 0x187f3cu: goto label_187f3c;
        default: break;
    }

    ctx->pc = 0x187f30u;

    // 0x187f30: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x187f30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x187f34: 0xc061014  jal         func_184050
    ctx->pc = 0x187F34u;
    SET_GPR_U32(ctx, 31, 0x187F3Cu);
    ctx->pc = 0x184050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184050u, 0x187F34u, 0x187F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187F3Cu;
label_187f3c:
    // 0x187f3c: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x187F3Cu;
    {
        const bool branch_taken_0x187f3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x187f3c) {
            ctx->pc = 0x187FF0u;
            return;
        }
    }
    ctx->pc = 0x187F44u;
}
