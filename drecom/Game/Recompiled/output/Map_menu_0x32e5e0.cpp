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

// Function: Map_menu
// Address: 0x32e5e0 - 0x32e6c0
void Map_menu_0x32e5e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Map_menu_0x32e5e0");
#endif

    switch (ctx->pc) {
        case 0x32e5e0u: goto label_32e5e0;
        case 0x32e5e4u: goto label_32e5e4;
        case 0x32e5e8u: goto label_32e5e8;
        case 0x32e5ecu: goto label_32e5ec;
        case 0x32e5f0u: goto label_32e5f0;
        case 0x32e5f4u: goto label_32e5f4;
        case 0x32e5f8u: goto label_32e5f8;
        case 0x32e5fcu: goto label_32e5fc;
        case 0x32e600u: goto label_32e600;
        case 0x32e604u: goto label_32e604;
        case 0x32e608u: goto label_32e608;
        case 0x32e60cu: goto label_32e60c;
        case 0x32e610u: goto label_32e610;
        case 0x32e614u: goto label_32e614;
        case 0x32e618u: goto label_32e618;
        case 0x32e61cu: goto label_32e61c;
        case 0x32e620u: goto label_32e620;
        case 0x32e624u: goto label_32e624;
        case 0x32e628u: goto label_32e628;
        case 0x32e62cu: goto label_32e62c;
        case 0x32e630u: goto label_32e630;
        case 0x32e634u: goto label_32e634;
        case 0x32e638u: goto label_32e638;
        case 0x32e63cu: goto label_32e63c;
        case 0x32e640u: goto label_32e640;
        case 0x32e644u: goto label_32e644;
        case 0x32e648u: goto label_32e648;
        case 0x32e64cu: goto label_32e64c;
        case 0x32e650u: goto label_32e650;
        case 0x32e654u: goto label_32e654;
        case 0x32e658u: goto label_32e658;
        case 0x32e65cu: goto label_32e65c;
        case 0x32e660u: goto label_32e660;
        case 0x32e664u: goto label_32e664;
        case 0x32e668u: goto label_32e668;
        case 0x32e66cu: goto label_32e66c;
        case 0x32e670u: goto label_32e670;
        case 0x32e674u: goto label_32e674;
        case 0x32e678u: goto label_32e678;
        case 0x32e67cu: goto label_32e67c;
        case 0x32e680u: goto label_32e680;
        case 0x32e684u: goto label_32e684;
        case 0x32e688u: goto label_32e688;
        case 0x32e68cu: goto label_32e68c;
        case 0x32e690u: goto label_32e690;
        case 0x32e694u: goto label_32e694;
        case 0x32e698u: goto label_32e698;
        case 0x32e69cu: goto label_32e69c;
        case 0x32e6a0u: goto label_32e6a0;
        case 0x32e6a4u: goto label_32e6a4;
        case 0x32e6a8u: goto label_32e6a8;
        case 0x32e6acu: goto label_32e6ac;
        case 0x32e6b0u: goto label_32e6b0;
        case 0x32e6b4u: goto label_32e6b4;
        case 0x32e6b8u: goto label_32e6b8;
        case 0x32e6bcu: goto label_32e6bc;
        default: break;
    }

    ctx->pc = 0x32e5e0u;

label_32e5e0:
    // 0x32e5e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x32e5e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_32e5e4:
    // 0x32e5e4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x32e5e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
label_32e5e8:
    // 0x32e5e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x32e5e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_32e5ec:
    // 0x32e5ec: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x32e5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_32e5f0:
    // 0x32e5f0: 0x24706150  addiu       $s0, $v1, 0x6150
    ctx->pc = 0x32e5f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 24912));
label_32e5f4:
    // 0x32e5f4: 0x920365ad  lbu         $v1, 0x65AD($s0)
    ctx->pc = 0x32e5f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26029)));
label_32e5f8:
    // 0x32e5f8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x32e5f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_32e5fc:
    // 0x32e5fc: 0x14600024  bnez        $v1, . + 4 + (0x24 << 2)
label_32e600:
    if (ctx->pc == 0x32E600u) {
        ctx->pc = 0x32E604u;
        goto label_32e604;
    }
    ctx->pc = 0x32E5FCu;
    {
        const bool branch_taken_0x32e5fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x32e5fc) {
            ctx->pc = 0x32E690u;
            goto label_32e690;
        }
    }
    ctx->pc = 0x32E604u;
label_32e604:
    // 0x32e604: 0x8e045dc8  lw          $a0, 0x5DC8($s0)
    ctx->pc = 0x32e604u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24008)));
label_32e608:
    // 0x32e608: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x32e608u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_32e60c:
    // 0x32e60c: 0x10830016  beq         $a0, $v1, . + 4 + (0x16 << 2)
label_32e610:
    if (ctx->pc == 0x32E610u) {
        ctx->pc = 0x32E614u;
        goto label_32e614;
    }
    ctx->pc = 0x32E60Cu;
    {
        const bool branch_taken_0x32e60c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x32e60c) {
            ctx->pc = 0x32E668u;
            goto label_32e668;
        }
    }
    ctx->pc = 0x32E614u;
label_32e614:
    // 0x32e614: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x32e614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_32e618:
    // 0x32e618: 0x1083000a  beq         $a0, $v1, . + 4 + (0xA << 2)
label_32e61c:
    if (ctx->pc == 0x32E61Cu) {
        ctx->pc = 0x32E620u;
        goto label_32e620;
    }
    ctx->pc = 0x32E618u;
    {
        const bool branch_taken_0x32e618 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x32e618) {
            ctx->pc = 0x32E644u;
            goto label_32e644;
        }
    }
    ctx->pc = 0x32E620u;
label_32e620:
    // 0x32e620: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_32e624:
    if (ctx->pc == 0x32E624u) {
        ctx->pc = 0x32E628u;
        goto label_32e628;
    }
    ctx->pc = 0x32E620u;
    {
        const bool branch_taken_0x32e620 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x32e620) {
            ctx->pc = 0x32E630u;
            goto label_32e630;
        }
    }
    ctx->pc = 0x32E628u;
label_32e628:
    // 0x32e628: 0x10000019  b           . + 4 + (0x19 << 2)
label_32e62c:
    if (ctx->pc == 0x32E62Cu) {
        ctx->pc = 0x32E630u;
        goto label_32e630;
    }
    ctx->pc = 0x32E628u;
    {
        const bool branch_taken_0x32e628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32e628) {
            ctx->pc = 0x32E690u;
            goto label_32e690;
        }
    }
    ctx->pc = 0x32E630u;
label_32e630:
    // 0x32e630: 0xa2006608  sb          $zero, 0x6608($s0)
    ctx->pc = 0x32e630u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 26120), (uint8_t)GPR_U32(ctx, 0));
label_32e634:
    // 0x32e634: 0xc0cb9b0  jal         func_32E6C0
label_32e638:
    if (ctx->pc == 0x32E638u) {
        ctx->pc = 0x32E63Cu;
        goto label_32e63c;
    }
    ctx->pc = 0x32E634u;
    SET_GPR_U32(ctx, 31, 0x32E63Cu);
    ctx->pc = 0x32E6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32E6C0u, 0x32E634u, 0x32E63Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E63Cu;
label_32e63c:
    // 0x32e63c: 0x10000014  b           . + 4 + (0x14 << 2)
label_32e640:
    if (ctx->pc == 0x32E640u) {
        ctx->pc = 0x32E644u;
        goto label_32e644;
    }
    ctx->pc = 0x32E63Cu;
    {
        const bool branch_taken_0x32e63c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32e63c) {
            ctx->pc = 0x32E690u;
            goto label_32e690;
        }
    }
    ctx->pc = 0x32E644u;
label_32e644:
    // 0x32e644: 0x8e045dc0  lw          $a0, 0x5DC0($s0)
    ctx->pc = 0x32e644u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24000)));
label_32e648:
    // 0x32e648: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x32e648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_32e64c:
    // 0x32e64c: 0x14830010  bne         $a0, $v1, . + 4 + (0x10 << 2)
label_32e650:
    if (ctx->pc == 0x32E650u) {
        ctx->pc = 0x32E654u;
        goto label_32e654;
    }
    ctx->pc = 0x32E64Cu;
    {
        const bool branch_taken_0x32e64c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x32e64c) {
            ctx->pc = 0x32E690u;
            goto label_32e690;
        }
    }
    ctx->pc = 0x32E654u;
label_32e654:
    // 0x32e654: 0xa2006608  sb          $zero, 0x6608($s0)
    ctx->pc = 0x32e654u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 26120), (uint8_t)GPR_U32(ctx, 0));
label_32e658:
    // 0x32e658: 0xc0cba28  jal         func_32E8A0
label_32e65c:
    if (ctx->pc == 0x32E65Cu) {
        ctx->pc = 0x32E660u;
        goto label_32e660;
    }
    ctx->pc = 0x32E658u;
    SET_GPR_U32(ctx, 31, 0x32E660u);
    ctx->pc = 0x32E8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32E8A0u, 0x32E658u, 0x32E660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E660u;
label_32e660:
    // 0x32e660: 0x1000000b  b           . + 4 + (0xB << 2)
label_32e664:
    if (ctx->pc == 0x32E664u) {
        ctx->pc = 0x32E668u;
        goto label_32e668;
    }
    ctx->pc = 0x32E660u;
    {
        const bool branch_taken_0x32e660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32e660) {
            ctx->pc = 0x32E690u;
            goto label_32e690;
        }
    }
    ctx->pc = 0x32E668u;
label_32e668:
    // 0x32e668: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32e668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_32e66c:
    // 0x32e66c: 0xa2026608  sb          $v0, 0x6608($s0)
    ctx->pc = 0x32e66cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 26120), (uint8_t)GPR_U32(ctx, 2));
label_32e670:
    // 0x32e670: 0x8e025dcc  lw          $v0, 0x5DCC($s0)
    ctx->pc = 0x32e670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24012)));
label_32e674:
    // 0x32e674: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x32e674u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_32e678:
    // 0x32e678: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x32e678u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_32e67c:
    // 0x32e67c: 0x24429650  addiu       $v0, $v0, -0x69B0
    ctx->pc = 0x32e67cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940240));
label_32e680:
    // 0x32e680: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x32e680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_32e684:
    // 0x32e684: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x32e684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_32e688:
    // 0x32e688: 0x40f809  jalr        $v0
label_32e68c:
    if (ctx->pc == 0x32E68Cu) {
        ctx->pc = 0x32E690u;
        goto label_32e690;
    }
    ctx->pc = 0x32E688u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x32E690u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32E688u, 0x32E690u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x32E690u;
label_32e690:
    // 0x32e690: 0x8e035dc8  lw          $v1, 0x5DC8($s0)
    ctx->pc = 0x32e690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24008)));
label_32e694:
    // 0x32e694: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_32e698:
    if (ctx->pc == 0x32E698u) {
        ctx->pc = 0x32E69Cu;
        goto label_32e69c;
    }
    ctx->pc = 0x32E694u;
    {
        const bool branch_taken_0x32e694 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x32e694) {
            ctx->pc = 0x32E6ACu;
            goto label_32e6ac;
        }
    }
    ctx->pc = 0x32E69Cu;
label_32e69c:
    // 0x32e69c: 0xc0cbb08  jal         func_32EC20
label_32e6a0:
    if (ctx->pc == 0x32E6A0u) {
        ctx->pc = 0x32E6A4u;
        goto label_32e6a4;
    }
    ctx->pc = 0x32E69Cu;
    SET_GPR_U32(ctx, 31, 0x32E6A4u);
    ctx->pc = 0x32EC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32EC20u, 0x32E69Cu, 0x32E6A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E6A4u;
label_32e6a4:
    // 0x32e6a4: 0xc0cbeb8  jal         func_32FAE0
label_32e6a8:
    if (ctx->pc == 0x32E6A8u) {
        ctx->pc = 0x32E6ACu;
        goto label_32e6ac;
    }
    ctx->pc = 0x32E6A4u;
    SET_GPR_U32(ctx, 31, 0x32E6ACu);
    ctx->pc = 0x32FAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32FAE0u, 0x32E6A4u, 0x32E6ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E6ACu;
label_32e6ac:
    // 0x32e6ac: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x32e6acu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_32e6b0:
    // 0x32e6b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x32e6b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_32e6b4:
    // 0x32e6b4: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x32e6b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_32e6b8:
    // 0x32e6b8: 0x3e00008  jr          $ra
label_32e6bc:
    if (ctx->pc == 0x32E6BCu) {
        ctx->pc = 0x32E6C0u;
        goto label_fallthrough_0x32e6b8;
    }
    ctx->pc = 0x32E6B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32E6B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x32e6b8:
    ctx->pc = 0x32E6C0u;
}
