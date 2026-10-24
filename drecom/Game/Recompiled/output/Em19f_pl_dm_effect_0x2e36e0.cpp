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

// Function: Em19f_pl_dm_effect
// Address: 0x2e36e0 - 0x2e3768
void Em19f_pl_dm_effect_0x2e36e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em19f_pl_dm_effect_0x2e36e0");
#endif

    switch (ctx->pc) {
        case 0x2e3704u: goto label_2e3704;
        case 0x2e3718u: goto label_2e3718;
        case 0x2e372cu: goto label_2e372c;
        case 0x2e3740u: goto label_2e3740;
        case 0x2e3754u: goto label_2e3754;
        default: break;
    }

    ctx->pc = 0x2e36e0u;

    // 0x2e36e0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2e36e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2e36e4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x2e36e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x2e36e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e36e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e36ec: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2e36ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2e36f0: 0x2450dbc0  addiu       $s0, $v0, -0x2440
    ctx->pc = 0x2e36f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x2e36f4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2e36f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2e36f8: 0x8e050130  lw          $a1, 0x130($s0)
    ctx->pc = 0x2e36f8u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x2e36fc: 0xc040c44  jal         func_103110
    ctx->pc = 0x2E36FCu;
    SET_GPR_U32(ctx, 31, 0x2E3704u);
    ctx->pc = 0x103110u;
    {
        ctx->pc = 0x2E3704u;
        ps2_stubs::sceVu0InversMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2E3704u) { return; }
    ctx->pc = 0x2E3704u;
label_2e3704:
    // 0x2e3704: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2e3704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2e3708: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x2e3708u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2e370c: 0x26061200  addiu       $a2, $s0, 0x1200
    ctx->pc = 0x2e370cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4608));
    // 0x2e3710: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x2E3710u;
    SET_GPR_U32(ctx, 31, 0x2E3718u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x2E3718u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2E3718u) { return; }
    ctx->pc = 0x2E3718u;
label_2e3718:
    // 0x2e3718: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x2e3718u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x2e371c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2e371cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2e3720: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x2e3720u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2e3724: 0xc0c9184  jal         func_324610
    ctx->pc = 0x2E3724u;
    SET_GPR_U32(ctx, 31, 0x2E372Cu);
    ctx->pc = 0x324610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324610u, 0x2E3724u, 0x2E372Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E372Cu;
label_2e372c:
    // 0x2e372c: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x2e372cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x2e3730: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2e3730u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2e3734: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x2e3734u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2e3738: 0xc0c9184  jal         func_324610
    ctx->pc = 0x2E3738u;
    SET_GPR_U32(ctx, 31, 0x2E3740u);
    ctx->pc = 0x324610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324610u, 0x2E3738u, 0x2E3740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3740u;
label_2e3740:
    // 0x2e3740: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x2e3740u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x2e3744: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2e3744u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2e3748: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x2e3748u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2e374c: 0xc0c9184  jal         func_324610
    ctx->pc = 0x2E374Cu;
    SET_GPR_U32(ctx, 31, 0x2E3754u);
    ctx->pc = 0x324610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324610u, 0x2E374Cu, 0x2E3754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3754u;
label_2e3754:
    // 0x2e3754: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x2e3754u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e3758: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e3758u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e375c: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x2e375cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2e3760: 0x3e00008  jr          $ra
    ctx->pc = 0x2E3760u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E3760u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E3768u;
}
