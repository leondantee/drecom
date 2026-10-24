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

// Function: Em09_R0_die
// Address: 0x351050 - 0x351098
void Em09_R0_die_0x351050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em09_R0_die_0x351050");
#endif

    switch (ctx->pc) {
        case 0x351050u: goto label_351050;
        case 0x351054u: goto label_351054;
        case 0x351058u: goto label_351058;
        case 0x35105cu: goto label_35105c;
        case 0x351060u: goto label_351060;
        case 0x351064u: goto label_351064;
        case 0x351068u: goto label_351068;
        case 0x35106cu: goto label_35106c;
        case 0x351070u: goto label_351070;
        case 0x351074u: goto label_351074;
        case 0x351078u: goto label_351078;
        case 0x35107cu: goto label_35107c;
        case 0x351080u: goto label_351080;
        case 0x351084u: goto label_351084;
        case 0x351088u: goto label_351088;
        case 0x35108cu: goto label_35108c;
        case 0x351090u: goto label_351090;
        case 0x351094u: goto label_351094;
        default: break;
    }

    ctx->pc = 0x351050u;

label_351050:
    // 0x351050: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x351050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_351054:
    // 0x351054: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x351054u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_351058:
    // 0x351058: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x351058u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_35105c:
    // 0x35105c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x35105cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_351060:
    // 0x351060: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x351060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_351064:
    // 0x351064: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x351064u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_351068:
    // 0x351068: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x351068u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_35106c:
    // 0x35106c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x35106cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_351070:
    // 0x351070: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x351070u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_351074:
    // 0x351074: 0x2442a5b0  addiu       $v0, $v0, -0x5A50
    ctx->pc = 0x351074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944176));
label_351078:
    // 0x351078: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x351078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_35107c:
    // 0x35107c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x35107cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_351080:
    // 0x351080: 0x40f809  jalr        $v0
label_351084:
    if (ctx->pc == 0x351084u) {
        ctx->pc = 0x351088u;
        goto label_351088;
    }
    ctx->pc = 0x351080u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x351088u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x351080u, 0x351088u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x351088u;
label_351088:
    // 0x351088: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x351088u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_35108c:
    // 0x35108c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x35108cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_351090:
    // 0x351090: 0x3e00008  jr          $ra
label_351094:
    if (ctx->pc == 0x351094u) {
        ctx->pc = 0x351098u;
        goto label_fallthrough_0x351090;
    }
    ctx->pc = 0x351090u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x351090u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x351090:
    ctx->pc = 0x351098u;
}
