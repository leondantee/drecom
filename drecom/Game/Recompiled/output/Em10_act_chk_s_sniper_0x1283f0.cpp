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

// Function: Em10_act_chk_s_sniper
// Address: 0x1283f0 - 0x128d70
void Em10_act_chk_s_sniper_0x1283f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em10_act_chk_s_sniper_0x1283f0");
#endif

    switch (ctx->pc) {
        case 0x1283f0u: goto label_1283f0;
        case 0x1283f4u: goto label_1283f4;
        case 0x1283f8u: goto label_1283f8;
        case 0x1283fcu: goto label_1283fc;
        case 0x128400u: goto label_128400;
        case 0x128404u: goto label_128404;
        case 0x128408u: goto label_128408;
        case 0x12840cu: goto label_12840c;
        case 0x128410u: goto label_128410;
        case 0x128414u: goto label_128414;
        case 0x128418u: goto label_128418;
        case 0x12841cu: goto label_12841c;
        case 0x128420u: goto label_128420;
        case 0x128424u: goto label_128424;
        case 0x128428u: goto label_128428;
        case 0x12842cu: goto label_12842c;
        case 0x128430u: goto label_128430;
        case 0x128434u: goto label_128434;
        case 0x128438u: goto label_128438;
        case 0x12843cu: goto label_12843c;
        case 0x128440u: goto label_128440;
        case 0x128444u: goto label_128444;
        case 0x128448u: goto label_128448;
        case 0x12844cu: goto label_12844c;
        case 0x128450u: goto label_128450;
        case 0x128454u: goto label_128454;
        case 0x128458u: goto label_128458;
        case 0x12845cu: goto label_12845c;
        case 0x128460u: goto label_128460;
        case 0x128464u: goto label_128464;
        case 0x128468u: goto label_128468;
        case 0x12846cu: goto label_12846c;
        case 0x128470u: goto label_128470;
        case 0x128474u: goto label_128474;
        case 0x128478u: goto label_128478;
        case 0x12847cu: goto label_12847c;
        case 0x128480u: goto label_128480;
        case 0x128484u: goto label_128484;
        case 0x128488u: goto label_128488;
        case 0x12848cu: goto label_12848c;
        case 0x128490u: goto label_128490;
        case 0x128494u: goto label_128494;
        case 0x128498u: goto label_128498;
        case 0x12849cu: goto label_12849c;
        case 0x1284a0u: goto label_1284a0;
        case 0x1284a4u: goto label_1284a4;
        case 0x1284a8u: goto label_1284a8;
        case 0x1284acu: goto label_1284ac;
        case 0x1284b0u: goto label_1284b0;
        case 0x1284b4u: goto label_1284b4;
        case 0x1284b8u: goto label_1284b8;
        case 0x1284bcu: goto label_1284bc;
        case 0x1284c0u: goto label_1284c0;
        case 0x1284c4u: goto label_1284c4;
        case 0x1284c8u: goto label_1284c8;
        case 0x1284ccu: goto label_1284cc;
        case 0x1284d0u: goto label_1284d0;
        case 0x1284d4u: goto label_1284d4;
        case 0x1284d8u: goto label_1284d8;
        case 0x1284dcu: goto label_1284dc;
        case 0x1284e0u: goto label_1284e0;
        case 0x1284e4u: goto label_1284e4;
        case 0x1284e8u: goto label_1284e8;
        case 0x1284ecu: goto label_1284ec;
        case 0x1284f0u: goto label_1284f0;
        case 0x1284f4u: goto label_1284f4;
        case 0x1284f8u: goto label_1284f8;
        case 0x1284fcu: goto label_1284fc;
        case 0x128500u: goto label_128500;
        case 0x128504u: goto label_128504;
        case 0x128508u: goto label_128508;
        case 0x12850cu: goto label_12850c;
        case 0x128510u: goto label_128510;
        case 0x128514u: goto label_128514;
        case 0x128518u: goto label_128518;
        case 0x12851cu: goto label_12851c;
        case 0x128520u: goto label_128520;
        case 0x128524u: goto label_128524;
        case 0x128528u: goto label_128528;
        case 0x12852cu: goto label_12852c;
        case 0x128530u: goto label_128530;
        case 0x128534u: goto label_128534;
        case 0x128538u: goto label_128538;
        case 0x12853cu: goto label_12853c;
        case 0x128540u: goto label_128540;
        case 0x128544u: goto label_128544;
        case 0x128548u: goto label_128548;
        case 0x12854cu: goto label_12854c;
        case 0x128550u: goto label_128550;
        case 0x128554u: goto label_128554;
        case 0x128558u: goto label_128558;
        case 0x12855cu: goto label_12855c;
        case 0x128560u: goto label_128560;
        case 0x128564u: goto label_128564;
        case 0x128568u: goto label_128568;
        case 0x12856cu: goto label_12856c;
        case 0x128570u: goto label_128570;
        case 0x128574u: goto label_128574;
        case 0x128578u: goto label_128578;
        case 0x12857cu: goto label_12857c;
        case 0x128580u: goto label_128580;
        case 0x128584u: goto label_128584;
        case 0x128588u: goto label_128588;
        case 0x12858cu: goto label_12858c;
        case 0x128590u: goto label_128590;
        case 0x128594u: goto label_128594;
        case 0x128598u: goto label_128598;
        case 0x12859cu: goto label_12859c;
        case 0x1285a0u: goto label_1285a0;
        case 0x1285a4u: goto label_1285a4;
        case 0x1285a8u: goto label_1285a8;
        case 0x1285acu: goto label_1285ac;
        case 0x1285b0u: goto label_1285b0;
        case 0x1285b4u: goto label_1285b4;
        case 0x1285b8u: goto label_1285b8;
        case 0x1285bcu: goto label_1285bc;
        case 0x1285c0u: goto label_1285c0;
        case 0x1285c4u: goto label_1285c4;
        case 0x1285c8u: goto label_1285c8;
        case 0x1285ccu: goto label_1285cc;
        case 0x1285d0u: goto label_1285d0;
        case 0x1285d4u: goto label_1285d4;
        case 0x1285d8u: goto label_1285d8;
        case 0x1285dcu: goto label_1285dc;
        case 0x1285e0u: goto label_1285e0;
        case 0x1285e4u: goto label_1285e4;
        case 0x1285e8u: goto label_1285e8;
        case 0x1285ecu: goto label_1285ec;
        case 0x1285f0u: goto label_1285f0;
        case 0x1285f4u: goto label_1285f4;
        case 0x1285f8u: goto label_1285f8;
        case 0x1285fcu: goto label_1285fc;
        case 0x128600u: goto label_128600;
        case 0x128604u: goto label_128604;
        case 0x128608u: goto label_128608;
        case 0x12860cu: goto label_12860c;
        case 0x128610u: goto label_128610;
        case 0x128614u: goto label_128614;
        case 0x128618u: goto label_128618;
        case 0x12861cu: goto label_12861c;
        case 0x128620u: goto label_128620;
        case 0x128624u: goto label_128624;
        case 0x128628u: goto label_128628;
        case 0x12862cu: goto label_12862c;
        case 0x128630u: goto label_128630;
        case 0x128634u: goto label_128634;
        case 0x128638u: goto label_128638;
        case 0x12863cu: goto label_12863c;
        case 0x128640u: goto label_128640;
        case 0x128644u: goto label_128644;
        case 0x128648u: goto label_128648;
        case 0x12864cu: goto label_12864c;
        case 0x128650u: goto label_128650;
        case 0x128654u: goto label_128654;
        case 0x128658u: goto label_128658;
        case 0x12865cu: goto label_12865c;
        case 0x128660u: goto label_128660;
        case 0x128664u: goto label_128664;
        case 0x128668u: goto label_128668;
        case 0x12866cu: goto label_12866c;
        case 0x128670u: goto label_128670;
        case 0x128674u: goto label_128674;
        case 0x128678u: goto label_128678;
        case 0x12867cu: goto label_12867c;
        case 0x128680u: goto label_128680;
        case 0x128684u: goto label_128684;
        case 0x128688u: goto label_128688;
        case 0x12868cu: goto label_12868c;
        case 0x128690u: goto label_128690;
        case 0x128694u: goto label_128694;
        case 0x128698u: goto label_128698;
        case 0x12869cu: goto label_12869c;
        case 0x1286a0u: goto label_1286a0;
        case 0x1286a4u: goto label_1286a4;
        case 0x1286a8u: goto label_1286a8;
        case 0x1286acu: goto label_1286ac;
        case 0x1286b0u: goto label_1286b0;
        case 0x1286b4u: goto label_1286b4;
        case 0x1286b8u: goto label_1286b8;
        case 0x1286bcu: goto label_1286bc;
        case 0x1286c0u: goto label_1286c0;
        case 0x1286c4u: goto label_1286c4;
        case 0x1286c8u: goto label_1286c8;
        case 0x1286ccu: goto label_1286cc;
        case 0x1286d0u: goto label_1286d0;
        case 0x1286d4u: goto label_1286d4;
        case 0x1286d8u: goto label_1286d8;
        case 0x1286dcu: goto label_1286dc;
        case 0x1286e0u: goto label_1286e0;
        case 0x1286e4u: goto label_1286e4;
        case 0x1286e8u: goto label_1286e8;
        case 0x1286ecu: goto label_1286ec;
        case 0x1286f0u: goto label_1286f0;
        case 0x1286f4u: goto label_1286f4;
        case 0x1286f8u: goto label_1286f8;
        case 0x1286fcu: goto label_1286fc;
        case 0x128700u: goto label_128700;
        case 0x128704u: goto label_128704;
        case 0x128708u: goto label_128708;
        case 0x12870cu: goto label_12870c;
        case 0x128710u: goto label_128710;
        case 0x128714u: goto label_128714;
        case 0x128718u: goto label_128718;
        case 0x12871cu: goto label_12871c;
        case 0x128720u: goto label_128720;
        case 0x128724u: goto label_128724;
        case 0x128728u: goto label_128728;
        case 0x12872cu: goto label_12872c;
        case 0x128730u: goto label_128730;
        case 0x128734u: goto label_128734;
        case 0x128738u: goto label_128738;
        case 0x12873cu: goto label_12873c;
        case 0x128740u: goto label_128740;
        case 0x128744u: goto label_128744;
        case 0x128748u: goto label_128748;
        case 0x12874cu: goto label_12874c;
        case 0x128750u: goto label_128750;
        case 0x128754u: goto label_128754;
        case 0x128758u: goto label_128758;
        case 0x12875cu: goto label_12875c;
        case 0x128760u: goto label_128760;
        case 0x128764u: goto label_128764;
        case 0x128768u: goto label_128768;
        case 0x12876cu: goto label_12876c;
        case 0x128770u: goto label_128770;
        case 0x128774u: goto label_128774;
        case 0x128778u: goto label_128778;
        case 0x12877cu: goto label_12877c;
        case 0x128780u: goto label_128780;
        case 0x128784u: goto label_128784;
        case 0x128788u: goto label_128788;
        case 0x12878cu: goto label_12878c;
        case 0x128790u: goto label_128790;
        case 0x128794u: goto label_128794;
        case 0x128798u: goto label_128798;
        case 0x12879cu: goto label_12879c;
        case 0x1287a0u: goto label_1287a0;
        case 0x1287a4u: goto label_1287a4;
        case 0x1287a8u: goto label_1287a8;
        case 0x1287acu: goto label_1287ac;
        case 0x1287b0u: goto label_1287b0;
        case 0x1287b4u: goto label_1287b4;
        case 0x1287b8u: goto label_1287b8;
        case 0x1287bcu: goto label_1287bc;
        case 0x1287c0u: goto label_1287c0;
        case 0x1287c4u: goto label_1287c4;
        case 0x1287c8u: goto label_1287c8;
        case 0x1287ccu: goto label_1287cc;
        case 0x1287d0u: goto label_1287d0;
        case 0x1287d4u: goto label_1287d4;
        case 0x1287d8u: goto label_1287d8;
        case 0x1287dcu: goto label_1287dc;
        case 0x1287e0u: goto label_1287e0;
        case 0x1287e4u: goto label_1287e4;
        case 0x1287e8u: goto label_1287e8;
        case 0x1287ecu: goto label_1287ec;
        case 0x1287f0u: goto label_1287f0;
        case 0x1287f4u: goto label_1287f4;
        case 0x1287f8u: goto label_1287f8;
        case 0x1287fcu: goto label_1287fc;
        case 0x128800u: goto label_128800;
        case 0x128804u: goto label_128804;
        case 0x128808u: goto label_128808;
        case 0x12880cu: goto label_12880c;
        case 0x128810u: goto label_128810;
        case 0x128814u: goto label_128814;
        case 0x128818u: goto label_128818;
        case 0x12881cu: goto label_12881c;
        case 0x128820u: goto label_128820;
        case 0x128824u: goto label_128824;
        case 0x128828u: goto label_128828;
        case 0x12882cu: goto label_12882c;
        case 0x128830u: goto label_128830;
        case 0x128834u: goto label_128834;
        case 0x128838u: goto label_128838;
        case 0x12883cu: goto label_12883c;
        case 0x128840u: goto label_128840;
        case 0x128844u: goto label_128844;
        case 0x128848u: goto label_128848;
        case 0x12884cu: goto label_12884c;
        case 0x128850u: goto label_128850;
        case 0x128854u: goto label_128854;
        case 0x128858u: goto label_128858;
        case 0x12885cu: goto label_12885c;
        case 0x128860u: goto label_128860;
        case 0x128864u: goto label_128864;
        case 0x128868u: goto label_128868;
        case 0x12886cu: goto label_12886c;
        case 0x128870u: goto label_128870;
        case 0x128874u: goto label_128874;
        case 0x128878u: goto label_128878;
        case 0x12887cu: goto label_12887c;
        case 0x128880u: goto label_128880;
        case 0x128884u: goto label_128884;
        case 0x128888u: goto label_128888;
        case 0x12888cu: goto label_12888c;
        case 0x128890u: goto label_128890;
        case 0x128894u: goto label_128894;
        case 0x128898u: goto label_128898;
        case 0x12889cu: goto label_12889c;
        case 0x1288a0u: goto label_1288a0;
        case 0x1288a4u: goto label_1288a4;
        case 0x1288a8u: goto label_1288a8;
        case 0x1288acu: goto label_1288ac;
        case 0x1288b0u: goto label_1288b0;
        case 0x1288b4u: goto label_1288b4;
        case 0x1288b8u: goto label_1288b8;
        case 0x1288bcu: goto label_1288bc;
        case 0x1288c0u: goto label_1288c0;
        case 0x1288c4u: goto label_1288c4;
        case 0x1288c8u: goto label_1288c8;
        case 0x1288ccu: goto label_1288cc;
        case 0x1288d0u: goto label_1288d0;
        case 0x1288d4u: goto label_1288d4;
        case 0x1288d8u: goto label_1288d8;
        case 0x1288dcu: goto label_1288dc;
        case 0x1288e0u: goto label_1288e0;
        case 0x1288e4u: goto label_1288e4;
        case 0x1288e8u: goto label_1288e8;
        case 0x1288ecu: goto label_1288ec;
        case 0x1288f0u: goto label_1288f0;
        case 0x1288f4u: goto label_1288f4;
        case 0x1288f8u: goto label_1288f8;
        case 0x1288fcu: goto label_1288fc;
        case 0x128900u: goto label_128900;
        case 0x128904u: goto label_128904;
        case 0x128908u: goto label_128908;
        case 0x12890cu: goto label_12890c;
        case 0x128910u: goto label_128910;
        case 0x128914u: goto label_128914;
        case 0x128918u: goto label_128918;
        case 0x12891cu: goto label_12891c;
        case 0x128920u: goto label_128920;
        case 0x128924u: goto label_128924;
        case 0x128928u: goto label_128928;
        case 0x12892cu: goto label_12892c;
        case 0x128930u: goto label_128930;
        case 0x128934u: goto label_128934;
        case 0x128938u: goto label_128938;
        case 0x12893cu: goto label_12893c;
        case 0x128940u: goto label_128940;
        case 0x128944u: goto label_128944;
        case 0x128948u: goto label_128948;
        case 0x12894cu: goto label_12894c;
        case 0x128950u: goto label_128950;
        case 0x128954u: goto label_128954;
        case 0x128958u: goto label_128958;
        case 0x12895cu: goto label_12895c;
        case 0x128960u: goto label_128960;
        case 0x128964u: goto label_128964;
        case 0x128968u: goto label_128968;
        case 0x12896cu: goto label_12896c;
        case 0x128970u: goto label_128970;
        case 0x128974u: goto label_128974;
        case 0x128978u: goto label_128978;
        case 0x12897cu: goto label_12897c;
        case 0x128980u: goto label_128980;
        case 0x128984u: goto label_128984;
        case 0x128988u: goto label_128988;
        case 0x12898cu: goto label_12898c;
        case 0x128990u: goto label_128990;
        case 0x128994u: goto label_128994;
        case 0x128998u: goto label_128998;
        case 0x12899cu: goto label_12899c;
        case 0x1289a0u: goto label_1289a0;
        case 0x1289a4u: goto label_1289a4;
        case 0x1289a8u: goto label_1289a8;
        case 0x1289acu: goto label_1289ac;
        case 0x1289b0u: goto label_1289b0;
        case 0x1289b4u: goto label_1289b4;
        case 0x1289b8u: goto label_1289b8;
        case 0x1289bcu: goto label_1289bc;
        case 0x1289c0u: goto label_1289c0;
        case 0x1289c4u: goto label_1289c4;
        case 0x1289c8u: goto label_1289c8;
        case 0x1289ccu: goto label_1289cc;
        case 0x1289d0u: goto label_1289d0;
        case 0x1289d4u: goto label_1289d4;
        case 0x1289d8u: goto label_1289d8;
        case 0x1289dcu: goto label_1289dc;
        case 0x1289e0u: goto label_1289e0;
        case 0x1289e4u: goto label_1289e4;
        case 0x1289e8u: goto label_1289e8;
        case 0x1289ecu: goto label_1289ec;
        case 0x1289f0u: goto label_1289f0;
        case 0x1289f4u: goto label_1289f4;
        case 0x1289f8u: goto label_1289f8;
        case 0x1289fcu: goto label_1289fc;
        case 0x128a00u: goto label_128a00;
        case 0x128a04u: goto label_128a04;
        case 0x128a08u: goto label_128a08;
        case 0x128a0cu: goto label_128a0c;
        case 0x128a10u: goto label_128a10;
        case 0x128a14u: goto label_128a14;
        case 0x128a18u: goto label_128a18;
        case 0x128a1cu: goto label_128a1c;
        case 0x128a20u: goto label_128a20;
        case 0x128a24u: goto label_128a24;
        case 0x128a28u: goto label_128a28;
        case 0x128a2cu: goto label_128a2c;
        case 0x128a30u: goto label_128a30;
        case 0x128a34u: goto label_128a34;
        case 0x128a38u: goto label_128a38;
        case 0x128a3cu: goto label_128a3c;
        case 0x128a40u: goto label_128a40;
        case 0x128a44u: goto label_128a44;
        case 0x128a48u: goto label_128a48;
        case 0x128a4cu: goto label_128a4c;
        case 0x128a50u: goto label_128a50;
        case 0x128a54u: goto label_128a54;
        case 0x128a58u: goto label_128a58;
        case 0x128a5cu: goto label_128a5c;
        case 0x128a60u: goto label_128a60;
        case 0x128a64u: goto label_128a64;
        case 0x128a68u: goto label_128a68;
        case 0x128a6cu: goto label_128a6c;
        case 0x128a70u: goto label_128a70;
        case 0x128a74u: goto label_128a74;
        case 0x128a78u: goto label_128a78;
        case 0x128a7cu: goto label_128a7c;
        case 0x128a80u: goto label_128a80;
        case 0x128a84u: goto label_128a84;
        case 0x128a88u: goto label_128a88;
        case 0x128a8cu: goto label_128a8c;
        case 0x128a90u: goto label_128a90;
        case 0x128a94u: goto label_128a94;
        case 0x128a98u: goto label_128a98;
        case 0x128a9cu: goto label_128a9c;
        case 0x128aa0u: goto label_128aa0;
        case 0x128aa4u: goto label_128aa4;
        case 0x128aa8u: goto label_128aa8;
        case 0x128aacu: goto label_128aac;
        case 0x128ab0u: goto label_128ab0;
        case 0x128ab4u: goto label_128ab4;
        case 0x128ab8u: goto label_128ab8;
        case 0x128abcu: goto label_128abc;
        case 0x128ac0u: goto label_128ac0;
        case 0x128ac4u: goto label_128ac4;
        case 0x128ac8u: goto label_128ac8;
        case 0x128accu: goto label_128acc;
        case 0x128ad0u: goto label_128ad0;
        case 0x128ad4u: goto label_128ad4;
        case 0x128ad8u: goto label_128ad8;
        case 0x128adcu: goto label_128adc;
        case 0x128ae0u: goto label_128ae0;
        case 0x128ae4u: goto label_128ae4;
        case 0x128ae8u: goto label_128ae8;
        case 0x128aecu: goto label_128aec;
        case 0x128af0u: goto label_128af0;
        case 0x128af4u: goto label_128af4;
        case 0x128af8u: goto label_128af8;
        case 0x128afcu: goto label_128afc;
        case 0x128b00u: goto label_128b00;
        case 0x128b04u: goto label_128b04;
        case 0x128b08u: goto label_128b08;
        case 0x128b0cu: goto label_128b0c;
        case 0x128b10u: goto label_128b10;
        case 0x128b14u: goto label_128b14;
        case 0x128b18u: goto label_128b18;
        case 0x128b1cu: goto label_128b1c;
        case 0x128b20u: goto label_128b20;
        case 0x128b24u: goto label_128b24;
        case 0x128b28u: goto label_128b28;
        case 0x128b2cu: goto label_128b2c;
        case 0x128b30u: goto label_128b30;
        case 0x128b34u: goto label_128b34;
        case 0x128b38u: goto label_128b38;
        case 0x128b3cu: goto label_128b3c;
        case 0x128b40u: goto label_128b40;
        case 0x128b44u: goto label_128b44;
        case 0x128b48u: goto label_128b48;
        case 0x128b4cu: goto label_128b4c;
        case 0x128b50u: goto label_128b50;
        case 0x128b54u: goto label_128b54;
        case 0x128b58u: goto label_128b58;
        case 0x128b5cu: goto label_128b5c;
        case 0x128b60u: goto label_128b60;
        case 0x128b64u: goto label_128b64;
        case 0x128b68u: goto label_128b68;
        case 0x128b6cu: goto label_128b6c;
        case 0x128b70u: goto label_128b70;
        case 0x128b74u: goto label_128b74;
        case 0x128b78u: goto label_128b78;
        case 0x128b7cu: goto label_128b7c;
        case 0x128b80u: goto label_128b80;
        case 0x128b84u: goto label_128b84;
        case 0x128b88u: goto label_128b88;
        case 0x128b8cu: goto label_128b8c;
        case 0x128b90u: goto label_128b90;
        case 0x128b94u: goto label_128b94;
        case 0x128b98u: goto label_128b98;
        case 0x128b9cu: goto label_128b9c;
        case 0x128ba0u: goto label_128ba0;
        case 0x128ba4u: goto label_128ba4;
        case 0x128ba8u: goto label_128ba8;
        case 0x128bacu: goto label_128bac;
        case 0x128bb0u: goto label_128bb0;
        case 0x128bb4u: goto label_128bb4;
        case 0x128bb8u: goto label_128bb8;
        case 0x128bbcu: goto label_128bbc;
        case 0x128bc0u: goto label_128bc0;
        case 0x128bc4u: goto label_128bc4;
        case 0x128bc8u: goto label_128bc8;
        case 0x128bccu: goto label_128bcc;
        case 0x128bd0u: goto label_128bd0;
        case 0x128bd4u: goto label_128bd4;
        case 0x128bd8u: goto label_128bd8;
        case 0x128bdcu: goto label_128bdc;
        case 0x128be0u: goto label_128be0;
        case 0x128be4u: goto label_128be4;
        case 0x128be8u: goto label_128be8;
        case 0x128becu: goto label_128bec;
        case 0x128bf0u: goto label_128bf0;
        case 0x128bf4u: goto label_128bf4;
        case 0x128bf8u: goto label_128bf8;
        case 0x128bfcu: goto label_128bfc;
        case 0x128c00u: goto label_128c00;
        case 0x128c04u: goto label_128c04;
        case 0x128c08u: goto label_128c08;
        case 0x128c0cu: goto label_128c0c;
        case 0x128c10u: goto label_128c10;
        case 0x128c14u: goto label_128c14;
        case 0x128c18u: goto label_128c18;
        case 0x128c1cu: goto label_128c1c;
        case 0x128c20u: goto label_128c20;
        case 0x128c24u: goto label_128c24;
        case 0x128c28u: goto label_128c28;
        case 0x128c2cu: goto label_128c2c;
        case 0x128c30u: goto label_128c30;
        case 0x128c34u: goto label_128c34;
        case 0x128c38u: goto label_128c38;
        case 0x128c3cu: goto label_128c3c;
        case 0x128c40u: goto label_128c40;
        case 0x128c44u: goto label_128c44;
        case 0x128c48u: goto label_128c48;
        case 0x128c4cu: goto label_128c4c;
        case 0x128c50u: goto label_128c50;
        case 0x128c54u: goto label_128c54;
        case 0x128c58u: goto label_128c58;
        case 0x128c5cu: goto label_128c5c;
        case 0x128c60u: goto label_128c60;
        case 0x128c64u: goto label_128c64;
        case 0x128c68u: goto label_128c68;
        case 0x128c6cu: goto label_128c6c;
        case 0x128c70u: goto label_128c70;
        case 0x128c74u: goto label_128c74;
        case 0x128c78u: goto label_128c78;
        case 0x128c7cu: goto label_128c7c;
        case 0x128c80u: goto label_128c80;
        case 0x128c84u: goto label_128c84;
        case 0x128c88u: goto label_128c88;
        case 0x128c8cu: goto label_128c8c;
        case 0x128c90u: goto label_128c90;
        case 0x128c94u: goto label_128c94;
        case 0x128c98u: goto label_128c98;
        case 0x128c9cu: goto label_128c9c;
        case 0x128ca0u: goto label_128ca0;
        case 0x128ca4u: goto label_128ca4;
        case 0x128ca8u: goto label_128ca8;
        case 0x128cacu: goto label_128cac;
        case 0x128cb0u: goto label_128cb0;
        case 0x128cb4u: goto label_128cb4;
        case 0x128cb8u: goto label_128cb8;
        case 0x128cbcu: goto label_128cbc;
        case 0x128cc0u: goto label_128cc0;
        case 0x128cc4u: goto label_128cc4;
        case 0x128cc8u: goto label_128cc8;
        case 0x128cccu: goto label_128ccc;
        case 0x128cd0u: goto label_128cd0;
        case 0x128cd4u: goto label_128cd4;
        case 0x128cd8u: goto label_128cd8;
        case 0x128cdcu: goto label_128cdc;
        case 0x128ce0u: goto label_128ce0;
        case 0x128ce4u: goto label_128ce4;
        case 0x128ce8u: goto label_128ce8;
        case 0x128cecu: goto label_128cec;
        case 0x128cf0u: goto label_128cf0;
        case 0x128cf4u: goto label_128cf4;
        case 0x128cf8u: goto label_128cf8;
        case 0x128cfcu: goto label_128cfc;
        case 0x128d00u: goto label_128d00;
        case 0x128d04u: goto label_128d04;
        case 0x128d08u: goto label_128d08;
        case 0x128d0cu: goto label_128d0c;
        case 0x128d10u: goto label_128d10;
        case 0x128d14u: goto label_128d14;
        case 0x128d18u: goto label_128d18;
        case 0x128d1cu: goto label_128d1c;
        case 0x128d20u: goto label_128d20;
        case 0x128d24u: goto label_128d24;
        case 0x128d28u: goto label_128d28;
        case 0x128d2cu: goto label_128d2c;
        case 0x128d30u: goto label_128d30;
        case 0x128d34u: goto label_128d34;
        case 0x128d38u: goto label_128d38;
        case 0x128d3cu: goto label_128d3c;
        case 0x128d40u: goto label_128d40;
        case 0x128d44u: goto label_128d44;
        case 0x128d48u: goto label_128d48;
        case 0x128d4cu: goto label_128d4c;
        case 0x128d50u: goto label_128d50;
        case 0x128d54u: goto label_128d54;
        case 0x128d58u: goto label_128d58;
        case 0x128d5cu: goto label_128d5c;
        case 0x128d60u: goto label_128d60;
        case 0x128d64u: goto label_128d64;
        case 0x128d68u: goto label_128d68;
        case 0x128d6cu: goto label_128d6c;
        default: break;
    }

    ctx->pc = 0x1283f0u;

label_1283f0:
    // 0x1283f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1283f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1283f4:
    // 0x1283f4: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x1283f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
label_1283f8:
    // 0x1283f8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1283f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1283fc:
    // 0x1283fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1283fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_128400:
    // 0x128400: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x128400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_128404:
    // 0x128404: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x128404u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
label_128408:
    // 0x128408: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x128408u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12840c:
    // 0x12840c: 0x24901330  addiu       $s0, $a0, 0x1330
    ctx->pc = 0x12840cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
label_128410:
    // 0x128410: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x128410u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_128414:
    // 0x128414: 0xc05cdd8  jal         func_173760
label_128418:
    if (ctx->pc == 0x128418u) {
        ctx->pc = 0x12841Cu;
        goto label_12841c;
    }
    ctx->pc = 0x128414u;
    SET_GPR_U32(ctx, 31, 0x12841Cu);
    ctx->pc = 0x173760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173760u, 0x128414u, 0x12841Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12841Cu;
label_12841c:
    // 0x12841c: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x12841cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_128420:
    // 0x128420: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x128420u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_128424:
    // 0x128424: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x128424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_128428:
    // 0x128428: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x128428u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
label_12842c:
    // 0x12842c: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x12842cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_128430:
    // 0x128430: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x128430u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
label_128434:
    // 0x128434: 0x2465dce0  addiu       $a1, $v1, -0x2320
    ctx->pc = 0x128434u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958304));
label_128438:
    // 0x128438: 0xc05cc90  jal         func_173240
label_12843c:
    if (ctx->pc == 0x12843Cu) {
        ctx->pc = 0x128440u;
        goto label_128440;
    }
    ctx->pc = 0x128438u;
    SET_GPR_U32(ctx, 31, 0x128440u);
    ctx->pc = 0x173240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173240u, 0x128438u, 0x128440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128440u;
label_128440:
    // 0x128440: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x128440u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_128444:
    // 0x128444: 0x2e410008  sltiu       $at, $s2, 0x8
    ctx->pc = 0x128444u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_128448:
    // 0x128448: 0x10200242  beqz        $at, . + 4 + (0x242 << 2)
label_12844c:
    if (ctx->pc == 0x12844Cu) {
        ctx->pc = 0x128450u;
        goto label_128450;
    }
    ctx->pc = 0x128448u;
    {
        const bool branch_taken_0x128448 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x128448) {
            ctx->pc = 0x128D54u;
            goto label_128d54;
        }
    }
    ctx->pc = 0x128450u;
label_128450:
    // 0x128450: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x128450u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
label_128454:
    // 0x128454: 0x2483e3c0  addiu       $v1, $a0, -0x1C40
    ctx->pc = 0x128454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960064));
label_128458:
    // 0x128458: 0x122080  sll         $a0, $s2, 2
    ctx->pc = 0x128458u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_12845c:
    // 0x12845c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x12845cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_128460:
    // 0x128460: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x128460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_128464:
    // 0x128464: 0x600008  jr          $v1
label_128468:
    if (ctx->pc == 0x128468u) {
        ctx->pc = 0x12846Cu;
        goto label_12846c;
    }
    ctx->pc = 0x128464u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x128464u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x12846Cu;
label_12846c:
    // 0x12846c: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x12846cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_128470:
    // 0x128470: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x128470u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
label_128474:
    // 0x128474: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_128478:
    if (ctx->pc == 0x128478u) {
        ctx->pc = 0x12847Cu;
        goto label_12847c;
    }
    ctx->pc = 0x128474u;
    {
        const bool branch_taken_0x128474 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x128474) {
            ctx->pc = 0x12848Cu;
            goto label_12848c;
        }
    }
    ctx->pc = 0x12847Cu;
label_12847c:
    // 0x12847c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12847cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_128480:
    // 0x128480: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x128480u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_128484:
    // 0x128484: 0x10600233  beqz        $v1, . + 4 + (0x233 << 2)
label_128488:
    if (ctx->pc == 0x128488u) {
        ctx->pc = 0x12848Cu;
        goto label_12848c;
    }
    ctx->pc = 0x128484u;
    {
        const bool branch_taken_0x128484 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x128484) {
            ctx->pc = 0x128D54u;
            goto label_128d54;
        }
    }
    ctx->pc = 0x12848Cu;
label_12848c:
    // 0x12848c: 0x9603007c  lhu         $v1, 0x7C($s0)
    ctx->pc = 0x12848cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 124)));
label_128490:
    // 0x128490: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
label_128494:
    if (ctx->pc == 0x128494u) {
        ctx->pc = 0x128498u;
        goto label_128498;
    }
    ctx->pc = 0x128490u;
    {
        const bool branch_taken_0x128490 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x128490) {
            ctx->pc = 0x1284D4u;
            goto label_1284d4;
        }
    }
    ctx->pc = 0x128498u;
label_128498:
    // 0x128498: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x128498u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12849c:
    // 0x12849c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12849cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1284a0:
    // 0x1284a0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1284a0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_1284a4:
    // 0x1284a4: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1284a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1284a8:
    // 0x1284a8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1284a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1284ac:
    // 0x1284ac: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1284acu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_1284b0:
    // 0x1284b0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1284b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1284b4:
    // 0x1284b4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1284b4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_1284b8:
    // 0x1284b8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1284b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1284bc:
    // 0x1284bc: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1284bcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_1284c0:
    // 0x1284c0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1284c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1284c4:
    // 0x1284c4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1284c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1284c8:
    // 0x1284c8: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x1284c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
label_1284cc:
    // 0x1284cc: 0x10000221  b           . + 4 + (0x221 << 2)
label_1284d0:
    if (ctx->pc == 0x1284D0u) {
        ctx->pc = 0x1284D4u;
        goto label_1284d4;
    }
    ctx->pc = 0x1284CCu;
    {
        const bool branch_taken_0x1284cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1284cc) {
            ctx->pc = 0x128D54u;
            goto label_128d54;
        }
    }
    ctx->pc = 0x1284D4u;
label_1284d4:
    // 0x1284d4: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1284d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1284d8:
    // 0x1284d8: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x1284d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
label_1284dc:
    // 0x1284dc: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_1284e0:
    if (ctx->pc == 0x1284E0u) {
        ctx->pc = 0x1284E4u;
        goto label_1284e4;
    }
    ctx->pc = 0x1284DCu;
    {
        const bool branch_taken_0x1284dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1284dc) {
            ctx->pc = 0x1284FCu;
            goto label_1284fc;
        }
    }
    ctx->pc = 0x1284E4u;
label_1284e4:
    // 0x1284e4: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x1284e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1284e8:
    // 0x1284e8: 0x2403ffdf  addiu       $v1, $zero, -0x21
    ctx->pc = 0x1284e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
label_1284ec:
    // 0x1284ec: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1284ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_1284f0:
    // 0x1284f0: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x1284f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
label_1284f4:
    // 0x1284f4: 0x10000217  b           . + 4 + (0x217 << 2)
label_1284f8:
    if (ctx->pc == 0x1284F8u) {
        ctx->pc = 0x1284FCu;
        goto label_1284fc;
    }
    ctx->pc = 0x1284F4u;
    {
        const bool branch_taken_0x1284f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1284f4) {
            ctx->pc = 0x128D54u;
            goto label_128d54;
        }
    }
    ctx->pc = 0x1284FCu;
label_1284fc:
    // 0x1284fc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1284fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_128500:
    // 0x128500: 0x9463000e  lhu         $v1, 0xE($v1)
    ctx->pc = 0x128500u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
label_128504:
    // 0x128504: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x128504u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_128508:
    // 0x128508: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x128508u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
label_12850c:
    // 0x12850c: 0x10600130  beqz        $v1, . + 4 + (0x130 << 2)
label_128510:
    if (ctx->pc == 0x128510u) {
        ctx->pc = 0x128514u;
        goto label_128514;
    }
    ctx->pc = 0x12850Cu;
    {
        const bool branch_taken_0x12850c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12850c) {
            ctx->pc = 0x1289D0u;
            goto label_1289d0;
        }
    }
    ctx->pc = 0x128514u;
label_128514:
    // 0x128514: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x128514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_128518:
    // 0x128518: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x128518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12851c:
    // 0x12851c: 0x3c03443b  lui         $v1, 0x443B
    ctx->pc = 0x12851cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17467 << 16));
label_128520:
    // 0x128520: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x128520u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
label_128524:
    // 0x128524: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x128524u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_128528:
    // 0x128528: 0x0  nop
    ctx->pc = 0x128528u;
    // NOP
label_12852c:
    // 0x12852c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x12852cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_128530:
    // 0x128530: 0x0  nop
    ctx->pc = 0x128530u;
    // NOP
label_128534:
    // 0x128534: 0x45000012  bc1f        . + 4 + (0x12 << 2)
label_128538:
    if (ctx->pc == 0x128538u) {
        ctx->pc = 0x12853Cu;
        goto label_12853c;
    }
    ctx->pc = 0x128534u;
    {
        const bool branch_taken_0x128534 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x128534) {
            ctx->pc = 0x128580u;
            goto label_128580;
        }
    }
    ctx->pc = 0x12853Cu;
label_12853c:
    // 0x12853c: 0x2e210002  sltiu       $at, $s1, 0x2
    ctx->pc = 0x12853cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_128540:
    // 0x128540: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
label_128544:
    if (ctx->pc == 0x128544u) {
        ctx->pc = 0x128548u;
        goto label_128548;
    }
    ctx->pc = 0x128540u;
    {
        const bool branch_taken_0x128540 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x128540) {
            ctx->pc = 0x128578u;
            goto label_128578;
        }
    }
    ctx->pc = 0x128548u;
label_128548:
    // 0x128548: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x128548u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12854c:
    // 0x12854c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12854cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_128550:
    // 0x128550: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x128550u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_128554:
    // 0x128554: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x128554u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_128558:
    // 0x128558: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x128558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12855c:
    // 0x12855c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x12855cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_128560:
    // 0x128560: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x128560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_128564:
    // 0x128564: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x128564u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_128568:
    // 0x128568: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x128568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12856c:
    // 0x12856c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x12856cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_128570:
    // 0x128570: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x128570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_128574:
    // 0x128574: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x128574u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_128578:
    // 0x128578: 0x100001f6  b           . + 4 + (0x1F6 << 2)
label_12857c:
    if (ctx->pc == 0x12857Cu) {
        ctx->pc = 0x128580u;
        goto label_128580;
    }
    ctx->pc = 0x128578u;
    {
        const bool branch_taken_0x128578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x128578) {
            ctx->pc = 0x128D54u;
            goto label_128d54;
        }
    }
    ctx->pc = 0x128580u;
label_128580:
    // 0x128580: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x128580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_128584:
    // 0x128584: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x128584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_128588:
    // 0x128588: 0x3c0344fa  lui         $v1, 0x44FA
    ctx->pc = 0x128588u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17658 << 16));
label_12858c:
    // 0x12858c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x12858cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_128590:
    // 0x128590: 0x0  nop
    ctx->pc = 0x128590u;
    // NOP
label_128594:
    // 0x128594: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x128594u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_128598:
    // 0x128598: 0x0  nop
    ctx->pc = 0x128598u;
    // NOP
label_12859c:
    // 0x12859c: 0x45000089  bc1f        . + 4 + (0x89 << 2)
label_1285a0:
    if (ctx->pc == 0x1285A0u) {
        ctx->pc = 0x1285A4u;
        goto label_1285a4;
    }
    ctx->pc = 0x12859Cu;
    {
        const bool branch_taken_0x12859c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x12859c) {
            ctx->pc = 0x1287C4u;
            goto label_1287c4;
        }
    }
    ctx->pc = 0x1285A4u;
label_1285a4:
    // 0x1285a4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1285a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1285a8:
    // 0x1285a8: 0xc4411288  lwc1        $f1, 0x1288($v0)
    ctx->pc = 0x1285a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1285ac:
    // 0x1285ac: 0x3c02451c  lui         $v0, 0x451C
    ctx->pc = 0x1285acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17692 << 16));
label_1285b0:
    // 0x1285b0: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1285b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_1285b4:
    // 0x1285b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1285b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1285b8:
    // 0x1285b8: 0x0  nop
    ctx->pc = 0x1285b8u;
    // NOP
label_1285bc:
    // 0x1285bc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1285bcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1285c0:
    // 0x1285c0: 0x0  nop
    ctx->pc = 0x1285c0u;
    // NOP
label_1285c4:
    // 0x1285c4: 0x45010035  bc1t        . + 4 + (0x35 << 2)
label_1285c8:
    if (ctx->pc == 0x1285C8u) {
        ctx->pc = 0x1285CCu;
        goto label_1285cc;
    }
    ctx->pc = 0x1285C4u;
    {
        const bool branch_taken_0x1285c4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1285c4) {
            ctx->pc = 0x12869Cu;
            goto label_12869c;
        }
    }
    ctx->pc = 0x1285CCu;
label_1285cc:
    // 0x1285cc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1285ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1285d0:
    // 0x1285d0: 0x8c221a64  lw          $v0, 0x1A64($at)
    ctx->pc = 0x1285d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6756)));
label_1285d4:
    // 0x1285d4: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x1285d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_1285d8:
    // 0x1285d8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1285dc:
    if (ctx->pc == 0x1285DCu) {
        ctx->pc = 0x1285E0u;
        goto label_1285e0;
    }
    ctx->pc = 0x1285D8u;
    {
        const bool branch_taken_0x1285d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1285d8) {
            ctx->pc = 0x1285F0u;
            goto label_1285f0;
        }
    }
    ctx->pc = 0x1285E0u;
label_1285e0:
    // 0x1285e0: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x1285e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1285e4:
    // 0x1285e4: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x1285e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_1285e8:
    // 0x1285e8: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
label_1285ec:
    if (ctx->pc == 0x1285ECu) {
        ctx->pc = 0x1285F0u;
        goto label_1285f0;
    }
    ctx->pc = 0x1285E8u;
    {
        const bool branch_taken_0x1285e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1285e8) {
            ctx->pc = 0x12869Cu;
            goto label_12869c;
        }
    }
    ctx->pc = 0x1285F0u;
label_1285f0:
    // 0x1285f0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1285f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1285f4:
    // 0x1285f4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1285f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1285f8:
    // 0x1285f8: 0xc05d25c  jal         func_174970
label_1285fc:
    if (ctx->pc == 0x1285FCu) {
        ctx->pc = 0x128600u;
        goto label_128600;
    }
    ctx->pc = 0x1285F8u;
    SET_GPR_U32(ctx, 31, 0x128600u);
    ctx->pc = 0x174970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174970u, 0x1285F8u, 0x128600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128600u;
label_128600:
    // 0x128600: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
label_128604:
    if (ctx->pc == 0x128604u) {
        ctx->pc = 0x128608u;
        goto label_128608;
    }
    ctx->pc = 0x128600u;
    {
        const bool branch_taken_0x128600 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x128600) {
            ctx->pc = 0x12869Cu;
            goto label_12869c;
        }
    }
    ctx->pc = 0x128608u;
label_128608:
    // 0x128608: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x128608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12860c:
    // 0x12860c: 0xc4620124  lwc1        $f2, 0x124($v1)
    ctx->pc = 0x12860cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_128610:
    // 0x128610: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x128610u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
label_128614:
    // 0x128614: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x128614u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_128618:
    // 0x128618: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x128618u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_12861c:
    // 0x12861c: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x12861cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294958308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_128620:
    // 0x128620: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x128620u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_128624:
    // 0x128624: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x128624u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_128628:
    // 0x128628: 0x0  nop
    ctx->pc = 0x128628u;
    // NOP
label_12862c:
    // 0x12862c: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
label_128630:
    if (ctx->pc == 0x128630u) {
        ctx->pc = 0x128634u;
        goto label_128634;
    }
    ctx->pc = 0x12862Cu;
    {
        const bool branch_taken_0x12862c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x12862c) {
            ctx->pc = 0x12869Cu;
            goto label_12869c;
        }
    }
    ctx->pc = 0x128634u;
label_128634:
    // 0x128634: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x128634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_128638:
    // 0x128638: 0xc4620124  lwc1        $f2, 0x124($v1)
    ctx->pc = 0x128638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_12863c:
    // 0x12863c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x12863cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_128640:
    // 0x128640: 0xc421dce4  lwc1        $f1, -0x231C($at)
    ctx->pc = 0x128640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294958308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_128644:
    // 0x128644: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x128644u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
label_128648:
    // 0x128648: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x128648u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_12864c:
    // 0x12864c: 0x0  nop
    ctx->pc = 0x12864cu;
    // NOP
label_128650:
    // 0x128650: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x128650u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_128654:
    // 0x128654: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x128654u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_128658:
    // 0x128658: 0x0  nop
    ctx->pc = 0x128658u;
    // NOP
label_12865c:
    // 0x12865c: 0x4501000f  bc1t        . + 4 + (0xF << 2)
label_128660:
    if (ctx->pc == 0x128660u) {
        ctx->pc = 0x128664u;
        goto label_128664;
    }
    ctx->pc = 0x12865Cu;
    {
        const bool branch_taken_0x12865c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x12865c) {
            ctx->pc = 0x12869Cu;
            goto label_12869c;
        }
    }
    ctx->pc = 0x128664u;
label_128664:
    // 0x128664: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x128664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_128668:
    // 0x128668: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x128668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12866c:
    // 0x12866c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x12866cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_128670:
    // 0x128670: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x128670u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_128674:
    // 0x128674: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x128674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_128678:
    // 0x128678: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x128678u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_12867c:
    // 0x12867c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12867cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_128680:
    // 0x128680: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x128680u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_128684:
    // 0x128684: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x128684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_128688:
    // 0x128688: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x128688u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_12868c:
    // 0x12868c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12868cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_128690:
    // 0x128690: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x128690u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_128694:
    // 0x128694: 0x100001af  b           . + 4 + (0x1AF << 2)
label_128698:
    if (ctx->pc == 0x128698u) {
        ctx->pc = 0x12869Cu;
        goto label_12869c;
    }
    ctx->pc = 0x128694u;
    {
        const bool branch_taken_0x128694 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x128694) {
            ctx->pc = 0x128D54u;
            goto label_128d54;
        }
    }
    ctx->pc = 0x12869Cu;
label_12869c:
    // 0x12869c: 0xc067694  jal         func_19DA50
label_1286a0:
    if (ctx->pc == 0x1286A0u) {
        ctx->pc = 0x1286A4u;
        goto label_1286a4;
    }
    ctx->pc = 0x12869Cu;
    SET_GPR_U32(ctx, 31, 0x1286A4u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x12869Cu, 0x1286A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1286A4u;
label_1286a4:
    // 0x1286a4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1286a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1286a8:
    // 0x1286a8: 0x3065000f  andi        $a1, $v1, 0xF
    ctx->pc = 0x1286a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
label_1286ac:
    // 0x1286ac: 0x2ca10006  sltiu       $at, $a1, 0x6
    ctx->pc = 0x1286acu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_1286b0:
    // 0x1286b0: 0x10200033  beqz        $at, . + 4 + (0x33 << 2)
label_1286b4:
    if (ctx->pc == 0x1286B4u) {
        ctx->pc = 0x1286B8u;
        goto label_1286b8;
    }
    ctx->pc = 0x1286B0u;
    {
        const bool branch_taken_0x1286b0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1286b0) {
            ctx->pc = 0x128780u;
            goto label_128780;
        }
    }
    ctx->pc = 0x1286B8u;
label_1286b8:
    // 0x1286b8: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x1286b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_1286bc:
    // 0x1286bc: 0x2464e3a0  addiu       $a0, $v1, -0x1C60
    ctx->pc = 0x1286bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960032));
label_1286c0:
    // 0x1286c0: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1286c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1286c4:
    // 0x1286c4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1286c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1286c8:
    // 0x1286c8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1286c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1286cc:
    // 0x1286cc: 0x600008  jr          $v1
label_1286d0:
    if (ctx->pc == 0x1286D0u) {
        ctx->pc = 0x1286D4u;
        goto label_1286d4;
    }
    ctx->pc = 0x1286CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1286CCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1286D4u;
label_1286d4:
    // 0x1286d4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1286d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1286d8:
    // 0x1286d8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1286d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1286dc:
    // 0x1286dc: 0xc05d25c  jal         func_174970
label_1286e0:
    if (ctx->pc == 0x1286E0u) {
        ctx->pc = 0x1286E4u;
        goto label_1286e4;
    }
    ctx->pc = 0x1286DCu;
    SET_GPR_U32(ctx, 31, 0x1286E4u);
    ctx->pc = 0x174970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174970u, 0x1286DCu, 0x1286E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1286E4u;
label_1286e4:
    // 0x1286e4: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
label_1286e8:
    if (ctx->pc == 0x1286E8u) {
        ctx->pc = 0x1286ECu;
        goto label_1286ec;
    }
    ctx->pc = 0x1286E4u;
    {
        const bool branch_taken_0x1286e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1286e4) {
            ctx->pc = 0x1287BCu;
            goto label_1287bc;
        }
    }
    ctx->pc = 0x1286ECu;
label_1286ec:
    // 0x1286ec: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1286ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1286f0:
    // 0x1286f0: 0xc4620124  lwc1        $f2, 0x124($v1)
    ctx->pc = 0x1286f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1286f4:
    // 0x1286f4: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x1286f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
label_1286f8:
    // 0x1286f8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1286f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1286fc:
    // 0x1286fc: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1286fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_128700:
    // 0x128700: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x128700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294958308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_128704:
    // 0x128704: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x128704u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_128708:
    // 0x128708: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x128708u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12870c:
    // 0x12870c: 0x0  nop
    ctx->pc = 0x12870cu;
    // NOP
label_128710:
    // 0x128710: 0x4500002a  bc1f        . + 4 + (0x2A << 2)
label_128714:
    if (ctx->pc == 0x128714u) {
        ctx->pc = 0x128718u;
        goto label_128718;
    }
    ctx->pc = 0x128710u;
    {
        const bool branch_taken_0x128710 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x128710) {
            ctx->pc = 0x1287BCu;
            goto label_1287bc;
        }
    }
    ctx->pc = 0x128718u;
label_128718:
    // 0x128718: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x128718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12871c:
    // 0x12871c: 0xc4620124  lwc1        $f2, 0x124($v1)
    ctx->pc = 0x12871cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_128720:
    // 0x128720: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x128720u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_128724:
    // 0x128724: 0xc421dce4  lwc1        $f1, -0x231C($at)
    ctx->pc = 0x128724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294958308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_128728:
    // 0x128728: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x128728u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
label_12872c:
    // 0x12872c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x12872cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_128730:
    // 0x128730: 0x0  nop
    ctx->pc = 0x128730u;
    // NOP
label_128734:
    // 0x128734: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x128734u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_128738:
    // 0x128738: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x128738u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12873c:
    // 0x12873c: 0x0  nop
    ctx->pc = 0x12873cu;
    // NOP
label_128740:
    // 0x128740: 0x4501001e  bc1t        . + 4 + (0x1E << 2)
label_128744:
    if (ctx->pc == 0x128744u) {
        ctx->pc = 0x128748u;
        goto label_128748;
    }
    ctx->pc = 0x128740u;
    {
        const bool branch_taken_0x128740 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x128740) {
            ctx->pc = 0x1287BCu;
            goto label_1287bc;
        }
    }
    ctx->pc = 0x128748u;
label_128748:
    // 0x128748: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x128748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12874c:
    // 0x12874c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12874cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_128750:
    // 0x128750: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x128750u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_128754:
    // 0x128754: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x128754u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_128758:
    // 0x128758: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x128758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12875c:
    // 0x12875c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x12875cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_128760:
    // 0x128760: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x128760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_128764:
    // 0x128764: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x128764u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_128768:
    // 0x128768: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x128768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12876c:
    // 0x12876c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x12876cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_128770:
    // 0x128770: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x128770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_128774:
    // 0x128774: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x128774u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_128778:
    // 0x128778: 0x10000010  b           . + 4 + (0x10 << 2)
label_12877c:
    if (ctx->pc == 0x12877Cu) {
        ctx->pc = 0x128780u;
        goto label_128780;
    }
    ctx->pc = 0x128778u;
    {
        const bool branch_taken_0x128778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x128778) {
            ctx->pc = 0x1287BCu;
            goto label_1287bc;
        }
    }
    ctx->pc = 0x128780u;
label_128780:
    // 0x128780: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x128780u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_128784:
    // 0x128784: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x128784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_128788:
    // 0x128788: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x128788u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_12878c:
    // 0x12878c: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x12878cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_128790:
    // 0x128790: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x128790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_128794:
    // 0x128794: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x128794u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_128798:
    // 0x128798: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x128798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12879c:
    // 0x12879c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x12879cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_1287a0:
    // 0x1287a0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1287a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1287a4:
    // 0x1287a4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1287a4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_1287a8:
    // 0x1287a8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1287a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1287ac:
    // 0x1287ac: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1287acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1287b0:
    // 0x1287b0: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x1287b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
label_1287b4:
    // 0x1287b4: 0x10000167  b           . + 4 + (0x167 << 2)
label_1287b8:
    if (ctx->pc == 0x1287B8u) {
        ctx->pc = 0x1287BCu;
        goto label_1287bc;
    }
    ctx->pc = 0x1287B4u;
    {
        const bool branch_taken_0x1287b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1287b4) {
            ctx->pc = 0x128D54u;
            goto label_128d54;
        }
    }
    ctx->pc = 0x1287BCu;
label_1287bc:
    // 0x1287bc: 0x10000165  b           . + 4 + (0x165 << 2)
label_1287c0:
    if (ctx->pc == 0x1287C0u) {
        ctx->pc = 0x1287C4u;
        goto label_1287c4;
    }
    ctx->pc = 0x1287BCu;
    {
        const bool branch_taken_0x1287bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1287bc) {
            ctx->pc = 0x128D54u;
            goto label_128d54;
        }
    }
    ctx->pc = 0x1287C4u;
label_1287c4:
    // 0x1287c4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1287c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1287c8:
    // 0x1287c8: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x1287c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1287cc:
    // 0x1287cc: 0x3c0345ea  lui         $v1, 0x45EA
    ctx->pc = 0x1287ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17898 << 16));
label_1287d0:
    // 0x1287d0: 0x34636000  ori         $v1, $v1, 0x6000
    ctx->pc = 0x1287d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)24576);
label_1287d4:
    // 0x1287d4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1287d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1287d8:
    // 0x1287d8: 0x0  nop
    ctx->pc = 0x1287d8u;
    // NOP
label_1287dc:
    // 0x1287dc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1287dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1287e0:
    // 0x1287e0: 0x0  nop
    ctx->pc = 0x1287e0u;
    // NOP
label_1287e4:
    // 0x1287e4: 0x4500015b  bc1f        . + 4 + (0x15B << 2)
label_1287e8:
    if (ctx->pc == 0x1287E8u) {
        ctx->pc = 0x1287ECu;
        goto label_1287ec;
    }
    ctx->pc = 0x1287E4u;
    {
        const bool branch_taken_0x1287e4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1287e4) {
            ctx->pc = 0x128D54u;
            goto label_128d54;
        }
    }
    ctx->pc = 0x1287ECu;
label_1287ec:
    // 0x1287ec: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1287ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1287f0:
    // 0x1287f0: 0xc4411288  lwc1        $f1, 0x1288($v0)
    ctx->pc = 0x1287f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1287f4:
    // 0x1287f4: 0x3c02451c  lui         $v0, 0x451C
    ctx->pc = 0x1287f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17692 << 16));
label_1287f8:
    // 0x1287f8: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1287f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_1287fc:
    // 0x1287fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1287fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_128800:
    // 0x128800: 0x0  nop
    ctx->pc = 0x128800u;
    // NOP
label_128804:
    // 0x128804: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x128804u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_128808:
    // 0x128808: 0x0  nop
    ctx->pc = 0x128808u;
    // NOP
label_12880c:
    // 0x12880c: 0x45010035  bc1t        . + 4 + (0x35 << 2)
label_128810:
    if (ctx->pc == 0x128810u) {
        ctx->pc = 0x128814u;
        goto label_128814;
    }
    ctx->pc = 0x12880Cu;
    {
        const bool branch_taken_0x12880c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x12880c) {
            ctx->pc = 0x1288E4u;
            goto label_1288e4;
        }
    }
    ctx->pc = 0x128814u;
label_128814:
    // 0x128814: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x128814u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_128818:
    // 0x128818: 0x8c221a64  lw          $v0, 0x1A64($at)
    ctx->pc = 0x128818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6756)));
label_12881c:
    // 0x12881c: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x12881cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_128820:
    // 0x128820: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_128824:
    if (ctx->pc == 0x128824u) {
        ctx->pc = 0x128828u;
        goto label_128828;
    }
    ctx->pc = 0x128820u;
    {
        const bool branch_taken_0x128820 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x128820) {
            ctx->pc = 0x128838u;
            goto label_128838;
        }
    }
    ctx->pc = 0x128828u;
label_128828:
    // 0x128828: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x128828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_12882c:
    // 0x12882c: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x12882cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_128830:
    // 0x128830: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
label_128834:
    if (ctx->pc == 0x128834u) {
        ctx->pc = 0x128838u;
        goto label_128838;
    }
    ctx->pc = 0x128830u;
    {
        const bool branch_taken_0x128830 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x128830) {
            ctx->pc = 0x1288E4u;
            goto label_1288e4;
        }
    }
    ctx->pc = 0x128838u;
label_128838:
    // 0x128838: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x128838u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12883c:
    // 0x12883c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x12883cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_128840:
    // 0x128840: 0xc05d25c  jal         func_174970
label_128844:
    if (ctx->pc == 0x128844u) {
        ctx->pc = 0x128848u;
        goto label_128848;
    }
    ctx->pc = 0x128840u;
    SET_GPR_U32(ctx, 31, 0x128848u);
    ctx->pc = 0x174970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174970u, 0x128840u, 0x128848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128848u;
label_128848:
    // 0x128848: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
label_12884c:
    if (ctx->pc == 0x12884Cu) {
        ctx->pc = 0x128850u;
        goto label_128850;
    }
    ctx->pc = 0x128848u;
    {
        const bool branch_taken_0x128848 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x128848) {
            ctx->pc = 0x1288E4u;
            goto label_1288e4;
        }
    }
    ctx->pc = 0x128850u;
label_128850:
    // 0x128850: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x128850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_128854:
    // 0x128854: 0xc4620124  lwc1        $f2, 0x124($v1)
    ctx->pc = 0x128854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_128858:
    // 0x128858: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x128858u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
label_12885c:
    // 0x12885c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x12885cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_128860:
    // 0x128860: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x128860u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_128864:
    // 0x128864: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x128864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294958308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_128868:
    // 0x128868: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x128868u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_12886c:
    // 0x12886c: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x12886cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_128870:
    // 0x128870: 0x0  nop
    ctx->pc = 0x128870u;
    // NOP
label_128874:
    // 0x128874: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
label_128878:
    if (ctx->pc == 0x128878u) {
        ctx->pc = 0x12887Cu;
        goto label_12887c;
    }
    ctx->pc = 0x128874u;
    {
        const bool branch_taken_0x128874 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x128874) {
            ctx->pc = 0x1288E4u;
            goto label_1288e4;
        }
    }
    ctx->pc = 0x12887Cu;
label_12887c:
    // 0x12887c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12887cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_128880:
    // 0x128880: 0xc4620124  lwc1        $f2, 0x124($v1)
    ctx->pc = 0x128880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_128884:
    // 0x128884: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x128884u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_128888:
    // 0x128888: 0xc421dce4  lwc1        $f1, -0x231C($at)
    ctx->pc = 0x128888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294958308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12888c:
    // 0x12888c: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x12888cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
label_128890:
    // 0x128890: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x128890u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_128894:
    // 0x128894: 0x0  nop
    ctx->pc = 0x128894u;
    // NOP
label_128898:
    // 0x128898: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x128898u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_12889c:
    // 0x12889c: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x12889cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1288a0:
    // 0x1288a0: 0x0  nop
    ctx->pc = 0x1288a0u;
    // NOP
label_1288a4:
    // 0x1288a4: 0x4501000f  bc1t        . + 4 + (0xF << 2)
label_1288a8:
    if (ctx->pc == 0x1288A8u) {
        ctx->pc = 0x1288ACu;
        goto label_1288ac;
    }
    ctx->pc = 0x1288A4u;
    {
        const bool branch_taken_0x1288a4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1288a4) {
            ctx->pc = 0x1288E4u;
            goto label_1288e4;
        }
    }
    ctx->pc = 0x1288ACu;
label_1288ac:
    // 0x1288ac: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1288acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1288b0:
    // 0x1288b0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1288b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1288b4:
    // 0x1288b4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1288b4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_1288b8:
    // 0x1288b8: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x1288b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_1288bc:
    // 0x1288bc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1288bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1288c0:
    // 0x1288c0: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1288c0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_1288c4:
    // 0x1288c4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1288c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1288c8:
    // 0x1288c8: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1288c8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_1288cc:
    // 0x1288cc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1288ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1288d0:
    // 0x1288d0: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1288d0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_1288d4:
    // 0x1288d4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1288d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1288d8:
    // 0x1288d8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1288d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_1288dc:
    // 0x1288dc: 0x1000011d  b           . + 4 + (0x11D << 2)
label_1288e0:
    if (ctx->pc == 0x1288E0u) {
        ctx->pc = 0x1288E4u;
        goto label_1288e4;
    }
    ctx->pc = 0x1288DCu;
    {
        const bool branch_taken_0x1288dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1288dc) {
            ctx->pc = 0x128D54u;
            goto label_128d54;
        }
    }
    ctx->pc = 0x1288E4u;
label_1288e4:
    // 0x1288e4: 0xc067694  jal         func_19DA50
label_1288e8:
    if (ctx->pc == 0x1288E8u) {
        ctx->pc = 0x1288ECu;
        goto label_1288ec;
    }
    ctx->pc = 0x1288E4u;
    SET_GPR_U32(ctx, 31, 0x1288ECu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1288E4u, 0x1288ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1288ECu;
label_1288ec:
    // 0x1288ec: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1288ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1288f0:
    // 0x1288f0: 0x3065000f  andi        $a1, $v1, 0xF
    ctx->pc = 0x1288f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
label_1288f4:
    // 0x1288f4: 0x2ca10006  sltiu       $at, $a1, 0x6
    ctx->pc = 0x1288f4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_1288f8:
    // 0x1288f8: 0x10200033  beqz        $at, . + 4 + (0x33 << 2)
label_1288fc:
    if (ctx->pc == 0x1288FCu) {
        ctx->pc = 0x128900u;
        goto label_128900;
    }
    ctx->pc = 0x1288F8u;
    {
        const bool branch_taken_0x1288f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1288f8) {
            ctx->pc = 0x1289C8u;
            goto label_1289c8;
        }
    }
    ctx->pc = 0x128900u;
label_128900:
    // 0x128900: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x128900u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_128904:
    // 0x128904: 0x2464e380  addiu       $a0, $v1, -0x1C80
    ctx->pc = 0x128904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960000));
label_128908:
    // 0x128908: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x128908u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_12890c:
    // 0x12890c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x12890cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_128910:
    // 0x128910: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x128910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_128914:
    // 0x128914: 0x600008  jr          $v1
label_128918:
    if (ctx->pc == 0x128918u) {
        ctx->pc = 0x12891Cu;
        goto label_12891c;
    }
    ctx->pc = 0x128914u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x128914u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x12891Cu;
label_12891c:
    // 0x12891c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x12891cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_128920:
    // 0x128920: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x128920u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_128924:
    // 0x128924: 0xc05d25c  jal         func_174970
label_128928:
    if (ctx->pc == 0x128928u) {
        ctx->pc = 0x12892Cu;
        goto label_12892c;
    }
    ctx->pc = 0x128924u;
    SET_GPR_U32(ctx, 31, 0x12892Cu);
    ctx->pc = 0x174970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174970u, 0x128924u, 0x12892Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12892Cu;
label_12892c:
    // 0x12892c: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
label_128930:
    if (ctx->pc == 0x128930u) {
        ctx->pc = 0x128934u;
        goto label_128934;
    }
    ctx->pc = 0x12892Cu;
    {
        const bool branch_taken_0x12892c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12892c) {
            ctx->pc = 0x1289C0u;
            goto label_1289c0;
        }
    }
    ctx->pc = 0x128934u;
label_128934:
    // 0x128934: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x128934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_128938:
    // 0x128938: 0xc4620124  lwc1        $f2, 0x124($v1)
    ctx->pc = 0x128938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_12893c:
    // 0x12893c: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x12893cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
label_128940:
    // 0x128940: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x128940u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_128944:
    // 0x128944: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x128944u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_128948:
    // 0x128948: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x128948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294958308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12894c:
    // 0x12894c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x12894cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_128950:
    // 0x128950: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x128950u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_128954:
    // 0x128954: 0x0  nop
    ctx->pc = 0x128954u;
    // NOP
label_128958:
    // 0x128958: 0x45000019  bc1f        . + 4 + (0x19 << 2)
label_12895c:
    if (ctx->pc == 0x12895Cu) {
        ctx->pc = 0x128960u;
        goto label_128960;
    }
    ctx->pc = 0x128958u;
    {
        const bool branch_taken_0x128958 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x128958) {
            ctx->pc = 0x1289C0u;
            goto label_1289c0;
        }
    }
    ctx->pc = 0x128960u;
label_128960:
    // 0x128960: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x128960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_128964:
    // 0x128964: 0xc4620124  lwc1        $f2, 0x124($v1)
    ctx->pc = 0x128964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_128968:
    // 0x128968: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x128968u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_12896c:
    // 0x12896c: 0xc421dce4  lwc1        $f1, -0x231C($at)
    ctx->pc = 0x12896cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294958308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_128970:
    // 0x128970: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x128970u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
label_128974:
    // 0x128974: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x128974u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_128978:
    // 0x128978: 0x0  nop
    ctx->pc = 0x128978u;
    // NOP
label_12897c:
    // 0x12897c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x12897cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_128980:
    // 0x128980: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x128980u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_128984:
    // 0x128984: 0x0  nop
    ctx->pc = 0x128984u;
    // NOP
label_128988:
    // 0x128988: 0x4501000d  bc1t        . + 4 + (0xD << 2)
label_12898c:
    if (ctx->pc == 0x12898Cu) {
        ctx->pc = 0x128990u;
        goto label_128990;
    }
    ctx->pc = 0x128988u;
    {
        const bool branch_taken_0x128988 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x128988) {
            ctx->pc = 0x1289C0u;
            goto label_1289c0;
        }
    }
    ctx->pc = 0x128990u;
label_128990:
    // 0x128990: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x128990u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_128994:
    // 0x128994: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x128994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_128998:
    // 0x128998: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x128998u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_12899c:
    // 0x12899c: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x12899cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_1289a0:
    // 0x1289a0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1289a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1289a4:
    // 0x1289a4: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1289a4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_1289a8:
    // 0x1289a8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1289a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1289ac:
    // 0x1289ac: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1289acu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_1289b0:
    // 0x1289b0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1289b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1289b4:
    // 0x1289b4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1289b4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_1289b8:
    // 0x1289b8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1289b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1289bc:
    // 0x1289bc: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1289bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_1289c0:
    // 0x1289c0: 0x100000e4  b           . + 4 + (0xE4 << 2)
label_1289c4:
    if (ctx->pc == 0x1289C4u) {
        ctx->pc = 0x1289C8u;
        goto label_1289c8;
    }
    ctx->pc = 0x1289C0u;
    {
        const bool branch_taken_0x1289c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1289c0) {
            ctx->pc = 0x128D54u;
            goto label_128d54;
        }
    }
    ctx->pc = 0x1289C8u;
label_1289c8:
    // 0x1289c8: 0x100000e2  b           . + 4 + (0xE2 << 2)
label_1289cc:
    if (ctx->pc == 0x1289CCu) {
        ctx->pc = 0x1289D0u;
        goto label_1289d0;
    }
    ctx->pc = 0x1289C8u;
    {
        const bool branch_taken_0x1289c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1289c8) {
            ctx->pc = 0x128D54u;
            goto label_128d54;
        }
    }
    ctx->pc = 0x1289D0u;
label_1289d0:
    // 0x1289d0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1289d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1289d4:
    // 0x1289d4: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x1289d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1289d8:
    // 0x1289d8: 0x3c03443b  lui         $v1, 0x443B
    ctx->pc = 0x1289d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17467 << 16));
label_1289dc:
    // 0x1289dc: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x1289dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
label_1289e0:
    // 0x1289e0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1289e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1289e4:
    // 0x1289e4: 0x0  nop
    ctx->pc = 0x1289e4u;
    // NOP
label_1289e8:
    // 0x1289e8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1289e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1289ec:
    // 0x1289ec: 0x0  nop
    ctx->pc = 0x1289ecu;
    // NOP
label_1289f0:
    // 0x1289f0: 0x45000012  bc1f        . + 4 + (0x12 << 2)
label_1289f4:
    if (ctx->pc == 0x1289F4u) {
        ctx->pc = 0x1289F8u;
        goto label_1289f8;
    }
    ctx->pc = 0x1289F0u;
    {
        const bool branch_taken_0x1289f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1289f0) {
            ctx->pc = 0x128A3Cu;
            goto label_128a3c;
        }
    }
    ctx->pc = 0x1289F8u;
label_1289f8:
    // 0x1289f8: 0x2e210002  sltiu       $at, $s1, 0x2
    ctx->pc = 0x1289f8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1289fc:
    // 0x1289fc: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
label_128a00:
    if (ctx->pc == 0x128A00u) {
        ctx->pc = 0x128A04u;
        goto label_128a04;
    }
    ctx->pc = 0x1289FCu;
    {
        const bool branch_taken_0x1289fc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1289fc) {
            ctx->pc = 0x128A34u;
            goto label_128a34;
        }
    }
    ctx->pc = 0x128A04u;
label_128a04:
    // 0x128a04: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x128a04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_128a08:
    // 0x128a08: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x128a08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_128a0c:
    // 0x128a0c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x128a0cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_128a10:
    // 0x128a10: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x128a10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_128a14:
    // 0x128a14: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x128a14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_128a18:
    // 0x128a18: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x128a18u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_128a1c:
    // 0x128a1c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x128a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_128a20:
    // 0x128a20: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x128a20u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_128a24:
    // 0x128a24: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x128a24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_128a28:
    // 0x128a28: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x128a28u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_128a2c:
    // 0x128a2c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x128a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_128a30:
    // 0x128a30: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x128a30u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_128a34:
    // 0x128a34: 0x100000c7  b           . + 4 + (0xC7 << 2)
label_128a38:
    if (ctx->pc == 0x128A38u) {
        ctx->pc = 0x128A3Cu;
        goto label_128a3c;
    }
    ctx->pc = 0x128A34u;
    {
        const bool branch_taken_0x128a34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x128a34) {
            ctx->pc = 0x128D54u;
            goto label_128d54;
        }
    }
    ctx->pc = 0x128A3Cu;
label_128a3c:
    // 0x128a3c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x128a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_128a40:
    // 0x128a40: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x128a40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_128a44:
    // 0x128a44: 0x3c0344fa  lui         $v1, 0x44FA
    ctx->pc = 0x128a44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17658 << 16));
label_128a48:
    // 0x128a48: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x128a48u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_128a4c:
    // 0x128a4c: 0x0  nop
    ctx->pc = 0x128a4cu;
    // NOP
label_128a50:
    // 0x128a50: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x128a50u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_128a54:
    // 0x128a54: 0x0  nop
    ctx->pc = 0x128a54u;
    // NOP
label_128a58:
    // 0x128a58: 0x45000059  bc1f        . + 4 + (0x59 << 2)
label_128a5c:
    if (ctx->pc == 0x128A5Cu) {
        ctx->pc = 0x128A60u;
        goto label_128a60;
    }
    ctx->pc = 0x128A58u;
    {
        const bool branch_taken_0x128a58 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x128a58) {
            ctx->pc = 0x128BC0u;
            goto label_128bc0;
        }
    }
    ctx->pc = 0x128A60u;
label_128a60:
    // 0x128a60: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x128a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_128a64:
    // 0x128a64: 0xc4411288  lwc1        $f1, 0x1288($v0)
    ctx->pc = 0x128a64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_128a68:
    // 0x128a68: 0x3c02451c  lui         $v0, 0x451C
    ctx->pc = 0x128a68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17692 << 16));
label_128a6c:
    // 0x128a6c: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x128a6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_128a70:
    // 0x128a70: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x128a70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_128a74:
    // 0x128a74: 0x0  nop
    ctx->pc = 0x128a74u;
    // NOP
label_128a78:
    // 0x128a78: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x128a78u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_128a7c:
    // 0x128a7c: 0x0  nop
    ctx->pc = 0x128a7cu;
    // NOP
label_128a80:
    // 0x128a80: 0x4501001e  bc1t        . + 4 + (0x1E << 2)
label_128a84:
    if (ctx->pc == 0x128A84u) {
        ctx->pc = 0x128A88u;
        goto label_128a88;
    }
    ctx->pc = 0x128A80u;
    {
        const bool branch_taken_0x128a80 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x128a80) {
            ctx->pc = 0x128AFCu;
            goto label_128afc;
        }
    }
    ctx->pc = 0x128A88u;
label_128a88:
    // 0x128a88: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x128a88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_128a8c:
    // 0x128a8c: 0x8c221a64  lw          $v0, 0x1A64($at)
    ctx->pc = 0x128a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6756)));
label_128a90:
    // 0x128a90: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x128a90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_128a94:
    // 0x128a94: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_128a98:
    if (ctx->pc == 0x128A98u) {
        ctx->pc = 0x128A9Cu;
        goto label_128a9c;
    }
    ctx->pc = 0x128A94u;
    {
        const bool branch_taken_0x128a94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x128a94) {
            ctx->pc = 0x128AACu;
            goto label_128aac;
        }
    }
    ctx->pc = 0x128A9Cu;
label_128a9c:
    // 0x128a9c: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x128a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_128aa0:
    // 0x128aa0: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x128aa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_128aa4:
    // 0x128aa4: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_128aa8:
    if (ctx->pc == 0x128AA8u) {
        ctx->pc = 0x128AACu;
        goto label_128aac;
    }
    ctx->pc = 0x128AA4u;
    {
        const bool branch_taken_0x128aa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x128aa4) {
            ctx->pc = 0x128AFCu;
            goto label_128afc;
        }
    }
    ctx->pc = 0x128AACu;
label_128aac:
    // 0x128aac: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x128aacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_128ab0:
    // 0x128ab0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x128ab0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_128ab4:
    // 0x128ab4: 0xc05d25c  jal         func_174970
label_128ab8:
    if (ctx->pc == 0x128AB8u) {
        ctx->pc = 0x128ABCu;
        goto label_128abc;
    }
    ctx->pc = 0x128AB4u;
    SET_GPR_U32(ctx, 31, 0x128ABCu);
    ctx->pc = 0x174970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174970u, 0x128AB4u, 0x128ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128ABCu;
label_128abc:
    // 0x128abc: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_128ac0:
    if (ctx->pc == 0x128AC0u) {
        ctx->pc = 0x128AC4u;
        goto label_128ac4;
    }
    ctx->pc = 0x128ABCu;
    {
        const bool branch_taken_0x128abc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x128abc) {
            ctx->pc = 0x128AFCu;
            goto label_128afc;
        }
    }
    ctx->pc = 0x128AC4u;
label_128ac4:
    // 0x128ac4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x128ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_128ac8:
    // 0x128ac8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x128ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_128acc:
    // 0x128acc: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x128accu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_128ad0:
    // 0x128ad0: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x128ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_128ad4:
    // 0x128ad4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x128ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_128ad8:
    // 0x128ad8: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x128ad8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_128adc:
    // 0x128adc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x128adcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_128ae0:
    // 0x128ae0: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x128ae0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_128ae4:
    // 0x128ae4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x128ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_128ae8:
    // 0x128ae8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x128ae8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_128aec:
    // 0x128aec: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x128aecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_128af0:
    // 0x128af0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x128af0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_128af4:
    // 0x128af4: 0x10000097  b           . + 4 + (0x97 << 2)
label_128af8:
    if (ctx->pc == 0x128AF8u) {
        ctx->pc = 0x128AFCu;
        goto label_128afc;
    }
    ctx->pc = 0x128AF4u;
    {
        const bool branch_taken_0x128af4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x128af4) {
            ctx->pc = 0x128D54u;
            goto label_128d54;
        }
    }
    ctx->pc = 0x128AFCu;
label_128afc:
    // 0x128afc: 0xc067694  jal         func_19DA50
label_128b00:
    if (ctx->pc == 0x128B00u) {
        ctx->pc = 0x128B04u;
        goto label_128b04;
    }
    ctx->pc = 0x128AFCu;
    SET_GPR_U32(ctx, 31, 0x128B04u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x128AFCu, 0x128B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128B04u;
label_128b04:
    // 0x128b04: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x128b04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_128b08:
    // 0x128b08: 0x3065000f  andi        $a1, $v1, 0xF
    ctx->pc = 0x128b08u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
label_128b0c:
    // 0x128b0c: 0x2ca10006  sltiu       $at, $a1, 0x6
    ctx->pc = 0x128b0cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_128b10:
    // 0x128b10: 0x1020001c  beqz        $at, . + 4 + (0x1C << 2)
label_128b14:
    if (ctx->pc == 0x128B14u) {
        ctx->pc = 0x128B18u;
        goto label_128b18;
    }
    ctx->pc = 0x128B10u;
    {
        const bool branch_taken_0x128b10 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x128b10) {
            ctx->pc = 0x128B84u;
            goto label_128b84;
        }
    }
    ctx->pc = 0x128B18u;
label_128b18:
    // 0x128b18: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x128b18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_128b1c:
    // 0x128b1c: 0x2464e360  addiu       $a0, $v1, -0x1CA0
    ctx->pc = 0x128b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959968));
label_128b20:
    // 0x128b20: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x128b20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_128b24:
    // 0x128b24: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x128b24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_128b28:
    // 0x128b28: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x128b28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_128b2c:
    // 0x128b2c: 0x600008  jr          $v1
label_128b30:
    if (ctx->pc == 0x128B30u) {
        ctx->pc = 0x128B34u;
        goto label_128b34;
    }
    ctx->pc = 0x128B2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x128B2Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x128B34u;
label_128b34:
    // 0x128b34: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x128b34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_128b38:
    // 0x128b38: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x128b38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_128b3c:
    // 0x128b3c: 0xc05d25c  jal         func_174970
label_128b40:
    if (ctx->pc == 0x128B40u) {
        ctx->pc = 0x128B44u;
        goto label_128b44;
    }
    ctx->pc = 0x128B3Cu;
    SET_GPR_U32(ctx, 31, 0x128B44u);
    ctx->pc = 0x174970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174970u, 0x128B3Cu, 0x128B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128B44u;
label_128b44:
    // 0x128b44: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_128b48:
    if (ctx->pc == 0x128B48u) {
        ctx->pc = 0x128B4Cu;
        goto label_128b4c;
    }
    ctx->pc = 0x128B44u;
    {
        const bool branch_taken_0x128b44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x128b44) {
            ctx->pc = 0x128B7Cu;
            goto label_128b7c;
        }
    }
    ctx->pc = 0x128B4Cu;
label_128b4c:
    // 0x128b4c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x128b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_128b50:
    // 0x128b50: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x128b50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_128b54:
    // 0x128b54: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x128b54u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_128b58:
    // 0x128b58: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x128b58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_128b5c:
    // 0x128b5c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x128b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_128b60:
    // 0x128b60: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x128b60u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_128b64:
    // 0x128b64: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x128b64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_128b68:
    // 0x128b68: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x128b68u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_128b6c:
    // 0x128b6c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x128b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_128b70:
    // 0x128b70: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x128b70u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_128b74:
    // 0x128b74: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x128b74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_128b78:
    // 0x128b78: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x128b78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_128b7c:
    // 0x128b7c: 0x10000075  b           . + 4 + (0x75 << 2)
label_128b80:
    if (ctx->pc == 0x128B80u) {
        ctx->pc = 0x128B84u;
        goto label_128b84;
    }
    ctx->pc = 0x128B7Cu;
    {
        const bool branch_taken_0x128b7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x128b7c) {
            ctx->pc = 0x128D54u;
            goto label_128d54;
        }
    }
    ctx->pc = 0x128B84u;
label_128b84:
    // 0x128b84: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x128b84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_128b88:
    // 0x128b88: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x128b88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_128b8c:
    // 0x128b8c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x128b8cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_128b90:
    // 0x128b90: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x128b90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_128b94:
    // 0x128b94: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x128b94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_128b98:
    // 0x128b98: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x128b98u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_128b9c:
    // 0x128b9c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x128b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_128ba0:
    // 0x128ba0: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x128ba0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_128ba4:
    // 0x128ba4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x128ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_128ba8:
    // 0x128ba8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x128ba8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_128bac:
    // 0x128bac: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x128bacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_128bb0:
    // 0x128bb0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x128bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_128bb4:
    // 0x128bb4: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x128bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
label_128bb8:
    // 0x128bb8: 0x10000066  b           . + 4 + (0x66 << 2)
label_128bbc:
    if (ctx->pc == 0x128BBCu) {
        ctx->pc = 0x128BC0u;
        goto label_128bc0;
    }
    ctx->pc = 0x128BB8u;
    {
        const bool branch_taken_0x128bb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x128bb8) {
            ctx->pc = 0x128D54u;
            goto label_128d54;
        }
    }
    ctx->pc = 0x128BC0u;
label_128bc0:
    // 0x128bc0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x128bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_128bc4:
    // 0x128bc4: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x128bc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_128bc8:
    // 0x128bc8: 0x3c0345ea  lui         $v1, 0x45EA
    ctx->pc = 0x128bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17898 << 16));
label_128bcc:
    // 0x128bcc: 0x34636000  ori         $v1, $v1, 0x6000
    ctx->pc = 0x128bccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)24576);
label_128bd0:
    // 0x128bd0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x128bd0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_128bd4:
    // 0x128bd4: 0x0  nop
    ctx->pc = 0x128bd4u;
    // NOP
label_128bd8:
    // 0x128bd8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x128bd8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_128bdc:
    // 0x128bdc: 0x0  nop
    ctx->pc = 0x128bdcu;
    // NOP
label_128be0:
    // 0x128be0: 0x4500005c  bc1f        . + 4 + (0x5C << 2)
label_128be4:
    if (ctx->pc == 0x128BE4u) {
        ctx->pc = 0x128BE8u;
        goto label_128be8;
    }
    ctx->pc = 0x128BE0u;
    {
        const bool branch_taken_0x128be0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x128be0) {
            ctx->pc = 0x128D54u;
            goto label_128d54;
        }
    }
    ctx->pc = 0x128BE8u;
label_128be8:
    // 0x128be8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x128be8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_128bec:
    // 0x128bec: 0xc4411288  lwc1        $f1, 0x1288($v0)
    ctx->pc = 0x128becu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_128bf0:
    // 0x128bf0: 0x3c02451c  lui         $v0, 0x451C
    ctx->pc = 0x128bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17692 << 16));
label_128bf4:
    // 0x128bf4: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x128bf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_128bf8:
    // 0x128bf8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x128bf8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_128bfc:
    // 0x128bfc: 0x0  nop
    ctx->pc = 0x128bfcu;
    // NOP
label_128c00:
    // 0x128c00: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x128c00u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_128c04:
    // 0x128c04: 0x0  nop
    ctx->pc = 0x128c04u;
    // NOP
label_128c08:
    // 0x128c08: 0x4501001e  bc1t        . + 4 + (0x1E << 2)
label_128c0c:
    if (ctx->pc == 0x128C0Cu) {
        ctx->pc = 0x128C10u;
        goto label_128c10;
    }
    ctx->pc = 0x128C08u;
    {
        const bool branch_taken_0x128c08 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x128c08) {
            ctx->pc = 0x128C84u;
            goto label_128c84;
        }
    }
    ctx->pc = 0x128C10u;
label_128c10:
    // 0x128c10: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x128c10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_128c14:
    // 0x128c14: 0x8c221a64  lw          $v0, 0x1A64($at)
    ctx->pc = 0x128c14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6756)));
label_128c18:
    // 0x128c18: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x128c18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_128c1c:
    // 0x128c1c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_128c20:
    if (ctx->pc == 0x128C20u) {
        ctx->pc = 0x128C24u;
        goto label_128c24;
    }
    ctx->pc = 0x128C1Cu;
    {
        const bool branch_taken_0x128c1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x128c1c) {
            ctx->pc = 0x128C34u;
            goto label_128c34;
        }
    }
    ctx->pc = 0x128C24u;
label_128c24:
    // 0x128c24: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x128c24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_128c28:
    // 0x128c28: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x128c28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_128c2c:
    // 0x128c2c: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_128c30:
    if (ctx->pc == 0x128C30u) {
        ctx->pc = 0x128C34u;
        goto label_128c34;
    }
    ctx->pc = 0x128C2Cu;
    {
        const bool branch_taken_0x128c2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x128c2c) {
            ctx->pc = 0x128C84u;
            goto label_128c84;
        }
    }
    ctx->pc = 0x128C34u;
label_128c34:
    // 0x128c34: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x128c34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_128c38:
    // 0x128c38: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x128c38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_128c3c:
    // 0x128c3c: 0xc05d25c  jal         func_174970
label_128c40:
    if (ctx->pc == 0x128C40u) {
        ctx->pc = 0x128C44u;
        goto label_128c44;
    }
    ctx->pc = 0x128C3Cu;
    SET_GPR_U32(ctx, 31, 0x128C44u);
    ctx->pc = 0x174970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174970u, 0x128C3Cu, 0x128C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128C44u;
label_128c44:
    // 0x128c44: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_128c48:
    if (ctx->pc == 0x128C48u) {
        ctx->pc = 0x128C4Cu;
        goto label_128c4c;
    }
    ctx->pc = 0x128C44u;
    {
        const bool branch_taken_0x128c44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x128c44) {
            ctx->pc = 0x128C84u;
            goto label_128c84;
        }
    }
    ctx->pc = 0x128C4Cu;
label_128c4c:
    // 0x128c4c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x128c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_128c50:
    // 0x128c50: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x128c50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_128c54:
    // 0x128c54: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x128c54u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_128c58:
    // 0x128c58: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x128c58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_128c5c:
    // 0x128c5c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x128c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_128c60:
    // 0x128c60: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x128c60u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_128c64:
    // 0x128c64: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x128c64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_128c68:
    // 0x128c68: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x128c68u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_128c6c:
    // 0x128c6c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x128c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_128c70:
    // 0x128c70: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x128c70u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_128c74:
    // 0x128c74: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x128c74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_128c78:
    // 0x128c78: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x128c78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_128c7c:
    // 0x128c7c: 0x10000035  b           . + 4 + (0x35 << 2)
label_128c80:
    if (ctx->pc == 0x128C80u) {
        ctx->pc = 0x128C84u;
        goto label_128c84;
    }
    ctx->pc = 0x128C7Cu;
    {
        const bool branch_taken_0x128c7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x128c7c) {
            ctx->pc = 0x128D54u;
            goto label_128d54;
        }
    }
    ctx->pc = 0x128C84u;
label_128c84:
    // 0x128c84: 0xc067694  jal         func_19DA50
label_128c88:
    if (ctx->pc == 0x128C88u) {
        ctx->pc = 0x128C8Cu;
        goto label_128c8c;
    }
    ctx->pc = 0x128C84u;
    SET_GPR_U32(ctx, 31, 0x128C8Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x128C84u, 0x128C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128C8Cu;
label_128c8c:
    // 0x128c8c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x128c8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_128c90:
    // 0x128c90: 0x3065000f  andi        $a1, $v1, 0xF
    ctx->pc = 0x128c90u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
label_128c94:
    // 0x128c94: 0x2ca10006  sltiu       $at, $a1, 0x6
    ctx->pc = 0x128c94u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_128c98:
    // 0x128c98: 0x1020001e  beqz        $at, . + 4 + (0x1E << 2)
label_128c9c:
    if (ctx->pc == 0x128C9Cu) {
        ctx->pc = 0x128CA0u;
        goto label_128ca0;
    }
    ctx->pc = 0x128C98u;
    {
        const bool branch_taken_0x128c98 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x128c98) {
            ctx->pc = 0x128D14u;
            goto label_128d14;
        }
    }
    ctx->pc = 0x128CA0u;
label_128ca0:
    // 0x128ca0: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x128ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_128ca4:
    // 0x128ca4: 0x2464e340  addiu       $a0, $v1, -0x1CC0
    ctx->pc = 0x128ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959936));
label_128ca8:
    // 0x128ca8: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x128ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_128cac:
    // 0x128cac: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x128cacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_128cb0:
    // 0x128cb0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x128cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_128cb4:
    // 0x128cb4: 0x600008  jr          $v1
label_128cb8:
    if (ctx->pc == 0x128CB8u) {
        ctx->pc = 0x128CBCu;
        goto label_128cbc;
    }
    ctx->pc = 0x128CB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x128CB4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x128CBCu;
label_128cbc:
    // 0x128cbc: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x128cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_128cc0:
    // 0x128cc0: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x128cc0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_128cc4:
    // 0x128cc4: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x128cc4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_128cc8:
    // 0x128cc8: 0xc05d25c  jal         func_174970
label_128ccc:
    if (ctx->pc == 0x128CCCu) {
        ctx->pc = 0x128CD0u;
        goto label_128cd0;
    }
    ctx->pc = 0x128CC8u;
    SET_GPR_U32(ctx, 31, 0x128CD0u);
    ctx->pc = 0x174970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174970u, 0x128CC8u, 0x128CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128CD0u;
label_128cd0:
    // 0x128cd0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x128cd0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_128cd4:
    // 0x128cd4: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
label_128cd8:
    if (ctx->pc == 0x128CD8u) {
        ctx->pc = 0x128CDCu;
        goto label_128cdc;
    }
    ctx->pc = 0x128CD4u;
    {
        const bool branch_taken_0x128cd4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x128cd4) {
            ctx->pc = 0x128D0Cu;
            goto label_128d0c;
        }
    }
    ctx->pc = 0x128CDCu;
label_128cdc:
    // 0x128cdc: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x128cdcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_128ce0:
    // 0x128ce0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x128ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_128ce4:
    // 0x128ce4: 0xa0910000  sb          $s1, 0x0($a0)
    ctx->pc = 0x128ce4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 17));
label_128ce8:
    // 0x128ce8: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x128ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_128cec:
    // 0x128cec: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x128cecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_128cf0:
    // 0x128cf0: 0xa0830001  sb          $v1, 0x1($a0)
    ctx->pc = 0x128cf0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 3));
label_128cf4:
    // 0x128cf4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x128cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_128cf8:
    // 0x128cf8: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x128cf8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_128cfc:
    // 0x128cfc: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x128cfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_128d00:
    // 0x128d00: 0xa0a00003  sb          $zero, 0x3($a1)
    ctx->pc = 0x128d00u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 0));
label_128d04:
    // 0x128d04: 0x8fb20048  lw          $s2, 0x48($sp)
    ctx->pc = 0x128d04u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_128d08:
    // 0x128d08: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x128d08u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
label_128d0c:
    // 0x128d0c: 0x10000011  b           . + 4 + (0x11 << 2)
label_128d10:
    if (ctx->pc == 0x128D10u) {
        ctx->pc = 0x128D14u;
        goto label_128d14;
    }
    ctx->pc = 0x128D0Cu;
    {
        const bool branch_taken_0x128d0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x128d0c) {
            ctx->pc = 0x128D54u;
            goto label_128d54;
        }
    }
    ctx->pc = 0x128D14u;
label_128d14:
    // 0x128d14: 0x1000000f  b           . + 4 + (0xF << 2)
label_128d18:
    if (ctx->pc == 0x128D18u) {
        ctx->pc = 0x128D1Cu;
        goto label_128d1c;
    }
    ctx->pc = 0x128D14u;
    {
        const bool branch_taken_0x128d14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x128d14) {
            ctx->pc = 0x128D54u;
            goto label_128d54;
        }
    }
    ctx->pc = 0x128D1Cu;
label_128d1c:
    // 0x128d1c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x128d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_128d20:
    // 0x128d20: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x128d20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_128d24:
    // 0x128d24: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x128d24u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_128d28:
    // 0x128d28: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x128d28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_128d2c:
    // 0x128d2c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x128d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_128d30:
    // 0x128d30: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x128d30u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_128d34:
    // 0x128d34: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x128d34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_128d38:
    // 0x128d38: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x128d38u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_128d3c:
    // 0x128d3c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x128d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_128d40:
    // 0x128d40: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x128d40u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_128d44:
    // 0x128d44: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x128d44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_128d48:
    // 0x128d48: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x128d48u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_128d4c:
    // 0x128d4c: 0x10000001  b           . + 4 + (0x1 << 2)
label_128d50:
    if (ctx->pc == 0x128D50u) {
        ctx->pc = 0x128D54u;
        goto label_128d54;
    }
    ctx->pc = 0x128D4Cu;
    {
        const bool branch_taken_0x128d4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x128d4c) {
            ctx->pc = 0x128D54u;
            goto label_128d54;
        }
    }
    ctx->pc = 0x128D54u;
label_128d54:
    // 0x128d54: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x128d54u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_128d58:
    // 0x128d58: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x128d58u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_128d5c:
    // 0x128d5c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x128d5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_128d60:
    // 0x128d60: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x128d60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_128d64:
    // 0x128d64: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x128d64u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_128d68:
    // 0x128d68: 0x3e00008  jr          $ra
label_128d6c:
    if (ctx->pc == 0x128D6Cu) {
        ctx->pc = 0x128D70u;
        goto label_fallthrough_0x128d68;
    }
    ctx->pc = 0x128D68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x128D68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x128d68:
    ctx->pc = 0x128D70u;
}
