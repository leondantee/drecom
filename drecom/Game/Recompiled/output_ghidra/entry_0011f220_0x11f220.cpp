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

// Function: entry_0011f220
// Address: 0x11f220 - 0x11f228
void entry_0011f220_0x11f220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011f220_0x11f220");
#endif

    ctx->pc = 0x11f220u;

    // 0x11f220: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x11F220u;
    {
        const bool branch_taken_0x11f220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F220u;
        // 0x11f224: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f220) {
            ctx->pc = 0x11F278u;
            return;
        }
    }
    ctx->pc = 0x11F228u;
}
