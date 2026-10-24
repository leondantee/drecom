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

// Function: Em0c_kama_move
// Address: 0x231230 - 0x232860
void Em0c_kama_move_0x231230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0c_kama_move_0x231230");
#endif

    switch (ctx->pc) {
        case 0x231230u: goto label_231230;
        case 0x231234u: goto label_231234;
        case 0x231238u: goto label_231238;
        case 0x23123cu: goto label_23123c;
        case 0x231240u: goto label_231240;
        case 0x231244u: goto label_231244;
        case 0x231248u: goto label_231248;
        case 0x23124cu: goto label_23124c;
        case 0x231250u: goto label_231250;
        case 0x231254u: goto label_231254;
        case 0x231258u: goto label_231258;
        case 0x23125cu: goto label_23125c;
        case 0x231260u: goto label_231260;
        case 0x231264u: goto label_231264;
        case 0x231268u: goto label_231268;
        case 0x23126cu: goto label_23126c;
        case 0x231270u: goto label_231270;
        case 0x231274u: goto label_231274;
        case 0x231278u: goto label_231278;
        case 0x23127cu: goto label_23127c;
        case 0x231280u: goto label_231280;
        case 0x231284u: goto label_231284;
        case 0x231288u: goto label_231288;
        case 0x23128cu: goto label_23128c;
        case 0x231290u: goto label_231290;
        case 0x231294u: goto label_231294;
        case 0x231298u: goto label_231298;
        case 0x23129cu: goto label_23129c;
        case 0x2312a0u: goto label_2312a0;
        case 0x2312a4u: goto label_2312a4;
        case 0x2312a8u: goto label_2312a8;
        case 0x2312acu: goto label_2312ac;
        case 0x2312b0u: goto label_2312b0;
        case 0x2312b4u: goto label_2312b4;
        case 0x2312b8u: goto label_2312b8;
        case 0x2312bcu: goto label_2312bc;
        case 0x2312c0u: goto label_2312c0;
        case 0x2312c4u: goto label_2312c4;
        case 0x2312c8u: goto label_2312c8;
        case 0x2312ccu: goto label_2312cc;
        case 0x2312d0u: goto label_2312d0;
        case 0x2312d4u: goto label_2312d4;
        case 0x2312d8u: goto label_2312d8;
        case 0x2312dcu: goto label_2312dc;
        case 0x2312e0u: goto label_2312e0;
        case 0x2312e4u: goto label_2312e4;
        case 0x2312e8u: goto label_2312e8;
        case 0x2312ecu: goto label_2312ec;
        case 0x2312f0u: goto label_2312f0;
        case 0x2312f4u: goto label_2312f4;
        case 0x2312f8u: goto label_2312f8;
        case 0x2312fcu: goto label_2312fc;
        case 0x231300u: goto label_231300;
        case 0x231304u: goto label_231304;
        case 0x231308u: goto label_231308;
        case 0x23130cu: goto label_23130c;
        case 0x231310u: goto label_231310;
        case 0x231314u: goto label_231314;
        case 0x231318u: goto label_231318;
        case 0x23131cu: goto label_23131c;
        case 0x231320u: goto label_231320;
        case 0x231324u: goto label_231324;
        case 0x231328u: goto label_231328;
        case 0x23132cu: goto label_23132c;
        case 0x231330u: goto label_231330;
        case 0x231334u: goto label_231334;
        case 0x231338u: goto label_231338;
        case 0x23133cu: goto label_23133c;
        case 0x231340u: goto label_231340;
        case 0x231344u: goto label_231344;
        case 0x231348u: goto label_231348;
        case 0x23134cu: goto label_23134c;
        case 0x231350u: goto label_231350;
        case 0x231354u: goto label_231354;
        case 0x231358u: goto label_231358;
        case 0x23135cu: goto label_23135c;
        case 0x231360u: goto label_231360;
        case 0x231364u: goto label_231364;
        case 0x231368u: goto label_231368;
        case 0x23136cu: goto label_23136c;
        case 0x231370u: goto label_231370;
        case 0x231374u: goto label_231374;
        case 0x231378u: goto label_231378;
        case 0x23137cu: goto label_23137c;
        case 0x231380u: goto label_231380;
        case 0x231384u: goto label_231384;
        case 0x231388u: goto label_231388;
        case 0x23138cu: goto label_23138c;
        case 0x231390u: goto label_231390;
        case 0x231394u: goto label_231394;
        case 0x231398u: goto label_231398;
        case 0x23139cu: goto label_23139c;
        case 0x2313a0u: goto label_2313a0;
        case 0x2313a4u: goto label_2313a4;
        case 0x2313a8u: goto label_2313a8;
        case 0x2313acu: goto label_2313ac;
        case 0x2313b0u: goto label_2313b0;
        case 0x2313b4u: goto label_2313b4;
        case 0x2313b8u: goto label_2313b8;
        case 0x2313bcu: goto label_2313bc;
        case 0x2313c0u: goto label_2313c0;
        case 0x2313c4u: goto label_2313c4;
        case 0x2313c8u: goto label_2313c8;
        case 0x2313ccu: goto label_2313cc;
        case 0x2313d0u: goto label_2313d0;
        case 0x2313d4u: goto label_2313d4;
        case 0x2313d8u: goto label_2313d8;
        case 0x2313dcu: goto label_2313dc;
        case 0x2313e0u: goto label_2313e0;
        case 0x2313e4u: goto label_2313e4;
        case 0x2313e8u: goto label_2313e8;
        case 0x2313ecu: goto label_2313ec;
        case 0x2313f0u: goto label_2313f0;
        case 0x2313f4u: goto label_2313f4;
        case 0x2313f8u: goto label_2313f8;
        case 0x2313fcu: goto label_2313fc;
        case 0x231400u: goto label_231400;
        case 0x231404u: goto label_231404;
        case 0x231408u: goto label_231408;
        case 0x23140cu: goto label_23140c;
        case 0x231410u: goto label_231410;
        case 0x231414u: goto label_231414;
        case 0x231418u: goto label_231418;
        case 0x23141cu: goto label_23141c;
        case 0x231420u: goto label_231420;
        case 0x231424u: goto label_231424;
        case 0x231428u: goto label_231428;
        case 0x23142cu: goto label_23142c;
        case 0x231430u: goto label_231430;
        case 0x231434u: goto label_231434;
        case 0x231438u: goto label_231438;
        case 0x23143cu: goto label_23143c;
        case 0x231440u: goto label_231440;
        case 0x231444u: goto label_231444;
        case 0x231448u: goto label_231448;
        case 0x23144cu: goto label_23144c;
        case 0x231450u: goto label_231450;
        case 0x231454u: goto label_231454;
        case 0x231458u: goto label_231458;
        case 0x23145cu: goto label_23145c;
        case 0x231460u: goto label_231460;
        case 0x231464u: goto label_231464;
        case 0x231468u: goto label_231468;
        case 0x23146cu: goto label_23146c;
        case 0x231470u: goto label_231470;
        case 0x231474u: goto label_231474;
        case 0x231478u: goto label_231478;
        case 0x23147cu: goto label_23147c;
        case 0x231480u: goto label_231480;
        case 0x231484u: goto label_231484;
        case 0x231488u: goto label_231488;
        case 0x23148cu: goto label_23148c;
        case 0x231490u: goto label_231490;
        case 0x231494u: goto label_231494;
        case 0x231498u: goto label_231498;
        case 0x23149cu: goto label_23149c;
        case 0x2314a0u: goto label_2314a0;
        case 0x2314a4u: goto label_2314a4;
        case 0x2314a8u: goto label_2314a8;
        case 0x2314acu: goto label_2314ac;
        case 0x2314b0u: goto label_2314b0;
        case 0x2314b4u: goto label_2314b4;
        case 0x2314b8u: goto label_2314b8;
        case 0x2314bcu: goto label_2314bc;
        case 0x2314c0u: goto label_2314c0;
        case 0x2314c4u: goto label_2314c4;
        case 0x2314c8u: goto label_2314c8;
        case 0x2314ccu: goto label_2314cc;
        case 0x2314d0u: goto label_2314d0;
        case 0x2314d4u: goto label_2314d4;
        case 0x2314d8u: goto label_2314d8;
        case 0x2314dcu: goto label_2314dc;
        case 0x2314e0u: goto label_2314e0;
        case 0x2314e4u: goto label_2314e4;
        case 0x2314e8u: goto label_2314e8;
        case 0x2314ecu: goto label_2314ec;
        case 0x2314f0u: goto label_2314f0;
        case 0x2314f4u: goto label_2314f4;
        case 0x2314f8u: goto label_2314f8;
        case 0x2314fcu: goto label_2314fc;
        case 0x231500u: goto label_231500;
        case 0x231504u: goto label_231504;
        case 0x231508u: goto label_231508;
        case 0x23150cu: goto label_23150c;
        case 0x231510u: goto label_231510;
        case 0x231514u: goto label_231514;
        case 0x231518u: goto label_231518;
        case 0x23151cu: goto label_23151c;
        case 0x231520u: goto label_231520;
        case 0x231524u: goto label_231524;
        case 0x231528u: goto label_231528;
        case 0x23152cu: goto label_23152c;
        case 0x231530u: goto label_231530;
        case 0x231534u: goto label_231534;
        case 0x231538u: goto label_231538;
        case 0x23153cu: goto label_23153c;
        case 0x231540u: goto label_231540;
        case 0x231544u: goto label_231544;
        case 0x231548u: goto label_231548;
        case 0x23154cu: goto label_23154c;
        case 0x231550u: goto label_231550;
        case 0x231554u: goto label_231554;
        case 0x231558u: goto label_231558;
        case 0x23155cu: goto label_23155c;
        case 0x231560u: goto label_231560;
        case 0x231564u: goto label_231564;
        case 0x231568u: goto label_231568;
        case 0x23156cu: goto label_23156c;
        case 0x231570u: goto label_231570;
        case 0x231574u: goto label_231574;
        case 0x231578u: goto label_231578;
        case 0x23157cu: goto label_23157c;
        case 0x231580u: goto label_231580;
        case 0x231584u: goto label_231584;
        case 0x231588u: goto label_231588;
        case 0x23158cu: goto label_23158c;
        case 0x231590u: goto label_231590;
        case 0x231594u: goto label_231594;
        case 0x231598u: goto label_231598;
        case 0x23159cu: goto label_23159c;
        case 0x2315a0u: goto label_2315a0;
        case 0x2315a4u: goto label_2315a4;
        case 0x2315a8u: goto label_2315a8;
        case 0x2315acu: goto label_2315ac;
        case 0x2315b0u: goto label_2315b0;
        case 0x2315b4u: goto label_2315b4;
        case 0x2315b8u: goto label_2315b8;
        case 0x2315bcu: goto label_2315bc;
        case 0x2315c0u: goto label_2315c0;
        case 0x2315c4u: goto label_2315c4;
        case 0x2315c8u: goto label_2315c8;
        case 0x2315ccu: goto label_2315cc;
        case 0x2315d0u: goto label_2315d0;
        case 0x2315d4u: goto label_2315d4;
        case 0x2315d8u: goto label_2315d8;
        case 0x2315dcu: goto label_2315dc;
        case 0x2315e0u: goto label_2315e0;
        case 0x2315e4u: goto label_2315e4;
        case 0x2315e8u: goto label_2315e8;
        case 0x2315ecu: goto label_2315ec;
        case 0x2315f0u: goto label_2315f0;
        case 0x2315f4u: goto label_2315f4;
        case 0x2315f8u: goto label_2315f8;
        case 0x2315fcu: goto label_2315fc;
        case 0x231600u: goto label_231600;
        case 0x231604u: goto label_231604;
        case 0x231608u: goto label_231608;
        case 0x23160cu: goto label_23160c;
        case 0x231610u: goto label_231610;
        case 0x231614u: goto label_231614;
        case 0x231618u: goto label_231618;
        case 0x23161cu: goto label_23161c;
        case 0x231620u: goto label_231620;
        case 0x231624u: goto label_231624;
        case 0x231628u: goto label_231628;
        case 0x23162cu: goto label_23162c;
        case 0x231630u: goto label_231630;
        case 0x231634u: goto label_231634;
        case 0x231638u: goto label_231638;
        case 0x23163cu: goto label_23163c;
        case 0x231640u: goto label_231640;
        case 0x231644u: goto label_231644;
        case 0x231648u: goto label_231648;
        case 0x23164cu: goto label_23164c;
        case 0x231650u: goto label_231650;
        case 0x231654u: goto label_231654;
        case 0x231658u: goto label_231658;
        case 0x23165cu: goto label_23165c;
        case 0x231660u: goto label_231660;
        case 0x231664u: goto label_231664;
        case 0x231668u: goto label_231668;
        case 0x23166cu: goto label_23166c;
        case 0x231670u: goto label_231670;
        case 0x231674u: goto label_231674;
        case 0x231678u: goto label_231678;
        case 0x23167cu: goto label_23167c;
        case 0x231680u: goto label_231680;
        case 0x231684u: goto label_231684;
        case 0x231688u: goto label_231688;
        case 0x23168cu: goto label_23168c;
        case 0x231690u: goto label_231690;
        case 0x231694u: goto label_231694;
        case 0x231698u: goto label_231698;
        case 0x23169cu: goto label_23169c;
        case 0x2316a0u: goto label_2316a0;
        case 0x2316a4u: goto label_2316a4;
        case 0x2316a8u: goto label_2316a8;
        case 0x2316acu: goto label_2316ac;
        case 0x2316b0u: goto label_2316b0;
        case 0x2316b4u: goto label_2316b4;
        case 0x2316b8u: goto label_2316b8;
        case 0x2316bcu: goto label_2316bc;
        case 0x2316c0u: goto label_2316c0;
        case 0x2316c4u: goto label_2316c4;
        case 0x2316c8u: goto label_2316c8;
        case 0x2316ccu: goto label_2316cc;
        case 0x2316d0u: goto label_2316d0;
        case 0x2316d4u: goto label_2316d4;
        case 0x2316d8u: goto label_2316d8;
        case 0x2316dcu: goto label_2316dc;
        case 0x2316e0u: goto label_2316e0;
        case 0x2316e4u: goto label_2316e4;
        case 0x2316e8u: goto label_2316e8;
        case 0x2316ecu: goto label_2316ec;
        case 0x2316f0u: goto label_2316f0;
        case 0x2316f4u: goto label_2316f4;
        case 0x2316f8u: goto label_2316f8;
        case 0x2316fcu: goto label_2316fc;
        case 0x231700u: goto label_231700;
        case 0x231704u: goto label_231704;
        case 0x231708u: goto label_231708;
        case 0x23170cu: goto label_23170c;
        case 0x231710u: goto label_231710;
        case 0x231714u: goto label_231714;
        case 0x231718u: goto label_231718;
        case 0x23171cu: goto label_23171c;
        case 0x231720u: goto label_231720;
        case 0x231724u: goto label_231724;
        case 0x231728u: goto label_231728;
        case 0x23172cu: goto label_23172c;
        case 0x231730u: goto label_231730;
        case 0x231734u: goto label_231734;
        case 0x231738u: goto label_231738;
        case 0x23173cu: goto label_23173c;
        case 0x231740u: goto label_231740;
        case 0x231744u: goto label_231744;
        case 0x231748u: goto label_231748;
        case 0x23174cu: goto label_23174c;
        case 0x231750u: goto label_231750;
        case 0x231754u: goto label_231754;
        case 0x231758u: goto label_231758;
        case 0x23175cu: goto label_23175c;
        case 0x231760u: goto label_231760;
        case 0x231764u: goto label_231764;
        case 0x231768u: goto label_231768;
        case 0x23176cu: goto label_23176c;
        case 0x231770u: goto label_231770;
        case 0x231774u: goto label_231774;
        case 0x231778u: goto label_231778;
        case 0x23177cu: goto label_23177c;
        case 0x231780u: goto label_231780;
        case 0x231784u: goto label_231784;
        case 0x231788u: goto label_231788;
        case 0x23178cu: goto label_23178c;
        case 0x231790u: goto label_231790;
        case 0x231794u: goto label_231794;
        case 0x231798u: goto label_231798;
        case 0x23179cu: goto label_23179c;
        case 0x2317a0u: goto label_2317a0;
        case 0x2317a4u: goto label_2317a4;
        case 0x2317a8u: goto label_2317a8;
        case 0x2317acu: goto label_2317ac;
        case 0x2317b0u: goto label_2317b0;
        case 0x2317b4u: goto label_2317b4;
        case 0x2317b8u: goto label_2317b8;
        case 0x2317bcu: goto label_2317bc;
        case 0x2317c0u: goto label_2317c0;
        case 0x2317c4u: goto label_2317c4;
        case 0x2317c8u: goto label_2317c8;
        case 0x2317ccu: goto label_2317cc;
        case 0x2317d0u: goto label_2317d0;
        case 0x2317d4u: goto label_2317d4;
        case 0x2317d8u: goto label_2317d8;
        case 0x2317dcu: goto label_2317dc;
        case 0x2317e0u: goto label_2317e0;
        case 0x2317e4u: goto label_2317e4;
        case 0x2317e8u: goto label_2317e8;
        case 0x2317ecu: goto label_2317ec;
        case 0x2317f0u: goto label_2317f0;
        case 0x2317f4u: goto label_2317f4;
        case 0x2317f8u: goto label_2317f8;
        case 0x2317fcu: goto label_2317fc;
        case 0x231800u: goto label_231800;
        case 0x231804u: goto label_231804;
        case 0x231808u: goto label_231808;
        case 0x23180cu: goto label_23180c;
        case 0x231810u: goto label_231810;
        case 0x231814u: goto label_231814;
        case 0x231818u: goto label_231818;
        case 0x23181cu: goto label_23181c;
        case 0x231820u: goto label_231820;
        case 0x231824u: goto label_231824;
        case 0x231828u: goto label_231828;
        case 0x23182cu: goto label_23182c;
        case 0x231830u: goto label_231830;
        case 0x231834u: goto label_231834;
        case 0x231838u: goto label_231838;
        case 0x23183cu: goto label_23183c;
        case 0x231840u: goto label_231840;
        case 0x231844u: goto label_231844;
        case 0x231848u: goto label_231848;
        case 0x23184cu: goto label_23184c;
        case 0x231850u: goto label_231850;
        case 0x231854u: goto label_231854;
        case 0x231858u: goto label_231858;
        case 0x23185cu: goto label_23185c;
        case 0x231860u: goto label_231860;
        case 0x231864u: goto label_231864;
        case 0x231868u: goto label_231868;
        case 0x23186cu: goto label_23186c;
        case 0x231870u: goto label_231870;
        case 0x231874u: goto label_231874;
        case 0x231878u: goto label_231878;
        case 0x23187cu: goto label_23187c;
        case 0x231880u: goto label_231880;
        case 0x231884u: goto label_231884;
        case 0x231888u: goto label_231888;
        case 0x23188cu: goto label_23188c;
        case 0x231890u: goto label_231890;
        case 0x231894u: goto label_231894;
        case 0x231898u: goto label_231898;
        case 0x23189cu: goto label_23189c;
        case 0x2318a0u: goto label_2318a0;
        case 0x2318a4u: goto label_2318a4;
        case 0x2318a8u: goto label_2318a8;
        case 0x2318acu: goto label_2318ac;
        case 0x2318b0u: goto label_2318b0;
        case 0x2318b4u: goto label_2318b4;
        case 0x2318b8u: goto label_2318b8;
        case 0x2318bcu: goto label_2318bc;
        case 0x2318c0u: goto label_2318c0;
        case 0x2318c4u: goto label_2318c4;
        case 0x2318c8u: goto label_2318c8;
        case 0x2318ccu: goto label_2318cc;
        case 0x2318d0u: goto label_2318d0;
        case 0x2318d4u: goto label_2318d4;
        case 0x2318d8u: goto label_2318d8;
        case 0x2318dcu: goto label_2318dc;
        case 0x2318e0u: goto label_2318e0;
        case 0x2318e4u: goto label_2318e4;
        case 0x2318e8u: goto label_2318e8;
        case 0x2318ecu: goto label_2318ec;
        case 0x2318f0u: goto label_2318f0;
        case 0x2318f4u: goto label_2318f4;
        case 0x2318f8u: goto label_2318f8;
        case 0x2318fcu: goto label_2318fc;
        case 0x231900u: goto label_231900;
        case 0x231904u: goto label_231904;
        case 0x231908u: goto label_231908;
        case 0x23190cu: goto label_23190c;
        case 0x231910u: goto label_231910;
        case 0x231914u: goto label_231914;
        case 0x231918u: goto label_231918;
        case 0x23191cu: goto label_23191c;
        case 0x231920u: goto label_231920;
        case 0x231924u: goto label_231924;
        case 0x231928u: goto label_231928;
        case 0x23192cu: goto label_23192c;
        case 0x231930u: goto label_231930;
        case 0x231934u: goto label_231934;
        case 0x231938u: goto label_231938;
        case 0x23193cu: goto label_23193c;
        case 0x231940u: goto label_231940;
        case 0x231944u: goto label_231944;
        case 0x231948u: goto label_231948;
        case 0x23194cu: goto label_23194c;
        case 0x231950u: goto label_231950;
        case 0x231954u: goto label_231954;
        case 0x231958u: goto label_231958;
        case 0x23195cu: goto label_23195c;
        case 0x231960u: goto label_231960;
        case 0x231964u: goto label_231964;
        case 0x231968u: goto label_231968;
        case 0x23196cu: goto label_23196c;
        case 0x231970u: goto label_231970;
        case 0x231974u: goto label_231974;
        case 0x231978u: goto label_231978;
        case 0x23197cu: goto label_23197c;
        case 0x231980u: goto label_231980;
        case 0x231984u: goto label_231984;
        case 0x231988u: goto label_231988;
        case 0x23198cu: goto label_23198c;
        case 0x231990u: goto label_231990;
        case 0x231994u: goto label_231994;
        case 0x231998u: goto label_231998;
        case 0x23199cu: goto label_23199c;
        case 0x2319a0u: goto label_2319a0;
        case 0x2319a4u: goto label_2319a4;
        case 0x2319a8u: goto label_2319a8;
        case 0x2319acu: goto label_2319ac;
        case 0x2319b0u: goto label_2319b0;
        case 0x2319b4u: goto label_2319b4;
        case 0x2319b8u: goto label_2319b8;
        case 0x2319bcu: goto label_2319bc;
        case 0x2319c0u: goto label_2319c0;
        case 0x2319c4u: goto label_2319c4;
        case 0x2319c8u: goto label_2319c8;
        case 0x2319ccu: goto label_2319cc;
        case 0x2319d0u: goto label_2319d0;
        case 0x2319d4u: goto label_2319d4;
        case 0x2319d8u: goto label_2319d8;
        case 0x2319dcu: goto label_2319dc;
        case 0x2319e0u: goto label_2319e0;
        case 0x2319e4u: goto label_2319e4;
        case 0x2319e8u: goto label_2319e8;
        case 0x2319ecu: goto label_2319ec;
        case 0x2319f0u: goto label_2319f0;
        case 0x2319f4u: goto label_2319f4;
        case 0x2319f8u: goto label_2319f8;
        case 0x2319fcu: goto label_2319fc;
        case 0x231a00u: goto label_231a00;
        case 0x231a04u: goto label_231a04;
        case 0x231a08u: goto label_231a08;
        case 0x231a0cu: goto label_231a0c;
        case 0x231a10u: goto label_231a10;
        case 0x231a14u: goto label_231a14;
        case 0x231a18u: goto label_231a18;
        case 0x231a1cu: goto label_231a1c;
        case 0x231a20u: goto label_231a20;
        case 0x231a24u: goto label_231a24;
        case 0x231a28u: goto label_231a28;
        case 0x231a2cu: goto label_231a2c;
        case 0x231a30u: goto label_231a30;
        case 0x231a34u: goto label_231a34;
        case 0x231a38u: goto label_231a38;
        case 0x231a3cu: goto label_231a3c;
        case 0x231a40u: goto label_231a40;
        case 0x231a44u: goto label_231a44;
        case 0x231a48u: goto label_231a48;
        case 0x231a4cu: goto label_231a4c;
        case 0x231a50u: goto label_231a50;
        case 0x231a54u: goto label_231a54;
        case 0x231a58u: goto label_231a58;
        case 0x231a5cu: goto label_231a5c;
        case 0x231a60u: goto label_231a60;
        case 0x231a64u: goto label_231a64;
        case 0x231a68u: goto label_231a68;
        case 0x231a6cu: goto label_231a6c;
        case 0x231a70u: goto label_231a70;
        case 0x231a74u: goto label_231a74;
        case 0x231a78u: goto label_231a78;
        case 0x231a7cu: goto label_231a7c;
        case 0x231a80u: goto label_231a80;
        case 0x231a84u: goto label_231a84;
        case 0x231a88u: goto label_231a88;
        case 0x231a8cu: goto label_231a8c;
        case 0x231a90u: goto label_231a90;
        case 0x231a94u: goto label_231a94;
        case 0x231a98u: goto label_231a98;
        case 0x231a9cu: goto label_231a9c;
        case 0x231aa0u: goto label_231aa0;
        case 0x231aa4u: goto label_231aa4;
        case 0x231aa8u: goto label_231aa8;
        case 0x231aacu: goto label_231aac;
        case 0x231ab0u: goto label_231ab0;
        case 0x231ab4u: goto label_231ab4;
        case 0x231ab8u: goto label_231ab8;
        case 0x231abcu: goto label_231abc;
        case 0x231ac0u: goto label_231ac0;
        case 0x231ac4u: goto label_231ac4;
        case 0x231ac8u: goto label_231ac8;
        case 0x231accu: goto label_231acc;
        case 0x231ad0u: goto label_231ad0;
        case 0x231ad4u: goto label_231ad4;
        case 0x231ad8u: goto label_231ad8;
        case 0x231adcu: goto label_231adc;
        case 0x231ae0u: goto label_231ae0;
        case 0x231ae4u: goto label_231ae4;
        case 0x231ae8u: goto label_231ae8;
        case 0x231aecu: goto label_231aec;
        case 0x231af0u: goto label_231af0;
        case 0x231af4u: goto label_231af4;
        case 0x231af8u: goto label_231af8;
        case 0x231afcu: goto label_231afc;
        case 0x231b00u: goto label_231b00;
        case 0x231b04u: goto label_231b04;
        case 0x231b08u: goto label_231b08;
        case 0x231b0cu: goto label_231b0c;
        case 0x231b10u: goto label_231b10;
        case 0x231b14u: goto label_231b14;
        case 0x231b18u: goto label_231b18;
        case 0x231b1cu: goto label_231b1c;
        case 0x231b20u: goto label_231b20;
        case 0x231b24u: goto label_231b24;
        case 0x231b28u: goto label_231b28;
        case 0x231b2cu: goto label_231b2c;
        case 0x231b30u: goto label_231b30;
        case 0x231b34u: goto label_231b34;
        case 0x231b38u: goto label_231b38;
        case 0x231b3cu: goto label_231b3c;
        case 0x231b40u: goto label_231b40;
        case 0x231b44u: goto label_231b44;
        case 0x231b48u: goto label_231b48;
        case 0x231b4cu: goto label_231b4c;
        case 0x231b50u: goto label_231b50;
        case 0x231b54u: goto label_231b54;
        case 0x231b58u: goto label_231b58;
        case 0x231b5cu: goto label_231b5c;
        case 0x231b60u: goto label_231b60;
        case 0x231b64u: goto label_231b64;
        case 0x231b68u: goto label_231b68;
        case 0x231b6cu: goto label_231b6c;
        case 0x231b70u: goto label_231b70;
        case 0x231b74u: goto label_231b74;
        case 0x231b78u: goto label_231b78;
        case 0x231b7cu: goto label_231b7c;
        case 0x231b80u: goto label_231b80;
        case 0x231b84u: goto label_231b84;
        case 0x231b88u: goto label_231b88;
        case 0x231b8cu: goto label_231b8c;
        case 0x231b90u: goto label_231b90;
        case 0x231b94u: goto label_231b94;
        case 0x231b98u: goto label_231b98;
        case 0x231b9cu: goto label_231b9c;
        case 0x231ba0u: goto label_231ba0;
        case 0x231ba4u: goto label_231ba4;
        case 0x231ba8u: goto label_231ba8;
        case 0x231bacu: goto label_231bac;
        case 0x231bb0u: goto label_231bb0;
        case 0x231bb4u: goto label_231bb4;
        case 0x231bb8u: goto label_231bb8;
        case 0x231bbcu: goto label_231bbc;
        case 0x231bc0u: goto label_231bc0;
        case 0x231bc4u: goto label_231bc4;
        case 0x231bc8u: goto label_231bc8;
        case 0x231bccu: goto label_231bcc;
        case 0x231bd0u: goto label_231bd0;
        case 0x231bd4u: goto label_231bd4;
        case 0x231bd8u: goto label_231bd8;
        case 0x231bdcu: goto label_231bdc;
        case 0x231be0u: goto label_231be0;
        case 0x231be4u: goto label_231be4;
        case 0x231be8u: goto label_231be8;
        case 0x231becu: goto label_231bec;
        case 0x231bf0u: goto label_231bf0;
        case 0x231bf4u: goto label_231bf4;
        case 0x231bf8u: goto label_231bf8;
        case 0x231bfcu: goto label_231bfc;
        case 0x231c00u: goto label_231c00;
        case 0x231c04u: goto label_231c04;
        case 0x231c08u: goto label_231c08;
        case 0x231c0cu: goto label_231c0c;
        case 0x231c10u: goto label_231c10;
        case 0x231c14u: goto label_231c14;
        case 0x231c18u: goto label_231c18;
        case 0x231c1cu: goto label_231c1c;
        case 0x231c20u: goto label_231c20;
        case 0x231c24u: goto label_231c24;
        case 0x231c28u: goto label_231c28;
        case 0x231c2cu: goto label_231c2c;
        case 0x231c30u: goto label_231c30;
        case 0x231c34u: goto label_231c34;
        case 0x231c38u: goto label_231c38;
        case 0x231c3cu: goto label_231c3c;
        case 0x231c40u: goto label_231c40;
        case 0x231c44u: goto label_231c44;
        case 0x231c48u: goto label_231c48;
        case 0x231c4cu: goto label_231c4c;
        case 0x231c50u: goto label_231c50;
        case 0x231c54u: goto label_231c54;
        case 0x231c58u: goto label_231c58;
        case 0x231c5cu: goto label_231c5c;
        case 0x231c60u: goto label_231c60;
        case 0x231c64u: goto label_231c64;
        case 0x231c68u: goto label_231c68;
        case 0x231c6cu: goto label_231c6c;
        case 0x231c70u: goto label_231c70;
        case 0x231c74u: goto label_231c74;
        case 0x231c78u: goto label_231c78;
        case 0x231c7cu: goto label_231c7c;
        case 0x231c80u: goto label_231c80;
        case 0x231c84u: goto label_231c84;
        case 0x231c88u: goto label_231c88;
        case 0x231c8cu: goto label_231c8c;
        case 0x231c90u: goto label_231c90;
        case 0x231c94u: goto label_231c94;
        case 0x231c98u: goto label_231c98;
        case 0x231c9cu: goto label_231c9c;
        case 0x231ca0u: goto label_231ca0;
        case 0x231ca4u: goto label_231ca4;
        case 0x231ca8u: goto label_231ca8;
        case 0x231cacu: goto label_231cac;
        case 0x231cb0u: goto label_231cb0;
        case 0x231cb4u: goto label_231cb4;
        case 0x231cb8u: goto label_231cb8;
        case 0x231cbcu: goto label_231cbc;
        case 0x231cc0u: goto label_231cc0;
        case 0x231cc4u: goto label_231cc4;
        case 0x231cc8u: goto label_231cc8;
        case 0x231cccu: goto label_231ccc;
        case 0x231cd0u: goto label_231cd0;
        case 0x231cd4u: goto label_231cd4;
        case 0x231cd8u: goto label_231cd8;
        case 0x231cdcu: goto label_231cdc;
        case 0x231ce0u: goto label_231ce0;
        case 0x231ce4u: goto label_231ce4;
        case 0x231ce8u: goto label_231ce8;
        case 0x231cecu: goto label_231cec;
        case 0x231cf0u: goto label_231cf0;
        case 0x231cf4u: goto label_231cf4;
        case 0x231cf8u: goto label_231cf8;
        case 0x231cfcu: goto label_231cfc;
        case 0x231d00u: goto label_231d00;
        case 0x231d04u: goto label_231d04;
        case 0x231d08u: goto label_231d08;
        case 0x231d0cu: goto label_231d0c;
        case 0x231d10u: goto label_231d10;
        case 0x231d14u: goto label_231d14;
        case 0x231d18u: goto label_231d18;
        case 0x231d1cu: goto label_231d1c;
        case 0x231d20u: goto label_231d20;
        case 0x231d24u: goto label_231d24;
        case 0x231d28u: goto label_231d28;
        case 0x231d2cu: goto label_231d2c;
        case 0x231d30u: goto label_231d30;
        case 0x231d34u: goto label_231d34;
        case 0x231d38u: goto label_231d38;
        case 0x231d3cu: goto label_231d3c;
        case 0x231d40u: goto label_231d40;
        case 0x231d44u: goto label_231d44;
        case 0x231d48u: goto label_231d48;
        case 0x231d4cu: goto label_231d4c;
        case 0x231d50u: goto label_231d50;
        case 0x231d54u: goto label_231d54;
        case 0x231d58u: goto label_231d58;
        case 0x231d5cu: goto label_231d5c;
        case 0x231d60u: goto label_231d60;
        case 0x231d64u: goto label_231d64;
        case 0x231d68u: goto label_231d68;
        case 0x231d6cu: goto label_231d6c;
        case 0x231d70u: goto label_231d70;
        case 0x231d74u: goto label_231d74;
        case 0x231d78u: goto label_231d78;
        case 0x231d7cu: goto label_231d7c;
        case 0x231d80u: goto label_231d80;
        case 0x231d84u: goto label_231d84;
        case 0x231d88u: goto label_231d88;
        case 0x231d8cu: goto label_231d8c;
        case 0x231d90u: goto label_231d90;
        case 0x231d94u: goto label_231d94;
        case 0x231d98u: goto label_231d98;
        case 0x231d9cu: goto label_231d9c;
        case 0x231da0u: goto label_231da0;
        case 0x231da4u: goto label_231da4;
        case 0x231da8u: goto label_231da8;
        case 0x231dacu: goto label_231dac;
        case 0x231db0u: goto label_231db0;
        case 0x231db4u: goto label_231db4;
        case 0x231db8u: goto label_231db8;
        case 0x231dbcu: goto label_231dbc;
        case 0x231dc0u: goto label_231dc0;
        case 0x231dc4u: goto label_231dc4;
        case 0x231dc8u: goto label_231dc8;
        case 0x231dccu: goto label_231dcc;
        case 0x231dd0u: goto label_231dd0;
        case 0x231dd4u: goto label_231dd4;
        case 0x231dd8u: goto label_231dd8;
        case 0x231ddcu: goto label_231ddc;
        case 0x231de0u: goto label_231de0;
        case 0x231de4u: goto label_231de4;
        case 0x231de8u: goto label_231de8;
        case 0x231decu: goto label_231dec;
        case 0x231df0u: goto label_231df0;
        case 0x231df4u: goto label_231df4;
        case 0x231df8u: goto label_231df8;
        case 0x231dfcu: goto label_231dfc;
        case 0x231e00u: goto label_231e00;
        case 0x231e04u: goto label_231e04;
        case 0x231e08u: goto label_231e08;
        case 0x231e0cu: goto label_231e0c;
        case 0x231e10u: goto label_231e10;
        case 0x231e14u: goto label_231e14;
        case 0x231e18u: goto label_231e18;
        case 0x231e1cu: goto label_231e1c;
        case 0x231e20u: goto label_231e20;
        case 0x231e24u: goto label_231e24;
        case 0x231e28u: goto label_231e28;
        case 0x231e2cu: goto label_231e2c;
        case 0x231e30u: goto label_231e30;
        case 0x231e34u: goto label_231e34;
        case 0x231e38u: goto label_231e38;
        case 0x231e3cu: goto label_231e3c;
        case 0x231e40u: goto label_231e40;
        case 0x231e44u: goto label_231e44;
        case 0x231e48u: goto label_231e48;
        case 0x231e4cu: goto label_231e4c;
        case 0x231e50u: goto label_231e50;
        case 0x231e54u: goto label_231e54;
        case 0x231e58u: goto label_231e58;
        case 0x231e5cu: goto label_231e5c;
        case 0x231e60u: goto label_231e60;
        case 0x231e64u: goto label_231e64;
        case 0x231e68u: goto label_231e68;
        case 0x231e6cu: goto label_231e6c;
        case 0x231e70u: goto label_231e70;
        case 0x231e74u: goto label_231e74;
        case 0x231e78u: goto label_231e78;
        case 0x231e7cu: goto label_231e7c;
        case 0x231e80u: goto label_231e80;
        case 0x231e84u: goto label_231e84;
        case 0x231e88u: goto label_231e88;
        case 0x231e8cu: goto label_231e8c;
        case 0x231e90u: goto label_231e90;
        case 0x231e94u: goto label_231e94;
        case 0x231e98u: goto label_231e98;
        case 0x231e9cu: goto label_231e9c;
        case 0x231ea0u: goto label_231ea0;
        case 0x231ea4u: goto label_231ea4;
        case 0x231ea8u: goto label_231ea8;
        case 0x231eacu: goto label_231eac;
        case 0x231eb0u: goto label_231eb0;
        case 0x231eb4u: goto label_231eb4;
        case 0x231eb8u: goto label_231eb8;
        case 0x231ebcu: goto label_231ebc;
        case 0x231ec0u: goto label_231ec0;
        case 0x231ec4u: goto label_231ec4;
        case 0x231ec8u: goto label_231ec8;
        case 0x231eccu: goto label_231ecc;
        case 0x231ed0u: goto label_231ed0;
        case 0x231ed4u: goto label_231ed4;
        case 0x231ed8u: goto label_231ed8;
        case 0x231edcu: goto label_231edc;
        case 0x231ee0u: goto label_231ee0;
        case 0x231ee4u: goto label_231ee4;
        case 0x231ee8u: goto label_231ee8;
        case 0x231eecu: goto label_231eec;
        case 0x231ef0u: goto label_231ef0;
        case 0x231ef4u: goto label_231ef4;
        case 0x231ef8u: goto label_231ef8;
        case 0x231efcu: goto label_231efc;
        case 0x231f00u: goto label_231f00;
        case 0x231f04u: goto label_231f04;
        case 0x231f08u: goto label_231f08;
        case 0x231f0cu: goto label_231f0c;
        case 0x231f10u: goto label_231f10;
        case 0x231f14u: goto label_231f14;
        case 0x231f18u: goto label_231f18;
        case 0x231f1cu: goto label_231f1c;
        case 0x231f20u: goto label_231f20;
        case 0x231f24u: goto label_231f24;
        case 0x231f28u: goto label_231f28;
        case 0x231f2cu: goto label_231f2c;
        case 0x231f30u: goto label_231f30;
        case 0x231f34u: goto label_231f34;
        case 0x231f38u: goto label_231f38;
        case 0x231f3cu: goto label_231f3c;
        case 0x231f40u: goto label_231f40;
        case 0x231f44u: goto label_231f44;
        case 0x231f48u: goto label_231f48;
        case 0x231f4cu: goto label_231f4c;
        case 0x231f50u: goto label_231f50;
        case 0x231f54u: goto label_231f54;
        case 0x231f58u: goto label_231f58;
        case 0x231f5cu: goto label_231f5c;
        case 0x231f60u: goto label_231f60;
        case 0x231f64u: goto label_231f64;
        case 0x231f68u: goto label_231f68;
        case 0x231f6cu: goto label_231f6c;
        case 0x231f70u: goto label_231f70;
        case 0x231f74u: goto label_231f74;
        case 0x231f78u: goto label_231f78;
        case 0x231f7cu: goto label_231f7c;
        case 0x231f80u: goto label_231f80;
        case 0x231f84u: goto label_231f84;
        case 0x231f88u: goto label_231f88;
        case 0x231f8cu: goto label_231f8c;
        case 0x231f90u: goto label_231f90;
        case 0x231f94u: goto label_231f94;
        case 0x231f98u: goto label_231f98;
        case 0x231f9cu: goto label_231f9c;
        case 0x231fa0u: goto label_231fa0;
        case 0x231fa4u: goto label_231fa4;
        case 0x231fa8u: goto label_231fa8;
        case 0x231facu: goto label_231fac;
        case 0x231fb0u: goto label_231fb0;
        case 0x231fb4u: goto label_231fb4;
        case 0x231fb8u: goto label_231fb8;
        case 0x231fbcu: goto label_231fbc;
        case 0x231fc0u: goto label_231fc0;
        case 0x231fc4u: goto label_231fc4;
        case 0x231fc8u: goto label_231fc8;
        case 0x231fccu: goto label_231fcc;
        case 0x231fd0u: goto label_231fd0;
        case 0x231fd4u: goto label_231fd4;
        case 0x231fd8u: goto label_231fd8;
        case 0x231fdcu: goto label_231fdc;
        case 0x231fe0u: goto label_231fe0;
        case 0x231fe4u: goto label_231fe4;
        case 0x231fe8u: goto label_231fe8;
        case 0x231fecu: goto label_231fec;
        case 0x231ff0u: goto label_231ff0;
        case 0x231ff4u: goto label_231ff4;
        case 0x231ff8u: goto label_231ff8;
        case 0x231ffcu: goto label_231ffc;
        case 0x232000u: goto label_232000;
        case 0x232004u: goto label_232004;
        case 0x232008u: goto label_232008;
        case 0x23200cu: goto label_23200c;
        case 0x232010u: goto label_232010;
        case 0x232014u: goto label_232014;
        case 0x232018u: goto label_232018;
        case 0x23201cu: goto label_23201c;
        case 0x232020u: goto label_232020;
        case 0x232024u: goto label_232024;
        case 0x232028u: goto label_232028;
        case 0x23202cu: goto label_23202c;
        case 0x232030u: goto label_232030;
        case 0x232034u: goto label_232034;
        case 0x232038u: goto label_232038;
        case 0x23203cu: goto label_23203c;
        case 0x232040u: goto label_232040;
        case 0x232044u: goto label_232044;
        case 0x232048u: goto label_232048;
        case 0x23204cu: goto label_23204c;
        case 0x232050u: goto label_232050;
        case 0x232054u: goto label_232054;
        case 0x232058u: goto label_232058;
        case 0x23205cu: goto label_23205c;
        case 0x232060u: goto label_232060;
        case 0x232064u: goto label_232064;
        case 0x232068u: goto label_232068;
        case 0x23206cu: goto label_23206c;
        case 0x232070u: goto label_232070;
        case 0x232074u: goto label_232074;
        case 0x232078u: goto label_232078;
        case 0x23207cu: goto label_23207c;
        case 0x232080u: goto label_232080;
        case 0x232084u: goto label_232084;
        case 0x232088u: goto label_232088;
        case 0x23208cu: goto label_23208c;
        case 0x232090u: goto label_232090;
        case 0x232094u: goto label_232094;
        case 0x232098u: goto label_232098;
        case 0x23209cu: goto label_23209c;
        case 0x2320a0u: goto label_2320a0;
        case 0x2320a4u: goto label_2320a4;
        case 0x2320a8u: goto label_2320a8;
        case 0x2320acu: goto label_2320ac;
        case 0x2320b0u: goto label_2320b0;
        case 0x2320b4u: goto label_2320b4;
        case 0x2320b8u: goto label_2320b8;
        case 0x2320bcu: goto label_2320bc;
        case 0x2320c0u: goto label_2320c0;
        case 0x2320c4u: goto label_2320c4;
        case 0x2320c8u: goto label_2320c8;
        case 0x2320ccu: goto label_2320cc;
        case 0x2320d0u: goto label_2320d0;
        case 0x2320d4u: goto label_2320d4;
        case 0x2320d8u: goto label_2320d8;
        case 0x2320dcu: goto label_2320dc;
        case 0x2320e0u: goto label_2320e0;
        case 0x2320e4u: goto label_2320e4;
        case 0x2320e8u: goto label_2320e8;
        case 0x2320ecu: goto label_2320ec;
        case 0x2320f0u: goto label_2320f0;
        case 0x2320f4u: goto label_2320f4;
        case 0x2320f8u: goto label_2320f8;
        case 0x2320fcu: goto label_2320fc;
        case 0x232100u: goto label_232100;
        case 0x232104u: goto label_232104;
        case 0x232108u: goto label_232108;
        case 0x23210cu: goto label_23210c;
        case 0x232110u: goto label_232110;
        case 0x232114u: goto label_232114;
        case 0x232118u: goto label_232118;
        case 0x23211cu: goto label_23211c;
        case 0x232120u: goto label_232120;
        case 0x232124u: goto label_232124;
        case 0x232128u: goto label_232128;
        case 0x23212cu: goto label_23212c;
        case 0x232130u: goto label_232130;
        case 0x232134u: goto label_232134;
        case 0x232138u: goto label_232138;
        case 0x23213cu: goto label_23213c;
        case 0x232140u: goto label_232140;
        case 0x232144u: goto label_232144;
        case 0x232148u: goto label_232148;
        case 0x23214cu: goto label_23214c;
        case 0x232150u: goto label_232150;
        case 0x232154u: goto label_232154;
        case 0x232158u: goto label_232158;
        case 0x23215cu: goto label_23215c;
        case 0x232160u: goto label_232160;
        case 0x232164u: goto label_232164;
        case 0x232168u: goto label_232168;
        case 0x23216cu: goto label_23216c;
        case 0x232170u: goto label_232170;
        case 0x232174u: goto label_232174;
        case 0x232178u: goto label_232178;
        case 0x23217cu: goto label_23217c;
        case 0x232180u: goto label_232180;
        case 0x232184u: goto label_232184;
        case 0x232188u: goto label_232188;
        case 0x23218cu: goto label_23218c;
        case 0x232190u: goto label_232190;
        case 0x232194u: goto label_232194;
        case 0x232198u: goto label_232198;
        case 0x23219cu: goto label_23219c;
        case 0x2321a0u: goto label_2321a0;
        case 0x2321a4u: goto label_2321a4;
        case 0x2321a8u: goto label_2321a8;
        case 0x2321acu: goto label_2321ac;
        case 0x2321b0u: goto label_2321b0;
        case 0x2321b4u: goto label_2321b4;
        case 0x2321b8u: goto label_2321b8;
        case 0x2321bcu: goto label_2321bc;
        case 0x2321c0u: goto label_2321c0;
        case 0x2321c4u: goto label_2321c4;
        case 0x2321c8u: goto label_2321c8;
        case 0x2321ccu: goto label_2321cc;
        case 0x2321d0u: goto label_2321d0;
        case 0x2321d4u: goto label_2321d4;
        case 0x2321d8u: goto label_2321d8;
        case 0x2321dcu: goto label_2321dc;
        case 0x2321e0u: goto label_2321e0;
        case 0x2321e4u: goto label_2321e4;
        case 0x2321e8u: goto label_2321e8;
        case 0x2321ecu: goto label_2321ec;
        case 0x2321f0u: goto label_2321f0;
        case 0x2321f4u: goto label_2321f4;
        case 0x2321f8u: goto label_2321f8;
        case 0x2321fcu: goto label_2321fc;
        case 0x232200u: goto label_232200;
        case 0x232204u: goto label_232204;
        case 0x232208u: goto label_232208;
        case 0x23220cu: goto label_23220c;
        case 0x232210u: goto label_232210;
        case 0x232214u: goto label_232214;
        case 0x232218u: goto label_232218;
        case 0x23221cu: goto label_23221c;
        case 0x232220u: goto label_232220;
        case 0x232224u: goto label_232224;
        case 0x232228u: goto label_232228;
        case 0x23222cu: goto label_23222c;
        case 0x232230u: goto label_232230;
        case 0x232234u: goto label_232234;
        case 0x232238u: goto label_232238;
        case 0x23223cu: goto label_23223c;
        case 0x232240u: goto label_232240;
        case 0x232244u: goto label_232244;
        case 0x232248u: goto label_232248;
        case 0x23224cu: goto label_23224c;
        case 0x232250u: goto label_232250;
        case 0x232254u: goto label_232254;
        case 0x232258u: goto label_232258;
        case 0x23225cu: goto label_23225c;
        case 0x232260u: goto label_232260;
        case 0x232264u: goto label_232264;
        case 0x232268u: goto label_232268;
        case 0x23226cu: goto label_23226c;
        case 0x232270u: goto label_232270;
        case 0x232274u: goto label_232274;
        case 0x232278u: goto label_232278;
        case 0x23227cu: goto label_23227c;
        case 0x232280u: goto label_232280;
        case 0x232284u: goto label_232284;
        case 0x232288u: goto label_232288;
        case 0x23228cu: goto label_23228c;
        case 0x232290u: goto label_232290;
        case 0x232294u: goto label_232294;
        case 0x232298u: goto label_232298;
        case 0x23229cu: goto label_23229c;
        case 0x2322a0u: goto label_2322a0;
        case 0x2322a4u: goto label_2322a4;
        case 0x2322a8u: goto label_2322a8;
        case 0x2322acu: goto label_2322ac;
        case 0x2322b0u: goto label_2322b0;
        case 0x2322b4u: goto label_2322b4;
        case 0x2322b8u: goto label_2322b8;
        case 0x2322bcu: goto label_2322bc;
        case 0x2322c0u: goto label_2322c0;
        case 0x2322c4u: goto label_2322c4;
        case 0x2322c8u: goto label_2322c8;
        case 0x2322ccu: goto label_2322cc;
        case 0x2322d0u: goto label_2322d0;
        case 0x2322d4u: goto label_2322d4;
        case 0x2322d8u: goto label_2322d8;
        case 0x2322dcu: goto label_2322dc;
        case 0x2322e0u: goto label_2322e0;
        case 0x2322e4u: goto label_2322e4;
        case 0x2322e8u: goto label_2322e8;
        case 0x2322ecu: goto label_2322ec;
        case 0x2322f0u: goto label_2322f0;
        case 0x2322f4u: goto label_2322f4;
        case 0x2322f8u: goto label_2322f8;
        case 0x2322fcu: goto label_2322fc;
        case 0x232300u: goto label_232300;
        case 0x232304u: goto label_232304;
        case 0x232308u: goto label_232308;
        case 0x23230cu: goto label_23230c;
        case 0x232310u: goto label_232310;
        case 0x232314u: goto label_232314;
        case 0x232318u: goto label_232318;
        case 0x23231cu: goto label_23231c;
        case 0x232320u: goto label_232320;
        case 0x232324u: goto label_232324;
        case 0x232328u: goto label_232328;
        case 0x23232cu: goto label_23232c;
        case 0x232330u: goto label_232330;
        case 0x232334u: goto label_232334;
        case 0x232338u: goto label_232338;
        case 0x23233cu: goto label_23233c;
        case 0x232340u: goto label_232340;
        case 0x232344u: goto label_232344;
        case 0x232348u: goto label_232348;
        case 0x23234cu: goto label_23234c;
        case 0x232350u: goto label_232350;
        case 0x232354u: goto label_232354;
        case 0x232358u: goto label_232358;
        case 0x23235cu: goto label_23235c;
        case 0x232360u: goto label_232360;
        case 0x232364u: goto label_232364;
        case 0x232368u: goto label_232368;
        case 0x23236cu: goto label_23236c;
        case 0x232370u: goto label_232370;
        case 0x232374u: goto label_232374;
        case 0x232378u: goto label_232378;
        case 0x23237cu: goto label_23237c;
        case 0x232380u: goto label_232380;
        case 0x232384u: goto label_232384;
        case 0x232388u: goto label_232388;
        case 0x23238cu: goto label_23238c;
        case 0x232390u: goto label_232390;
        case 0x232394u: goto label_232394;
        case 0x232398u: goto label_232398;
        case 0x23239cu: goto label_23239c;
        case 0x2323a0u: goto label_2323a0;
        case 0x2323a4u: goto label_2323a4;
        case 0x2323a8u: goto label_2323a8;
        case 0x2323acu: goto label_2323ac;
        case 0x2323b0u: goto label_2323b0;
        case 0x2323b4u: goto label_2323b4;
        case 0x2323b8u: goto label_2323b8;
        case 0x2323bcu: goto label_2323bc;
        case 0x2323c0u: goto label_2323c0;
        case 0x2323c4u: goto label_2323c4;
        case 0x2323c8u: goto label_2323c8;
        case 0x2323ccu: goto label_2323cc;
        case 0x2323d0u: goto label_2323d0;
        case 0x2323d4u: goto label_2323d4;
        case 0x2323d8u: goto label_2323d8;
        case 0x2323dcu: goto label_2323dc;
        case 0x2323e0u: goto label_2323e0;
        case 0x2323e4u: goto label_2323e4;
        case 0x2323e8u: goto label_2323e8;
        case 0x2323ecu: goto label_2323ec;
        case 0x2323f0u: goto label_2323f0;
        case 0x2323f4u: goto label_2323f4;
        case 0x2323f8u: goto label_2323f8;
        case 0x2323fcu: goto label_2323fc;
        case 0x232400u: goto label_232400;
        case 0x232404u: goto label_232404;
        case 0x232408u: goto label_232408;
        case 0x23240cu: goto label_23240c;
        case 0x232410u: goto label_232410;
        case 0x232414u: goto label_232414;
        case 0x232418u: goto label_232418;
        case 0x23241cu: goto label_23241c;
        case 0x232420u: goto label_232420;
        case 0x232424u: goto label_232424;
        case 0x232428u: goto label_232428;
        case 0x23242cu: goto label_23242c;
        case 0x232430u: goto label_232430;
        case 0x232434u: goto label_232434;
        case 0x232438u: goto label_232438;
        case 0x23243cu: goto label_23243c;
        case 0x232440u: goto label_232440;
        case 0x232444u: goto label_232444;
        case 0x232448u: goto label_232448;
        case 0x23244cu: goto label_23244c;
        case 0x232450u: goto label_232450;
        case 0x232454u: goto label_232454;
        case 0x232458u: goto label_232458;
        case 0x23245cu: goto label_23245c;
        case 0x232460u: goto label_232460;
        case 0x232464u: goto label_232464;
        case 0x232468u: goto label_232468;
        case 0x23246cu: goto label_23246c;
        case 0x232470u: goto label_232470;
        case 0x232474u: goto label_232474;
        case 0x232478u: goto label_232478;
        case 0x23247cu: goto label_23247c;
        case 0x232480u: goto label_232480;
        case 0x232484u: goto label_232484;
        case 0x232488u: goto label_232488;
        case 0x23248cu: goto label_23248c;
        case 0x232490u: goto label_232490;
        case 0x232494u: goto label_232494;
        case 0x232498u: goto label_232498;
        case 0x23249cu: goto label_23249c;
        case 0x2324a0u: goto label_2324a0;
        case 0x2324a4u: goto label_2324a4;
        case 0x2324a8u: goto label_2324a8;
        case 0x2324acu: goto label_2324ac;
        case 0x2324b0u: goto label_2324b0;
        case 0x2324b4u: goto label_2324b4;
        case 0x2324b8u: goto label_2324b8;
        case 0x2324bcu: goto label_2324bc;
        case 0x2324c0u: goto label_2324c0;
        case 0x2324c4u: goto label_2324c4;
        case 0x2324c8u: goto label_2324c8;
        case 0x2324ccu: goto label_2324cc;
        case 0x2324d0u: goto label_2324d0;
        case 0x2324d4u: goto label_2324d4;
        case 0x2324d8u: goto label_2324d8;
        case 0x2324dcu: goto label_2324dc;
        case 0x2324e0u: goto label_2324e0;
        case 0x2324e4u: goto label_2324e4;
        case 0x2324e8u: goto label_2324e8;
        case 0x2324ecu: goto label_2324ec;
        case 0x2324f0u: goto label_2324f0;
        case 0x2324f4u: goto label_2324f4;
        case 0x2324f8u: goto label_2324f8;
        case 0x2324fcu: goto label_2324fc;
        case 0x232500u: goto label_232500;
        case 0x232504u: goto label_232504;
        case 0x232508u: goto label_232508;
        case 0x23250cu: goto label_23250c;
        case 0x232510u: goto label_232510;
        case 0x232514u: goto label_232514;
        case 0x232518u: goto label_232518;
        case 0x23251cu: goto label_23251c;
        case 0x232520u: goto label_232520;
        case 0x232524u: goto label_232524;
        case 0x232528u: goto label_232528;
        case 0x23252cu: goto label_23252c;
        case 0x232530u: goto label_232530;
        case 0x232534u: goto label_232534;
        case 0x232538u: goto label_232538;
        case 0x23253cu: goto label_23253c;
        case 0x232540u: goto label_232540;
        case 0x232544u: goto label_232544;
        case 0x232548u: goto label_232548;
        case 0x23254cu: goto label_23254c;
        case 0x232550u: goto label_232550;
        case 0x232554u: goto label_232554;
        case 0x232558u: goto label_232558;
        case 0x23255cu: goto label_23255c;
        case 0x232560u: goto label_232560;
        case 0x232564u: goto label_232564;
        case 0x232568u: goto label_232568;
        case 0x23256cu: goto label_23256c;
        case 0x232570u: goto label_232570;
        case 0x232574u: goto label_232574;
        case 0x232578u: goto label_232578;
        case 0x23257cu: goto label_23257c;
        case 0x232580u: goto label_232580;
        case 0x232584u: goto label_232584;
        case 0x232588u: goto label_232588;
        case 0x23258cu: goto label_23258c;
        case 0x232590u: goto label_232590;
        case 0x232594u: goto label_232594;
        case 0x232598u: goto label_232598;
        case 0x23259cu: goto label_23259c;
        case 0x2325a0u: goto label_2325a0;
        case 0x2325a4u: goto label_2325a4;
        case 0x2325a8u: goto label_2325a8;
        case 0x2325acu: goto label_2325ac;
        case 0x2325b0u: goto label_2325b0;
        case 0x2325b4u: goto label_2325b4;
        case 0x2325b8u: goto label_2325b8;
        case 0x2325bcu: goto label_2325bc;
        case 0x2325c0u: goto label_2325c0;
        case 0x2325c4u: goto label_2325c4;
        case 0x2325c8u: goto label_2325c8;
        case 0x2325ccu: goto label_2325cc;
        case 0x2325d0u: goto label_2325d0;
        case 0x2325d4u: goto label_2325d4;
        case 0x2325d8u: goto label_2325d8;
        case 0x2325dcu: goto label_2325dc;
        case 0x2325e0u: goto label_2325e0;
        case 0x2325e4u: goto label_2325e4;
        case 0x2325e8u: goto label_2325e8;
        case 0x2325ecu: goto label_2325ec;
        case 0x2325f0u: goto label_2325f0;
        case 0x2325f4u: goto label_2325f4;
        case 0x2325f8u: goto label_2325f8;
        case 0x2325fcu: goto label_2325fc;
        case 0x232600u: goto label_232600;
        case 0x232604u: goto label_232604;
        case 0x232608u: goto label_232608;
        case 0x23260cu: goto label_23260c;
        case 0x232610u: goto label_232610;
        case 0x232614u: goto label_232614;
        case 0x232618u: goto label_232618;
        case 0x23261cu: goto label_23261c;
        case 0x232620u: goto label_232620;
        case 0x232624u: goto label_232624;
        case 0x232628u: goto label_232628;
        case 0x23262cu: goto label_23262c;
        case 0x232630u: goto label_232630;
        case 0x232634u: goto label_232634;
        case 0x232638u: goto label_232638;
        case 0x23263cu: goto label_23263c;
        case 0x232640u: goto label_232640;
        case 0x232644u: goto label_232644;
        case 0x232648u: goto label_232648;
        case 0x23264cu: goto label_23264c;
        case 0x232650u: goto label_232650;
        case 0x232654u: goto label_232654;
        case 0x232658u: goto label_232658;
        case 0x23265cu: goto label_23265c;
        case 0x232660u: goto label_232660;
        case 0x232664u: goto label_232664;
        case 0x232668u: goto label_232668;
        case 0x23266cu: goto label_23266c;
        case 0x232670u: goto label_232670;
        case 0x232674u: goto label_232674;
        case 0x232678u: goto label_232678;
        case 0x23267cu: goto label_23267c;
        case 0x232680u: goto label_232680;
        case 0x232684u: goto label_232684;
        case 0x232688u: goto label_232688;
        case 0x23268cu: goto label_23268c;
        case 0x232690u: goto label_232690;
        case 0x232694u: goto label_232694;
        case 0x232698u: goto label_232698;
        case 0x23269cu: goto label_23269c;
        case 0x2326a0u: goto label_2326a0;
        case 0x2326a4u: goto label_2326a4;
        case 0x2326a8u: goto label_2326a8;
        case 0x2326acu: goto label_2326ac;
        case 0x2326b0u: goto label_2326b0;
        case 0x2326b4u: goto label_2326b4;
        case 0x2326b8u: goto label_2326b8;
        case 0x2326bcu: goto label_2326bc;
        case 0x2326c0u: goto label_2326c0;
        case 0x2326c4u: goto label_2326c4;
        case 0x2326c8u: goto label_2326c8;
        case 0x2326ccu: goto label_2326cc;
        case 0x2326d0u: goto label_2326d0;
        case 0x2326d4u: goto label_2326d4;
        case 0x2326d8u: goto label_2326d8;
        case 0x2326dcu: goto label_2326dc;
        case 0x2326e0u: goto label_2326e0;
        case 0x2326e4u: goto label_2326e4;
        case 0x2326e8u: goto label_2326e8;
        case 0x2326ecu: goto label_2326ec;
        case 0x2326f0u: goto label_2326f0;
        case 0x2326f4u: goto label_2326f4;
        case 0x2326f8u: goto label_2326f8;
        case 0x2326fcu: goto label_2326fc;
        case 0x232700u: goto label_232700;
        case 0x232704u: goto label_232704;
        case 0x232708u: goto label_232708;
        case 0x23270cu: goto label_23270c;
        case 0x232710u: goto label_232710;
        case 0x232714u: goto label_232714;
        case 0x232718u: goto label_232718;
        case 0x23271cu: goto label_23271c;
        case 0x232720u: goto label_232720;
        case 0x232724u: goto label_232724;
        case 0x232728u: goto label_232728;
        case 0x23272cu: goto label_23272c;
        case 0x232730u: goto label_232730;
        case 0x232734u: goto label_232734;
        case 0x232738u: goto label_232738;
        case 0x23273cu: goto label_23273c;
        case 0x232740u: goto label_232740;
        case 0x232744u: goto label_232744;
        case 0x232748u: goto label_232748;
        case 0x23274cu: goto label_23274c;
        case 0x232750u: goto label_232750;
        case 0x232754u: goto label_232754;
        case 0x232758u: goto label_232758;
        case 0x23275cu: goto label_23275c;
        case 0x232760u: goto label_232760;
        case 0x232764u: goto label_232764;
        case 0x232768u: goto label_232768;
        case 0x23276cu: goto label_23276c;
        case 0x232770u: goto label_232770;
        case 0x232774u: goto label_232774;
        case 0x232778u: goto label_232778;
        case 0x23277cu: goto label_23277c;
        case 0x232780u: goto label_232780;
        case 0x232784u: goto label_232784;
        case 0x232788u: goto label_232788;
        case 0x23278cu: goto label_23278c;
        case 0x232790u: goto label_232790;
        case 0x232794u: goto label_232794;
        case 0x232798u: goto label_232798;
        case 0x23279cu: goto label_23279c;
        case 0x2327a0u: goto label_2327a0;
        case 0x2327a4u: goto label_2327a4;
        case 0x2327a8u: goto label_2327a8;
        case 0x2327acu: goto label_2327ac;
        case 0x2327b0u: goto label_2327b0;
        case 0x2327b4u: goto label_2327b4;
        case 0x2327b8u: goto label_2327b8;
        case 0x2327bcu: goto label_2327bc;
        case 0x2327c0u: goto label_2327c0;
        case 0x2327c4u: goto label_2327c4;
        case 0x2327c8u: goto label_2327c8;
        case 0x2327ccu: goto label_2327cc;
        case 0x2327d0u: goto label_2327d0;
        case 0x2327d4u: goto label_2327d4;
        case 0x2327d8u: goto label_2327d8;
        case 0x2327dcu: goto label_2327dc;
        case 0x2327e0u: goto label_2327e0;
        case 0x2327e4u: goto label_2327e4;
        case 0x2327e8u: goto label_2327e8;
        case 0x2327ecu: goto label_2327ec;
        case 0x2327f0u: goto label_2327f0;
        case 0x2327f4u: goto label_2327f4;
        case 0x2327f8u: goto label_2327f8;
        case 0x2327fcu: goto label_2327fc;
        case 0x232800u: goto label_232800;
        case 0x232804u: goto label_232804;
        case 0x232808u: goto label_232808;
        case 0x23280cu: goto label_23280c;
        case 0x232810u: goto label_232810;
        case 0x232814u: goto label_232814;
        case 0x232818u: goto label_232818;
        case 0x23281cu: goto label_23281c;
        case 0x232820u: goto label_232820;
        case 0x232824u: goto label_232824;
        case 0x232828u: goto label_232828;
        case 0x23282cu: goto label_23282c;
        case 0x232830u: goto label_232830;
        case 0x232834u: goto label_232834;
        case 0x232838u: goto label_232838;
        case 0x23283cu: goto label_23283c;
        case 0x232840u: goto label_232840;
        case 0x232844u: goto label_232844;
        case 0x232848u: goto label_232848;
        case 0x23284cu: goto label_23284c;
        case 0x232850u: goto label_232850;
        case 0x232854u: goto label_232854;
        case 0x232858u: goto label_232858;
        case 0x23285cu: goto label_23285c;
        default: break;
    }

    ctx->pc = 0x231230u;

label_231230:
    // 0x231230: 0x27bdfe20  addiu       $sp, $sp, -0x1E0
    ctx->pc = 0x231230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966816));
label_231234:
    // 0x231234: 0x7fbf0080  sq          $ra, 0x80($sp)
    ctx->pc = 0x231234u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 31));
label_231238:
    // 0x231238: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x231238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_23123c:
    // 0x23123c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x23123cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_231240:
    // 0x231240: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x231240u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_231244:
    // 0x231244: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x231244u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_231248:
    // 0x231248: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x231248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_23124c:
    // 0x23124c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x23124cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_231250:
    // 0x231250: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x231250u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_231254:
    // 0x231254: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x231254u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_231258:
    // 0x231258: 0xafa401d8  sw          $a0, 0x1D8($sp)
    ctx->pc = 0x231258u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 472), GPR_U32(ctx, 4));
label_23125c:
    // 0x23125c: 0x8fa401d8  lw          $a0, 0x1D8($sp)
    ctx->pc = 0x23125cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
label_231260:
    // 0x231260: 0x8c8302d0  lw          $v1, 0x2D0($a0)
    ctx->pc = 0x231260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 720)));
label_231264:
    // 0x231264: 0x24653520  addiu       $a1, $v1, 0x3520
    ctx->pc = 0x231264u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 13600));
label_231268:
    // 0x231268: 0x70a08628  paddub      $s0, $a1, $zero
    ctx->pc = 0x231268u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_23126c:
    // 0x23126c: 0x8fa301d8  lw          $v1, 0x1D8($sp)
    ctx->pc = 0x23126cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
label_231270:
    // 0x231270: 0x8c640130  lw          $a0, 0x130($v1)
    ctx->pc = 0x231270u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
label_231274:
    // 0x231274: 0x24850880  addiu       $a1, $a0, 0x880
    ctx->pc = 0x231274u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 2176));
label_231278:
    // 0x231278: 0x70a08e28  paddub      $s1, $a1, $zero
    ctx->pc = 0x231278u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_23127c:
    // 0x23127c: 0x8fa301d8  lw          $v1, 0x1D8($sp)
    ctx->pc = 0x23127cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
label_231280:
    // 0x231280: 0x8c640058  lw          $a0, 0x58($v1)
    ctx->pc = 0x231280u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
label_231284:
    // 0x231284: 0x24940480  addiu       $s4, $a0, 0x480
    ctx->pc = 0x231284u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
label_231288:
    // 0x231288: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x231288u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_23128c:
    // 0x23128c: 0x8c33dcf0  lw          $s3, -0x2310($at)
    ctx->pc = 0x23128cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294958320)));
label_231290:
    // 0x231290: 0x8fa301d8  lw          $v1, 0x1D8($sp)
    ctx->pc = 0x231290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
label_231294:
    // 0x231294: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x231294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
label_231298:
    // 0x231298: 0x247505c0  addiu       $s5, $v1, 0x5C0
    ctx->pc = 0x231298u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 1472));
label_23129c:
    // 0x23129c: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x23129cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_2312a0:
    // 0x2312a0: 0x9463002e  lhu         $v1, 0x2E($v1)
    ctx->pc = 0x2312a0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 46)));
label_2312a4:
    // 0x2312a4: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x2312a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_2312a8:
    // 0x2312a8: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2312a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_2312ac:
    // 0x2312ac: 0x10600560  beqz        $v1, . + 4 + (0x560 << 2)
label_2312b0:
    if (ctx->pc == 0x2312B0u) {
        ctx->pc = 0x2312B4u;
        goto label_2312b4;
    }
    ctx->pc = 0x2312ACu;
    {
        const bool branch_taken_0x2312ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2312ac) {
            ctx->pc = 0x232830u;
            goto label_232830;
        }
    }
    ctx->pc = 0x2312B4u;
label_2312b4:
    // 0x2312b4: 0xc067694  jal         func_19DA50
label_2312b8:
    if (ctx->pc == 0x2312B8u) {
        ctx->pc = 0x2312BCu;
        goto label_2312bc;
    }
    ctx->pc = 0x2312B4u;
    SET_GPR_U32(ctx, 31, 0x2312BCu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2312B4u, 0x2312BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2312BCu;
label_2312bc:
    // 0x2312bc: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x2312bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2312c0:
    // 0x2312c0: 0x3085003f  andi        $a1, $a0, 0x3F
    ctx->pc = 0x2312c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)63);
label_2312c4:
    // 0x2312c4: 0x24a30064  addiu       $v1, $a1, 0x64
    ctx->pc = 0x2312c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 100));
label_2312c8:
    // 0x2312c8: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x2312c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_2312cc:
    // 0x2312cc: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2312ccu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_2312d0:
    // 0x2312d0: 0x8fa501d8  lw          $a1, 0x1D8($sp)
    ctx->pc = 0x2312d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
label_2312d4:
    // 0x2312d4: 0x24a41330  addiu       $a0, $a1, 0x1330
    ctx->pc = 0x2312d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
label_2312d8:
    // 0x2312d8: 0xa483005c  sh          $v1, 0x5C($a0)
    ctx->pc = 0x2312d8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 92), (uint16_t)GPR_U32(ctx, 3));
label_2312dc:
    // 0x2312dc: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x2312dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_2312e0:
    // 0x2312e0: 0x9464002e  lhu         $a0, 0x2E($v1)
    ctx->pc = 0x2312e0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 46)));
label_2312e4:
    // 0x2312e4: 0x3083ffff  andi        $v1, $a0, 0xFFFF
    ctx->pc = 0x2312e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
label_2312e8:
    // 0x2312e8: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x2312e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_2312ec:
    // 0x2312ec: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_2312f0:
    if (ctx->pc == 0x2312F0u) {
        ctx->pc = 0x2312F4u;
        goto label_2312f4;
    }
    ctx->pc = 0x2312ECu;
    {
        const bool branch_taken_0x2312ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2312ec) {
            ctx->pc = 0x23130Cu;
            goto label_23130c;
        }
    }
    ctx->pc = 0x2312F4u;
label_2312f4:
    // 0x2312f4: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x2312f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_2312f8:
    // 0x2312f8: 0x9483002e  lhu         $v1, 0x2E($a0)
    ctx->pc = 0x2312f8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 46)));
label_2312fc:
    // 0x2312fc: 0x3067fffd  andi        $a3, $v1, 0xFFFD
    ctx->pc = 0x2312fcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65533);
label_231300:
    // 0x231300: 0xa487002e  sh          $a3, 0x2E($a0)
    ctx->pc = 0x231300u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 46), (uint16_t)GPR_U32(ctx, 7));
label_231304:
    // 0x231304: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x231304u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_231308:
    // 0x231308: 0xa0600029  sb          $zero, 0x29($v1)
    ctx->pc = 0x231308u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 41), (uint8_t)GPR_U32(ctx, 0));
label_23130c:
    // 0x23130c: 0x26070150  addiu       $a3, $s0, 0x150
    ctx->pc = 0x23130cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_231310:
    // 0x231310: 0x94e5002e  lhu         $a1, 0x2E($a3)
    ctx->pc = 0x231310u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 46)));
label_231314:
    // 0x231314: 0x30a3ffff  andi        $v1, $a1, 0xFFFF
    ctx->pc = 0x231314u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
label_231318:
    // 0x231318: 0x30660008  andi        $a2, $v1, 0x8
    ctx->pc = 0x231318u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
label_23131c:
    // 0x23131c: 0x10c0002a  beqz        $a2, . + 4 + (0x2A << 2)
label_231320:
    if (ctx->pc == 0x231320u) {
        ctx->pc = 0x231324u;
        goto label_231324;
    }
    ctx->pc = 0x23131Cu;
    {
        const bool branch_taken_0x23131c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x23131c) {
            ctx->pc = 0x2313C8u;
            goto label_2313c8;
        }
    }
    ctx->pc = 0x231324u;
label_231324:
    // 0x231324: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x231324u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_231328:
    // 0x231328: 0x9483002e  lhu         $v1, 0x2E($a0)
    ctx->pc = 0x231328u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 46)));
label_23132c:
    // 0x23132c: 0x3065fff7  andi        $a1, $v1, 0xFFF7
    ctx->pc = 0x23132cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65527);
label_231330:
    // 0x231330: 0xa485002e  sh          $a1, 0x2E($a0)
    ctx->pc = 0x231330u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 46), (uint16_t)GPR_U32(ctx, 5));
label_231334:
    // 0x231334: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x231334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_231338:
    // 0x231338: 0x90630029  lbu         $v1, 0x29($v1)
    ctx->pc = 0x231338u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 41)));
label_23133c:
    // 0x23133c: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_231340:
    if (ctx->pc == 0x231340u) {
        ctx->pc = 0x231344u;
        goto label_231344;
    }
    ctx->pc = 0x23133Cu;
    {
        const bool branch_taken_0x23133c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x23133c) {
            ctx->pc = 0x231358u;
            goto label_231358;
        }
    }
    ctx->pc = 0x231344u;
label_231344:
    // 0x231344: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x231344u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_231348:
    // 0x231348: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x231348u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_23134c:
    // 0x23134c: 0xa0640029  sb          $a0, 0x29($v1)
    ctx->pc = 0x23134cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 41), (uint8_t)GPR_U32(ctx, 4));
label_231350:
    // 0x231350: 0x1000001d  b           . + 4 + (0x1D << 2)
label_231354:
    if (ctx->pc == 0x231354u) {
        ctx->pc = 0x231358u;
        goto label_231358;
    }
    ctx->pc = 0x231350u;
    {
        const bool branch_taken_0x231350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x231350) {
            ctx->pc = 0x2313C8u;
            goto label_2313c8;
        }
    }
    ctx->pc = 0x231358u;
label_231358:
    // 0x231358: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x231358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_23135c:
    // 0x23135c: 0x26060150  addiu       $a2, $s0, 0x150
    ctx->pc = 0x23135cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_231360:
    // 0x231360: 0xa0c40029  sb          $a0, 0x29($a2)
    ctx->pc = 0x231360u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 41), (uint8_t)GPR_U32(ctx, 4));
label_231364:
    // 0x231364: 0x3c033fc9  lui         $v1, 0x3FC9
    ctx->pc = 0x231364u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16329 << 16));
label_231368:
    // 0x231368: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x231368u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_23136c:
    // 0x23136c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x23136cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_231370:
    // 0x231370: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x231370u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_231374:
    // 0x231374: 0xe4a10008  swc1        $f1, 0x8($a1)
    ctx->pc = 0x231374u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
label_231378:
    // 0x231378: 0x26070150  addiu       $a3, $s0, 0x150
    ctx->pc = 0x231378u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_23137c:
    // 0x23137c: 0xe4e10010  swc1        $f1, 0x10($a3)
    ctx->pc = 0x23137cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 16), bits); }
label_231380:
    // 0x231380: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x231380u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_231384:
    // 0x231384: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x231384u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_231388:
    // 0x231388: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x231388u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_23138c:
    // 0x23138c: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x23138cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_231390:
    // 0x231390: 0xe4800014  swc1        $f0, 0x14($a0)
    ctx->pc = 0x231390u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
label_231394:
    // 0x231394: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x231394u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_231398:
    // 0x231398: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x231398u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_23139c:
    // 0x23139c: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x23139cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_2313a0:
    // 0x2313a0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2313a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2313a4:
    // 0x2313a4: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x2313a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_2313a8:
    // 0x2313a8: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x2313a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_2313ac:
    // 0x2313ac: 0x3c0442b4  lui         $a0, 0x42B4
    ctx->pc = 0x2313acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17076 << 16));
label_2313b0:
    // 0x2313b0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2313b0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2313b4:
    // 0x2313b4: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x2313b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_2313b8:
    // 0x2313b8: 0xe4a0001c  swc1        $f0, 0x1C($a1)
    ctx->pc = 0x2313b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 28), bits); }
label_2313bc:
    // 0x2313bc: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x2313bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2313c0:
    // 0x2313c0: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x2313c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_2313c4:
    // 0x2313c4: 0xa4640030  sh          $a0, 0x30($v1)
    ctx->pc = 0x2313c4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 48), (uint16_t)GPR_U32(ctx, 4));
label_2313c8:
    // 0x2313c8: 0x3c043dc9  lui         $a0, 0x3DC9
    ctx->pc = 0x2313c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15817 << 16));
label_2313cc:
    // 0x2313cc: 0x34830fdb  ori         $v1, $a0, 0xFDB
    ctx->pc = 0x2313ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4059);
label_2313d0:
    // 0x2313d0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2313d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2313d4:
    // 0x2313d4: 0x0  nop
    ctx->pc = 0x2313d4u;
    // NOP
label_2313d8:
    // 0x2313d8: 0xe7a001c0  swc1        $f0, 0x1C0($sp)
    ctx->pc = 0x2313d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 448), bits); }
label_2313dc:
    // 0x2313dc: 0x3c033cc9  lui         $v1, 0x3CC9
    ctx->pc = 0x2313dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15561 << 16));
label_2313e0:
    // 0x2313e0: 0x34650fdb  ori         $a1, $v1, 0xFDB
    ctx->pc = 0x2313e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_2313e4:
    // 0x2313e4: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2313e4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2313e8:
    // 0x2313e8: 0x0  nop
    ctx->pc = 0x2313e8u;
    // NOP
label_2313ec:
    // 0x2313ec: 0xe7a001c4  swc1        $f0, 0x1C4($sp)
    ctx->pc = 0x2313ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 452), bits); }
label_2313f0:
    // 0x2313f0: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x2313f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_2313f4:
    // 0x2313f4: 0x90850029  lbu         $a1, 0x29($a0)
    ctx->pc = 0x2313f4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 41)));
label_2313f8:
    // 0x2313f8: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x2313f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_2313fc:
    // 0x2313fc: 0x2c810007  sltiu       $at, $a0, 0x7
    ctx->pc = 0x2313fcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_231400:
    // 0x231400: 0x1020050b  beqz        $at, . + 4 + (0x50B << 2)
label_231404:
    if (ctx->pc == 0x231404u) {
        ctx->pc = 0x231408u;
        goto label_231408;
    }
    ctx->pc = 0x231400u;
    {
        const bool branch_taken_0x231400 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x231400) {
            ctx->pc = 0x232830u;
            goto label_232830;
        }
    }
    ctx->pc = 0x231408u;
label_231408:
    // 0x231408: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x231408u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_23140c:
    // 0x23140c: 0x246511b0  addiu       $a1, $v1, 0x11B0
    ctx->pc = 0x23140cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4528));
label_231410:
    // 0x231410: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x231410u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_231414:
    // 0x231414: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x231414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_231418:
    // 0x231418: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x231418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_23141c:
    // 0x23141c: 0x600008  jr          $v1
label_231420:
    if (ctx->pc == 0x231420u) {
        ctx->pc = 0x231424u;
        goto label_231424;
    }
    ctx->pc = 0x23141Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23141Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x231424u;
label_231424:
    // 0x231424: 0x96040140  lhu         $a0, 0x140($s0)
    ctx->pc = 0x231424u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
label_231428:
    // 0x231428: 0x348300a4  ori         $v1, $a0, 0xA4
    ctx->pc = 0x231428u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)164);
label_23142c:
    // 0x23142c: 0xa6030140  sh          $v1, 0x140($s0)
    ctx->pc = 0x23142cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 3));
label_231430:
    // 0x231430: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x231430u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_231434:
    // 0x231434: 0x8e050100  lw          $a1, 0x100($s0)
    ctx->pc = 0x231434u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
label_231438:
    // 0x231438: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x231438u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_23143c:
    // 0x23143c: 0xc040c00  jal         func_103000
label_231440:
    if (ctx->pc == 0x231440u) {
        ctx->pc = 0x231444u;
        goto label_231444;
    }
    ctx->pc = 0x23143Cu;
    SET_GPR_U32(ctx, 31, 0x231444u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x231444u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x231444u) { return; }
    ctx->pc = 0x231444u;
label_231444:
    // 0x231444: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x231444u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_231448:
    // 0x231448: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x231448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23144c:
    // 0x23144c: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x23144cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_231450:
    // 0x231450: 0xa0640029  sb          $a0, 0x29($v1)
    ctx->pc = 0x231450u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 41), (uint8_t)GPR_U32(ctx, 4));
label_231454:
    // 0x231454: 0x3c043fc9  lui         $a0, 0x3FC9
    ctx->pc = 0x231454u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16329 << 16));
label_231458:
    // 0x231458: 0x34820fdb  ori         $v0, $a0, 0xFDB
    ctx->pc = 0x231458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4059);
label_23145c:
    // 0x23145c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23145cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_231460:
    // 0x231460: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x231460u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_231464:
    // 0x231464: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x231464u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
label_231468:
    // 0x231468: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x231468u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_23146c:
    // 0x23146c: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x23146cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
label_231470:
    // 0x231470: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x231470u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_231474:
    // 0x231474: 0x8fa501d8  lw          $a1, 0x1D8($sp)
    ctx->pc = 0x231474u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
label_231478:
    // 0x231478: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x231478u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23147c:
    // 0x23147c: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x23147cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_231480:
    // 0x231480: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x231480u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_231484:
    // 0x231484: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x231484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_231488:
    // 0x231488: 0xe4800014  swc1        $f0, 0x14($a0)
    ctx->pc = 0x231488u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
label_23148c:
    // 0x23148c: 0xc6010030  lwc1        $f1, 0x30($s0)
    ctx->pc = 0x23148cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_231490:
    // 0x231490: 0xe7a10110  swc1        $f1, 0x110($sp)
    ctx->pc = 0x231490u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_231494:
    // 0x231494: 0xc6000034  lwc1        $f0, 0x34($s0)
    ctx->pc = 0x231494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_231498:
    // 0x231498: 0xe7a00114  swc1        $f0, 0x114($sp)
    ctx->pc = 0x231498u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
label_23149c:
    // 0x23149c: 0xc6000038  lwc1        $f0, 0x38($s0)
    ctx->pc = 0x23149cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2314a0:
    // 0x2314a0: 0xe7a00118  swc1        $f0, 0x118($sp)
    ctx->pc = 0x2314a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_2314a4:
    // 0x2314a4: 0xc601003c  lwc1        $f1, 0x3C($s0)
    ctx->pc = 0x2314a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2314a8:
    // 0x2314a8: 0xe7a1011c  swc1        $f1, 0x11C($sp)
    ctx->pc = 0x2314a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
label_2314ac:
    // 0x2314ac: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x2314acu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_2314b0:
    // 0x2314b0: 0xc040cbc  jal         func_1032F0
label_2314b4:
    if (ctx->pc == 0x2314B4u) {
        ctx->pc = 0x2314B8u;
        goto label_2314b8;
    }
    ctx->pc = 0x2314B0u;
    SET_GPR_U32(ctx, 31, 0x2314B8u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x2314B8u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2314B8u) { return; }
    ctx->pc = 0x2314B8u;
label_2314b8:
    // 0x2314b8: 0xc7a00110  lwc1        $f0, 0x110($sp)
    ctx->pc = 0x2314b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2314bc:
    // 0x2314bc: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x2314bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
label_2314c0:
    // 0x2314c0: 0xc7a10114  lwc1        $f1, 0x114($sp)
    ctx->pc = 0x2314c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2314c4:
    // 0x2314c4: 0xe6010034  swc1        $f1, 0x34($s0)
    ctx->pc = 0x2314c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
label_2314c8:
    // 0x2314c8: 0xc7a00118  lwc1        $f0, 0x118($sp)
    ctx->pc = 0x2314c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2314cc:
    // 0x2314cc: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x2314ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
label_2314d0:
    // 0x2314d0: 0xc7ac011c  lwc1        $f12, 0x11C($sp)
    ctx->pc = 0x2314d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2314d4:
    // 0x2314d4: 0xe60c003c  swc1        $f12, 0x3C($s0)
    ctx->pc = 0x2314d4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
label_2314d8:
    // 0x2314d8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2314d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2314dc:
    // 0x2314dc: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2314dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_2314e0:
    // 0x2314e0: 0xe44c0000  swc1        $f12, 0x0($v0)
    ctx->pc = 0x2314e0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_2314e4:
    // 0x2314e4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2314e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2314e8:
    // 0x2314e8: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2314e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_2314ec:
    // 0x2314ec: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2314ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_2314f0:
    // 0x2314f0: 0x3c044120  lui         $a0, 0x4120
    ctx->pc = 0x2314f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16672 << 16));
label_2314f4:
    // 0x2314f4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2314f4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2314f8:
    // 0x2314f8: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x2314f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_2314fc:
    // 0x2314fc: 0xe4a00018  swc1        $f0, 0x18($a1)
    ctx->pc = 0x2314fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 24), bits); }
label_231500:
    // 0x231500: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x231500u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_231504:
    // 0x231504: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x231504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_231508:
    // 0x231508: 0xe440001c  swc1        $f0, 0x1C($v0)
    ctx->pc = 0x231508u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
label_23150c:
    // 0x23150c: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x23150cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_231510:
    // 0x231510: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x231510u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_231514:
    // 0x231514: 0xa4a40030  sh          $a0, 0x30($a1)
    ctx->pc = 0x231514u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 48), (uint16_t)GPR_U32(ctx, 4));
label_231518:
    // 0x231518: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x231518u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
label_23151c:
    // 0x23151c: 0x34620fdb  ori         $v0, $v1, 0xFDB
    ctx->pc = 0x23151cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_231520:
    // 0x231520: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x231520u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_231524:
    // 0x231524: 0x0  nop
    ctx->pc = 0x231524u;
    // NOP
label_231528:
    // 0x231528: 0xe7a001c0  swc1        $f0, 0x1C0($sp)
    ctx->pc = 0x231528u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 448), bits); }
label_23152c:
    // 0x23152c: 0x3c054049  lui         $a1, 0x4049
    ctx->pc = 0x23152cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16457 << 16));
label_231530:
    // 0x231530: 0x34a40fdb  ori         $a0, $a1, 0xFDB
    ctx->pc = 0x231530u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4059);
label_231534:
    // 0x231534: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x231534u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_231538:
    // 0x231538: 0x0  nop
    ctx->pc = 0x231538u;
    // NOP
label_23153c:
    // 0x23153c: 0xe7a001c4  swc1        $f0, 0x1C4($sp)
    ctx->pc = 0x23153cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 452), bits); }
label_231540:
    // 0x231540: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x231540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_231544:
    // 0x231544: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x231544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_231548:
    // 0x231548: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x231548u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_23154c:
    // 0x23154c: 0xc44c0008  lwc1        $f12, 0x8($v0)
    ctx->pc = 0x23154cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_231550:
    // 0x231550: 0xc46d000c  lwc1        $f13, 0xC($v1)
    ctx->pc = 0x231550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_231554:
    // 0x231554: 0x26650030  addiu       $a1, $s3, 0x30
    ctx->pc = 0x231554u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
label_231558:
    // 0x231558: 0xc7ae01c0  lwc1        $f14, 0x1C0($sp)
    ctx->pc = 0x231558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_23155c:
    // 0x23155c: 0xc7af01c0  lwc1        $f15, 0x1C0($sp)
    ctx->pc = 0x23155cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_231560:
    // 0x231560: 0x27a601b8  addiu       $a2, $sp, 0x1B8
    ctx->pc = 0x231560u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 440));
label_231564:
    // 0x231564: 0x27a701bc  addiu       $a3, $sp, 0x1BC
    ctx->pc = 0x231564u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 444));
label_231568:
    // 0x231568: 0xc05c968  jal         func_1725A0
label_23156c:
    if (ctx->pc == 0x23156Cu) {
        ctx->pc = 0x231570u;
        goto label_231570;
    }
    ctx->pc = 0x231568u;
    SET_GPR_U32(ctx, 31, 0x231570u);
    ctx->pc = 0x1725A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1725A0u, 0x231568u, 0x231570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231570u;
label_231570:
    // 0x231570: 0x26060150  addiu       $a2, $s0, 0x150
    ctx->pc = 0x231570u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_231574:
    // 0x231574: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x231574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_231578:
    // 0x231578: 0xc7a001b8  lwc1        $f0, 0x1B8($sp)
    ctx->pc = 0x231578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_23157c:
    // 0x23157c: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x23157cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_231580:
    // 0x231580: 0xc058fec  jal         func_163FB0
label_231584:
    if (ctx->pc == 0x231584u) {
        ctx->pc = 0x231588u;
        goto label_231588;
    }
    ctx->pc = 0x231580u;
    SET_GPR_U32(ctx, 31, 0x231588u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x231580u, 0x231588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231588u;
label_231588:
    // 0x231588: 0x26070150  addiu       $a3, $s0, 0x150
    ctx->pc = 0x231588u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_23158c:
    // 0x23158c: 0xe4e00008  swc1        $f0, 0x8($a3)
    ctx->pc = 0x23158cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
label_231590:
    // 0x231590: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x231590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_231594:
    // 0x231594: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x231594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_231598:
    // 0x231598: 0xc7a001bc  lwc1        $f0, 0x1BC($sp)
    ctx->pc = 0x231598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_23159c:
    // 0x23159c: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x23159cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2315a0:
    // 0x2315a0: 0xc058fec  jal         func_163FB0
label_2315a4:
    if (ctx->pc == 0x2315A4u) {
        ctx->pc = 0x2315A8u;
        goto label_2315a8;
    }
    ctx->pc = 0x2315A0u;
    SET_GPR_U32(ctx, 31, 0x2315A8u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2315A0u, 0x2315A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2315A8u;
label_2315a8:
    // 0x2315a8: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x2315a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_2315ac:
    // 0x2315ac: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x2315acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_2315b0:
    // 0x2315b0: 0x8fa301d8  lw          $v1, 0x1D8($sp)
    ctx->pc = 0x2315b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
label_2315b4:
    // 0x2315b4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2315b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_2315b8:
    // 0x2315b8: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x2315b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_2315bc:
    // 0x2315bc: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x2315bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
label_2315c0:
    // 0x2315c0: 0xac620030  sw          $v0, 0x30($v1)
    ctx->pc = 0x2315c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 2));
label_2315c4:
    // 0x2315c4: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x2315c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
label_2315c8:
    // 0x2315c8: 0x2492ac90  addiu       $s2, $a0, -0x5370
    ctx->pc = 0x2315c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945936));
label_2315cc:
    // 0x2315cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2315ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2315d0:
    // 0x2315d0: 0xa2420001  sb          $v0, 0x1($s2)
    ctx->pc = 0x2315d0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 2));
label_2315d4:
    // 0x2315d4: 0x3c044448  lui         $a0, 0x4448
    ctx->pc = 0x2315d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17480 << 16));
label_2315d8:
    // 0x2315d8: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x2315d8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2315dc:
    // 0x2315dc: 0x0  nop
    ctx->pc = 0x2315dcu;
    // NOP
label_2315e0:
    // 0x2315e0: 0xe64c000c  swc1        $f12, 0xC($s2)
    ctx->pc = 0x2315e0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
label_2315e4:
    // 0x2315e4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2315e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_2315e8:
    // 0x2315e8: 0x8c251a58  lw          $a1, 0x1A58($at)
    ctx->pc = 0x2315e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6744)));
label_2315ec:
    // 0x2315ec: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x2315ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
label_2315f0:
    // 0x2315f0: 0x34827fff  ori         $v0, $a0, 0x7FFF
    ctx->pc = 0x2315f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32767);
label_2315f4:
    // 0x2315f4: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x2315f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
label_2315f8:
    // 0x2315f8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2315f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_2315fc:
    // 0x2315fc: 0xac251a58  sw          $a1, 0x1A58($at)
    ctx->pc = 0x2315fcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6744), GPR_U32(ctx, 5));
label_231600:
    // 0x231600: 0x8fa201d8  lw          $v0, 0x1D8($sp)
    ctx->pc = 0x231600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
label_231604:
    // 0x231604: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x231604u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_231608:
    // 0x231608: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x231608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_23160c:
    // 0x23160c: 0x3c05fffb  lui         $a1, 0xFFFB
    ctx->pc = 0x23160cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65531 << 16));
label_231610:
    // 0x231610: 0x34a4ffff  ori         $a0, $a1, 0xFFFF
    ctx->pc = 0x231610u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
label_231614:
    // 0x231614: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x231614u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_231618:
    // 0x231618: 0xac620030  sw          $v0, 0x30($v1)
    ctx->pc = 0x231618u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 2));
label_23161c:
    // 0x23161c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x23161cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_231620:
    // 0x231620: 0xc040cbc  jal         func_1032F0
label_231624:
    if (ctx->pc == 0x231624u) {
        ctx->pc = 0x231628u;
        goto label_231628;
    }
    ctx->pc = 0x231620u;
    SET_GPR_U32(ctx, 31, 0x231628u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x231628u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x231628u) { return; }
    ctx->pc = 0x231628u;
label_231628:
    // 0x231628: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x231628u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_23162c:
    // 0x23162c: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x23162cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_231630:
    // 0x231630: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x231630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_231634:
    // 0x231634: 0x3c023f1c  lui         $v0, 0x3F1C
    ctx->pc = 0x231634u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16156 << 16));
label_231638:
    // 0x231638: 0x345661aa  ori         $s6, $v0, 0x61AA
    ctx->pc = 0x231638u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)25002);
label_23163c:
    // 0x23163c: 0x44960000  mtc1        $s6, $f0
    ctx->pc = 0x23163cu;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_231640:
    // 0x231640: 0x0  nop
    ctx->pc = 0x231640u;
    // NOP
label_231644:
    // 0x231644: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x231644u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_231648:
    // 0x231648: 0xc058fec  jal         func_163FB0
label_23164c:
    if (ctx->pc == 0x23164Cu) {
        ctx->pc = 0x231650u;
        goto label_231650;
    }
    ctx->pc = 0x231648u;
    SET_GPR_U32(ctx, 31, 0x231650u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x231648u, 0x231650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231650u;
label_231650:
    // 0x231650: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x231650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_231654:
    // 0x231654: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x231654u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_231658:
    // 0x231658: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x231658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_23165c:
    // 0x23165c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x23165cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_231660:
    // 0x231660: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x231660u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_231664:
    // 0x231664: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x231664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_231668:
    // 0x231668: 0xc040ce4  jal         func_103390
label_23166c:
    if (ctx->pc == 0x23166Cu) {
        ctx->pc = 0x231670u;
        goto label_231670;
    }
    ctx->pc = 0x231668u;
    SET_GPR_U32(ctx, 31, 0x231670u);
    ctx->pc = 0x103390u;
    {
        ctx->pc = 0x231670u;
        ps2_stubs::sceVu0RotMatrixZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x231670u) { return; }
    ctx->pc = 0x231670u;
label_231670:
    // 0x231670: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x231670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_231674:
    // 0x231674: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x231674u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_231678:
    // 0x231678: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x231678u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_23167c:
    // 0x23167c: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x23167cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_231680:
    // 0x231680: 0xc44c0004  lwc1        $f12, 0x4($v0)
    ctx->pc = 0x231680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_231684:
    // 0x231684: 0xc040d0e  jal         func_103438
label_231688:
    if (ctx->pc == 0x231688u) {
        ctx->pc = 0x23168Cu;
        goto label_23168c;
    }
    ctx->pc = 0x231684u;
    SET_GPR_U32(ctx, 31, 0x23168Cu);
    ctx->pc = 0x103438u;
    {
        ctx->pc = 0x23168Cu;
        ps2_stubs::sceVu0RotMatrixX(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x23168Cu) { return; }
    ctx->pc = 0x23168Cu;
label_23168c:
    // 0x23168c: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x23168cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_231690:
    // 0x231690: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x231690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_231694:
    // 0x231694: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x231694u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_231698:
    // 0x231698: 0xc46c0008  lwc1        $f12, 0x8($v1)
    ctx->pc = 0x231698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_23169c:
    // 0x23169c: 0xc44d000c  lwc1        $f13, 0xC($v0)
    ctx->pc = 0x23169cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_2316a0:
    // 0x2316a0: 0x26650030  addiu       $a1, $s3, 0x30
    ctx->pc = 0x2316a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
label_2316a4:
    // 0x2316a4: 0xc7ae01c0  lwc1        $f14, 0x1C0($sp)
    ctx->pc = 0x2316a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_2316a8:
    // 0x2316a8: 0xc7af01c4  lwc1        $f15, 0x1C4($sp)
    ctx->pc = 0x2316a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 452)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_2316ac:
    // 0x2316ac: 0x27a601b8  addiu       $a2, $sp, 0x1B8
    ctx->pc = 0x2316acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 440));
label_2316b0:
    // 0x2316b0: 0x27a701bc  addiu       $a3, $sp, 0x1BC
    ctx->pc = 0x2316b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 444));
label_2316b4:
    // 0x2316b4: 0xc05c968  jal         func_1725A0
label_2316b8:
    if (ctx->pc == 0x2316B8u) {
        ctx->pc = 0x2316BCu;
        goto label_2316bc;
    }
    ctx->pc = 0x2316B4u;
    SET_GPR_U32(ctx, 31, 0x2316BCu);
    ctx->pc = 0x1725A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1725A0u, 0x2316B4u, 0x2316BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2316BCu;
label_2316bc:
    // 0x2316bc: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x2316bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_2316c0:
    // 0x2316c0: 0x8482002c  lh          $v0, 0x2C($a0)
    ctx->pc = 0x2316c0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 44)));
label_2316c4:
    // 0x2316c4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_2316c8:
    if (ctx->pc == 0x2316C8u) {
        ctx->pc = 0x2316CCu;
        goto label_2316cc;
    }
    ctx->pc = 0x2316C4u;
    {
        const bool branch_taken_0x2316c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2316c4) {
            ctx->pc = 0x2316F4u;
            goto label_2316f4;
        }
    }
    ctx->pc = 0x2316CCu;
label_2316cc:
    // 0x2316cc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2316ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2316d0:
    // 0x2316d0: 0x0  nop
    ctx->pc = 0x2316d0u;
    // NOP
label_2316d4:
    // 0x2316d4: 0xe7a001b8  swc1        $f0, 0x1B8($sp)
    ctx->pc = 0x2316d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 440), bits); }
label_2316d8:
    // 0x2316d8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2316d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2316dc:
    // 0x2316dc: 0x0  nop
    ctx->pc = 0x2316dcu;
    // NOP
label_2316e0:
    // 0x2316e0: 0xe7a001bc  swc1        $f0, 0x1BC($sp)
    ctx->pc = 0x2316e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 444), bits); }
label_2316e4:
    // 0x2316e4: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2316e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_2316e8:
    // 0x2316e8: 0x8444002c  lh          $a0, 0x2C($v0)
    ctx->pc = 0x2316e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 44)));
label_2316ec:
    // 0x2316ec: 0x2485ffff  addiu       $a1, $a0, -0x1
    ctx->pc = 0x2316ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_2316f0:
    // 0x2316f0: 0xa445002c  sh          $a1, 0x2C($v0)
    ctx->pc = 0x2316f0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 44), (uint16_t)GPR_U32(ctx, 5));
label_2316f4:
    // 0x2316f4: 0x26640030  addiu       $a0, $s3, 0x30
    ctx->pc = 0x2316f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
label_2316f8:
    // 0x2316f8: 0x26020030  addiu       $v0, $s0, 0x30
    ctx->pc = 0x2316f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_2316fc:
    // 0x2316fc: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x2316fcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_231700:
    // 0x231700: 0xc067594  jal         func_19D650
label_231704:
    if (ctx->pc == 0x231704u) {
        ctx->pc = 0x231708u;
        goto label_231708;
    }
    ctx->pc = 0x231700u;
    SET_GPR_U32(ctx, 31, 0x231708u);
    ctx->pc = 0x19D650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D650u, 0x231700u, 0x231708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231708u;
label_231708:
    // 0x231708: 0xe7a001c8  swc1        $f0, 0x1C8($sp)
    ctx->pc = 0x231708u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 456), bits); }
label_23170c:
    // 0x23170c: 0xc7a101c8  lwc1        $f1, 0x1C8($sp)
    ctx->pc = 0x23170cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_231710:
    // 0x231710: 0x3c0544bb  lui         $a1, 0x44BB
    ctx->pc = 0x231710u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17595 << 16));
label_231714:
    // 0x231714: 0x34a48000  ori         $a0, $a1, 0x8000
    ctx->pc = 0x231714u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32768);
label_231718:
    // 0x231718: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x231718u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23171c:
    // 0x23171c: 0x0  nop
    ctx->pc = 0x23171cu;
    // NOP
label_231720:
    // 0x231720: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x231720u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_231724:
    // 0x231724: 0x0  nop
    ctx->pc = 0x231724u;
    // NOP
label_231728:
    // 0x231728: 0x4500000e  bc1f        . + 4 + (0xE << 2)
label_23172c:
    if (ctx->pc == 0x23172Cu) {
        ctx->pc = 0x231730u;
        goto label_231730;
    }
    ctx->pc = 0x231728u;
    {
        const bool branch_taken_0x231728 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x231728) {
            ctx->pc = 0x231764u;
            goto label_231764;
        }
    }
    ctx->pc = 0x231730u;
label_231730:
    // 0x231730: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x231730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_231734:
    // 0x231734: 0x8442002c  lh          $v0, 0x2C($v0)
    ctx->pc = 0x231734u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 44)));
label_231738:
    // 0x231738: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_23173c:
    if (ctx->pc == 0x23173Cu) {
        ctx->pc = 0x231740u;
        goto label_231740;
    }
    ctx->pc = 0x231738u;
    {
        const bool branch_taken_0x231738 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x231738) {
            ctx->pc = 0x231764u;
            goto label_231764;
        }
    }
    ctx->pc = 0x231740u;
label_231740:
    // 0x231740: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x231740u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_231744:
    // 0x231744: 0x0  nop
    ctx->pc = 0x231744u;
    // NOP
label_231748:
    // 0x231748: 0xe7a001b8  swc1        $f0, 0x1B8($sp)
    ctx->pc = 0x231748u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 440), bits); }
label_23174c:
    // 0x23174c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23174cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_231750:
    // 0x231750: 0x0  nop
    ctx->pc = 0x231750u;
    // NOP
label_231754:
    // 0x231754: 0xe7a001bc  swc1        $f0, 0x1BC($sp)
    ctx->pc = 0x231754u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 444), bits); }
label_231758:
    // 0x231758: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x231758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_23175c:
    // 0x23175c: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x23175cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_231760:
    // 0x231760: 0xa482002c  sh          $v0, 0x2C($a0)
    ctx->pc = 0x231760u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 44), (uint16_t)GPR_U32(ctx, 2));
label_231764:
    // 0x231764: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x231764u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_231768:
    // 0x231768: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x231768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_23176c:
    // 0x23176c: 0xc7a001b8  lwc1        $f0, 0x1B8($sp)
    ctx->pc = 0x23176cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_231770:
    // 0x231770: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x231770u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_231774:
    // 0x231774: 0xc058fec  jal         func_163FB0
label_231778:
    if (ctx->pc == 0x231778u) {
        ctx->pc = 0x23177Cu;
        goto label_23177c;
    }
    ctx->pc = 0x231774u;
    SET_GPR_U32(ctx, 31, 0x23177Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x231774u, 0x23177Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23177Cu;
label_23177c:
    // 0x23177c: 0x26060150  addiu       $a2, $s0, 0x150
    ctx->pc = 0x23177cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_231780:
    // 0x231780: 0xe4c00008  swc1        $f0, 0x8($a2)
    ctx->pc = 0x231780u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
label_231784:
    // 0x231784: 0xc7a001b8  lwc1        $f0, 0x1B8($sp)
    ctx->pc = 0x231784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_231788:
    // 0x231788: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x231788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_23178c:
    // 0x23178c: 0xe440001c  swc1        $f0, 0x1C($v0)
    ctx->pc = 0x23178cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
label_231790:
    // 0x231790: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x231790u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_231794:
    // 0x231794: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x231794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_231798:
    // 0x231798: 0xc7a001bc  lwc1        $f0, 0x1BC($sp)
    ctx->pc = 0x231798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_23179c:
    // 0x23179c: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x23179cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2317a0:
    // 0x2317a0: 0xc058fec  jal         func_163FB0
label_2317a4:
    if (ctx->pc == 0x2317A4u) {
        ctx->pc = 0x2317A8u;
        goto label_2317a8;
    }
    ctx->pc = 0x2317A0u;
    SET_GPR_U32(ctx, 31, 0x2317A8u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2317A0u, 0x2317A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2317A8u;
label_2317a8:
    // 0x2317a8: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2317a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_2317ac:
    // 0x2317ac: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x2317acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_2317b0:
    // 0x2317b0: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x2317b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_2317b4:
    // 0x2317b4: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x2317b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2317b8:
    // 0x2317b8: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x2317b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
label_2317bc:
    // 0x2317bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2317bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2317c0:
    // 0x2317c0: 0x0  nop
    ctx->pc = 0x2317c0u;
    // NOP
label_2317c4:
    // 0x2317c4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2317c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2317c8:
    // 0x2317c8: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x2317c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
label_2317cc:
    // 0x2317cc: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x2317ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_2317d0:
    // 0x2317d0: 0xc4810018  lwc1        $f1, 0x18($a0)
    ctx->pc = 0x2317d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2317d4:
    // 0x2317d4: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x2317d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_2317d8:
    // 0x2317d8: 0xc4a00020  lwc1        $f0, 0x20($a1)
    ctx->pc = 0x2317d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2317dc:
    // 0x2317dc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2317dcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2317e0:
    // 0x2317e0: 0x0  nop
    ctx->pc = 0x2317e0u;
    // NOP
label_2317e4:
    // 0x2317e4: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_2317e8:
    if (ctx->pc == 0x2317E8u) {
        ctx->pc = 0x2317ECu;
        goto label_2317ec;
    }
    ctx->pc = 0x2317E4u;
    {
        const bool branch_taken_0x2317e4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2317e4) {
            ctx->pc = 0x2317FCu;
            goto label_2317fc;
        }
    }
    ctx->pc = 0x2317ECu;
label_2317ec:
    // 0x2317ec: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2317ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_2317f0:
    // 0x2317f0: 0xc4400020  lwc1        $f0, 0x20($v0)
    ctx->pc = 0x2317f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2317f4:
    // 0x2317f4: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x2317f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_2317f8:
    // 0x2317f8: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x2317f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
label_2317fc:
    // 0x2317fc: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x2317fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_231800:
    // 0x231800: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x231800u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_231804:
    // 0x231804: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x231804u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_231808:
    // 0x231808: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x231808u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
label_23180c:
    // 0x23180c: 0x27a600d0  addiu       $a2, $sp, 0xD0
    ctx->pc = 0x23180cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_231810:
    // 0x231810: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x231810u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_231814:
    // 0x231814: 0xc040cbc  jal         func_1032F0
label_231818:
    if (ctx->pc == 0x231818u) {
        ctx->pc = 0x23181Cu;
        goto label_23181c;
    }
    ctx->pc = 0x231814u;
    SET_GPR_U32(ctx, 31, 0x23181Cu);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x23181Cu;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x23181Cu) { return; }
    ctx->pc = 0x23181Cu;
label_23181c:
    // 0x23181c: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x23181cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_231820:
    // 0x231820: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x231820u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_231824:
    // 0x231824: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x231824u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_231828:
    // 0x231828: 0xc44c000c  lwc1        $f12, 0xC($v0)
    ctx->pc = 0x231828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_23182c:
    // 0x23182c: 0xc040d0e  jal         func_103438
label_231830:
    if (ctx->pc == 0x231830u) {
        ctx->pc = 0x231834u;
        goto label_231834;
    }
    ctx->pc = 0x23182Cu;
    SET_GPR_U32(ctx, 31, 0x231834u);
    ctx->pc = 0x103438u;
    {
        ctx->pc = 0x231834u;
        ps2_stubs::sceVu0RotMatrixX(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x231834u) { return; }
    ctx->pc = 0x231834u;
label_231834:
    // 0x231834: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x231834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_231838:
    // 0x231838: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x231838u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_23183c:
    // 0x23183c: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x23183cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_231840:
    // 0x231840: 0xc44c0008  lwc1        $f12, 0x8($v0)
    ctx->pc = 0x231840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_231844:
    // 0x231844: 0xc040d38  jal         func_1034E0
label_231848:
    if (ctx->pc == 0x231848u) {
        ctx->pc = 0x23184Cu;
        goto label_23184c;
    }
    ctx->pc = 0x231844u;
    SET_GPR_U32(ctx, 31, 0x23184Cu);
    ctx->pc = 0x1034E0u;
    {
        ctx->pc = 0x23184Cu;
        ps2_stubs::sceVu0RotMatrixY(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x23184Cu) { return; }
    ctx->pc = 0x23184Cu;
label_23184c:
    // 0x23184c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23184cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_231850:
    // 0x231850: 0x0  nop
    ctx->pc = 0x231850u;
    // NOP
label_231854:
    // 0x231854: 0xe7a00110  swc1        $f0, 0x110($sp)
    ctx->pc = 0x231854u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_231858:
    // 0x231858: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x231858u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23185c:
    // 0x23185c: 0x0  nop
    ctx->pc = 0x23185cu;
    // NOP
label_231860:
    // 0x231860: 0xe7a00114  swc1        $f0, 0x114($sp)
    ctx->pc = 0x231860u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
label_231864:
    // 0x231864: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x231864u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_231868:
    // 0x231868: 0xc4800018  lwc1        $f0, 0x18($a0)
    ctx->pc = 0x231868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_23186c:
    // 0x23186c: 0xe7a00118  swc1        $f0, 0x118($sp)
    ctx->pc = 0x23186cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_231870:
    // 0x231870: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x231870u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_231874:
    // 0x231874: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x231874u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_231878:
    // 0x231878: 0x0  nop
    ctx->pc = 0x231878u;
    // NOP
label_23187c:
    // 0x23187c: 0xe7a0011c  swc1        $f0, 0x11C($sp)
    ctx->pc = 0x23187cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
label_231880:
    // 0x231880: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x231880u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_231884:
    // 0x231884: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x231884u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_231888:
    // 0x231888: 0x27a60110  addiu       $a2, $sp, 0x110
    ctx->pc = 0x231888u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_23188c:
    // 0x23188c: 0xc040bf4  jal         func_102FD0
label_231890:
    if (ctx->pc == 0x231890u) {
        ctx->pc = 0x231894u;
        goto label_231894;
    }
    ctx->pc = 0x23188Cu;
    SET_GPR_U32(ctx, 31, 0x231894u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x231894u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x231894u) { return; }
    ctx->pc = 0x231894u;
label_231894:
    // 0x231894: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x231894u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_231898:
    // 0x231898: 0xc6010030  lwc1        $f1, 0x30($s0)
    ctx->pc = 0x231898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_23189c:
    // 0x23189c: 0xc7a00110  lwc1        $f0, 0x110($sp)
    ctx->pc = 0x23189cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2318a0:
    // 0x2318a0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2318a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2318a4:
    // 0x2318a4: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x2318a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
label_2318a8:
    // 0x2318a8: 0xc6010034  lwc1        $f1, 0x34($s0)
    ctx->pc = 0x2318a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2318ac:
    // 0x2318ac: 0xc7a00114  lwc1        $f0, 0x114($sp)
    ctx->pc = 0x2318acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2318b0:
    // 0x2318b0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2318b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2318b4:
    // 0x2318b4: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x2318b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
label_2318b8:
    // 0x2318b8: 0xc6010038  lwc1        $f1, 0x38($s0)
    ctx->pc = 0x2318b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2318bc:
    // 0x2318bc: 0xc7a00118  lwc1        $f0, 0x118($sp)
    ctx->pc = 0x2318bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2318c0:
    // 0x2318c0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2318c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2318c4:
    // 0x2318c4: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x2318c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
label_2318c8:
    // 0x2318c8: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x2318c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_2318cc:
    // 0x2318cc: 0xc05cfdc  jal         func_173F70
label_2318d0:
    if (ctx->pc == 0x2318D0u) {
        ctx->pc = 0x2318D4u;
        goto label_2318d4;
    }
    ctx->pc = 0x2318CCu;
    SET_GPR_U32(ctx, 31, 0x2318D4u);
    ctx->pc = 0x173F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173F70u, 0x2318CCu, 0x2318D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2318D4u;
label_2318d4:
    // 0x2318d4: 0xc6020034  lwc1        $f2, 0x34($s0)
    ctx->pc = 0x2318d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2318d8:
    // 0x2318d8: 0x3c0643fa  lui         $a2, 0x43FA
    ctx->pc = 0x2318d8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17402 << 16));
label_2318dc:
    // 0x2318dc: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x2318dcu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2318e0:
    // 0x2318e0: 0x0  nop
    ctx->pc = 0x2318e0u;
    // NOP
label_2318e4:
    // 0x2318e4: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x2318e4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_2318e8:
    // 0x2318e8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2318e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2318ec:
    // 0x2318ec: 0x0  nop
    ctx->pc = 0x2318ecu;
    // NOP
label_2318f0:
    // 0x2318f0: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_2318f4:
    if (ctx->pc == 0x2318F4u) {
        ctx->pc = 0x2318F8u;
        goto label_2318f8;
    }
    ctx->pc = 0x2318F0u;
    {
        const bool branch_taken_0x2318f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2318f0) {
            ctx->pc = 0x23190Cu;
            goto label_23190c;
        }
    }
    ctx->pc = 0x2318F8u;
label_2318f8:
    // 0x2318f8: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x2318f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_2318fc:
    // 0x2318fc: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x2318fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_231900:
    // 0x231900: 0xc6000034  lwc1        $f0, 0x34($s0)
    ctx->pc = 0x231900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_231904:
    // 0x231904: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x231904u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_231908:
    // 0x231908: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x231908u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
label_23190c:
    // 0x23190c: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x23190cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_231910:
    // 0x231910: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x231910u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_231914:
    // 0x231914: 0xc05d00c  jal         func_174030
label_231918:
    if (ctx->pc == 0x231918u) {
        ctx->pc = 0x23191Cu;
        goto label_23191c;
    }
    ctx->pc = 0x231914u;
    SET_GPR_U32(ctx, 31, 0x23191Cu);
    ctx->pc = 0x174030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174030u, 0x231914u, 0x23191Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23191Cu;
label_23191c:
    // 0x23191c: 0xc6020034  lwc1        $f2, 0x34($s0)
    ctx->pc = 0x23191cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_231920:
    // 0x231920: 0x3c03447a  lui         $v1, 0x447A
    ctx->pc = 0x231920u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17530 << 16));
label_231924:
    // 0x231924: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x231924u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_231928:
    // 0x231928: 0x0  nop
    ctx->pc = 0x231928u;
    // NOP
label_23192c:
    // 0x23192c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x23192cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_231930:
    // 0x231930: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x231930u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_231934:
    // 0x231934: 0x0  nop
    ctx->pc = 0x231934u;
    // NOP
label_231938:
    // 0x231938: 0x4500000d  bc1f        . + 4 + (0xD << 2)
label_23193c:
    if (ctx->pc == 0x23193Cu) {
        ctx->pc = 0x231940u;
        goto label_231940;
    }
    ctx->pc = 0x231938u;
    {
        const bool branch_taken_0x231938 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x231938) {
            ctx->pc = 0x231970u;
            goto label_231970;
        }
    }
    ctx->pc = 0x231940u;
label_231940:
    // 0x231940: 0xc6010030  lwc1        $f1, 0x30($s0)
    ctx->pc = 0x231940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_231944:
    // 0x231944: 0xc7a00110  lwc1        $f0, 0x110($sp)
    ctx->pc = 0x231944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_231948:
    // 0x231948: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x231948u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_23194c:
    // 0x23194c: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x23194cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
label_231950:
    // 0x231950: 0xc6010034  lwc1        $f1, 0x34($s0)
    ctx->pc = 0x231950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_231954:
    // 0x231954: 0xc7a00114  lwc1        $f0, 0x114($sp)
    ctx->pc = 0x231954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_231958:
    // 0x231958: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x231958u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_23195c:
    // 0x23195c: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x23195cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
label_231960:
    // 0x231960: 0xc6010038  lwc1        $f1, 0x38($s0)
    ctx->pc = 0x231960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_231964:
    // 0x231964: 0xc7a00118  lwc1        $f0, 0x118($sp)
    ctx->pc = 0x231964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_231968:
    // 0x231968: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x231968u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_23196c:
    // 0x23196c: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x23196cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
label_231970:
    // 0x231970: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x231970u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_231974:
    // 0x231974: 0xc040cbc  jal         func_1032F0
label_231978:
    if (ctx->pc == 0x231978u) {
        ctx->pc = 0x23197Cu;
        goto label_23197c;
    }
    ctx->pc = 0x231974u;
    SET_GPR_U32(ctx, 31, 0x23197Cu);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x23197Cu;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x23197Cu) { return; }
    ctx->pc = 0x23197Cu;
label_23197c:
    // 0x23197c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x23197cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_231980:
    // 0x231980: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x231980u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_231984:
    // 0x231984: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x231984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_231988:
    // 0x231988: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x231988u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_23198c:
    // 0x23198c: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x23198cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_231990:
    // 0x231990: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x231990u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_231994:
    // 0x231994: 0xc058fec  jal         func_163FB0
label_231998:
    if (ctx->pc == 0x231998u) {
        ctx->pc = 0x23199Cu;
        goto label_23199c;
    }
    ctx->pc = 0x231994u;
    SET_GPR_U32(ctx, 31, 0x23199Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x231994u, 0x23199Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23199Cu;
label_23199c:
    // 0x23199c: 0xe7a001b8  swc1        $f0, 0x1B8($sp)
    ctx->pc = 0x23199cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 440), bits); }
label_2319a0:
    // 0x2319a0: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x2319a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_2319a4:
    // 0x2319a4: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x2319a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_2319a8:
    // 0x2319a8: 0xc7ac01b8  lwc1        $f12, 0x1B8($sp)
    ctx->pc = 0x2319a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2319ac:
    // 0x2319ac: 0xc040d38  jal         func_1034E0
label_2319b0:
    if (ctx->pc == 0x2319B0u) {
        ctx->pc = 0x2319B4u;
        goto label_2319b4;
    }
    ctx->pc = 0x2319ACu;
    SET_GPR_U32(ctx, 31, 0x2319B4u);
    ctx->pc = 0x1034E0u;
    {
        ctx->pc = 0x2319B4u;
        ps2_stubs::sceVu0RotMatrixY(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2319B4u) { return; }
    ctx->pc = 0x2319B4u;
label_2319b4:
    // 0x2319b4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2319b4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2319b8:
    // 0x2319b8: 0xc6000030  lwc1        $f0, 0x30($s0)
    ctx->pc = 0x2319b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2319bc:
    // 0x2319bc: 0xe7a00110  swc1        $f0, 0x110($sp)
    ctx->pc = 0x2319bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_2319c0:
    // 0x2319c0: 0xc6000034  lwc1        $f0, 0x34($s0)
    ctx->pc = 0x2319c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2319c4:
    // 0x2319c4: 0xe7a00114  swc1        $f0, 0x114($sp)
    ctx->pc = 0x2319c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
label_2319c8:
    // 0x2319c8: 0xc6000038  lwc1        $f0, 0x38($s0)
    ctx->pc = 0x2319c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2319cc:
    // 0x2319cc: 0xe7a00118  swc1        $f0, 0x118($sp)
    ctx->pc = 0x2319ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_2319d0:
    // 0x2319d0: 0xc600003c  lwc1        $f0, 0x3C($s0)
    ctx->pc = 0x2319d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2319d4:
    // 0x2319d4: 0xe7a0011c  swc1        $f0, 0x11C($sp)
    ctx->pc = 0x2319d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
label_2319d8:
    // 0x2319d8: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x2319d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_2319dc:
    // 0x2319dc: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x2319dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_2319e0:
    // 0x2319e0: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x2319e0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_2319e4:
    // 0x2319e4: 0xc040c00  jal         func_103000
label_2319e8:
    if (ctx->pc == 0x2319E8u) {
        ctx->pc = 0x2319ECu;
        goto label_2319ec;
    }
    ctx->pc = 0x2319E4u;
    SET_GPR_U32(ctx, 31, 0x2319ECu);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x2319ECu;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2319ECu) { return; }
    ctx->pc = 0x2319ECu;
label_2319ec:
    // 0x2319ec: 0xc7a00110  lwc1        $f0, 0x110($sp)
    ctx->pc = 0x2319ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2319f0:
    // 0x2319f0: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x2319f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_2319f4:
    // 0x2319f4: 0xc7a00114  lwc1        $f0, 0x114($sp)
    ctx->pc = 0x2319f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2319f8:
    // 0x2319f8: 0xe7a00104  swc1        $f0, 0x104($sp)
    ctx->pc = 0x2319f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
label_2319fc:
    // 0x2319fc: 0xc7a00118  lwc1        $f0, 0x118($sp)
    ctx->pc = 0x2319fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_231a00:
    // 0x231a00: 0xe7a00108  swc1        $f0, 0x108($sp)
    ctx->pc = 0x231a00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
label_231a04:
    // 0x231a04: 0xc7a0011c  lwc1        $f0, 0x11C($sp)
    ctx->pc = 0x231a04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_231a08:
    // 0x231a08: 0xe7a0010c  swc1        $f0, 0x10C($sp)
    ctx->pc = 0x231a08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
label_231a0c:
    // 0x231a0c: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x231a0cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_231a10:
    // 0x231a10: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x231a10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_231a14:
    // 0x231a14: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x231a14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_231a18:
    // 0x231a18: 0xc040c00  jal         func_103000
label_231a1c:
    if (ctx->pc == 0x231A1Cu) {
        ctx->pc = 0x231A20u;
        goto label_231a20;
    }
    ctx->pc = 0x231A18u;
    SET_GPR_U32(ctx, 31, 0x231A20u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x231A20u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x231A20u) { return; }
    ctx->pc = 0x231A20u;
label_231a20:
    // 0x231a20: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x231a20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_231a24:
    // 0x231a24: 0x8483002a  lh          $v1, 0x2A($a0)
    ctx->pc = 0x231a24u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 42)));
label_231a28:
    // 0x231a28: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x231a28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_231a2c:
    // 0x231a2c: 0xa482002a  sh          $v0, 0x2A($a0)
    ctx->pc = 0x231a2cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 42), (uint16_t)GPR_U32(ctx, 2));
label_231a30:
    // 0x231a30: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x231a30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_231a34:
    // 0x231a34: 0x8442002a  lh          $v0, 0x2A($v0)
    ctx->pc = 0x231a34u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 42)));
label_231a38:
    // 0x231a38: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_231a3c:
    if (ctx->pc == 0x231A3Cu) {
        ctx->pc = 0x231A40u;
        goto label_231a40;
    }
    ctx->pc = 0x231A38u;
    {
        const bool branch_taken_0x231a38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x231a38) {
            ctx->pc = 0x231A58u;
            goto label_231a58;
        }
    }
    ctx->pc = 0x231A40u;
label_231a40:
    // 0x231a40: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x231a40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_231a44:
    // 0x231a44: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x231a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_231a48:
    // 0x231a48: 0xa0430029  sb          $v1, 0x29($v0)
    ctx->pc = 0x231a48u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 41), (uint8_t)GPR_U32(ctx, 3));
label_231a4c:
    // 0x231a4c: 0x240300b4  addiu       $v1, $zero, 0xB4
    ctx->pc = 0x231a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
label_231a50:
    // 0x231a50: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x231a50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_231a54:
    // 0x231a54: 0xa443002a  sh          $v1, 0x2A($v0)
    ctx->pc = 0x231a54u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 42), (uint16_t)GPR_U32(ctx, 3));
label_231a58:
    // 0x231a58: 0x8fa201d8  lw          $v0, 0x1D8($sp)
    ctx->pc = 0x231a58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
label_231a5c:
    // 0x231a5c: 0x944311f4  lhu         $v1, 0x11F4($v0)
    ctx->pc = 0x231a5cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4596)));
label_231a60:
    // 0x231a60: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x231a60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_231a64:
    // 0x231a64: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x231a64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_231a68:
    // 0x231a68: 0x14830008  bne         $a0, $v1, . + 4 + (0x8 << 2)
label_231a6c:
    if (ctx->pc == 0x231A6Cu) {
        ctx->pc = 0x231A70u;
        goto label_231a70;
    }
    ctx->pc = 0x231A68u;
    {
        const bool branch_taken_0x231a68 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x231a68) {
            ctx->pc = 0x231A8Cu;
            goto label_231a8c;
        }
    }
    ctx->pc = 0x231A70u;
label_231a70:
    // 0x231a70: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x231a70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_231a74:
    // 0x231a74: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x231a74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_231a78:
    // 0x231a78: 0xa0640029  sb          $a0, 0x29($v1)
    ctx->pc = 0x231a78u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 41), (uint8_t)GPR_U32(ctx, 4));
label_231a7c:
    // 0x231a7c: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x231a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
label_231a80:
    // 0x231a80: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x231a80u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_231a84:
    // 0x231a84: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x231a84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_231a88:
    // 0x231a88: 0xe4a00020  swc1        $f0, 0x20($a1)
    ctx->pc = 0x231a88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 32), bits); }
label_231a8c:
    // 0x231a8c: 0x8fa401d8  lw          $a0, 0x1D8($sp)
    ctx->pc = 0x231a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
label_231a90:
    // 0x231a90: 0x948311f4  lhu         $v1, 0x11F4($a0)
    ctx->pc = 0x231a90u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4596)));
label_231a94:
    // 0x231a94: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x231a94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_231a98:
    // 0x231a98: 0x28420010  slti        $v0, $v0, 0x10
    ctx->pc = 0x231a98u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
label_231a9c:
    // 0x231a9c: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
label_231aa0:
    if (ctx->pc == 0x231AA0u) {
        ctx->pc = 0x231AA4u;
        goto label_231aa4;
    }
    ctx->pc = 0x231A9Cu;
    {
        const bool branch_taken_0x231a9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x231a9c) {
            ctx->pc = 0x231AE4u;
            goto label_231ae4;
        }
    }
    ctx->pc = 0x231AA4u;
label_231aa4:
    // 0x231aa4: 0x3c04c248  lui         $a0, 0xC248
    ctx->pc = 0x231aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49736 << 16));
label_231aa8:
    // 0x231aa8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x231aa8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_231aac:
    // 0x231aac: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x231aacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_231ab0:
    // 0x231ab0: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x231ab0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
label_231ab4:
    // 0x231ab4: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x231ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_231ab8:
    // 0x231ab8: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x231ab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_231abc:
    // 0x231abc: 0x3c0440a0  lui         $a0, 0x40A0
    ctx->pc = 0x231abcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16544 << 16));
label_231ac0:
    // 0x231ac0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x231ac0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_231ac4:
    // 0x231ac4: 0x0  nop
    ctx->pc = 0x231ac4u;
    // NOP
label_231ac8:
    // 0x231ac8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x231ac8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_231acc:
    // 0x231acc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x231accu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_231ad0:
    // 0x231ad0: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_231ad4:
    if (ctx->pc == 0x231AD4u) {
        ctx->pc = 0x231AD8u;
        goto label_231ad8;
    }
    ctx->pc = 0x231AD0u;
    {
        const bool branch_taken_0x231ad0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x231ad0) {
            ctx->pc = 0x231ADCu;
            goto label_231adc;
        }
    }
    ctx->pc = 0x231AD8u;
label_231ad8:
    // 0x231ad8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x231ad8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_231adc:
    // 0x231adc: 0x8fa301d8  lw          $v1, 0x1D8($sp)
    ctx->pc = 0x231adcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
label_231ae0:
    // 0x231ae0: 0xa46011f4  sh          $zero, 0x11F4($v1)
    ctx->pc = 0x231ae0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4596), (uint16_t)GPR_U32(ctx, 0));
label_231ae4:
    // 0x231ae4: 0x8fa401d8  lw          $a0, 0x1D8($sp)
    ctx->pc = 0x231ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
label_231ae8:
    // 0x231ae8: 0xc06ce3c  jal         func_1B38F0
label_231aec:
    if (ctx->pc == 0x231AECu) {
        ctx->pc = 0x231AF0u;
        goto label_231af0;
    }
    ctx->pc = 0x231AE8u;
    SET_GPR_U32(ctx, 31, 0x231AF0u);
    ctx->pc = 0x1B38F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B38F0u, 0x231AE8u, 0x231AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231AF0u;
label_231af0:
    // 0x231af0: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x231af0u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_231af4:
    // 0x231af4: 0x7280be28  paddub      $s7, $s4, $zero
    ctx->pc = 0x231af4u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
label_231af8:
    // 0x231af8: 0x32f3ffff  andi        $s3, $s7, 0xFFFF
    ctx->pc = 0x231af8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)65535);
label_231afc:
    // 0x231afc: 0x16600083  bnez        $s3, . + 4 + (0x83 << 2)
label_231b00:
    if (ctx->pc == 0x231B00u) {
        ctx->pc = 0x231B04u;
        goto label_231b04;
    }
    ctx->pc = 0x231AFCu;
    {
        const bool branch_taken_0x231afc = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x231afc) {
            ctx->pc = 0x231D0Cu;
            goto label_231d0c;
        }
    }
    ctx->pc = 0x231B04u;
label_231b04:
    // 0x231b04: 0xafb10140  sw          $s1, 0x140($sp)
    ctx->pc = 0x231b04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 17));
label_231b08:
    // 0x231b08: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x231b08u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_231b0c:
    // 0x231b0c: 0x0  nop
    ctx->pc = 0x231b0cu;
    // NOP
label_231b10:
    // 0x231b10: 0xe7a00150  swc1        $f0, 0x150($sp)
    ctx->pc = 0x231b10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
label_231b14:
    // 0x231b14: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x231b14u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_231b18:
    // 0x231b18: 0x0  nop
    ctx->pc = 0x231b18u;
    // NOP
label_231b1c:
    // 0x231b1c: 0xe7a00154  swc1        $f0, 0x154($sp)
    ctx->pc = 0x231b1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 340), bits); }
label_231b20:
    // 0x231b20: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x231b20u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_231b24:
    // 0x231b24: 0x0  nop
    ctx->pc = 0x231b24u;
    // NOP
label_231b28:
    // 0x231b28: 0xe7a00158  swc1        $f0, 0x158($sp)
    ctx->pc = 0x231b28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
label_231b2c:
    // 0x231b2c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x231b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_231b30:
    // 0x231b30: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x231b30u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_231b34:
    // 0x231b34: 0x0  nop
    ctx->pc = 0x231b34u;
    // NOP
label_231b38:
    // 0x231b38: 0xe7a0015c  swc1        $f0, 0x15C($sp)
    ctx->pc = 0x231b38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 348), bits); }
label_231b3c:
    // 0x231b3c: 0x3c034396  lui         $v1, 0x4396
    ctx->pc = 0x231b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
label_231b40:
    // 0x231b40: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x231b40u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_231b44:
    // 0x231b44: 0x0  nop
    ctx->pc = 0x231b44u;
    // NOP
label_231b48:
    // 0x231b48: 0xe7a00160  swc1        $f0, 0x160($sp)
    ctx->pc = 0x231b48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
label_231b4c:
    // 0x231b4c: 0x24150002  addiu       $s5, $zero, 0x2
    ctx->pc = 0x231b4cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_231b50:
    // 0x231b50: 0xa7b50164  sh          $s5, 0x164($sp)
    ctx->pc = 0x231b50u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 356), (uint16_t)GPR_U32(ctx, 21));
label_231b54:
    // 0x231b54: 0x8fa301d8  lw          $v1, 0x1D8($sp)
    ctx->pc = 0x231b54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
label_231b58:
    // 0x231b58: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x231b58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_231b5c:
    // 0x231b5c: 0x8c630030  lw          $v1, 0x30($v1)
    ctx->pc = 0x231b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_231b60:
    // 0x231b60: 0x30630200  andi        $v1, $v1, 0x200
    ctx->pc = 0x231b60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
label_231b64:
    // 0x231b64: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_231b68:
    if (ctx->pc == 0x231B68u) {
        ctx->pc = 0x231B6Cu;
        goto label_231b6c;
    }
    ctx->pc = 0x231B64u;
    {
        const bool branch_taken_0x231b64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x231b64) {
            ctx->pc = 0x231B74u;
            goto label_231b74;
        }
    }
    ctx->pc = 0x231B6Cu;
label_231b6c:
    // 0x231b6c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x231b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_231b70:
    // 0x231b70: 0xa7a20164  sh          $v0, 0x164($sp)
    ctx->pc = 0x231b70u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 356), (uint16_t)GPR_U32(ctx, 2));
label_231b74:
    // 0x231b74: 0xa3a00166  sb          $zero, 0x166($sp)
    ctx->pc = 0x231b74u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 358), (uint8_t)GPR_U32(ctx, 0));
label_231b78:
    // 0x231b78: 0xa3a00167  sb          $zero, 0x167($sp)
    ctx->pc = 0x231b78u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 359), (uint8_t)GPR_U32(ctx, 0));
label_231b7c:
    // 0x231b7c: 0x8fa401d8  lw          $a0, 0x1D8($sp)
    ctx->pc = 0x231b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
label_231b80:
    // 0x231b80: 0x27a50140  addiu       $a1, $sp, 0x140
    ctx->pc = 0x231b80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_231b84:
    // 0x231b84: 0xc06ce90  jal         func_1B3A40
label_231b88:
    if (ctx->pc == 0x231B88u) {
        ctx->pc = 0x231B8Cu;
        goto label_231b8c;
    }
    ctx->pc = 0x231B84u;
    SET_GPR_U32(ctx, 31, 0x231B8Cu);
    ctx->pc = 0x1B3A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3A40u, 0x231B84u, 0x231B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231B8Cu;
label_231b8c:
    // 0x231b8c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x231b8cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_231b90:
    // 0x231b90: 0x1060005e  beqz        $v1, . + 4 + (0x5E << 2)
label_231b94:
    if (ctx->pc == 0x231B94u) {
        ctx->pc = 0x231B98u;
        goto label_231b98;
    }
    ctx->pc = 0x231B90u;
    {
        const bool branch_taken_0x231b90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x231b90) {
            ctx->pc = 0x231D0Cu;
            goto label_231d0c;
        }
    }
    ctx->pc = 0x231B98u;
label_231b98:
    // 0x231b98: 0x8fa301d8  lw          $v1, 0x1D8($sp)
    ctx->pc = 0x231b98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
label_231b9c:
    // 0x231b9c: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x231b9cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
label_231ba0:
    // 0x231ba0: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x231ba0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
label_231ba4:
    // 0x231ba4: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x231ba4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_231ba8:
    // 0x231ba8: 0x41c38  dsll        $v1, $a0, 16
    ctx->pc = 0x231ba8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << 16);
label_231bac:
    // 0x231bac: 0x3464ffff  ori         $a0, $v1, 0xFFFF
    ctx->pc = 0x231bacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_231bb0:
    // 0x231bb0: 0xa41824  and         $v1, $a1, $a0
    ctx->pc = 0x231bb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
label_231bb4:
    // 0x231bb4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x231bb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_231bb8:
    // 0x231bb8: 0x34640006  ori         $a0, $v1, 0x6
    ctx->pc = 0x231bb8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)6);
label_231bbc:
    // 0x231bbc: 0x8fa301d8  lw          $v1, 0x1D8($sp)
    ctx->pc = 0x231bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
label_231bc0:
    // 0x231bc0: 0x8c670130  lw          $a3, 0x130($v1)
    ctx->pc = 0x231bc0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
label_231bc4:
    // 0x231bc4: 0x27a30150  addiu       $v1, $sp, 0x150
    ctx->pc = 0x231bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_231bc8:
    // 0x231bc8: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x231bc8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_231bcc:
    // 0x231bcc: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x231bccu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_231bd0:
    // 0x231bd0: 0x24e70880  addiu       $a3, $a3, 0x880
    ctx->pc = 0x231bd0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2176));
label_231bd4:
    // 0x231bd4: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x231bd4u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_231bd8:
    // 0x231bd8: 0xc06371c  jal         func_18DC70
label_231bdc:
    if (ctx->pc == 0x231BDCu) {
        ctx->pc = 0x231BE0u;
        goto label_231be0;
    }
    ctx->pc = 0x231BD8u;
    SET_GPR_U32(ctx, 31, 0x231BE0u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x231BD8u, 0x231BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231BE0u;
label_231be0:
    // 0x231be0: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x231be0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_231be4:
    // 0x231be4: 0xc067694  jal         func_19DA50
label_231be8:
    if (ctx->pc == 0x231BE8u) {
        ctx->pc = 0x231BECu;
        goto label_231bec;
    }
    ctx->pc = 0x231BE4u;
    SET_GPR_U32(ctx, 31, 0x231BECu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x231BE4u, 0x231BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231BECu;
label_231bec:
    // 0x231bec: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x231becu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_231bf0:
    // 0x231bf0: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
label_231bf4:
    if (ctx->pc == 0x231BF4u) {
        ctx->pc = 0x231BF8u;
        goto label_231bf8;
    }
    ctx->pc = 0x231BF0u;
    {
        const bool branch_taken_0x231bf0 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x231bf0) {
            ctx->pc = 0x231C0Cu;
            goto label_231c0c;
        }
    }
    ctx->pc = 0x231BF8u;
label_231bf8:
    // 0x231bf8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x231bf8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_231bfc:
    // 0x231bfc: 0x0  nop
    ctx->pc = 0x231bfcu;
    // NOP
label_231c00:
    // 0x231c00: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x231c00u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_231c04:
    // 0x231c04: 0x10000008  b           . + 4 + (0x8 << 2)
label_231c08:
    if (ctx->pc == 0x231C08u) {
        ctx->pc = 0x231C0Cu;
        goto label_231c0c;
    }
    ctx->pc = 0x231C04u;
    {
        const bool branch_taken_0x231c04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x231c04) {
            ctx->pc = 0x231C28u;
            goto label_231c28;
        }
    }
    ctx->pc = 0x231C0Cu;
label_231c0c:
    // 0x231c0c: 0x33042  srl         $a2, $v1, 1
    ctx->pc = 0x231c0cu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
label_231c10:
    // 0x231c10: 0x30640001  andi        $a0, $v1, 0x1
    ctx->pc = 0x231c10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_231c14:
    // 0x231c14: 0xc43025  or          $a2, $a2, $a0
    ctx->pc = 0x231c14u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
label_231c18:
    // 0x231c18: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x231c18u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_231c1c:
    // 0x231c1c: 0x0  nop
    ctx->pc = 0x231c1cu;
    // NOP
label_231c20:
    // 0x231c20: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x231c20u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_231c24:
    // 0x231c24: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x231c24u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_231c28:
    // 0x231c28: 0xc7a00154  lwc1        $f0, 0x154($sp)
    ctx->pc = 0x231c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_231c2c:
    // 0x231c2c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x231c2cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_231c30:
    // 0x231c30: 0xe7a00154  swc1        $f0, 0x154($sp)
    ctx->pc = 0x231c30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 340), bits); }
label_231c34:
    // 0x231c34: 0x8fa301d8  lw          $v1, 0x1D8($sp)
    ctx->pc = 0x231c34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
label_231c38:
    // 0x231c38: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x231c38u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
label_231c3c:
    // 0x231c3c: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x231c3cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
label_231c40:
    // 0x231c40: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x231c40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_231c44:
    // 0x231c44: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x231c44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_231c48:
    // 0x231c48: 0x3464ffff  ori         $a0, $v1, 0xFFFF
    ctx->pc = 0x231c48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_231c4c:
    // 0x231c4c: 0xa41824  and         $v1, $a1, $a0
    ctx->pc = 0x231c4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
label_231c50:
    // 0x231c50: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x231c50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
label_231c54:
    // 0x231c54: 0x34860006  ori         $a2, $a0, 0x6
    ctx->pc = 0x231c54u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)6);
label_231c58:
    // 0x231c58: 0x8fa301d8  lw          $v1, 0x1D8($sp)
    ctx->pc = 0x231c58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
label_231c5c:
    // 0x231c5c: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x231c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
label_231c60:
    // 0x231c60: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x231c60u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_231c64:
    // 0x231c64: 0x27a50150  addiu       $a1, $sp, 0x150
    ctx->pc = 0x231c64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_231c68:
    // 0x231c68: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x231c68u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_231c6c:
    // 0x231c6c: 0x24670880  addiu       $a3, $v1, 0x880
    ctx->pc = 0x231c6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 2176));
label_231c70:
    // 0x231c70: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x231c70u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_231c74:
    // 0x231c74: 0xc06371c  jal         func_18DC70
label_231c78:
    if (ctx->pc == 0x231C78u) {
        ctx->pc = 0x231C7Cu;
        goto label_231c7c;
    }
    ctx->pc = 0x231C74u;
    SET_GPR_U32(ctx, 31, 0x231C7Cu);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x231C74u, 0x231C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231C7Cu;
label_231c7c:
    // 0x231c7c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x231c7cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_231c80:
    // 0x231c80: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x231c80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
label_231c84:
    // 0x231c84: 0x3c05000a  lui         $a1, 0xA
    ctx->pc = 0x231c84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)10 << 16));
label_231c88:
    // 0x231c88: 0xc0684d8  jal         func_1A1360
label_231c8c:
    if (ctx->pc == 0x231C8Cu) {
        ctx->pc = 0x231C90u;
        goto label_231c90;
    }
    ctx->pc = 0x231C88u;
    SET_GPR_U32(ctx, 31, 0x231C90u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x231C88u, 0x231C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231C90u;
label_231c90:
    // 0x231c90: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x231c90u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_231c94:
    // 0x231c94: 0x3c0402ff  lui         $a0, 0x2FF
    ctx->pc = 0x231c94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)767 << 16));
label_231c98:
    // 0x231c98: 0x3c050005  lui         $a1, 0x5
    ctx->pc = 0x231c98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)5 << 16));
label_231c9c:
    // 0x231c9c: 0xc0684d8  jal         func_1A1360
label_231ca0:
    if (ctx->pc == 0x231CA0u) {
        ctx->pc = 0x231CA4u;
        goto label_231ca4;
    }
    ctx->pc = 0x231C9Cu;
    SET_GPR_U32(ctx, 31, 0x231CA4u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x231C9Cu, 0x231CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231CA4u;
label_231ca4:
    // 0x231ca4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x231ca4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_231ca8:
    // 0x231ca8: 0x3c03469c  lui         $v1, 0x469C
    ctx->pc = 0x231ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18076 << 16));
label_231cac:
    // 0x231cac: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x231cacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
label_231cb0:
    // 0x231cb0: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x231cb0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_231cb4:
    // 0x231cb4: 0x24040511  addiu       $a0, $zero, 0x511
    ctx->pc = 0x231cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1297));
label_231cb8:
    // 0x231cb8: 0x26250030  addiu       $a1, $s1, 0x30
    ctx->pc = 0x231cb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
label_231cbc:
    // 0x231cbc: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x231cbcu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_231cc0:
    // 0x231cc0: 0xc067b18  jal         func_19EC60
label_231cc4:
    if (ctx->pc == 0x231CC4u) {
        ctx->pc = 0x231CC8u;
        goto label_231cc8;
    }
    ctx->pc = 0x231CC0u;
    SET_GPR_U32(ctx, 31, 0x231CC8u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x231CC0u, 0x231CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231CC8u;
label_231cc8:
    // 0x231cc8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x231cc8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_231ccc:
    // 0x231ccc: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x231cccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_231cd0:
    // 0x231cd0: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x231cd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_231cd4:
    // 0x231cd4: 0xa4a4002c  sh          $a0, 0x2C($a1)
    ctx->pc = 0x231cd4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 44), (uint16_t)GPR_U32(ctx, 4));
label_231cd8:
    // 0x231cd8: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x231cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_231cdc:
    // 0x231cdc: 0x8483002a  lh          $v1, 0x2A($a0)
    ctx->pc = 0x231cdcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 42)));
label_231ce0:
    // 0x231ce0: 0x2465fffb  addiu       $a1, $v1, -0x5
    ctx->pc = 0x231ce0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967291));
label_231ce4:
    // 0x231ce4: 0xa485002a  sh          $a1, 0x2A($a0)
    ctx->pc = 0x231ce4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 42), (uint16_t)GPR_U32(ctx, 5));
label_231ce8:
    // 0x231ce8: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x231ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_231cec:
    // 0x231cec: 0x8483002a  lh          $v1, 0x2A($a0)
    ctx->pc = 0x231cecu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 42)));
label_231cf0:
    // 0x231cf0: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x231cf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_231cf4:
    // 0x231cf4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x231cf4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_231cf8:
    // 0x231cf8: 0x1c600004  bgtz        $v1, . + 4 + (0x4 << 2)
label_231cfc:
    if (ctx->pc == 0x231CFCu) {
        ctx->pc = 0x231D00u;
        goto label_231d00;
    }
    ctx->pc = 0x231CF8u;
    {
        const bool branch_taken_0x231cf8 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x231cf8) {
            ctx->pc = 0x231D0Cu;
            goto label_231d0c;
        }
    }
    ctx->pc = 0x231D00u;
label_231d00:
    // 0x231d00: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x231d00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_231d04:
    // 0x231d04: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x231d04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_231d08:
    // 0x231d08: 0xa464002a  sh          $a0, 0x2A($v1)
    ctx->pc = 0x231d08u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 42), (uint16_t)GPR_U32(ctx, 4));
label_231d0c:
    // 0x231d0c: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x231d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_231d10:
    // 0x231d10: 0x84a30030  lh          $v1, 0x30($a1)
    ctx->pc = 0x231d10u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 48)));
label_231d14:
    // 0x231d14: 0x2464ffff  addiu       $a0, $v1, -0x1
    ctx->pc = 0x231d14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_231d18:
    // 0x231d18: 0xa4a40030  sh          $a0, 0x30($a1)
    ctx->pc = 0x231d18u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 48), (uint16_t)GPR_U32(ctx, 4));
label_231d1c:
    // 0x231d1c: 0x146002c4  bnez        $v1, . + 4 + (0x2C4 << 2)
label_231d20:
    if (ctx->pc == 0x231D20u) {
        ctx->pc = 0x231D24u;
        goto label_231d24;
    }
    ctx->pc = 0x231D1Cu;
    {
        const bool branch_taken_0x231d1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x231d1c) {
            ctx->pc = 0x232830u;
            goto label_232830;
        }
    }
    ctx->pc = 0x231D24u;
label_231d24:
    // 0x231d24: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x231d24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_231d28:
    // 0x231d28: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x231d28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_231d2c:
    // 0x231d2c: 0xa4430030  sh          $v1, 0x30($v0)
    ctx->pc = 0x231d2cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 48), (uint16_t)GPR_U32(ctx, 3));
label_231d30:
    // 0x231d30: 0x3c05469c  lui         $a1, 0x469C
    ctx->pc = 0x231d30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)18076 << 16));
label_231d34:
    // 0x231d34: 0x34a44000  ori         $a0, $a1, 0x4000
    ctx->pc = 0x231d34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16384);
label_231d38:
    // 0x231d38: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x231d38u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_231d3c:
    // 0x231d3c: 0x24040507  addiu       $a0, $zero, 0x507
    ctx->pc = 0x231d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1287));
label_231d40:
    // 0x231d40: 0x26250030  addiu       $a1, $s1, 0x30
    ctx->pc = 0x231d40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
label_231d44:
    // 0x231d44: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x231d44u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_231d48:
    // 0x231d48: 0xc067b18  jal         func_19EC60
label_231d4c:
    if (ctx->pc == 0x231D4Cu) {
        ctx->pc = 0x231D50u;
        goto label_231d50;
    }
    ctx->pc = 0x231D48u;
    SET_GPR_U32(ctx, 31, 0x231D50u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x231D48u, 0x231D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231D50u;
label_231d50:
    // 0x231d50: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x231d50u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_231d54:
    // 0x231d54: 0x100002b6  b           . + 4 + (0x2B6 << 2)
label_231d58:
    if (ctx->pc == 0x231D58u) {
        ctx->pc = 0x231D5Cu;
        goto label_231d5c;
    }
    ctx->pc = 0x231D54u;
    {
        const bool branch_taken_0x231d54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x231d54) {
            ctx->pc = 0x232830u;
            goto label_232830;
        }
    }
    ctx->pc = 0x231D5Cu;
label_231d5c:
    // 0x231d5c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x231d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_231d60:
    // 0x231d60: 0xc040cbc  jal         func_1032F0
label_231d64:
    if (ctx->pc == 0x231D64u) {
        ctx->pc = 0x231D68u;
        goto label_231d68;
    }
    ctx->pc = 0x231D60u;
    SET_GPR_U32(ctx, 31, 0x231D68u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x231D68u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x231D68u) { return; }
    ctx->pc = 0x231D68u;
label_231d68:
    // 0x231d68: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x231d68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_231d6c:
    // 0x231d6c: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x231d6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_231d70:
    // 0x231d70: 0x3c043edf  lui         $a0, 0x3EDF
    ctx->pc = 0x231d70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16095 << 16));
label_231d74:
    // 0x231d74: 0x348266f3  ori         $v0, $a0, 0x66F3
    ctx->pc = 0x231d74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)26355);
label_231d78:
    // 0x231d78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x231d78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_231d7c:
    // 0x231d7c: 0x0  nop
    ctx->pc = 0x231d7cu;
    // NOP
label_231d80:
    // 0x231d80: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x231d80u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_231d84:
    // 0x231d84: 0xc058fec  jal         func_163FB0
label_231d88:
    if (ctx->pc == 0x231D88u) {
        ctx->pc = 0x231D8Cu;
        goto label_231d8c;
    }
    ctx->pc = 0x231D84u;
    SET_GPR_U32(ctx, 31, 0x231D8Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x231D84u, 0x231D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231D8Cu;
label_231d8c:
    // 0x231d8c: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x231d8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_231d90:
    // 0x231d90: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x231d90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_231d94:
    // 0x231d94: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x231d94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_231d98:
    // 0x231d98: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x231d98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_231d9c:
    // 0x231d9c: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x231d9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_231da0:
    // 0x231da0: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x231da0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_231da4:
    // 0x231da4: 0xc040ce4  jal         func_103390
label_231da8:
    if (ctx->pc == 0x231DA8u) {
        ctx->pc = 0x231DACu;
        goto label_231dac;
    }
    ctx->pc = 0x231DA4u;
    SET_GPR_U32(ctx, 31, 0x231DACu);
    ctx->pc = 0x103390u;
    {
        ctx->pc = 0x231DACu;
        ps2_stubs::sceVu0RotMatrixZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x231DACu) { return; }
    ctx->pc = 0x231DACu;
label_231dac:
    // 0x231dac: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x231dacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_231db0:
    // 0x231db0: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x231db0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_231db4:
    // 0x231db4: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x231db4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_231db8:
    // 0x231db8: 0xc46c0004  lwc1        $f12, 0x4($v1)
    ctx->pc = 0x231db8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_231dbc:
    // 0x231dbc: 0xc040d0e  jal         func_103438
label_231dc0:
    if (ctx->pc == 0x231DC0u) {
        ctx->pc = 0x231DC4u;
        goto label_231dc4;
    }
    ctx->pc = 0x231DBCu;
    SET_GPR_U32(ctx, 31, 0x231DC4u);
    ctx->pc = 0x103438u;
    {
        ctx->pc = 0x231DC4u;
        ps2_stubs::sceVu0RotMatrixX(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x231DC4u) { return; }
    ctx->pc = 0x231DC4u;
label_231dc4:
    // 0x231dc4: 0x3c043f06  lui         $a0, 0x3F06
    ctx->pc = 0x231dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16134 << 16));
label_231dc8:
    // 0x231dc8: 0x34830a92  ori         $v1, $a0, 0xA92
    ctx->pc = 0x231dc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2706);
label_231dcc:
    // 0x231dcc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x231dccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_231dd0:
    // 0x231dd0: 0x0  nop
    ctx->pc = 0x231dd0u;
    // NOP
label_231dd4:
    // 0x231dd4: 0xe7a001c0  swc1        $f0, 0x1C0($sp)
    ctx->pc = 0x231dd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 448), bits); }
label_231dd8:
    // 0x231dd8: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x231dd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_231ddc:
    // 0x231ddc: 0x26060150  addiu       $a2, $s0, 0x150
    ctx->pc = 0x231ddcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_231de0:
    // 0x231de0: 0x26070030  addiu       $a3, $s0, 0x30
    ctx->pc = 0x231de0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_231de4:
    // 0x231de4: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x231de4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
label_231de8:
    // 0x231de8: 0xc4ac0008  lwc1        $f12, 0x8($a1)
    ctx->pc = 0x231de8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_231dec:
    // 0x231dec: 0xc4cd000c  lwc1        $f13, 0xC($a2)
    ctx->pc = 0x231decu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_231df0:
    // 0x231df0: 0x26a20030  addiu       $v0, $s5, 0x30
    ctx->pc = 0x231df0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 48));
label_231df4:
    // 0x231df4: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x231df4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_231df8:
    // 0x231df8: 0xc7ae01c0  lwc1        $f14, 0x1C0($sp)
    ctx->pc = 0x231df8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_231dfc:
    // 0x231dfc: 0xc7af01c0  lwc1        $f15, 0x1C0($sp)
    ctx->pc = 0x231dfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_231e00:
    // 0x231e00: 0x27a601b8  addiu       $a2, $sp, 0x1B8
    ctx->pc = 0x231e00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 440));
label_231e04:
    // 0x231e04: 0x27a701bc  addiu       $a3, $sp, 0x1BC
    ctx->pc = 0x231e04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 444));
label_231e08:
    // 0x231e08: 0xc05c968  jal         func_1725A0
label_231e0c:
    if (ctx->pc == 0x231E0Cu) {
        ctx->pc = 0x231E10u;
        goto label_231e10;
    }
    ctx->pc = 0x231E08u;
    SET_GPR_U32(ctx, 31, 0x231E10u);
    ctx->pc = 0x1725A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1725A0u, 0x231E08u, 0x231E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231E10u;
label_231e10:
    // 0x231e10: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x231e10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_231e14:
    // 0x231e14: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x231e14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_231e18:
    // 0x231e18: 0xc7a001b8  lwc1        $f0, 0x1B8($sp)
    ctx->pc = 0x231e18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_231e1c:
    // 0x231e1c: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x231e1cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_231e20:
    // 0x231e20: 0xc058fec  jal         func_163FB0
label_231e24:
    if (ctx->pc == 0x231E24u) {
        ctx->pc = 0x231E28u;
        goto label_231e28;
    }
    ctx->pc = 0x231E20u;
    SET_GPR_U32(ctx, 31, 0x231E28u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x231E20u, 0x231E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231E28u;
label_231e28:
    // 0x231e28: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x231e28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_231e2c:
    // 0x231e2c: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x231e2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_231e30:
    // 0x231e30: 0xc7a001b8  lwc1        $f0, 0x1B8($sp)
    ctx->pc = 0x231e30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_231e34:
    // 0x231e34: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x231e34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_231e38:
    // 0x231e38: 0xe460001c  swc1        $f0, 0x1C($v1)
    ctx->pc = 0x231e38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 28), bits); }
label_231e3c:
    // 0x231e3c: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x231e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_231e40:
    // 0x231e40: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x231e40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_231e44:
    // 0x231e44: 0xc7a001bc  lwc1        $f0, 0x1BC($sp)
    ctx->pc = 0x231e44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_231e48:
    // 0x231e48: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x231e48u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_231e4c:
    // 0x231e4c: 0xc058fec  jal         func_163FB0
label_231e50:
    if (ctx->pc == 0x231E50u) {
        ctx->pc = 0x231E54u;
        goto label_231e54;
    }
    ctx->pc = 0x231E4Cu;
    SET_GPR_U32(ctx, 31, 0x231E54u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x231E4Cu, 0x231E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231E54u;
label_231e54:
    // 0x231e54: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x231e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_231e58:
    // 0x231e58: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x231e58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_231e5c:
    // 0x231e5c: 0x8fa401d8  lw          $a0, 0x1D8($sp)
    ctx->pc = 0x231e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
label_231e60:
    // 0x231e60: 0x949211f4  lhu         $s2, 0x11F4($a0)
    ctx->pc = 0x231e60u;
    SET_GPR_ZE32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4596)));
label_231e64:
    // 0x231e64: 0x3242ffff  andi        $v0, $s2, 0xFFFF
    ctx->pc = 0x231e64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
label_231e68:
    // 0x231e68: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x231e68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_231e6c:
    // 0x231e6c: 0x14440005  bne         $v0, $a0, . + 4 + (0x5 << 2)
label_231e70:
    if (ctx->pc == 0x231E70u) {
        ctx->pc = 0x231E74u;
        goto label_231e74;
    }
    ctx->pc = 0x231E6Cu;
    {
        const bool branch_taken_0x231e6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x231e6c) {
            ctx->pc = 0x231E84u;
            goto label_231e84;
        }
    }
    ctx->pc = 0x231E74u;
label_231e74:
    // 0x231e74: 0x3c054348  lui         $a1, 0x4348
    ctx->pc = 0x231e74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17224 << 16));
label_231e78:
    // 0x231e78: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x231e78u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_231e7c:
    // 0x231e7c: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x231e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_231e80:
    // 0x231e80: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x231e80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
label_231e84:
    // 0x231e84: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x231e84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_231e88:
    // 0x231e88: 0x8485002a  lh          $a1, 0x2A($a0)
    ctx->pc = 0x231e88u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 42)));
label_231e8c:
    // 0x231e8c: 0x24a2ffff  addiu       $v0, $a1, -0x1
    ctx->pc = 0x231e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_231e90:
    // 0x231e90: 0xa482002a  sh          $v0, 0x2A($a0)
    ctx->pc = 0x231e90u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 42), (uint16_t)GPR_U32(ctx, 2));
label_231e94:
    // 0x231e94: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x231e94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_231e98:
    // 0x231e98: 0x8462002a  lh          $v0, 0x2A($v1)
    ctx->pc = 0x231e98u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 42)));
label_231e9c:
    // 0x231e9c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_231ea0:
    if (ctx->pc == 0x231EA0u) {
        ctx->pc = 0x231EA4u;
        goto label_231ea4;
    }
    ctx->pc = 0x231E9Cu;
    {
        const bool branch_taken_0x231e9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x231e9c) {
            ctx->pc = 0x231EC4u;
            goto label_231ec4;
        }
    }
    ctx->pc = 0x231EA4u;
label_231ea4:
    // 0x231ea4: 0x3c044334  lui         $a0, 0x4334
    ctx->pc = 0x231ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17204 << 16));
label_231ea8:
    // 0x231ea8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x231ea8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_231eac:
    // 0x231eac: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x231eacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_231eb0:
    // 0x231eb0: 0xe4a00020  swc1        $f0, 0x20($a1)
    ctx->pc = 0x231eb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 32), bits); }
label_231eb4:
    // 0x231eb4: 0x3c02432a  lui         $v0, 0x432A
    ctx->pc = 0x231eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17194 << 16));
label_231eb8:
    // 0x231eb8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x231eb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_231ebc:
    // 0x231ebc: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x231ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_231ec0:
    // 0x231ec0: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x231ec0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
label_231ec4:
    // 0x231ec4: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x231ec4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_231ec8:
    // 0x231ec8: 0xc4a10020  lwc1        $f1, 0x20($a1)
    ctx->pc = 0x231ec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_231ecc:
    // 0x231ecc: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x231eccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
label_231ed0:
    // 0x231ed0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x231ed0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_231ed4:
    // 0x231ed4: 0x0  nop
    ctx->pc = 0x231ed4u;
    // NOP
label_231ed8:
    // 0x231ed8: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x231ed8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_231edc:
    // 0x231edc: 0x0  nop
    ctx->pc = 0x231edcu;
    // NOP
label_231ee0:
    // 0x231ee0: 0x4501001e  bc1t        . + 4 + (0x1E << 2)
label_231ee4:
    if (ctx->pc == 0x231EE4u) {
        ctx->pc = 0x231EE8u;
        goto label_231ee8;
    }
    ctx->pc = 0x231EE0u;
    {
        const bool branch_taken_0x231ee0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x231ee0) {
            ctx->pc = 0x231F5Cu;
            goto label_231f5c;
        }
    }
    ctx->pc = 0x231EE8u;
label_231ee8:
    // 0x231ee8: 0x26160150  addiu       $s6, $s0, 0x150
    ctx->pc = 0x231ee8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_231eec:
    // 0x231eec: 0xc6c10018  lwc1        $f1, 0x18($s6)
    ctx->pc = 0x231eecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_231ef0:
    // 0x231ef0: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x231ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
label_231ef4:
    // 0x231ef4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x231ef4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_231ef8:
    // 0x231ef8: 0x0  nop
    ctx->pc = 0x231ef8u;
    // NOP
label_231efc:
    // 0x231efc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x231efcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_231f00:
    // 0x231f00: 0xe6c00018  swc1        $f0, 0x18($s6)
    ctx->pc = 0x231f00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 24), bits); }
label_231f04:
    // 0x231f04: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x231f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_231f08:
    // 0x231f08: 0xc4420018  lwc1        $f2, 0x18($v0)
    ctx->pc = 0x231f08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_231f0c:
    // 0x231f0c: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x231f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_231f10:
    // 0x231f10: 0xc4410020  lwc1        $f1, 0x20($v0)
    ctx->pc = 0x231f10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_231f14:
    // 0x231f14: 0x3c044120  lui         $a0, 0x4120
    ctx->pc = 0x231f14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16672 << 16));
label_231f18:
    // 0x231f18: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x231f18u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_231f1c:
    // 0x231f1c: 0x0  nop
    ctx->pc = 0x231f1cu;
    // NOP
label_231f20:
    // 0x231f20: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x231f20u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_231f24:
    // 0x231f24: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x231f24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_231f28:
    // 0x231f28: 0x0  nop
    ctx->pc = 0x231f28u;
    // NOP
label_231f2c:
    // 0x231f2c: 0x45000029  bc1f        . + 4 + (0x29 << 2)
label_231f30:
    if (ctx->pc == 0x231F30u) {
        ctx->pc = 0x231F34u;
        goto label_231f34;
    }
    ctx->pc = 0x231F2Cu;
    {
        const bool branch_taken_0x231f2c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x231f2c) {
            ctx->pc = 0x231FD4u;
            goto label_231fd4;
        }
    }
    ctx->pc = 0x231F34u;
label_231f34:
    // 0x231f34: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x231f34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_231f38:
    // 0x231f38: 0xc4a10020  lwc1        $f1, 0x20($a1)
    ctx->pc = 0x231f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_231f3c:
    // 0x231f3c: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x231f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_231f40:
    // 0x231f40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x231f40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_231f44:
    // 0x231f44: 0x0  nop
    ctx->pc = 0x231f44u;
    // NOP
label_231f48:
    // 0x231f48: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x231f48u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_231f4c:
    // 0x231f4c: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x231f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_231f50:
    // 0x231f50: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x231f50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
label_231f54:
    // 0x231f54: 0x1000001f  b           . + 4 + (0x1F << 2)
label_231f58:
    if (ctx->pc == 0x231F58u) {
        ctx->pc = 0x231F5Cu;
        goto label_231f5c;
    }
    ctx->pc = 0x231F54u;
    {
        const bool branch_taken_0x231f54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x231f54) {
            ctx->pc = 0x231FD4u;
            goto label_231fd4;
        }
    }
    ctx->pc = 0x231F5Cu;
label_231f5c:
    // 0x231f5c: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x231f5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_231f60:
    // 0x231f60: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x231f60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_231f64:
    // 0x231f64: 0x3c023f1c  lui         $v0, 0x3F1C
    ctx->pc = 0x231f64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16156 << 16));
label_231f68:
    // 0x231f68: 0x344561aa  ori         $a1, $v0, 0x61AA
    ctx->pc = 0x231f68u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)25002);
label_231f6c:
    // 0x231f6c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x231f6cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_231f70:
    // 0x231f70: 0x0  nop
    ctx->pc = 0x231f70u;
    // NOP
label_231f74:
    // 0x231f74: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x231f74u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_231f78:
    // 0x231f78: 0xc058fec  jal         func_163FB0
label_231f7c:
    if (ctx->pc == 0x231F7Cu) {
        ctx->pc = 0x231F80u;
        goto label_231f80;
    }
    ctx->pc = 0x231F78u;
    SET_GPR_U32(ctx, 31, 0x231F80u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x231F78u, 0x231F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231F80u;
label_231f80:
    // 0x231f80: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x231f80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_231f84:
    // 0x231f84: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x231f84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_231f88:
    // 0x231f88: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x231f88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_231f8c:
    // 0x231f8c: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x231f8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_231f90:
    // 0x231f90: 0x3c0441a0  lui         $a0, 0x41A0
    ctx->pc = 0x231f90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16800 << 16));
label_231f94:
    // 0x231f94: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x231f94u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_231f98:
    // 0x231f98: 0x0  nop
    ctx->pc = 0x231f98u;
    // NOP
label_231f9c:
    // 0x231f9c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x231f9cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_231fa0:
    // 0x231fa0: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x231fa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
label_231fa4:
    // 0x231fa4: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x231fa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_231fa8:
    // 0x231fa8: 0xc4a10018  lwc1        $f1, 0x18($a1)
    ctx->pc = 0x231fa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_231fac:
    // 0x231fac: 0x26060150  addiu       $a2, $s0, 0x150
    ctx->pc = 0x231facu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_231fb0:
    // 0x231fb0: 0xc4c00020  lwc1        $f0, 0x20($a2)
    ctx->pc = 0x231fb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_231fb4:
    // 0x231fb4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x231fb4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_231fb8:
    // 0x231fb8: 0x0  nop
    ctx->pc = 0x231fb8u;
    // NOP
label_231fbc:
    // 0x231fbc: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_231fc0:
    if (ctx->pc == 0x231FC0u) {
        ctx->pc = 0x231FC4u;
        goto label_231fc4;
    }
    ctx->pc = 0x231FBCu;
    {
        const bool branch_taken_0x231fbc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x231fbc) {
            ctx->pc = 0x231FD4u;
            goto label_231fd4;
        }
    }
    ctx->pc = 0x231FC4u;
label_231fc4:
    // 0x231fc4: 0x26070150  addiu       $a3, $s0, 0x150
    ctx->pc = 0x231fc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_231fc8:
    // 0x231fc8: 0xc4e00020  lwc1        $f0, 0x20($a3)
    ctx->pc = 0x231fc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_231fcc:
    // 0x231fcc: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x231fccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_231fd0:
    // 0x231fd0: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x231fd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
label_231fd4:
    // 0x231fd4: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x231fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_231fd8:
    // 0x231fd8: 0xc040cbc  jal         func_1032F0
label_231fdc:
    if (ctx->pc == 0x231FDCu) {
        ctx->pc = 0x231FE0u;
        goto label_231fe0;
    }
    ctx->pc = 0x231FD8u;
    SET_GPR_U32(ctx, 31, 0x231FE0u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x231FE0u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x231FE0u) { return; }
    ctx->pc = 0x231FE0u;
label_231fe0:
    // 0x231fe0: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x231fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_231fe4:
    // 0x231fe4: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x231fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_231fe8:
    // 0x231fe8: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x231fe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_231fec:
    // 0x231fec: 0xc44c000c  lwc1        $f12, 0xC($v0)
    ctx->pc = 0x231fecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_231ff0:
    // 0x231ff0: 0xc040d0e  jal         func_103438
label_231ff4:
    if (ctx->pc == 0x231FF4u) {
        ctx->pc = 0x231FF8u;
        goto label_231ff8;
    }
    ctx->pc = 0x231FF0u;
    SET_GPR_U32(ctx, 31, 0x231FF8u);
    ctx->pc = 0x103438u;
    {
        ctx->pc = 0x231FF8u;
        ps2_stubs::sceVu0RotMatrixX(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x231FF8u) { return; }
    ctx->pc = 0x231FF8u;
label_231ff8:
    // 0x231ff8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x231ff8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_231ffc:
    // 0x231ffc: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x231ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_232000:
    // 0x232000: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x232000u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_232004:
    // 0x232004: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x232004u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_232008:
    // 0x232008: 0xc44c0008  lwc1        $f12, 0x8($v0)
    ctx->pc = 0x232008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_23200c:
    // 0x23200c: 0xc040d38  jal         func_1034E0
label_232010:
    if (ctx->pc == 0x232010u) {
        ctx->pc = 0x232014u;
        goto label_232014;
    }
    ctx->pc = 0x23200Cu;
    SET_GPR_U32(ctx, 31, 0x232014u);
    ctx->pc = 0x1034E0u;
    {
        ctx->pc = 0x232014u;
        ps2_stubs::sceVu0RotMatrixY(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x232014u) { return; }
    ctx->pc = 0x232014u;
label_232014:
    // 0x232014: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x232014u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_232018:
    // 0x232018: 0x0  nop
    ctx->pc = 0x232018u;
    // NOP
label_23201c:
    // 0x23201c: 0xe7a00110  swc1        $f0, 0x110($sp)
    ctx->pc = 0x23201cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_232020:
    // 0x232020: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x232020u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_232024:
    // 0x232024: 0x0  nop
    ctx->pc = 0x232024u;
    // NOP
label_232028:
    // 0x232028: 0xe7a00114  swc1        $f0, 0x114($sp)
    ctx->pc = 0x232028u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
label_23202c:
    // 0x23202c: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x23202cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_232030:
    // 0x232030: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x232030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_232034:
    // 0x232034: 0xe7a00118  swc1        $f0, 0x118($sp)
    ctx->pc = 0x232034u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_232038:
    // 0x232038: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x232038u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_23203c:
    // 0x23203c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23203cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_232040:
    // 0x232040: 0x0  nop
    ctx->pc = 0x232040u;
    // NOP
label_232044:
    // 0x232044: 0xe7a0011c  swc1        $f0, 0x11C($sp)
    ctx->pc = 0x232044u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
label_232048:
    // 0x232048: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x232048u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_23204c:
    // 0x23204c: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x23204cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_232050:
    // 0x232050: 0x27a60110  addiu       $a2, $sp, 0x110
    ctx->pc = 0x232050u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_232054:
    // 0x232054: 0xc040bf4  jal         func_102FD0
label_232058:
    if (ctx->pc == 0x232058u) {
        ctx->pc = 0x23205Cu;
        goto label_23205c;
    }
    ctx->pc = 0x232054u;
    SET_GPR_U32(ctx, 31, 0x23205Cu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x23205Cu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x23205Cu) { return; }
    ctx->pc = 0x23205Cu;
label_23205c:
    // 0x23205c: 0xc6010030  lwc1        $f1, 0x30($s0)
    ctx->pc = 0x23205cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_232060:
    // 0x232060: 0xc7a00110  lwc1        $f0, 0x110($sp)
    ctx->pc = 0x232060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_232064:
    // 0x232064: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x232064u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_232068:
    // 0x232068: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x232068u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
label_23206c:
    // 0x23206c: 0xc6010034  lwc1        $f1, 0x34($s0)
    ctx->pc = 0x23206cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_232070:
    // 0x232070: 0xc7a00114  lwc1        $f0, 0x114($sp)
    ctx->pc = 0x232070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_232074:
    // 0x232074: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x232074u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_232078:
    // 0x232078: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x232078u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
label_23207c:
    // 0x23207c: 0xc6010038  lwc1        $f1, 0x38($s0)
    ctx->pc = 0x23207cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_232080:
    // 0x232080: 0xc7a00118  lwc1        $f0, 0x118($sp)
    ctx->pc = 0x232080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_232084:
    // 0x232084: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x232084u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_232088:
    // 0x232088: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x232088u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
label_23208c:
    // 0x23208c: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x23208cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_232090:
    // 0x232090: 0xc040cbc  jal         func_1032F0
label_232094:
    if (ctx->pc == 0x232094u) {
        ctx->pc = 0x232098u;
        goto label_232098;
    }
    ctx->pc = 0x232090u;
    SET_GPR_U32(ctx, 31, 0x232098u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x232098u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x232098u) { return; }
    ctx->pc = 0x232098u;
label_232098:
    // 0x232098: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x232098u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_23209c:
    // 0x23209c: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x23209cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2320a0:
    // 0x2320a0: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2320a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_2320a4:
    // 0x2320a4: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x2320a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2320a8:
    // 0x2320a8: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x2320a8u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2320ac:
    // 0x2320ac: 0xc058fec  jal         func_163FB0
label_2320b0:
    if (ctx->pc == 0x2320B0u) {
        ctx->pc = 0x2320B4u;
        goto label_2320b4;
    }
    ctx->pc = 0x2320ACu;
    SET_GPR_U32(ctx, 31, 0x2320B4u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2320ACu, 0x2320B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2320B4u;
label_2320b4:
    // 0x2320b4: 0xe7a001b8  swc1        $f0, 0x1B8($sp)
    ctx->pc = 0x2320b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 440), bits); }
label_2320b8:
    // 0x2320b8: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x2320b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_2320bc:
    // 0x2320bc: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x2320bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_2320c0:
    // 0x2320c0: 0xc7ac01b8  lwc1        $f12, 0x1B8($sp)
    ctx->pc = 0x2320c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2320c4:
    // 0x2320c4: 0xc040d38  jal         func_1034E0
label_2320c8:
    if (ctx->pc == 0x2320C8u) {
        ctx->pc = 0x2320CCu;
        goto label_2320cc;
    }
    ctx->pc = 0x2320C4u;
    SET_GPR_U32(ctx, 31, 0x2320CCu);
    ctx->pc = 0x1034E0u;
    {
        ctx->pc = 0x2320CCu;
        ps2_stubs::sceVu0RotMatrixY(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2320CCu) { return; }
    ctx->pc = 0x2320CCu;
label_2320cc:
    // 0x2320cc: 0xc6000030  lwc1        $f0, 0x30($s0)
    ctx->pc = 0x2320ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2320d0:
    // 0x2320d0: 0xe7a00110  swc1        $f0, 0x110($sp)
    ctx->pc = 0x2320d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_2320d4:
    // 0x2320d4: 0xc6000034  lwc1        $f0, 0x34($s0)
    ctx->pc = 0x2320d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2320d8:
    // 0x2320d8: 0xe7a00114  swc1        $f0, 0x114($sp)
    ctx->pc = 0x2320d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
label_2320dc:
    // 0x2320dc: 0xc6000038  lwc1        $f0, 0x38($s0)
    ctx->pc = 0x2320dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2320e0:
    // 0x2320e0: 0xe7a00118  swc1        $f0, 0x118($sp)
    ctx->pc = 0x2320e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_2320e4:
    // 0x2320e4: 0xc600003c  lwc1        $f0, 0x3C($s0)
    ctx->pc = 0x2320e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2320e8:
    // 0x2320e8: 0xe7a0011c  swc1        $f0, 0x11C($sp)
    ctx->pc = 0x2320e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
label_2320ec:
    // 0x2320ec: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x2320ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_2320f0:
    // 0x2320f0: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x2320f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_2320f4:
    // 0x2320f4: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x2320f4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_2320f8:
    // 0x2320f8: 0xc040c00  jal         func_103000
label_2320fc:
    if (ctx->pc == 0x2320FCu) {
        ctx->pc = 0x232100u;
        goto label_232100;
    }
    ctx->pc = 0x2320F8u;
    SET_GPR_U32(ctx, 31, 0x232100u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x232100u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x232100u) { return; }
    ctx->pc = 0x232100u;
label_232100:
    // 0x232100: 0xc7a00110  lwc1        $f0, 0x110($sp)
    ctx->pc = 0x232100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_232104:
    // 0x232104: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x232104u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_232108:
    // 0x232108: 0xc7a00114  lwc1        $f0, 0x114($sp)
    ctx->pc = 0x232108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_23210c:
    // 0x23210c: 0xe7a00104  swc1        $f0, 0x104($sp)
    ctx->pc = 0x23210cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
label_232110:
    // 0x232110: 0xc7a00118  lwc1        $f0, 0x118($sp)
    ctx->pc = 0x232110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_232114:
    // 0x232114: 0xe7a00108  swc1        $f0, 0x108($sp)
    ctx->pc = 0x232114u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
label_232118:
    // 0x232118: 0xc7a0011c  lwc1        $f0, 0x11C($sp)
    ctx->pc = 0x232118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_23211c:
    // 0x23211c: 0xe7a0010c  swc1        $f0, 0x10C($sp)
    ctx->pc = 0x23211cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
label_232120:
    // 0x232120: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x232120u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_232124:
    // 0x232124: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x232124u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_232128:
    // 0x232128: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x232128u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_23212c:
    // 0x23212c: 0xc040c00  jal         func_103000
label_232130:
    if (ctx->pc == 0x232130u) {
        ctx->pc = 0x232134u;
        goto label_232134;
    }
    ctx->pc = 0x23212Cu;
    SET_GPR_U32(ctx, 31, 0x232134u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x232134u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x232134u) { return; }
    ctx->pc = 0x232134u;
label_232134:
    // 0x232134: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x232134u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
label_232138:
    // 0x232138: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x232138u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_23213c:
    // 0x23213c: 0x72a02628  paddub      $a0, $s5, $zero
    ctx->pc = 0x23213cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
label_232140:
    // 0x232140: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x232140u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_232144:
    // 0x232144: 0xc05cad8  jal         func_172B60
label_232148:
    if (ctx->pc == 0x232148u) {
        ctx->pc = 0x23214Cu;
        goto label_23214c;
    }
    ctx->pc = 0x232144u;
    SET_GPR_U32(ctx, 31, 0x23214Cu);
    ctx->pc = 0x172B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172B60u, 0x232144u, 0x23214Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23214Cu;
label_23214c:
    // 0x23214c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x23214cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_232150:
    // 0x232150: 0x0  nop
    ctx->pc = 0x232150u;
    // NOP
label_232154:
    // 0x232154: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x232154u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_232158:
    // 0x232158: 0x0  nop
    ctx->pc = 0x232158u;
    // NOP
label_23215c:
    // 0x23215c: 0x4500005b  bc1f        . + 4 + (0x5B << 2)
label_232160:
    if (ctx->pc == 0x232160u) {
        ctx->pc = 0x232164u;
        goto label_232164;
    }
    ctx->pc = 0x23215Cu;
    {
        const bool branch_taken_0x23215c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23215c) {
            ctx->pc = 0x2322CCu;
            goto label_2322cc;
        }
    }
    ctx->pc = 0x232164u;
label_232164:
    // 0x232164: 0x96040140  lhu         $a0, 0x140($s0)
    ctx->pc = 0x232164u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
label_232168:
    // 0x232168: 0x3085ff5b  andi        $a1, $a0, 0xFF5B
    ctx->pc = 0x232168u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65371);
label_23216c:
    // 0x23216c: 0xa6050140  sh          $a1, 0x140($s0)
    ctx->pc = 0x23216cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 5));
label_232170:
    // 0x232170: 0x27a20090  addiu       $v0, $sp, 0x90
    ctx->pc = 0x232170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_232174:
    // 0x232174: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x232174u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_232178:
    // 0x232178: 0x8e020100  lw          $v0, 0x100($s0)
    ctx->pc = 0x232178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
label_23217c:
    // 0x23217c: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x23217cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_232180:
    // 0x232180: 0xc040c44  jal         func_103110
label_232184:
    if (ctx->pc == 0x232184u) {
        ctx->pc = 0x232188u;
        goto label_232188;
    }
    ctx->pc = 0x232180u;
    SET_GPR_U32(ctx, 31, 0x232188u);
    ctx->pc = 0x103110u;
    {
        ctx->pc = 0x232188u;
        ps2_stubs::sceVu0InversMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x232188u) { return; }
    ctx->pc = 0x232188u;
label_232188:
    // 0x232188: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x232188u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_23218c:
    // 0x23218c: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x23218cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_232190:
    // 0x232190: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x232190u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_232194:
    // 0x232194: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x232194u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_232198:
    // 0x232198: 0xc040c00  jal         func_103000
label_23219c:
    if (ctx->pc == 0x23219Cu) {
        ctx->pc = 0x2321A0u;
        goto label_2321a0;
    }
    ctx->pc = 0x232198u;
    SET_GPR_U32(ctx, 31, 0x2321A0u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x2321A0u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2321A0u) { return; }
    ctx->pc = 0x2321A0u;
label_2321a0:
    // 0x2321a0: 0x26040080  addiu       $a0, $s0, 0x80
    ctx->pc = 0x2321a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
label_2321a4:
    // 0x2321a4: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x2321a4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_2321a8:
    // 0x2321a8: 0xc040ca2  jal         func_103288
label_2321ac:
    if (ctx->pc == 0x2321ACu) {
        ctx->pc = 0x2321B0u;
        goto label_2321b0;
    }
    ctx->pc = 0x2321A8u;
    SET_GPR_U32(ctx, 31, 0x2321B0u);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x2321B0u;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2321B0u) { return; }
    ctx->pc = 0x2321B0u;
label_2321b0:
    // 0x2321b0: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x2321b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_2321b4:
    // 0x2321b4: 0x9485002e  lhu         $a1, 0x2E($a0)
    ctx->pc = 0x2321b4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 46)));
label_2321b8:
    // 0x2321b8: 0x30a6fffe  andi        $a2, $a1, 0xFFFE
    ctx->pc = 0x2321b8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65534);
label_2321bc:
    // 0x2321bc: 0xa486002e  sh          $a2, 0x2E($a0)
    ctx->pc = 0x2321bcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 46), (uint16_t)GPR_U32(ctx, 6));
label_2321c0:
    // 0x2321c0: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x2321c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_2321c4:
    // 0x2321c4: 0xa0600029  sb          $zero, 0x29($v1)
    ctx->pc = 0x2321c4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 41), (uint8_t)GPR_U32(ctx, 0));
label_2321c8:
    // 0x2321c8: 0x8fa401d8  lw          $a0, 0x1D8($sp)
    ctx->pc = 0x2321c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
label_2321cc:
    // 0x2321cc: 0x24861330  addiu       $a2, $a0, 0x1330
    ctx->pc = 0x2321ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
label_2321d0:
    // 0x2321d0: 0x8cc30030  lw          $v1, 0x30($a2)
    ctx->pc = 0x2321d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 48)));
label_2321d4:
    // 0x2321d4: 0x2404fbff  addiu       $a0, $zero, -0x401
    ctx->pc = 0x2321d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966271));
label_2321d8:
    // 0x2321d8: 0x642824  and         $a1, $v1, $a0
    ctx->pc = 0x2321d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_2321dc:
    // 0x2321dc: 0xacc50030  sw          $a1, 0x30($a2)
    ctx->pc = 0x2321dcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 48), GPR_U32(ctx, 5));
label_2321e0:
    // 0x2321e0: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x2321e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
label_2321e4:
    // 0x2321e4: 0x2464ac90  addiu       $a0, $v1, -0x5370
    ctx->pc = 0x2321e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945936));
label_2321e8:
    // 0x2321e8: 0x70809628  paddub      $s2, $a0, $zero
    ctx->pc = 0x2321e8u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
label_2321ec:
    // 0x2321ec: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x2321ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_2321f0:
    // 0x2321f0: 0xa2430001  sb          $v1, 0x1($s2)
    ctx->pc = 0x2321f0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 3));
label_2321f4:
    // 0x2321f4: 0x3c034396  lui         $v1, 0x4396
    ctx->pc = 0x2321f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
label_2321f8:
    // 0x2321f8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2321f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2321fc:
    // 0x2321fc: 0x0  nop
    ctx->pc = 0x2321fcu;
    // NOP
label_232200:
    // 0x232200: 0xe640000c  swc1        $f0, 0xC($s2)
    ctx->pc = 0x232200u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
label_232204:
    // 0x232204: 0x8fa301d8  lw          $v1, 0x1D8($sp)
    ctx->pc = 0x232204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
label_232208:
    // 0x232208: 0x906410a8  lbu         $a0, 0x10A8($v1)
    ctx->pc = 0x232208u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4264)));
label_23220c:
    // 0x23220c: 0x1480002f  bnez        $a0, . + 4 + (0x2F << 2)
label_232210:
    if (ctx->pc == 0x232210u) {
        ctx->pc = 0x232214u;
        goto label_232214;
    }
    ctx->pc = 0x23220Cu;
    {
        const bool branch_taken_0x23220c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x23220c) {
            ctx->pc = 0x2322CCu;
            goto label_2322cc;
        }
    }
    ctx->pc = 0x232214u;
label_232214:
    // 0x232214: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x232214u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_232218:
    // 0x232218: 0xc4a10020  lwc1        $f1, 0x20($a1)
    ctx->pc = 0x232218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_23221c:
    // 0x23221c: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x23221cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
label_232220:
    // 0x232220: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x232220u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_232224:
    // 0x232224: 0x0  nop
    ctx->pc = 0x232224u;
    // NOP
label_232228:
    // 0x232228: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x232228u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_23222c:
    // 0x23222c: 0x0  nop
    ctx->pc = 0x23222cu;
    // NOP
label_232230:
    // 0x232230: 0x45000026  bc1f        . + 4 + (0x26 << 2)
label_232234:
    if (ctx->pc == 0x232234u) {
        ctx->pc = 0x232238u;
        goto label_232238;
    }
    ctx->pc = 0x232230u;
    {
        const bool branch_taken_0x232230 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x232230) {
            ctx->pc = 0x2322CCu;
            goto label_2322cc;
        }
    }
    ctx->pc = 0x232238u;
label_232238:
    // 0x232238: 0x3c05469c  lui         $a1, 0x469C
    ctx->pc = 0x232238u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)18076 << 16));
label_23223c:
    // 0x23223c: 0x34a44000  ori         $a0, $a1, 0x4000
    ctx->pc = 0x23223cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16384);
label_232240:
    // 0x232240: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x232240u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_232244:
    // 0x232244: 0x2402051f  addiu       $v0, $zero, 0x51F
    ctx->pc = 0x232244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1311));
label_232248:
    // 0x232248: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x232248u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_23224c:
    // 0x23224c: 0x26250030  addiu       $a1, $s1, 0x30
    ctx->pc = 0x23224cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
label_232250:
    // 0x232250: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x232250u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_232254:
    // 0x232254: 0xc067b18  jal         func_19EC60
label_232258:
    if (ctx->pc == 0x232258u) {
        ctx->pc = 0x23225Cu;
        goto label_23225c;
    }
    ctx->pc = 0x232254u;
    SET_GPR_U32(ctx, 31, 0x23225Cu);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x232254u, 0x23225Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23225Cu;
label_23225c:
    // 0x23225c: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x23225cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_232260:
    // 0x232260: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x232260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_232264:
    // 0x232264: 0x8fa401d8  lw          $a0, 0x1D8($sp)
    ctx->pc = 0x232264u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
label_232268:
    // 0x232268: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x232268u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
label_23226c:
    // 0x23226c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23226cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_232270:
    // 0x232270: 0x8fa201d8  lw          $v0, 0x1D8($sp)
    ctx->pc = 0x232270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
label_232274:
    // 0x232274: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x232274u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
label_232278:
    // 0x232278: 0x8fa201d8  lw          $v0, 0x1D8($sp)
    ctx->pc = 0x232278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
label_23227c:
    // 0x23227c: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x23227cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
label_232280:
    // 0x232280: 0x8fa201d8  lw          $v0, 0x1D8($sp)
    ctx->pc = 0x232280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
label_232284:
    // 0x232284: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x232284u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
label_232288:
    // 0x232288: 0x8fa301d8  lw          $v1, 0x1D8($sp)
    ctx->pc = 0x232288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
label_23228c:
    // 0x23228c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x23228cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_232290:
    // 0x232290: 0x8fa201d8  lw          $v0, 0x1D8($sp)
    ctx->pc = 0x232290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
label_232294:
    // 0x232294: 0xa04011ee  sb          $zero, 0x11EE($v0)
    ctx->pc = 0x232294u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4590), (uint8_t)GPR_U32(ctx, 0));
label_232298:
    // 0x232298: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x232298u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_23229c:
    // 0x23229c: 0x8fa201d8  lw          $v0, 0x1D8($sp)
    ctx->pc = 0x23229cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
label_2322a0:
    // 0x2322a0: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x2322a0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
label_2322a4:
    // 0x2322a4: 0xc067694  jal         func_19DA50
label_2322a8:
    if (ctx->pc == 0x2322A8u) {
        ctx->pc = 0x2322ACu;
        goto label_2322ac;
    }
    ctx->pc = 0x2322A4u;
    SET_GPR_U32(ctx, 31, 0x2322ACu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2322A4u, 0x2322ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2322ACu;
label_2322ac:
    // 0x2322ac: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2322acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2322b0:
    // 0x2322b0: 0x30640007  andi        $a0, $v1, 0x7
    ctx->pc = 0x2322b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
label_2322b4:
    // 0x2322b4: 0x24830003  addiu       $v1, $a0, 0x3
    ctx->pc = 0x2322b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
label_2322b8:
    // 0x2322b8: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x2322b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
label_2322bc:
    // 0x2322bc: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x2322bcu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_2322c0:
    // 0x2322c0: 0x8fa301d8  lw          $v1, 0x1D8($sp)
    ctx->pc = 0x2322c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
label_2322c4:
    // 0x2322c4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2322c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_2322c8:
    // 0x2322c8: 0xa464005e  sh          $a0, 0x5E($v1)
    ctx->pc = 0x2322c8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 94), (uint16_t)GPR_U32(ctx, 4));
label_2322cc:
    // 0x2322cc: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x2322ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_2322d0:
    // 0x2322d0: 0x84a40030  lh          $a0, 0x30($a1)
    ctx->pc = 0x2322d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 48)));
label_2322d4:
    // 0x2322d4: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x2322d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_2322d8:
    // 0x2322d8: 0xa4a30030  sh          $v1, 0x30($a1)
    ctx->pc = 0x2322d8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 48), (uint16_t)GPR_U32(ctx, 3));
label_2322dc:
    // 0x2322dc: 0x14800154  bnez        $a0, . + 4 + (0x154 << 2)
label_2322e0:
    if (ctx->pc == 0x2322E0u) {
        ctx->pc = 0x2322E4u;
        goto label_2322e4;
    }
    ctx->pc = 0x2322DCu;
    {
        const bool branch_taken_0x2322dc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2322dc) {
            ctx->pc = 0x232830u;
            goto label_232830;
        }
    }
    ctx->pc = 0x2322E4u;
label_2322e4:
    // 0x2322e4: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x2322e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_2322e8:
    // 0x2322e8: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x2322e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_2322ec:
    // 0x2322ec: 0xa4640030  sh          $a0, 0x30($v1)
    ctx->pc = 0x2322ecu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 48), (uint16_t)GPR_U32(ctx, 4));
label_2322f0:
    // 0x2322f0: 0x3c03469c  lui         $v1, 0x469C
    ctx->pc = 0x2322f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18076 << 16));
label_2322f4:
    // 0x2322f4: 0x34654000  ori         $a1, $v1, 0x4000
    ctx->pc = 0x2322f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
label_2322f8:
    // 0x2322f8: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x2322f8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2322fc:
    // 0x2322fc: 0x24040507  addiu       $a0, $zero, 0x507
    ctx->pc = 0x2322fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1287));
label_232300:
    // 0x232300: 0x26250030  addiu       $a1, $s1, 0x30
    ctx->pc = 0x232300u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
label_232304:
    // 0x232304: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x232304u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_232308:
    // 0x232308: 0xc067b18  jal         func_19EC60
label_23230c:
    if (ctx->pc == 0x23230Cu) {
        ctx->pc = 0x232310u;
        goto label_232310;
    }
    ctx->pc = 0x232308u;
    SET_GPR_U32(ctx, 31, 0x232310u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x232308u, 0x232310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232310u;
label_232310:
    // 0x232310: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x232310u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_232314:
    // 0x232314: 0x10000146  b           . + 4 + (0x146 << 2)
label_232318:
    if (ctx->pc == 0x232318u) {
        ctx->pc = 0x23231Cu;
        goto label_23231c;
    }
    ctx->pc = 0x232314u;
    {
        const bool branch_taken_0x232314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x232314) {
            ctx->pc = 0x232830u;
            goto label_232830;
        }
    }
    ctx->pc = 0x23231Cu;
label_23231c:
    // 0x23231c: 0x96040140  lhu         $a0, 0x140($s0)
    ctx->pc = 0x23231cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
label_232320:
    // 0x232320: 0x349400a4  ori         $s4, $a0, 0xA4
    ctx->pc = 0x232320u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)164);
label_232324:
    // 0x232324: 0xa6140140  sh          $s4, 0x140($s0)
    ctx->pc = 0x232324u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 20));
label_232328:
    // 0x232328: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x232328u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_23232c:
    // 0x23232c: 0x8e130100  lw          $s3, 0x100($s0)
    ctx->pc = 0x23232cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
label_232330:
    // 0x232330: 0x72602e28  paddub      $a1, $s3, $zero
    ctx->pc = 0x232330u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
label_232334:
    // 0x232334: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x232334u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_232338:
    // 0x232338: 0xc040c00  jal         func_103000
label_23233c:
    if (ctx->pc == 0x23233Cu) {
        ctx->pc = 0x232340u;
        goto label_232340;
    }
    ctx->pc = 0x232338u;
    SET_GPR_U32(ctx, 31, 0x232340u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x232340u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x232340u) { return; }
    ctx->pc = 0x232340u;
label_232340:
    // 0x232340: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x232340u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_232344:
    // 0x232344: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x232344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_232348:
    // 0x232348: 0x26150150  addiu       $s5, $s0, 0x150
    ctx->pc = 0x232348u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_23234c:
    // 0x23234c: 0xa2a30029  sb          $v1, 0x29($s5)
    ctx->pc = 0x23234cu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 41), (uint8_t)GPR_U32(ctx, 3));
label_232350:
    // 0x232350: 0x3c033fc9  lui         $v1, 0x3FC9
    ctx->pc = 0x232350u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16329 << 16));
label_232354:
    // 0x232354: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x232354u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_232358:
    // 0x232358: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x232358u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23235c:
    // 0x23235c: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x23235cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_232360:
    // 0x232360: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x232360u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_232364:
    // 0x232364: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x232364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_232368:
    // 0x232368: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x232368u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
label_23236c:
    // 0x23236c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23236cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_232370:
    // 0x232370: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x232370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_232374:
    // 0x232374: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x232374u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_232378:
    // 0x232378: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x232378u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_23237c:
    // 0x23237c: 0xe4800014  swc1        $f0, 0x14($a0)
    ctx->pc = 0x23237cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
label_232380:
    // 0x232380: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x232380u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_232384:
    // 0x232384: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x232384u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_232388:
    // 0x232388: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x232388u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_23238c:
    // 0x23238c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23238cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_232390:
    // 0x232390: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x232390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_232394:
    // 0x232394: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x232394u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_232398:
    // 0x232398: 0x3c0342f0  lui         $v1, 0x42F0
    ctx->pc = 0x232398u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17136 << 16));
label_23239c:
    // 0x23239c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x23239cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2323a0:
    // 0x2323a0: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x2323a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_2323a4:
    // 0x2323a4: 0xe4a0001c  swc1        $f0, 0x1C($a1)
    ctx->pc = 0x2323a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 28), bits); }
label_2323a8:
    // 0x2323a8: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x2323a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2323ac:
    // 0x2323ac: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x2323acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_2323b0:
    // 0x2323b0: 0xa4640030  sh          $a0, 0x30($v1)
    ctx->pc = 0x2323b0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 48), (uint16_t)GPR_U32(ctx, 4));
label_2323b4:
    // 0x2323b4: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x2323b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_2323b8:
    // 0x2323b8: 0xc040cbc  jal         func_1032F0
label_2323bc:
    if (ctx->pc == 0x2323BCu) {
        ctx->pc = 0x2323C0u;
        goto label_2323c0;
    }
    ctx->pc = 0x2323B8u;
    SET_GPR_U32(ctx, 31, 0x2323C0u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x2323C0u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2323C0u) { return; }
    ctx->pc = 0x2323C0u;
label_2323c0:
    // 0x2323c0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2323c0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2323c4:
    // 0x2323c4: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x2323c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_2323c8:
    // 0x2323c8: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x2323c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2323cc:
    // 0x2323cc: 0x3c033f06  lui         $v1, 0x3F06
    ctx->pc = 0x2323ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16134 << 16));
label_2323d0:
    // 0x2323d0: 0x34640a92  ori         $a0, $v1, 0xA92
    ctx->pc = 0x2323d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2706);
label_2323d4:
    // 0x2323d4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2323d4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2323d8:
    // 0x2323d8: 0x0  nop
    ctx->pc = 0x2323d8u;
    // NOP
label_2323dc:
    // 0x2323dc: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x2323dcu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2323e0:
    // 0x2323e0: 0xc058fec  jal         func_163FB0
label_2323e4:
    if (ctx->pc == 0x2323E4u) {
        ctx->pc = 0x2323E8u;
        goto label_2323e8;
    }
    ctx->pc = 0x2323E0u;
    SET_GPR_U32(ctx, 31, 0x2323E8u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2323E0u, 0x2323E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2323E8u;
label_2323e8:
    // 0x2323e8: 0x26070150  addiu       $a3, $s0, 0x150
    ctx->pc = 0x2323e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_2323ec:
    // 0x2323ec: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x2323ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
label_2323f0:
    // 0x2323f0: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x2323f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_2323f4:
    // 0x2323f4: 0x27a70090  addiu       $a3, $sp, 0x90
    ctx->pc = 0x2323f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_2323f8:
    // 0x2323f8: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x2323f8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
label_2323fc:
    // 0x2323fc: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x2323fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_232400:
    // 0x232400: 0xc46c0000  lwc1        $f12, 0x0($v1)
    ctx->pc = 0x232400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_232404:
    // 0x232404: 0xc040ce4  jal         func_103390
label_232408:
    if (ctx->pc == 0x232408u) {
        ctx->pc = 0x23240Cu;
        goto label_23240c;
    }
    ctx->pc = 0x232404u;
    SET_GPR_U32(ctx, 31, 0x23240Cu);
    ctx->pc = 0x103390u;
    {
        ctx->pc = 0x23240Cu;
        ps2_stubs::sceVu0RotMatrixZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x23240Cu) { return; }
    ctx->pc = 0x23240Cu;
label_23240c:
    // 0x23240c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x23240cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_232410:
    // 0x232410: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x232410u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_232414:
    // 0x232414: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x232414u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_232418:
    // 0x232418: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x232418u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_23241c:
    // 0x23241c: 0xc040c00  jal         func_103000
label_232420:
    if (ctx->pc == 0x232420u) {
        ctx->pc = 0x232424u;
        goto label_232424;
    }
    ctx->pc = 0x23241Cu;
    SET_GPR_U32(ctx, 31, 0x232424u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x232424u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x232424u) { return; }
    ctx->pc = 0x232424u;
label_232424:
    // 0x232424: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x232424u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_232428:
    // 0x232428: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x232428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_23242c:
    // 0x23242c: 0xc461001c  lwc1        $f1, 0x1C($v1)
    ctx->pc = 0x23242cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_232430:
    // 0x232430: 0xc6000034  lwc1        $f0, 0x34($s0)
    ctx->pc = 0x232430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_232434:
    // 0x232434: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x232434u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_232438:
    // 0x232438: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x232438u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
label_23243c:
    // 0x23243c: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x23243cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_232440:
    // 0x232440: 0xc4a1001c  lwc1        $f1, 0x1C($a1)
    ctx->pc = 0x232440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_232444:
    // 0x232444: 0x3c034040  lui         $v1, 0x4040
    ctx->pc = 0x232444u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16448 << 16));
label_232448:
    // 0x232448: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x232448u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23244c:
    // 0x23244c: 0x0  nop
    ctx->pc = 0x23244cu;
    // NOP
label_232450:
    // 0x232450: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x232450u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_232454:
    // 0x232454: 0xe4a0001c  swc1        $f0, 0x1C($a1)
    ctx->pc = 0x232454u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 28), bits); }
label_232458:
    // 0x232458: 0x3c03c3c8  lui         $v1, 0xC3C8
    ctx->pc = 0x232458u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50120 << 16));
label_23245c:
    // 0x23245c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x23245cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_232460:
    // 0x232460: 0x0  nop
    ctx->pc = 0x232460u;
    // NOP
label_232464:
    // 0x232464: 0xe7a00130  swc1        $f0, 0x130($sp)
    ctx->pc = 0x232464u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_232468:
    // 0x232468: 0x3c0443fa  lui         $a0, 0x43FA
    ctx->pc = 0x232468u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17402 << 16));
label_23246c:
    // 0x23246c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x23246cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_232470:
    // 0x232470: 0x0  nop
    ctx->pc = 0x232470u;
    // NOP
label_232474:
    // 0x232474: 0xe7a00134  swc1        $f0, 0x134($sp)
    ctx->pc = 0x232474u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
label_232478:
    // 0x232478: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x232478u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23247c:
    // 0x23247c: 0x0  nop
    ctx->pc = 0x23247cu;
    // NOP
label_232480:
    // 0x232480: 0xe7a00138  swc1        $f0, 0x138($sp)
    ctx->pc = 0x232480u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_232484:
    // 0x232484: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x232484u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_232488:
    // 0x232488: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x232488u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23248c:
    // 0x23248c: 0x0  nop
    ctx->pc = 0x23248cu;
    // NOP
label_232490:
    // 0x232490: 0xe7a0013c  swc1        $f0, 0x13C($sp)
    ctx->pc = 0x232490u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
label_232494:
    // 0x232494: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x232494u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_232498:
    // 0x232498: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x232498u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_23249c:
    // 0x23249c: 0x27a60130  addiu       $a2, $sp, 0x130
    ctx->pc = 0x23249cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_2324a0:
    // 0x2324a0: 0xc040bf4  jal         func_102FD0
label_2324a4:
    if (ctx->pc == 0x2324A4u) {
        ctx->pc = 0x2324A8u;
        goto label_2324a8;
    }
    ctx->pc = 0x2324A0u;
    SET_GPR_U32(ctx, 31, 0x2324A8u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x2324A8u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2324A8u) { return; }
    ctx->pc = 0x2324A8u;
label_2324a8:
    // 0x2324a8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2324a8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2324ac:
    // 0x2324ac: 0x26230030  addiu       $v1, $s1, 0x30
    ctx->pc = 0x2324acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
label_2324b0:
    // 0x2324b0: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x2324b0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_2324b4:
    // 0x2324b4: 0xc05cfdc  jal         func_173F70
label_2324b8:
    if (ctx->pc == 0x2324B8u) {
        ctx->pc = 0x2324BCu;
        goto label_2324bc;
    }
    ctx->pc = 0x2324B4u;
    SET_GPR_U32(ctx, 31, 0x2324BCu);
    ctx->pc = 0x173F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173F70u, 0x2324B4u, 0x2324BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2324BCu;
label_2324bc:
    // 0x2324bc: 0xe7a001cc  swc1        $f0, 0x1CC($sp)
    ctx->pc = 0x2324bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 460), bits); }
label_2324c0:
    // 0x2324c0: 0x3c03c743  lui         $v1, 0xC743
    ctx->pc = 0x2324c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51011 << 16));
label_2324c4:
    // 0x2324c4: 0x34675000  ori         $a3, $v1, 0x5000
    ctx->pc = 0x2324c4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)20480);
label_2324c8:
    // 0x2324c8: 0x44870800  mtc1        $a3, $f1
    ctx->pc = 0x2324c8u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2324cc:
    // 0x2324cc: 0xc7a001cc  lwc1        $f0, 0x1CC($sp)
    ctx->pc = 0x2324ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 460)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2324d0:
    // 0x2324d0: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2324d0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2324d4:
    // 0x2324d4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2324d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2324d8:
    // 0x2324d8: 0x70802e28  paddub      $a1, $a0, $zero
    ctx->pc = 0x2324d8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
label_2324dc:
    // 0x2324dc: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_2324e0:
    if (ctx->pc == 0x2324E0u) {
        ctx->pc = 0x2324E4u;
        goto label_2324e4;
    }
    ctx->pc = 0x2324DCu;
    {
        const bool branch_taken_0x2324dc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2324dc) {
            ctx->pc = 0x2324E8u;
            goto label_2324e8;
        }
    }
    ctx->pc = 0x2324E4u;
label_2324e4:
    // 0x2324e4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2324e4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2324e8:
    // 0x2324e8: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x2324e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_2324ec:
    // 0x2324ec: 0xc4a10024  lwc1        $f1, 0x24($a1)
    ctx->pc = 0x2324ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2324f0:
    // 0x2324f0: 0xc7a001cc  lwc1        $f0, 0x1CC($sp)
    ctx->pc = 0x2324f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 460)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2324f4:
    // 0x2324f4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2324f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2324f8:
    // 0x2324f8: 0x0  nop
    ctx->pc = 0x2324f8u;
    // NOP
label_2324fc:
    // 0x2324fc: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_232500:
    if (ctx->pc == 0x232500u) {
        ctx->pc = 0x232504u;
        goto label_232504;
    }
    ctx->pc = 0x2324FCu;
    {
        const bool branch_taken_0x2324fc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2324fc) {
            ctx->pc = 0x232510u;
            goto label_232510;
        }
    }
    ctx->pc = 0x232504u;
label_232504:
    // 0x232504: 0xc7a001cc  lwc1        $f0, 0x1CC($sp)
    ctx->pc = 0x232504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 460)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_232508:
    // 0x232508: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x232508u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_23250c:
    // 0x23250c: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x23250cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
label_232510:
    // 0x232510: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x232510u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_232514:
    // 0x232514: 0xc4810024  lwc1        $f1, 0x24($a0)
    ctx->pc = 0x232514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_232518:
    // 0x232518: 0xc7a00134  lwc1        $f0, 0x134($sp)
    ctx->pc = 0x232518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_23251c:
    // 0x23251c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x23251cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_232520:
    // 0x232520: 0x0  nop
    ctx->pc = 0x232520u;
    // NOP
label_232524:
    // 0x232524: 0x4500001e  bc1f        . + 4 + (0x1E << 2)
label_232528:
    if (ctx->pc == 0x232528u) {
        ctx->pc = 0x23252Cu;
        goto label_23252c;
    }
    ctx->pc = 0x232524u;
    {
        const bool branch_taken_0x232524 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x232524) {
            ctx->pc = 0x2325A0u;
            goto label_2325a0;
        }
    }
    ctx->pc = 0x23252Cu;
label_23252c:
    // 0x23252c: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x23252cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_232530:
    // 0x232530: 0xc4a1001c  lwc1        $f1, 0x1C($a1)
    ctx->pc = 0x232530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_232534:
    // 0x232534: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x232534u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_232538:
    // 0x232538: 0x0  nop
    ctx->pc = 0x232538u;
    // NOP
label_23253c:
    // 0x23253c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x23253cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_232540:
    // 0x232540: 0x0  nop
    ctx->pc = 0x232540u;
    // NOP
label_232544:
    // 0x232544: 0x45000016  bc1f        . + 4 + (0x16 << 2)
label_232548:
    if (ctx->pc == 0x232548u) {
        ctx->pc = 0x23254Cu;
        goto label_23254c;
    }
    ctx->pc = 0x232544u;
    {
        const bool branch_taken_0x232544 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x232544) {
            ctx->pc = 0x2325A0u;
            goto label_2325a0;
        }
    }
    ctx->pc = 0x23254Cu;
label_23254c:
    // 0x23254c: 0x240400b4  addiu       $a0, $zero, 0xB4
    ctx->pc = 0x23254cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
label_232550:
    // 0x232550: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x232550u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_232554:
    // 0x232554: 0xa464002a  sh          $a0, 0x2A($v1)
    ctx->pc = 0x232554u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 42), (uint16_t)GPR_U32(ctx, 4));
label_232558:
    // 0x232558: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x232558u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_23255c:
    // 0x23255c: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x23255cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_232560:
    // 0x232560: 0xa0830029  sb          $v1, 0x29($a0)
    ctx->pc = 0x232560u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 41), (uint8_t)GPR_U32(ctx, 3));
label_232564:
    // 0x232564: 0x3c03469c  lui         $v1, 0x469C
    ctx->pc = 0x232564u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18076 << 16));
label_232568:
    // 0x232568: 0x34654000  ori         $a1, $v1, 0x4000
    ctx->pc = 0x232568u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
label_23256c:
    // 0x23256c: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x23256cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_232570:
    // 0x232570: 0x24040527  addiu       $a0, $zero, 0x527
    ctx->pc = 0x232570u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1319));
label_232574:
    // 0x232574: 0x26250030  addiu       $a1, $s1, 0x30
    ctx->pc = 0x232574u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
label_232578:
    // 0x232578: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x232578u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_23257c:
    // 0x23257c: 0xc067b18  jal         func_19EC60
label_232580:
    if (ctx->pc == 0x232580u) {
        ctx->pc = 0x232584u;
        goto label_232584;
    }
    ctx->pc = 0x23257Cu;
    SET_GPR_U32(ctx, 31, 0x232584u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x23257Cu, 0x232584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232584u;
label_232584:
    // 0x232584: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x232584u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_232588:
    // 0x232588: 0x8fa301d8  lw          $v1, 0x1D8($sp)
    ctx->pc = 0x232588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
label_23258c:
    // 0x23258c: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x23258cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_232590:
    // 0x232590: 0x8ca40030  lw          $a0, 0x30($a1)
    ctx->pc = 0x232590u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
label_232594:
    // 0x232594: 0x2403fbff  addiu       $v1, $zero, -0x401
    ctx->pc = 0x232594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966271));
label_232598:
    // 0x232598: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x232598u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_23259c:
    // 0x23259c: 0xaca30030  sw          $v1, 0x30($a1)
    ctx->pc = 0x23259cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 3));
label_2325a0:
    // 0x2325a0: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x2325a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_2325a4:
    // 0x2325a4: 0x84830030  lh          $v1, 0x30($a0)
    ctx->pc = 0x2325a4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 48)));
label_2325a8:
    // 0x2325a8: 0x2465ffff  addiu       $a1, $v1, -0x1
    ctx->pc = 0x2325a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_2325ac:
    // 0x2325ac: 0xa4850030  sh          $a1, 0x30($a0)
    ctx->pc = 0x2325acu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 48), (uint16_t)GPR_U32(ctx, 5));
label_2325b0:
    // 0x2325b0: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
label_2325b4:
    if (ctx->pc == 0x2325B4u) {
        ctx->pc = 0x2325B8u;
        goto label_2325b8;
    }
    ctx->pc = 0x2325B0u;
    {
        const bool branch_taken_0x2325b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2325b0) {
            ctx->pc = 0x2325E8u;
            goto label_2325e8;
        }
    }
    ctx->pc = 0x2325B8u;
label_2325b8:
    // 0x2325b8: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x2325b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2325bc:
    // 0x2325bc: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x2325bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_2325c0:
    // 0x2325c0: 0xa4830030  sh          $v1, 0x30($a0)
    ctx->pc = 0x2325c0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 48), (uint16_t)GPR_U32(ctx, 3));
label_2325c4:
    // 0x2325c4: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x2325c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
label_2325c8:
    // 0x2325c8: 0x34434000  ori         $v1, $v0, 0x4000
    ctx->pc = 0x2325c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_2325cc:
    // 0x2325cc: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x2325ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2325d0:
    // 0x2325d0: 0x24040507  addiu       $a0, $zero, 0x507
    ctx->pc = 0x2325d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1287));
label_2325d4:
    // 0x2325d4: 0x26250030  addiu       $a1, $s1, 0x30
    ctx->pc = 0x2325d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
label_2325d8:
    // 0x2325d8: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x2325d8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2325dc:
    // 0x2325dc: 0xc067b18  jal         func_19EC60
label_2325e0:
    if (ctx->pc == 0x2325E0u) {
        ctx->pc = 0x2325E4u;
        goto label_2325e4;
    }
    ctx->pc = 0x2325DCu;
    SET_GPR_U32(ctx, 31, 0x2325E4u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x2325DCu, 0x2325E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2325E4u;
label_2325e4:
    // 0x2325e4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2325e4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2325e8:
    // 0x2325e8: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x2325e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_2325ec:
    // 0x2325ec: 0xc4a1001c  lwc1        $f1, 0x1C($a1)
    ctx->pc = 0x2325ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2325f0:
    // 0x2325f0: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x2325f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
label_2325f4:
    // 0x2325f4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2325f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2325f8:
    // 0x2325f8: 0x0  nop
    ctx->pc = 0x2325f8u;
    // NOP
label_2325fc:
    // 0x2325fc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2325fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_232600:
    // 0x232600: 0x0  nop
    ctx->pc = 0x232600u;
    // NOP
label_232604:
    // 0x232604: 0x4500008a  bc1f        . + 4 + (0x8A << 2)
label_232608:
    if (ctx->pc == 0x232608u) {
        ctx->pc = 0x23260Cu;
        goto label_23260c;
    }
    ctx->pc = 0x232604u;
    {
        const bool branch_taken_0x232604 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x232604) {
            ctx->pc = 0x232830u;
            goto label_232830;
        }
    }
    ctx->pc = 0x23260Cu;
label_23260c:
    // 0x23260c: 0xafb10170  sw          $s1, 0x170($sp)
    ctx->pc = 0x23260cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 17));
label_232610:
    // 0x232610: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x232610u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_232614:
    // 0x232614: 0x0  nop
    ctx->pc = 0x232614u;
    // NOP
label_232618:
    // 0x232618: 0xe7a00180  swc1        $f0, 0x180($sp)
    ctx->pc = 0x232618u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
label_23261c:
    // 0x23261c: 0x3c0442c8  lui         $a0, 0x42C8
    ctx->pc = 0x23261cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17096 << 16));
label_232620:
    // 0x232620: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x232620u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_232624:
    // 0x232624: 0x0  nop
    ctx->pc = 0x232624u;
    // NOP
label_232628:
    // 0x232628: 0xe7a00184  swc1        $f0, 0x184($sp)
    ctx->pc = 0x232628u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 388), bits); }
label_23262c:
    // 0x23262c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23262cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_232630:
    // 0x232630: 0x0  nop
    ctx->pc = 0x232630u;
    // NOP
label_232634:
    // 0x232634: 0xe7a00188  swc1        $f0, 0x188($sp)
    ctx->pc = 0x232634u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 392), bits); }
label_232638:
    // 0x232638: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x232638u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_23263c:
    // 0x23263c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x23263cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_232640:
    // 0x232640: 0x0  nop
    ctx->pc = 0x232640u;
    // NOP
label_232644:
    // 0x232644: 0xe7ac018c  swc1        $f12, 0x18C($sp)
    ctx->pc = 0x232644u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 396), bits); }
label_232648:
    // 0x232648: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x232648u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
label_23264c:
    // 0x23264c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x23264cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_232650:
    // 0x232650: 0x0  nop
    ctx->pc = 0x232650u;
    // NOP
label_232654:
    // 0x232654: 0xe7ad0190  swc1        $f13, 0x190($sp)
    ctx->pc = 0x232654u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 400), bits); }
label_232658:
    // 0x232658: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x232658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_23265c:
    // 0x23265c: 0xa7a20194  sh          $v0, 0x194($sp)
    ctx->pc = 0x23265cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 404), (uint16_t)GPR_U32(ctx, 2));
label_232660:
    // 0x232660: 0xa3a00196  sb          $zero, 0x196($sp)
    ctx->pc = 0x232660u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 406), (uint8_t)GPR_U32(ctx, 0));
label_232664:
    // 0x232664: 0xa3a00197  sb          $zero, 0x197($sp)
    ctx->pc = 0x232664u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 407), (uint8_t)GPR_U32(ctx, 0));
label_232668:
    // 0x232668: 0x8fa401d8  lw          $a0, 0x1D8($sp)
    ctx->pc = 0x232668u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
label_23266c:
    // 0x23266c: 0x27a50170  addiu       $a1, $sp, 0x170
    ctx->pc = 0x23266cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_232670:
    // 0x232670: 0xc06ce90  jal         func_1B3A40
label_232674:
    if (ctx->pc == 0x232674u) {
        ctx->pc = 0x232678u;
        goto label_232678;
    }
    ctx->pc = 0x232670u;
    SET_GPR_U32(ctx, 31, 0x232678u);
    ctx->pc = 0x1B3A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3A40u, 0x232670u, 0x232678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232678u;
label_232678:
    // 0x232678: 0x1040006d  beqz        $v0, . + 4 + (0x6D << 2)
label_23267c:
    if (ctx->pc == 0x23267Cu) {
        ctx->pc = 0x232680u;
        goto label_232680;
    }
    ctx->pc = 0x232678u;
    {
        const bool branch_taken_0x232678 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x232678) {
            ctx->pc = 0x232830u;
            goto label_232830;
        }
    }
    ctx->pc = 0x232680u;
label_232680:
    // 0x232680: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x232680u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_232684:
    // 0x232684: 0x0  nop
    ctx->pc = 0x232684u;
    // NOP
label_232688:
    // 0x232688: 0xe7ae01a0  swc1        $f14, 0x1A0($sp)
    ctx->pc = 0x232688u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
label_23268c:
    // 0x23268c: 0x44807800  mtc1        $zero, $f15
    ctx->pc = 0x23268cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_232690:
    // 0x232690: 0x0  nop
    ctx->pc = 0x232690u;
    // NOP
label_232694:
    // 0x232694: 0xe7af01a4  swc1        $f15, 0x1A4($sp)
    ctx->pc = 0x232694u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 420), bits); }
label_232698:
    // 0x232698: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x232698u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_23269c:
    // 0x23269c: 0x0  nop
    ctx->pc = 0x23269cu;
    // NOP
label_2326a0:
    // 0x2326a0: 0xe7a101a8  swc1        $f1, 0x1A8($sp)
    ctx->pc = 0x2326a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 424), bits); }
label_2326a4:
    // 0x2326a4: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x2326a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
label_2326a8:
    // 0x2326a8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2326a8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2326ac:
    // 0x2326ac: 0x0  nop
    ctx->pc = 0x2326acu;
    // NOP
label_2326b0:
    // 0x2326b0: 0xe7a001ac  swc1        $f0, 0x1AC($sp)
    ctx->pc = 0x2326b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 428), bits); }
label_2326b4:
    // 0x2326b4: 0x8fa501d8  lw          $a1, 0x1D8($sp)
    ctx->pc = 0x2326b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
label_2326b8:
    // 0x2326b8: 0x5103c  dsll32      $v0, $a1, 0
    ctx->pc = 0x2326b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 0));
label_2326bc:
    // 0x2326bc: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2326bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_2326c0:
    // 0x2326c0: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x2326c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_2326c4:
    // 0x2326c4: 0x32438  dsll        $a0, $v1, 16
    ctx->pc = 0x2326c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << 16);
label_2326c8:
    // 0x2326c8: 0x3485ffff  ori         $a1, $a0, 0xFFFF
    ctx->pc = 0x2326c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_2326cc:
    // 0x2326cc: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x2326ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
label_2326d0:
    // 0x2326d0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2326d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_2326d4:
    // 0x2326d4: 0x34640006  ori         $a0, $v1, 0x6
    ctx->pc = 0x2326d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)6);
label_2326d8:
    // 0x2326d8: 0x27a501a0  addiu       $a1, $sp, 0x1A0
    ctx->pc = 0x2326d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_2326dc:
    // 0x2326dc: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x2326dcu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2326e0:
    // 0x2326e0: 0x72203e28  paddub      $a3, $s1, $zero
    ctx->pc = 0x2326e0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_2326e4:
    // 0x2326e4: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x2326e4u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2326e8:
    // 0x2326e8: 0xc06371c  jal         func_18DC70
label_2326ec:
    if (ctx->pc == 0x2326ECu) {
        ctx->pc = 0x2326F0u;
        goto label_2326f0;
    }
    ctx->pc = 0x2326E8u;
    SET_GPR_U32(ctx, 31, 0x2326F0u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x2326E8u, 0x2326F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2326F0u;
label_2326f0:
    // 0x2326f0: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x2326f0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2326f4:
    // 0x2326f4: 0xc067694  jal         func_19DA50
label_2326f8:
    if (ctx->pc == 0x2326F8u) {
        ctx->pc = 0x2326FCu;
        goto label_2326fc;
    }
    ctx->pc = 0x2326F4u;
    SET_GPR_U32(ctx, 31, 0x2326FCu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2326F4u, 0x2326FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2326FCu;
label_2326fc:
    // 0x2326fc: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x2326fcu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_232700:
    // 0x232700: 0x4e00006  bltz        $a3, . + 4 + (0x6 << 2)
label_232704:
    if (ctx->pc == 0x232704u) {
        ctx->pc = 0x232708u;
        goto label_232708;
    }
    ctx->pc = 0x232700u;
    {
        const bool branch_taken_0x232700 = (GPR_S32(ctx, 7) < 0);
        if (branch_taken_0x232700) {
            ctx->pc = 0x23271Cu;
            goto label_23271c;
        }
    }
    ctx->pc = 0x232708u;
label_232708:
    // 0x232708: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x232708u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23270c:
    // 0x23270c: 0x0  nop
    ctx->pc = 0x23270cu;
    // NOP
label_232710:
    // 0x232710: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x232710u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_232714:
    // 0x232714: 0x10000008  b           . + 4 + (0x8 << 2)
label_232718:
    if (ctx->pc == 0x232718u) {
        ctx->pc = 0x23271Cu;
        goto label_23271c;
    }
    ctx->pc = 0x232714u;
    {
        const bool branch_taken_0x232714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x232714) {
            ctx->pc = 0x232738u;
            goto label_232738;
        }
    }
    ctx->pc = 0x23271Cu;
label_23271c:
    // 0x23271c: 0x71042  srl         $v0, $a3, 1
    ctx->pc = 0x23271cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 1));
label_232720:
    // 0x232720: 0x30e60001  andi        $a2, $a3, 0x1
    ctx->pc = 0x232720u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
label_232724:
    // 0x232724: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x232724u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
label_232728:
    // 0x232728: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x232728u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_23272c:
    // 0x23272c: 0x0  nop
    ctx->pc = 0x23272cu;
    // NOP
label_232730:
    // 0x232730: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x232730u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_232734:
    // 0x232734: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x232734u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
label_232738:
    // 0x232738: 0xc7a001a4  lwc1        $f0, 0x1A4($sp)
    ctx->pc = 0x232738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_23273c:
    // 0x23273c: 0x460c0300  add.s       $f12, $f0, $f12
    ctx->pc = 0x23273cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
label_232740:
    // 0x232740: 0xe7ac01a4  swc1        $f12, 0x1A4($sp)
    ctx->pc = 0x232740u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 420), bits); }
label_232744:
    // 0x232744: 0x8fa701d8  lw          $a3, 0x1D8($sp)
    ctx->pc = 0x232744u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
label_232748:
    // 0x232748: 0x7103c  dsll32      $v0, $a3, 0
    ctx->pc = 0x232748u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 0));
label_23274c:
    // 0x23274c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x23274cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_232750:
    // 0x232750: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x232750u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_232754:
    // 0x232754: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x232754u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_232758:
    // 0x232758: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x232758u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_23275c:
    // 0x23275c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x23275cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_232760:
    // 0x232760: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x232760u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_232764:
    // 0x232764: 0x34440006  ori         $a0, $v0, 0x6
    ctx->pc = 0x232764u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
label_232768:
    // 0x232768: 0x27b201a0  addiu       $s2, $sp, 0x1A0
    ctx->pc = 0x232768u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_23276c:
    // 0x23276c: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x23276cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
label_232770:
    // 0x232770: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x232770u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_232774:
    // 0x232774: 0x72203e28  paddub      $a3, $s1, $zero
    ctx->pc = 0x232774u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_232778:
    // 0x232778: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x232778u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_23277c:
    // 0x23277c: 0xc06371c  jal         func_18DC70
label_232780:
    if (ctx->pc == 0x232780u) {
        ctx->pc = 0x232784u;
        goto label_232784;
    }
    ctx->pc = 0x23277Cu;
    SET_GPR_U32(ctx, 31, 0x232784u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x23277Cu, 0x232784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232784u;
label_232784:
    // 0x232784: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x232784u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
label_232788:
    // 0x232788: 0x3c05000f  lui         $a1, 0xF
    ctx->pc = 0x232788u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15 << 16));
label_23278c:
    // 0x23278c: 0xc0684d8  jal         func_1A1360
label_232790:
    if (ctx->pc == 0x232790u) {
        ctx->pc = 0x232794u;
        goto label_232794;
    }
    ctx->pc = 0x23278Cu;
    SET_GPR_U32(ctx, 31, 0x232794u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x23278Cu, 0x232794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232794u;
label_232794:
    // 0x232794: 0x3c0402fa  lui         $a0, 0x2FA
    ctx->pc = 0x232794u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)762 << 16));
label_232798:
    // 0x232798: 0x3c050005  lui         $a1, 0x5
    ctx->pc = 0x232798u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)5 << 16));
label_23279c:
    // 0x23279c: 0xc0684d8  jal         func_1A1360
label_2327a0:
    if (ctx->pc == 0x2327A0u) {
        ctx->pc = 0x2327A4u;
        goto label_2327a4;
    }
    ctx->pc = 0x23279Cu;
    SET_GPR_U32(ctx, 31, 0x2327A4u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x23279Cu, 0x2327A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2327A4u;
label_2327a4:
    // 0x2327a4: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x2327a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
label_2327a8:
    // 0x2327a8: 0x34434000  ori         $v1, $v0, 0x4000
    ctx->pc = 0x2327a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_2327ac:
    // 0x2327ac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2327acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2327b0:
    // 0x2327b0: 0x24040511  addiu       $a0, $zero, 0x511
    ctx->pc = 0x2327b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1297));
label_2327b4:
    // 0x2327b4: 0x26250030  addiu       $a1, $s1, 0x30
    ctx->pc = 0x2327b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
label_2327b8:
    // 0x2327b8: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2327b8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_2327bc:
    // 0x2327bc: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x2327bcu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2327c0:
    // 0x2327c0: 0xc067b18  jal         func_19EC60
label_2327c4:
    if (ctx->pc == 0x2327C4u) {
        ctx->pc = 0x2327C8u;
        goto label_2327c8;
    }
    ctx->pc = 0x2327C0u;
    SET_GPR_U32(ctx, 31, 0x2327C8u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x2327C0u, 0x2327C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2327C8u;
label_2327c8:
    // 0x2327c8: 0x10000019  b           . + 4 + (0x19 << 2)
label_2327cc:
    if (ctx->pc == 0x2327CCu) {
        ctx->pc = 0x2327D0u;
        goto label_2327d0;
    }
    ctx->pc = 0x2327C8u;
    {
        const bool branch_taken_0x2327c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2327c8) {
            ctx->pc = 0x232830u;
            goto label_232830;
        }
    }
    ctx->pc = 0x2327D0u;
label_2327d0:
    // 0x2327d0: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x2327d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_2327d4:
    // 0x2327d4: 0x8485002a  lh          $a1, 0x2A($a0)
    ctx->pc = 0x2327d4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 42)));
label_2327d8:
    // 0x2327d8: 0x24a3ffff  addiu       $v1, $a1, -0x1
    ctx->pc = 0x2327d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_2327dc:
    // 0x2327dc: 0xa483002a  sh          $v1, 0x2A($a0)
    ctx->pc = 0x2327dcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 42), (uint16_t)GPR_U32(ctx, 3));
label_2327e0:
    // 0x2327e0: 0x14a00013  bnez        $a1, . + 4 + (0x13 << 2)
label_2327e4:
    if (ctx->pc == 0x2327E4u) {
        ctx->pc = 0x2327E8u;
        goto label_2327e8;
    }
    ctx->pc = 0x2327E0u;
    {
        const bool branch_taken_0x2327e0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x2327e0) {
            ctx->pc = 0x232830u;
            goto label_232830;
        }
    }
    ctx->pc = 0x2327E8u;
label_2327e8:
    // 0x2327e8: 0xa2800000  sb          $zero, 0x0($s4)
    ctx->pc = 0x2327e8u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 0));
label_2327ec:
    // 0x2327ec: 0x8e960034  lw          $s6, 0x34($s4)
    ctx->pc = 0x2327ecu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 52)));
label_2327f0:
    // 0x2327f0: 0x8ec20024  lw          $v0, 0x24($s6)
    ctx->pc = 0x2327f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 36)));
label_2327f4:
    // 0x2327f4: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x2327f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_2327f8:
    // 0x2327f8: 0xaec20024  sw          $v0, 0x24($s6)
    ctx->pc = 0x2327f8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 36), GPR_U32(ctx, 2));
label_2327fc:
    // 0x2327fc: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2327fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_232800:
    // 0x232800: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x232800u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_232804:
    // 0x232804: 0xa0820029  sb          $v0, 0x29($a0)
    ctx->pc = 0x232804u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 41), (uint8_t)GPR_U32(ctx, 2));
label_232808:
    // 0x232808: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x232808u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
label_23280c:
    // 0x23280c: 0x34454000  ori         $a1, $v0, 0x4000
    ctx->pc = 0x23280cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_232810:
    // 0x232810: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x232810u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_232814:
    // 0x232814: 0x2402051e  addiu       $v0, $zero, 0x51E
    ctx->pc = 0x232814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1310));
label_232818:
    // 0x232818: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x232818u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_23281c:
    // 0x23281c: 0x26250030  addiu       $a1, $s1, 0x30
    ctx->pc = 0x23281cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
label_232820:
    // 0x232820: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x232820u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_232824:
    // 0x232824: 0xc067b18  jal         func_19EC60
label_232828:
    if (ctx->pc == 0x232828u) {
        ctx->pc = 0x23282Cu;
        goto label_23282c;
    }
    ctx->pc = 0x232824u;
    SET_GPR_U32(ctx, 31, 0x23282Cu);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x232824u, 0x23282Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23282Cu;
label_23282c:
    // 0x23282c: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x23282cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_232830:
    // 0x232830: 0x7bbf0080  lq          $ra, 0x80($sp)
    ctx->pc = 0x232830u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_232834:
    // 0x232834: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x232834u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_232838:
    // 0x232838: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x232838u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_23283c:
    // 0x23283c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x23283cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_232840:
    // 0x232840: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x232840u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_232844:
    // 0x232844: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x232844u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_232848:
    // 0x232848: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x232848u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_23284c:
    // 0x23284c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x23284cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_232850:
    // 0x232850: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x232850u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_232854:
    // 0x232854: 0x27bd01e0  addiu       $sp, $sp, 0x1E0
    ctx->pc = 0x232854u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
label_232858:
    // 0x232858: 0x3e00008  jr          $ra
label_23285c:
    if (ctx->pc == 0x23285Cu) {
        ctx->pc = 0x232860u;
        goto label_fallthrough_0x232858;
    }
    ctx->pc = 0x232858u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x232858u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x232858:
    ctx->pc = 0x232860u;
}
