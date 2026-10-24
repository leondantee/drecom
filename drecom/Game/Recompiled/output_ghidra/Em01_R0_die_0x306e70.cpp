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

// Function: Em01_R0_die
// Address: 0x306e70 - 0x306eb8
void Em01_R0_die_0x306e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em01_R0_die_0x306e70");
#endif

    switch (ctx->pc) {
        case 0x306e70u: goto label_306e70;
        case 0x306e74u: goto label_306e74;
        case 0x306e78u: goto label_306e78;
        case 0x306e7cu: goto label_306e7c;
        case 0x306e80u: goto label_306e80;
        case 0x306e84u: goto label_306e84;
        case 0x306e88u: goto label_306e88;
        case 0x306e8cu: goto label_306e8c;
        case 0x306e90u: goto label_306e90;
        case 0x306e94u: goto label_306e94;
        case 0x306e98u: goto label_306e98;
        case 0x306e9cu: goto label_306e9c;
        case 0x306ea0u: goto label_306ea0;
        case 0x306ea4u: goto label_306ea4;
        case 0x306ea8u: goto label_306ea8;
        case 0x306eacu: goto label_306eac;
        case 0x306eb0u: goto label_306eb0;
        case 0x306eb4u: goto label_306eb4;
        default: break;
    }

    ctx->pc = 0x306e70u;

label_306e70:
    // 0x306e70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x306e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_306e74:
    // 0x306e74: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x306e74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_306e78:
    // 0x306e78: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x306e78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_306e7c:
    // 0x306e7c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x306e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_306e80:
    // 0x306e80: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x306e80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_306e84:
    // 0x306e84: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x306e84u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_306e88:
    // 0x306e88: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x306e88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_306e8c:
    // 0x306e8c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x306e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_306e90:
    // 0x306e90: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x306e90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
label_306e94:
    // 0x306e94: 0x24429400  addiu       $v0, $v0, -0x6C00
    ctx->pc = 0x306e94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939648));
label_306e98:
    // 0x306e98: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x306e98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_306e9c:
    // 0x306e9c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x306e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_306ea0:
    // 0x306ea0: 0x40f809  jalr        $v0
label_306ea4:
    if (ctx->pc == 0x306EA4u) {
        ctx->pc = 0x306EA8u;
        goto label_306ea8;
    }
    ctx->pc = 0x306EA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x306EA8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x306EA0u, 0x306EA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x306EA8u;
label_306ea8:
    // 0x306ea8: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x306ea8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_306eac:
    // 0x306eac: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x306eacu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_306eb0:
    // 0x306eb0: 0x3e00008  jr          $ra
label_306eb4:
    if (ctx->pc == 0x306EB4u) {
        ctx->pc = 0x306EB8u;
        goto label_fallthrough_0x306eb0;
    }
    ctx->pc = 0x306EB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x306EB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x306eb0:
    ctx->pc = 0x306EB8u;
}
