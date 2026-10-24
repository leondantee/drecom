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

// Function: entry_0011c82c
// Address: 0x11c82c - 0x11c838
void entry_0011c82c_0x11c82c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011c82c_0x11c82c");
#endif

    ctx->pc = 0x11c82cu;

    // 0x11c82c: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x11c82cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x11c830: 0x1000fb0d  b           . + 4 + (-0x4F3 << 2)
    ctx->pc = 0x11C830u;
    {
        const bool branch_taken_0x11c830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C830u;
        // 0x11c834: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c830) {
            ctx->pc = 0x11B468u;
            return;
        }
    }
    ctx->pc = 0x11C838u;
}
