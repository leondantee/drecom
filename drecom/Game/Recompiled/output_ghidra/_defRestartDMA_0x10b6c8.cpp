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

// Function: _defRestartDMA
// Address: 0x10b6c8 - 0x10b6d4
void _defRestartDMA_0x10b6c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_defRestartDMA_0x10b6c8");
#endif

    ctx->pc = 0x10b6c8u;

    // 0x10b6c8: 0x8c840040  lw          $a0, 0x40($a0)
    ctx->pc = 0x10b6c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x10b6cc: 0x8042e16  j           func_10B858
    ctx->pc = 0x10B6CCu;
    ctx->pc = 0x10B6D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B6CCu;
    // 0x10b6d0: 0x2484004c  addiu       $a0, $a0, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B858u;
    sceIpuRestartDMA_0x10b858(rdram, ctx, runtime); return;
    ctx->pc = 0x10B6D4u;
}
