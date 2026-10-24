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

// Function: entry_00158728
// Address: 0x158728 - 0x158748
void entry_00158728_0x158728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00158728_0x158728");
#endif

    ctx->pc = 0x158728u;

    // 0x158728: 0x2e230010  sltiu       $v1, $s1, 0x10
    ctx->pc = 0x158728u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x15872c: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x15872Cu;
    {
        const bool branch_taken_0x15872c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15872c) {
            ctx->pc = 0x158700u;
            return;
        }
    }
    ctx->pc = 0x158734u;
    // 0x158734: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x158734u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x158738: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x158738u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15873c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x15873cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x158740: 0x3e00008  jr          $ra
    ctx->pc = 0x158740u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x158740u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x158748u;
}
