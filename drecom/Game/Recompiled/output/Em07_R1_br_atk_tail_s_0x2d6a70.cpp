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

// Function: Em07_R1_br_atk_tail_s
// Address: 0x2d6a70 - 0x2d6a94
void Em07_R1_br_atk_tail_s_0x2d6a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em07_R1_br_atk_tail_s_0x2d6a70");
#endif

    ctx->pc = 0x2d6a70u;

    // 0x2d6a70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d6a70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d6a74: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2d6a74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2d6a78: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x2d6a78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d6a7c: 0x8c831334  lw          $v1, 0x1334($a0)
    ctx->pc = 0x2d6a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4916)));
    // 0x2d6a80: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2d6a80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2d6a84: 0xac831334  sw          $v1, 0x1334($a0)
    ctx->pc = 0x2d6a84u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4916), GPR_U32(ctx, 3));
    // 0x2d6a88: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2d6a88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2d6a8c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D6A8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D6A8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D6A94u;
}
