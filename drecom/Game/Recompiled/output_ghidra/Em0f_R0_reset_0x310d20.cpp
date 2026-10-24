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

// Function: Em0f_R0_reset
// Address: 0x310d20 - 0x310d70
void Em0f_R0_reset_0x310d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0f_R0_reset_0x310d20");
#endif

    switch (ctx->pc) {
        case 0x310d20u: goto label_310d20;
        case 0x310d24u: goto label_310d24;
        case 0x310d28u: goto label_310d28;
        case 0x310d2cu: goto label_310d2c;
        case 0x310d30u: goto label_310d30;
        case 0x310d34u: goto label_310d34;
        case 0x310d38u: goto label_310d38;
        case 0x310d3cu: goto label_310d3c;
        case 0x310d40u: goto label_310d40;
        case 0x310d44u: goto label_310d44;
        case 0x310d48u: goto label_310d48;
        case 0x310d4cu: goto label_310d4c;
        case 0x310d50u: goto label_310d50;
        case 0x310d54u: goto label_310d54;
        case 0x310d58u: goto label_310d58;
        case 0x310d5cu: goto label_310d5c;
        case 0x310d60u: goto label_310d60;
        case 0x310d64u: goto label_310d64;
        case 0x310d68u: goto label_310d68;
        case 0x310d6cu: goto label_310d6c;
        default: break;
    }

    ctx->pc = 0x310d20u;

label_310d20:
    // 0x310d20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x310d20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_310d24:
    // 0x310d24: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x310d24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_310d28:
    // 0x310d28: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x310d28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_310d2c:
    // 0x310d2c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x310d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_310d30:
    // 0x310d30: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x310d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_310d34:
    // 0x310d34: 0x90421308  lbu         $v0, 0x1308($v0)
    ctx->pc = 0x310d34u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4872)));
label_310d38:
    // 0x310d38: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x310d38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_310d3c:
    // 0x310d3c: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x310d3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
label_310d40:
    // 0x310d40: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x310d40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_310d44:
    // 0x310d44: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x310d44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_310d48:
    // 0x310d48: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x310d48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
label_310d4c:
    // 0x310d4c: 0x24429ad0  addiu       $v0, $v0, -0x6530
    ctx->pc = 0x310d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941392));
label_310d50:
    // 0x310d50: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x310d50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_310d54:
    // 0x310d54: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x310d54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_310d58:
    // 0x310d58: 0x40f809  jalr        $v0
label_310d5c:
    if (ctx->pc == 0x310D5Cu) {
        ctx->pc = 0x310D60u;
        goto label_310d60;
    }
    ctx->pc = 0x310D58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x310D60u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x310D58u, 0x310D60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x310D60u;
label_310d60:
    // 0x310d60: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x310d60u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_310d64:
    // 0x310d64: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x310d64u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_310d68:
    // 0x310d68: 0x3e00008  jr          $ra
label_310d6c:
    if (ctx->pc == 0x310D6Cu) {
        ctx->pc = 0x310D70u;
        goto label_fallthrough_0x310d68;
    }
    ctx->pc = 0x310D68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x310D68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x310d68:
    ctx->pc = 0x310D70u;
}
