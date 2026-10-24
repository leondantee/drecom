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

// Function: entry_0011d274
// Address: 0x11d274 - 0x11d27c
void entry_0011d274_0x11d274(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011d274_0x11d274");
#endif

    ctx->pc = 0x11d274u;

    // 0x11d274: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x11D274u;
    {
        const bool branch_taken_0x11d274 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x11d274) {
            ctx->pc = 0x11D278u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11D274u;
            // 0x11d278: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x11D27Cu;
            return;
        }
    }
    ctx->pc = 0x11D27Cu;
}
