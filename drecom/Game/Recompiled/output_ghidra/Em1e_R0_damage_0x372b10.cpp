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

// Function: Em1e_R0_damage
// Address: 0x372b10 - 0x372b58
void Em1e_R0_damage_0x372b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em1e_R0_damage_0x372b10");
#endif

    switch (ctx->pc) {
        case 0x372b10u: goto label_372b10;
        case 0x372b14u: goto label_372b14;
        case 0x372b18u: goto label_372b18;
        case 0x372b1cu: goto label_372b1c;
        case 0x372b20u: goto label_372b20;
        case 0x372b24u: goto label_372b24;
        case 0x372b28u: goto label_372b28;
        case 0x372b2cu: goto label_372b2c;
        case 0x372b30u: goto label_372b30;
        case 0x372b34u: goto label_372b34;
        case 0x372b38u: goto label_372b38;
        case 0x372b3cu: goto label_372b3c;
        case 0x372b40u: goto label_372b40;
        case 0x372b44u: goto label_372b44;
        case 0x372b48u: goto label_372b48;
        case 0x372b4cu: goto label_372b4c;
        case 0x372b50u: goto label_372b50;
        case 0x372b54u: goto label_372b54;
        default: break;
    }

    ctx->pc = 0x372b10u;

label_372b10:
    // 0x372b10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x372b10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_372b14:
    // 0x372b14: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x372b14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_372b18:
    // 0x372b18: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x372b18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_372b1c:
    // 0x372b1c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x372b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_372b20:
    // 0x372b20: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x372b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_372b24:
    // 0x372b24: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x372b24u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_372b28:
    // 0x372b28: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x372b28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_372b2c:
    // 0x372b2c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x372b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_372b30:
    // 0x372b30: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x372b30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_372b34:
    // 0x372b34: 0x2442b5c8  addiu       $v0, $v0, -0x4A38
    ctx->pc = 0x372b34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948296));
label_372b38:
    // 0x372b38: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x372b38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_372b3c:
    // 0x372b3c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x372b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_372b40:
    // 0x372b40: 0x40f809  jalr        $v0
label_372b44:
    if (ctx->pc == 0x372B44u) {
        ctx->pc = 0x372B48u;
        goto label_372b48;
    }
    ctx->pc = 0x372B40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x372B48u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x372B40u, 0x372B48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x372B48u;
label_372b48:
    // 0x372b48: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x372b48u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_372b4c:
    // 0x372b4c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x372b4cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_372b50:
    // 0x372b50: 0x3e00008  jr          $ra
label_372b54:
    if (ctx->pc == 0x372B54u) {
        ctx->pc = 0x372B58u;
        goto label_fallthrough_0x372b50;
    }
    ctx->pc = 0x372B50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x372B50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x372b50:
    ctx->pc = 0x372B58u;
}
