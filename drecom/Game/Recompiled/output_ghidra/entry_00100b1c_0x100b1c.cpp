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

// Function: entry_00100b1c
// Address: 0x100b1c - 0x100b28
void entry_00100b1c_0x100b1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00100b1c_0x100b1c");
#endif

    ctx->pc = 0x100b1cu;

    // 0x100b1c: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x100b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x100b20: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x100B20u;
    {
        const bool branch_taken_0x100b20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x100B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100B20u;
        // 0x100b24: 0x2484c148  addiu       $a0, $a0, -0x3EB8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100b20) {
            ctx->pc = 0x100B3Cu;
            return;
        }
    }
    ctx->pc = 0x100B28u;
}
