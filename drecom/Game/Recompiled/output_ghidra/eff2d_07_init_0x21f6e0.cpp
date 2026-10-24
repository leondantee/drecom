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

// Function: eff2d_07_init
// Address: 0x21f6e0 - 0x21f744
void eff2d_07_init_0x21f6e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("eff2d_07_init_0x21f6e0");
#endif

    switch (ctx->pc) {
        case 0x21f720u: goto label_21f720;
        case 0x21f72cu: goto label_21f72c;
        default: break;
    }

    ctx->pc = 0x21f6e0u;

    // 0x21f6e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x21f6e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x21f6e4: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x21f6e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x21f6e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x21f6e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x21f6ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x21f6ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x21f6f0: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x21f6f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x21f6f4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x21f6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x21f6f8: 0x8c500110  lw          $s0, 0x110($v0)
    ctx->pc = 0x21f6f8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 272)));
    // 0x21f6fc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x21f6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x21f700: 0x8c5101fc  lw          $s1, 0x1FC($v0)
    ctx->pc = 0x21f700u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 508)));
    // 0x21f704: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x21f704u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21f708: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x21f708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x21f70c: 0xac430128  sw          $v1, 0x128($v0)
    ctx->pc = 0x21f70cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 296), GPR_U32(ctx, 3));
    // 0x21f710: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x21f710u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x21f714: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x21f714u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x21f718: 0xc0c98a4  jal         func_326290
    ctx->pc = 0x21F718u;
    SET_GPR_U32(ctx, 31, 0x21F720u);
    ctx->pc = 0x326290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326290u, 0x21F718u, 0x21F720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F720u;
label_21f720:
    // 0x21f720: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x21f720u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x21f724: 0xc0c9918  jal         func_326460
    ctx->pc = 0x21F724u;
    SET_GPR_U32(ctx, 31, 0x21F72Cu);
    ctx->pc = 0x326460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326460u, 0x21F724u, 0x21F72Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F72Cu;
label_21f72c:
    // 0x21f72c: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x21f72cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21f730: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x21f730u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21f734: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x21f734u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21f738: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x21f738u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x21f73c: 0x3e00008  jr          $ra
    ctx->pc = 0x21F73Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21F73Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21F744u;
}
