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

// Function: entry_002eb010
// Address: 0x2eb010 - 0x2eb040
void entry_002eb010_0x2eb010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002eb010_0x2eb010");
#endif

    ctx->pc = 0x2eb010u;

    // 0x2eb010: 0x1a40ff0c  blez        $s2, . + 4 + (-0xF4 << 2)
    ctx->pc = 0x2EB010u;
    {
        const bool branch_taken_0x2eb010 = (GPR_S32(ctx, 18) <= 0);
        if (branch_taken_0x2eb010) {
            ctx->pc = 0x2EAC44u;
            return;
        }
    }
    ctx->pc = 0x2EB018u;
    // 0x2eb018: 0x7bbf0060  lq          $ra, 0x60($sp)
    ctx->pc = 0x2eb018u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2eb01c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2eb01cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2eb020: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2eb020u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2eb024: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2eb024u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2eb028: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2eb028u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2eb02c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2eb02cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2eb030: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2eb030u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2eb034: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x2eb034u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2eb038: 0x3e00008  jr          $ra
    ctx->pc = 0x2EB038u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EB038u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EB040u;
}
