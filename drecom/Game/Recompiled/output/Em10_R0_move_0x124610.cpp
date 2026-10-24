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

// Function: Em10_R0_move
// Address: 0x124610 - 0x124684
void Em10_R0_move_0x124610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em10_R0_move_0x124610");
#endif

    switch (ctx->pc) {
        case 0x124610u: goto label_124610;
        case 0x124614u: goto label_124614;
        case 0x124618u: goto label_124618;
        case 0x12461cu: goto label_12461c;
        case 0x124620u: goto label_124620;
        case 0x124624u: goto label_124624;
        case 0x124628u: goto label_124628;
        case 0x12462cu: goto label_12462c;
        case 0x124630u: goto label_124630;
        case 0x124634u: goto label_124634;
        case 0x124638u: goto label_124638;
        case 0x12463cu: goto label_12463c;
        case 0x124640u: goto label_124640;
        case 0x124644u: goto label_124644;
        case 0x124648u: goto label_124648;
        case 0x12464cu: goto label_12464c;
        case 0x124650u: goto label_124650;
        case 0x124654u: goto label_124654;
        case 0x124658u: goto label_124658;
        case 0x12465cu: goto label_12465c;
        case 0x124660u: goto label_124660;
        case 0x124664u: goto label_124664;
        case 0x124668u: goto label_124668;
        case 0x12466cu: goto label_12466c;
        case 0x124670u: goto label_124670;
        case 0x124674u: goto label_124674;
        case 0x124678u: goto label_124678;
        case 0x12467cu: goto label_12467c;
        case 0x124680u: goto label_124680;
        default: break;
    }

    ctx->pc = 0x124610u;

label_124610:
    // 0x124610: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x124610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_124614:
    // 0x124614: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x124614u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_124618:
    // 0x124618: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x124618u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_12461c:
    // 0x12461c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x12461cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_124620:
    // 0x124620: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x124620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_124624:
    // 0x124624: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x124624u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_124628:
    // 0x124628: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x124628u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_12462c:
    // 0x12462c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x12462cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_124630:
    // 0x124630: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x124630u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_124634:
    // 0x124634: 0x24424f20  addiu       $v0, $v0, 0x4F20
    ctx->pc = 0x124634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20256));
label_124638:
    // 0x124638: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x124638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_12463c:
    // 0x12463c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x12463cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_124640:
    // 0x124640: 0x40f809  jalr        $v0
label_124644:
    if (ctx->pc == 0x124644u) {
        ctx->pc = 0x124648u;
        goto label_124648;
    }
    ctx->pc = 0x124640u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x124648u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x124640u, 0x124648u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x124648u;
label_124648:
    // 0x124648: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x124648u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_12464c:
    // 0x12464c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x12464cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_124650:
    // 0x124650: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x124650u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_124654:
    // 0x124654: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x124654u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_124658:
    // 0x124658: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x124658u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_12465c:
    // 0x12465c: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x12465cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_124660:
    // 0x124660: 0x24424fa0  addiu       $v0, $v0, 0x4FA0
    ctx->pc = 0x124660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20384));
label_124664:
    // 0x124664: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x124664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_124668:
    // 0x124668: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x124668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_12466c:
    // 0x12466c: 0x40f809  jalr        $v0
label_124670:
    if (ctx->pc == 0x124670u) {
        ctx->pc = 0x124674u;
        goto label_124674;
    }
    ctx->pc = 0x12466Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x124674u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12466Cu, 0x124674u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x124674u;
label_124674:
    // 0x124674: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x124674u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_124678:
    // 0x124678: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x124678u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_12467c:
    // 0x12467c: 0x3e00008  jr          $ra
label_124680:
    if (ctx->pc == 0x124680u) {
        ctx->pc = 0x124684u;
        goto label_fallthrough_0x12467c;
    }
    ctx->pc = 0x12467Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12467Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x12467c:
    ctx->pc = 0x124684u;
}
