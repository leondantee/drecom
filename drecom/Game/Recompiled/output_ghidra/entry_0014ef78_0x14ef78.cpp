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

// Function: entry_0014ef78
// Address: 0x14ef78 - 0x14ef8c
void entry_0014ef78_0x14ef78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014ef78_0x14ef78");
#endif

    switch (ctx->pc) {
        case 0x14ef84u: goto label_14ef84;
        default: break;
    }

    ctx->pc = 0x14ef78u;

    // 0x14ef78: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x14ef78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x14ef7c: 0xc0bc270  jal         func_2F09C0
    ctx->pc = 0x14EF7Cu;
    SET_GPR_U32(ctx, 31, 0x14EF84u);
    ctx->pc = 0x2F09C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F09C0u, 0x14EF7Cu, 0x14EF84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EF84u;
label_14ef84:
    // 0x14ef84: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x14EF84u;
    {
        const bool branch_taken_0x14ef84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ef84) {
            ctx->pc = 0x14EF98u;
            return;
        }
    }
    ctx->pc = 0x14EF8Cu;
}
