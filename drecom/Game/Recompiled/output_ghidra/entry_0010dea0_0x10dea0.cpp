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

// Function: entry_0010dea0
// Address: 0x10dea0 - 0x10deac
void entry_0010dea0_0x10dea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010dea0_0x10dea0");
#endif

    ctx->pc = 0x10dea0u;

    // 0x10dea0: 0x233102a  slt         $v0, $s1, $s3
    ctx->pc = 0x10dea0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x10dea4: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x10DEA4u;
    {
        const bool branch_taken_0x10dea4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10DEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DEA4u;
        // 0x10dea8: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10dea4) {
            ctx->pc = 0x10DE58u;
            return;
        }
    }
    ctx->pc = 0x10DEACu;
}
