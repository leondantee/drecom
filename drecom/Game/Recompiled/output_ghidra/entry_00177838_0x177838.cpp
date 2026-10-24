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

// Function: entry_00177838
// Address: 0x177838 - 0x17786c
void entry_00177838_0x177838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00177838_0x177838");
#endif

    ctx->pc = 0x177838u;

    // 0x177838: 0x72601628  paddub      $v0, $s3, $zero
    ctx->pc = 0x177838u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x17783c: 0x2453ffff  addiu       $s3, $v0, -0x1
    ctx->pc = 0x17783cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x177840: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x177840u;
    {
        const bool branch_taken_0x177840 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x177840) {
            ctx->pc = 0x1777CCu;
            return;
        }
    }
    ctx->pc = 0x177848u;
    // 0x177848: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x177848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x17784c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x17784cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x177850: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x177850u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x177854: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x177854u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x177858: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x177858u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17785c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17785cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x177860: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x177860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x177864: 0x3e00008  jr          $ra
    ctx->pc = 0x177864u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x177864u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17786Cu;
}
