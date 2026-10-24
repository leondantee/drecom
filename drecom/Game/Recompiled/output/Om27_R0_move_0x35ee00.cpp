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

// Function: Om27_R0_move
// Address: 0x35ee00 - 0x35ee48
void Om27_R0_move_0x35ee00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Om27_R0_move_0x35ee00");
#endif

    switch (ctx->pc) {
        case 0x35ee00u: goto label_35ee00;
        case 0x35ee04u: goto label_35ee04;
        case 0x35ee08u: goto label_35ee08;
        case 0x35ee0cu: goto label_35ee0c;
        case 0x35ee10u: goto label_35ee10;
        case 0x35ee14u: goto label_35ee14;
        case 0x35ee18u: goto label_35ee18;
        case 0x35ee1cu: goto label_35ee1c;
        case 0x35ee20u: goto label_35ee20;
        case 0x35ee24u: goto label_35ee24;
        case 0x35ee28u: goto label_35ee28;
        case 0x35ee2cu: goto label_35ee2c;
        case 0x35ee30u: goto label_35ee30;
        case 0x35ee34u: goto label_35ee34;
        case 0x35ee38u: goto label_35ee38;
        case 0x35ee3cu: goto label_35ee3c;
        case 0x35ee40u: goto label_35ee40;
        case 0x35ee44u: goto label_35ee44;
        default: break;
    }

    ctx->pc = 0x35ee00u;

label_35ee00:
    // 0x35ee00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35ee00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_35ee04:
    // 0x35ee04: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x35ee04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_35ee08:
    // 0x35ee08: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x35ee08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_35ee0c:
    // 0x35ee0c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x35ee0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_35ee10:
    // 0x35ee10: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x35ee10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_35ee14:
    // 0x35ee14: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x35ee14u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_35ee18:
    // 0x35ee18: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x35ee18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_35ee1c:
    // 0x35ee1c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x35ee1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_35ee20:
    // 0x35ee20: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x35ee20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_35ee24:
    // 0x35ee24: 0x2442aae0  addiu       $v0, $v0, -0x5520
    ctx->pc = 0x35ee24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945504));
label_35ee28:
    // 0x35ee28: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x35ee28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_35ee2c:
    // 0x35ee2c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x35ee2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_35ee30:
    // 0x35ee30: 0x40f809  jalr        $v0
label_35ee34:
    if (ctx->pc == 0x35EE34u) {
        ctx->pc = 0x35EE38u;
        goto label_35ee38;
    }
    ctx->pc = 0x35EE30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x35EE38u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35EE30u, 0x35EE38u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x35EE38u;
label_35ee38:
    // 0x35ee38: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x35ee38u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_35ee3c:
    // 0x35ee3c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x35ee3cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_35ee40:
    // 0x35ee40: 0x3e00008  jr          $ra
label_35ee44:
    if (ctx->pc == 0x35EE44u) {
        ctx->pc = 0x35EE48u;
        goto label_fallthrough_0x35ee40;
    }
    ctx->pc = 0x35EE40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35EE40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x35ee40:
    ctx->pc = 0x35EE48u;
}
