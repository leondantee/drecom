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

// Function: _defStopDMA
// Address: 0x10b6b8 - 0x10b6c4
void _defStopDMA_0x10b6b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_defStopDMA_0x10b6b8");
#endif

    ctx->pc = 0x10b6b8u;

    // 0x10b6b8: 0x8c840040  lw          $a0, 0x40($a0)
    ctx->pc = 0x10b6b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x10b6bc: 0x8042db6  j           func_10B6D8
    ctx->pc = 0x10B6BCu;
    ctx->pc = 0x10B6C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B6BCu;
    // 0x10b6c0: 0x2484004c  addiu       $a0, $a0, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B6D8u;
    sceIpuStopDMA_0x10b6d8(rdram, ctx, runtime); return;
    ctx->pc = 0x10B6C4u;
}
