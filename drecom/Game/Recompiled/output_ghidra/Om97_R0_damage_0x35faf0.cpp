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

// Function: Om97_R0_damage
// Address: 0x35faf0 - 0x35fb38
void Om97_R0_damage_0x35faf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Om97_R0_damage_0x35faf0");
#endif

    switch (ctx->pc) {
        case 0x35faf0u: goto label_35faf0;
        case 0x35faf4u: goto label_35faf4;
        case 0x35faf8u: goto label_35faf8;
        case 0x35fafcu: goto label_35fafc;
        case 0x35fb00u: goto label_35fb00;
        case 0x35fb04u: goto label_35fb04;
        case 0x35fb08u: goto label_35fb08;
        case 0x35fb0cu: goto label_35fb0c;
        case 0x35fb10u: goto label_35fb10;
        case 0x35fb14u: goto label_35fb14;
        case 0x35fb18u: goto label_35fb18;
        case 0x35fb1cu: goto label_35fb1c;
        case 0x35fb20u: goto label_35fb20;
        case 0x35fb24u: goto label_35fb24;
        case 0x35fb28u: goto label_35fb28;
        case 0x35fb2cu: goto label_35fb2c;
        case 0x35fb30u: goto label_35fb30;
        case 0x35fb34u: goto label_35fb34;
        default: break;
    }

    ctx->pc = 0x35faf0u;

label_35faf0:
    // 0x35faf0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35faf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_35faf4:
    // 0x35faf4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x35faf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_35faf8:
    // 0x35faf8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x35faf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_35fafc:
    // 0x35fafc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x35fafcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_35fb00:
    // 0x35fb00: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x35fb00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_35fb04:
    // 0x35fb04: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x35fb04u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_35fb08:
    // 0x35fb08: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x35fb08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_35fb0c:
    // 0x35fb0c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x35fb0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_35fb10:
    // 0x35fb10: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x35fb10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_35fb14:
    // 0x35fb14: 0x2442ab40  addiu       $v0, $v0, -0x54C0
    ctx->pc = 0x35fb14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945600));
label_35fb18:
    // 0x35fb18: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x35fb18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_35fb1c:
    // 0x35fb1c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x35fb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_35fb20:
    // 0x35fb20: 0x40f809  jalr        $v0
label_35fb24:
    if (ctx->pc == 0x35FB24u) {
        ctx->pc = 0x35FB28u;
        goto label_35fb28;
    }
    ctx->pc = 0x35FB20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x35FB28u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35FB20u, 0x35FB28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x35FB28u;
label_35fb28:
    // 0x35fb28: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x35fb28u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_35fb2c:
    // 0x35fb2c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x35fb2cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_35fb30:
    // 0x35fb30: 0x3e00008  jr          $ra
label_35fb34:
    if (ctx->pc == 0x35FB34u) {
        ctx->pc = 0x35FB38u;
        goto label_fallthrough_0x35fb30;
    }
    ctx->pc = 0x35FB30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35FB30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x35fb30:
    ctx->pc = 0x35FB38u;
}
