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

// Function: entry_001e4b54
// Address: 0x1e4b54 - 0x1e4b70
void entry_001e4b54_0x1e4b54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e4b54_0x1e4b54");
#endif

    ctx->pc = 0x1e4b54u;

    // 0x1e4b54: 0x24630a10  addiu       $v1, $v1, 0xA10
    ctx->pc = 0x1e4b54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2576));
    // 0x1e4b58: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1e4b58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1e4b5c: 0xac60001c  sw          $zero, 0x1C($v1)
    ctx->pc = 0x1e4b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 0));
    // 0x1e4b60: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e4b60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e4b64: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1e4b64u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1e4b68: 0x3e00008  jr          $ra
    ctx->pc = 0x1E4B68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E4B68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E4B70u;
}
