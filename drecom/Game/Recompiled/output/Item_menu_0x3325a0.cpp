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

// Function: Item_menu
// Address: 0x3325a0 - 0x332680
void Item_menu_0x3325a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Item_menu_0x3325a0");
#endif

    switch (ctx->pc) {
        case 0x3325a0u: goto label_3325a0;
        case 0x3325a4u: goto label_3325a4;
        case 0x3325a8u: goto label_3325a8;
        case 0x3325acu: goto label_3325ac;
        case 0x3325b0u: goto label_3325b0;
        case 0x3325b4u: goto label_3325b4;
        case 0x3325b8u: goto label_3325b8;
        case 0x3325bcu: goto label_3325bc;
        case 0x3325c0u: goto label_3325c0;
        case 0x3325c4u: goto label_3325c4;
        case 0x3325c8u: goto label_3325c8;
        case 0x3325ccu: goto label_3325cc;
        case 0x3325d0u: goto label_3325d0;
        case 0x3325d4u: goto label_3325d4;
        case 0x3325d8u: goto label_3325d8;
        case 0x3325dcu: goto label_3325dc;
        case 0x3325e0u: goto label_3325e0;
        case 0x3325e4u: goto label_3325e4;
        case 0x3325e8u: goto label_3325e8;
        case 0x3325ecu: goto label_3325ec;
        case 0x3325f0u: goto label_3325f0;
        case 0x3325f4u: goto label_3325f4;
        case 0x3325f8u: goto label_3325f8;
        case 0x3325fcu: goto label_3325fc;
        case 0x332600u: goto label_332600;
        case 0x332604u: goto label_332604;
        case 0x332608u: goto label_332608;
        case 0x33260cu: goto label_33260c;
        case 0x332610u: goto label_332610;
        case 0x332614u: goto label_332614;
        case 0x332618u: goto label_332618;
        case 0x33261cu: goto label_33261c;
        case 0x332620u: goto label_332620;
        case 0x332624u: goto label_332624;
        case 0x332628u: goto label_332628;
        case 0x33262cu: goto label_33262c;
        case 0x332630u: goto label_332630;
        case 0x332634u: goto label_332634;
        case 0x332638u: goto label_332638;
        case 0x33263cu: goto label_33263c;
        case 0x332640u: goto label_332640;
        case 0x332644u: goto label_332644;
        case 0x332648u: goto label_332648;
        case 0x33264cu: goto label_33264c;
        case 0x332650u: goto label_332650;
        case 0x332654u: goto label_332654;
        case 0x332658u: goto label_332658;
        case 0x33265cu: goto label_33265c;
        case 0x332660u: goto label_332660;
        case 0x332664u: goto label_332664;
        case 0x332668u: goto label_332668;
        case 0x33266cu: goto label_33266c;
        case 0x332670u: goto label_332670;
        case 0x332674u: goto label_332674;
        case 0x332678u: goto label_332678;
        case 0x33267cu: goto label_33267c;
        default: break;
    }

    ctx->pc = 0x3325a0u;

label_3325a0:
    // 0x3325a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3325a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3325a4:
    // 0x3325a4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x3325a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
label_3325a8:
    // 0x3325a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3325a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3325ac:
    // 0x3325ac: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x3325acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_3325b0:
    // 0x3325b0: 0x24506150  addiu       $s0, $v0, 0x6150
    ctx->pc = 0x3325b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 24912));
label_3325b4:
    // 0x3325b4: 0x920265ad  lbu         $v0, 0x65AD($s0)
    ctx->pc = 0x3325b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26029)));
label_3325b8:
    // 0x3325b8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3325b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_3325bc:
    // 0x3325bc: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
label_3325c0:
    if (ctx->pc == 0x3325C0u) {
        ctx->pc = 0x3325C4u;
        goto label_3325c4;
    }
    ctx->pc = 0x3325BCu;
    {
        const bool branch_taken_0x3325bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3325bc) {
            ctx->pc = 0x332648u;
            goto label_332648;
        }
    }
    ctx->pc = 0x3325C4u;
label_3325c4:
    // 0x3325c4: 0x8e035dc8  lw          $v1, 0x5DC8($s0)
    ctx->pc = 0x3325c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24008)));
label_3325c8:
    // 0x3325c8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3325c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3325cc:
    // 0x3325cc: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
label_3325d0:
    if (ctx->pc == 0x3325D0u) {
        ctx->pc = 0x3325D4u;
        goto label_3325d4;
    }
    ctx->pc = 0x3325CCu;
    {
        const bool branch_taken_0x3325cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3325cc) {
            ctx->pc = 0x332620u;
            goto label_332620;
        }
    }
    ctx->pc = 0x3325D4u;
label_3325d4:
    // 0x3325d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3325d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3325d8:
    // 0x3325d8: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
label_3325dc:
    if (ctx->pc == 0x3325DCu) {
        ctx->pc = 0x3325E0u;
        goto label_3325e0;
    }
    ctx->pc = 0x3325D8u;
    {
        const bool branch_taken_0x3325d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3325d8) {
            ctx->pc = 0x332600u;
            goto label_332600;
        }
    }
    ctx->pc = 0x3325E0u;
label_3325e0:
    // 0x3325e0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_3325e4:
    if (ctx->pc == 0x3325E4u) {
        ctx->pc = 0x3325E8u;
        goto label_3325e8;
    }
    ctx->pc = 0x3325E0u;
    {
        const bool branch_taken_0x3325e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3325e0) {
            ctx->pc = 0x3325F0u;
            goto label_3325f0;
        }
    }
    ctx->pc = 0x3325E8u;
label_3325e8:
    // 0x3325e8: 0x10000017  b           . + 4 + (0x17 << 2)
label_3325ec:
    if (ctx->pc == 0x3325ECu) {
        ctx->pc = 0x3325F0u;
        goto label_3325f0;
    }
    ctx->pc = 0x3325E8u;
    {
        const bool branch_taken_0x3325e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3325e8) {
            ctx->pc = 0x332648u;
            goto label_332648;
        }
    }
    ctx->pc = 0x3325F0u;
label_3325f0:
    // 0x3325f0: 0xc0cc9a0  jal         func_332680
label_3325f4:
    if (ctx->pc == 0x3325F4u) {
        ctx->pc = 0x3325F8u;
        goto label_3325f8;
    }
    ctx->pc = 0x3325F0u;
    SET_GPR_U32(ctx, 31, 0x3325F8u);
    ctx->pc = 0x332680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x332680u, 0x3325F0u, 0x3325F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3325F8u;
label_3325f8:
    // 0x3325f8: 0x10000013  b           . + 4 + (0x13 << 2)
label_3325fc:
    if (ctx->pc == 0x3325FCu) {
        ctx->pc = 0x332600u;
        goto label_332600;
    }
    ctx->pc = 0x3325F8u;
    {
        const bool branch_taken_0x3325f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3325f8) {
            ctx->pc = 0x332648u;
            goto label_332648;
        }
    }
    ctx->pc = 0x332600u;
label_332600:
    // 0x332600: 0x8e035dc0  lw          $v1, 0x5DC0($s0)
    ctx->pc = 0x332600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24000)));
label_332604:
    // 0x332604: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x332604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_332608:
    // 0x332608: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
label_33260c:
    if (ctx->pc == 0x33260Cu) {
        ctx->pc = 0x332610u;
        goto label_332610;
    }
    ctx->pc = 0x332608u;
    {
        const bool branch_taken_0x332608 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x332608) {
            ctx->pc = 0x332648u;
            goto label_332648;
        }
    }
    ctx->pc = 0x332610u;
label_332610:
    // 0x332610: 0xc0cccc4  jal         func_333310
label_332614:
    if (ctx->pc == 0x332614u) {
        ctx->pc = 0x332618u;
        goto label_332618;
    }
    ctx->pc = 0x332610u;
    SET_GPR_U32(ctx, 31, 0x332618u);
    ctx->pc = 0x333310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x333310u, 0x332610u, 0x332618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332618u;
label_332618:
    // 0x332618: 0x1000000b  b           . + 4 + (0xB << 2)
label_33261c:
    if (ctx->pc == 0x33261Cu) {
        ctx->pc = 0x332620u;
        goto label_332620;
    }
    ctx->pc = 0x332618u;
    {
        const bool branch_taken_0x332618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x332618) {
            ctx->pc = 0x332648u;
            goto label_332648;
        }
    }
    ctx->pc = 0x332620u;
label_332620:
    // 0x332620: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x332620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_332624:
    // 0x332624: 0xa2026608  sb          $v0, 0x6608($s0)
    ctx->pc = 0x332624u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 26120), (uint8_t)GPR_U32(ctx, 2));
label_332628:
    // 0x332628: 0x8e025dcc  lw          $v0, 0x5DCC($s0)
    ctx->pc = 0x332628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24012)));
label_33262c:
    // 0x33262c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x33262cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_332630:
    // 0x332630: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x332630u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_332634:
    // 0x332634: 0x24429920  addiu       $v0, $v0, -0x66E0
    ctx->pc = 0x332634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940960));
label_332638:
    // 0x332638: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x332638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_33263c:
    // 0x33263c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x33263cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_332640:
    // 0x332640: 0x40f809  jalr        $v0
label_332644:
    if (ctx->pc == 0x332644u) {
        ctx->pc = 0x332648u;
        goto label_332648;
    }
    ctx->pc = 0x332640u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x332648u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x332640u, 0x332648u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x332648u;
label_332648:
    // 0x332648: 0x8e025dc8  lw          $v0, 0x5DC8($s0)
    ctx->pc = 0x332648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24008)));
label_33264c:
    // 0x33264c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_332650:
    if (ctx->pc == 0x332650u) {
        ctx->pc = 0x332654u;
        goto label_332654;
    }
    ctx->pc = 0x33264Cu;
    {
        const bool branch_taken_0x33264c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33264c) {
            ctx->pc = 0x33265Cu;
            goto label_33265c;
        }
    }
    ctx->pc = 0x332654u;
label_332654:
    // 0x332654: 0xc0cce8c  jal         func_333A30
label_332658:
    if (ctx->pc == 0x332658u) {
        ctx->pc = 0x33265Cu;
        goto label_33265c;
    }
    ctx->pc = 0x332654u;
    SET_GPR_U32(ctx, 31, 0x33265Cu);
    ctx->pc = 0x333A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x333A30u, 0x332654u, 0x33265Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33265Cu;
label_33265c:
    // 0x33265c: 0xc0ca9c0  jal         func_32A700
label_332660:
    if (ctx->pc == 0x332660u) {
        ctx->pc = 0x332664u;
        goto label_332664;
    }
    ctx->pc = 0x33265Cu;
    SET_GPR_U32(ctx, 31, 0x332664u);
    ctx->pc = 0x32A700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A700u, 0x33265Cu, 0x332664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332664u;
label_332664:
    // 0x332664: 0xc0cb80c  jal         func_32E030
label_332668:
    if (ctx->pc == 0x332668u) {
        ctx->pc = 0x33266Cu;
        goto label_33266c;
    }
    ctx->pc = 0x332664u;
    SET_GPR_U32(ctx, 31, 0x33266Cu);
    ctx->pc = 0x32E030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32E030u, 0x332664u, 0x33266Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33266Cu;
label_33266c:
    // 0x33266c: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x33266cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_332670:
    // 0x332670: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x332670u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_332674:
    // 0x332674: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x332674u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_332678:
    // 0x332678: 0x3e00008  jr          $ra
label_33267c:
    if (ctx->pc == 0x33267Cu) {
        ctx->pc = 0x332680u;
        goto label_fallthrough_0x332678;
    }
    ctx->pc = 0x332678u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x332678u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x332678:
    ctx->pc = 0x332680u;
}
