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

// Function: Md_parts_env_zbuff_db
// Address: 0x258ee0 - 0x258f38
void Md_parts_env_zbuff_db_0x258ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Md_parts_env_zbuff_db_0x258ee0");
#endif

    switch (ctx->pc) {
        case 0x258f00u: goto label_258f00;
        case 0x258f14u: goto label_258f14;
        default: break;
    }

    ctx->pc = 0x258ee0u;

    // 0x258ee0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x258ee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x258ee4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x258ee4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x258ee8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x258ee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x258eec: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x258eecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x258ef0: 0xafa50028  sw          $a1, 0x28($sp)
    ctx->pc = 0x258ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 5));
    // 0x258ef4: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x258ef4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x258ef8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x258EF8u;
    {
        const bool branch_taken_0x258ef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x258ef8) {
            ctx->pc = 0x258F18u;
            goto label_258f18;
        }
    }
    ctx->pc = 0x258F00u;
label_258f00:
    // 0x258f00: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x258f00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x258f04: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x258f04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x258f08: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x258f08u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x258f0c: 0xc0963d0  jal         func_258F40
    ctx->pc = 0x258F0Cu;
    SET_GPR_U32(ctx, 31, 0x258F14u);
    ctx->pc = 0x258F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258F40u, 0x258F0Cu, 0x258F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258F14u;
label_258f14:
    // 0x258f14: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x258f14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_258f18:
    // 0x258f18: 0x2e030002  sltiu       $v1, $s0, 0x2
    ctx->pc = 0x258f18u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x258f1c: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x258F1Cu;
    {
        const bool branch_taken_0x258f1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x258f1c) {
            ctx->pc = 0x258F00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_258f00;
        }
    }
    ctx->pc = 0x258F24u;
    // 0x258f24: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x258f24u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x258f28: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x258f28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x258f2c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x258f2cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x258f30: 0x3e00008  jr          $ra
    ctx->pc = 0x258F30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x258F30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x258F38u;
}
