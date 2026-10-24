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

// Function: entry_0011eee4
// Address: 0x11eee4 - 0x11eef8
void entry_0011eee4_0x11eee4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011eee4_0x11eee4");
#endif

    ctx->pc = 0x11eee4u;

    // 0x11eee4: 0x14e60034  bne         $a3, $a2, . + 4 + (0x34 << 2)
    ctx->pc = 0x11EEE4u;
    {
        const bool branch_taken_0x11eee4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 6));
        ctx->pc = 0x11EEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EEE4u;
        // 0x11eee8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11eee4) {
            ctx->pc = 0x11EFB8u;
            return;
        }
    }
    ctx->pc = 0x11EEECu;
    // 0x11eeec: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x11eeecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x11eef0: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x11EEF0u;
    {
        const bool branch_taken_0x11eef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11EEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EEF0u;
        // 0x11eef4: 0x24446800  addiu       $a0, $v0, 0x6800 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 26624));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11eef0) {
            ctx->pc = 0x11EFB8u;
            return;
        }
    }
    ctx->pc = 0x11EEF8u;
}
