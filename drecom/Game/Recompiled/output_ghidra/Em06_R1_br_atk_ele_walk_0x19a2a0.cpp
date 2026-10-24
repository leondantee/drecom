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

// Function: Em06_R1_br_atk_ele_walk
// Address: 0x19a2a0 - 0x19a2b8
void Em06_R1_br_atk_ele_walk_0x19a2a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em06_R1_br_atk_ele_walk_0x19a2a0");
#endif

    ctx->pc = 0x19a2a0u;

    // 0x19a2a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19a2a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19a2a4: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x19a2a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x19a2a8: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x19a2a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x19a2ac: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x19a2acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x19a2b0: 0x3e00008  jr          $ra
    ctx->pc = 0x19A2B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19A2B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19A2B8u;
}
