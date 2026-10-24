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

// Function: eff2d_0a_init
// Address: 0x21fa80 - 0x21fb04
void eff2d_0a_init_0x21fa80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("eff2d_0a_init_0x21fa80");
#endif

    switch (ctx->pc) {
        case 0x21fac0u: goto label_21fac0;
        case 0x21fae0u: goto label_21fae0;
        case 0x21faecu: goto label_21faec;
        default: break;
    }

    ctx->pc = 0x21fa80u;

    // 0x21fa80: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x21fa80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x21fa84: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x21fa84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x21fa88: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x21fa88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x21fa8c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x21fa8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x21fa90: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x21fa90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x21fa94: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x21fa94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x21fa98: 0x2450dbc0  addiu       $s0, $v0, -0x2440
    ctx->pc = 0x21fa98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x21fa9c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x21fa9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x21faa0: 0x8c5101fc  lw          $s1, 0x1FC($v0)
    ctx->pc = 0x21faa0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 508)));
    // 0x21faa4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x21faa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21faa8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x21faa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x21faac: 0xac430128  sw          $v1, 0x128($v0)
    ctx->pc = 0x21faacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 296), GPR_U32(ctx, 3));
    // 0x21fab0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x21fab0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x21fab4: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x21fab4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x21fab8: 0xc0c98a4  jal         func_326290
    ctx->pc = 0x21FAB8u;
    SET_GPR_U32(ctx, 31, 0x21FAC0u);
    ctx->pc = 0x326290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326290u, 0x21FAB8u, 0x21FAC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FAC0u;
label_21fac0:
    // 0x21fac0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x21fac0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x21fac4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x21fac4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x21fac8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x21fac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x21facc: 0x24840180  addiu       $a0, $a0, 0x180
    ctx->pc = 0x21faccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 384));
    // 0x21fad0: 0x24650180  addiu       $a1, $v1, 0x180
    ctx->pc = 0x21fad0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 384));
    // 0x21fad4: 0x244600e0  addiu       $a2, $v0, 0xE0
    ctx->pc = 0x21fad4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 224));
    // 0x21fad8: 0xc0678a4  jal         func_19E290
    ctx->pc = 0x21FAD8u;
    SET_GPR_U32(ctx, 31, 0x21FAE0u);
    ctx->pc = 0x19E290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E290u, 0x21FAD8u, 0x21FAE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FAE0u;
label_21fae0:
    // 0x21fae0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x21fae0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x21fae4: 0xc0c9918  jal         func_326460
    ctx->pc = 0x21FAE4u;
    SET_GPR_U32(ctx, 31, 0x21FAECu);
    ctx->pc = 0x326460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326460u, 0x21FAE4u, 0x21FAECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FAECu;
label_21faec:
    // 0x21faec: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x21faecu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21faf0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x21faf0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21faf4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x21faf4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21faf8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x21faf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x21fafc: 0x3e00008  jr          $ra
    ctx->pc = 0x21FAFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21FAFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21FB04u;
}
