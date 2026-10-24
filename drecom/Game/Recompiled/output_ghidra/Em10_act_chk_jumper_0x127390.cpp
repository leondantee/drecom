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

// Function: Em10_act_chk_jumper
// Address: 0x127390 - 0x127a74
void Em10_act_chk_jumper_0x127390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em10_act_chk_jumper_0x127390");
#endif

    switch (ctx->pc) {
        case 0x127390u: goto label_127390;
        case 0x127394u: goto label_127394;
        case 0x127398u: goto label_127398;
        case 0x12739cu: goto label_12739c;
        case 0x1273a0u: goto label_1273a0;
        case 0x1273a4u: goto label_1273a4;
        case 0x1273a8u: goto label_1273a8;
        case 0x1273acu: goto label_1273ac;
        case 0x1273b0u: goto label_1273b0;
        case 0x1273b4u: goto label_1273b4;
        case 0x1273b8u: goto label_1273b8;
        case 0x1273bcu: goto label_1273bc;
        case 0x1273c0u: goto label_1273c0;
        case 0x1273c4u: goto label_1273c4;
        case 0x1273c8u: goto label_1273c8;
        case 0x1273ccu: goto label_1273cc;
        case 0x1273d0u: goto label_1273d0;
        case 0x1273d4u: goto label_1273d4;
        case 0x1273d8u: goto label_1273d8;
        case 0x1273dcu: goto label_1273dc;
        case 0x1273e0u: goto label_1273e0;
        case 0x1273e4u: goto label_1273e4;
        case 0x1273e8u: goto label_1273e8;
        case 0x1273ecu: goto label_1273ec;
        case 0x1273f0u: goto label_1273f0;
        case 0x1273f4u: goto label_1273f4;
        case 0x1273f8u: goto label_1273f8;
        case 0x1273fcu: goto label_1273fc;
        case 0x127400u: goto label_127400;
        case 0x127404u: goto label_127404;
        case 0x127408u: goto label_127408;
        case 0x12740cu: goto label_12740c;
        case 0x127410u: goto label_127410;
        case 0x127414u: goto label_127414;
        case 0x127418u: goto label_127418;
        case 0x12741cu: goto label_12741c;
        case 0x127420u: goto label_127420;
        case 0x127424u: goto label_127424;
        case 0x127428u: goto label_127428;
        case 0x12742cu: goto label_12742c;
        case 0x127430u: goto label_127430;
        case 0x127434u: goto label_127434;
        case 0x127438u: goto label_127438;
        case 0x12743cu: goto label_12743c;
        case 0x127440u: goto label_127440;
        case 0x127444u: goto label_127444;
        case 0x127448u: goto label_127448;
        case 0x12744cu: goto label_12744c;
        case 0x127450u: goto label_127450;
        case 0x127454u: goto label_127454;
        case 0x127458u: goto label_127458;
        case 0x12745cu: goto label_12745c;
        case 0x127460u: goto label_127460;
        case 0x127464u: goto label_127464;
        case 0x127468u: goto label_127468;
        case 0x12746cu: goto label_12746c;
        case 0x127470u: goto label_127470;
        case 0x127474u: goto label_127474;
        case 0x127478u: goto label_127478;
        case 0x12747cu: goto label_12747c;
        case 0x127480u: goto label_127480;
        case 0x127484u: goto label_127484;
        case 0x127488u: goto label_127488;
        case 0x12748cu: goto label_12748c;
        case 0x127490u: goto label_127490;
        case 0x127494u: goto label_127494;
        case 0x127498u: goto label_127498;
        case 0x12749cu: goto label_12749c;
        case 0x1274a0u: goto label_1274a0;
        case 0x1274a4u: goto label_1274a4;
        case 0x1274a8u: goto label_1274a8;
        case 0x1274acu: goto label_1274ac;
        case 0x1274b0u: goto label_1274b0;
        case 0x1274b4u: goto label_1274b4;
        case 0x1274b8u: goto label_1274b8;
        case 0x1274bcu: goto label_1274bc;
        case 0x1274c0u: goto label_1274c0;
        case 0x1274c4u: goto label_1274c4;
        case 0x1274c8u: goto label_1274c8;
        case 0x1274ccu: goto label_1274cc;
        case 0x1274d0u: goto label_1274d0;
        case 0x1274d4u: goto label_1274d4;
        case 0x1274d8u: goto label_1274d8;
        case 0x1274dcu: goto label_1274dc;
        case 0x1274e0u: goto label_1274e0;
        case 0x1274e4u: goto label_1274e4;
        case 0x1274e8u: goto label_1274e8;
        case 0x1274ecu: goto label_1274ec;
        case 0x1274f0u: goto label_1274f0;
        case 0x1274f4u: goto label_1274f4;
        case 0x1274f8u: goto label_1274f8;
        case 0x1274fcu: goto label_1274fc;
        case 0x127500u: goto label_127500;
        case 0x127504u: goto label_127504;
        case 0x127508u: goto label_127508;
        case 0x12750cu: goto label_12750c;
        case 0x127510u: goto label_127510;
        case 0x127514u: goto label_127514;
        case 0x127518u: goto label_127518;
        case 0x12751cu: goto label_12751c;
        case 0x127520u: goto label_127520;
        case 0x127524u: goto label_127524;
        case 0x127528u: goto label_127528;
        case 0x12752cu: goto label_12752c;
        case 0x127530u: goto label_127530;
        case 0x127534u: goto label_127534;
        case 0x127538u: goto label_127538;
        case 0x12753cu: goto label_12753c;
        case 0x127540u: goto label_127540;
        case 0x127544u: goto label_127544;
        case 0x127548u: goto label_127548;
        case 0x12754cu: goto label_12754c;
        case 0x127550u: goto label_127550;
        case 0x127554u: goto label_127554;
        case 0x127558u: goto label_127558;
        case 0x12755cu: goto label_12755c;
        case 0x127560u: goto label_127560;
        case 0x127564u: goto label_127564;
        case 0x127568u: goto label_127568;
        case 0x12756cu: goto label_12756c;
        case 0x127570u: goto label_127570;
        case 0x127574u: goto label_127574;
        case 0x127578u: goto label_127578;
        case 0x12757cu: goto label_12757c;
        case 0x127580u: goto label_127580;
        case 0x127584u: goto label_127584;
        case 0x127588u: goto label_127588;
        case 0x12758cu: goto label_12758c;
        case 0x127590u: goto label_127590;
        case 0x127594u: goto label_127594;
        case 0x127598u: goto label_127598;
        case 0x12759cu: goto label_12759c;
        case 0x1275a0u: goto label_1275a0;
        case 0x1275a4u: goto label_1275a4;
        case 0x1275a8u: goto label_1275a8;
        case 0x1275acu: goto label_1275ac;
        case 0x1275b0u: goto label_1275b0;
        case 0x1275b4u: goto label_1275b4;
        case 0x1275b8u: goto label_1275b8;
        case 0x1275bcu: goto label_1275bc;
        case 0x1275c0u: goto label_1275c0;
        case 0x1275c4u: goto label_1275c4;
        case 0x1275c8u: goto label_1275c8;
        case 0x1275ccu: goto label_1275cc;
        case 0x1275d0u: goto label_1275d0;
        case 0x1275d4u: goto label_1275d4;
        case 0x1275d8u: goto label_1275d8;
        case 0x1275dcu: goto label_1275dc;
        case 0x1275e0u: goto label_1275e0;
        case 0x1275e4u: goto label_1275e4;
        case 0x1275e8u: goto label_1275e8;
        case 0x1275ecu: goto label_1275ec;
        case 0x1275f0u: goto label_1275f0;
        case 0x1275f4u: goto label_1275f4;
        case 0x1275f8u: goto label_1275f8;
        case 0x1275fcu: goto label_1275fc;
        case 0x127600u: goto label_127600;
        case 0x127604u: goto label_127604;
        case 0x127608u: goto label_127608;
        case 0x12760cu: goto label_12760c;
        case 0x127610u: goto label_127610;
        case 0x127614u: goto label_127614;
        case 0x127618u: goto label_127618;
        case 0x12761cu: goto label_12761c;
        case 0x127620u: goto label_127620;
        case 0x127624u: goto label_127624;
        case 0x127628u: goto label_127628;
        case 0x12762cu: goto label_12762c;
        case 0x127630u: goto label_127630;
        case 0x127634u: goto label_127634;
        case 0x127638u: goto label_127638;
        case 0x12763cu: goto label_12763c;
        case 0x127640u: goto label_127640;
        case 0x127644u: goto label_127644;
        case 0x127648u: goto label_127648;
        case 0x12764cu: goto label_12764c;
        case 0x127650u: goto label_127650;
        case 0x127654u: goto label_127654;
        case 0x127658u: goto label_127658;
        case 0x12765cu: goto label_12765c;
        case 0x127660u: goto label_127660;
        case 0x127664u: goto label_127664;
        case 0x127668u: goto label_127668;
        case 0x12766cu: goto label_12766c;
        case 0x127670u: goto label_127670;
        case 0x127674u: goto label_127674;
        case 0x127678u: goto label_127678;
        case 0x12767cu: goto label_12767c;
        case 0x127680u: goto label_127680;
        case 0x127684u: goto label_127684;
        case 0x127688u: goto label_127688;
        case 0x12768cu: goto label_12768c;
        case 0x127690u: goto label_127690;
        case 0x127694u: goto label_127694;
        case 0x127698u: goto label_127698;
        case 0x12769cu: goto label_12769c;
        case 0x1276a0u: goto label_1276a0;
        case 0x1276a4u: goto label_1276a4;
        case 0x1276a8u: goto label_1276a8;
        case 0x1276acu: goto label_1276ac;
        case 0x1276b0u: goto label_1276b0;
        case 0x1276b4u: goto label_1276b4;
        case 0x1276b8u: goto label_1276b8;
        case 0x1276bcu: goto label_1276bc;
        case 0x1276c0u: goto label_1276c0;
        case 0x1276c4u: goto label_1276c4;
        case 0x1276c8u: goto label_1276c8;
        case 0x1276ccu: goto label_1276cc;
        case 0x1276d0u: goto label_1276d0;
        case 0x1276d4u: goto label_1276d4;
        case 0x1276d8u: goto label_1276d8;
        case 0x1276dcu: goto label_1276dc;
        case 0x1276e0u: goto label_1276e0;
        case 0x1276e4u: goto label_1276e4;
        case 0x1276e8u: goto label_1276e8;
        case 0x1276ecu: goto label_1276ec;
        case 0x1276f0u: goto label_1276f0;
        case 0x1276f4u: goto label_1276f4;
        case 0x1276f8u: goto label_1276f8;
        case 0x1276fcu: goto label_1276fc;
        case 0x127700u: goto label_127700;
        case 0x127704u: goto label_127704;
        case 0x127708u: goto label_127708;
        case 0x12770cu: goto label_12770c;
        case 0x127710u: goto label_127710;
        case 0x127714u: goto label_127714;
        case 0x127718u: goto label_127718;
        case 0x12771cu: goto label_12771c;
        case 0x127720u: goto label_127720;
        case 0x127724u: goto label_127724;
        case 0x127728u: goto label_127728;
        case 0x12772cu: goto label_12772c;
        case 0x127730u: goto label_127730;
        case 0x127734u: goto label_127734;
        case 0x127738u: goto label_127738;
        case 0x12773cu: goto label_12773c;
        case 0x127740u: goto label_127740;
        case 0x127744u: goto label_127744;
        case 0x127748u: goto label_127748;
        case 0x12774cu: goto label_12774c;
        case 0x127750u: goto label_127750;
        case 0x127754u: goto label_127754;
        case 0x127758u: goto label_127758;
        case 0x12775cu: goto label_12775c;
        case 0x127760u: goto label_127760;
        case 0x127764u: goto label_127764;
        case 0x127768u: goto label_127768;
        case 0x12776cu: goto label_12776c;
        case 0x127770u: goto label_127770;
        case 0x127774u: goto label_127774;
        case 0x127778u: goto label_127778;
        case 0x12777cu: goto label_12777c;
        case 0x127780u: goto label_127780;
        case 0x127784u: goto label_127784;
        case 0x127788u: goto label_127788;
        case 0x12778cu: goto label_12778c;
        case 0x127790u: goto label_127790;
        case 0x127794u: goto label_127794;
        case 0x127798u: goto label_127798;
        case 0x12779cu: goto label_12779c;
        case 0x1277a0u: goto label_1277a0;
        case 0x1277a4u: goto label_1277a4;
        case 0x1277a8u: goto label_1277a8;
        case 0x1277acu: goto label_1277ac;
        case 0x1277b0u: goto label_1277b0;
        case 0x1277b4u: goto label_1277b4;
        case 0x1277b8u: goto label_1277b8;
        case 0x1277bcu: goto label_1277bc;
        case 0x1277c0u: goto label_1277c0;
        case 0x1277c4u: goto label_1277c4;
        case 0x1277c8u: goto label_1277c8;
        case 0x1277ccu: goto label_1277cc;
        case 0x1277d0u: goto label_1277d0;
        case 0x1277d4u: goto label_1277d4;
        case 0x1277d8u: goto label_1277d8;
        case 0x1277dcu: goto label_1277dc;
        case 0x1277e0u: goto label_1277e0;
        case 0x1277e4u: goto label_1277e4;
        case 0x1277e8u: goto label_1277e8;
        case 0x1277ecu: goto label_1277ec;
        case 0x1277f0u: goto label_1277f0;
        case 0x1277f4u: goto label_1277f4;
        case 0x1277f8u: goto label_1277f8;
        case 0x1277fcu: goto label_1277fc;
        case 0x127800u: goto label_127800;
        case 0x127804u: goto label_127804;
        case 0x127808u: goto label_127808;
        case 0x12780cu: goto label_12780c;
        case 0x127810u: goto label_127810;
        case 0x127814u: goto label_127814;
        case 0x127818u: goto label_127818;
        case 0x12781cu: goto label_12781c;
        case 0x127820u: goto label_127820;
        case 0x127824u: goto label_127824;
        case 0x127828u: goto label_127828;
        case 0x12782cu: goto label_12782c;
        case 0x127830u: goto label_127830;
        case 0x127834u: goto label_127834;
        case 0x127838u: goto label_127838;
        case 0x12783cu: goto label_12783c;
        case 0x127840u: goto label_127840;
        case 0x127844u: goto label_127844;
        case 0x127848u: goto label_127848;
        case 0x12784cu: goto label_12784c;
        case 0x127850u: goto label_127850;
        case 0x127854u: goto label_127854;
        case 0x127858u: goto label_127858;
        case 0x12785cu: goto label_12785c;
        case 0x127860u: goto label_127860;
        case 0x127864u: goto label_127864;
        case 0x127868u: goto label_127868;
        case 0x12786cu: goto label_12786c;
        case 0x127870u: goto label_127870;
        case 0x127874u: goto label_127874;
        case 0x127878u: goto label_127878;
        case 0x12787cu: goto label_12787c;
        case 0x127880u: goto label_127880;
        case 0x127884u: goto label_127884;
        case 0x127888u: goto label_127888;
        case 0x12788cu: goto label_12788c;
        case 0x127890u: goto label_127890;
        case 0x127894u: goto label_127894;
        case 0x127898u: goto label_127898;
        case 0x12789cu: goto label_12789c;
        case 0x1278a0u: goto label_1278a0;
        case 0x1278a4u: goto label_1278a4;
        case 0x1278a8u: goto label_1278a8;
        case 0x1278acu: goto label_1278ac;
        case 0x1278b0u: goto label_1278b0;
        case 0x1278b4u: goto label_1278b4;
        case 0x1278b8u: goto label_1278b8;
        case 0x1278bcu: goto label_1278bc;
        case 0x1278c0u: goto label_1278c0;
        case 0x1278c4u: goto label_1278c4;
        case 0x1278c8u: goto label_1278c8;
        case 0x1278ccu: goto label_1278cc;
        case 0x1278d0u: goto label_1278d0;
        case 0x1278d4u: goto label_1278d4;
        case 0x1278d8u: goto label_1278d8;
        case 0x1278dcu: goto label_1278dc;
        case 0x1278e0u: goto label_1278e0;
        case 0x1278e4u: goto label_1278e4;
        case 0x1278e8u: goto label_1278e8;
        case 0x1278ecu: goto label_1278ec;
        case 0x1278f0u: goto label_1278f0;
        case 0x1278f4u: goto label_1278f4;
        case 0x1278f8u: goto label_1278f8;
        case 0x1278fcu: goto label_1278fc;
        case 0x127900u: goto label_127900;
        case 0x127904u: goto label_127904;
        case 0x127908u: goto label_127908;
        case 0x12790cu: goto label_12790c;
        case 0x127910u: goto label_127910;
        case 0x127914u: goto label_127914;
        case 0x127918u: goto label_127918;
        case 0x12791cu: goto label_12791c;
        case 0x127920u: goto label_127920;
        case 0x127924u: goto label_127924;
        case 0x127928u: goto label_127928;
        case 0x12792cu: goto label_12792c;
        case 0x127930u: goto label_127930;
        case 0x127934u: goto label_127934;
        case 0x127938u: goto label_127938;
        case 0x12793cu: goto label_12793c;
        case 0x127940u: goto label_127940;
        case 0x127944u: goto label_127944;
        case 0x127948u: goto label_127948;
        case 0x12794cu: goto label_12794c;
        case 0x127950u: goto label_127950;
        case 0x127954u: goto label_127954;
        case 0x127958u: goto label_127958;
        case 0x12795cu: goto label_12795c;
        case 0x127960u: goto label_127960;
        case 0x127964u: goto label_127964;
        case 0x127968u: goto label_127968;
        case 0x12796cu: goto label_12796c;
        case 0x127970u: goto label_127970;
        case 0x127974u: goto label_127974;
        case 0x127978u: goto label_127978;
        case 0x12797cu: goto label_12797c;
        case 0x127980u: goto label_127980;
        case 0x127984u: goto label_127984;
        case 0x127988u: goto label_127988;
        case 0x12798cu: goto label_12798c;
        case 0x127990u: goto label_127990;
        case 0x127994u: goto label_127994;
        case 0x127998u: goto label_127998;
        case 0x12799cu: goto label_12799c;
        case 0x1279a0u: goto label_1279a0;
        case 0x1279a4u: goto label_1279a4;
        case 0x1279a8u: goto label_1279a8;
        case 0x1279acu: goto label_1279ac;
        case 0x1279b0u: goto label_1279b0;
        case 0x1279b4u: goto label_1279b4;
        case 0x1279b8u: goto label_1279b8;
        case 0x1279bcu: goto label_1279bc;
        case 0x1279c0u: goto label_1279c0;
        case 0x1279c4u: goto label_1279c4;
        case 0x1279c8u: goto label_1279c8;
        case 0x1279ccu: goto label_1279cc;
        case 0x1279d0u: goto label_1279d0;
        case 0x1279d4u: goto label_1279d4;
        case 0x1279d8u: goto label_1279d8;
        case 0x1279dcu: goto label_1279dc;
        case 0x1279e0u: goto label_1279e0;
        case 0x1279e4u: goto label_1279e4;
        case 0x1279e8u: goto label_1279e8;
        case 0x1279ecu: goto label_1279ec;
        case 0x1279f0u: goto label_1279f0;
        case 0x1279f4u: goto label_1279f4;
        case 0x1279f8u: goto label_1279f8;
        case 0x1279fcu: goto label_1279fc;
        case 0x127a00u: goto label_127a00;
        case 0x127a04u: goto label_127a04;
        case 0x127a08u: goto label_127a08;
        case 0x127a0cu: goto label_127a0c;
        case 0x127a10u: goto label_127a10;
        case 0x127a14u: goto label_127a14;
        case 0x127a18u: goto label_127a18;
        case 0x127a1cu: goto label_127a1c;
        case 0x127a20u: goto label_127a20;
        case 0x127a24u: goto label_127a24;
        case 0x127a28u: goto label_127a28;
        case 0x127a2cu: goto label_127a2c;
        case 0x127a30u: goto label_127a30;
        case 0x127a34u: goto label_127a34;
        case 0x127a38u: goto label_127a38;
        case 0x127a3cu: goto label_127a3c;
        case 0x127a40u: goto label_127a40;
        case 0x127a44u: goto label_127a44;
        case 0x127a48u: goto label_127a48;
        case 0x127a4cu: goto label_127a4c;
        case 0x127a50u: goto label_127a50;
        case 0x127a54u: goto label_127a54;
        case 0x127a58u: goto label_127a58;
        case 0x127a5cu: goto label_127a5c;
        case 0x127a60u: goto label_127a60;
        case 0x127a64u: goto label_127a64;
        case 0x127a68u: goto label_127a68;
        case 0x127a6cu: goto label_127a6c;
        case 0x127a70u: goto label_127a70;
        default: break;
    }

    ctx->pc = 0x127390u;

label_127390:
    // 0x127390: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x127390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_127394:
    // 0x127394: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x127394u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
label_127398:
    // 0x127398: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x127398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_12739c:
    // 0x12739c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x12739cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1273a0:
    // 0x1273a0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1273a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1273a4:
    // 0x1273a4: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x1273a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
label_1273a8:
    // 0x1273a8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1273a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1273ac:
    // 0x1273ac: 0x24501330  addiu       $s0, $v0, 0x1330
    ctx->pc = 0x1273acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_1273b0:
    // 0x1273b0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1273b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1273b4:
    // 0x1273b4: 0xc05cdd8  jal         func_173760
label_1273b8:
    if (ctx->pc == 0x1273B8u) {
        ctx->pc = 0x1273BCu;
        goto label_1273bc;
    }
    ctx->pc = 0x1273B4u;
    SET_GPR_U32(ctx, 31, 0x1273BCu);
    ctx->pc = 0x173760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173760u, 0x1273B4u, 0x1273BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1273BCu;
label_1273bc:
    // 0x1273bc: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x1273bcu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1273c0:
    // 0x1273c0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1273c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1273c4:
    // 0x1273c4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1273c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1273c8:
    // 0x1273c8: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x1273c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
label_1273cc:
    // 0x1273cc: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x1273ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1273d0:
    // 0x1273d0: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1273d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_1273d4:
    // 0x1273d4: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x1273d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
label_1273d8:
    // 0x1273d8: 0xc05cc90  jal         func_173240
label_1273dc:
    if (ctx->pc == 0x1273DCu) {
        ctx->pc = 0x1273E0u;
        goto label_1273e0;
    }
    ctx->pc = 0x1273D8u;
    SET_GPR_U32(ctx, 31, 0x1273E0u);
    ctx->pc = 0x173240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173240u, 0x1273D8u, 0x1273E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1273E0u;
label_1273e0:
    // 0x1273e0: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x1273e0u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1273e4:
    // 0x1273e4: 0x2e410008  sltiu       $at, $s2, 0x8
    ctx->pc = 0x1273e4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_1273e8:
    // 0x1273e8: 0x1020019b  beqz        $at, . + 4 + (0x19B << 2)
label_1273ec:
    if (ctx->pc == 0x1273ECu) {
        ctx->pc = 0x1273F0u;
        goto label_1273f0;
    }
    ctx->pc = 0x1273E8u;
    {
        const bool branch_taken_0x1273e8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1273e8) {
            ctx->pc = 0x127A58u;
            goto label_127a58;
        }
    }
    ctx->pc = 0x1273F0u;
label_1273f0:
    // 0x1273f0: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x1273f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_1273f4:
    // 0x1273f4: 0x2464e300  addiu       $a0, $v1, -0x1D00
    ctx->pc = 0x1273f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959872));
label_1273f8:
    // 0x1273f8: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x1273f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_1273fc:
    // 0x1273fc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1273fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_127400:
    // 0x127400: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x127400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_127404:
    // 0x127404: 0x600008  jr          $v1
label_127408:
    if (ctx->pc == 0x127408u) {
        ctx->pc = 0x12740Cu;
        goto label_12740c;
    }
    ctx->pc = 0x127404u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x127404u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x12740Cu;
label_12740c:
    // 0x12740c: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x12740cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_127410:
    // 0x127410: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x127410u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
label_127414:
    // 0x127414: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_127418:
    if (ctx->pc == 0x127418u) {
        ctx->pc = 0x12741Cu;
        goto label_12741c;
    }
    ctx->pc = 0x127414u;
    {
        const bool branch_taken_0x127414 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x127414) {
            ctx->pc = 0x12742Cu;
            goto label_12742c;
        }
    }
    ctx->pc = 0x12741Cu;
label_12741c:
    // 0x12741c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12741cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_127420:
    // 0x127420: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x127420u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_127424:
    // 0x127424: 0x1060018c  beqz        $v1, . + 4 + (0x18C << 2)
label_127428:
    if (ctx->pc == 0x127428u) {
        ctx->pc = 0x12742Cu;
        goto label_12742c;
    }
    ctx->pc = 0x127424u;
    {
        const bool branch_taken_0x127424 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x127424) {
            ctx->pc = 0x127A58u;
            goto label_127a58;
        }
    }
    ctx->pc = 0x12742Cu;
label_12742c:
    // 0x12742c: 0x9603007c  lhu         $v1, 0x7C($s0)
    ctx->pc = 0x12742cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 124)));
label_127430:
    // 0x127430: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
label_127434:
    if (ctx->pc == 0x127434u) {
        ctx->pc = 0x127438u;
        goto label_127438;
    }
    ctx->pc = 0x127430u;
    {
        const bool branch_taken_0x127430 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x127430) {
            ctx->pc = 0x127474u;
            goto label_127474;
        }
    }
    ctx->pc = 0x127438u;
label_127438:
    // 0x127438: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x127438u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12743c:
    // 0x12743c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12743cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_127440:
    // 0x127440: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x127440u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_127444:
    // 0x127444: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x127444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_127448:
    // 0x127448: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12744c:
    // 0x12744c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x12744cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_127450:
    // 0x127450: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_127454:
    // 0x127454: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x127454u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_127458:
    // 0x127458: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12745c:
    // 0x12745c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x12745cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_127460:
    // 0x127460: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x127460u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_127464:
    // 0x127464: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_127468:
    // 0x127468: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x127468u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
label_12746c:
    // 0x12746c: 0x1000017a  b           . + 4 + (0x17A << 2)
label_127470:
    if (ctx->pc == 0x127470u) {
        ctx->pc = 0x127474u;
        goto label_127474;
    }
    ctx->pc = 0x12746Cu;
    {
        const bool branch_taken_0x12746c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12746c) {
            ctx->pc = 0x127A58u;
            goto label_127a58;
        }
    }
    ctx->pc = 0x127474u;
label_127474:
    // 0x127474: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x127474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_127478:
    // 0x127478: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x127478u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
label_12747c:
    // 0x12747c: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_127480:
    if (ctx->pc == 0x127480u) {
        ctx->pc = 0x127484u;
        goto label_127484;
    }
    ctx->pc = 0x12747Cu;
    {
        const bool branch_taken_0x12747c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12747c) {
            ctx->pc = 0x12749Cu;
            goto label_12749c;
        }
    }
    ctx->pc = 0x127484u;
label_127484:
    // 0x127484: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x127484u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_127488:
    // 0x127488: 0x2403ffdf  addiu       $v1, $zero, -0x21
    ctx->pc = 0x127488u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
label_12748c:
    // 0x12748c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x12748cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_127490:
    // 0x127490: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x127490u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
label_127494:
    // 0x127494: 0x10000170  b           . + 4 + (0x170 << 2)
label_127498:
    if (ctx->pc == 0x127498u) {
        ctx->pc = 0x12749Cu;
        goto label_12749c;
    }
    ctx->pc = 0x127494u;
    {
        const bool branch_taken_0x127494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x127494) {
            ctx->pc = 0x127A58u;
            goto label_127a58;
        }
    }
    ctx->pc = 0x12749Cu;
label_12749c:
    // 0x12749c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12749cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1274a0:
    // 0x1274a0: 0x9463000e  lhu         $v1, 0xE($v1)
    ctx->pc = 0x1274a0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
label_1274a4:
    // 0x1274a4: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1274a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_1274a8:
    // 0x1274a8: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x1274a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
label_1274ac:
    // 0x1274ac: 0x1060009a  beqz        $v1, . + 4 + (0x9A << 2)
label_1274b0:
    if (ctx->pc == 0x1274B0u) {
        ctx->pc = 0x1274B4u;
        goto label_1274b4;
    }
    ctx->pc = 0x1274ACu;
    {
        const bool branch_taken_0x1274ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1274ac) {
            ctx->pc = 0x127718u;
            goto label_127718;
        }
    }
    ctx->pc = 0x1274B4u;
label_1274b4:
    // 0x1274b4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1274b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1274b8:
    // 0x1274b8: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x1274b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1274bc:
    // 0x1274bc: 0x3c03443b  lui         $v1, 0x443B
    ctx->pc = 0x1274bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17467 << 16));
label_1274c0:
    // 0x1274c0: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x1274c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
label_1274c4:
    // 0x1274c4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1274c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1274c8:
    // 0x1274c8: 0x0  nop
    ctx->pc = 0x1274c8u;
    // NOP
label_1274cc:
    // 0x1274cc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1274ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1274d0:
    // 0x1274d0: 0x0  nop
    ctx->pc = 0x1274d0u;
    // NOP
label_1274d4:
    // 0x1274d4: 0x45000012  bc1f        . + 4 + (0x12 << 2)
label_1274d8:
    if (ctx->pc == 0x1274D8u) {
        ctx->pc = 0x1274DCu;
        goto label_1274dc;
    }
    ctx->pc = 0x1274D4u;
    {
        const bool branch_taken_0x1274d4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1274d4) {
            ctx->pc = 0x127520u;
            goto label_127520;
        }
    }
    ctx->pc = 0x1274DCu;
label_1274dc:
    // 0x1274dc: 0x2e210002  sltiu       $at, $s1, 0x2
    ctx->pc = 0x1274dcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1274e0:
    // 0x1274e0: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
label_1274e4:
    if (ctx->pc == 0x1274E4u) {
        ctx->pc = 0x1274E8u;
        goto label_1274e8;
    }
    ctx->pc = 0x1274E0u;
    {
        const bool branch_taken_0x1274e0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1274e0) {
            ctx->pc = 0x127518u;
            goto label_127518;
        }
    }
    ctx->pc = 0x1274E8u;
label_1274e8:
    // 0x1274e8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1274e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1274ec:
    // 0x1274ec: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1274ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1274f0:
    // 0x1274f0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1274f0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_1274f4:
    // 0x1274f4: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x1274f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1274f8:
    // 0x1274f8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1274f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1274fc:
    // 0x1274fc: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1274fcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_127500:
    // 0x127500: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_127504:
    // 0x127504: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x127504u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_127508:
    // 0x127508: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12750c:
    // 0x12750c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x12750cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_127510:
    // 0x127510: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_127514:
    // 0x127514: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x127514u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_127518:
    // 0x127518: 0x1000014f  b           . + 4 + (0x14F << 2)
label_12751c:
    if (ctx->pc == 0x12751Cu) {
        ctx->pc = 0x127520u;
        goto label_127520;
    }
    ctx->pc = 0x127518u;
    {
        const bool branch_taken_0x127518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x127518) {
            ctx->pc = 0x127A58u;
            goto label_127a58;
        }
    }
    ctx->pc = 0x127520u;
label_127520:
    // 0x127520: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_127524:
    // 0x127524: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x127524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_127528:
    // 0x127528: 0x3c0345ab  lui         $v1, 0x45AB
    ctx->pc = 0x127528u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17835 << 16));
label_12752c:
    // 0x12752c: 0x3463e000  ori         $v1, $v1, 0xE000
    ctx->pc = 0x12752cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)57344);
label_127530:
    // 0x127530: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x127530u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_127534:
    // 0x127534: 0x0  nop
    ctx->pc = 0x127534u;
    // NOP
label_127538:
    // 0x127538: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x127538u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12753c:
    // 0x12753c: 0x0  nop
    ctx->pc = 0x12753cu;
    // NOP
label_127540:
    // 0x127540: 0x45000145  bc1f        . + 4 + (0x145 << 2)
label_127544:
    if (ctx->pc == 0x127544u) {
        ctx->pc = 0x127548u;
        goto label_127548;
    }
    ctx->pc = 0x127540u;
    {
        const bool branch_taken_0x127540 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x127540) {
            ctx->pc = 0x127A58u;
            goto label_127a58;
        }
    }
    ctx->pc = 0x127548u;
label_127548:
    // 0x127548: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x127548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12754c:
    // 0x12754c: 0xc4411288  lwc1        $f1, 0x1288($v0)
    ctx->pc = 0x12754cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_127550:
    // 0x127550: 0x3c02451c  lui         $v0, 0x451C
    ctx->pc = 0x127550u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17692 << 16));
label_127554:
    // 0x127554: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x127554u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_127558:
    // 0x127558: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x127558u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_12755c:
    // 0x12755c: 0x0  nop
    ctx->pc = 0x12755cu;
    // NOP
label_127560:
    // 0x127560: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x127560u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_127564:
    // 0x127564: 0x0  nop
    ctx->pc = 0x127564u;
    // NOP
label_127568:
    // 0x127568: 0x45010035  bc1t        . + 4 + (0x35 << 2)
label_12756c:
    if (ctx->pc == 0x12756Cu) {
        ctx->pc = 0x127570u;
        goto label_127570;
    }
    ctx->pc = 0x127568u;
    {
        const bool branch_taken_0x127568 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x127568) {
            ctx->pc = 0x127640u;
            goto label_127640;
        }
    }
    ctx->pc = 0x127570u;
label_127570:
    // 0x127570: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x127570u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_127574:
    // 0x127574: 0x8c221a64  lw          $v0, 0x1A64($at)
    ctx->pc = 0x127574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6756)));
label_127578:
    // 0x127578: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x127578u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_12757c:
    // 0x12757c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_127580:
    if (ctx->pc == 0x127580u) {
        ctx->pc = 0x127584u;
        goto label_127584;
    }
    ctx->pc = 0x12757Cu;
    {
        const bool branch_taken_0x12757c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12757c) {
            ctx->pc = 0x127594u;
            goto label_127594;
        }
    }
    ctx->pc = 0x127584u;
label_127584:
    // 0x127584: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x127584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_127588:
    // 0x127588: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x127588u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_12758c:
    // 0x12758c: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
label_127590:
    if (ctx->pc == 0x127590u) {
        ctx->pc = 0x127594u;
        goto label_127594;
    }
    ctx->pc = 0x12758Cu;
    {
        const bool branch_taken_0x12758c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12758c) {
            ctx->pc = 0x127640u;
            goto label_127640;
        }
    }
    ctx->pc = 0x127594u;
label_127594:
    // 0x127594: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x127594u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_127598:
    // 0x127598: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x127598u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12759c:
    // 0x12759c: 0xc05d25c  jal         func_174970
label_1275a0:
    if (ctx->pc == 0x1275A0u) {
        ctx->pc = 0x1275A4u;
        goto label_1275a4;
    }
    ctx->pc = 0x12759Cu;
    SET_GPR_U32(ctx, 31, 0x1275A4u);
    ctx->pc = 0x174970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174970u, 0x12759Cu, 0x1275A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1275A4u;
label_1275a4:
    // 0x1275a4: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
label_1275a8:
    if (ctx->pc == 0x1275A8u) {
        ctx->pc = 0x1275ACu;
        goto label_1275ac;
    }
    ctx->pc = 0x1275A4u;
    {
        const bool branch_taken_0x1275a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1275a4) {
            ctx->pc = 0x127640u;
            goto label_127640;
        }
    }
    ctx->pc = 0x1275ACu;
label_1275ac:
    // 0x1275ac: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1275acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1275b0:
    // 0x1275b0: 0xc4620124  lwc1        $f2, 0x124($v1)
    ctx->pc = 0x1275b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1275b4:
    // 0x1275b4: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x1275b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
label_1275b8:
    // 0x1275b8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1275b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1275bc:
    // 0x1275bc: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1275bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_1275c0:
    // 0x1275c0: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x1275c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294958308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1275c4:
    // 0x1275c4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1275c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1275c8:
    // 0x1275c8: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1275c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1275cc:
    // 0x1275cc: 0x0  nop
    ctx->pc = 0x1275ccu;
    // NOP
label_1275d0:
    // 0x1275d0: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
label_1275d4:
    if (ctx->pc == 0x1275D4u) {
        ctx->pc = 0x1275D8u;
        goto label_1275d8;
    }
    ctx->pc = 0x1275D0u;
    {
        const bool branch_taken_0x1275d0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1275d0) {
            ctx->pc = 0x127640u;
            goto label_127640;
        }
    }
    ctx->pc = 0x1275D8u;
label_1275d8:
    // 0x1275d8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1275d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1275dc:
    // 0x1275dc: 0xc4620124  lwc1        $f2, 0x124($v1)
    ctx->pc = 0x1275dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1275e0:
    // 0x1275e0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1275e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_1275e4:
    // 0x1275e4: 0xc421dce4  lwc1        $f1, -0x231C($at)
    ctx->pc = 0x1275e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294958308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1275e8:
    // 0x1275e8: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x1275e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
label_1275ec:
    // 0x1275ec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1275ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1275f0:
    // 0x1275f0: 0x0  nop
    ctx->pc = 0x1275f0u;
    // NOP
label_1275f4:
    // 0x1275f4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1275f4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1275f8:
    // 0x1275f8: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x1275f8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1275fc:
    // 0x1275fc: 0x0  nop
    ctx->pc = 0x1275fcu;
    // NOP
label_127600:
    // 0x127600: 0x4501000f  bc1t        . + 4 + (0xF << 2)
label_127604:
    if (ctx->pc == 0x127604u) {
        ctx->pc = 0x127608u;
        goto label_127608;
    }
    ctx->pc = 0x127600u;
    {
        const bool branch_taken_0x127600 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x127600) {
            ctx->pc = 0x127640u;
            goto label_127640;
        }
    }
    ctx->pc = 0x127608u;
label_127608:
    // 0x127608: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x127608u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12760c:
    // 0x12760c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12760cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_127610:
    // 0x127610: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x127610u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_127614:
    // 0x127614: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x127614u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_127618:
    // 0x127618: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12761c:
    // 0x12761c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x12761cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_127620:
    // 0x127620: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_127624:
    // 0x127624: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x127624u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_127628:
    // 0x127628: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12762c:
    // 0x12762c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x12762cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_127630:
    // 0x127630: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_127634:
    // 0x127634: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x127634u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_127638:
    // 0x127638: 0x10000107  b           . + 4 + (0x107 << 2)
label_12763c:
    if (ctx->pc == 0x12763Cu) {
        ctx->pc = 0x127640u;
        goto label_127640;
    }
    ctx->pc = 0x127638u;
    {
        const bool branch_taken_0x127638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x127638) {
            ctx->pc = 0x127A58u;
            goto label_127a58;
        }
    }
    ctx->pc = 0x127640u;
label_127640:
    // 0x127640: 0xc067694  jal         func_19DA50
label_127644:
    if (ctx->pc == 0x127644u) {
        ctx->pc = 0x127648u;
        goto label_127648;
    }
    ctx->pc = 0x127640u;
    SET_GPR_U32(ctx, 31, 0x127648u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x127640u, 0x127648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127648u;
label_127648:
    // 0x127648: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x127648u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_12764c:
    // 0x12764c: 0x3064000f  andi        $a0, $v1, 0xF
    ctx->pc = 0x12764cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
label_127650:
    // 0x127650: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x127650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_127654:
    // 0x127654: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
label_127658:
    if (ctx->pc == 0x127658u) {
        ctx->pc = 0x12765Cu;
        goto label_12765c;
    }
    ctx->pc = 0x127654u;
    {
        const bool branch_taken_0x127654 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x127654) {
            ctx->pc = 0x12766Cu;
            goto label_12766c;
        }
    }
    ctx->pc = 0x12765Cu;
label_12765c:
    // 0x12765c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_127660:
    if (ctx->pc == 0x127660u) {
        ctx->pc = 0x127664u;
        goto label_127664;
    }
    ctx->pc = 0x12765Cu;
    {
        const bool branch_taken_0x12765c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x12765c) {
            ctx->pc = 0x12766Cu;
            goto label_12766c;
        }
    }
    ctx->pc = 0x127664u;
label_127664:
    // 0x127664: 0x1000002a  b           . + 4 + (0x2A << 2)
label_127668:
    if (ctx->pc == 0x127668u) {
        ctx->pc = 0x12766Cu;
        goto label_12766c;
    }
    ctx->pc = 0x127664u;
    {
        const bool branch_taken_0x127664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x127664) {
            ctx->pc = 0x127710u;
            goto label_127710;
        }
    }
    ctx->pc = 0x12766Cu;
label_12766c:
    // 0x12766c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x12766cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_127670:
    // 0x127670: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x127670u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_127674:
    // 0x127674: 0xc05d25c  jal         func_174970
label_127678:
    if (ctx->pc == 0x127678u) {
        ctx->pc = 0x12767Cu;
        goto label_12767c;
    }
    ctx->pc = 0x127674u;
    SET_GPR_U32(ctx, 31, 0x12767Cu);
    ctx->pc = 0x174970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174970u, 0x127674u, 0x12767Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12767Cu;
label_12767c:
    // 0x12767c: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
label_127680:
    if (ctx->pc == 0x127680u) {
        ctx->pc = 0x127684u;
        goto label_127684;
    }
    ctx->pc = 0x12767Cu;
    {
        const bool branch_taken_0x12767c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12767c) {
            ctx->pc = 0x127710u;
            goto label_127710;
        }
    }
    ctx->pc = 0x127684u;
label_127684:
    // 0x127684: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_127688:
    // 0x127688: 0xc4620124  lwc1        $f2, 0x124($v1)
    ctx->pc = 0x127688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_12768c:
    // 0x12768c: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x12768cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
label_127690:
    // 0x127690: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x127690u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_127694:
    // 0x127694: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x127694u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_127698:
    // 0x127698: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x127698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294958308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12769c:
    // 0x12769c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x12769cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1276a0:
    // 0x1276a0: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1276a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1276a4:
    // 0x1276a4: 0x0  nop
    ctx->pc = 0x1276a4u;
    // NOP
label_1276a8:
    // 0x1276a8: 0x45000019  bc1f        . + 4 + (0x19 << 2)
label_1276ac:
    if (ctx->pc == 0x1276ACu) {
        ctx->pc = 0x1276B0u;
        goto label_1276b0;
    }
    ctx->pc = 0x1276A8u;
    {
        const bool branch_taken_0x1276a8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1276a8) {
            ctx->pc = 0x127710u;
            goto label_127710;
        }
    }
    ctx->pc = 0x1276B0u;
label_1276b0:
    // 0x1276b0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1276b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1276b4:
    // 0x1276b4: 0xc4620124  lwc1        $f2, 0x124($v1)
    ctx->pc = 0x1276b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1276b8:
    // 0x1276b8: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1276b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_1276bc:
    // 0x1276bc: 0xc421dce4  lwc1        $f1, -0x231C($at)
    ctx->pc = 0x1276bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294958308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1276c0:
    // 0x1276c0: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x1276c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
label_1276c4:
    // 0x1276c4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1276c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1276c8:
    // 0x1276c8: 0x0  nop
    ctx->pc = 0x1276c8u;
    // NOP
label_1276cc:
    // 0x1276cc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1276ccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1276d0:
    // 0x1276d0: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x1276d0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1276d4:
    // 0x1276d4: 0x0  nop
    ctx->pc = 0x1276d4u;
    // NOP
label_1276d8:
    // 0x1276d8: 0x4501000d  bc1t        . + 4 + (0xD << 2)
label_1276dc:
    if (ctx->pc == 0x1276DCu) {
        ctx->pc = 0x1276E0u;
        goto label_1276e0;
    }
    ctx->pc = 0x1276D8u;
    {
        const bool branch_taken_0x1276d8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1276d8) {
            ctx->pc = 0x127710u;
            goto label_127710;
        }
    }
    ctx->pc = 0x1276E0u;
label_1276e0:
    // 0x1276e0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1276e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1276e4:
    // 0x1276e4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1276e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1276e8:
    // 0x1276e8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1276e8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_1276ec:
    // 0x1276ec: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x1276ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_1276f0:
    // 0x1276f0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1276f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1276f4:
    // 0x1276f4: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1276f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_1276f8:
    // 0x1276f8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1276f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1276fc:
    // 0x1276fc: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1276fcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_127700:
    // 0x127700: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_127704:
    // 0x127704: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x127704u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_127708:
    // 0x127708: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12770c:
    // 0x12770c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x12770cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_127710:
    // 0x127710: 0x100000d1  b           . + 4 + (0xD1 << 2)
label_127714:
    if (ctx->pc == 0x127714u) {
        ctx->pc = 0x127718u;
        goto label_127718;
    }
    ctx->pc = 0x127710u;
    {
        const bool branch_taken_0x127710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x127710) {
            ctx->pc = 0x127A58u;
            goto label_127a58;
        }
    }
    ctx->pc = 0x127718u;
label_127718:
    // 0x127718: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12771c:
    // 0x12771c: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x12771cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_127720:
    // 0x127720: 0x3c03443b  lui         $v1, 0x443B
    ctx->pc = 0x127720u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17467 << 16));
label_127724:
    // 0x127724: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x127724u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
label_127728:
    // 0x127728: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x127728u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_12772c:
    // 0x12772c: 0x0  nop
    ctx->pc = 0x12772cu;
    // NOP
label_127730:
    // 0x127730: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x127730u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_127734:
    // 0x127734: 0x0  nop
    ctx->pc = 0x127734u;
    // NOP
label_127738:
    // 0x127738: 0x45000043  bc1f        . + 4 + (0x43 << 2)
label_12773c:
    if (ctx->pc == 0x12773Cu) {
        ctx->pc = 0x127740u;
        goto label_127740;
    }
    ctx->pc = 0x127738u;
    {
        const bool branch_taken_0x127738 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x127738) {
            ctx->pc = 0x127848u;
            goto label_127848;
        }
    }
    ctx->pc = 0x127740u;
label_127740:
    // 0x127740: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x127740u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_127744:
    // 0x127744: 0x8c231a64  lw          $v1, 0x1A64($at)
    ctx->pc = 0x127744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6756)));
label_127748:
    // 0x127748: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x127748u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
label_12774c:
    // 0x12774c: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
label_127750:
    if (ctx->pc == 0x127750u) {
        ctx->pc = 0x127754u;
        goto label_127754;
    }
    ctx->pc = 0x12774Cu;
    {
        const bool branch_taken_0x12774c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12774c) {
            ctx->pc = 0x12778Cu;
            goto label_12778c;
        }
    }
    ctx->pc = 0x127754u;
label_127754:
    // 0x127754: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x127754u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_127758:
    // 0x127758: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12775c:
    // 0x12775c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x12775cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_127760:
    // 0x127760: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x127760u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_127764:
    // 0x127764: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_127768:
    // 0x127768: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x127768u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_12776c:
    // 0x12776c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12776cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_127770:
    // 0x127770: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x127770u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_127774:
    // 0x127774: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_127778:
    // 0x127778: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x127778u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_12777c:
    // 0x12777c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12777cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_127780:
    // 0x127780: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x127780u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_127784:
    // 0x127784: 0x100000b4  b           . + 4 + (0xB4 << 2)
label_127788:
    if (ctx->pc == 0x127788u) {
        ctx->pc = 0x12778Cu;
        goto label_12778c;
    }
    ctx->pc = 0x127784u;
    {
        const bool branch_taken_0x127784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x127784) {
            ctx->pc = 0x127A58u;
            goto label_127a58;
        }
    }
    ctx->pc = 0x12778Cu;
label_12778c:
    // 0x12778c: 0x2e210002  sltiu       $at, $s1, 0x2
    ctx->pc = 0x12778cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_127790:
    // 0x127790: 0x1020002b  beqz        $at, . + 4 + (0x2B << 2)
label_127794:
    if (ctx->pc == 0x127794u) {
        ctx->pc = 0x127798u;
        goto label_127798;
    }
    ctx->pc = 0x127790u;
    {
        const bool branch_taken_0x127790 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x127790) {
            ctx->pc = 0x127840u;
            goto label_127840;
        }
    }
    ctx->pc = 0x127798u;
label_127798:
    // 0x127798: 0xc067694  jal         func_19DA50
label_12779c:
    if (ctx->pc == 0x12779Cu) {
        ctx->pc = 0x1277A0u;
        goto label_1277a0;
    }
    ctx->pc = 0x127798u;
    SET_GPR_U32(ctx, 31, 0x1277A0u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x127798u, 0x1277A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1277A0u;
label_1277a0:
    // 0x1277a0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1277a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1277a4:
    // 0x1277a4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1277a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_1277a8:
    // 0x1277a8: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
label_1277ac:
    if (ctx->pc == 0x1277ACu) {
        ctx->pc = 0x1277B0u;
        goto label_1277b0;
    }
    ctx->pc = 0x1277A8u;
    {
        const bool branch_taken_0x1277a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1277a8) {
            ctx->pc = 0x127810u;
            goto label_127810;
        }
    }
    ctx->pc = 0x1277B0u;
label_1277b0:
    // 0x1277b0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1277b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1277b4:
    // 0x1277b4: 0xc04d8bc  jal         func_1362F0
label_1277b8:
    if (ctx->pc == 0x1277B8u) {
        ctx->pc = 0x1277BCu;
        goto label_1277bc;
    }
    ctx->pc = 0x1277B4u;
    SET_GPR_U32(ctx, 31, 0x1277BCu);
    ctx->pc = 0x1362F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1362F0u, 0x1277B4u, 0x1277BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1277BCu;
label_1277bc:
    // 0x1277bc: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_1277c0:
    if (ctx->pc == 0x1277C0u) {
        ctx->pc = 0x1277C4u;
        goto label_1277c4;
    }
    ctx->pc = 0x1277BCu;
    {
        const bool branch_taken_0x1277bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1277bc) {
            ctx->pc = 0x127840u;
            goto label_127840;
        }
    }
    ctx->pc = 0x1277C4u;
label_1277c4:
    // 0x1277c4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1277c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1277c8:
    // 0x1277c8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1277c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1277cc:
    // 0x1277cc: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1277ccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_1277d0:
    // 0x1277d0: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x1277d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1277d4:
    // 0x1277d4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1277d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1277d8:
    // 0x1277d8: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1277d8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_1277dc:
    // 0x1277dc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1277dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1277e0:
    // 0x1277e0: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1277e0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_1277e4:
    // 0x1277e4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1277e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1277e8:
    // 0x1277e8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1277e8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_1277ec:
    // 0x1277ec: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1277ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1277f0:
    // 0x1277f0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1277f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_1277f4:
    // 0x1277f4: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1277f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1277f8:
    // 0x1277f8: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1277f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1277fc:
    // 0x1277fc: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1277fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_127800:
    // 0x127800: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x127800u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_127804:
    // 0x127804: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x127804u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
label_127808:
    // 0x127808: 0x1000000d  b           . + 4 + (0xD << 2)
label_12780c:
    if (ctx->pc == 0x12780Cu) {
        ctx->pc = 0x127810u;
        goto label_127810;
    }
    ctx->pc = 0x127808u;
    {
        const bool branch_taken_0x127808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x127808) {
            ctx->pc = 0x127840u;
            goto label_127840;
        }
    }
    ctx->pc = 0x127810u;
label_127810:
    // 0x127810: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x127810u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_127814:
    // 0x127814: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_127818:
    // 0x127818: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x127818u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_12781c:
    // 0x12781c: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x12781cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_127820:
    // 0x127820: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_127824:
    // 0x127824: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x127824u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_127828:
    // 0x127828: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12782c:
    // 0x12782c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x12782cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_127830:
    // 0x127830: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_127834:
    // 0x127834: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x127834u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_127838:
    // 0x127838: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12783c:
    // 0x12783c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x12783cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_127840:
    // 0x127840: 0x10000085  b           . + 4 + (0x85 << 2)
label_127844:
    if (ctx->pc == 0x127844u) {
        ctx->pc = 0x127848u;
        goto label_127848;
    }
    ctx->pc = 0x127840u;
    {
        const bool branch_taken_0x127840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x127840) {
            ctx->pc = 0x127A58u;
            goto label_127a58;
        }
    }
    ctx->pc = 0x127848u;
label_127848:
    // 0x127848: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12784c:
    // 0x12784c: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x12784cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_127850:
    // 0x127850: 0x3c0344a2  lui         $v1, 0x44A2
    ctx->pc = 0x127850u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17570 << 16));
label_127854:
    // 0x127854: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x127854u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
label_127858:
    // 0x127858: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x127858u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_12785c:
    // 0x12785c: 0x0  nop
    ctx->pc = 0x12785cu;
    // NOP
label_127860:
    // 0x127860: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x127860u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_127864:
    // 0x127864: 0x0  nop
    ctx->pc = 0x127864u;
    // NOP
label_127868:
    // 0x127868: 0x45000012  bc1f        . + 4 + (0x12 << 2)
label_12786c:
    if (ctx->pc == 0x12786Cu) {
        ctx->pc = 0x127870u;
        goto label_127870;
    }
    ctx->pc = 0x127868u;
    {
        const bool branch_taken_0x127868 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x127868) {
            ctx->pc = 0x1278B4u;
            goto label_1278b4;
        }
    }
    ctx->pc = 0x127870u;
label_127870:
    // 0x127870: 0x2e210002  sltiu       $at, $s1, 0x2
    ctx->pc = 0x127870u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_127874:
    // 0x127874: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
label_127878:
    if (ctx->pc == 0x127878u) {
        ctx->pc = 0x12787Cu;
        goto label_12787c;
    }
    ctx->pc = 0x127874u;
    {
        const bool branch_taken_0x127874 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x127874) {
            ctx->pc = 0x1278ACu;
            goto label_1278ac;
        }
    }
    ctx->pc = 0x12787Cu;
label_12787c:
    // 0x12787c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x12787cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_127880:
    // 0x127880: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_127884:
    // 0x127884: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x127884u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_127888:
    // 0x127888: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x127888u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_12788c:
    // 0x12788c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12788cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_127890:
    // 0x127890: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x127890u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_127894:
    // 0x127894: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_127898:
    // 0x127898: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x127898u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_12789c:
    // 0x12789c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12789cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1278a0:
    // 0x1278a0: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1278a0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_1278a4:
    // 0x1278a4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1278a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1278a8:
    // 0x1278a8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1278a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_1278ac:
    // 0x1278ac: 0x1000006a  b           . + 4 + (0x6A << 2)
label_1278b0:
    if (ctx->pc == 0x1278B0u) {
        ctx->pc = 0x1278B4u;
        goto label_1278b4;
    }
    ctx->pc = 0x1278ACu;
    {
        const bool branch_taken_0x1278ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1278ac) {
            ctx->pc = 0x127A58u;
            goto label_127a58;
        }
    }
    ctx->pc = 0x1278B4u;
label_1278b4:
    // 0x1278b4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1278b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1278b8:
    // 0x1278b8: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x1278b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1278bc:
    // 0x1278bc: 0x3c03455a  lui         $v1, 0x455A
    ctx->pc = 0x1278bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17754 << 16));
label_1278c0:
    // 0x1278c0: 0x3463c000  ori         $v1, $v1, 0xC000
    ctx->pc = 0x1278c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49152);
label_1278c4:
    // 0x1278c4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1278c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1278c8:
    // 0x1278c8: 0x0  nop
    ctx->pc = 0x1278c8u;
    // NOP
label_1278cc:
    // 0x1278cc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1278ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1278d0:
    // 0x1278d0: 0x0  nop
    ctx->pc = 0x1278d0u;
    // NOP
label_1278d4:
    // 0x1278d4: 0x45000060  bc1f        . + 4 + (0x60 << 2)
label_1278d8:
    if (ctx->pc == 0x1278D8u) {
        ctx->pc = 0x1278DCu;
        goto label_1278dc;
    }
    ctx->pc = 0x1278D4u;
    {
        const bool branch_taken_0x1278d4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1278d4) {
            ctx->pc = 0x127A58u;
            goto label_127a58;
        }
    }
    ctx->pc = 0x1278DCu;
label_1278dc:
    // 0x1278dc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1278dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1278e0:
    // 0x1278e0: 0xc4411288  lwc1        $f1, 0x1288($v0)
    ctx->pc = 0x1278e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1278e4:
    // 0x1278e4: 0x3c02451c  lui         $v0, 0x451C
    ctx->pc = 0x1278e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17692 << 16));
label_1278e8:
    // 0x1278e8: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1278e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_1278ec:
    // 0x1278ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1278ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1278f0:
    // 0x1278f0: 0x0  nop
    ctx->pc = 0x1278f0u;
    // NOP
label_1278f4:
    // 0x1278f4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1278f4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1278f8:
    // 0x1278f8: 0x0  nop
    ctx->pc = 0x1278f8u;
    // NOP
label_1278fc:
    // 0x1278fc: 0x4501001e  bc1t        . + 4 + (0x1E << 2)
label_127900:
    if (ctx->pc == 0x127900u) {
        ctx->pc = 0x127904u;
        goto label_127904;
    }
    ctx->pc = 0x1278FCu;
    {
        const bool branch_taken_0x1278fc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1278fc) {
            ctx->pc = 0x127978u;
            goto label_127978;
        }
    }
    ctx->pc = 0x127904u;
label_127904:
    // 0x127904: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x127904u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_127908:
    // 0x127908: 0x8c221a64  lw          $v0, 0x1A64($at)
    ctx->pc = 0x127908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6756)));
label_12790c:
    // 0x12790c: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x12790cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_127910:
    // 0x127910: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_127914:
    if (ctx->pc == 0x127914u) {
        ctx->pc = 0x127918u;
        goto label_127918;
    }
    ctx->pc = 0x127910u;
    {
        const bool branch_taken_0x127910 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x127910) {
            ctx->pc = 0x127928u;
            goto label_127928;
        }
    }
    ctx->pc = 0x127918u;
label_127918:
    // 0x127918: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x127918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_12791c:
    // 0x12791c: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x12791cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_127920:
    // 0x127920: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_127924:
    if (ctx->pc == 0x127924u) {
        ctx->pc = 0x127928u;
        goto label_127928;
    }
    ctx->pc = 0x127920u;
    {
        const bool branch_taken_0x127920 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x127920) {
            ctx->pc = 0x127978u;
            goto label_127978;
        }
    }
    ctx->pc = 0x127928u;
label_127928:
    // 0x127928: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x127928u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12792c:
    // 0x12792c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x12792cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_127930:
    // 0x127930: 0xc05d25c  jal         func_174970
label_127934:
    if (ctx->pc == 0x127934u) {
        ctx->pc = 0x127938u;
        goto label_127938;
    }
    ctx->pc = 0x127930u;
    SET_GPR_U32(ctx, 31, 0x127938u);
    ctx->pc = 0x174970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174970u, 0x127930u, 0x127938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127938u;
label_127938:
    // 0x127938: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_12793c:
    if (ctx->pc == 0x12793Cu) {
        ctx->pc = 0x127940u;
        goto label_127940;
    }
    ctx->pc = 0x127938u;
    {
        const bool branch_taken_0x127938 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x127938) {
            ctx->pc = 0x127978u;
            goto label_127978;
        }
    }
    ctx->pc = 0x127940u;
label_127940:
    // 0x127940: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x127940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_127944:
    // 0x127944: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_127948:
    // 0x127948: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x127948u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_12794c:
    // 0x12794c: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x12794cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_127950:
    // 0x127950: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_127954:
    // 0x127954: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x127954u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_127958:
    // 0x127958: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12795c:
    // 0x12795c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x12795cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_127960:
    // 0x127960: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_127964:
    // 0x127964: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x127964u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_127968:
    // 0x127968: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12796c:
    // 0x12796c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x12796cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_127970:
    // 0x127970: 0x10000039  b           . + 4 + (0x39 << 2)
label_127974:
    if (ctx->pc == 0x127974u) {
        ctx->pc = 0x127978u;
        goto label_127978;
    }
    ctx->pc = 0x127970u;
    {
        const bool branch_taken_0x127970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x127970) {
            ctx->pc = 0x127A58u;
            goto label_127a58;
        }
    }
    ctx->pc = 0x127978u;
label_127978:
    // 0x127978: 0xc067694  jal         func_19DA50
label_12797c:
    if (ctx->pc == 0x12797Cu) {
        ctx->pc = 0x127980u;
        goto label_127980;
    }
    ctx->pc = 0x127978u;
    SET_GPR_U32(ctx, 31, 0x127980u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x127978u, 0x127980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127980u;
label_127980:
    // 0x127980: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x127980u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_127984:
    // 0x127984: 0x3065000f  andi        $a1, $v1, 0xF
    ctx->pc = 0x127984u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
label_127988:
    // 0x127988: 0x2ca10008  sltiu       $at, $a1, 0x8
    ctx->pc = 0x127988u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_12798c:
    // 0x12798c: 0x10200022  beqz        $at, . + 4 + (0x22 << 2)
label_127990:
    if (ctx->pc == 0x127990u) {
        ctx->pc = 0x127994u;
        goto label_127994;
    }
    ctx->pc = 0x12798Cu;
    {
        const bool branch_taken_0x12798c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x12798c) {
            ctx->pc = 0x127A18u;
            goto label_127a18;
        }
    }
    ctx->pc = 0x127994u;
label_127994:
    // 0x127994: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x127994u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_127998:
    // 0x127998: 0x2464e2e0  addiu       $a0, $v1, -0x1D20
    ctx->pc = 0x127998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959840));
label_12799c:
    // 0x12799c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x12799cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1279a0:
    // 0x1279a0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1279a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1279a4:
    // 0x1279a4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1279a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1279a8:
    // 0x1279a8: 0x600008  jr          $v1
label_1279ac:
    if (ctx->pc == 0x1279ACu) {
        ctx->pc = 0x1279B0u;
        goto label_1279b0;
    }
    ctx->pc = 0x1279A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1279A8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1279B0u;
label_1279b0:
    // 0x1279b0: 0x16200017  bnez        $s1, . + 4 + (0x17 << 2)
label_1279b4:
    if (ctx->pc == 0x1279B4u) {
        ctx->pc = 0x1279B8u;
        goto label_1279b8;
    }
    ctx->pc = 0x1279B0u;
    {
        const bool branch_taken_0x1279b0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1279b0) {
            ctx->pc = 0x127A10u;
            goto label_127a10;
        }
    }
    ctx->pc = 0x1279B8u;
label_1279b8:
    // 0x1279b8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1279b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1279bc:
    // 0x1279bc: 0xc04d8bc  jal         func_1362F0
label_1279c0:
    if (ctx->pc == 0x1279C0u) {
        ctx->pc = 0x1279C4u;
        goto label_1279c4;
    }
    ctx->pc = 0x1279BCu;
    SET_GPR_U32(ctx, 31, 0x1279C4u);
    ctx->pc = 0x1362F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1362F0u, 0x1279BCu, 0x1279C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1279C4u;
label_1279c4:
    // 0x1279c4: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_1279c8:
    if (ctx->pc == 0x1279C8u) {
        ctx->pc = 0x1279CCu;
        goto label_1279cc;
    }
    ctx->pc = 0x1279C4u;
    {
        const bool branch_taken_0x1279c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1279c4) {
            ctx->pc = 0x127A10u;
            goto label_127a10;
        }
    }
    ctx->pc = 0x1279CCu;
label_1279cc:
    // 0x1279cc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1279ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1279d0:
    // 0x1279d0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1279d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1279d4:
    // 0x1279d4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1279d4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_1279d8:
    // 0x1279d8: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x1279d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1279dc:
    // 0x1279dc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1279dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1279e0:
    // 0x1279e0: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1279e0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_1279e4:
    // 0x1279e4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1279e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1279e8:
    // 0x1279e8: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1279e8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_1279ec:
    // 0x1279ec: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1279ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1279f0:
    // 0x1279f0: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1279f0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_1279f4:
    // 0x1279f4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1279f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1279f8:
    // 0x1279f8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1279f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_1279fc:
    // 0x1279fc: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1279fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_127a00:
    // 0x127a00: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x127a00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_127a04:
    // 0x127a04: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x127a04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_127a08:
    // 0x127a08: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x127a08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_127a0c:
    // 0x127a0c: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x127a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
label_127a10:
    // 0x127a10: 0x10000011  b           . + 4 + (0x11 << 2)
label_127a14:
    if (ctx->pc == 0x127A14u) {
        ctx->pc = 0x127A18u;
        goto label_127a18;
    }
    ctx->pc = 0x127A10u;
    {
        const bool branch_taken_0x127a10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x127a10) {
            ctx->pc = 0x127A58u;
            goto label_127a58;
        }
    }
    ctx->pc = 0x127A18u;
label_127a18:
    // 0x127a18: 0x1000000f  b           . + 4 + (0xF << 2)
label_127a1c:
    if (ctx->pc == 0x127A1Cu) {
        ctx->pc = 0x127A20u;
        goto label_127a20;
    }
    ctx->pc = 0x127A18u;
    {
        const bool branch_taken_0x127a18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x127a18) {
            ctx->pc = 0x127A58u;
            goto label_127a58;
        }
    }
    ctx->pc = 0x127A20u;
label_127a20:
    // 0x127a20: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x127a20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_127a24:
    // 0x127a24: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127a24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_127a28:
    // 0x127a28: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x127a28u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_127a2c:
    // 0x127a2c: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x127a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_127a30:
    // 0x127a30: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127a30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_127a34:
    // 0x127a34: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x127a34u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_127a38:
    // 0x127a38: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127a38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_127a3c:
    // 0x127a3c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x127a3cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_127a40:
    // 0x127a40: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127a40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_127a44:
    // 0x127a44: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x127a44u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_127a48:
    // 0x127a48: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127a48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_127a4c:
    // 0x127a4c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x127a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_127a50:
    // 0x127a50: 0x10000001  b           . + 4 + (0x1 << 2)
label_127a54:
    if (ctx->pc == 0x127A54u) {
        ctx->pc = 0x127A58u;
        goto label_127a58;
    }
    ctx->pc = 0x127A50u;
    {
        const bool branch_taken_0x127a50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x127a50) {
            ctx->pc = 0x127A58u;
            goto label_127a58;
        }
    }
    ctx->pc = 0x127A58u;
label_127a58:
    // 0x127a58: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x127a58u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_127a5c:
    // 0x127a5c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x127a5cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_127a60:
    // 0x127a60: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x127a60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_127a64:
    // 0x127a64: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x127a64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_127a68:
    // 0x127a68: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x127a68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_127a6c:
    // 0x127a6c: 0x3e00008  jr          $ra
label_127a70:
    if (ctx->pc == 0x127A70u) {
        ctx->pc = 0x127A74u;
        goto label_fallthrough_0x127a6c;
    }
    ctx->pc = 0x127A6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x127A6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x127a6c:
    ctx->pc = 0x127A74u;
}
