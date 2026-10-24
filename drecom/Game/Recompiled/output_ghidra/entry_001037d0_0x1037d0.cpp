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

// Function: entry_001037d0
// Address: 0x1037d0 - 0x1037d8
void entry_001037d0_0x1037d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001037d0_0x1037d0");
#endif

    ctx->pc = 0x1037d0u;

    // 0x1037d0: 0x8040c9e  j           func_103278
    ctx->pc = 0x1037D0u;
    ctx->pc = 0x1037D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1037D0u;
    // 0x1037d4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x103278u;
    sceVu0CopyVector_0x103278(rdram, ctx, runtime); return;
    ctx->pc = 0x1037D8u;
}
