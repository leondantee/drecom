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

// Function: Om8f_R0_move
// Address: 0x35bef0 - 0x35bf38
void Om8f_R0_move_0x35bef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Om8f_R0_move_0x35bef0");
#endif

    switch (ctx->pc) {
        case 0x35bef0u: goto label_35bef0;
        case 0x35bef4u: goto label_35bef4;
        case 0x35bef8u: goto label_35bef8;
        case 0x35befcu: goto label_35befc;
        case 0x35bf00u: goto label_35bf00;
        case 0x35bf04u: goto label_35bf04;
        case 0x35bf08u: goto label_35bf08;
        case 0x35bf0cu: goto label_35bf0c;
        case 0x35bf10u: goto label_35bf10;
        case 0x35bf14u: goto label_35bf14;
        case 0x35bf18u: goto label_35bf18;
        case 0x35bf1cu: goto label_35bf1c;
        case 0x35bf20u: goto label_35bf20;
        case 0x35bf24u: goto label_35bf24;
        case 0x35bf28u: goto label_35bf28;
        case 0x35bf2cu: goto label_35bf2c;
        case 0x35bf30u: goto label_35bf30;
        case 0x35bf34u: goto label_35bf34;
        default: break;
    }

    ctx->pc = 0x35bef0u;

label_35bef0:
    // 0x35bef0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35bef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_35bef4:
    // 0x35bef4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x35bef4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_35bef8:
    // 0x35bef8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x35bef8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_35befc:
    // 0x35befc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x35befcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_35bf00:
    // 0x35bf00: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x35bf00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_35bf04:
    // 0x35bf04: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x35bf04u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_35bf08:
    // 0x35bf08: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x35bf08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_35bf0c:
    // 0x35bf0c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x35bf0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_35bf10:
    // 0x35bf10: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x35bf10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_35bf14:
    // 0x35bf14: 0x2442aa50  addiu       $v0, $v0, -0x55B0
    ctx->pc = 0x35bf14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945360));
label_35bf18:
    // 0x35bf18: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x35bf18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_35bf1c:
    // 0x35bf1c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x35bf1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_35bf20:
    // 0x35bf20: 0x40f809  jalr        $v0
label_35bf24:
    if (ctx->pc == 0x35BF24u) {
        ctx->pc = 0x35BF28u;
        goto label_35bf28;
    }
    ctx->pc = 0x35BF20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x35BF28u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35BF20u, 0x35BF28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x35BF28u;
label_35bf28:
    // 0x35bf28: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x35bf28u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_35bf2c:
    // 0x35bf2c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x35bf2cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_35bf30:
    // 0x35bf30: 0x3e00008  jr          $ra
label_35bf34:
    if (ctx->pc == 0x35BF34u) {
        ctx->pc = 0x35BF38u;
        goto label_fallthrough_0x35bf30;
    }
    ctx->pc = 0x35BF30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35BF30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x35bf30:
    ctx->pc = 0x35BF38u;
}
