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

// Function: Em19_R0_move
// Address: 0x2e3e10 - 0x2e3e84
void Em19_R0_move_0x2e3e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em19_R0_move_0x2e3e10");
#endif

    switch (ctx->pc) {
        case 0x2e3e10u: goto label_2e3e10;
        case 0x2e3e14u: goto label_2e3e14;
        case 0x2e3e18u: goto label_2e3e18;
        case 0x2e3e1cu: goto label_2e3e1c;
        case 0x2e3e20u: goto label_2e3e20;
        case 0x2e3e24u: goto label_2e3e24;
        case 0x2e3e28u: goto label_2e3e28;
        case 0x2e3e2cu: goto label_2e3e2c;
        case 0x2e3e30u: goto label_2e3e30;
        case 0x2e3e34u: goto label_2e3e34;
        case 0x2e3e38u: goto label_2e3e38;
        case 0x2e3e3cu: goto label_2e3e3c;
        case 0x2e3e40u: goto label_2e3e40;
        case 0x2e3e44u: goto label_2e3e44;
        case 0x2e3e48u: goto label_2e3e48;
        case 0x2e3e4cu: goto label_2e3e4c;
        case 0x2e3e50u: goto label_2e3e50;
        case 0x2e3e54u: goto label_2e3e54;
        case 0x2e3e58u: goto label_2e3e58;
        case 0x2e3e5cu: goto label_2e3e5c;
        case 0x2e3e60u: goto label_2e3e60;
        case 0x2e3e64u: goto label_2e3e64;
        case 0x2e3e68u: goto label_2e3e68;
        case 0x2e3e6cu: goto label_2e3e6c;
        case 0x2e3e70u: goto label_2e3e70;
        case 0x2e3e74u: goto label_2e3e74;
        case 0x2e3e78u: goto label_2e3e78;
        case 0x2e3e7cu: goto label_2e3e7c;
        case 0x2e3e80u: goto label_2e3e80;
        default: break;
    }

    ctx->pc = 0x2e3e10u;

label_2e3e10:
    // 0x2e3e10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e3e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2e3e14:
    // 0x2e3e14: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2e3e14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_2e3e18:
    // 0x2e3e18: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2e3e18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_2e3e1c:
    // 0x2e3e1c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2e3e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2e3e20:
    // 0x2e3e20: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2e3e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2e3e24:
    // 0x2e3e24: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x2e3e24u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_2e3e28:
    // 0x2e3e28: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2e3e28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2e3e2c:
    // 0x2e3e2c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2e3e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2e3e30:
    // 0x2e3e30: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2e3e30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
label_2e3e34:
    // 0x2e3e34: 0x24428bb0  addiu       $v0, $v0, -0x7450
    ctx->pc = 0x2e3e34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937520));
label_2e3e38:
    // 0x2e3e38: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e3e38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2e3e3c:
    // 0x2e3e3c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2e3e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2e3e40:
    // 0x2e3e40: 0x40f809  jalr        $v0
label_2e3e44:
    if (ctx->pc == 0x2E3E44u) {
        ctx->pc = 0x2E3E48u;
        goto label_2e3e48;
    }
    ctx->pc = 0x2E3E40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2E3E48u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E3E40u, 0x2E3E48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E3E48u;
label_2e3e48:
    // 0x2e3e48: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2e3e48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2e3e4c:
    // 0x2e3e4c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2e3e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2e3e50:
    // 0x2e3e50: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x2e3e50u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_2e3e54:
    // 0x2e3e54: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2e3e54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2e3e58:
    // 0x2e3e58: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2e3e58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2e3e5c:
    // 0x2e3e5c: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2e3e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
label_2e3e60:
    // 0x2e3e60: 0x24428bd0  addiu       $v0, $v0, -0x7430
    ctx->pc = 0x2e3e60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937552));
label_2e3e64:
    // 0x2e3e64: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e3e64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2e3e68:
    // 0x2e3e68: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2e3e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2e3e6c:
    // 0x2e3e6c: 0x40f809  jalr        $v0
label_2e3e70:
    if (ctx->pc == 0x2E3E70u) {
        ctx->pc = 0x2E3E74u;
        goto label_2e3e74;
    }
    ctx->pc = 0x2E3E6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2E3E74u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E3E6Cu, 0x2E3E74u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E3E74u;
label_2e3e74:
    // 0x2e3e74: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2e3e74u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2e3e78:
    // 0x2e3e78: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2e3e78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2e3e7c:
    // 0x2e3e7c: 0x3e00008  jr          $ra
label_2e3e80:
    if (ctx->pc == 0x2E3E80u) {
        ctx->pc = 0x2E3E84u;
        goto label_fallthrough_0x2e3e7c;
    }
    ctx->pc = 0x2E3E7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E3E7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2e3e7c:
    ctx->pc = 0x2E3E84u;
}
