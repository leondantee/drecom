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

// Function: entry_00100b10
// Address: 0x100b10 - 0x100b1c
void entry_00100b10_0x100b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00100b10_0x100b10");
#endif

    ctx->pc = 0x100b10u;

    // 0x100b10: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x100b10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x100b14: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x100B14u;
    {
        const bool branch_taken_0x100b14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x100B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100B14u;
        // 0x100b18: 0x2484c118  addiu       $a0, $a0, -0x3EE8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100b14) {
            ctx->pc = 0x100B3Cu;
            return;
        }
    }
    ctx->pc = 0x100B1Cu;
}
