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

// Function: entry_00136628
// Address: 0x136628 - 0x136650
void entry_00136628_0x136628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00136628_0x136628");
#endif

    ctx->pc = 0x136628u;

    // 0x136628: 0x7bbf0060  lq          $ra, 0x60($sp)
    ctx->pc = 0x136628u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x13662c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x13662cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x136630: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x136630u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x136634: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x136634u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x136638: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x136638u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13663c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13663cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x136640: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x136640u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x136644: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x136644u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x136648: 0x3e00008  jr          $ra
    ctx->pc = 0x136648u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x136648u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x136650u;
}
