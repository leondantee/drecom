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

// Function: Em19_R1_br_attack
// Address: 0x2e5d50 - 0x2e5d6c
void Em19_R1_br_attack_0x2e5d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em19_R1_br_attack_0x2e5d50");
#endif

    ctx->pc = 0x2e5d50u;

    // 0x2e5d50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e5d50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2e5d54: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2e5d54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2e5d58: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2e5d58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2e5d5c: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x2e5d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x2e5d60: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2e5d60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2e5d64: 0x3e00008  jr          $ra
    ctx->pc = 0x2E5D64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E5D64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E5D6Cu;
}
