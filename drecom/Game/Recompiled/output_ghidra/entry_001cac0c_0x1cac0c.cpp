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

// Function: entry_001cac0c
// Address: 0x1cac0c - 0x1cac28
void entry_001cac0c_0x1cac0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cac0c_0x1cac0c");
#endif

    ctx->pc = 0x1cac0cu;

    // 0x1cac0c: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x1cac0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1cac10: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1cac10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1cac14: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x1cac14u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x1cac18: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1cac18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1cac1c: 0x8c441b70  lw          $a0, 0x1B70($v0)
    ctx->pc = 0x1cac1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7024)));
    // 0x1cac20: 0xc09b9b0  jal         func_26E6C0
    ctx->pc = 0x1CAC20u;
    SET_GPR_U32(ctx, 31, 0x1CAC28u);
    ctx->pc = 0x26E6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26E6C0u, 0x1CAC20u, 0x1CAC28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAC28u;
}
