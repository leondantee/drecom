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

// Function: Em09_R0_damage
// Address: 0x34faf0 - 0x34fb38
void Em09_R0_damage_0x34faf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em09_R0_damage_0x34faf0");
#endif

    switch (ctx->pc) {
        case 0x34faf0u: goto label_34faf0;
        case 0x34faf4u: goto label_34faf4;
        case 0x34faf8u: goto label_34faf8;
        case 0x34fafcu: goto label_34fafc;
        case 0x34fb00u: goto label_34fb00;
        case 0x34fb04u: goto label_34fb04;
        case 0x34fb08u: goto label_34fb08;
        case 0x34fb0cu: goto label_34fb0c;
        case 0x34fb10u: goto label_34fb10;
        case 0x34fb14u: goto label_34fb14;
        case 0x34fb18u: goto label_34fb18;
        case 0x34fb1cu: goto label_34fb1c;
        case 0x34fb20u: goto label_34fb20;
        case 0x34fb24u: goto label_34fb24;
        case 0x34fb28u: goto label_34fb28;
        case 0x34fb2cu: goto label_34fb2c;
        case 0x34fb30u: goto label_34fb30;
        case 0x34fb34u: goto label_34fb34;
        default: break;
    }

    ctx->pc = 0x34faf0u;

label_34faf0:
    // 0x34faf0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x34faf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_34faf4:
    // 0x34faf4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x34faf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_34faf8:
    // 0x34faf8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x34faf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_34fafc:
    // 0x34fafc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x34fafcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_34fb00:
    // 0x34fb00: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x34fb00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_34fb04:
    // 0x34fb04: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x34fb04u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_34fb08:
    // 0x34fb08: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x34fb08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_34fb0c:
    // 0x34fb0c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x34fb0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_34fb10:
    // 0x34fb10: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x34fb10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_34fb14:
    // 0x34fb14: 0x2442a5a0  addiu       $v0, $v0, -0x5A60
    ctx->pc = 0x34fb14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944160));
label_34fb18:
    // 0x34fb18: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x34fb18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_34fb1c:
    // 0x34fb1c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x34fb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_34fb20:
    // 0x34fb20: 0x40f809  jalr        $v0
label_34fb24:
    if (ctx->pc == 0x34FB24u) {
        ctx->pc = 0x34FB28u;
        goto label_34fb28;
    }
    ctx->pc = 0x34FB20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x34FB28u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34FB20u, 0x34FB28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x34FB28u;
label_34fb28:
    // 0x34fb28: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x34fb28u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_34fb2c:
    // 0x34fb2c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x34fb2cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_34fb30:
    // 0x34fb30: 0x3e00008  jr          $ra
label_34fb34:
    if (ctx->pc == 0x34FB34u) {
        ctx->pc = 0x34FB38u;
        goto label_fallthrough_0x34fb30;
    }
    ctx->pc = 0x34FB30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34FB30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x34fb30:
    ctx->pc = 0x34FB38u;
}
