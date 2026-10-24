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

// Function: Em19_R0_die
// Address: 0x2e6b30 - 0x2e6ba4
void Em19_R0_die_0x2e6b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em19_R0_die_0x2e6b30");
#endif

    switch (ctx->pc) {
        case 0x2e6b30u: goto label_2e6b30;
        case 0x2e6b34u: goto label_2e6b34;
        case 0x2e6b38u: goto label_2e6b38;
        case 0x2e6b3cu: goto label_2e6b3c;
        case 0x2e6b40u: goto label_2e6b40;
        case 0x2e6b44u: goto label_2e6b44;
        case 0x2e6b48u: goto label_2e6b48;
        case 0x2e6b4cu: goto label_2e6b4c;
        case 0x2e6b50u: goto label_2e6b50;
        case 0x2e6b54u: goto label_2e6b54;
        case 0x2e6b58u: goto label_2e6b58;
        case 0x2e6b5cu: goto label_2e6b5c;
        case 0x2e6b60u: goto label_2e6b60;
        case 0x2e6b64u: goto label_2e6b64;
        case 0x2e6b68u: goto label_2e6b68;
        case 0x2e6b6cu: goto label_2e6b6c;
        case 0x2e6b70u: goto label_2e6b70;
        case 0x2e6b74u: goto label_2e6b74;
        case 0x2e6b78u: goto label_2e6b78;
        case 0x2e6b7cu: goto label_2e6b7c;
        case 0x2e6b80u: goto label_2e6b80;
        case 0x2e6b84u: goto label_2e6b84;
        case 0x2e6b88u: goto label_2e6b88;
        case 0x2e6b8cu: goto label_2e6b8c;
        case 0x2e6b90u: goto label_2e6b90;
        case 0x2e6b94u: goto label_2e6b94;
        case 0x2e6b98u: goto label_2e6b98;
        case 0x2e6b9cu: goto label_2e6b9c;
        case 0x2e6ba0u: goto label_2e6ba0;
        default: break;
    }

    ctx->pc = 0x2e6b30u;

label_2e6b30:
    // 0x2e6b30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e6b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2e6b34:
    // 0x2e6b34: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2e6b34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_2e6b38:
    // 0x2e6b38: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2e6b38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_2e6b3c:
    // 0x2e6b3c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2e6b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2e6b40:
    // 0x2e6b40: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2e6b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2e6b44:
    // 0x2e6b44: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x2e6b44u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_2e6b48:
    // 0x2e6b48: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2e6b48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2e6b4c:
    // 0x2e6b4c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2e6b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2e6b50:
    // 0x2e6b50: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2e6b50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
label_2e6b54:
    // 0x2e6b54: 0x24428be8  addiu       $v0, $v0, -0x7418
    ctx->pc = 0x2e6b54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937576));
label_2e6b58:
    // 0x2e6b58: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e6b58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2e6b5c:
    // 0x2e6b5c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2e6b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2e6b60:
    // 0x2e6b60: 0x40f809  jalr        $v0
label_2e6b64:
    if (ctx->pc == 0x2E6B64u) {
        ctx->pc = 0x2E6B68u;
        goto label_2e6b68;
    }
    ctx->pc = 0x2E6B60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2E6B68u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E6B60u, 0x2E6B68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E6B68u;
label_2e6b68:
    // 0x2e6b68: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2e6b68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2e6b6c:
    // 0x2e6b6c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2e6b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2e6b70:
    // 0x2e6b70: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x2e6b70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_2e6b74:
    // 0x2e6b74: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2e6b74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2e6b78:
    // 0x2e6b78: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2e6b78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2e6b7c:
    // 0x2e6b7c: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2e6b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
label_2e6b80:
    // 0x2e6b80: 0x24428bf0  addiu       $v0, $v0, -0x7410
    ctx->pc = 0x2e6b80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937584));
label_2e6b84:
    // 0x2e6b84: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e6b84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2e6b88:
    // 0x2e6b88: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2e6b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2e6b8c:
    // 0x2e6b8c: 0x40f809  jalr        $v0
label_2e6b90:
    if (ctx->pc == 0x2E6B90u) {
        ctx->pc = 0x2E6B94u;
        goto label_2e6b94;
    }
    ctx->pc = 0x2E6B8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2E6B94u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E6B8Cu, 0x2E6B94u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E6B94u;
label_2e6b94:
    // 0x2e6b94: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2e6b94u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2e6b98:
    // 0x2e6b98: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2e6b98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2e6b9c:
    // 0x2e6b9c: 0x3e00008  jr          $ra
label_2e6ba0:
    if (ctx->pc == 0x2E6BA0u) {
        ctx->pc = 0x2E6BA4u;
        goto label_fallthrough_0x2e6b9c;
    }
    ctx->pc = 0x2E6B9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E6B9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2e6b9c:
    ctx->pc = 0x2E6BA4u;
}
