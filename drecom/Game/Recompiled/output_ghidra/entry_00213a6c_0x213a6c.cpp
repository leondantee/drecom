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

// Function: entry_00213a6c
// Address: 0x213a6c - 0x213a74
void entry_00213a6c_0x213a6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00213a6c_0x213a6c");
#endif

    ctx->pc = 0x213a6cu;

    // 0x213a6c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x213A6Cu;
    {
        const bool branch_taken_0x213a6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x213A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213A6Cu;
        // 0x213a70: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213a6c) {
            ctx->pc = 0x213A94u;
            return;
        }
    }
    ctx->pc = 0x213A74u;
}
