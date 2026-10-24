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

// Function: _pictureTemporalScalableExtension
// Address: 0x10b6a8 - 0x10b6b4
void _pictureTemporalScalableExtension_0x10b6a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_pictureTemporalScalableExtension_0x10b6a8");
#endif

    ctx->pc = 0x10b6a8u;

    // 0x10b6a8: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x10b6a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x10b6ac: 0x8042b36  j           func_10ACD8
    ctx->pc = 0x10B6ACu;
    ctx->pc = 0x10B6B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B6ACu;
    // 0x10b6b0: 0x2484ca58  addiu       $a0, $a0, -0x35A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10ACD8u;
    ps2__Error_0x10acd8(rdram, ctx, runtime); return;
    ctx->pc = 0x10B6B4u;
}
