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

// Function: entry_00325fe8
// Address: 0x325fe8 - 0x326008
void entry_00325fe8_0x325fe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00325fe8_0x325fe8");
#endif

    ctx->pc = 0x325fe8u;

    // 0x325fe8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x325fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x325fec: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x325fecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x325ff0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x325ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x325ff4: 0x248400b0  addiu       $a0, $a0, 0xB0
    ctx->pc = 0x325ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 176));
    // 0x325ff8: 0x24650050  addiu       $a1, $v1, 0x50
    ctx->pc = 0x325ff8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
    // 0x325ffc: 0x244600b0  addiu       $a2, $v0, 0xB0
    ctx->pc = 0x325ffcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x326000: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x326000u;
    SET_GPR_U32(ctx, 31, 0x326008u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x326000u, 0x326008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326008u;
}
