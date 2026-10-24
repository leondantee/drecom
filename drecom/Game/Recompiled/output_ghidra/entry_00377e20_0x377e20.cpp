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

// Function: entry_00377e20
// Address: 0x377e20 - 0x377e50
void entry_00377e20_0x377e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00377e20_0x377e20");
#endif

    ctx->pc = 0x377e20u;

    // 0x377e20: 0x213182b  sltu        $v1, $s0, $s3
    ctx->pc = 0x377e20u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x377e24: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x377E24u;
    {
        const bool branch_taken_0x377e24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x377e24) {
            ctx->pc = 0x377E00u;
            return;
        }
    }
    ctx->pc = 0x377E2Cu;
    // 0x377e2c: 0x7bbf0050  lq          $ra, 0x50($sp)
    ctx->pc = 0x377e2cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x377e30: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x377e30u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x377e34: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x377e34u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x377e38: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x377e38u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x377e3c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x377e3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x377e40: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x377e40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x377e44: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x377e44u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x377e48: 0x3e00008  jr          $ra
    ctx->pc = 0x377E48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x377E48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x377E50u;
}
