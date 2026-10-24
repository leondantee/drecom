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

// Function: entry_0014ef50
// Address: 0x14ef50 - 0x14ef64
void entry_0014ef50_0x14ef50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014ef50_0x14ef50");
#endif

    switch (ctx->pc) {
        case 0x14ef5cu: goto label_14ef5c;
        default: break;
    }

    ctx->pc = 0x14ef50u;

    // 0x14ef50: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x14ef50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x14ef54: 0xc0bc270  jal         func_2F09C0
    ctx->pc = 0x14EF54u;
    SET_GPR_U32(ctx, 31, 0x14EF5Cu);
    ctx->pc = 0x2F09C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F09C0u, 0x14EF54u, 0x14EF5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EF5Cu;
label_14ef5c:
    // 0x14ef5c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x14EF5Cu;
    {
        const bool branch_taken_0x14ef5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ef5c) {
            ctx->pc = 0x14EF98u;
            return;
        }
    }
    ctx->pc = 0x14EF64u;
}
