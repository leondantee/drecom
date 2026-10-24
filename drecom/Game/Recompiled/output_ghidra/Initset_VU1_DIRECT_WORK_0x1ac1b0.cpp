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

// Function: Initset_VU1_DIRECT_WORK
// Address: 0x1ac1b0 - 0x1ac1e4
void Initset_VU1_DIRECT_WORK_0x1ac1b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Initset_VU1_DIRECT_WORK_0x1ac1b0");
#endif

    ctx->pc = 0x1ac1b0u;

    // 0x1ac1b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ac1b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ac1b4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1ac1b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1ac1b8: 0xafa50008  sw          $a1, 0x8($sp)
    ctx->pc = 0x1ac1b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
    // 0x1ac1bc: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1ac1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ac1c0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1ac1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ac1c4: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x1ac1c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x1ac1c8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1ac1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ac1cc: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x1ac1ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x1ac1d0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1ac1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ac1d4: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1ac1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1ac1d8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1ac1d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1ac1dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1AC1DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AC1DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AC1E4u;
}
