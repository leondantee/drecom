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

// Function: Em0f_R0_damage
// Address: 0x30fc50 - 0x30fc98
void Em0f_R0_damage_0x30fc50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0f_R0_damage_0x30fc50");
#endif

    switch (ctx->pc) {
        case 0x30fc50u: goto label_30fc50;
        case 0x30fc54u: goto label_30fc54;
        case 0x30fc58u: goto label_30fc58;
        case 0x30fc5cu: goto label_30fc5c;
        case 0x30fc60u: goto label_30fc60;
        case 0x30fc64u: goto label_30fc64;
        case 0x30fc68u: goto label_30fc68;
        case 0x30fc6cu: goto label_30fc6c;
        case 0x30fc70u: goto label_30fc70;
        case 0x30fc74u: goto label_30fc74;
        case 0x30fc78u: goto label_30fc78;
        case 0x30fc7cu: goto label_30fc7c;
        case 0x30fc80u: goto label_30fc80;
        case 0x30fc84u: goto label_30fc84;
        case 0x30fc88u: goto label_30fc88;
        case 0x30fc8cu: goto label_30fc8c;
        case 0x30fc90u: goto label_30fc90;
        case 0x30fc94u: goto label_30fc94;
        default: break;
    }

    ctx->pc = 0x30fc50u;

label_30fc50:
    // 0x30fc50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x30fc50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_30fc54:
    // 0x30fc54: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x30fc54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_30fc58:
    // 0x30fc58: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x30fc58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_30fc5c:
    // 0x30fc5c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x30fc5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_30fc60:
    // 0x30fc60: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x30fc60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_30fc64:
    // 0x30fc64: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x30fc64u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_30fc68:
    // 0x30fc68: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x30fc68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_30fc6c:
    // 0x30fc6c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x30fc6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_30fc70:
    // 0x30fc70: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x30fc70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
label_30fc74:
    // 0x30fc74: 0x244298b8  addiu       $v0, $v0, -0x6748
    ctx->pc = 0x30fc74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940856));
label_30fc78:
    // 0x30fc78: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x30fc78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_30fc7c:
    // 0x30fc7c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x30fc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_30fc80:
    // 0x30fc80: 0x40f809  jalr        $v0
label_30fc84:
    if (ctx->pc == 0x30FC84u) {
        ctx->pc = 0x30FC88u;
        goto label_30fc88;
    }
    ctx->pc = 0x30FC80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x30FC88u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30FC80u, 0x30FC88u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x30FC88u;
label_30fc88:
    // 0x30fc88: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x30fc88u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_30fc8c:
    // 0x30fc8c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x30fc8cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_30fc90:
    // 0x30fc90: 0x3e00008  jr          $ra
label_30fc94:
    if (ctx->pc == 0x30FC94u) {
        ctx->pc = 0x30FC98u;
        goto label_fallthrough_0x30fc90;
    }
    ctx->pc = 0x30FC90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30FC90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x30fc90:
    ctx->pc = 0x30FC98u;
}
