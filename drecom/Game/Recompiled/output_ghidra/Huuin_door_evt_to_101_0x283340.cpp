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

// Function: Huuin_door_evt_to_101
// Address: 0x283340 - 0x283390
void Huuin_door_evt_to_101_0x283340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Huuin_door_evt_to_101_0x283340");
#endif

    switch (ctx->pc) {
        case 0x283374u: goto label_283374;
        case 0x28337cu: goto label_28337c;
        default: break;
    }

    ctx->pc = 0x283340u;

    // 0x283340: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x283340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x283344: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x283344u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x283348: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x283348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x28334c: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x28334cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x283350: 0x24500080  addiu       $s0, $v0, 0x80
    ctx->pc = 0x283350u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x283354: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x283354u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x283358: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x283358u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28335c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x28335cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x283360: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x283360u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x283364: 0x24080009  addiu       $t0, $zero, 0x9
    ctx->pc = 0x283364u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x283368: 0x24090004  addiu       $t1, $zero, 0x4
    ctx->pc = 0x283368u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x28336c: 0xc0c7bd4  jal         func_31EF50
    ctx->pc = 0x28336Cu;
    SET_GPR_U32(ctx, 31, 0x283374u);
    ctx->pc = 0x31EF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EF50u, 0x28336Cu, 0x283374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283374u;
label_283374:
    // 0x283374: 0xc084934  jal         func_2124D0
    ctx->pc = 0x283374u;
    SET_GPR_U32(ctx, 31, 0x28337Cu);
    ctx->pc = 0x2124D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2124D0u, 0x283374u, 0x28337Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28337Cu;
label_28337c:
    // 0x28337c: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x28337cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x283380: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x283380u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x283384: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x283384u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x283388: 0x3e00008  jr          $ra
    ctx->pc = 0x283388u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x283388u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x283390u;
}
