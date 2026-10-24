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

// Function: Em18_R0_move
// Address: 0x2d9df0 - 0x2d9e64
void Em18_R0_move_0x2d9df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em18_R0_move_0x2d9df0");
#endif

    switch (ctx->pc) {
        case 0x2d9df0u: goto label_2d9df0;
        case 0x2d9df4u: goto label_2d9df4;
        case 0x2d9df8u: goto label_2d9df8;
        case 0x2d9dfcu: goto label_2d9dfc;
        case 0x2d9e00u: goto label_2d9e00;
        case 0x2d9e04u: goto label_2d9e04;
        case 0x2d9e08u: goto label_2d9e08;
        case 0x2d9e0cu: goto label_2d9e0c;
        case 0x2d9e10u: goto label_2d9e10;
        case 0x2d9e14u: goto label_2d9e14;
        case 0x2d9e18u: goto label_2d9e18;
        case 0x2d9e1cu: goto label_2d9e1c;
        case 0x2d9e20u: goto label_2d9e20;
        case 0x2d9e24u: goto label_2d9e24;
        case 0x2d9e28u: goto label_2d9e28;
        case 0x2d9e2cu: goto label_2d9e2c;
        case 0x2d9e30u: goto label_2d9e30;
        case 0x2d9e34u: goto label_2d9e34;
        case 0x2d9e38u: goto label_2d9e38;
        case 0x2d9e3cu: goto label_2d9e3c;
        case 0x2d9e40u: goto label_2d9e40;
        case 0x2d9e44u: goto label_2d9e44;
        case 0x2d9e48u: goto label_2d9e48;
        case 0x2d9e4cu: goto label_2d9e4c;
        case 0x2d9e50u: goto label_2d9e50;
        case 0x2d9e54u: goto label_2d9e54;
        case 0x2d9e58u: goto label_2d9e58;
        case 0x2d9e5cu: goto label_2d9e5c;
        case 0x2d9e60u: goto label_2d9e60;
        default: break;
    }

    ctx->pc = 0x2d9df0u;

label_2d9df0:
    // 0x2d9df0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d9df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2d9df4:
    // 0x2d9df4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2d9df4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_2d9df8:
    // 0x2d9df8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2d9df8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_2d9dfc:
    // 0x2d9dfc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d9dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2d9e00:
    // 0x2d9e00: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d9e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2d9e04:
    // 0x2d9e04: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x2d9e04u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_2d9e08:
    // 0x2d9e08: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2d9e08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2d9e0c:
    // 0x2d9e0c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2d9e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2d9e10:
    // 0x2d9e10: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2d9e10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
label_2d9e14:
    // 0x2d9e14: 0x24428a10  addiu       $v0, $v0, -0x75F0
    ctx->pc = 0x2d9e14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937104));
label_2d9e18:
    // 0x2d9e18: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d9e18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2d9e1c:
    // 0x2d9e1c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2d9e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2d9e20:
    // 0x2d9e20: 0x40f809  jalr        $v0
label_2d9e24:
    if (ctx->pc == 0x2D9E24u) {
        ctx->pc = 0x2D9E28u;
        goto label_2d9e28;
    }
    ctx->pc = 0x2D9E20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2D9E28u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D9E20u, 0x2D9E28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D9E28u;
label_2d9e28:
    // 0x2d9e28: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d9e28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2d9e2c:
    // 0x2d9e2c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d9e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2d9e30:
    // 0x2d9e30: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x2d9e30u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_2d9e34:
    // 0x2d9e34: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2d9e34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2d9e38:
    // 0x2d9e38: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2d9e38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2d9e3c:
    // 0x2d9e3c: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2d9e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
label_2d9e40:
    // 0x2d9e40: 0x24428a50  addiu       $v0, $v0, -0x75B0
    ctx->pc = 0x2d9e40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937168));
label_2d9e44:
    // 0x2d9e44: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d9e44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2d9e48:
    // 0x2d9e48: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2d9e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2d9e4c:
    // 0x2d9e4c: 0x40f809  jalr        $v0
label_2d9e50:
    if (ctx->pc == 0x2D9E50u) {
        ctx->pc = 0x2D9E54u;
        goto label_2d9e54;
    }
    ctx->pc = 0x2D9E4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2D9E54u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D9E4Cu, 0x2D9E54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D9E54u;
label_2d9e54:
    // 0x2d9e54: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2d9e54u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2d9e58:
    // 0x2d9e58: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2d9e58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2d9e5c:
    // 0x2d9e5c: 0x3e00008  jr          $ra
label_2d9e60:
    if (ctx->pc == 0x2D9E60u) {
        ctx->pc = 0x2D9E64u;
        goto label_fallthrough_0x2d9e5c;
    }
    ctx->pc = 0x2D9E5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D9E5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2d9e5c:
    ctx->pc = 0x2D9E64u;
}
