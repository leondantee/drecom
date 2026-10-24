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

// Function: Em10_R1_dm_br_blow_front
// Address: 0x131370 - 0x13138c
void Em10_R1_dm_br_blow_front_0x131370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em10_R1_dm_br_blow_front_0x131370");
#endif

    ctx->pc = 0x131370u;

    // 0x131370: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x131370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x131374: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x131374u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x131378: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x131378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13137c: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x13137cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x131380: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x131380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x131384: 0x3e00008  jr          $ra
    ctx->pc = 0x131384u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x131384u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13138Cu;
}
