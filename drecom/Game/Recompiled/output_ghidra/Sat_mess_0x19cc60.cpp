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

// Function: Sat_mess
// Address: 0x19cc60 - 0x19ccb8
void Sat_mess_0x19cc60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Sat_mess_0x19cc60");
#endif

    switch (ctx->pc) {
        case 0x19cca0u: goto label_19cca0;
        default: break;
    }

    ctx->pc = 0x19cc60u;

    // 0x19cc60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19cc60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19cc64: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x19cc64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x19cc68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19cc68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19cc6c: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x19cc6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x19cc70: 0x8fb00028  lw          $s0, 0x28($sp)
    ctx->pc = 0x19cc70u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x19cc74: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x19cc74u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x19cc78: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x19cc78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x19cc7c: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x19cc7cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x19cc80: 0x86020002  lh          $v0, 0x2($s0)
    ctx->pc = 0x19cc80u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x19cc84: 0x22c3c  dsll32      $a1, $v0, 16
    ctx->pc = 0x19cc84u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 16));
    // 0x19cc88: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x19cc88u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x19cc8c: 0x86020004  lh          $v0, 0x4($s0)
    ctx->pc = 0x19cc8cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x19cc90: 0x2343c  dsll32      $a2, $v0, 16
    ctx->pc = 0x19cc90u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 16));
    // 0x19cc94: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x19cc94u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x19cc98: 0xc0a56f0  jal         func_295BC0
    ctx->pc = 0x19CC98u;
    SET_GPR_U32(ctx, 31, 0x19CCA0u);
    ctx->pc = 0x295BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295BC0u, 0x19CC98u, 0x19CCA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19CCA0u;
label_19cca0:
    // 0x19cca0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19cca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19cca4: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x19cca4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19cca8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19cca8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19ccac: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x19ccacu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x19ccb0: 0x3e00008  jr          $ra
    ctx->pc = 0x19CCB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19CCB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19CCB8u;
}
