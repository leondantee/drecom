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

// Function: Oma8_R0_move
// Address: 0x37cd30 - 0x37cd78
void Oma8_R0_move_0x37cd30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Oma8_R0_move_0x37cd30");
#endif

    switch (ctx->pc) {
        case 0x37cd30u: goto label_37cd30;
        case 0x37cd34u: goto label_37cd34;
        case 0x37cd38u: goto label_37cd38;
        case 0x37cd3cu: goto label_37cd3c;
        case 0x37cd40u: goto label_37cd40;
        case 0x37cd44u: goto label_37cd44;
        case 0x37cd48u: goto label_37cd48;
        case 0x37cd4cu: goto label_37cd4c;
        case 0x37cd50u: goto label_37cd50;
        case 0x37cd54u: goto label_37cd54;
        case 0x37cd58u: goto label_37cd58;
        case 0x37cd5cu: goto label_37cd5c;
        case 0x37cd60u: goto label_37cd60;
        case 0x37cd64u: goto label_37cd64;
        case 0x37cd68u: goto label_37cd68;
        case 0x37cd6cu: goto label_37cd6c;
        case 0x37cd70u: goto label_37cd70;
        case 0x37cd74u: goto label_37cd74;
        default: break;
    }

    ctx->pc = 0x37cd30u;

label_37cd30:
    // 0x37cd30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x37cd30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_37cd34:
    // 0x37cd34: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x37cd34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_37cd38:
    // 0x37cd38: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x37cd38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_37cd3c:
    // 0x37cd3c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x37cd3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_37cd40:
    // 0x37cd40: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x37cd40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_37cd44:
    // 0x37cd44: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x37cd44u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_37cd48:
    // 0x37cd48: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x37cd48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_37cd4c:
    // 0x37cd4c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x37cd4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_37cd50:
    // 0x37cd50: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x37cd50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_37cd54:
    // 0x37cd54: 0x2442ba90  addiu       $v0, $v0, -0x4570
    ctx->pc = 0x37cd54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949520));
label_37cd58:
    // 0x37cd58: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x37cd58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_37cd5c:
    // 0x37cd5c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x37cd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_37cd60:
    // 0x37cd60: 0x40f809  jalr        $v0
label_37cd64:
    if (ctx->pc == 0x37CD64u) {
        ctx->pc = 0x37CD68u;
        goto label_37cd68;
    }
    ctx->pc = 0x37CD60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x37CD68u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37CD60u, 0x37CD68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x37CD68u;
label_37cd68:
    // 0x37cd68: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x37cd68u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_37cd6c:
    // 0x37cd6c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x37cd6cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_37cd70:
    // 0x37cd70: 0x3e00008  jr          $ra
label_37cd74:
    if (ctx->pc == 0x37CD74u) {
        ctx->pc = 0x37CD78u;
        goto label_fallthrough_0x37cd70;
    }
    ctx->pc = 0x37CD70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37CD70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x37cd70:
    ctx->pc = 0x37CD78u;
}
