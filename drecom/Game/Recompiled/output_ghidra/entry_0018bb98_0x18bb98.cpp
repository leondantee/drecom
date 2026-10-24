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

// Function: entry_0018bb98
// Address: 0x18bb98 - 0x18bbc0
void entry_0018bb98_0x18bb98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018bb98_0x18bb98");
#endif

    ctx->pc = 0x18bb98u;

    // 0x18bb98: 0x1600fff2  bnez        $s0, . + 4 + (-0xE << 2)
    ctx->pc = 0x18BB98u;
    {
        const bool branch_taken_0x18bb98 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x18bb98) {
            ctx->pc = 0x18BB64u;
            return;
        }
    }
    ctx->pc = 0x18BBA0u;
    // 0x18bba0: 0x7bbf0040  lq          $ra, 0x40($sp)
    ctx->pc = 0x18bba0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18bba4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x18bba4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18bba8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18bba8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18bbac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18bbacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18bbb0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18bbb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18bbb4: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x18bbb4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x18bbb8: 0x3e00008  jr          $ra
    ctx->pc = 0x18BBB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18BBB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18BBC0u;
}
