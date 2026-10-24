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

// Function: Main_menu_trans
// Address: 0x2930c0 - 0x2941bc
void Main_menu_trans_0x2930c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Main_menu_trans_0x2930c0");
#endif

    switch (ctx->pc) {
        case 0x2930c0u: goto label_2930c0;
        case 0x2930c4u: goto label_2930c4;
        case 0x2930c8u: goto label_2930c8;
        case 0x2930ccu: goto label_2930cc;
        case 0x2930d0u: goto label_2930d0;
        case 0x2930d4u: goto label_2930d4;
        case 0x2930d8u: goto label_2930d8;
        case 0x2930dcu: goto label_2930dc;
        case 0x2930e0u: goto label_2930e0;
        case 0x2930e4u: goto label_2930e4;
        case 0x2930e8u: goto label_2930e8;
        case 0x2930ecu: goto label_2930ec;
        case 0x2930f0u: goto label_2930f0;
        case 0x2930f4u: goto label_2930f4;
        case 0x2930f8u: goto label_2930f8;
        case 0x2930fcu: goto label_2930fc;
        case 0x293100u: goto label_293100;
        case 0x293104u: goto label_293104;
        case 0x293108u: goto label_293108;
        case 0x29310cu: goto label_29310c;
        case 0x293110u: goto label_293110;
        case 0x293114u: goto label_293114;
        case 0x293118u: goto label_293118;
        case 0x29311cu: goto label_29311c;
        case 0x293120u: goto label_293120;
        case 0x293124u: goto label_293124;
        case 0x293128u: goto label_293128;
        case 0x29312cu: goto label_29312c;
        case 0x293130u: goto label_293130;
        case 0x293134u: goto label_293134;
        case 0x293138u: goto label_293138;
        case 0x29313cu: goto label_29313c;
        case 0x293140u: goto label_293140;
        case 0x293144u: goto label_293144;
        case 0x293148u: goto label_293148;
        case 0x29314cu: goto label_29314c;
        case 0x293150u: goto label_293150;
        case 0x293154u: goto label_293154;
        case 0x293158u: goto label_293158;
        case 0x29315cu: goto label_29315c;
        case 0x293160u: goto label_293160;
        case 0x293164u: goto label_293164;
        case 0x293168u: goto label_293168;
        case 0x29316cu: goto label_29316c;
        case 0x293170u: goto label_293170;
        case 0x293174u: goto label_293174;
        case 0x293178u: goto label_293178;
        case 0x29317cu: goto label_29317c;
        case 0x293180u: goto label_293180;
        case 0x293184u: goto label_293184;
        case 0x293188u: goto label_293188;
        case 0x29318cu: goto label_29318c;
        case 0x293190u: goto label_293190;
        case 0x293194u: goto label_293194;
        case 0x293198u: goto label_293198;
        case 0x29319cu: goto label_29319c;
        case 0x2931a0u: goto label_2931a0;
        case 0x2931a4u: goto label_2931a4;
        case 0x2931a8u: goto label_2931a8;
        case 0x2931acu: goto label_2931ac;
        case 0x2931b0u: goto label_2931b0;
        case 0x2931b4u: goto label_2931b4;
        case 0x2931b8u: goto label_2931b8;
        case 0x2931bcu: goto label_2931bc;
        case 0x2931c0u: goto label_2931c0;
        case 0x2931c4u: goto label_2931c4;
        case 0x2931c8u: goto label_2931c8;
        case 0x2931ccu: goto label_2931cc;
        case 0x2931d0u: goto label_2931d0;
        case 0x2931d4u: goto label_2931d4;
        case 0x2931d8u: goto label_2931d8;
        case 0x2931dcu: goto label_2931dc;
        case 0x2931e0u: goto label_2931e0;
        case 0x2931e4u: goto label_2931e4;
        case 0x2931e8u: goto label_2931e8;
        case 0x2931ecu: goto label_2931ec;
        case 0x2931f0u: goto label_2931f0;
        case 0x2931f4u: goto label_2931f4;
        case 0x2931f8u: goto label_2931f8;
        case 0x2931fcu: goto label_2931fc;
        case 0x293200u: goto label_293200;
        case 0x293204u: goto label_293204;
        case 0x293208u: goto label_293208;
        case 0x29320cu: goto label_29320c;
        case 0x293210u: goto label_293210;
        case 0x293214u: goto label_293214;
        case 0x293218u: goto label_293218;
        case 0x29321cu: goto label_29321c;
        case 0x293220u: goto label_293220;
        case 0x293224u: goto label_293224;
        case 0x293228u: goto label_293228;
        case 0x29322cu: goto label_29322c;
        case 0x293230u: goto label_293230;
        case 0x293234u: goto label_293234;
        case 0x293238u: goto label_293238;
        case 0x29323cu: goto label_29323c;
        case 0x293240u: goto label_293240;
        case 0x293244u: goto label_293244;
        case 0x293248u: goto label_293248;
        case 0x29324cu: goto label_29324c;
        case 0x293250u: goto label_293250;
        case 0x293254u: goto label_293254;
        case 0x293258u: goto label_293258;
        case 0x29325cu: goto label_29325c;
        case 0x293260u: goto label_293260;
        case 0x293264u: goto label_293264;
        case 0x293268u: goto label_293268;
        case 0x29326cu: goto label_29326c;
        case 0x293270u: goto label_293270;
        case 0x293274u: goto label_293274;
        case 0x293278u: goto label_293278;
        case 0x29327cu: goto label_29327c;
        case 0x293280u: goto label_293280;
        case 0x293284u: goto label_293284;
        case 0x293288u: goto label_293288;
        case 0x29328cu: goto label_29328c;
        case 0x293290u: goto label_293290;
        case 0x293294u: goto label_293294;
        case 0x293298u: goto label_293298;
        case 0x29329cu: goto label_29329c;
        case 0x2932a0u: goto label_2932a0;
        case 0x2932a4u: goto label_2932a4;
        case 0x2932a8u: goto label_2932a8;
        case 0x2932acu: goto label_2932ac;
        case 0x2932b0u: goto label_2932b0;
        case 0x2932b4u: goto label_2932b4;
        case 0x2932b8u: goto label_2932b8;
        case 0x2932bcu: goto label_2932bc;
        case 0x2932c0u: goto label_2932c0;
        case 0x2932c4u: goto label_2932c4;
        case 0x2932c8u: goto label_2932c8;
        case 0x2932ccu: goto label_2932cc;
        case 0x2932d0u: goto label_2932d0;
        case 0x2932d4u: goto label_2932d4;
        case 0x2932d8u: goto label_2932d8;
        case 0x2932dcu: goto label_2932dc;
        case 0x2932e0u: goto label_2932e0;
        case 0x2932e4u: goto label_2932e4;
        case 0x2932e8u: goto label_2932e8;
        case 0x2932ecu: goto label_2932ec;
        case 0x2932f0u: goto label_2932f0;
        case 0x2932f4u: goto label_2932f4;
        case 0x2932f8u: goto label_2932f8;
        case 0x2932fcu: goto label_2932fc;
        case 0x293300u: goto label_293300;
        case 0x293304u: goto label_293304;
        case 0x293308u: goto label_293308;
        case 0x29330cu: goto label_29330c;
        case 0x293310u: goto label_293310;
        case 0x293314u: goto label_293314;
        case 0x293318u: goto label_293318;
        case 0x29331cu: goto label_29331c;
        case 0x293320u: goto label_293320;
        case 0x293324u: goto label_293324;
        case 0x293328u: goto label_293328;
        case 0x29332cu: goto label_29332c;
        case 0x293330u: goto label_293330;
        case 0x293334u: goto label_293334;
        case 0x293338u: goto label_293338;
        case 0x29333cu: goto label_29333c;
        case 0x293340u: goto label_293340;
        case 0x293344u: goto label_293344;
        case 0x293348u: goto label_293348;
        case 0x29334cu: goto label_29334c;
        case 0x293350u: goto label_293350;
        case 0x293354u: goto label_293354;
        case 0x293358u: goto label_293358;
        case 0x29335cu: goto label_29335c;
        case 0x293360u: goto label_293360;
        case 0x293364u: goto label_293364;
        case 0x293368u: goto label_293368;
        case 0x29336cu: goto label_29336c;
        case 0x293370u: goto label_293370;
        case 0x293374u: goto label_293374;
        case 0x293378u: goto label_293378;
        case 0x29337cu: goto label_29337c;
        case 0x293380u: goto label_293380;
        case 0x293384u: goto label_293384;
        case 0x293388u: goto label_293388;
        case 0x29338cu: goto label_29338c;
        case 0x293390u: goto label_293390;
        case 0x293394u: goto label_293394;
        case 0x293398u: goto label_293398;
        case 0x29339cu: goto label_29339c;
        case 0x2933a0u: goto label_2933a0;
        case 0x2933a4u: goto label_2933a4;
        case 0x2933a8u: goto label_2933a8;
        case 0x2933acu: goto label_2933ac;
        case 0x2933b0u: goto label_2933b0;
        case 0x2933b4u: goto label_2933b4;
        case 0x2933b8u: goto label_2933b8;
        case 0x2933bcu: goto label_2933bc;
        case 0x2933c0u: goto label_2933c0;
        case 0x2933c4u: goto label_2933c4;
        case 0x2933c8u: goto label_2933c8;
        case 0x2933ccu: goto label_2933cc;
        case 0x2933d0u: goto label_2933d0;
        case 0x2933d4u: goto label_2933d4;
        case 0x2933d8u: goto label_2933d8;
        case 0x2933dcu: goto label_2933dc;
        case 0x2933e0u: goto label_2933e0;
        case 0x2933e4u: goto label_2933e4;
        case 0x2933e8u: goto label_2933e8;
        case 0x2933ecu: goto label_2933ec;
        case 0x2933f0u: goto label_2933f0;
        case 0x2933f4u: goto label_2933f4;
        case 0x2933f8u: goto label_2933f8;
        case 0x2933fcu: goto label_2933fc;
        case 0x293400u: goto label_293400;
        case 0x293404u: goto label_293404;
        case 0x293408u: goto label_293408;
        case 0x29340cu: goto label_29340c;
        case 0x293410u: goto label_293410;
        case 0x293414u: goto label_293414;
        case 0x293418u: goto label_293418;
        case 0x29341cu: goto label_29341c;
        case 0x293420u: goto label_293420;
        case 0x293424u: goto label_293424;
        case 0x293428u: goto label_293428;
        case 0x29342cu: goto label_29342c;
        case 0x293430u: goto label_293430;
        case 0x293434u: goto label_293434;
        case 0x293438u: goto label_293438;
        case 0x29343cu: goto label_29343c;
        case 0x293440u: goto label_293440;
        case 0x293444u: goto label_293444;
        case 0x293448u: goto label_293448;
        case 0x29344cu: goto label_29344c;
        case 0x293450u: goto label_293450;
        case 0x293454u: goto label_293454;
        case 0x293458u: goto label_293458;
        case 0x29345cu: goto label_29345c;
        case 0x293460u: goto label_293460;
        case 0x293464u: goto label_293464;
        case 0x293468u: goto label_293468;
        case 0x29346cu: goto label_29346c;
        case 0x293470u: goto label_293470;
        case 0x293474u: goto label_293474;
        case 0x293478u: goto label_293478;
        case 0x29347cu: goto label_29347c;
        case 0x293480u: goto label_293480;
        case 0x293484u: goto label_293484;
        case 0x293488u: goto label_293488;
        case 0x29348cu: goto label_29348c;
        case 0x293490u: goto label_293490;
        case 0x293494u: goto label_293494;
        case 0x293498u: goto label_293498;
        case 0x29349cu: goto label_29349c;
        case 0x2934a0u: goto label_2934a0;
        case 0x2934a4u: goto label_2934a4;
        case 0x2934a8u: goto label_2934a8;
        case 0x2934acu: goto label_2934ac;
        case 0x2934b0u: goto label_2934b0;
        case 0x2934b4u: goto label_2934b4;
        case 0x2934b8u: goto label_2934b8;
        case 0x2934bcu: goto label_2934bc;
        case 0x2934c0u: goto label_2934c0;
        case 0x2934c4u: goto label_2934c4;
        case 0x2934c8u: goto label_2934c8;
        case 0x2934ccu: goto label_2934cc;
        case 0x2934d0u: goto label_2934d0;
        case 0x2934d4u: goto label_2934d4;
        case 0x2934d8u: goto label_2934d8;
        case 0x2934dcu: goto label_2934dc;
        case 0x2934e0u: goto label_2934e0;
        case 0x2934e4u: goto label_2934e4;
        case 0x2934e8u: goto label_2934e8;
        case 0x2934ecu: goto label_2934ec;
        case 0x2934f0u: goto label_2934f0;
        case 0x2934f4u: goto label_2934f4;
        case 0x2934f8u: goto label_2934f8;
        case 0x2934fcu: goto label_2934fc;
        case 0x293500u: goto label_293500;
        case 0x293504u: goto label_293504;
        case 0x293508u: goto label_293508;
        case 0x29350cu: goto label_29350c;
        case 0x293510u: goto label_293510;
        case 0x293514u: goto label_293514;
        case 0x293518u: goto label_293518;
        case 0x29351cu: goto label_29351c;
        case 0x293520u: goto label_293520;
        case 0x293524u: goto label_293524;
        case 0x293528u: goto label_293528;
        case 0x29352cu: goto label_29352c;
        case 0x293530u: goto label_293530;
        case 0x293534u: goto label_293534;
        case 0x293538u: goto label_293538;
        case 0x29353cu: goto label_29353c;
        case 0x293540u: goto label_293540;
        case 0x293544u: goto label_293544;
        case 0x293548u: goto label_293548;
        case 0x29354cu: goto label_29354c;
        case 0x293550u: goto label_293550;
        case 0x293554u: goto label_293554;
        case 0x293558u: goto label_293558;
        case 0x29355cu: goto label_29355c;
        case 0x293560u: goto label_293560;
        case 0x293564u: goto label_293564;
        case 0x293568u: goto label_293568;
        case 0x29356cu: goto label_29356c;
        case 0x293570u: goto label_293570;
        case 0x293574u: goto label_293574;
        case 0x293578u: goto label_293578;
        case 0x29357cu: goto label_29357c;
        case 0x293580u: goto label_293580;
        case 0x293584u: goto label_293584;
        case 0x293588u: goto label_293588;
        case 0x29358cu: goto label_29358c;
        case 0x293590u: goto label_293590;
        case 0x293594u: goto label_293594;
        case 0x293598u: goto label_293598;
        case 0x29359cu: goto label_29359c;
        case 0x2935a0u: goto label_2935a0;
        case 0x2935a4u: goto label_2935a4;
        case 0x2935a8u: goto label_2935a8;
        case 0x2935acu: goto label_2935ac;
        case 0x2935b0u: goto label_2935b0;
        case 0x2935b4u: goto label_2935b4;
        case 0x2935b8u: goto label_2935b8;
        case 0x2935bcu: goto label_2935bc;
        case 0x2935c0u: goto label_2935c0;
        case 0x2935c4u: goto label_2935c4;
        case 0x2935c8u: goto label_2935c8;
        case 0x2935ccu: goto label_2935cc;
        case 0x2935d0u: goto label_2935d0;
        case 0x2935d4u: goto label_2935d4;
        case 0x2935d8u: goto label_2935d8;
        case 0x2935dcu: goto label_2935dc;
        case 0x2935e0u: goto label_2935e0;
        case 0x2935e4u: goto label_2935e4;
        case 0x2935e8u: goto label_2935e8;
        case 0x2935ecu: goto label_2935ec;
        case 0x2935f0u: goto label_2935f0;
        case 0x2935f4u: goto label_2935f4;
        case 0x2935f8u: goto label_2935f8;
        case 0x2935fcu: goto label_2935fc;
        case 0x293600u: goto label_293600;
        case 0x293604u: goto label_293604;
        case 0x293608u: goto label_293608;
        case 0x29360cu: goto label_29360c;
        case 0x293610u: goto label_293610;
        case 0x293614u: goto label_293614;
        case 0x293618u: goto label_293618;
        case 0x29361cu: goto label_29361c;
        case 0x293620u: goto label_293620;
        case 0x293624u: goto label_293624;
        case 0x293628u: goto label_293628;
        case 0x29362cu: goto label_29362c;
        case 0x293630u: goto label_293630;
        case 0x293634u: goto label_293634;
        case 0x293638u: goto label_293638;
        case 0x29363cu: goto label_29363c;
        case 0x293640u: goto label_293640;
        case 0x293644u: goto label_293644;
        case 0x293648u: goto label_293648;
        case 0x29364cu: goto label_29364c;
        case 0x293650u: goto label_293650;
        case 0x293654u: goto label_293654;
        case 0x293658u: goto label_293658;
        case 0x29365cu: goto label_29365c;
        case 0x293660u: goto label_293660;
        case 0x293664u: goto label_293664;
        case 0x293668u: goto label_293668;
        case 0x29366cu: goto label_29366c;
        case 0x293670u: goto label_293670;
        case 0x293674u: goto label_293674;
        case 0x293678u: goto label_293678;
        case 0x29367cu: goto label_29367c;
        case 0x293680u: goto label_293680;
        case 0x293684u: goto label_293684;
        case 0x293688u: goto label_293688;
        case 0x29368cu: goto label_29368c;
        case 0x293690u: goto label_293690;
        case 0x293694u: goto label_293694;
        case 0x293698u: goto label_293698;
        case 0x29369cu: goto label_29369c;
        case 0x2936a0u: goto label_2936a0;
        case 0x2936a4u: goto label_2936a4;
        case 0x2936a8u: goto label_2936a8;
        case 0x2936acu: goto label_2936ac;
        case 0x2936b0u: goto label_2936b0;
        case 0x2936b4u: goto label_2936b4;
        case 0x2936b8u: goto label_2936b8;
        case 0x2936bcu: goto label_2936bc;
        case 0x2936c0u: goto label_2936c0;
        case 0x2936c4u: goto label_2936c4;
        case 0x2936c8u: goto label_2936c8;
        case 0x2936ccu: goto label_2936cc;
        case 0x2936d0u: goto label_2936d0;
        case 0x2936d4u: goto label_2936d4;
        case 0x2936d8u: goto label_2936d8;
        case 0x2936dcu: goto label_2936dc;
        case 0x2936e0u: goto label_2936e0;
        case 0x2936e4u: goto label_2936e4;
        case 0x2936e8u: goto label_2936e8;
        case 0x2936ecu: goto label_2936ec;
        case 0x2936f0u: goto label_2936f0;
        case 0x2936f4u: goto label_2936f4;
        case 0x2936f8u: goto label_2936f8;
        case 0x2936fcu: goto label_2936fc;
        case 0x293700u: goto label_293700;
        case 0x293704u: goto label_293704;
        case 0x293708u: goto label_293708;
        case 0x29370cu: goto label_29370c;
        case 0x293710u: goto label_293710;
        case 0x293714u: goto label_293714;
        case 0x293718u: goto label_293718;
        case 0x29371cu: goto label_29371c;
        case 0x293720u: goto label_293720;
        case 0x293724u: goto label_293724;
        case 0x293728u: goto label_293728;
        case 0x29372cu: goto label_29372c;
        case 0x293730u: goto label_293730;
        case 0x293734u: goto label_293734;
        case 0x293738u: goto label_293738;
        case 0x29373cu: goto label_29373c;
        case 0x293740u: goto label_293740;
        case 0x293744u: goto label_293744;
        case 0x293748u: goto label_293748;
        case 0x29374cu: goto label_29374c;
        case 0x293750u: goto label_293750;
        case 0x293754u: goto label_293754;
        case 0x293758u: goto label_293758;
        case 0x29375cu: goto label_29375c;
        case 0x293760u: goto label_293760;
        case 0x293764u: goto label_293764;
        case 0x293768u: goto label_293768;
        case 0x29376cu: goto label_29376c;
        case 0x293770u: goto label_293770;
        case 0x293774u: goto label_293774;
        case 0x293778u: goto label_293778;
        case 0x29377cu: goto label_29377c;
        case 0x293780u: goto label_293780;
        case 0x293784u: goto label_293784;
        case 0x293788u: goto label_293788;
        case 0x29378cu: goto label_29378c;
        case 0x293790u: goto label_293790;
        case 0x293794u: goto label_293794;
        case 0x293798u: goto label_293798;
        case 0x29379cu: goto label_29379c;
        case 0x2937a0u: goto label_2937a0;
        case 0x2937a4u: goto label_2937a4;
        case 0x2937a8u: goto label_2937a8;
        case 0x2937acu: goto label_2937ac;
        case 0x2937b0u: goto label_2937b0;
        case 0x2937b4u: goto label_2937b4;
        case 0x2937b8u: goto label_2937b8;
        case 0x2937bcu: goto label_2937bc;
        case 0x2937c0u: goto label_2937c0;
        case 0x2937c4u: goto label_2937c4;
        case 0x2937c8u: goto label_2937c8;
        case 0x2937ccu: goto label_2937cc;
        case 0x2937d0u: goto label_2937d0;
        case 0x2937d4u: goto label_2937d4;
        case 0x2937d8u: goto label_2937d8;
        case 0x2937dcu: goto label_2937dc;
        case 0x2937e0u: goto label_2937e0;
        case 0x2937e4u: goto label_2937e4;
        case 0x2937e8u: goto label_2937e8;
        case 0x2937ecu: goto label_2937ec;
        case 0x2937f0u: goto label_2937f0;
        case 0x2937f4u: goto label_2937f4;
        case 0x2937f8u: goto label_2937f8;
        case 0x2937fcu: goto label_2937fc;
        case 0x293800u: goto label_293800;
        case 0x293804u: goto label_293804;
        case 0x293808u: goto label_293808;
        case 0x29380cu: goto label_29380c;
        case 0x293810u: goto label_293810;
        case 0x293814u: goto label_293814;
        case 0x293818u: goto label_293818;
        case 0x29381cu: goto label_29381c;
        case 0x293820u: goto label_293820;
        case 0x293824u: goto label_293824;
        case 0x293828u: goto label_293828;
        case 0x29382cu: goto label_29382c;
        case 0x293830u: goto label_293830;
        case 0x293834u: goto label_293834;
        case 0x293838u: goto label_293838;
        case 0x29383cu: goto label_29383c;
        case 0x293840u: goto label_293840;
        case 0x293844u: goto label_293844;
        case 0x293848u: goto label_293848;
        case 0x29384cu: goto label_29384c;
        case 0x293850u: goto label_293850;
        case 0x293854u: goto label_293854;
        case 0x293858u: goto label_293858;
        case 0x29385cu: goto label_29385c;
        case 0x293860u: goto label_293860;
        case 0x293864u: goto label_293864;
        case 0x293868u: goto label_293868;
        case 0x29386cu: goto label_29386c;
        case 0x293870u: goto label_293870;
        case 0x293874u: goto label_293874;
        case 0x293878u: goto label_293878;
        case 0x29387cu: goto label_29387c;
        case 0x293880u: goto label_293880;
        case 0x293884u: goto label_293884;
        case 0x293888u: goto label_293888;
        case 0x29388cu: goto label_29388c;
        case 0x293890u: goto label_293890;
        case 0x293894u: goto label_293894;
        case 0x293898u: goto label_293898;
        case 0x29389cu: goto label_29389c;
        case 0x2938a0u: goto label_2938a0;
        case 0x2938a4u: goto label_2938a4;
        case 0x2938a8u: goto label_2938a8;
        case 0x2938acu: goto label_2938ac;
        case 0x2938b0u: goto label_2938b0;
        case 0x2938b4u: goto label_2938b4;
        case 0x2938b8u: goto label_2938b8;
        case 0x2938bcu: goto label_2938bc;
        case 0x2938c0u: goto label_2938c0;
        case 0x2938c4u: goto label_2938c4;
        case 0x2938c8u: goto label_2938c8;
        case 0x2938ccu: goto label_2938cc;
        case 0x2938d0u: goto label_2938d0;
        case 0x2938d4u: goto label_2938d4;
        case 0x2938d8u: goto label_2938d8;
        case 0x2938dcu: goto label_2938dc;
        case 0x2938e0u: goto label_2938e0;
        case 0x2938e4u: goto label_2938e4;
        case 0x2938e8u: goto label_2938e8;
        case 0x2938ecu: goto label_2938ec;
        case 0x2938f0u: goto label_2938f0;
        case 0x2938f4u: goto label_2938f4;
        case 0x2938f8u: goto label_2938f8;
        case 0x2938fcu: goto label_2938fc;
        case 0x293900u: goto label_293900;
        case 0x293904u: goto label_293904;
        case 0x293908u: goto label_293908;
        case 0x29390cu: goto label_29390c;
        case 0x293910u: goto label_293910;
        case 0x293914u: goto label_293914;
        case 0x293918u: goto label_293918;
        case 0x29391cu: goto label_29391c;
        case 0x293920u: goto label_293920;
        case 0x293924u: goto label_293924;
        case 0x293928u: goto label_293928;
        case 0x29392cu: goto label_29392c;
        case 0x293930u: goto label_293930;
        case 0x293934u: goto label_293934;
        case 0x293938u: goto label_293938;
        case 0x29393cu: goto label_29393c;
        case 0x293940u: goto label_293940;
        case 0x293944u: goto label_293944;
        case 0x293948u: goto label_293948;
        case 0x29394cu: goto label_29394c;
        case 0x293950u: goto label_293950;
        case 0x293954u: goto label_293954;
        case 0x293958u: goto label_293958;
        case 0x29395cu: goto label_29395c;
        case 0x293960u: goto label_293960;
        case 0x293964u: goto label_293964;
        case 0x293968u: goto label_293968;
        case 0x29396cu: goto label_29396c;
        case 0x293970u: goto label_293970;
        case 0x293974u: goto label_293974;
        case 0x293978u: goto label_293978;
        case 0x29397cu: goto label_29397c;
        case 0x293980u: goto label_293980;
        case 0x293984u: goto label_293984;
        case 0x293988u: goto label_293988;
        case 0x29398cu: goto label_29398c;
        case 0x293990u: goto label_293990;
        case 0x293994u: goto label_293994;
        case 0x293998u: goto label_293998;
        case 0x29399cu: goto label_29399c;
        case 0x2939a0u: goto label_2939a0;
        case 0x2939a4u: goto label_2939a4;
        case 0x2939a8u: goto label_2939a8;
        case 0x2939acu: goto label_2939ac;
        case 0x2939b0u: goto label_2939b0;
        case 0x2939b4u: goto label_2939b4;
        case 0x2939b8u: goto label_2939b8;
        case 0x2939bcu: goto label_2939bc;
        case 0x2939c0u: goto label_2939c0;
        case 0x2939c4u: goto label_2939c4;
        case 0x2939c8u: goto label_2939c8;
        case 0x2939ccu: goto label_2939cc;
        case 0x2939d0u: goto label_2939d0;
        case 0x2939d4u: goto label_2939d4;
        case 0x2939d8u: goto label_2939d8;
        case 0x2939dcu: goto label_2939dc;
        case 0x2939e0u: goto label_2939e0;
        case 0x2939e4u: goto label_2939e4;
        case 0x2939e8u: goto label_2939e8;
        case 0x2939ecu: goto label_2939ec;
        case 0x2939f0u: goto label_2939f0;
        case 0x2939f4u: goto label_2939f4;
        case 0x2939f8u: goto label_2939f8;
        case 0x2939fcu: goto label_2939fc;
        case 0x293a00u: goto label_293a00;
        case 0x293a04u: goto label_293a04;
        case 0x293a08u: goto label_293a08;
        case 0x293a0cu: goto label_293a0c;
        case 0x293a10u: goto label_293a10;
        case 0x293a14u: goto label_293a14;
        case 0x293a18u: goto label_293a18;
        case 0x293a1cu: goto label_293a1c;
        case 0x293a20u: goto label_293a20;
        case 0x293a24u: goto label_293a24;
        case 0x293a28u: goto label_293a28;
        case 0x293a2cu: goto label_293a2c;
        case 0x293a30u: goto label_293a30;
        case 0x293a34u: goto label_293a34;
        case 0x293a38u: goto label_293a38;
        case 0x293a3cu: goto label_293a3c;
        case 0x293a40u: goto label_293a40;
        case 0x293a44u: goto label_293a44;
        case 0x293a48u: goto label_293a48;
        case 0x293a4cu: goto label_293a4c;
        case 0x293a50u: goto label_293a50;
        case 0x293a54u: goto label_293a54;
        case 0x293a58u: goto label_293a58;
        case 0x293a5cu: goto label_293a5c;
        case 0x293a60u: goto label_293a60;
        case 0x293a64u: goto label_293a64;
        case 0x293a68u: goto label_293a68;
        case 0x293a6cu: goto label_293a6c;
        case 0x293a70u: goto label_293a70;
        case 0x293a74u: goto label_293a74;
        case 0x293a78u: goto label_293a78;
        case 0x293a7cu: goto label_293a7c;
        case 0x293a80u: goto label_293a80;
        case 0x293a84u: goto label_293a84;
        case 0x293a88u: goto label_293a88;
        case 0x293a8cu: goto label_293a8c;
        case 0x293a90u: goto label_293a90;
        case 0x293a94u: goto label_293a94;
        case 0x293a98u: goto label_293a98;
        case 0x293a9cu: goto label_293a9c;
        case 0x293aa0u: goto label_293aa0;
        case 0x293aa4u: goto label_293aa4;
        case 0x293aa8u: goto label_293aa8;
        case 0x293aacu: goto label_293aac;
        case 0x293ab0u: goto label_293ab0;
        case 0x293ab4u: goto label_293ab4;
        case 0x293ab8u: goto label_293ab8;
        case 0x293abcu: goto label_293abc;
        case 0x293ac0u: goto label_293ac0;
        case 0x293ac4u: goto label_293ac4;
        case 0x293ac8u: goto label_293ac8;
        case 0x293accu: goto label_293acc;
        case 0x293ad0u: goto label_293ad0;
        case 0x293ad4u: goto label_293ad4;
        case 0x293ad8u: goto label_293ad8;
        case 0x293adcu: goto label_293adc;
        case 0x293ae0u: goto label_293ae0;
        case 0x293ae4u: goto label_293ae4;
        case 0x293ae8u: goto label_293ae8;
        case 0x293aecu: goto label_293aec;
        case 0x293af0u: goto label_293af0;
        case 0x293af4u: goto label_293af4;
        case 0x293af8u: goto label_293af8;
        case 0x293afcu: goto label_293afc;
        case 0x293b00u: goto label_293b00;
        case 0x293b04u: goto label_293b04;
        case 0x293b08u: goto label_293b08;
        case 0x293b0cu: goto label_293b0c;
        case 0x293b10u: goto label_293b10;
        case 0x293b14u: goto label_293b14;
        case 0x293b18u: goto label_293b18;
        case 0x293b1cu: goto label_293b1c;
        case 0x293b20u: goto label_293b20;
        case 0x293b24u: goto label_293b24;
        case 0x293b28u: goto label_293b28;
        case 0x293b2cu: goto label_293b2c;
        case 0x293b30u: goto label_293b30;
        case 0x293b34u: goto label_293b34;
        case 0x293b38u: goto label_293b38;
        case 0x293b3cu: goto label_293b3c;
        case 0x293b40u: goto label_293b40;
        case 0x293b44u: goto label_293b44;
        case 0x293b48u: goto label_293b48;
        case 0x293b4cu: goto label_293b4c;
        case 0x293b50u: goto label_293b50;
        case 0x293b54u: goto label_293b54;
        case 0x293b58u: goto label_293b58;
        case 0x293b5cu: goto label_293b5c;
        case 0x293b60u: goto label_293b60;
        case 0x293b64u: goto label_293b64;
        case 0x293b68u: goto label_293b68;
        case 0x293b6cu: goto label_293b6c;
        case 0x293b70u: goto label_293b70;
        case 0x293b74u: goto label_293b74;
        case 0x293b78u: goto label_293b78;
        case 0x293b7cu: goto label_293b7c;
        case 0x293b80u: goto label_293b80;
        case 0x293b84u: goto label_293b84;
        case 0x293b88u: goto label_293b88;
        case 0x293b8cu: goto label_293b8c;
        case 0x293b90u: goto label_293b90;
        case 0x293b94u: goto label_293b94;
        case 0x293b98u: goto label_293b98;
        case 0x293b9cu: goto label_293b9c;
        case 0x293ba0u: goto label_293ba0;
        case 0x293ba4u: goto label_293ba4;
        case 0x293ba8u: goto label_293ba8;
        case 0x293bacu: goto label_293bac;
        case 0x293bb0u: goto label_293bb0;
        case 0x293bb4u: goto label_293bb4;
        case 0x293bb8u: goto label_293bb8;
        case 0x293bbcu: goto label_293bbc;
        case 0x293bc0u: goto label_293bc0;
        case 0x293bc4u: goto label_293bc4;
        case 0x293bc8u: goto label_293bc8;
        case 0x293bccu: goto label_293bcc;
        case 0x293bd0u: goto label_293bd0;
        case 0x293bd4u: goto label_293bd4;
        case 0x293bd8u: goto label_293bd8;
        case 0x293bdcu: goto label_293bdc;
        case 0x293be0u: goto label_293be0;
        case 0x293be4u: goto label_293be4;
        case 0x293be8u: goto label_293be8;
        case 0x293becu: goto label_293bec;
        case 0x293bf0u: goto label_293bf0;
        case 0x293bf4u: goto label_293bf4;
        case 0x293bf8u: goto label_293bf8;
        case 0x293bfcu: goto label_293bfc;
        case 0x293c00u: goto label_293c00;
        case 0x293c04u: goto label_293c04;
        case 0x293c08u: goto label_293c08;
        case 0x293c0cu: goto label_293c0c;
        case 0x293c10u: goto label_293c10;
        case 0x293c14u: goto label_293c14;
        case 0x293c18u: goto label_293c18;
        case 0x293c1cu: goto label_293c1c;
        case 0x293c20u: goto label_293c20;
        case 0x293c24u: goto label_293c24;
        case 0x293c28u: goto label_293c28;
        case 0x293c2cu: goto label_293c2c;
        case 0x293c30u: goto label_293c30;
        case 0x293c34u: goto label_293c34;
        case 0x293c38u: goto label_293c38;
        case 0x293c3cu: goto label_293c3c;
        case 0x293c40u: goto label_293c40;
        case 0x293c44u: goto label_293c44;
        case 0x293c48u: goto label_293c48;
        case 0x293c4cu: goto label_293c4c;
        case 0x293c50u: goto label_293c50;
        case 0x293c54u: goto label_293c54;
        case 0x293c58u: goto label_293c58;
        case 0x293c5cu: goto label_293c5c;
        case 0x293c60u: goto label_293c60;
        case 0x293c64u: goto label_293c64;
        case 0x293c68u: goto label_293c68;
        case 0x293c6cu: goto label_293c6c;
        case 0x293c70u: goto label_293c70;
        case 0x293c74u: goto label_293c74;
        case 0x293c78u: goto label_293c78;
        case 0x293c7cu: goto label_293c7c;
        case 0x293c80u: goto label_293c80;
        case 0x293c84u: goto label_293c84;
        case 0x293c88u: goto label_293c88;
        case 0x293c8cu: goto label_293c8c;
        case 0x293c90u: goto label_293c90;
        case 0x293c94u: goto label_293c94;
        case 0x293c98u: goto label_293c98;
        case 0x293c9cu: goto label_293c9c;
        case 0x293ca0u: goto label_293ca0;
        case 0x293ca4u: goto label_293ca4;
        case 0x293ca8u: goto label_293ca8;
        case 0x293cacu: goto label_293cac;
        case 0x293cb0u: goto label_293cb0;
        case 0x293cb4u: goto label_293cb4;
        case 0x293cb8u: goto label_293cb8;
        case 0x293cbcu: goto label_293cbc;
        case 0x293cc0u: goto label_293cc0;
        case 0x293cc4u: goto label_293cc4;
        case 0x293cc8u: goto label_293cc8;
        case 0x293cccu: goto label_293ccc;
        case 0x293cd0u: goto label_293cd0;
        case 0x293cd4u: goto label_293cd4;
        case 0x293cd8u: goto label_293cd8;
        case 0x293cdcu: goto label_293cdc;
        case 0x293ce0u: goto label_293ce0;
        case 0x293ce4u: goto label_293ce4;
        case 0x293ce8u: goto label_293ce8;
        case 0x293cecu: goto label_293cec;
        case 0x293cf0u: goto label_293cf0;
        case 0x293cf4u: goto label_293cf4;
        case 0x293cf8u: goto label_293cf8;
        case 0x293cfcu: goto label_293cfc;
        case 0x293d00u: goto label_293d00;
        case 0x293d04u: goto label_293d04;
        case 0x293d08u: goto label_293d08;
        case 0x293d0cu: goto label_293d0c;
        case 0x293d10u: goto label_293d10;
        case 0x293d14u: goto label_293d14;
        case 0x293d18u: goto label_293d18;
        case 0x293d1cu: goto label_293d1c;
        case 0x293d20u: goto label_293d20;
        case 0x293d24u: goto label_293d24;
        case 0x293d28u: goto label_293d28;
        case 0x293d2cu: goto label_293d2c;
        case 0x293d30u: goto label_293d30;
        case 0x293d34u: goto label_293d34;
        case 0x293d38u: goto label_293d38;
        case 0x293d3cu: goto label_293d3c;
        case 0x293d40u: goto label_293d40;
        case 0x293d44u: goto label_293d44;
        case 0x293d48u: goto label_293d48;
        case 0x293d4cu: goto label_293d4c;
        case 0x293d50u: goto label_293d50;
        case 0x293d54u: goto label_293d54;
        case 0x293d58u: goto label_293d58;
        case 0x293d5cu: goto label_293d5c;
        case 0x293d60u: goto label_293d60;
        case 0x293d64u: goto label_293d64;
        case 0x293d68u: goto label_293d68;
        case 0x293d6cu: goto label_293d6c;
        case 0x293d70u: goto label_293d70;
        case 0x293d74u: goto label_293d74;
        case 0x293d78u: goto label_293d78;
        case 0x293d7cu: goto label_293d7c;
        case 0x293d80u: goto label_293d80;
        case 0x293d84u: goto label_293d84;
        case 0x293d88u: goto label_293d88;
        case 0x293d8cu: goto label_293d8c;
        case 0x293d90u: goto label_293d90;
        case 0x293d94u: goto label_293d94;
        case 0x293d98u: goto label_293d98;
        case 0x293d9cu: goto label_293d9c;
        case 0x293da0u: goto label_293da0;
        case 0x293da4u: goto label_293da4;
        case 0x293da8u: goto label_293da8;
        case 0x293dacu: goto label_293dac;
        case 0x293db0u: goto label_293db0;
        case 0x293db4u: goto label_293db4;
        case 0x293db8u: goto label_293db8;
        case 0x293dbcu: goto label_293dbc;
        case 0x293dc0u: goto label_293dc0;
        case 0x293dc4u: goto label_293dc4;
        case 0x293dc8u: goto label_293dc8;
        case 0x293dccu: goto label_293dcc;
        case 0x293dd0u: goto label_293dd0;
        case 0x293dd4u: goto label_293dd4;
        case 0x293dd8u: goto label_293dd8;
        case 0x293ddcu: goto label_293ddc;
        case 0x293de0u: goto label_293de0;
        case 0x293de4u: goto label_293de4;
        case 0x293de8u: goto label_293de8;
        case 0x293decu: goto label_293dec;
        case 0x293df0u: goto label_293df0;
        case 0x293df4u: goto label_293df4;
        case 0x293df8u: goto label_293df8;
        case 0x293dfcu: goto label_293dfc;
        case 0x293e00u: goto label_293e00;
        case 0x293e04u: goto label_293e04;
        case 0x293e08u: goto label_293e08;
        case 0x293e0cu: goto label_293e0c;
        case 0x293e10u: goto label_293e10;
        case 0x293e14u: goto label_293e14;
        case 0x293e18u: goto label_293e18;
        case 0x293e1cu: goto label_293e1c;
        case 0x293e20u: goto label_293e20;
        case 0x293e24u: goto label_293e24;
        case 0x293e28u: goto label_293e28;
        case 0x293e2cu: goto label_293e2c;
        case 0x293e30u: goto label_293e30;
        case 0x293e34u: goto label_293e34;
        case 0x293e38u: goto label_293e38;
        case 0x293e3cu: goto label_293e3c;
        case 0x293e40u: goto label_293e40;
        case 0x293e44u: goto label_293e44;
        case 0x293e48u: goto label_293e48;
        case 0x293e4cu: goto label_293e4c;
        case 0x293e50u: goto label_293e50;
        case 0x293e54u: goto label_293e54;
        case 0x293e58u: goto label_293e58;
        case 0x293e5cu: goto label_293e5c;
        case 0x293e60u: goto label_293e60;
        case 0x293e64u: goto label_293e64;
        case 0x293e68u: goto label_293e68;
        case 0x293e6cu: goto label_293e6c;
        case 0x293e70u: goto label_293e70;
        case 0x293e74u: goto label_293e74;
        case 0x293e78u: goto label_293e78;
        case 0x293e7cu: goto label_293e7c;
        case 0x293e80u: goto label_293e80;
        case 0x293e84u: goto label_293e84;
        case 0x293e88u: goto label_293e88;
        case 0x293e8cu: goto label_293e8c;
        case 0x293e90u: goto label_293e90;
        case 0x293e94u: goto label_293e94;
        case 0x293e98u: goto label_293e98;
        case 0x293e9cu: goto label_293e9c;
        case 0x293ea0u: goto label_293ea0;
        case 0x293ea4u: goto label_293ea4;
        case 0x293ea8u: goto label_293ea8;
        case 0x293eacu: goto label_293eac;
        case 0x293eb0u: goto label_293eb0;
        case 0x293eb4u: goto label_293eb4;
        case 0x293eb8u: goto label_293eb8;
        case 0x293ebcu: goto label_293ebc;
        case 0x293ec0u: goto label_293ec0;
        case 0x293ec4u: goto label_293ec4;
        case 0x293ec8u: goto label_293ec8;
        case 0x293eccu: goto label_293ecc;
        case 0x293ed0u: goto label_293ed0;
        case 0x293ed4u: goto label_293ed4;
        case 0x293ed8u: goto label_293ed8;
        case 0x293edcu: goto label_293edc;
        case 0x293ee0u: goto label_293ee0;
        case 0x293ee4u: goto label_293ee4;
        case 0x293ee8u: goto label_293ee8;
        case 0x293eecu: goto label_293eec;
        case 0x293ef0u: goto label_293ef0;
        case 0x293ef4u: goto label_293ef4;
        case 0x293ef8u: goto label_293ef8;
        case 0x293efcu: goto label_293efc;
        case 0x293f00u: goto label_293f00;
        case 0x293f04u: goto label_293f04;
        case 0x293f08u: goto label_293f08;
        case 0x293f0cu: goto label_293f0c;
        case 0x293f10u: goto label_293f10;
        case 0x293f14u: goto label_293f14;
        case 0x293f18u: goto label_293f18;
        case 0x293f1cu: goto label_293f1c;
        case 0x293f20u: goto label_293f20;
        case 0x293f24u: goto label_293f24;
        case 0x293f28u: goto label_293f28;
        case 0x293f2cu: goto label_293f2c;
        case 0x293f30u: goto label_293f30;
        case 0x293f34u: goto label_293f34;
        case 0x293f38u: goto label_293f38;
        case 0x293f3cu: goto label_293f3c;
        case 0x293f40u: goto label_293f40;
        case 0x293f44u: goto label_293f44;
        case 0x293f48u: goto label_293f48;
        case 0x293f4cu: goto label_293f4c;
        case 0x293f50u: goto label_293f50;
        case 0x293f54u: goto label_293f54;
        case 0x293f58u: goto label_293f58;
        case 0x293f5cu: goto label_293f5c;
        case 0x293f60u: goto label_293f60;
        case 0x293f64u: goto label_293f64;
        case 0x293f68u: goto label_293f68;
        case 0x293f6cu: goto label_293f6c;
        case 0x293f70u: goto label_293f70;
        case 0x293f74u: goto label_293f74;
        case 0x293f78u: goto label_293f78;
        case 0x293f7cu: goto label_293f7c;
        case 0x293f80u: goto label_293f80;
        case 0x293f84u: goto label_293f84;
        case 0x293f88u: goto label_293f88;
        case 0x293f8cu: goto label_293f8c;
        case 0x293f90u: goto label_293f90;
        case 0x293f94u: goto label_293f94;
        case 0x293f98u: goto label_293f98;
        case 0x293f9cu: goto label_293f9c;
        case 0x293fa0u: goto label_293fa0;
        case 0x293fa4u: goto label_293fa4;
        case 0x293fa8u: goto label_293fa8;
        case 0x293facu: goto label_293fac;
        case 0x293fb0u: goto label_293fb0;
        case 0x293fb4u: goto label_293fb4;
        case 0x293fb8u: goto label_293fb8;
        case 0x293fbcu: goto label_293fbc;
        case 0x293fc0u: goto label_293fc0;
        case 0x293fc4u: goto label_293fc4;
        case 0x293fc8u: goto label_293fc8;
        case 0x293fccu: goto label_293fcc;
        case 0x293fd0u: goto label_293fd0;
        case 0x293fd4u: goto label_293fd4;
        case 0x293fd8u: goto label_293fd8;
        case 0x293fdcu: goto label_293fdc;
        case 0x293fe0u: goto label_293fe0;
        case 0x293fe4u: goto label_293fe4;
        case 0x293fe8u: goto label_293fe8;
        case 0x293fecu: goto label_293fec;
        case 0x293ff0u: goto label_293ff0;
        case 0x293ff4u: goto label_293ff4;
        case 0x293ff8u: goto label_293ff8;
        case 0x293ffcu: goto label_293ffc;
        case 0x294000u: goto label_294000;
        case 0x294004u: goto label_294004;
        case 0x294008u: goto label_294008;
        case 0x29400cu: goto label_29400c;
        case 0x294010u: goto label_294010;
        case 0x294014u: goto label_294014;
        case 0x294018u: goto label_294018;
        case 0x29401cu: goto label_29401c;
        case 0x294020u: goto label_294020;
        case 0x294024u: goto label_294024;
        case 0x294028u: goto label_294028;
        case 0x29402cu: goto label_29402c;
        case 0x294030u: goto label_294030;
        case 0x294034u: goto label_294034;
        case 0x294038u: goto label_294038;
        case 0x29403cu: goto label_29403c;
        case 0x294040u: goto label_294040;
        case 0x294044u: goto label_294044;
        case 0x294048u: goto label_294048;
        case 0x29404cu: goto label_29404c;
        case 0x294050u: goto label_294050;
        case 0x294054u: goto label_294054;
        case 0x294058u: goto label_294058;
        case 0x29405cu: goto label_29405c;
        case 0x294060u: goto label_294060;
        case 0x294064u: goto label_294064;
        case 0x294068u: goto label_294068;
        case 0x29406cu: goto label_29406c;
        case 0x294070u: goto label_294070;
        case 0x294074u: goto label_294074;
        case 0x294078u: goto label_294078;
        case 0x29407cu: goto label_29407c;
        case 0x294080u: goto label_294080;
        case 0x294084u: goto label_294084;
        case 0x294088u: goto label_294088;
        case 0x29408cu: goto label_29408c;
        case 0x294090u: goto label_294090;
        case 0x294094u: goto label_294094;
        case 0x294098u: goto label_294098;
        case 0x29409cu: goto label_29409c;
        case 0x2940a0u: goto label_2940a0;
        case 0x2940a4u: goto label_2940a4;
        case 0x2940a8u: goto label_2940a8;
        case 0x2940acu: goto label_2940ac;
        case 0x2940b0u: goto label_2940b0;
        case 0x2940b4u: goto label_2940b4;
        case 0x2940b8u: goto label_2940b8;
        case 0x2940bcu: goto label_2940bc;
        case 0x2940c0u: goto label_2940c0;
        case 0x2940c4u: goto label_2940c4;
        case 0x2940c8u: goto label_2940c8;
        case 0x2940ccu: goto label_2940cc;
        case 0x2940d0u: goto label_2940d0;
        case 0x2940d4u: goto label_2940d4;
        case 0x2940d8u: goto label_2940d8;
        case 0x2940dcu: goto label_2940dc;
        case 0x2940e0u: goto label_2940e0;
        case 0x2940e4u: goto label_2940e4;
        case 0x2940e8u: goto label_2940e8;
        case 0x2940ecu: goto label_2940ec;
        case 0x2940f0u: goto label_2940f0;
        case 0x2940f4u: goto label_2940f4;
        case 0x2940f8u: goto label_2940f8;
        case 0x2940fcu: goto label_2940fc;
        case 0x294100u: goto label_294100;
        case 0x294104u: goto label_294104;
        case 0x294108u: goto label_294108;
        case 0x29410cu: goto label_29410c;
        case 0x294110u: goto label_294110;
        case 0x294114u: goto label_294114;
        case 0x294118u: goto label_294118;
        case 0x29411cu: goto label_29411c;
        case 0x294120u: goto label_294120;
        case 0x294124u: goto label_294124;
        case 0x294128u: goto label_294128;
        case 0x29412cu: goto label_29412c;
        case 0x294130u: goto label_294130;
        case 0x294134u: goto label_294134;
        case 0x294138u: goto label_294138;
        case 0x29413cu: goto label_29413c;
        case 0x294140u: goto label_294140;
        case 0x294144u: goto label_294144;
        case 0x294148u: goto label_294148;
        case 0x29414cu: goto label_29414c;
        case 0x294150u: goto label_294150;
        case 0x294154u: goto label_294154;
        case 0x294158u: goto label_294158;
        case 0x29415cu: goto label_29415c;
        case 0x294160u: goto label_294160;
        case 0x294164u: goto label_294164;
        case 0x294168u: goto label_294168;
        case 0x29416cu: goto label_29416c;
        case 0x294170u: goto label_294170;
        case 0x294174u: goto label_294174;
        case 0x294178u: goto label_294178;
        case 0x29417cu: goto label_29417c;
        case 0x294180u: goto label_294180;
        case 0x294184u: goto label_294184;
        case 0x294188u: goto label_294188;
        case 0x29418cu: goto label_29418c;
        case 0x294190u: goto label_294190;
        case 0x294194u: goto label_294194;
        case 0x294198u: goto label_294198;
        case 0x29419cu: goto label_29419c;
        case 0x2941a0u: goto label_2941a0;
        case 0x2941a4u: goto label_2941a4;
        case 0x2941a8u: goto label_2941a8;
        case 0x2941acu: goto label_2941ac;
        case 0x2941b0u: goto label_2941b0;
        case 0x2941b4u: goto label_2941b4;
        case 0x2941b8u: goto label_2941b8;
        default: break;
    }

    ctx->pc = 0x2930c0u;

label_2930c0:
    // 0x2930c0: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x2930c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
label_2930c4:
    // 0x2930c4: 0x7fbf0090  sq          $ra, 0x90($sp)
    ctx->pc = 0x2930c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 31));
label_2930c8:
    // 0x2930c8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2930c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_2930cc:
    // 0x2930cc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2930ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_2930d0:
    // 0x2930d0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2930d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_2930d4:
    // 0x2930d4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2930d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_2930d8:
    // 0x2930d8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2930d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2930dc:
    // 0x2930dc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2930dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2930e0:
    // 0x2930e0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2930e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2930e4:
    // 0x2930e4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2930e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2930e8:
    // 0x2930e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2930e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2930ec:
    // 0x2930ec: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x2930ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_2930f0:
    // 0x2930f0: 0x24436150  addiu       $v1, $v0, 0x6150
    ctx->pc = 0x2930f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 24912));
label_2930f4:
    // 0x2930f4: 0x70609628  paddub      $s2, $v1, $zero
    ctx->pc = 0x2930f4u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_2930f8:
    // 0x2930f8: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x2930f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_2930fc:
    // 0x2930fc: 0x24424d00  addiu       $v0, $v0, 0x4D00
    ctx->pc = 0x2930fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19712));
label_293100:
    // 0x293100: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x293100u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_293104:
    // 0x293104: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x293104u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_293108:
    // 0x293108: 0x24435280  addiu       $v1, $v0, 0x5280
    ctx->pc = 0x293108u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 21120));
label_29310c:
    // 0x29310c: 0x7060ae28  paddub      $s5, $v1, $zero
    ctx->pc = 0x29310cu;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_293110:
    // 0x293110: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x293110u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_293114:
    // 0x293114: 0x24425480  addiu       $v0, $v0, 0x5480
    ctx->pc = 0x293114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21632));
label_293118:
    // 0x293118: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x293118u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_29311c:
    // 0x29311c: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x29311cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
label_293120:
    // 0x293120: 0x24825680  addiu       $v0, $a0, 0x5680
    ctx->pc = 0x293120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 22144));
label_293124:
    // 0x293124: 0xafa20158  sw          $v0, 0x158($sp)
    ctx->pc = 0x293124u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 344), GPR_U32(ctx, 2));
label_293128:
    // 0x293128: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x293128u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_29312c:
    // 0x29312c: 0x244367f0  addiu       $v1, $v0, 0x67F0
    ctx->pc = 0x29312cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 26608));
label_293130:
    // 0x293130: 0x27a20120  addiu       $v0, $sp, 0x120
    ctx->pc = 0x293130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_293134:
    // 0x293134: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x293134u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_293138:
    // 0x293138: 0x7c440000  sq          $a0, 0x0($v0)
    ctx->pc = 0x293138u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
label_29313c:
    // 0x29313c: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x29313cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
label_293140:
    // 0x293140: 0x24626800  addiu       $v0, $v1, 0x6800
    ctx->pc = 0x293140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 26624));
label_293144:
    // 0x293144: 0x27a30130  addiu       $v1, $sp, 0x130
    ctx->pc = 0x293144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_293148:
    // 0x293148: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x293148u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_29314c:
    // 0x29314c: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x29314cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
label_293150:
    // 0x293150: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x293150u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
label_293154:
    // 0x293154: 0x24626870  addiu       $v0, $v1, 0x6870
    ctx->pc = 0x293154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 26736));
label_293158:
    // 0x293158: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x293158u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_29315c:
    // 0x29315c: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x29315cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_293160:
    // 0x293160: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x293160u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
label_293164:
    // 0x293164: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x293164u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_293168:
    // 0x293168: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x293168u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_29316c:
    // 0x29316c: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x29316cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
label_293170:
    // 0x293170: 0x3443103f  ori         $v1, $v0, 0x103F
    ctx->pc = 0x293170u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4159);
label_293174:
    // 0x293174: 0xae830004  sw          $v1, 0x4($s4)
    ctx->pc = 0x293174u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 3));
label_293178:
    // 0x293178: 0x26440004  addiu       $a0, $s2, 0x4
    ctx->pc = 0x293178u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_29317c:
    // 0x29317c: 0x72802e28  paddub      $a1, $s4, $zero
    ctx->pc = 0x29317cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
label_293180:
    // 0x293180: 0xc05dbd8  jal         func_176F60
label_293184:
    if (ctx->pc == 0x293184u) {
        ctx->pc = 0x293188u;
        goto label_293188;
    }
    ctx->pc = 0x293180u;
    SET_GPR_U32(ctx, 31, 0x293188u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x293180u, 0x293188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293188u;
label_293188:
    // 0x293188: 0x26830010  addiu       $v1, $s4, 0x10
    ctx->pc = 0x293188u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
label_29318c:
    // 0x29318c: 0x7060a628  paddub      $s4, $v1, $zero
    ctx->pc = 0x29318cu;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_293190:
    // 0x293190: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x293190u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_293194:
    // 0x293194: 0x10000066  b           . + 4 + (0x66 << 2)
label_293198:
    if (ctx->pc == 0x293198u) {
        ctx->pc = 0x29319Cu;
        goto label_29319c;
    }
    ctx->pc = 0x293194u;
    {
        const bool branch_taken_0x293194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x293194) {
            ctx->pc = 0x293330u;
            goto label_293330;
        }
    }
    ctx->pc = 0x29319Cu;
label_29319c:
    // 0x29319c: 0x8e425dc4  lw          $v0, 0x5DC4($s2)
    ctx->pc = 0x29319cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24004)));
label_2931a0:
    // 0x2931a0: 0x16620018  bne         $s3, $v0, . + 4 + (0x18 << 2)
label_2931a4:
    if (ctx->pc == 0x2931A4u) {
        ctx->pc = 0x2931A8u;
        goto label_2931a8;
    }
    ctx->pc = 0x2931A0u;
    {
        const bool branch_taken_0x2931a0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x2931a0) {
            ctx->pc = 0x293204u;
            goto label_293204;
        }
    }
    ctx->pc = 0x2931A8u;
label_2931a8:
    // 0x2931a8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2931a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_2931ac:
    // 0x2931ac: 0x8c24fde0  lw          $a0, -0x220($at)
    ctx->pc = 0x2931acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294966752)));
label_2931b0:
    // 0x2931b0: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x2931b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_2931b4:
    // 0x2931b4: 0x1082000f  beq         $a0, $v0, . + 4 + (0xF << 2)
label_2931b8:
    if (ctx->pc == 0x2931B8u) {
        ctx->pc = 0x2931BCu;
        goto label_2931bc;
    }
    ctx->pc = 0x2931B4u;
    {
        const bool branch_taken_0x2931b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x2931b4) {
            ctx->pc = 0x2931F4u;
            goto label_2931f4;
        }
    }
    ctx->pc = 0x2931BCu;
label_2931bc:
    // 0x2931bc: 0x2402001d  addiu       $v0, $zero, 0x1D
    ctx->pc = 0x2931bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
label_2931c0:
    // 0x2931c0: 0x10820009  beq         $a0, $v0, . + 4 + (0x9 << 2)
label_2931c4:
    if (ctx->pc == 0x2931C4u) {
        ctx->pc = 0x2931C8u;
        goto label_2931c8;
    }
    ctx->pc = 0x2931C0u;
    {
        const bool branch_taken_0x2931c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x2931c0) {
            ctx->pc = 0x2931E8u;
            goto label_2931e8;
        }
    }
    ctx->pc = 0x2931C8u;
label_2931c8:
    // 0x2931c8: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x2931c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_2931cc:
    // 0x2931cc: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_2931d0:
    if (ctx->pc == 0x2931D0u) {
        ctx->pc = 0x2931D4u;
        goto label_2931d4;
    }
    ctx->pc = 0x2931CCu;
    {
        const bool branch_taken_0x2931cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2931cc) {
            ctx->pc = 0x2931DCu;
            goto label_2931dc;
        }
    }
    ctx->pc = 0x2931D4u;
label_2931d4:
    // 0x2931d4: 0x1000000e  b           . + 4 + (0xE << 2)
label_2931d8:
    if (ctx->pc == 0x2931D8u) {
        ctx->pc = 0x2931DCu;
        goto label_2931dc;
    }
    ctx->pc = 0x2931D4u;
    {
        const bool branch_taken_0x2931d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2931d4) {
            ctx->pc = 0x293210u;
            goto label_293210;
        }
    }
    ctx->pc = 0x2931DCu;
label_2931dc:
    // 0x2931dc: 0x241e0003  addiu       $fp, $zero, 0x3
    ctx->pc = 0x2931dcu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2931e0:
    // 0x2931e0: 0x1000000b  b           . + 4 + (0xB << 2)
label_2931e4:
    if (ctx->pc == 0x2931E4u) {
        ctx->pc = 0x2931E8u;
        goto label_2931e8;
    }
    ctx->pc = 0x2931E0u;
    {
        const bool branch_taken_0x2931e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2931e0) {
            ctx->pc = 0x293210u;
            goto label_293210;
        }
    }
    ctx->pc = 0x2931E8u;
label_2931e8:
    // 0x2931e8: 0x241e0004  addiu       $fp, $zero, 0x4
    ctx->pc = 0x2931e8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2931ec:
    // 0x2931ec: 0x10000008  b           . + 4 + (0x8 << 2)
label_2931f0:
    if (ctx->pc == 0x2931F0u) {
        ctx->pc = 0x2931F4u;
        goto label_2931f4;
    }
    ctx->pc = 0x2931ECu;
    {
        const bool branch_taken_0x2931ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2931ec) {
            ctx->pc = 0x293210u;
            goto label_293210;
        }
    }
    ctx->pc = 0x2931F4u;
label_2931f4:
    // 0x2931f4: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2931f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2931f8:
    // 0x2931f8: 0x7040f628  paddub      $fp, $v0, $zero
    ctx->pc = 0x2931f8u;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2931fc:
    // 0x2931fc: 0x10000004  b           . + 4 + (0x4 << 2)
label_293200:
    if (ctx->pc == 0x293200u) {
        ctx->pc = 0x293204u;
        goto label_293204;
    }
    ctx->pc = 0x2931FCu;
    {
        const bool branch_taken_0x2931fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2931fc) {
            ctx->pc = 0x293210u;
            goto label_293210;
        }
    }
    ctx->pc = 0x293204u;
label_293204:
    // 0x293204: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x293204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_293208:
    // 0x293208: 0x7040f628  paddub      $fp, $v0, $zero
    ctx->pc = 0x293208u;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_29320c:
    // 0x29320c: 0x0  nop
    ctx->pc = 0x29320cu;
    // NOP
label_293210:
    // 0x293210: 0x1e103c  dsll32      $v0, $fp, 0
    ctx->pc = 0x293210u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) << (32 + 0));
label_293214:
    // 0x293214: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x293214u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_293218:
    // 0x293218: 0x22438  dsll        $a0, $v0, 16
    ctx->pc = 0x293218u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << 16);
label_29321c:
    // 0x29321c: 0x24020808  addiu       $v0, $zero, 0x808
    ctx->pc = 0x29321cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
label_293220:
    // 0x293220: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x293220u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_293224:
    // 0x293224: 0x3c021c00  lui         $v0, 0x1C00
    ctx->pc = 0x293224u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7168 << 16));
label_293228:
    // 0x293228: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x293228u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_29322c:
    // 0x29322c: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x29322cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_293230:
    // 0x293230: 0x1318c0  sll         $v1, $s3, 3
    ctx->pc = 0x293230u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
label_293234:
    // 0x293234: 0x731023  subu        $v0, $v1, $s3
    ctx->pc = 0x293234u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_293238:
    // 0x293238: 0x24420005  addiu       $v0, $v0, 0x5
    ctx->pc = 0x293238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
label_29323c:
    // 0x29323c: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x29323cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
label_293240:
    // 0x293240: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x293240u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
label_293244:
    // 0x293244: 0x61a38  dsll        $v1, $a2, 8
    ctx->pc = 0x293244u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << 8);
label_293248:
    // 0x293248: 0x832825  or          $a1, $a0, $v1
    ctx->pc = 0x293248u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_29324c:
    // 0x29324c: 0x34a40002  ori         $a0, $a1, 0x2
    ctx->pc = 0x29324cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2);
label_293250:
    // 0x293250: 0x3c06003b  lui         $a2, 0x3B
    ctx->pc = 0x293250u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)59 << 16));
label_293254:
    // 0x293254: 0x24c51778  addiu       $a1, $a2, 0x1778
    ctx->pc = 0x293254u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 6008));
label_293258:
    // 0x293258: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x293258u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_29325c:
    // 0x29325c: 0x24661780  addiu       $a2, $v1, 0x1780
    ctx->pc = 0x29325cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 6016));
label_293260:
    // 0x293260: 0x72603e28  paddub      $a3, $s3, $zero
    ctx->pc = 0x293260u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
label_293264:
    // 0x293264: 0xc059b14  jal         func_166C50
label_293268:
    if (ctx->pc == 0x293268u) {
        ctx->pc = 0x29326Cu;
        goto label_29326c;
    }
    ctx->pc = 0x293264u;
    SET_GPR_U32(ctx, 31, 0x29326Cu);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x293264u, 0x29326Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29326Cu;
label_29326c:
    // 0x29326c: 0x1e383c  dsll32      $a3, $fp, 0
    ctx->pc = 0x29326cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 30) << (32 + 0));
label_293270:
    // 0x293270: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x293270u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
label_293274:
    // 0x293274: 0x71c38  dsll        $v1, $a3, 16
    ctx->pc = 0x293274u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << 16);
label_293278:
    // 0x293278: 0x24040808  addiu       $a0, $zero, 0x808
    ctx->pc = 0x293278u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
label_29327c:
    // 0x29327c: 0x4283c  dsll32      $a1, $a0, 0
    ctx->pc = 0x29327cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
label_293280:
    // 0x293280: 0x3c041d00  lui         $a0, 0x1D00
    ctx->pc = 0x293280u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)7424 << 16));
label_293284:
    // 0x293284: 0x852825  or          $a1, $a0, $a1
    ctx->pc = 0x293284u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_293288:
    // 0x293288: 0x652025  or          $a0, $v1, $a1
    ctx->pc = 0x293288u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
label_29328c:
    // 0x29328c: 0x1318c0  sll         $v1, $s3, 3
    ctx->pc = 0x29328cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
label_293290:
    // 0x293290: 0x733823  subu        $a3, $v1, $s3
    ctx->pc = 0x293290u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_293294:
    // 0x293294: 0x24e20005  addiu       $v0, $a3, 0x5
    ctx->pc = 0x293294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 5));
label_293298:
    // 0x293298: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x293298u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_29329c:
    // 0x29329c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x29329cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_2932a0:
    // 0x2932a0: 0x23a38  dsll        $a3, $v0, 8
    ctx->pc = 0x2932a0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << 8);
label_2932a4:
    // 0x2932a4: 0x872025  or          $a0, $a0, $a3
    ctx->pc = 0x2932a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 7));
label_2932a8:
    // 0x2932a8: 0x34840002  ori         $a0, $a0, 0x2
    ctx->pc = 0x2932a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2);
label_2932ac:
    // 0x2932ac: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2932acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_2932b0:
    // 0x2932b0: 0x24451778  addiu       $a1, $v0, 0x1778
    ctx->pc = 0x2932b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 6008));
label_2932b4:
    // 0x2932b4: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2932b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_2932b8:
    // 0x2932b8: 0x24461780  addiu       $a2, $v0, 0x1780
    ctx->pc = 0x2932b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 6016));
label_2932bc:
    // 0x2932bc: 0x72603e28  paddub      $a3, $s3, $zero
    ctx->pc = 0x2932bcu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
label_2932c0:
    // 0x2932c0: 0xc059b14  jal         func_166C50
label_2932c4:
    if (ctx->pc == 0x2932C4u) {
        ctx->pc = 0x2932C8u;
        goto label_2932c8;
    }
    ctx->pc = 0x2932C0u;
    SET_GPR_U32(ctx, 31, 0x2932C8u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x2932C0u, 0x2932C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2932C8u;
label_2932c8:
    // 0x2932c8: 0x1e103c  dsll32      $v0, $fp, 0
    ctx->pc = 0x2932c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) << (32 + 0));
label_2932cc:
    // 0x2932cc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2932ccu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_2932d0:
    // 0x2932d0: 0x22c38  dsll        $a1, $v0, 16
    ctx->pc = 0x2932d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << 16);
label_2932d4:
    // 0x2932d4: 0x24030808  addiu       $v1, $zero, 0x808
    ctx->pc = 0x2932d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
label_2932d8:
    // 0x2932d8: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x2932d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
label_2932dc:
    // 0x2932dc: 0x3c031e00  lui         $v1, 0x1E00
    ctx->pc = 0x2932dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)7680 << 16));
label_2932e0:
    // 0x2932e0: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x2932e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_2932e4:
    // 0x2932e4: 0xa41825  or          $v1, $a1, $a0
    ctx->pc = 0x2932e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
label_2932e8:
    // 0x2932e8: 0x1320c0  sll         $a0, $s3, 3
    ctx->pc = 0x2932e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
label_2932ec:
    // 0x2932ec: 0x932023  subu        $a0, $a0, $s3
    ctx->pc = 0x2932ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
label_2932f0:
    // 0x2932f0: 0x24820005  addiu       $v0, $a0, 0x5
    ctx->pc = 0x2932f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 5));
label_2932f4:
    // 0x2932f4: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x2932f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
label_2932f8:
    // 0x2932f8: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x2932f8u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
label_2932fc:
    // 0x2932fc: 0x52238  dsll        $a0, $a1, 8
    ctx->pc = 0x2932fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) << 8);
label_293300:
    // 0x293300: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x293300u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_293304:
    // 0x293304: 0x34640002  ori         $a0, $v1, 0x2
    ctx->pc = 0x293304u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
label_293308:
    // 0x293308: 0x3c07003b  lui         $a3, 0x3B
    ctx->pc = 0x293308u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)59 << 16));
label_29330c:
    // 0x29330c: 0x24e51778  addiu       $a1, $a3, 0x1778
    ctx->pc = 0x29330cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 6008));
label_293310:
    // 0x293310: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x293310u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_293314:
    // 0x293314: 0x24661780  addiu       $a2, $v1, 0x1780
    ctx->pc = 0x293314u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 6016));
label_293318:
    // 0x293318: 0x72603e28  paddub      $a3, $s3, $zero
    ctx->pc = 0x293318u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
label_29331c:
    // 0x29331c: 0xc059b14  jal         func_166C50
label_293320:
    if (ctx->pc == 0x293320u) {
        ctx->pc = 0x293324u;
        goto label_293324;
    }
    ctx->pc = 0x29331Cu;
    SET_GPR_U32(ctx, 31, 0x293324u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x29331Cu, 0x293324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293324u;
label_293324:
    // 0x293324: 0x26640001  addiu       $a0, $s3, 0x1
    ctx->pc = 0x293324u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_293328:
    // 0x293328: 0x70809e28  paddub      $s3, $a0, $zero
    ctx->pc = 0x293328u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
label_29332c:
    // 0x29332c: 0x0  nop
    ctx->pc = 0x29332cu;
    // NOP
label_293330:
    // 0x293330: 0x2a630005  slti        $v1, $s3, 0x5
    ctx->pc = 0x293330u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)5) ? 1 : 0);
label_293334:
    // 0x293334: 0x1460ff99  bnez        $v1, . + 4 + (-0x67 << 2)
label_293338:
    if (ctx->pc == 0x293338u) {
        ctx->pc = 0x29333Cu;
        goto label_29333c;
    }
    ctx->pc = 0x293334u;
    {
        const bool branch_taken_0x293334 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x293334) {
            ctx->pc = 0x29319Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29319c;
        }
    }
    ctx->pc = 0x29333Cu;
label_29333c:
    // 0x29333c: 0x8e425dc4  lw          $v0, 0x5DC4($s2)
    ctx->pc = 0x29333cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24004)));
label_293340:
    // 0x293340: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x293340u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_293344:
    // 0x293344: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x293344u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_293348:
    // 0x293348: 0x24426790  addiu       $v0, $v0, 0x6790
    ctx->pc = 0x293348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26512));
label_29334c:
    // 0x29334c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x29334cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_293350:
    // 0x293350: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x293350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_293354:
    // 0x293354: 0x40f809  jalr        $v0
label_293358:
    if (ctx->pc == 0x293358u) {
        ctx->pc = 0x29335Cu;
        goto label_29335c;
    }
    ctx->pc = 0x293354u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x29335Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x293354u, 0x29335Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29335Cu;
label_29335c:
    // 0x29335c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x29335cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_293360:
    // 0x293360: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x293360u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_293364:
    // 0x293364: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x293364u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
label_293368:
    // 0x293368: 0x3442103f  ori         $v0, $v0, 0x103F
    ctx->pc = 0x293368u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4159);
label_29336c:
    // 0x29336c: 0xae820004  sw          $v0, 0x4($s4)
    ctx->pc = 0x29336cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
label_293370:
    // 0x293370: 0x26440004  addiu       $a0, $s2, 0x4
    ctx->pc = 0x293370u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_293374:
    // 0x293374: 0x72802e28  paddub      $a1, $s4, $zero
    ctx->pc = 0x293374u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
label_293378:
    // 0x293378: 0xc05dbd8  jal         func_176F60
label_29337c:
    if (ctx->pc == 0x29337Cu) {
        ctx->pc = 0x293380u;
        goto label_293380;
    }
    ctx->pc = 0x293378u;
    SET_GPR_U32(ctx, 31, 0x293380u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x293378u, 0x293380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293380u;
label_293380:
    // 0x293380: 0x26830010  addiu       $v1, $s4, 0x10
    ctx->pc = 0x293380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
label_293384:
    // 0x293384: 0x7060a628  paddub      $s4, $v1, $zero
    ctx->pc = 0x293384u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_293388:
    // 0x293388: 0x92425e04  lbu         $v0, 0x5E04($s2)
    ctx->pc = 0x293388u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 24068)));
label_29338c:
    // 0x29338c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x29338cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_293390:
    // 0x293390: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x293390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_293394:
    // 0x293394: 0x14620084  bne         $v1, $v0, . + 4 + (0x84 << 2)
label_293398:
    if (ctx->pc == 0x293398u) {
        ctx->pc = 0x29339Cu;
        goto label_29339c;
    }
    ctx->pc = 0x293394u;
    {
        const bool branch_taken_0x293394 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x293394) {
            ctx->pc = 0x2935A8u;
            goto label_2935a8;
        }
    }
    ctx->pc = 0x29339Cu;
label_29339c:
    // 0x29339c: 0xc64c5e00  lwc1        $f12, 0x5E00($s2)
    ctx->pc = 0x29339cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2933a0:
    // 0x2933a0: 0xc047fe2  jal         func_11FF88
label_2933a4:
    if (ctx->pc == 0x2933A4u) {
        ctx->pc = 0x2933A8u;
        goto label_2933a8;
    }
    ctx->pc = 0x2933A0u;
    SET_GPR_U32(ctx, 31, 0x2933A8u);
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x2933A0u, 0x2933A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2933A8u;
label_2933a8:
    // 0x2933a8: 0x7fa20110  sq          $v0, 0x110($sp)
    ctx->pc = 0x2933a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 2));
label_2933ac:
    // 0x2933ac: 0x8fa40120  lw          $a0, 0x120($sp)
    ctx->pc = 0x2933acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_2933b0:
    // 0x2933b0: 0xc047c4e  jal         func_11F138
label_2933b4:
    if (ctx->pc == 0x2933B4u) {
        ctx->pc = 0x2933B8u;
        goto label_2933b8;
    }
    ctx->pc = 0x2933B0u;
    SET_GPR_U32(ctx, 31, 0x2933B8u);
    ctx->pc = 0x11F138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F138u, 0x2933B0u, 0x2933B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2933B8u;
label_2933b8:
    // 0x2933b8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2933b8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2933bc:
    // 0x2933bc: 0x7ba50110  lq          $a1, 0x110($sp)
    ctx->pc = 0x2933bcu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_2933c0:
    // 0x2933c0: 0xc047af0  jal         func_11EBC0
label_2933c4:
    if (ctx->pc == 0x2933C4u) {
        ctx->pc = 0x2933C8u;
        goto label_2933c8;
    }
    ctx->pc = 0x2933C0u;
    SET_GPR_U32(ctx, 31, 0x2933C8u);
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x2933C0u, 0x2933C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2933C8u;
label_2933c8:
    // 0x2933c8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2933c8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2933cc:
    // 0x2933cc: 0xc047c7c  jal         func_11F1F0
label_2933d0:
    if (ctx->pc == 0x2933D0u) {
        ctx->pc = 0x2933D4u;
        goto label_2933d4;
    }
    ctx->pc = 0x2933CCu;
    SET_GPR_U32(ctx, 31, 0x2933D4u);
    ctx->pc = 0x11F1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F1F0u, 0x2933CCu, 0x2933D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2933D4u;
label_2933d4:
    // 0x2933d4: 0xafa20120  sw          $v0, 0x120($sp)
    ctx->pc = 0x2933d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 2));
label_2933d8:
    // 0x2933d8: 0xc64c5e00  lwc1        $f12, 0x5E00($s2)
    ctx->pc = 0x2933d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2933dc:
    // 0x2933dc: 0xc047fe2  jal         func_11FF88
label_2933e0:
    if (ctx->pc == 0x2933E0u) {
        ctx->pc = 0x2933E4u;
        goto label_2933e4;
    }
    ctx->pc = 0x2933DCu;
    SET_GPR_U32(ctx, 31, 0x2933E4u);
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x2933DCu, 0x2933E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2933E4u;
label_2933e4:
    // 0x2933e4: 0x7fa20100  sq          $v0, 0x100($sp)
    ctx->pc = 0x2933e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 2));
label_2933e8:
    // 0x2933e8: 0x8fa40124  lw          $a0, 0x124($sp)
    ctx->pc = 0x2933e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
label_2933ec:
    // 0x2933ec: 0xc047c4e  jal         func_11F138
label_2933f0:
    if (ctx->pc == 0x2933F0u) {
        ctx->pc = 0x2933F4u;
        goto label_2933f4;
    }
    ctx->pc = 0x2933ECu;
    SET_GPR_U32(ctx, 31, 0x2933F4u);
    ctx->pc = 0x11F138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F138u, 0x2933ECu, 0x2933F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2933F4u;
label_2933f4:
    // 0x2933f4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2933f4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2933f8:
    // 0x2933f8: 0x7ba50100  lq          $a1, 0x100($sp)
    ctx->pc = 0x2933f8u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_2933fc:
    // 0x2933fc: 0xc047af0  jal         func_11EBC0
label_293400:
    if (ctx->pc == 0x293400u) {
        ctx->pc = 0x293404u;
        goto label_293404;
    }
    ctx->pc = 0x2933FCu;
    SET_GPR_U32(ctx, 31, 0x293404u);
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x2933FCu, 0x293404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293404u;
label_293404:
    // 0x293404: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x293404u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_293408:
    // 0x293408: 0xc047c7c  jal         func_11F1F0
label_29340c:
    if (ctx->pc == 0x29340Cu) {
        ctx->pc = 0x293410u;
        goto label_293410;
    }
    ctx->pc = 0x293408u;
    SET_GPR_U32(ctx, 31, 0x293410u);
    ctx->pc = 0x11F1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F1F0u, 0x293408u, 0x293410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293410u;
label_293410:
    // 0x293410: 0xafa20124  sw          $v0, 0x124($sp)
    ctx->pc = 0x293410u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 2));
label_293414:
    // 0x293414: 0xc64c5e00  lwc1        $f12, 0x5E00($s2)
    ctx->pc = 0x293414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_293418:
    // 0x293418: 0xc047fe2  jal         func_11FF88
label_29341c:
    if (ctx->pc == 0x29341Cu) {
        ctx->pc = 0x293420u;
        goto label_293420;
    }
    ctx->pc = 0x293418u;
    SET_GPR_U32(ctx, 31, 0x293420u);
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x293418u, 0x293420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293420u;
label_293420:
    // 0x293420: 0x7fa200f0  sq          $v0, 0xF0($sp)
    ctx->pc = 0x293420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
label_293424:
    // 0x293424: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x293424u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
label_293428:
    // 0x293428: 0xc047c4e  jal         func_11F138
label_29342c:
    if (ctx->pc == 0x29342Cu) {
        ctx->pc = 0x293430u;
        goto label_293430;
    }
    ctx->pc = 0x293428u;
    SET_GPR_U32(ctx, 31, 0x293430u);
    ctx->pc = 0x11F138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F138u, 0x293428u, 0x293430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293430u;
label_293430:
    // 0x293430: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x293430u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_293434:
    // 0x293434: 0x7ba500f0  lq          $a1, 0xF0($sp)
    ctx->pc = 0x293434u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_293438:
    // 0x293438: 0xc047af0  jal         func_11EBC0
label_29343c:
    if (ctx->pc == 0x29343Cu) {
        ctx->pc = 0x293440u;
        goto label_293440;
    }
    ctx->pc = 0x293438u;
    SET_GPR_U32(ctx, 31, 0x293440u);
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x293438u, 0x293440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293440u;
label_293440:
    // 0x293440: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x293440u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_293444:
    // 0x293444: 0xc047c7c  jal         func_11F1F0
label_293448:
    if (ctx->pc == 0x293448u) {
        ctx->pc = 0x29344Cu;
        goto label_29344c;
    }
    ctx->pc = 0x293444u;
    SET_GPR_U32(ctx, 31, 0x29344Cu);
    ctx->pc = 0x11F1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F1F0u, 0x293444u, 0x29344Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29344Cu;
label_29344c:
    // 0x29344c: 0xafa20128  sw          $v0, 0x128($sp)
    ctx->pc = 0x29344cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 2));
label_293450:
    // 0x293450: 0xc64c5e00  lwc1        $f12, 0x5E00($s2)
    ctx->pc = 0x293450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_293454:
    // 0x293454: 0xc047fe2  jal         func_11FF88
label_293458:
    if (ctx->pc == 0x293458u) {
        ctx->pc = 0x29345Cu;
        goto label_29345c;
    }
    ctx->pc = 0x293454u;
    SET_GPR_U32(ctx, 31, 0x29345Cu);
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x293454u, 0x29345Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29345Cu;
label_29345c:
    // 0x29345c: 0x7fa200e0  sq          $v0, 0xE0($sp)
    ctx->pc = 0x29345cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
label_293460:
    // 0x293460: 0x8fa4012c  lw          $a0, 0x12C($sp)
    ctx->pc = 0x293460u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
label_293464:
    // 0x293464: 0xc047c4e  jal         func_11F138
label_293468:
    if (ctx->pc == 0x293468u) {
        ctx->pc = 0x29346Cu;
        goto label_29346c;
    }
    ctx->pc = 0x293464u;
    SET_GPR_U32(ctx, 31, 0x29346Cu);
    ctx->pc = 0x11F138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F138u, 0x293464u, 0x29346Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29346Cu;
label_29346c:
    // 0x29346c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x29346cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_293470:
    // 0x293470: 0x7ba500e0  lq          $a1, 0xE0($sp)
    ctx->pc = 0x293470u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_293474:
    // 0x293474: 0xc047af0  jal         func_11EBC0
label_293478:
    if (ctx->pc == 0x293478u) {
        ctx->pc = 0x29347Cu;
        goto label_29347c;
    }
    ctx->pc = 0x293474u;
    SET_GPR_U32(ctx, 31, 0x29347Cu);
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x293474u, 0x29347Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29347Cu;
label_29347c:
    // 0x29347c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x29347cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_293480:
    // 0x293480: 0xc047c7c  jal         func_11F1F0
label_293484:
    if (ctx->pc == 0x293484u) {
        ctx->pc = 0x293488u;
        goto label_293488;
    }
    ctx->pc = 0x293480u;
    SET_GPR_U32(ctx, 31, 0x293488u);
    ctx->pc = 0x11F1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F1F0u, 0x293480u, 0x293488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293488u;
label_293488:
    // 0x293488: 0xafa2012c  sw          $v0, 0x12C($sp)
    ctx->pc = 0x293488u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 2));
label_29348c:
    // 0x29348c: 0xc64c5e00  lwc1        $f12, 0x5E00($s2)
    ctx->pc = 0x29348cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_293490:
    // 0x293490: 0xc047fe2  jal         func_11FF88
label_293494:
    if (ctx->pc == 0x293494u) {
        ctx->pc = 0x293498u;
        goto label_293498;
    }
    ctx->pc = 0x293490u;
    SET_GPR_U32(ctx, 31, 0x293498u);
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x293490u, 0x293498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293498u;
label_293498:
    // 0x293498: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x293498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
label_29349c:
    // 0x29349c: 0x8fa40130  lw          $a0, 0x130($sp)
    ctx->pc = 0x29349cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_2934a0:
    // 0x2934a0: 0xc047c4e  jal         func_11F138
label_2934a4:
    if (ctx->pc == 0x2934A4u) {
        ctx->pc = 0x2934A8u;
        goto label_2934a8;
    }
    ctx->pc = 0x2934A0u;
    SET_GPR_U32(ctx, 31, 0x2934A8u);
    ctx->pc = 0x11F138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F138u, 0x2934A0u, 0x2934A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2934A8u;
label_2934a8:
    // 0x2934a8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2934a8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2934ac:
    // 0x2934ac: 0x7ba500d0  lq          $a1, 0xD0($sp)
    ctx->pc = 0x2934acu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_2934b0:
    // 0x2934b0: 0xc047af0  jal         func_11EBC0
label_2934b4:
    if (ctx->pc == 0x2934B4u) {
        ctx->pc = 0x2934B8u;
        goto label_2934b8;
    }
    ctx->pc = 0x2934B0u;
    SET_GPR_U32(ctx, 31, 0x2934B8u);
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x2934B0u, 0x2934B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2934B8u;
label_2934b8:
    // 0x2934b8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2934b8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2934bc:
    // 0x2934bc: 0xc047c7c  jal         func_11F1F0
label_2934c0:
    if (ctx->pc == 0x2934C0u) {
        ctx->pc = 0x2934C4u;
        goto label_2934c4;
    }
    ctx->pc = 0x2934BCu;
    SET_GPR_U32(ctx, 31, 0x2934C4u);
    ctx->pc = 0x11F1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F1F0u, 0x2934BCu, 0x2934C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2934C4u;
label_2934c4:
    // 0x2934c4: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x2934c4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2934c8:
    // 0x2934c8: 0xafa60130  sw          $a2, 0x130($sp)
    ctx->pc = 0x2934c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 6));
label_2934cc:
    // 0x2934cc: 0xc64c5e00  lwc1        $f12, 0x5E00($s2)
    ctx->pc = 0x2934ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2934d0:
    // 0x2934d0: 0xc047fe2  jal         func_11FF88
label_2934d4:
    if (ctx->pc == 0x2934D4u) {
        ctx->pc = 0x2934D8u;
        goto label_2934d8;
    }
    ctx->pc = 0x2934D0u;
    SET_GPR_U32(ctx, 31, 0x2934D8u);
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x2934D0u, 0x2934D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2934D8u;
label_2934d8:
    // 0x2934d8: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x2934d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
label_2934dc:
    // 0x2934dc: 0x8fa40134  lw          $a0, 0x134($sp)
    ctx->pc = 0x2934dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
label_2934e0:
    // 0x2934e0: 0xc047c4e  jal         func_11F138
label_2934e4:
    if (ctx->pc == 0x2934E4u) {
        ctx->pc = 0x2934E8u;
        goto label_2934e8;
    }
    ctx->pc = 0x2934E0u;
    SET_GPR_U32(ctx, 31, 0x2934E8u);
    ctx->pc = 0x11F138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F138u, 0x2934E0u, 0x2934E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2934E8u;
label_2934e8:
    // 0x2934e8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2934e8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2934ec:
    // 0x2934ec: 0x7ba500c0  lq          $a1, 0xC0($sp)
    ctx->pc = 0x2934ecu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_2934f0:
    // 0x2934f0: 0xc047af0  jal         func_11EBC0
label_2934f4:
    if (ctx->pc == 0x2934F4u) {
        ctx->pc = 0x2934F8u;
        goto label_2934f8;
    }
    ctx->pc = 0x2934F0u;
    SET_GPR_U32(ctx, 31, 0x2934F8u);
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x2934F0u, 0x2934F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2934F8u;
label_2934f8:
    // 0x2934f8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2934f8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2934fc:
    // 0x2934fc: 0xc047c7c  jal         func_11F1F0
label_293500:
    if (ctx->pc == 0x293500u) {
        ctx->pc = 0x293504u;
        goto label_293504;
    }
    ctx->pc = 0x2934FCu;
    SET_GPR_U32(ctx, 31, 0x293504u);
    ctx->pc = 0x11F1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F1F0u, 0x2934FCu, 0x293504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293504u;
label_293504:
    // 0x293504: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x293504u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_293508:
    // 0x293508: 0xafa60134  sw          $a2, 0x134($sp)
    ctx->pc = 0x293508u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 308), GPR_U32(ctx, 6));
label_29350c:
    // 0x29350c: 0xc64c5e00  lwc1        $f12, 0x5E00($s2)
    ctx->pc = 0x29350cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_293510:
    // 0x293510: 0xc047fe2  jal         func_11FF88
label_293514:
    if (ctx->pc == 0x293514u) {
        ctx->pc = 0x293518u;
        goto label_293518;
    }
    ctx->pc = 0x293510u;
    SET_GPR_U32(ctx, 31, 0x293518u);
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x293510u, 0x293518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293518u;
label_293518:
    // 0x293518: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x293518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_29351c:
    // 0x29351c: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x29351cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_293520:
    // 0x293520: 0xc047c4e  jal         func_11F138
label_293524:
    if (ctx->pc == 0x293524u) {
        ctx->pc = 0x293528u;
        goto label_293528;
    }
    ctx->pc = 0x293520u;
    SET_GPR_U32(ctx, 31, 0x293528u);
    ctx->pc = 0x11F138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F138u, 0x293520u, 0x293528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293528u;
label_293528:
    // 0x293528: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x293528u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_29352c:
    // 0x29352c: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x29352cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_293530:
    // 0x293530: 0x7ba500b0  lq          $a1, 0xB0($sp)
    ctx->pc = 0x293530u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_293534:
    // 0x293534: 0xc047af0  jal         func_11EBC0
label_293538:
    if (ctx->pc == 0x293538u) {
        ctx->pc = 0x29353Cu;
        goto label_29353c;
    }
    ctx->pc = 0x293534u;
    SET_GPR_U32(ctx, 31, 0x29353Cu);
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x293534u, 0x29353Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29353Cu;
label_29353c:
    // 0x29353c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x29353cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_293540:
    // 0x293540: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x293540u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_293544:
    // 0x293544: 0xc047c7c  jal         func_11F1F0
label_293548:
    if (ctx->pc == 0x293548u) {
        ctx->pc = 0x29354Cu;
        goto label_29354c;
    }
    ctx->pc = 0x293544u;
    SET_GPR_U32(ctx, 31, 0x29354Cu);
    ctx->pc = 0x11F1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F1F0u, 0x293544u, 0x29354Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29354Cu;
label_29354c:
    // 0x29354c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x29354cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_293550:
    // 0x293550: 0xafa30138  sw          $v1, 0x138($sp)
    ctx->pc = 0x293550u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 3));
label_293554:
    // 0x293554: 0xc64c5e00  lwc1        $f12, 0x5E00($s2)
    ctx->pc = 0x293554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_293558:
    // 0x293558: 0xc047fe2  jal         func_11FF88
label_29355c:
    if (ctx->pc == 0x29355Cu) {
        ctx->pc = 0x293560u;
        goto label_293560;
    }
    ctx->pc = 0x293558u;
    SET_GPR_U32(ctx, 31, 0x293560u);
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x293558u, 0x293560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293560u;
label_293560:
    // 0x293560: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x293560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
label_293564:
    // 0x293564: 0x8fa7013c  lw          $a3, 0x13C($sp)
    ctx->pc = 0x293564u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
label_293568:
    // 0x293568: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x293568u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
label_29356c:
    // 0x29356c: 0xc047c4e  jal         func_11F138
label_293570:
    if (ctx->pc == 0x293570u) {
        ctx->pc = 0x293574u;
        goto label_293574;
    }
    ctx->pc = 0x29356Cu;
    SET_GPR_U32(ctx, 31, 0x293574u);
    ctx->pc = 0x11F138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F138u, 0x29356Cu, 0x293574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293574u;
label_293574:
    // 0x293574: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x293574u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_293578:
    // 0x293578: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x293578u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_29357c:
    // 0x29357c: 0x7ba500a0  lq          $a1, 0xA0($sp)
    ctx->pc = 0x29357cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_293580:
    // 0x293580: 0xc047af0  jal         func_11EBC0
label_293584:
    if (ctx->pc == 0x293584u) {
        ctx->pc = 0x293588u;
        goto label_293588;
    }
    ctx->pc = 0x293580u;
    SET_GPR_U32(ctx, 31, 0x293588u);
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x293580u, 0x293588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293588u;
label_293588:
    // 0x293588: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x293588u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_29358c:
    // 0x29358c: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x29358cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_293590:
    // 0x293590: 0xc047c7c  jal         func_11F1F0
label_293594:
    if (ctx->pc == 0x293594u) {
        ctx->pc = 0x293598u;
        goto label_293598;
    }
    ctx->pc = 0x293590u;
    SET_GPR_U32(ctx, 31, 0x293598u);
    ctx->pc = 0x11F1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F1F0u, 0x293590u, 0x293598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293598u;
label_293598:
    // 0x293598: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x293598u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_29359c:
    // 0x29359c: 0xafa3013c  sw          $v1, 0x13C($sp)
    ctx->pc = 0x29359cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 316), GPR_U32(ctx, 3));
label_2935a0:
    // 0x2935a0: 0x10000086  b           . + 4 + (0x86 << 2)
label_2935a4:
    if (ctx->pc == 0x2935A4u) {
        ctx->pc = 0x2935A8u;
        goto label_2935a8;
    }
    ctx->pc = 0x2935A0u;
    {
        const bool branch_taken_0x2935a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2935a0) {
            ctx->pc = 0x2937BCu;
            goto label_2937bc;
        }
    }
    ctx->pc = 0x2935A8u;
label_2935a8:
    // 0x2935a8: 0x92435e04  lbu         $v1, 0x5E04($s2)
    ctx->pc = 0x2935a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 24068)));
label_2935ac:
    // 0x2935ac: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2935acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_2935b0:
    // 0x2935b0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2935b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2935b4:
    // 0x2935b4: 0x14620081  bne         $v1, $v0, . + 4 + (0x81 << 2)
label_2935b8:
    if (ctx->pc == 0x2935B8u) {
        ctx->pc = 0x2935BCu;
        goto label_2935bc;
    }
    ctx->pc = 0x2935B4u;
    {
        const bool branch_taken_0x2935b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2935b4) {
            ctx->pc = 0x2937BCu;
            goto label_2937bc;
        }
    }
    ctx->pc = 0x2935BCu;
label_2935bc:
    // 0x2935bc: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2935bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_2935c0:
    // 0x2935c0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2935c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2935c4:
    // 0x2935c4: 0xc6405e00  lwc1        $f0, 0x5E00($s2)
    ctx->pc = 0x2935c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2935c8:
    // 0x2935c8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2935c8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2935cc:
    // 0x2935cc: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2935ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_2935d0:
    // 0x2935d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2935d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2935d4:
    // 0x2935d4: 0x0  nop
    ctx->pc = 0x2935d4u;
    // NOP
label_2935d8:
    // 0x2935d8: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2935d8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2935dc:
    // 0x2935dc: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x2935dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_2935e0:
    // 0x2935e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2935e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2935e4:
    // 0x2935e4: 0x0  nop
    ctx->pc = 0x2935e4u;
    // NOP
label_2935e8:
    // 0x2935e8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2935e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2935ec:
    // 0x2935ec: 0x46010302  mul.s       $f12, $f0, $f1
    ctx->pc = 0x2935ecu;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2935f0:
    // 0x2935f0: 0xc047f7e  jal         func_11FDF8
label_2935f4:
    if (ctx->pc == 0x2935F4u) {
        ctx->pc = 0x2935F8u;
        goto label_2935f8;
    }
    ctx->pc = 0x2935F0u;
    SET_GPR_U32(ctx, 31, 0x2935F8u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x2935F0u, 0x2935F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2935F8u;
label_2935f8:
    // 0x2935f8: 0xafa20120  sw          $v0, 0x120($sp)
    ctx->pc = 0x2935f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 2));
label_2935fc:
    // 0x2935fc: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2935fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_293600:
    // 0x293600: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x293600u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_293604:
    // 0x293604: 0xc6405e00  lwc1        $f0, 0x5E00($s2)
    ctx->pc = 0x293604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_293608:
    // 0x293608: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x293608u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_29360c:
    // 0x29360c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x29360cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_293610:
    // 0x293610: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x293610u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_293614:
    // 0x293614: 0x0  nop
    ctx->pc = 0x293614u;
    // NOP
label_293618:
    // 0x293618: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x293618u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_29361c:
    // 0x29361c: 0x8fa30124  lw          $v1, 0x124($sp)
    ctx->pc = 0x29361cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
label_293620:
    // 0x293620: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x293620u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_293624:
    // 0x293624: 0x0  nop
    ctx->pc = 0x293624u;
    // NOP
label_293628:
    // 0x293628: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x293628u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_29362c:
    // 0x29362c: 0x46010302  mul.s       $f12, $f0, $f1
    ctx->pc = 0x29362cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_293630:
    // 0x293630: 0xc047f7e  jal         func_11FDF8
label_293634:
    if (ctx->pc == 0x293634u) {
        ctx->pc = 0x293638u;
        goto label_293638;
    }
    ctx->pc = 0x293630u;
    SET_GPR_U32(ctx, 31, 0x293638u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x293630u, 0x293638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293638u;
label_293638:
    // 0x293638: 0xafa20124  sw          $v0, 0x124($sp)
    ctx->pc = 0x293638u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 2));
label_29363c:
    // 0x29363c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x29363cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_293640:
    // 0x293640: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x293640u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_293644:
    // 0x293644: 0xc6405e00  lwc1        $f0, 0x5E00($s2)
    ctx->pc = 0x293644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_293648:
    // 0x293648: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x293648u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_29364c:
    // 0x29364c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x29364cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_293650:
    // 0x293650: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x293650u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_293654:
    // 0x293654: 0x0  nop
    ctx->pc = 0x293654u;
    // NOP
label_293658:
    // 0x293658: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x293658u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_29365c:
    // 0x29365c: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x29365cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
label_293660:
    // 0x293660: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x293660u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_293664:
    // 0x293664: 0x0  nop
    ctx->pc = 0x293664u;
    // NOP
label_293668:
    // 0x293668: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x293668u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_29366c:
    // 0x29366c: 0x46010302  mul.s       $f12, $f0, $f1
    ctx->pc = 0x29366cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_293670:
    // 0x293670: 0xc047f7e  jal         func_11FDF8
label_293674:
    if (ctx->pc == 0x293674u) {
        ctx->pc = 0x293678u;
        goto label_293678;
    }
    ctx->pc = 0x293670u;
    SET_GPR_U32(ctx, 31, 0x293678u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x293670u, 0x293678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293678u;
label_293678:
    // 0x293678: 0xafa20128  sw          $v0, 0x128($sp)
    ctx->pc = 0x293678u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 2));
label_29367c:
    // 0x29367c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x29367cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_293680:
    // 0x293680: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x293680u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_293684:
    // 0x293684: 0xc6405e00  lwc1        $f0, 0x5E00($s2)
    ctx->pc = 0x293684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_293688:
    // 0x293688: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x293688u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_29368c:
    // 0x29368c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x29368cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_293690:
    // 0x293690: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x293690u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_293694:
    // 0x293694: 0x0  nop
    ctx->pc = 0x293694u;
    // NOP
label_293698:
    // 0x293698: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x293698u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_29369c:
    // 0x29369c: 0x8fa3012c  lw          $v1, 0x12C($sp)
    ctx->pc = 0x29369cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
label_2936a0:
    // 0x2936a0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2936a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2936a4:
    // 0x2936a4: 0x0  nop
    ctx->pc = 0x2936a4u;
    // NOP
label_2936a8:
    // 0x2936a8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2936a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2936ac:
    // 0x2936ac: 0x46010302  mul.s       $f12, $f0, $f1
    ctx->pc = 0x2936acu;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2936b0:
    // 0x2936b0: 0xc047f7e  jal         func_11FDF8
label_2936b4:
    if (ctx->pc == 0x2936B4u) {
        ctx->pc = 0x2936B8u;
        goto label_2936b8;
    }
    ctx->pc = 0x2936B0u;
    SET_GPR_U32(ctx, 31, 0x2936B8u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x2936B0u, 0x2936B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2936B8u;
label_2936b8:
    // 0x2936b8: 0xafa2012c  sw          $v0, 0x12C($sp)
    ctx->pc = 0x2936b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 2));
label_2936bc:
    // 0x2936bc: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2936bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_2936c0:
    // 0x2936c0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2936c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2936c4:
    // 0x2936c4: 0xc6405e00  lwc1        $f0, 0x5E00($s2)
    ctx->pc = 0x2936c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2936c8:
    // 0x2936c8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2936c8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2936cc:
    // 0x2936cc: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2936ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_2936d0:
    // 0x2936d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2936d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2936d4:
    // 0x2936d4: 0x0  nop
    ctx->pc = 0x2936d4u;
    // NOP
label_2936d8:
    // 0x2936d8: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2936d8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2936dc:
    // 0x2936dc: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x2936dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_2936e0:
    // 0x2936e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2936e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2936e4:
    // 0x2936e4: 0x0  nop
    ctx->pc = 0x2936e4u;
    // NOP
label_2936e8:
    // 0x2936e8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2936e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2936ec:
    // 0x2936ec: 0x46010302  mul.s       $f12, $f0, $f1
    ctx->pc = 0x2936ecu;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2936f0:
    // 0x2936f0: 0xc047f7e  jal         func_11FDF8
label_2936f4:
    if (ctx->pc == 0x2936F4u) {
        ctx->pc = 0x2936F8u;
        goto label_2936f8;
    }
    ctx->pc = 0x2936F0u;
    SET_GPR_U32(ctx, 31, 0x2936F8u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x2936F0u, 0x2936F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2936F8u;
label_2936f8:
    // 0x2936f8: 0xafa20130  sw          $v0, 0x130($sp)
    ctx->pc = 0x2936f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 2));
label_2936fc:
    // 0x2936fc: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2936fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_293700:
    // 0x293700: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x293700u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_293704:
    // 0x293704: 0xc6405e00  lwc1        $f0, 0x5E00($s2)
    ctx->pc = 0x293704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_293708:
    // 0x293708: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x293708u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_29370c:
    // 0x29370c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x29370cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_293710:
    // 0x293710: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x293710u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_293714:
    // 0x293714: 0x0  nop
    ctx->pc = 0x293714u;
    // NOP
label_293718:
    // 0x293718: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x293718u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_29371c:
    // 0x29371c: 0x8fa20134  lw          $v0, 0x134($sp)
    ctx->pc = 0x29371cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
label_293720:
    // 0x293720: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x293720u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_293724:
    // 0x293724: 0x0  nop
    ctx->pc = 0x293724u;
    // NOP
label_293728:
    // 0x293728: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x293728u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_29372c:
    // 0x29372c: 0x46010302  mul.s       $f12, $f0, $f1
    ctx->pc = 0x29372cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_293730:
    // 0x293730: 0xc047f7e  jal         func_11FDF8
label_293734:
    if (ctx->pc == 0x293734u) {
        ctx->pc = 0x293738u;
        goto label_293738;
    }
    ctx->pc = 0x293730u;
    SET_GPR_U32(ctx, 31, 0x293738u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x293730u, 0x293738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293738u;
label_293738:
    // 0x293738: 0xafa20134  sw          $v0, 0x134($sp)
    ctx->pc = 0x293738u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 308), GPR_U32(ctx, 2));
label_29373c:
    // 0x29373c: 0x3c173f00  lui         $s7, 0x3F00
    ctx->pc = 0x29373cu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)16128 << 16));
label_293740:
    // 0x293740: 0x44970800  mtc1        $s7, $f1
    ctx->pc = 0x293740u;
    { uint32_t bits = GPR_U32(ctx, 23); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_293744:
    // 0x293744: 0xc6405e00  lwc1        $f0, 0x5E00($s2)
    ctx->pc = 0x293744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_293748:
    // 0x293748: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x293748u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_29374c:
    // 0x29374c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x29374cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_293750:
    // 0x293750: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x293750u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_293754:
    // 0x293754: 0x0  nop
    ctx->pc = 0x293754u;
    // NOP
label_293758:
    // 0x293758: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x293758u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_29375c:
    // 0x29375c: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x29375cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_293760:
    // 0x293760: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x293760u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_293764:
    // 0x293764: 0x0  nop
    ctx->pc = 0x293764u;
    // NOP
label_293768:
    // 0x293768: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x293768u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_29376c:
    // 0x29376c: 0x46010302  mul.s       $f12, $f0, $f1
    ctx->pc = 0x29376cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_293770:
    // 0x293770: 0xc047f7e  jal         func_11FDF8
label_293774:
    if (ctx->pc == 0x293774u) {
        ctx->pc = 0x293778u;
        goto label_293778;
    }
    ctx->pc = 0x293770u;
    SET_GPR_U32(ctx, 31, 0x293778u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x293770u, 0x293778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293778u;
label_293778:
    // 0x293778: 0xafa20138  sw          $v0, 0x138($sp)
    ctx->pc = 0x293778u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 2));
label_29377c:
    // 0x29377c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x29377cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_293780:
    // 0x293780: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x293780u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_293784:
    // 0x293784: 0xc6405e00  lwc1        $f0, 0x5E00($s2)
    ctx->pc = 0x293784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_293788:
    // 0x293788: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x293788u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_29378c:
    // 0x29378c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x29378cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_293790:
    // 0x293790: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x293790u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_293794:
    // 0x293794: 0x0  nop
    ctx->pc = 0x293794u;
    // NOP
label_293798:
    // 0x293798: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x293798u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_29379c:
    // 0x29379c: 0x8fa2013c  lw          $v0, 0x13C($sp)
    ctx->pc = 0x29379cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
label_2937a0:
    // 0x2937a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2937a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2937a4:
    // 0x2937a4: 0x0  nop
    ctx->pc = 0x2937a4u;
    // NOP
label_2937a8:
    // 0x2937a8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2937a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2937ac:
    // 0x2937ac: 0x46010302  mul.s       $f12, $f0, $f1
    ctx->pc = 0x2937acu;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2937b0:
    // 0x2937b0: 0xc047f7e  jal         func_11FDF8
label_2937b4:
    if (ctx->pc == 0x2937B4u) {
        ctx->pc = 0x2937B8u;
        goto label_2937b8;
    }
    ctx->pc = 0x2937B0u;
    SET_GPR_U32(ctx, 31, 0x2937B8u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x2937B0u, 0x2937B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2937B8u;
label_2937b8:
    // 0x2937b8: 0xafa2013c  sw          $v0, 0x13C($sp)
    ctx->pc = 0x2937b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 316), GPR_U32(ctx, 2));
label_2937bc:
    // 0x2937bc: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2937bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_2937c0:
    // 0x2937c0: 0x245166e8  addiu       $s1, $v0, 0x66E8
    ctx->pc = 0x2937c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 26344));
label_2937c4:
    // 0x2937c4: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2937c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_2937c8:
    // 0x2937c8: 0x24576810  addiu       $s7, $v0, 0x6810
    ctx->pc = 0x2937c8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 26640));
label_2937cc:
    // 0x2937cc: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x2937ccu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2937d0:
    // 0x2937d0: 0x1000013d  b           . + 4 + (0x13D << 2)
label_2937d4:
    if (ctx->pc == 0x2937D4u) {
        ctx->pc = 0x2937D8u;
        goto label_2937d8;
    }
    ctx->pc = 0x2937D0u;
    {
        const bool branch_taken_0x2937d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2937d0) {
            ctx->pc = 0x293CC8u;
            goto label_293cc8;
        }
    }
    ctx->pc = 0x2937D8u;
label_2937d8:
    // 0x2937d8: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x2937d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_2937dc:
    // 0x2937dc: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2937dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2937e0:
    // 0x2937e0: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x2937e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2937e4:
    // 0x2937e4: 0xafa20168  sw          $v0, 0x168($sp)
    ctx->pc = 0x2937e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 360), GPR_U32(ctx, 2));
label_2937e8:
    // 0x2937e8: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x2937e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_2937ec:
    // 0x2937ec: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x2937ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2937f0:
    // 0x2937f0: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x2937f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2937f4:
    // 0x2937f4: 0xafa2016c  sw          $v0, 0x16C($sp)
    ctx->pc = 0x2937f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 364), GPR_U32(ctx, 2));
label_2937f8:
    // 0x2937f8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2937f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_2937fc:
    // 0x2937fc: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2937fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_293800:
    // 0x293800: 0x3c026400  lui         $v0, 0x6400
    ctx->pc = 0x293800u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25600 << 16));
label_293804:
    // 0x293804: 0x34432b16  ori         $v1, $v0, 0x2B16
    ctx->pc = 0x293804u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)11030);
label_293808:
    // 0x293808: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x293808u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_29380c:
    // 0x29380c: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x29380cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_293810:
    // 0x293810: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x293810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_293814:
    // 0x293814: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x293814u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
label_293818:
    // 0x293818: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x293818u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_29381c:
    // 0x29381c: 0x8ee60000  lw          $a2, 0x0($s7)
    ctx->pc = 0x29381cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_293820:
    // 0x293820: 0x8fa30168  lw          $v1, 0x168($sp)
    ctx->pc = 0x293820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
label_293824:
    // 0x293824: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x293824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_293828:
    // 0x293828: 0x31043  sra         $v0, $v1, 1
    ctx->pc = 0x293828u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
label_29382c:
    // 0x29382c: 0xc2b023  subu        $s6, $a2, $v0
    ctx->pc = 0x29382cu;
    SET_GPR_S32(ctx, 22, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_293830:
    // 0x293830: 0x8ee60004  lw          $a2, 0x4($s7)
    ctx->pc = 0x293830u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
label_293834:
    // 0x293834: 0x8fa3016c  lw          $v1, 0x16C($sp)
    ctx->pc = 0x293834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 364)));
label_293838:
    // 0x293838: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x293838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_29383c:
    // 0x29383c: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x29383cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
label_293840:
    // 0x293840: 0x70601628  paddub      $v0, $v1, $zero
    ctx->pc = 0x293840u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_293844:
    // 0x293844: 0xc21023  subu        $v0, $a2, $v0
    ctx->pc = 0x293844u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_293848:
    // 0x293848: 0xafa2015c  sw          $v0, 0x15C($sp)
    ctx->pc = 0x293848u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 2));
label_29384c:
    // 0x29384c: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x29384cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
label_293850:
    // 0x293850: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x293850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
label_293854:
    // 0x293854: 0xafa20160  sw          $v0, 0x160($sp)
    ctx->pc = 0x293854u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 2));
label_293858:
    // 0x293858: 0x8fa2015c  lw          $v0, 0x15C($sp)
    ctx->pc = 0x293858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
label_29385c:
    // 0x29385c: 0x8fa3016c  lw          $v1, 0x16C($sp)
    ctx->pc = 0x29385cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 364)));
label_293860:
    // 0x293860: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x293860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_293864:
    // 0x293864: 0xafa20164  sw          $v0, 0x164($sp)
    ctx->pc = 0x293864u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 356), GPR_U32(ctx, 2));
label_293868:
    // 0x293868: 0x44960000  mtc1        $s6, $f0
    ctx->pc = 0x293868u;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_29386c:
    // 0x29386c: 0x0  nop
    ctx->pc = 0x29386cu;
    // NOP
label_293870:
    // 0x293870: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x293870u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_293874:
    // 0x293874: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x293874u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
label_293878:
    // 0x293878: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x293878u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_29387c:
    // 0x29387c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29387cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_293880:
    // 0x293880: 0x0  nop
    ctx->pc = 0x293880u;
    // NOP
label_293884:
    // 0x293884: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x293884u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_293888:
    // 0x293888: 0xc047f7e  jal         func_11FDF8
label_29388c:
    if (ctx->pc == 0x29388Cu) {
        ctx->pc = 0x293890u;
        goto label_293890;
    }
    ctx->pc = 0x293888u;
    SET_GPR_U32(ctx, 31, 0x293890u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x293888u, 0x293890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293890u;
label_293890:
    // 0x293890: 0x7040b628  paddub      $s6, $v0, $zero
    ctx->pc = 0x293890u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_293894:
    // 0x293894: 0x8fa30160  lw          $v1, 0x160($sp)
    ctx->pc = 0x293894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_293898:
    // 0x293898: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x293898u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_29389c:
    // 0x29389c: 0x0  nop
    ctx->pc = 0x29389cu;
    // NOP
label_2938a0:
    // 0x2938a0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2938a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_2938a4:
    // 0x2938a4: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x2938a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
label_2938a8:
    // 0x2938a8: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2938a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_2938ac:
    // 0x2938ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2938acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2938b0:
    // 0x2938b0: 0x0  nop
    ctx->pc = 0x2938b0u;
    // NOP
label_2938b4:
    // 0x2938b4: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x2938b4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2938b8:
    // 0x2938b8: 0xc047f7e  jal         func_11FDF8
label_2938bc:
    if (ctx->pc == 0x2938BCu) {
        ctx->pc = 0x2938C0u;
        goto label_2938c0;
    }
    ctx->pc = 0x2938B8u;
    SET_GPR_U32(ctx, 31, 0x2938C0u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x2938B8u, 0x2938C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2938C0u;
label_2938c0:
    // 0x2938c0: 0xafa20160  sw          $v0, 0x160($sp)
    ctx->pc = 0x2938c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 2));
label_2938c4:
    // 0x2938c4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2938c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2938c8:
    // 0x2938c8: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x2938c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_2938cc:
    // 0x2938cc: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x2938ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2938d0:
    // 0x2938d0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2938d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_2938d4:
    // 0x2938d4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x2938d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_2938d8:
    // 0x2938d8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2938d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2938dc:
    // 0x2938dc: 0x26020014  addiu       $v0, $s0, 0x14
    ctx->pc = 0x2938dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
label_2938e0:
    // 0x2938e0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2938e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_2938e4:
    // 0x2938e4: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x2938e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_2938e8:
    // 0x2938e8: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x2938e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_2938ec:
    // 0x2938ec: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x2938ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_2938f0:
    // 0x2938f0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2938f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_2938f4:
    // 0x2938f4: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x2938f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_2938f8:
    // 0x2938f8: 0x831025  or          $v0, $a0, $v1
    ctx->pc = 0x2938f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_2938fc:
    // 0x2938fc: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x2938fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_293900:
    // 0x293900: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x293900u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_293904:
    // 0x293904: 0x8e435dc0  lw          $v1, 0x5DC0($s2)
    ctx->pc = 0x293904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24000)));
label_293908:
    // 0x293908: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x293908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_29390c:
    // 0x29390c: 0x10620020  beq         $v1, $v0, . + 4 + (0x20 << 2)
label_293910:
    if (ctx->pc == 0x293910u) {
        ctx->pc = 0x293914u;
        goto label_293914;
    }
    ctx->pc = 0x29390Cu;
    {
        const bool branch_taken_0x29390c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x29390c) {
            ctx->pc = 0x293990u;
            goto label_293990;
        }
    }
    ctx->pc = 0x293914u;
label_293914:
    // 0x293914: 0x8e435dc4  lw          $v1, 0x5DC4($s2)
    ctx->pc = 0x293914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24004)));
label_293918:
    // 0x293918: 0x1663000f  bne         $s3, $v1, . + 4 + (0xF << 2)
label_29391c:
    if (ctx->pc == 0x29391Cu) {
        ctx->pc = 0x293920u;
        goto label_293920;
    }
    ctx->pc = 0x293918u;
    {
        const bool branch_taken_0x293918 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 3));
        if (branch_taken_0x293918) {
            ctx->pc = 0x293958u;
            goto label_293958;
        }
    }
    ctx->pc = 0x293920u;
label_293920:
    // 0x293920: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x293920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_293924:
    // 0x293924: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x293924u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_293928:
    // 0x293928: 0x8fa20134  lw          $v0, 0x134($sp)
    ctx->pc = 0x293928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
label_29392c:
    // 0x29392c: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x29392cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_293930:
    // 0x293930: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x293930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_293934:
    // 0x293934: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x293934u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_293938:
    // 0x293938: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x293938u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_29393c:
    // 0x29393c: 0x8fa2012c  lw          $v0, 0x12C($sp)
    ctx->pc = 0x29393cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
label_293940:
    // 0x293940: 0x22600  sll         $a0, $v0, 24
    ctx->pc = 0x293940u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
label_293944:
    // 0x293944: 0x831025  or          $v0, $a0, $v1
    ctx->pc = 0x293944u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_293948:
    // 0x293948: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x293948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_29394c:
    // 0x29394c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x29394cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_293950:
    // 0x293950: 0x1000005d  b           . + 4 + (0x5D << 2)
label_293954:
    if (ctx->pc == 0x293954u) {
        ctx->pc = 0x293958u;
        goto label_293958;
    }
    ctx->pc = 0x293950u;
    {
        const bool branch_taken_0x293950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x293950) {
            ctx->pc = 0x293AC8u;
            goto label_293ac8;
        }
    }
    ctx->pc = 0x293958u;
label_293958:
    // 0x293958: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x293958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
label_29395c:
    // 0x29395c: 0x22400  sll         $a0, $v0, 16
    ctx->pc = 0x29395cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_293960:
    // 0x293960: 0x8fa20124  lw          $v0, 0x124($sp)
    ctx->pc = 0x293960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
label_293964:
    // 0x293964: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x293964u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_293968:
    // 0x293968: 0x8fa30120  lw          $v1, 0x120($sp)
    ctx->pc = 0x293968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_29396c:
    // 0x29396c: 0x62f025  or          $fp, $v1, $v0
    ctx->pc = 0x29396cu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_293970:
    // 0x293970: 0x9ef025  or          $fp, $a0, $fp
    ctx->pc = 0x293970u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 4) | GPR_U64(ctx, 30));
label_293974:
    // 0x293974: 0x8fa2012c  lw          $v0, 0x12C($sp)
    ctx->pc = 0x293974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
label_293978:
    // 0x293978: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x293978u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
label_29397c:
    // 0x29397c: 0x5e1025  or          $v0, $v0, $fp
    ctx->pc = 0x29397cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 30));
label_293980:
    // 0x293980: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x293980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_293984:
    // 0x293984: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x293984u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_293988:
    // 0x293988: 0x1000004f  b           . + 4 + (0x4F << 2)
label_29398c:
    if (ctx->pc == 0x29398Cu) {
        ctx->pc = 0x293990u;
        goto label_293990;
    }
    ctx->pc = 0x293988u;
    {
        const bool branch_taken_0x293988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x293988) {
            ctx->pc = 0x293AC8u;
            goto label_293ac8;
        }
    }
    ctx->pc = 0x293990u;
label_293990:
    // 0x293990: 0x8e425dc4  lw          $v0, 0x5DC4($s2)
    ctx->pc = 0x293990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24004)));
label_293994:
    // 0x293994: 0x16620027  bne         $s3, $v0, . + 4 + (0x27 << 2)
label_293998:
    if (ctx->pc == 0x293998u) {
        ctx->pc = 0x29399Cu;
        goto label_29399c;
    }
    ctx->pc = 0x293994u;
    {
        const bool branch_taken_0x293994 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x293994) {
            ctx->pc = 0x293A34u;
            goto label_293a34;
        }
    }
    ctx->pc = 0x29399Cu;
label_29399c:
    // 0x29399c: 0x8fa30130  lw          $v1, 0x130($sp)
    ctx->pc = 0x29399cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_2939a0:
    // 0x2939a0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2939a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2939a4:
    // 0x2939a4: 0x3c045555  lui         $a0, 0x5555
    ctx->pc = 0x2939a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21845 << 16));
label_2939a8:
    // 0x2939a8: 0x34825556  ori         $v0, $a0, 0x5556
    ctx->pc = 0x2939a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)21846);
label_2939ac:
    // 0x2939ac: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x2939acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_2939b0:
    // 0x2939b0: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x2939b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_2939b4:
    // 0x2939b4: 0x0  nop
    ctx->pc = 0x2939b4u;
    // NOP
label_2939b8:
    // 0x2939b8: 0x1010  mfhi        $v0
    ctx->pc = 0x2939b8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_2939bc:
    // 0x2939bc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2939bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2939c0:
    // 0x2939c0: 0x8fa60134  lw          $a2, 0x134($sp)
    ctx->pc = 0x2939c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
label_2939c4:
    // 0x2939c4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2939c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2939c8:
    // 0x2939c8: 0x3c045555  lui         $a0, 0x5555
    ctx->pc = 0x2939c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21845 << 16));
label_2939cc:
    // 0x2939cc: 0x34855556  ori         $a1, $a0, 0x5556
    ctx->pc = 0x2939ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)21846);
label_2939d0:
    // 0x2939d0: 0xa60018  mult        $zero, $a1, $a2
    ctx->pc = 0x2939d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_2939d4:
    // 0x2939d4: 0x637c2  srl         $a2, $a2, 31
    ctx->pc = 0x2939d4u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
label_2939d8:
    // 0x2939d8: 0x0  nop
    ctx->pc = 0x2939d8u;
    // NOP
label_2939dc:
    // 0x2939dc: 0x2810  mfhi        $a1
    ctx->pc = 0x2939dcu;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_2939e0:
    // 0x2939e0: 0xa61821  addu        $v1, $a1, $a2
    ctx->pc = 0x2939e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_2939e4:
    // 0x2939e4: 0x33200  sll         $a2, $v1, 8
    ctx->pc = 0x2939e4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
label_2939e8:
    // 0x2939e8: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x2939e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
label_2939ec:
    // 0x2939ec: 0x8fa70138  lw          $a3, 0x138($sp)
    ctx->pc = 0x2939ecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2939f0:
    // 0x2939f0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2939f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2939f4:
    // 0x2939f4: 0x3c055555  lui         $a1, 0x5555
    ctx->pc = 0x2939f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21845 << 16));
label_2939f8:
    // 0x2939f8: 0x34a45556  ori         $a0, $a1, 0x5556
    ctx->pc = 0x2939f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)21846);
label_2939fc:
    // 0x2939fc: 0x870018  mult        $zero, $a0, $a3
    ctx->pc = 0x2939fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_293a00:
    // 0x293a00: 0x727c2  srl         $a0, $a3, 31
    ctx->pc = 0x293a00u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 7), 31));
label_293a04:
    // 0x293a04: 0x0  nop
    ctx->pc = 0x293a04u;
    // NOP
label_293a08:
    // 0x293a08: 0x2810  mfhi        $a1
    ctx->pc = 0x293a08u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_293a0c:
    // 0x293a0c: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x293a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_293a10:
    // 0x293a10: 0x41c00  sll         $v1, $a0, 16
    ctx->pc = 0x293a10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
label_293a14:
    // 0x293a14: 0x623825  or          $a3, $v1, $v0
    ctx->pc = 0x293a14u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_293a18:
    // 0x293a18: 0x8fa2012c  lw          $v0, 0x12C($sp)
    ctx->pc = 0x293a18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
label_293a1c:
    // 0x293a1c: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x293a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
label_293a20:
    // 0x293a20: 0x473825  or          $a3, $v0, $a3
    ctx->pc = 0x293a20u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
label_293a24:
    // 0x293a24: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x293a24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_293a28:
    // 0x293a28: 0xac870000  sw          $a3, 0x0($a0)
    ctx->pc = 0x293a28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 7));
label_293a2c:
    // 0x293a2c: 0x10000026  b           . + 4 + (0x26 << 2)
label_293a30:
    if (ctx->pc == 0x293A30u) {
        ctx->pc = 0x293A34u;
        goto label_293a34;
    }
    ctx->pc = 0x293A2Cu;
    {
        const bool branch_taken_0x293a2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x293a2c) {
            ctx->pc = 0x293AC8u;
            goto label_293ac8;
        }
    }
    ctx->pc = 0x293A34u;
label_293a34:
    // 0x293a34: 0x8fa40120  lw          $a0, 0x120($sp)
    ctx->pc = 0x293a34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_293a38:
    // 0x293a38: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x293a38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_293a3c:
    // 0x293a3c: 0x3c025555  lui         $v0, 0x5555
    ctx->pc = 0x293a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21845 << 16));
label_293a40:
    // 0x293a40: 0x34455556  ori         $a1, $v0, 0x5556
    ctx->pc = 0x293a40u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21846);
label_293a44:
    // 0x293a44: 0xa40018  mult        $zero, $a1, $a0
    ctx->pc = 0x293a44u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_293a48:
    // 0x293a48: 0x437c2  srl         $a2, $a0, 31
    ctx->pc = 0x293a48u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
label_293a4c:
    // 0x293a4c: 0x0  nop
    ctx->pc = 0x293a4cu;
    // NOP
label_293a50:
    // 0x293a50: 0x1010  mfhi        $v0
    ctx->pc = 0x293a50u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_293a54:
    // 0x293a54: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x293a54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_293a58:
    // 0x293a58: 0x8fa50124  lw          $a1, 0x124($sp)
    ctx->pc = 0x293a58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
label_293a5c:
    // 0x293a5c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x293a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_293a60:
    // 0x293a60: 0x3c035555  lui         $v1, 0x5555
    ctx->pc = 0x293a60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21845 << 16));
label_293a64:
    // 0x293a64: 0x34645556  ori         $a0, $v1, 0x5556
    ctx->pc = 0x293a64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21846);
label_293a68:
    // 0x293a68: 0x850018  mult        $zero, $a0, $a1
    ctx->pc = 0x293a68u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_293a6c:
    // 0x293a6c: 0x527c2  srl         $a0, $a1, 31
    ctx->pc = 0x293a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
label_293a70:
    // 0x293a70: 0x0  nop
    ctx->pc = 0x293a70u;
    // NOP
label_293a74:
    // 0x293a74: 0x1810  mfhi        $v1
    ctx->pc = 0x293a74u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_293a78:
    // 0x293a78: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x293a78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_293a7c:
    // 0x293a7c: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x293a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
label_293a80:
    // 0x293a80: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x293a80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_293a84:
    // 0x293a84: 0x8fa50128  lw          $a1, 0x128($sp)
    ctx->pc = 0x293a84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
label_293a88:
    // 0x293a88: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x293a88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_293a8c:
    // 0x293a8c: 0x3c045555  lui         $a0, 0x5555
    ctx->pc = 0x293a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21845 << 16));
label_293a90:
    // 0x293a90: 0x34835556  ori         $v1, $a0, 0x5556
    ctx->pc = 0x293a90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)21846);
label_293a94:
    // 0x293a94: 0x650018  mult        $zero, $v1, $a1
    ctx->pc = 0x293a94u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_293a98:
    // 0x293a98: 0x53fc2  srl         $a3, $a1, 31
    ctx->pc = 0x293a98u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
label_293a9c:
    // 0x293a9c: 0x0  nop
    ctx->pc = 0x293a9cu;
    // NOP
label_293aa0:
    // 0x293aa0: 0x2810  mfhi        $a1
    ctx->pc = 0x293aa0u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_293aa4:
    // 0x293aa4: 0xa71821  addu        $v1, $a1, $a3
    ctx->pc = 0x293aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_293aa8:
    // 0x293aa8: 0x33400  sll         $a2, $v1, 16
    ctx->pc = 0x293aa8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_293aac:
    // 0x293aac: 0xc21025  or          $v0, $a2, $v0
    ctx->pc = 0x293aacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
label_293ab0:
    // 0x293ab0: 0x8fa4012c  lw          $a0, 0x12C($sp)
    ctx->pc = 0x293ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
label_293ab4:
    // 0x293ab4: 0x41e00  sll         $v1, $a0, 24
    ctx->pc = 0x293ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
label_293ab8:
    // 0x293ab8: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x293ab8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_293abc:
    // 0x293abc: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x293abcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_293ac0:
    // 0x293ac0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x293ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_293ac4:
    // 0x293ac4: 0x0  nop
    ctx->pc = 0x293ac4u;
    // NOP
label_293ac8:
    // 0x293ac8: 0x161100  sll         $v0, $s6, 4
    ctx->pc = 0x293ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 4));
label_293acc:
    // 0x293acc: 0x24427000  addiu       $v0, $v0, 0x7000
    ctx->pc = 0x293accu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
label_293ad0:
    // 0x293ad0: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x293ad0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_293ad4:
    // 0x293ad4: 0x8fa2015c  lw          $v0, 0x15C($sp)
    ctx->pc = 0x293ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
label_293ad8:
    // 0x293ad8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x293ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_293adc:
    // 0x293adc: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x293adcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
label_293ae0:
    // 0x293ae0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x293ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_293ae4:
    // 0x293ae4: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x293ae4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_293ae8:
    // 0x293ae8: 0x26040018  addiu       $a0, $s0, 0x18
    ctx->pc = 0x293ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
label_293aec:
    // 0x293aec: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x293aecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_293af0:
    // 0x293af0: 0x3402fffa  ori         $v0, $zero, 0xFFFA
    ctx->pc = 0x293af0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65530);
label_293af4:
    // 0x293af4: 0x2603001c  addiu       $v1, $s0, 0x1C
    ctx->pc = 0x293af4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
label_293af8:
    // 0x293af8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x293af8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_293afc:
    // 0x293afc: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x293afcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_293b00:
    // 0x293b00: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x293b00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_293b04:
    // 0x293b04: 0x24627000  addiu       $v0, $v1, 0x7000
    ctx->pc = 0x293b04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 28672));
label_293b08:
    // 0x293b08: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x293b08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_293b0c:
    // 0x293b0c: 0x7fa20110  sq          $v0, 0x110($sp)
    ctx->pc = 0x293b0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 2));
label_293b10:
    // 0x293b10: 0x8fa40164  lw          $a0, 0x164($sp)
    ctx->pc = 0x293b10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 356)));
label_293b14:
    // 0x293b14: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x293b14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_293b18:
    // 0x293b18: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x293b18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
label_293b1c:
    // 0x293b1c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x293b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_293b20:
    // 0x293b20: 0x7ba30110  lq          $v1, 0x110($sp)
    ctx->pc = 0x293b20u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_293b24:
    // 0x293b24: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x293b24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_293b28:
    // 0x293b28: 0x7fa20100  sq          $v0, 0x100($sp)
    ctx->pc = 0x293b28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 2));
label_293b2c:
    // 0x293b2c: 0x26040024  addiu       $a0, $s0, 0x24
    ctx->pc = 0x293b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
label_293b30:
    // 0x293b30: 0x7ba20100  lq          $v0, 0x100($sp)
    ctx->pc = 0x293b30u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_293b34:
    // 0x293b34: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x293b34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_293b38:
    // 0x293b38: 0x3402fffa  ori         $v0, $zero, 0xFFFA
    ctx->pc = 0x293b38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65530);
label_293b3c:
    // 0x293b3c: 0x26040028  addiu       $a0, $s0, 0x28
    ctx->pc = 0x293b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
label_293b40:
    // 0x293b40: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x293b40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_293b44:
    // 0x293b44: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x293b44u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_293b48:
    // 0x293b48: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x293b48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_293b4c:
    // 0x293b4c: 0x7fa200f0  sq          $v0, 0xF0($sp)
    ctx->pc = 0x293b4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
label_293b50:
    // 0x293b50: 0x7ba200f0  lq          $v0, 0xF0($sp)
    ctx->pc = 0x293b50u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_293b54:
    // 0x293b54: 0x244400a3  addiu       $a0, $v0, 0xA3
    ctx->pc = 0x293b54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 163));
label_293b58:
    // 0x293b58: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x293b58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_293b5c:
    // 0x293b5c: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x293b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_293b60:
    // 0x293b60: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x293b60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_293b64:
    // 0x293b64: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x293b64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
label_293b68:
    // 0x293b68: 0x7fa300e0  sq          $v1, 0xE0($sp)
    ctx->pc = 0x293b68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 3));
label_293b6c:
    // 0x293b6c: 0x7ba300e0  lq          $v1, 0xE0($sp)
    ctx->pc = 0x293b6cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_293b70:
    // 0x293b70: 0x2464cca0  addiu       $a0, $v1, -0x3360
    ctx->pc = 0x293b70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954144));
label_293b74:
    // 0x293b74: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x293b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_293b78:
    // 0x293b78: 0x8fa40158  lw          $a0, 0x158($sp)
    ctx->pc = 0x293b78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
label_293b7c:
    // 0x293b7c: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x293b7cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_293b80:
    // 0x293b80: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x293b80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_293b84:
    // 0x293b84: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x293b84u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_293b88:
    // 0x293b88: 0xc0462a6  jal         func_118A98
label_293b8c:
    if (ctx->pc == 0x293B8Cu) {
        ctx->pc = 0x293B90u;
        goto label_293b90;
    }
    ctx->pc = 0x293B88u;
    SET_GPR_U32(ctx, 31, 0x293B90u);
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x293B90u;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x293B90u) { return; }
    ctx->pc = 0x293B90u;
label_293b90:
    // 0x293b90: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x293b90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
label_293b94:
    // 0x293b94: 0x8fa40158  lw          $a0, 0x158($sp)
    ctx->pc = 0x293b94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
label_293b98:
    // 0x293b98: 0xae040008  sw          $a0, 0x8($s0)
    ctx->pc = 0x293b98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 4));
label_293b9c:
    // 0x293b9c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x293b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_293ba0:
    // 0x293ba0: 0x96240002  lhu         $a0, 0x2($s1)
    ctx->pc = 0x293ba0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_293ba4:
    // 0x293ba4: 0x3086ffff  andi        $a2, $a0, 0xFFFF
    ctx->pc = 0x293ba4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
label_293ba8:
    // 0x293ba8: 0xdc430018  ld          $v1, 0x18($v0)
    ctx->pc = 0x293ba8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 24)));
label_293bac:
    // 0x293bac: 0x7fa300c0  sq          $v1, 0xC0($sp)
    ctx->pc = 0x293bacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 3));
label_293bb0:
    // 0x293bb0: 0x7ba300c0  lq          $v1, 0xC0($sp)
    ctx->pc = 0x293bb0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_293bb4:
    // 0x293bb4: 0x32378  dsll        $a0, $v1, 13
    ctx->pc = 0x293bb4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << 13);
label_293bb8:
    // 0x293bb8: 0x424be  dsrl32      $a0, $a0, 18
    ctx->pc = 0x293bb8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 18));
label_293bbc:
    // 0x293bbc: 0x86202d  daddu       $a0, $a0, $a2
    ctx->pc = 0x293bbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 6));
label_293bc0:
    // 0x293bc0: 0xdc460018  ld          $a2, 0x18($v0)
    ctx->pc = 0x293bc0u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 24)));
label_293bc4:
    // 0x293bc4: 0x30833fff  andi        $v1, $a0, 0x3FFF
    ctx->pc = 0x293bc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16383);
label_293bc8:
    // 0x293bc8: 0x7fa300b0  sq          $v1, 0xB0($sp)
    ctx->pc = 0x293bc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 3));
label_293bcc:
    // 0x293bcc: 0x7ba300b0  lq          $v1, 0xB0($sp)
    ctx->pc = 0x293bccu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_293bd0:
    // 0x293bd0: 0x3217c  dsll32      $a0, $v1, 5
    ctx->pc = 0x293bd0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 5));
label_293bd4:
    // 0x293bd4: 0x3c03fff8  lui         $v1, 0xFFF8
    ctx->pc = 0x293bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65528 << 16));
label_293bd8:
    // 0x293bd8: 0x3463001f  ori         $v1, $v1, 0x1F
    ctx->pc = 0x293bd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)31);
label_293bdc:
    // 0x293bdc: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x293bdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_293be0:
    // 0x293be0: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x293be0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_293be4:
    // 0x293be4: 0x7fa500a0  sq          $a1, 0xA0($sp)
    ctx->pc = 0x293be4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 5));
label_293be8:
    // 0x293be8: 0x7ba500a0  lq          $a1, 0xA0($sp)
    ctx->pc = 0x293be8u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_293bec:
    // 0x293bec: 0x53c38  dsll        $a3, $a1, 16
    ctx->pc = 0x293becu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) << 16);
label_293bf0:
    // 0x293bf0: 0x34e5ffff  ori         $a1, $a3, 0xFFFF
    ctx->pc = 0x293bf0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
label_293bf4:
    // 0x293bf4: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x293bf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_293bf8:
    // 0x293bf8: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x293bf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
label_293bfc:
    // 0x293bfc: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x293bfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_293c00:
    // 0x293c00: 0xfc430018  sd          $v1, 0x18($v0)
    ctx->pc = 0x293c00u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 24), GPR_U64(ctx, 3));
label_293c04:
    // 0x293c04: 0x26430004  addiu       $v1, $s2, 0x4
    ctx->pc = 0x293c04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_293c08:
    // 0x293c08: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x293c08u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_293c0c:
    // 0x293c0c: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x293c0cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_293c10:
    // 0x293c10: 0xc05dbd8  jal         func_176F60
label_293c14:
    if (ctx->pc == 0x293C14u) {
        ctx->pc = 0x293C18u;
        goto label_293c18;
    }
    ctx->pc = 0x293C10u;
    SET_GPR_U32(ctx, 31, 0x293C18u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x293C10u, 0x293C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293C18u;
label_293c18:
    // 0x293c18: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x293c18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_293c1c:
    // 0x293c1c: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x293c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
label_293c20:
    // 0x293c20: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x293c20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
label_293c24:
    // 0x293c24: 0x34421009  ori         $v0, $v0, 0x1009
    ctx->pc = 0x293c24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4105);
label_293c28:
    // 0x293c28: 0xaea20004  sw          $v0, 0x4($s5)
    ctx->pc = 0x293c28u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 2));
label_293c2c:
    // 0x293c2c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x293c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_293c30:
    // 0x293c30: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x293c30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_293c34:
    // 0x293c34: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x293c34u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_293c38:
    // 0x293c38: 0x21138  dsll        $v0, $v0, 4
    ctx->pc = 0x293c38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 4);
label_293c3c:
    // 0x293c3c: 0x3443000a  ori         $v1, $v0, 0xA
    ctx->pc = 0x293c3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10);
label_293c40:
    // 0x293c40: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x293c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_293c44:
    // 0x293c44: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x293c44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_293c48:
    // 0x293c48: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x293c48u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_293c4c:
    // 0x293c4c: 0x213b8  dsll        $v0, $v0, 14
    ctx->pc = 0x293c4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 14);
label_293c50:
    // 0x293c50: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x293c50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_293c54:
    // 0x293c54: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x293c54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_293c58:
    // 0x293c58: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x293c58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_293c5c:
    // 0x293c5c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x293c5cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_293c60:
    // 0x293c60: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x293c60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
label_293c64:
    // 0x293c64: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x293c64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_293c68:
    // 0x293c68: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x293c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_293c6c:
    // 0x293c6c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x293c6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_293c70:
    // 0x293c70: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x293c70u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_293c74:
    // 0x293c74: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x293c74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
label_293c78:
    // 0x293c78: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x293c78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_293c7c:
    // 0x293c7c: 0xfea20008  sd          $v0, 0x8($s5)
    ctx->pc = 0x293c7cu;
    WRITE64(ADD32(GPR_U32(ctx, 21), 8), GPR_U64(ctx, 2));
label_293c80:
    // 0x293c80: 0x26420004  addiu       $v0, $s2, 0x4
    ctx->pc = 0x293c80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_293c84:
    // 0x293c84: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x293c84u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_293c88:
    // 0x293c88: 0x72a02e28  paddub      $a1, $s5, $zero
    ctx->pc = 0x293c88u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
label_293c8c:
    // 0x293c8c: 0xc05dbd8  jal         func_176F60
label_293c90:
    if (ctx->pc == 0x293C90u) {
        ctx->pc = 0x293C94u;
        goto label_293c94;
    }
    ctx->pc = 0x293C8Cu;
    SET_GPR_U32(ctx, 31, 0x293C94u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x293C8Cu, 0x293C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293C94u;
label_293c94:
    // 0x293c94: 0x26a20010  addiu       $v0, $s5, 0x10
    ctx->pc = 0x293c94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
label_293c98:
    // 0x293c98: 0x7040ae28  paddub      $s5, $v0, $zero
    ctx->pc = 0x293c98u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_293c9c:
    // 0x293c9c: 0x2602002c  addiu       $v0, $s0, 0x2C
    ctx->pc = 0x293c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
label_293ca0:
    // 0x293ca0: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x293ca0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_293ca4:
    // 0x293ca4: 0x26220014  addiu       $v0, $s1, 0x14
    ctx->pc = 0x293ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
label_293ca8:
    // 0x293ca8: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x293ca8u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_293cac:
    // 0x293cac: 0x26f70008  addiu       $s7, $s7, 0x8
    ctx->pc = 0x293cacu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 8));
label_293cb0:
    // 0x293cb0: 0x8fa20158  lw          $v0, 0x158($sp)
    ctx->pc = 0x293cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
label_293cb4:
    // 0x293cb4: 0x24420028  addiu       $v0, $v0, 0x28
    ctx->pc = 0x293cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_293cb8:
    // 0x293cb8: 0xafa20158  sw          $v0, 0x158($sp)
    ctx->pc = 0x293cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 344), GPR_U32(ctx, 2));
label_293cbc:
    // 0x293cbc: 0x26620001  addiu       $v0, $s3, 0x1
    ctx->pc = 0x293cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_293cc0:
    // 0x293cc0: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x293cc0u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_293cc4:
    // 0x293cc4: 0x0  nop
    ctx->pc = 0x293cc4u;
    // NOP
label_293cc8:
    // 0x293cc8: 0x2a620004  slti        $v0, $s3, 0x4
    ctx->pc = 0x293cc8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)4) ? 1 : 0);
label_293ccc:
    // 0x293ccc: 0x1440fec2  bnez        $v0, . + 4 + (-0x13E << 2)
label_293cd0:
    if (ctx->pc == 0x293CD0u) {
        ctx->pc = 0x293CD4u;
        goto label_293cd4;
    }
    ctx->pc = 0x293CCCu;
    {
        const bool branch_taken_0x293ccc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x293ccc) {
            ctx->pc = 0x2937D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2937d8;
        }
    }
    ctx->pc = 0x293CD4u;
label_293cd4:
    // 0x293cd4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x293cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_293cd8:
    // 0x293cd8: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x293cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_293cdc:
    // 0x293cdc: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x293cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
label_293ce0:
    // 0x293ce0: 0x34421043  ori         $v0, $v0, 0x1043
    ctx->pc = 0x293ce0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4163);
label_293ce4:
    // 0x293ce4: 0xae820004  sw          $v0, 0x4($s4)
    ctx->pc = 0x293ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
label_293ce8:
    // 0x293ce8: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x293ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_293cec:
    // 0x293cec: 0x2883c  dsll32      $s1, $v0, 0
    ctx->pc = 0x293cecu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 0));
label_293cf0:
    // 0x293cf0: 0x24020068  addiu       $v0, $zero, 0x68
    ctx->pc = 0x293cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
label_293cf4:
    // 0x293cf4: 0x51b825  or          $s7, $v0, $s1
    ctx->pc = 0x293cf4u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
label_293cf8:
    // 0x293cf8: 0xfe970008  sd          $s7, 0x8($s4)
    ctx->pc = 0x293cf8u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 23));
label_293cfc:
    // 0x293cfc: 0x26430004  addiu       $v1, $s2, 0x4
    ctx->pc = 0x293cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_293d00:
    // 0x293d00: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x293d00u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_293d04:
    // 0x293d04: 0x72802e28  paddub      $a1, $s4, $zero
    ctx->pc = 0x293d04u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
label_293d08:
    // 0x293d08: 0xc05dbd8  jal         func_176F60
label_293d0c:
    if (ctx->pc == 0x293D0Cu) {
        ctx->pc = 0x293D10u;
        goto label_293d10;
    }
    ctx->pc = 0x293D08u;
    SET_GPR_U32(ctx, 31, 0x293D10u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x293D08u, 0x293D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293D10u;
label_293d10:
    // 0x293d10: 0x26820010  addiu       $v0, $s4, 0x10
    ctx->pc = 0x293d10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
label_293d14:
    // 0x293d14: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x293d14u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_293d18:
    // 0x293d18: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x293d18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
label_293d1c:
    // 0x293d1c: 0x24626760  addiu       $v0, $v1, 0x6760
    ctx->pc = 0x293d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 26464));
label_293d20:
    // 0x293d20: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x293d20u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_293d24:
    // 0x293d24: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x293d24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_293d28:
    // 0x293d28: 0x24426838  addiu       $v0, $v0, 0x6838
    ctx->pc = 0x293d28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26680));
label_293d2c:
    // 0x293d2c: 0x7040be28  paddub      $s7, $v0, $zero
    ctx->pc = 0x293d2cu;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_293d30:
    // 0x293d30: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x293d30u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_293d34:
    // 0x293d34: 0x100000be  b           . + 4 + (0xBE << 2)
label_293d38:
    if (ctx->pc == 0x293D38u) {
        ctx->pc = 0x293D3Cu;
        goto label_293d3c;
    }
    ctx->pc = 0x293D34u;
    {
        const bool branch_taken_0x293d34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x293d34) {
            ctx->pc = 0x294030u;
            goto label_294030;
        }
    }
    ctx->pc = 0x293D3Cu;
label_293d3c:
    // 0x293d3c: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x293d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_293d40:
    // 0x293d40: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x293d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_293d44:
    // 0x293d44: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x293d44u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_293d48:
    // 0x293d48: 0xafa20168  sw          $v0, 0x168($sp)
    ctx->pc = 0x293d48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 360), GPR_U32(ctx, 2));
label_293d4c:
    // 0x293d4c: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x293d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_293d50:
    // 0x293d50: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x293d50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_293d54:
    // 0x293d54: 0x461823  subu        $v1, $v0, $a2
    ctx->pc = 0x293d54u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_293d58:
    // 0x293d58: 0xafa3016c  sw          $v1, 0x16C($sp)
    ctx->pc = 0x293d58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 364), GPR_U32(ctx, 3));
label_293d5c:
    // 0x293d5c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x293d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_293d60:
    // 0x293d60: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x293d60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_293d64:
    // 0x293d64: 0x3c026400  lui         $v0, 0x6400
    ctx->pc = 0x293d64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25600 << 16));
label_293d68:
    // 0x293d68: 0x34422b16  ori         $v0, $v0, 0x2B16
    ctx->pc = 0x293d68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)11030);
label_293d6c:
    // 0x293d6c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x293d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_293d70:
    // 0x293d70: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x293d70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_293d74:
    // 0x293d74: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x293d74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_293d78:
    // 0x293d78: 0x34560040  ori         $s6, $v0, 0x40
    ctx->pc = 0x293d78u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
label_293d7c:
    // 0x293d7c: 0xae160004  sw          $s6, 0x4($s0)
    ctx->pc = 0x293d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 22));
label_293d80:
    // 0x293d80: 0x8ee60000  lw          $a2, 0x0($s7)
    ctx->pc = 0x293d80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_293d84:
    // 0x293d84: 0x70c0b628  paddub      $s6, $a2, $zero
    ctx->pc = 0x293d84u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_293d88:
    // 0x293d88: 0x8ee30004  lw          $v1, 0x4($s7)
    ctx->pc = 0x293d88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
label_293d8c:
    // 0x293d8c: 0xafa3015c  sw          $v1, 0x15C($sp)
    ctx->pc = 0x293d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 3));
label_293d90:
    // 0x293d90: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x293d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
label_293d94:
    // 0x293d94: 0x2c21821  addu        $v1, $s6, $v0
    ctx->pc = 0x293d94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
label_293d98:
    // 0x293d98: 0xafa30160  sw          $v1, 0x160($sp)
    ctx->pc = 0x293d98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 3));
label_293d9c:
    // 0x293d9c: 0x8fa3015c  lw          $v1, 0x15C($sp)
    ctx->pc = 0x293d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
label_293da0:
    // 0x293da0: 0x8fa2016c  lw          $v0, 0x16C($sp)
    ctx->pc = 0x293da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 364)));
label_293da4:
    // 0x293da4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x293da4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_293da8:
    // 0x293da8: 0xafa20164  sw          $v0, 0x164($sp)
    ctx->pc = 0x293da8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 356), GPR_U32(ctx, 2));
label_293dac:
    // 0x293dac: 0x44960000  mtc1        $s6, $f0
    ctx->pc = 0x293dacu;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_293db0:
    // 0x293db0: 0x0  nop
    ctx->pc = 0x293db0u;
    // NOP
label_293db4:
    // 0x293db4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x293db4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_293db8:
    // 0x293db8: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x293db8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
label_293dbc:
    // 0x293dbc: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x293dbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_293dc0:
    // 0x293dc0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x293dc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_293dc4:
    // 0x293dc4: 0x0  nop
    ctx->pc = 0x293dc4u;
    // NOP
label_293dc8:
    // 0x293dc8: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x293dc8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_293dcc:
    // 0x293dcc: 0xc047f7e  jal         func_11FDF8
label_293dd0:
    if (ctx->pc == 0x293DD0u) {
        ctx->pc = 0x293DD4u;
        goto label_293dd4;
    }
    ctx->pc = 0x293DCCu;
    SET_GPR_U32(ctx, 31, 0x293DD4u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x293DCCu, 0x293DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293DD4u;
label_293dd4:
    // 0x293dd4: 0x7040b628  paddub      $s6, $v0, $zero
    ctx->pc = 0x293dd4u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_293dd8:
    // 0x293dd8: 0x8fa30160  lw          $v1, 0x160($sp)
    ctx->pc = 0x293dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_293ddc:
    // 0x293ddc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x293ddcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_293de0:
    // 0x293de0: 0x0  nop
    ctx->pc = 0x293de0u;
    // NOP
label_293de4:
    // 0x293de4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x293de4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_293de8:
    // 0x293de8: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x293de8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
label_293dec:
    // 0x293dec: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x293decu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_293df0:
    // 0x293df0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x293df0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_293df4:
    // 0x293df4: 0x0  nop
    ctx->pc = 0x293df4u;
    // NOP
label_293df8:
    // 0x293df8: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x293df8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_293dfc:
    // 0x293dfc: 0xc047f7e  jal         func_11FDF8
label_293e00:
    if (ctx->pc == 0x293E00u) {
        ctx->pc = 0x293E04u;
        goto label_293e04;
    }
    ctx->pc = 0x293DFCu;
    SET_GPR_U32(ctx, 31, 0x293E04u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x293DFCu, 0x293E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293E04u;
label_293e04:
    // 0x293e04: 0xafa20160  sw          $v0, 0x160($sp)
    ctx->pc = 0x293e04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 2));
label_293e08:
    // 0x293e08: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x293e08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_293e0c:
    // 0x293e0c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x293e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_293e10:
    // 0x293e10: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x293e10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_293e14:
    // 0x293e14: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x293e14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_293e18:
    // 0x293e18: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x293e18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_293e1c:
    // 0x293e1c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x293e1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_293e20:
    // 0x293e20: 0x26020014  addiu       $v0, $s0, 0x14
    ctx->pc = 0x293e20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
label_293e24:
    // 0x293e24: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x293e24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_293e28:
    // 0x293e28: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x293e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_293e2c:
    // 0x293e2c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x293e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_293e30:
    // 0x293e30: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x293e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_293e34:
    // 0x293e34: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x293e34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_293e38:
    // 0x293e38: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x293e38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_293e3c:
    // 0x293e3c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x293e3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_293e40:
    // 0x293e40: 0x26020020  addiu       $v0, $s0, 0x20
    ctx->pc = 0x293e40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_293e44:
    // 0x293e44: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x293e44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_293e48:
    // 0x293e48: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x293e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
label_293e4c:
    // 0x293e4c: 0x22400  sll         $a0, $v0, 16
    ctx->pc = 0x293e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_293e50:
    // 0x293e50: 0x8fa20124  lw          $v0, 0x124($sp)
    ctx->pc = 0x293e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
label_293e54:
    // 0x293e54: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x293e54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_293e58:
    // 0x293e58: 0x8fa30120  lw          $v1, 0x120($sp)
    ctx->pc = 0x293e58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_293e5c:
    // 0x293e5c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x293e5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_293e60:
    // 0x293e60: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x293e60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_293e64:
    // 0x293e64: 0x8fa3012c  lw          $v1, 0x12C($sp)
    ctx->pc = 0x293e64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
label_293e68:
    // 0x293e68: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x293e68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
label_293e6c:
    // 0x293e6c: 0x441825  or          $v1, $v0, $a0
    ctx->pc = 0x293e6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_293e70:
    // 0x293e70: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x293e70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_293e74:
    // 0x293e74: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x293e74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_293e78:
    // 0x293e78: 0x161900  sll         $v1, $s6, 4
    ctx->pc = 0x293e78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 4));
label_293e7c:
    // 0x293e7c: 0x24627000  addiu       $v0, $v1, 0x7000
    ctx->pc = 0x293e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 28672));
label_293e80:
    // 0x293e80: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x293e80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_293e84:
    // 0x293e84: 0x8fa2015c  lw          $v0, 0x15C($sp)
    ctx->pc = 0x293e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
label_293e88:
    // 0x293e88: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x293e88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_293e8c:
    // 0x293e8c: 0x24437900  addiu       $v1, $v0, 0x7900
    ctx->pc = 0x293e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
label_293e90:
    // 0x293e90: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x293e90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_293e94:
    // 0x293e94: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x293e94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_293e98:
    // 0x293e98: 0x26020018  addiu       $v0, $s0, 0x18
    ctx->pc = 0x293e98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
label_293e9c:
    // 0x293e9c: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x293e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_293ea0:
    // 0x293ea0: 0x3403fff8  ori         $v1, $zero, 0xFFF8
    ctx->pc = 0x293ea0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65528);
label_293ea4:
    // 0x293ea4: 0x2602001c  addiu       $v0, $s0, 0x1C
    ctx->pc = 0x293ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
label_293ea8:
    // 0x293ea8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x293ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_293eac:
    // 0x293eac: 0x8fa40160  lw          $a0, 0x160($sp)
    ctx->pc = 0x293eacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_293eb0:
    // 0x293eb0: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x293eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_293eb4:
    // 0x293eb4: 0x24427000  addiu       $v0, $v0, 0x7000
    ctx->pc = 0x293eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
label_293eb8:
    // 0x293eb8: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x293eb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_293ebc:
    // 0x293ebc: 0x8fbe0164  lw          $fp, 0x164($sp)
    ctx->pc = 0x293ebcu;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 356)));
label_293ec0:
    // 0x293ec0: 0x1ef0c0  sll         $fp, $fp, 3
    ctx->pc = 0x293ec0u;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 30), 3));
label_293ec4:
    // 0x293ec4: 0x27c27900  addiu       $v0, $fp, 0x7900
    ctx->pc = 0x293ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 30976));
label_293ec8:
    // 0x293ec8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x293ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_293ecc:
    // 0x293ecc: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x293eccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_293ed0:
    // 0x293ed0: 0x26040024  addiu       $a0, $s0, 0x24
    ctx->pc = 0x293ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
label_293ed4:
    // 0x293ed4: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x293ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_293ed8:
    // 0x293ed8: 0x3402fff8  ori         $v0, $zero, 0xFFF8
    ctx->pc = 0x293ed8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65528);
label_293edc:
    // 0x293edc: 0x26030028  addiu       $v1, $s0, 0x28
    ctx->pc = 0x293edcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
label_293ee0:
    // 0x293ee0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x293ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_293ee4:
    // 0x293ee4: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x293ee4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_293ee8:
    // 0x293ee8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x293ee8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_293eec:
    // 0x293eec: 0x244400a3  addiu       $a0, $v0, 0xA3
    ctx->pc = 0x293eecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 163));
label_293ef0:
    // 0x293ef0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x293ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_293ef4:
    // 0x293ef4: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x293ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_293ef8:
    // 0x293ef8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x293ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_293efc:
    // 0x293efc: 0x3c060048  lui         $a2, 0x48
    ctx->pc = 0x293efcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)72 << 16));
label_293f00:
    // 0x293f00: 0x24c3cca0  addiu       $v1, $a2, -0x3360
    ctx->pc = 0x293f00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294954144));
label_293f04:
    // 0x293f04: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x293f04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_293f08:
    // 0x293f08: 0x8fa40158  lw          $a0, 0x158($sp)
    ctx->pc = 0x293f08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
label_293f0c:
    // 0x293f0c: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x293f0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_293f10:
    // 0x293f10: 0xc0462a6  jal         func_118A98
label_293f14:
    if (ctx->pc == 0x293F14u) {
        ctx->pc = 0x293F18u;
        goto label_293f18;
    }
    ctx->pc = 0x293F10u;
    SET_GPR_U32(ctx, 31, 0x293F18u);
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x293F18u;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x293F18u) { return; }
    ctx->pc = 0x293F18u;
label_293f18:
    // 0x293f18: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x293f18u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_293f1c:
    // 0x293f1c: 0x8fa30158  lw          $v1, 0x158($sp)
    ctx->pc = 0x293f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
label_293f20:
    // 0x293f20: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x293f20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
label_293f24:
    // 0x293f24: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x293f24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_293f28:
    // 0x293f28: 0x96220002  lhu         $v0, 0x2($s1)
    ctx->pc = 0x293f28u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_293f2c:
    // 0x293f2c: 0x3047ffff  andi        $a3, $v0, 0xFFFF
    ctx->pc = 0x293f2cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_293f30:
    // 0x293f30: 0xdcc30018  ld          $v1, 0x18($a2)
    ctx->pc = 0x293f30u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 24)));
label_293f34:
    // 0x293f34: 0x32378  dsll        $a0, $v1, 13
    ctx->pc = 0x293f34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << 13);
label_293f38:
    // 0x293f38: 0x42cbe  dsrl32      $a1, $a0, 18
    ctx->pc = 0x293f38u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) >> (32 + 18));
label_293f3c:
    // 0x293f3c: 0xa7202d  daddu       $a0, $a1, $a3
    ctx->pc = 0x293f3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 7));
label_293f40:
    // 0x293f40: 0xdcc50018  ld          $a1, 0x18($a2)
    ctx->pc = 0x293f40u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 6), 24)));
label_293f44:
    // 0x293f44: 0x30843fff  andi        $a0, $a0, 0x3FFF
    ctx->pc = 0x293f44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16383);
label_293f48:
    // 0x293f48: 0x4197c  dsll32      $v1, $a0, 5
    ctx->pc = 0x293f48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 5));
label_293f4c:
    // 0x293f4c: 0x3c02fff8  lui         $v0, 0xFFF8
    ctx->pc = 0x293f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65528 << 16));
label_293f50:
    // 0x293f50: 0x3447001f  ori         $a3, $v0, 0x1F
    ctx->pc = 0x293f50u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)31);
label_293f54:
    // 0x293f54: 0x7103c  dsll32      $v0, $a3, 0
    ctx->pc = 0x293f54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 0));
label_293f58:
    // 0x293f58: 0x3407ffff  ori         $a3, $zero, 0xFFFF
    ctx->pc = 0x293f58u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_293f5c:
    // 0x293f5c: 0x72438  dsll        $a0, $a3, 16
    ctx->pc = 0x293f5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) << 16);
label_293f60:
    // 0x293f60: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x293f60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_293f64:
    // 0x293f64: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x293f64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_293f68:
    // 0x293f68: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x293f68u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
label_293f6c:
    // 0x293f6c: 0xa31025  or          $v0, $a1, $v1
    ctx->pc = 0x293f6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_293f70:
    // 0x293f70: 0xfcc20018  sd          $v0, 0x18($a2)
    ctx->pc = 0x293f70u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 2));
label_293f74:
    // 0x293f74: 0x26460004  addiu       $a2, $s2, 0x4
    ctx->pc = 0x293f74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_293f78:
    // 0x293f78: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x293f78u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_293f7c:
    // 0x293f7c: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x293f7cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_293f80:
    // 0x293f80: 0xc05dbd8  jal         func_176F60
label_293f84:
    if (ctx->pc == 0x293F84u) {
        ctx->pc = 0x293F88u;
        goto label_293f88;
    }
    ctx->pc = 0x293F80u;
    SET_GPR_U32(ctx, 31, 0x293F88u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x293F80u, 0x293F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293F88u;
label_293f88:
    // 0x293f88: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x293f88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_293f8c:
    // 0x293f8c: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x293f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
label_293f90:
    // 0x293f90: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x293f90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
label_293f94:
    // 0x293f94: 0x34651009  ori         $a1, $v1, 0x1009
    ctx->pc = 0x293f94u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4105);
label_293f98:
    // 0x293f98: 0xaea50004  sw          $a1, 0x4($s5)
    ctx->pc = 0x293f98u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 5));
label_293f9c:
    // 0x293f9c: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x293f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_293fa0:
    // 0x293fa0: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x293fa0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
label_293fa4:
    // 0x293fa4: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x293fa4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_293fa8:
    // 0x293fa8: 0x32138  dsll        $a0, $v1, 4
    ctx->pc = 0x293fa8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << 4);
label_293fac:
    // 0x293fac: 0x3483000a  ori         $v1, $a0, 0xA
    ctx->pc = 0x293facu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)10);
label_293fb0:
    // 0x293fb0: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x293fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_293fb4:
    // 0x293fb4: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x293fb4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_293fb8:
    // 0x293fb8: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x293fb8u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
label_293fbc:
    // 0x293fbc: 0x413b8  dsll        $v0, $a0, 14
    ctx->pc = 0x293fbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << 14);
label_293fc0:
    // 0x293fc0: 0x622825  or          $a1, $v1, $v0
    ctx->pc = 0x293fc0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_293fc4:
    // 0x293fc4: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x293fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_293fc8:
    // 0x293fc8: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x293fc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
label_293fcc:
    // 0x293fcc: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x293fccu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_293fd0:
    // 0x293fd0: 0x32638  dsll        $a0, $v1, 24
    ctx->pc = 0x293fd0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << 24);
label_293fd4:
    // 0x293fd4: 0x853825  or          $a3, $a0, $a1
    ctx->pc = 0x293fd4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_293fd8:
    // 0x293fd8: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x293fd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_293fdc:
    // 0x293fdc: 0x5183c  dsll32      $v1, $a1, 0
    ctx->pc = 0x293fdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 0));
label_293fe0:
    // 0x293fe0: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x293fe0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_293fe4:
    // 0x293fe4: 0x330bc  dsll32      $a2, $v1, 2
    ctx->pc = 0x293fe4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 2));
label_293fe8:
    // 0x293fe8: 0xc71025  or          $v0, $a2, $a3
    ctx->pc = 0x293fe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
label_293fec:
    // 0x293fec: 0xfea20008  sd          $v0, 0x8($s5)
    ctx->pc = 0x293fecu;
    WRITE64(ADD32(GPR_U32(ctx, 21), 8), GPR_U64(ctx, 2));
label_293ff0:
    // 0x293ff0: 0x26440004  addiu       $a0, $s2, 0x4
    ctx->pc = 0x293ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_293ff4:
    // 0x293ff4: 0x72a02e28  paddub      $a1, $s5, $zero
    ctx->pc = 0x293ff4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
label_293ff8:
    // 0x293ff8: 0xc05dbd8  jal         func_176F60
label_293ffc:
    if (ctx->pc == 0x293FFCu) {
        ctx->pc = 0x294000u;
        goto label_294000;
    }
    ctx->pc = 0x293FF8u;
    SET_GPR_U32(ctx, 31, 0x294000u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x293FF8u, 0x294000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294000u;
label_294000:
    // 0x294000: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x294000u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_294004:
    // 0x294004: 0x26a20010  addiu       $v0, $s5, 0x10
    ctx->pc = 0x294004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
label_294008:
    // 0x294008: 0x7040ae28  paddub      $s5, $v0, $zero
    ctx->pc = 0x294008u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_29400c:
    // 0x29400c: 0x2603002c  addiu       $v1, $s0, 0x2C
    ctx->pc = 0x29400cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
label_294010:
    // 0x294010: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x294010u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_294014:
    // 0x294014: 0x26e20008  addiu       $v0, $s7, 0x8
    ctx->pc = 0x294014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 8));
label_294018:
    // 0x294018: 0x7040be28  paddub      $s7, $v0, $zero
    ctx->pc = 0x294018u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_29401c:
    // 0x29401c: 0x8fa20158  lw          $v0, 0x158($sp)
    ctx->pc = 0x29401cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
label_294020:
    // 0x294020: 0x24430028  addiu       $v1, $v0, 0x28
    ctx->pc = 0x294020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_294024:
    // 0x294024: 0xafa30158  sw          $v1, 0x158($sp)
    ctx->pc = 0x294024u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 344), GPR_U32(ctx, 3));
label_294028:
    // 0x294028: 0x26620001  addiu       $v0, $s3, 0x1
    ctx->pc = 0x294028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_29402c:
    // 0x29402c: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x29402cu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_294030:
    // 0x294030: 0x2a620003  slti        $v0, $s3, 0x3
    ctx->pc = 0x294030u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)3) ? 1 : 0);
label_294034:
    // 0x294034: 0x1440ff41  bnez        $v0, . + 4 + (-0xBF << 2)
label_294038:
    if (ctx->pc == 0x294038u) {
        ctx->pc = 0x29403Cu;
        goto label_29403c;
    }
    ctx->pc = 0x294034u;
    {
        const bool branch_taken_0x294034 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x294034) {
            ctx->pc = 0x293D3Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_293d3c;
        }
    }
    ctx->pc = 0x29403Cu;
label_29403c:
    // 0x29403c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x29403cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_294040:
    // 0x294040: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x294040u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_294044:
    // 0x294044: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x294044u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
label_294048:
    // 0x294048: 0x34421043  ori         $v0, $v0, 0x1043
    ctx->pc = 0x294048u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4163);
label_29404c:
    // 0x29404c: 0xae820004  sw          $v0, 0x4($s4)
    ctx->pc = 0x29404cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
label_294050:
    // 0x294050: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x294050u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_294054:
    // 0x294054: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x294054u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
label_294058:
    // 0x294058: 0x24030068  addiu       $v1, $zero, 0x68
    ctx->pc = 0x294058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
label_29405c:
    // 0x29405c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x29405cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_294060:
    // 0x294060: 0xfe820008  sd          $v0, 0x8($s4)
    ctx->pc = 0x294060u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 2));
label_294064:
    // 0x294064: 0x26430004  addiu       $v1, $s2, 0x4
    ctx->pc = 0x294064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_294068:
    // 0x294068: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x294068u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_29406c:
    // 0x29406c: 0x72802e28  paddub      $a1, $s4, $zero
    ctx->pc = 0x29406cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
label_294070:
    // 0x294070: 0xc05dbd8  jal         func_176F60
label_294074:
    if (ctx->pc == 0x294074u) {
        ctx->pc = 0x294078u;
        goto label_294078;
    }
    ctx->pc = 0x294070u;
    SET_GPR_U32(ctx, 31, 0x294078u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x294070u, 0x294078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294078u;
label_294078:
    // 0x294078: 0x26820010  addiu       $v0, $s4, 0x10
    ctx->pc = 0x294078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
label_29407c:
    // 0x29407c: 0x7fa20110  sq          $v0, 0x110($sp)
    ctx->pc = 0x29407cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 2));
label_294080:
    // 0x294080: 0x7bb40110  lq          $s4, 0x110($sp)
    ctx->pc = 0x294080u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_294084:
    // 0x294084: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x294084u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_294088:
    // 0x294088: 0xae840000  sw          $a0, 0x0($s4)
    ctx->pc = 0x294088u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 4));
label_29408c:
    // 0x29408c: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x29408cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
label_294090:
    // 0x294090: 0x34421015  ori         $v0, $v0, 0x1015
    ctx->pc = 0x294090u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4117);
label_294094:
    // 0x294094: 0xae820004  sw          $v0, 0x4($s4)
    ctx->pc = 0x294094u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
label_294098:
    // 0x294098: 0x24020060  addiu       $v0, $zero, 0x60
    ctx->pc = 0x294098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_29409c:
    // 0x29409c: 0xfe820008  sd          $v0, 0x8($s4)
    ctx->pc = 0x29409cu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 2));
label_2940a0:
    // 0x2940a0: 0x26420004  addiu       $v0, $s2, 0x4
    ctx->pc = 0x2940a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_2940a4:
    // 0x2940a4: 0x7fa20100  sq          $v0, 0x100($sp)
    ctx->pc = 0x2940a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 2));
label_2940a8:
    // 0x2940a8: 0x7ba40100  lq          $a0, 0x100($sp)
    ctx->pc = 0x2940a8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_2940ac:
    // 0x2940ac: 0x72802e28  paddub      $a1, $s4, $zero
    ctx->pc = 0x2940acu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
label_2940b0:
    // 0x2940b0: 0xc05dbd8  jal         func_176F60
label_2940b4:
    if (ctx->pc == 0x2940B4u) {
        ctx->pc = 0x2940B8u;
        goto label_2940b8;
    }
    ctx->pc = 0x2940B0u;
    SET_GPR_U32(ctx, 31, 0x2940B8u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x2940B0u, 0x2940B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2940B8u;
label_2940b8:
    // 0x2940b8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2940b8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2940bc:
    // 0x2940bc: 0x26820010  addiu       $v0, $s4, 0x10
    ctx->pc = 0x2940bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
label_2940c0:
    // 0x2940c0: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x2940c0u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2940c4:
    // 0x2940c4: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x2940c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_2940c8:
    // 0x2940c8: 0xae840000  sw          $a0, 0x0($s4)
    ctx->pc = 0x2940c8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 4));
label_2940cc:
    // 0x2940cc: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x2940ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
label_2940d0:
    // 0x2940d0: 0x7fa200f0  sq          $v0, 0xF0($sp)
    ctx->pc = 0x2940d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
label_2940d4:
    // 0x2940d4: 0x7ba200f0  lq          $v0, 0xF0($sp)
    ctx->pc = 0x2940d4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_2940d8:
    // 0x2940d8: 0x34421043  ori         $v0, $v0, 0x1043
    ctx->pc = 0x2940d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4163);
label_2940dc:
    // 0x2940dc: 0xae820004  sw          $v0, 0x4($s4)
    ctx->pc = 0x2940dcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
label_2940e0:
    // 0x2940e0: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x2940e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_2940e4:
    // 0x2940e4: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x2940e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
label_2940e8:
    // 0x2940e8: 0x24040068  addiu       $a0, $zero, 0x68
    ctx->pc = 0x2940e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
label_2940ec:
    // 0x2940ec: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x2940ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_2940f0:
    // 0x2940f0: 0xfe820008  sd          $v0, 0x8($s4)
    ctx->pc = 0x2940f0u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 2));
label_2940f4:
    // 0x2940f4: 0x26420004  addiu       $v0, $s2, 0x4
    ctx->pc = 0x2940f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_2940f8:
    // 0x2940f8: 0x7fa200e0  sq          $v0, 0xE0($sp)
    ctx->pc = 0x2940f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
label_2940fc:
    // 0x2940fc: 0x7ba400e0  lq          $a0, 0xE0($sp)
    ctx->pc = 0x2940fcu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_294100:
    // 0x294100: 0x72802e28  paddub      $a1, $s4, $zero
    ctx->pc = 0x294100u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
label_294104:
    // 0x294104: 0xc05dbd8  jal         func_176F60
label_294108:
    if (ctx->pc == 0x294108u) {
        ctx->pc = 0x29410Cu;
        goto label_29410c;
    }
    ctx->pc = 0x294104u;
    SET_GPR_U32(ctx, 31, 0x29410Cu);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x294104u, 0x29410Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29410Cu;
label_29410c:
    // 0x29410c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x29410cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_294110:
    // 0x294110: 0x26820010  addiu       $v0, $s4, 0x10
    ctx->pc = 0x294110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
label_294114:
    // 0x294114: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x294114u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_294118:
    // 0x294118: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x294118u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_29411c:
    // 0x29411c: 0xae840000  sw          $a0, 0x0($s4)
    ctx->pc = 0x29411cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 4));
label_294120:
    // 0x294120: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x294120u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
label_294124:
    // 0x294124: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x294124u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
label_294128:
    // 0x294128: 0x7ba200d0  lq          $v0, 0xD0($sp)
    ctx->pc = 0x294128u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_29412c:
    // 0x29412c: 0x34421048  ori         $v0, $v0, 0x1048
    ctx->pc = 0x29412cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4168);
label_294130:
    // 0x294130: 0xae820004  sw          $v0, 0x4($s4)
    ctx->pc = 0x294130u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
label_294134:
    // 0x294134: 0xfe800008  sd          $zero, 0x8($s4)
    ctx->pc = 0x294134u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 0));
label_294138:
    // 0x294138: 0x26440004  addiu       $a0, $s2, 0x4
    ctx->pc = 0x294138u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_29413c:
    // 0x29413c: 0x72802e28  paddub      $a1, $s4, $zero
    ctx->pc = 0x29413cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
label_294140:
    // 0x294140: 0xc05dbd8  jal         func_176F60
label_294144:
    if (ctx->pc == 0x294144u) {
        ctx->pc = 0x294148u;
        goto label_294148;
    }
    ctx->pc = 0x294140u;
    SET_GPR_U32(ctx, 31, 0x294148u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x294140u, 0x294148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294148u;
label_294148:
    // 0x294148: 0x26840010  addiu       $a0, $s4, 0x10
    ctx->pc = 0x294148u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
label_29414c:
    // 0x29414c: 0x7080a628  paddub      $s4, $a0, $zero
    ctx->pc = 0x29414cu;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
label_294150:
    // 0x294150: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x294150u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
label_294154:
    // 0x294154: 0xae860000  sw          $a2, 0x0($s4)
    ctx->pc = 0x294154u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 6));
label_294158:
    // 0x294158: 0x3c040400  lui         $a0, 0x400
    ctx->pc = 0x294158u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1024 << 16));
label_29415c:
    // 0x29415c: 0x3482103f  ori         $v0, $a0, 0x103F
    ctx->pc = 0x29415cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4159);
label_294160:
    // 0x294160: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x294160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
label_294164:
    // 0x294164: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x294164u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_294168:
    // 0x294168: 0xae820004  sw          $v0, 0x4($s4)
    ctx->pc = 0x294168u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
label_29416c:
    // 0x29416c: 0x26440004  addiu       $a0, $s2, 0x4
    ctx->pc = 0x29416cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_294170:
    // 0x294170: 0x72802e28  paddub      $a1, $s4, $zero
    ctx->pc = 0x294170u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
label_294174:
    // 0x294174: 0xc05dbd8  jal         func_176F60
label_294178:
    if (ctx->pc == 0x294178u) {
        ctx->pc = 0x29417Cu;
        goto label_29417c;
    }
    ctx->pc = 0x294174u;
    SET_GPR_U32(ctx, 31, 0x29417Cu);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x294174u, 0x29417Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29417Cu;
label_29417c:
    // 0x29417c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x29417cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_294180:
    // 0x294180: 0x26860010  addiu       $a2, $s4, 0x10
    ctx->pc = 0x294180u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
label_294184:
    // 0x294184: 0x70c0a628  paddub      $s4, $a2, $zero
    ctx->pc = 0x294184u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_294188:
    // 0x294188: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x294188u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_29418c:
    // 0x29418c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x29418cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_294190:
    // 0x294190: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x294190u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_294194:
    // 0x294194: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x294194u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_294198:
    // 0x294198: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x294198u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_29419c:
    // 0x29419c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x29419cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2941a0:
    // 0x2941a0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2941a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2941a4:
    // 0x2941a4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2941a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2941a8:
    // 0x2941a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2941a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2941ac:
    // 0x2941ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2941acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2941b0:
    // 0x2941b0: 0x27bd0170  addiu       $sp, $sp, 0x170
    ctx->pc = 0x2941b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_2941b4:
    // 0x2941b4: 0x3e00008  jr          $ra
label_2941b8:
    if (ctx->pc == 0x2941B8u) {
        ctx->pc = 0x2941BCu;
        goto label_fallthrough_0x2941b4;
    }
    ctx->pc = 0x2941B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2941B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2941b4:
    ctx->pc = 0x2941BCu;
}
