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

// Function: Huuin_door_evt_2_r108
// Address: 0x279370 - 0x2793b0
void Huuin_door_evt_2_r108_0x279370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Huuin_door_evt_2_r108_0x279370");
#endif

    switch (ctx->pc) {
        case 0x279398u: goto label_279398;
        case 0x2793a0u: goto label_2793a0;
        default: break;
    }

    ctx->pc = 0x279370u;

    // 0x279370: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x279370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x279374: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x279374u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x279378: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x279378u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x27937c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x27937cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x279380: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x279380u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x279384: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x279384u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x279388: 0x2408000f  addiu       $t0, $zero, 0xF
    ctx->pc = 0x279388u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x27938c: 0x24090011  addiu       $t1, $zero, 0x11
    ctx->pc = 0x27938cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x279390: 0xc0c7bd4  jal         func_31EF50
    ctx->pc = 0x279390u;
    SET_GPR_U32(ctx, 31, 0x279398u);
    ctx->pc = 0x31EF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EF50u, 0x279390u, 0x279398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279398u;
label_279398:
    // 0x279398: 0xc084934  jal         func_2124D0
    ctx->pc = 0x279398u;
    SET_GPR_U32(ctx, 31, 0x2793A0u);
    ctx->pc = 0x2124D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2124D0u, 0x279398u, 0x2793A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2793A0u;
label_2793a0:
    // 0x2793a0: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2793a0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2793a4: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2793a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2793a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2793A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2793A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2793B0u;
}
