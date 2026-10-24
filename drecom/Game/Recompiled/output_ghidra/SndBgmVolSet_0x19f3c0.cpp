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

// Function: SndBgmVolSet
// Address: 0x19f3c0 - 0x19f3f0
void SndBgmVolSet_0x19f3c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SndBgmVolSet_0x19f3c0");
#endif

    switch (ctx->pc) {
        case 0x19f3e0u: goto label_19f3e0;
        default: break;
    }

    ctx->pc = 0x19f3c0u;

    // 0x19f3c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19f3c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19f3c4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x19f3c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x19f3c8: 0xa3a40010  sb          $a0, 0x10($sp)
    ctx->pc = 0x19f3c8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 4));
    // 0x19f3cc: 0xa3a50018  sb          $a1, 0x18($sp)
    ctx->pc = 0x19f3ccu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 24), (uint8_t)GPR_U32(ctx, 5));
    // 0x19f3d0: 0x93a40010  lbu         $a0, 0x10($sp)
    ctx->pc = 0x19f3d0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19f3d4: 0x93a50018  lbu         $a1, 0x18($sp)
    ctx->pc = 0x19f3d4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19f3d8: 0xc0ce554  jal         func_339550
    ctx->pc = 0x19F3D8u;
    SET_GPR_U32(ctx, 31, 0x19F3E0u);
    ctx->pc = 0x339550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339550u, 0x19F3D8u, 0x19F3E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F3E0u;
label_19f3e0:
    // 0x19f3e0: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x19f3e0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19f3e4: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x19f3e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x19f3e8: 0x3e00008  jr          $ra
    ctx->pc = 0x19F3E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19F3E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19F3F0u;
}
