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

// Function: Em20_move
// Address: 0x3596f0 - 0x359738
void Em20_move_0x3596f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em20_move_0x3596f0");
#endif

    switch (ctx->pc) {
        case 0x3596f0u: goto label_3596f0;
        case 0x3596f4u: goto label_3596f4;
        case 0x3596f8u: goto label_3596f8;
        case 0x3596fcu: goto label_3596fc;
        case 0x359700u: goto label_359700;
        case 0x359704u: goto label_359704;
        case 0x359708u: goto label_359708;
        case 0x35970cu: goto label_35970c;
        case 0x359710u: goto label_359710;
        case 0x359714u: goto label_359714;
        case 0x359718u: goto label_359718;
        case 0x35971cu: goto label_35971c;
        case 0x359720u: goto label_359720;
        case 0x359724u: goto label_359724;
        case 0x359728u: goto label_359728;
        case 0x35972cu: goto label_35972c;
        case 0x359730u: goto label_359730;
        case 0x359734u: goto label_359734;
        default: break;
    }

    ctx->pc = 0x3596f0u;

label_3596f0:
    // 0x3596f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3596f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3596f4:
    // 0x3596f4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x3596f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_3596f8:
    // 0x3596f8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x3596f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_3596fc:
    // 0x3596fc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3596fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_359700:
    // 0x359700: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x359700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_359704:
    // 0x359704: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x359704u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_359708:
    // 0x359708: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x359708u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_35970c:
    // 0x35970c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x35970cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_359710:
    // 0x359710: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x359710u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_359714:
    // 0x359714: 0x2442a810  addiu       $v0, $v0, -0x57F0
    ctx->pc = 0x359714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944784));
label_359718:
    // 0x359718: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x359718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_35971c:
    // 0x35971c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x35971cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_359720:
    // 0x359720: 0x40f809  jalr        $v0
label_359724:
    if (ctx->pc == 0x359724u) {
        ctx->pc = 0x359728u;
        goto label_359728;
    }
    ctx->pc = 0x359720u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x359728u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x359720u, 0x359728u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x359728u;
label_359728:
    // 0x359728: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x359728u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_35972c:
    // 0x35972c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x35972cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_359730:
    // 0x359730: 0x3e00008  jr          $ra
label_359734:
    if (ctx->pc == 0x359734u) {
        ctx->pc = 0x359738u;
        goto label_fallthrough_0x359730;
    }
    ctx->pc = 0x359730u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x359730u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x359730:
    ctx->pc = 0x359738u;
}
