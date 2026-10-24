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

// Function: entry_0019f498
// Address: 0x19f498 - 0x19f4b4
void entry_0019f498_0x19f498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f498_0x19f498");
#endif

    ctx->pc = 0x19f498u;

    // 0x19f498: 0x8c238070  lw          $v1, -0x7F90($at)
    ctx->pc = 0x19f498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294934640)));
    // 0x19f49c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x19f49cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x19f4a0: 0xac70002c  sw          $s0, 0x2C($v1)
    ctx->pc = 0x19f4a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 16));
    // 0x19f4a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19f4a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19f4a8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x19f4a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x19f4ac: 0x3e00008  jr          $ra
    ctx->pc = 0x19F4ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19F4ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19F4B4u;
}
