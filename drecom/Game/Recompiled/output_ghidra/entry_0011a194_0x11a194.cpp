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

// Function: entry_0011a194
// Address: 0x11a194 - 0x11a19c
void entry_0011a194_0x11a194(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011a194_0x11a194");
#endif

    ctx->pc = 0x11a194u;

    // 0x11a194: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x11A194u;
    {
        const bool branch_taken_0x11a194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A194u;
        // 0x11a198: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a194) {
            ctx->pc = 0x11A1A8u;
            return;
        }
    }
    ctx->pc = 0x11A19Cu;
}
