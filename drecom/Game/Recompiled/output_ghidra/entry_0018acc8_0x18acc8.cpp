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

// Function: entry_0018acc8
// Address: 0x18acc8 - 0x18acf4
void entry_0018acc8_0x18acc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018acc8_0x18acc8");
#endif

    ctx->pc = 0x18acc8u;

    // 0x18acc8: 0x254182b  sltu        $v1, $s2, $s4
    ctx->pc = 0x18acc8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x18accc: 0x1460ffea  bnez        $v1, . + 4 + (-0x16 << 2)
    ctx->pc = 0x18ACCCu;
    {
        const bool branch_taken_0x18accc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18accc) {
            ctx->pc = 0x18AC78u;
            return;
        }
    }
    ctx->pc = 0x18ACD4u;
    // 0x18acd4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x18acd4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18acd8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x18acd8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18acdc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18acdcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18ace0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18ace0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18ace4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18ace4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18ace8: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x18ace8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x18acec: 0x3e00008  jr          $ra
    ctx->pc = 0x18ACECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18ACECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18ACF4u;
}
