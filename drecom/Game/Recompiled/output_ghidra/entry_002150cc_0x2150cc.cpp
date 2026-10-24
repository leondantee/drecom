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

// Function: entry_002150cc
// Address: 0x2150cc - 0x2150d4
void entry_002150cc_0x2150cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002150cc_0x2150cc");
#endif

    ctx->pc = 0x2150ccu;

    // 0x2150cc: 0xc084b78  jal         func_212DE0
    ctx->pc = 0x2150CCu;
    SET_GPR_U32(ctx, 31, 0x2150D4u);
    ctx->pc = 0x2150D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2150CCu;
    // 0x2150d0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212DE0u;
    {
        ctx->pc = 0x2150D4u;
        ps2_stubs::sceSifSetDma(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2150D4u) { return; }
    ctx->pc = 0x2150D4u;
}
