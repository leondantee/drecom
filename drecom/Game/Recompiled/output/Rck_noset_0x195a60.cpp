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

// Function: Rck_noset
// Address: 0x195a60 - 0x195a98
void Rck_noset_0x195a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Rck_noset_0x195a60");
#endif

    ctx->pc = 0x195a60u;

    // 0x195a60: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x195a60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x195a64: 0x8c230ae8  lw          $v1, 0xAE8($at)
    ctx->pc = 0x195a64u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x195a68: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x195a68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x195a6c: 0xac23ac60  sw          $v1, -0x53A0($at)
    ctx->pc = 0x195a6cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5CAC60u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5CAC60u, _value); } while (0);
    // 0x195a70: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x195a70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x195a74: 0x8c23ac60  lw          $v1, -0x53A0($at)
    ctx->pc = 0x195a74u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5CAC60u));
    // 0x195a78: 0xac600014  sw          $zero, 0x14($v1)
    ctx->pc = 0x195a78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 0));
    // 0x195a7c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x195a7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x195a80: 0x8c230ae8  lw          $v1, 0xAE8($at)
    ctx->pc = 0x195a80u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x195a84: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x195a84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x195a88: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x195a88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x195a8c: 0xac230ae8  sw          $v1, 0xAE8($at)
    ctx->pc = 0x195a8cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
    // 0x195a90: 0x3e00008  jr          $ra
    ctx->pc = 0x195A90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195A90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x195A98u;
}
