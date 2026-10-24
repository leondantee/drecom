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

// Function: entry_001369b8
// Address: 0x1369b8 - 0x1369e8
void entry_001369b8_0x1369b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001369b8_0x1369b8");
#endif

    ctx->pc = 0x1369b8u;

    // 0x1369b8: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1369b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1369bc: 0x8c23bb40  lw          $v1, -0x44C0($at)
    ctx->pc = 0x1369bcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x47BB40u));
    // 0x1369c0: 0x223182b  sltu        $v1, $s1, $v1
    ctx->pc = 0x1369c0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1369c4: 0x1460ffd7  bnez        $v1, . + 4 + (-0x29 << 2)
    ctx->pc = 0x1369C4u;
    {
        const bool branch_taken_0x1369c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1369c4) {
            ctx->pc = 0x136924u;
            return;
        }
    }
    ctx->pc = 0x1369CCu;
    // 0x1369cc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1369ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1369d0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1369d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1369d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1369d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1369d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1369d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1369dc: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1369dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1369e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1369E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1369E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1369E8u;
}
