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

// Function: entry_00187f58
// Address: 0x187f58 - 0x187f6c
void entry_00187f58_0x187f58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00187f58_0x187f58");
#endif

    switch (ctx->pc) {
        case 0x187f64u: goto label_187f64;
        default: break;
    }

    ctx->pc = 0x187f58u;

    // 0x187f58: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x187f58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x187f5c: 0xc061014  jal         func_184050
    ctx->pc = 0x187F5Cu;
    SET_GPR_U32(ctx, 31, 0x187F64u);
    ctx->pc = 0x184050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184050u, 0x187F5Cu, 0x187F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187F64u;
label_187f64:
    // 0x187f64: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x187F64u;
    {
        const bool branch_taken_0x187f64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x187f64) {
            ctx->pc = 0x187FF0u;
            return;
        }
    }
    ctx->pc = 0x187F6Cu;
}
