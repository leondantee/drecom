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

// Function: Om8f_R0_damage
// Address: 0x35bf90 - 0x35bfd8
void Om8f_R0_damage_0x35bf90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Om8f_R0_damage_0x35bf90");
#endif

    switch (ctx->pc) {
        case 0x35bf90u: goto label_35bf90;
        case 0x35bf94u: goto label_35bf94;
        case 0x35bf98u: goto label_35bf98;
        case 0x35bf9cu: goto label_35bf9c;
        case 0x35bfa0u: goto label_35bfa0;
        case 0x35bfa4u: goto label_35bfa4;
        case 0x35bfa8u: goto label_35bfa8;
        case 0x35bfacu: goto label_35bfac;
        case 0x35bfb0u: goto label_35bfb0;
        case 0x35bfb4u: goto label_35bfb4;
        case 0x35bfb8u: goto label_35bfb8;
        case 0x35bfbcu: goto label_35bfbc;
        case 0x35bfc0u: goto label_35bfc0;
        case 0x35bfc4u: goto label_35bfc4;
        case 0x35bfc8u: goto label_35bfc8;
        case 0x35bfccu: goto label_35bfcc;
        case 0x35bfd0u: goto label_35bfd0;
        case 0x35bfd4u: goto label_35bfd4;
        default: break;
    }

    ctx->pc = 0x35bf90u;

label_35bf90:
    // 0x35bf90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35bf90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_35bf94:
    // 0x35bf94: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x35bf94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_35bf98:
    // 0x35bf98: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x35bf98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_35bf9c:
    // 0x35bf9c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x35bf9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_35bfa0:
    // 0x35bfa0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x35bfa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_35bfa4:
    // 0x35bfa4: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x35bfa4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_35bfa8:
    // 0x35bfa8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x35bfa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_35bfac:
    // 0x35bfac: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x35bfacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_35bfb0:
    // 0x35bfb0: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x35bfb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_35bfb4:
    // 0x35bfb4: 0x2442aa58  addiu       $v0, $v0, -0x55A8
    ctx->pc = 0x35bfb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945368));
label_35bfb8:
    // 0x35bfb8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x35bfb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_35bfbc:
    // 0x35bfbc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x35bfbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_35bfc0:
    // 0x35bfc0: 0x40f809  jalr        $v0
label_35bfc4:
    if (ctx->pc == 0x35BFC4u) {
        ctx->pc = 0x35BFC8u;
        goto label_35bfc8;
    }
    ctx->pc = 0x35BFC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x35BFC8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35BFC0u, 0x35BFC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x35BFC8u;
label_35bfc8:
    // 0x35bfc8: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x35bfc8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_35bfcc:
    // 0x35bfcc: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x35bfccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_35bfd0:
    // 0x35bfd0: 0x3e00008  jr          $ra
label_35bfd4:
    if (ctx->pc == 0x35BFD4u) {
        ctx->pc = 0x35BFD8u;
        goto label_fallthrough_0x35bfd0;
    }
    ctx->pc = 0x35BFD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35BFD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x35bfd0:
    ctx->pc = 0x35BFD8u;
}
