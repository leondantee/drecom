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

// Function: entry_0011fe28
// Address: 0x11fe28 - 0x11fe30
void entry_0011fe28_0x11fe28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011fe28_0x11fe28");
#endif

    ctx->pc = 0x11fe28u;

    // 0x11fe28: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x11FE28u;
    {
        const bool branch_taken_0x11fe28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FE28u;
        // 0x11fe2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fe28) {
            ctx->pc = 0x11FE78u;
            return;
        }
    }
    ctx->pc = 0x11FE30u;
}
