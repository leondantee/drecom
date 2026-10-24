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

// Function: Wep03_move
// Address: 0x155590 - 0x1555d0
void Wep03_move_0x155590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Wep03_move_0x155590");
#endif

    ctx->pc = 0x155590u;

    // 0x155590: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x155590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x155594: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x155594u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x155598: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x155598u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x15559c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x15559cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1555a0: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x1555a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x1555a4: 0x24700190  addiu       $s0, $v1, 0x190
    ctx->pc = 0x1555a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 400));
    // 0x1555a8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1555a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1555ac: 0x8c241a48  lw          $a0, 0x1A48($at)
    ctx->pc = 0x1555acu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x1555b0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1555b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1555b4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1555b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1555b8: 0x14600001  bnez        $v1, . + 4 + (0x1 << 2)
    ctx->pc = 0x1555B8u;
    {
        const bool branch_taken_0x1555b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1555b8) {
            ctx->pc = 0x1555C0u;
            goto label_1555c0;
        }
    }
    ctx->pc = 0x1555C0u;
label_1555c0:
    // 0x1555c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1555c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1555c4: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1555c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1555c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1555C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1555C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1555D0u;
}
