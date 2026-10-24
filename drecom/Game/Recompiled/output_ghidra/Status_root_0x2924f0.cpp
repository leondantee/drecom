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

// Function: Status_root
// Address: 0x2924f0 - 0x292904
void Status_root_0x2924f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Status_root_0x2924f0");
#endif

    switch (ctx->pc) {
        case 0x2924f0u: goto label_2924f0;
        case 0x2924f4u: goto label_2924f4;
        case 0x2924f8u: goto label_2924f8;
        case 0x2924fcu: goto label_2924fc;
        case 0x292500u: goto label_292500;
        case 0x292504u: goto label_292504;
        case 0x292508u: goto label_292508;
        case 0x29250cu: goto label_29250c;
        case 0x292510u: goto label_292510;
        case 0x292514u: goto label_292514;
        case 0x292518u: goto label_292518;
        case 0x29251cu: goto label_29251c;
        case 0x292520u: goto label_292520;
        case 0x292524u: goto label_292524;
        case 0x292528u: goto label_292528;
        case 0x29252cu: goto label_29252c;
        case 0x292530u: goto label_292530;
        case 0x292534u: goto label_292534;
        case 0x292538u: goto label_292538;
        case 0x29253cu: goto label_29253c;
        case 0x292540u: goto label_292540;
        case 0x292544u: goto label_292544;
        case 0x292548u: goto label_292548;
        case 0x29254cu: goto label_29254c;
        case 0x292550u: goto label_292550;
        case 0x292554u: goto label_292554;
        case 0x292558u: goto label_292558;
        case 0x29255cu: goto label_29255c;
        case 0x292560u: goto label_292560;
        case 0x292564u: goto label_292564;
        case 0x292568u: goto label_292568;
        case 0x29256cu: goto label_29256c;
        case 0x292570u: goto label_292570;
        case 0x292574u: goto label_292574;
        case 0x292578u: goto label_292578;
        case 0x29257cu: goto label_29257c;
        case 0x292580u: goto label_292580;
        case 0x292584u: goto label_292584;
        case 0x292588u: goto label_292588;
        case 0x29258cu: goto label_29258c;
        case 0x292590u: goto label_292590;
        case 0x292594u: goto label_292594;
        case 0x292598u: goto label_292598;
        case 0x29259cu: goto label_29259c;
        case 0x2925a0u: goto label_2925a0;
        case 0x2925a4u: goto label_2925a4;
        case 0x2925a8u: goto label_2925a8;
        case 0x2925acu: goto label_2925ac;
        case 0x2925b0u: goto label_2925b0;
        case 0x2925b4u: goto label_2925b4;
        case 0x2925b8u: goto label_2925b8;
        case 0x2925bcu: goto label_2925bc;
        case 0x2925c0u: goto label_2925c0;
        case 0x2925c4u: goto label_2925c4;
        case 0x2925c8u: goto label_2925c8;
        case 0x2925ccu: goto label_2925cc;
        case 0x2925d0u: goto label_2925d0;
        case 0x2925d4u: goto label_2925d4;
        case 0x2925d8u: goto label_2925d8;
        case 0x2925dcu: goto label_2925dc;
        case 0x2925e0u: goto label_2925e0;
        case 0x2925e4u: goto label_2925e4;
        case 0x2925e8u: goto label_2925e8;
        case 0x2925ecu: goto label_2925ec;
        case 0x2925f0u: goto label_2925f0;
        case 0x2925f4u: goto label_2925f4;
        case 0x2925f8u: goto label_2925f8;
        case 0x2925fcu: goto label_2925fc;
        case 0x292600u: goto label_292600;
        case 0x292604u: goto label_292604;
        case 0x292608u: goto label_292608;
        case 0x29260cu: goto label_29260c;
        case 0x292610u: goto label_292610;
        case 0x292614u: goto label_292614;
        case 0x292618u: goto label_292618;
        case 0x29261cu: goto label_29261c;
        case 0x292620u: goto label_292620;
        case 0x292624u: goto label_292624;
        case 0x292628u: goto label_292628;
        case 0x29262cu: goto label_29262c;
        case 0x292630u: goto label_292630;
        case 0x292634u: goto label_292634;
        case 0x292638u: goto label_292638;
        case 0x29263cu: goto label_29263c;
        case 0x292640u: goto label_292640;
        case 0x292644u: goto label_292644;
        case 0x292648u: goto label_292648;
        case 0x29264cu: goto label_29264c;
        case 0x292650u: goto label_292650;
        case 0x292654u: goto label_292654;
        case 0x292658u: goto label_292658;
        case 0x29265cu: goto label_29265c;
        case 0x292660u: goto label_292660;
        case 0x292664u: goto label_292664;
        case 0x292668u: goto label_292668;
        case 0x29266cu: goto label_29266c;
        case 0x292670u: goto label_292670;
        case 0x292674u: goto label_292674;
        case 0x292678u: goto label_292678;
        case 0x29267cu: goto label_29267c;
        case 0x292680u: goto label_292680;
        case 0x292684u: goto label_292684;
        case 0x292688u: goto label_292688;
        case 0x29268cu: goto label_29268c;
        case 0x292690u: goto label_292690;
        case 0x292694u: goto label_292694;
        case 0x292698u: goto label_292698;
        case 0x29269cu: goto label_29269c;
        case 0x2926a0u: goto label_2926a0;
        case 0x2926a4u: goto label_2926a4;
        case 0x2926a8u: goto label_2926a8;
        case 0x2926acu: goto label_2926ac;
        case 0x2926b0u: goto label_2926b0;
        case 0x2926b4u: goto label_2926b4;
        case 0x2926b8u: goto label_2926b8;
        case 0x2926bcu: goto label_2926bc;
        case 0x2926c0u: goto label_2926c0;
        case 0x2926c4u: goto label_2926c4;
        case 0x2926c8u: goto label_2926c8;
        case 0x2926ccu: goto label_2926cc;
        case 0x2926d0u: goto label_2926d0;
        case 0x2926d4u: goto label_2926d4;
        case 0x2926d8u: goto label_2926d8;
        case 0x2926dcu: goto label_2926dc;
        case 0x2926e0u: goto label_2926e0;
        case 0x2926e4u: goto label_2926e4;
        case 0x2926e8u: goto label_2926e8;
        case 0x2926ecu: goto label_2926ec;
        case 0x2926f0u: goto label_2926f0;
        case 0x2926f4u: goto label_2926f4;
        case 0x2926f8u: goto label_2926f8;
        case 0x2926fcu: goto label_2926fc;
        case 0x292700u: goto label_292700;
        case 0x292704u: goto label_292704;
        case 0x292708u: goto label_292708;
        case 0x29270cu: goto label_29270c;
        case 0x292710u: goto label_292710;
        case 0x292714u: goto label_292714;
        case 0x292718u: goto label_292718;
        case 0x29271cu: goto label_29271c;
        case 0x292720u: goto label_292720;
        case 0x292724u: goto label_292724;
        case 0x292728u: goto label_292728;
        case 0x29272cu: goto label_29272c;
        case 0x292730u: goto label_292730;
        case 0x292734u: goto label_292734;
        case 0x292738u: goto label_292738;
        case 0x29273cu: goto label_29273c;
        case 0x292740u: goto label_292740;
        case 0x292744u: goto label_292744;
        case 0x292748u: goto label_292748;
        case 0x29274cu: goto label_29274c;
        case 0x292750u: goto label_292750;
        case 0x292754u: goto label_292754;
        case 0x292758u: goto label_292758;
        case 0x29275cu: goto label_29275c;
        case 0x292760u: goto label_292760;
        case 0x292764u: goto label_292764;
        case 0x292768u: goto label_292768;
        case 0x29276cu: goto label_29276c;
        case 0x292770u: goto label_292770;
        case 0x292774u: goto label_292774;
        case 0x292778u: goto label_292778;
        case 0x29277cu: goto label_29277c;
        case 0x292780u: goto label_292780;
        case 0x292784u: goto label_292784;
        case 0x292788u: goto label_292788;
        case 0x29278cu: goto label_29278c;
        case 0x292790u: goto label_292790;
        case 0x292794u: goto label_292794;
        case 0x292798u: goto label_292798;
        case 0x29279cu: goto label_29279c;
        case 0x2927a0u: goto label_2927a0;
        case 0x2927a4u: goto label_2927a4;
        case 0x2927a8u: goto label_2927a8;
        case 0x2927acu: goto label_2927ac;
        case 0x2927b0u: goto label_2927b0;
        case 0x2927b4u: goto label_2927b4;
        case 0x2927b8u: goto label_2927b8;
        case 0x2927bcu: goto label_2927bc;
        case 0x2927c0u: goto label_2927c0;
        case 0x2927c4u: goto label_2927c4;
        case 0x2927c8u: goto label_2927c8;
        case 0x2927ccu: goto label_2927cc;
        case 0x2927d0u: goto label_2927d0;
        case 0x2927d4u: goto label_2927d4;
        case 0x2927d8u: goto label_2927d8;
        case 0x2927dcu: goto label_2927dc;
        case 0x2927e0u: goto label_2927e0;
        case 0x2927e4u: goto label_2927e4;
        case 0x2927e8u: goto label_2927e8;
        case 0x2927ecu: goto label_2927ec;
        case 0x2927f0u: goto label_2927f0;
        case 0x2927f4u: goto label_2927f4;
        case 0x2927f8u: goto label_2927f8;
        case 0x2927fcu: goto label_2927fc;
        case 0x292800u: goto label_292800;
        case 0x292804u: goto label_292804;
        case 0x292808u: goto label_292808;
        case 0x29280cu: goto label_29280c;
        case 0x292810u: goto label_292810;
        case 0x292814u: goto label_292814;
        case 0x292818u: goto label_292818;
        case 0x29281cu: goto label_29281c;
        case 0x292820u: goto label_292820;
        case 0x292824u: goto label_292824;
        case 0x292828u: goto label_292828;
        case 0x29282cu: goto label_29282c;
        case 0x292830u: goto label_292830;
        case 0x292834u: goto label_292834;
        case 0x292838u: goto label_292838;
        case 0x29283cu: goto label_29283c;
        case 0x292840u: goto label_292840;
        case 0x292844u: goto label_292844;
        case 0x292848u: goto label_292848;
        case 0x29284cu: goto label_29284c;
        case 0x292850u: goto label_292850;
        case 0x292854u: goto label_292854;
        case 0x292858u: goto label_292858;
        case 0x29285cu: goto label_29285c;
        case 0x292860u: goto label_292860;
        case 0x292864u: goto label_292864;
        case 0x292868u: goto label_292868;
        case 0x29286cu: goto label_29286c;
        case 0x292870u: goto label_292870;
        case 0x292874u: goto label_292874;
        case 0x292878u: goto label_292878;
        case 0x29287cu: goto label_29287c;
        case 0x292880u: goto label_292880;
        case 0x292884u: goto label_292884;
        case 0x292888u: goto label_292888;
        case 0x29288cu: goto label_29288c;
        case 0x292890u: goto label_292890;
        case 0x292894u: goto label_292894;
        case 0x292898u: goto label_292898;
        case 0x29289cu: goto label_29289c;
        case 0x2928a0u: goto label_2928a0;
        case 0x2928a4u: goto label_2928a4;
        case 0x2928a8u: goto label_2928a8;
        case 0x2928acu: goto label_2928ac;
        case 0x2928b0u: goto label_2928b0;
        case 0x2928b4u: goto label_2928b4;
        case 0x2928b8u: goto label_2928b8;
        case 0x2928bcu: goto label_2928bc;
        case 0x2928c0u: goto label_2928c0;
        case 0x2928c4u: goto label_2928c4;
        case 0x2928c8u: goto label_2928c8;
        case 0x2928ccu: goto label_2928cc;
        case 0x2928d0u: goto label_2928d0;
        case 0x2928d4u: goto label_2928d4;
        case 0x2928d8u: goto label_2928d8;
        case 0x2928dcu: goto label_2928dc;
        case 0x2928e0u: goto label_2928e0;
        case 0x2928e4u: goto label_2928e4;
        case 0x2928e8u: goto label_2928e8;
        case 0x2928ecu: goto label_2928ec;
        case 0x2928f0u: goto label_2928f0;
        case 0x2928f4u: goto label_2928f4;
        case 0x2928f8u: goto label_2928f8;
        case 0x2928fcu: goto label_2928fc;
        case 0x292900u: goto label_292900;
        default: break;
    }

    ctx->pc = 0x2924f0u;

label_2924f0:
    // 0x2924f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2924f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2924f4:
    // 0x2924f4: 0x7fbf0040  sq          $ra, 0x40($sp)
    ctx->pc = 0x2924f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
label_2924f8:
    // 0x2924f8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2924f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2924fc:
    // 0x2924fc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2924fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_292500:
    // 0x292500: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x292500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_292504:
    // 0x292504: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x292504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_292508:
    // 0x292508: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x292508u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_29250c:
    // 0x29250c: 0x24506150  addiu       $s0, $v0, 0x6150
    ctx->pc = 0x29250cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 24912));
label_292510:
    // 0x292510: 0x3c020086  lui         $v0, 0x86
    ctx->pc = 0x292510u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)134 << 16));
label_292514:
    // 0x292514: 0x2453c2f0  addiu       $s3, $v0, -0x3D10
    ctx->pc = 0x292514u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951664));
label_292518:
    // 0x292518: 0x3c020081  lui         $v0, 0x81
    ctx->pc = 0x292518u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)129 << 16));
label_29251c:
    // 0x29251c: 0x2452cb10  addiu       $s2, $v0, -0x34F0
    ctx->pc = 0x29251cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953744));
label_292520:
    // 0x292520: 0x920265a8  lbu         $v0, 0x65A8($s0)
    ctx->pc = 0x292520u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26024)));
label_292524:
    // 0x292524: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x292524u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_292528:
    // 0x292528: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x292528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29252c:
    // 0x29252c: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
label_292530:
    if (ctx->pc == 0x292530u) {
        ctx->pc = 0x292534u;
        goto label_292534;
    }
    ctx->pc = 0x29252Cu;
    {
        const bool branch_taken_0x29252c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x29252c) {
            ctx->pc = 0x292548u;
            goto label_292548;
        }
    }
    ctx->pc = 0x292534u;
label_292534:
    // 0x292534: 0x920265ab  lbu         $v0, 0x65AB($s0)
    ctx->pc = 0x292534u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26027)));
label_292538:
    // 0x292538: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x292538u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_29253c:
    // 0x29253c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29253cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_292540:
    // 0x292540: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_292544:
    if (ctx->pc == 0x292544u) {
        ctx->pc = 0x292548u;
        goto label_292548;
    }
    ctx->pc = 0x292540u;
    {
        const bool branch_taken_0x292540 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x292540) {
            ctx->pc = 0x292550u;
            goto label_292550;
        }
    }
    ctx->pc = 0x292548u;
label_292548:
    // 0x292548: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x292548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29254c:
    // 0x29254c: 0xa20265ad  sb          $v0, 0x65AD($s0)
    ctx->pc = 0x29254cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 26029), (uint8_t)GPR_U32(ctx, 2));
label_292550:
    // 0x292550: 0xc0a58d8  jal         func_296360
label_292554:
    if (ctx->pc == 0x292554u) {
        ctx->pc = 0x292558u;
        goto label_292558;
    }
    ctx->pc = 0x292550u;
    SET_GPR_U32(ctx, 31, 0x292558u);
    ctx->pc = 0x296360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296360u, 0x292550u, 0x292558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292558u;
label_292558:
    // 0x292558: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x292558u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
label_29255c:
    // 0x29255c: 0x8c2267e8  lw          $v0, 0x67E8($at)
    ctx->pc = 0x29255cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 26600)));
label_292560:
    // 0x292560: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_292564:
    if (ctx->pc == 0x292564u) {
        ctx->pc = 0x292568u;
        goto label_292568;
    }
    ctx->pc = 0x292560u;
    {
        const bool branch_taken_0x292560 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x292560) {
            ctx->pc = 0x292570u;
            goto label_292570;
        }
    }
    ctx->pc = 0x292568u;
label_292568:
    // 0x292568: 0xc0a51b8  jal         func_2946E0
label_29256c:
    if (ctx->pc == 0x29256Cu) {
        ctx->pc = 0x292570u;
        goto label_292570;
    }
    ctx->pc = 0x292568u;
    SET_GPR_U32(ctx, 31, 0x292570u);
    ctx->pc = 0x2946E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2946E0u, 0x292568u, 0x292570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292570u;
label_292570:
    // 0x292570: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x292570u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_292574:
    // 0x292574: 0x10000008  b           . + 4 + (0x8 << 2)
label_292578:
    if (ctx->pc == 0x292578u) {
        ctx->pc = 0x29257Cu;
        goto label_29257c;
    }
    ctx->pc = 0x292574u;
    {
        const bool branch_taken_0x292574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x292574) {
            ctx->pc = 0x292598u;
            goto label_292598;
        }
    }
    ctx->pc = 0x29257Cu;
label_29257c:
    // 0x29257c: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x29257cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_292580:
    // 0x292580: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x292580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_292584:
    // 0x292584: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x292584u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_292588:
    // 0x292588: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x292588u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29258c:
    // 0x29258c: 0xc05dbbc  jal         func_176EF0
label_292590:
    if (ctx->pc == 0x292590u) {
        ctx->pc = 0x292594u;
        goto label_292594;
    }
    ctx->pc = 0x29258Cu;
    SET_GPR_U32(ctx, 31, 0x292594u);
    ctx->pc = 0x176EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176EF0u, 0x29258Cu, 0x292594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292594u;
label_292594:
    // 0x292594: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x292594u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_292598:
    // 0x292598: 0x2a220007  slti        $v0, $s1, 0x7
    ctx->pc = 0x292598u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)7) ? 1 : 0);
label_29259c:
    // 0x29259c: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_2925a0:
    if (ctx->pc == 0x2925A0u) {
        ctx->pc = 0x2925A4u;
        goto label_2925a4;
    }
    ctx->pc = 0x29259Cu;
    {
        const bool branch_taken_0x29259c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29259c) {
            ctx->pc = 0x29257Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29257c;
        }
    }
    ctx->pc = 0x2925A4u;
label_2925a4:
    // 0x2925a4: 0x8e025dc0  lw          $v0, 0x5DC0($s0)
    ctx->pc = 0x2925a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24000)));
label_2925a8:
    // 0x2925a8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2925ac:
    if (ctx->pc == 0x2925ACu) {
        ctx->pc = 0x2925B0u;
        goto label_2925b0;
    }
    ctx->pc = 0x2925A8u;
    {
        const bool branch_taken_0x2925a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2925a8) {
            ctx->pc = 0x2925BCu;
            goto label_2925bc;
        }
    }
    ctx->pc = 0x2925B0u;
label_2925b0:
    // 0x2925b0: 0x8e025dc8  lw          $v0, 0x5DC8($s0)
    ctx->pc = 0x2925b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24008)));
label_2925b4:
    // 0x2925b4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2925b8:
    if (ctx->pc == 0x2925B8u) {
        ctx->pc = 0x2925BCu;
        goto label_2925bc;
    }
    ctx->pc = 0x2925B4u;
    {
        const bool branch_taken_0x2925b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2925b4) {
            ctx->pc = 0x2925C4u;
            goto label_2925c4;
        }
    }
    ctx->pc = 0x2925BCu;
label_2925bc:
    // 0x2925bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2925bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2925c0:
    // 0x2925c0: 0xa2026608  sb          $v0, 0x6608($s0)
    ctx->pc = 0x2925c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 26120), (uint8_t)GPR_U32(ctx, 2));
label_2925c4:
    // 0x2925c4: 0x8e025dc0  lw          $v0, 0x5DC0($s0)
    ctx->pc = 0x2925c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24000)));
label_2925c8:
    // 0x2925c8: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_2925cc:
    if (ctx->pc == 0x2925CCu) {
        ctx->pc = 0x2925D0u;
        goto label_2925d0;
    }
    ctx->pc = 0x2925C8u;
    {
        const bool branch_taken_0x2925c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2925c8) {
            ctx->pc = 0x292604u;
            goto label_292604;
        }
    }
    ctx->pc = 0x2925D0u;
label_2925d0:
    // 0x2925d0: 0x8e025dc8  lw          $v0, 0x5DC8($s0)
    ctx->pc = 0x2925d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24008)));
label_2925d4:
    // 0x2925d4: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x2925d4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_2925d8:
    // 0x2925d8: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_2925dc:
    if (ctx->pc == 0x2925DCu) {
        ctx->pc = 0x2925E0u;
        goto label_2925e0;
    }
    ctx->pc = 0x2925D8u;
    {
        const bool branch_taken_0x2925d8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2925d8) {
            ctx->pc = 0x2925E4u;
            goto label_2925e4;
        }
    }
    ctx->pc = 0x2925E0u;
label_2925e0:
    // 0x2925e0: 0xa2006608  sb          $zero, 0x6608($s0)
    ctx->pc = 0x2925e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 26120), (uint8_t)GPR_U32(ctx, 0));
label_2925e4:
    // 0x2925e4: 0x8e025dc4  lw          $v0, 0x5DC4($s0)
    ctx->pc = 0x2925e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24004)));
label_2925e8:
    // 0x2925e8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2925e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2925ec:
    // 0x2925ec: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2925ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_2925f0:
    // 0x2925f0: 0x244267c0  addiu       $v0, $v0, 0x67C0
    ctx->pc = 0x2925f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26560));
label_2925f4:
    // 0x2925f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2925f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2925f8:
    // 0x2925f8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2925f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2925fc:
    // 0x2925fc: 0x40f809  jalr        $v0
label_292600:
    if (ctx->pc == 0x292600u) {
        ctx->pc = 0x292604u;
        goto label_292604;
    }
    ctx->pc = 0x2925FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x292604u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2925FCu, 0x292604u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x292604u;
label_292604:
    // 0x292604: 0x920265ab  lbu         $v0, 0x65AB($s0)
    ctx->pc = 0x292604u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26027)));
label_292608:
    // 0x292608: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x292608u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_29260c:
    // 0x29260c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29260cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_292610:
    // 0x292610: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
label_292614:
    if (ctx->pc == 0x292614u) {
        ctx->pc = 0x292618u;
        goto label_292618;
    }
    ctx->pc = 0x292610u;
    {
        const bool branch_taken_0x292610 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x292610) {
            ctx->pc = 0x292640u;
            goto label_292640;
        }
    }
    ctx->pc = 0x292618u;
label_292618:
    // 0x292618: 0x920365ac  lbu         $v1, 0x65AC($s0)
    ctx->pc = 0x292618u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26028)));
label_29261c:
    // 0x29261c: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x29261cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_292620:
    // 0x292620: 0xa20265ac  sb          $v0, 0x65AC($s0)
    ctx->pc = 0x292620u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 26028), (uint8_t)GPR_U32(ctx, 2));
label_292624:
    // 0x292624: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x292624u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_292628:
    // 0x292628: 0x28410029  slti        $at, $v0, 0x29
    ctx->pc = 0x292628u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)41) ? 1 : 0);
label_29262c:
    // 0x29262c: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
label_292630:
    if (ctx->pc == 0x292630u) {
        ctx->pc = 0x292634u;
        goto label_292634;
    }
    ctx->pc = 0x29262Cu;
    {
        const bool branch_taken_0x29262c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x29262c) {
            ctx->pc = 0x292640u;
            goto label_292640;
        }
    }
    ctx->pc = 0x292634u;
label_292634:
    // 0x292634: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x292634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_292638:
    // 0x292638: 0xa20265a8  sb          $v0, 0x65A8($s0)
    ctx->pc = 0x292638u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 26024), (uint8_t)GPR_U32(ctx, 2));
label_29263c:
    // 0x29263c: 0xa20065ab  sb          $zero, 0x65AB($s0)
    ctx->pc = 0x29263cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 26027), (uint8_t)GPR_U32(ctx, 0));
label_292640:
    // 0x292640: 0x8e035dc0  lw          $v1, 0x5DC0($s0)
    ctx->pc = 0x292640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24000)));
label_292644:
    // 0x292644: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x292644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_292648:
    // 0x292648: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
label_29264c:
    if (ctx->pc == 0x29264Cu) {
        ctx->pc = 0x292650u;
        goto label_292650;
    }
    ctx->pc = 0x292648u;
    {
        const bool branch_taken_0x292648 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x292648) {
            ctx->pc = 0x292670u;
            goto label_292670;
        }
    }
    ctx->pc = 0x292650u;
label_292650:
    // 0x292650: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_292654:
    if (ctx->pc == 0x292654u) {
        ctx->pc = 0x292658u;
        goto label_292658;
    }
    ctx->pc = 0x292650u;
    {
        const bool branch_taken_0x292650 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x292650) {
            ctx->pc = 0x292660u;
            goto label_292660;
        }
    }
    ctx->pc = 0x292658u;
label_292658:
    // 0x292658: 0x1000000b  b           . + 4 + (0xB << 2)
label_29265c:
    if (ctx->pc == 0x29265Cu) {
        ctx->pc = 0x292660u;
        goto label_292660;
    }
    ctx->pc = 0x292658u;
    {
        const bool branch_taken_0x292658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x292658) {
            ctx->pc = 0x292688u;
            goto label_292688;
        }
    }
    ctx->pc = 0x292660u;
label_292660:
    // 0x292660: 0xc0a4ab0  jal         func_292AC0
label_292664:
    if (ctx->pc == 0x292664u) {
        ctx->pc = 0x292668u;
        goto label_292668;
    }
    ctx->pc = 0x292660u;
    SET_GPR_U32(ctx, 31, 0x292668u);
    ctx->pc = 0x292AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292AC0u, 0x292660u, 0x292668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292668u;
label_292668:
    // 0x292668: 0x10000007  b           . + 4 + (0x7 << 2)
label_29266c:
    if (ctx->pc == 0x29266Cu) {
        ctx->pc = 0x292670u;
        goto label_292670;
    }
    ctx->pc = 0x292668u;
    {
        const bool branch_taken_0x292668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x292668) {
            ctx->pc = 0x292688u;
            goto label_292688;
        }
    }
    ctx->pc = 0x292670u;
label_292670:
    // 0x292670: 0x920265ad  lbu         $v0, 0x65AD($s0)
    ctx->pc = 0x292670u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26029)));
label_292674:
    // 0x292674: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x292674u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_292678:
    // 0x292678: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_29267c:
    if (ctx->pc == 0x29267Cu) {
        ctx->pc = 0x292680u;
        goto label_292680;
    }
    ctx->pc = 0x292678u;
    {
        const bool branch_taken_0x292678 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x292678) {
            ctx->pc = 0x292688u;
            goto label_292688;
        }
    }
    ctx->pc = 0x292680u;
label_292680:
    // 0x292680: 0xc0a4b44  jal         func_292D10
label_292684:
    if (ctx->pc == 0x292684u) {
        ctx->pc = 0x292688u;
        goto label_292688;
    }
    ctx->pc = 0x292680u;
    SET_GPR_U32(ctx, 31, 0x292688u);
    ctx->pc = 0x292D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292D10u, 0x292680u, 0x292688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292688u;
label_292688:
    // 0x292688: 0x8e02685c  lw          $v0, 0x685C($s0)
    ctx->pc = 0x292688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26716)));
label_29268c:
    // 0x29268c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x29268cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_292690:
    // 0x292690: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_292694:
    if (ctx->pc == 0x292694u) {
        ctx->pc = 0x292698u;
        goto label_292698;
    }
    ctx->pc = 0x292690u;
    {
        const bool branch_taken_0x292690 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x292690) {
            ctx->pc = 0x2926B0u;
            goto label_2926b0;
        }
    }
    ctx->pc = 0x292698u;
label_292698:
    // 0x292698: 0x920265ad  lbu         $v0, 0x65AD($s0)
    ctx->pc = 0x292698u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26029)));
label_29269c:
    // 0x29269c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29269cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2926a0:
    // 0x2926a0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2926a4:
    if (ctx->pc == 0x2926A4u) {
        ctx->pc = 0x2926A8u;
        goto label_2926a8;
    }
    ctx->pc = 0x2926A0u;
    {
        const bool branch_taken_0x2926a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2926a0) {
            ctx->pc = 0x2926B0u;
            goto label_2926b0;
        }
    }
    ctx->pc = 0x2926A8u;
label_2926a8:
    // 0x2926a8: 0xc0a4bc0  jal         func_292F00
label_2926ac:
    if (ctx->pc == 0x2926ACu) {
        ctx->pc = 0x2926B0u;
        goto label_2926b0;
    }
    ctx->pc = 0x2926A8u;
    SET_GPR_U32(ctx, 31, 0x2926B0u);
    ctx->pc = 0x292F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292F00u, 0x2926A8u, 0x2926B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2926B0u;
label_2926b0:
    // 0x2926b0: 0xc0a4c30  jal         func_2930C0
label_2926b4:
    if (ctx->pc == 0x2926B4u) {
        ctx->pc = 0x2926B8u;
        goto label_2926b8;
    }
    ctx->pc = 0x2926B0u;
    SET_GPR_U32(ctx, 31, 0x2926B8u);
    ctx->pc = 0x2930C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2930C0u, 0x2926B0u, 0x2926B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2926B8u;
label_2926b8:
    // 0x2926b8: 0x92026608  lbu         $v0, 0x6608($s0)
    ctx->pc = 0x2926b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26120)));
label_2926bc:
    // 0x2926bc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2926bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2926c0:
    // 0x2926c0: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
label_2926c4:
    if (ctx->pc == 0x2926C4u) {
        ctx->pc = 0x2926C8u;
        goto label_2926c8;
    }
    ctx->pc = 0x2926C0u;
    {
        const bool branch_taken_0x2926c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2926c0) {
            ctx->pc = 0x292728u;
            goto label_292728;
        }
    }
    ctx->pc = 0x2926C8u;
label_2926c8:
    // 0x2926c8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2926c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_2926cc:
    // 0x2926cc: 0x8c23011c  lw          $v1, 0x11C($at)
    ctx->pc = 0x2926ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 284)));
label_2926d0:
    // 0x2926d0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2926d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_2926d4:
    // 0x2926d4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2926d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_2926d8:
    // 0x2926d8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_2926dc:
    if (ctx->pc == 0x2926DCu) {
        ctx->pc = 0x2926E0u;
        goto label_2926e0;
    }
    ctx->pc = 0x2926D8u;
    {
        const bool branch_taken_0x2926d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2926d8) {
            ctx->pc = 0x2926F8u;
            goto label_2926f8;
        }
    }
    ctx->pc = 0x2926E0u;
label_2926e0:
    // 0x2926e0: 0x8e02685c  lw          $v0, 0x685C($s0)
    ctx->pc = 0x2926e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26716)));
label_2926e4:
    // 0x2926e4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2926e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_2926e8:
    // 0x2926e8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2926ec:
    if (ctx->pc == 0x2926ECu) {
        ctx->pc = 0x2926F0u;
        goto label_2926f0;
    }
    ctx->pc = 0x2926E8u;
    {
        const bool branch_taken_0x2926e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2926e8) {
            ctx->pc = 0x2926F8u;
            goto label_2926f8;
        }
    }
    ctx->pc = 0x2926F0u;
label_2926f0:
    // 0x2926f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2926f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2926f4:
    // 0x2926f4: 0xa20265a8  sb          $v0, 0x65A8($s0)
    ctx->pc = 0x2926f4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 26024), (uint8_t)GPR_U32(ctx, 2));
label_2926f8:
    // 0x2926f8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2926f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_2926fc:
    // 0x2926fc: 0x8c23011c  lw          $v1, 0x11C($at)
    ctx->pc = 0x2926fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 284)));
label_292700:
    // 0x292700: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x292700u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
label_292704:
    // 0x292704: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x292704u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_292708:
    // 0x292708: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_29270c:
    if (ctx->pc == 0x29270Cu) {
        ctx->pc = 0x292710u;
        goto label_292710;
    }
    ctx->pc = 0x292708u;
    {
        const bool branch_taken_0x292708 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x292708) {
            ctx->pc = 0x292728u;
            goto label_292728;
        }
    }
    ctx->pc = 0x292710u;
label_292710:
    // 0x292710: 0x8e02685c  lw          $v0, 0x685C($s0)
    ctx->pc = 0x292710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26716)));
label_292714:
    // 0x292714: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x292714u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_292718:
    // 0x292718: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_29271c:
    if (ctx->pc == 0x29271Cu) {
        ctx->pc = 0x292720u;
        goto label_292720;
    }
    ctx->pc = 0x292718u;
    {
        const bool branch_taken_0x292718 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x292718) {
            ctx->pc = 0x292728u;
            goto label_292728;
        }
    }
    ctx->pc = 0x292720u;
label_292720:
    // 0x292720: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x292720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_292724:
    // 0x292724: 0xa20265a8  sb          $v0, 0x65A8($s0)
    ctx->pc = 0x292724u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 26024), (uint8_t)GPR_U32(ctx, 2));
label_292728:
    // 0x292728: 0xc0a5568  jal         func_2955A0
label_29272c:
    if (ctx->pc == 0x29272Cu) {
        ctx->pc = 0x292730u;
        goto label_292730;
    }
    ctx->pc = 0x292728u;
    SET_GPR_U32(ctx, 31, 0x292730u);
    ctx->pc = 0x2955A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2955A0u, 0x292728u, 0x292730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292730u;
label_292730:
    // 0x292730: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x292730u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
label_292734:
    // 0x292734: 0x8c2267e8  lw          $v0, 0x67E8($at)
    ctx->pc = 0x292734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 26600)));
label_292738:
    // 0x292738: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_29273c:
    if (ctx->pc == 0x29273Cu) {
        ctx->pc = 0x292740u;
        goto label_292740;
    }
    ctx->pc = 0x292738u;
    {
        const bool branch_taken_0x292738 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x292738) {
            ctx->pc = 0x292748u;
            goto label_292748;
        }
    }
    ctx->pc = 0x292740u;
label_292740:
    // 0x292740: 0xc0a5350  jal         func_294D40
label_292744:
    if (ctx->pc == 0x292744u) {
        ctx->pc = 0x292748u;
        goto label_292748;
    }
    ctx->pc = 0x292740u;
    SET_GPR_U32(ctx, 31, 0x292748u);
    ctx->pc = 0x294D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294D40u, 0x292740u, 0x292748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292748u;
label_292748:
    // 0x292748: 0xc0a5c44  jal         func_297110
label_29274c:
    if (ctx->pc == 0x29274Cu) {
        ctx->pc = 0x292750u;
        goto label_292750;
    }
    ctx->pc = 0x292748u;
    SET_GPR_U32(ctx, 31, 0x292750u);
    ctx->pc = 0x297110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297110u, 0x292748u, 0x292750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292750u;
label_292750:
    // 0x292750: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x292750u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_292754:
    // 0x292754: 0xc05dbf4  jal         func_176FD0
label_292758:
    if (ctx->pc == 0x292758u) {
        ctx->pc = 0x29275Cu;
        goto label_29275c;
    }
    ctx->pc = 0x292754u;
    SET_GPR_U32(ctx, 31, 0x29275Cu);
    ctx->pc = 0x176FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176FD0u, 0x292754u, 0x29275Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29275Cu;
label_29275c:
    // 0x29275c: 0x8e026870  lw          $v0, 0x6870($s0)
    ctx->pc = 0x29275cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26736)));
label_292760:
    // 0x292760: 0x21142  srl         $v0, $v0, 5
    ctx->pc = 0x292760u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
label_292764:
    // 0x292764: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_292768:
    if (ctx->pc == 0x292768u) {
        ctx->pc = 0x29276Cu;
        goto label_29276c;
    }
    ctx->pc = 0x292764u;
    {
        const bool branch_taken_0x292764 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x292764) {
            ctx->pc = 0x292788u;
            goto label_292788;
        }
    }
    ctx->pc = 0x29276Cu;
label_29276c:
    // 0x29276c: 0x240400ad  addiu       $a0, $zero, 0xAD
    ctx->pc = 0x29276cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 173));
label_292770:
    // 0x292770: 0x26050520  addiu       $a1, $s0, 0x520
    ctx->pc = 0x292770u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1312));
label_292774:
    // 0x292774: 0xc0a4a44  jal         func_292910
label_292778:
    if (ctx->pc == 0x292778u) {
        ctx->pc = 0x29277Cu;
        goto label_29277c;
    }
    ctx->pc = 0x292774u;
    SET_GPR_U32(ctx, 31, 0x29277Cu);
    ctx->pc = 0x292910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292910u, 0x292774u, 0x29277Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29277Cu;
label_29277c:
    // 0x29277c: 0x26040018  addiu       $a0, $s0, 0x18
    ctx->pc = 0x29277cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
label_292780:
    // 0x292780: 0xc05dbf4  jal         func_176FD0
label_292784:
    if (ctx->pc == 0x292784u) {
        ctx->pc = 0x292788u;
        goto label_292788;
    }
    ctx->pc = 0x292780u;
    SET_GPR_U32(ctx, 31, 0x292788u);
    ctx->pc = 0x176FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176FD0u, 0x292780u, 0x292788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292788u;
label_292788:
    // 0x292788: 0x8e035dc4  lw          $v1, 0x5DC4($s0)
    ctx->pc = 0x292788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24004)));
label_29278c:
    // 0x29278c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29278cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_292790:
    // 0x292790: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
label_292794:
    if (ctx->pc == 0x292794u) {
        ctx->pc = 0x292798u;
        goto label_292798;
    }
    ctx->pc = 0x292790u;
    {
        const bool branch_taken_0x292790 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x292790) {
            ctx->pc = 0x2927B4u;
            goto label_2927b4;
        }
    }
    ctx->pc = 0x292798u;
label_292798:
    // 0x292798: 0x26040630  addiu       $a0, $s0, 0x630
    ctx->pc = 0x292798u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1584));
label_29279c:
    // 0x29279c: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x29279cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_2927a0:
    // 0x2927a0: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x2927a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2927a4:
    // 0x2927a4: 0xc0462a6  jal         func_118A98
label_2927a8:
    if (ctx->pc == 0x2927A8u) {
        ctx->pc = 0x2927ACu;
        goto label_2927ac;
    }
    ctx->pc = 0x2927A4u;
    SET_GPR_U32(ctx, 31, 0x2927ACu);
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x2927ACu;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2927ACu) { return; }
    ctx->pc = 0x2927ACu;
label_2927ac:
    // 0x2927ac: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2927acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_2927b0:
    // 0x2927b0: 0xae020638  sw          $v0, 0x638($s0)
    ctx->pc = 0x2927b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1592), GPR_U32(ctx, 2));
label_2927b4:
    // 0x2927b4: 0x240400a3  addiu       $a0, $zero, 0xA3
    ctx->pc = 0x2927b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 163));
label_2927b8:
    // 0x2927b8: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x2927b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_2927bc:
    // 0x2927bc: 0xc0a4a44  jal         func_292910
label_2927c0:
    if (ctx->pc == 0x2927C0u) {
        ctx->pc = 0x2927C4u;
        goto label_2927c4;
    }
    ctx->pc = 0x2927BCu;
    SET_GPR_U32(ctx, 31, 0x2927C4u);
    ctx->pc = 0x292910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292910u, 0x2927BCu, 0x2927C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2927C4u;
label_2927c4:
    // 0x2927c4: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x2927c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_2927c8:
    // 0x2927c8: 0xc05dbf4  jal         func_176FD0
label_2927cc:
    if (ctx->pc == 0x2927CCu) {
        ctx->pc = 0x2927D0u;
        goto label_2927d0;
    }
    ctx->pc = 0x2927C8u;
    SET_GPR_U32(ctx, 31, 0x2927D0u);
    ctx->pc = 0x176FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176FD0u, 0x2927C8u, 0x2927D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2927D0u;
label_2927d0:
    // 0x2927d0: 0x8e025dc8  lw          $v0, 0x5DC8($s0)
    ctx->pc = 0x2927d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24008)));
label_2927d4:
    // 0x2927d4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2927d8:
    if (ctx->pc == 0x2927D8u) {
        ctx->pc = 0x2927DCu;
        goto label_2927dc;
    }
    ctx->pc = 0x2927D4u;
    {
        const bool branch_taken_0x2927d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2927d4) {
            ctx->pc = 0x2927F8u;
            goto label_2927f8;
        }
    }
    ctx->pc = 0x2927DCu;
label_2927dc:
    // 0x2927dc: 0x240400a4  addiu       $a0, $zero, 0xA4
    ctx->pc = 0x2927dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 164));
label_2927e0:
    // 0x2927e0: 0x26050620  addiu       $a1, $s0, 0x620
    ctx->pc = 0x2927e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1568));
label_2927e4:
    // 0x2927e4: 0xc0a4a44  jal         func_292910
label_2927e8:
    if (ctx->pc == 0x2927E8u) {
        ctx->pc = 0x2927ECu;
        goto label_2927ec;
    }
    ctx->pc = 0x2927E4u;
    SET_GPR_U32(ctx, 31, 0x2927ECu);
    ctx->pc = 0x292910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292910u, 0x2927E4u, 0x2927ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2927ECu;
label_2927ec:
    // 0x2927ec: 0x2604001c  addiu       $a0, $s0, 0x1C
    ctx->pc = 0x2927ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
label_2927f0:
    // 0x2927f0: 0xc05dbf4  jal         func_176FD0
label_2927f4:
    if (ctx->pc == 0x2927F4u) {
        ctx->pc = 0x2927F8u;
        goto label_2927f8;
    }
    ctx->pc = 0x2927F0u;
    SET_GPR_U32(ctx, 31, 0x2927F8u);
    ctx->pc = 0x176FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176FD0u, 0x2927F0u, 0x2927F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2927F8u;
label_2927f8:
    // 0x2927f8: 0x8e026870  lw          $v0, 0x6870($s0)
    ctx->pc = 0x2927f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26736)));
label_2927fc:
    // 0x2927fc: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x2927fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_292800:
    // 0x292800: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_292804:
    if (ctx->pc == 0x292804u) {
        ctx->pc = 0x292808u;
        goto label_292808;
    }
    ctx->pc = 0x292800u;
    {
        const bool branch_taken_0x292800 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x292800) {
            ctx->pc = 0x292824u;
            goto label_292824;
        }
    }
    ctx->pc = 0x292808u;
label_292808:
    // 0x292808: 0x240400ae  addiu       $a0, $zero, 0xAE
    ctx->pc = 0x292808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 174));
label_29280c:
    // 0x29280c: 0x26050120  addiu       $a1, $s0, 0x120
    ctx->pc = 0x29280cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
label_292810:
    // 0x292810: 0xc0a4a44  jal         func_292910
label_292814:
    if (ctx->pc == 0x292814u) {
        ctx->pc = 0x292818u;
        goto label_292818;
    }
    ctx->pc = 0x292810u;
    SET_GPR_U32(ctx, 31, 0x292818u);
    ctx->pc = 0x292910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292910u, 0x292810u, 0x292818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292818u;
label_292818:
    // 0x292818: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x292818u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_29281c:
    // 0x29281c: 0xc05dbf4  jal         func_176FD0
label_292820:
    if (ctx->pc == 0x292820u) {
        ctx->pc = 0x292824u;
        goto label_292824;
    }
    ctx->pc = 0x29281Cu;
    SET_GPR_U32(ctx, 31, 0x292824u);
    ctx->pc = 0x176FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176FD0u, 0x29281Cu, 0x292824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292824u;
label_292824:
    // 0x292824: 0x240400a2  addiu       $a0, $zero, 0xA2
    ctx->pc = 0x292824u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 162));
label_292828:
    // 0x292828: 0x26050328  addiu       $a1, $s0, 0x328
    ctx->pc = 0x292828u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 808));
label_29282c:
    // 0x29282c: 0xc0a4a44  jal         func_292910
label_292830:
    if (ctx->pc == 0x292830u) {
        ctx->pc = 0x292834u;
        goto label_292834;
    }
    ctx->pc = 0x29282Cu;
    SET_GPR_U32(ctx, 31, 0x292834u);
    ctx->pc = 0x292910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292910u, 0x29282Cu, 0x292834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292834u;
label_292834:
    // 0x292834: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x292834u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_292838:
    // 0x292838: 0xc0d7594  jal         func_35D650
label_29283c:
    if (ctx->pc == 0x29283Cu) {
        ctx->pc = 0x292840u;
        goto label_292840;
    }
    ctx->pc = 0x292838u;
    SET_GPR_U32(ctx, 31, 0x292840u);
    ctx->pc = 0x35D650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D650u, 0x292838u, 0x292840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292840u;
label_292840:
    // 0x292840: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x292840u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_292844:
    // 0x292844: 0xc05dbf4  jal         func_176FD0
label_292848:
    if (ctx->pc == 0x292848u) {
        ctx->pc = 0x29284Cu;
        goto label_29284c;
    }
    ctx->pc = 0x292844u;
    SET_GPR_U32(ctx, 31, 0x29284Cu);
    ctx->pc = 0x176FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176FD0u, 0x292844u, 0x29284Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29284Cu;
label_29284c:
    // 0x29284c: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x29284cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_292850:
    // 0x292850: 0x240400b9  addiu       $a0, $zero, 0xB9
    ctx->pc = 0x292850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 185));
label_292854:
    // 0x292854: 0x24061400  addiu       $a2, $zero, 0x1400
    ctx->pc = 0x292854u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5120));
label_292858:
    // 0x292858: 0x2407008e  addiu       $a3, $zero, 0x8E
    ctx->pc = 0x292858u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 142));
label_29285c:
    // 0x29285c: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x29285cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_292860:
    // 0x292860: 0xc05e858  jal         func_17A160
label_292864:
    if (ctx->pc == 0x292864u) {
        ctx->pc = 0x292868u;
        goto label_292868;
    }
    ctx->pc = 0x292860u;
    SET_GPR_U32(ctx, 31, 0x292868u);
    ctx->pc = 0x17A160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A160u, 0x292860u, 0x292868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292868u;
label_292868:
    // 0x292868: 0x240400b9  addiu       $a0, $zero, 0xB9
    ctx->pc = 0x292868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 185));
label_29286c:
    // 0x29286c: 0xc05e964  jal         func_17A590
label_292870:
    if (ctx->pc == 0x292870u) {
        ctx->pc = 0x292874u;
        goto label_292874;
    }
    ctx->pc = 0x29286Cu;
    SET_GPR_U32(ctx, 31, 0x292874u);
    ctx->pc = 0x17A590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A590u, 0x29286Cu, 0x292874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292874u;
label_292874:
    // 0x292874: 0x26040014  addiu       $a0, $s0, 0x14
    ctx->pc = 0x292874u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
label_292878:
    // 0x292878: 0xc05dbf4  jal         func_176FD0
label_29287c:
    if (ctx->pc == 0x29287Cu) {
        ctx->pc = 0x292880u;
        goto label_292880;
    }
    ctx->pc = 0x292878u;
    SET_GPR_U32(ctx, 31, 0x292880u);
    ctx->pc = 0x176FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176FD0u, 0x292878u, 0x292880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292880u;
label_292880:
    // 0x292880: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x292880u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_292884:
    // 0x292884: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x292884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_292888:
    // 0x292888: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x292888u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_29288c:
    // 0x29288c: 0xc06aeb0  jal         func_1ABAC0
label_292890:
    if (ctx->pc == 0x292890u) {
        ctx->pc = 0x292894u;
        goto label_292894;
    }
    ctx->pc = 0x29288Cu;
    SET_GPR_U32(ctx, 31, 0x292894u);
    ctx->pc = 0x1ABAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ABAC0u, 0x29288Cu, 0x292894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292894u;
label_292894:
    // 0x292894: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x292894u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_292898:
    // 0x292898: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x292898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_29289c:
    // 0x29289c: 0x38430001  xori        $v1, $v0, 0x1
    ctx->pc = 0x29289cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_2928a0:
    // 0x2928a0: 0x31280  sll         $v0, $v1, 10
    ctx->pc = 0x2928a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 10));
label_2928a4:
    // 0x2928a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2928a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2928a8:
    // 0x2928a8: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x2928a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_2928ac:
    // 0x2928ac: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x2928acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
label_2928b0:
    // 0x2928b0: 0x24424f60  addiu       $v0, $v0, 0x4F60
    ctx->pc = 0x2928b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20320));
label_2928b4:
    // 0x2928b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2928b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2928b8:
    // 0x2928b8: 0x24444000  addiu       $a0, $v0, 0x4000
    ctx->pc = 0x2928b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16384));
label_2928bc:
    // 0x2928bc: 0xc095ebc  jal         func_257AF0
label_2928c0:
    if (ctx->pc == 0x2928C0u) {
        ctx->pc = 0x2928C4u;
        goto label_2928c4;
    }
    ctx->pc = 0x2928BCu;
    SET_GPR_U32(ctx, 31, 0x2928C4u);
    ctx->pc = 0x257AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257AF0u, 0x2928BCu, 0x2928C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2928C4u;
label_2928c4:
    // 0x2928c4: 0xc063958  jal         func_18E560
label_2928c8:
    if (ctx->pc == 0x2928C8u) {
        ctx->pc = 0x2928CCu;
        goto label_2928cc;
    }
    ctx->pc = 0x2928C4u;
    SET_GPR_U32(ctx, 31, 0x2928CCu);
    ctx->pc = 0x18E560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18E560u, 0x2928C4u, 0x2928CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2928CCu;
label_2928cc:
    // 0x2928cc: 0xc063a74  jal         func_18E9D0
label_2928d0:
    if (ctx->pc == 0x2928D0u) {
        ctx->pc = 0x2928D4u;
        goto label_2928d4;
    }
    ctx->pc = 0x2928CCu;
    SET_GPR_U32(ctx, 31, 0x2928D4u);
    ctx->pc = 0x18E9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18E9D0u, 0x2928CCu, 0x2928D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2928D4u;
label_2928d4:
    // 0x2928d4: 0xc0a3c28  jal         func_28F0A0
label_2928d8:
    if (ctx->pc == 0x2928D8u) {
        ctx->pc = 0x2928DCu;
        goto label_2928dc;
    }
    ctx->pc = 0x2928D4u;
    SET_GPR_U32(ctx, 31, 0x2928DCu);
    ctx->pc = 0x28F0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F0A0u, 0x2928D4u, 0x2928DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2928DCu;
label_2928dc:
    // 0x2928dc: 0xc0a3d28  jal         func_28F4A0
label_2928e0:
    if (ctx->pc == 0x2928E0u) {
        ctx->pc = 0x2928E4u;
        goto label_2928e4;
    }
    ctx->pc = 0x2928DCu;
    SET_GPR_U32(ctx, 31, 0x2928E4u);
    ctx->pc = 0x28F4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F4A0u, 0x2928DCu, 0x2928E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2928E4u;
label_2928e4:
    // 0x2928e4: 0x7bbf0040  lq          $ra, 0x40($sp)
    ctx->pc = 0x2928e4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2928e8:
    // 0x2928e8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2928e8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2928ec:
    // 0x2928ec: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2928ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2928f0:
    // 0x2928f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2928f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2928f4:
    // 0x2928f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2928f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2928f8:
    // 0x2928f8: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2928f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_2928fc:
    // 0x2928fc: 0x3e00008  jr          $ra
label_292900:
    if (ctx->pc == 0x292900u) {
        ctx->pc = 0x292904u;
        goto label_fallthrough_0x2928fc;
    }
    ctx->pc = 0x2928FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2928FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2928fc:
    ctx->pc = 0x292904u;
}
