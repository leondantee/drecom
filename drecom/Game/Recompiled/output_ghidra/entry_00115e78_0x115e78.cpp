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

// Function: entry_00115e78
// Address: 0x115e78 - 0x115e80
void entry_00115e78_0x115e78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00115e78_0x115e78");
#endif

    ctx->pc = 0x115e78u;

    // 0x115e78: 0x10000410  b           . + 4 + (0x410 << 2)
    ctx->pc = 0x115E78u;
    {
        const bool branch_taken_0x115e78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115E78u;
        // 0x115e7c: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115e78) {
            ctx->pc = 0x116EBCu;
            return;
        }
    }
    ctx->pc = 0x115E80u;
}
