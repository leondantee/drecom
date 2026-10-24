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

// Function: entry_00379c2c
// Address: 0x379c2c - 0x379c50
void entry_00379c2c_0x379c2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00379c2c_0x379c2c");
#endif

    ctx->pc = 0x379c2cu;

    // 0x379c2c: 0x7bbf0050  lq          $ra, 0x50($sp)
    ctx->pc = 0x379c2cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x379c30: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x379c30u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x379c34: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x379c34u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x379c38: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x379c38u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x379c3c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x379c3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x379c40: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x379c40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x379c44: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x379c44u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x379c48: 0x3e00008  jr          $ra
    ctx->pc = 0x379C48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x379C48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x379C50u;
}
