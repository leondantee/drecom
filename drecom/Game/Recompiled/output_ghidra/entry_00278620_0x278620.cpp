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

// Function: entry_00278620
// Address: 0x278620 - 0x278638
void entry_00278620_0x278620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00278620_0x278620");
#endif

    ctx->pc = 0x278620u;

    // 0x278620: 0xac201a80  sw          $zero, 0x1A80($at)
    ctx->pc = 0x278620u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6784), GPR_U32(ctx, 0));
    // 0x278624: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x278624u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x278628: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x278628u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27862c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x27862cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x278630: 0x3e00008  jr          $ra
    ctx->pc = 0x278630u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x278630u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x278638u;
}
