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

// Function: entry_0011b8d4
// Address: 0x11b8d4 - 0x11b8dc
void entry_0011b8d4_0x11b8d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011b8d4_0x11b8d4");
#endif

    ctx->pc = 0x11b8d4u;

    // 0x11b8d4: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x11B8D4u;
    {
        const bool branch_taken_0x11b8d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B8D4u;
        // 0x11b8d8: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b8d4) {
            ctx->pc = 0x11B934u;
            return;
        }
    }
    ctx->pc = 0x11B8DCu;
}
