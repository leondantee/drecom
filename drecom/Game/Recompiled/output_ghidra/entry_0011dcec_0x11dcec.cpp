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

// Function: entry_0011dcec
// Address: 0x11dcec - 0x11dcf4
void entry_0011dcec_0x11dcec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011dcec_0x11dcec");
#endif

    ctx->pc = 0x11dcecu;

    // 0x11dcec: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x11DCECu;
    {
        const bool branch_taken_0x11dcec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x11dcec) {
            ctx->pc = 0x11DCF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11DCECu;
            // 0x11dcf0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x11DCF4u;
            return;
        }
    }
    ctx->pc = 0x11DCF4u;
}
