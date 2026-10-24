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

// Function: entry_003782d8
// Address: 0x3782d8 - 0x3782f8
void entry_003782d8_0x3782d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003782d8_0x3782d8");
#endif

    ctx->pc = 0x3782d8u;

    // 0x3782d8: 0x2e030002  sltiu       $v1, $s0, 0x2
    ctx->pc = 0x3782d8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x3782dc: 0x1460ffbf  bnez        $v1, . + 4 + (-0x41 << 2)
    ctx->pc = 0x3782DCu;
    {
        const bool branch_taken_0x3782dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3782dc) {
            ctx->pc = 0x3781DCu;
            return;
        }
    }
    ctx->pc = 0x3782E4u;
    // 0x3782e4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3782e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3782e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3782e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3782ec: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x3782ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3782f0: 0x3e00008  jr          $ra
    ctx->pc = 0x3782F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3782F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3782F8u;
}
