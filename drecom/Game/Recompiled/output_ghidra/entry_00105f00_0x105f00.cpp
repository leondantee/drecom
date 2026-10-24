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

// Function: entry_00105f00
// Address: 0x105f00 - 0x105f08
void entry_00105f00_0x105f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00105f00_0x105f00");
#endif

    ctx->pc = 0x105f00u;

    // 0x105f00: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x105F00u;
    {
        const bool branch_taken_0x105f00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x105F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105F00u;
        // 0x105f04: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105f00) {
            ctx->pc = 0x105F20u;
            return;
        }
    }
    ctx->pc = 0x105F08u;
}
