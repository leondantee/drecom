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

// Function: Em08_R0_damage
// Address: 0x376c70 - 0x376cb8
void Em08_R0_damage_0x376c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em08_R0_damage_0x376c70");
#endif

    switch (ctx->pc) {
        case 0x376c70u: goto label_376c70;
        case 0x376c74u: goto label_376c74;
        case 0x376c78u: goto label_376c78;
        case 0x376c7cu: goto label_376c7c;
        case 0x376c80u: goto label_376c80;
        case 0x376c84u: goto label_376c84;
        case 0x376c88u: goto label_376c88;
        case 0x376c8cu: goto label_376c8c;
        case 0x376c90u: goto label_376c90;
        case 0x376c94u: goto label_376c94;
        case 0x376c98u: goto label_376c98;
        case 0x376c9cu: goto label_376c9c;
        case 0x376ca0u: goto label_376ca0;
        case 0x376ca4u: goto label_376ca4;
        case 0x376ca8u: goto label_376ca8;
        case 0x376cacu: goto label_376cac;
        case 0x376cb0u: goto label_376cb0;
        case 0x376cb4u: goto label_376cb4;
        default: break;
    }

    ctx->pc = 0x376c70u;

label_376c70:
    // 0x376c70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x376c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_376c74:
    // 0x376c74: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x376c74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_376c78:
    // 0x376c78: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x376c78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_376c7c:
    // 0x376c7c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x376c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_376c80:
    // 0x376c80: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x376c80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_376c84:
    // 0x376c84: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x376c84u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_376c88:
    // 0x376c88: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x376c88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_376c8c:
    // 0x376c8c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x376c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_376c90:
    // 0x376c90: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x376c90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_376c94:
    // 0x376c94: 0x2442b6a8  addiu       $v0, $v0, -0x4958
    ctx->pc = 0x376c94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948520));
label_376c98:
    // 0x376c98: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x376c98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_376c9c:
    // 0x376c9c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x376c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_376ca0:
    // 0x376ca0: 0x40f809  jalr        $v0
label_376ca4:
    if (ctx->pc == 0x376CA4u) {
        ctx->pc = 0x376CA8u;
        goto label_376ca8;
    }
    ctx->pc = 0x376CA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x376CA8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x376CA0u, 0x376CA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x376CA8u;
label_376ca8:
    // 0x376ca8: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x376ca8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_376cac:
    // 0x376cac: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x376cacu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_376cb0:
    // 0x376cb0: 0x3e00008  jr          $ra
label_376cb4:
    if (ctx->pc == 0x376CB4u) {
        ctx->pc = 0x376CB8u;
        goto label_fallthrough_0x376cb0;
    }
    ctx->pc = 0x376CB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x376CB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x376cb0:
    ctx->pc = 0x376CB8u;
}
