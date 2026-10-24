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

// Function: entry_0013c290
// Address: 0x13c290 - 0x13c2cc
void entry_0013c290_0x13c290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013c290_0x13c290");
#endif

    ctx->pc = 0x13c290u;

label_13c290:
    // 0x13c290: 0xae1100a0  sw          $s1, 0xA0($s0)
    ctx->pc = 0x13c290u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 17));
    // 0x13c294: 0x26310020  addiu       $s1, $s1, 0x20
    ctx->pc = 0x13c294u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x13c298: 0x26100120  addiu       $s0, $s0, 0x120
    ctx->pc = 0x13c298u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x13c29c: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x13c29cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x13c2a0: 0x1640fffb  bnez        $s2, . + 4 + (-0x5 << 2)
    ctx->pc = 0x13C2A0u;
    {
        const bool branch_taken_0x13c2a0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x13c2a0) {
            ctx->pc = 0x13C290u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13c290;
        }
    }
    ctx->pc = 0x13C2A8u;
    // 0x13c2a8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x13c2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x13c2ac: 0x7bbf0040  lq          $ra, 0x40($sp)
    ctx->pc = 0x13c2acu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13c2b0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x13c2b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13c2b4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x13c2b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13c2b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13c2b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13c2bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13c2bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13c2c0: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x13c2c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x13c2c4: 0x3e00008  jr          $ra
    ctx->pc = 0x13C2C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13C2C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13C2CCu;
}
