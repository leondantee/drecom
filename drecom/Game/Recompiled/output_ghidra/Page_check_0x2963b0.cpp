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

// Function: Page_check
// Address: 0x2963b0 - 0x296680
void Page_check_0x2963b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Page_check_0x2963b0");
#endif

    switch (ctx->pc) {
        case 0x2963b0u: goto label_2963b0;
        case 0x2963b4u: goto label_2963b4;
        case 0x2963b8u: goto label_2963b8;
        case 0x2963bcu: goto label_2963bc;
        case 0x2963c0u: goto label_2963c0;
        case 0x2963c4u: goto label_2963c4;
        case 0x2963c8u: goto label_2963c8;
        case 0x2963ccu: goto label_2963cc;
        case 0x2963d0u: goto label_2963d0;
        case 0x2963d4u: goto label_2963d4;
        case 0x2963d8u: goto label_2963d8;
        case 0x2963dcu: goto label_2963dc;
        case 0x2963e0u: goto label_2963e0;
        case 0x2963e4u: goto label_2963e4;
        case 0x2963e8u: goto label_2963e8;
        case 0x2963ecu: goto label_2963ec;
        case 0x2963f0u: goto label_2963f0;
        case 0x2963f4u: goto label_2963f4;
        case 0x2963f8u: goto label_2963f8;
        case 0x2963fcu: goto label_2963fc;
        case 0x296400u: goto label_296400;
        case 0x296404u: goto label_296404;
        case 0x296408u: goto label_296408;
        case 0x29640cu: goto label_29640c;
        case 0x296410u: goto label_296410;
        case 0x296414u: goto label_296414;
        case 0x296418u: goto label_296418;
        case 0x29641cu: goto label_29641c;
        case 0x296420u: goto label_296420;
        case 0x296424u: goto label_296424;
        case 0x296428u: goto label_296428;
        case 0x29642cu: goto label_29642c;
        case 0x296430u: goto label_296430;
        case 0x296434u: goto label_296434;
        case 0x296438u: goto label_296438;
        case 0x29643cu: goto label_29643c;
        case 0x296440u: goto label_296440;
        case 0x296444u: goto label_296444;
        case 0x296448u: goto label_296448;
        case 0x29644cu: goto label_29644c;
        case 0x296450u: goto label_296450;
        case 0x296454u: goto label_296454;
        case 0x296458u: goto label_296458;
        case 0x29645cu: goto label_29645c;
        case 0x296460u: goto label_296460;
        case 0x296464u: goto label_296464;
        case 0x296468u: goto label_296468;
        case 0x29646cu: goto label_29646c;
        case 0x296470u: goto label_296470;
        case 0x296474u: goto label_296474;
        case 0x296478u: goto label_296478;
        case 0x29647cu: goto label_29647c;
        case 0x296480u: goto label_296480;
        case 0x296484u: goto label_296484;
        case 0x296488u: goto label_296488;
        case 0x29648cu: goto label_29648c;
        case 0x296490u: goto label_296490;
        case 0x296494u: goto label_296494;
        case 0x296498u: goto label_296498;
        case 0x29649cu: goto label_29649c;
        case 0x2964a0u: goto label_2964a0;
        case 0x2964a4u: goto label_2964a4;
        case 0x2964a8u: goto label_2964a8;
        case 0x2964acu: goto label_2964ac;
        case 0x2964b0u: goto label_2964b0;
        case 0x2964b4u: goto label_2964b4;
        case 0x2964b8u: goto label_2964b8;
        case 0x2964bcu: goto label_2964bc;
        case 0x2964c0u: goto label_2964c0;
        case 0x2964c4u: goto label_2964c4;
        case 0x2964c8u: goto label_2964c8;
        case 0x2964ccu: goto label_2964cc;
        case 0x2964d0u: goto label_2964d0;
        case 0x2964d4u: goto label_2964d4;
        case 0x2964d8u: goto label_2964d8;
        case 0x2964dcu: goto label_2964dc;
        case 0x2964e0u: goto label_2964e0;
        case 0x2964e4u: goto label_2964e4;
        case 0x2964e8u: goto label_2964e8;
        case 0x2964ecu: goto label_2964ec;
        case 0x2964f0u: goto label_2964f0;
        case 0x2964f4u: goto label_2964f4;
        case 0x2964f8u: goto label_2964f8;
        case 0x2964fcu: goto label_2964fc;
        case 0x296500u: goto label_296500;
        case 0x296504u: goto label_296504;
        case 0x296508u: goto label_296508;
        case 0x29650cu: goto label_29650c;
        case 0x296510u: goto label_296510;
        case 0x296514u: goto label_296514;
        case 0x296518u: goto label_296518;
        case 0x29651cu: goto label_29651c;
        case 0x296520u: goto label_296520;
        case 0x296524u: goto label_296524;
        case 0x296528u: goto label_296528;
        case 0x29652cu: goto label_29652c;
        case 0x296530u: goto label_296530;
        case 0x296534u: goto label_296534;
        case 0x296538u: goto label_296538;
        case 0x29653cu: goto label_29653c;
        case 0x296540u: goto label_296540;
        case 0x296544u: goto label_296544;
        case 0x296548u: goto label_296548;
        case 0x29654cu: goto label_29654c;
        case 0x296550u: goto label_296550;
        case 0x296554u: goto label_296554;
        case 0x296558u: goto label_296558;
        case 0x29655cu: goto label_29655c;
        case 0x296560u: goto label_296560;
        case 0x296564u: goto label_296564;
        case 0x296568u: goto label_296568;
        case 0x29656cu: goto label_29656c;
        case 0x296570u: goto label_296570;
        case 0x296574u: goto label_296574;
        case 0x296578u: goto label_296578;
        case 0x29657cu: goto label_29657c;
        case 0x296580u: goto label_296580;
        case 0x296584u: goto label_296584;
        case 0x296588u: goto label_296588;
        case 0x29658cu: goto label_29658c;
        case 0x296590u: goto label_296590;
        case 0x296594u: goto label_296594;
        case 0x296598u: goto label_296598;
        case 0x29659cu: goto label_29659c;
        case 0x2965a0u: goto label_2965a0;
        case 0x2965a4u: goto label_2965a4;
        case 0x2965a8u: goto label_2965a8;
        case 0x2965acu: goto label_2965ac;
        case 0x2965b0u: goto label_2965b0;
        case 0x2965b4u: goto label_2965b4;
        case 0x2965b8u: goto label_2965b8;
        case 0x2965bcu: goto label_2965bc;
        case 0x2965c0u: goto label_2965c0;
        case 0x2965c4u: goto label_2965c4;
        case 0x2965c8u: goto label_2965c8;
        case 0x2965ccu: goto label_2965cc;
        case 0x2965d0u: goto label_2965d0;
        case 0x2965d4u: goto label_2965d4;
        case 0x2965d8u: goto label_2965d8;
        case 0x2965dcu: goto label_2965dc;
        case 0x2965e0u: goto label_2965e0;
        case 0x2965e4u: goto label_2965e4;
        case 0x2965e8u: goto label_2965e8;
        case 0x2965ecu: goto label_2965ec;
        case 0x2965f0u: goto label_2965f0;
        case 0x2965f4u: goto label_2965f4;
        case 0x2965f8u: goto label_2965f8;
        case 0x2965fcu: goto label_2965fc;
        case 0x296600u: goto label_296600;
        case 0x296604u: goto label_296604;
        case 0x296608u: goto label_296608;
        case 0x29660cu: goto label_29660c;
        case 0x296610u: goto label_296610;
        case 0x296614u: goto label_296614;
        case 0x296618u: goto label_296618;
        case 0x29661cu: goto label_29661c;
        case 0x296620u: goto label_296620;
        case 0x296624u: goto label_296624;
        case 0x296628u: goto label_296628;
        case 0x29662cu: goto label_29662c;
        case 0x296630u: goto label_296630;
        case 0x296634u: goto label_296634;
        case 0x296638u: goto label_296638;
        case 0x29663cu: goto label_29663c;
        case 0x296640u: goto label_296640;
        case 0x296644u: goto label_296644;
        case 0x296648u: goto label_296648;
        case 0x29664cu: goto label_29664c;
        case 0x296650u: goto label_296650;
        case 0x296654u: goto label_296654;
        case 0x296658u: goto label_296658;
        case 0x29665cu: goto label_29665c;
        case 0x296660u: goto label_296660;
        case 0x296664u: goto label_296664;
        case 0x296668u: goto label_296668;
        case 0x29666cu: goto label_29666c;
        case 0x296670u: goto label_296670;
        case 0x296674u: goto label_296674;
        case 0x296678u: goto label_296678;
        case 0x29667cu: goto label_29667c;
        default: break;
    }

    ctx->pc = 0x2963b0u;

label_2963b0:
    // 0x2963b0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2963b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_2963b4:
    // 0x2963b4: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2963b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_2963b8:
    // 0x2963b8: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2963b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_2963bc:
    // 0x2963bc: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2963bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_2963c0:
    // 0x2963c0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2963c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_2963c4:
    // 0x2963c4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2963c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2963c8:
    // 0x2963c8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2963c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2963cc:
    // 0x2963cc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2963ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2963d0:
    // 0x2963d0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2963d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2963d4:
    // 0x2963d4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2963d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2963d8:
    // 0x2963d8: 0xafa40098  sw          $a0, 0x98($sp)
    ctx->pc = 0x2963d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 4));
label_2963dc:
    // 0x2963dc: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x2963dcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2963e0:
    // 0x2963e0: 0x7000f628  paddub      $fp, $zero, $zero
    ctx->pc = 0x2963e0u;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2963e4:
    // 0x2963e4: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x2963e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_2963e8:
    // 0x2963e8: 0x8c7069b0  lw          $s0, 0x69B0($v1)
    ctx->pc = 0x2963e8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 27056)));
label_2963ec:
    // 0x2963ec: 0x7000ae28  paddub      $s5, $zero, $zero
    ctx->pc = 0x2963ecu;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2963f0:
    // 0x2963f0: 0x1000006f  b           . + 4 + (0x6F << 2)
label_2963f4:
    if (ctx->pc == 0x2963F4u) {
        ctx->pc = 0x2963F8u;
        goto label_2963f8;
    }
    ctx->pc = 0x2963F0u;
    {
        const bool branch_taken_0x2963f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2963f0) {
            ctx->pc = 0x2965B0u;
            goto label_2965b0;
        }
    }
    ctx->pc = 0x2963F8u;
label_2963f8:
    // 0x2963f8: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x2963f8u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2963fc:
    // 0x2963fc: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x2963fcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_296400:
    // 0x296400: 0x1000005d  b           . + 4 + (0x5D << 2)
label_296404:
    if (ctx->pc == 0x296404u) {
        ctx->pc = 0x296408u;
        goto label_296408;
    }
    ctx->pc = 0x296400u;
    {
        const bool branch_taken_0x296400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x296400) {
            ctx->pc = 0x296578u;
            goto label_296578;
        }
    }
    ctx->pc = 0x296408u;
label_296408:
    // 0x296408: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x296408u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_29640c:
    // 0x29640c: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x29640cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_296410:
    // 0x296410: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x296410u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_296414:
    // 0x296414: 0x2065fffb  addi        $a1, $v1, -0x5
    ctx->pc = 0x296414u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)4294967291, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
label_296418:
    // 0x296418: 0x2ca1000c  sltiu       $at, $a1, 0xC
    ctx->pc = 0x296418u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
label_29641c:
    // 0x29641c: 0x10200044  beqz        $at, . + 4 + (0x44 << 2)
label_296420:
    if (ctx->pc == 0x296420u) {
        ctx->pc = 0x296424u;
        goto label_296424;
    }
    ctx->pc = 0x29641Cu;
    {
        const bool branch_taken_0x29641c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x29641c) {
            ctx->pc = 0x296530u;
            goto label_296530;
        }
    }
    ctx->pc = 0x296424u;
label_296424:
    // 0x296424: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x296424u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_296428:
    // 0x296428: 0x24641820  addiu       $a0, $v1, 0x1820
    ctx->pc = 0x296428u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 6176));
label_29642c:
    // 0x29642c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x29642cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_296430:
    // 0x296430: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x296430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_296434:
    // 0x296434: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x296434u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_296438:
    // 0x296438: 0x600008  jr          $v1
label_29643c:
    if (ctx->pc == 0x29643Cu) {
        ctx->pc = 0x296440u;
        goto label_296440;
    }
    ctx->pc = 0x296438u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x296438u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x296440u;
label_296440:
    // 0x296440: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x296440u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_296444:
    // 0x296444: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x296444u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_296448:
    // 0x296448: 0x10000039  b           . + 4 + (0x39 << 2)
label_29644c:
    if (ctx->pc == 0x29644Cu) {
        ctx->pc = 0x296450u;
        goto label_296450;
    }
    ctx->pc = 0x296448u;
    {
        const bool branch_taken_0x296448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x296448) {
            ctx->pc = 0x296530u;
            goto label_296530;
        }
    }
    ctx->pc = 0x296450u;
label_296450:
    // 0x296450: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x296450u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_296454:
    // 0x296454: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x296454u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_296458:
    // 0x296458: 0x307600ff  andi        $s6, $v1, 0xFF
    ctx->pc = 0x296458u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_29645c:
    // 0x29645c: 0x72009628  paddub      $s2, $s0, $zero
    ctx->pc = 0x29645cu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_296460:
    // 0x296460: 0x162140  sll         $a0, $s6, 5
    ctx->pc = 0x296460u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 22), 5));
label_296464:
    // 0x296464: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x296464u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
label_296468:
    // 0x296468: 0x24636330  addiu       $v1, $v1, 0x6330
    ctx->pc = 0x296468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25392));
label_29646c:
    // 0x29646c: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x29646cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_296470:
    // 0x296470: 0x1000002f  b           . + 4 + (0x2F << 2)
label_296474:
    if (ctx->pc == 0x296474u) {
        ctx->pc = 0x296478u;
        goto label_296478;
    }
    ctx->pc = 0x296470u;
    {
        const bool branch_taken_0x296470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x296470) {
            ctx->pc = 0x296530u;
            goto label_296530;
        }
    }
    ctx->pc = 0x296478u;
label_296478:
    // 0x296478: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x296478u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_29647c:
    // 0x29647c: 0x72408628  paddub      $s0, $s2, $zero
    ctx->pc = 0x29647cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
label_296480:
    // 0x296480: 0x1000002b  b           . + 4 + (0x2B << 2)
label_296484:
    if (ctx->pc == 0x296484u) {
        ctx->pc = 0x296488u;
        goto label_296488;
    }
    ctx->pc = 0x296480u;
    {
        const bool branch_taken_0x296480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x296480) {
            ctx->pc = 0x296530u;
            goto label_296530;
        }
    }
    ctx->pc = 0x296488u;
label_296488:
    // 0x296488: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x296488u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_29648c:
    // 0x29648c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x29648cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_296490:
    // 0x296490: 0x10000027  b           . + 4 + (0x27 << 2)
label_296494:
    if (ctx->pc == 0x296494u) {
        ctx->pc = 0x296498u;
        goto label_296498;
    }
    ctx->pc = 0x296490u;
    {
        const bool branch_taken_0x296490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x296490) {
            ctx->pc = 0x296530u;
            goto label_296530;
        }
    }
    ctx->pc = 0x296498u;
label_296498:
    // 0x296498: 0x7000be28  paddub      $s7, $zero, $zero
    ctx->pc = 0x296498u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_29649c:
    // 0x29649c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x29649cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_2964a0:
    // 0x2964a0: 0xa06069cc  sb          $zero, 0x69CC($v1)
    ctx->pc = 0x2964a0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 27084), (uint8_t)GPR_U32(ctx, 0));
label_2964a4:
    // 0x2964a4: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x2964a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_2964a8:
    // 0x2964a8: 0xac606998  sw          $zero, 0x6998($v1)
    ctx->pc = 0x2964a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 27032), GPR_U32(ctx, 0));
label_2964ac:
    // 0x2964ac: 0x0  nop
    ctx->pc = 0x2964acu;
    // NOP
label_2964b0:
    // 0x2964b0: 0x7000a628  paddub      $s4, $zero, $zero
    ctx->pc = 0x2964b0u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2964b4:
    // 0x2964b4: 0x2631fffe  addiu       $s1, $s1, -0x2
    ctx->pc = 0x2964b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967294));
label_2964b8:
    // 0x2964b8: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x2964b8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_2964bc:
    // 0x2964bc: 0x1000001c  b           . + 4 + (0x1C << 2)
label_2964c0:
    if (ctx->pc == 0x2964C0u) {
        ctx->pc = 0x2964C4u;
        goto label_2964c4;
    }
    ctx->pc = 0x2964BCu;
    {
        const bool branch_taken_0x2964bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2964bc) {
            ctx->pc = 0x296530u;
            goto label_296530;
        }
    }
    ctx->pc = 0x2964C4u;
label_2964c4:
    // 0x2964c4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2964c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2964c8:
    // 0x2964c8: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x2964c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
label_2964cc:
    // 0x2964cc: 0x10000018  b           . + 4 + (0x18 << 2)
label_2964d0:
    if (ctx->pc == 0x2964D0u) {
        ctx->pc = 0x2964D4u;
        goto label_2964d4;
    }
    ctx->pc = 0x2964CCu;
    {
        const bool branch_taken_0x2964cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2964cc) {
            ctx->pc = 0x296530u;
            goto label_296530;
        }
    }
    ctx->pc = 0x2964D4u;
label_2964d4:
    // 0x2964d4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2964d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2964d8:
    // 0x2964d8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2964d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2964dc:
    // 0x2964dc: 0x10000014  b           . + 4 + (0x14 << 2)
label_2964e0:
    if (ctx->pc == 0x2964E0u) {
        ctx->pc = 0x2964E4u;
        goto label_2964e4;
    }
    ctx->pc = 0x2964DCu;
    {
        const bool branch_taken_0x2964dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2964dc) {
            ctx->pc = 0x296530u;
            goto label_296530;
        }
    }
    ctx->pc = 0x2964E4u;
label_2964e4:
    // 0x2964e4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2964e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2964e8:
    // 0x2964e8: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x2964e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_2964ec:
    // 0x2964ec: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2964ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_2964f0:
    // 0x2964f0: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x2964f0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
label_2964f4:
    // 0x2964f4: 0x3073000f  andi        $s3, $v1, 0xF
    ctx->pc = 0x2964f4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
label_2964f8:
    // 0x2964f8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2964f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2964fc:
    // 0x2964fc: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x2964fcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_296500:
    // 0x296500: 0x1000000b  b           . + 4 + (0xB << 2)
label_296504:
    if (ctx->pc == 0x296504u) {
        ctx->pc = 0x296508u;
        goto label_296508;
    }
    ctx->pc = 0x296500u;
    {
        const bool branch_taken_0x296500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x296500) {
            ctx->pc = 0x296530u;
            goto label_296530;
        }
    }
    ctx->pc = 0x296508u;
label_296508:
    // 0x296508: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x296508u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_29650c:
    // 0x29650c: 0x16600008  bnez        $s3, . + 4 + (0x8 << 2)
label_296510:
    if (ctx->pc == 0x296510u) {
        ctx->pc = 0x296514u;
        goto label_296514;
    }
    ctx->pc = 0x29650Cu;
    {
        const bool branch_taken_0x29650c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x29650c) {
            ctx->pc = 0x296530u;
            goto label_296530;
        }
    }
    ctx->pc = 0x296514u;
label_296514:
    // 0x296514: 0x7000a628  paddub      $s4, $zero, $zero
    ctx->pc = 0x296514u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_296518:
    // 0x296518: 0x2631fffe  addiu       $s1, $s1, -0x2
    ctx->pc = 0x296518u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967294));
label_29651c:
    // 0x29651c: 0x10000004  b           . + 4 + (0x4 << 2)
label_296520:
    if (ctx->pc == 0x296520u) {
        ctx->pc = 0x296524u;
        goto label_296524;
    }
    ctx->pc = 0x29651Cu;
    {
        const bool branch_taken_0x29651c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29651c) {
            ctx->pc = 0x296530u;
            goto label_296530;
        }
    }
    ctx->pc = 0x296524u;
label_296524:
    // 0x296524: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x296524u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_296528:
    // 0x296528: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x296528u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_29652c:
    // 0x29652c: 0x0  nop
    ctx->pc = 0x29652cu;
    // NOP
label_296530:
    // 0x296530: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x296530u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_296534:
    // 0x296534: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x296534u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_296538:
    // 0x296538: 0x24030062  addiu       $v1, $zero, 0x62
    ctx->pc = 0x296538u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 98));
label_29653c:
    // 0x29653c: 0x1083ffb2  beq         $a0, $v1, . + 4 + (-0x4E << 2)
label_296540:
    if (ctx->pc == 0x296540u) {
        ctx->pc = 0x296544u;
        goto label_296544;
    }
    ctx->pc = 0x29653Cu;
    {
        const bool branch_taken_0x29653c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x29653c) {
            ctx->pc = 0x296408u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_296408;
        }
    }
    ctx->pc = 0x296544u;
label_296544:
    // 0x296544: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x296544u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_296548:
    // 0x296548: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x296548u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_29654c:
    // 0x29654c: 0x2863005e  slti        $v1, $v1, 0x5E
    ctx->pc = 0x29654cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)94) ? 1 : 0);
label_296550:
    // 0x296550: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_296554:
    if (ctx->pc == 0x296554u) {
        ctx->pc = 0x296558u;
        goto label_296558;
    }
    ctx->pc = 0x296550u;
    {
        const bool branch_taken_0x296550 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x296550) {
            ctx->pc = 0x296570u;
            goto label_296570;
        }
    }
    ctx->pc = 0x296558u;
label_296558:
    // 0x296558: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x296558u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_29655c:
    // 0x29655c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x29655cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_296560:
    // 0x296560: 0x28610062  slti        $at, $v1, 0x62
    ctx->pc = 0x296560u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)98) ? 1 : 0);
label_296564:
    // 0x296564: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_296568:
    if (ctx->pc == 0x296568u) {
        ctx->pc = 0x29656Cu;
        goto label_29656c;
    }
    ctx->pc = 0x296564u;
    {
        const bool branch_taken_0x296564 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x296564) {
            ctx->pc = 0x296570u;
            goto label_296570;
        }
    }
    ctx->pc = 0x29656Cu;
label_29656c:
    // 0x29656c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x29656cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_296570:
    // 0x296570: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x296570u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
label_296574:
    // 0x296574: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x296574u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_296578:
    // 0x296578: 0x1680ffed  bnez        $s4, . + 4 + (-0x13 << 2)
label_29657c:
    if (ctx->pc == 0x29657Cu) {
        ctx->pc = 0x296580u;
        goto label_296580;
    }
    ctx->pc = 0x296578u;
    {
        const bool branch_taken_0x296578 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x296578) {
            ctx->pc = 0x296530u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_296530;
        }
    }
    ctx->pc = 0x296580u;
label_296580:
    // 0x296580: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x296580u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_296584:
    // 0x296584: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x296584u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_296588:
    // 0x296588: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x296588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_29658c:
    // 0x29658c: 0x906369cd  lbu         $v1, 0x69CD($v1)
    ctx->pc = 0x29658cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 27085)));
label_296590:
    // 0x296590: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x296590u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_296594:
    // 0x296594: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x296594u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_296598:
    // 0x296598: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
label_29659c:
    if (ctx->pc == 0x29659Cu) {
        ctx->pc = 0x2965A0u;
        goto label_2965a0;
    }
    ctx->pc = 0x296598u;
    {
        const bool branch_taken_0x296598 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x296598) {
            ctx->pc = 0x2965B0u;
            goto label_2965b0;
        }
    }
    ctx->pc = 0x2965A0u;
label_2965a0:
    // 0x2965a0: 0x322400ff  andi        $a0, $s1, 0xFF
    ctx->pc = 0x2965a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_2965a4:
    // 0x2965a4: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x2965a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_2965a8:
    // 0x2965a8: 0xa06469cd  sb          $a0, 0x69CD($v1)
    ctx->pc = 0x2965a8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 27085), (uint8_t)GPR_U32(ctx, 4));
label_2965ac:
    // 0x2965ac: 0x0  nop
    ctx->pc = 0x2965acu;
    // NOP
label_2965b0:
    // 0x2965b0: 0x16e0ff91  bnez        $s7, . + 4 + (-0x6F << 2)
label_2965b4:
    if (ctx->pc == 0x2965B4u) {
        ctx->pc = 0x2965B8u;
        goto label_2965b8;
    }
    ctx->pc = 0x2965B0u;
    {
        const bool branch_taken_0x2965b0 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        if (branch_taken_0x2965b0) {
            ctx->pc = 0x2963F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2963f8;
        }
    }
    ctx->pc = 0x2965B8u;
label_2965b8:
    // 0x2965b8: 0x17c00010  bnez        $fp, . + 4 + (0x10 << 2)
label_2965bc:
    if (ctx->pc == 0x2965BCu) {
        ctx->pc = 0x2965C0u;
        goto label_2965c0;
    }
    ctx->pc = 0x2965B8u;
    {
        const bool branch_taken_0x2965b8 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        if (branch_taken_0x2965b8) {
            ctx->pc = 0x2965FCu;
            goto label_2965fc;
        }
    }
    ctx->pc = 0x2965C0u;
label_2965c0:
    // 0x2965c0: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x2965c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_2965c4:
    // 0x2965c4: 0x906369ca  lbu         $v1, 0x69CA($v1)
    ctx->pc = 0x2965c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 27082)));
label_2965c8:
    // 0x2965c8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2965c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_2965cc:
    // 0x2965cc: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x2965ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_2965d0:
    // 0x2965d0: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x2965d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_2965d4:
    // 0x2965d4: 0x906369cd  lbu         $v1, 0x69CD($v1)
    ctx->pc = 0x2965d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 27085)));
label_2965d8:
    // 0x2965d8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2965d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_2965dc:
    // 0x2965dc: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x2965dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_2965e0:
    // 0x2965e0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2965e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2965e4:
    // 0x2965e4: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x2965e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
label_2965e8:
    // 0x2965e8: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x2965e8u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_2965ec:
    // 0x2965ec: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x2965ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_2965f0:
    // 0x2965f0: 0xa46469ac  sh          $a0, 0x69AC($v1)
    ctx->pc = 0x2965f0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 27052), (uint16_t)GPR_U32(ctx, 4));
label_2965f4:
    // 0x2965f4: 0x10000003  b           . + 4 + (0x3 << 2)
label_2965f8:
    if (ctx->pc == 0x2965F8u) {
        ctx->pc = 0x2965FCu;
        goto label_2965fc;
    }
    ctx->pc = 0x2965F4u;
    {
        const bool branch_taken_0x2965f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2965f4) {
            ctx->pc = 0x296604u;
            goto label_296604;
        }
    }
    ctx->pc = 0x2965FCu;
label_2965fc:
    // 0x2965fc: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x2965fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_296600:
    // 0x296600: 0xa46069ac  sh          $zero, 0x69AC($v1)
    ctx->pc = 0x296600u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 27052), (uint16_t)GPR_U32(ctx, 0));
label_296604:
    // 0x296604: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x296604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_296608:
    // 0x296608: 0x906369d0  lbu         $v1, 0x69D0($v1)
    ctx->pc = 0x296608u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 27088)));
label_29660c:
    // 0x29660c: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
label_296610:
    if (ctx->pc == 0x296610u) {
        ctx->pc = 0x296614u;
        goto label_296614;
    }
    ctx->pc = 0x29660Cu;
    {
        const bool branch_taken_0x29660c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29660c) {
            ctx->pc = 0x296648u;
            goto label_296648;
        }
    }
    ctx->pc = 0x296614u;
label_296614:
    // 0x296614: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x296614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_296618:
    // 0x296618: 0x906369cb  lbu         $v1, 0x69CB($v1)
    ctx->pc = 0x296618u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 27083)));
label_29661c:
    // 0x29661c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x29661cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_296620:
    // 0x296620: 0x752023  subu        $a0, $v1, $s5
    ctx->pc = 0x296620u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
label_296624:
    // 0x296624: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x296624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_296628:
    // 0x296628: 0x8c6369d8  lw          $v1, 0x69D8($v1)
    ctx->pc = 0x296628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 27096)));
label_29662c:
    // 0x29662c: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x29662cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_296630:
    // 0x296630: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x296630u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
label_296634:
    // 0x296634: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x296634u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_296638:
    // 0x296638: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x296638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_29663c:
    // 0x29663c: 0xa46469ae  sh          $a0, 0x69AE($v1)
    ctx->pc = 0x29663cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 27054), (uint16_t)GPR_U32(ctx, 4));
label_296640:
    // 0x296640: 0x10000003  b           . + 4 + (0x3 << 2)
label_296644:
    if (ctx->pc == 0x296644u) {
        ctx->pc = 0x296648u;
        goto label_296648;
    }
    ctx->pc = 0x296640u;
    {
        const bool branch_taken_0x296640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x296640) {
            ctx->pc = 0x296650u;
            goto label_296650;
        }
    }
    ctx->pc = 0x296648u;
label_296648:
    // 0x296648: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x296648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_29664c:
    // 0x29664c: 0xa46069ae  sh          $zero, 0x69AE($v1)
    ctx->pc = 0x29664cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 27054), (uint16_t)GPR_U32(ctx, 0));
label_296650:
    // 0x296650: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x296650u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_296654:
    // 0x296654: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x296654u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_296658:
    // 0x296658: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x296658u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_29665c:
    // 0x29665c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x29665cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_296660:
    // 0x296660: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x296660u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_296664:
    // 0x296664: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x296664u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_296668:
    // 0x296668: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x296668u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_29666c:
    // 0x29666c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x29666cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_296670:
    // 0x296670: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x296670u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_296674:
    // 0x296674: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x296674u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_296678:
    // 0x296678: 0x3e00008  jr          $ra
label_29667c:
    if (ctx->pc == 0x29667Cu) {
        ctx->pc = 0x296680u;
        goto label_fallthrough_0x296678;
    }
    ctx->pc = 0x296678u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x296678u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x296678:
    ctx->pc = 0x296680u;
}
