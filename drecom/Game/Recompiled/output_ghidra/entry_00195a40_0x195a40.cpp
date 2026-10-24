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

// Function: entry_00195a40
// Address: 0x195a40 - 0x195a5c
void entry_00195a40_0x195a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00195a40_0x195a40");
#endif

    ctx->pc = 0x195a40u;

    // 0x195a40: 0x1600ffc3  bnez        $s0, . + 4 + (-0x3D << 2)
    ctx->pc = 0x195A40u;
    {
        const bool branch_taken_0x195a40 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x195a40) {
            ctx->pc = 0x195950u;
            return;
        }
    }
    ctx->pc = 0x195A48u;
    // 0x195a48: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x195a48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x195a4c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x195a4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x195a50: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x195a50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x195a54: 0x3e00008  jr          $ra
    ctx->pc = 0x195A54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195A54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x195A5Cu;
}
