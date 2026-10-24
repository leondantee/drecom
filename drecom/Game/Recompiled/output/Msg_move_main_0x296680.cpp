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

// Function: Msg_move_main
// Address: 0x296680 - 0x296a84
void Msg_move_main_0x296680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Msg_move_main_0x296680");
#endif

    switch (ctx->pc) {
        case 0x296680u: goto label_296680;
        case 0x296684u: goto label_296684;
        case 0x296688u: goto label_296688;
        case 0x29668cu: goto label_29668c;
        case 0x296690u: goto label_296690;
        case 0x296694u: goto label_296694;
        case 0x296698u: goto label_296698;
        case 0x29669cu: goto label_29669c;
        case 0x2966a0u: goto label_2966a0;
        case 0x2966a4u: goto label_2966a4;
        case 0x2966a8u: goto label_2966a8;
        case 0x2966acu: goto label_2966ac;
        case 0x2966b0u: goto label_2966b0;
        case 0x2966b4u: goto label_2966b4;
        case 0x2966b8u: goto label_2966b8;
        case 0x2966bcu: goto label_2966bc;
        case 0x2966c0u: goto label_2966c0;
        case 0x2966c4u: goto label_2966c4;
        case 0x2966c8u: goto label_2966c8;
        case 0x2966ccu: goto label_2966cc;
        case 0x2966d0u: goto label_2966d0;
        case 0x2966d4u: goto label_2966d4;
        case 0x2966d8u: goto label_2966d8;
        case 0x2966dcu: goto label_2966dc;
        case 0x2966e0u: goto label_2966e0;
        case 0x2966e4u: goto label_2966e4;
        case 0x2966e8u: goto label_2966e8;
        case 0x2966ecu: goto label_2966ec;
        case 0x2966f0u: goto label_2966f0;
        case 0x2966f4u: goto label_2966f4;
        case 0x2966f8u: goto label_2966f8;
        case 0x2966fcu: goto label_2966fc;
        case 0x296700u: goto label_296700;
        case 0x296704u: goto label_296704;
        case 0x296708u: goto label_296708;
        case 0x29670cu: goto label_29670c;
        case 0x296710u: goto label_296710;
        case 0x296714u: goto label_296714;
        case 0x296718u: goto label_296718;
        case 0x29671cu: goto label_29671c;
        case 0x296720u: goto label_296720;
        case 0x296724u: goto label_296724;
        case 0x296728u: goto label_296728;
        case 0x29672cu: goto label_29672c;
        case 0x296730u: goto label_296730;
        case 0x296734u: goto label_296734;
        case 0x296738u: goto label_296738;
        case 0x29673cu: goto label_29673c;
        case 0x296740u: goto label_296740;
        case 0x296744u: goto label_296744;
        case 0x296748u: goto label_296748;
        case 0x29674cu: goto label_29674c;
        case 0x296750u: goto label_296750;
        case 0x296754u: goto label_296754;
        case 0x296758u: goto label_296758;
        case 0x29675cu: goto label_29675c;
        case 0x296760u: goto label_296760;
        case 0x296764u: goto label_296764;
        case 0x296768u: goto label_296768;
        case 0x29676cu: goto label_29676c;
        case 0x296770u: goto label_296770;
        case 0x296774u: goto label_296774;
        case 0x296778u: goto label_296778;
        case 0x29677cu: goto label_29677c;
        case 0x296780u: goto label_296780;
        case 0x296784u: goto label_296784;
        case 0x296788u: goto label_296788;
        case 0x29678cu: goto label_29678c;
        case 0x296790u: goto label_296790;
        case 0x296794u: goto label_296794;
        case 0x296798u: goto label_296798;
        case 0x29679cu: goto label_29679c;
        case 0x2967a0u: goto label_2967a0;
        case 0x2967a4u: goto label_2967a4;
        case 0x2967a8u: goto label_2967a8;
        case 0x2967acu: goto label_2967ac;
        case 0x2967b0u: goto label_2967b0;
        case 0x2967b4u: goto label_2967b4;
        case 0x2967b8u: goto label_2967b8;
        case 0x2967bcu: goto label_2967bc;
        case 0x2967c0u: goto label_2967c0;
        case 0x2967c4u: goto label_2967c4;
        case 0x2967c8u: goto label_2967c8;
        case 0x2967ccu: goto label_2967cc;
        case 0x2967d0u: goto label_2967d0;
        case 0x2967d4u: goto label_2967d4;
        case 0x2967d8u: goto label_2967d8;
        case 0x2967dcu: goto label_2967dc;
        case 0x2967e0u: goto label_2967e0;
        case 0x2967e4u: goto label_2967e4;
        case 0x2967e8u: goto label_2967e8;
        case 0x2967ecu: goto label_2967ec;
        case 0x2967f0u: goto label_2967f0;
        case 0x2967f4u: goto label_2967f4;
        case 0x2967f8u: goto label_2967f8;
        case 0x2967fcu: goto label_2967fc;
        case 0x296800u: goto label_296800;
        case 0x296804u: goto label_296804;
        case 0x296808u: goto label_296808;
        case 0x29680cu: goto label_29680c;
        case 0x296810u: goto label_296810;
        case 0x296814u: goto label_296814;
        case 0x296818u: goto label_296818;
        case 0x29681cu: goto label_29681c;
        case 0x296820u: goto label_296820;
        case 0x296824u: goto label_296824;
        case 0x296828u: goto label_296828;
        case 0x29682cu: goto label_29682c;
        case 0x296830u: goto label_296830;
        case 0x296834u: goto label_296834;
        case 0x296838u: goto label_296838;
        case 0x29683cu: goto label_29683c;
        case 0x296840u: goto label_296840;
        case 0x296844u: goto label_296844;
        case 0x296848u: goto label_296848;
        case 0x29684cu: goto label_29684c;
        case 0x296850u: goto label_296850;
        case 0x296854u: goto label_296854;
        case 0x296858u: goto label_296858;
        case 0x29685cu: goto label_29685c;
        case 0x296860u: goto label_296860;
        case 0x296864u: goto label_296864;
        case 0x296868u: goto label_296868;
        case 0x29686cu: goto label_29686c;
        case 0x296870u: goto label_296870;
        case 0x296874u: goto label_296874;
        case 0x296878u: goto label_296878;
        case 0x29687cu: goto label_29687c;
        case 0x296880u: goto label_296880;
        case 0x296884u: goto label_296884;
        case 0x296888u: goto label_296888;
        case 0x29688cu: goto label_29688c;
        case 0x296890u: goto label_296890;
        case 0x296894u: goto label_296894;
        case 0x296898u: goto label_296898;
        case 0x29689cu: goto label_29689c;
        case 0x2968a0u: goto label_2968a0;
        case 0x2968a4u: goto label_2968a4;
        case 0x2968a8u: goto label_2968a8;
        case 0x2968acu: goto label_2968ac;
        case 0x2968b0u: goto label_2968b0;
        case 0x2968b4u: goto label_2968b4;
        case 0x2968b8u: goto label_2968b8;
        case 0x2968bcu: goto label_2968bc;
        case 0x2968c0u: goto label_2968c0;
        case 0x2968c4u: goto label_2968c4;
        case 0x2968c8u: goto label_2968c8;
        case 0x2968ccu: goto label_2968cc;
        case 0x2968d0u: goto label_2968d0;
        case 0x2968d4u: goto label_2968d4;
        case 0x2968d8u: goto label_2968d8;
        case 0x2968dcu: goto label_2968dc;
        case 0x2968e0u: goto label_2968e0;
        case 0x2968e4u: goto label_2968e4;
        case 0x2968e8u: goto label_2968e8;
        case 0x2968ecu: goto label_2968ec;
        case 0x2968f0u: goto label_2968f0;
        case 0x2968f4u: goto label_2968f4;
        case 0x2968f8u: goto label_2968f8;
        case 0x2968fcu: goto label_2968fc;
        case 0x296900u: goto label_296900;
        case 0x296904u: goto label_296904;
        case 0x296908u: goto label_296908;
        case 0x29690cu: goto label_29690c;
        case 0x296910u: goto label_296910;
        case 0x296914u: goto label_296914;
        case 0x296918u: goto label_296918;
        case 0x29691cu: goto label_29691c;
        case 0x296920u: goto label_296920;
        case 0x296924u: goto label_296924;
        case 0x296928u: goto label_296928;
        case 0x29692cu: goto label_29692c;
        case 0x296930u: goto label_296930;
        case 0x296934u: goto label_296934;
        case 0x296938u: goto label_296938;
        case 0x29693cu: goto label_29693c;
        case 0x296940u: goto label_296940;
        case 0x296944u: goto label_296944;
        case 0x296948u: goto label_296948;
        case 0x29694cu: goto label_29694c;
        case 0x296950u: goto label_296950;
        case 0x296954u: goto label_296954;
        case 0x296958u: goto label_296958;
        case 0x29695cu: goto label_29695c;
        case 0x296960u: goto label_296960;
        case 0x296964u: goto label_296964;
        case 0x296968u: goto label_296968;
        case 0x29696cu: goto label_29696c;
        case 0x296970u: goto label_296970;
        case 0x296974u: goto label_296974;
        case 0x296978u: goto label_296978;
        case 0x29697cu: goto label_29697c;
        case 0x296980u: goto label_296980;
        case 0x296984u: goto label_296984;
        case 0x296988u: goto label_296988;
        case 0x29698cu: goto label_29698c;
        case 0x296990u: goto label_296990;
        case 0x296994u: goto label_296994;
        case 0x296998u: goto label_296998;
        case 0x29699cu: goto label_29699c;
        case 0x2969a0u: goto label_2969a0;
        case 0x2969a4u: goto label_2969a4;
        case 0x2969a8u: goto label_2969a8;
        case 0x2969acu: goto label_2969ac;
        case 0x2969b0u: goto label_2969b0;
        case 0x2969b4u: goto label_2969b4;
        case 0x2969b8u: goto label_2969b8;
        case 0x2969bcu: goto label_2969bc;
        case 0x2969c0u: goto label_2969c0;
        case 0x2969c4u: goto label_2969c4;
        case 0x2969c8u: goto label_2969c8;
        case 0x2969ccu: goto label_2969cc;
        case 0x2969d0u: goto label_2969d0;
        case 0x2969d4u: goto label_2969d4;
        case 0x2969d8u: goto label_2969d8;
        case 0x2969dcu: goto label_2969dc;
        case 0x2969e0u: goto label_2969e0;
        case 0x2969e4u: goto label_2969e4;
        case 0x2969e8u: goto label_2969e8;
        case 0x2969ecu: goto label_2969ec;
        case 0x2969f0u: goto label_2969f0;
        case 0x2969f4u: goto label_2969f4;
        case 0x2969f8u: goto label_2969f8;
        case 0x2969fcu: goto label_2969fc;
        case 0x296a00u: goto label_296a00;
        case 0x296a04u: goto label_296a04;
        case 0x296a08u: goto label_296a08;
        case 0x296a0cu: goto label_296a0c;
        case 0x296a10u: goto label_296a10;
        case 0x296a14u: goto label_296a14;
        case 0x296a18u: goto label_296a18;
        case 0x296a1cu: goto label_296a1c;
        case 0x296a20u: goto label_296a20;
        case 0x296a24u: goto label_296a24;
        case 0x296a28u: goto label_296a28;
        case 0x296a2cu: goto label_296a2c;
        case 0x296a30u: goto label_296a30;
        case 0x296a34u: goto label_296a34;
        case 0x296a38u: goto label_296a38;
        case 0x296a3cu: goto label_296a3c;
        case 0x296a40u: goto label_296a40;
        case 0x296a44u: goto label_296a44;
        case 0x296a48u: goto label_296a48;
        case 0x296a4cu: goto label_296a4c;
        case 0x296a50u: goto label_296a50;
        case 0x296a54u: goto label_296a54;
        case 0x296a58u: goto label_296a58;
        case 0x296a5cu: goto label_296a5c;
        case 0x296a60u: goto label_296a60;
        case 0x296a64u: goto label_296a64;
        case 0x296a68u: goto label_296a68;
        case 0x296a6cu: goto label_296a6c;
        case 0x296a70u: goto label_296a70;
        case 0x296a74u: goto label_296a74;
        case 0x296a78u: goto label_296a78;
        case 0x296a7cu: goto label_296a7c;
        case 0x296a80u: goto label_296a80;
        default: break;
    }

    ctx->pc = 0x296680u;

label_296680:
    // 0x296680: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x296680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_296684:
    // 0x296684: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x296684u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
label_296688:
    // 0x296688: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x296688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_29668c:
    // 0x29668c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29668cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_296690:
    // 0x296690: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x296690u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
label_296694:
    // 0x296694: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x296694u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_296698:
    // 0x296698: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x296698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_29669c:
    // 0x29669c: 0x906369cc  lbu         $v1, 0x69CC($v1)
    ctx->pc = 0x29669cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 27084)));
label_2966a0:
    // 0x2966a0: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_2966a4:
    if (ctx->pc == 0x2966A4u) {
        ctx->pc = 0x2966A8u;
        goto label_2966a8;
    }
    ctx->pc = 0x2966A0u;
    {
        const bool branch_taken_0x2966a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2966a0) {
            ctx->pc = 0x2966B4u;
            goto label_2966b4;
        }
    }
    ctx->pc = 0x2966A8u;
label_2966a8:
    // 0x2966a8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2966a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2966ac:
    // 0x2966ac: 0xc0a58ec  jal         func_2963B0
label_2966b0:
    if (ctx->pc == 0x2966B0u) {
        ctx->pc = 0x2966B4u;
        goto label_2966b4;
    }
    ctx->pc = 0x2966ACu;
    SET_GPR_U32(ctx, 31, 0x2966B4u);
    ctx->pc = 0x2963B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2963B0u, 0x2966ACu, 0x2966B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2966B4u;
label_2966b4:
    // 0x2966b4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2966b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2966b8:
    // 0x2966b8: 0x8c636998  lw          $v1, 0x6998($v1)
    ctx->pc = 0x2966b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 27032)));
label_2966bc:
    // 0x2966bc: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_2966c0:
    if (ctx->pc == 0x2966C0u) {
        ctx->pc = 0x2966C4u;
        goto label_2966c4;
    }
    ctx->pc = 0x2966BCu;
    {
        const bool branch_taken_0x2966bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2966bc) {
            ctx->pc = 0x2966D4u;
            goto label_2966d4;
        }
    }
    ctx->pc = 0x2966C4u;
label_2966c4:
    // 0x2966c4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2966c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2966c8:
    // 0x2966c8: 0x8c63699c  lw          $v1, 0x699C($v1)
    ctx->pc = 0x2966c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 27036)));
label_2966cc:
    // 0x2966cc: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_2966d0:
    if (ctx->pc == 0x2966D0u) {
        ctx->pc = 0x2966D4u;
        goto label_2966d4;
    }
    ctx->pc = 0x2966CCu;
    {
        const bool branch_taken_0x2966cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2966cc) {
            ctx->pc = 0x2966E0u;
            goto label_2966e0;
        }
    }
    ctx->pc = 0x2966D4u;
label_2966d4:
    // 0x2966d4: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2966d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2966d8:
    // 0x2966d8: 0x100000d7  b           . + 4 + (0xD7 << 2)
label_2966dc:
    if (ctx->pc == 0x2966DCu) {
        ctx->pc = 0x2966E0u;
        goto label_2966e0;
    }
    ctx->pc = 0x2966D8u;
    {
        const bool branch_taken_0x2966d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2966d8) {
            ctx->pc = 0x296A38u;
            goto label_296a38;
        }
    }
    ctx->pc = 0x2966E0u;
label_2966e0:
    // 0x2966e0: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x2966e0u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2966e4:
    // 0x2966e4: 0x100000d4  b           . + 4 + (0xD4 << 2)
label_2966e8:
    if (ctx->pc == 0x2966E8u) {
        ctx->pc = 0x2966ECu;
        goto label_2966ec;
    }
    ctx->pc = 0x2966E4u;
    {
        const bool branch_taken_0x2966e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2966e4) {
            ctx->pc = 0x296A38u;
            goto label_296a38;
        }
    }
    ctx->pc = 0x2966ECu;
label_2966ec:
    // 0x2966ec: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2966ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2966f0:
    // 0x2966f0: 0x8c8369b4  lw          $v1, 0x69B4($a0)
    ctx->pc = 0x2966f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 27060)));
label_2966f4:
    // 0x2966f4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2966f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2966f8:
    // 0x2966f8: 0xac8369b4  sw          $v1, 0x69B4($a0)
    ctx->pc = 0x2966f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 27060), GPR_U32(ctx, 3));
label_2966fc:
    // 0x2966fc: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x2966fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_296700:
    // 0x296700: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x296700u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_296704:
    // 0x296704: 0x2065fffb  addi        $a1, $v1, -0x5
    ctx->pc = 0x296704u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)4294967291, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
label_296708:
    // 0x296708: 0x2ca1000c  sltiu       $at, $a1, 0xC
    ctx->pc = 0x296708u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
label_29670c:
    // 0x29670c: 0x1020009a  beqz        $at, . + 4 + (0x9A << 2)
label_296710:
    if (ctx->pc == 0x296710u) {
        ctx->pc = 0x296714u;
        goto label_296714;
    }
    ctx->pc = 0x29670Cu;
    {
        const bool branch_taken_0x29670c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x29670c) {
            ctx->pc = 0x296978u;
            goto label_296978;
        }
    }
    ctx->pc = 0x296714u;
label_296714:
    // 0x296714: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x296714u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_296718:
    // 0x296718: 0x24641850  addiu       $a0, $v1, 0x1850
    ctx->pc = 0x296718u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 6224));
label_29671c:
    // 0x29671c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x29671cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_296720:
    // 0x296720: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x296720u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_296724:
    // 0x296724: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x296724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_296728:
    // 0x296728: 0x600008  jr          $v1
label_29672c:
    if (ctx->pc == 0x29672Cu) {
        ctx->pc = 0x296730u;
        goto label_296730;
    }
    ctx->pc = 0x296728u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x296728u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x296730u;
label_296730:
    // 0x296730: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x296730u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_296734:
    // 0x296734: 0x8c8369b4  lw          $v1, 0x69B4($a0)
    ctx->pc = 0x296734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 27060)));
label_296738:
    // 0x296738: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x296738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_29673c:
    // 0x29673c: 0xac8369b4  sw          $v1, 0x69B4($a0)
    ctx->pc = 0x29673cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 27060), GPR_U32(ctx, 3));
label_296740:
    // 0x296740: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x296740u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_296744:
    // 0x296744: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x296744u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_296748:
    // 0x296748: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x296748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_29674c:
    // 0x29674c: 0xac64699c  sw          $a0, 0x699C($v1)
    ctx->pc = 0x29674cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 27036), GPR_U32(ctx, 4));
label_296750:
    // 0x296750: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x296750u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_296754:
    // 0x296754: 0x8c8369b4  lw          $v1, 0x69B4($a0)
    ctx->pc = 0x296754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 27060)));
label_296758:
    // 0x296758: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x296758u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_29675c:
    // 0x29675c: 0xac8369b4  sw          $v1, 0x69B4($a0)
    ctx->pc = 0x29675cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 27060), GPR_U32(ctx, 3));
label_296760:
    // 0x296760: 0x10000085  b           . + 4 + (0x85 << 2)
label_296764:
    if (ctx->pc == 0x296764u) {
        ctx->pc = 0x296768u;
        goto label_296768;
    }
    ctx->pc = 0x296760u;
    {
        const bool branch_taken_0x296760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x296760) {
            ctx->pc = 0x296978u;
            goto label_296978;
        }
    }
    ctx->pc = 0x296768u;
label_296768:
    // 0x296768: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x296768u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_29676c:
    // 0x29676c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x29676cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_296770:
    // 0x296770: 0xa06469c9  sb          $a0, 0x69C9($v1)
    ctx->pc = 0x296770u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 27081), (uint8_t)GPR_U32(ctx, 4));
label_296774:
    // 0x296774: 0x100000bd  b           . + 4 + (0xBD << 2)
label_296778:
    if (ctx->pc == 0x296778u) {
        ctx->pc = 0x29677Cu;
        goto label_29677c;
    }
    ctx->pc = 0x296774u;
    {
        const bool branch_taken_0x296774 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x296774) {
            ctx->pc = 0x296A6Cu;
            goto label_296a6c;
        }
    }
    ctx->pc = 0x29677Cu;
label_29677c:
    // 0x29677c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x29677cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_296780:
    // 0x296780: 0x8c8369b4  lw          $v1, 0x69B4($a0)
    ctx->pc = 0x296780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 27060)));
label_296784:
    // 0x296784: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x296784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_296788:
    // 0x296788: 0xac8369b4  sw          $v1, 0x69B4($a0)
    ctx->pc = 0x296788u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 27060), GPR_U32(ctx, 3));
label_29678c:
    // 0x29678c: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x29678cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_296790:
    // 0x296790: 0x307000ff  andi        $s0, $v1, 0xFF
    ctx->pc = 0x296790u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_296794:
    // 0x296794: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x296794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_296798:
    // 0x296798: 0x8c6469b4  lw          $a0, 0x69B4($v1)
    ctx->pc = 0x296798u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 27060)));
label_29679c:
    // 0x29679c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x29679cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2967a0:
    // 0x2967a0: 0xac6469b8  sw          $a0, 0x69B8($v1)
    ctx->pc = 0x2967a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 27064), GPR_U32(ctx, 4));
label_2967a4:
    // 0x2967a4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2967a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2967a8:
    // 0x2967a8: 0x8c8369b8  lw          $v1, 0x69B8($a0)
    ctx->pc = 0x2967a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 27064)));
label_2967ac:
    // 0x2967ac: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2967acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2967b0:
    // 0x2967b0: 0xac8369b8  sw          $v1, 0x69B8($a0)
    ctx->pc = 0x2967b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 27064), GPR_U32(ctx, 3));
label_2967b4:
    // 0x2967b4: 0x102140  sll         $a0, $s0, 5
    ctx->pc = 0x2967b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
label_2967b8:
    // 0x2967b8: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x2967b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
label_2967bc:
    // 0x2967bc: 0x24636330  addiu       $v1, $v1, 0x6330
    ctx->pc = 0x2967bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25392));
label_2967c0:
    // 0x2967c0: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x2967c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2967c4:
    // 0x2967c4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2967c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2967c8:
    // 0x2967c8: 0xac6469b4  sw          $a0, 0x69B4($v1)
    ctx->pc = 0x2967c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 27060), GPR_U32(ctx, 4));
label_2967cc:
    // 0x2967cc: 0x1000006a  b           . + 4 + (0x6A << 2)
label_2967d0:
    if (ctx->pc == 0x2967D0u) {
        ctx->pc = 0x2967D4u;
        goto label_2967d4;
    }
    ctx->pc = 0x2967CCu;
    {
        const bool branch_taken_0x2967cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2967cc) {
            ctx->pc = 0x296978u;
            goto label_296978;
        }
    }
    ctx->pc = 0x2967D4u;
label_2967d4:
    // 0x2967d4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2967d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2967d8:
    // 0x2967d8: 0x8c6469b8  lw          $a0, 0x69B8($v1)
    ctx->pc = 0x2967d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 27064)));
label_2967dc:
    // 0x2967dc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2967dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2967e0:
    // 0x2967e0: 0xac6469b4  sw          $a0, 0x69B4($v1)
    ctx->pc = 0x2967e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 27060), GPR_U32(ctx, 4));
label_2967e4:
    // 0x2967e4: 0x10000064  b           . + 4 + (0x64 << 2)
label_2967e8:
    if (ctx->pc == 0x2967E8u) {
        ctx->pc = 0x2967ECu;
        goto label_2967ec;
    }
    ctx->pc = 0x2967E4u;
    {
        const bool branch_taken_0x2967e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2967e4) {
            ctx->pc = 0x296978u;
            goto label_296978;
        }
    }
    ctx->pc = 0x2967ECu;
label_2967ec:
    // 0x2967ec: 0x24060062  addiu       $a2, $zero, 0x62
    ctx->pc = 0x2967ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 98));
label_2967f0:
    // 0x2967f0: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x2967f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2967f4:
    // 0x2967f4: 0x8ca469c0  lw          $a0, 0x69C0($a1)
    ctx->pc = 0x2967f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 27072)));
label_2967f8:
    // 0x2967f8: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x2967f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_2967fc:
    // 0x2967fc: 0xaca369c0  sw          $v1, 0x69C0($a1)
    ctx->pc = 0x2967fcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 27072), GPR_U32(ctx, 3));
label_296800:
    // 0x296800: 0xa0860000  sb          $a2, 0x0($a0)
    ctx->pc = 0x296800u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 6));
label_296804:
    // 0x296804: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x296804u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_296808:
    // 0x296808: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x296808u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_29680c:
    // 0x29680c: 0x8ca469c0  lw          $a0, 0x69C0($a1)
    ctx->pc = 0x29680cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 27072)));
label_296810:
    // 0x296810: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x296810u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_296814:
    // 0x296814: 0xaca369c0  sw          $v1, 0x69C0($a1)
    ctx->pc = 0x296814u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 27072), GPR_U32(ctx, 3));
label_296818:
    // 0x296818: 0xa0860000  sb          $a2, 0x0($a0)
    ctx->pc = 0x296818u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 6));
label_29681c:
    // 0x29681c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x29681cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_296820:
    // 0x296820: 0x8c8369b4  lw          $v1, 0x69B4($a0)
    ctx->pc = 0x296820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 27060)));
label_296824:
    // 0x296824: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x296824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_296828:
    // 0x296828: 0xac8369b4  sw          $v1, 0x69B4($a0)
    ctx->pc = 0x296828u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 27060), GPR_U32(ctx, 3));
label_29682c:
    // 0x29682c: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x29682cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_296830:
    // 0x296830: 0x8ca469b4  lw          $a0, 0x69B4($a1)
    ctx->pc = 0x296830u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 27060)));
label_296834:
    // 0x296834: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x296834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_296838:
    // 0x296838: 0xaca369b4  sw          $v1, 0x69B4($a1)
    ctx->pc = 0x296838u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 27060), GPR_U32(ctx, 3));
label_29683c:
    // 0x29683c: 0x90860000  lbu         $a2, 0x0($a0)
    ctx->pc = 0x29683cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_296840:
    // 0x296840: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x296840u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_296844:
    // 0x296844: 0x8ca469c0  lw          $a0, 0x69C0($a1)
    ctx->pc = 0x296844u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 27072)));
label_296848:
    // 0x296848: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x296848u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_29684c:
    // 0x29684c: 0xaca369c0  sw          $v1, 0x69C0($a1)
    ctx->pc = 0x29684cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 27072), GPR_U32(ctx, 3));
label_296850:
    // 0x296850: 0xa0860000  sb          $a2, 0x0($a0)
    ctx->pc = 0x296850u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 6));
label_296854:
    // 0x296854: 0x10000048  b           . + 4 + (0x48 << 2)
label_296858:
    if (ctx->pc == 0x296858u) {
        ctx->pc = 0x29685Cu;
        goto label_29685c;
    }
    ctx->pc = 0x296854u;
    {
        const bool branch_taken_0x296854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x296854) {
            ctx->pc = 0x296978u;
            goto label_296978;
        }
    }
    ctx->pc = 0x29685Cu;
label_29685c:
    // 0x29685c: 0x24060062  addiu       $a2, $zero, 0x62
    ctx->pc = 0x29685cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 98));
label_296860:
    // 0x296860: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x296860u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_296864:
    // 0x296864: 0x8ca469c0  lw          $a0, 0x69C0($a1)
    ctx->pc = 0x296864u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 27072)));
label_296868:
    // 0x296868: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x296868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_29686c:
    // 0x29686c: 0xaca369c0  sw          $v1, 0x69C0($a1)
    ctx->pc = 0x29686cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 27072), GPR_U32(ctx, 3));
label_296870:
    // 0x296870: 0xa0860000  sb          $a2, 0x0($a0)
    ctx->pc = 0x296870u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 6));
label_296874:
    // 0x296874: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x296874u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_296878:
    // 0x296878: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x296878u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_29687c:
    // 0x29687c: 0x8ca469c0  lw          $a0, 0x69C0($a1)
    ctx->pc = 0x29687cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 27072)));
label_296880:
    // 0x296880: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x296880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_296884:
    // 0x296884: 0xaca369c0  sw          $v1, 0x69C0($a1)
    ctx->pc = 0x296884u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 27072), GPR_U32(ctx, 3));
label_296888:
    // 0x296888: 0xa0860000  sb          $a2, 0x0($a0)
    ctx->pc = 0x296888u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 6));
label_29688c:
    // 0x29688c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x29688cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_296890:
    // 0x296890: 0x8c8369b4  lw          $v1, 0x69B4($a0)
    ctx->pc = 0x296890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 27060)));
label_296894:
    // 0x296894: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x296894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_296898:
    // 0x296898: 0xac8369b4  sw          $v1, 0x69B4($a0)
    ctx->pc = 0x296898u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 27060), GPR_U32(ctx, 3));
label_29689c:
    // 0x29689c: 0x10000036  b           . + 4 + (0x36 << 2)
label_2968a0:
    if (ctx->pc == 0x2968A0u) {
        ctx->pc = 0x2968A4u;
        goto label_2968a4;
    }
    ctx->pc = 0x29689Cu;
    {
        const bool branch_taken_0x29689c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29689c) {
            ctx->pc = 0x296978u;
            goto label_296978;
        }
    }
    ctx->pc = 0x2968A4u;
label_2968a4:
    // 0x2968a4: 0x24060062  addiu       $a2, $zero, 0x62
    ctx->pc = 0x2968a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 98));
label_2968a8:
    // 0x2968a8: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x2968a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2968ac:
    // 0x2968ac: 0x8ca469c0  lw          $a0, 0x69C0($a1)
    ctx->pc = 0x2968acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 27072)));
label_2968b0:
    // 0x2968b0: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x2968b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_2968b4:
    // 0x2968b4: 0xaca369c0  sw          $v1, 0x69C0($a1)
    ctx->pc = 0x2968b4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 27072), GPR_U32(ctx, 3));
label_2968b8:
    // 0x2968b8: 0xa0860000  sb          $a2, 0x0($a0)
    ctx->pc = 0x2968b8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 6));
label_2968bc:
    // 0x2968bc: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x2968bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2968c0:
    // 0x2968c0: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x2968c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2968c4:
    // 0x2968c4: 0x8ca469c0  lw          $a0, 0x69C0($a1)
    ctx->pc = 0x2968c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 27072)));
label_2968c8:
    // 0x2968c8: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x2968c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_2968cc:
    // 0x2968cc: 0xaca369c0  sw          $v1, 0x69C0($a1)
    ctx->pc = 0x2968ccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 27072), GPR_U32(ctx, 3));
label_2968d0:
    // 0x2968d0: 0xa0860000  sb          $a2, 0x0($a0)
    ctx->pc = 0x2968d0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 6));
label_2968d4:
    // 0x2968d4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2968d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2968d8:
    // 0x2968d8: 0x8c8369b4  lw          $v1, 0x69B4($a0)
    ctx->pc = 0x2968d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 27060)));
label_2968dc:
    // 0x2968dc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2968dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2968e0:
    // 0x2968e0: 0xac8369b4  sw          $v1, 0x69B4($a0)
    ctx->pc = 0x2968e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 27060), GPR_U32(ctx, 3));
label_2968e4:
    // 0x2968e4: 0x10000024  b           . + 4 + (0x24 << 2)
label_2968e8:
    if (ctx->pc == 0x2968E8u) {
        ctx->pc = 0x2968ECu;
        goto label_2968ec;
    }
    ctx->pc = 0x2968E4u;
    {
        const bool branch_taken_0x2968e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2968e4) {
            ctx->pc = 0x296978u;
            goto label_296978;
        }
    }
    ctx->pc = 0x2968ECu;
label_2968ec:
    // 0x2968ec: 0x24060062  addiu       $a2, $zero, 0x62
    ctx->pc = 0x2968ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 98));
label_2968f0:
    // 0x2968f0: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x2968f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2968f4:
    // 0x2968f4: 0x8ca469c0  lw          $a0, 0x69C0($a1)
    ctx->pc = 0x2968f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 27072)));
label_2968f8:
    // 0x2968f8: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x2968f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_2968fc:
    // 0x2968fc: 0xaca369c0  sw          $v1, 0x69C0($a1)
    ctx->pc = 0x2968fcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 27072), GPR_U32(ctx, 3));
label_296900:
    // 0x296900: 0xa0860000  sb          $a2, 0x0($a0)
    ctx->pc = 0x296900u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 6));
label_296904:
    // 0x296904: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x296904u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_296908:
    // 0x296908: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x296908u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_29690c:
    // 0x29690c: 0x8ca469c0  lw          $a0, 0x69C0($a1)
    ctx->pc = 0x29690cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 27072)));
label_296910:
    // 0x296910: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x296910u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_296914:
    // 0x296914: 0xaca369c0  sw          $v1, 0x69C0($a1)
    ctx->pc = 0x296914u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 27072), GPR_U32(ctx, 3));
label_296918:
    // 0x296918: 0xa0860000  sb          $a2, 0x0($a0)
    ctx->pc = 0x296918u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 6));
label_29691c:
    // 0x29691c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x29691cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_296920:
    // 0x296920: 0x8c8369b4  lw          $v1, 0x69B4($a0)
    ctx->pc = 0x296920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 27060)));
label_296924:
    // 0x296924: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x296924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_296928:
    // 0x296928: 0xac8369b4  sw          $v1, 0x69B4($a0)
    ctx->pc = 0x296928u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 27060), GPR_U32(ctx, 3));
label_29692c:
    // 0x29692c: 0x10000012  b           . + 4 + (0x12 << 2)
label_296930:
    if (ctx->pc == 0x296930u) {
        ctx->pc = 0x296934u;
        goto label_296934;
    }
    ctx->pc = 0x29692Cu;
    {
        const bool branch_taken_0x29692c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29692c) {
            ctx->pc = 0x296978u;
            goto label_296978;
        }
    }
    ctx->pc = 0x296934u;
label_296934:
    // 0x296934: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x296934u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_296938:
    // 0x296938: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x296938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_29693c:
    // 0x29693c: 0xa06469c9  sb          $a0, 0x69C9($v1)
    ctx->pc = 0x29693cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 27081), (uint8_t)GPR_U32(ctx, 4));
label_296940:
    // 0x296940: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x296940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_296944:
    // 0x296944: 0x8c6469b4  lw          $a0, 0x69B4($v1)
    ctx->pc = 0x296944u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 27060)));
label_296948:
    // 0x296948: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x296948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_29694c:
    // 0x29694c: 0xac6469b8  sw          $a0, 0x69B8($v1)
    ctx->pc = 0x29694cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 27064), GPR_U32(ctx, 4));
label_296950:
    // 0x296950: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x296950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_296954:
    // 0x296954: 0x8c6469c0  lw          $a0, 0x69C0($v1)
    ctx->pc = 0x296954u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 27072)));
label_296958:
    // 0x296958: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x296958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_29695c:
    // 0x29695c: 0xac6469c4  sw          $a0, 0x69C4($v1)
    ctx->pc = 0x29695cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 27076), GPR_U32(ctx, 4));
label_296960:
    // 0x296960: 0x10000042  b           . + 4 + (0x42 << 2)
label_296964:
    if (ctx->pc == 0x296964u) {
        ctx->pc = 0x296968u;
        goto label_296968;
    }
    ctx->pc = 0x296960u;
    {
        const bool branch_taken_0x296960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x296960) {
            ctx->pc = 0x296A6Cu;
            goto label_296a6c;
        }
    }
    ctx->pc = 0x296968u;
label_296968:
    // 0x296968: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x296968u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_29696c:
    // 0x29696c: 0x8c8369b4  lw          $v1, 0x69B4($a0)
    ctx->pc = 0x29696cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 27060)));
label_296970:
    // 0x296970: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x296970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_296974:
    // 0x296974: 0xac8369b4  sw          $v1, 0x69B4($a0)
    ctx->pc = 0x296974u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 27060), GPR_U32(ctx, 3));
label_296978:
    // 0x296978: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x296978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_29697c:
    // 0x29697c: 0x8c6369b4  lw          $v1, 0x69B4($v1)
    ctx->pc = 0x29697cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 27060)));
label_296980:
    // 0x296980: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x296980u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_296984:
    // 0x296984: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x296984u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_296988:
    // 0x296988: 0x24030062  addiu       $v1, $zero, 0x62
    ctx->pc = 0x296988u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 98));
label_29698c:
    // 0x29698c: 0x1083ff57  beq         $a0, $v1, . + 4 + (-0xA9 << 2)
label_296990:
    if (ctx->pc == 0x296990u) {
        ctx->pc = 0x296994u;
        goto label_296994;
    }
    ctx->pc = 0x29698Cu;
    {
        const bool branch_taken_0x29698c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x29698c) {
            ctx->pc = 0x2966ECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2966ec;
        }
    }
    ctx->pc = 0x296994u;
label_296994:
    // 0x296994: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x296994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_296998:
    // 0x296998: 0x8c6369b4  lw          $v1, 0x69B4($v1)
    ctx->pc = 0x296998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 27060)));
label_29699c:
    // 0x29699c: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x29699cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_2969a0:
    // 0x2969a0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2969a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_2969a4:
    // 0x2969a4: 0x28610062  slti        $at, $v1, 0x62
    ctx->pc = 0x2969a4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)98) ? 1 : 0);
label_2969a8:
    // 0x2969a8: 0x10200013  beqz        $at, . + 4 + (0x13 << 2)
label_2969ac:
    if (ctx->pc == 0x2969ACu) {
        ctx->pc = 0x2969B0u;
        goto label_2969b0;
    }
    ctx->pc = 0x2969A8u;
    {
        const bool branch_taken_0x2969a8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2969a8) {
            ctx->pc = 0x2969F8u;
            goto label_2969f8;
        }
    }
    ctx->pc = 0x2969B0u;
label_2969b0:
    // 0x2969b0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2969b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2969b4:
    // 0x2969b4: 0x8c6369b4  lw          $v1, 0x69B4($v1)
    ctx->pc = 0x2969b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 27060)));
label_2969b8:
    // 0x2969b8: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x2969b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_2969bc:
    // 0x2969bc: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2969bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_2969c0:
    // 0x2969c0: 0x2863005e  slti        $v1, $v1, 0x5E
    ctx->pc = 0x2969c0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)94) ? 1 : 0);
label_2969c4:
    // 0x2969c4: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
label_2969c8:
    if (ctx->pc == 0x2969C8u) {
        ctx->pc = 0x2969CCu;
        goto label_2969cc;
    }
    ctx->pc = 0x2969C4u;
    {
        const bool branch_taken_0x2969c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2969c4) {
            ctx->pc = 0x2969F8u;
            goto label_2969f8;
        }
    }
    ctx->pc = 0x2969CCu;
label_2969cc:
    // 0x2969cc: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x2969ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2969d0:
    // 0x2969d0: 0x8ca469b4  lw          $a0, 0x69B4($a1)
    ctx->pc = 0x2969d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 27060)));
label_2969d4:
    // 0x2969d4: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x2969d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_2969d8:
    // 0x2969d8: 0xaca369b4  sw          $v1, 0x69B4($a1)
    ctx->pc = 0x2969d8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 27060), GPR_U32(ctx, 3));
label_2969dc:
    // 0x2969dc: 0x90860000  lbu         $a2, 0x0($a0)
    ctx->pc = 0x2969dcu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_2969e0:
    // 0x2969e0: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x2969e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2969e4:
    // 0x2969e4: 0x8ca469c0  lw          $a0, 0x69C0($a1)
    ctx->pc = 0x2969e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 27072)));
label_2969e8:
    // 0x2969e8: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x2969e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_2969ec:
    // 0x2969ec: 0xaca369c0  sw          $v1, 0x69C0($a1)
    ctx->pc = 0x2969ecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 27072), GPR_U32(ctx, 3));
label_2969f0:
    // 0x2969f0: 0xa0860000  sb          $a2, 0x0($a0)
    ctx->pc = 0x2969f0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 6));
label_2969f4:
    // 0x2969f4: 0x0  nop
    ctx->pc = 0x2969f4u;
    // NOP
label_2969f8:
    // 0x2969f8: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x2969f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2969fc:
    // 0x2969fc: 0x8ca469b4  lw          $a0, 0x69B4($a1)
    ctx->pc = 0x2969fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 27060)));
label_296a00:
    // 0x296a00: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x296a00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_296a04:
    // 0x296a04: 0xaca369b4  sw          $v1, 0x69B4($a1)
    ctx->pc = 0x296a04u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 27060), GPR_U32(ctx, 3));
label_296a08:
    // 0x296a08: 0x90860000  lbu         $a2, 0x0($a0)
    ctx->pc = 0x296a08u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_296a0c:
    // 0x296a0c: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x296a0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_296a10:
    // 0x296a10: 0x8ca469c0  lw          $a0, 0x69C0($a1)
    ctx->pc = 0x296a10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 27072)));
label_296a14:
    // 0x296a14: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x296a14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_296a18:
    // 0x296a18: 0xaca369c0  sw          $v1, 0x69C0($a1)
    ctx->pc = 0x296a18u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 27072), GPR_U32(ctx, 3));
label_296a1c:
    // 0x296a1c: 0xa0860000  sb          $a2, 0x0($a0)
    ctx->pc = 0x296a1cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 6));
label_296a20:
    // 0x296a20: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x296a20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_296a24:
    // 0x296a24: 0x8c63699c  lw          $v1, 0x699C($v1)
    ctx->pc = 0x296a24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 27036)));
label_296a28:
    // 0x296a28: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_296a2c:
    if (ctx->pc == 0x296A2Cu) {
        ctx->pc = 0x296A30u;
        goto label_296a30;
    }
    ctx->pc = 0x296A28u;
    {
        const bool branch_taken_0x296a28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x296a28) {
            ctx->pc = 0x296A38u;
            goto label_296a38;
        }
    }
    ctx->pc = 0x296A30u;
label_296a30:
    // 0x296a30: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x296a30u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_296a34:
    // 0x296a34: 0x0  nop
    ctx->pc = 0x296a34u;
    // NOP
label_296a38:
    // 0x296a38: 0x1620ffcf  bnez        $s1, . + 4 + (-0x31 << 2)
label_296a3c:
    if (ctx->pc == 0x296A3Cu) {
        ctx->pc = 0x296A40u;
        goto label_296a40;
    }
    ctx->pc = 0x296A38u;
    {
        const bool branch_taken_0x296a38 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x296a38) {
            ctx->pc = 0x296978u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_296978;
        }
    }
    ctx->pc = 0x296A40u;
label_296a40:
    // 0x296a40: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x296a40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_296a44:
    // 0x296a44: 0x8ca46998  lw          $a0, 0x6998($a1)
    ctx->pc = 0x296a44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 27032)));
label_296a48:
    // 0x296a48: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x296a48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_296a4c:
    // 0x296a4c: 0xaca36998  sw          $v1, 0x6998($a1)
    ctx->pc = 0x296a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 27032), GPR_U32(ctx, 3));
label_296a50:
    // 0x296a50: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x296a50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_296a54:
    // 0x296a54: 0x8c63699c  lw          $v1, 0x699C($v1)
    ctx->pc = 0x296a54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 27036)));
label_296a58:
    // 0x296a58: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x296a58u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_296a5c:
    // 0x296a5c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_296a60:
    if (ctx->pc == 0x296A60u) {
        ctx->pc = 0x296A64u;
        goto label_296a64;
    }
    ctx->pc = 0x296A5Cu;
    {
        const bool branch_taken_0x296a5c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x296a5c) {
            ctx->pc = 0x296A6Cu;
            goto label_296a6c;
        }
    }
    ctx->pc = 0x296A64u;
label_296a64:
    // 0x296a64: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x296a64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_296a68:
    // 0x296a68: 0xac606998  sw          $zero, 0x6998($v1)
    ctx->pc = 0x296a68u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 27032), GPR_U32(ctx, 0));
label_296a6c:
    // 0x296a6c: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x296a6cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_296a70:
    // 0x296a70: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x296a70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_296a74:
    // 0x296a74: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x296a74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_296a78:
    // 0x296a78: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x296a78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_296a7c:
    // 0x296a7c: 0x3e00008  jr          $ra
label_296a80:
    if (ctx->pc == 0x296A80u) {
        ctx->pc = 0x296A84u;
        goto label_fallthrough_0x296a7c;
    }
    ctx->pc = 0x296A7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x296A7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x296a7c:
    ctx->pc = 0x296A84u;
}
