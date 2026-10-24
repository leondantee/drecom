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

// Function: Em0a_move
// Address: 0x363540 - 0x36362c
void Em0a_move_0x363540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0a_move_0x363540");
#endif

    switch (ctx->pc) {
        case 0x363540u: goto label_363540;
        case 0x363544u: goto label_363544;
        case 0x363548u: goto label_363548;
        case 0x36354cu: goto label_36354c;
        case 0x363550u: goto label_363550;
        case 0x363554u: goto label_363554;
        case 0x363558u: goto label_363558;
        case 0x36355cu: goto label_36355c;
        case 0x363560u: goto label_363560;
        case 0x363564u: goto label_363564;
        case 0x363568u: goto label_363568;
        case 0x36356cu: goto label_36356c;
        case 0x363570u: goto label_363570;
        case 0x363574u: goto label_363574;
        case 0x363578u: goto label_363578;
        case 0x36357cu: goto label_36357c;
        case 0x363580u: goto label_363580;
        case 0x363584u: goto label_363584;
        case 0x363588u: goto label_363588;
        case 0x36358cu: goto label_36358c;
        case 0x363590u: goto label_363590;
        case 0x363594u: goto label_363594;
        case 0x363598u: goto label_363598;
        case 0x36359cu: goto label_36359c;
        case 0x3635a0u: goto label_3635a0;
        case 0x3635a4u: goto label_3635a4;
        case 0x3635a8u: goto label_3635a8;
        case 0x3635acu: goto label_3635ac;
        case 0x3635b0u: goto label_3635b0;
        case 0x3635b4u: goto label_3635b4;
        case 0x3635b8u: goto label_3635b8;
        case 0x3635bcu: goto label_3635bc;
        case 0x3635c0u: goto label_3635c0;
        case 0x3635c4u: goto label_3635c4;
        case 0x3635c8u: goto label_3635c8;
        case 0x3635ccu: goto label_3635cc;
        case 0x3635d0u: goto label_3635d0;
        case 0x3635d4u: goto label_3635d4;
        case 0x3635d8u: goto label_3635d8;
        case 0x3635dcu: goto label_3635dc;
        case 0x3635e0u: goto label_3635e0;
        case 0x3635e4u: goto label_3635e4;
        case 0x3635e8u: goto label_3635e8;
        case 0x3635ecu: goto label_3635ec;
        case 0x3635f0u: goto label_3635f0;
        case 0x3635f4u: goto label_3635f4;
        case 0x3635f8u: goto label_3635f8;
        case 0x3635fcu: goto label_3635fc;
        case 0x363600u: goto label_363600;
        case 0x363604u: goto label_363604;
        case 0x363608u: goto label_363608;
        case 0x36360cu: goto label_36360c;
        case 0x363610u: goto label_363610;
        case 0x363614u: goto label_363614;
        case 0x363618u: goto label_363618;
        case 0x36361cu: goto label_36361c;
        case 0x363620u: goto label_363620;
        case 0x363624u: goto label_363624;
        case 0x363628u: goto label_363628;
        default: break;
    }

    ctx->pc = 0x363540u;

label_363540:
    // 0x363540: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x363540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_363544:
    // 0x363544: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x363544u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
label_363548:
    // 0x363548: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x363548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_36354c:
    // 0x36354c: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x36354cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
label_363550:
    // 0x363550: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x363550u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_363554:
    // 0x363554: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x363554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_363558:
    // 0x363558: 0xa04310a9  sb          $v1, 0x10A9($v0)
    ctx->pc = 0x363558u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4265), (uint8_t)GPR_U32(ctx, 3));
label_36355c:
    // 0x36355c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x36355cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_363560:
    // 0x363560: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x363560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_363564:
    // 0x363564: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x363564u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
label_363568:
    // 0x363568: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x363568u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_36356c:
    // 0x36356c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_363570:
    if (ctx->pc == 0x363570u) {
        ctx->pc = 0x363574u;
        goto label_363574;
    }
    ctx->pc = 0x36356Cu;
    {
        const bool branch_taken_0x36356c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x36356c) {
            ctx->pc = 0x363594u;
            goto label_363594;
        }
    }
    ctx->pc = 0x363574u;
label_363574:
    // 0x363574: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x363574u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_363578:
    // 0x363578: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x363578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_36357c:
    // 0x36357c: 0xa443122c  sh          $v1, 0x122C($v0)
    ctx->pc = 0x36357cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4652), (uint16_t)GPR_U32(ctx, 3));
label_363580:
    // 0x363580: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x363580u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_363584:
    // 0x363584: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x363584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_363588:
    // 0x363588: 0xa443122e  sh          $v1, 0x122E($v0)
    ctx->pc = 0x363588u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4654), (uint16_t)GPR_U32(ctx, 3));
label_36358c:
    // 0x36358c: 0x10000007  b           . + 4 + (0x7 << 2)
label_363590:
    if (ctx->pc == 0x363590u) {
        ctx->pc = 0x363594u;
        goto label_363594;
    }
    ctx->pc = 0x36358Cu;
    {
        const bool branch_taken_0x36358c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36358c) {
            ctx->pc = 0x3635ACu;
            goto label_3635ac;
        }
    }
    ctx->pc = 0x363594u;
label_363594:
    // 0x363594: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x363594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_363598:
    // 0x363598: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x363598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_36359c:
    // 0x36359c: 0xa443122c  sh          $v1, 0x122C($v0)
    ctx->pc = 0x36359cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4652), (uint16_t)GPR_U32(ctx, 3));
label_3635a0:
    // 0x3635a0: 0x24030400  addiu       $v1, $zero, 0x400
    ctx->pc = 0x3635a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_3635a4:
    // 0x3635a4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x3635a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_3635a8:
    // 0x3635a8: 0xa443122e  sh          $v1, 0x122E($v0)
    ctx->pc = 0x3635a8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4654), (uint16_t)GPR_U32(ctx, 3));
label_3635ac:
    // 0x3635ac: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x3635acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_3635b0:
    // 0x3635b0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x3635b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_3635b4:
    // 0x3635b4: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x3635b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_3635b8:
    // 0x3635b8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3635b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_3635bc:
    // 0x3635bc: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x3635bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3635c0:
    // 0x3635c0: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x3635c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_3635c4:
    // 0x3635c4: 0x2442af40  addiu       $v0, $v0, -0x50C0
    ctx->pc = 0x3635c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946624));
label_3635c8:
    // 0x3635c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3635c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3635cc:
    // 0x3635cc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3635ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3635d0:
    // 0x3635d0: 0x40f809  jalr        $v0
label_3635d4:
    if (ctx->pc == 0x3635D4u) {
        ctx->pc = 0x3635D8u;
        goto label_3635d8;
    }
    ctx->pc = 0x3635D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3635D8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3635D0u, 0x3635D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3635D8u;
label_3635d8:
    // 0x3635d8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x3635d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_3635dc:
    // 0x3635dc: 0xc0da178  jal         func_3685E0
label_3635e0:
    if (ctx->pc == 0x3635E0u) {
        ctx->pc = 0x3635E4u;
        goto label_3635e4;
    }
    ctx->pc = 0x3635DCu;
    SET_GPR_U32(ctx, 31, 0x3635E4u);
    ctx->pc = 0x3685E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3685E0u, 0x3635DCu, 0x3635E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3635E4u;
label_3635e4:
    // 0x3635e4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x3635e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_3635e8:
    // 0x3635e8: 0xc0da1cc  jal         func_368730
label_3635ec:
    if (ctx->pc == 0x3635ECu) {
        ctx->pc = 0x3635F0u;
        goto label_3635f0;
    }
    ctx->pc = 0x3635E8u;
    SET_GPR_U32(ctx, 31, 0x3635F0u);
    ctx->pc = 0x368730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x368730u, 0x3635E8u, 0x3635F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3635F0u;
label_3635f0:
    // 0x3635f0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x3635f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_3635f4:
    // 0x3635f4: 0xc097c6c  jal         func_25F1B0
label_3635f8:
    if (ctx->pc == 0x3635F8u) {
        ctx->pc = 0x3635FCu;
        goto label_3635fc;
    }
    ctx->pc = 0x3635F4u;
    SET_GPR_U32(ctx, 31, 0x3635FCu);
    ctx->pc = 0x25F1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F1B0u, 0x3635F4u, 0x3635FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3635FCu;
label_3635fc:
    // 0x3635fc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x3635fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_363600:
    // 0x363600: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x363600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
label_363604:
    // 0x363604: 0x245003f0  addiu       $s0, $v0, 0x3F0
    ctx->pc = 0x363604u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1008));
label_363608:
    // 0x363608: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x363608u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_36360c:
    // 0x36360c: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x36360cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_363610:
    // 0x363610: 0xc079140  jal         func_1E4500
label_363614:
    if (ctx->pc == 0x363614u) {
        ctx->pc = 0x363618u;
        goto label_363618;
    }
    ctx->pc = 0x363610u;
    SET_GPR_U32(ctx, 31, 0x363618u);
    ctx->pc = 0x1E4500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4500u, 0x363610u, 0x363618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363618u;
label_363618:
    // 0x363618: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x363618u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_36361c:
    // 0x36361c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x36361cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_363620:
    // 0x363620: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x363620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_363624:
    // 0x363624: 0x3e00008  jr          $ra
label_363628:
    if (ctx->pc == 0x363628u) {
        ctx->pc = 0x36362Cu;
        goto label_fallthrough_0x363624;
    }
    ctx->pc = 0x363624u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x363624u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x363624:
    ctx->pc = 0x36362Cu;
}
