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

// Function: Strip_09
// Address: 0x321b10 - 0x321b54
void Strip_09_0x321b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Strip_09_0x321b10");
#endif

    switch (ctx->pc) {
        case 0x321b10u: goto label_321b10;
        case 0x321b14u: goto label_321b14;
        case 0x321b18u: goto label_321b18;
        case 0x321b1cu: goto label_321b1c;
        case 0x321b20u: goto label_321b20;
        case 0x321b24u: goto label_321b24;
        case 0x321b28u: goto label_321b28;
        case 0x321b2cu: goto label_321b2c;
        case 0x321b30u: goto label_321b30;
        case 0x321b34u: goto label_321b34;
        case 0x321b38u: goto label_321b38;
        case 0x321b3cu: goto label_321b3c;
        case 0x321b40u: goto label_321b40;
        case 0x321b44u: goto label_321b44;
        case 0x321b48u: goto label_321b48;
        case 0x321b4cu: goto label_321b4c;
        case 0x321b50u: goto label_321b50;
        default: break;
    }

    ctx->pc = 0x321b10u;

label_321b10:
    // 0x321b10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x321b10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_321b14:
    // 0x321b14: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x321b14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_321b18:
    // 0x321b18: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x321b18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_321b1c:
    // 0x321b1c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x321b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_321b20:
    // 0x321b20: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x321b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_321b24:
    // 0x321b24: 0x8c420358  lw          $v0, 0x358($v0)
    ctx->pc = 0x321b24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 856)));
label_321b28:
    // 0x321b28: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x321b28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_321b2c:
    // 0x321b2c: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x321b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
label_321b30:
    // 0x321b30: 0x24429dd0  addiu       $v0, $v0, -0x6230
    ctx->pc = 0x321b30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942160));
label_321b34:
    // 0x321b34: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x321b34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_321b38:
    // 0x321b38: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x321b38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_321b3c:
    // 0x321b3c: 0x40f809  jalr        $v0
label_321b40:
    if (ctx->pc == 0x321B40u) {
        ctx->pc = 0x321B44u;
        goto label_321b44;
    }
    ctx->pc = 0x321B3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x321B44u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321B3Cu, 0x321B44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x321B44u;
label_321b44:
    // 0x321b44: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x321b44u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_321b48:
    // 0x321b48: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x321b48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_321b4c:
    // 0x321b4c: 0x3e00008  jr          $ra
label_321b50:
    if (ctx->pc == 0x321B50u) {
        ctx->pc = 0x321B54u;
        goto label_fallthrough_0x321b4c;
    }
    ctx->pc = 0x321B4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321B4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x321b4c:
    ctx->pc = 0x321B54u;
}
