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

// Function: entry_00100b04
// Address: 0x100b04 - 0x100b10
void entry_00100b04_0x100b04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00100b04_0x100b04");
#endif

    ctx->pc = 0x100b04u;

    // 0x100b04: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x100b04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x100b08: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x100B08u;
    {
        const bool branch_taken_0x100b08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x100B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100B08u;
        // 0x100b0c: 0x2484c038  addiu       $a0, $a0, -0x3FC8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950968));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100b08) {
            ctx->pc = 0x100B3Cu;
            return;
        }
    }
    ctx->pc = 0x100B10u;
}
