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

// Function: Em1b_move
// Address: 0x36abf0 - 0x36ac38
void Em1b_move_0x36abf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em1b_move_0x36abf0");
#endif

    switch (ctx->pc) {
        case 0x36abf0u: goto label_36abf0;
        case 0x36abf4u: goto label_36abf4;
        case 0x36abf8u: goto label_36abf8;
        case 0x36abfcu: goto label_36abfc;
        case 0x36ac00u: goto label_36ac00;
        case 0x36ac04u: goto label_36ac04;
        case 0x36ac08u: goto label_36ac08;
        case 0x36ac0cu: goto label_36ac0c;
        case 0x36ac10u: goto label_36ac10;
        case 0x36ac14u: goto label_36ac14;
        case 0x36ac18u: goto label_36ac18;
        case 0x36ac1cu: goto label_36ac1c;
        case 0x36ac20u: goto label_36ac20;
        case 0x36ac24u: goto label_36ac24;
        case 0x36ac28u: goto label_36ac28;
        case 0x36ac2cu: goto label_36ac2c;
        case 0x36ac30u: goto label_36ac30;
        case 0x36ac34u: goto label_36ac34;
        default: break;
    }

    ctx->pc = 0x36abf0u;

label_36abf0:
    // 0x36abf0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x36abf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_36abf4:
    // 0x36abf4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x36abf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_36abf8:
    // 0x36abf8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x36abf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_36abfc:
    // 0x36abfc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x36abfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_36ac00:
    // 0x36ac00: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x36ac00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_36ac04:
    // 0x36ac04: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x36ac04u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_36ac08:
    // 0x36ac08: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x36ac08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_36ac0c:
    // 0x36ac0c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x36ac0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_36ac10:
    // 0x36ac10: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x36ac10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_36ac14:
    // 0x36ac14: 0x2442b1e0  addiu       $v0, $v0, -0x4E20
    ctx->pc = 0x36ac14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947296));
label_36ac18:
    // 0x36ac18: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x36ac18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_36ac1c:
    // 0x36ac1c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x36ac1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_36ac20:
    // 0x36ac20: 0x40f809  jalr        $v0
label_36ac24:
    if (ctx->pc == 0x36AC24u) {
        ctx->pc = 0x36AC28u;
        goto label_36ac28;
    }
    ctx->pc = 0x36AC20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x36AC28u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36AC20u, 0x36AC28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x36AC28u;
label_36ac28:
    // 0x36ac28: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x36ac28u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_36ac2c:
    // 0x36ac2c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x36ac2cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_36ac30:
    // 0x36ac30: 0x3e00008  jr          $ra
label_36ac34:
    if (ctx->pc == 0x36AC34u) {
        ctx->pc = 0x36AC38u;
        goto label_fallthrough_0x36ac30;
    }
    ctx->pc = 0x36AC30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36AC30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x36ac30:
    ctx->pc = 0x36AC38u;
}
