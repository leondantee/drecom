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

// Function: Em18_R0_die
// Address: 0x2e0e30 - 0x2e0ea4
void Em18_R0_die_0x2e0e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em18_R0_die_0x2e0e30");
#endif

    switch (ctx->pc) {
        case 0x2e0e30u: goto label_2e0e30;
        case 0x2e0e34u: goto label_2e0e34;
        case 0x2e0e38u: goto label_2e0e38;
        case 0x2e0e3cu: goto label_2e0e3c;
        case 0x2e0e40u: goto label_2e0e40;
        case 0x2e0e44u: goto label_2e0e44;
        case 0x2e0e48u: goto label_2e0e48;
        case 0x2e0e4cu: goto label_2e0e4c;
        case 0x2e0e50u: goto label_2e0e50;
        case 0x2e0e54u: goto label_2e0e54;
        case 0x2e0e58u: goto label_2e0e58;
        case 0x2e0e5cu: goto label_2e0e5c;
        case 0x2e0e60u: goto label_2e0e60;
        case 0x2e0e64u: goto label_2e0e64;
        case 0x2e0e68u: goto label_2e0e68;
        case 0x2e0e6cu: goto label_2e0e6c;
        case 0x2e0e70u: goto label_2e0e70;
        case 0x2e0e74u: goto label_2e0e74;
        case 0x2e0e78u: goto label_2e0e78;
        case 0x2e0e7cu: goto label_2e0e7c;
        case 0x2e0e80u: goto label_2e0e80;
        case 0x2e0e84u: goto label_2e0e84;
        case 0x2e0e88u: goto label_2e0e88;
        case 0x2e0e8cu: goto label_2e0e8c;
        case 0x2e0e90u: goto label_2e0e90;
        case 0x2e0e94u: goto label_2e0e94;
        case 0x2e0e98u: goto label_2e0e98;
        case 0x2e0e9cu: goto label_2e0e9c;
        case 0x2e0ea0u: goto label_2e0ea0;
        default: break;
    }

    ctx->pc = 0x2e0e30u;

label_2e0e30:
    // 0x2e0e30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e0e30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2e0e34:
    // 0x2e0e34: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2e0e34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_2e0e38:
    // 0x2e0e38: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2e0e38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_2e0e3c:
    // 0x2e0e3c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2e0e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2e0e40:
    // 0x2e0e40: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2e0e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2e0e44:
    // 0x2e0e44: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x2e0e44u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_2e0e48:
    // 0x2e0e48: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2e0e48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2e0e4c:
    // 0x2e0e4c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2e0e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2e0e50:
    // 0x2e0e50: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2e0e50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
label_2e0e54:
    // 0x2e0e54: 0x24428a90  addiu       $v0, $v0, -0x7570
    ctx->pc = 0x2e0e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937232));
label_2e0e58:
    // 0x2e0e58: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e0e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2e0e5c:
    // 0x2e0e5c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2e0e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2e0e60:
    // 0x2e0e60: 0x40f809  jalr        $v0
label_2e0e64:
    if (ctx->pc == 0x2E0E64u) {
        ctx->pc = 0x2E0E68u;
        goto label_2e0e68;
    }
    ctx->pc = 0x2E0E60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2E0E68u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E0E60u, 0x2E0E68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E0E68u;
label_2e0e68:
    // 0x2e0e68: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2e0e68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2e0e6c:
    // 0x2e0e6c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2e0e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2e0e70:
    // 0x2e0e70: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x2e0e70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_2e0e74:
    // 0x2e0e74: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2e0e74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2e0e78:
    // 0x2e0e78: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2e0e78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2e0e7c:
    // 0x2e0e7c: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2e0e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
label_2e0e80:
    // 0x2e0e80: 0x24428a98  addiu       $v0, $v0, -0x7568
    ctx->pc = 0x2e0e80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937240));
label_2e0e84:
    // 0x2e0e84: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e0e84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2e0e88:
    // 0x2e0e88: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2e0e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2e0e8c:
    // 0x2e0e8c: 0x40f809  jalr        $v0
label_2e0e90:
    if (ctx->pc == 0x2E0E90u) {
        ctx->pc = 0x2E0E94u;
        goto label_2e0e94;
    }
    ctx->pc = 0x2E0E8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2E0E94u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E0E8Cu, 0x2E0E94u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E0E94u;
label_2e0e94:
    // 0x2e0e94: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2e0e94u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2e0e98:
    // 0x2e0e98: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2e0e98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2e0e9c:
    // 0x2e0e9c: 0x3e00008  jr          $ra
label_2e0ea0:
    if (ctx->pc == 0x2E0EA0u) {
        ctx->pc = 0x2E0EA4u;
        goto label_fallthrough_0x2e0e9c;
    }
    ctx->pc = 0x2E0E9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E0E9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2e0e9c:
    ctx->pc = 0x2E0EA4u;
}
