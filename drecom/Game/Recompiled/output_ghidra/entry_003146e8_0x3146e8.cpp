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

// Function: entry_003146e8
// Address: 0x3146e8 - 0x314708
void entry_003146e8_0x3146e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003146e8_0x3146e8");
#endif

    ctx->pc = 0x3146e8u;

    // 0x3146e8: 0x7bbf0040  lq          $ra, 0x40($sp)
    ctx->pc = 0x3146e8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3146ec: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3146ecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3146f0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3146f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3146f4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3146f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3146f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3146f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3146fc: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x3146fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x314700: 0x3e00008  jr          $ra
    ctx->pc = 0x314700u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x314700u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x314708u;
}
