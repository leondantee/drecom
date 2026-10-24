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

// Function: Em01_R1_die_rear
// Address: 0x3073a0 - 0x307610
void Em01_R1_die_rear_0x3073a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em01_R1_die_rear_0x3073a0");
#endif

    switch (ctx->pc) {
        case 0x3073a0u: goto label_3073a0;
        case 0x3073a4u: goto label_3073a4;
        case 0x3073a8u: goto label_3073a8;
        case 0x3073acu: goto label_3073ac;
        case 0x3073b0u: goto label_3073b0;
        case 0x3073b4u: goto label_3073b4;
        case 0x3073b8u: goto label_3073b8;
        case 0x3073bcu: goto label_3073bc;
        case 0x3073c0u: goto label_3073c0;
        case 0x3073c4u: goto label_3073c4;
        case 0x3073c8u: goto label_3073c8;
        case 0x3073ccu: goto label_3073cc;
        case 0x3073d0u: goto label_3073d0;
        case 0x3073d4u: goto label_3073d4;
        case 0x3073d8u: goto label_3073d8;
        case 0x3073dcu: goto label_3073dc;
        case 0x3073e0u: goto label_3073e0;
        case 0x3073e4u: goto label_3073e4;
        case 0x3073e8u: goto label_3073e8;
        case 0x3073ecu: goto label_3073ec;
        case 0x3073f0u: goto label_3073f0;
        case 0x3073f4u: goto label_3073f4;
        case 0x3073f8u: goto label_3073f8;
        case 0x3073fcu: goto label_3073fc;
        case 0x307400u: goto label_307400;
        case 0x307404u: goto label_307404;
        case 0x307408u: goto label_307408;
        case 0x30740cu: goto label_30740c;
        case 0x307410u: goto label_307410;
        case 0x307414u: goto label_307414;
        case 0x307418u: goto label_307418;
        case 0x30741cu: goto label_30741c;
        case 0x307420u: goto label_307420;
        case 0x307424u: goto label_307424;
        case 0x307428u: goto label_307428;
        case 0x30742cu: goto label_30742c;
        case 0x307430u: goto label_307430;
        case 0x307434u: goto label_307434;
        case 0x307438u: goto label_307438;
        case 0x30743cu: goto label_30743c;
        case 0x307440u: goto label_307440;
        case 0x307444u: goto label_307444;
        case 0x307448u: goto label_307448;
        case 0x30744cu: goto label_30744c;
        case 0x307450u: goto label_307450;
        case 0x307454u: goto label_307454;
        case 0x307458u: goto label_307458;
        case 0x30745cu: goto label_30745c;
        case 0x307460u: goto label_307460;
        case 0x307464u: goto label_307464;
        case 0x307468u: goto label_307468;
        case 0x30746cu: goto label_30746c;
        case 0x307470u: goto label_307470;
        case 0x307474u: goto label_307474;
        case 0x307478u: goto label_307478;
        case 0x30747cu: goto label_30747c;
        case 0x307480u: goto label_307480;
        case 0x307484u: goto label_307484;
        case 0x307488u: goto label_307488;
        case 0x30748cu: goto label_30748c;
        case 0x307490u: goto label_307490;
        case 0x307494u: goto label_307494;
        case 0x307498u: goto label_307498;
        case 0x30749cu: goto label_30749c;
        case 0x3074a0u: goto label_3074a0;
        case 0x3074a4u: goto label_3074a4;
        case 0x3074a8u: goto label_3074a8;
        case 0x3074acu: goto label_3074ac;
        case 0x3074b0u: goto label_3074b0;
        case 0x3074b4u: goto label_3074b4;
        case 0x3074b8u: goto label_3074b8;
        case 0x3074bcu: goto label_3074bc;
        case 0x3074c0u: goto label_3074c0;
        case 0x3074c4u: goto label_3074c4;
        case 0x3074c8u: goto label_3074c8;
        case 0x3074ccu: goto label_3074cc;
        case 0x3074d0u: goto label_3074d0;
        case 0x3074d4u: goto label_3074d4;
        case 0x3074d8u: goto label_3074d8;
        case 0x3074dcu: goto label_3074dc;
        case 0x3074e0u: goto label_3074e0;
        case 0x3074e4u: goto label_3074e4;
        case 0x3074e8u: goto label_3074e8;
        case 0x3074ecu: goto label_3074ec;
        case 0x3074f0u: goto label_3074f0;
        case 0x3074f4u: goto label_3074f4;
        case 0x3074f8u: goto label_3074f8;
        case 0x3074fcu: goto label_3074fc;
        case 0x307500u: goto label_307500;
        case 0x307504u: goto label_307504;
        case 0x307508u: goto label_307508;
        case 0x30750cu: goto label_30750c;
        case 0x307510u: goto label_307510;
        case 0x307514u: goto label_307514;
        case 0x307518u: goto label_307518;
        case 0x30751cu: goto label_30751c;
        case 0x307520u: goto label_307520;
        case 0x307524u: goto label_307524;
        case 0x307528u: goto label_307528;
        case 0x30752cu: goto label_30752c;
        case 0x307530u: goto label_307530;
        case 0x307534u: goto label_307534;
        case 0x307538u: goto label_307538;
        case 0x30753cu: goto label_30753c;
        case 0x307540u: goto label_307540;
        case 0x307544u: goto label_307544;
        case 0x307548u: goto label_307548;
        case 0x30754cu: goto label_30754c;
        case 0x307550u: goto label_307550;
        case 0x307554u: goto label_307554;
        case 0x307558u: goto label_307558;
        case 0x30755cu: goto label_30755c;
        case 0x307560u: goto label_307560;
        case 0x307564u: goto label_307564;
        case 0x307568u: goto label_307568;
        case 0x30756cu: goto label_30756c;
        case 0x307570u: goto label_307570;
        case 0x307574u: goto label_307574;
        case 0x307578u: goto label_307578;
        case 0x30757cu: goto label_30757c;
        case 0x307580u: goto label_307580;
        case 0x307584u: goto label_307584;
        case 0x307588u: goto label_307588;
        case 0x30758cu: goto label_30758c;
        case 0x307590u: goto label_307590;
        case 0x307594u: goto label_307594;
        case 0x307598u: goto label_307598;
        case 0x30759cu: goto label_30759c;
        case 0x3075a0u: goto label_3075a0;
        case 0x3075a4u: goto label_3075a4;
        case 0x3075a8u: goto label_3075a8;
        case 0x3075acu: goto label_3075ac;
        case 0x3075b0u: goto label_3075b0;
        case 0x3075b4u: goto label_3075b4;
        case 0x3075b8u: goto label_3075b8;
        case 0x3075bcu: goto label_3075bc;
        case 0x3075c0u: goto label_3075c0;
        case 0x3075c4u: goto label_3075c4;
        case 0x3075c8u: goto label_3075c8;
        case 0x3075ccu: goto label_3075cc;
        case 0x3075d0u: goto label_3075d0;
        case 0x3075d4u: goto label_3075d4;
        case 0x3075d8u: goto label_3075d8;
        case 0x3075dcu: goto label_3075dc;
        case 0x3075e0u: goto label_3075e0;
        case 0x3075e4u: goto label_3075e4;
        case 0x3075e8u: goto label_3075e8;
        case 0x3075ecu: goto label_3075ec;
        case 0x3075f0u: goto label_3075f0;
        case 0x3075f4u: goto label_3075f4;
        case 0x3075f8u: goto label_3075f8;
        case 0x3075fcu: goto label_3075fc;
        case 0x307600u: goto label_307600;
        case 0x307604u: goto label_307604;
        case 0x307608u: goto label_307608;
        case 0x30760cu: goto label_30760c;
        default: break;
    }

    ctx->pc = 0x3073a0u;

label_3073a0:
    // 0x3073a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3073a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3073a4:
    // 0x3073a4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x3073a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_3073a8:
    // 0x3073a8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x3073a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_3073ac:
    // 0x3073ac: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3073acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_3073b0:
    // 0x3073b0: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x3073b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_3073b4:
    // 0x3073b4: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x3073b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_3073b8:
    // 0x3073b8: 0x2ca10006  sltiu       $at, $a1, 0x6
    ctx->pc = 0x3073b8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_3073bc:
    // 0x3073bc: 0x10200090  beqz        $at, . + 4 + (0x90 << 2)
label_3073c0:
    if (ctx->pc == 0x3073C0u) {
        ctx->pc = 0x3073C4u;
        goto label_3073c4;
    }
    ctx->pc = 0x3073BCu;
    {
        const bool branch_taken_0x3073bc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3073bc) {
            ctx->pc = 0x307600u;
            goto label_307600;
        }
    }
    ctx->pc = 0x3073C4u;
label_3073c4:
    // 0x3073c4: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x3073c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_3073c8:
    // 0x3073c8: 0x24641bb0  addiu       $a0, $v1, 0x1BB0
    ctx->pc = 0x3073c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 7088));
label_3073cc:
    // 0x3073cc: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x3073ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_3073d0:
    // 0x3073d0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3073d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3073d4:
    // 0x3073d4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3073d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3073d8:
    // 0x3073d8: 0x600008  jr          $v1
label_3073dc:
    if (ctx->pc == 0x3073DCu) {
        ctx->pc = 0x3073E0u;
        goto label_3073e0;
    }
    ctx->pc = 0x3073D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3073D8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3073E0u;
label_3073e0:
    // 0x3073e0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x3073e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_3073e4:
    // 0x3073e4: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x3073e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
label_3073e8:
    // 0x3073e8: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x3073e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_3073ec:
    // 0x3073ec: 0xc0c7a0c  jal         func_31E830
label_3073f0:
    if (ctx->pc == 0x3073F0u) {
        ctx->pc = 0x3073F4u;
        goto label_3073f4;
    }
    ctx->pc = 0x3073ECu;
    SET_GPR_U32(ctx, 31, 0x3073F4u);
    ctx->pc = 0x31E830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E830u, 0x3073ECu, 0x3073F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3073F4u;
label_3073f4:
    // 0x3073f4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3073f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_3073f8:
    // 0x3073f8: 0x8c8311a0  lw          $v1, 0x11A0($a0)
    ctx->pc = 0x3073f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4512)));
label_3073fc:
    // 0x3073fc: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x3073fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_307400:
    // 0x307400: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x307400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_307404:
    // 0x307404: 0xac8211a0  sw          $v0, 0x11A0($a0)
    ctx->pc = 0x307404u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4512), GPR_U32(ctx, 2));
label_307408:
    // 0x307408: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x307408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_30740c:
    // 0x30740c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x30740cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_307410:
    // 0x307410: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x307410u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_307414:
    // 0x307414: 0x24065a19  addiu       $a2, $zero, 0x5A19
    ctx->pc = 0x307414u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23065));
label_307418:
    // 0x307418: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x307418u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30741c:
    // 0x30741c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x30741cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_307420:
    // 0x307420: 0xc0965d0  jal         func_259740
label_307424:
    if (ctx->pc == 0x307424u) {
        ctx->pc = 0x307428u;
        goto label_307428;
    }
    ctx->pc = 0x307420u;
    SET_GPR_U32(ctx, 31, 0x307428u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x307420u, 0x307428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307428u;
label_307428:
    // 0x307428: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x307428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_30742c:
    // 0x30742c: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x30742cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
label_307430:
    // 0x307430: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x307430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_307434:
    // 0x307434: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x307434u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_307438:
    // 0x307438: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x307438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_30743c:
    // 0x30743c: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x30743cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_307440:
    // 0x307440: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x307440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_307444:
    // 0x307444: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x307444u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
label_307448:
    // 0x307448: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x307448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_30744c:
    // 0x30744c: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x30744cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
label_307450:
    // 0x307450: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x307450u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_307454:
    // 0x307454: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x307454u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_307458:
    // 0x307458: 0xc096b40  jal         func_25AD00
label_30745c:
    if (ctx->pc == 0x30745Cu) {
        ctx->pc = 0x307460u;
        goto label_307460;
    }
    ctx->pc = 0x307458u;
    SET_GPR_U32(ctx, 31, 0x307460u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x307458u, 0x307460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307460u;
label_307460:
    // 0x307460: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x307460u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_307464:
    // 0x307464: 0xc05cd10  jal         func_173440
label_307468:
    if (ctx->pc == 0x307468u) {
        ctx->pc = 0x30746Cu;
        goto label_30746c;
    }
    ctx->pc = 0x307464u;
    SET_GPR_U32(ctx, 31, 0x30746Cu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x307464u, 0x30746Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30746Cu;
label_30746c:
    // 0x30746c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x30746cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_307470:
    // 0x307470: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x307470u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_307474:
    // 0x307474: 0xc05cec4  jal         func_173B10
label_307478:
    if (ctx->pc == 0x307478u) {
        ctx->pc = 0x30747Cu;
        goto label_30747c;
    }
    ctx->pc = 0x307474u;
    SET_GPR_U32(ctx, 31, 0x30747Cu);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x307474u, 0x30747Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30747Cu;
label_30747c:
    // 0x30747c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x30747cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_307480:
    // 0x307480: 0xc0974c8  jal         func_25D320
label_307484:
    if (ctx->pc == 0x307484u) {
        ctx->pc = 0x307488u;
        goto label_307488;
    }
    ctx->pc = 0x307480u;
    SET_GPR_U32(ctx, 31, 0x307488u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x307480u, 0x307488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307488u;
label_307488:
    // 0x307488: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x307488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_30748c:
    // 0x30748c: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x30748cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_307490:
    // 0x307490: 0x1060005b  beqz        $v1, . + 4 + (0x5B << 2)
label_307494:
    if (ctx->pc == 0x307494u) {
        ctx->pc = 0x307498u;
        goto label_307498;
    }
    ctx->pc = 0x307490u;
    {
        const bool branch_taken_0x307490 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x307490) {
            ctx->pc = 0x307600u;
            goto label_307600;
        }
    }
    ctx->pc = 0x307498u;
label_307498:
    // 0x307498: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x307498u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_30749c:
    // 0x30749c: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x30749cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_3074a0:
    // 0x3074a0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3074a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3074a4:
    // 0x3074a4: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x3074a4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_3074a8:
    // 0x3074a8: 0x10000055  b           . + 4 + (0x55 << 2)
label_3074ac:
    if (ctx->pc == 0x3074ACu) {
        ctx->pc = 0x3074B0u;
        goto label_3074b0;
    }
    ctx->pc = 0x3074A8u;
    {
        const bool branch_taken_0x3074a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3074a8) {
            ctx->pc = 0x307600u;
            goto label_307600;
        }
    }
    ctx->pc = 0x3074B0u;
label_3074b0:
    // 0x3074b0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x3074b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
label_3074b4:
    // 0x3074b4: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x3074b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 29960)));
label_3074b8:
    // 0x3074b8: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x3074b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_3074bc:
    // 0x3074bc: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x3074bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3074c0:
    // 0x3074c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3074c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3074c4:
    // 0x3074c4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3074c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_3074c8:
    // 0x3074c8: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x3074c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_3074cc:
    // 0x3074cc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x3074ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
label_3074d0:
    // 0x3074d0: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x3074d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 29960)));
label_3074d4:
    // 0x3074d4: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x3074d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_3074d8:
    // 0x3074d8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x3074d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3074dc:
    // 0x3074dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3074dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3074e0:
    // 0x3074e0: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x3074e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
label_3074e4:
    // 0x3074e4: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x3074e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
label_3074e8:
    // 0x3074e8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x3074e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_3074ec:
    // 0x3074ec: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x3074ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
label_3074f0:
    // 0x3074f0: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x3074f0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 29960), GPR_U32(ctx, 2));
label_3074f4:
    // 0x3074f4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3074f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_3074f8:
    // 0x3074f8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3074f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3074fc:
    // 0x3074fc: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x3074fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
label_307500:
    // 0x307500: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x307500u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_307504:
    // 0x307504: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x307504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_307508:
    // 0x307508: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x307508u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
label_30750c:
    // 0x30750c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30750cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_307510:
    // 0x307510: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x307510u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
label_307514:
    // 0x307514: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x307514u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_307518:
    // 0x307518: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x307518u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
label_30751c:
    // 0x30751c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30751cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_307520:
    // 0x307520: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x307520u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
label_307524:
    // 0x307524: 0x2442001e  addiu       $v0, $v0, 0x1E
    ctx->pc = 0x307524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30));
label_307528:
    // 0x307528: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x307528u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
label_30752c:
    // 0x30752c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30752cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_307530:
    // 0x307530: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x307530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_307534:
    // 0x307534: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x307534u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
label_307538:
    // 0x307538: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x307538u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_30753c:
    // 0x30753c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x30753cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_307540:
    // 0x307540: 0x34465a00  ori         $a2, $v0, 0x5A00
    ctx->pc = 0x307540u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)23040);
label_307544:
    // 0x307544: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x307544u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_307548:
    // 0x307548: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x307548u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
label_30754c:
    // 0x30754c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x30754cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_307550:
    // 0x307550: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x307550u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_307554:
    // 0x307554: 0xc0965d0  jal         func_259740
label_307558:
    if (ctx->pc == 0x307558u) {
        ctx->pc = 0x30755Cu;
        goto label_30755c;
    }
    ctx->pc = 0x307554u;
    SET_GPR_U32(ctx, 31, 0x30755Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x307554u, 0x30755Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30755Cu;
label_30755c:
    // 0x30755c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30755cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_307560:
    // 0x307560: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x307560u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_307564:
    // 0x307564: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x307564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_307568:
    // 0x307568: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x307568u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_30756c:
    // 0x30756c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x30756cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_307570:
    // 0x307570: 0xc0974c8  jal         func_25D320
label_307574:
    if (ctx->pc == 0x307574u) {
        ctx->pc = 0x307578u;
        goto label_307578;
    }
    ctx->pc = 0x307570u;
    SET_GPR_U32(ctx, 31, 0x307578u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x307570u, 0x307578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307578u;
label_307578:
    // 0x307578: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x307578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_30757c:
    // 0x30757c: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x30757cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_307580:
    // 0x307580: 0x1060001f  beqz        $v1, . + 4 + (0x1F << 2)
label_307584:
    if (ctx->pc == 0x307584u) {
        ctx->pc = 0x307588u;
        goto label_307588;
    }
    ctx->pc = 0x307580u;
    {
        const bool branch_taken_0x307580 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x307580) {
            ctx->pc = 0x307600u;
            goto label_307600;
        }
    }
    ctx->pc = 0x307588u;
label_307588:
    // 0x307588: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x307588u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_30758c:
    // 0x30758c: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x30758cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_307590:
    // 0x307590: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x307590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_307594:
    // 0x307594: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x307594u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_307598:
    // 0x307598: 0x10000019  b           . + 4 + (0x19 << 2)
label_30759c:
    if (ctx->pc == 0x30759Cu) {
        ctx->pc = 0x3075A0u;
        goto label_3075a0;
    }
    ctx->pc = 0x307598u;
    {
        const bool branch_taken_0x307598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x307598) {
            ctx->pc = 0x307600u;
            goto label_307600;
        }
    }
    ctx->pc = 0x3075A0u;
label_3075a0:
    // 0x3075a0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3075a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_3075a4:
    // 0x3075a4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x3075a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_3075a8:
    // 0x3075a8: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x3075a8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
label_3075ac:
    // 0x3075ac: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x3075acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_3075b0:
    // 0x3075b0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3075b0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_3075b4:
    // 0x3075b4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3075b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3075b8:
    // 0x3075b8: 0x34465a00  ori         $a2, $v0, 0x5A00
    ctx->pc = 0x3075b8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)23040);
label_3075bc:
    // 0x3075bc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3075bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_3075c0:
    // 0x3075c0: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x3075c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
label_3075c4:
    // 0x3075c4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3075c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3075c8:
    // 0x3075c8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x3075c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_3075cc:
    // 0x3075cc: 0xc0965d0  jal         func_259740
label_3075d0:
    if (ctx->pc == 0x3075D0u) {
        ctx->pc = 0x3075D4u;
        goto label_3075d4;
    }
    ctx->pc = 0x3075CCu;
    SET_GPR_U32(ctx, 31, 0x3075D4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x3075CCu, 0x3075D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3075D4u;
label_3075d4:
    // 0x3075d4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3075d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_3075d8:
    // 0x3075d8: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x3075d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_3075dc:
    // 0x3075dc: 0x34420200  ori         $v0, $v0, 0x200
    ctx->pc = 0x3075dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
label_3075e0:
    // 0x3075e0: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x3075e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_3075e4:
    // 0x3075e4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3075e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_3075e8:
    // 0x3075e8: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x3075e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_3075ec:
    // 0x3075ec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3075ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3075f0:
    // 0x3075f0: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x3075f0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_3075f4:
    // 0x3075f4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3075f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_3075f8:
    // 0x3075f8: 0xc0974c8  jal         func_25D320
label_3075fc:
    if (ctx->pc == 0x3075FCu) {
        ctx->pc = 0x307600u;
        goto label_307600;
    }
    ctx->pc = 0x3075F8u;
    SET_GPR_U32(ctx, 31, 0x307600u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x3075F8u, 0x307600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307600u;
label_307600:
    // 0x307600: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x307600u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_307604:
    // 0x307604: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x307604u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_307608:
    // 0x307608: 0x3e00008  jr          $ra
label_30760c:
    if (ctx->pc == 0x30760Cu) {
        ctx->pc = 0x307610u;
        goto label_fallthrough_0x307608;
    }
    ctx->pc = 0x307608u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x307608u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x307608:
    ctx->pc = 0x307610u;
}
