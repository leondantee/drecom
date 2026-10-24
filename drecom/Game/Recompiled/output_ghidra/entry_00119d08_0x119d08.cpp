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

// Function: entry_00119d08
// Address: 0x119d08 - 0x119d10
void entry_00119d08_0x119d08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00119d08_0x119d08");
#endif

    ctx->pc = 0x119d08u;

    // 0x119d08: 0x1a000008  blez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x119D08u;
    {
        const bool branch_taken_0x119d08 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x119D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119D08u;
        // 0x119d0c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119d08) {
            ctx->pc = 0x119D2Cu;
            return;
        }
    }
    ctx->pc = 0x119D10u;
}
