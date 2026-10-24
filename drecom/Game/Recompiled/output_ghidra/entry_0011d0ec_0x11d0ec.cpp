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

// Function: entry_0011d0ec
// Address: 0x11d0ec - 0x11d0f4
void entry_0011d0ec_0x11d0ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011d0ec_0x11d0ec");
#endif

    ctx->pc = 0x11d0ecu;

    // 0x11d0ec: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x11D0ECu;
    {
        const bool branch_taken_0x11d0ec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x11d0ec) {
            ctx->pc = 0x11D0F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11D0ECu;
            // 0x11d0f0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x11D0F4u;
            return;
        }
    }
    ctx->pc = 0x11D0F4u;
}
