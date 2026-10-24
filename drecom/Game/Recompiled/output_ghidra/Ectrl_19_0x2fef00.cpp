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

// Function: Ectrl_19
// Address: 0x2fef00 - 0x2fef44
void Ectrl_19_0x2fef00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Ectrl_19_0x2fef00");
#endif

    switch (ctx->pc) {
        case 0x2fef00u: goto label_2fef00;
        case 0x2fef04u: goto label_2fef04;
        case 0x2fef08u: goto label_2fef08;
        case 0x2fef0cu: goto label_2fef0c;
        case 0x2fef10u: goto label_2fef10;
        case 0x2fef14u: goto label_2fef14;
        case 0x2fef18u: goto label_2fef18;
        case 0x2fef1cu: goto label_2fef1c;
        case 0x2fef20u: goto label_2fef20;
        case 0x2fef24u: goto label_2fef24;
        case 0x2fef28u: goto label_2fef28;
        case 0x2fef2cu: goto label_2fef2c;
        case 0x2fef30u: goto label_2fef30;
        case 0x2fef34u: goto label_2fef34;
        case 0x2fef38u: goto label_2fef38;
        case 0x2fef3cu: goto label_2fef3c;
        case 0x2fef40u: goto label_2fef40;
        default: break;
    }

    ctx->pc = 0x2fef00u;

label_2fef00:
    // 0x2fef00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2fef00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2fef04:
    // 0x2fef04: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2fef04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_2fef08:
    // 0x2fef08: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2fef08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_2fef0c:
    // 0x2fef0c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2fef0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2fef10:
    // 0x2fef10: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2fef10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2fef14:
    // 0x2fef14: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x2fef14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_2fef18:
    // 0x2fef18: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2fef18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2fef1c:
    // 0x2fef1c: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2fef1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
label_2fef20:
    // 0x2fef20: 0x244291d0  addiu       $v0, $v0, -0x6E30
    ctx->pc = 0x2fef20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939088));
label_2fef24:
    // 0x2fef24: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2fef24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2fef28:
    // 0x2fef28: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2fef28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2fef2c:
    // 0x2fef2c: 0x40f809  jalr        $v0
label_2fef30:
    if (ctx->pc == 0x2FEF30u) {
        ctx->pc = 0x2FEF34u;
        goto label_2fef34;
    }
    ctx->pc = 0x2FEF2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2FEF34u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FEF2Cu, 0x2FEF34u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2FEF34u;
label_2fef34:
    // 0x2fef34: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2fef34u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2fef38:
    // 0x2fef38: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2fef38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2fef3c:
    // 0x2fef3c: 0x3e00008  jr          $ra
label_2fef40:
    if (ctx->pc == 0x2FEF40u) {
        ctx->pc = 0x2FEF44u;
        goto label_fallthrough_0x2fef3c;
    }
    ctx->pc = 0x2FEF3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FEF3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2fef3c:
    ctx->pc = 0x2FEF44u;
}
