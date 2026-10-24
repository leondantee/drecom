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

// Function: entry_0011ec5c
// Address: 0x11ec5c - 0x11ec68
void entry_0011ec5c_0x11ec5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011ec5c_0x11ec5c");
#endif

    ctx->pc = 0x11ec5cu;

    // 0x11ec5c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x11ec5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x11ec60: 0x10000074  b           . + 4 + (0x74 << 2)
    ctx->pc = 0x11EC60u;
    {
        const bool branch_taken_0x11ec60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11EC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EC60u;
        // 0x11ec64: 0x24446800  addiu       $a0, $v0, 0x6800 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 26624));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ec60) {
            ctx->pc = 0x11EE34u;
            return;
        }
    }
    ctx->pc = 0x11EC68u;
}
