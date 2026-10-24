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

// Function: entry_0011dfc4
// Address: 0x11dfc4 - 0x11dfd8
void entry_0011dfc4_0x11dfc4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011dfc4_0x11dfc4");
#endif

    ctx->pc = 0x11dfc4u;

    // 0x11dfc4: 0x168102b  sltu        $v0, $t3, $t0
    ctx->pc = 0x11dfc4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x11dfc8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11DFC8u;
    {
        const bool branch_taken_0x11dfc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DFC8u;
        // 0x11dfcc: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dfc8) {
            ctx->pc = 0x11DFD8u;
            return;
        }
    }
    ctx->pc = 0x11DFD0u;
    // 0x11dfd0: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x11DFD0u;
    {
        const bool branch_taken_0x11dfd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DFD0u;
        // 0x11dfd4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dfd0) {
            ctx->pc = 0x11E190u;
            return;
        }
    }
    ctx->pc = 0x11DFD8u;
}
