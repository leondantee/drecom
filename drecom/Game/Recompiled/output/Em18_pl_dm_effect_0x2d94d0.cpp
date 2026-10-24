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

// Function: Em18_pl_dm_effect
// Address: 0x2d94d0 - 0x2d9530
void Em18_pl_dm_effect_0x2d94d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em18_pl_dm_effect_0x2d94d0");
#endif

    switch (ctx->pc) {
        case 0x2d94f4u: goto label_2d94f4;
        case 0x2d9508u: goto label_2d9508;
        case 0x2d951cu: goto label_2d951c;
        default: break;
    }

    ctx->pc = 0x2d94d0u;

    // 0x2d94d0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2d94d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2d94d4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x2d94d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x2d94d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d94d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d94dc: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2d94dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2d94e0: 0x2450dbc0  addiu       $s0, $v0, -0x2440
    ctx->pc = 0x2d94e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x2d94e4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2d94e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d94e8: 0x8e050130  lw          $a1, 0x130($s0)
    ctx->pc = 0x2d94e8u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x2d94ec: 0xc040c44  jal         func_103110
    ctx->pc = 0x2D94ECu;
    SET_GPR_U32(ctx, 31, 0x2D94F4u);
    ctx->pc = 0x103110u;
    {
        ctx->pc = 0x2D94F4u;
        ps2_stubs::sceVu0InversMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2D94F4u) { return; }
    ctx->pc = 0x2D94F4u;
label_2d94f4:
    // 0x2d94f4: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2d94f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2d94f8: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x2d94f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d94fc: 0x26061200  addiu       $a2, $s0, 0x1200
    ctx->pc = 0x2d94fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4608));
    // 0x2d9500: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x2D9500u;
    SET_GPR_U32(ctx, 31, 0x2D9508u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x2D9508u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2D9508u) { return; }
    ctx->pc = 0x2D9508u;
label_2d9508:
    // 0x2d9508: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x2d9508u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x2d950c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2d950cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2d9510: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x2d9510u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2d9514: 0xc0c9184  jal         func_324610
    ctx->pc = 0x2D9514u;
    SET_GPR_U32(ctx, 31, 0x2D951Cu);
    ctx->pc = 0x324610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324610u, 0x2D9514u, 0x2D951Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D951Cu;
label_2d951c:
    // 0x2d951c: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x2d951cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d9520: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d9520u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d9524: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x2d9524u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2d9528: 0x3e00008  jr          $ra
    ctx->pc = 0x2D9528u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D9528u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D9530u;
}
