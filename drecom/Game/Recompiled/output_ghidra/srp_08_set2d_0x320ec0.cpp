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

// Function: srp_08_set2d
// Address: 0x320ec0 - 0x320ee4
void srp_08_set2d_0x320ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("srp_08_set2d_0x320ec0");
#endif

    ctx->pc = 0x320ec0u;

    // 0x320ec0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x320ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x320ec4: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x320ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x320ec8: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x320ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x320ecc: 0x8c830b18  lw          $v1, 0xB18($a0)
    ctx->pc = 0x320eccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2840)));
    // 0x320ed0: 0x38630010  xori        $v1, $v1, 0x10
    ctx->pc = 0x320ed0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)16);
    // 0x320ed4: 0xac830b18  sw          $v1, 0xB18($a0)
    ctx->pc = 0x320ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2840), GPR_U32(ctx, 3));
    // 0x320ed8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x320ed8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x320edc: 0x3e00008  jr          $ra
    ctx->pc = 0x320EDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x320EDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x320EE4u;
}
