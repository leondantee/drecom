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

// Function: entry_0018a96c
// Address: 0x18a96c - 0x18a98c
void entry_0018a96c_0x18a96c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018a96c_0x18a96c");
#endif

    ctx->pc = 0x18a96cu;

    // 0x18a96c: 0xac230ae8  sw          $v1, 0xAE8($at)
    ctx->pc = 0x18a96cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 2792), GPR_U32(ctx, 3));
    // 0x18a970: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x18a970u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18a974: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18a974u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18a978: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18a978u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18a97c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18a97cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18a980: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x18a980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x18a984: 0x3e00008  jr          $ra
    ctx->pc = 0x18A984u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18A984u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18A98Cu;
}
