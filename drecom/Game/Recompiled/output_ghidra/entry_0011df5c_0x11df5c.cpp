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

// Function: entry_0011df5c
// Address: 0x11df5c - 0x11df64
void entry_0011df5c_0x11df5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011df5c_0x11df5c");
#endif

    ctx->pc = 0x11df5cu;

    // 0x11df5c: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x11DF5Cu;
    {
        const bool branch_taken_0x11df5c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x11df5c) {
            ctx->pc = 0x11DF60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11DF5Cu;
            // 0x11df60: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x11DF64u;
            return;
        }
    }
    ctx->pc = 0x11DF64u;
}
