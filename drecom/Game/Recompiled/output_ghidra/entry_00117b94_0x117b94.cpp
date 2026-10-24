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

// Function: entry_00117b94
// Address: 0x117b94 - 0x117b9c
void entry_00117b94_0x117b94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00117b94_0x117b94");
#endif

    ctx->pc = 0x117b94u;

    // 0x117b94: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x117B94u;
    {
        const bool branch_taken_0x117b94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x117B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117B94u;
        // 0x117b98: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117b94) {
            ctx->pc = 0x117BACu;
            return;
        }
    }
    ctx->pc = 0x117B9Cu;
}
