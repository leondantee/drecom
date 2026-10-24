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

// Function: _cleanup
// Address: 0x117270 - 0x11727c
void _cleanup_0x117270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_cleanup_0x117270");
#endif

    ctx->pc = 0x117270u;

    // 0x117270: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x117270u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x117274: 0x8045c98  j           func_117260
    ctx->pc = 0x117274u;
    ctx->pc = 0x117278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117274u;
    // 0x117278: 0x8c44490c  lw          $a0, 0x490C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18700)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117260u;
    _cleanup_r_0x117260(rdram, ctx, runtime); return;
    ctx->pc = 0x11727Cu;
}
