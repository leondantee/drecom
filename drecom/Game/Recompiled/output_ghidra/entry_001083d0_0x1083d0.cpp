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

// Function: entry_001083d0
// Address: 0x1083d0 - 0x1083d8
void entry_001083d0_0x1083d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001083d0_0x1083d0");
#endif

    ctx->pc = 0x1083d0u;

    // 0x1083d0: 0xc046a48  jal         func_11A920
    ctx->pc = 0x1083D0u;
    SET_GPR_U32(ctx, 31, 0x1083D8u);
    ctx->pc = 0x1083D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1083D0u;
    // 0x1083d4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11A920u;
    {
        ctx->pc = 0x1083D8u;
        ps2_stubs::sprintf(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1083D8u) { return; }
    ctx->pc = 0x1083D8u;
}
