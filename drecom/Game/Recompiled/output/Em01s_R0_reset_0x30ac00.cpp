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

// Function: Em01s_R0_reset
// Address: 0x30ac00 - 0x30ac50
void Em01s_R0_reset_0x30ac00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em01s_R0_reset_0x30ac00");
#endif

    switch (ctx->pc) {
        case 0x30ac00u: goto label_30ac00;
        case 0x30ac04u: goto label_30ac04;
        case 0x30ac08u: goto label_30ac08;
        case 0x30ac0cu: goto label_30ac0c;
        case 0x30ac10u: goto label_30ac10;
        case 0x30ac14u: goto label_30ac14;
        case 0x30ac18u: goto label_30ac18;
        case 0x30ac1cu: goto label_30ac1c;
        case 0x30ac20u: goto label_30ac20;
        case 0x30ac24u: goto label_30ac24;
        case 0x30ac28u: goto label_30ac28;
        case 0x30ac2cu: goto label_30ac2c;
        case 0x30ac30u: goto label_30ac30;
        case 0x30ac34u: goto label_30ac34;
        case 0x30ac38u: goto label_30ac38;
        case 0x30ac3cu: goto label_30ac3c;
        case 0x30ac40u: goto label_30ac40;
        case 0x30ac44u: goto label_30ac44;
        case 0x30ac48u: goto label_30ac48;
        case 0x30ac4cu: goto label_30ac4c;
        default: break;
    }

    ctx->pc = 0x30ac00u;

label_30ac00:
    // 0x30ac00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x30ac00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_30ac04:
    // 0x30ac04: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x30ac04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_30ac08:
    // 0x30ac08: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x30ac08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_30ac0c:
    // 0x30ac0c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x30ac0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_30ac10:
    // 0x30ac10: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x30ac10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_30ac14:
    // 0x30ac14: 0x90421308  lbu         $v0, 0x1308($v0)
    ctx->pc = 0x30ac14u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4872)));
label_30ac18:
    // 0x30ac18: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x30ac18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_30ac1c:
    // 0x30ac1c: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x30ac1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
label_30ac20:
    // 0x30ac20: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x30ac20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_30ac24:
    // 0x30ac24: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x30ac24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_30ac28:
    // 0x30ac28: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x30ac28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
label_30ac2c:
    // 0x30ac2c: 0x24429700  addiu       $v0, $v0, -0x6900
    ctx->pc = 0x30ac2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940416));
label_30ac30:
    // 0x30ac30: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x30ac30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_30ac34:
    // 0x30ac34: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x30ac34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_30ac38:
    // 0x30ac38: 0x40f809  jalr        $v0
label_30ac3c:
    if (ctx->pc == 0x30AC3Cu) {
        ctx->pc = 0x30AC40u;
        goto label_30ac40;
    }
    ctx->pc = 0x30AC38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x30AC40u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30AC38u, 0x30AC40u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x30AC40u;
label_30ac40:
    // 0x30ac40: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x30ac40u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_30ac44:
    // 0x30ac44: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x30ac44u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_30ac48:
    // 0x30ac48: 0x3e00008  jr          $ra
label_30ac4c:
    if (ctx->pc == 0x30AC4Cu) {
        ctx->pc = 0x30AC50u;
        goto label_fallthrough_0x30ac48;
    }
    ctx->pc = 0x30AC48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30AC48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x30ac48:
    ctx->pc = 0x30AC50u;
}
