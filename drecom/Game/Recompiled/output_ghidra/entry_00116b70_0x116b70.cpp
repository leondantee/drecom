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

// Function: entry_00116b70
// Address: 0x116b70 - 0x116b80
void entry_00116b70_0x116b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00116b70_0x116b70");
#endif

    ctx->pc = 0x116b70u;

    // 0x116b70: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x116b70u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x116b74: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x116B74u;
    {
        const bool branch_taken_0x116b74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116B74u;
        // 0x116b78: 0x26770001  addiu       $s7, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116b74) {
            ctx->pc = 0x116BF8u;
            return;
        }
    }
    ctx->pc = 0x116B7Cu;
    // 0x116b7c: 0x0  nop
    ctx->pc = 0x116b7cu;
    // NOP
    ctx->pc = 0x116b80u;
}
