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

// Function: ectrl17_move03
// Address: 0x358110 - 0x35886c
void ectrl17_move03_0x358110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ectrl17_move03_0x358110");
#endif

    switch (ctx->pc) {
        case 0x358110u: goto label_358110;
        case 0x358114u: goto label_358114;
        case 0x358118u: goto label_358118;
        case 0x35811cu: goto label_35811c;
        case 0x358120u: goto label_358120;
        case 0x358124u: goto label_358124;
        case 0x358128u: goto label_358128;
        case 0x35812cu: goto label_35812c;
        case 0x358130u: goto label_358130;
        case 0x358134u: goto label_358134;
        case 0x358138u: goto label_358138;
        case 0x35813cu: goto label_35813c;
        case 0x358140u: goto label_358140;
        case 0x358144u: goto label_358144;
        case 0x358148u: goto label_358148;
        case 0x35814cu: goto label_35814c;
        case 0x358150u: goto label_358150;
        case 0x358154u: goto label_358154;
        case 0x358158u: goto label_358158;
        case 0x35815cu: goto label_35815c;
        case 0x358160u: goto label_358160;
        case 0x358164u: goto label_358164;
        case 0x358168u: goto label_358168;
        case 0x35816cu: goto label_35816c;
        case 0x358170u: goto label_358170;
        case 0x358174u: goto label_358174;
        case 0x358178u: goto label_358178;
        case 0x35817cu: goto label_35817c;
        case 0x358180u: goto label_358180;
        case 0x358184u: goto label_358184;
        case 0x358188u: goto label_358188;
        case 0x35818cu: goto label_35818c;
        case 0x358190u: goto label_358190;
        case 0x358194u: goto label_358194;
        case 0x358198u: goto label_358198;
        case 0x35819cu: goto label_35819c;
        case 0x3581a0u: goto label_3581a0;
        case 0x3581a4u: goto label_3581a4;
        case 0x3581a8u: goto label_3581a8;
        case 0x3581acu: goto label_3581ac;
        case 0x3581b0u: goto label_3581b0;
        case 0x3581b4u: goto label_3581b4;
        case 0x3581b8u: goto label_3581b8;
        case 0x3581bcu: goto label_3581bc;
        case 0x3581c0u: goto label_3581c0;
        case 0x3581c4u: goto label_3581c4;
        case 0x3581c8u: goto label_3581c8;
        case 0x3581ccu: goto label_3581cc;
        case 0x3581d0u: goto label_3581d0;
        case 0x3581d4u: goto label_3581d4;
        case 0x3581d8u: goto label_3581d8;
        case 0x3581dcu: goto label_3581dc;
        case 0x3581e0u: goto label_3581e0;
        case 0x3581e4u: goto label_3581e4;
        case 0x3581e8u: goto label_3581e8;
        case 0x3581ecu: goto label_3581ec;
        case 0x3581f0u: goto label_3581f0;
        case 0x3581f4u: goto label_3581f4;
        case 0x3581f8u: goto label_3581f8;
        case 0x3581fcu: goto label_3581fc;
        case 0x358200u: goto label_358200;
        case 0x358204u: goto label_358204;
        case 0x358208u: goto label_358208;
        case 0x35820cu: goto label_35820c;
        case 0x358210u: goto label_358210;
        case 0x358214u: goto label_358214;
        case 0x358218u: goto label_358218;
        case 0x35821cu: goto label_35821c;
        case 0x358220u: goto label_358220;
        case 0x358224u: goto label_358224;
        case 0x358228u: goto label_358228;
        case 0x35822cu: goto label_35822c;
        case 0x358230u: goto label_358230;
        case 0x358234u: goto label_358234;
        case 0x358238u: goto label_358238;
        case 0x35823cu: goto label_35823c;
        case 0x358240u: goto label_358240;
        case 0x358244u: goto label_358244;
        case 0x358248u: goto label_358248;
        case 0x35824cu: goto label_35824c;
        case 0x358250u: goto label_358250;
        case 0x358254u: goto label_358254;
        case 0x358258u: goto label_358258;
        case 0x35825cu: goto label_35825c;
        case 0x358260u: goto label_358260;
        case 0x358264u: goto label_358264;
        case 0x358268u: goto label_358268;
        case 0x35826cu: goto label_35826c;
        case 0x358270u: goto label_358270;
        case 0x358274u: goto label_358274;
        case 0x358278u: goto label_358278;
        case 0x35827cu: goto label_35827c;
        case 0x358280u: goto label_358280;
        case 0x358284u: goto label_358284;
        case 0x358288u: goto label_358288;
        case 0x35828cu: goto label_35828c;
        case 0x358290u: goto label_358290;
        case 0x358294u: goto label_358294;
        case 0x358298u: goto label_358298;
        case 0x35829cu: goto label_35829c;
        case 0x3582a0u: goto label_3582a0;
        case 0x3582a4u: goto label_3582a4;
        case 0x3582a8u: goto label_3582a8;
        case 0x3582acu: goto label_3582ac;
        case 0x3582b0u: goto label_3582b0;
        case 0x3582b4u: goto label_3582b4;
        case 0x3582b8u: goto label_3582b8;
        case 0x3582bcu: goto label_3582bc;
        case 0x3582c0u: goto label_3582c0;
        case 0x3582c4u: goto label_3582c4;
        case 0x3582c8u: goto label_3582c8;
        case 0x3582ccu: goto label_3582cc;
        case 0x3582d0u: goto label_3582d0;
        case 0x3582d4u: goto label_3582d4;
        case 0x3582d8u: goto label_3582d8;
        case 0x3582dcu: goto label_3582dc;
        case 0x3582e0u: goto label_3582e0;
        case 0x3582e4u: goto label_3582e4;
        case 0x3582e8u: goto label_3582e8;
        case 0x3582ecu: goto label_3582ec;
        case 0x3582f0u: goto label_3582f0;
        case 0x3582f4u: goto label_3582f4;
        case 0x3582f8u: goto label_3582f8;
        case 0x3582fcu: goto label_3582fc;
        case 0x358300u: goto label_358300;
        case 0x358304u: goto label_358304;
        case 0x358308u: goto label_358308;
        case 0x35830cu: goto label_35830c;
        case 0x358310u: goto label_358310;
        case 0x358314u: goto label_358314;
        case 0x358318u: goto label_358318;
        case 0x35831cu: goto label_35831c;
        case 0x358320u: goto label_358320;
        case 0x358324u: goto label_358324;
        case 0x358328u: goto label_358328;
        case 0x35832cu: goto label_35832c;
        case 0x358330u: goto label_358330;
        case 0x358334u: goto label_358334;
        case 0x358338u: goto label_358338;
        case 0x35833cu: goto label_35833c;
        case 0x358340u: goto label_358340;
        case 0x358344u: goto label_358344;
        case 0x358348u: goto label_358348;
        case 0x35834cu: goto label_35834c;
        case 0x358350u: goto label_358350;
        case 0x358354u: goto label_358354;
        case 0x358358u: goto label_358358;
        case 0x35835cu: goto label_35835c;
        case 0x358360u: goto label_358360;
        case 0x358364u: goto label_358364;
        case 0x358368u: goto label_358368;
        case 0x35836cu: goto label_35836c;
        case 0x358370u: goto label_358370;
        case 0x358374u: goto label_358374;
        case 0x358378u: goto label_358378;
        case 0x35837cu: goto label_35837c;
        case 0x358380u: goto label_358380;
        case 0x358384u: goto label_358384;
        case 0x358388u: goto label_358388;
        case 0x35838cu: goto label_35838c;
        case 0x358390u: goto label_358390;
        case 0x358394u: goto label_358394;
        case 0x358398u: goto label_358398;
        case 0x35839cu: goto label_35839c;
        case 0x3583a0u: goto label_3583a0;
        case 0x3583a4u: goto label_3583a4;
        case 0x3583a8u: goto label_3583a8;
        case 0x3583acu: goto label_3583ac;
        case 0x3583b0u: goto label_3583b0;
        case 0x3583b4u: goto label_3583b4;
        case 0x3583b8u: goto label_3583b8;
        case 0x3583bcu: goto label_3583bc;
        case 0x3583c0u: goto label_3583c0;
        case 0x3583c4u: goto label_3583c4;
        case 0x3583c8u: goto label_3583c8;
        case 0x3583ccu: goto label_3583cc;
        case 0x3583d0u: goto label_3583d0;
        case 0x3583d4u: goto label_3583d4;
        case 0x3583d8u: goto label_3583d8;
        case 0x3583dcu: goto label_3583dc;
        case 0x3583e0u: goto label_3583e0;
        case 0x3583e4u: goto label_3583e4;
        case 0x3583e8u: goto label_3583e8;
        case 0x3583ecu: goto label_3583ec;
        case 0x3583f0u: goto label_3583f0;
        case 0x3583f4u: goto label_3583f4;
        case 0x3583f8u: goto label_3583f8;
        case 0x3583fcu: goto label_3583fc;
        case 0x358400u: goto label_358400;
        case 0x358404u: goto label_358404;
        case 0x358408u: goto label_358408;
        case 0x35840cu: goto label_35840c;
        case 0x358410u: goto label_358410;
        case 0x358414u: goto label_358414;
        case 0x358418u: goto label_358418;
        case 0x35841cu: goto label_35841c;
        case 0x358420u: goto label_358420;
        case 0x358424u: goto label_358424;
        case 0x358428u: goto label_358428;
        case 0x35842cu: goto label_35842c;
        case 0x358430u: goto label_358430;
        case 0x358434u: goto label_358434;
        case 0x358438u: goto label_358438;
        case 0x35843cu: goto label_35843c;
        case 0x358440u: goto label_358440;
        case 0x358444u: goto label_358444;
        case 0x358448u: goto label_358448;
        case 0x35844cu: goto label_35844c;
        case 0x358450u: goto label_358450;
        case 0x358454u: goto label_358454;
        case 0x358458u: goto label_358458;
        case 0x35845cu: goto label_35845c;
        case 0x358460u: goto label_358460;
        case 0x358464u: goto label_358464;
        case 0x358468u: goto label_358468;
        case 0x35846cu: goto label_35846c;
        case 0x358470u: goto label_358470;
        case 0x358474u: goto label_358474;
        case 0x358478u: goto label_358478;
        case 0x35847cu: goto label_35847c;
        case 0x358480u: goto label_358480;
        case 0x358484u: goto label_358484;
        case 0x358488u: goto label_358488;
        case 0x35848cu: goto label_35848c;
        case 0x358490u: goto label_358490;
        case 0x358494u: goto label_358494;
        case 0x358498u: goto label_358498;
        case 0x35849cu: goto label_35849c;
        case 0x3584a0u: goto label_3584a0;
        case 0x3584a4u: goto label_3584a4;
        case 0x3584a8u: goto label_3584a8;
        case 0x3584acu: goto label_3584ac;
        case 0x3584b0u: goto label_3584b0;
        case 0x3584b4u: goto label_3584b4;
        case 0x3584b8u: goto label_3584b8;
        case 0x3584bcu: goto label_3584bc;
        case 0x3584c0u: goto label_3584c0;
        case 0x3584c4u: goto label_3584c4;
        case 0x3584c8u: goto label_3584c8;
        case 0x3584ccu: goto label_3584cc;
        case 0x3584d0u: goto label_3584d0;
        case 0x3584d4u: goto label_3584d4;
        case 0x3584d8u: goto label_3584d8;
        case 0x3584dcu: goto label_3584dc;
        case 0x3584e0u: goto label_3584e0;
        case 0x3584e4u: goto label_3584e4;
        case 0x3584e8u: goto label_3584e8;
        case 0x3584ecu: goto label_3584ec;
        case 0x3584f0u: goto label_3584f0;
        case 0x3584f4u: goto label_3584f4;
        case 0x3584f8u: goto label_3584f8;
        case 0x3584fcu: goto label_3584fc;
        case 0x358500u: goto label_358500;
        case 0x358504u: goto label_358504;
        case 0x358508u: goto label_358508;
        case 0x35850cu: goto label_35850c;
        case 0x358510u: goto label_358510;
        case 0x358514u: goto label_358514;
        case 0x358518u: goto label_358518;
        case 0x35851cu: goto label_35851c;
        case 0x358520u: goto label_358520;
        case 0x358524u: goto label_358524;
        case 0x358528u: goto label_358528;
        case 0x35852cu: goto label_35852c;
        case 0x358530u: goto label_358530;
        case 0x358534u: goto label_358534;
        case 0x358538u: goto label_358538;
        case 0x35853cu: goto label_35853c;
        case 0x358540u: goto label_358540;
        case 0x358544u: goto label_358544;
        case 0x358548u: goto label_358548;
        case 0x35854cu: goto label_35854c;
        case 0x358550u: goto label_358550;
        case 0x358554u: goto label_358554;
        case 0x358558u: goto label_358558;
        case 0x35855cu: goto label_35855c;
        case 0x358560u: goto label_358560;
        case 0x358564u: goto label_358564;
        case 0x358568u: goto label_358568;
        case 0x35856cu: goto label_35856c;
        case 0x358570u: goto label_358570;
        case 0x358574u: goto label_358574;
        case 0x358578u: goto label_358578;
        case 0x35857cu: goto label_35857c;
        case 0x358580u: goto label_358580;
        case 0x358584u: goto label_358584;
        case 0x358588u: goto label_358588;
        case 0x35858cu: goto label_35858c;
        case 0x358590u: goto label_358590;
        case 0x358594u: goto label_358594;
        case 0x358598u: goto label_358598;
        case 0x35859cu: goto label_35859c;
        case 0x3585a0u: goto label_3585a0;
        case 0x3585a4u: goto label_3585a4;
        case 0x3585a8u: goto label_3585a8;
        case 0x3585acu: goto label_3585ac;
        case 0x3585b0u: goto label_3585b0;
        case 0x3585b4u: goto label_3585b4;
        case 0x3585b8u: goto label_3585b8;
        case 0x3585bcu: goto label_3585bc;
        case 0x3585c0u: goto label_3585c0;
        case 0x3585c4u: goto label_3585c4;
        case 0x3585c8u: goto label_3585c8;
        case 0x3585ccu: goto label_3585cc;
        case 0x3585d0u: goto label_3585d0;
        case 0x3585d4u: goto label_3585d4;
        case 0x3585d8u: goto label_3585d8;
        case 0x3585dcu: goto label_3585dc;
        case 0x3585e0u: goto label_3585e0;
        case 0x3585e4u: goto label_3585e4;
        case 0x3585e8u: goto label_3585e8;
        case 0x3585ecu: goto label_3585ec;
        case 0x3585f0u: goto label_3585f0;
        case 0x3585f4u: goto label_3585f4;
        case 0x3585f8u: goto label_3585f8;
        case 0x3585fcu: goto label_3585fc;
        case 0x358600u: goto label_358600;
        case 0x358604u: goto label_358604;
        case 0x358608u: goto label_358608;
        case 0x35860cu: goto label_35860c;
        case 0x358610u: goto label_358610;
        case 0x358614u: goto label_358614;
        case 0x358618u: goto label_358618;
        case 0x35861cu: goto label_35861c;
        case 0x358620u: goto label_358620;
        case 0x358624u: goto label_358624;
        case 0x358628u: goto label_358628;
        case 0x35862cu: goto label_35862c;
        case 0x358630u: goto label_358630;
        case 0x358634u: goto label_358634;
        case 0x358638u: goto label_358638;
        case 0x35863cu: goto label_35863c;
        case 0x358640u: goto label_358640;
        case 0x358644u: goto label_358644;
        case 0x358648u: goto label_358648;
        case 0x35864cu: goto label_35864c;
        case 0x358650u: goto label_358650;
        case 0x358654u: goto label_358654;
        case 0x358658u: goto label_358658;
        case 0x35865cu: goto label_35865c;
        case 0x358660u: goto label_358660;
        case 0x358664u: goto label_358664;
        case 0x358668u: goto label_358668;
        case 0x35866cu: goto label_35866c;
        case 0x358670u: goto label_358670;
        case 0x358674u: goto label_358674;
        case 0x358678u: goto label_358678;
        case 0x35867cu: goto label_35867c;
        case 0x358680u: goto label_358680;
        case 0x358684u: goto label_358684;
        case 0x358688u: goto label_358688;
        case 0x35868cu: goto label_35868c;
        case 0x358690u: goto label_358690;
        case 0x358694u: goto label_358694;
        case 0x358698u: goto label_358698;
        case 0x35869cu: goto label_35869c;
        case 0x3586a0u: goto label_3586a0;
        case 0x3586a4u: goto label_3586a4;
        case 0x3586a8u: goto label_3586a8;
        case 0x3586acu: goto label_3586ac;
        case 0x3586b0u: goto label_3586b0;
        case 0x3586b4u: goto label_3586b4;
        case 0x3586b8u: goto label_3586b8;
        case 0x3586bcu: goto label_3586bc;
        case 0x3586c0u: goto label_3586c0;
        case 0x3586c4u: goto label_3586c4;
        case 0x3586c8u: goto label_3586c8;
        case 0x3586ccu: goto label_3586cc;
        case 0x3586d0u: goto label_3586d0;
        case 0x3586d4u: goto label_3586d4;
        case 0x3586d8u: goto label_3586d8;
        case 0x3586dcu: goto label_3586dc;
        case 0x3586e0u: goto label_3586e0;
        case 0x3586e4u: goto label_3586e4;
        case 0x3586e8u: goto label_3586e8;
        case 0x3586ecu: goto label_3586ec;
        case 0x3586f0u: goto label_3586f0;
        case 0x3586f4u: goto label_3586f4;
        case 0x3586f8u: goto label_3586f8;
        case 0x3586fcu: goto label_3586fc;
        case 0x358700u: goto label_358700;
        case 0x358704u: goto label_358704;
        case 0x358708u: goto label_358708;
        case 0x35870cu: goto label_35870c;
        case 0x358710u: goto label_358710;
        case 0x358714u: goto label_358714;
        case 0x358718u: goto label_358718;
        case 0x35871cu: goto label_35871c;
        case 0x358720u: goto label_358720;
        case 0x358724u: goto label_358724;
        case 0x358728u: goto label_358728;
        case 0x35872cu: goto label_35872c;
        case 0x358730u: goto label_358730;
        case 0x358734u: goto label_358734;
        case 0x358738u: goto label_358738;
        case 0x35873cu: goto label_35873c;
        case 0x358740u: goto label_358740;
        case 0x358744u: goto label_358744;
        case 0x358748u: goto label_358748;
        case 0x35874cu: goto label_35874c;
        case 0x358750u: goto label_358750;
        case 0x358754u: goto label_358754;
        case 0x358758u: goto label_358758;
        case 0x35875cu: goto label_35875c;
        case 0x358760u: goto label_358760;
        case 0x358764u: goto label_358764;
        case 0x358768u: goto label_358768;
        case 0x35876cu: goto label_35876c;
        case 0x358770u: goto label_358770;
        case 0x358774u: goto label_358774;
        case 0x358778u: goto label_358778;
        case 0x35877cu: goto label_35877c;
        case 0x358780u: goto label_358780;
        case 0x358784u: goto label_358784;
        case 0x358788u: goto label_358788;
        case 0x35878cu: goto label_35878c;
        case 0x358790u: goto label_358790;
        case 0x358794u: goto label_358794;
        case 0x358798u: goto label_358798;
        case 0x35879cu: goto label_35879c;
        case 0x3587a0u: goto label_3587a0;
        case 0x3587a4u: goto label_3587a4;
        case 0x3587a8u: goto label_3587a8;
        case 0x3587acu: goto label_3587ac;
        case 0x3587b0u: goto label_3587b0;
        case 0x3587b4u: goto label_3587b4;
        case 0x3587b8u: goto label_3587b8;
        case 0x3587bcu: goto label_3587bc;
        case 0x3587c0u: goto label_3587c0;
        case 0x3587c4u: goto label_3587c4;
        case 0x3587c8u: goto label_3587c8;
        case 0x3587ccu: goto label_3587cc;
        case 0x3587d0u: goto label_3587d0;
        case 0x3587d4u: goto label_3587d4;
        case 0x3587d8u: goto label_3587d8;
        case 0x3587dcu: goto label_3587dc;
        case 0x3587e0u: goto label_3587e0;
        case 0x3587e4u: goto label_3587e4;
        case 0x3587e8u: goto label_3587e8;
        case 0x3587ecu: goto label_3587ec;
        case 0x3587f0u: goto label_3587f0;
        case 0x3587f4u: goto label_3587f4;
        case 0x3587f8u: goto label_3587f8;
        case 0x3587fcu: goto label_3587fc;
        case 0x358800u: goto label_358800;
        case 0x358804u: goto label_358804;
        case 0x358808u: goto label_358808;
        case 0x35880cu: goto label_35880c;
        case 0x358810u: goto label_358810;
        case 0x358814u: goto label_358814;
        case 0x358818u: goto label_358818;
        case 0x35881cu: goto label_35881c;
        case 0x358820u: goto label_358820;
        case 0x358824u: goto label_358824;
        case 0x358828u: goto label_358828;
        case 0x35882cu: goto label_35882c;
        case 0x358830u: goto label_358830;
        case 0x358834u: goto label_358834;
        case 0x358838u: goto label_358838;
        case 0x35883cu: goto label_35883c;
        case 0x358840u: goto label_358840;
        case 0x358844u: goto label_358844;
        case 0x358848u: goto label_358848;
        case 0x35884cu: goto label_35884c;
        case 0x358850u: goto label_358850;
        case 0x358854u: goto label_358854;
        case 0x358858u: goto label_358858;
        case 0x35885cu: goto label_35885c;
        case 0x358860u: goto label_358860;
        case 0x358864u: goto label_358864;
        case 0x358868u: goto label_358868;
        default: break;
    }

    ctx->pc = 0x358110u;

label_358110:
    // 0x358110: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x358110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_358114:
    // 0x358114: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x358114u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
label_358118:
    // 0x358118: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x358118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_35811c:
    // 0x35811c: 0xafa40088  sw          $a0, 0x88($sp)
    ctx->pc = 0x35811cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 4));
label_358120:
    // 0x358120: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x358120u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
label_358124:
    // 0x358124: 0x2485a6f0  addiu       $a1, $a0, -0x5910
    ctx->pc = 0x358124u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944496));
label_358128:
    // 0x358128: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x358128u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_35812c:
    // 0x35812c: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x35812cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_358130:
    // 0x358130: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x358130u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
label_358134:
    // 0x358134: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x358134u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
label_358138:
    // 0x358138: 0x2485a700  addiu       $a1, $a0, -0x5900
    ctx->pc = 0x358138u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944512));
label_35813c:
    // 0x35813c: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x35813cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_358140:
    // 0x358140: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x358140u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_358144:
    // 0x358144: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x358144u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
label_358148:
    // 0x358148: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x358148u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_35814c:
    // 0x35814c: 0xc040cbc  jal         func_1032F0
label_358150:
    if (ctx->pc == 0x358150u) {
        ctx->pc = 0x358154u;
        goto label_358154;
    }
    ctx->pc = 0x35814Cu;
    SET_GPR_U32(ctx, 31, 0x358154u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x358154u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x358154u) { return; }
    ctx->pc = 0x358154u;
label_358154:
    // 0x358154: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x358154u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_358158:
    // 0x358158: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x358158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_35815c:
    // 0x35815c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x35815cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_358160:
    // 0x358160: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x358160u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_358164:
    // 0x358164: 0x8c6600c0  lw          $a2, 0xC0($v1)
    ctx->pc = 0x358164u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 192)));
label_358168:
    // 0x358168: 0xc040d62  jal         func_103588
label_35816c:
    if (ctx->pc == 0x35816Cu) {
        ctx->pc = 0x358170u;
        goto label_358170;
    }
    ctx->pc = 0x358168u;
    SET_GPR_U32(ctx, 31, 0x358170u);
    ctx->pc = 0x103588u;
    {
        ctx->pc = 0x358170u;
        ps2_stubs::sceVu0RotMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x358170u) { return; }
    ctx->pc = 0x358170u;
label_358170:
    // 0x358170: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x358170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_358174:
    // 0x358174: 0x8c650014  lw          $a1, 0x14($v1)
    ctx->pc = 0x358174u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_358178:
    // 0x358178: 0x2ca10007  sltiu       $at, $a1, 0x7
    ctx->pc = 0x358178u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_35817c:
    // 0x35817c: 0x102001b6  beqz        $at, . + 4 + (0x1B6 << 2)
label_358180:
    if (ctx->pc == 0x358180u) {
        ctx->pc = 0x358184u;
        goto label_358184;
    }
    ctx->pc = 0x35817Cu;
    {
        const bool branch_taken_0x35817c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x35817c) {
            ctx->pc = 0x358858u;
            goto label_358858;
        }
    }
    ctx->pc = 0x358184u;
label_358184:
    // 0x358184: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x358184u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_358188:
    // 0x358188: 0x24642a60  addiu       $a0, $v1, 0x2A60
    ctx->pc = 0x358188u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 10848));
label_35818c:
    // 0x35818c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x35818cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_358190:
    // 0x358190: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x358190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_358194:
    // 0x358194: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x358194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_358198:
    // 0x358198: 0x600008  jr          $v1
label_35819c:
    if (ctx->pc == 0x35819Cu) {
        ctx->pc = 0x3581A0u;
        goto label_3581a0;
    }
    ctx->pc = 0x358198u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x358198u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3581A0u;
label_3581a0:
    // 0x3581a0: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x3581a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_3581a4:
    // 0x3581a4: 0x244300a0  addiu       $v1, $v0, 0xA0
    ctx->pc = 0x3581a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
label_3581a8:
    // 0x3581a8: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x3581a8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_3581ac:
    // 0x3581ac: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x3581acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3581b0:
    // 0x3581b0: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x3581b0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
label_3581b4:
    // 0x3581b4: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x3581b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_3581b8:
    // 0x3581b8: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x3581b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_3581bc:
    // 0x3581bc: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x3581bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_3581c0:
    // 0x3581c0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x3581c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_3581c4:
    // 0x3581c4: 0x306700ff  andi        $a3, $v1, 0xFF
    ctx->pc = 0x3581c4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_3581c8:
    // 0x3581c8: 0x34e41600  ori         $a0, $a3, 0x1600
    ctx->pc = 0x3581c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)5632);
label_3581cc:
    // 0x3581cc: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x3581ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3581d0:
    // 0x3581d0: 0x6283c  dsll32      $a1, $a2, 0
    ctx->pc = 0x3581d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) << (32 + 0));
label_3581d4:
    // 0x3581d4: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x3581d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
label_3581d8:
    // 0x3581d8: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x3581d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_3581dc:
    // 0x3581dc: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x3581dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_3581e0:
    // 0x3581e0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x3581e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_3581e4:
    // 0x3581e4: 0xa34024  and         $t0, $a1, $v1
    ctx->pc = 0x3581e4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_3581e8:
    // 0x3581e8: 0x8303c  dsll32      $a2, $t0, 0
    ctx->pc = 0x3581e8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) << (32 + 0));
label_3581ec:
    // 0x3581ec: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x3581ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3581f0:
    // 0x3581f0: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x3581f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
label_3581f4:
    // 0x3581f4: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x3581f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
label_3581f8:
    // 0x3581f8: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x3581f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_3581fc:
    // 0x3581fc: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x3581fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_358200:
    // 0x358200: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x358200u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_358204:
    // 0x358204: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x358204u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_358208:
    // 0x358208: 0xc32825  or          $a1, $a2, $v1
    ctx->pc = 0x358208u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
label_35820c:
    // 0x35820c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x35820cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_358210:
    // 0x358210: 0x8c6300c0  lw          $v1, 0xC0($v1)
    ctx->pc = 0x358210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 192)));
label_358214:
    // 0x358214: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x358214u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
label_358218:
    // 0x358218: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x358218u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
label_35821c:
    // 0x35821c: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x35821cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_358220:
    // 0x358220: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x358220u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_358224:
    // 0x358224: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x358224u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_358228:
    // 0x358228: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x358228u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
label_35822c:
    // 0x35822c: 0x3383c  dsll32      $a3, $v1, 0
    ctx->pc = 0x35822cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << (32 + 0));
label_358230:
    // 0x358230: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x358230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_358234:
    // 0x358234: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x358234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
label_358238:
    // 0x358238: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x358238u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
label_35823c:
    // 0x35823c: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x35823cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
label_358240:
    // 0x358240: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x358240u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_358244:
    // 0x358244: 0x31438  dsll        $v0, $v1, 16
    ctx->pc = 0x358244u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 16);
label_358248:
    // 0x358248: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x358248u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_35824c:
    // 0x35824c: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x35824cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
label_358250:
    // 0x358250: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x358250u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_358254:
    // 0x358254: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x358254u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_358258:
    // 0x358258: 0xc0631f0  jal         func_18C7C0
label_35825c:
    if (ctx->pc == 0x35825Cu) {
        ctx->pc = 0x358260u;
        goto label_358260;
    }
    ctx->pc = 0x358258u;
    SET_GPR_U32(ctx, 31, 0x358260u);
    ctx->pc = 0x18C7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C7C0u, 0x358258u, 0x358260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358260u;
label_358260:
    // 0x358260: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x358260u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_358264:
    // 0x358264: 0xc06332c  jal         func_18CCB0
label_358268:
    if (ctx->pc == 0x358268u) {
        ctx->pc = 0x35826Cu;
        goto label_35826c;
    }
    ctx->pc = 0x358264u;
    SET_GPR_U32(ctx, 31, 0x35826Cu);
    ctx->pc = 0x18CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CCB0u, 0x358264u, 0x35826Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35826Cu;
label_35826c:
    // 0x35826c: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x35826cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_358270:
    // 0x358270: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x358270u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
label_358274:
    // 0x358274: 0x34640011  ori         $a0, $v1, 0x11
    ctx->pc = 0x358274u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
label_358278:
    // 0x358278: 0x12040029  beq         $s0, $a0, . + 4 + (0x29 << 2)
label_35827c:
    if (ctx->pc == 0x35827Cu) {
        ctx->pc = 0x358280u;
        goto label_358280;
    }
    ctx->pc = 0x358278u;
    {
        const bool branch_taken_0x358278 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 4));
        if (branch_taken_0x358278) {
            ctx->pc = 0x358320u;
            goto label_358320;
        }
    }
    ctx->pc = 0x358280u;
label_358280:
    // 0x358280: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x358280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_358284:
    // 0x358284: 0xc4400100  lwc1        $f0, 0x100($v0)
    ctx->pc = 0x358284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_358288:
    // 0x358288: 0xe6000338  swc1        $f0, 0x338($s0)
    ctx->pc = 0x358288u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 824), bits); }
label_35828c:
    // 0x35828c: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x35828cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_358290:
    // 0x358290: 0xc4800100  lwc1        $f0, 0x100($a0)
    ctx->pc = 0x358290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_358294:
    // 0x358294: 0xe600033c  swc1        $f0, 0x33C($s0)
    ctx->pc = 0x358294u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 828), bits); }
label_358298:
    // 0x358298: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x358298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_35829c:
    // 0x35829c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x35829cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3582a0:
    // 0x3582a0: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x3582a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3582a4:
    // 0x3582a4: 0x10440006  beq         $v0, $a0, . + 4 + (0x6 << 2)
label_3582a8:
    if (ctx->pc == 0x3582A8u) {
        ctx->pc = 0x3582ACu;
        goto label_3582ac;
    }
    ctx->pc = 0x3582A4u;
    {
        const bool branch_taken_0x3582a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x3582a4) {
            ctx->pc = 0x3582C0u;
            goto label_3582c0;
        }
    }
    ctx->pc = 0x3582ACu;
label_3582ac:
    // 0x3582ac: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x3582acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_3582b0:
    // 0x3582b0: 0x8ca60008  lw          $a2, 0x8($a1)
    ctx->pc = 0x3582b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_3582b4:
    // 0x3582b4: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x3582b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_3582b8:
    // 0x3582b8: 0x14c20003  bne         $a2, $v0, . + 4 + (0x3 << 2)
label_3582bc:
    if (ctx->pc == 0x3582BCu) {
        ctx->pc = 0x3582C0u;
        goto label_3582c0;
    }
    ctx->pc = 0x3582B8u;
    {
        const bool branch_taken_0x3582b8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x3582b8) {
            ctx->pc = 0x3582C8u;
            goto label_3582c8;
        }
    }
    ctx->pc = 0x3582C0u;
label_3582c0:
    // 0x3582c0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3582c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3582c4:
    // 0x3582c4: 0xae040280  sw          $a0, 0x280($s0)
    ctx->pc = 0x3582c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 640), GPR_U32(ctx, 4));
label_3582c8:
    // 0x3582c8: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x3582c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3582cc:
    // 0x3582cc: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x3582ccu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_3582d0:
    // 0x3582d0: 0xc040cbc  jal         func_1032F0
label_3582d4:
    if (ctx->pc == 0x3582D4u) {
        ctx->pc = 0x3582D8u;
        goto label_3582d8;
    }
    ctx->pc = 0x3582D0u;
    SET_GPR_U32(ctx, 31, 0x3582D8u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x3582D8u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x3582D8u) { return; }
    ctx->pc = 0x3582D8u;
label_3582d8:
    // 0x3582d8: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x3582d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_3582dc:
    // 0x3582dc: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x3582dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3582e0:
    // 0x3582e0: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x3582e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3582e4:
    // 0x3582e4: 0x244600b0  addiu       $a2, $v0, 0xB0
    ctx->pc = 0x3582e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
label_3582e8:
    // 0x3582e8: 0xc040d62  jal         func_103588
label_3582ec:
    if (ctx->pc == 0x3582ECu) {
        ctx->pc = 0x3582F0u;
        goto label_3582f0;
    }
    ctx->pc = 0x3582E8u;
    SET_GPR_U32(ctx, 31, 0x3582F0u);
    ctx->pc = 0x103588u;
    {
        ctx->pc = 0x3582F0u;
        ps2_stubs::sceVu0RotMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x3582F0u) { return; }
    ctx->pc = 0x3582F0u;
label_3582f0:
    // 0x3582f0: 0x260402f0  addiu       $a0, $s0, 0x2F0
    ctx->pc = 0x3582f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 752));
label_3582f4:
    // 0x3582f4: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x3582f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3582f8:
    // 0x3582f8: 0x260602f0  addiu       $a2, $s0, 0x2F0
    ctx->pc = 0x3582f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 752));
label_3582fc:
    // 0x3582fc: 0xc040bf4  jal         func_102FD0
label_358300:
    if (ctx->pc == 0x358300u) {
        ctx->pc = 0x358304u;
        goto label_358304;
    }
    ctx->pc = 0x3582FCu;
    SET_GPR_U32(ctx, 31, 0x358304u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x358304u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x358304u) { return; }
    ctx->pc = 0x358304u;
label_358304:
    // 0x358304: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x358304u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_358308:
    // 0x358308: 0x26040300  addiu       $a0, $s0, 0x300
    ctx->pc = 0x358308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 768));
label_35830c:
    // 0x35830c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x35830cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_358310:
    // 0x358310: 0x26060300  addiu       $a2, $s0, 0x300
    ctx->pc = 0x358310u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 768));
label_358314:
    // 0x358314: 0xc040bf4  jal         func_102FD0
label_358318:
    if (ctx->pc == 0x358318u) {
        ctx->pc = 0x35831Cu;
        goto label_35831c;
    }
    ctx->pc = 0x358314u;
    SET_GPR_U32(ctx, 31, 0x35831Cu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x35831Cu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x35831Cu) { return; }
    ctx->pc = 0x35831Cu;
label_35831c:
    // 0x35831c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x35831cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_358320:
    // 0x358320: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x358320u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_358324:
    // 0x358324: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x358324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_358328:
    // 0x358328: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x358328u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_35832c:
    // 0x35832c: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x35832cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
label_358330:
    // 0x358330: 0x10000149  b           . + 4 + (0x149 << 2)
label_358334:
    if (ctx->pc == 0x358334u) {
        ctx->pc = 0x358338u;
        goto label_358338;
    }
    ctx->pc = 0x358330u;
    {
        const bool branch_taken_0x358330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x358330) {
            ctx->pc = 0x358858u;
            goto label_358858;
        }
    }
    ctx->pc = 0x358338u;
label_358338:
    // 0x358338: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x358338u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_35833c:
    // 0x35833c: 0x8c8300d4  lw          $v1, 0xD4($a0)
    ctx->pc = 0x35833cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 212)));
label_358340:
    // 0x358340: 0x28630004  slti        $v1, $v1, 0x4
    ctx->pc = 0x358340u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_358344:
    // 0x358344: 0x14600144  bnez        $v1, . + 4 + (0x144 << 2)
label_358348:
    if (ctx->pc == 0x358348u) {
        ctx->pc = 0x35834Cu;
        goto label_35834c;
    }
    ctx->pc = 0x358344u;
    {
        const bool branch_taken_0x358344 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x358344) {
            ctx->pc = 0x358858u;
            goto label_358858;
        }
    }
    ctx->pc = 0x35834Cu;
label_35834c:
    // 0x35834c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x35834cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_358350:
    // 0x358350: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x358350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
label_358354:
    // 0x358354: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x358354u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_358358:
    // 0x358358: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x358358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_35835c:
    // 0x35835c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x35835cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
label_358360:
    // 0x358360: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x358360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_358364:
    // 0x358364: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x358364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_358368:
    // 0x358368: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x358368u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_35836c:
    // 0x35836c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x35836cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_358370:
    // 0x358370: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x358370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_358374:
    // 0x358374: 0x34441600  ori         $a0, $v0, 0x1600
    ctx->pc = 0x358374u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5632);
label_358378:
    // 0x358378: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x358378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_35837c:
    // 0x35837c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x35837cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_358380:
    // 0x358380: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x358380u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_358384:
    // 0x358384: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x358384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_358388:
    // 0x358388: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x358388u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_35838c:
    // 0x35838c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x35838cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_358390:
    // 0x358390: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x358390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_358394:
    // 0x358394: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x358394u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
label_358398:
    // 0x358398: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x358398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_35839c:
    // 0x35839c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x35839cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_3583a0:
    // 0x3583a0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x3583a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_3583a4:
    // 0x3583a4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x3583a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_3583a8:
    // 0x3583a8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x3583a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_3583ac:
    // 0x3583ac: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3583acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_3583b0:
    // 0x3583b0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3583b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_3583b4:
    // 0x3583b4: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x3583b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_3583b8:
    // 0x3583b8: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x3583b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_3583bc:
    // 0x3583bc: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x3583bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
label_3583c0:
    // 0x3583c0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x3583c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_3583c4:
    // 0x3583c4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x3583c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_3583c8:
    // 0x3583c8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x3583c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_3583cc:
    // 0x3583cc: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x3583ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_3583d0:
    // 0x3583d0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3583d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_3583d4:
    // 0x3583d4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3583d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_3583d8:
    // 0x3583d8: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x3583d8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
label_3583dc:
    // 0x3583dc: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x3583dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_3583e0:
    // 0x3583e0: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x3583e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
label_3583e4:
    // 0x3583e4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x3583e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_3583e8:
    // 0x3583e8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x3583e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_3583ec:
    // 0x3583ec: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x3583ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_3583f0:
    // 0x3583f0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x3583f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_3583f4:
    // 0x3583f4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3583f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_3583f8:
    // 0x3583f8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3583f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_3583fc:
    // 0x3583fc: 0xc23825  or          $a3, $a2, $v0
    ctx->pc = 0x3583fcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
label_358400:
    // 0x358400: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x358400u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_358404:
    // 0x358404: 0xc0631f0  jal         func_18C7C0
label_358408:
    if (ctx->pc == 0x358408u) {
        ctx->pc = 0x35840Cu;
        goto label_35840c;
    }
    ctx->pc = 0x358404u;
    SET_GPR_U32(ctx, 31, 0x35840Cu);
    ctx->pc = 0x18C7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C7C0u, 0x358404u, 0x35840Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35840Cu;
label_35840c:
    // 0x35840c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x35840cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_358410:
    // 0x358410: 0xc06332c  jal         func_18CCB0
label_358414:
    if (ctx->pc == 0x358414u) {
        ctx->pc = 0x358418u;
        goto label_358418;
    }
    ctx->pc = 0x358410u;
    SET_GPR_U32(ctx, 31, 0x358418u);
    ctx->pc = 0x18CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CCB0u, 0x358410u, 0x358418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358418u;
label_358418:
    // 0x358418: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x358418u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_35841c:
    // 0x35841c: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x35841cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
label_358420:
    // 0x358420: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x358420u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
label_358424:
    // 0x358424: 0x12030026  beq         $s0, $v1, . + 4 + (0x26 << 2)
label_358428:
    if (ctx->pc == 0x358428u) {
        ctx->pc = 0x35842Cu;
        goto label_35842c;
    }
    ctx->pc = 0x358424u;
    {
        const bool branch_taken_0x358424 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x358424) {
            ctx->pc = 0x3584C0u;
            goto label_3584c0;
        }
    }
    ctx->pc = 0x35842Cu;
label_35842c:
    // 0x35842c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x35842cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_358430:
    // 0x358430: 0xc4400100  lwc1        $f0, 0x100($v0)
    ctx->pc = 0x358430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_358434:
    // 0x358434: 0xe6000338  swc1        $f0, 0x338($s0)
    ctx->pc = 0x358434u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 824), bits); }
label_358438:
    // 0x358438: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x358438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_35843c:
    // 0x35843c: 0xc4400100  lwc1        $f0, 0x100($v0)
    ctx->pc = 0x35843cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_358440:
    // 0x358440: 0xe600033c  swc1        $f0, 0x33C($s0)
    ctx->pc = 0x358440u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 828), bits); }
label_358444:
    // 0x358444: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x358444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_358448:
    // 0x358448: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x358448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_35844c:
    // 0x35844c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x35844cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_358450:
    // 0x358450: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
label_358454:
    if (ctx->pc == 0x358454u) {
        ctx->pc = 0x358458u;
        goto label_358458;
    }
    ctx->pc = 0x358450u;
    {
        const bool branch_taken_0x358450 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x358450) {
            ctx->pc = 0x35846Cu;
            goto label_35846c;
        }
    }
    ctx->pc = 0x358458u;
label_358458:
    // 0x358458: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x358458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_35845c:
    // 0x35845c: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x35845cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_358460:
    // 0x358460: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x358460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_358464:
    // 0x358464: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_358468:
    if (ctx->pc == 0x358468u) {
        ctx->pc = 0x35846Cu;
        goto label_35846c;
    }
    ctx->pc = 0x358464u;
    {
        const bool branch_taken_0x358464 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x358464) {
            ctx->pc = 0x358474u;
            goto label_358474;
        }
    }
    ctx->pc = 0x35846Cu;
label_35846c:
    // 0x35846c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35846cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_358470:
    // 0x358470: 0xae020280  sw          $v0, 0x280($s0)
    ctx->pc = 0x358470u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 640), GPR_U32(ctx, 2));
label_358474:
    // 0x358474: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x358474u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_358478:
    // 0x358478: 0xc040cbc  jal         func_1032F0
label_35847c:
    if (ctx->pc == 0x35847Cu) {
        ctx->pc = 0x358480u;
        goto label_358480;
    }
    ctx->pc = 0x358478u;
    SET_GPR_U32(ctx, 31, 0x358480u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x358480u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x358480u) { return; }
    ctx->pc = 0x358480u;
label_358480:
    // 0x358480: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x358480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_358484:
    // 0x358484: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x358484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_358488:
    // 0x358488: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x358488u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_35848c:
    // 0x35848c: 0x244600b0  addiu       $a2, $v0, 0xB0
    ctx->pc = 0x35848cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
label_358490:
    // 0x358490: 0xc040d62  jal         func_103588
label_358494:
    if (ctx->pc == 0x358494u) {
        ctx->pc = 0x358498u;
        goto label_358498;
    }
    ctx->pc = 0x358490u;
    SET_GPR_U32(ctx, 31, 0x358498u);
    ctx->pc = 0x103588u;
    {
        ctx->pc = 0x358498u;
        ps2_stubs::sceVu0RotMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x358498u) { return; }
    ctx->pc = 0x358498u;
label_358498:
    // 0x358498: 0x260402f0  addiu       $a0, $s0, 0x2F0
    ctx->pc = 0x358498u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 752));
label_35849c:
    // 0x35849c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x35849cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3584a0:
    // 0x3584a0: 0x260602f0  addiu       $a2, $s0, 0x2F0
    ctx->pc = 0x3584a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 752));
label_3584a4:
    // 0x3584a4: 0xc040bf4  jal         func_102FD0
label_3584a8:
    if (ctx->pc == 0x3584A8u) {
        ctx->pc = 0x3584ACu;
        goto label_3584ac;
    }
    ctx->pc = 0x3584A4u;
    SET_GPR_U32(ctx, 31, 0x3584ACu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x3584ACu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x3584ACu) { return; }
    ctx->pc = 0x3584ACu;
label_3584ac:
    // 0x3584ac: 0x26040300  addiu       $a0, $s0, 0x300
    ctx->pc = 0x3584acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 768));
label_3584b0:
    // 0x3584b0: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x3584b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3584b4:
    // 0x3584b4: 0x26060300  addiu       $a2, $s0, 0x300
    ctx->pc = 0x3584b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 768));
label_3584b8:
    // 0x3584b8: 0xc040bf4  jal         func_102FD0
label_3584bc:
    if (ctx->pc == 0x3584BCu) {
        ctx->pc = 0x3584C0u;
        goto label_3584c0;
    }
    ctx->pc = 0x3584B8u;
    SET_GPR_U32(ctx, 31, 0x3584C0u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x3584C0u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x3584C0u) { return; }
    ctx->pc = 0x3584C0u;
label_3584c0:
    // 0x3584c0: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x3584c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_3584c4:
    // 0x3584c4: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x3584c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_3584c8:
    // 0x3584c8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3584c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3584cc:
    // 0x3584cc: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x3584ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
label_3584d0:
    // 0x3584d0: 0x100000e1  b           . + 4 + (0xE1 << 2)
label_3584d4:
    if (ctx->pc == 0x3584D4u) {
        ctx->pc = 0x3584D8u;
        goto label_3584d8;
    }
    ctx->pc = 0x3584D0u;
    {
        const bool branch_taken_0x3584d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3584d0) {
            ctx->pc = 0x358858u;
            goto label_358858;
        }
    }
    ctx->pc = 0x3584D8u;
label_3584d8:
    // 0x3584d8: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x3584d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_3584dc:
    // 0x3584dc: 0x8c6300d4  lw          $v1, 0xD4($v1)
    ctx->pc = 0x3584dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
label_3584e0:
    // 0x3584e0: 0x28630005  slti        $v1, $v1, 0x5
    ctx->pc = 0x3584e0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
label_3584e4:
    // 0x3584e4: 0x146000dc  bnez        $v1, . + 4 + (0xDC << 2)
label_3584e8:
    if (ctx->pc == 0x3584E8u) {
        ctx->pc = 0x3584ECu;
        goto label_3584ec;
    }
    ctx->pc = 0x3584E4u;
    {
        const bool branch_taken_0x3584e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3584e4) {
            ctx->pc = 0x358858u;
            goto label_358858;
        }
    }
    ctx->pc = 0x3584ECu;
label_3584ec:
    // 0x3584ec: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x3584ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_3584f0:
    // 0x3584f0: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x3584f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
label_3584f4:
    // 0x3584f4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x3584f4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_3584f8:
    // 0x3584f8: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x3584f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3584fc:
    // 0x3584fc: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x3584fcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
label_358500:
    // 0x358500: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x358500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_358504:
    // 0x358504: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x358504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_358508:
    // 0x358508: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x358508u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_35850c:
    // 0x35850c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x35850cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_358510:
    // 0x358510: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x358510u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_358514:
    // 0x358514: 0x34441600  ori         $a0, $v0, 0x1600
    ctx->pc = 0x358514u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5632);
label_358518:
    // 0x358518: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x358518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_35851c:
    // 0x35851c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x35851cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_358520:
    // 0x358520: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x358520u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_358524:
    // 0x358524: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x358524u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_358528:
    // 0x358528: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x358528u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_35852c:
    // 0x35852c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x35852cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_358530:
    // 0x358530: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x358530u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_358534:
    // 0x358534: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x358534u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
label_358538:
    // 0x358538: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x358538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_35853c:
    // 0x35853c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x35853cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_358540:
    // 0x358540: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x358540u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_358544:
    // 0x358544: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x358544u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_358548:
    // 0x358548: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x358548u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_35854c:
    // 0x35854c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x35854cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_358550:
    // 0x358550: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x358550u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_358554:
    // 0x358554: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x358554u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_358558:
    // 0x358558: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x358558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_35855c:
    // 0x35855c: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x35855cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
label_358560:
    // 0x358560: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x358560u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_358564:
    // 0x358564: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x358564u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_358568:
    // 0x358568: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x358568u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_35856c:
    // 0x35856c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x35856cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_358570:
    // 0x358570: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x358570u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_358574:
    // 0x358574: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x358574u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_358578:
    // 0x358578: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x358578u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
label_35857c:
    // 0x35857c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x35857cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_358580:
    // 0x358580: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x358580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
label_358584:
    // 0x358584: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x358584u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_358588:
    // 0x358588: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x358588u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_35858c:
    // 0x35858c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x35858cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_358590:
    // 0x358590: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x358590u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_358594:
    // 0x358594: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x358594u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_358598:
    // 0x358598: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x358598u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_35859c:
    // 0x35859c: 0xc23825  or          $a3, $a2, $v0
    ctx->pc = 0x35859cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
label_3585a0:
    // 0x3585a0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x3585a0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_3585a4:
    // 0x3585a4: 0xc0631f0  jal         func_18C7C0
label_3585a8:
    if (ctx->pc == 0x3585A8u) {
        ctx->pc = 0x3585ACu;
        goto label_3585ac;
    }
    ctx->pc = 0x3585A4u;
    SET_GPR_U32(ctx, 31, 0x3585ACu);
    ctx->pc = 0x18C7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C7C0u, 0x3585A4u, 0x3585ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3585ACu;
label_3585ac:
    // 0x3585ac: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x3585acu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_3585b0:
    // 0x3585b0: 0xc06332c  jal         func_18CCB0
label_3585b4:
    if (ctx->pc == 0x3585B4u) {
        ctx->pc = 0x3585B8u;
        goto label_3585b8;
    }
    ctx->pc = 0x3585B0u;
    SET_GPR_U32(ctx, 31, 0x3585B8u);
    ctx->pc = 0x18CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CCB0u, 0x3585B0u, 0x3585B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3585B8u;
label_3585b8:
    // 0x3585b8: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x3585b8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_3585bc:
    // 0x3585bc: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x3585bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
label_3585c0:
    // 0x3585c0: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x3585c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
label_3585c4:
    // 0x3585c4: 0x12030026  beq         $s0, $v1, . + 4 + (0x26 << 2)
label_3585c8:
    if (ctx->pc == 0x3585C8u) {
        ctx->pc = 0x3585CCu;
        goto label_3585cc;
    }
    ctx->pc = 0x3585C4u;
    {
        const bool branch_taken_0x3585c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x3585c4) {
            ctx->pc = 0x358660u;
            goto label_358660;
        }
    }
    ctx->pc = 0x3585CCu;
label_3585cc:
    // 0x3585cc: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x3585ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_3585d0:
    // 0x3585d0: 0xc4400100  lwc1        $f0, 0x100($v0)
    ctx->pc = 0x3585d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3585d4:
    // 0x3585d4: 0xe6000338  swc1        $f0, 0x338($s0)
    ctx->pc = 0x3585d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 824), bits); }
label_3585d8:
    // 0x3585d8: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x3585d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_3585dc:
    // 0x3585dc: 0xc4400100  lwc1        $f0, 0x100($v0)
    ctx->pc = 0x3585dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3585e0:
    // 0x3585e0: 0xe600033c  swc1        $f0, 0x33C($s0)
    ctx->pc = 0x3585e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 828), bits); }
label_3585e4:
    // 0x3585e4: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x3585e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_3585e8:
    // 0x3585e8: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x3585e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3585ec:
    // 0x3585ec: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x3585ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3585f0:
    // 0x3585f0: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
label_3585f4:
    if (ctx->pc == 0x3585F4u) {
        ctx->pc = 0x3585F8u;
        goto label_3585f8;
    }
    ctx->pc = 0x3585F0u;
    {
        const bool branch_taken_0x3585f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3585f0) {
            ctx->pc = 0x35860Cu;
            goto label_35860c;
        }
    }
    ctx->pc = 0x3585F8u;
label_3585f8:
    // 0x3585f8: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x3585f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_3585fc:
    // 0x3585fc: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x3585fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_358600:
    // 0x358600: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x358600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_358604:
    // 0x358604: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_358608:
    if (ctx->pc == 0x358608u) {
        ctx->pc = 0x35860Cu;
        goto label_35860c;
    }
    ctx->pc = 0x358604u;
    {
        const bool branch_taken_0x358604 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x358604) {
            ctx->pc = 0x358614u;
            goto label_358614;
        }
    }
    ctx->pc = 0x35860Cu;
label_35860c:
    // 0x35860c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35860cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_358610:
    // 0x358610: 0xae020280  sw          $v0, 0x280($s0)
    ctx->pc = 0x358610u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 640), GPR_U32(ctx, 2));
label_358614:
    // 0x358614: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x358614u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_358618:
    // 0x358618: 0xc040cbc  jal         func_1032F0
label_35861c:
    if (ctx->pc == 0x35861Cu) {
        ctx->pc = 0x358620u;
        goto label_358620;
    }
    ctx->pc = 0x358618u;
    SET_GPR_U32(ctx, 31, 0x358620u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x358620u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x358620u) { return; }
    ctx->pc = 0x358620u;
label_358620:
    // 0x358620: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x358620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_358624:
    // 0x358624: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x358624u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_358628:
    // 0x358628: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x358628u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_35862c:
    // 0x35862c: 0x244600b0  addiu       $a2, $v0, 0xB0
    ctx->pc = 0x35862cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
label_358630:
    // 0x358630: 0xc040d62  jal         func_103588
label_358634:
    if (ctx->pc == 0x358634u) {
        ctx->pc = 0x358638u;
        goto label_358638;
    }
    ctx->pc = 0x358630u;
    SET_GPR_U32(ctx, 31, 0x358638u);
    ctx->pc = 0x103588u;
    {
        ctx->pc = 0x358638u;
        ps2_stubs::sceVu0RotMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x358638u) { return; }
    ctx->pc = 0x358638u;
label_358638:
    // 0x358638: 0x260402f0  addiu       $a0, $s0, 0x2F0
    ctx->pc = 0x358638u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 752));
label_35863c:
    // 0x35863c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x35863cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_358640:
    // 0x358640: 0x260602f0  addiu       $a2, $s0, 0x2F0
    ctx->pc = 0x358640u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 752));
label_358644:
    // 0x358644: 0xc040bf4  jal         func_102FD0
label_358648:
    if (ctx->pc == 0x358648u) {
        ctx->pc = 0x35864Cu;
        goto label_35864c;
    }
    ctx->pc = 0x358644u;
    SET_GPR_U32(ctx, 31, 0x35864Cu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x35864Cu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x35864Cu) { return; }
    ctx->pc = 0x35864Cu;
label_35864c:
    // 0x35864c: 0x26040300  addiu       $a0, $s0, 0x300
    ctx->pc = 0x35864cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 768));
label_358650:
    // 0x358650: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x358650u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_358654:
    // 0x358654: 0x26060300  addiu       $a2, $s0, 0x300
    ctx->pc = 0x358654u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 768));
label_358658:
    // 0x358658: 0xc040bf4  jal         func_102FD0
label_35865c:
    if (ctx->pc == 0x35865Cu) {
        ctx->pc = 0x358660u;
        goto label_358660;
    }
    ctx->pc = 0x358658u;
    SET_GPR_U32(ctx, 31, 0x358660u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x358660u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x358660u) { return; }
    ctx->pc = 0x358660u;
label_358660:
    // 0x358660: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x358660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_358664:
    // 0x358664: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x358664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_358668:
    // 0x358668: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x358668u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_35866c:
    // 0x35866c: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x35866cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
label_358670:
    // 0x358670: 0x10000079  b           . + 4 + (0x79 << 2)
label_358674:
    if (ctx->pc == 0x358674u) {
        ctx->pc = 0x358678u;
        goto label_358678;
    }
    ctx->pc = 0x358670u;
    {
        const bool branch_taken_0x358670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x358670) {
            ctx->pc = 0x358858u;
            goto label_358858;
        }
    }
    ctx->pc = 0x358678u;
label_358678:
    // 0x358678: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x358678u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_35867c:
    // 0x35867c: 0x8c8500d4  lw          $a1, 0xD4($a0)
    ctx->pc = 0x35867cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 212)));
label_358680:
    // 0x358680: 0x28a60007  slti        $a2, $a1, 0x7
    ctx->pc = 0x358680u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)7) ? 1 : 0);
label_358684:
    // 0x358684: 0x14c00074  bnez        $a2, . + 4 + (0x74 << 2)
label_358688:
    if (ctx->pc == 0x358688u) {
        ctx->pc = 0x35868Cu;
        goto label_35868c;
    }
    ctx->pc = 0x358684u;
    {
        const bool branch_taken_0x358684 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x358684) {
            ctx->pc = 0x358858u;
            goto label_358858;
        }
    }
    ctx->pc = 0x35868Cu;
label_35868c:
    // 0x35868c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x35868cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_358690:
    // 0x358690: 0x244300a0  addiu       $v1, $v0, 0xA0
    ctx->pc = 0x358690u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
label_358694:
    // 0x358694: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x358694u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_358698:
    // 0x358698: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x358698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_35869c:
    // 0x35869c: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x35869cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
label_3586a0:
    // 0x3586a0: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x3586a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_3586a4:
    // 0x3586a4: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x3586a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_3586a8:
    // 0x3586a8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x3586a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_3586ac:
    // 0x3586ac: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x3586acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_3586b0:
    // 0x3586b0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3586b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_3586b4:
    // 0x3586b4: 0x34621600  ori         $v0, $v1, 0x1600
    ctx->pc = 0x3586b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)5632);
label_3586b8:
    // 0x3586b8: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x3586b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3586bc:
    // 0x3586bc: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x3586bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
label_3586c0:
    // 0x3586c0: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x3586c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
label_3586c4:
    // 0x3586c4: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x3586c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_3586c8:
    // 0x3586c8: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x3586c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_3586cc:
    // 0x3586cc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x3586ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_3586d0:
    // 0x3586d0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3586d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_3586d4:
    // 0x3586d4: 0x3383c  dsll32      $a3, $v1, 0
    ctx->pc = 0x3586d4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << (32 + 0));
label_3586d8:
    // 0x3586d8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3586d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3586dc:
    // 0x3586dc: 0x4303c  dsll32      $a2, $a0, 0
    ctx->pc = 0x3586dcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << (32 + 0));
label_3586e0:
    // 0x3586e0: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x3586e0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
label_3586e4:
    // 0x3586e4: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x3586e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_3586e8:
    // 0x3586e8: 0x51c38  dsll        $v1, $a1, 16
    ctx->pc = 0x3586e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << 16);
label_3586ec:
    // 0x3586ec: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x3586ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_3586f0:
    // 0x3586f0: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x3586f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
label_3586f4:
    // 0x3586f4: 0xe34025  or          $t0, $a3, $v1
    ctx->pc = 0x3586f4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
label_3586f8:
    // 0x3586f8: 0x8fa60088  lw          $a2, 0x88($sp)
    ctx->pc = 0x3586f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_3586fc:
    // 0x3586fc: 0x8cc300c0  lw          $v1, 0xC0($a2)
    ctx->pc = 0x3586fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 192)));
label_358700:
    // 0x358700: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x358700u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
label_358704:
    // 0x358704: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x358704u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
label_358708:
    // 0x358708: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x358708u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_35870c:
    // 0x35870c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x35870cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_358710:
    // 0x358710: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x358710u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_358714:
    // 0x358714: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x358714u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_358718:
    // 0x358718: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x358718u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
label_35871c:
    // 0x35871c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x35871cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_358720:
    // 0x358720: 0x8c6300c0  lw          $v1, 0xC0($v1)
    ctx->pc = 0x358720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 192)));
label_358724:
    // 0x358724: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x358724u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
label_358728:
    // 0x358728: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x358728u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
label_35872c:
    // 0x35872c: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x35872cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_358730:
    // 0x358730: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x358730u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_358734:
    // 0x358734: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x358734u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_358738:
    // 0x358738: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x358738u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
label_35873c:
    // 0x35873c: 0xa33825  or          $a3, $a1, $v1
    ctx->pc = 0x35873cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_358740:
    // 0x358740: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x358740u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_358744:
    // 0x358744: 0x71002e28  paddub      $a1, $t0, $zero
    ctx->pc = 0x358744u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
label_358748:
    // 0x358748: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x358748u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_35874c:
    // 0x35874c: 0xc0631f0  jal         func_18C7C0
label_358750:
    if (ctx->pc == 0x358750u) {
        ctx->pc = 0x358754u;
        goto label_358754;
    }
    ctx->pc = 0x35874Cu;
    SET_GPR_U32(ctx, 31, 0x358754u);
    ctx->pc = 0x18C7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C7C0u, 0x35874Cu, 0x358754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358754u;
label_358754:
    // 0x358754: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x358754u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_358758:
    // 0x358758: 0xc06332c  jal         func_18CCB0
label_35875c:
    if (ctx->pc == 0x35875Cu) {
        ctx->pc = 0x358760u;
        goto label_358760;
    }
    ctx->pc = 0x358758u;
    SET_GPR_U32(ctx, 31, 0x358760u);
    ctx->pc = 0x18CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CCB0u, 0x358758u, 0x358760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358760u;
label_358760:
    // 0x358760: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x358760u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_358764:
    // 0x358764: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x358764u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
label_358768:
    // 0x358768: 0x34660011  ori         $a2, $v1, 0x11
    ctx->pc = 0x358768u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
label_35876c:
    // 0x35876c: 0x12060027  beq         $s0, $a2, . + 4 + (0x27 << 2)
label_358770:
    if (ctx->pc == 0x358770u) {
        ctx->pc = 0x358774u;
        goto label_358774;
    }
    ctx->pc = 0x35876Cu;
    {
        const bool branch_taken_0x35876c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 6));
        if (branch_taken_0x35876c) {
            ctx->pc = 0x35880Cu;
            goto label_35880c;
        }
    }
    ctx->pc = 0x358774u;
label_358774:
    // 0x358774: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x358774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_358778:
    // 0x358778: 0xc4400100  lwc1        $f0, 0x100($v0)
    ctx->pc = 0x358778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_35877c:
    // 0x35877c: 0xe6000338  swc1        $f0, 0x338($s0)
    ctx->pc = 0x35877cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 824), bits); }
label_358780:
    // 0x358780: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x358780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_358784:
    // 0x358784: 0xc4400100  lwc1        $f0, 0x100($v0)
    ctx->pc = 0x358784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_358788:
    // 0x358788: 0xe600033c  swc1        $f0, 0x33C($s0)
    ctx->pc = 0x358788u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 828), bits); }
label_35878c:
    // 0x35878c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x35878cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_358790:
    // 0x358790: 0x8c470008  lw          $a3, 0x8($v0)
    ctx->pc = 0x358790u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_358794:
    // 0x358794: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x358794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_358798:
    // 0x358798: 0x10e20006  beq         $a3, $v0, . + 4 + (0x6 << 2)
label_35879c:
    if (ctx->pc == 0x35879Cu) {
        ctx->pc = 0x3587A0u;
        goto label_3587a0;
    }
    ctx->pc = 0x358798u;
    {
        const bool branch_taken_0x358798 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        if (branch_taken_0x358798) {
            ctx->pc = 0x3587B4u;
            goto label_3587b4;
        }
    }
    ctx->pc = 0x3587A0u;
label_3587a0:
    // 0x3587a0: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x3587a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_3587a4:
    // 0x3587a4: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x3587a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3587a8:
    // 0x3587a8: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x3587a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_3587ac:
    // 0x3587ac: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
label_3587b0:
    if (ctx->pc == 0x3587B0u) {
        ctx->pc = 0x3587B4u;
        goto label_3587b4;
    }
    ctx->pc = 0x3587ACu;
    {
        const bool branch_taken_0x3587ac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3587ac) {
            ctx->pc = 0x3587BCu;
            goto label_3587bc;
        }
    }
    ctx->pc = 0x3587B4u;
label_3587b4:
    // 0x3587b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3587b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3587b8:
    // 0x3587b8: 0xae020280  sw          $v0, 0x280($s0)
    ctx->pc = 0x3587b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 640), GPR_U32(ctx, 2));
label_3587bc:
    // 0x3587bc: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x3587bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3587c0:
    // 0x3587c0: 0xc040cbc  jal         func_1032F0
label_3587c4:
    if (ctx->pc == 0x3587C4u) {
        ctx->pc = 0x3587C8u;
        goto label_3587c8;
    }
    ctx->pc = 0x3587C0u;
    SET_GPR_U32(ctx, 31, 0x3587C8u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x3587C8u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x3587C8u) { return; }
    ctx->pc = 0x3587C8u;
label_3587c8:
    // 0x3587c8: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x3587c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_3587cc:
    // 0x3587cc: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x3587ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3587d0:
    // 0x3587d0: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x3587d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3587d4:
    // 0x3587d4: 0x244600b0  addiu       $a2, $v0, 0xB0
    ctx->pc = 0x3587d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
label_3587d8:
    // 0x3587d8: 0xc040d62  jal         func_103588
label_3587dc:
    if (ctx->pc == 0x3587DCu) {
        ctx->pc = 0x3587E0u;
        goto label_3587e0;
    }
    ctx->pc = 0x3587D8u;
    SET_GPR_U32(ctx, 31, 0x3587E0u);
    ctx->pc = 0x103588u;
    {
        ctx->pc = 0x3587E0u;
        ps2_stubs::sceVu0RotMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x3587E0u) { return; }
    ctx->pc = 0x3587E0u;
label_3587e0:
    // 0x3587e0: 0x260402f0  addiu       $a0, $s0, 0x2F0
    ctx->pc = 0x3587e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 752));
label_3587e4:
    // 0x3587e4: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x3587e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3587e8:
    // 0x3587e8: 0x260202f0  addiu       $v0, $s0, 0x2F0
    ctx->pc = 0x3587e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 752));
label_3587ec:
    // 0x3587ec: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x3587ecu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_3587f0:
    // 0x3587f0: 0xc040bf4  jal         func_102FD0
label_3587f4:
    if (ctx->pc == 0x3587F4u) {
        ctx->pc = 0x3587F8u;
        goto label_3587f8;
    }
    ctx->pc = 0x3587F0u;
    SET_GPR_U32(ctx, 31, 0x3587F8u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x3587F8u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x3587F8u) { return; }
    ctx->pc = 0x3587F8u;
label_3587f8:
    // 0x3587f8: 0x26040300  addiu       $a0, $s0, 0x300
    ctx->pc = 0x3587f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 768));
label_3587fc:
    // 0x3587fc: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x3587fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_358800:
    // 0x358800: 0x26060300  addiu       $a2, $s0, 0x300
    ctx->pc = 0x358800u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 768));
label_358804:
    // 0x358804: 0xc040bf4  jal         func_102FD0
label_358808:
    if (ctx->pc == 0x358808u) {
        ctx->pc = 0x35880Cu;
        goto label_35880c;
    }
    ctx->pc = 0x358804u;
    SET_GPR_U32(ctx, 31, 0x35880Cu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x35880Cu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x35880Cu) { return; }
    ctx->pc = 0x35880Cu;
label_35880c:
    // 0x35880c: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x35880cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_358810:
    // 0x358810: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x358810u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_358814:
    // 0x358814: 0x24a60001  addiu       $a2, $a1, 0x1
    ctx->pc = 0x358814u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_358818:
    // 0x358818: 0xac860014  sw          $a2, 0x14($a0)
    ctx->pc = 0x358818u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 6));
label_35881c:
    // 0x35881c: 0x1000000e  b           . + 4 + (0xE << 2)
label_358820:
    if (ctx->pc == 0x358820u) {
        ctx->pc = 0x358824u;
        goto label_358824;
    }
    ctx->pc = 0x35881Cu;
    {
        const bool branch_taken_0x35881c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35881c) {
            ctx->pc = 0x358858u;
            goto label_358858;
        }
    }
    ctx->pc = 0x358824u;
label_358824:
    // 0x358824: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x358824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_358828:
    // 0x358828: 0x8c640014  lw          $a0, 0x14($v1)
    ctx->pc = 0x358828u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_35882c:
    // 0x35882c: 0x24850001  addiu       $a1, $a0, 0x1
    ctx->pc = 0x35882cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_358830:
    // 0x358830: 0xac650014  sw          $a1, 0x14($v1)
    ctx->pc = 0x358830u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 5));
label_358834:
    // 0x358834: 0x8fa60088  lw          $a2, 0x88($sp)
    ctx->pc = 0x358834u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_358838:
    // 0x358838: 0x8cc30014  lw          $v1, 0x14($a2)
    ctx->pc = 0x358838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
label_35883c:
    // 0x35883c: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x35883cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_358840:
    // 0x358840: 0xacc40014  sw          $a0, 0x14($a2)
    ctx->pc = 0x358840u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 4));
label_358844:
    // 0x358844: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x358844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_358848:
    // 0x358848: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x358848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_35884c:
    // 0x35884c: 0x38640010  xori        $a0, $v1, 0x10
    ctx->pc = 0x35884cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)16);
label_358850:
    // 0x358850: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x358850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_358854:
    // 0x358854: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x358854u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_358858:
    // 0x358858: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x358858u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_35885c:
    // 0x35885c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x35885cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_358860:
    // 0x358860: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x358860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_358864:
    // 0x358864: 0x3e00008  jr          $ra
label_358868:
    if (ctx->pc == 0x358868u) {
        ctx->pc = 0x35886Cu;
        goto label_fallthrough_0x358864;
    }
    ctx->pc = 0x358864u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x358864u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x358864:
    ctx->pc = 0x35886Cu;
}
