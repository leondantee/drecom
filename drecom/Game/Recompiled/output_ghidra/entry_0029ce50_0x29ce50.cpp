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

// Function: entry_0029ce50
// Address: 0x29ce50 - 0x29ce78
void entry_0029ce50_0x29ce50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029ce50_0x29ce50");
#endif

    switch (ctx->pc) {
        case 0x29ce64u: goto label_29ce64;
        default: break;
    }

    ctx->pc = 0x29ce50u;

    // 0x29ce50: 0x2e020320  sltiu       $v0, $s0, 0x320
    ctx->pc = 0x29ce50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)800) ? 1 : 0);
    // 0x29ce54: 0x1440ffac  bnez        $v0, . + 4 + (-0x54 << 2)
    ctx->pc = 0x29CE54u;
    {
        const bool branch_taken_0x29ce54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29ce54) {
            ctx->pc = 0x29CD08u;
            return;
        }
    }
    ctx->pc = 0x29CE5Cu;
    // 0x29ce5c: 0xc084934  jal         func_2124D0
    ctx->pc = 0x29CE5Cu;
    SET_GPR_U32(ctx, 31, 0x29CE64u);
    ctx->pc = 0x2124D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2124D0u, 0x29CE5Cu, 0x29CE64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CE64u;
label_29ce64:
    // 0x29ce64: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x29ce64u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29ce68: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29ce68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29ce6c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x29ce6cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x29ce70: 0x3e00008  jr          $ra
    ctx->pc = 0x29CE70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29CE70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29CE78u;
}
