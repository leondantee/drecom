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

// Function: entry_0019cce4
// Address: 0x19cce4 - 0x19ccf8
void entry_0019cce4_0x19cce4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019cce4_0x19cce4");
#endif

    ctx->pc = 0x19cce4u;

    // 0x19cce4: 0xac2295bc  sw          $v0, -0x6A44($at)
    ctx->pc = 0x19cce4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294940092), GPR_U32(ctx, 2));
    // 0x19cce8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19cce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19ccec: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x19ccecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x19ccf0: 0x3e00008  jr          $ra
    ctx->pc = 0x19CCF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19CCF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19CCF8u;
}
