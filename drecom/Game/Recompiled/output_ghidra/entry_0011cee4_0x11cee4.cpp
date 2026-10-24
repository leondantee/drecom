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

// Function: entry_0011cee4
// Address: 0x11cee4 - 0x11cef8
void entry_0011cee4_0x11cee4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011cee4_0x11cee4");
#endif

    ctx->pc = 0x11cee4u;

    // 0x11cee4: 0x1500000a  bnez        $t0, . + 4 + (0xA << 2)
    ctx->pc = 0x11CEE4u;
    {
        const bool branch_taken_0x11cee4 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x11CEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CEE4u;
        // 0x11cee8: 0x48102b  sltu        $v0, $v0, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cee4) {
            ctx->pc = 0x11CF10u;
            return;
        }
    }
    ctx->pc = 0x11CEECu;
    // 0x11ceec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11ceecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11cef0: 0x51000001  beql        $t0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x11CEF0u;
    {
        const bool branch_taken_0x11cef0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x11cef0) {
            ctx->pc = 0x11CEF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11CEF0u;
            // 0x11cef4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x11CEF8u;
            return;
        }
    }
    ctx->pc = 0x11CEF8u;
}
