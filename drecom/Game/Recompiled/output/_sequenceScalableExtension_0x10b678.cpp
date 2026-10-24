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

// Function: _sequenceScalableExtension
// Address: 0x10b678 - 0x10b684
void _sequenceScalableExtension_0x10b678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_sequenceScalableExtension_0x10b678");
#endif

    ctx->pc = 0x10b678u;

    // 0x10b678: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x10b678u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x10b67c: 0x8042b36  j           func_10ACD8
    ctx->pc = 0x10B67Cu;
    ctx->pc = 0x10B680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B67Cu;
    // 0x10b680: 0x2484c9d8  addiu       $a0, $a0, -0x3628 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10ACD8u;
    ps2__Error_0x10acd8(rdram, ctx, runtime); return;
    ctx->pc = 0x10B684u;
}
