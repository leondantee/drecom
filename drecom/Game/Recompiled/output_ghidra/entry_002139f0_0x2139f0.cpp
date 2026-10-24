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

// Function: entry_002139f0
// Address: 0x2139f0 - 0x2139f8
void entry_002139f0_0x2139f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002139f0_0x2139f0");
#endif

    ctx->pc = 0x2139f0u;

    // 0x2139f0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2139F0u;
    {
        const bool branch_taken_0x2139f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2139F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2139F0u;
        // 0x2139f4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2139f0) {
            ctx->pc = 0x213A18u;
            return;
        }
    }
    ctx->pc = 0x2139F8u;
}
