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

// Function: entry_0010ea18
// Address: 0x10ea18 - 0x10ea20
void entry_0010ea18_0x10ea18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010ea18_0x10ea18");
#endif

    ctx->pc = 0x10ea18u;

    // 0x10ea18: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x10EA18u;
    {
        const bool branch_taken_0x10ea18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EA18u;
        // 0x10ea1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ea18) {
            ctx->pc = 0x10EAD8u;
            return;
        }
    }
    ctx->pc = 0x10EA20u;
}
