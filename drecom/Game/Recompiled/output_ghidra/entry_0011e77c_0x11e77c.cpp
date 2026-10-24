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

// Function: entry_0011e77c
// Address: 0x11e77c - 0x11e784
void entry_0011e77c_0x11e77c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011e77c_0x11e77c");
#endif

    ctx->pc = 0x11e77cu;

    // 0x11e77c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x11E77Cu;
    {
        const bool branch_taken_0x11e77c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E77Cu;
        // 0x11e780: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e77c) {
            ctx->pc = 0x11E7C0u;
            return;
        }
    }
    ctx->pc = 0x11E784u;
}
