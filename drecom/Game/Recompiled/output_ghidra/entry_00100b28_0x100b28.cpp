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

// Function: entry_00100b28
// Address: 0x100b28 - 0x100b34
void entry_00100b28_0x100b28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00100b28_0x100b28");
#endif

    ctx->pc = 0x100b28u;

    // 0x100b28: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x100b28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x100b2c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x100B2Cu;
    {
        const bool branch_taken_0x100b2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x100B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100B2Cu;
        // 0x100b30: 0x2484c178  addiu       $a0, $a0, -0x3E88 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100b2c) {
            ctx->pc = 0x100B3Cu;
            return;
        }
    }
    ctx->pc = 0x100B34u;
}
