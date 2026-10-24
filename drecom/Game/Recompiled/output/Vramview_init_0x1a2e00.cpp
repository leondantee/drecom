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

// Function: Vramview_init
// Address: 0x1a2e00 - 0x1a2e68
void Vramview_init_0x1a2e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Vramview_init_0x1a2e00");
#endif

    switch (ctx->pc) {
        case 0x1a2e38u: goto label_1a2e38;
        case 0x1a2e44u: goto label_1a2e44;
        case 0x1a2e50u: goto label_1a2e50;
        default: break;
    }

    ctx->pc = 0x1a2e00u;

    // 0x1a2e00: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1a2e00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1a2e04: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x1a2e04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x1a2e08: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a2e08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a2e0c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a2e0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a2e10: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x1a2e10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x1a2e14: 0x8fb00038  lw          $s0, 0x38($sp)
    ctx->pc = 0x1a2e14u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1a2e18: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1a2e18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1a2e1c: 0x24510320  addiu       $s1, $v0, 0x320
    ctx->pc = 0x1a2e1cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 800));
    // 0x1a2e20: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1a2e20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a2e24: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x1a2e24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1a2e28: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x1a2e28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1a2e2c: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x1a2e2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1a2e30: 0xc0590ec  jal         func_1643B0
    ctx->pc = 0x1A2E30u;
    SET_GPR_U32(ctx, 31, 0x1A2E38u);
    ctx->pc = 0x1643B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1643B0u, 0x1A2E30u, 0x1A2E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2E38u;
label_1a2e38:
    // 0x1a2e38: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1a2e38u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1a2e3c: 0xc068bb4  jal         func_1A2ED0
    ctx->pc = 0x1A2E3Cu;
    SET_GPR_U32(ctx, 31, 0x1A2E44u);
    ctx->pc = 0x1A2ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2ED0u, 0x1A2E3Cu, 0x1A2E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2E44u;
label_1a2e44:
    // 0x1a2e44: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x1a2e44u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1a2e48: 0xc068be4  jal         func_1A2F90
    ctx->pc = 0x1A2E48u;
    SET_GPR_U32(ctx, 31, 0x1A2E50u);
    ctx->pc = 0x1A2F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2F90u, 0x1A2E48u, 0x1A2E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2E50u;
label_1a2e50:
    // 0x1a2e50: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x1a2e50u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a2e54: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a2e54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a2e58: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a2e58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a2e5c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1a2e5cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1a2e60: 0x3e00008  jr          $ra
    ctx->pc = 0x1A2E60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2E60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A2E68u;
}
