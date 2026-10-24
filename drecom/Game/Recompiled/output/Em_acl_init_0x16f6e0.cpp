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

// Function: Em_acl_init
// Address: 0x16f6e0 - 0x16f730
void Em_acl_init_0x16f6e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em_acl_init_0x16f6e0");
#endif

    switch (ctx->pc) {
        case 0x16f6fcu: goto label_16f6fc;
        default: break;
    }

    ctx->pc = 0x16f6e0u;

    // 0x16f6e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x16f6e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x16f6e4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x16f6e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x16f6e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16f6e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x16f6ec: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x16f6ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x16f6f0: 0x8fb00028  lw          $s0, 0x28($sp)
    ctx->pc = 0x16f6f0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x16f6f4: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x16f6f4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x16f6f8: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x16f6f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_16f6fc:
    // 0x16f6fc: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x16f6fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x16f700: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x16f700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x16f704: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16f704u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16f708: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x16f708u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x16f70c: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x16f70cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x16f710: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x16f710u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x16f714: 0x1620fff9  bnez        $s1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x16F714u;
    {
        const bool branch_taken_0x16f714 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x16f714) {
            ctx->pc = 0x16F6FCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16f6fc;
        }
    }
    ctx->pc = 0x16F71Cu;
    // 0x16f71c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16f71cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16f720: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16f720u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16f724: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x16f724u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x16f728: 0x3e00008  jr          $ra
    ctx->pc = 0x16F728u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16F728u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16F730u;
}
