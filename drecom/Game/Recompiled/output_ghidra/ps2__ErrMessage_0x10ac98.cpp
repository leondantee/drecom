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

// Function: _ErrMessage
// Address: 0x10ac98 - 0x10aca8
void ps2__ErrMessage_0x10ac98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__ErrMessage_0x10ac98");
#endif

    ctx->pc = 0x10ac98u;

    // 0x10ac98: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x10ac98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ac9c: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x10ac9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x10aca0: 0x8046760  j           func_119D80
    ctx->pc = 0x10ACA0u;
    ctx->pc = 0x10ACA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10ACA0u;
    // 0x10aca4: 0x2484c968  addiu       $a0, $a0, -0x3698 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119D80u;
    printf_0x119d80(rdram, ctx, runtime); return;
    ctx->pc = 0x10ACA8u;
}
