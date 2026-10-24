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

// Function: entry_001121c0
// Address: 0x1121c0 - 0x1121d8
void entry_001121c0_0x1121c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001121c0_0x1121c0");
#endif

    ctx->pc = 0x1121c0u;

    // 0x1121c0: 0x1202000b  beq         $s0, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1121C0u;
    {
        const bool branch_taken_0x1121c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1121C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1121C0u;
        // 0x1121c4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1121c0) {
            ctx->pc = 0x1121F0u;
            return;
        }
    }
    ctx->pc = 0x1121C8u;
    // 0x1121c8: 0x1202000e  beq         $s0, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1121C8u;
    {
        const bool branch_taken_0x1121c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1121CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1121C8u;
        // 0x1121cc: 0x3c027f80  lui         $v0, 0x7F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32640 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1121c8) {
            ctx->pc = 0x112204u;
            return;
        }
    }
    ctx->pc = 0x1121D0u;
    // 0x1121d0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1121D0u;
    {
        const bool branch_taken_0x1121d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1121d0) {
            ctx->pc = 0x112218u;
            return;
        }
    }
    ctx->pc = 0x1121D8u;
}
