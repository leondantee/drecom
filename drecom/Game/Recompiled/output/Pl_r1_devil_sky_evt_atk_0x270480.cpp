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

// Function: Pl_r1_devil_sky_evt_atk
// Address: 0x270480 - 0x2707a8
void Pl_r1_devil_sky_evt_atk_0x270480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Pl_r1_devil_sky_evt_atk_0x270480");
#endif

    switch (ctx->pc) {
        case 0x270480u: goto label_270480;
        case 0x270484u: goto label_270484;
        case 0x270488u: goto label_270488;
        case 0x27048cu: goto label_27048c;
        case 0x270490u: goto label_270490;
        case 0x270494u: goto label_270494;
        case 0x270498u: goto label_270498;
        case 0x27049cu: goto label_27049c;
        case 0x2704a0u: goto label_2704a0;
        case 0x2704a4u: goto label_2704a4;
        case 0x2704a8u: goto label_2704a8;
        case 0x2704acu: goto label_2704ac;
        case 0x2704b0u: goto label_2704b0;
        case 0x2704b4u: goto label_2704b4;
        case 0x2704b8u: goto label_2704b8;
        case 0x2704bcu: goto label_2704bc;
        case 0x2704c0u: goto label_2704c0;
        case 0x2704c4u: goto label_2704c4;
        case 0x2704c8u: goto label_2704c8;
        case 0x2704ccu: goto label_2704cc;
        case 0x2704d0u: goto label_2704d0;
        case 0x2704d4u: goto label_2704d4;
        case 0x2704d8u: goto label_2704d8;
        case 0x2704dcu: goto label_2704dc;
        case 0x2704e0u: goto label_2704e0;
        case 0x2704e4u: goto label_2704e4;
        case 0x2704e8u: goto label_2704e8;
        case 0x2704ecu: goto label_2704ec;
        case 0x2704f0u: goto label_2704f0;
        case 0x2704f4u: goto label_2704f4;
        case 0x2704f8u: goto label_2704f8;
        case 0x2704fcu: goto label_2704fc;
        case 0x270500u: goto label_270500;
        case 0x270504u: goto label_270504;
        case 0x270508u: goto label_270508;
        case 0x27050cu: goto label_27050c;
        case 0x270510u: goto label_270510;
        case 0x270514u: goto label_270514;
        case 0x270518u: goto label_270518;
        case 0x27051cu: goto label_27051c;
        case 0x270520u: goto label_270520;
        case 0x270524u: goto label_270524;
        case 0x270528u: goto label_270528;
        case 0x27052cu: goto label_27052c;
        case 0x270530u: goto label_270530;
        case 0x270534u: goto label_270534;
        case 0x270538u: goto label_270538;
        case 0x27053cu: goto label_27053c;
        case 0x270540u: goto label_270540;
        case 0x270544u: goto label_270544;
        case 0x270548u: goto label_270548;
        case 0x27054cu: goto label_27054c;
        case 0x270550u: goto label_270550;
        case 0x270554u: goto label_270554;
        case 0x270558u: goto label_270558;
        case 0x27055cu: goto label_27055c;
        case 0x270560u: goto label_270560;
        case 0x270564u: goto label_270564;
        case 0x270568u: goto label_270568;
        case 0x27056cu: goto label_27056c;
        case 0x270570u: goto label_270570;
        case 0x270574u: goto label_270574;
        case 0x270578u: goto label_270578;
        case 0x27057cu: goto label_27057c;
        case 0x270580u: goto label_270580;
        case 0x270584u: goto label_270584;
        case 0x270588u: goto label_270588;
        case 0x27058cu: goto label_27058c;
        case 0x270590u: goto label_270590;
        case 0x270594u: goto label_270594;
        case 0x270598u: goto label_270598;
        case 0x27059cu: goto label_27059c;
        case 0x2705a0u: goto label_2705a0;
        case 0x2705a4u: goto label_2705a4;
        case 0x2705a8u: goto label_2705a8;
        case 0x2705acu: goto label_2705ac;
        case 0x2705b0u: goto label_2705b0;
        case 0x2705b4u: goto label_2705b4;
        case 0x2705b8u: goto label_2705b8;
        case 0x2705bcu: goto label_2705bc;
        case 0x2705c0u: goto label_2705c0;
        case 0x2705c4u: goto label_2705c4;
        case 0x2705c8u: goto label_2705c8;
        case 0x2705ccu: goto label_2705cc;
        case 0x2705d0u: goto label_2705d0;
        case 0x2705d4u: goto label_2705d4;
        case 0x2705d8u: goto label_2705d8;
        case 0x2705dcu: goto label_2705dc;
        case 0x2705e0u: goto label_2705e0;
        case 0x2705e4u: goto label_2705e4;
        case 0x2705e8u: goto label_2705e8;
        case 0x2705ecu: goto label_2705ec;
        case 0x2705f0u: goto label_2705f0;
        case 0x2705f4u: goto label_2705f4;
        case 0x2705f8u: goto label_2705f8;
        case 0x2705fcu: goto label_2705fc;
        case 0x270600u: goto label_270600;
        case 0x270604u: goto label_270604;
        case 0x270608u: goto label_270608;
        case 0x27060cu: goto label_27060c;
        case 0x270610u: goto label_270610;
        case 0x270614u: goto label_270614;
        case 0x270618u: goto label_270618;
        case 0x27061cu: goto label_27061c;
        case 0x270620u: goto label_270620;
        case 0x270624u: goto label_270624;
        case 0x270628u: goto label_270628;
        case 0x27062cu: goto label_27062c;
        case 0x270630u: goto label_270630;
        case 0x270634u: goto label_270634;
        case 0x270638u: goto label_270638;
        case 0x27063cu: goto label_27063c;
        case 0x270640u: goto label_270640;
        case 0x270644u: goto label_270644;
        case 0x270648u: goto label_270648;
        case 0x27064cu: goto label_27064c;
        case 0x270650u: goto label_270650;
        case 0x270654u: goto label_270654;
        case 0x270658u: goto label_270658;
        case 0x27065cu: goto label_27065c;
        case 0x270660u: goto label_270660;
        case 0x270664u: goto label_270664;
        case 0x270668u: goto label_270668;
        case 0x27066cu: goto label_27066c;
        case 0x270670u: goto label_270670;
        case 0x270674u: goto label_270674;
        case 0x270678u: goto label_270678;
        case 0x27067cu: goto label_27067c;
        case 0x270680u: goto label_270680;
        case 0x270684u: goto label_270684;
        case 0x270688u: goto label_270688;
        case 0x27068cu: goto label_27068c;
        case 0x270690u: goto label_270690;
        case 0x270694u: goto label_270694;
        case 0x270698u: goto label_270698;
        case 0x27069cu: goto label_27069c;
        case 0x2706a0u: goto label_2706a0;
        case 0x2706a4u: goto label_2706a4;
        case 0x2706a8u: goto label_2706a8;
        case 0x2706acu: goto label_2706ac;
        case 0x2706b0u: goto label_2706b0;
        case 0x2706b4u: goto label_2706b4;
        case 0x2706b8u: goto label_2706b8;
        case 0x2706bcu: goto label_2706bc;
        case 0x2706c0u: goto label_2706c0;
        case 0x2706c4u: goto label_2706c4;
        case 0x2706c8u: goto label_2706c8;
        case 0x2706ccu: goto label_2706cc;
        case 0x2706d0u: goto label_2706d0;
        case 0x2706d4u: goto label_2706d4;
        case 0x2706d8u: goto label_2706d8;
        case 0x2706dcu: goto label_2706dc;
        case 0x2706e0u: goto label_2706e0;
        case 0x2706e4u: goto label_2706e4;
        case 0x2706e8u: goto label_2706e8;
        case 0x2706ecu: goto label_2706ec;
        case 0x2706f0u: goto label_2706f0;
        case 0x2706f4u: goto label_2706f4;
        case 0x2706f8u: goto label_2706f8;
        case 0x2706fcu: goto label_2706fc;
        case 0x270700u: goto label_270700;
        case 0x270704u: goto label_270704;
        case 0x270708u: goto label_270708;
        case 0x27070cu: goto label_27070c;
        case 0x270710u: goto label_270710;
        case 0x270714u: goto label_270714;
        case 0x270718u: goto label_270718;
        case 0x27071cu: goto label_27071c;
        case 0x270720u: goto label_270720;
        case 0x270724u: goto label_270724;
        case 0x270728u: goto label_270728;
        case 0x27072cu: goto label_27072c;
        case 0x270730u: goto label_270730;
        case 0x270734u: goto label_270734;
        case 0x270738u: goto label_270738;
        case 0x27073cu: goto label_27073c;
        case 0x270740u: goto label_270740;
        case 0x270744u: goto label_270744;
        case 0x270748u: goto label_270748;
        case 0x27074cu: goto label_27074c;
        case 0x270750u: goto label_270750;
        case 0x270754u: goto label_270754;
        case 0x270758u: goto label_270758;
        case 0x27075cu: goto label_27075c;
        case 0x270760u: goto label_270760;
        case 0x270764u: goto label_270764;
        case 0x270768u: goto label_270768;
        case 0x27076cu: goto label_27076c;
        case 0x270770u: goto label_270770;
        case 0x270774u: goto label_270774;
        case 0x270778u: goto label_270778;
        case 0x27077cu: goto label_27077c;
        case 0x270780u: goto label_270780;
        case 0x270784u: goto label_270784;
        case 0x270788u: goto label_270788;
        case 0x27078cu: goto label_27078c;
        case 0x270790u: goto label_270790;
        case 0x270794u: goto label_270794;
        case 0x270798u: goto label_270798;
        case 0x27079cu: goto label_27079c;
        case 0x2707a0u: goto label_2707a0;
        case 0x2707a4u: goto label_2707a4;
        default: break;
    }

    ctx->pc = 0x270480u;

label_270480:
    // 0x270480: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x270480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_270484:
    // 0x270484: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x270484u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_270488:
    // 0x270488: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x270488u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_27048c:
    // 0x27048c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x27048cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_270490:
    // 0x270490: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x270490u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_270494:
    // 0x270494: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x270494u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_270498:
    // 0x270498: 0x2ca10008  sltiu       $at, $a1, 0x8
    ctx->pc = 0x270498u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_27049c:
    // 0x27049c: 0x102000b5  beqz        $at, . + 4 + (0xB5 << 2)
label_2704a0:
    if (ctx->pc == 0x2704A0u) {
        ctx->pc = 0x2704A4u;
        goto label_2704a4;
    }
    ctx->pc = 0x27049Cu;
    {
        const bool branch_taken_0x27049c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x27049c) {
            ctx->pc = 0x270774u;
            goto label_270774;
        }
    }
    ctx->pc = 0x2704A4u;
label_2704a4:
    // 0x2704a4: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2704a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_2704a8:
    // 0x2704a8: 0x24641560  addiu       $a0, $v1, 0x1560
    ctx->pc = 0x2704a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 5472));
label_2704ac:
    // 0x2704ac: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x2704acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_2704b0:
    // 0x2704b0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2704b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2704b4:
    // 0x2704b4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2704b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2704b8:
    // 0x2704b8: 0x600008  jr          $v1
label_2704bc:
    if (ctx->pc == 0x2704BCu) {
        ctx->pc = 0x2704C0u;
        goto label_2704c0;
    }
    ctx->pc = 0x2704B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2704B8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2704C0u;
label_2704c0:
    // 0x2704c0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2704c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2704c4:
    // 0x2704c4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2704c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2704c8:
    // 0x2704c8: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2704c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_2704cc:
    // 0x2704cc: 0x24060a71  addiu       $a2, $zero, 0xA71
    ctx->pc = 0x2704ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2673));
label_2704d0:
    // 0x2704d0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2704d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2704d4:
    // 0x2704d4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2704d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_2704d8:
    // 0x2704d8: 0xc0965d0  jal         func_259740
label_2704dc:
    if (ctx->pc == 0x2704DCu) {
        ctx->pc = 0x2704E0u;
        goto label_2704e0;
    }
    ctx->pc = 0x2704D8u;
    SET_GPR_U32(ctx, 31, 0x2704E0u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2704D8u, 0x2704E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2704E0u;
label_2704e0:
    // 0x2704e0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2704e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2704e4:
    // 0x2704e4: 0xa440127c  sh          $zero, 0x127C($v0)
    ctx->pc = 0x2704e4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4732), (uint16_t)GPR_U32(ctx, 0));
label_2704e8:
    // 0x2704e8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2704e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2704ec:
    // 0x2704ec: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2704ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_2704f0:
    // 0x2704f0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2704f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2704f4:
    // 0x2704f4: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2704f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_2704f8:
    // 0x2704f8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2704f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2704fc:
    // 0x2704fc: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2704fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_270500:
    // 0x270500: 0xc096b40  jal         func_25AD00
label_270504:
    if (ctx->pc == 0x270504u) {
        ctx->pc = 0x270508u;
        goto label_270508;
    }
    ctx->pc = 0x270500u;
    SET_GPR_U32(ctx, 31, 0x270508u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x270500u, 0x270508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270508u;
label_270508:
    // 0x270508: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x270508u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_27050c:
    // 0x27050c: 0xc05cd34  jal         func_1734D0
label_270510:
    if (ctx->pc == 0x270510u) {
        ctx->pc = 0x270514u;
        goto label_270514;
    }
    ctx->pc = 0x27050Cu;
    SET_GPR_U32(ctx, 31, 0x270514u);
    ctx->pc = 0x1734D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1734D0u, 0x27050Cu, 0x270514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270514u;
label_270514:
    // 0x270514: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x270514u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_270518:
    // 0x270518: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x270518u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_27051c:
    // 0x27051c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x27051cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_270520:
    // 0x270520: 0xc0574f4  jal         func_15D3D0
label_270524:
    if (ctx->pc == 0x270524u) {
        ctx->pc = 0x270528u;
        goto label_270528;
    }
    ctx->pc = 0x270520u;
    SET_GPR_U32(ctx, 31, 0x270528u);
    ctx->pc = 0x15D3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D3D0u, 0x270520u, 0x270528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270528u;
label_270528:
    // 0x270528: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x270528u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_27052c:
    // 0x27052c: 0xc097530  jal         func_25D4C0
label_270530:
    if (ctx->pc == 0x270530u) {
        ctx->pc = 0x270534u;
        goto label_270534;
    }
    ctx->pc = 0x27052Cu;
    SET_GPR_U32(ctx, 31, 0x270534u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x27052Cu, 0x270534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270534u;
label_270534:
    // 0x270534: 0xc0bcd40  jal         func_2F3500
label_270538:
    if (ctx->pc == 0x270538u) {
        ctx->pc = 0x27053Cu;
        goto label_27053c;
    }
    ctx->pc = 0x270534u;
    SET_GPR_U32(ctx, 31, 0x27053Cu);
    ctx->pc = 0x2F3500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F3500u, 0x270534u, 0x27053Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27053Cu;
label_27053c:
    // 0x27053c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x27053cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_270540:
    // 0x270540: 0x906309df  lbu         $v1, 0x9DF($v1)
    ctx->pc = 0x270540u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2527)));
label_270544:
    // 0x270544: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x270544u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_270548:
    // 0x270548: 0x306300c0  andi        $v1, $v1, 0xC0
    ctx->pc = 0x270548u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)192);
label_27054c:
    // 0x27054c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_270550:
    if (ctx->pc == 0x270550u) {
        ctx->pc = 0x270554u;
        goto label_270554;
    }
    ctx->pc = 0x27054Cu;
    {
        const bool branch_taken_0x27054c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x27054c) {
            ctx->pc = 0x270560u;
            goto label_270560;
        }
    }
    ctx->pc = 0x270554u;
label_270554:
    // 0x270554: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x270554u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_270558:
    // 0x270558: 0xc09b88c  jal         func_26E230
label_27055c:
    if (ctx->pc == 0x27055Cu) {
        ctx->pc = 0x270560u;
        goto label_270560;
    }
    ctx->pc = 0x270558u;
    SET_GPR_U32(ctx, 31, 0x270560u);
    ctx->pc = 0x26E230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26E230u, 0x270558u, 0x270560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270560u;
label_270560:
    // 0x270560: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x270560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_270564:
    // 0x270564: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x270564u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_270568:
    // 0x270568: 0x10600082  beqz        $v1, . + 4 + (0x82 << 2)
label_27056c:
    if (ctx->pc == 0x27056Cu) {
        ctx->pc = 0x270570u;
        goto label_270570;
    }
    ctx->pc = 0x270568u;
    {
        const bool branch_taken_0x270568 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x270568) {
            ctx->pc = 0x270774u;
            goto label_270774;
        }
    }
    ctx->pc = 0x270570u;
label_270570:
    // 0x270570: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x270570u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_270574:
    // 0x270574: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x270574u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_270578:
    // 0x270578: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x270578u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_27057c:
    // 0x27057c: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x27057cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_270580:
    // 0x270580: 0x1000007c  b           . + 4 + (0x7C << 2)
label_270584:
    if (ctx->pc == 0x270584u) {
        ctx->pc = 0x270588u;
        goto label_270588;
    }
    ctx->pc = 0x270580u;
    {
        const bool branch_taken_0x270580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x270580) {
            ctx->pc = 0x270774u;
            goto label_270774;
        }
    }
    ctx->pc = 0x270588u;
label_270588:
    // 0x270588: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x270588u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_27058c:
    // 0x27058c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x27058cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_270590:
    // 0x270590: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x270590u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_270594:
    // 0x270594: 0x24060072  addiu       $a2, $zero, 0x72
    ctx->pc = 0x270594u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
label_270598:
    // 0x270598: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x270598u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27059c:
    // 0x27059c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x27059cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_2705a0:
    // 0x2705a0: 0xc0965d0  jal         func_259740
label_2705a4:
    if (ctx->pc == 0x2705A4u) {
        ctx->pc = 0x2705A8u;
        goto label_2705a8;
    }
    ctx->pc = 0x2705A0u;
    SET_GPR_U32(ctx, 31, 0x2705A8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2705A0u, 0x2705A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2705A8u;
label_2705a8:
    // 0x2705a8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2705a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2705ac:
    // 0x2705ac: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2705acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_2705b0:
    // 0x2705b0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2705b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2705b4:
    // 0x2705b4: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2705b4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_2705b8:
    // 0x2705b8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2705b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2705bc:
    // 0x2705bc: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2705bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2705c0:
    // 0x2705c0: 0xc096b40  jal         func_25AD00
label_2705c4:
    if (ctx->pc == 0x2705C4u) {
        ctx->pc = 0x2705C8u;
        goto label_2705c8;
    }
    ctx->pc = 0x2705C0u;
    SET_GPR_U32(ctx, 31, 0x2705C8u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2705C0u, 0x2705C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2705C8u;
label_2705c8:
    // 0x2705c8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2705c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2705cc:
    // 0x2705cc: 0xc05cd34  jal         func_1734D0
label_2705d0:
    if (ctx->pc == 0x2705D0u) {
        ctx->pc = 0x2705D4u;
        goto label_2705d4;
    }
    ctx->pc = 0x2705CCu;
    SET_GPR_U32(ctx, 31, 0x2705D4u);
    ctx->pc = 0x1734D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1734D0u, 0x2705CCu, 0x2705D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2705D4u;
label_2705d4:
    // 0x2705d4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2705d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2705d8:
    // 0x2705d8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2705d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2705dc:
    // 0x2705dc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2705dcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2705e0:
    // 0x2705e0: 0xc0574f4  jal         func_15D3D0
label_2705e4:
    if (ctx->pc == 0x2705E4u) {
        ctx->pc = 0x2705E8u;
        goto label_2705e8;
    }
    ctx->pc = 0x2705E0u;
    SET_GPR_U32(ctx, 31, 0x2705E8u);
    ctx->pc = 0x15D3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D3D0u, 0x2705E0u, 0x2705E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2705E8u;
label_2705e8:
    // 0x2705e8: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x2705e8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2705ec:
    // 0x2705ec: 0xc097530  jal         func_25D4C0
label_2705f0:
    if (ctx->pc == 0x2705F0u) {
        ctx->pc = 0x2705F4u;
        goto label_2705f4;
    }
    ctx->pc = 0x2705ECu;
    SET_GPR_U32(ctx, 31, 0x2705F4u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x2705ECu, 0x2705F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2705F4u;
label_2705f4:
    // 0x2705f4: 0xc0bccb0  jal         func_2F32C0
label_2705f8:
    if (ctx->pc == 0x2705F8u) {
        ctx->pc = 0x2705FCu;
        goto label_2705fc;
    }
    ctx->pc = 0x2705F4u;
    SET_GPR_U32(ctx, 31, 0x2705FCu);
    ctx->pc = 0x2F32C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F32C0u, 0x2705F4u, 0x2705FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2705FCu;
label_2705fc:
    // 0x2705fc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2705fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_270600:
    // 0x270600: 0x906309df  lbu         $v1, 0x9DF($v1)
    ctx->pc = 0x270600u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2527)));
label_270604:
    // 0x270604: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x270604u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_270608:
    // 0x270608: 0x306300c0  andi        $v1, $v1, 0xC0
    ctx->pc = 0x270608u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)192);
label_27060c:
    // 0x27060c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_270610:
    if (ctx->pc == 0x270610u) {
        ctx->pc = 0x270614u;
        goto label_270614;
    }
    ctx->pc = 0x27060Cu;
    {
        const bool branch_taken_0x27060c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x27060c) {
            ctx->pc = 0x270620u;
            goto label_270620;
        }
    }
    ctx->pc = 0x270614u;
label_270614:
    // 0x270614: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x270614u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_270618:
    // 0x270618: 0xc09b8cc  jal         func_26E330
label_27061c:
    if (ctx->pc == 0x27061Cu) {
        ctx->pc = 0x270620u;
        goto label_270620;
    }
    ctx->pc = 0x270618u;
    SET_GPR_U32(ctx, 31, 0x270620u);
    ctx->pc = 0x26E330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26E330u, 0x270618u, 0x270620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270620u;
label_270620:
    // 0x270620: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x270620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_270624:
    // 0x270624: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x270624u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_270628:
    // 0x270628: 0x10600052  beqz        $v1, . + 4 + (0x52 << 2)
label_27062c:
    if (ctx->pc == 0x27062Cu) {
        ctx->pc = 0x270630u;
        goto label_270630;
    }
    ctx->pc = 0x270628u;
    {
        const bool branch_taken_0x270628 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x270628) {
            ctx->pc = 0x270774u;
            goto label_270774;
        }
    }
    ctx->pc = 0x270630u;
label_270630:
    // 0x270630: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x270630u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_270634:
    // 0x270634: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x270634u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_270638:
    // 0x270638: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x270638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_27063c:
    // 0x27063c: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x27063cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_270640:
    // 0x270640: 0x1000004c  b           . + 4 + (0x4C << 2)
label_270644:
    if (ctx->pc == 0x270644u) {
        ctx->pc = 0x270648u;
        goto label_270648;
    }
    ctx->pc = 0x270640u;
    {
        const bool branch_taken_0x270640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x270640) {
            ctx->pc = 0x270774u;
            goto label_270774;
        }
    }
    ctx->pc = 0x270648u;
label_270648:
    // 0x270648: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x270648u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_27064c:
    // 0x27064c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x27064cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_270650:
    // 0x270650: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x270650u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_270654:
    // 0x270654: 0x24060073  addiu       $a2, $zero, 0x73
    ctx->pc = 0x270654u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
label_270658:
    // 0x270658: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x270658u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27065c:
    // 0x27065c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x27065cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_270660:
    // 0x270660: 0xc0965d0  jal         func_259740
label_270664:
    if (ctx->pc == 0x270664u) {
        ctx->pc = 0x270668u;
        goto label_270668;
    }
    ctx->pc = 0x270660u;
    SET_GPR_U32(ctx, 31, 0x270668u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x270660u, 0x270668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270668u;
label_270668:
    // 0x270668: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x270668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_27066c:
    // 0x27066c: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x27066cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_270670:
    // 0x270670: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x270670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_270674:
    // 0x270674: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x270674u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_270678:
    // 0x270678: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x270678u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_27067c:
    // 0x27067c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x27067cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_270680:
    // 0x270680: 0xc096b40  jal         func_25AD00
label_270684:
    if (ctx->pc == 0x270684u) {
        ctx->pc = 0x270688u;
        goto label_270688;
    }
    ctx->pc = 0x270680u;
    SET_GPR_U32(ctx, 31, 0x270688u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x270680u, 0x270688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270688u;
label_270688:
    // 0x270688: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x270688u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_27068c:
    // 0x27068c: 0xc05cd34  jal         func_1734D0
label_270690:
    if (ctx->pc == 0x270690u) {
        ctx->pc = 0x270694u;
        goto label_270694;
    }
    ctx->pc = 0x27068Cu;
    SET_GPR_U32(ctx, 31, 0x270694u);
    ctx->pc = 0x1734D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1734D0u, 0x27068Cu, 0x270694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270694u;
label_270694:
    // 0x270694: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x270694u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_270698:
    // 0x270698: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x270698u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_27069c:
    // 0x27069c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x27069cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2706a0:
    // 0x2706a0: 0xc0574f4  jal         func_15D3D0
label_2706a4:
    if (ctx->pc == 0x2706A4u) {
        ctx->pc = 0x2706A8u;
        goto label_2706a8;
    }
    ctx->pc = 0x2706A0u;
    SET_GPR_U32(ctx, 31, 0x2706A8u);
    ctx->pc = 0x15D3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D3D0u, 0x2706A0u, 0x2706A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2706A8u;
label_2706a8:
    // 0x2706a8: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x2706a8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2706ac:
    // 0x2706ac: 0xc097530  jal         func_25D4C0
label_2706b0:
    if (ctx->pc == 0x2706B0u) {
        ctx->pc = 0x2706B4u;
        goto label_2706b4;
    }
    ctx->pc = 0x2706ACu;
    SET_GPR_U32(ctx, 31, 0x2706B4u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x2706ACu, 0x2706B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2706B4u;
label_2706b4:
    // 0x2706b4: 0xc0bcdd0  jal         func_2F3740
label_2706b8:
    if (ctx->pc == 0x2706B8u) {
        ctx->pc = 0x2706BCu;
        goto label_2706bc;
    }
    ctx->pc = 0x2706B4u;
    SET_GPR_U32(ctx, 31, 0x2706BCu);
    ctx->pc = 0x2F3740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F3740u, 0x2706B4u, 0x2706BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2706BCu;
label_2706bc:
    // 0x2706bc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2706bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2706c0:
    // 0x2706c0: 0x906309df  lbu         $v1, 0x9DF($v1)
    ctx->pc = 0x2706c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2527)));
label_2706c4:
    // 0x2706c4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2706c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_2706c8:
    // 0x2706c8: 0x306300c0  andi        $v1, $v1, 0xC0
    ctx->pc = 0x2706c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)192);
label_2706cc:
    // 0x2706cc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_2706d0:
    if (ctx->pc == 0x2706D0u) {
        ctx->pc = 0x2706D4u;
        goto label_2706d4;
    }
    ctx->pc = 0x2706CCu;
    {
        const bool branch_taken_0x2706cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2706cc) {
            ctx->pc = 0x2706E0u;
            goto label_2706e0;
        }
    }
    ctx->pc = 0x2706D4u;
label_2706d4:
    // 0x2706d4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2706d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2706d8:
    // 0x2706d8: 0xc09b90c  jal         func_26E430
label_2706dc:
    if (ctx->pc == 0x2706DCu) {
        ctx->pc = 0x2706E0u;
        goto label_2706e0;
    }
    ctx->pc = 0x2706D8u;
    SET_GPR_U32(ctx, 31, 0x2706E0u);
    ctx->pc = 0x26E430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26E430u, 0x2706D8u, 0x2706E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2706E0u;
label_2706e0:
    // 0x2706e0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2706e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2706e4:
    // 0x2706e4: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2706e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_2706e8:
    // 0x2706e8: 0x10600022  beqz        $v1, . + 4 + (0x22 << 2)
label_2706ec:
    if (ctx->pc == 0x2706ECu) {
        ctx->pc = 0x2706F0u;
        goto label_2706f0;
    }
    ctx->pc = 0x2706E8u;
    {
        const bool branch_taken_0x2706e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2706e8) {
            ctx->pc = 0x270774u;
            goto label_270774;
        }
    }
    ctx->pc = 0x2706F0u;
label_2706f0:
    // 0x2706f0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2706f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2706f4:
    // 0x2706f4: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x2706f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_2706f8:
    // 0x2706f8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2706f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2706fc:
    // 0x2706fc: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x2706fcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_270700:
    // 0x270700: 0x1000001c  b           . + 4 + (0x1C << 2)
label_270704:
    if (ctx->pc == 0x270704u) {
        ctx->pc = 0x270708u;
        goto label_270708;
    }
    ctx->pc = 0x270700u;
    {
        const bool branch_taken_0x270700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x270700) {
            ctx->pc = 0x270774u;
            goto label_270774;
        }
    }
    ctx->pc = 0x270708u;
label_270708:
    // 0x270708: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x270708u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_27070c:
    // 0x27070c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x27070cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_270710:
    // 0x270710: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x270710u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_270714:
    // 0x270714: 0x24061461  addiu       $a2, $zero, 0x1461
    ctx->pc = 0x270714u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5217));
label_270718:
    // 0x270718: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x270718u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27071c:
    // 0x27071c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x27071cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_270720:
    // 0x270720: 0xc0965d0  jal         func_259740
label_270724:
    if (ctx->pc == 0x270724u) {
        ctx->pc = 0x270728u;
        goto label_270728;
    }
    ctx->pc = 0x270720u;
    SET_GPR_U32(ctx, 31, 0x270728u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x270720u, 0x270728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270728u;
label_270728:
    // 0x270728: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x270728u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_27072c:
    // 0x27072c: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x27072cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_270730:
    // 0x270730: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x270730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_270734:
    // 0x270734: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x270734u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_270738:
    // 0x270738: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x270738u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_27073c:
    // 0x27073c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x27073cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_270740:
    // 0x270740: 0xc096b40  jal         func_25AD00
label_270744:
    if (ctx->pc == 0x270744u) {
        ctx->pc = 0x270748u;
        goto label_270748;
    }
    ctx->pc = 0x270740u;
    SET_GPR_U32(ctx, 31, 0x270748u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x270740u, 0x270748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270748u;
label_270748:
    // 0x270748: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x270748u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_27074c:
    // 0x27074c: 0xc05cd34  jal         func_1734D0
label_270750:
    if (ctx->pc == 0x270750u) {
        ctx->pc = 0x270754u;
        goto label_270754;
    }
    ctx->pc = 0x27074Cu;
    SET_GPR_U32(ctx, 31, 0x270754u);
    ctx->pc = 0x1734D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1734D0u, 0x27074Cu, 0x270754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270754u;
label_270754:
    // 0x270754: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x270754u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_270758:
    // 0x270758: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x270758u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_27075c:
    // 0x27075c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x27075cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_270760:
    // 0x270760: 0xc0574f4  jal         func_15D3D0
label_270764:
    if (ctx->pc == 0x270764u) {
        ctx->pc = 0x270768u;
        goto label_270768;
    }
    ctx->pc = 0x270760u;
    SET_GPR_U32(ctx, 31, 0x270768u);
    ctx->pc = 0x15D3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D3D0u, 0x270760u, 0x270768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270768u;
label_270768:
    // 0x270768: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x270768u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_27076c:
    // 0x27076c: 0xc097530  jal         func_25D4C0
label_270770:
    if (ctx->pc == 0x270770u) {
        ctx->pc = 0x270774u;
        goto label_270774;
    }
    ctx->pc = 0x27076Cu;
    SET_GPR_U32(ctx, 31, 0x270774u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x27076Cu, 0x270774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270774u;
label_270774:
    // 0x270774: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x270774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_270778:
    // 0x270778: 0x8463127c  lh          $v1, 0x127C($v1)
    ctx->pc = 0x270778u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4732)));
label_27077c:
    // 0x27077c: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x27077cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_270780:
    // 0x270780: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x270780u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_270784:
    // 0x270784: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x270784u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
label_270788:
    // 0x270788: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_27078c:
    if (ctx->pc == 0x27078Cu) {
        ctx->pc = 0x270790u;
        goto label_270790;
    }
    ctx->pc = 0x270788u;
    {
        const bool branch_taken_0x270788 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x270788) {
            ctx->pc = 0x270798u;
            goto label_270798;
        }
    }
    ctx->pc = 0x270790u;
label_270790:
    // 0x270790: 0xc0bc094  jal         func_2F0250
label_270794:
    if (ctx->pc == 0x270794u) {
        ctx->pc = 0x270798u;
        goto label_270798;
    }
    ctx->pc = 0x270790u;
    SET_GPR_U32(ctx, 31, 0x270798u);
    ctx->pc = 0x2F0250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0250u, 0x270790u, 0x270798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270798u;
label_270798:
    // 0x270798: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x270798u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_27079c:
    // 0x27079c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x27079cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2707a0:
    // 0x2707a0: 0x3e00008  jr          $ra
label_2707a4:
    if (ctx->pc == 0x2707A4u) {
        ctx->pc = 0x2707A8u;
        goto label_fallthrough_0x2707a0;
    }
    ctx->pc = 0x2707A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2707A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2707a0:
    ctx->pc = 0x2707A8u;
}
