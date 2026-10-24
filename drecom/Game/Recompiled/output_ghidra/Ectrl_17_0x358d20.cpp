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

// Function: Ectrl_17
// Address: 0x358d20 - 0x358d64
void Ectrl_17_0x358d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Ectrl_17_0x358d20");
#endif

    switch (ctx->pc) {
        case 0x358d20u: goto label_358d20;
        case 0x358d24u: goto label_358d24;
        case 0x358d28u: goto label_358d28;
        case 0x358d2cu: goto label_358d2c;
        case 0x358d30u: goto label_358d30;
        case 0x358d34u: goto label_358d34;
        case 0x358d38u: goto label_358d38;
        case 0x358d3cu: goto label_358d3c;
        case 0x358d40u: goto label_358d40;
        case 0x358d44u: goto label_358d44;
        case 0x358d48u: goto label_358d48;
        case 0x358d4cu: goto label_358d4c;
        case 0x358d50u: goto label_358d50;
        case 0x358d54u: goto label_358d54;
        case 0x358d58u: goto label_358d58;
        case 0x358d5cu: goto label_358d5c;
        case 0x358d60u: goto label_358d60;
        default: break;
    }

    ctx->pc = 0x358d20u;

label_358d20:
    // 0x358d20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x358d20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_358d24:
    // 0x358d24: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x358d24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_358d28:
    // 0x358d28: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x358d28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_358d2c:
    // 0x358d2c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x358d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_358d30:
    // 0x358d30: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x358d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_358d34:
    // 0x358d34: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x358d34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_358d38:
    // 0x358d38: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x358d38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_358d3c:
    // 0x358d3c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x358d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_358d40:
    // 0x358d40: 0x2442a758  addiu       $v0, $v0, -0x58A8
    ctx->pc = 0x358d40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944600));
label_358d44:
    // 0x358d44: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x358d44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_358d48:
    // 0x358d48: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x358d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_358d4c:
    // 0x358d4c: 0x40f809  jalr        $v0
label_358d50:
    if (ctx->pc == 0x358D50u) {
        ctx->pc = 0x358D54u;
        goto label_358d54;
    }
    ctx->pc = 0x358D4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x358D54u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x358D4Cu, 0x358D54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x358D54u;
label_358d54:
    // 0x358d54: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x358d54u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_358d58:
    // 0x358d58: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x358d58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_358d5c:
    // 0x358d5c: 0x3e00008  jr          $ra
label_358d60:
    if (ctx->pc == 0x358D60u) {
        ctx->pc = 0x358D64u;
        goto label_fallthrough_0x358d5c;
    }
    ctx->pc = 0x358D5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x358D5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x358d5c:
    ctx->pc = 0x358D64u;
}
