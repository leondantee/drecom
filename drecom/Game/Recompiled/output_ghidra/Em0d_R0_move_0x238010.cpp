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

// Function: Em0d_R0_move
// Address: 0x238010 - 0x2387f4
void Em0d_R0_move_0x238010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0d_R0_move_0x238010");
#endif

    switch (ctx->pc) {
        case 0x238010u: goto label_238010;
        case 0x238014u: goto label_238014;
        case 0x238018u: goto label_238018;
        case 0x23801cu: goto label_23801c;
        case 0x238020u: goto label_238020;
        case 0x238024u: goto label_238024;
        case 0x238028u: goto label_238028;
        case 0x23802cu: goto label_23802c;
        case 0x238030u: goto label_238030;
        case 0x238034u: goto label_238034;
        case 0x238038u: goto label_238038;
        case 0x23803cu: goto label_23803c;
        case 0x238040u: goto label_238040;
        case 0x238044u: goto label_238044;
        case 0x238048u: goto label_238048;
        case 0x23804cu: goto label_23804c;
        case 0x238050u: goto label_238050;
        case 0x238054u: goto label_238054;
        case 0x238058u: goto label_238058;
        case 0x23805cu: goto label_23805c;
        case 0x238060u: goto label_238060;
        case 0x238064u: goto label_238064;
        case 0x238068u: goto label_238068;
        case 0x23806cu: goto label_23806c;
        case 0x238070u: goto label_238070;
        case 0x238074u: goto label_238074;
        case 0x238078u: goto label_238078;
        case 0x23807cu: goto label_23807c;
        case 0x238080u: goto label_238080;
        case 0x238084u: goto label_238084;
        case 0x238088u: goto label_238088;
        case 0x23808cu: goto label_23808c;
        case 0x238090u: goto label_238090;
        case 0x238094u: goto label_238094;
        case 0x238098u: goto label_238098;
        case 0x23809cu: goto label_23809c;
        case 0x2380a0u: goto label_2380a0;
        case 0x2380a4u: goto label_2380a4;
        case 0x2380a8u: goto label_2380a8;
        case 0x2380acu: goto label_2380ac;
        case 0x2380b0u: goto label_2380b0;
        case 0x2380b4u: goto label_2380b4;
        case 0x2380b8u: goto label_2380b8;
        case 0x2380bcu: goto label_2380bc;
        case 0x2380c0u: goto label_2380c0;
        case 0x2380c4u: goto label_2380c4;
        case 0x2380c8u: goto label_2380c8;
        case 0x2380ccu: goto label_2380cc;
        case 0x2380d0u: goto label_2380d0;
        case 0x2380d4u: goto label_2380d4;
        case 0x2380d8u: goto label_2380d8;
        case 0x2380dcu: goto label_2380dc;
        case 0x2380e0u: goto label_2380e0;
        case 0x2380e4u: goto label_2380e4;
        case 0x2380e8u: goto label_2380e8;
        case 0x2380ecu: goto label_2380ec;
        case 0x2380f0u: goto label_2380f0;
        case 0x2380f4u: goto label_2380f4;
        case 0x2380f8u: goto label_2380f8;
        case 0x2380fcu: goto label_2380fc;
        case 0x238100u: goto label_238100;
        case 0x238104u: goto label_238104;
        case 0x238108u: goto label_238108;
        case 0x23810cu: goto label_23810c;
        case 0x238110u: goto label_238110;
        case 0x238114u: goto label_238114;
        case 0x238118u: goto label_238118;
        case 0x23811cu: goto label_23811c;
        case 0x238120u: goto label_238120;
        case 0x238124u: goto label_238124;
        case 0x238128u: goto label_238128;
        case 0x23812cu: goto label_23812c;
        case 0x238130u: goto label_238130;
        case 0x238134u: goto label_238134;
        case 0x238138u: goto label_238138;
        case 0x23813cu: goto label_23813c;
        case 0x238140u: goto label_238140;
        case 0x238144u: goto label_238144;
        case 0x238148u: goto label_238148;
        case 0x23814cu: goto label_23814c;
        case 0x238150u: goto label_238150;
        case 0x238154u: goto label_238154;
        case 0x238158u: goto label_238158;
        case 0x23815cu: goto label_23815c;
        case 0x238160u: goto label_238160;
        case 0x238164u: goto label_238164;
        case 0x238168u: goto label_238168;
        case 0x23816cu: goto label_23816c;
        case 0x238170u: goto label_238170;
        case 0x238174u: goto label_238174;
        case 0x238178u: goto label_238178;
        case 0x23817cu: goto label_23817c;
        case 0x238180u: goto label_238180;
        case 0x238184u: goto label_238184;
        case 0x238188u: goto label_238188;
        case 0x23818cu: goto label_23818c;
        case 0x238190u: goto label_238190;
        case 0x238194u: goto label_238194;
        case 0x238198u: goto label_238198;
        case 0x23819cu: goto label_23819c;
        case 0x2381a0u: goto label_2381a0;
        case 0x2381a4u: goto label_2381a4;
        case 0x2381a8u: goto label_2381a8;
        case 0x2381acu: goto label_2381ac;
        case 0x2381b0u: goto label_2381b0;
        case 0x2381b4u: goto label_2381b4;
        case 0x2381b8u: goto label_2381b8;
        case 0x2381bcu: goto label_2381bc;
        case 0x2381c0u: goto label_2381c0;
        case 0x2381c4u: goto label_2381c4;
        case 0x2381c8u: goto label_2381c8;
        case 0x2381ccu: goto label_2381cc;
        case 0x2381d0u: goto label_2381d0;
        case 0x2381d4u: goto label_2381d4;
        case 0x2381d8u: goto label_2381d8;
        case 0x2381dcu: goto label_2381dc;
        case 0x2381e0u: goto label_2381e0;
        case 0x2381e4u: goto label_2381e4;
        case 0x2381e8u: goto label_2381e8;
        case 0x2381ecu: goto label_2381ec;
        case 0x2381f0u: goto label_2381f0;
        case 0x2381f4u: goto label_2381f4;
        case 0x2381f8u: goto label_2381f8;
        case 0x2381fcu: goto label_2381fc;
        case 0x238200u: goto label_238200;
        case 0x238204u: goto label_238204;
        case 0x238208u: goto label_238208;
        case 0x23820cu: goto label_23820c;
        case 0x238210u: goto label_238210;
        case 0x238214u: goto label_238214;
        case 0x238218u: goto label_238218;
        case 0x23821cu: goto label_23821c;
        case 0x238220u: goto label_238220;
        case 0x238224u: goto label_238224;
        case 0x238228u: goto label_238228;
        case 0x23822cu: goto label_23822c;
        case 0x238230u: goto label_238230;
        case 0x238234u: goto label_238234;
        case 0x238238u: goto label_238238;
        case 0x23823cu: goto label_23823c;
        case 0x238240u: goto label_238240;
        case 0x238244u: goto label_238244;
        case 0x238248u: goto label_238248;
        case 0x23824cu: goto label_23824c;
        case 0x238250u: goto label_238250;
        case 0x238254u: goto label_238254;
        case 0x238258u: goto label_238258;
        case 0x23825cu: goto label_23825c;
        case 0x238260u: goto label_238260;
        case 0x238264u: goto label_238264;
        case 0x238268u: goto label_238268;
        case 0x23826cu: goto label_23826c;
        case 0x238270u: goto label_238270;
        case 0x238274u: goto label_238274;
        case 0x238278u: goto label_238278;
        case 0x23827cu: goto label_23827c;
        case 0x238280u: goto label_238280;
        case 0x238284u: goto label_238284;
        case 0x238288u: goto label_238288;
        case 0x23828cu: goto label_23828c;
        case 0x238290u: goto label_238290;
        case 0x238294u: goto label_238294;
        case 0x238298u: goto label_238298;
        case 0x23829cu: goto label_23829c;
        case 0x2382a0u: goto label_2382a0;
        case 0x2382a4u: goto label_2382a4;
        case 0x2382a8u: goto label_2382a8;
        case 0x2382acu: goto label_2382ac;
        case 0x2382b0u: goto label_2382b0;
        case 0x2382b4u: goto label_2382b4;
        case 0x2382b8u: goto label_2382b8;
        case 0x2382bcu: goto label_2382bc;
        case 0x2382c0u: goto label_2382c0;
        case 0x2382c4u: goto label_2382c4;
        case 0x2382c8u: goto label_2382c8;
        case 0x2382ccu: goto label_2382cc;
        case 0x2382d0u: goto label_2382d0;
        case 0x2382d4u: goto label_2382d4;
        case 0x2382d8u: goto label_2382d8;
        case 0x2382dcu: goto label_2382dc;
        case 0x2382e0u: goto label_2382e0;
        case 0x2382e4u: goto label_2382e4;
        case 0x2382e8u: goto label_2382e8;
        case 0x2382ecu: goto label_2382ec;
        case 0x2382f0u: goto label_2382f0;
        case 0x2382f4u: goto label_2382f4;
        case 0x2382f8u: goto label_2382f8;
        case 0x2382fcu: goto label_2382fc;
        case 0x238300u: goto label_238300;
        case 0x238304u: goto label_238304;
        case 0x238308u: goto label_238308;
        case 0x23830cu: goto label_23830c;
        case 0x238310u: goto label_238310;
        case 0x238314u: goto label_238314;
        case 0x238318u: goto label_238318;
        case 0x23831cu: goto label_23831c;
        case 0x238320u: goto label_238320;
        case 0x238324u: goto label_238324;
        case 0x238328u: goto label_238328;
        case 0x23832cu: goto label_23832c;
        case 0x238330u: goto label_238330;
        case 0x238334u: goto label_238334;
        case 0x238338u: goto label_238338;
        case 0x23833cu: goto label_23833c;
        case 0x238340u: goto label_238340;
        case 0x238344u: goto label_238344;
        case 0x238348u: goto label_238348;
        case 0x23834cu: goto label_23834c;
        case 0x238350u: goto label_238350;
        case 0x238354u: goto label_238354;
        case 0x238358u: goto label_238358;
        case 0x23835cu: goto label_23835c;
        case 0x238360u: goto label_238360;
        case 0x238364u: goto label_238364;
        case 0x238368u: goto label_238368;
        case 0x23836cu: goto label_23836c;
        case 0x238370u: goto label_238370;
        case 0x238374u: goto label_238374;
        case 0x238378u: goto label_238378;
        case 0x23837cu: goto label_23837c;
        case 0x238380u: goto label_238380;
        case 0x238384u: goto label_238384;
        case 0x238388u: goto label_238388;
        case 0x23838cu: goto label_23838c;
        case 0x238390u: goto label_238390;
        case 0x238394u: goto label_238394;
        case 0x238398u: goto label_238398;
        case 0x23839cu: goto label_23839c;
        case 0x2383a0u: goto label_2383a0;
        case 0x2383a4u: goto label_2383a4;
        case 0x2383a8u: goto label_2383a8;
        case 0x2383acu: goto label_2383ac;
        case 0x2383b0u: goto label_2383b0;
        case 0x2383b4u: goto label_2383b4;
        case 0x2383b8u: goto label_2383b8;
        case 0x2383bcu: goto label_2383bc;
        case 0x2383c0u: goto label_2383c0;
        case 0x2383c4u: goto label_2383c4;
        case 0x2383c8u: goto label_2383c8;
        case 0x2383ccu: goto label_2383cc;
        case 0x2383d0u: goto label_2383d0;
        case 0x2383d4u: goto label_2383d4;
        case 0x2383d8u: goto label_2383d8;
        case 0x2383dcu: goto label_2383dc;
        case 0x2383e0u: goto label_2383e0;
        case 0x2383e4u: goto label_2383e4;
        case 0x2383e8u: goto label_2383e8;
        case 0x2383ecu: goto label_2383ec;
        case 0x2383f0u: goto label_2383f0;
        case 0x2383f4u: goto label_2383f4;
        case 0x2383f8u: goto label_2383f8;
        case 0x2383fcu: goto label_2383fc;
        case 0x238400u: goto label_238400;
        case 0x238404u: goto label_238404;
        case 0x238408u: goto label_238408;
        case 0x23840cu: goto label_23840c;
        case 0x238410u: goto label_238410;
        case 0x238414u: goto label_238414;
        case 0x238418u: goto label_238418;
        case 0x23841cu: goto label_23841c;
        case 0x238420u: goto label_238420;
        case 0x238424u: goto label_238424;
        case 0x238428u: goto label_238428;
        case 0x23842cu: goto label_23842c;
        case 0x238430u: goto label_238430;
        case 0x238434u: goto label_238434;
        case 0x238438u: goto label_238438;
        case 0x23843cu: goto label_23843c;
        case 0x238440u: goto label_238440;
        case 0x238444u: goto label_238444;
        case 0x238448u: goto label_238448;
        case 0x23844cu: goto label_23844c;
        case 0x238450u: goto label_238450;
        case 0x238454u: goto label_238454;
        case 0x238458u: goto label_238458;
        case 0x23845cu: goto label_23845c;
        case 0x238460u: goto label_238460;
        case 0x238464u: goto label_238464;
        case 0x238468u: goto label_238468;
        case 0x23846cu: goto label_23846c;
        case 0x238470u: goto label_238470;
        case 0x238474u: goto label_238474;
        case 0x238478u: goto label_238478;
        case 0x23847cu: goto label_23847c;
        case 0x238480u: goto label_238480;
        case 0x238484u: goto label_238484;
        case 0x238488u: goto label_238488;
        case 0x23848cu: goto label_23848c;
        case 0x238490u: goto label_238490;
        case 0x238494u: goto label_238494;
        case 0x238498u: goto label_238498;
        case 0x23849cu: goto label_23849c;
        case 0x2384a0u: goto label_2384a0;
        case 0x2384a4u: goto label_2384a4;
        case 0x2384a8u: goto label_2384a8;
        case 0x2384acu: goto label_2384ac;
        case 0x2384b0u: goto label_2384b0;
        case 0x2384b4u: goto label_2384b4;
        case 0x2384b8u: goto label_2384b8;
        case 0x2384bcu: goto label_2384bc;
        case 0x2384c0u: goto label_2384c0;
        case 0x2384c4u: goto label_2384c4;
        case 0x2384c8u: goto label_2384c8;
        case 0x2384ccu: goto label_2384cc;
        case 0x2384d0u: goto label_2384d0;
        case 0x2384d4u: goto label_2384d4;
        case 0x2384d8u: goto label_2384d8;
        case 0x2384dcu: goto label_2384dc;
        case 0x2384e0u: goto label_2384e0;
        case 0x2384e4u: goto label_2384e4;
        case 0x2384e8u: goto label_2384e8;
        case 0x2384ecu: goto label_2384ec;
        case 0x2384f0u: goto label_2384f0;
        case 0x2384f4u: goto label_2384f4;
        case 0x2384f8u: goto label_2384f8;
        case 0x2384fcu: goto label_2384fc;
        case 0x238500u: goto label_238500;
        case 0x238504u: goto label_238504;
        case 0x238508u: goto label_238508;
        case 0x23850cu: goto label_23850c;
        case 0x238510u: goto label_238510;
        case 0x238514u: goto label_238514;
        case 0x238518u: goto label_238518;
        case 0x23851cu: goto label_23851c;
        case 0x238520u: goto label_238520;
        case 0x238524u: goto label_238524;
        case 0x238528u: goto label_238528;
        case 0x23852cu: goto label_23852c;
        case 0x238530u: goto label_238530;
        case 0x238534u: goto label_238534;
        case 0x238538u: goto label_238538;
        case 0x23853cu: goto label_23853c;
        case 0x238540u: goto label_238540;
        case 0x238544u: goto label_238544;
        case 0x238548u: goto label_238548;
        case 0x23854cu: goto label_23854c;
        case 0x238550u: goto label_238550;
        case 0x238554u: goto label_238554;
        case 0x238558u: goto label_238558;
        case 0x23855cu: goto label_23855c;
        case 0x238560u: goto label_238560;
        case 0x238564u: goto label_238564;
        case 0x238568u: goto label_238568;
        case 0x23856cu: goto label_23856c;
        case 0x238570u: goto label_238570;
        case 0x238574u: goto label_238574;
        case 0x238578u: goto label_238578;
        case 0x23857cu: goto label_23857c;
        case 0x238580u: goto label_238580;
        case 0x238584u: goto label_238584;
        case 0x238588u: goto label_238588;
        case 0x23858cu: goto label_23858c;
        case 0x238590u: goto label_238590;
        case 0x238594u: goto label_238594;
        case 0x238598u: goto label_238598;
        case 0x23859cu: goto label_23859c;
        case 0x2385a0u: goto label_2385a0;
        case 0x2385a4u: goto label_2385a4;
        case 0x2385a8u: goto label_2385a8;
        case 0x2385acu: goto label_2385ac;
        case 0x2385b0u: goto label_2385b0;
        case 0x2385b4u: goto label_2385b4;
        case 0x2385b8u: goto label_2385b8;
        case 0x2385bcu: goto label_2385bc;
        case 0x2385c0u: goto label_2385c0;
        case 0x2385c4u: goto label_2385c4;
        case 0x2385c8u: goto label_2385c8;
        case 0x2385ccu: goto label_2385cc;
        case 0x2385d0u: goto label_2385d0;
        case 0x2385d4u: goto label_2385d4;
        case 0x2385d8u: goto label_2385d8;
        case 0x2385dcu: goto label_2385dc;
        case 0x2385e0u: goto label_2385e0;
        case 0x2385e4u: goto label_2385e4;
        case 0x2385e8u: goto label_2385e8;
        case 0x2385ecu: goto label_2385ec;
        case 0x2385f0u: goto label_2385f0;
        case 0x2385f4u: goto label_2385f4;
        case 0x2385f8u: goto label_2385f8;
        case 0x2385fcu: goto label_2385fc;
        case 0x238600u: goto label_238600;
        case 0x238604u: goto label_238604;
        case 0x238608u: goto label_238608;
        case 0x23860cu: goto label_23860c;
        case 0x238610u: goto label_238610;
        case 0x238614u: goto label_238614;
        case 0x238618u: goto label_238618;
        case 0x23861cu: goto label_23861c;
        case 0x238620u: goto label_238620;
        case 0x238624u: goto label_238624;
        case 0x238628u: goto label_238628;
        case 0x23862cu: goto label_23862c;
        case 0x238630u: goto label_238630;
        case 0x238634u: goto label_238634;
        case 0x238638u: goto label_238638;
        case 0x23863cu: goto label_23863c;
        case 0x238640u: goto label_238640;
        case 0x238644u: goto label_238644;
        case 0x238648u: goto label_238648;
        case 0x23864cu: goto label_23864c;
        case 0x238650u: goto label_238650;
        case 0x238654u: goto label_238654;
        case 0x238658u: goto label_238658;
        case 0x23865cu: goto label_23865c;
        case 0x238660u: goto label_238660;
        case 0x238664u: goto label_238664;
        case 0x238668u: goto label_238668;
        case 0x23866cu: goto label_23866c;
        case 0x238670u: goto label_238670;
        case 0x238674u: goto label_238674;
        case 0x238678u: goto label_238678;
        case 0x23867cu: goto label_23867c;
        case 0x238680u: goto label_238680;
        case 0x238684u: goto label_238684;
        case 0x238688u: goto label_238688;
        case 0x23868cu: goto label_23868c;
        case 0x238690u: goto label_238690;
        case 0x238694u: goto label_238694;
        case 0x238698u: goto label_238698;
        case 0x23869cu: goto label_23869c;
        case 0x2386a0u: goto label_2386a0;
        case 0x2386a4u: goto label_2386a4;
        case 0x2386a8u: goto label_2386a8;
        case 0x2386acu: goto label_2386ac;
        case 0x2386b0u: goto label_2386b0;
        case 0x2386b4u: goto label_2386b4;
        case 0x2386b8u: goto label_2386b8;
        case 0x2386bcu: goto label_2386bc;
        case 0x2386c0u: goto label_2386c0;
        case 0x2386c4u: goto label_2386c4;
        case 0x2386c8u: goto label_2386c8;
        case 0x2386ccu: goto label_2386cc;
        case 0x2386d0u: goto label_2386d0;
        case 0x2386d4u: goto label_2386d4;
        case 0x2386d8u: goto label_2386d8;
        case 0x2386dcu: goto label_2386dc;
        case 0x2386e0u: goto label_2386e0;
        case 0x2386e4u: goto label_2386e4;
        case 0x2386e8u: goto label_2386e8;
        case 0x2386ecu: goto label_2386ec;
        case 0x2386f0u: goto label_2386f0;
        case 0x2386f4u: goto label_2386f4;
        case 0x2386f8u: goto label_2386f8;
        case 0x2386fcu: goto label_2386fc;
        case 0x238700u: goto label_238700;
        case 0x238704u: goto label_238704;
        case 0x238708u: goto label_238708;
        case 0x23870cu: goto label_23870c;
        case 0x238710u: goto label_238710;
        case 0x238714u: goto label_238714;
        case 0x238718u: goto label_238718;
        case 0x23871cu: goto label_23871c;
        case 0x238720u: goto label_238720;
        case 0x238724u: goto label_238724;
        case 0x238728u: goto label_238728;
        case 0x23872cu: goto label_23872c;
        case 0x238730u: goto label_238730;
        case 0x238734u: goto label_238734;
        case 0x238738u: goto label_238738;
        case 0x23873cu: goto label_23873c;
        case 0x238740u: goto label_238740;
        case 0x238744u: goto label_238744;
        case 0x238748u: goto label_238748;
        case 0x23874cu: goto label_23874c;
        case 0x238750u: goto label_238750;
        case 0x238754u: goto label_238754;
        case 0x238758u: goto label_238758;
        case 0x23875cu: goto label_23875c;
        case 0x238760u: goto label_238760;
        case 0x238764u: goto label_238764;
        case 0x238768u: goto label_238768;
        case 0x23876cu: goto label_23876c;
        case 0x238770u: goto label_238770;
        case 0x238774u: goto label_238774;
        case 0x238778u: goto label_238778;
        case 0x23877cu: goto label_23877c;
        case 0x238780u: goto label_238780;
        case 0x238784u: goto label_238784;
        case 0x238788u: goto label_238788;
        case 0x23878cu: goto label_23878c;
        case 0x238790u: goto label_238790;
        case 0x238794u: goto label_238794;
        case 0x238798u: goto label_238798;
        case 0x23879cu: goto label_23879c;
        case 0x2387a0u: goto label_2387a0;
        case 0x2387a4u: goto label_2387a4;
        case 0x2387a8u: goto label_2387a8;
        case 0x2387acu: goto label_2387ac;
        case 0x2387b0u: goto label_2387b0;
        case 0x2387b4u: goto label_2387b4;
        case 0x2387b8u: goto label_2387b8;
        case 0x2387bcu: goto label_2387bc;
        case 0x2387c0u: goto label_2387c0;
        case 0x2387c4u: goto label_2387c4;
        case 0x2387c8u: goto label_2387c8;
        case 0x2387ccu: goto label_2387cc;
        case 0x2387d0u: goto label_2387d0;
        case 0x2387d4u: goto label_2387d4;
        case 0x2387d8u: goto label_2387d8;
        case 0x2387dcu: goto label_2387dc;
        case 0x2387e0u: goto label_2387e0;
        case 0x2387e4u: goto label_2387e4;
        case 0x2387e8u: goto label_2387e8;
        case 0x2387ecu: goto label_2387ec;
        case 0x2387f0u: goto label_2387f0;
        default: break;
    }

    ctx->pc = 0x238010u;

label_238010:
    // 0x238010: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x238010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_238014:
    // 0x238014: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x238014u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
label_238018:
    // 0x238018: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x238018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_23801c:
    // 0x23801c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x23801cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_238020:
    // 0x238020: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x238020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_238024:
    // 0x238024: 0xafa40058  sw          $a0, 0x58($sp)
    ctx->pc = 0x238024u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
label_238028:
    // 0x238028: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x238028u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_23802c:
    // 0x23802c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23802cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_238030:
    // 0x238030: 0x0  nop
    ctx->pc = 0x238030u;
    // NOP
label_238034:
    // 0x238034: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x238034u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_238038:
    // 0x238038: 0x24100064  addiu       $s0, $zero, 0x64
    ctx->pc = 0x238038u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_23803c:
    // 0x23803c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x23803cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_238040:
    // 0x238040: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x238040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_238044:
    // 0x238044: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x238044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_238048:
    // 0x238048: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x238048u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_23804c:
    // 0x23804c: 0x1440004b  bnez        $v0, . + 4 + (0x4B << 2)
label_238050:
    if (ctx->pc == 0x238050u) {
        ctx->pc = 0x238054u;
        goto label_238054;
    }
    ctx->pc = 0x23804Cu;
    {
        const bool branch_taken_0x23804c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23804c) {
            ctx->pc = 0x23817Cu;
            goto label_23817c;
        }
    }
    ctx->pc = 0x238054u;
label_238054:
    // 0x238054: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x238054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_238058:
    // 0x238058: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x238058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_23805c:
    // 0x23805c: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x23805cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_238060:
    // 0x238060: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x238060u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_238064:
    // 0x238064: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_238068:
    if (ctx->pc == 0x238068u) {
        ctx->pc = 0x23806Cu;
        goto label_23806c;
    }
    ctx->pc = 0x238064u;
    {
        const bool branch_taken_0x238064 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x238064) {
            ctx->pc = 0x2380ECu;
            goto label_2380ec;
        }
    }
    ctx->pc = 0x23806Cu;
label_23806c:
    // 0x23806c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x23806cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_238070:
    // 0x238070: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x238070u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_238074:
    // 0x238074: 0xc461002c  lwc1        $f1, 0x2C($v1)
    ctx->pc = 0x238074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_238078:
    // 0x238078: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x238078u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
label_23807c:
    // 0x23807c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x23807cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_238080:
    // 0x238080: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x238080u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_238084:
    // 0x238084: 0x0  nop
    ctx->pc = 0x238084u;
    // NOP
label_238088:
    // 0x238088: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x238088u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_23808c:
    // 0x23808c: 0xe460002c  swc1        $f0, 0x2C($v1)
    ctx->pc = 0x23808cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 44), bits); }
label_238090:
    // 0x238090: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x238090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_238094:
    // 0x238094: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x238094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_238098:
    // 0x238098: 0xc441002c  lwc1        $f1, 0x2C($v0)
    ctx->pc = 0x238098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_23809c:
    // 0x23809c: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x23809cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
label_2380a0:
    // 0x2380a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2380a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2380a4:
    // 0x2380a4: 0x0  nop
    ctx->pc = 0x2380a4u;
    // NOP
label_2380a8:
    // 0x2380a8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2380a8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2380ac:
    // 0x2380ac: 0x0  nop
    ctx->pc = 0x2380acu;
    // NOP
label_2380b0:
    // 0x2380b0: 0x4501002b  bc1t        . + 4 + (0x2B << 2)
label_2380b4:
    if (ctx->pc == 0x2380B4u) {
        ctx->pc = 0x2380B8u;
        goto label_2380b8;
    }
    ctx->pc = 0x2380B0u;
    {
        const bool branch_taken_0x2380b0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2380b0) {
            ctx->pc = 0x238160u;
            goto label_238160;
        }
    }
    ctx->pc = 0x2380B8u;
label_2380b8:
    // 0x2380b8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2380b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2380bc:
    // 0x2380bc: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x2380bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_2380c0:
    // 0x2380c0: 0x8c830030  lw          $v1, 0x30($a0)
    ctx->pc = 0x2380c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_2380c4:
    // 0x2380c4: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x2380c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_2380c8:
    // 0x2380c8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2380c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_2380cc:
    // 0x2380cc: 0xac820030  sw          $v0, 0x30($a0)
    ctx->pc = 0x2380ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
label_2380d0:
    // 0x2380d0: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x2380d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
label_2380d4:
    // 0x2380d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2380d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2380d8:
    // 0x2380d8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2380d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2380dc:
    // 0x2380dc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2380dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_2380e0:
    // 0x2380e0: 0xe440002c  swc1        $f0, 0x2C($v0)
    ctx->pc = 0x2380e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 44), bits); }
label_2380e4:
    // 0x2380e4: 0x1000001e  b           . + 4 + (0x1E << 2)
label_2380e8:
    if (ctx->pc == 0x2380E8u) {
        ctx->pc = 0x2380ECu;
        goto label_2380ec;
    }
    ctx->pc = 0x2380E4u;
    {
        const bool branch_taken_0x2380e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2380e4) {
            ctx->pc = 0x238160u;
            goto label_238160;
        }
    }
    ctx->pc = 0x2380ECu;
label_2380ec:
    // 0x2380ec: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2380ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2380f0:
    // 0x2380f0: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x2380f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_2380f4:
    // 0x2380f4: 0xc461002c  lwc1        $f1, 0x2C($v1)
    ctx->pc = 0x2380f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2380f8:
    // 0x2380f8: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x2380f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
label_2380fc:
    // 0x2380fc: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2380fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_238100:
    // 0x238100: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x238100u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_238104:
    // 0x238104: 0x0  nop
    ctx->pc = 0x238104u;
    // NOP
label_238108:
    // 0x238108: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x238108u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_23810c:
    // 0x23810c: 0xe460002c  swc1        $f0, 0x2C($v1)
    ctx->pc = 0x23810cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 44), bits); }
label_238110:
    // 0x238110: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x238110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_238114:
    // 0x238114: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x238114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_238118:
    // 0x238118: 0xc441002c  lwc1        $f1, 0x2C($v0)
    ctx->pc = 0x238118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_23811c:
    // 0x23811c: 0x3c02c0c0  lui         $v0, 0xC0C0
    ctx->pc = 0x23811cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49344 << 16));
label_238120:
    // 0x238120: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x238120u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_238124:
    // 0x238124: 0x0  nop
    ctx->pc = 0x238124u;
    // NOP
label_238128:
    // 0x238128: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x238128u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_23812c:
    // 0x23812c: 0x0  nop
    ctx->pc = 0x23812cu;
    // NOP
label_238130:
    // 0x238130: 0x4500000b  bc1f        . + 4 + (0xB << 2)
label_238134:
    if (ctx->pc == 0x238134u) {
        ctx->pc = 0x238138u;
        goto label_238138;
    }
    ctx->pc = 0x238130u;
    {
        const bool branch_taken_0x238130 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x238130) {
            ctx->pc = 0x238160u;
            goto label_238160;
        }
    }
    ctx->pc = 0x238138u;
label_238138:
    // 0x238138: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x238138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_23813c:
    // 0x23813c: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x23813cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_238140:
    // 0x238140: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x238140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_238144:
    // 0x238144: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x238144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_238148:
    // 0x238148: 0xac620030  sw          $v0, 0x30($v1)
    ctx->pc = 0x238148u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 2));
label_23814c:
    // 0x23814c: 0x3c02c0c0  lui         $v0, 0xC0C0
    ctx->pc = 0x23814cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49344 << 16));
label_238150:
    // 0x238150: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x238150u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_238154:
    // 0x238154: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x238154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_238158:
    // 0x238158: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x238158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_23815c:
    // 0x23815c: 0xe440002c  swc1        $f0, 0x2C($v0)
    ctx->pc = 0x23815cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 44), bits); }
label_238160:
    // 0x238160: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x238160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_238164:
    // 0x238164: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x238164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_238168:
    // 0x238168: 0xc441002c  lwc1        $f1, 0x2C($v0)
    ctx->pc = 0x238168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_23816c:
    // 0x23816c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x23816cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_238170:
    // 0x238170: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x238170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_238174:
    // 0x238174: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x238174u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_238178:
    // 0x238178: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x238178u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_23817c:
    // 0x23817c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x23817cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_238180:
    // 0x238180: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x238180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_238184:
    // 0x238184: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x238184u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
label_238188:
    // 0x238188: 0x244512c0  addiu       $a1, $v0, 0x12C0
    ctx->pc = 0x238188u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
label_23818c:
    // 0x23818c: 0xc05cf7c  jal         func_173DF0
label_238190:
    if (ctx->pc == 0x238190u) {
        ctx->pc = 0x238194u;
        goto label_238194;
    }
    ctx->pc = 0x23818Cu;
    SET_GPR_U32(ctx, 31, 0x238194u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x23818Cu, 0x238194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238194u;
label_238194:
    // 0x238194: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x238194u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
label_238198:
    // 0x238198: 0x3c02c974  lui         $v0, 0xC974
    ctx->pc = 0x238198u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51572 << 16));
label_23819c:
    // 0x23819c: 0x34422400  ori         $v0, $v0, 0x2400
    ctx->pc = 0x23819cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9216);
label_2381a0:
    // 0x2381a0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2381a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2381a4:
    // 0x2381a4: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x2381a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2381a8:
    // 0x2381a8: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2381a8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2381ac:
    // 0x2381ac: 0x0  nop
    ctx->pc = 0x2381acu;
    // NOP
label_2381b0:
    // 0x2381b0: 0x4501001c  bc1t        . + 4 + (0x1C << 2)
label_2381b4:
    if (ctx->pc == 0x2381B4u) {
        ctx->pc = 0x2381B8u;
        goto label_2381b8;
    }
    ctx->pc = 0x2381B0u;
    {
        const bool branch_taken_0x2381b0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2381b0) {
            ctx->pc = 0x238224u;
            goto label_238224;
        }
    }
    ctx->pc = 0x2381B8u;
label_2381b8:
    // 0x2381b8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2381b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2381bc:
    // 0x2381bc: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x2381bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2381c0:
    // 0x2381c0: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x2381c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
label_2381c4:
    // 0x2381c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2381c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2381c8:
    // 0x2381c8: 0x0  nop
    ctx->pc = 0x2381c8u;
    // NOP
label_2381cc:
    // 0x2381cc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2381ccu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2381d0:
    // 0x2381d0: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x2381d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2381d4:
    // 0x2381d4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2381d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2381d8:
    // 0x2381d8: 0x0  nop
    ctx->pc = 0x2381d8u;
    // NOP
label_2381dc:
    // 0x2381dc: 0x45010011  bc1t        . + 4 + (0x11 << 2)
label_2381e0:
    if (ctx->pc == 0x2381E0u) {
        ctx->pc = 0x2381E4u;
        goto label_2381e4;
    }
    ctx->pc = 0x2381DCu;
    {
        const bool branch_taken_0x2381dc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2381dc) {
            ctx->pc = 0x238224u;
            goto label_238224;
        }
    }
    ctx->pc = 0x2381E4u;
label_2381e4:
    // 0x2381e4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2381e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2381e8:
    // 0x2381e8: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x2381e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2381ec:
    // 0x2381ec: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x2381ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
label_2381f0:
    // 0x2381f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2381f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2381f4:
    // 0x2381f4: 0x0  nop
    ctx->pc = 0x2381f4u;
    // NOP
label_2381f8:
    // 0x2381f8: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2381f8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2381fc:
    // 0x2381fc: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x2381fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_238200:
    // 0x238200: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x238200u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_238204:
    // 0x238204: 0x0  nop
    ctx->pc = 0x238204u;
    // NOP
label_238208:
    // 0x238208: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_23820c:
    if (ctx->pc == 0x23820Cu) {
        ctx->pc = 0x238210u;
        goto label_238210;
    }
    ctx->pc = 0x238208u;
    {
        const bool branch_taken_0x238208 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x238208) {
            ctx->pc = 0x238224u;
            goto label_238224;
        }
    }
    ctx->pc = 0x238210u;
label_238210:
    // 0x238210: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x238210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_238214:
    // 0x238214: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x238214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_238218:
    // 0x238218: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x238218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_23821c:
    // 0x23821c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x23821cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_238220:
    // 0x238220: 0xac620030  sw          $v0, 0x30($v1)
    ctx->pc = 0x238220u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 2));
label_238224:
    // 0x238224: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x238224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_238228:
    // 0x238228: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x238228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_23822c:
    // 0x23822c: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x23822cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_238230:
    // 0x238230: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x238230u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_238234:
    // 0x238234: 0x1440002e  bnez        $v0, . + 4 + (0x2E << 2)
label_238238:
    if (ctx->pc == 0x238238u) {
        ctx->pc = 0x23823Cu;
        goto label_23823c;
    }
    ctx->pc = 0x238234u;
    {
        const bool branch_taken_0x238234 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x238234) {
            ctx->pc = 0x2382F0u;
            goto label_2382f0;
        }
    }
    ctx->pc = 0x23823Cu;
label_23823c:
    // 0x23823c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23823cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_238240:
    // 0x238240: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x238240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_238244:
    // 0x238244: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x238244u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
label_238248:
    // 0x238248: 0x3c0243c8  lui         $v0, 0x43C8
    ctx->pc = 0x238248u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17352 << 16));
label_23824c:
    // 0x23824c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x23824cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_238250:
    // 0x238250: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x238250u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_238254:
    // 0x238254: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x238254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294958308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_238258:
    // 0x238258: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x238258u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_23825c:
    // 0x23825c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x23825cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_238260:
    // 0x238260: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x238260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_238264:
    // 0x238264: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x238264u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
label_238268:
    // 0x238268: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x238268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_23826c:
    // 0x23826c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23826cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_238270:
    // 0x238270: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x238270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_238274:
    // 0x238274: 0x3c02442f  lui         $v0, 0x442F
    ctx->pc = 0x238274u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17455 << 16));
label_238278:
    // 0x238278: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x238278u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23827c:
    // 0x23827c: 0x0  nop
    ctx->pc = 0x23827cu;
    // NOP
label_238280:
    // 0x238280: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x238280u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_238284:
    // 0x238284: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x238284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_238288:
    // 0x238288: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x238288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_23828c:
    // 0x23828c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x23828cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_238290:
    // 0x238290: 0x0  nop
    ctx->pc = 0x238290u;
    // NOP
label_238294:
    // 0x238294: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_238298:
    if (ctx->pc == 0x238298u) {
        ctx->pc = 0x23829Cu;
        goto label_23829c;
    }
    ctx->pc = 0x238294u;
    {
        const bool branch_taken_0x238294 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x238294) {
            ctx->pc = 0x2382ACu;
            goto label_2382ac;
        }
    }
    ctx->pc = 0x23829Cu;
label_23829c:
    // 0x23829c: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x23829cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
label_2382a0:
    // 0x2382a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2382a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2382a4:
    // 0x2382a4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2382a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2382a8:
    // 0x2382a8: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x2382a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
label_2382ac:
    // 0x2382ac: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2382acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2382b0:
    // 0x2382b0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2382b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_2382b4:
    // 0x2382b4: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x2382b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2382b8:
    // 0x2382b8: 0x3c02442f  lui         $v0, 0x442F
    ctx->pc = 0x2382b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17455 << 16));
label_2382bc:
    // 0x2382bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2382bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2382c0:
    // 0x2382c0: 0x0  nop
    ctx->pc = 0x2382c0u;
    // NOP
label_2382c4:
    // 0x2382c4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2382c4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2382c8:
    // 0x2382c8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2382c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2382cc:
    // 0x2382cc: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x2382ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2382d0:
    // 0x2382d0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2382d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2382d4:
    // 0x2382d4: 0x0  nop
    ctx->pc = 0x2382d4u;
    // NOP
label_2382d8:
    // 0x2382d8: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_2382dc:
    if (ctx->pc == 0x2382DCu) {
        ctx->pc = 0x2382E0u;
        goto label_2382e0;
    }
    ctx->pc = 0x2382D8u;
    {
        const bool branch_taken_0x2382d8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2382d8) {
            ctx->pc = 0x2382F0u;
            goto label_2382f0;
        }
    }
    ctx->pc = 0x2382E0u;
label_2382e0:
    // 0x2382e0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2382e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_2382e4:
    // 0x2382e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2382e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2382e8:
    // 0x2382e8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2382e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2382ec:
    // 0x2382ec: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x2382ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
label_2382f0:
    // 0x2382f0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2382f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2382f4:
    // 0x2382f4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2382f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_2382f8:
    // 0x2382f8: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x2382f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_2382fc:
    // 0x2382fc: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x2382fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
label_238300:
    // 0x238300: 0x1440008e  bnez        $v0, . + 4 + (0x8E << 2)
label_238304:
    if (ctx->pc == 0x238304u) {
        ctx->pc = 0x238308u;
        goto label_238308;
    }
    ctx->pc = 0x238300u;
    {
        const bool branch_taken_0x238300 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x238300) {
            ctx->pc = 0x23853Cu;
            goto label_23853c;
        }
    }
    ctx->pc = 0x238308u;
label_238308:
    // 0x238308: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x238308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_23830c:
    // 0x23830c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23830cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_238310:
    // 0x238310: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x238310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_238314:
    // 0x238314: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x238314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_238318:
    // 0x238318: 0xc4400188  lwc1        $f0, 0x188($v0)
    ctx->pc = 0x238318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_23831c:
    // 0x23831c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x23831cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_238320:
    // 0x238320: 0x0  nop
    ctx->pc = 0x238320u;
    // NOP
label_238324:
    // 0x238324: 0x45010040  bc1t        . + 4 + (0x40 << 2)
label_238328:
    if (ctx->pc == 0x238328u) {
        ctx->pc = 0x23832Cu;
        goto label_23832c;
    }
    ctx->pc = 0x238324u;
    {
        const bool branch_taken_0x238324 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x238324) {
            ctx->pc = 0x238428u;
            goto label_238428;
        }
    }
    ctx->pc = 0x23832Cu;
label_23832c:
    // 0x23832c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x23832cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_238330:
    // 0x238330: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x238330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_238334:
    // 0x238334: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x238334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_238338:
    // 0x238338: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x238338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_23833c:
    // 0x23833c: 0xc4400188  lwc1        $f0, 0x188($v0)
    ctx->pc = 0x23833cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_238340:
    // 0x238340: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x238340u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_238344:
    // 0x238344: 0x0  nop
    ctx->pc = 0x238344u;
    // NOP
label_238348:
    // 0x238348: 0x45010016  bc1t        . + 4 + (0x16 << 2)
label_23834c:
    if (ctx->pc == 0x23834Cu) {
        ctx->pc = 0x238350u;
        goto label_238350;
    }
    ctx->pc = 0x238348u;
    {
        const bool branch_taken_0x238348 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x238348) {
            ctx->pc = 0x2383A4u;
            goto label_2383a4;
        }
    }
    ctx->pc = 0x238350u;
label_238350:
    // 0x238350: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x238350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_238354:
    // 0x238354: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x238354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_238358:
    // 0x238358: 0xc4410024  lwc1        $f1, 0x24($v0)
    ctx->pc = 0x238358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_23835c:
    // 0x23835c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x23835cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_238360:
    // 0x238360: 0xc4400188  lwc1        $f0, 0x188($v0)
    ctx->pc = 0x238360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_238364:
    // 0x238364: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x238364u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_238368:
    // 0x238368: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x238368u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
label_23836c:
    // 0x23836c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x23836cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_238370:
    // 0x238370: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x238370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_238374:
    // 0x238374: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x238374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_238378:
    // 0x238378: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x238378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_23837c:
    // 0x23837c: 0xc4400188  lwc1        $f0, 0x188($v0)
    ctx->pc = 0x23837cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_238380:
    // 0x238380: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x238380u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_238384:
    // 0x238384: 0x0  nop
    ctx->pc = 0x238384u;
    // NOP
label_238388:
    // 0x238388: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_23838c:
    if (ctx->pc == 0x23838Cu) {
        ctx->pc = 0x238390u;
        goto label_238390;
    }
    ctx->pc = 0x238388u;
    {
        const bool branch_taken_0x238388 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x238388) {
            ctx->pc = 0x2383A4u;
            goto label_2383a4;
        }
    }
    ctx->pc = 0x238390u;
label_238390:
    // 0x238390: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x238390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_238394:
    // 0x238394: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x238394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_238398:
    // 0x238398: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x238398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_23839c:
    // 0x23839c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x23839cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2383a0:
    // 0x2383a0: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x2383a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
label_2383a4:
    // 0x2383a4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2383a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2383a8:
    // 0x2383a8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2383a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_2383ac:
    // 0x2383ac: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x2383acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2383b0:
    // 0x2383b0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2383b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2383b4:
    // 0x2383b4: 0xc4400188  lwc1        $f0, 0x188($v0)
    ctx->pc = 0x2383b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2383b8:
    // 0x2383b8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2383b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2383bc:
    // 0x2383bc: 0x0  nop
    ctx->pc = 0x2383bcu;
    // NOP
label_2383c0:
    // 0x2383c0: 0x45000019  bc1f        . + 4 + (0x19 << 2)
label_2383c4:
    if (ctx->pc == 0x2383C4u) {
        ctx->pc = 0x2383C8u;
        goto label_2383c8;
    }
    ctx->pc = 0x2383C0u;
    {
        const bool branch_taken_0x2383c0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2383c0) {
            ctx->pc = 0x238428u;
            goto label_238428;
        }
    }
    ctx->pc = 0x2383C8u;
label_2383c8:
    // 0x2383c8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2383c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2383cc:
    // 0x2383cc: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x2383ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_2383d0:
    // 0x2383d0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2383d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_2383d4:
    // 0x2383d4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2383d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2383d8:
    // 0x2383d8: 0xc4600024  lwc1        $f0, 0x24($v1)
    ctx->pc = 0x2383d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2383dc:
    // 0x2383dc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2383dcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2383e0:
    // 0x2383e0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2383e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2383e4:
    // 0x2383e4: 0xc4400188  lwc1        $f0, 0x188($v0)
    ctx->pc = 0x2383e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2383e8:
    // 0x2383e8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2383e8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_2383ec:
    // 0x2383ec: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x2383ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
label_2383f0:
    // 0x2383f0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2383f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2383f4:
    // 0x2383f4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2383f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_2383f8:
    // 0x2383f8: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x2383f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2383fc:
    // 0x2383fc: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2383fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_238400:
    // 0x238400: 0xc4400188  lwc1        $f0, 0x188($v0)
    ctx->pc = 0x238400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_238404:
    // 0x238404: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x238404u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_238408:
    // 0x238408: 0x0  nop
    ctx->pc = 0x238408u;
    // NOP
label_23840c:
    // 0x23840c: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_238410:
    if (ctx->pc == 0x238410u) {
        ctx->pc = 0x238414u;
        goto label_238414;
    }
    ctx->pc = 0x23840Cu;
    {
        const bool branch_taken_0x23840c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23840c) {
            ctx->pc = 0x238428u;
            goto label_238428;
        }
    }
    ctx->pc = 0x238414u;
label_238414:
    // 0x238414: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x238414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_238418:
    // 0x238418: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x238418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_23841c:
    // 0x23841c: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x23841cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_238420:
    // 0x238420: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x238420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_238424:
    // 0x238424: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x238424u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
label_238428:
    // 0x238428: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x238428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_23842c:
    // 0x23842c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23842cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_238430:
    // 0x238430: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x238430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_238434:
    // 0x238434: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x238434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_238438:
    // 0x238438: 0xc4400180  lwc1        $f0, 0x180($v0)
    ctx->pc = 0x238438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_23843c:
    // 0x23843c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x23843cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_238440:
    // 0x238440: 0x0  nop
    ctx->pc = 0x238440u;
    // NOP
label_238444:
    // 0x238444: 0x4501003d  bc1t        . + 4 + (0x3D << 2)
label_238448:
    if (ctx->pc == 0x238448u) {
        ctx->pc = 0x23844Cu;
        goto label_23844c;
    }
    ctx->pc = 0x238444u;
    {
        const bool branch_taken_0x238444 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x238444) {
            ctx->pc = 0x23853Cu;
            goto label_23853c;
        }
    }
    ctx->pc = 0x23844Cu;
label_23844c:
    // 0x23844c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x23844cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_238450:
    // 0x238450: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x238450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_238454:
    // 0x238454: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x238454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_238458:
    // 0x238458: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x238458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_23845c:
    // 0x23845c: 0xc4400180  lwc1        $f0, 0x180($v0)
    ctx->pc = 0x23845cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_238460:
    // 0x238460: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x238460u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_238464:
    // 0x238464: 0x0  nop
    ctx->pc = 0x238464u;
    // NOP
label_238468:
    // 0x238468: 0x45010016  bc1t        . + 4 + (0x16 << 2)
label_23846c:
    if (ctx->pc == 0x23846Cu) {
        ctx->pc = 0x238470u;
        goto label_238470;
    }
    ctx->pc = 0x238468u;
    {
        const bool branch_taken_0x238468 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x238468) {
            ctx->pc = 0x2384C4u;
            goto label_2384c4;
        }
    }
    ctx->pc = 0x238470u;
label_238470:
    // 0x238470: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x238470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_238474:
    // 0x238474: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x238474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_238478:
    // 0x238478: 0xc4410020  lwc1        $f1, 0x20($v0)
    ctx->pc = 0x238478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_23847c:
    // 0x23847c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x23847cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_238480:
    // 0x238480: 0xc4400180  lwc1        $f0, 0x180($v0)
    ctx->pc = 0x238480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_238484:
    // 0x238484: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x238484u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_238488:
    // 0x238488: 0xe4400180  swc1        $f0, 0x180($v0)
    ctx->pc = 0x238488u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
label_23848c:
    // 0x23848c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x23848cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_238490:
    // 0x238490: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x238490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_238494:
    // 0x238494: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x238494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_238498:
    // 0x238498: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x238498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_23849c:
    // 0x23849c: 0xc4400180  lwc1        $f0, 0x180($v0)
    ctx->pc = 0x23849cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2384a0:
    // 0x2384a0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2384a0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2384a4:
    // 0x2384a4: 0x0  nop
    ctx->pc = 0x2384a4u;
    // NOP
label_2384a8:
    // 0x2384a8: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_2384ac:
    if (ctx->pc == 0x2384ACu) {
        ctx->pc = 0x2384B0u;
        goto label_2384b0;
    }
    ctx->pc = 0x2384A8u;
    {
        const bool branch_taken_0x2384a8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2384a8) {
            ctx->pc = 0x2384C4u;
            goto label_2384c4;
        }
    }
    ctx->pc = 0x2384B0u;
label_2384b0:
    // 0x2384b0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2384b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2384b4:
    // 0x2384b4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2384b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_2384b8:
    // 0x2384b8: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x2384b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2384bc:
    // 0x2384bc: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2384bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2384c0:
    // 0x2384c0: 0xe4400180  swc1        $f0, 0x180($v0)
    ctx->pc = 0x2384c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
label_2384c4:
    // 0x2384c4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2384c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2384c8:
    // 0x2384c8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2384c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_2384cc:
    // 0x2384cc: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x2384ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2384d0:
    // 0x2384d0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2384d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2384d4:
    // 0x2384d4: 0xc4400180  lwc1        $f0, 0x180($v0)
    ctx->pc = 0x2384d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2384d8:
    // 0x2384d8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2384d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2384dc:
    // 0x2384dc: 0x0  nop
    ctx->pc = 0x2384dcu;
    // NOP
label_2384e0:
    // 0x2384e0: 0x45000016  bc1f        . + 4 + (0x16 << 2)
label_2384e4:
    if (ctx->pc == 0x2384E4u) {
        ctx->pc = 0x2384E8u;
        goto label_2384e8;
    }
    ctx->pc = 0x2384E0u;
    {
        const bool branch_taken_0x2384e0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2384e0) {
            ctx->pc = 0x23853Cu;
            goto label_23853c;
        }
    }
    ctx->pc = 0x2384E8u;
label_2384e8:
    // 0x2384e8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2384e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2384ec:
    // 0x2384ec: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2384ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_2384f0:
    // 0x2384f0: 0xc4410024  lwc1        $f1, 0x24($v0)
    ctx->pc = 0x2384f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2384f4:
    // 0x2384f4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2384f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2384f8:
    // 0x2384f8: 0xc4400180  lwc1        $f0, 0x180($v0)
    ctx->pc = 0x2384f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2384fc:
    // 0x2384fc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2384fcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_238500:
    // 0x238500: 0xe4400180  swc1        $f0, 0x180($v0)
    ctx->pc = 0x238500u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
label_238504:
    // 0x238504: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x238504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_238508:
    // 0x238508: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x238508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_23850c:
    // 0x23850c: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x23850cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_238510:
    // 0x238510: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x238510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_238514:
    // 0x238514: 0xc4400180  lwc1        $f0, 0x180($v0)
    ctx->pc = 0x238514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_238518:
    // 0x238518: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x238518u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_23851c:
    // 0x23851c: 0x0  nop
    ctx->pc = 0x23851cu;
    // NOP
label_238520:
    // 0x238520: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_238524:
    if (ctx->pc == 0x238524u) {
        ctx->pc = 0x238528u;
        goto label_238528;
    }
    ctx->pc = 0x238520u;
    {
        const bool branch_taken_0x238520 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x238520) {
            ctx->pc = 0x23853Cu;
            goto label_23853c;
        }
    }
    ctx->pc = 0x238528u;
label_238528:
    // 0x238528: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x238528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_23852c:
    // 0x23852c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23852cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_238530:
    // 0x238530: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x238530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_238534:
    // 0x238534: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x238534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_238538:
    // 0x238538: 0xe4400180  swc1        $f0, 0x180($v0)
    ctx->pc = 0x238538u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
label_23853c:
    // 0x23853c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x23853cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_238540:
    // 0x238540: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x238540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_238544:
    // 0x238544: 0xc4410038  lwc1        $f1, 0x38($v0)
    ctx->pc = 0x238544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_238548:
    // 0x238548: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x238548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_23854c:
    // 0x23854c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23854cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_238550:
    // 0x238550: 0xc440003c  lwc1        $f0, 0x3C($v0)
    ctx->pc = 0x238550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_238554:
    // 0x238554: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x238554u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_238558:
    // 0x238558: 0x0  nop
    ctx->pc = 0x238558u;
    // NOP
label_23855c:
    // 0x23855c: 0x45010045  bc1t        . + 4 + (0x45 << 2)
label_238560:
    if (ctx->pc == 0x238560u) {
        ctx->pc = 0x238564u;
        goto label_238564;
    }
    ctx->pc = 0x23855Cu;
    {
        const bool branch_taken_0x23855c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23855c) {
            ctx->pc = 0x238674u;
            goto label_238674;
        }
    }
    ctx->pc = 0x238564u;
label_238564:
    // 0x238564: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x238564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_238568:
    // 0x238568: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x238568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_23856c:
    // 0x23856c: 0xc441003c  lwc1        $f1, 0x3C($v0)
    ctx->pc = 0x23856cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_238570:
    // 0x238570: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x238570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_238574:
    // 0x238574: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x238574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_238578:
    // 0x238578: 0xc4400038  lwc1        $f0, 0x38($v0)
    ctx->pc = 0x238578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_23857c:
    // 0x23857c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x23857cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_238580:
    // 0x238580: 0x0  nop
    ctx->pc = 0x238580u;
    // NOP
label_238584:
    // 0x238584: 0x45010019  bc1t        . + 4 + (0x19 << 2)
label_238588:
    if (ctx->pc == 0x238588u) {
        ctx->pc = 0x23858Cu;
        goto label_23858c;
    }
    ctx->pc = 0x238584u;
    {
        const bool branch_taken_0x238584 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x238584) {
            ctx->pc = 0x2385ECu;
            goto label_2385ec;
        }
    }
    ctx->pc = 0x23858Cu;
label_23858c:
    // 0x23858c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x23858cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_238590:
    // 0x238590: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x238590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_238594:
    // 0x238594: 0xc4410058  lwc1        $f1, 0x58($v0)
    ctx->pc = 0x238594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_238598:
    // 0x238598: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x238598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_23859c:
    // 0x23859c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23859cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_2385a0:
    // 0x2385a0: 0xc4400038  lwc1        $f0, 0x38($v0)
    ctx->pc = 0x2385a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2385a4:
    // 0x2385a4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2385a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2385a8:
    // 0x2385a8: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x2385a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
label_2385ac:
    // 0x2385ac: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2385acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2385b0:
    // 0x2385b0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2385b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_2385b4:
    // 0x2385b4: 0xc441003c  lwc1        $f1, 0x3C($v0)
    ctx->pc = 0x2385b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2385b8:
    // 0x2385b8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2385b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2385bc:
    // 0x2385bc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2385bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_2385c0:
    // 0x2385c0: 0xc4400038  lwc1        $f0, 0x38($v0)
    ctx->pc = 0x2385c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2385c4:
    // 0x2385c4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2385c4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2385c8:
    // 0x2385c8: 0x0  nop
    ctx->pc = 0x2385c8u;
    // NOP
label_2385cc:
    // 0x2385cc: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_2385d0:
    if (ctx->pc == 0x2385D0u) {
        ctx->pc = 0x2385D4u;
        goto label_2385d4;
    }
    ctx->pc = 0x2385CCu;
    {
        const bool branch_taken_0x2385cc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2385cc) {
            ctx->pc = 0x2385ECu;
            goto label_2385ec;
        }
    }
    ctx->pc = 0x2385D4u;
label_2385d4:
    // 0x2385d4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2385d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2385d8:
    // 0x2385d8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2385d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_2385dc:
    // 0x2385dc: 0xc440003c  lwc1        $f0, 0x3C($v0)
    ctx->pc = 0x2385dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2385e0:
    // 0x2385e0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2385e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2385e4:
    // 0x2385e4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2385e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_2385e8:
    // 0x2385e8: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x2385e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
label_2385ec:
    // 0x2385ec: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2385ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2385f0:
    // 0x2385f0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2385f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_2385f4:
    // 0x2385f4: 0xc441003c  lwc1        $f1, 0x3C($v0)
    ctx->pc = 0x2385f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2385f8:
    // 0x2385f8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2385f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2385fc:
    // 0x2385fc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2385fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_238600:
    // 0x238600: 0xc4400038  lwc1        $f0, 0x38($v0)
    ctx->pc = 0x238600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_238604:
    // 0x238604: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x238604u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_238608:
    // 0x238608: 0x0  nop
    ctx->pc = 0x238608u;
    // NOP
label_23860c:
    // 0x23860c: 0x45000019  bc1f        . + 4 + (0x19 << 2)
label_238610:
    if (ctx->pc == 0x238610u) {
        ctx->pc = 0x238614u;
        goto label_238614;
    }
    ctx->pc = 0x23860Cu;
    {
        const bool branch_taken_0x23860c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23860c) {
            ctx->pc = 0x238674u;
            goto label_238674;
        }
    }
    ctx->pc = 0x238614u;
label_238614:
    // 0x238614: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x238614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_238618:
    // 0x238618: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x238618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_23861c:
    // 0x23861c: 0xc4410058  lwc1        $f1, 0x58($v0)
    ctx->pc = 0x23861cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_238620:
    // 0x238620: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x238620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_238624:
    // 0x238624: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x238624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_238628:
    // 0x238628: 0xc4400038  lwc1        $f0, 0x38($v0)
    ctx->pc = 0x238628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_23862c:
    // 0x23862c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x23862cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_238630:
    // 0x238630: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x238630u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
label_238634:
    // 0x238634: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x238634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_238638:
    // 0x238638: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x238638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_23863c:
    // 0x23863c: 0xc441003c  lwc1        $f1, 0x3C($v0)
    ctx->pc = 0x23863cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_238640:
    // 0x238640: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x238640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_238644:
    // 0x238644: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x238644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_238648:
    // 0x238648: 0xc4400038  lwc1        $f0, 0x38($v0)
    ctx->pc = 0x238648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_23864c:
    // 0x23864c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x23864cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_238650:
    // 0x238650: 0x0  nop
    ctx->pc = 0x238650u;
    // NOP
label_238654:
    // 0x238654: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_238658:
    if (ctx->pc == 0x238658u) {
        ctx->pc = 0x23865Cu;
        goto label_23865c;
    }
    ctx->pc = 0x238654u;
    {
        const bool branch_taken_0x238654 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x238654) {
            ctx->pc = 0x238674u;
            goto label_238674;
        }
    }
    ctx->pc = 0x23865Cu;
label_23865c:
    // 0x23865c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x23865cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_238660:
    // 0x238660: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x238660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_238664:
    // 0x238664: 0xc440003c  lwc1        $f0, 0x3C($v0)
    ctx->pc = 0x238664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_238668:
    // 0x238668: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x238668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_23866c:
    // 0x23866c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23866cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_238670:
    // 0x238670: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x238670u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
label_238674:
    // 0x238674: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x238674u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_238678:
    // 0x238678: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x238678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_23867c:
    // 0x23867c: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x23867cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_238680:
    // 0x238680: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x238680u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_238684:
    // 0x238684: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x238684u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_238688:
    // 0x238688: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x238688u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_23868c:
    // 0x23868c: 0x2442b1e0  addiu       $v0, $v0, -0x4E20
    ctx->pc = 0x23868cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947296));
label_238690:
    // 0x238690: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x238690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_238694:
    // 0x238694: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x238694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_238698:
    // 0x238698: 0x40f809  jalr        $v0
label_23869c:
    if (ctx->pc == 0x23869Cu) {
        ctx->pc = 0x2386A0u;
        goto label_2386a0;
    }
    ctx->pc = 0x238698u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2386A0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x238698u, 0x2386A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2386A0u;
label_2386a0:
    // 0x2386a0: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2386a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2386a4:
    // 0x2386a4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2386a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2386a8:
    // 0x2386a8: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x2386a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_2386ac:
    // 0x2386ac: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2386acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2386b0:
    // 0x2386b0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2386b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2386b4:
    // 0x2386b4: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2386b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_2386b8:
    // 0x2386b8: 0x2442b220  addiu       $v0, $v0, -0x4DE0
    ctx->pc = 0x2386b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947360));
label_2386bc:
    // 0x2386bc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2386bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2386c0:
    // 0x2386c0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2386c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2386c4:
    // 0x2386c4: 0x40f809  jalr        $v0
label_2386c8:
    if (ctx->pc == 0x2386C8u) {
        ctx->pc = 0x2386CCu;
        goto label_2386cc;
    }
    ctx->pc = 0x2386C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2386CCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2386C4u, 0x2386CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2386CCu;
label_2386cc:
    // 0x2386cc: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2386ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2386d0:
    // 0x2386d0: 0xc09044c  jal         func_241130
label_2386d4:
    if (ctx->pc == 0x2386D4u) {
        ctx->pc = 0x2386D8u;
        goto label_2386d8;
    }
    ctx->pc = 0x2386D0u;
    SET_GPR_U32(ctx, 31, 0x2386D8u);
    ctx->pc = 0x241130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241130u, 0x2386D0u, 0x2386D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2386D8u;
label_2386d8:
    // 0x2386d8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2386d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2386dc:
    // 0x2386dc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2386dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_2386e0:
    // 0x2386e0: 0x8442005c  lh          $v0, 0x5C($v0)
    ctx->pc = 0x2386e0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 92)));
label_2386e4:
    // 0x2386e4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2386e8:
    if (ctx->pc == 0x2386E8u) {
        ctx->pc = 0x2386ECu;
        goto label_2386ec;
    }
    ctx->pc = 0x2386E4u;
    {
        const bool branch_taken_0x2386e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2386e4) {
            ctx->pc = 0x238700u;
            goto label_238700;
        }
    }
    ctx->pc = 0x2386ECu;
label_2386ec:
    // 0x2386ec: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2386ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2386f0:
    // 0x2386f0: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x2386f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_2386f4:
    // 0x2386f4: 0x8462005c  lh          $v0, 0x5C($v1)
    ctx->pc = 0x2386f4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 92)));
label_2386f8:
    // 0x2386f8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2386f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2386fc:
    // 0x2386fc: 0xa462005c  sh          $v0, 0x5C($v1)
    ctx->pc = 0x2386fcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 92), (uint16_t)GPR_U32(ctx, 2));
label_238700:
    // 0x238700: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x238700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_238704:
    // 0x238704: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x238704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_238708:
    // 0x238708: 0x84420074  lh          $v0, 0x74($v0)
    ctx->pc = 0x238708u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 116)));
label_23870c:
    // 0x23870c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_238710:
    if (ctx->pc == 0x238710u) {
        ctx->pc = 0x238714u;
        goto label_238714;
    }
    ctx->pc = 0x23870Cu;
    {
        const bool branch_taken_0x23870c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23870c) {
            ctx->pc = 0x238728u;
            goto label_238728;
        }
    }
    ctx->pc = 0x238714u;
label_238714:
    // 0x238714: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x238714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_238718:
    // 0x238718: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x238718u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_23871c:
    // 0x23871c: 0x84620074  lh          $v0, 0x74($v1)
    ctx->pc = 0x23871cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 116)));
label_238720:
    // 0x238720: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x238720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_238724:
    // 0x238724: 0xa4620074  sh          $v0, 0x74($v1)
    ctx->pc = 0x238724u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 116), (uint16_t)GPR_U32(ctx, 2));
label_238728:
    // 0x238728: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x238728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_23872c:
    // 0x23872c: 0xc44c0120  lwc1        $f12, 0x120($v0)
    ctx->pc = 0x23872cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_238730:
    // 0x238730: 0xc047fe2  jal         func_11FF88
label_238734:
    if (ctx->pc == 0x238734u) {
        ctx->pc = 0x238738u;
        goto label_238738;
    }
    ctx->pc = 0x238730u;
    SET_GPR_U32(ctx, 31, 0x238738u);
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x238730u, 0x238738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238738u;
label_238738:
    // 0x238738: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x238738u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_23873c:
    // 0x23873c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x23873cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_238740:
    // 0x238740: 0xc44c0124  lwc1        $f12, 0x124($v0)
    ctx->pc = 0x238740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_238744:
    // 0x238744: 0xc047fe2  jal         func_11FF88
label_238748:
    if (ctx->pc == 0x238748u) {
        ctx->pc = 0x23874Cu;
        goto label_23874c;
    }
    ctx->pc = 0x238744u;
    SET_GPR_U32(ctx, 31, 0x23874Cu);
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x238744u, 0x23874Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23874Cu;
label_23874c:
    // 0x23874c: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x23874cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_238750:
    // 0x238750: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x238750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_238754:
    // 0x238754: 0xc44c0128  lwc1        $f12, 0x128($v0)
    ctx->pc = 0x238754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_238758:
    // 0x238758: 0xc047fe2  jal         func_11FF88
label_23875c:
    if (ctx->pc == 0x23875Cu) {
        ctx->pc = 0x238760u;
        goto label_238760;
    }
    ctx->pc = 0x238758u;
    SET_GPR_U32(ctx, 31, 0x238760u);
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x238758u, 0x238760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238760u;
label_238760:
    // 0x238760: 0x24030808  addiu       $v1, $zero, 0x808
    ctx->pc = 0x238760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
label_238764:
    // 0x238764: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x238764u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
label_238768:
    // 0x238768: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x238768u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
label_23876c:
    // 0x23876c: 0x34630a05  ori         $v1, $v1, 0xA05
    ctx->pc = 0x23876cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2565);
label_238770:
    // 0x238770: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x238770u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_238774:
    // 0x238774: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x238774u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_238778:
    // 0x238778: 0x24651210  addiu       $a1, $v1, 0x1210
    ctx->pc = 0x238778u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4624));
label_23877c:
    // 0x23877c: 0x72403628  paddub      $a2, $s2, $zero
    ctx->pc = 0x23877cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
label_238780:
    // 0x238780: 0x72203e28  paddub      $a3, $s1, $zero
    ctx->pc = 0x238780u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_238784:
    // 0x238784: 0x70404628  paddub      $t0, $v0, $zero
    ctx->pc = 0x238784u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_238788:
    // 0x238788: 0xc059b14  jal         func_166C50
label_23878c:
    if (ctx->pc == 0x23878Cu) {
        ctx->pc = 0x238790u;
        goto label_238790;
    }
    ctx->pc = 0x238788u;
    SET_GPR_U32(ctx, 31, 0x238790u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x238788u, 0x238790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238790u;
label_238790:
    // 0x238790: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x238790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_238794:
    // 0x238794: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x238794u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_238798:
    // 0x238798: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x238798u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_23879c:
    // 0x23879c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x23879cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2387a0:
    // 0x2387a0: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x2387a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_2387a4:
    // 0x2387a4: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x2387a4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2387a8:
    // 0x2387a8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2387a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2387ac:
    // 0x2387ac: 0x90420002  lbu         $v0, 0x2($v0)
    ctx->pc = 0x2387acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_2387b0:
    // 0x2387b0: 0x304800ff  andi        $t0, $v0, 0xFF
    ctx->pc = 0x2387b0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2387b4:
    // 0x2387b4: 0x24020808  addiu       $v0, $zero, 0x808
    ctx->pc = 0x2387b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
label_2387b8:
    // 0x2387b8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2387b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_2387bc:
    // 0x2387bc: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x2387bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
label_2387c0:
    // 0x2387c0: 0x34420a06  ori         $v0, $v0, 0xA06
    ctx->pc = 0x2387c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2566);
label_2387c4:
    // 0x2387c4: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x2387c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_2387c8:
    // 0x2387c8: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2387c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_2387cc:
    // 0x2387cc: 0x24451220  addiu       $a1, $v0, 0x1220
    ctx->pc = 0x2387ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4640));
label_2387d0:
    // 0x2387d0: 0xc059b14  jal         func_166C50
label_2387d4:
    if (ctx->pc == 0x2387D4u) {
        ctx->pc = 0x2387D8u;
        goto label_2387d8;
    }
    ctx->pc = 0x2387D0u;
    SET_GPR_U32(ctx, 31, 0x2387D8u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x2387D0u, 0x2387D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2387D8u;
label_2387d8:
    // 0x2387d8: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x2387d8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2387dc:
    // 0x2387dc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2387dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2387e0:
    // 0x2387e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2387e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2387e4:
    // 0x2387e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2387e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2387e8:
    // 0x2387e8: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x2387e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_2387ec:
    // 0x2387ec: 0x3e00008  jr          $ra
label_2387f0:
    if (ctx->pc == 0x2387F0u) {
        ctx->pc = 0x2387F4u;
        goto label_fallthrough_0x2387ec;
    }
    ctx->pc = 0x2387ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2387ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2387ec:
    ctx->pc = 0x2387F4u;
}
