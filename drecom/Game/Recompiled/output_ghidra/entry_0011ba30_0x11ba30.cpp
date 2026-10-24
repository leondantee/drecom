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

// Function: entry_0011ba30
// Address: 0x11ba30 - 0x11ba38
void entry_0011ba30_0x11ba30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011ba30_0x11ba30");
#endif

    ctx->pc = 0x11ba30u;

    // 0x11ba30: 0x10000088  b           . + 4 + (0x88 << 2)
    ctx->pc = 0x11BA30u;
    {
        const bool branch_taken_0x11ba30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BA30u;
        // 0x11ba34: 0x240a82d  daddu       $s5, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ba30) {
            ctx->pc = 0x11BC54u;
            return;
        }
    }
    ctx->pc = 0x11BA38u;
}
