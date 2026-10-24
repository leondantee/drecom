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

// Function: entry_0011e76c
// Address: 0x11e76c - 0x11e77c
void entry_0011e76c_0x11e76c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011e76c_0x11e76c");
#endif

    ctx->pc = 0x11e76cu;

    // 0x11e76c: 0x28620400  slti        $v0, $v1, 0x400
    ctx->pc = 0x11e76cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x11e770: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11E770u;
    {
        const bool branch_taken_0x11e770 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11E774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E770u;
        // 0x11e774: 0x246703ff  addiu       $a3, $v1, 0x3FF (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 1023));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e770) {
            ctx->pc = 0x11E784u;
            return;
        }
    }
    ctx->pc = 0x11E778u;
    // 0x11e778: 0x240707ff  addiu       $a3, $zero, 0x7FF
    ctx->pc = 0x11e778u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2047));
    ctx->pc = 0x11e77cu;
}
