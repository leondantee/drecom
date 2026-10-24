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

// Function: Om87_R0_damage
// Address: 0x362610 - 0x362658
void Om87_R0_damage_0x362610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Om87_R0_damage_0x362610");
#endif

    switch (ctx->pc) {
        case 0x362610u: goto label_362610;
        case 0x362614u: goto label_362614;
        case 0x362618u: goto label_362618;
        case 0x36261cu: goto label_36261c;
        case 0x362620u: goto label_362620;
        case 0x362624u: goto label_362624;
        case 0x362628u: goto label_362628;
        case 0x36262cu: goto label_36262c;
        case 0x362630u: goto label_362630;
        case 0x362634u: goto label_362634;
        case 0x362638u: goto label_362638;
        case 0x36263cu: goto label_36263c;
        case 0x362640u: goto label_362640;
        case 0x362644u: goto label_362644;
        case 0x362648u: goto label_362648;
        case 0x36264cu: goto label_36264c;
        case 0x362650u: goto label_362650;
        case 0x362654u: goto label_362654;
        default: break;
    }

    ctx->pc = 0x362610u;

label_362610:
    // 0x362610: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x362610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_362614:
    // 0x362614: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x362614u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_362618:
    // 0x362618: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x362618u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_36261c:
    // 0x36261c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x36261cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_362620:
    // 0x362620: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x362620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_362624:
    // 0x362624: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x362624u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_362628:
    // 0x362628: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x362628u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_36262c:
    // 0x36262c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x36262cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_362630:
    // 0x362630: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x362630u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_362634:
    // 0x362634: 0x2442acd8  addiu       $v0, $v0, -0x5328
    ctx->pc = 0x362634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946008));
label_362638:
    // 0x362638: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x362638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_36263c:
    // 0x36263c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x36263cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_362640:
    // 0x362640: 0x40f809  jalr        $v0
label_362644:
    if (ctx->pc == 0x362644u) {
        ctx->pc = 0x362648u;
        goto label_362648;
    }
    ctx->pc = 0x362640u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x362648u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x362640u, 0x362648u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x362648u;
label_362648:
    // 0x362648: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x362648u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_36264c:
    // 0x36264c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x36264cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_362650:
    // 0x362650: 0x3e00008  jr          $ra
label_362654:
    if (ctx->pc == 0x362654u) {
        ctx->pc = 0x362658u;
        goto label_fallthrough_0x362650;
    }
    ctx->pc = 0x362650u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x362650u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x362650:
    ctx->pc = 0x362658u;
}
