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

// Function: entry_0027f4ac
// Address: 0x27f4ac - 0x27f4c0
void entry_0027f4ac_0x27f4ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027f4ac_0x27f4ac");
#endif

    ctx->pc = 0x27f4acu;

    // 0x27f4ac: 0xac23d4bc  sw          $v1, -0x2B44($at)
    ctx->pc = 0x27f4acu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294956220), GPR_U32(ctx, 3));
    // 0x27f4b0: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x27f4b0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27f4b4: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x27f4b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x27f4b8: 0x3e00008  jr          $ra
    ctx->pc = 0x27F4B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27F4B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27F4C0u;
}
