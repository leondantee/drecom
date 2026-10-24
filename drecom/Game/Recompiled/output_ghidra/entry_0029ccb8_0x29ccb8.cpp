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

// Function: entry_0029ccb8
// Address: 0x29ccb8 - 0x29cce4
void entry_0029ccb8_0x29ccb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029ccb8_0x29ccb8");
#endif

    switch (ctx->pc) {
        case 0x29ccccu: goto label_29cccc;
        default: break;
    }

    ctx->pc = 0x29ccb8u;

    // 0x29ccb8: 0x2e020320  sltiu       $v0, $s0, 0x320
    ctx->pc = 0x29ccb8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)800) ? 1 : 0);
    // 0x29ccbc: 0x1440ffbb  bnez        $v0, . + 4 + (-0x45 << 2)
    ctx->pc = 0x29CCBCu;
    {
        const bool branch_taken_0x29ccbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29ccbc) {
            ctx->pc = 0x29CBACu;
            return;
        }
    }
    ctx->pc = 0x29CCC4u;
    // 0x29ccc4: 0xc084934  jal         func_2124D0
    ctx->pc = 0x29CCC4u;
    SET_GPR_U32(ctx, 31, 0x29CCCCu);
    ctx->pc = 0x2124D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2124D0u, 0x29CCC4u, 0x29CCCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CCCCu;
label_29cccc:
    // 0x29cccc: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x29ccccu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29ccd0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x29ccd0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29ccd4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29ccd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29ccd8: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x29ccd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x29ccdc: 0x3e00008  jr          $ra
    ctx->pc = 0x29CCDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29CCDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29CCE4u;
}
