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

// Function: entry_0031e80c
// Address: 0x31e80c - 0x31e824
void entry_0031e80c_0x31e80c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031e80c_0x31e80c");
#endif

    ctx->pc = 0x31e80cu;

    // 0x31e80c: 0xac23af6c  sw          $v1, -0x5094($at)
    ctx->pc = 0x31e80cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294946668), GPR_U32(ctx, 3));
    // 0x31e810: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x31e810u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31e814: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x31e814u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31e818: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x31e818u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x31e81c: 0x3e00008  jr          $ra
    ctx->pc = 0x31E81Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31E81Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31E824u;
}
