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

// Function: Em18_move
// Address: 0x2d9530 - 0x2d96cc
void Em18_move_0x2d9530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em18_move_0x2d9530");
#endif

    switch (ctx->pc) {
        case 0x2d9530u: goto label_2d9530;
        case 0x2d9534u: goto label_2d9534;
        case 0x2d9538u: goto label_2d9538;
        case 0x2d953cu: goto label_2d953c;
        case 0x2d9540u: goto label_2d9540;
        case 0x2d9544u: goto label_2d9544;
        case 0x2d9548u: goto label_2d9548;
        case 0x2d954cu: goto label_2d954c;
        case 0x2d9550u: goto label_2d9550;
        case 0x2d9554u: goto label_2d9554;
        case 0x2d9558u: goto label_2d9558;
        case 0x2d955cu: goto label_2d955c;
        case 0x2d9560u: goto label_2d9560;
        case 0x2d9564u: goto label_2d9564;
        case 0x2d9568u: goto label_2d9568;
        case 0x2d956cu: goto label_2d956c;
        case 0x2d9570u: goto label_2d9570;
        case 0x2d9574u: goto label_2d9574;
        case 0x2d9578u: goto label_2d9578;
        case 0x2d957cu: goto label_2d957c;
        case 0x2d9580u: goto label_2d9580;
        case 0x2d9584u: goto label_2d9584;
        case 0x2d9588u: goto label_2d9588;
        case 0x2d958cu: goto label_2d958c;
        case 0x2d9590u: goto label_2d9590;
        case 0x2d9594u: goto label_2d9594;
        case 0x2d9598u: goto label_2d9598;
        case 0x2d959cu: goto label_2d959c;
        case 0x2d95a0u: goto label_2d95a0;
        case 0x2d95a4u: goto label_2d95a4;
        case 0x2d95a8u: goto label_2d95a8;
        case 0x2d95acu: goto label_2d95ac;
        case 0x2d95b0u: goto label_2d95b0;
        case 0x2d95b4u: goto label_2d95b4;
        case 0x2d95b8u: goto label_2d95b8;
        case 0x2d95bcu: goto label_2d95bc;
        case 0x2d95c0u: goto label_2d95c0;
        case 0x2d95c4u: goto label_2d95c4;
        case 0x2d95c8u: goto label_2d95c8;
        case 0x2d95ccu: goto label_2d95cc;
        case 0x2d95d0u: goto label_2d95d0;
        case 0x2d95d4u: goto label_2d95d4;
        case 0x2d95d8u: goto label_2d95d8;
        case 0x2d95dcu: goto label_2d95dc;
        case 0x2d95e0u: goto label_2d95e0;
        case 0x2d95e4u: goto label_2d95e4;
        case 0x2d95e8u: goto label_2d95e8;
        case 0x2d95ecu: goto label_2d95ec;
        case 0x2d95f0u: goto label_2d95f0;
        case 0x2d95f4u: goto label_2d95f4;
        case 0x2d95f8u: goto label_2d95f8;
        case 0x2d95fcu: goto label_2d95fc;
        case 0x2d9600u: goto label_2d9600;
        case 0x2d9604u: goto label_2d9604;
        case 0x2d9608u: goto label_2d9608;
        case 0x2d960cu: goto label_2d960c;
        case 0x2d9610u: goto label_2d9610;
        case 0x2d9614u: goto label_2d9614;
        case 0x2d9618u: goto label_2d9618;
        case 0x2d961cu: goto label_2d961c;
        case 0x2d9620u: goto label_2d9620;
        case 0x2d9624u: goto label_2d9624;
        case 0x2d9628u: goto label_2d9628;
        case 0x2d962cu: goto label_2d962c;
        case 0x2d9630u: goto label_2d9630;
        case 0x2d9634u: goto label_2d9634;
        case 0x2d9638u: goto label_2d9638;
        case 0x2d963cu: goto label_2d963c;
        case 0x2d9640u: goto label_2d9640;
        case 0x2d9644u: goto label_2d9644;
        case 0x2d9648u: goto label_2d9648;
        case 0x2d964cu: goto label_2d964c;
        case 0x2d9650u: goto label_2d9650;
        case 0x2d9654u: goto label_2d9654;
        case 0x2d9658u: goto label_2d9658;
        case 0x2d965cu: goto label_2d965c;
        case 0x2d9660u: goto label_2d9660;
        case 0x2d9664u: goto label_2d9664;
        case 0x2d9668u: goto label_2d9668;
        case 0x2d966cu: goto label_2d966c;
        case 0x2d9670u: goto label_2d9670;
        case 0x2d9674u: goto label_2d9674;
        case 0x2d9678u: goto label_2d9678;
        case 0x2d967cu: goto label_2d967c;
        case 0x2d9680u: goto label_2d9680;
        case 0x2d9684u: goto label_2d9684;
        case 0x2d9688u: goto label_2d9688;
        case 0x2d968cu: goto label_2d968c;
        case 0x2d9690u: goto label_2d9690;
        case 0x2d9694u: goto label_2d9694;
        case 0x2d9698u: goto label_2d9698;
        case 0x2d969cu: goto label_2d969c;
        case 0x2d96a0u: goto label_2d96a0;
        case 0x2d96a4u: goto label_2d96a4;
        case 0x2d96a8u: goto label_2d96a8;
        case 0x2d96acu: goto label_2d96ac;
        case 0x2d96b0u: goto label_2d96b0;
        case 0x2d96b4u: goto label_2d96b4;
        case 0x2d96b8u: goto label_2d96b8;
        case 0x2d96bcu: goto label_2d96bc;
        case 0x2d96c0u: goto label_2d96c0;
        case 0x2d96c4u: goto label_2d96c4;
        case 0x2d96c8u: goto label_2d96c8;
        default: break;
    }

    ctx->pc = 0x2d9530u;

label_2d9530:
    // 0x2d9530: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d9530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2d9534:
    // 0x2d9534: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x2d9534u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
label_2d9538:
    // 0x2d9538: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d9538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2d953c:
    // 0x2d953c: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x2d953cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
label_2d9540:
    // 0x2d9540: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2d9540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_2d9544:
    // 0x2d9544: 0x24501330  addiu       $s0, $v0, 0x1330
    ctx->pc = 0x2d9544u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_2d9548:
    // 0x2d9548: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2d9548u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_2d954c:
    // 0x2d954c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x2d954cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_2d9550:
    // 0x2d9550: 0x3c02f3ff  lui         $v0, 0xF3FF
    ctx->pc = 0x2d9550u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62463 << 16));
label_2d9554:
    // 0x2d9554: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2d9554u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_2d9558:
    // 0x2d9558: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2d9558u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_2d955c:
    // 0x2d955c: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x2d955cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_2d9560:
    // 0x2d9560: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2d9560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_2d9564:
    // 0x2d9564: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x2d9564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_2d9568:
    // 0x2d9568: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2d9568u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_2d956c:
    // 0x2d956c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_2d9570:
    if (ctx->pc == 0x2D9570u) {
        ctx->pc = 0x2D9574u;
        goto label_2d9574;
    }
    ctx->pc = 0x2D956Cu;
    {
        const bool branch_taken_0x2d956c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d956c) {
            ctx->pc = 0x2D95A4u;
            goto label_2d95a4;
        }
    }
    ctx->pc = 0x2D9574u;
label_2d9574:
    // 0x2d9574: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2d9574u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_2d9578:
    // 0x2d9578: 0xc0b8948  jal         func_2E2520
label_2d957c:
    if (ctx->pc == 0x2D957Cu) {
        ctx->pc = 0x2D9580u;
        goto label_2d9580;
    }
    ctx->pc = 0x2D9578u;
    SET_GPR_U32(ctx, 31, 0x2D9580u);
    ctx->pc = 0x2E2520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E2520u, 0x2D9578u, 0x2D9580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9580u;
label_2d9580:
    // 0x2d9580: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2d9580u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_2d9584:
    // 0x2d9584: 0xc0b87b8  jal         func_2E1EE0
label_2d9588:
    if (ctx->pc == 0x2D9588u) {
        ctx->pc = 0x2D958Cu;
        goto label_2d958c;
    }
    ctx->pc = 0x2D9584u;
    SET_GPR_U32(ctx, 31, 0x2D958Cu);
    ctx->pc = 0x2E1EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E1EE0u, 0x2D9584u, 0x2D958Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D958Cu;
label_2d958c:
    // 0x2d958c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2d958cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_2d9590:
    // 0x2d9590: 0xc0b6878  jal         func_2DA1E0
label_2d9594:
    if (ctx->pc == 0x2D9594u) {
        ctx->pc = 0x2D9598u;
        goto label_2d9598;
    }
    ctx->pc = 0x2D9590u;
    SET_GPR_U32(ctx, 31, 0x2D9598u);
    ctx->pc = 0x2DA1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA1E0u, 0x2D9590u, 0x2D9598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9598u;
label_2d9598:
    // 0x2d9598: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2d9598u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_2d959c:
    // 0x2d959c: 0xc0b6958  jal         func_2DA560
label_2d95a0:
    if (ctx->pc == 0x2D95A0u) {
        ctx->pc = 0x2D95A4u;
        goto label_2d95a4;
    }
    ctx->pc = 0x2D959Cu;
    SET_GPR_U32(ctx, 31, 0x2D95A4u);
    ctx->pc = 0x2DA560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA560u, 0x2D959Cu, 0x2D95A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D95A4u;
label_2d95a4:
    // 0x2d95a4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2d95a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_2d95a8:
    // 0x2d95a8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2d95a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_2d95ac:
    // 0x2d95ac: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x2d95acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_2d95b0:
    // 0x2d95b0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2d95b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2d95b4:
    // 0x2d95b4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2d95b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2d95b8:
    // 0x2d95b8: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2d95b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
label_2d95bc:
    // 0x2d95bc: 0x24428a00  addiu       $v0, $v0, -0x7600
    ctx->pc = 0x2d95bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937088));
label_2d95c0:
    // 0x2d95c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d95c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2d95c4:
    // 0x2d95c4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2d95c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2d95c8:
    // 0x2d95c8: 0x40f809  jalr        $v0
label_2d95cc:
    if (ctx->pc == 0x2D95CCu) {
        ctx->pc = 0x2D95D0u;
        goto label_2d95d0;
    }
    ctx->pc = 0x2D95C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2D95D0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D95C8u, 0x2D95D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D95D0u;
label_2d95d0:
    // 0x2d95d0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2d95d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_2d95d4:
    // 0x2d95d4: 0xc0b6b94  jal         func_2DAE50
label_2d95d8:
    if (ctx->pc == 0x2D95D8u) {
        ctx->pc = 0x2D95DCu;
        goto label_2d95dc;
    }
    ctx->pc = 0x2D95D4u;
    SET_GPR_U32(ctx, 31, 0x2D95DCu);
    ctx->pc = 0x2DAE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DAE50u, 0x2D95D4u, 0x2D95DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D95DCu;
label_2d95dc:
    // 0x2d95dc: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2d95dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_2d95e0:
    // 0x2d95e0: 0xc0b8978  jal         func_2E25E0
label_2d95e4:
    if (ctx->pc == 0x2D95E4u) {
        ctx->pc = 0x2D95E8u;
        goto label_2d95e8;
    }
    ctx->pc = 0x2D95E0u;
    SET_GPR_U32(ctx, 31, 0x2D95E8u);
    ctx->pc = 0x2E25E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E25E0u, 0x2D95E0u, 0x2D95E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D95E8u;
label_2d95e8:
    // 0x2d95e8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d95e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_2d95ec:
    // 0x2d95ec: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x2d95ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_2d95f0:
    // 0x2d95f0: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x2d95f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_2d95f4:
    // 0x2d95f4: 0x10600030  beqz        $v1, . + 4 + (0x30 << 2)
label_2d95f8:
    if (ctx->pc == 0x2D95F8u) {
        ctx->pc = 0x2D95FCu;
        goto label_2d95fc;
    }
    ctx->pc = 0x2D95F4u;
    {
        const bool branch_taken_0x2d95f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d95f4) {
            ctx->pc = 0x2D96B8u;
            goto label_2d96b8;
        }
    }
    ctx->pc = 0x2D95FCu;
label_2d95fc:
    // 0x2d95fc: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2d95fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_2d9600:
    // 0x2d9600: 0xc0b679c  jal         func_2D9E70
label_2d9604:
    if (ctx->pc == 0x2D9604u) {
        ctx->pc = 0x2D9608u;
        goto label_2d9608;
    }
    ctx->pc = 0x2D9600u;
    SET_GPR_U32(ctx, 31, 0x2D9608u);
    ctx->pc = 0x2D9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9E70u, 0x2D9600u, 0x2D9608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9608u;
label_2d9608:
    // 0x2d9608: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2d9608u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_2d960c:
    // 0x2d960c: 0xc0b6a3c  jal         func_2DA8F0
label_2d9610:
    if (ctx->pc == 0x2D9610u) {
        ctx->pc = 0x2D9614u;
        goto label_2d9614;
    }
    ctx->pc = 0x2D960Cu;
    SET_GPR_U32(ctx, 31, 0x2D9614u);
    ctx->pc = 0x2DA8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA8F0u, 0x2D960Cu, 0x2D9614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9614u;
label_2d9614:
    // 0x2d9614: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d9614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_2d9618:
    // 0x2d9618: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x2d9618u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_2d961c:
    // 0x2d961c: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x2d961cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_2d9620:
    // 0x2d9620: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2d9620u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_2d9624:
    // 0x2d9624: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
label_2d9628:
    if (ctx->pc == 0x2D9628u) {
        ctx->pc = 0x2D962Cu;
        goto label_2d962c;
    }
    ctx->pc = 0x2D9624u;
    {
        const bool branch_taken_0x2d9624 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d9624) {
            ctx->pc = 0x2D9678u;
            goto label_2d9678;
        }
    }
    ctx->pc = 0x2D962Cu;
label_2d962c:
    // 0x2d962c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2d962cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_2d9630:
    // 0x2d9630: 0xc0b69c0  jal         func_2DA700
label_2d9634:
    if (ctx->pc == 0x2D9634u) {
        ctx->pc = 0x2D9638u;
        goto label_2d9638;
    }
    ctx->pc = 0x2D9630u;
    SET_GPR_U32(ctx, 31, 0x2D9638u);
    ctx->pc = 0x2DA700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA700u, 0x2D9630u, 0x2D9638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9638u;
label_2d9638:
    // 0x2d9638: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2d9638u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_2d963c:
    // 0x2d963c: 0xc0b6b28  jal         func_2DACA0
label_2d9640:
    if (ctx->pc == 0x2D9640u) {
        ctx->pc = 0x2D9644u;
        goto label_2d9644;
    }
    ctx->pc = 0x2D963Cu;
    SET_GPR_U32(ctx, 31, 0x2D9644u);
    ctx->pc = 0x2DACA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DACA0u, 0x2D963Cu, 0x2D9644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9644u;
label_2d9644:
    // 0x2d9644: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x2d9644u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
label_2d9648:
    // 0x2d9648: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2d9648u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2d964c:
    // 0x2d964c: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x2d964cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
label_2d9650:
    // 0x2d9650: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2d9650u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2d9654:
    // 0x2d9654: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x2d9654u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
label_2d9658:
    // 0x2d9658: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2d9658u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_2d965c:
    // 0x2d965c: 0x3c02425c  lui         $v0, 0x425C
    ctx->pc = 0x2d965cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16988 << 16));
label_2d9660:
    // 0x2d9660: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x2d9660u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_2d9664:
    // 0x2d9664: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2d9664u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_2d9668:
    // 0x2d9668: 0xc0c91ec  jal         func_3247B0
label_2d966c:
    if (ctx->pc == 0x2D966Cu) {
        ctx->pc = 0x2D9670u;
        goto label_2d9670;
    }
    ctx->pc = 0x2D9668u;
    SET_GPR_U32(ctx, 31, 0x2D9670u);
    ctx->pc = 0x3247B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3247B0u, 0x2D9668u, 0x2D9670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9670u;
label_2d9670:
    // 0x2d9670: 0x10000011  b           . + 4 + (0x11 << 2)
label_2d9674:
    if (ctx->pc == 0x2D9674u) {
        ctx->pc = 0x2D9678u;
        goto label_2d9678;
    }
    ctx->pc = 0x2D9670u;
    {
        const bool branch_taken_0x2d9670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d9670) {
            ctx->pc = 0x2D96B8u;
            goto label_2d96b8;
        }
    }
    ctx->pc = 0x2D9678u;
label_2d9678:
    // 0x2d9678: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2d9678u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_2d967c:
    // 0x2d967c: 0x8c240140  lw          $a0, 0x140($at)
    ctx->pc = 0x2d967cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_2d9680:
    // 0x2d9680: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x2d9680u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_2d9684:
    // 0x2d9684: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2d9684u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2d9688:
    // 0x2d9688: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x2d9688u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2d968c:
    // 0x2d968c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d968cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_2d9690:
    // 0x2d9690: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2d9690u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2d9694:
    // 0x2d9694: 0xac600204  sw          $zero, 0x204($v1)
    ctx->pc = 0x2d9694u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 516), GPR_U32(ctx, 0));
label_2d9698:
    // 0x2d9698: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2d9698u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_2d969c:
    // 0x2d969c: 0x8c240140  lw          $a0, 0x140($at)
    ctx->pc = 0x2d969cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_2d96a0:
    // 0x2d96a0: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x2d96a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_2d96a4:
    // 0x2d96a4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2d96a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2d96a8:
    // 0x2d96a8: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x2d96a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2d96ac:
    // 0x2d96ac: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d96acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_2d96b0:
    // 0x2d96b0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2d96b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2d96b4:
    // 0x2d96b4: 0xac60021c  sw          $zero, 0x21C($v1)
    ctx->pc = 0x2d96b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 540), GPR_U32(ctx, 0));
label_2d96b8:
    // 0x2d96b8: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x2d96b8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2d96bc:
    // 0x2d96bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d96bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2d96c0:
    // 0x2d96c0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2d96c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2d96c4:
    // 0x2d96c4: 0x3e00008  jr          $ra
label_2d96c8:
    if (ctx->pc == 0x2D96C8u) {
        ctx->pc = 0x2D96CCu;
        goto label_fallthrough_0x2d96c4;
    }
    ctx->pc = 0x2D96C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D96C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2d96c4:
    ctx->pc = 0x2D96CCu;
}
