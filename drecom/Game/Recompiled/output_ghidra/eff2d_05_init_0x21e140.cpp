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

// Function: eff2d_05_init
// Address: 0x21e140 - 0x21e1ac
void eff2d_05_init_0x21e140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("eff2d_05_init_0x21e140");
#endif

    switch (ctx->pc) {
        case 0x21e188u: goto label_21e188;
        case 0x21e194u: goto label_21e194;
        default: break;
    }

    ctx->pc = 0x21e140u;

    // 0x21e140: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x21e140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x21e144: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x21e144u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x21e148: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x21e148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x21e14c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x21e14cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x21e150: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x21e150u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x21e154: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x21e154u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x21e158: 0x2450dbc0  addiu       $s0, $v0, -0x2440
    ctx->pc = 0x21e158u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x21e15c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x21e15cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x21e160: 0x8c5101fc  lw          $s1, 0x1FC($v0)
    ctx->pc = 0x21e160u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 508)));
    // 0x21e164: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x21e164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21e168: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x21e168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x21e16c: 0xac430128  sw          $v1, 0x128($v0)
    ctx->pc = 0x21e16cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 296), GPR_U32(ctx, 3));
    // 0x21e170: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x21e170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x21e174: 0xac40012c  sw          $zero, 0x12C($v0)
    ctx->pc = 0x21e174u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 300), GPR_U32(ctx, 0));
    // 0x21e178: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x21e178u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x21e17c: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x21e17cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x21e180: 0xc0c98a4  jal         func_326290
    ctx->pc = 0x21E180u;
    SET_GPR_U32(ctx, 31, 0x21E188u);
    ctx->pc = 0x326290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326290u, 0x21E180u, 0x21E188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E188u;
label_21e188:
    // 0x21e188: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x21e188u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x21e18c: 0xc0c9918  jal         func_326460
    ctx->pc = 0x21E18Cu;
    SET_GPR_U32(ctx, 31, 0x21E194u);
    ctx->pc = 0x326460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326460u, 0x21E18Cu, 0x21E194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E194u;
label_21e194:
    // 0x21e194: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x21e194u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21e198: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x21e198u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21e19c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x21e19cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21e1a0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x21e1a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x21e1a4: 0x3e00008  jr          $ra
    ctx->pc = 0x21E1A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21E1A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21E1ACu;
}
