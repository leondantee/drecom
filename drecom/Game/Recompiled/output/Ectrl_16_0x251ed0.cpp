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

// Function: Ectrl_16
// Address: 0x251ed0 - 0x251f14
void Ectrl_16_0x251ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Ectrl_16_0x251ed0");
#endif

    switch (ctx->pc) {
        case 0x251ed0u: goto label_251ed0;
        case 0x251ed4u: goto label_251ed4;
        case 0x251ed8u: goto label_251ed8;
        case 0x251edcu: goto label_251edc;
        case 0x251ee0u: goto label_251ee0;
        case 0x251ee4u: goto label_251ee4;
        case 0x251ee8u: goto label_251ee8;
        case 0x251eecu: goto label_251eec;
        case 0x251ef0u: goto label_251ef0;
        case 0x251ef4u: goto label_251ef4;
        case 0x251ef8u: goto label_251ef8;
        case 0x251efcu: goto label_251efc;
        case 0x251f00u: goto label_251f00;
        case 0x251f04u: goto label_251f04;
        case 0x251f08u: goto label_251f08;
        case 0x251f0cu: goto label_251f0c;
        case 0x251f10u: goto label_251f10;
        default: break;
    }

    ctx->pc = 0x251ed0u;

label_251ed0:
    // 0x251ed0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x251ed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_251ed4:
    // 0x251ed4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x251ed4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_251ed8:
    // 0x251ed8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x251ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_251edc:
    // 0x251edc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x251edcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_251ee0:
    // 0x251ee0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x251ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_251ee4:
    // 0x251ee4: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x251ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_251ee8:
    // 0x251ee8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x251ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_251eec:
    // 0x251eec: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x251eecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_251ef0:
    // 0x251ef0: 0x2442b738  addiu       $v0, $v0, -0x48C8
    ctx->pc = 0x251ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948664));
label_251ef4:
    // 0x251ef4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x251ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_251ef8:
    // 0x251ef8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x251ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_251efc:
    // 0x251efc: 0x40f809  jalr        $v0
label_251f00:
    if (ctx->pc == 0x251F00u) {
        ctx->pc = 0x251F04u;
        goto label_251f04;
    }
    ctx->pc = 0x251EFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x251F04u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x251EFCu, 0x251F04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x251F04u;
label_251f04:
    // 0x251f04: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x251f04u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_251f08:
    // 0x251f08: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x251f08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_251f0c:
    // 0x251f0c: 0x3e00008  jr          $ra
label_251f10:
    if (ctx->pc == 0x251F10u) {
        ctx->pc = 0x251F14u;
        goto label_fallthrough_0x251f0c;
    }
    ctx->pc = 0x251F0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x251F0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x251f0c:
    ctx->pc = 0x251F14u;
}
