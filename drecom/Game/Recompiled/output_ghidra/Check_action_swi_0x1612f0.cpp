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

// Function: Check_action_swi
// Address: 0x1612f0 - 0x161764
void Check_action_swi_0x1612f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Check_action_swi_0x1612f0");
#endif

    switch (ctx->pc) {
        case 0x1612f0u: goto label_1612f0;
        case 0x1612f4u: goto label_1612f4;
        case 0x1612f8u: goto label_1612f8;
        case 0x1612fcu: goto label_1612fc;
        case 0x161300u: goto label_161300;
        case 0x161304u: goto label_161304;
        case 0x161308u: goto label_161308;
        case 0x16130cu: goto label_16130c;
        case 0x161310u: goto label_161310;
        case 0x161314u: goto label_161314;
        case 0x161318u: goto label_161318;
        case 0x16131cu: goto label_16131c;
        case 0x161320u: goto label_161320;
        case 0x161324u: goto label_161324;
        case 0x161328u: goto label_161328;
        case 0x16132cu: goto label_16132c;
        case 0x161330u: goto label_161330;
        case 0x161334u: goto label_161334;
        case 0x161338u: goto label_161338;
        case 0x16133cu: goto label_16133c;
        case 0x161340u: goto label_161340;
        case 0x161344u: goto label_161344;
        case 0x161348u: goto label_161348;
        case 0x16134cu: goto label_16134c;
        case 0x161350u: goto label_161350;
        case 0x161354u: goto label_161354;
        case 0x161358u: goto label_161358;
        case 0x16135cu: goto label_16135c;
        case 0x161360u: goto label_161360;
        case 0x161364u: goto label_161364;
        case 0x161368u: goto label_161368;
        case 0x16136cu: goto label_16136c;
        case 0x161370u: goto label_161370;
        case 0x161374u: goto label_161374;
        case 0x161378u: goto label_161378;
        case 0x16137cu: goto label_16137c;
        case 0x161380u: goto label_161380;
        case 0x161384u: goto label_161384;
        case 0x161388u: goto label_161388;
        case 0x16138cu: goto label_16138c;
        case 0x161390u: goto label_161390;
        case 0x161394u: goto label_161394;
        case 0x161398u: goto label_161398;
        case 0x16139cu: goto label_16139c;
        case 0x1613a0u: goto label_1613a0;
        case 0x1613a4u: goto label_1613a4;
        case 0x1613a8u: goto label_1613a8;
        case 0x1613acu: goto label_1613ac;
        case 0x1613b0u: goto label_1613b0;
        case 0x1613b4u: goto label_1613b4;
        case 0x1613b8u: goto label_1613b8;
        case 0x1613bcu: goto label_1613bc;
        case 0x1613c0u: goto label_1613c0;
        case 0x1613c4u: goto label_1613c4;
        case 0x1613c8u: goto label_1613c8;
        case 0x1613ccu: goto label_1613cc;
        case 0x1613d0u: goto label_1613d0;
        case 0x1613d4u: goto label_1613d4;
        case 0x1613d8u: goto label_1613d8;
        case 0x1613dcu: goto label_1613dc;
        case 0x1613e0u: goto label_1613e0;
        case 0x1613e4u: goto label_1613e4;
        case 0x1613e8u: goto label_1613e8;
        case 0x1613ecu: goto label_1613ec;
        case 0x1613f0u: goto label_1613f0;
        case 0x1613f4u: goto label_1613f4;
        case 0x1613f8u: goto label_1613f8;
        case 0x1613fcu: goto label_1613fc;
        case 0x161400u: goto label_161400;
        case 0x161404u: goto label_161404;
        case 0x161408u: goto label_161408;
        case 0x16140cu: goto label_16140c;
        case 0x161410u: goto label_161410;
        case 0x161414u: goto label_161414;
        case 0x161418u: goto label_161418;
        case 0x16141cu: goto label_16141c;
        case 0x161420u: goto label_161420;
        case 0x161424u: goto label_161424;
        case 0x161428u: goto label_161428;
        case 0x16142cu: goto label_16142c;
        case 0x161430u: goto label_161430;
        case 0x161434u: goto label_161434;
        case 0x161438u: goto label_161438;
        case 0x16143cu: goto label_16143c;
        case 0x161440u: goto label_161440;
        case 0x161444u: goto label_161444;
        case 0x161448u: goto label_161448;
        case 0x16144cu: goto label_16144c;
        case 0x161450u: goto label_161450;
        case 0x161454u: goto label_161454;
        case 0x161458u: goto label_161458;
        case 0x16145cu: goto label_16145c;
        case 0x161460u: goto label_161460;
        case 0x161464u: goto label_161464;
        case 0x161468u: goto label_161468;
        case 0x16146cu: goto label_16146c;
        case 0x161470u: goto label_161470;
        case 0x161474u: goto label_161474;
        case 0x161478u: goto label_161478;
        case 0x16147cu: goto label_16147c;
        case 0x161480u: goto label_161480;
        case 0x161484u: goto label_161484;
        case 0x161488u: goto label_161488;
        case 0x16148cu: goto label_16148c;
        case 0x161490u: goto label_161490;
        case 0x161494u: goto label_161494;
        case 0x161498u: goto label_161498;
        case 0x16149cu: goto label_16149c;
        case 0x1614a0u: goto label_1614a0;
        case 0x1614a4u: goto label_1614a4;
        case 0x1614a8u: goto label_1614a8;
        case 0x1614acu: goto label_1614ac;
        case 0x1614b0u: goto label_1614b0;
        case 0x1614b4u: goto label_1614b4;
        case 0x1614b8u: goto label_1614b8;
        case 0x1614bcu: goto label_1614bc;
        case 0x1614c0u: goto label_1614c0;
        case 0x1614c4u: goto label_1614c4;
        case 0x1614c8u: goto label_1614c8;
        case 0x1614ccu: goto label_1614cc;
        case 0x1614d0u: goto label_1614d0;
        case 0x1614d4u: goto label_1614d4;
        case 0x1614d8u: goto label_1614d8;
        case 0x1614dcu: goto label_1614dc;
        case 0x1614e0u: goto label_1614e0;
        case 0x1614e4u: goto label_1614e4;
        case 0x1614e8u: goto label_1614e8;
        case 0x1614ecu: goto label_1614ec;
        case 0x1614f0u: goto label_1614f0;
        case 0x1614f4u: goto label_1614f4;
        case 0x1614f8u: goto label_1614f8;
        case 0x1614fcu: goto label_1614fc;
        case 0x161500u: goto label_161500;
        case 0x161504u: goto label_161504;
        case 0x161508u: goto label_161508;
        case 0x16150cu: goto label_16150c;
        case 0x161510u: goto label_161510;
        case 0x161514u: goto label_161514;
        case 0x161518u: goto label_161518;
        case 0x16151cu: goto label_16151c;
        case 0x161520u: goto label_161520;
        case 0x161524u: goto label_161524;
        case 0x161528u: goto label_161528;
        case 0x16152cu: goto label_16152c;
        case 0x161530u: goto label_161530;
        case 0x161534u: goto label_161534;
        case 0x161538u: goto label_161538;
        case 0x16153cu: goto label_16153c;
        case 0x161540u: goto label_161540;
        case 0x161544u: goto label_161544;
        case 0x161548u: goto label_161548;
        case 0x16154cu: goto label_16154c;
        case 0x161550u: goto label_161550;
        case 0x161554u: goto label_161554;
        case 0x161558u: goto label_161558;
        case 0x16155cu: goto label_16155c;
        case 0x161560u: goto label_161560;
        case 0x161564u: goto label_161564;
        case 0x161568u: goto label_161568;
        case 0x16156cu: goto label_16156c;
        case 0x161570u: goto label_161570;
        case 0x161574u: goto label_161574;
        case 0x161578u: goto label_161578;
        case 0x16157cu: goto label_16157c;
        case 0x161580u: goto label_161580;
        case 0x161584u: goto label_161584;
        case 0x161588u: goto label_161588;
        case 0x16158cu: goto label_16158c;
        case 0x161590u: goto label_161590;
        case 0x161594u: goto label_161594;
        case 0x161598u: goto label_161598;
        case 0x16159cu: goto label_16159c;
        case 0x1615a0u: goto label_1615a0;
        case 0x1615a4u: goto label_1615a4;
        case 0x1615a8u: goto label_1615a8;
        case 0x1615acu: goto label_1615ac;
        case 0x1615b0u: goto label_1615b0;
        case 0x1615b4u: goto label_1615b4;
        case 0x1615b8u: goto label_1615b8;
        case 0x1615bcu: goto label_1615bc;
        case 0x1615c0u: goto label_1615c0;
        case 0x1615c4u: goto label_1615c4;
        case 0x1615c8u: goto label_1615c8;
        case 0x1615ccu: goto label_1615cc;
        case 0x1615d0u: goto label_1615d0;
        case 0x1615d4u: goto label_1615d4;
        case 0x1615d8u: goto label_1615d8;
        case 0x1615dcu: goto label_1615dc;
        case 0x1615e0u: goto label_1615e0;
        case 0x1615e4u: goto label_1615e4;
        case 0x1615e8u: goto label_1615e8;
        case 0x1615ecu: goto label_1615ec;
        case 0x1615f0u: goto label_1615f0;
        case 0x1615f4u: goto label_1615f4;
        case 0x1615f8u: goto label_1615f8;
        case 0x1615fcu: goto label_1615fc;
        case 0x161600u: goto label_161600;
        case 0x161604u: goto label_161604;
        case 0x161608u: goto label_161608;
        case 0x16160cu: goto label_16160c;
        case 0x161610u: goto label_161610;
        case 0x161614u: goto label_161614;
        case 0x161618u: goto label_161618;
        case 0x16161cu: goto label_16161c;
        case 0x161620u: goto label_161620;
        case 0x161624u: goto label_161624;
        case 0x161628u: goto label_161628;
        case 0x16162cu: goto label_16162c;
        case 0x161630u: goto label_161630;
        case 0x161634u: goto label_161634;
        case 0x161638u: goto label_161638;
        case 0x16163cu: goto label_16163c;
        case 0x161640u: goto label_161640;
        case 0x161644u: goto label_161644;
        case 0x161648u: goto label_161648;
        case 0x16164cu: goto label_16164c;
        case 0x161650u: goto label_161650;
        case 0x161654u: goto label_161654;
        case 0x161658u: goto label_161658;
        case 0x16165cu: goto label_16165c;
        case 0x161660u: goto label_161660;
        case 0x161664u: goto label_161664;
        case 0x161668u: goto label_161668;
        case 0x16166cu: goto label_16166c;
        case 0x161670u: goto label_161670;
        case 0x161674u: goto label_161674;
        case 0x161678u: goto label_161678;
        case 0x16167cu: goto label_16167c;
        case 0x161680u: goto label_161680;
        case 0x161684u: goto label_161684;
        case 0x161688u: goto label_161688;
        case 0x16168cu: goto label_16168c;
        case 0x161690u: goto label_161690;
        case 0x161694u: goto label_161694;
        case 0x161698u: goto label_161698;
        case 0x16169cu: goto label_16169c;
        case 0x1616a0u: goto label_1616a0;
        case 0x1616a4u: goto label_1616a4;
        case 0x1616a8u: goto label_1616a8;
        case 0x1616acu: goto label_1616ac;
        case 0x1616b0u: goto label_1616b0;
        case 0x1616b4u: goto label_1616b4;
        case 0x1616b8u: goto label_1616b8;
        case 0x1616bcu: goto label_1616bc;
        case 0x1616c0u: goto label_1616c0;
        case 0x1616c4u: goto label_1616c4;
        case 0x1616c8u: goto label_1616c8;
        case 0x1616ccu: goto label_1616cc;
        case 0x1616d0u: goto label_1616d0;
        case 0x1616d4u: goto label_1616d4;
        case 0x1616d8u: goto label_1616d8;
        case 0x1616dcu: goto label_1616dc;
        case 0x1616e0u: goto label_1616e0;
        case 0x1616e4u: goto label_1616e4;
        case 0x1616e8u: goto label_1616e8;
        case 0x1616ecu: goto label_1616ec;
        case 0x1616f0u: goto label_1616f0;
        case 0x1616f4u: goto label_1616f4;
        case 0x1616f8u: goto label_1616f8;
        case 0x1616fcu: goto label_1616fc;
        case 0x161700u: goto label_161700;
        case 0x161704u: goto label_161704;
        case 0x161708u: goto label_161708;
        case 0x16170cu: goto label_16170c;
        case 0x161710u: goto label_161710;
        case 0x161714u: goto label_161714;
        case 0x161718u: goto label_161718;
        case 0x16171cu: goto label_16171c;
        case 0x161720u: goto label_161720;
        case 0x161724u: goto label_161724;
        case 0x161728u: goto label_161728;
        case 0x16172cu: goto label_16172c;
        case 0x161730u: goto label_161730;
        case 0x161734u: goto label_161734;
        case 0x161738u: goto label_161738;
        case 0x16173cu: goto label_16173c;
        case 0x161740u: goto label_161740;
        case 0x161744u: goto label_161744;
        case 0x161748u: goto label_161748;
        case 0x16174cu: goto label_16174c;
        case 0x161750u: goto label_161750;
        case 0x161754u: goto label_161754;
        case 0x161758u: goto label_161758;
        case 0x16175cu: goto label_16175c;
        case 0x161760u: goto label_161760;
        default: break;
    }

    ctx->pc = 0x1612f0u;

label_1612f0:
    // 0x1612f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1612f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1612f4:
    // 0x1612f4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1612f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1612f8:
    // 0x1612f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1612f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1612fc:
    // 0x1612fc: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x1612fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
label_161300:
    // 0x161300: 0x2470dbc0  addiu       $s0, $v1, -0x2440
    ctx->pc = 0x161300u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958016));
label_161304:
    // 0x161304: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x161304u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
label_161308:
    // 0x161308: 0x24710080  addiu       $s1, $v1, 0x80
    ctx->pc = 0x161308u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
label_16130c:
    // 0x16130c: 0x920313b4  lbu         $v1, 0x13B4($s0)
    ctx->pc = 0x16130cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5044)));
label_161310:
    // 0x161310: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x161310u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_161314:
    // 0x161314: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_161318:
    if (ctx->pc == 0x161318u) {
        ctx->pc = 0x16131Cu;
        goto label_16131c;
    }
    ctx->pc = 0x161314u;
    {
        const bool branch_taken_0x161314 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x161314) {
            ctx->pc = 0x161328u;
            goto label_161328;
        }
    }
    ctx->pc = 0x16131Cu;
label_16131c:
    // 0x16131c: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x16131cu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_161320:
    // 0x161320: 0x1000010b  b           . + 4 + (0x10B << 2)
label_161324:
    if (ctx->pc == 0x161324u) {
        ctx->pc = 0x161328u;
        goto label_161328;
    }
    ctx->pc = 0x161320u;
    {
        const bool branch_taken_0x161320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x161320) {
            ctx->pc = 0x161750u;
            goto label_161750;
        }
    }
    ctx->pc = 0x161328u;
label_161328:
    // 0x161328: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x161328u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_16132c:
    // 0x16132c: 0x3c0397ff  lui         $v1, 0x97FF
    ctx->pc = 0x16132cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)38911 << 16));
label_161330:
    // 0x161330: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x161330u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_161334:
    // 0x161334: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x161334u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_161338:
    // 0x161338: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x161338u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
label_16133c:
    // 0x16133c: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x16133cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_161340:
    // 0x161340: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x161340u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
label_161344:
    // 0x161344: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x161344u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_161348:
    // 0x161348: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x161348u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_16134c:
    // 0x16134c: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x16134cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
label_161350:
    // 0x161350: 0x920313b4  lbu         $v1, 0x13B4($s0)
    ctx->pc = 0x161350u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5044)));
label_161354:
    // 0x161354: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x161354u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_161358:
    // 0x161358: 0x2ca1000a  sltiu       $at, $a1, 0xA
    ctx->pc = 0x161358u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_16135c:
    // 0x16135c: 0x102000fc  beqz        $at, . + 4 + (0xFC << 2)
label_161360:
    if (ctx->pc == 0x161360u) {
        ctx->pc = 0x161364u;
        goto label_161364;
    }
    ctx->pc = 0x16135Cu;
    {
        const bool branch_taken_0x16135c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16135c) {
            ctx->pc = 0x161750u;
            goto label_161750;
        }
    }
    ctx->pc = 0x161364u;
label_161364:
    // 0x161364: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x161364u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_161368:
    // 0x161368: 0x2464ea20  addiu       $a0, $v1, -0x15E0
    ctx->pc = 0x161368u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961696));
label_16136c:
    // 0x16136c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x16136cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_161370:
    // 0x161370: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x161370u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_161374:
    // 0x161374: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x161374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_161378:
    // 0x161378: 0x600008  jr          $v1
label_16137c:
    if (ctx->pc == 0x16137Cu) {
        ctx->pc = 0x161380u;
        goto label_161380;
    }
    ctx->pc = 0x161378u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x161378u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x161380u;
label_161380:
    // 0x161380: 0x920213a6  lbu         $v0, 0x13A6($s0)
    ctx->pc = 0x161380u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5030)));
label_161384:
    // 0x161384: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x161384u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_161388:
    // 0x161388: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x161388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_16138c:
    // 0x16138c: 0x1062001f  beq         $v1, $v0, . + 4 + (0x1F << 2)
label_161390:
    if (ctx->pc == 0x161390u) {
        ctx->pc = 0x161394u;
        goto label_161394;
    }
    ctx->pc = 0x16138Cu;
    {
        const bool branch_taken_0x16138c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x16138c) {
            ctx->pc = 0x16140Cu;
            goto label_16140c;
        }
    }
    ctx->pc = 0x161394u;
label_161394:
    // 0x161394: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x161394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_161398:
    // 0x161398: 0x1062001c  beq         $v1, $v0, . + 4 + (0x1C << 2)
label_16139c:
    if (ctx->pc == 0x16139Cu) {
        ctx->pc = 0x1613A0u;
        goto label_1613a0;
    }
    ctx->pc = 0x161398u;
    {
        const bool branch_taken_0x161398 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x161398) {
            ctx->pc = 0x16140Cu;
            goto label_16140c;
        }
    }
    ctx->pc = 0x1613A0u;
label_1613a0:
    // 0x1613a0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1613a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1613a4:
    // 0x1613a4: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_1613a8:
    if (ctx->pc == 0x1613A8u) {
        ctx->pc = 0x1613ACu;
        goto label_1613ac;
    }
    ctx->pc = 0x1613A4u;
    {
        const bool branch_taken_0x1613a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1613a4) {
            ctx->pc = 0x1613BCu;
            goto label_1613bc;
        }
    }
    ctx->pc = 0x1613ACu;
label_1613ac:
    // 0x1613ac: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_1613b0:
    if (ctx->pc == 0x1613B0u) {
        ctx->pc = 0x1613B4u;
        goto label_1613b4;
    }
    ctx->pc = 0x1613ACu;
    {
        const bool branch_taken_0x1613ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1613ac) {
            ctx->pc = 0x1613BCu;
            goto label_1613bc;
        }
    }
    ctx->pc = 0x1613B4u;
label_1613b4:
    // 0x1613b4: 0x10000001  b           . + 4 + (0x1 << 2)
label_1613b8:
    if (ctx->pc == 0x1613B8u) {
        ctx->pc = 0x1613BCu;
        goto label_1613bc;
    }
    ctx->pc = 0x1613B4u;
    {
        const bool branch_taken_0x1613b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1613b4) {
            ctx->pc = 0x1613BCu;
            goto label_1613bc;
        }
    }
    ctx->pc = 0x1613BCu;
label_1613bc:
    // 0x1613bc: 0x8e0213ec  lw          $v0, 0x13EC($s0)
    ctx->pc = 0x1613bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5100)));
label_1613c0:
    // 0x1613c0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1613c4:
    if (ctx->pc == 0x1613C4u) {
        ctx->pc = 0x1613C8u;
        goto label_1613c8;
    }
    ctx->pc = 0x1613C0u;
    {
        const bool branch_taken_0x1613c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1613c0) {
            ctx->pc = 0x1613E8u;
            goto label_1613e8;
        }
    }
    ctx->pc = 0x1613C8u;
label_1613c8:
    // 0x1613c8: 0x8e0213ec  lw          $v0, 0x13EC($s0)
    ctx->pc = 0x1613c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5100)));
label_1613cc:
    // 0x1613cc: 0xae0213e8  sw          $v0, 0x13E8($s0)
    ctx->pc = 0x1613ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5096), GPR_U32(ctx, 2));
label_1613d0:
    // 0x1613d0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1613d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1613d4:
    // 0x1613d4: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x1613d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6808)));
label_1613d8:
    // 0x1613d8: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x1613d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
label_1613dc:
    // 0x1613dc: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1613dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1613e0:
    // 0x1613e0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1613e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1613e4:
    // 0x1613e4: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x1613e4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6808), GPR_U32(ctx, 2));
label_1613e8:
    // 0x1613e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1613e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1613ec:
    // 0x1613ec: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x1613ecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
label_1613f0:
    // 0x1613f0: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x1613f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_1613f4:
    // 0x1613f4: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x1613f4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
label_1613f8:
    // 0x1613f8: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x1613f8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
label_1613fc:
    // 0x1613fc: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x1613fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
label_161400:
    // 0x161400: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x161400u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_161404:
    // 0x161404: 0x10000021  b           . + 4 + (0x21 << 2)
label_161408:
    if (ctx->pc == 0x161408u) {
        ctx->pc = 0x16140Cu;
        goto label_16140c;
    }
    ctx->pc = 0x161404u;
    {
        const bool branch_taken_0x161404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x161404) {
            ctx->pc = 0x16148Cu;
            goto label_16148c;
        }
    }
    ctx->pc = 0x16140Cu;
label_16140c:
    // 0x16140c: 0x8e0213ec  lw          $v0, 0x13EC($s0)
    ctx->pc = 0x16140cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5100)));
label_161410:
    // 0x161410: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_161414:
    if (ctx->pc == 0x161414u) {
        ctx->pc = 0x161418u;
        goto label_161418;
    }
    ctx->pc = 0x161410u;
    {
        const bool branch_taken_0x161410 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x161410) {
            ctx->pc = 0x161438u;
            goto label_161438;
        }
    }
    ctx->pc = 0x161418u;
label_161418:
    // 0x161418: 0x8e0213ec  lw          $v0, 0x13EC($s0)
    ctx->pc = 0x161418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5100)));
label_16141c:
    // 0x16141c: 0xae0213e8  sw          $v0, 0x13E8($s0)
    ctx->pc = 0x16141cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5096), GPR_U32(ctx, 2));
label_161420:
    // 0x161420: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x161420u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_161424:
    // 0x161424: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x161424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6808)));
label_161428:
    // 0x161428: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x161428u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
label_16142c:
    // 0x16142c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x16142cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_161430:
    // 0x161430: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x161430u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_161434:
    // 0x161434: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x161434u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6808), GPR_U32(ctx, 2));
label_161438:
    // 0x161438: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x161438u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_16143c:
    // 0x16143c: 0x8c221a98  lw          $v0, 0x1A98($at)
    ctx->pc = 0x16143cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6808)));
label_161440:
    // 0x161440: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x161440u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
label_161444:
    // 0x161444: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_161448:
    if (ctx->pc == 0x161448u) {
        ctx->pc = 0x16144Cu;
        goto label_16144c;
    }
    ctx->pc = 0x161444u;
    {
        const bool branch_taken_0x161444 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x161444) {
            ctx->pc = 0x161470u;
            goto label_161470;
        }
    }
    ctx->pc = 0x16144Cu;
label_16144c:
    // 0x16144c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16144cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_161450:
    // 0x161450: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x161450u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
label_161454:
    // 0x161454: 0x24020023  addiu       $v0, $zero, 0x23
    ctx->pc = 0x161454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_161458:
    // 0x161458: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x161458u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
label_16145c:
    // 0x16145c: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x16145cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
label_161460:
    // 0x161460: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x161460u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
label_161464:
    // 0x161464: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x161464u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_161468:
    // 0x161468: 0x10000008  b           . + 4 + (0x8 << 2)
label_16146c:
    if (ctx->pc == 0x16146Cu) {
        ctx->pc = 0x161470u;
        goto label_161470;
    }
    ctx->pc = 0x161468u;
    {
        const bool branch_taken_0x161468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x161468) {
            ctx->pc = 0x16148Cu;
            goto label_16148c;
        }
    }
    ctx->pc = 0x161470u;
label_161470:
    // 0x161470: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x161470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_161474:
    // 0x161474: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x161474u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
label_161478:
    // 0x161478: 0x2402001b  addiu       $v0, $zero, 0x1B
    ctx->pc = 0x161478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
label_16147c:
    // 0x16147c: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x16147cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
label_161480:
    // 0x161480: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x161480u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
label_161484:
    // 0x161484: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x161484u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
label_161488:
    // 0x161488: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x161488u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_16148c:
    // 0x16148c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16148cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_161490:
    // 0x161490: 0x100000af  b           . + 4 + (0xAF << 2)
label_161494:
    if (ctx->pc == 0x161494u) {
        ctx->pc = 0x161498u;
        goto label_161498;
    }
    ctx->pc = 0x161490u;
    {
        const bool branch_taken_0x161490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x161490) {
            ctx->pc = 0x161750u;
            goto label_161750;
        }
    }
    ctx->pc = 0x161498u;
label_161498:
    // 0x161498: 0x920213a6  lbu         $v0, 0x13A6($s0)
    ctx->pc = 0x161498u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5030)));
label_16149c:
    // 0x16149c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x16149cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1614a0:
    // 0x1614a0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1614a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1614a4:
    // 0x1614a4: 0x10620016  beq         $v1, $v0, . + 4 + (0x16 << 2)
label_1614a8:
    if (ctx->pc == 0x1614A8u) {
        ctx->pc = 0x1614ACu;
        goto label_1614ac;
    }
    ctx->pc = 0x1614A4u;
    {
        const bool branch_taken_0x1614a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1614a4) {
            ctx->pc = 0x161500u;
            goto label_161500;
        }
    }
    ctx->pc = 0x1614ACu;
label_1614ac:
    // 0x1614ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1614acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1614b0:
    // 0x1614b0: 0x10620013  beq         $v1, $v0, . + 4 + (0x13 << 2)
label_1614b4:
    if (ctx->pc == 0x1614B4u) {
        ctx->pc = 0x1614B8u;
        goto label_1614b8;
    }
    ctx->pc = 0x1614B0u;
    {
        const bool branch_taken_0x1614b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1614b0) {
            ctx->pc = 0x161500u;
            goto label_161500;
        }
    }
    ctx->pc = 0x1614B8u;
label_1614b8:
    // 0x1614b8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1614b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1614bc:
    // 0x1614bc: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_1614c0:
    if (ctx->pc == 0x1614C0u) {
        ctx->pc = 0x1614C4u;
        goto label_1614c4;
    }
    ctx->pc = 0x1614BCu;
    {
        const bool branch_taken_0x1614bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1614bc) {
            ctx->pc = 0x1614D4u;
            goto label_1614d4;
        }
    }
    ctx->pc = 0x1614C4u;
label_1614c4:
    // 0x1614c4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_1614c8:
    if (ctx->pc == 0x1614C8u) {
        ctx->pc = 0x1614CCu;
        goto label_1614cc;
    }
    ctx->pc = 0x1614C4u;
    {
        const bool branch_taken_0x1614c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1614c4) {
            ctx->pc = 0x1614D4u;
            goto label_1614d4;
        }
    }
    ctx->pc = 0x1614CCu;
label_1614cc:
    // 0x1614cc: 0x10000001  b           . + 4 + (0x1 << 2)
label_1614d0:
    if (ctx->pc == 0x1614D0u) {
        ctx->pc = 0x1614D4u;
        goto label_1614d4;
    }
    ctx->pc = 0x1614CCu;
    {
        const bool branch_taken_0x1614cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1614cc) {
            ctx->pc = 0x1614D4u;
            goto label_1614d4;
        }
    }
    ctx->pc = 0x1614D4u;
label_1614d4:
    // 0x1614d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1614d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1614d8:
    // 0x1614d8: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x1614d8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
label_1614dc:
    // 0x1614dc: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x1614dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_1614e0:
    // 0x1614e0: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x1614e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
label_1614e4:
    // 0x1614e4: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x1614e4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
label_1614e8:
    // 0x1614e8: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x1614e8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
label_1614ec:
    // 0x1614ec: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1614ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_1614f0:
    // 0x1614f0: 0xc6001380  lwc1        $f0, 0x1380($s0)
    ctx->pc = 0x1614f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1614f4:
    // 0x1614f4: 0xe6001290  swc1        $f0, 0x1290($s0)
    ctx->pc = 0x1614f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4752), bits); }
label_1614f8:
    // 0x1614f8: 0x10000023  b           . + 4 + (0x23 << 2)
label_1614fc:
    if (ctx->pc == 0x1614FCu) {
        ctx->pc = 0x161500u;
        goto label_161500;
    }
    ctx->pc = 0x1614F8u;
    {
        const bool branch_taken_0x1614f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1614f8) {
            ctx->pc = 0x161588u;
            goto label_161588;
        }
    }
    ctx->pc = 0x161500u;
label_161500:
    // 0x161500: 0x8e0213ec  lw          $v0, 0x13EC($s0)
    ctx->pc = 0x161500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5100)));
label_161504:
    // 0x161504: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_161508:
    if (ctx->pc == 0x161508u) {
        ctx->pc = 0x16150Cu;
        goto label_16150c;
    }
    ctx->pc = 0x161504u;
    {
        const bool branch_taken_0x161504 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x161504) {
            ctx->pc = 0x16152Cu;
            goto label_16152c;
        }
    }
    ctx->pc = 0x16150Cu;
label_16150c:
    // 0x16150c: 0x8e0213ec  lw          $v0, 0x13EC($s0)
    ctx->pc = 0x16150cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5100)));
label_161510:
    // 0x161510: 0xae0213e8  sw          $v0, 0x13E8($s0)
    ctx->pc = 0x161510u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5096), GPR_U32(ctx, 2));
label_161514:
    // 0x161514: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x161514u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_161518:
    // 0x161518: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x161518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6808)));
label_16151c:
    // 0x16151c: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x16151cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
label_161520:
    // 0x161520: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x161520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_161524:
    // 0x161524: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x161524u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_161528:
    // 0x161528: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x161528u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6808), GPR_U32(ctx, 2));
label_16152c:
    // 0x16152c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x16152cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_161530:
    // 0x161530: 0x8c221a98  lw          $v0, 0x1A98($at)
    ctx->pc = 0x161530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6808)));
label_161534:
    // 0x161534: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x161534u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
label_161538:
    // 0x161538: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_16153c:
    if (ctx->pc == 0x16153Cu) {
        ctx->pc = 0x161540u;
        goto label_161540;
    }
    ctx->pc = 0x161538u;
    {
        const bool branch_taken_0x161538 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x161538) {
            ctx->pc = 0x161564u;
            goto label_161564;
        }
    }
    ctx->pc = 0x161540u;
label_161540:
    // 0x161540: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x161540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_161544:
    // 0x161544: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x161544u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
label_161548:
    // 0x161548: 0x24020025  addiu       $v0, $zero, 0x25
    ctx->pc = 0x161548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_16154c:
    // 0x16154c: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x16154cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
label_161550:
    // 0x161550: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x161550u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
label_161554:
    // 0x161554: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x161554u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
label_161558:
    // 0x161558: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x161558u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_16155c:
    // 0x16155c: 0x1000000a  b           . + 4 + (0xA << 2)
label_161560:
    if (ctx->pc == 0x161560u) {
        ctx->pc = 0x161564u;
        goto label_161564;
    }
    ctx->pc = 0x16155Cu;
    {
        const bool branch_taken_0x16155c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16155c) {
            ctx->pc = 0x161588u;
            goto label_161588;
        }
    }
    ctx->pc = 0x161564u;
label_161564:
    // 0x161564: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x161564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_161568:
    // 0x161568: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x161568u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
label_16156c:
    // 0x16156c: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x16156cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_161570:
    // 0x161570: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x161570u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
label_161574:
    // 0x161574: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x161574u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
label_161578:
    // 0x161578: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x161578u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
label_16157c:
    // 0x16157c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x16157cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_161580:
    // 0x161580: 0xc6001380  lwc1        $f0, 0x1380($s0)
    ctx->pc = 0x161580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_161584:
    // 0x161584: 0xe6001290  swc1        $f0, 0x1290($s0)
    ctx->pc = 0x161584u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4752), bits); }
label_161588:
    // 0x161588: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x161588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16158c:
    // 0x16158c: 0x10000070  b           . + 4 + (0x70 << 2)
label_161590:
    if (ctx->pc == 0x161590u) {
        ctx->pc = 0x161594u;
        goto label_161594;
    }
    ctx->pc = 0x16158Cu;
    {
        const bool branch_taken_0x16158c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16158c) {
            ctx->pc = 0x161750u;
            goto label_161750;
        }
    }
    ctx->pc = 0x161594u;
label_161594:
    // 0x161594: 0x920213a6  lbu         $v0, 0x13A6($s0)
    ctx->pc = 0x161594u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5030)));
label_161598:
    // 0x161598: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x161598u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_16159c:
    // 0x16159c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x16159cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1615a0:
    // 0x1615a0: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
label_1615a4:
    if (ctx->pc == 0x1615A4u) {
        ctx->pc = 0x1615A8u;
        goto label_1615a8;
    }
    ctx->pc = 0x1615A0u;
    {
        const bool branch_taken_0x1615a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1615a0) {
            ctx->pc = 0x1615F4u;
            goto label_1615f4;
        }
    }
    ctx->pc = 0x1615A8u;
label_1615a8:
    // 0x1615a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1615a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1615ac:
    // 0x1615ac: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
label_1615b0:
    if (ctx->pc == 0x1615B0u) {
        ctx->pc = 0x1615B4u;
        goto label_1615b4;
    }
    ctx->pc = 0x1615ACu;
    {
        const bool branch_taken_0x1615ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1615ac) {
            ctx->pc = 0x1615F4u;
            goto label_1615f4;
        }
    }
    ctx->pc = 0x1615B4u;
label_1615b4:
    // 0x1615b4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1615b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1615b8:
    // 0x1615b8: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_1615bc:
    if (ctx->pc == 0x1615BCu) {
        ctx->pc = 0x1615C0u;
        goto label_1615c0;
    }
    ctx->pc = 0x1615B8u;
    {
        const bool branch_taken_0x1615b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1615b8) {
            ctx->pc = 0x1615D0u;
            goto label_1615d0;
        }
    }
    ctx->pc = 0x1615C0u;
label_1615c0:
    // 0x1615c0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_1615c4:
    if (ctx->pc == 0x1615C4u) {
        ctx->pc = 0x1615C8u;
        goto label_1615c8;
    }
    ctx->pc = 0x1615C0u;
    {
        const bool branch_taken_0x1615c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1615c0) {
            ctx->pc = 0x1615D0u;
            goto label_1615d0;
        }
    }
    ctx->pc = 0x1615C8u;
label_1615c8:
    // 0x1615c8: 0x1000001f  b           . + 4 + (0x1F << 2)
label_1615cc:
    if (ctx->pc == 0x1615CCu) {
        ctx->pc = 0x1615D0u;
        goto label_1615d0;
    }
    ctx->pc = 0x1615C8u;
    {
        const bool branch_taken_0x1615c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1615c8) {
            ctx->pc = 0x161648u;
            goto label_161648;
        }
    }
    ctx->pc = 0x1615D0u;
label_1615d0:
    // 0x1615d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1615d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1615d4:
    // 0x1615d4: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x1615d4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
label_1615d8:
    // 0x1615d8: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x1615d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_1615dc:
    // 0x1615dc: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x1615dcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
label_1615e0:
    // 0x1615e0: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x1615e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
label_1615e4:
    // 0x1615e4: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x1615e4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
label_1615e8:
    // 0x1615e8: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1615e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_1615ec:
    // 0x1615ec: 0x10000016  b           . + 4 + (0x16 << 2)
label_1615f0:
    if (ctx->pc == 0x1615F0u) {
        ctx->pc = 0x1615F4u;
        goto label_1615f4;
    }
    ctx->pc = 0x1615ECu;
    {
        const bool branch_taken_0x1615ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1615ec) {
            ctx->pc = 0x161648u;
            goto label_161648;
        }
    }
    ctx->pc = 0x1615F4u;
label_1615f4:
    // 0x1615f4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1615f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1615f8:
    // 0x1615f8: 0x8c221a98  lw          $v0, 0x1A98($at)
    ctx->pc = 0x1615f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6808)));
label_1615fc:
    // 0x1615fc: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x1615fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
label_161600:
    // 0x161600: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_161604:
    if (ctx->pc == 0x161604u) {
        ctx->pc = 0x161608u;
        goto label_161608;
    }
    ctx->pc = 0x161600u;
    {
        const bool branch_taken_0x161600 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x161600) {
            ctx->pc = 0x16162Cu;
            goto label_16162c;
        }
    }
    ctx->pc = 0x161608u;
label_161608:
    // 0x161608: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x161608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16160c:
    // 0x16160c: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x16160cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
label_161610:
    // 0x161610: 0x24020023  addiu       $v0, $zero, 0x23
    ctx->pc = 0x161610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_161614:
    // 0x161614: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x161614u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
label_161618:
    // 0x161618: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x161618u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
label_16161c:
    // 0x16161c: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x16161cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
label_161620:
    // 0x161620: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x161620u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_161624:
    // 0x161624: 0x10000008  b           . + 4 + (0x8 << 2)
label_161628:
    if (ctx->pc == 0x161628u) {
        ctx->pc = 0x16162Cu;
        goto label_16162c;
    }
    ctx->pc = 0x161624u;
    {
        const bool branch_taken_0x161624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x161624) {
            ctx->pc = 0x161648u;
            goto label_161648;
        }
    }
    ctx->pc = 0x16162Cu;
label_16162c:
    // 0x16162c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16162cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_161630:
    // 0x161630: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x161630u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
label_161634:
    // 0x161634: 0x2402001b  addiu       $v0, $zero, 0x1B
    ctx->pc = 0x161634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
label_161638:
    // 0x161638: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x161638u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
label_16163c:
    // 0x16163c: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x16163cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
label_161640:
    // 0x161640: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x161640u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
label_161644:
    // 0x161644: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x161644u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_161648:
    // 0x161648: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x161648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16164c:
    // 0x16164c: 0x10000040  b           . + 4 + (0x40 << 2)
label_161650:
    if (ctx->pc == 0x161650u) {
        ctx->pc = 0x161654u;
        goto label_161654;
    }
    ctx->pc = 0x16164Cu;
    {
        const bool branch_taken_0x16164c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16164c) {
            ctx->pc = 0x161750u;
            goto label_161750;
        }
    }
    ctx->pc = 0x161654u;
label_161654:
    // 0x161654: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x161654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_161658:
    // 0x161658: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x161658u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
label_16165c:
    // 0x16165c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x16165cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_161660:
    // 0x161660: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x161660u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
label_161664:
    // 0x161664: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x161664u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
label_161668:
    // 0x161668: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x161668u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
label_16166c:
    // 0x16166c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x16166cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_161670:
    // 0x161670: 0xc60013b8  lwc1        $f0, 0x13B8($s0)
    ctx->pc = 0x161670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5048)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_161674:
    // 0x161674: 0xe6001290  swc1        $f0, 0x1290($s0)
    ctx->pc = 0x161674u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4752), bits); }
label_161678:
    // 0x161678: 0xa6001278  sh          $zero, 0x1278($s0)
    ctx->pc = 0x161678u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4728), (uint16_t)GPR_U32(ctx, 0));
label_16167c:
    // 0x16167c: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x16167cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_161680:
    // 0x161680: 0xa602127a  sh          $v0, 0x127A($s0)
    ctx->pc = 0x161680u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4730), (uint16_t)GPR_U32(ctx, 2));
label_161684:
    // 0x161684: 0xa600127c  sh          $zero, 0x127C($s0)
    ctx->pc = 0x161684u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4732), (uint16_t)GPR_U32(ctx, 0));
label_161688:
    // 0x161688: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x161688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_16168c:
    // 0x16168c: 0x3c0297ff  lui         $v0, 0x97FF
    ctx->pc = 0x16168cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38911 << 16));
label_161690:
    // 0x161690: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x161690u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_161694:
    // 0x161694: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x161694u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_161698:
    // 0x161698: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x161698u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_16169c:
    // 0x16169c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x16169cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1616a0:
    // 0x1616a0: 0x3c02bfff  lui         $v0, 0xBFFF
    ctx->pc = 0x1616a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49151 << 16));
label_1616a4:
    // 0x1616a4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1616a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1616a8:
    // 0x1616a8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1616a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1616ac:
    // 0x1616ac: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1616acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_1616b0:
    // 0x1616b0: 0x920213b4  lbu         $v0, 0x13B4($s0)
    ctx->pc = 0x1616b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5044)));
label_1616b4:
    // 0x1616b4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1616b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1616b8:
    // 0x1616b8: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x1616b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1616bc:
    // 0x1616bc: 0x1062001f  beq         $v1, $v0, . + 4 + (0x1F << 2)
label_1616c0:
    if (ctx->pc == 0x1616C0u) {
        ctx->pc = 0x1616C4u;
        goto label_1616c4;
    }
    ctx->pc = 0x1616BCu;
    {
        const bool branch_taken_0x1616bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1616bc) {
            ctx->pc = 0x16173Cu;
            goto label_16173c;
        }
    }
    ctx->pc = 0x1616C4u;
label_1616c4:
    // 0x1616c4: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1616c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1616c8:
    // 0x1616c8: 0x10620018  beq         $v1, $v0, . + 4 + (0x18 << 2)
label_1616cc:
    if (ctx->pc == 0x1616CCu) {
        ctx->pc = 0x1616D0u;
        goto label_1616d0;
    }
    ctx->pc = 0x1616C8u;
    {
        const bool branch_taken_0x1616c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1616c8) {
            ctx->pc = 0x16172Cu;
            goto label_16172c;
        }
    }
    ctx->pc = 0x1616D0u;
label_1616d0:
    // 0x1616d0: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1616d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1616d4:
    // 0x1616d4: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
label_1616d8:
    if (ctx->pc == 0x1616D8u) {
        ctx->pc = 0x1616DCu;
        goto label_1616dc;
    }
    ctx->pc = 0x1616D4u;
    {
        const bool branch_taken_0x1616d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1616d4) {
            ctx->pc = 0x16171Cu;
            goto label_16171c;
        }
    }
    ctx->pc = 0x1616DCu;
label_1616dc:
    // 0x1616dc: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1616dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1616e0:
    // 0x1616e0: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
label_1616e4:
    if (ctx->pc == 0x1616E4u) {
        ctx->pc = 0x1616E8u;
        goto label_1616e8;
    }
    ctx->pc = 0x1616E0u;
    {
        const bool branch_taken_0x1616e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1616e0) {
            ctx->pc = 0x16170Cu;
            goto label_16170c;
        }
    }
    ctx->pc = 0x1616E8u;
label_1616e8:
    // 0x1616e8: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1616e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1616ec:
    // 0x1616ec: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_1616f0:
    if (ctx->pc == 0x1616F0u) {
        ctx->pc = 0x1616F4u;
        goto label_1616f4;
    }
    ctx->pc = 0x1616ECu;
    {
        const bool branch_taken_0x1616ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1616ec) {
            ctx->pc = 0x1616FCu;
            goto label_1616fc;
        }
    }
    ctx->pc = 0x1616F4u;
label_1616f4:
    // 0x1616f4: 0x10000013  b           . + 4 + (0x13 << 2)
label_1616f8:
    if (ctx->pc == 0x1616F8u) {
        ctx->pc = 0x1616FCu;
        goto label_1616fc;
    }
    ctx->pc = 0x1616F4u;
    {
        const bool branch_taken_0x1616f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1616f4) {
            ctx->pc = 0x161744u;
            goto label_161744;
        }
    }
    ctx->pc = 0x1616FCu;
label_1616fc:
    // 0x1616fc: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1616fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_161700:
    // 0x161700: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x161700u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
label_161704:
    // 0x161704: 0x1000000f  b           . + 4 + (0xF << 2)
label_161708:
    if (ctx->pc == 0x161708u) {
        ctx->pc = 0x16170Cu;
        goto label_16170c;
    }
    ctx->pc = 0x161704u;
    {
        const bool branch_taken_0x161704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x161704) {
            ctx->pc = 0x161744u;
            goto label_161744;
        }
    }
    ctx->pc = 0x16170Cu;
label_16170c:
    // 0x16170c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x16170cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_161710:
    // 0x161710: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x161710u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
label_161714:
    // 0x161714: 0x1000000b  b           . + 4 + (0xB << 2)
label_161718:
    if (ctx->pc == 0x161718u) {
        ctx->pc = 0x16171Cu;
        goto label_16171c;
    }
    ctx->pc = 0x161714u;
    {
        const bool branch_taken_0x161714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x161714) {
            ctx->pc = 0x161744u;
            goto label_161744;
        }
    }
    ctx->pc = 0x16171Cu;
label_16171c:
    // 0x16171c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x16171cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_161720:
    // 0x161720: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x161720u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
label_161724:
    // 0x161724: 0x10000007  b           . + 4 + (0x7 << 2)
label_161728:
    if (ctx->pc == 0x161728u) {
        ctx->pc = 0x16172Cu;
        goto label_16172c;
    }
    ctx->pc = 0x161724u;
    {
        const bool branch_taken_0x161724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x161724) {
            ctx->pc = 0x161744u;
            goto label_161744;
        }
    }
    ctx->pc = 0x16172Cu;
label_16172c:
    // 0x16172c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x16172cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_161730:
    // 0x161730: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x161730u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
label_161734:
    // 0x161734: 0x10000003  b           . + 4 + (0x3 << 2)
label_161738:
    if (ctx->pc == 0x161738u) {
        ctx->pc = 0x16173Cu;
        goto label_16173c;
    }
    ctx->pc = 0x161734u;
    {
        const bool branch_taken_0x161734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x161734) {
            ctx->pc = 0x161744u;
            goto label_161744;
        }
    }
    ctx->pc = 0x16173Cu;
label_16173c:
    // 0x16173c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x16173cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_161740:
    // 0x161740: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x161740u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
label_161744:
    // 0x161744: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x161744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_161748:
    // 0x161748: 0x10000001  b           . + 4 + (0x1 << 2)
label_16174c:
    if (ctx->pc == 0x16174Cu) {
        ctx->pc = 0x161750u;
        goto label_161750;
    }
    ctx->pc = 0x161748u;
    {
        const bool branch_taken_0x161748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x161748) {
            ctx->pc = 0x161750u;
            goto label_161750;
        }
    }
    ctx->pc = 0x161750u;
label_161750:
    // 0x161750: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x161750u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_161754:
    // 0x161754: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x161754u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_161758:
    // 0x161758: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x161758u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_16175c:
    // 0x16175c: 0x3e00008  jr          $ra
label_161760:
    if (ctx->pc == 0x161760u) {
        ctx->pc = 0x161764u;
        goto label_fallthrough_0x16175c;
    }
    ctx->pc = 0x16175Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16175Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x16175c:
    ctx->pc = 0x161764u;
}
