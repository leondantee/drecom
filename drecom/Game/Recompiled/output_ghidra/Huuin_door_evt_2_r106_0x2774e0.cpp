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

// Function: Huuin_door_evt_2_r106
// Address: 0x2774e0 - 0x277520
void Huuin_door_evt_2_r106_0x2774e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Huuin_door_evt_2_r106_0x2774e0");
#endif

    switch (ctx->pc) {
        case 0x277508u: goto label_277508;
        case 0x277510u: goto label_277510;
        default: break;
    }

    ctx->pc = 0x2774e0u;

    // 0x2774e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2774e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2774e4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2774e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2774e8: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x2774e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2774ec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2774ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2774f0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x2774f0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2774f4: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2774f4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2774f8: 0x24080019  addiu       $t0, $zero, 0x19
    ctx->pc = 0x2774f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x2774fc: 0x2409000d  addiu       $t1, $zero, 0xD
    ctx->pc = 0x2774fcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x277500: 0xc0c7bd4  jal         func_31EF50
    ctx->pc = 0x277500u;
    SET_GPR_U32(ctx, 31, 0x277508u);
    ctx->pc = 0x31EF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EF50u, 0x277500u, 0x277508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277508u;
label_277508:
    // 0x277508: 0xc084934  jal         func_2124D0
    ctx->pc = 0x277508u;
    SET_GPR_U32(ctx, 31, 0x277510u);
    ctx->pc = 0x2124D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2124D0u, 0x277508u, 0x277510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277510u;
label_277510:
    // 0x277510: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x277510u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x277514: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x277514u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x277518: 0x3e00008  jr          $ra
    ctx->pc = 0x277518u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x277518u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x277520u;
}
