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

// Function: entry_0010e120
// Address: 0x10e120 - 0x10e128
void entry_0010e120_0x10e120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010e120_0x10e120");
#endif

    ctx->pc = 0x10e120u;

    // 0x10e120: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x10E120u;
    {
        const bool branch_taken_0x10e120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E120u;
        // 0x10e124: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e120) {
            ctx->pc = 0x10E148u;
            return;
        }
    }
    ctx->pc = 0x10E128u;
}
