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

// Function: entry_0030fc34
// Address: 0x30fc34 - 0x30fc50
void entry_0030fc34_0x30fc34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0030fc34_0x30fc34");
#endif

    ctx->pc = 0x30fc34u;

    // 0x30fc34: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x30fc34u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30fc38: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x30fc38u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30fc3c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x30fc3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30fc40: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x30fc40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30fc44: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x30fc44u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x30fc48: 0x3e00008  jr          $ra
    ctx->pc = 0x30FC48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30FC48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30FC50u;
}
