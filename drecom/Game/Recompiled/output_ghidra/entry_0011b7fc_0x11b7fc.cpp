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

// Function: entry_0011b7fc
// Address: 0x11b7fc - 0x11b808
void entry_0011b7fc_0x11b7fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011b7fc_0x11b7fc");
#endif

    ctx->pc = 0x11b7fcu;

    // 0x11b7fc: 0x24150003  addiu       $s5, $zero, 0x3
    ctx->pc = 0x11b7fcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x11b800: 0x10000115  b           . + 4 + (0x115 << 2)
    ctx->pc = 0x11B800u;
    {
        const bool branch_taken_0x11b800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B800u;
        // 0x11b804: 0x2453db40  addiu       $s3, $v0, -0x24C0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957888));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b800) {
            ctx->pc = 0x11BC58u;
            return;
        }
    }
    ctx->pc = 0x11B808u;
}
