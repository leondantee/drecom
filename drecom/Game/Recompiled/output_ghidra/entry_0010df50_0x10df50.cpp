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

// Function: entry_0010df50
// Address: 0x10df50 - 0x10df60
void entry_0010df50_0x10df50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010df50_0x10df50");
#endif

    ctx->pc = 0x10df50u;

    // 0x10df50: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10DF50u;
    {
        const bool branch_taken_0x10df50 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x10DF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DF50u;
        // 0x10df54: 0x3c04003b  lui         $a0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10df50) {
            ctx->pc = 0x10DF60u;
            return;
        }
    }
    ctx->pc = 0x10DF58u;
    // 0x10df58: 0xc046760  jal         func_119D80
    ctx->pc = 0x10DF58u;
    SET_GPR_U32(ctx, 31, 0x10DF60u);
    ctx->pc = 0x10DF5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DF58u;
    // 0x10df5c: 0x2484cd58  addiu       $a0, $a0, -0x32A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119D80u;
    {
        ctx->pc = 0x10DF60u;
        ps2_stubs::printf(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10DF60u) { return; }
    ctx->pc = 0x10DF60u;
}
