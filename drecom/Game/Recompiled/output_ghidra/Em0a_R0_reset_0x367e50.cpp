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

// Function: Em0a_R0_reset
// Address: 0x367e50 - 0x367ea0
void Em0a_R0_reset_0x367e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0a_R0_reset_0x367e50");
#endif

    switch (ctx->pc) {
        case 0x367e50u: goto label_367e50;
        case 0x367e54u: goto label_367e54;
        case 0x367e58u: goto label_367e58;
        case 0x367e5cu: goto label_367e5c;
        case 0x367e60u: goto label_367e60;
        case 0x367e64u: goto label_367e64;
        case 0x367e68u: goto label_367e68;
        case 0x367e6cu: goto label_367e6c;
        case 0x367e70u: goto label_367e70;
        case 0x367e74u: goto label_367e74;
        case 0x367e78u: goto label_367e78;
        case 0x367e7cu: goto label_367e7c;
        case 0x367e80u: goto label_367e80;
        case 0x367e84u: goto label_367e84;
        case 0x367e88u: goto label_367e88;
        case 0x367e8cu: goto label_367e8c;
        case 0x367e90u: goto label_367e90;
        case 0x367e94u: goto label_367e94;
        case 0x367e98u: goto label_367e98;
        case 0x367e9cu: goto label_367e9c;
        default: break;
    }

    ctx->pc = 0x367e50u;

label_367e50:
    // 0x367e50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x367e50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_367e54:
    // 0x367e54: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x367e54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_367e58:
    // 0x367e58: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x367e58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_367e5c:
    // 0x367e5c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x367e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_367e60:
    // 0x367e60: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x367e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_367e64:
    // 0x367e64: 0x90421308  lbu         $v0, 0x1308($v0)
    ctx->pc = 0x367e64u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4872)));
label_367e68:
    // 0x367e68: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x367e68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_367e6c:
    // 0x367e6c: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x367e6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
label_367e70:
    // 0x367e70: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x367e70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_367e74:
    // 0x367e74: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x367e74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_367e78:
    // 0x367e78: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x367e78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_367e7c:
    // 0x367e7c: 0x2442b070  addiu       $v0, $v0, -0x4F90
    ctx->pc = 0x367e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946928));
label_367e80:
    // 0x367e80: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x367e80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_367e84:
    // 0x367e84: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x367e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_367e88:
    // 0x367e88: 0x40f809  jalr        $v0
label_367e8c:
    if (ctx->pc == 0x367E8Cu) {
        ctx->pc = 0x367E90u;
        goto label_367e90;
    }
    ctx->pc = 0x367E88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x367E90u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x367E88u, 0x367E90u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x367E90u;
label_367e90:
    // 0x367e90: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x367e90u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_367e94:
    // 0x367e94: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x367e94u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_367e98:
    // 0x367e98: 0x3e00008  jr          $ra
label_367e9c:
    if (ctx->pc == 0x367E9Cu) {
        ctx->pc = 0x367EA0u;
        goto label_fallthrough_0x367e98;
    }
    ctx->pc = 0x367E98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x367E98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x367e98:
    ctx->pc = 0x367EA0u;
}
