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

// Function: entry_0018df30
// Address: 0x18df30 - 0x18df54
void entry_0018df30_0x18df30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018df30_0x18df30");
#endif

    ctx->pc = 0x18df30u;

    // 0x18df30: 0x7bbf0050  lq          $ra, 0x50($sp)
    ctx->pc = 0x18df30u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18df34: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x18df34u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18df38: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x18df38u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18df3c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18df3cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18df40: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18df40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18df44: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18df44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18df48: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x18df48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x18df4c: 0x3e00008  jr          $ra
    ctx->pc = 0x18DF4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18DF4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18DF54u;
}
