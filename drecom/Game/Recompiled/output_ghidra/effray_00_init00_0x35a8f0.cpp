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

// Function: effray_00_init00
// Address: 0x35a8f0 - 0x35a930
void effray_00_init00_0x35a8f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("effray_00_init00_0x35a8f0");
#endif

    ctx->pc = 0x35a8f0u;

    // 0x35a8f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x35a8f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x35a8f4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x35a8f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x35a8f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x35a8f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x35a8fc: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x35a8fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x35a900: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x35a900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x35a904: 0x8c710110  lw          $s1, 0x110($v1)
    ctx->pc = 0x35a904u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 272)));
    // 0x35a908: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x35a908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x35a90c: 0x8c7001fc  lw          $s0, 0x1FC($v1)
    ctx->pc = 0x35a90cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 508)));
    // 0x35a910: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x35a910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35a914: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x35a914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x35a918: 0xac640128  sw          $a0, 0x128($v1)
    ctx->pc = 0x35a918u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 296), GPR_U32(ctx, 4));
    // 0x35a91c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x35a91cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35a920: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x35a920u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35a924: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x35a924u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x35a928: 0x3e00008  jr          $ra
    ctx->pc = 0x35A928u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35A928u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35A930u;
}
