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

// Function: Strip_00
// Address: 0x1fbc90 - 0x1fbcd4
void Strip_00_0x1fbc90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Strip_00_0x1fbc90");
#endif

    switch (ctx->pc) {
        case 0x1fbc90u: goto label_1fbc90;
        case 0x1fbc94u: goto label_1fbc94;
        case 0x1fbc98u: goto label_1fbc98;
        case 0x1fbc9cu: goto label_1fbc9c;
        case 0x1fbca0u: goto label_1fbca0;
        case 0x1fbca4u: goto label_1fbca4;
        case 0x1fbca8u: goto label_1fbca8;
        case 0x1fbcacu: goto label_1fbcac;
        case 0x1fbcb0u: goto label_1fbcb0;
        case 0x1fbcb4u: goto label_1fbcb4;
        case 0x1fbcb8u: goto label_1fbcb8;
        case 0x1fbcbcu: goto label_1fbcbc;
        case 0x1fbcc0u: goto label_1fbcc0;
        case 0x1fbcc4u: goto label_1fbcc4;
        case 0x1fbcc8u: goto label_1fbcc8;
        case 0x1fbcccu: goto label_1fbccc;
        case 0x1fbcd0u: goto label_1fbcd0;
        default: break;
    }

    ctx->pc = 0x1fbc90u;

label_1fbc90:
    // 0x1fbc90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fbc90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1fbc94:
    // 0x1fbc94: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x1fbc94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_1fbc98:
    // 0x1fbc98: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x1fbc98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_1fbc9c:
    // 0x1fbc9c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1fbc9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_1fbca0:
    // 0x1fbca0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1fbca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_1fbca4:
    // 0x1fbca4: 0x8c420358  lw          $v0, 0x358($v0)
    ctx->pc = 0x1fbca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 856)));
label_1fbca8:
    // 0x1fbca8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1fbca8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1fbcac:
    // 0x1fbcac: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1fbcacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_1fbcb0:
    // 0x1fbcb0: 0x24429f30  addiu       $v0, $v0, -0x60D0
    ctx->pc = 0x1fbcb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942512));
label_1fbcb4:
    // 0x1fbcb4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fbcb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1fbcb8:
    // 0x1fbcb8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1fbcb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1fbcbc:
    // 0x1fbcbc: 0x40f809  jalr        $v0
label_1fbcc0:
    if (ctx->pc == 0x1FBCC0u) {
        ctx->pc = 0x1FBCC4u;
        goto label_1fbcc4;
    }
    ctx->pc = 0x1FBCBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FBCC4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FBCBCu, 0x1FBCC4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FBCC4u;
label_1fbcc4:
    // 0x1fbcc4: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x1fbcc4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1fbcc8:
    // 0x1fbcc8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1fbcc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1fbccc:
    // 0x1fbccc: 0x3e00008  jr          $ra
label_1fbcd0:
    if (ctx->pc == 0x1FBCD0u) {
        ctx->pc = 0x1FBCD4u;
        goto label_fallthrough_0x1fbccc;
    }
    ctx->pc = 0x1FBCCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FBCCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1fbccc:
    ctx->pc = 0x1FBCD4u;
}
