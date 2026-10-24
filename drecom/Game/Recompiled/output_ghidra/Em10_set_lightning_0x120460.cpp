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

// Function: Em10_set_lightning
// Address: 0x120460 - 0x1204bc
void Em10_set_lightning_0x120460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em10_set_lightning_0x120460");
#endif

    switch (ctx->pc) {
        case 0x120480u: goto label_120480;
        case 0x120498u: goto label_120498;
        case 0x1204acu: goto label_1204ac;
        default: break;
    }

    ctx->pc = 0x120460u;

    // 0x120460: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x120460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x120464: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x120464u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x120468: 0xafa40068  sw          $a0, 0x68($sp)
    ctx->pc = 0x120468u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 4));
    // 0x12046c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x12046cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x120470: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x120470u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x120474: 0x8c450130  lw          $a1, 0x130($v0)
    ctx->pc = 0x120474u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x120478: 0xc040c44  jal         func_103110
    ctx->pc = 0x120478u;
    SET_GPR_U32(ctx, 31, 0x120480u);
    ctx->pc = 0x103110u;
    {
        ctx->pc = 0x120480u;
        ps2_stubs::sceVu0InversMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x120480u) { return; }
    ctx->pc = 0x120480u;
label_120480:
    // 0x120480: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x120480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x120484: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x120484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x120488: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x120488u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x12048c: 0x24461200  addiu       $a2, $v0, 0x1200
    ctx->pc = 0x12048cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4608));
    // 0x120490: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x120490u;
    SET_GPR_U32(ctx, 31, 0x120498u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x120498u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x120498u) { return; }
    ctx->pc = 0x120498u;
label_120498:
    // 0x120498: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x120498u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12049c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x12049cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1204a0: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x1204a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1204a4: 0xc087084  jal         func_21C210
    ctx->pc = 0x1204A4u;
    SET_GPR_U32(ctx, 31, 0x1204ACu);
    ctx->pc = 0x21C210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C210u, 0x1204A4u, 0x1204ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1204ACu;
label_1204ac:
    // 0x1204ac: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x1204acu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1204b0: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x1204b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1204b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1204B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1204B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1204BCu;
}
