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

// Function: entry_00152df8
// Address: 0x152df8 - 0x152e20
void entry_00152df8_0x152df8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00152df8_0x152df8");
#endif

    ctx->pc = 0x152df8u;

    // 0x152df8: 0x2a030008  slti        $v1, $s0, 0x8
    ctx->pc = 0x152df8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x152dfc: 0x1460ffc6  bnez        $v1, . + 4 + (-0x3A << 2)
    ctx->pc = 0x152DFCu;
    {
        const bool branch_taken_0x152dfc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x152dfc) {
            ctx->pc = 0x152D18u;
            return;
        }
    }
    ctx->pc = 0x152E04u;
    // 0x152e04: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x152e04u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x152e08: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x152e08u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x152e0c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x152e0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x152e10: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x152e10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x152e14: 0x27bd00d0  addiu       $sp, $sp, 0xD0
    ctx->pc = 0x152e14u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x152e18: 0x3e00008  jr          $ra
    ctx->pc = 0x152E18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x152E18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x152E20u;
}
