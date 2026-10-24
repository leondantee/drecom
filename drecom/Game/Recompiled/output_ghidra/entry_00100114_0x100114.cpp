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

// Function: entry_00100114
// Address: 0x100114 - 0x10011c
void entry_00100114_0x100114(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00100114_0x100114");
#endif

    ctx->pc = 0x100114u;

    // 0x100114: 0x8040030  j           func_1000C0
    ctx->pc = 0x100114u;
    ctx->pc = 0x100118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100114u;
    // 0x100118: 0x4203e  dsrl32      $a0, $a0, 0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1000C0u;
    _d_ulltod_0x1000c0(rdram, ctx, runtime); return;
    ctx->pc = 0x10011Cu;
}
