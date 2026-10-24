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

// Function: entry_0010c204
// Address: 0x10c204 - 0x10c20c
void entry_0010c204_0x10c204(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010c204_0x10c204");
#endif

    ctx->pc = 0x10c204u;

    // 0x10c204: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x10C204u;
    {
        const bool branch_taken_0x10c204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C204u;
        // 0x10c208: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c204) {
            ctx->pc = 0x10C26Cu;
            return;
        }
    }
    ctx->pc = 0x10C20Cu;
}
