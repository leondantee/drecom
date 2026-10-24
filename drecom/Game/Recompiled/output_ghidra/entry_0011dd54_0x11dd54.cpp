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

// Function: entry_0011dd54
// Address: 0x11dd54 - 0x11dd68
void entry_0011dd54_0x11dd54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011dd54_0x11dd54");
#endif

    ctx->pc = 0x11dd54u;

    // 0x11dd54: 0x1520000a  bnez        $t1, . + 4 + (0xA << 2)
    ctx->pc = 0x11DD54u;
    {
        const bool branch_taken_0x11dd54 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x11DD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DD54u;
        // 0x11dd58: 0x49102b  sltu        $v0, $v0, $t1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dd54) {
            ctx->pc = 0x11DD80u;
            return;
        }
    }
    ctx->pc = 0x11DD5Cu;
    // 0x11dd5c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11dd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11dd60: 0x51200001  beql        $t1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x11DD60u;
    {
        const bool branch_taken_0x11dd60 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x11dd60) {
            ctx->pc = 0x11DD64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11DD60u;
            // 0x11dd64: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x11DD68u;
            return;
        }
    }
    ctx->pc = 0x11DD68u;
}
