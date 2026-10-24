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

// Function: entry_0019cad4
// Address: 0x19cad4 - 0x19caf0
void entry_0019cad4_0x19cad4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019cad4_0x19cad4");
#endif

    ctx->pc = 0x19cad4u;

    // 0x19cad4: 0xac221a48  sw          $v0, 0x1A48($at)
    ctx->pc = 0x19cad4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6728), GPR_U32(ctx, 2));
    // 0x19cad8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19cad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19cadc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19cadcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19cae0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19cae0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19cae4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x19cae4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x19cae8: 0x3e00008  jr          $ra
    ctx->pc = 0x19CAE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19CAE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19CAF0u;
}
