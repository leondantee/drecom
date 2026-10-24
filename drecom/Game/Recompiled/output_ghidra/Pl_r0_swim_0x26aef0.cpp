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

// Function: Pl_r0_swim
// Address: 0x26aef0 - 0x26af38
void Pl_r0_swim_0x26aef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Pl_r0_swim_0x26aef0");
#endif

    switch (ctx->pc) {
        case 0x26aef0u: goto label_26aef0;
        case 0x26aef4u: goto label_26aef4;
        case 0x26aef8u: goto label_26aef8;
        case 0x26aefcu: goto label_26aefc;
        case 0x26af00u: goto label_26af00;
        case 0x26af04u: goto label_26af04;
        case 0x26af08u: goto label_26af08;
        case 0x26af0cu: goto label_26af0c;
        case 0x26af10u: goto label_26af10;
        case 0x26af14u: goto label_26af14;
        case 0x26af18u: goto label_26af18;
        case 0x26af1cu: goto label_26af1c;
        case 0x26af20u: goto label_26af20;
        case 0x26af24u: goto label_26af24;
        case 0x26af28u: goto label_26af28;
        case 0x26af2cu: goto label_26af2c;
        case 0x26af30u: goto label_26af30;
        case 0x26af34u: goto label_26af34;
        default: break;
    }

    ctx->pc = 0x26aef0u;

label_26aef0:
    // 0x26aef0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x26aef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_26aef4:
    // 0x26aef4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x26aef4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_26aef8:
    // 0x26aef8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x26aef8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_26aefc:
    // 0x26aefc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x26aefcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_26af00:
    // 0x26af00: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x26af00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_26af04:
    // 0x26af04: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x26af04u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_26af08:
    // 0x26af08: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x26af08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_26af0c:
    // 0x26af0c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x26af0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_26af10:
    // 0x26af10: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x26af10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_26af14:
    // 0x26af14: 0x2442be40  addiu       $v0, $v0, -0x41C0
    ctx->pc = 0x26af14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950464));
label_26af18:
    // 0x26af18: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x26af18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_26af1c:
    // 0x26af1c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x26af1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_26af20:
    // 0x26af20: 0x40f809  jalr        $v0
label_26af24:
    if (ctx->pc == 0x26AF24u) {
        ctx->pc = 0x26AF28u;
        goto label_26af28;
    }
    ctx->pc = 0x26AF20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26AF28u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26AF20u, 0x26AF28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26AF28u;
label_26af28:
    // 0x26af28: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x26af28u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_26af2c:
    // 0x26af2c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x26af2cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_26af30:
    // 0x26af30: 0x3e00008  jr          $ra
label_26af34:
    if (ctx->pc == 0x26AF34u) {
        ctx->pc = 0x26AF38u;
        goto label_fallthrough_0x26af30;
    }
    ctx->pc = 0x26AF30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26AF30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x26af30:
    ctx->pc = 0x26AF38u;
}
