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

// Function: Em09_R1_die00
// Address: 0x3510a0 - 0x351cbc
void Em09_R1_die00_0x3510a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em09_R1_die00_0x3510a0");
#endif

    switch (ctx->pc) {
        case 0x3510a0u: goto label_3510a0;
        case 0x3510a4u: goto label_3510a4;
        case 0x3510a8u: goto label_3510a8;
        case 0x3510acu: goto label_3510ac;
        case 0x3510b0u: goto label_3510b0;
        case 0x3510b4u: goto label_3510b4;
        case 0x3510b8u: goto label_3510b8;
        case 0x3510bcu: goto label_3510bc;
        case 0x3510c0u: goto label_3510c0;
        case 0x3510c4u: goto label_3510c4;
        case 0x3510c8u: goto label_3510c8;
        case 0x3510ccu: goto label_3510cc;
        case 0x3510d0u: goto label_3510d0;
        case 0x3510d4u: goto label_3510d4;
        case 0x3510d8u: goto label_3510d8;
        case 0x3510dcu: goto label_3510dc;
        case 0x3510e0u: goto label_3510e0;
        case 0x3510e4u: goto label_3510e4;
        case 0x3510e8u: goto label_3510e8;
        case 0x3510ecu: goto label_3510ec;
        case 0x3510f0u: goto label_3510f0;
        case 0x3510f4u: goto label_3510f4;
        case 0x3510f8u: goto label_3510f8;
        case 0x3510fcu: goto label_3510fc;
        case 0x351100u: goto label_351100;
        case 0x351104u: goto label_351104;
        case 0x351108u: goto label_351108;
        case 0x35110cu: goto label_35110c;
        case 0x351110u: goto label_351110;
        case 0x351114u: goto label_351114;
        case 0x351118u: goto label_351118;
        case 0x35111cu: goto label_35111c;
        case 0x351120u: goto label_351120;
        case 0x351124u: goto label_351124;
        case 0x351128u: goto label_351128;
        case 0x35112cu: goto label_35112c;
        case 0x351130u: goto label_351130;
        case 0x351134u: goto label_351134;
        case 0x351138u: goto label_351138;
        case 0x35113cu: goto label_35113c;
        case 0x351140u: goto label_351140;
        case 0x351144u: goto label_351144;
        case 0x351148u: goto label_351148;
        case 0x35114cu: goto label_35114c;
        case 0x351150u: goto label_351150;
        case 0x351154u: goto label_351154;
        case 0x351158u: goto label_351158;
        case 0x35115cu: goto label_35115c;
        case 0x351160u: goto label_351160;
        case 0x351164u: goto label_351164;
        case 0x351168u: goto label_351168;
        case 0x35116cu: goto label_35116c;
        case 0x351170u: goto label_351170;
        case 0x351174u: goto label_351174;
        case 0x351178u: goto label_351178;
        case 0x35117cu: goto label_35117c;
        case 0x351180u: goto label_351180;
        case 0x351184u: goto label_351184;
        case 0x351188u: goto label_351188;
        case 0x35118cu: goto label_35118c;
        case 0x351190u: goto label_351190;
        case 0x351194u: goto label_351194;
        case 0x351198u: goto label_351198;
        case 0x35119cu: goto label_35119c;
        case 0x3511a0u: goto label_3511a0;
        case 0x3511a4u: goto label_3511a4;
        case 0x3511a8u: goto label_3511a8;
        case 0x3511acu: goto label_3511ac;
        case 0x3511b0u: goto label_3511b0;
        case 0x3511b4u: goto label_3511b4;
        case 0x3511b8u: goto label_3511b8;
        case 0x3511bcu: goto label_3511bc;
        case 0x3511c0u: goto label_3511c0;
        case 0x3511c4u: goto label_3511c4;
        case 0x3511c8u: goto label_3511c8;
        case 0x3511ccu: goto label_3511cc;
        case 0x3511d0u: goto label_3511d0;
        case 0x3511d4u: goto label_3511d4;
        case 0x3511d8u: goto label_3511d8;
        case 0x3511dcu: goto label_3511dc;
        case 0x3511e0u: goto label_3511e0;
        case 0x3511e4u: goto label_3511e4;
        case 0x3511e8u: goto label_3511e8;
        case 0x3511ecu: goto label_3511ec;
        case 0x3511f0u: goto label_3511f0;
        case 0x3511f4u: goto label_3511f4;
        case 0x3511f8u: goto label_3511f8;
        case 0x3511fcu: goto label_3511fc;
        case 0x351200u: goto label_351200;
        case 0x351204u: goto label_351204;
        case 0x351208u: goto label_351208;
        case 0x35120cu: goto label_35120c;
        case 0x351210u: goto label_351210;
        case 0x351214u: goto label_351214;
        case 0x351218u: goto label_351218;
        case 0x35121cu: goto label_35121c;
        case 0x351220u: goto label_351220;
        case 0x351224u: goto label_351224;
        case 0x351228u: goto label_351228;
        case 0x35122cu: goto label_35122c;
        case 0x351230u: goto label_351230;
        case 0x351234u: goto label_351234;
        case 0x351238u: goto label_351238;
        case 0x35123cu: goto label_35123c;
        case 0x351240u: goto label_351240;
        case 0x351244u: goto label_351244;
        case 0x351248u: goto label_351248;
        case 0x35124cu: goto label_35124c;
        case 0x351250u: goto label_351250;
        case 0x351254u: goto label_351254;
        case 0x351258u: goto label_351258;
        case 0x35125cu: goto label_35125c;
        case 0x351260u: goto label_351260;
        case 0x351264u: goto label_351264;
        case 0x351268u: goto label_351268;
        case 0x35126cu: goto label_35126c;
        case 0x351270u: goto label_351270;
        case 0x351274u: goto label_351274;
        case 0x351278u: goto label_351278;
        case 0x35127cu: goto label_35127c;
        case 0x351280u: goto label_351280;
        case 0x351284u: goto label_351284;
        case 0x351288u: goto label_351288;
        case 0x35128cu: goto label_35128c;
        case 0x351290u: goto label_351290;
        case 0x351294u: goto label_351294;
        case 0x351298u: goto label_351298;
        case 0x35129cu: goto label_35129c;
        case 0x3512a0u: goto label_3512a0;
        case 0x3512a4u: goto label_3512a4;
        case 0x3512a8u: goto label_3512a8;
        case 0x3512acu: goto label_3512ac;
        case 0x3512b0u: goto label_3512b0;
        case 0x3512b4u: goto label_3512b4;
        case 0x3512b8u: goto label_3512b8;
        case 0x3512bcu: goto label_3512bc;
        case 0x3512c0u: goto label_3512c0;
        case 0x3512c4u: goto label_3512c4;
        case 0x3512c8u: goto label_3512c8;
        case 0x3512ccu: goto label_3512cc;
        case 0x3512d0u: goto label_3512d0;
        case 0x3512d4u: goto label_3512d4;
        case 0x3512d8u: goto label_3512d8;
        case 0x3512dcu: goto label_3512dc;
        case 0x3512e0u: goto label_3512e0;
        case 0x3512e4u: goto label_3512e4;
        case 0x3512e8u: goto label_3512e8;
        case 0x3512ecu: goto label_3512ec;
        case 0x3512f0u: goto label_3512f0;
        case 0x3512f4u: goto label_3512f4;
        case 0x3512f8u: goto label_3512f8;
        case 0x3512fcu: goto label_3512fc;
        case 0x351300u: goto label_351300;
        case 0x351304u: goto label_351304;
        case 0x351308u: goto label_351308;
        case 0x35130cu: goto label_35130c;
        case 0x351310u: goto label_351310;
        case 0x351314u: goto label_351314;
        case 0x351318u: goto label_351318;
        case 0x35131cu: goto label_35131c;
        case 0x351320u: goto label_351320;
        case 0x351324u: goto label_351324;
        case 0x351328u: goto label_351328;
        case 0x35132cu: goto label_35132c;
        case 0x351330u: goto label_351330;
        case 0x351334u: goto label_351334;
        case 0x351338u: goto label_351338;
        case 0x35133cu: goto label_35133c;
        case 0x351340u: goto label_351340;
        case 0x351344u: goto label_351344;
        case 0x351348u: goto label_351348;
        case 0x35134cu: goto label_35134c;
        case 0x351350u: goto label_351350;
        case 0x351354u: goto label_351354;
        case 0x351358u: goto label_351358;
        case 0x35135cu: goto label_35135c;
        case 0x351360u: goto label_351360;
        case 0x351364u: goto label_351364;
        case 0x351368u: goto label_351368;
        case 0x35136cu: goto label_35136c;
        case 0x351370u: goto label_351370;
        case 0x351374u: goto label_351374;
        case 0x351378u: goto label_351378;
        case 0x35137cu: goto label_35137c;
        case 0x351380u: goto label_351380;
        case 0x351384u: goto label_351384;
        case 0x351388u: goto label_351388;
        case 0x35138cu: goto label_35138c;
        case 0x351390u: goto label_351390;
        case 0x351394u: goto label_351394;
        case 0x351398u: goto label_351398;
        case 0x35139cu: goto label_35139c;
        case 0x3513a0u: goto label_3513a0;
        case 0x3513a4u: goto label_3513a4;
        case 0x3513a8u: goto label_3513a8;
        case 0x3513acu: goto label_3513ac;
        case 0x3513b0u: goto label_3513b0;
        case 0x3513b4u: goto label_3513b4;
        case 0x3513b8u: goto label_3513b8;
        case 0x3513bcu: goto label_3513bc;
        case 0x3513c0u: goto label_3513c0;
        case 0x3513c4u: goto label_3513c4;
        case 0x3513c8u: goto label_3513c8;
        case 0x3513ccu: goto label_3513cc;
        case 0x3513d0u: goto label_3513d0;
        case 0x3513d4u: goto label_3513d4;
        case 0x3513d8u: goto label_3513d8;
        case 0x3513dcu: goto label_3513dc;
        case 0x3513e0u: goto label_3513e0;
        case 0x3513e4u: goto label_3513e4;
        case 0x3513e8u: goto label_3513e8;
        case 0x3513ecu: goto label_3513ec;
        case 0x3513f0u: goto label_3513f0;
        case 0x3513f4u: goto label_3513f4;
        case 0x3513f8u: goto label_3513f8;
        case 0x3513fcu: goto label_3513fc;
        case 0x351400u: goto label_351400;
        case 0x351404u: goto label_351404;
        case 0x351408u: goto label_351408;
        case 0x35140cu: goto label_35140c;
        case 0x351410u: goto label_351410;
        case 0x351414u: goto label_351414;
        case 0x351418u: goto label_351418;
        case 0x35141cu: goto label_35141c;
        case 0x351420u: goto label_351420;
        case 0x351424u: goto label_351424;
        case 0x351428u: goto label_351428;
        case 0x35142cu: goto label_35142c;
        case 0x351430u: goto label_351430;
        case 0x351434u: goto label_351434;
        case 0x351438u: goto label_351438;
        case 0x35143cu: goto label_35143c;
        case 0x351440u: goto label_351440;
        case 0x351444u: goto label_351444;
        case 0x351448u: goto label_351448;
        case 0x35144cu: goto label_35144c;
        case 0x351450u: goto label_351450;
        case 0x351454u: goto label_351454;
        case 0x351458u: goto label_351458;
        case 0x35145cu: goto label_35145c;
        case 0x351460u: goto label_351460;
        case 0x351464u: goto label_351464;
        case 0x351468u: goto label_351468;
        case 0x35146cu: goto label_35146c;
        case 0x351470u: goto label_351470;
        case 0x351474u: goto label_351474;
        case 0x351478u: goto label_351478;
        case 0x35147cu: goto label_35147c;
        case 0x351480u: goto label_351480;
        case 0x351484u: goto label_351484;
        case 0x351488u: goto label_351488;
        case 0x35148cu: goto label_35148c;
        case 0x351490u: goto label_351490;
        case 0x351494u: goto label_351494;
        case 0x351498u: goto label_351498;
        case 0x35149cu: goto label_35149c;
        case 0x3514a0u: goto label_3514a0;
        case 0x3514a4u: goto label_3514a4;
        case 0x3514a8u: goto label_3514a8;
        case 0x3514acu: goto label_3514ac;
        case 0x3514b0u: goto label_3514b0;
        case 0x3514b4u: goto label_3514b4;
        case 0x3514b8u: goto label_3514b8;
        case 0x3514bcu: goto label_3514bc;
        case 0x3514c0u: goto label_3514c0;
        case 0x3514c4u: goto label_3514c4;
        case 0x3514c8u: goto label_3514c8;
        case 0x3514ccu: goto label_3514cc;
        case 0x3514d0u: goto label_3514d0;
        case 0x3514d4u: goto label_3514d4;
        case 0x3514d8u: goto label_3514d8;
        case 0x3514dcu: goto label_3514dc;
        case 0x3514e0u: goto label_3514e0;
        case 0x3514e4u: goto label_3514e4;
        case 0x3514e8u: goto label_3514e8;
        case 0x3514ecu: goto label_3514ec;
        case 0x3514f0u: goto label_3514f0;
        case 0x3514f4u: goto label_3514f4;
        case 0x3514f8u: goto label_3514f8;
        case 0x3514fcu: goto label_3514fc;
        case 0x351500u: goto label_351500;
        case 0x351504u: goto label_351504;
        case 0x351508u: goto label_351508;
        case 0x35150cu: goto label_35150c;
        case 0x351510u: goto label_351510;
        case 0x351514u: goto label_351514;
        case 0x351518u: goto label_351518;
        case 0x35151cu: goto label_35151c;
        case 0x351520u: goto label_351520;
        case 0x351524u: goto label_351524;
        case 0x351528u: goto label_351528;
        case 0x35152cu: goto label_35152c;
        case 0x351530u: goto label_351530;
        case 0x351534u: goto label_351534;
        case 0x351538u: goto label_351538;
        case 0x35153cu: goto label_35153c;
        case 0x351540u: goto label_351540;
        case 0x351544u: goto label_351544;
        case 0x351548u: goto label_351548;
        case 0x35154cu: goto label_35154c;
        case 0x351550u: goto label_351550;
        case 0x351554u: goto label_351554;
        case 0x351558u: goto label_351558;
        case 0x35155cu: goto label_35155c;
        case 0x351560u: goto label_351560;
        case 0x351564u: goto label_351564;
        case 0x351568u: goto label_351568;
        case 0x35156cu: goto label_35156c;
        case 0x351570u: goto label_351570;
        case 0x351574u: goto label_351574;
        case 0x351578u: goto label_351578;
        case 0x35157cu: goto label_35157c;
        case 0x351580u: goto label_351580;
        case 0x351584u: goto label_351584;
        case 0x351588u: goto label_351588;
        case 0x35158cu: goto label_35158c;
        case 0x351590u: goto label_351590;
        case 0x351594u: goto label_351594;
        case 0x351598u: goto label_351598;
        case 0x35159cu: goto label_35159c;
        case 0x3515a0u: goto label_3515a0;
        case 0x3515a4u: goto label_3515a4;
        case 0x3515a8u: goto label_3515a8;
        case 0x3515acu: goto label_3515ac;
        case 0x3515b0u: goto label_3515b0;
        case 0x3515b4u: goto label_3515b4;
        case 0x3515b8u: goto label_3515b8;
        case 0x3515bcu: goto label_3515bc;
        case 0x3515c0u: goto label_3515c0;
        case 0x3515c4u: goto label_3515c4;
        case 0x3515c8u: goto label_3515c8;
        case 0x3515ccu: goto label_3515cc;
        case 0x3515d0u: goto label_3515d0;
        case 0x3515d4u: goto label_3515d4;
        case 0x3515d8u: goto label_3515d8;
        case 0x3515dcu: goto label_3515dc;
        case 0x3515e0u: goto label_3515e0;
        case 0x3515e4u: goto label_3515e4;
        case 0x3515e8u: goto label_3515e8;
        case 0x3515ecu: goto label_3515ec;
        case 0x3515f0u: goto label_3515f0;
        case 0x3515f4u: goto label_3515f4;
        case 0x3515f8u: goto label_3515f8;
        case 0x3515fcu: goto label_3515fc;
        case 0x351600u: goto label_351600;
        case 0x351604u: goto label_351604;
        case 0x351608u: goto label_351608;
        case 0x35160cu: goto label_35160c;
        case 0x351610u: goto label_351610;
        case 0x351614u: goto label_351614;
        case 0x351618u: goto label_351618;
        case 0x35161cu: goto label_35161c;
        case 0x351620u: goto label_351620;
        case 0x351624u: goto label_351624;
        case 0x351628u: goto label_351628;
        case 0x35162cu: goto label_35162c;
        case 0x351630u: goto label_351630;
        case 0x351634u: goto label_351634;
        case 0x351638u: goto label_351638;
        case 0x35163cu: goto label_35163c;
        case 0x351640u: goto label_351640;
        case 0x351644u: goto label_351644;
        case 0x351648u: goto label_351648;
        case 0x35164cu: goto label_35164c;
        case 0x351650u: goto label_351650;
        case 0x351654u: goto label_351654;
        case 0x351658u: goto label_351658;
        case 0x35165cu: goto label_35165c;
        case 0x351660u: goto label_351660;
        case 0x351664u: goto label_351664;
        case 0x351668u: goto label_351668;
        case 0x35166cu: goto label_35166c;
        case 0x351670u: goto label_351670;
        case 0x351674u: goto label_351674;
        case 0x351678u: goto label_351678;
        case 0x35167cu: goto label_35167c;
        case 0x351680u: goto label_351680;
        case 0x351684u: goto label_351684;
        case 0x351688u: goto label_351688;
        case 0x35168cu: goto label_35168c;
        case 0x351690u: goto label_351690;
        case 0x351694u: goto label_351694;
        case 0x351698u: goto label_351698;
        case 0x35169cu: goto label_35169c;
        case 0x3516a0u: goto label_3516a0;
        case 0x3516a4u: goto label_3516a4;
        case 0x3516a8u: goto label_3516a8;
        case 0x3516acu: goto label_3516ac;
        case 0x3516b0u: goto label_3516b0;
        case 0x3516b4u: goto label_3516b4;
        case 0x3516b8u: goto label_3516b8;
        case 0x3516bcu: goto label_3516bc;
        case 0x3516c0u: goto label_3516c0;
        case 0x3516c4u: goto label_3516c4;
        case 0x3516c8u: goto label_3516c8;
        case 0x3516ccu: goto label_3516cc;
        case 0x3516d0u: goto label_3516d0;
        case 0x3516d4u: goto label_3516d4;
        case 0x3516d8u: goto label_3516d8;
        case 0x3516dcu: goto label_3516dc;
        case 0x3516e0u: goto label_3516e0;
        case 0x3516e4u: goto label_3516e4;
        case 0x3516e8u: goto label_3516e8;
        case 0x3516ecu: goto label_3516ec;
        case 0x3516f0u: goto label_3516f0;
        case 0x3516f4u: goto label_3516f4;
        case 0x3516f8u: goto label_3516f8;
        case 0x3516fcu: goto label_3516fc;
        case 0x351700u: goto label_351700;
        case 0x351704u: goto label_351704;
        case 0x351708u: goto label_351708;
        case 0x35170cu: goto label_35170c;
        case 0x351710u: goto label_351710;
        case 0x351714u: goto label_351714;
        case 0x351718u: goto label_351718;
        case 0x35171cu: goto label_35171c;
        case 0x351720u: goto label_351720;
        case 0x351724u: goto label_351724;
        case 0x351728u: goto label_351728;
        case 0x35172cu: goto label_35172c;
        case 0x351730u: goto label_351730;
        case 0x351734u: goto label_351734;
        case 0x351738u: goto label_351738;
        case 0x35173cu: goto label_35173c;
        case 0x351740u: goto label_351740;
        case 0x351744u: goto label_351744;
        case 0x351748u: goto label_351748;
        case 0x35174cu: goto label_35174c;
        case 0x351750u: goto label_351750;
        case 0x351754u: goto label_351754;
        case 0x351758u: goto label_351758;
        case 0x35175cu: goto label_35175c;
        case 0x351760u: goto label_351760;
        case 0x351764u: goto label_351764;
        case 0x351768u: goto label_351768;
        case 0x35176cu: goto label_35176c;
        case 0x351770u: goto label_351770;
        case 0x351774u: goto label_351774;
        case 0x351778u: goto label_351778;
        case 0x35177cu: goto label_35177c;
        case 0x351780u: goto label_351780;
        case 0x351784u: goto label_351784;
        case 0x351788u: goto label_351788;
        case 0x35178cu: goto label_35178c;
        case 0x351790u: goto label_351790;
        case 0x351794u: goto label_351794;
        case 0x351798u: goto label_351798;
        case 0x35179cu: goto label_35179c;
        case 0x3517a0u: goto label_3517a0;
        case 0x3517a4u: goto label_3517a4;
        case 0x3517a8u: goto label_3517a8;
        case 0x3517acu: goto label_3517ac;
        case 0x3517b0u: goto label_3517b0;
        case 0x3517b4u: goto label_3517b4;
        case 0x3517b8u: goto label_3517b8;
        case 0x3517bcu: goto label_3517bc;
        case 0x3517c0u: goto label_3517c0;
        case 0x3517c4u: goto label_3517c4;
        case 0x3517c8u: goto label_3517c8;
        case 0x3517ccu: goto label_3517cc;
        case 0x3517d0u: goto label_3517d0;
        case 0x3517d4u: goto label_3517d4;
        case 0x3517d8u: goto label_3517d8;
        case 0x3517dcu: goto label_3517dc;
        case 0x3517e0u: goto label_3517e0;
        case 0x3517e4u: goto label_3517e4;
        case 0x3517e8u: goto label_3517e8;
        case 0x3517ecu: goto label_3517ec;
        case 0x3517f0u: goto label_3517f0;
        case 0x3517f4u: goto label_3517f4;
        case 0x3517f8u: goto label_3517f8;
        case 0x3517fcu: goto label_3517fc;
        case 0x351800u: goto label_351800;
        case 0x351804u: goto label_351804;
        case 0x351808u: goto label_351808;
        case 0x35180cu: goto label_35180c;
        case 0x351810u: goto label_351810;
        case 0x351814u: goto label_351814;
        case 0x351818u: goto label_351818;
        case 0x35181cu: goto label_35181c;
        case 0x351820u: goto label_351820;
        case 0x351824u: goto label_351824;
        case 0x351828u: goto label_351828;
        case 0x35182cu: goto label_35182c;
        case 0x351830u: goto label_351830;
        case 0x351834u: goto label_351834;
        case 0x351838u: goto label_351838;
        case 0x35183cu: goto label_35183c;
        case 0x351840u: goto label_351840;
        case 0x351844u: goto label_351844;
        case 0x351848u: goto label_351848;
        case 0x35184cu: goto label_35184c;
        case 0x351850u: goto label_351850;
        case 0x351854u: goto label_351854;
        case 0x351858u: goto label_351858;
        case 0x35185cu: goto label_35185c;
        case 0x351860u: goto label_351860;
        case 0x351864u: goto label_351864;
        case 0x351868u: goto label_351868;
        case 0x35186cu: goto label_35186c;
        case 0x351870u: goto label_351870;
        case 0x351874u: goto label_351874;
        case 0x351878u: goto label_351878;
        case 0x35187cu: goto label_35187c;
        case 0x351880u: goto label_351880;
        case 0x351884u: goto label_351884;
        case 0x351888u: goto label_351888;
        case 0x35188cu: goto label_35188c;
        case 0x351890u: goto label_351890;
        case 0x351894u: goto label_351894;
        case 0x351898u: goto label_351898;
        case 0x35189cu: goto label_35189c;
        case 0x3518a0u: goto label_3518a0;
        case 0x3518a4u: goto label_3518a4;
        case 0x3518a8u: goto label_3518a8;
        case 0x3518acu: goto label_3518ac;
        case 0x3518b0u: goto label_3518b0;
        case 0x3518b4u: goto label_3518b4;
        case 0x3518b8u: goto label_3518b8;
        case 0x3518bcu: goto label_3518bc;
        case 0x3518c0u: goto label_3518c0;
        case 0x3518c4u: goto label_3518c4;
        case 0x3518c8u: goto label_3518c8;
        case 0x3518ccu: goto label_3518cc;
        case 0x3518d0u: goto label_3518d0;
        case 0x3518d4u: goto label_3518d4;
        case 0x3518d8u: goto label_3518d8;
        case 0x3518dcu: goto label_3518dc;
        case 0x3518e0u: goto label_3518e0;
        case 0x3518e4u: goto label_3518e4;
        case 0x3518e8u: goto label_3518e8;
        case 0x3518ecu: goto label_3518ec;
        case 0x3518f0u: goto label_3518f0;
        case 0x3518f4u: goto label_3518f4;
        case 0x3518f8u: goto label_3518f8;
        case 0x3518fcu: goto label_3518fc;
        case 0x351900u: goto label_351900;
        case 0x351904u: goto label_351904;
        case 0x351908u: goto label_351908;
        case 0x35190cu: goto label_35190c;
        case 0x351910u: goto label_351910;
        case 0x351914u: goto label_351914;
        case 0x351918u: goto label_351918;
        case 0x35191cu: goto label_35191c;
        case 0x351920u: goto label_351920;
        case 0x351924u: goto label_351924;
        case 0x351928u: goto label_351928;
        case 0x35192cu: goto label_35192c;
        case 0x351930u: goto label_351930;
        case 0x351934u: goto label_351934;
        case 0x351938u: goto label_351938;
        case 0x35193cu: goto label_35193c;
        case 0x351940u: goto label_351940;
        case 0x351944u: goto label_351944;
        case 0x351948u: goto label_351948;
        case 0x35194cu: goto label_35194c;
        case 0x351950u: goto label_351950;
        case 0x351954u: goto label_351954;
        case 0x351958u: goto label_351958;
        case 0x35195cu: goto label_35195c;
        case 0x351960u: goto label_351960;
        case 0x351964u: goto label_351964;
        case 0x351968u: goto label_351968;
        case 0x35196cu: goto label_35196c;
        case 0x351970u: goto label_351970;
        case 0x351974u: goto label_351974;
        case 0x351978u: goto label_351978;
        case 0x35197cu: goto label_35197c;
        case 0x351980u: goto label_351980;
        case 0x351984u: goto label_351984;
        case 0x351988u: goto label_351988;
        case 0x35198cu: goto label_35198c;
        case 0x351990u: goto label_351990;
        case 0x351994u: goto label_351994;
        case 0x351998u: goto label_351998;
        case 0x35199cu: goto label_35199c;
        case 0x3519a0u: goto label_3519a0;
        case 0x3519a4u: goto label_3519a4;
        case 0x3519a8u: goto label_3519a8;
        case 0x3519acu: goto label_3519ac;
        case 0x3519b0u: goto label_3519b0;
        case 0x3519b4u: goto label_3519b4;
        case 0x3519b8u: goto label_3519b8;
        case 0x3519bcu: goto label_3519bc;
        case 0x3519c0u: goto label_3519c0;
        case 0x3519c4u: goto label_3519c4;
        case 0x3519c8u: goto label_3519c8;
        case 0x3519ccu: goto label_3519cc;
        case 0x3519d0u: goto label_3519d0;
        case 0x3519d4u: goto label_3519d4;
        case 0x3519d8u: goto label_3519d8;
        case 0x3519dcu: goto label_3519dc;
        case 0x3519e0u: goto label_3519e0;
        case 0x3519e4u: goto label_3519e4;
        case 0x3519e8u: goto label_3519e8;
        case 0x3519ecu: goto label_3519ec;
        case 0x3519f0u: goto label_3519f0;
        case 0x3519f4u: goto label_3519f4;
        case 0x3519f8u: goto label_3519f8;
        case 0x3519fcu: goto label_3519fc;
        case 0x351a00u: goto label_351a00;
        case 0x351a04u: goto label_351a04;
        case 0x351a08u: goto label_351a08;
        case 0x351a0cu: goto label_351a0c;
        case 0x351a10u: goto label_351a10;
        case 0x351a14u: goto label_351a14;
        case 0x351a18u: goto label_351a18;
        case 0x351a1cu: goto label_351a1c;
        case 0x351a20u: goto label_351a20;
        case 0x351a24u: goto label_351a24;
        case 0x351a28u: goto label_351a28;
        case 0x351a2cu: goto label_351a2c;
        case 0x351a30u: goto label_351a30;
        case 0x351a34u: goto label_351a34;
        case 0x351a38u: goto label_351a38;
        case 0x351a3cu: goto label_351a3c;
        case 0x351a40u: goto label_351a40;
        case 0x351a44u: goto label_351a44;
        case 0x351a48u: goto label_351a48;
        case 0x351a4cu: goto label_351a4c;
        case 0x351a50u: goto label_351a50;
        case 0x351a54u: goto label_351a54;
        case 0x351a58u: goto label_351a58;
        case 0x351a5cu: goto label_351a5c;
        case 0x351a60u: goto label_351a60;
        case 0x351a64u: goto label_351a64;
        case 0x351a68u: goto label_351a68;
        case 0x351a6cu: goto label_351a6c;
        case 0x351a70u: goto label_351a70;
        case 0x351a74u: goto label_351a74;
        case 0x351a78u: goto label_351a78;
        case 0x351a7cu: goto label_351a7c;
        case 0x351a80u: goto label_351a80;
        case 0x351a84u: goto label_351a84;
        case 0x351a88u: goto label_351a88;
        case 0x351a8cu: goto label_351a8c;
        case 0x351a90u: goto label_351a90;
        case 0x351a94u: goto label_351a94;
        case 0x351a98u: goto label_351a98;
        case 0x351a9cu: goto label_351a9c;
        case 0x351aa0u: goto label_351aa0;
        case 0x351aa4u: goto label_351aa4;
        case 0x351aa8u: goto label_351aa8;
        case 0x351aacu: goto label_351aac;
        case 0x351ab0u: goto label_351ab0;
        case 0x351ab4u: goto label_351ab4;
        case 0x351ab8u: goto label_351ab8;
        case 0x351abcu: goto label_351abc;
        case 0x351ac0u: goto label_351ac0;
        case 0x351ac4u: goto label_351ac4;
        case 0x351ac8u: goto label_351ac8;
        case 0x351accu: goto label_351acc;
        case 0x351ad0u: goto label_351ad0;
        case 0x351ad4u: goto label_351ad4;
        case 0x351ad8u: goto label_351ad8;
        case 0x351adcu: goto label_351adc;
        case 0x351ae0u: goto label_351ae0;
        case 0x351ae4u: goto label_351ae4;
        case 0x351ae8u: goto label_351ae8;
        case 0x351aecu: goto label_351aec;
        case 0x351af0u: goto label_351af0;
        case 0x351af4u: goto label_351af4;
        case 0x351af8u: goto label_351af8;
        case 0x351afcu: goto label_351afc;
        case 0x351b00u: goto label_351b00;
        case 0x351b04u: goto label_351b04;
        case 0x351b08u: goto label_351b08;
        case 0x351b0cu: goto label_351b0c;
        case 0x351b10u: goto label_351b10;
        case 0x351b14u: goto label_351b14;
        case 0x351b18u: goto label_351b18;
        case 0x351b1cu: goto label_351b1c;
        case 0x351b20u: goto label_351b20;
        case 0x351b24u: goto label_351b24;
        case 0x351b28u: goto label_351b28;
        case 0x351b2cu: goto label_351b2c;
        case 0x351b30u: goto label_351b30;
        case 0x351b34u: goto label_351b34;
        case 0x351b38u: goto label_351b38;
        case 0x351b3cu: goto label_351b3c;
        case 0x351b40u: goto label_351b40;
        case 0x351b44u: goto label_351b44;
        case 0x351b48u: goto label_351b48;
        case 0x351b4cu: goto label_351b4c;
        case 0x351b50u: goto label_351b50;
        case 0x351b54u: goto label_351b54;
        case 0x351b58u: goto label_351b58;
        case 0x351b5cu: goto label_351b5c;
        case 0x351b60u: goto label_351b60;
        case 0x351b64u: goto label_351b64;
        case 0x351b68u: goto label_351b68;
        case 0x351b6cu: goto label_351b6c;
        case 0x351b70u: goto label_351b70;
        case 0x351b74u: goto label_351b74;
        case 0x351b78u: goto label_351b78;
        case 0x351b7cu: goto label_351b7c;
        case 0x351b80u: goto label_351b80;
        case 0x351b84u: goto label_351b84;
        case 0x351b88u: goto label_351b88;
        case 0x351b8cu: goto label_351b8c;
        case 0x351b90u: goto label_351b90;
        case 0x351b94u: goto label_351b94;
        case 0x351b98u: goto label_351b98;
        case 0x351b9cu: goto label_351b9c;
        case 0x351ba0u: goto label_351ba0;
        case 0x351ba4u: goto label_351ba4;
        case 0x351ba8u: goto label_351ba8;
        case 0x351bacu: goto label_351bac;
        case 0x351bb0u: goto label_351bb0;
        case 0x351bb4u: goto label_351bb4;
        case 0x351bb8u: goto label_351bb8;
        case 0x351bbcu: goto label_351bbc;
        case 0x351bc0u: goto label_351bc0;
        case 0x351bc4u: goto label_351bc4;
        case 0x351bc8u: goto label_351bc8;
        case 0x351bccu: goto label_351bcc;
        case 0x351bd0u: goto label_351bd0;
        case 0x351bd4u: goto label_351bd4;
        case 0x351bd8u: goto label_351bd8;
        case 0x351bdcu: goto label_351bdc;
        case 0x351be0u: goto label_351be0;
        case 0x351be4u: goto label_351be4;
        case 0x351be8u: goto label_351be8;
        case 0x351becu: goto label_351bec;
        case 0x351bf0u: goto label_351bf0;
        case 0x351bf4u: goto label_351bf4;
        case 0x351bf8u: goto label_351bf8;
        case 0x351bfcu: goto label_351bfc;
        case 0x351c00u: goto label_351c00;
        case 0x351c04u: goto label_351c04;
        case 0x351c08u: goto label_351c08;
        case 0x351c0cu: goto label_351c0c;
        case 0x351c10u: goto label_351c10;
        case 0x351c14u: goto label_351c14;
        case 0x351c18u: goto label_351c18;
        case 0x351c1cu: goto label_351c1c;
        case 0x351c20u: goto label_351c20;
        case 0x351c24u: goto label_351c24;
        case 0x351c28u: goto label_351c28;
        case 0x351c2cu: goto label_351c2c;
        case 0x351c30u: goto label_351c30;
        case 0x351c34u: goto label_351c34;
        case 0x351c38u: goto label_351c38;
        case 0x351c3cu: goto label_351c3c;
        case 0x351c40u: goto label_351c40;
        case 0x351c44u: goto label_351c44;
        case 0x351c48u: goto label_351c48;
        case 0x351c4cu: goto label_351c4c;
        case 0x351c50u: goto label_351c50;
        case 0x351c54u: goto label_351c54;
        case 0x351c58u: goto label_351c58;
        case 0x351c5cu: goto label_351c5c;
        case 0x351c60u: goto label_351c60;
        case 0x351c64u: goto label_351c64;
        case 0x351c68u: goto label_351c68;
        case 0x351c6cu: goto label_351c6c;
        case 0x351c70u: goto label_351c70;
        case 0x351c74u: goto label_351c74;
        case 0x351c78u: goto label_351c78;
        case 0x351c7cu: goto label_351c7c;
        case 0x351c80u: goto label_351c80;
        case 0x351c84u: goto label_351c84;
        case 0x351c88u: goto label_351c88;
        case 0x351c8cu: goto label_351c8c;
        case 0x351c90u: goto label_351c90;
        case 0x351c94u: goto label_351c94;
        case 0x351c98u: goto label_351c98;
        case 0x351c9cu: goto label_351c9c;
        case 0x351ca0u: goto label_351ca0;
        case 0x351ca4u: goto label_351ca4;
        case 0x351ca8u: goto label_351ca8;
        case 0x351cacu: goto label_351cac;
        case 0x351cb0u: goto label_351cb0;
        case 0x351cb4u: goto label_351cb4;
        case 0x351cb8u: goto label_351cb8;
        default: break;
    }

    ctx->pc = 0x3510a0u;

label_3510a0:
    // 0x3510a0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3510a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_3510a4:
    // 0x3510a4: 0x7fbf0040  sq          $ra, 0x40($sp)
    ctx->pc = 0x3510a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
label_3510a8:
    // 0x3510a8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3510a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3510ac:
    // 0x3510ac: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3510acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3510b0:
    // 0x3510b0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3510b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3510b4:
    // 0x3510b4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3510b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3510b8:
    // 0x3510b8: 0xafa40068  sw          $a0, 0x68($sp)
    ctx->pc = 0x3510b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 4));
label_3510bc:
    // 0x3510bc: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x3510bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_3510c0:
    // 0x3510c0: 0x8c7002d0  lw          $s0, 0x2D0($v1)
    ctx->pc = 0x3510c0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
label_3510c4:
    // 0x3510c4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x3510c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_3510c8:
    // 0x3510c8: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x3510c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_3510cc:
    // 0x3510cc: 0x8ca40020  lw          $a0, 0x20($a1)
    ctx->pc = 0x3510ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
label_3510d0:
    // 0x3510d0: 0x2483003c  addiu       $v1, $a0, 0x3C
    ctx->pc = 0x3510d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 60));
label_3510d4:
    // 0x3510d4: 0xaca30020  sw          $v1, 0x20($a1)
    ctx->pc = 0x3510d4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 3));
label_3510d8:
    // 0x3510d8: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x3510d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_3510dc:
    // 0x3510dc: 0x90a40002  lbu         $a0, 0x2($a1)
    ctx->pc = 0x3510dcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
label_3510e0:
    // 0x3510e0: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x3510e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_3510e4:
    // 0x3510e4: 0x2c610006  sltiu       $at, $v1, 0x6
    ctx->pc = 0x3510e4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_3510e8:
    // 0x3510e8: 0x102002ec  beqz        $at, . + 4 + (0x2EC << 2)
label_3510ec:
    if (ctx->pc == 0x3510ECu) {
        ctx->pc = 0x3510F0u;
        goto label_3510f0;
    }
    ctx->pc = 0x3510E8u;
    {
        const bool branch_taken_0x3510e8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3510e8) {
            ctx->pc = 0x351C9Cu;
            goto label_351c9c;
        }
    }
    ctx->pc = 0x3510F0u;
label_3510f0:
    // 0x3510f0: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x3510f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
label_3510f4:
    // 0x3510f4: 0x24a429e0  addiu       $a0, $a1, 0x29E0
    ctx->pc = 0x3510f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 10720));
label_3510f8:
    // 0x3510f8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3510f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3510fc:
    // 0x3510fc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3510fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_351100:
    // 0x351100: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x351100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_351104:
    // 0x351104: 0x600008  jr          $v1
label_351108:
    if (ctx->pc == 0x351108u) {
        ctx->pc = 0x35110Cu;
        goto label_35110c;
    }
    ctx->pc = 0x351104u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x351104u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x35110Cu;
label_35110c:
    // 0x35110c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x35110cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_351110:
    // 0x351110: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x351110u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_351114:
    // 0x351114: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x351114u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_351118:
    // 0x351118: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x351118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_35111c:
    // 0x35111c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x35111cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_351120:
    // 0x351120: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x351120u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
label_351124:
    // 0x351124: 0x24060f1e  addiu       $a2, $zero, 0xF1E
    ctx->pc = 0x351124u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3870));
label_351128:
    // 0x351128: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x351128u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_35112c:
    // 0x35112c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x35112cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_351130:
    // 0x351130: 0xc0965d0  jal         func_259740
label_351134:
    if (ctx->pc == 0x351134u) {
        ctx->pc = 0x351138u;
        goto label_351138;
    }
    ctx->pc = 0x351130u;
    SET_GPR_U32(ctx, 31, 0x351138u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x351130u, 0x351138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351138u;
label_351138:
    // 0x351138: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x351138u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_35113c:
    // 0x35113c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x35113cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_351140:
    // 0x351140: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x351140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_351144:
    // 0x351144: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x351144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_351148:
    // 0x351148: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x351148u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
label_35114c:
    // 0x35114c: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x35114cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
label_351150:
    // 0x351150: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x351150u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_351154:
    // 0x351154: 0x8c8302d0  lw          $v1, 0x2D0($a0)
    ctx->pc = 0x351154u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 720)));
label_351158:
    // 0x351158: 0x24700960  addiu       $s0, $v1, 0x960
    ctx->pc = 0x351158u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 2400));
label_35115c:
    // 0x35115c: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x35115cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_351160:
    // 0x351160: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x351160u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_351164:
    // 0x351164: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x351164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_351168:
    // 0x351168: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x351168u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_35116c:
    // 0x35116c: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x35116cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
label_351170:
    // 0x351170: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x351170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_351174:
    // 0x351174: 0x247310b0  addiu       $s3, $v1, 0x10B0
    ctx->pc = 0x351174u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4272));
label_351178:
    // 0x351178: 0x8e6400f0  lw          $a0, 0xF0($s3)
    ctx->pc = 0x351178u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 240)));
label_35117c:
    // 0x35117c: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x35117cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_351180:
    // 0x351180: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x351180u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_351184:
    // 0x351184: 0xae6300f0  sw          $v1, 0xF0($s3)
    ctx->pc = 0x351184u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 240), GPR_U32(ctx, 3));
label_351188:
    // 0x351188: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x351188u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_35118c:
    // 0x35118c: 0x8c8302d0  lw          $v1, 0x2D0($a0)
    ctx->pc = 0x35118cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 720)));
label_351190:
    // 0x351190: 0x24703840  addiu       $s0, $v1, 0x3840
    ctx->pc = 0x351190u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 14400));
label_351194:
    // 0x351194: 0x96050140  lhu         $a1, 0x140($s0)
    ctx->pc = 0x351194u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
label_351198:
    // 0x351198: 0x30a3fff7  andi        $v1, $a1, 0xFFF7
    ctx->pc = 0x351198u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65527);
label_35119c:
    // 0x35119c: 0xa6030140  sh          $v1, 0x140($s0)
    ctx->pc = 0x35119cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 3));
label_3511a0:
    // 0x3511a0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3511a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3511a4:
    // 0x3511a4: 0x0  nop
    ctx->pc = 0x3511a4u;
    // NOP
label_3511a8:
    // 0x3511a8: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x3511a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
label_3511ac:
    // 0x3511ac: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x3511acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_3511b0:
    // 0x3511b0: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x3511b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_3511b4:
    // 0x3511b4: 0x24a31330  addiu       $v1, $a1, 0x1330
    ctx->pc = 0x3511b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
label_3511b8:
    // 0x3511b8: 0xa0640078  sb          $a0, 0x78($v1)
    ctx->pc = 0x3511b8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 120), (uint8_t)GPR_U32(ctx, 4));
label_3511bc:
    // 0x3511bc: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x3511bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_3511c0:
    // 0x3511c0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3511c0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_3511c4:
    // 0x3511c4: 0xc096b40  jal         func_25AD00
label_3511c8:
    if (ctx->pc == 0x3511C8u) {
        ctx->pc = 0x3511CCu;
        goto label_3511cc;
    }
    ctx->pc = 0x3511C4u;
    SET_GPR_U32(ctx, 31, 0x3511CCu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x3511C4u, 0x3511CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3511CCu;
label_3511cc:
    // 0x3511cc: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x3511ccu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_3511d0:
    // 0x3511d0: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x3511d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_3511d4:
    // 0x3511d4: 0xc05cd10  jal         func_173440
label_3511d8:
    if (ctx->pc == 0x3511D8u) {
        ctx->pc = 0x3511DCu;
        goto label_3511dc;
    }
    ctx->pc = 0x3511D4u;
    SET_GPR_U32(ctx, 31, 0x3511DCu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x3511D4u, 0x3511DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3511DCu;
label_3511dc:
    // 0x3511dc: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x3511dcu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_3511e0:
    // 0x3511e0: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x3511e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_3511e4:
    // 0x3511e4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3511e4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_3511e8:
    // 0x3511e8: 0xc0d0704  jal         func_341C10
label_3511ec:
    if (ctx->pc == 0x3511ECu) {
        ctx->pc = 0x3511F0u;
        goto label_3511f0;
    }
    ctx->pc = 0x3511E8u;
    SET_GPR_U32(ctx, 31, 0x3511F0u);
    ctx->pc = 0x341C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341C10u, 0x3511E8u, 0x3511F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3511F0u;
label_3511f0:
    // 0x3511f0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x3511f0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_3511f4:
    // 0x3511f4: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x3511f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_3511f8:
    // 0x3511f8: 0xc0974dc  jal         func_25D370
label_3511fc:
    if (ctx->pc == 0x3511FCu) {
        ctx->pc = 0x351200u;
        goto label_351200;
    }
    ctx->pc = 0x3511F8u;
    SET_GPR_U32(ctx, 31, 0x351200u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x3511F8u, 0x351200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351200u;
label_351200:
    // 0x351200: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x351200u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_351204:
    // 0x351204: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x351204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_351208:
    // 0x351208: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x351208u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_35120c:
    // 0x35120c: 0x106002a3  beqz        $v1, . + 4 + (0x2A3 << 2)
label_351210:
    if (ctx->pc == 0x351210u) {
        ctx->pc = 0x351214u;
        goto label_351214;
    }
    ctx->pc = 0x35120Cu;
    {
        const bool branch_taken_0x35120c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x35120c) {
            ctx->pc = 0x351C9Cu;
            goto label_351c9c;
        }
    }
    ctx->pc = 0x351214u;
label_351214:
    // 0x351214: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x351214u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_351218:
    // 0x351218: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x351218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_35121c:
    // 0x35121c: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x35121cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
label_351220:
    // 0x351220: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x351220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_351224:
    // 0x351224: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x351224u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_351228:
    // 0x351228: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x351228u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
label_35122c:
    // 0x35122c: 0x24060f1e  addiu       $a2, $zero, 0xF1E
    ctx->pc = 0x35122cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3870));
label_351230:
    // 0x351230: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x351230u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_351234:
    // 0x351234: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x351234u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_351238:
    // 0x351238: 0xc0965d0  jal         func_259740
label_35123c:
    if (ctx->pc == 0x35123Cu) {
        ctx->pc = 0x351240u;
        goto label_351240;
    }
    ctx->pc = 0x351238u;
    SET_GPR_U32(ctx, 31, 0x351240u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x351238u, 0x351240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351240u;
label_351240:
    // 0x351240: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x351240u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_351244:
    // 0x351244: 0x10000295  b           . + 4 + (0x295 << 2)
label_351248:
    if (ctx->pc == 0x351248u) {
        ctx->pc = 0x35124Cu;
        goto label_35124c;
    }
    ctx->pc = 0x351244u;
    {
        const bool branch_taken_0x351244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x351244) {
            ctx->pc = 0x351C9Cu;
            goto label_351c9c;
        }
    }
    ctx->pc = 0x35124Cu;
label_35124c:
    // 0x35124c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x35124cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_351250:
    // 0x351250: 0x0  nop
    ctx->pc = 0x351250u;
    // NOP
label_351254:
    // 0x351254: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x351254u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_351258:
    // 0x351258: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x351258u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_35125c:
    // 0x35125c: 0x0  nop
    ctx->pc = 0x35125cu;
    // NOP
label_351260:
    // 0x351260: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x351260u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_351264:
    // 0x351264: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x351264u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_351268:
    // 0x351268: 0x0  nop
    ctx->pc = 0x351268u;
    // NOP
label_35126c:
    // 0x35126c: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x35126cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_351270:
    // 0x351270: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x351270u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_351274:
    // 0x351274: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x351274u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_351278:
    // 0x351278: 0x0  nop
    ctx->pc = 0x351278u;
    // NOP
label_35127c:
    // 0x35127c: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x35127cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
label_351280:
    // 0x351280: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x351280u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_351284:
    // 0x351284: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x351284u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_351288:
    // 0x351288: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x351288u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_35128c:
    // 0x35128c: 0xc0d58d4  jal         func_356350
label_351290:
    if (ctx->pc == 0x351290u) {
        ctx->pc = 0x351294u;
        goto label_351294;
    }
    ctx->pc = 0x35128Cu;
    SET_GPR_U32(ctx, 31, 0x351294u);
    ctx->pc = 0x356350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x356350u, 0x35128Cu, 0x351294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351294u;
label_351294:
    // 0x351294: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x351294u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_351298:
    // 0x351298: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x351298u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_35129c:
    // 0x35129c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x35129cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3512a0:
    // 0x3512a0: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x3512a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3512a4:
    // 0x3512a4: 0xc0d58d4  jal         func_356350
label_3512a8:
    if (ctx->pc == 0x3512A8u) {
        ctx->pc = 0x3512ACu;
        goto label_3512ac;
    }
    ctx->pc = 0x3512A4u;
    SET_GPR_U32(ctx, 31, 0x3512ACu);
    ctx->pc = 0x356350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x356350u, 0x3512A4u, 0x3512ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3512ACu;
label_3512ac:
    // 0x3512ac: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x3512acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_3512b0:
    // 0x3512b0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x3512b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3512b4:
    // 0x3512b4: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x3512b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3512b8:
    // 0x3512b8: 0xc0d58d4  jal         func_356350
label_3512bc:
    if (ctx->pc == 0x3512BCu) {
        ctx->pc = 0x3512C0u;
        goto label_3512c0;
    }
    ctx->pc = 0x3512B8u;
    SET_GPR_U32(ctx, 31, 0x3512C0u);
    ctx->pc = 0x356350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x356350u, 0x3512B8u, 0x3512C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3512C0u;
label_3512c0:
    // 0x3512c0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x3512c0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_3512c4:
    // 0x3512c4: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x3512c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_3512c8:
    // 0x3512c8: 0x2405001b  addiu       $a1, $zero, 0x1B
    ctx->pc = 0x3512c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
label_3512cc:
    // 0x3512cc: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x3512ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3512d0:
    // 0x3512d0: 0xc0d58d4  jal         func_356350
label_3512d4:
    if (ctx->pc == 0x3512D4u) {
        ctx->pc = 0x3512D8u;
        goto label_3512d8;
    }
    ctx->pc = 0x3512D0u;
    SET_GPR_U32(ctx, 31, 0x3512D8u);
    ctx->pc = 0x356350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x356350u, 0x3512D0u, 0x3512D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3512D8u;
label_3512d8:
    // 0x3512d8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x3512d8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_3512dc:
    // 0x3512dc: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x3512dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_3512e0:
    // 0x3512e0: 0x24050024  addiu       $a1, $zero, 0x24
    ctx->pc = 0x3512e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_3512e4:
    // 0x3512e4: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x3512e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3512e8:
    // 0x3512e8: 0xc0d5c00  jal         func_357000
label_3512ec:
    if (ctx->pc == 0x3512ECu) {
        ctx->pc = 0x3512F0u;
        goto label_3512f0;
    }
    ctx->pc = 0x3512E8u;
    SET_GPR_U32(ctx, 31, 0x3512F0u);
    ctx->pc = 0x357000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x357000u, 0x3512E8u, 0x3512F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3512F0u;
label_3512f0:
    // 0x3512f0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x3512f0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_3512f4:
    // 0x3512f4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3512f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3512f8:
    // 0x3512f8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x3512f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_3512fc:
    // 0x3512fc: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x3512fcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
label_351300:
    // 0x351300: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x351300u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_351304:
    // 0x351304: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x351304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_351308:
    // 0x351308: 0xa4641278  sh          $a0, 0x1278($v1)
    ctx->pc = 0x351308u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 4));
label_35130c:
    // 0x35130c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x35130cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_351310:
    // 0x351310: 0x24050050  addiu       $a1, $zero, 0x50
    ctx->pc = 0x351310u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_351314:
    // 0x351314: 0xc0d58b0  jal         func_3562C0
label_351318:
    if (ctx->pc == 0x351318u) {
        ctx->pc = 0x35131Cu;
        goto label_35131c;
    }
    ctx->pc = 0x351314u;
    SET_GPR_U32(ctx, 31, 0x35131Cu);
    ctx->pc = 0x3562C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3562C0u, 0x351314u, 0x35131Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35131Cu;
label_35131c:
    // 0x35131c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x35131cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_351320:
    // 0x351320: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x351320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_351324:
    // 0x351324: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x351324u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_351328:
    // 0x351328: 0x90a300c4  lbu         $v1, 0xC4($a1)
    ctx->pc = 0x351328u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 196)));
label_35132c:
    // 0x35132c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x35132cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_351330:
    // 0x351330: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x351330u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_351334:
    // 0x351334: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x351334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_351338:
    // 0x351338: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x351338u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_35133c:
    // 0x35133c: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x35133cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
label_351340:
    // 0x351340: 0x2463bd00  addiu       $v1, $v1, -0x4300
    ctx->pc = 0x351340u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
label_351344:
    // 0x351344: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x351344u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_351348:
    // 0x351348: 0x8ca4007c  lw          $a0, 0x7C($a1)
    ctx->pc = 0x351348u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 124)));
label_35134c:
    // 0x35134c: 0x2403fff8  addiu       $v1, $zero, -0x8
    ctx->pc = 0x35134cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
label_351350:
    // 0x351350: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x351350u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_351354:
    // 0x351354: 0xaca4007c  sw          $a0, 0x7C($a1)
    ctx->pc = 0x351354u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 124), GPR_U32(ctx, 4));
label_351358:
    // 0x351358: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x351358u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
label_35135c:
    // 0x35135c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x35135cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_351360:
    // 0x351360: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x351360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_351364:
    // 0x351364: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x351364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_351368:
    // 0x351368: 0x906300c4  lbu         $v1, 0xC4($v1)
    ctx->pc = 0x351368u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 196)));
label_35136c:
    // 0x35136c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x35136cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_351370:
    // 0x351370: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x351370u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_351374:
    // 0x351374: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x351374u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_351378:
    // 0x351378: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x351378u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_35137c:
    // 0x35137c: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x35137cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
label_351380:
    // 0x351380: 0x2463bd00  addiu       $v1, $v1, -0x4300
    ctx->pc = 0x351380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
label_351384:
    // 0x351384: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x351384u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_351388:
    // 0x351388: 0xe4800070  swc1        $f0, 0x70($a0)
    ctx->pc = 0x351388u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 112), bits); }
label_35138c:
    // 0x35138c: 0x3c03435c  lui         $v1, 0x435C
    ctx->pc = 0x35138cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17244 << 16));
label_351390:
    // 0x351390: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x351390u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_351394:
    // 0x351394: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x351394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_351398:
    // 0x351398: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x351398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_35139c:
    // 0x35139c: 0x906300c4  lbu         $v1, 0xC4($v1)
    ctx->pc = 0x35139cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 196)));
label_3513a0:
    // 0x3513a0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x3513a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_3513a4:
    // 0x3513a4: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x3513a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_3513a8:
    // 0x3513a8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3513a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3513ac:
    // 0x3513ac: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x3513acu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_3513b0:
    // 0x3513b0: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3513b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_3513b4:
    // 0x3513b4: 0x2483bd00  addiu       $v1, $a0, -0x4300
    ctx->pc = 0x3513b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950144));
label_3513b8:
    // 0x3513b8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3513b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_3513bc:
    // 0x3513bc: 0xe4600074  swc1        $f0, 0x74($v1)
    ctx->pc = 0x3513bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 116), bits); }
label_3513c0:
    // 0x3513c0: 0x3c044310  lui         $a0, 0x4310
    ctx->pc = 0x3513c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17168 << 16));
label_3513c4:
    // 0x3513c4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3513c4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3513c8:
    // 0x3513c8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x3513c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_3513cc:
    // 0x3513cc: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x3513ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_3513d0:
    // 0x3513d0: 0x906300c4  lbu         $v1, 0xC4($v1)
    ctx->pc = 0x3513d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 196)));
label_3513d4:
    // 0x3513d4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x3513d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_3513d8:
    // 0x3513d8: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x3513d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_3513dc:
    // 0x3513dc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3513dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3513e0:
    // 0x3513e0: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x3513e0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_3513e4:
    // 0x3513e4: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3513e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_3513e8:
    // 0x3513e8: 0x2483bd00  addiu       $v1, $a0, -0x4300
    ctx->pc = 0x3513e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950144));
label_3513ec:
    // 0x3513ec: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3513ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_3513f0:
    // 0x3513f0: 0xe4600078  swc1        $f0, 0x78($v1)
    ctx->pc = 0x3513f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 120), bits); }
label_3513f4:
    // 0x3513f4: 0x3c033f48  lui         $v1, 0x3F48
    ctx->pc = 0x3513f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16200 << 16));
label_3513f8:
    // 0x3513f8: 0x3464c8c9  ori         $a0, $v1, 0xC8C9
    ctx->pc = 0x3513f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)51401);
label_3513fc:
    // 0x3513fc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3513fcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_351400:
    // 0x351400: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x351400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_351404:
    // 0x351404: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x351404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_351408:
    // 0x351408: 0x906300c4  lbu         $v1, 0xC4($v1)
    ctx->pc = 0x351408u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 196)));
label_35140c:
    // 0x35140c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x35140cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_351410:
    // 0x351410: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x351410u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_351414:
    // 0x351414: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x351414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_351418:
    // 0x351418: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x351418u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_35141c:
    // 0x35141c: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x35141cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_351420:
    // 0x351420: 0x2483bd00  addiu       $v1, $a0, -0x4300
    ctx->pc = 0x351420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950144));
label_351424:
    // 0x351424: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x351424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_351428:
    // 0x351428: 0xe4600080  swc1        $f0, 0x80($v1)
    ctx->pc = 0x351428u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 128), bits); }
label_35142c:
    // 0x35142c: 0x3c033f5c  lui         $v1, 0x3F5C
    ctx->pc = 0x35142cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16220 << 16));
label_351430:
    // 0x351430: 0x3464dcdd  ori         $a0, $v1, 0xDCDD
    ctx->pc = 0x351430u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)56541);
label_351434:
    // 0x351434: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x351434u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_351438:
    // 0x351438: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x351438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_35143c:
    // 0x35143c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x35143cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_351440:
    // 0x351440: 0x906300c4  lbu         $v1, 0xC4($v1)
    ctx->pc = 0x351440u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 196)));
label_351444:
    // 0x351444: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x351444u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_351448:
    // 0x351448: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x351448u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_35144c:
    // 0x35144c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x35144cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_351450:
    // 0x351450: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x351450u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_351454:
    // 0x351454: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x351454u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
label_351458:
    // 0x351458: 0x2471bd00  addiu       $s1, $v1, -0x4300
    ctx->pc = 0x351458u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
label_35145c:
    // 0x35145c: 0x2249021  addu        $s2, $s1, $a0
    ctx->pc = 0x35145cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
label_351460:
    // 0x351460: 0xe6400084  swc1        $f0, 0x84($s2)
    ctx->pc = 0x351460u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 132), bits); }
label_351464:
    // 0x351464: 0x3c033f10  lui         $v1, 0x3F10
    ctx->pc = 0x351464u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16144 << 16));
label_351468:
    // 0x351468: 0x34639091  ori         $v1, $v1, 0x9091
    ctx->pc = 0x351468u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)37009);
label_35146c:
    // 0x35146c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x35146cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_351470:
    // 0x351470: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x351470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_351474:
    // 0x351474: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x351474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_351478:
    // 0x351478: 0x906300c4  lbu         $v1, 0xC4($v1)
    ctx->pc = 0x351478u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 196)));
label_35147c:
    // 0x35147c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x35147cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_351480:
    // 0x351480: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x351480u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_351484:
    // 0x351484: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x351484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_351488:
    // 0x351488: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x351488u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_35148c:
    // 0x35148c: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x35148cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
label_351490:
    // 0x351490: 0x2462bd00  addiu       $v0, $v1, -0x4300
    ctx->pc = 0x351490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
label_351494:
    // 0x351494: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x351494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_351498:
    // 0x351498: 0xe4400088  swc1        $f0, 0x88($v0)
    ctx->pc = 0x351498u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 136), bits); }
label_35149c:
    // 0x35149c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x35149cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3514a0:
    // 0x3514a0: 0x0  nop
    ctx->pc = 0x3514a0u;
    // NOP
label_3514a4:
    // 0x3514a4: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x3514a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_3514a8:
    // 0x3514a8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3514a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3514ac:
    // 0x3514ac: 0x0  nop
    ctx->pc = 0x3514acu;
    // NOP
label_3514b0:
    // 0x3514b0: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x3514b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_3514b4:
    // 0x3514b4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3514b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3514b8:
    // 0x3514b8: 0x0  nop
    ctx->pc = 0x3514b8u;
    // NOP
label_3514bc:
    // 0x3514bc: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x3514bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_3514c0:
    // 0x3514c0: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x3514c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
label_3514c4:
    // 0x3514c4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3514c4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3514c8:
    // 0x3514c8: 0x0  nop
    ctx->pc = 0x3514c8u;
    // NOP
label_3514cc:
    // 0x3514cc: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x3514ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
label_3514d0:
    // 0x3514d0: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x3514d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_3514d4:
    // 0x3514d4: 0x24c21330  addiu       $v0, $a2, 0x1330
    ctx->pc = 0x3514d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4912));
label_3514d8:
    // 0x3514d8: 0x904400c4  lbu         $a0, 0xC4($v0)
    ctx->pc = 0x3514d8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 196)));
label_3514dc:
    // 0x3514dc: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x3514dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_3514e0:
    // 0x3514e0: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x3514e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_3514e4:
    // 0x3514e4: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x3514e4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_3514e8:
    // 0x3514e8: 0x8cc50130  lw          $a1, 0x130($a2)
    ctx->pc = 0x3514e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 304)));
label_3514ec:
    // 0x3514ec: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x3514ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3514f0:
    // 0x3514f0: 0xc05db20  jal         func_176C80
label_3514f4:
    if (ctx->pc == 0x3514F4u) {
        ctx->pc = 0x3514F8u;
        goto label_3514f8;
    }
    ctx->pc = 0x3514F0u;
    SET_GPR_U32(ctx, 31, 0x3514F8u);
    ctx->pc = 0x176C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176C80u, 0x3514F0u, 0x3514F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3514F8u;
label_3514f8:
    // 0x3514f8: 0x3c06457a  lui         $a2, 0x457A
    ctx->pc = 0x3514f8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17786 << 16));
label_3514fc:
    // 0x3514fc: 0x44866000  mtc1        $a2, $f12
    ctx->pc = 0x3514fcu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_351500:
    // 0x351500: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x351500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_351504:
    // 0x351504: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x351504u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_351508:
    // 0x351508: 0x908500c4  lbu         $a1, 0xC4($a0)
    ctx->pc = 0x351508u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 196)));
label_35150c:
    // 0x35150c: 0x30a600ff  andi        $a2, $a1, 0xFF
    ctx->pc = 0x35150cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_351510:
    // 0x351510: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x351510u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_351514:
    // 0x351514: 0xc05db4c  jal         func_176D30
label_351518:
    if (ctx->pc == 0x351518u) {
        ctx->pc = 0x35151Cu;
        goto label_35151c;
    }
    ctx->pc = 0x351514u;
    SET_GPR_U32(ctx, 31, 0x35151Cu);
    ctx->pc = 0x176D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176D30u, 0x351514u, 0x35151Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35151Cu;
label_35151c:
    // 0x35151c: 0x3c05463b  lui         $a1, 0x463B
    ctx->pc = 0x35151cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17979 << 16));
label_351520:
    // 0x351520: 0x34a48000  ori         $a0, $a1, 0x8000
    ctx->pc = 0x351520u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32768);
label_351524:
    // 0x351524: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x351524u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_351528:
    // 0x351528: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x351528u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_35152c:
    // 0x35152c: 0x24c21330  addiu       $v0, $a2, 0x1330
    ctx->pc = 0x35152cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4912));
label_351530:
    // 0x351530: 0x904500c4  lbu         $a1, 0xC4($v0)
    ctx->pc = 0x351530u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 196)));
label_351534:
    // 0x351534: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x351534u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_351538:
    // 0x351538: 0xc05db74  jal         func_176DD0
label_35153c:
    if (ctx->pc == 0x35153Cu) {
        ctx->pc = 0x351540u;
        goto label_351540;
    }
    ctx->pc = 0x351538u;
    SET_GPR_U32(ctx, 31, 0x351540u);
    ctx->pc = 0x176DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176DD0u, 0x351538u, 0x351540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351540u;
label_351540:
    // 0x351540: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x351540u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_351544:
    // 0x351544: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x351544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_351548:
    // 0x351548: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x351548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
label_35154c:
    // 0x35154c: 0x24670180  addiu       $a3, $v1, 0x180
    ctx->pc = 0x35154cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 384));
label_351550:
    // 0x351550: 0x24040017  addiu       $a0, $zero, 0x17
    ctx->pc = 0x351550u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_351554:
    // 0x351554: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x351554u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_351558:
    // 0x351558: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x351558u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_35155c:
    // 0x35155c: 0xc0654fc  jal         func_1953F0
label_351560:
    if (ctx->pc == 0x351560u) {
        ctx->pc = 0x351564u;
        goto label_351564;
    }
    ctx->pc = 0x35155Cu;
    SET_GPR_U32(ctx, 31, 0x351564u);
    ctx->pc = 0x1953F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1953F0u, 0x35155Cu, 0x351564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351564u;
label_351564:
    // 0x351564: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x351564u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_351568:
    // 0x351568: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x351568u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_35156c:
    // 0x35156c: 0x8c830130  lw          $v1, 0x130($a0)
    ctx->pc = 0x35156cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
label_351570:
    // 0x351570: 0x24670180  addiu       $a3, $v1, 0x180
    ctx->pc = 0x351570u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 384));
label_351574:
    // 0x351574: 0x24040017  addiu       $a0, $zero, 0x17
    ctx->pc = 0x351574u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_351578:
    // 0x351578: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x351578u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_35157c:
    // 0x35157c: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x35157cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_351580:
    // 0x351580: 0xc0654fc  jal         func_1953F0
label_351584:
    if (ctx->pc == 0x351584u) {
        ctx->pc = 0x351588u;
        goto label_351588;
    }
    ctx->pc = 0x351580u;
    SET_GPR_U32(ctx, 31, 0x351588u);
    ctx->pc = 0x1953F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1953F0u, 0x351580u, 0x351588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351588u;
label_351588:
    // 0x351588: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x351588u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_35158c:
    // 0x35158c: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x35158cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_351590:
    // 0x351590: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x351590u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_351594:
    // 0x351594: 0x2403fff7  addiu       $v1, $zero, -0x9
    ctx->pc = 0x351594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
label_351598:
    // 0x351598: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x351598u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_35159c:
    // 0x35159c: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x35159cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
label_3515a0:
    // 0x3515a0: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x3515a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_3515a4:
    // 0x3515a4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3515a4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_3515a8:
    // 0x3515a8: 0xc096b40  jal         func_25AD00
label_3515ac:
    if (ctx->pc == 0x3515ACu) {
        ctx->pc = 0x3515B0u;
        goto label_3515b0;
    }
    ctx->pc = 0x3515A8u;
    SET_GPR_U32(ctx, 31, 0x3515B0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x3515A8u, 0x3515B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3515B0u;
label_3515b0:
    // 0x3515b0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x3515b0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_3515b4:
    // 0x3515b4: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x3515b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_3515b8:
    // 0x3515b8: 0xc05cd10  jal         func_173440
label_3515bc:
    if (ctx->pc == 0x3515BCu) {
        ctx->pc = 0x3515C0u;
        goto label_3515c0;
    }
    ctx->pc = 0x3515B8u;
    SET_GPR_U32(ctx, 31, 0x3515C0u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x3515B8u, 0x3515C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3515C0u;
label_3515c0:
    // 0x3515c0: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x3515c0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_3515c4:
    // 0x3515c4: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x3515c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_3515c8:
    // 0x3515c8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3515c8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_3515cc:
    // 0x3515cc: 0xc0d0704  jal         func_341C10
label_3515d0:
    if (ctx->pc == 0x3515D0u) {
        ctx->pc = 0x3515D4u;
        goto label_3515d4;
    }
    ctx->pc = 0x3515CCu;
    SET_GPR_U32(ctx, 31, 0x3515D4u);
    ctx->pc = 0x341C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341C10u, 0x3515CCu, 0x3515D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3515D4u;
label_3515d4:
    // 0x3515d4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x3515d4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_3515d8:
    // 0x3515d8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x3515d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_3515dc:
    // 0x3515dc: 0xc0974dc  jal         func_25D370
label_3515e0:
    if (ctx->pc == 0x3515E0u) {
        ctx->pc = 0x3515E4u;
        goto label_3515e4;
    }
    ctx->pc = 0x3515DCu;
    SET_GPR_U32(ctx, 31, 0x3515E4u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x3515DCu, 0x3515E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3515E4u;
label_3515e4:
    // 0x3515e4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x3515e4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_3515e8:
    // 0x3515e8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x3515e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_3515ec:
    // 0x3515ec: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x3515ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_3515f0:
    // 0x3515f0: 0x906300c4  lbu         $v1, 0xC4($v1)
    ctx->pc = 0x3515f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 196)));
label_3515f4:
    // 0x3515f4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x3515f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_3515f8:
    // 0x3515f8: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x3515f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_3515fc:
    // 0x3515fc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3515fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_351600:
    // 0x351600: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x351600u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_351604:
    // 0x351604: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x351604u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
label_351608:
    // 0x351608: 0x2463bd00  addiu       $v1, $v1, -0x4300
    ctx->pc = 0x351608u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
label_35160c:
    // 0x35160c: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x35160cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_351610:
    // 0x351610: 0x3c033f4c  lui         $v1, 0x3F4C
    ctx->pc = 0x351610u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16204 << 16));
label_351614:
    // 0x351614: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x351614u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
label_351618:
    // 0x351618: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x351618u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_35161c:
    // 0x35161c: 0xc4800070  lwc1        $f0, 0x70($a0)
    ctx->pc = 0x35161cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_351620:
    // 0x351620: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x351620u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_351624:
    // 0x351624: 0xe4800070  swc1        $f0, 0x70($a0)
    ctx->pc = 0x351624u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 112), bits); }
label_351628:
    // 0x351628: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x351628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_35162c:
    // 0x35162c: 0x24701330  addiu       $s0, $v1, 0x1330
    ctx->pc = 0x35162cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_351630:
    // 0x351630: 0x920300c4  lbu         $v1, 0xC4($s0)
    ctx->pc = 0x351630u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 196)));
label_351634:
    // 0x351634: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x351634u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_351638:
    // 0x351638: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x351638u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_35163c:
    // 0x35163c: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x35163cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_351640:
    // 0x351640: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x351640u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_351644:
    // 0x351644: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x351644u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_351648:
    // 0x351648: 0x2483bd00  addiu       $v1, $a0, -0x4300
    ctx->pc = 0x351648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950144));
label_35164c:
    // 0x35164c: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x35164cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_351650:
    // 0x351650: 0x3c033f4c  lui         $v1, 0x3F4C
    ctx->pc = 0x351650u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16204 << 16));
label_351654:
    // 0x351654: 0x3464cccd  ori         $a0, $v1, 0xCCCD
    ctx->pc = 0x351654u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
label_351658:
    // 0x351658: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x351658u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_35165c:
    // 0x35165c: 0xc4a00074  lwc1        $f0, 0x74($a1)
    ctx->pc = 0x35165cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_351660:
    // 0x351660: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x351660u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_351664:
    // 0x351664: 0xe4a00074  swc1        $f0, 0x74($a1)
    ctx->pc = 0x351664u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 116), bits); }
label_351668:
    // 0x351668: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x351668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_35166c:
    // 0x35166c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x35166cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_351670:
    // 0x351670: 0x906300c4  lbu         $v1, 0xC4($v1)
    ctx->pc = 0x351670u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 196)));
label_351674:
    // 0x351674: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x351674u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_351678:
    // 0x351678: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x351678u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_35167c:
    // 0x35167c: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x35167cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_351680:
    // 0x351680: 0x42900  sll         $a1, $a0, 4
    ctx->pc = 0x351680u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_351684:
    // 0x351684: 0x3c060048  lui         $a2, 0x48
    ctx->pc = 0x351684u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)72 << 16));
label_351688:
    // 0x351688: 0x24c7bd00  addiu       $a3, $a2, -0x4300
    ctx->pc = 0x351688u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950144));
label_35168c:
    // 0x35168c: 0xe54021  addu        $t0, $a3, $a1
    ctx->pc = 0x35168cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
label_351690:
    // 0x351690: 0x3c033f4c  lui         $v1, 0x3F4C
    ctx->pc = 0x351690u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16204 << 16));
label_351694:
    // 0x351694: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x351694u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
label_351698:
    // 0x351698: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x351698u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_35169c:
    // 0x35169c: 0xc5000078  lwc1        $f0, 0x78($t0)
    ctx->pc = 0x35169cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3516a0:
    // 0x3516a0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3516a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_3516a4:
    // 0x3516a4: 0xe5000078  swc1        $f0, 0x78($t0)
    ctx->pc = 0x3516a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 120), bits); }
label_3516a8:
    // 0x3516a8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x3516a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_3516ac:
    // 0x3516ac: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x3516acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
label_3516b0:
    // 0x3516b0: 0x906300c4  lbu         $v1, 0xC4($v1)
    ctx->pc = 0x3516b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 196)));
label_3516b4:
    // 0x3516b4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x3516b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_3516b8:
    // 0x3516b8: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x3516b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_3516bc:
    // 0x3516bc: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x3516bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3516c0:
    // 0x3516c0: 0x102900  sll         $a1, $s0, 4
    ctx->pc = 0x3516c0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_3516c4:
    // 0x3516c4: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3516c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_3516c8:
    // 0x3516c8: 0x2483bd00  addiu       $v1, $a0, -0x4300
    ctx->pc = 0x3516c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950144));
label_3516cc:
    // 0x3516cc: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x3516ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_3516d0:
    // 0x3516d0: 0x3c133f4c  lui         $s3, 0x3F4C
    ctx->pc = 0x3516d0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)16204 << 16));
label_3516d4:
    // 0x3516d4: 0x3663cccd  ori         $v1, $s3, 0xCCCD
    ctx->pc = 0x3516d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)52429);
label_3516d8:
    // 0x3516d8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3516d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3516dc:
    // 0x3516dc: 0xc4800080  lwc1        $f0, 0x80($a0)
    ctx->pc = 0x3516dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3516e0:
    // 0x3516e0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3516e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_3516e4:
    // 0x3516e4: 0xe4800080  swc1        $f0, 0x80($a0)
    ctx->pc = 0x3516e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 128), bits); }
label_3516e8:
    // 0x3516e8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x3516e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_3516ec:
    // 0x3516ec: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x3516ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
label_3516f0:
    // 0x3516f0: 0x906300c4  lbu         $v1, 0xC4($v1)
    ctx->pc = 0x3516f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 196)));
label_3516f4:
    // 0x3516f4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x3516f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_3516f8:
    // 0x3516f8: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x3516f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_3516fc:
    // 0x3516fc: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x3516fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_351700:
    // 0x351700: 0x102900  sll         $a1, $s0, 4
    ctx->pc = 0x351700u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_351704:
    // 0x351704: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x351704u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
label_351708:
    // 0x351708: 0x2464bd00  addiu       $a0, $v1, -0x4300
    ctx->pc = 0x351708u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
label_35170c:
    // 0x35170c: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x35170cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_351710:
    // 0x351710: 0x3c043f4c  lui         $a0, 0x3F4C
    ctx->pc = 0x351710u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16204 << 16));
label_351714:
    // 0x351714: 0x3483cccd  ori         $v1, $a0, 0xCCCD
    ctx->pc = 0x351714u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)52429);
label_351718:
    // 0x351718: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x351718u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_35171c:
    // 0x35171c: 0xc4a00084  lwc1        $f0, 0x84($a1)
    ctx->pc = 0x35171cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_351720:
    // 0x351720: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x351720u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_351724:
    // 0x351724: 0xe4a00084  swc1        $f0, 0x84($a1)
    ctx->pc = 0x351724u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 132), bits); }
label_351728:
    // 0x351728: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x351728u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_35172c:
    // 0x35172c: 0x24a41330  addiu       $a0, $a1, 0x1330
    ctx->pc = 0x35172cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
label_351730:
    // 0x351730: 0x908300c4  lbu         $v1, 0xC4($a0)
    ctx->pc = 0x351730u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 196)));
label_351734:
    // 0x351734: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x351734u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_351738:
    // 0x351738: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x351738u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_35173c:
    // 0x35173c: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x35173cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_351740:
    // 0x351740: 0x42900  sll         $a1, $a0, 4
    ctx->pc = 0x351740u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_351744:
    // 0x351744: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x351744u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
label_351748:
    // 0x351748: 0x2463bd00  addiu       $v1, $v1, -0x4300
    ctx->pc = 0x351748u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
label_35174c:
    // 0x35174c: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x35174cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_351750:
    // 0x351750: 0x3c033f4c  lui         $v1, 0x3F4C
    ctx->pc = 0x351750u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16204 << 16));
label_351754:
    // 0x351754: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x351754u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
label_351758:
    // 0x351758: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x351758u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_35175c:
    // 0x35175c: 0xc4800088  lwc1        $f0, 0x88($a0)
    ctx->pc = 0x35175cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_351760:
    // 0x351760: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x351760u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_351764:
    // 0x351764: 0xe4800088  swc1        $f0, 0x88($a0)
    ctx->pc = 0x351764u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 136), bits); }
label_351768:
    // 0x351768: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x351768u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_35176c:
    // 0x35176c: 0x84851278  lh          $a1, 0x1278($a0)
    ctx->pc = 0x35176cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
label_351770:
    // 0x351770: 0x5343c  dsll32      $a2, $a1, 16
    ctx->pc = 0x351770u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << (32 + 16));
label_351774:
    // 0x351774: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x351774u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
label_351778:
    // 0x351778: 0x24070014  addiu       $a3, $zero, 0x14
    ctx->pc = 0x351778u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_35177c:
    // 0x35177c: 0x10c70008  beq         $a2, $a3, . + 4 + (0x8 << 2)
label_351780:
    if (ctx->pc == 0x351780u) {
        ctx->pc = 0x351784u;
        goto label_351784;
    }
    ctx->pc = 0x35177Cu;
    {
        const bool branch_taken_0x35177c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        if (branch_taken_0x35177c) {
            ctx->pc = 0x3517A0u;
            goto label_3517a0;
        }
    }
    ctx->pc = 0x351784u;
label_351784:
    // 0x351784: 0x8fa80068  lw          $t0, 0x68($sp)
    ctx->pc = 0x351784u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_351788:
    // 0x351788: 0x85031278  lh          $v1, 0x1278($t0)
    ctx->pc = 0x351788u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 4728)));
label_35178c:
    // 0x35178c: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x35178cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_351790:
    // 0x351790: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x351790u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_351794:
    // 0x351794: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x351794u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_351798:
    // 0x351798: 0x14640081  bne         $v1, $a0, . + 4 + (0x81 << 2)
label_35179c:
    if (ctx->pc == 0x35179Cu) {
        ctx->pc = 0x3517A0u;
        goto label_3517a0;
    }
    ctx->pc = 0x351798u;
    {
        const bool branch_taken_0x351798 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x351798) {
            ctx->pc = 0x3519A0u;
            goto label_3519a0;
        }
    }
    ctx->pc = 0x3517A0u;
label_3517a0:
    // 0x3517a0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3517a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3517a4:
    // 0x3517a4: 0x0  nop
    ctx->pc = 0x3517a4u;
    // NOP
label_3517a8:
    // 0x3517a8: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x3517a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_3517ac:
    // 0x3517ac: 0x3c064248  lui         $a2, 0x4248
    ctx->pc = 0x3517acu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16968 << 16));
label_3517b0:
    // 0x3517b0: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x3517b0u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3517b4:
    // 0x3517b4: 0x0  nop
    ctx->pc = 0x3517b4u;
    // NOP
label_3517b8:
    // 0x3517b8: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x3517b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_3517bc:
    // 0x3517bc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3517bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3517c0:
    // 0x3517c0: 0x0  nop
    ctx->pc = 0x3517c0u;
    // NOP
label_3517c4:
    // 0x3517c4: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x3517c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_3517c8:
    // 0x3517c8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x3517c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_3517cc:
    // 0x3517cc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3517ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3517d0:
    // 0x3517d0: 0x0  nop
    ctx->pc = 0x3517d0u;
    // NOP
label_3517d4:
    // 0x3517d4: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x3517d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
label_3517d8:
    // 0x3517d8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x3517d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_3517dc:
    // 0x3517dc: 0x24050024  addiu       $a1, $zero, 0x24
    ctx->pc = 0x3517dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_3517e0:
    // 0x3517e0: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x3517e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3517e4:
    // 0x3517e4: 0xc0d5c00  jal         func_357000
label_3517e8:
    if (ctx->pc == 0x3517E8u) {
        ctx->pc = 0x3517ECu;
        goto label_3517ec;
    }
    ctx->pc = 0x3517E4u;
    SET_GPR_U32(ctx, 31, 0x3517ECu);
    ctx->pc = 0x357000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x357000u, 0x3517E4u, 0x3517ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3517ECu;
label_3517ec:
    // 0x3517ec: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x3517ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_3517f0:
    // 0x3517f0: 0x24851330  addiu       $a1, $a0, 0x1330
    ctx->pc = 0x3517f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
label_3517f4:
    // 0x3517f4: 0x90a600c4  lbu         $a2, 0xC4($a1)
    ctx->pc = 0x3517f4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 196)));
label_3517f8:
    // 0x3517f8: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x3517f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_3517fc:
    // 0x3517fc: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x3517fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_351800:
    // 0x351800: 0x832821  addu        $a1, $a0, $v1
    ctx->pc = 0x351800u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_351804:
    // 0x351804: 0x53100  sll         $a2, $a1, 4
    ctx->pc = 0x351804u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_351808:
    // 0x351808: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x351808u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
label_35180c:
    // 0x35180c: 0x2464bd00  addiu       $a0, $v1, -0x4300
    ctx->pc = 0x35180cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
label_351810:
    // 0x351810: 0x862821  addu        $a1, $a0, $a2
    ctx->pc = 0x351810u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_351814:
    // 0x351814: 0x8ca6007c  lw          $a2, 0x7C($a1)
    ctx->pc = 0x351814u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 124)));
label_351818:
    // 0x351818: 0x2403fff8  addiu       $v1, $zero, -0x8
    ctx->pc = 0x351818u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
label_35181c:
    // 0x35181c: 0xc32024  and         $a0, $a2, $v1
    ctx->pc = 0x35181cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
label_351820:
    // 0x351820: 0xaca4007c  sw          $a0, 0x7C($a1)
    ctx->pc = 0x351820u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 124), GPR_U32(ctx, 4));
label_351824:
    // 0x351824: 0x3c03437f  lui         $v1, 0x437F
    ctx->pc = 0x351824u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17279 << 16));
label_351828:
    // 0x351828: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x351828u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_35182c:
    // 0x35182c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x35182cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_351830:
    // 0x351830: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x351830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
label_351834:
    // 0x351834: 0x906400c4  lbu         $a0, 0xC4($v1)
    ctx->pc = 0x351834u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 196)));
label_351838:
    // 0x351838: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x351838u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_35183c:
    // 0x35183c: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x35183cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_351840:
    // 0x351840: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x351840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_351844:
    // 0x351844: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x351844u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_351848:
    // 0x351848: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x351848u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
label_35184c:
    // 0x35184c: 0x2464bd00  addiu       $a0, $v1, -0x4300
    ctx->pc = 0x35184cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
label_351850:
    // 0x351850: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x351850u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_351854:
    // 0x351854: 0xe4600070  swc1        $f0, 0x70($v1)
    ctx->pc = 0x351854u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 112), bits); }
label_351858:
    // 0x351858: 0x3c03437f  lui         $v1, 0x437F
    ctx->pc = 0x351858u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17279 << 16));
label_35185c:
    // 0x35185c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x35185cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_351860:
    // 0x351860: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x351860u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_351864:
    // 0x351864: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x351864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
label_351868:
    // 0x351868: 0x906300c4  lbu         $v1, 0xC4($v1)
    ctx->pc = 0x351868u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 196)));
label_35186c:
    // 0x35186c: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x35186cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_351870:
    // 0x351870: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x351870u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_351874:
    // 0x351874: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x351874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_351878:
    // 0x351878: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x351878u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_35187c:
    // 0x35187c: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x35187cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
label_351880:
    // 0x351880: 0x2463bd00  addiu       $v1, $v1, -0x4300
    ctx->pc = 0x351880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
label_351884:
    // 0x351884: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x351884u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_351888:
    // 0x351888: 0xe4600074  swc1        $f0, 0x74($v1)
    ctx->pc = 0x351888u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 116), bits); }
label_35188c:
    // 0x35188c: 0x3c03437f  lui         $v1, 0x437F
    ctx->pc = 0x35188cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17279 << 16));
label_351890:
    // 0x351890: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x351890u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_351894:
    // 0x351894: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x351894u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_351898:
    // 0x351898: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x351898u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
label_35189c:
    // 0x35189c: 0x906300c4  lbu         $v1, 0xC4($v1)
    ctx->pc = 0x35189cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 196)));
label_3518a0:
    // 0x3518a0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x3518a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_3518a4:
    // 0x3518a4: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x3518a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_3518a8:
    // 0x3518a8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3518a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3518ac:
    // 0x3518ac: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x3518acu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_3518b0:
    // 0x3518b0: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x3518b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
label_3518b4:
    // 0x3518b4: 0x2463bd00  addiu       $v1, $v1, -0x4300
    ctx->pc = 0x3518b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
label_3518b8:
    // 0x3518b8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3518b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3518bc:
    // 0x3518bc: 0xe4600078  swc1        $f0, 0x78($v1)
    ctx->pc = 0x3518bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 120), bits); }
label_3518c0:
    // 0x3518c0: 0x3c043f48  lui         $a0, 0x3F48
    ctx->pc = 0x3518c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16200 << 16));
label_3518c4:
    // 0x3518c4: 0x3483c8c9  ori         $v1, $a0, 0xC8C9
    ctx->pc = 0x3518c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)51401);
label_3518c8:
    // 0x3518c8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3518c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3518cc:
    // 0x3518cc: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x3518ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_3518d0:
    // 0x3518d0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x3518d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_3518d4:
    // 0x3518d4: 0x906500c4  lbu         $a1, 0xC4($v1)
    ctx->pc = 0x3518d4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 196)));
label_3518d8:
    // 0x3518d8: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x3518d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_3518dc:
    // 0x3518dc: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x3518dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_3518e0:
    // 0x3518e0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3518e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3518e4:
    // 0x3518e4: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x3518e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_3518e8:
    // 0x3518e8: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x3518e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
label_3518ec:
    // 0x3518ec: 0x2463bd00  addiu       $v1, $v1, -0x4300
    ctx->pc = 0x3518ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
label_3518f0:
    // 0x3518f0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3518f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3518f4:
    // 0x3518f4: 0xe4600080  swc1        $f0, 0x80($v1)
    ctx->pc = 0x3518f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 128), bits); }
label_3518f8:
    // 0x3518f8: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x3518f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
label_3518fc:
    // 0x3518fc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3518fcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_351900:
    // 0x351900: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x351900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_351904:
    // 0x351904: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x351904u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_351908:
    // 0x351908: 0x906500c4  lbu         $a1, 0xC4($v1)
    ctx->pc = 0x351908u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 196)));
label_35190c:
    // 0x35190c: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x35190cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_351910:
    // 0x351910: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x351910u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_351914:
    // 0x351914: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x351914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_351918:
    // 0x351918: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x351918u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_35191c:
    // 0x35191c: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x35191cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
label_351920:
    // 0x351920: 0x2463bd00  addiu       $v1, $v1, -0x4300
    ctx->pc = 0x351920u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
label_351924:
    // 0x351924: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x351924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_351928:
    // 0x351928: 0xe4600084  swc1        $f0, 0x84($v1)
    ctx->pc = 0x351928u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 132), bits); }
label_35192c:
    // 0x35192c: 0x3c043f10  lui         $a0, 0x3F10
    ctx->pc = 0x35192cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16144 << 16));
label_351930:
    // 0x351930: 0x34839091  ori         $v1, $a0, 0x9091
    ctx->pc = 0x351930u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)37009);
label_351934:
    // 0x351934: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x351934u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_351938:
    // 0x351938: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x351938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_35193c:
    // 0x35193c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x35193cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_351940:
    // 0x351940: 0x906500c4  lbu         $a1, 0xC4($v1)
    ctx->pc = 0x351940u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 196)));
label_351944:
    // 0x351944: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x351944u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_351948:
    // 0x351948: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x351948u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_35194c:
    // 0x35194c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x35194cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_351950:
    // 0x351950: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x351950u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_351954:
    // 0x351954: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x351954u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
label_351958:
    // 0x351958: 0x2463bd00  addiu       $v1, $v1, -0x4300
    ctx->pc = 0x351958u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
label_35195c:
    // 0x35195c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x35195cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_351960:
    // 0x351960: 0xe4600088  swc1        $f0, 0x88($v1)
    ctx->pc = 0x351960u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 136), bits); }
label_351964:
    // 0x351964: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x351964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_351968:
    // 0x351968: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x351968u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
label_35196c:
    // 0x35196c: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x35196cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
label_351970:
    // 0x351970: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x351970u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_351974:
    // 0x351974: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x351974u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_351978:
    // 0x351978: 0x14830009  bne         $a0, $v1, . + 4 + (0x9 << 2)
label_35197c:
    if (ctx->pc == 0x35197Cu) {
        ctx->pc = 0x351980u;
        goto label_351980;
    }
    ctx->pc = 0x351978u;
    {
        const bool branch_taken_0x351978 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x351978) {
            ctx->pc = 0x3519A0u;
            goto label_3519a0;
        }
    }
    ctx->pc = 0x351980u;
label_351980:
    // 0x351980: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x351980u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_351984:
    // 0x351984: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x351984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_351988:
    // 0x351988: 0x247101b0  addiu       $s1, $v1, 0x1B0
    ctx->pc = 0x351988u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 432));
label_35198c:
    // 0x35198c: 0x8e320034  lw          $s2, 0x34($s1)
    ctx->pc = 0x35198cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_351990:
    // 0x351990: 0x8e430024  lw          $v1, 0x24($s2)
    ctx->pc = 0x351990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_351994:
    // 0x351994: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x351994u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
label_351998:
    // 0x351998: 0xae430024  sw          $v1, 0x24($s2)
    ctx->pc = 0x351998u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 3));
label_35199c:
    // 0x35199c: 0xa2200000  sb          $zero, 0x0($s1)
    ctx->pc = 0x35199cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
label_3519a0:
    // 0x3519a0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x3519a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_3519a4:
    // 0x3519a4: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x3519a4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
label_3519a8:
    // 0x3519a8: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x3519a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_3519ac:
    // 0x3519ac: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x3519acu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_3519b0:
    // 0x3519b0: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x3519b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_3519b4:
    // 0x3519b4: 0x10640008  beq         $v1, $a0, . + 4 + (0x8 << 2)
label_3519b8:
    if (ctx->pc == 0x3519B8u) {
        ctx->pc = 0x3519BCu;
        goto label_3519bc;
    }
    ctx->pc = 0x3519B4u;
    {
        const bool branch_taken_0x3519b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x3519b4) {
            ctx->pc = 0x3519D8u;
            goto label_3519d8;
        }
    }
    ctx->pc = 0x3519BCu;
label_3519bc:
    // 0x3519bc: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x3519bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_3519c0:
    // 0x3519c0: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x3519c0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
label_3519c4:
    // 0x3519c4: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x3519c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
label_3519c8:
    // 0x3519c8: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x3519c8u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_3519cc:
    // 0x3519cc: 0x24030032  addiu       $v1, $zero, 0x32
    ctx->pc = 0x3519ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_3519d0:
    // 0x3519d0: 0x14830092  bne         $a0, $v1, . + 4 + (0x92 << 2)
label_3519d4:
    if (ctx->pc == 0x3519D4u) {
        ctx->pc = 0x3519D8u;
        goto label_3519d8;
    }
    ctx->pc = 0x3519D0u;
    {
        const bool branch_taken_0x3519d0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3519d0) {
            ctx->pc = 0x351C1Cu;
            goto label_351c1c;
        }
    }
    ctx->pc = 0x3519D8u;
label_3519d8:
    // 0x3519d8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3519d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3519dc:
    // 0x3519dc: 0x0  nop
    ctx->pc = 0x3519dcu;
    // NOP
label_3519e0:
    // 0x3519e0: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x3519e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_3519e4:
    // 0x3519e4: 0x3c02c248  lui         $v0, 0xC248
    ctx->pc = 0x3519e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49736 << 16));
label_3519e8:
    // 0x3519e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3519e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3519ec:
    // 0x3519ec: 0x0  nop
    ctx->pc = 0x3519ecu;
    // NOP
label_3519f0:
    // 0x3519f0: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x3519f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_3519f4:
    // 0x3519f4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3519f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3519f8:
    // 0x3519f8: 0x0  nop
    ctx->pc = 0x3519f8u;
    // NOP
label_3519fc:
    // 0x3519fc: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x3519fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_351a00:
    // 0x351a00: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x351a00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_351a04:
    // 0x351a04: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x351a04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_351a08:
    // 0x351a08: 0x0  nop
    ctx->pc = 0x351a08u;
    // NOP
label_351a0c:
    // 0x351a0c: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x351a0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
label_351a10:
    // 0x351a10: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x351a10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_351a14:
    // 0x351a14: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x351a14u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_351a18:
    // 0x351a18: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x351a18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_351a1c:
    // 0x351a1c: 0xc0d58d4  jal         func_356350
label_351a20:
    if (ctx->pc == 0x351A20u) {
        ctx->pc = 0x351A24u;
        goto label_351a24;
    }
    ctx->pc = 0x351A1Cu;
    SET_GPR_U32(ctx, 31, 0x351A24u);
    ctx->pc = 0x356350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x356350u, 0x351A1Cu, 0x351A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351A24u;
label_351a24:
    // 0x351a24: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x351a24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_351a28:
    // 0x351a28: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x351a28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_351a2c:
    // 0x351a2c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x351a2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_351a30:
    // 0x351a30: 0xc0d58d4  jal         func_356350
label_351a34:
    if (ctx->pc == 0x351A34u) {
        ctx->pc = 0x351A38u;
        goto label_351a38;
    }
    ctx->pc = 0x351A30u;
    SET_GPR_U32(ctx, 31, 0x351A38u);
    ctx->pc = 0x356350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x356350u, 0x351A30u, 0x351A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351A38u;
label_351a38:
    // 0x351a38: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x351a38u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_351a3c:
    // 0x351a3c: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x351a3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_351a40:
    // 0x351a40: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x351a40u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_351a44:
    // 0x351a44: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x351a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_351a48:
    // 0x351a48: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x351a48u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_351a4c:
    // 0x351a4c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x351a4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_351a50:
    // 0x351a50: 0xc0d58d4  jal         func_356350
label_351a54:
    if (ctx->pc == 0x351A54u) {
        ctx->pc = 0x351A58u;
        goto label_351a58;
    }
    ctx->pc = 0x351A50u;
    SET_GPR_U32(ctx, 31, 0x351A58u);
    ctx->pc = 0x356350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x356350u, 0x351A50u, 0x351A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351A58u;
label_351a58:
    // 0x351a58: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x351a58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_351a5c:
    // 0x351a5c: 0x2405001b  addiu       $a1, $zero, 0x1B
    ctx->pc = 0x351a5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
label_351a60:
    // 0x351a60: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x351a60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_351a64:
    // 0x351a64: 0xc0d58d4  jal         func_356350
label_351a68:
    if (ctx->pc == 0x351A68u) {
        ctx->pc = 0x351A6Cu;
        goto label_351a6c;
    }
    ctx->pc = 0x351A64u;
    SET_GPR_U32(ctx, 31, 0x351A6Cu);
    ctx->pc = 0x356350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x356350u, 0x351A64u, 0x351A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351A6Cu;
label_351a6c:
    // 0x351a6c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x351a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_351a70:
    // 0x351a70: 0x24050024  addiu       $a1, $zero, 0x24
    ctx->pc = 0x351a70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_351a74:
    // 0x351a74: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x351a74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_351a78:
    // 0x351a78: 0xc0d5c00  jal         func_357000
label_351a7c:
    if (ctx->pc == 0x351A7Cu) {
        ctx->pc = 0x351A80u;
        goto label_351a80;
    }
    ctx->pc = 0x351A78u;
    SET_GPR_U32(ctx, 31, 0x351A80u);
    ctx->pc = 0x357000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x357000u, 0x351A78u, 0x351A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351A80u;
label_351a80:
    // 0x351a80: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x351a80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_351a84:
    // 0x351a84: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x351a84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_351a88:
    // 0x351a88: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x351a88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_351a8c:
    // 0x351a8c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x351a8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_351a90:
    // 0x351a90: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x351a90u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
label_351a94:
    // 0x351a94: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x351a94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_351a98:
    // 0x351a98: 0x24671330  addiu       $a3, $v1, 0x1330
    ctx->pc = 0x351a98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_351a9c:
    // 0x351a9c: 0x90e400c4  lbu         $a0, 0xC4($a3)
    ctx->pc = 0x351a9cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 196)));
label_351aa0:
    // 0x351aa0: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x351aa0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_351aa4:
    // 0x351aa4: 0x53040  sll         $a2, $a1, 1
    ctx->pc = 0x351aa4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_351aa8:
    // 0x351aa8: 0xc51821  addu        $v1, $a2, $a1
    ctx->pc = 0x351aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_351aac:
    // 0x351aac: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x351aacu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_351ab0:
    // 0x351ab0: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x351ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
label_351ab4:
    // 0x351ab4: 0x2467bd00  addiu       $a3, $v1, -0x4300
    ctx->pc = 0x351ab4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
label_351ab8:
    // 0x351ab8: 0xe42021  addu        $a0, $a3, $a0
    ctx->pc = 0x351ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
label_351abc:
    // 0x351abc: 0x8c85007c  lw          $a1, 0x7C($a0)
    ctx->pc = 0x351abcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_351ac0:
    // 0x351ac0: 0x2406fff8  addiu       $a2, $zero, -0x8
    ctx->pc = 0x351ac0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
label_351ac4:
    // 0x351ac4: 0xa61824  and         $v1, $a1, $a2
    ctx->pc = 0x351ac4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
label_351ac8:
    // 0x351ac8: 0xac83007c  sw          $v1, 0x7C($a0)
    ctx->pc = 0x351ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 3));
label_351acc:
    // 0x351acc: 0x3c054348  lui         $a1, 0x4348
    ctx->pc = 0x351accu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17224 << 16));
label_351ad0:
    // 0x351ad0: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x351ad0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_351ad4:
    // 0x351ad4: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x351ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_351ad8:
    // 0x351ad8: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x351ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
label_351adc:
    // 0x351adc: 0x906300c4  lbu         $v1, 0xC4($v1)
    ctx->pc = 0x351adcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 196)));
label_351ae0:
    // 0x351ae0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x351ae0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_351ae4:
    // 0x351ae4: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x351ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_351ae8:
    // 0x351ae8: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x351ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_351aec:
    // 0x351aec: 0x42900  sll         $a1, $a0, 4
    ctx->pc = 0x351aecu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_351af0:
    // 0x351af0: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x351af0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_351af4:
    // 0x351af4: 0x2483bd00  addiu       $v1, $a0, -0x4300
    ctx->pc = 0x351af4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950144));
label_351af8:
    // 0x351af8: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x351af8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_351afc:
    // 0x351afc: 0xe4800070  swc1        $f0, 0x70($a0)
    ctx->pc = 0x351afcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 112), bits); }
label_351b00:
    // 0x351b00: 0x3c03435c  lui         $v1, 0x435C
    ctx->pc = 0x351b00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17244 << 16));
label_351b04:
    // 0x351b04: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x351b04u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_351b08:
    // 0x351b08: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x351b08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_351b0c:
    // 0x351b0c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x351b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_351b10:
    // 0x351b10: 0x906300c4  lbu         $v1, 0xC4($v1)
    ctx->pc = 0x351b10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 196)));
label_351b14:
    // 0x351b14: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x351b14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_351b18:
    // 0x351b18: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x351b18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_351b1c:
    // 0x351b1c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x351b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_351b20:
    // 0x351b20: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x351b20u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_351b24:
    // 0x351b24: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x351b24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
label_351b28:
    // 0x351b28: 0x2463bd00  addiu       $v1, $v1, -0x4300
    ctx->pc = 0x351b28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
label_351b2c:
    // 0x351b2c: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x351b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_351b30:
    // 0x351b30: 0xe4800074  swc1        $f0, 0x74($a0)
    ctx->pc = 0x351b30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 116), bits); }
label_351b34:
    // 0x351b34: 0x3c034310  lui         $v1, 0x4310
    ctx->pc = 0x351b34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17168 << 16));
label_351b38:
    // 0x351b38: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x351b38u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_351b3c:
    // 0x351b3c: 0x8fb00068  lw          $s0, 0x68($sp)
    ctx->pc = 0x351b3cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_351b40:
    // 0x351b40: 0x26031330  addiu       $v1, $s0, 0x1330
    ctx->pc = 0x351b40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4912));
label_351b44:
    // 0x351b44: 0x906500c4  lbu         $a1, 0xC4($v1)
    ctx->pc = 0x351b44u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 196)));
label_351b48:
    // 0x351b48: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x351b48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_351b4c:
    // 0x351b4c: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x351b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_351b50:
    // 0x351b50: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x351b50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_351b54:
    // 0x351b54: 0x52100  sll         $a0, $a1, 4
    ctx->pc = 0x351b54u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_351b58:
    // 0x351b58: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x351b58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
label_351b5c:
    // 0x351b5c: 0x2465bd00  addiu       $a1, $v1, -0x4300
    ctx->pc = 0x351b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
label_351b60:
    // 0x351b60: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x351b60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_351b64:
    // 0x351b64: 0xe4800078  swc1        $f0, 0x78($a0)
    ctx->pc = 0x351b64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 120), bits); }
label_351b68:
    // 0x351b68: 0x3c033f48  lui         $v1, 0x3F48
    ctx->pc = 0x351b68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16200 << 16));
label_351b6c:
    // 0x351b6c: 0x3463c8c9  ori         $v1, $v1, 0xC8C9
    ctx->pc = 0x351b6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)51401);
label_351b70:
    // 0x351b70: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x351b70u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_351b74:
    // 0x351b74: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x351b74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_351b78:
    // 0x351b78: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x351b78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_351b7c:
    // 0x351b7c: 0x906400c4  lbu         $a0, 0xC4($v1)
    ctx->pc = 0x351b7cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 196)));
label_351b80:
    // 0x351b80: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x351b80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_351b84:
    // 0x351b84: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x351b84u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_351b88:
    // 0x351b88: 0x832821  addu        $a1, $a0, $v1
    ctx->pc = 0x351b88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_351b8c:
    // 0x351b8c: 0x53100  sll         $a2, $a1, 4
    ctx->pc = 0x351b8cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_351b90:
    // 0x351b90: 0x3c070048  lui         $a3, 0x48
    ctx->pc = 0x351b90u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)72 << 16));
label_351b94:
    // 0x351b94: 0x24e8bd00  addiu       $t0, $a3, -0x4300
    ctx->pc = 0x351b94u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 4294950144));
label_351b98:
    // 0x351b98: 0x1061821  addu        $v1, $t0, $a2
    ctx->pc = 0x351b98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
label_351b9c:
    // 0x351b9c: 0xe4600080  swc1        $f0, 0x80($v1)
    ctx->pc = 0x351b9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 128), bits); }
label_351ba0:
    // 0x351ba0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x351ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_351ba4:
    // 0x351ba4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x351ba4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_351ba8:
    // 0x351ba8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x351ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_351bac:
    // 0x351bac: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x351bacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
label_351bb0:
    // 0x351bb0: 0x906300c4  lbu         $v1, 0xC4($v1)
    ctx->pc = 0x351bb0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 196)));
label_351bb4:
    // 0x351bb4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x351bb4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_351bb8:
    // 0x351bb8: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x351bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_351bbc:
    // 0x351bbc: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x351bbcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_351bc0:
    // 0x351bc0: 0x102900  sll         $a1, $s0, 4
    ctx->pc = 0x351bc0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_351bc4:
    // 0x351bc4: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x351bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_351bc8:
    // 0x351bc8: 0x2483bd00  addiu       $v1, $a0, -0x4300
    ctx->pc = 0x351bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950144));
label_351bcc:
    // 0x351bcc: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x351bccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_351bd0:
    // 0x351bd0: 0xe4800084  swc1        $f0, 0x84($a0)
    ctx->pc = 0x351bd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 132), bits); }
label_351bd4:
    // 0x351bd4: 0x3c133f10  lui         $s3, 0x3F10
    ctx->pc = 0x351bd4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)16144 << 16));
label_351bd8:
    // 0x351bd8: 0x36639091  ori         $v1, $s3, 0x9091
    ctx->pc = 0x351bd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)37009);
label_351bdc:
    // 0x351bdc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x351bdcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_351be0:
    // 0x351be0: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x351be0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_351be4:
    // 0x351be4: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x351be4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
label_351be8:
    // 0x351be8: 0x906300c4  lbu         $v1, 0xC4($v1)
    ctx->pc = 0x351be8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 196)));
label_351bec:
    // 0x351bec: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x351becu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_351bf0:
    // 0x351bf0: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x351bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_351bf4:
    // 0x351bf4: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x351bf4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_351bf8:
    // 0x351bf8: 0x102900  sll         $a1, $s0, 4
    ctx->pc = 0x351bf8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_351bfc:
    // 0x351bfc: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x351bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
label_351c00:
    // 0x351c00: 0x2464bd00  addiu       $a0, $v1, -0x4300
    ctx->pc = 0x351c00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
label_351c04:
    // 0x351c04: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x351c04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_351c08:
    // 0x351c08: 0xe4a00088  swc1        $f0, 0x88($a1)
    ctx->pc = 0x351c08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 136), bits); }
label_351c0c:
    // 0x351c0c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x351c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_351c10:
    // 0x351c10: 0x8c640058  lw          $a0, 0x58($v1)
    ctx->pc = 0x351c10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
label_351c14:
    // 0x351c14: 0x70808e28  paddub      $s1, $a0, $zero
    ctx->pc = 0x351c14u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
label_351c18:
    // 0x351c18: 0xa2200000  sb          $zero, 0x0($s1)
    ctx->pc = 0x351c18u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
label_351c1c:
    // 0x351c1c: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x351c1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_351c20:
    // 0x351c20: 0x84a41278  lh          $a0, 0x1278($a1)
    ctx->pc = 0x351c20u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4728)));
label_351c24:
    // 0x351c24: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x351c24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_351c28:
    // 0x351c28: 0xa4a31278  sh          $v1, 0x1278($a1)
    ctx->pc = 0x351c28u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4728), (uint16_t)GPR_U32(ctx, 3));
label_351c2c:
    // 0x351c2c: 0x1480001b  bnez        $a0, . + 4 + (0x1B << 2)
label_351c30:
    if (ctx->pc == 0x351C30u) {
        ctx->pc = 0x351C34u;
        goto label_351c34;
    }
    ctx->pc = 0x351C2Cu;
    {
        const bool branch_taken_0x351c2c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x351c2c) {
            ctx->pc = 0x351C9Cu;
            goto label_351c9c;
        }
    }
    ctx->pc = 0x351C34u;
label_351c34:
    // 0x351c34: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x351c34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_351c38:
    // 0x351c38: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x351c38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_351c3c:
    // 0x351c3c: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x351c3cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
label_351c40:
    // 0x351c40: 0x10000016  b           . + 4 + (0x16 << 2)
label_351c44:
    if (ctx->pc == 0x351C44u) {
        ctx->pc = 0x351C48u;
        goto label_351c48;
    }
    ctx->pc = 0x351C40u;
    {
        const bool branch_taken_0x351c40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x351c40) {
            ctx->pc = 0x351C9Cu;
            goto label_351c9c;
        }
    }
    ctx->pc = 0x351C48u;
label_351c48:
    // 0x351c48: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x351c48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_351c4c:
    // 0x351c4c: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x351c4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_351c50:
    // 0x351c50: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x351c50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_351c54:
    // 0x351c54: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x351c54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_351c58:
    // 0x351c58: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x351c58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
label_351c5c:
    // 0x351c5c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x351c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_351c60:
    // 0x351c60: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x351c60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
label_351c64:
    // 0x351c64: 0x906300c4  lbu         $v1, 0xC4($v1)
    ctx->pc = 0x351c64u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 196)));
label_351c68:
    // 0x351c68: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x351c68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_351c6c:
    // 0x351c6c: 0x42840  sll         $a1, $a0, 1
    ctx->pc = 0x351c6cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_351c70:
    // 0x351c70: 0xa43021  addu        $a2, $a1, $a0
    ctx->pc = 0x351c70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_351c74:
    // 0x351c74: 0x63900  sll         $a3, $a2, 4
    ctx->pc = 0x351c74u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_351c78:
    // 0x351c78: 0x3c080048  lui         $t0, 0x48
    ctx->pc = 0x351c78u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)72 << 16));
label_351c7c:
    // 0x351c7c: 0x2503bd00  addiu       $v1, $t0, -0x4300
    ctx->pc = 0x351c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294950144));
label_351c80:
    // 0x351c80: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x351c80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_351c84:
    // 0x351c84: 0x8c64007c  lw          $a0, 0x7C($v1)
    ctx->pc = 0x351c84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
label_351c88:
    // 0x351c88: 0x34860007  ori         $a2, $a0, 0x7
    ctx->pc = 0x351c88u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)7);
label_351c8c:
    // 0x351c8c: 0xac66007c  sw          $a2, 0x7C($v1)
    ctx->pc = 0x351c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 124), GPR_U32(ctx, 6));
label_351c90:
    // 0x351c90: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x351c90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_351c94:
    // 0x351c94: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x351c94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_351c98:
    // 0x351c98: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x351c98u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_351c9c:
    // 0x351c9c: 0x7bbf0040  lq          $ra, 0x40($sp)
    ctx->pc = 0x351c9cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_351ca0:
    // 0x351ca0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x351ca0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_351ca4:
    // 0x351ca4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x351ca4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_351ca8:
    // 0x351ca8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x351ca8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_351cac:
    // 0x351cac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x351cacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_351cb0:
    // 0x351cb0: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x351cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_351cb4:
    // 0x351cb4: 0x3e00008  jr          $ra
label_351cb8:
    if (ctx->pc == 0x351CB8u) {
        ctx->pc = 0x351CBCu;
        goto label_fallthrough_0x351cb4;
    }
    ctx->pc = 0x351CB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x351CB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x351cb4:
    ctx->pc = 0x351CBCu;
}
