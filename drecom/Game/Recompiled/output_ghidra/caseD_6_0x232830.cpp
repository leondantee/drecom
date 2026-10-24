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

// Function: caseD_6
// Address: 0x232830 - 0x232860
void caseD_6_0x232830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_6_0x232830");
#endif

    ctx->pc = 0x232830u;

    // 0x232830: 0x7bbf0080  lq          $ra, 0x80($sp)
    ctx->pc = 0x232830u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x232834: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x232834u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x232838: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x232838u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x23283c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x23283cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x232840: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x232840u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x232844: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x232844u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x232848: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x232848u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23284c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x23284cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x232850: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x232850u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x232854: 0x27bd01e0  addiu       $sp, $sp, 0x1E0
    ctx->pc = 0x232854u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x232858: 0x3e00008  jr          $ra
    ctx->pc = 0x232858u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x232858u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x232860u;
}
