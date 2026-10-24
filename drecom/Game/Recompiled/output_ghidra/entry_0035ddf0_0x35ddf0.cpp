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

// Function: entry_0035ddf0
// Address: 0x35ddf0 - 0x35de08
void entry_0035ddf0_0x35ddf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0035ddf0_0x35ddf0");
#endif

    ctx->pc = 0x35ddf0u;

    // 0x35ddf0: 0x2463c100  addiu       $v1, $v1, -0x3F00
    ctx->pc = 0x35ddf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951168));
    // 0x35ddf4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x35ddf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x35ddf8: 0xa465009c  sh          $a1, 0x9C($v1)
    ctx->pc = 0x35ddf8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 156), (uint16_t)GPR_U32(ctx, 5));
    // 0x35ddfc: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x35ddfcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x35de00: 0x3e00008  jr          $ra
    ctx->pc = 0x35DE00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35DE00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35DE08u;
}
