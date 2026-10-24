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

// Function: entry_00116658
// Address: 0x116658 - 0x116660
void entry_00116658_0x116658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00116658_0x116658");
#endif

    ctx->pc = 0x116658u;

    // 0x116658: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x116658u;
    {
        const bool branch_taken_0x116658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11665Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116658u;
        // 0x11665c: 0x26770001  addiu       $s7, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116658) {
            ctx->pc = 0x116688u;
            return;
        }
    }
    ctx->pc = 0x116660u;
}
