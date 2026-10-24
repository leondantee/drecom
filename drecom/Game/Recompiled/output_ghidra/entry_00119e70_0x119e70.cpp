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

// Function: entry_00119e70
// Address: 0x119e70 - 0x119e78
void entry_00119e70_0x119e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00119e70_0x119e70");
#endif

    ctx->pc = 0x119e70u;

    // 0x119e70: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x119E70u;
    {
        const bool branch_taken_0x119e70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119E70u;
        // 0x119e74: 0x2139021  addu        $s2, $s0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119e70) {
            ctx->pc = 0x119F04u;
            return;
        }
    }
    ctx->pc = 0x119E78u;
}
