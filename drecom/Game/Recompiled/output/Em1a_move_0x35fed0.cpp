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

// Function: Em1a_move
// Address: 0x35fed0 - 0x35ff18
void Em1a_move_0x35fed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em1a_move_0x35fed0");
#endif

    switch (ctx->pc) {
        case 0x35fed0u: goto label_35fed0;
        case 0x35fed4u: goto label_35fed4;
        case 0x35fed8u: goto label_35fed8;
        case 0x35fedcu: goto label_35fedc;
        case 0x35fee0u: goto label_35fee0;
        case 0x35fee4u: goto label_35fee4;
        case 0x35fee8u: goto label_35fee8;
        case 0x35feecu: goto label_35feec;
        case 0x35fef0u: goto label_35fef0;
        case 0x35fef4u: goto label_35fef4;
        case 0x35fef8u: goto label_35fef8;
        case 0x35fefcu: goto label_35fefc;
        case 0x35ff00u: goto label_35ff00;
        case 0x35ff04u: goto label_35ff04;
        case 0x35ff08u: goto label_35ff08;
        case 0x35ff0cu: goto label_35ff0c;
        case 0x35ff10u: goto label_35ff10;
        case 0x35ff14u: goto label_35ff14;
        default: break;
    }

    ctx->pc = 0x35fed0u;

label_35fed0:
    // 0x35fed0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35fed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_35fed4:
    // 0x35fed4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x35fed4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_35fed8:
    // 0x35fed8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x35fed8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_35fedc:
    // 0x35fedc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x35fedcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_35fee0:
    // 0x35fee0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x35fee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_35fee4:
    // 0x35fee4: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x35fee4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_35fee8:
    // 0x35fee8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x35fee8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_35feec:
    // 0x35feec: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x35feecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_35fef0:
    // 0x35fef0: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x35fef0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_35fef4:
    // 0x35fef4: 0x2442ab70  addiu       $v0, $v0, -0x5490
    ctx->pc = 0x35fef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945648));
label_35fef8:
    // 0x35fef8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x35fef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_35fefc:
    // 0x35fefc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x35fefcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_35ff00:
    // 0x35ff00: 0x40f809  jalr        $v0
label_35ff04:
    if (ctx->pc == 0x35FF04u) {
        ctx->pc = 0x35FF08u;
        goto label_35ff08;
    }
    ctx->pc = 0x35FF00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x35FF08u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35FF00u, 0x35FF08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x35FF08u;
label_35ff08:
    // 0x35ff08: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x35ff08u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_35ff0c:
    // 0x35ff0c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x35ff0cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_35ff10:
    // 0x35ff10: 0x3e00008  jr          $ra
label_35ff14:
    if (ctx->pc == 0x35FF14u) {
        ctx->pc = 0x35FF18u;
        goto label_fallthrough_0x35ff10;
    }
    ctx->pc = 0x35FF10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35FF10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x35ff10:
    ctx->pc = 0x35FF18u;
}
