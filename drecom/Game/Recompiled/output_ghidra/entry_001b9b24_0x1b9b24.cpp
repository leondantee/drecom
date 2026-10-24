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

// Function: entry_001b9b24
// Address: 0x1b9b24 - 0x1b9b44
void entry_001b9b24_0x1b9b24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b9b24_0x1b9b24");
#endif

    ctx->pc = 0x1b9b24u;

    // 0x1b9b24: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b9b24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b9b28: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b9b28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b9b2c: 0x8ca50368  lw          $a1, 0x368($a1)
    ctx->pc = 0x1b9b2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 872)));
    // 0x1b9b30: 0x2406009b  addiu       $a2, $zero, 0x9B
    ctx->pc = 0x1b9b30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 155));
    // 0x1b9b34: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1b9b34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b9b38: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1b9b38u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1b9b3c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1B9B3Cu;
    SET_GPR_U32(ctx, 31, 0x1B9B44u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1B9B3Cu, 0x1B9B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9B44u;
}
