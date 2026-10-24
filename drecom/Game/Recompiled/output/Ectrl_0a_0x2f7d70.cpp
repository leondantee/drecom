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

// Function: Ectrl_0a
// Address: 0x2f7d70 - 0x2f7db4
void Ectrl_0a_0x2f7d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Ectrl_0a_0x2f7d70");
#endif

    switch (ctx->pc) {
        case 0x2f7d70u: goto label_2f7d70;
        case 0x2f7d74u: goto label_2f7d74;
        case 0x2f7d78u: goto label_2f7d78;
        case 0x2f7d7cu: goto label_2f7d7c;
        case 0x2f7d80u: goto label_2f7d80;
        case 0x2f7d84u: goto label_2f7d84;
        case 0x2f7d88u: goto label_2f7d88;
        case 0x2f7d8cu: goto label_2f7d8c;
        case 0x2f7d90u: goto label_2f7d90;
        case 0x2f7d94u: goto label_2f7d94;
        case 0x2f7d98u: goto label_2f7d98;
        case 0x2f7d9cu: goto label_2f7d9c;
        case 0x2f7da0u: goto label_2f7da0;
        case 0x2f7da4u: goto label_2f7da4;
        case 0x2f7da8u: goto label_2f7da8;
        case 0x2f7dacu: goto label_2f7dac;
        case 0x2f7db0u: goto label_2f7db0;
        default: break;
    }

    ctx->pc = 0x2f7d70u;

label_2f7d70:
    // 0x2f7d70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2f7d70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2f7d74:
    // 0x2f7d74: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2f7d74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_2f7d78:
    // 0x2f7d78: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2f7d78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_2f7d7c:
    // 0x2f7d7c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2f7d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2f7d80:
    // 0x2f7d80: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2f7d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2f7d84:
    // 0x2f7d84: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x2f7d84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_2f7d88:
    // 0x2f7d88: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2f7d88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2f7d8c:
    // 0x2f7d8c: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2f7d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
label_2f7d90:
    // 0x2f7d90: 0x24428fd0  addiu       $v0, $v0, -0x7030
    ctx->pc = 0x2f7d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938576));
label_2f7d94:
    // 0x2f7d94: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f7d94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2f7d98:
    // 0x2f7d98: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2f7d98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2f7d9c:
    // 0x2f7d9c: 0x40f809  jalr        $v0
label_2f7da0:
    if (ctx->pc == 0x2F7DA0u) {
        ctx->pc = 0x2F7DA4u;
        goto label_2f7da4;
    }
    ctx->pc = 0x2F7D9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2F7DA4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F7D9Cu, 0x2F7DA4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F7DA4u;
label_2f7da4:
    // 0x2f7da4: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2f7da4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2f7da8:
    // 0x2f7da8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2f7da8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2f7dac:
    // 0x2f7dac: 0x3e00008  jr          $ra
label_2f7db0:
    if (ctx->pc == 0x2F7DB0u) {
        ctx->pc = 0x2F7DB4u;
        goto label_fallthrough_0x2f7dac;
    }
    ctx->pc = 0x2F7DACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F7DACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2f7dac:
    ctx->pc = 0x2F7DB4u;
}
