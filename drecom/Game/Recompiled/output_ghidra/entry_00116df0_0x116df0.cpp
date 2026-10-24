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

// Function: entry_00116df0
// Address: 0x116df0 - 0x116dfc
void entry_00116df0_0x116df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00116df0_0x116df0");
#endif

    ctx->pc = 0x116df0u;

    // 0x116df0: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x116df0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x116df4: 0x12a40007  beq         $s5, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x116DF4u;
    {
        const bool branch_taken_0x116df4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 4));
        ctx->pc = 0x116DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116DF4u;
        // 0x116df8: 0x26b5ffff  addiu       $s5, $s5, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116df4) {
            ctx->pc = 0x116E14u;
            return;
        }
    }
    ctx->pc = 0x116DFCu;
}
