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

// Function: entry_00116de4
// Address: 0x116de4 - 0x116df0
void entry_00116de4_0x116de4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00116de4_0x116de4");
#endif

    ctx->pc = 0x116de4u;

    // 0x116de4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x116DE4u;
    {
        const bool branch_taken_0x116de4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116DE4u;
        // 0x116de8: 0x24030039  addiu       $v1, $zero, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116de4) {
            ctx->pc = 0x116DFCu;
            return;
        }
    }
    ctx->pc = 0x116DECu;
    // 0x116dec: 0x0  nop
    ctx->pc = 0x116decu;
    // NOP
    ctx->pc = 0x116df0u;
}
