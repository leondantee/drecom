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

// Function: Shw_init
// Address: 0x1e52c0 - 0x1e5338
void Shw_init_0x1e52c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Shw_init_0x1e52c0");
#endif

    switch (ctx->pc) {
        case 0x1e52e4u: goto label_1e52e4;
        default: break;
    }

    ctx->pc = 0x1e52c0u;

    // 0x1e52c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e52c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e52c4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e52c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e52c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e52c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e52cc: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x1e52ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x1e52d0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1e52d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1e52d4: 0x24700010  addiu       $s0, $v1, 0x10
    ctx->pc = 0x1e52d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1e52d8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1e52d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1e52dc: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x1e52dcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e52e0: 0x0  nop
    ctx->pc = 0x1e52e0u;
    // NOP
label_1e52e4:
    // 0x1e52e4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1e52e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1e52e8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1e52e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1e52ec: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1e52ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1e52f0: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x1e52f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x1e52f4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1e52f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1e52f8: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1e52f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1e52fc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1e52fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1e5300: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x1e5300u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x1e5304: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1e5304u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1e5308: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x1e5308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1e530c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1e530cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1e5310: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x1e5310u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x1e5314: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x1e5314u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1e5318: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1e5318u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1e531c: 0x1620fff1  bnez        $s1, . + 4 + (-0xF << 2)
    ctx->pc = 0x1E531Cu;
    {
        const bool branch_taken_0x1e531c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e531c) {
            ctx->pc = 0x1E52E4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e52e4;
        }
    }
    ctx->pc = 0x1E5324u;
    // 0x1e5324: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e5324u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e5328: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e5328u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e532c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1e532cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1e5330: 0x3e00008  jr          $ra
    ctx->pc = 0x1E5330u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E5330u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E5338u;
}
