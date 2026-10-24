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

// Function: entry_0010a814
// Address: 0x10a814 - 0x10a81c
void entry_0010a814_0x10a814(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010a814_0x10a814");
#endif

    ctx->pc = 0x10a814u;

    // 0x10a814: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x10A814u;
    {
        const bool branch_taken_0x10a814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A814u;
        // 0x10a818: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a814) {
            ctx->pc = 0x10A834u;
            return;
        }
    }
    ctx->pc = 0x10A81Cu;
}
