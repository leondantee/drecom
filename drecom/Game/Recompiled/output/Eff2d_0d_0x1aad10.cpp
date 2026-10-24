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

// Function: Eff2d_0d
// Address: 0x1aad10 - 0x1aad54
void Eff2d_0d_0x1aad10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Eff2d_0d_0x1aad10");
#endif

    switch (ctx->pc) {
        case 0x1aad10u: goto label_1aad10;
        case 0x1aad14u: goto label_1aad14;
        case 0x1aad18u: goto label_1aad18;
        case 0x1aad1cu: goto label_1aad1c;
        case 0x1aad20u: goto label_1aad20;
        case 0x1aad24u: goto label_1aad24;
        case 0x1aad28u: goto label_1aad28;
        case 0x1aad2cu: goto label_1aad2c;
        case 0x1aad30u: goto label_1aad30;
        case 0x1aad34u: goto label_1aad34;
        case 0x1aad38u: goto label_1aad38;
        case 0x1aad3cu: goto label_1aad3c;
        case 0x1aad40u: goto label_1aad40;
        case 0x1aad44u: goto label_1aad44;
        case 0x1aad48u: goto label_1aad48;
        case 0x1aad4cu: goto label_1aad4c;
        case 0x1aad50u: goto label_1aad50;
        default: break;
    }

    ctx->pc = 0x1aad10u;

label_1aad10:
    // 0x1aad10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1aad10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1aad14:
    // 0x1aad14: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x1aad14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_1aad18:
    // 0x1aad18: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x1aad18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_1aad1c:
    // 0x1aad1c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1aad1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_1aad20:
    // 0x1aad20: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1aad20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_1aad24:
    // 0x1aad24: 0x8c420128  lw          $v0, 0x128($v0)
    ctx->pc = 0x1aad24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 296)));
label_1aad28:
    // 0x1aad28: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1aad28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1aad2c:
    // 0x1aad2c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1aad2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_1aad30:
    // 0x1aad30: 0x244281d0  addiu       $v0, $v0, -0x7E30
    ctx->pc = 0x1aad30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934992));
label_1aad34:
    // 0x1aad34: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1aad34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1aad38:
    // 0x1aad38: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1aad38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1aad3c:
    // 0x1aad3c: 0x40f809  jalr        $v0
label_1aad40:
    if (ctx->pc == 0x1AAD40u) {
        ctx->pc = 0x1AAD44u;
        goto label_1aad44;
    }
    ctx->pc = 0x1AAD3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1AAD44u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AAD3Cu, 0x1AAD44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AAD44u;
label_1aad44:
    // 0x1aad44: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x1aad44u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1aad48:
    // 0x1aad48: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1aad48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1aad4c:
    // 0x1aad4c: 0x3e00008  jr          $ra
label_1aad50:
    if (ctx->pc == 0x1AAD50u) {
        ctx->pc = 0x1AAD54u;
        goto label_fallthrough_0x1aad4c;
    }
    ctx->pc = 0x1AAD4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AAD4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1aad4c:
    ctx->pc = 0x1AAD54u;
}
