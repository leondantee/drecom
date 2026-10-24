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

// Function: Om18_R1_die00
// Address: 0x319290 - 0x31a87c
void Om18_R1_die00_0x319290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Om18_R1_die00_0x319290");
#endif

    switch (ctx->pc) {
        case 0x319290u: goto label_319290;
        case 0x319294u: goto label_319294;
        case 0x319298u: goto label_319298;
        case 0x31929cu: goto label_31929c;
        case 0x3192a0u: goto label_3192a0;
        case 0x3192a4u: goto label_3192a4;
        case 0x3192a8u: goto label_3192a8;
        case 0x3192acu: goto label_3192ac;
        case 0x3192b0u: goto label_3192b0;
        case 0x3192b4u: goto label_3192b4;
        case 0x3192b8u: goto label_3192b8;
        case 0x3192bcu: goto label_3192bc;
        case 0x3192c0u: goto label_3192c0;
        case 0x3192c4u: goto label_3192c4;
        case 0x3192c8u: goto label_3192c8;
        case 0x3192ccu: goto label_3192cc;
        case 0x3192d0u: goto label_3192d0;
        case 0x3192d4u: goto label_3192d4;
        case 0x3192d8u: goto label_3192d8;
        case 0x3192dcu: goto label_3192dc;
        case 0x3192e0u: goto label_3192e0;
        case 0x3192e4u: goto label_3192e4;
        case 0x3192e8u: goto label_3192e8;
        case 0x3192ecu: goto label_3192ec;
        case 0x3192f0u: goto label_3192f0;
        case 0x3192f4u: goto label_3192f4;
        case 0x3192f8u: goto label_3192f8;
        case 0x3192fcu: goto label_3192fc;
        case 0x319300u: goto label_319300;
        case 0x319304u: goto label_319304;
        case 0x319308u: goto label_319308;
        case 0x31930cu: goto label_31930c;
        case 0x319310u: goto label_319310;
        case 0x319314u: goto label_319314;
        case 0x319318u: goto label_319318;
        case 0x31931cu: goto label_31931c;
        case 0x319320u: goto label_319320;
        case 0x319324u: goto label_319324;
        case 0x319328u: goto label_319328;
        case 0x31932cu: goto label_31932c;
        case 0x319330u: goto label_319330;
        case 0x319334u: goto label_319334;
        case 0x319338u: goto label_319338;
        case 0x31933cu: goto label_31933c;
        case 0x319340u: goto label_319340;
        case 0x319344u: goto label_319344;
        case 0x319348u: goto label_319348;
        case 0x31934cu: goto label_31934c;
        case 0x319350u: goto label_319350;
        case 0x319354u: goto label_319354;
        case 0x319358u: goto label_319358;
        case 0x31935cu: goto label_31935c;
        case 0x319360u: goto label_319360;
        case 0x319364u: goto label_319364;
        case 0x319368u: goto label_319368;
        case 0x31936cu: goto label_31936c;
        case 0x319370u: goto label_319370;
        case 0x319374u: goto label_319374;
        case 0x319378u: goto label_319378;
        case 0x31937cu: goto label_31937c;
        case 0x319380u: goto label_319380;
        case 0x319384u: goto label_319384;
        case 0x319388u: goto label_319388;
        case 0x31938cu: goto label_31938c;
        case 0x319390u: goto label_319390;
        case 0x319394u: goto label_319394;
        case 0x319398u: goto label_319398;
        case 0x31939cu: goto label_31939c;
        case 0x3193a0u: goto label_3193a0;
        case 0x3193a4u: goto label_3193a4;
        case 0x3193a8u: goto label_3193a8;
        case 0x3193acu: goto label_3193ac;
        case 0x3193b0u: goto label_3193b0;
        case 0x3193b4u: goto label_3193b4;
        case 0x3193b8u: goto label_3193b8;
        case 0x3193bcu: goto label_3193bc;
        case 0x3193c0u: goto label_3193c0;
        case 0x3193c4u: goto label_3193c4;
        case 0x3193c8u: goto label_3193c8;
        case 0x3193ccu: goto label_3193cc;
        case 0x3193d0u: goto label_3193d0;
        case 0x3193d4u: goto label_3193d4;
        case 0x3193d8u: goto label_3193d8;
        case 0x3193dcu: goto label_3193dc;
        case 0x3193e0u: goto label_3193e0;
        case 0x3193e4u: goto label_3193e4;
        case 0x3193e8u: goto label_3193e8;
        case 0x3193ecu: goto label_3193ec;
        case 0x3193f0u: goto label_3193f0;
        case 0x3193f4u: goto label_3193f4;
        case 0x3193f8u: goto label_3193f8;
        case 0x3193fcu: goto label_3193fc;
        case 0x319400u: goto label_319400;
        case 0x319404u: goto label_319404;
        case 0x319408u: goto label_319408;
        case 0x31940cu: goto label_31940c;
        case 0x319410u: goto label_319410;
        case 0x319414u: goto label_319414;
        case 0x319418u: goto label_319418;
        case 0x31941cu: goto label_31941c;
        case 0x319420u: goto label_319420;
        case 0x319424u: goto label_319424;
        case 0x319428u: goto label_319428;
        case 0x31942cu: goto label_31942c;
        case 0x319430u: goto label_319430;
        case 0x319434u: goto label_319434;
        case 0x319438u: goto label_319438;
        case 0x31943cu: goto label_31943c;
        case 0x319440u: goto label_319440;
        case 0x319444u: goto label_319444;
        case 0x319448u: goto label_319448;
        case 0x31944cu: goto label_31944c;
        case 0x319450u: goto label_319450;
        case 0x319454u: goto label_319454;
        case 0x319458u: goto label_319458;
        case 0x31945cu: goto label_31945c;
        case 0x319460u: goto label_319460;
        case 0x319464u: goto label_319464;
        case 0x319468u: goto label_319468;
        case 0x31946cu: goto label_31946c;
        case 0x319470u: goto label_319470;
        case 0x319474u: goto label_319474;
        case 0x319478u: goto label_319478;
        case 0x31947cu: goto label_31947c;
        case 0x319480u: goto label_319480;
        case 0x319484u: goto label_319484;
        case 0x319488u: goto label_319488;
        case 0x31948cu: goto label_31948c;
        case 0x319490u: goto label_319490;
        case 0x319494u: goto label_319494;
        case 0x319498u: goto label_319498;
        case 0x31949cu: goto label_31949c;
        case 0x3194a0u: goto label_3194a0;
        case 0x3194a4u: goto label_3194a4;
        case 0x3194a8u: goto label_3194a8;
        case 0x3194acu: goto label_3194ac;
        case 0x3194b0u: goto label_3194b0;
        case 0x3194b4u: goto label_3194b4;
        case 0x3194b8u: goto label_3194b8;
        case 0x3194bcu: goto label_3194bc;
        case 0x3194c0u: goto label_3194c0;
        case 0x3194c4u: goto label_3194c4;
        case 0x3194c8u: goto label_3194c8;
        case 0x3194ccu: goto label_3194cc;
        case 0x3194d0u: goto label_3194d0;
        case 0x3194d4u: goto label_3194d4;
        case 0x3194d8u: goto label_3194d8;
        case 0x3194dcu: goto label_3194dc;
        case 0x3194e0u: goto label_3194e0;
        case 0x3194e4u: goto label_3194e4;
        case 0x3194e8u: goto label_3194e8;
        case 0x3194ecu: goto label_3194ec;
        case 0x3194f0u: goto label_3194f0;
        case 0x3194f4u: goto label_3194f4;
        case 0x3194f8u: goto label_3194f8;
        case 0x3194fcu: goto label_3194fc;
        case 0x319500u: goto label_319500;
        case 0x319504u: goto label_319504;
        case 0x319508u: goto label_319508;
        case 0x31950cu: goto label_31950c;
        case 0x319510u: goto label_319510;
        case 0x319514u: goto label_319514;
        case 0x319518u: goto label_319518;
        case 0x31951cu: goto label_31951c;
        case 0x319520u: goto label_319520;
        case 0x319524u: goto label_319524;
        case 0x319528u: goto label_319528;
        case 0x31952cu: goto label_31952c;
        case 0x319530u: goto label_319530;
        case 0x319534u: goto label_319534;
        case 0x319538u: goto label_319538;
        case 0x31953cu: goto label_31953c;
        case 0x319540u: goto label_319540;
        case 0x319544u: goto label_319544;
        case 0x319548u: goto label_319548;
        case 0x31954cu: goto label_31954c;
        case 0x319550u: goto label_319550;
        case 0x319554u: goto label_319554;
        case 0x319558u: goto label_319558;
        case 0x31955cu: goto label_31955c;
        case 0x319560u: goto label_319560;
        case 0x319564u: goto label_319564;
        case 0x319568u: goto label_319568;
        case 0x31956cu: goto label_31956c;
        case 0x319570u: goto label_319570;
        case 0x319574u: goto label_319574;
        case 0x319578u: goto label_319578;
        case 0x31957cu: goto label_31957c;
        case 0x319580u: goto label_319580;
        case 0x319584u: goto label_319584;
        case 0x319588u: goto label_319588;
        case 0x31958cu: goto label_31958c;
        case 0x319590u: goto label_319590;
        case 0x319594u: goto label_319594;
        case 0x319598u: goto label_319598;
        case 0x31959cu: goto label_31959c;
        case 0x3195a0u: goto label_3195a0;
        case 0x3195a4u: goto label_3195a4;
        case 0x3195a8u: goto label_3195a8;
        case 0x3195acu: goto label_3195ac;
        case 0x3195b0u: goto label_3195b0;
        case 0x3195b4u: goto label_3195b4;
        case 0x3195b8u: goto label_3195b8;
        case 0x3195bcu: goto label_3195bc;
        case 0x3195c0u: goto label_3195c0;
        case 0x3195c4u: goto label_3195c4;
        case 0x3195c8u: goto label_3195c8;
        case 0x3195ccu: goto label_3195cc;
        case 0x3195d0u: goto label_3195d0;
        case 0x3195d4u: goto label_3195d4;
        case 0x3195d8u: goto label_3195d8;
        case 0x3195dcu: goto label_3195dc;
        case 0x3195e0u: goto label_3195e0;
        case 0x3195e4u: goto label_3195e4;
        case 0x3195e8u: goto label_3195e8;
        case 0x3195ecu: goto label_3195ec;
        case 0x3195f0u: goto label_3195f0;
        case 0x3195f4u: goto label_3195f4;
        case 0x3195f8u: goto label_3195f8;
        case 0x3195fcu: goto label_3195fc;
        case 0x319600u: goto label_319600;
        case 0x319604u: goto label_319604;
        case 0x319608u: goto label_319608;
        case 0x31960cu: goto label_31960c;
        case 0x319610u: goto label_319610;
        case 0x319614u: goto label_319614;
        case 0x319618u: goto label_319618;
        case 0x31961cu: goto label_31961c;
        case 0x319620u: goto label_319620;
        case 0x319624u: goto label_319624;
        case 0x319628u: goto label_319628;
        case 0x31962cu: goto label_31962c;
        case 0x319630u: goto label_319630;
        case 0x319634u: goto label_319634;
        case 0x319638u: goto label_319638;
        case 0x31963cu: goto label_31963c;
        case 0x319640u: goto label_319640;
        case 0x319644u: goto label_319644;
        case 0x319648u: goto label_319648;
        case 0x31964cu: goto label_31964c;
        case 0x319650u: goto label_319650;
        case 0x319654u: goto label_319654;
        case 0x319658u: goto label_319658;
        case 0x31965cu: goto label_31965c;
        case 0x319660u: goto label_319660;
        case 0x319664u: goto label_319664;
        case 0x319668u: goto label_319668;
        case 0x31966cu: goto label_31966c;
        case 0x319670u: goto label_319670;
        case 0x319674u: goto label_319674;
        case 0x319678u: goto label_319678;
        case 0x31967cu: goto label_31967c;
        case 0x319680u: goto label_319680;
        case 0x319684u: goto label_319684;
        case 0x319688u: goto label_319688;
        case 0x31968cu: goto label_31968c;
        case 0x319690u: goto label_319690;
        case 0x319694u: goto label_319694;
        case 0x319698u: goto label_319698;
        case 0x31969cu: goto label_31969c;
        case 0x3196a0u: goto label_3196a0;
        case 0x3196a4u: goto label_3196a4;
        case 0x3196a8u: goto label_3196a8;
        case 0x3196acu: goto label_3196ac;
        case 0x3196b0u: goto label_3196b0;
        case 0x3196b4u: goto label_3196b4;
        case 0x3196b8u: goto label_3196b8;
        case 0x3196bcu: goto label_3196bc;
        case 0x3196c0u: goto label_3196c0;
        case 0x3196c4u: goto label_3196c4;
        case 0x3196c8u: goto label_3196c8;
        case 0x3196ccu: goto label_3196cc;
        case 0x3196d0u: goto label_3196d0;
        case 0x3196d4u: goto label_3196d4;
        case 0x3196d8u: goto label_3196d8;
        case 0x3196dcu: goto label_3196dc;
        case 0x3196e0u: goto label_3196e0;
        case 0x3196e4u: goto label_3196e4;
        case 0x3196e8u: goto label_3196e8;
        case 0x3196ecu: goto label_3196ec;
        case 0x3196f0u: goto label_3196f0;
        case 0x3196f4u: goto label_3196f4;
        case 0x3196f8u: goto label_3196f8;
        case 0x3196fcu: goto label_3196fc;
        case 0x319700u: goto label_319700;
        case 0x319704u: goto label_319704;
        case 0x319708u: goto label_319708;
        case 0x31970cu: goto label_31970c;
        case 0x319710u: goto label_319710;
        case 0x319714u: goto label_319714;
        case 0x319718u: goto label_319718;
        case 0x31971cu: goto label_31971c;
        case 0x319720u: goto label_319720;
        case 0x319724u: goto label_319724;
        case 0x319728u: goto label_319728;
        case 0x31972cu: goto label_31972c;
        case 0x319730u: goto label_319730;
        case 0x319734u: goto label_319734;
        case 0x319738u: goto label_319738;
        case 0x31973cu: goto label_31973c;
        case 0x319740u: goto label_319740;
        case 0x319744u: goto label_319744;
        case 0x319748u: goto label_319748;
        case 0x31974cu: goto label_31974c;
        case 0x319750u: goto label_319750;
        case 0x319754u: goto label_319754;
        case 0x319758u: goto label_319758;
        case 0x31975cu: goto label_31975c;
        case 0x319760u: goto label_319760;
        case 0x319764u: goto label_319764;
        case 0x319768u: goto label_319768;
        case 0x31976cu: goto label_31976c;
        case 0x319770u: goto label_319770;
        case 0x319774u: goto label_319774;
        case 0x319778u: goto label_319778;
        case 0x31977cu: goto label_31977c;
        case 0x319780u: goto label_319780;
        case 0x319784u: goto label_319784;
        case 0x319788u: goto label_319788;
        case 0x31978cu: goto label_31978c;
        case 0x319790u: goto label_319790;
        case 0x319794u: goto label_319794;
        case 0x319798u: goto label_319798;
        case 0x31979cu: goto label_31979c;
        case 0x3197a0u: goto label_3197a0;
        case 0x3197a4u: goto label_3197a4;
        case 0x3197a8u: goto label_3197a8;
        case 0x3197acu: goto label_3197ac;
        case 0x3197b0u: goto label_3197b0;
        case 0x3197b4u: goto label_3197b4;
        case 0x3197b8u: goto label_3197b8;
        case 0x3197bcu: goto label_3197bc;
        case 0x3197c0u: goto label_3197c0;
        case 0x3197c4u: goto label_3197c4;
        case 0x3197c8u: goto label_3197c8;
        case 0x3197ccu: goto label_3197cc;
        case 0x3197d0u: goto label_3197d0;
        case 0x3197d4u: goto label_3197d4;
        case 0x3197d8u: goto label_3197d8;
        case 0x3197dcu: goto label_3197dc;
        case 0x3197e0u: goto label_3197e0;
        case 0x3197e4u: goto label_3197e4;
        case 0x3197e8u: goto label_3197e8;
        case 0x3197ecu: goto label_3197ec;
        case 0x3197f0u: goto label_3197f0;
        case 0x3197f4u: goto label_3197f4;
        case 0x3197f8u: goto label_3197f8;
        case 0x3197fcu: goto label_3197fc;
        case 0x319800u: goto label_319800;
        case 0x319804u: goto label_319804;
        case 0x319808u: goto label_319808;
        case 0x31980cu: goto label_31980c;
        case 0x319810u: goto label_319810;
        case 0x319814u: goto label_319814;
        case 0x319818u: goto label_319818;
        case 0x31981cu: goto label_31981c;
        case 0x319820u: goto label_319820;
        case 0x319824u: goto label_319824;
        case 0x319828u: goto label_319828;
        case 0x31982cu: goto label_31982c;
        case 0x319830u: goto label_319830;
        case 0x319834u: goto label_319834;
        case 0x319838u: goto label_319838;
        case 0x31983cu: goto label_31983c;
        case 0x319840u: goto label_319840;
        case 0x319844u: goto label_319844;
        case 0x319848u: goto label_319848;
        case 0x31984cu: goto label_31984c;
        case 0x319850u: goto label_319850;
        case 0x319854u: goto label_319854;
        case 0x319858u: goto label_319858;
        case 0x31985cu: goto label_31985c;
        case 0x319860u: goto label_319860;
        case 0x319864u: goto label_319864;
        case 0x319868u: goto label_319868;
        case 0x31986cu: goto label_31986c;
        case 0x319870u: goto label_319870;
        case 0x319874u: goto label_319874;
        case 0x319878u: goto label_319878;
        case 0x31987cu: goto label_31987c;
        case 0x319880u: goto label_319880;
        case 0x319884u: goto label_319884;
        case 0x319888u: goto label_319888;
        case 0x31988cu: goto label_31988c;
        case 0x319890u: goto label_319890;
        case 0x319894u: goto label_319894;
        case 0x319898u: goto label_319898;
        case 0x31989cu: goto label_31989c;
        case 0x3198a0u: goto label_3198a0;
        case 0x3198a4u: goto label_3198a4;
        case 0x3198a8u: goto label_3198a8;
        case 0x3198acu: goto label_3198ac;
        case 0x3198b0u: goto label_3198b0;
        case 0x3198b4u: goto label_3198b4;
        case 0x3198b8u: goto label_3198b8;
        case 0x3198bcu: goto label_3198bc;
        case 0x3198c0u: goto label_3198c0;
        case 0x3198c4u: goto label_3198c4;
        case 0x3198c8u: goto label_3198c8;
        case 0x3198ccu: goto label_3198cc;
        case 0x3198d0u: goto label_3198d0;
        case 0x3198d4u: goto label_3198d4;
        case 0x3198d8u: goto label_3198d8;
        case 0x3198dcu: goto label_3198dc;
        case 0x3198e0u: goto label_3198e0;
        case 0x3198e4u: goto label_3198e4;
        case 0x3198e8u: goto label_3198e8;
        case 0x3198ecu: goto label_3198ec;
        case 0x3198f0u: goto label_3198f0;
        case 0x3198f4u: goto label_3198f4;
        case 0x3198f8u: goto label_3198f8;
        case 0x3198fcu: goto label_3198fc;
        case 0x319900u: goto label_319900;
        case 0x319904u: goto label_319904;
        case 0x319908u: goto label_319908;
        case 0x31990cu: goto label_31990c;
        case 0x319910u: goto label_319910;
        case 0x319914u: goto label_319914;
        case 0x319918u: goto label_319918;
        case 0x31991cu: goto label_31991c;
        case 0x319920u: goto label_319920;
        case 0x319924u: goto label_319924;
        case 0x319928u: goto label_319928;
        case 0x31992cu: goto label_31992c;
        case 0x319930u: goto label_319930;
        case 0x319934u: goto label_319934;
        case 0x319938u: goto label_319938;
        case 0x31993cu: goto label_31993c;
        case 0x319940u: goto label_319940;
        case 0x319944u: goto label_319944;
        case 0x319948u: goto label_319948;
        case 0x31994cu: goto label_31994c;
        case 0x319950u: goto label_319950;
        case 0x319954u: goto label_319954;
        case 0x319958u: goto label_319958;
        case 0x31995cu: goto label_31995c;
        case 0x319960u: goto label_319960;
        case 0x319964u: goto label_319964;
        case 0x319968u: goto label_319968;
        case 0x31996cu: goto label_31996c;
        case 0x319970u: goto label_319970;
        case 0x319974u: goto label_319974;
        case 0x319978u: goto label_319978;
        case 0x31997cu: goto label_31997c;
        case 0x319980u: goto label_319980;
        case 0x319984u: goto label_319984;
        case 0x319988u: goto label_319988;
        case 0x31998cu: goto label_31998c;
        case 0x319990u: goto label_319990;
        case 0x319994u: goto label_319994;
        case 0x319998u: goto label_319998;
        case 0x31999cu: goto label_31999c;
        case 0x3199a0u: goto label_3199a0;
        case 0x3199a4u: goto label_3199a4;
        case 0x3199a8u: goto label_3199a8;
        case 0x3199acu: goto label_3199ac;
        case 0x3199b0u: goto label_3199b0;
        case 0x3199b4u: goto label_3199b4;
        case 0x3199b8u: goto label_3199b8;
        case 0x3199bcu: goto label_3199bc;
        case 0x3199c0u: goto label_3199c0;
        case 0x3199c4u: goto label_3199c4;
        case 0x3199c8u: goto label_3199c8;
        case 0x3199ccu: goto label_3199cc;
        case 0x3199d0u: goto label_3199d0;
        case 0x3199d4u: goto label_3199d4;
        case 0x3199d8u: goto label_3199d8;
        case 0x3199dcu: goto label_3199dc;
        case 0x3199e0u: goto label_3199e0;
        case 0x3199e4u: goto label_3199e4;
        case 0x3199e8u: goto label_3199e8;
        case 0x3199ecu: goto label_3199ec;
        case 0x3199f0u: goto label_3199f0;
        case 0x3199f4u: goto label_3199f4;
        case 0x3199f8u: goto label_3199f8;
        case 0x3199fcu: goto label_3199fc;
        case 0x319a00u: goto label_319a00;
        case 0x319a04u: goto label_319a04;
        case 0x319a08u: goto label_319a08;
        case 0x319a0cu: goto label_319a0c;
        case 0x319a10u: goto label_319a10;
        case 0x319a14u: goto label_319a14;
        case 0x319a18u: goto label_319a18;
        case 0x319a1cu: goto label_319a1c;
        case 0x319a20u: goto label_319a20;
        case 0x319a24u: goto label_319a24;
        case 0x319a28u: goto label_319a28;
        case 0x319a2cu: goto label_319a2c;
        case 0x319a30u: goto label_319a30;
        case 0x319a34u: goto label_319a34;
        case 0x319a38u: goto label_319a38;
        case 0x319a3cu: goto label_319a3c;
        case 0x319a40u: goto label_319a40;
        case 0x319a44u: goto label_319a44;
        case 0x319a48u: goto label_319a48;
        case 0x319a4cu: goto label_319a4c;
        case 0x319a50u: goto label_319a50;
        case 0x319a54u: goto label_319a54;
        case 0x319a58u: goto label_319a58;
        case 0x319a5cu: goto label_319a5c;
        case 0x319a60u: goto label_319a60;
        case 0x319a64u: goto label_319a64;
        case 0x319a68u: goto label_319a68;
        case 0x319a6cu: goto label_319a6c;
        case 0x319a70u: goto label_319a70;
        case 0x319a74u: goto label_319a74;
        case 0x319a78u: goto label_319a78;
        case 0x319a7cu: goto label_319a7c;
        case 0x319a80u: goto label_319a80;
        case 0x319a84u: goto label_319a84;
        case 0x319a88u: goto label_319a88;
        case 0x319a8cu: goto label_319a8c;
        case 0x319a90u: goto label_319a90;
        case 0x319a94u: goto label_319a94;
        case 0x319a98u: goto label_319a98;
        case 0x319a9cu: goto label_319a9c;
        case 0x319aa0u: goto label_319aa0;
        case 0x319aa4u: goto label_319aa4;
        case 0x319aa8u: goto label_319aa8;
        case 0x319aacu: goto label_319aac;
        case 0x319ab0u: goto label_319ab0;
        case 0x319ab4u: goto label_319ab4;
        case 0x319ab8u: goto label_319ab8;
        case 0x319abcu: goto label_319abc;
        case 0x319ac0u: goto label_319ac0;
        case 0x319ac4u: goto label_319ac4;
        case 0x319ac8u: goto label_319ac8;
        case 0x319accu: goto label_319acc;
        case 0x319ad0u: goto label_319ad0;
        case 0x319ad4u: goto label_319ad4;
        case 0x319ad8u: goto label_319ad8;
        case 0x319adcu: goto label_319adc;
        case 0x319ae0u: goto label_319ae0;
        case 0x319ae4u: goto label_319ae4;
        case 0x319ae8u: goto label_319ae8;
        case 0x319aecu: goto label_319aec;
        case 0x319af0u: goto label_319af0;
        case 0x319af4u: goto label_319af4;
        case 0x319af8u: goto label_319af8;
        case 0x319afcu: goto label_319afc;
        case 0x319b00u: goto label_319b00;
        case 0x319b04u: goto label_319b04;
        case 0x319b08u: goto label_319b08;
        case 0x319b0cu: goto label_319b0c;
        case 0x319b10u: goto label_319b10;
        case 0x319b14u: goto label_319b14;
        case 0x319b18u: goto label_319b18;
        case 0x319b1cu: goto label_319b1c;
        case 0x319b20u: goto label_319b20;
        case 0x319b24u: goto label_319b24;
        case 0x319b28u: goto label_319b28;
        case 0x319b2cu: goto label_319b2c;
        case 0x319b30u: goto label_319b30;
        case 0x319b34u: goto label_319b34;
        case 0x319b38u: goto label_319b38;
        case 0x319b3cu: goto label_319b3c;
        case 0x319b40u: goto label_319b40;
        case 0x319b44u: goto label_319b44;
        case 0x319b48u: goto label_319b48;
        case 0x319b4cu: goto label_319b4c;
        case 0x319b50u: goto label_319b50;
        case 0x319b54u: goto label_319b54;
        case 0x319b58u: goto label_319b58;
        case 0x319b5cu: goto label_319b5c;
        case 0x319b60u: goto label_319b60;
        case 0x319b64u: goto label_319b64;
        case 0x319b68u: goto label_319b68;
        case 0x319b6cu: goto label_319b6c;
        case 0x319b70u: goto label_319b70;
        case 0x319b74u: goto label_319b74;
        case 0x319b78u: goto label_319b78;
        case 0x319b7cu: goto label_319b7c;
        case 0x319b80u: goto label_319b80;
        case 0x319b84u: goto label_319b84;
        case 0x319b88u: goto label_319b88;
        case 0x319b8cu: goto label_319b8c;
        case 0x319b90u: goto label_319b90;
        case 0x319b94u: goto label_319b94;
        case 0x319b98u: goto label_319b98;
        case 0x319b9cu: goto label_319b9c;
        case 0x319ba0u: goto label_319ba0;
        case 0x319ba4u: goto label_319ba4;
        case 0x319ba8u: goto label_319ba8;
        case 0x319bacu: goto label_319bac;
        case 0x319bb0u: goto label_319bb0;
        case 0x319bb4u: goto label_319bb4;
        case 0x319bb8u: goto label_319bb8;
        case 0x319bbcu: goto label_319bbc;
        case 0x319bc0u: goto label_319bc0;
        case 0x319bc4u: goto label_319bc4;
        case 0x319bc8u: goto label_319bc8;
        case 0x319bccu: goto label_319bcc;
        case 0x319bd0u: goto label_319bd0;
        case 0x319bd4u: goto label_319bd4;
        case 0x319bd8u: goto label_319bd8;
        case 0x319bdcu: goto label_319bdc;
        case 0x319be0u: goto label_319be0;
        case 0x319be4u: goto label_319be4;
        case 0x319be8u: goto label_319be8;
        case 0x319becu: goto label_319bec;
        case 0x319bf0u: goto label_319bf0;
        case 0x319bf4u: goto label_319bf4;
        case 0x319bf8u: goto label_319bf8;
        case 0x319bfcu: goto label_319bfc;
        case 0x319c00u: goto label_319c00;
        case 0x319c04u: goto label_319c04;
        case 0x319c08u: goto label_319c08;
        case 0x319c0cu: goto label_319c0c;
        case 0x319c10u: goto label_319c10;
        case 0x319c14u: goto label_319c14;
        case 0x319c18u: goto label_319c18;
        case 0x319c1cu: goto label_319c1c;
        case 0x319c20u: goto label_319c20;
        case 0x319c24u: goto label_319c24;
        case 0x319c28u: goto label_319c28;
        case 0x319c2cu: goto label_319c2c;
        case 0x319c30u: goto label_319c30;
        case 0x319c34u: goto label_319c34;
        case 0x319c38u: goto label_319c38;
        case 0x319c3cu: goto label_319c3c;
        case 0x319c40u: goto label_319c40;
        case 0x319c44u: goto label_319c44;
        case 0x319c48u: goto label_319c48;
        case 0x319c4cu: goto label_319c4c;
        case 0x319c50u: goto label_319c50;
        case 0x319c54u: goto label_319c54;
        case 0x319c58u: goto label_319c58;
        case 0x319c5cu: goto label_319c5c;
        case 0x319c60u: goto label_319c60;
        case 0x319c64u: goto label_319c64;
        case 0x319c68u: goto label_319c68;
        case 0x319c6cu: goto label_319c6c;
        case 0x319c70u: goto label_319c70;
        case 0x319c74u: goto label_319c74;
        case 0x319c78u: goto label_319c78;
        case 0x319c7cu: goto label_319c7c;
        case 0x319c80u: goto label_319c80;
        case 0x319c84u: goto label_319c84;
        case 0x319c88u: goto label_319c88;
        case 0x319c8cu: goto label_319c8c;
        case 0x319c90u: goto label_319c90;
        case 0x319c94u: goto label_319c94;
        case 0x319c98u: goto label_319c98;
        case 0x319c9cu: goto label_319c9c;
        case 0x319ca0u: goto label_319ca0;
        case 0x319ca4u: goto label_319ca4;
        case 0x319ca8u: goto label_319ca8;
        case 0x319cacu: goto label_319cac;
        case 0x319cb0u: goto label_319cb0;
        case 0x319cb4u: goto label_319cb4;
        case 0x319cb8u: goto label_319cb8;
        case 0x319cbcu: goto label_319cbc;
        case 0x319cc0u: goto label_319cc0;
        case 0x319cc4u: goto label_319cc4;
        case 0x319cc8u: goto label_319cc8;
        case 0x319cccu: goto label_319ccc;
        case 0x319cd0u: goto label_319cd0;
        case 0x319cd4u: goto label_319cd4;
        case 0x319cd8u: goto label_319cd8;
        case 0x319cdcu: goto label_319cdc;
        case 0x319ce0u: goto label_319ce0;
        case 0x319ce4u: goto label_319ce4;
        case 0x319ce8u: goto label_319ce8;
        case 0x319cecu: goto label_319cec;
        case 0x319cf0u: goto label_319cf0;
        case 0x319cf4u: goto label_319cf4;
        case 0x319cf8u: goto label_319cf8;
        case 0x319cfcu: goto label_319cfc;
        case 0x319d00u: goto label_319d00;
        case 0x319d04u: goto label_319d04;
        case 0x319d08u: goto label_319d08;
        case 0x319d0cu: goto label_319d0c;
        case 0x319d10u: goto label_319d10;
        case 0x319d14u: goto label_319d14;
        case 0x319d18u: goto label_319d18;
        case 0x319d1cu: goto label_319d1c;
        case 0x319d20u: goto label_319d20;
        case 0x319d24u: goto label_319d24;
        case 0x319d28u: goto label_319d28;
        case 0x319d2cu: goto label_319d2c;
        case 0x319d30u: goto label_319d30;
        case 0x319d34u: goto label_319d34;
        case 0x319d38u: goto label_319d38;
        case 0x319d3cu: goto label_319d3c;
        case 0x319d40u: goto label_319d40;
        case 0x319d44u: goto label_319d44;
        case 0x319d48u: goto label_319d48;
        case 0x319d4cu: goto label_319d4c;
        case 0x319d50u: goto label_319d50;
        case 0x319d54u: goto label_319d54;
        case 0x319d58u: goto label_319d58;
        case 0x319d5cu: goto label_319d5c;
        case 0x319d60u: goto label_319d60;
        case 0x319d64u: goto label_319d64;
        case 0x319d68u: goto label_319d68;
        case 0x319d6cu: goto label_319d6c;
        case 0x319d70u: goto label_319d70;
        case 0x319d74u: goto label_319d74;
        case 0x319d78u: goto label_319d78;
        case 0x319d7cu: goto label_319d7c;
        case 0x319d80u: goto label_319d80;
        case 0x319d84u: goto label_319d84;
        case 0x319d88u: goto label_319d88;
        case 0x319d8cu: goto label_319d8c;
        case 0x319d90u: goto label_319d90;
        case 0x319d94u: goto label_319d94;
        case 0x319d98u: goto label_319d98;
        case 0x319d9cu: goto label_319d9c;
        case 0x319da0u: goto label_319da0;
        case 0x319da4u: goto label_319da4;
        case 0x319da8u: goto label_319da8;
        case 0x319dacu: goto label_319dac;
        case 0x319db0u: goto label_319db0;
        case 0x319db4u: goto label_319db4;
        case 0x319db8u: goto label_319db8;
        case 0x319dbcu: goto label_319dbc;
        case 0x319dc0u: goto label_319dc0;
        case 0x319dc4u: goto label_319dc4;
        case 0x319dc8u: goto label_319dc8;
        case 0x319dccu: goto label_319dcc;
        case 0x319dd0u: goto label_319dd0;
        case 0x319dd4u: goto label_319dd4;
        case 0x319dd8u: goto label_319dd8;
        case 0x319ddcu: goto label_319ddc;
        case 0x319de0u: goto label_319de0;
        case 0x319de4u: goto label_319de4;
        case 0x319de8u: goto label_319de8;
        case 0x319decu: goto label_319dec;
        case 0x319df0u: goto label_319df0;
        case 0x319df4u: goto label_319df4;
        case 0x319df8u: goto label_319df8;
        case 0x319dfcu: goto label_319dfc;
        case 0x319e00u: goto label_319e00;
        case 0x319e04u: goto label_319e04;
        case 0x319e08u: goto label_319e08;
        case 0x319e0cu: goto label_319e0c;
        case 0x319e10u: goto label_319e10;
        case 0x319e14u: goto label_319e14;
        case 0x319e18u: goto label_319e18;
        case 0x319e1cu: goto label_319e1c;
        case 0x319e20u: goto label_319e20;
        case 0x319e24u: goto label_319e24;
        case 0x319e28u: goto label_319e28;
        case 0x319e2cu: goto label_319e2c;
        case 0x319e30u: goto label_319e30;
        case 0x319e34u: goto label_319e34;
        case 0x319e38u: goto label_319e38;
        case 0x319e3cu: goto label_319e3c;
        case 0x319e40u: goto label_319e40;
        case 0x319e44u: goto label_319e44;
        case 0x319e48u: goto label_319e48;
        case 0x319e4cu: goto label_319e4c;
        case 0x319e50u: goto label_319e50;
        case 0x319e54u: goto label_319e54;
        case 0x319e58u: goto label_319e58;
        case 0x319e5cu: goto label_319e5c;
        case 0x319e60u: goto label_319e60;
        case 0x319e64u: goto label_319e64;
        case 0x319e68u: goto label_319e68;
        case 0x319e6cu: goto label_319e6c;
        case 0x319e70u: goto label_319e70;
        case 0x319e74u: goto label_319e74;
        case 0x319e78u: goto label_319e78;
        case 0x319e7cu: goto label_319e7c;
        case 0x319e80u: goto label_319e80;
        case 0x319e84u: goto label_319e84;
        case 0x319e88u: goto label_319e88;
        case 0x319e8cu: goto label_319e8c;
        case 0x319e90u: goto label_319e90;
        case 0x319e94u: goto label_319e94;
        case 0x319e98u: goto label_319e98;
        case 0x319e9cu: goto label_319e9c;
        case 0x319ea0u: goto label_319ea0;
        case 0x319ea4u: goto label_319ea4;
        case 0x319ea8u: goto label_319ea8;
        case 0x319eacu: goto label_319eac;
        case 0x319eb0u: goto label_319eb0;
        case 0x319eb4u: goto label_319eb4;
        case 0x319eb8u: goto label_319eb8;
        case 0x319ebcu: goto label_319ebc;
        case 0x319ec0u: goto label_319ec0;
        case 0x319ec4u: goto label_319ec4;
        case 0x319ec8u: goto label_319ec8;
        case 0x319eccu: goto label_319ecc;
        case 0x319ed0u: goto label_319ed0;
        case 0x319ed4u: goto label_319ed4;
        case 0x319ed8u: goto label_319ed8;
        case 0x319edcu: goto label_319edc;
        case 0x319ee0u: goto label_319ee0;
        case 0x319ee4u: goto label_319ee4;
        case 0x319ee8u: goto label_319ee8;
        case 0x319eecu: goto label_319eec;
        case 0x319ef0u: goto label_319ef0;
        case 0x319ef4u: goto label_319ef4;
        case 0x319ef8u: goto label_319ef8;
        case 0x319efcu: goto label_319efc;
        case 0x319f00u: goto label_319f00;
        case 0x319f04u: goto label_319f04;
        case 0x319f08u: goto label_319f08;
        case 0x319f0cu: goto label_319f0c;
        case 0x319f10u: goto label_319f10;
        case 0x319f14u: goto label_319f14;
        case 0x319f18u: goto label_319f18;
        case 0x319f1cu: goto label_319f1c;
        case 0x319f20u: goto label_319f20;
        case 0x319f24u: goto label_319f24;
        case 0x319f28u: goto label_319f28;
        case 0x319f2cu: goto label_319f2c;
        case 0x319f30u: goto label_319f30;
        case 0x319f34u: goto label_319f34;
        case 0x319f38u: goto label_319f38;
        case 0x319f3cu: goto label_319f3c;
        case 0x319f40u: goto label_319f40;
        case 0x319f44u: goto label_319f44;
        case 0x319f48u: goto label_319f48;
        case 0x319f4cu: goto label_319f4c;
        case 0x319f50u: goto label_319f50;
        case 0x319f54u: goto label_319f54;
        case 0x319f58u: goto label_319f58;
        case 0x319f5cu: goto label_319f5c;
        case 0x319f60u: goto label_319f60;
        case 0x319f64u: goto label_319f64;
        case 0x319f68u: goto label_319f68;
        case 0x319f6cu: goto label_319f6c;
        case 0x319f70u: goto label_319f70;
        case 0x319f74u: goto label_319f74;
        case 0x319f78u: goto label_319f78;
        case 0x319f7cu: goto label_319f7c;
        case 0x319f80u: goto label_319f80;
        case 0x319f84u: goto label_319f84;
        case 0x319f88u: goto label_319f88;
        case 0x319f8cu: goto label_319f8c;
        case 0x319f90u: goto label_319f90;
        case 0x319f94u: goto label_319f94;
        case 0x319f98u: goto label_319f98;
        case 0x319f9cu: goto label_319f9c;
        case 0x319fa0u: goto label_319fa0;
        case 0x319fa4u: goto label_319fa4;
        case 0x319fa8u: goto label_319fa8;
        case 0x319facu: goto label_319fac;
        case 0x319fb0u: goto label_319fb0;
        case 0x319fb4u: goto label_319fb4;
        case 0x319fb8u: goto label_319fb8;
        case 0x319fbcu: goto label_319fbc;
        case 0x319fc0u: goto label_319fc0;
        case 0x319fc4u: goto label_319fc4;
        case 0x319fc8u: goto label_319fc8;
        case 0x319fccu: goto label_319fcc;
        case 0x319fd0u: goto label_319fd0;
        case 0x319fd4u: goto label_319fd4;
        case 0x319fd8u: goto label_319fd8;
        case 0x319fdcu: goto label_319fdc;
        case 0x319fe0u: goto label_319fe0;
        case 0x319fe4u: goto label_319fe4;
        case 0x319fe8u: goto label_319fe8;
        case 0x319fecu: goto label_319fec;
        case 0x319ff0u: goto label_319ff0;
        case 0x319ff4u: goto label_319ff4;
        case 0x319ff8u: goto label_319ff8;
        case 0x319ffcu: goto label_319ffc;
        case 0x31a000u: goto label_31a000;
        case 0x31a004u: goto label_31a004;
        case 0x31a008u: goto label_31a008;
        case 0x31a00cu: goto label_31a00c;
        case 0x31a010u: goto label_31a010;
        case 0x31a014u: goto label_31a014;
        case 0x31a018u: goto label_31a018;
        case 0x31a01cu: goto label_31a01c;
        case 0x31a020u: goto label_31a020;
        case 0x31a024u: goto label_31a024;
        case 0x31a028u: goto label_31a028;
        case 0x31a02cu: goto label_31a02c;
        case 0x31a030u: goto label_31a030;
        case 0x31a034u: goto label_31a034;
        case 0x31a038u: goto label_31a038;
        case 0x31a03cu: goto label_31a03c;
        case 0x31a040u: goto label_31a040;
        case 0x31a044u: goto label_31a044;
        case 0x31a048u: goto label_31a048;
        case 0x31a04cu: goto label_31a04c;
        case 0x31a050u: goto label_31a050;
        case 0x31a054u: goto label_31a054;
        case 0x31a058u: goto label_31a058;
        case 0x31a05cu: goto label_31a05c;
        case 0x31a060u: goto label_31a060;
        case 0x31a064u: goto label_31a064;
        case 0x31a068u: goto label_31a068;
        case 0x31a06cu: goto label_31a06c;
        case 0x31a070u: goto label_31a070;
        case 0x31a074u: goto label_31a074;
        case 0x31a078u: goto label_31a078;
        case 0x31a07cu: goto label_31a07c;
        case 0x31a080u: goto label_31a080;
        case 0x31a084u: goto label_31a084;
        case 0x31a088u: goto label_31a088;
        case 0x31a08cu: goto label_31a08c;
        case 0x31a090u: goto label_31a090;
        case 0x31a094u: goto label_31a094;
        case 0x31a098u: goto label_31a098;
        case 0x31a09cu: goto label_31a09c;
        case 0x31a0a0u: goto label_31a0a0;
        case 0x31a0a4u: goto label_31a0a4;
        case 0x31a0a8u: goto label_31a0a8;
        case 0x31a0acu: goto label_31a0ac;
        case 0x31a0b0u: goto label_31a0b0;
        case 0x31a0b4u: goto label_31a0b4;
        case 0x31a0b8u: goto label_31a0b8;
        case 0x31a0bcu: goto label_31a0bc;
        case 0x31a0c0u: goto label_31a0c0;
        case 0x31a0c4u: goto label_31a0c4;
        case 0x31a0c8u: goto label_31a0c8;
        case 0x31a0ccu: goto label_31a0cc;
        case 0x31a0d0u: goto label_31a0d0;
        case 0x31a0d4u: goto label_31a0d4;
        case 0x31a0d8u: goto label_31a0d8;
        case 0x31a0dcu: goto label_31a0dc;
        case 0x31a0e0u: goto label_31a0e0;
        case 0x31a0e4u: goto label_31a0e4;
        case 0x31a0e8u: goto label_31a0e8;
        case 0x31a0ecu: goto label_31a0ec;
        case 0x31a0f0u: goto label_31a0f0;
        case 0x31a0f4u: goto label_31a0f4;
        case 0x31a0f8u: goto label_31a0f8;
        case 0x31a0fcu: goto label_31a0fc;
        case 0x31a100u: goto label_31a100;
        case 0x31a104u: goto label_31a104;
        case 0x31a108u: goto label_31a108;
        case 0x31a10cu: goto label_31a10c;
        case 0x31a110u: goto label_31a110;
        case 0x31a114u: goto label_31a114;
        case 0x31a118u: goto label_31a118;
        case 0x31a11cu: goto label_31a11c;
        case 0x31a120u: goto label_31a120;
        case 0x31a124u: goto label_31a124;
        case 0x31a128u: goto label_31a128;
        case 0x31a12cu: goto label_31a12c;
        case 0x31a130u: goto label_31a130;
        case 0x31a134u: goto label_31a134;
        case 0x31a138u: goto label_31a138;
        case 0x31a13cu: goto label_31a13c;
        case 0x31a140u: goto label_31a140;
        case 0x31a144u: goto label_31a144;
        case 0x31a148u: goto label_31a148;
        case 0x31a14cu: goto label_31a14c;
        case 0x31a150u: goto label_31a150;
        case 0x31a154u: goto label_31a154;
        case 0x31a158u: goto label_31a158;
        case 0x31a15cu: goto label_31a15c;
        case 0x31a160u: goto label_31a160;
        case 0x31a164u: goto label_31a164;
        case 0x31a168u: goto label_31a168;
        case 0x31a16cu: goto label_31a16c;
        case 0x31a170u: goto label_31a170;
        case 0x31a174u: goto label_31a174;
        case 0x31a178u: goto label_31a178;
        case 0x31a17cu: goto label_31a17c;
        case 0x31a180u: goto label_31a180;
        case 0x31a184u: goto label_31a184;
        case 0x31a188u: goto label_31a188;
        case 0x31a18cu: goto label_31a18c;
        case 0x31a190u: goto label_31a190;
        case 0x31a194u: goto label_31a194;
        case 0x31a198u: goto label_31a198;
        case 0x31a19cu: goto label_31a19c;
        case 0x31a1a0u: goto label_31a1a0;
        case 0x31a1a4u: goto label_31a1a4;
        case 0x31a1a8u: goto label_31a1a8;
        case 0x31a1acu: goto label_31a1ac;
        case 0x31a1b0u: goto label_31a1b0;
        case 0x31a1b4u: goto label_31a1b4;
        case 0x31a1b8u: goto label_31a1b8;
        case 0x31a1bcu: goto label_31a1bc;
        case 0x31a1c0u: goto label_31a1c0;
        case 0x31a1c4u: goto label_31a1c4;
        case 0x31a1c8u: goto label_31a1c8;
        case 0x31a1ccu: goto label_31a1cc;
        case 0x31a1d0u: goto label_31a1d0;
        case 0x31a1d4u: goto label_31a1d4;
        case 0x31a1d8u: goto label_31a1d8;
        case 0x31a1dcu: goto label_31a1dc;
        case 0x31a1e0u: goto label_31a1e0;
        case 0x31a1e4u: goto label_31a1e4;
        case 0x31a1e8u: goto label_31a1e8;
        case 0x31a1ecu: goto label_31a1ec;
        case 0x31a1f0u: goto label_31a1f0;
        case 0x31a1f4u: goto label_31a1f4;
        case 0x31a1f8u: goto label_31a1f8;
        case 0x31a1fcu: goto label_31a1fc;
        case 0x31a200u: goto label_31a200;
        case 0x31a204u: goto label_31a204;
        case 0x31a208u: goto label_31a208;
        case 0x31a20cu: goto label_31a20c;
        case 0x31a210u: goto label_31a210;
        case 0x31a214u: goto label_31a214;
        case 0x31a218u: goto label_31a218;
        case 0x31a21cu: goto label_31a21c;
        case 0x31a220u: goto label_31a220;
        case 0x31a224u: goto label_31a224;
        case 0x31a228u: goto label_31a228;
        case 0x31a22cu: goto label_31a22c;
        case 0x31a230u: goto label_31a230;
        case 0x31a234u: goto label_31a234;
        case 0x31a238u: goto label_31a238;
        case 0x31a23cu: goto label_31a23c;
        case 0x31a240u: goto label_31a240;
        case 0x31a244u: goto label_31a244;
        case 0x31a248u: goto label_31a248;
        case 0x31a24cu: goto label_31a24c;
        case 0x31a250u: goto label_31a250;
        case 0x31a254u: goto label_31a254;
        case 0x31a258u: goto label_31a258;
        case 0x31a25cu: goto label_31a25c;
        case 0x31a260u: goto label_31a260;
        case 0x31a264u: goto label_31a264;
        case 0x31a268u: goto label_31a268;
        case 0x31a26cu: goto label_31a26c;
        case 0x31a270u: goto label_31a270;
        case 0x31a274u: goto label_31a274;
        case 0x31a278u: goto label_31a278;
        case 0x31a27cu: goto label_31a27c;
        case 0x31a280u: goto label_31a280;
        case 0x31a284u: goto label_31a284;
        case 0x31a288u: goto label_31a288;
        case 0x31a28cu: goto label_31a28c;
        case 0x31a290u: goto label_31a290;
        case 0x31a294u: goto label_31a294;
        case 0x31a298u: goto label_31a298;
        case 0x31a29cu: goto label_31a29c;
        case 0x31a2a0u: goto label_31a2a0;
        case 0x31a2a4u: goto label_31a2a4;
        case 0x31a2a8u: goto label_31a2a8;
        case 0x31a2acu: goto label_31a2ac;
        case 0x31a2b0u: goto label_31a2b0;
        case 0x31a2b4u: goto label_31a2b4;
        case 0x31a2b8u: goto label_31a2b8;
        case 0x31a2bcu: goto label_31a2bc;
        case 0x31a2c0u: goto label_31a2c0;
        case 0x31a2c4u: goto label_31a2c4;
        case 0x31a2c8u: goto label_31a2c8;
        case 0x31a2ccu: goto label_31a2cc;
        case 0x31a2d0u: goto label_31a2d0;
        case 0x31a2d4u: goto label_31a2d4;
        case 0x31a2d8u: goto label_31a2d8;
        case 0x31a2dcu: goto label_31a2dc;
        case 0x31a2e0u: goto label_31a2e0;
        case 0x31a2e4u: goto label_31a2e4;
        case 0x31a2e8u: goto label_31a2e8;
        case 0x31a2ecu: goto label_31a2ec;
        case 0x31a2f0u: goto label_31a2f0;
        case 0x31a2f4u: goto label_31a2f4;
        case 0x31a2f8u: goto label_31a2f8;
        case 0x31a2fcu: goto label_31a2fc;
        case 0x31a300u: goto label_31a300;
        case 0x31a304u: goto label_31a304;
        case 0x31a308u: goto label_31a308;
        case 0x31a30cu: goto label_31a30c;
        case 0x31a310u: goto label_31a310;
        case 0x31a314u: goto label_31a314;
        case 0x31a318u: goto label_31a318;
        case 0x31a31cu: goto label_31a31c;
        case 0x31a320u: goto label_31a320;
        case 0x31a324u: goto label_31a324;
        case 0x31a328u: goto label_31a328;
        case 0x31a32cu: goto label_31a32c;
        case 0x31a330u: goto label_31a330;
        case 0x31a334u: goto label_31a334;
        case 0x31a338u: goto label_31a338;
        case 0x31a33cu: goto label_31a33c;
        case 0x31a340u: goto label_31a340;
        case 0x31a344u: goto label_31a344;
        case 0x31a348u: goto label_31a348;
        case 0x31a34cu: goto label_31a34c;
        case 0x31a350u: goto label_31a350;
        case 0x31a354u: goto label_31a354;
        case 0x31a358u: goto label_31a358;
        case 0x31a35cu: goto label_31a35c;
        case 0x31a360u: goto label_31a360;
        case 0x31a364u: goto label_31a364;
        case 0x31a368u: goto label_31a368;
        case 0x31a36cu: goto label_31a36c;
        case 0x31a370u: goto label_31a370;
        case 0x31a374u: goto label_31a374;
        case 0x31a378u: goto label_31a378;
        case 0x31a37cu: goto label_31a37c;
        case 0x31a380u: goto label_31a380;
        case 0x31a384u: goto label_31a384;
        case 0x31a388u: goto label_31a388;
        case 0x31a38cu: goto label_31a38c;
        case 0x31a390u: goto label_31a390;
        case 0x31a394u: goto label_31a394;
        case 0x31a398u: goto label_31a398;
        case 0x31a39cu: goto label_31a39c;
        case 0x31a3a0u: goto label_31a3a0;
        case 0x31a3a4u: goto label_31a3a4;
        case 0x31a3a8u: goto label_31a3a8;
        case 0x31a3acu: goto label_31a3ac;
        case 0x31a3b0u: goto label_31a3b0;
        case 0x31a3b4u: goto label_31a3b4;
        case 0x31a3b8u: goto label_31a3b8;
        case 0x31a3bcu: goto label_31a3bc;
        case 0x31a3c0u: goto label_31a3c0;
        case 0x31a3c4u: goto label_31a3c4;
        case 0x31a3c8u: goto label_31a3c8;
        case 0x31a3ccu: goto label_31a3cc;
        case 0x31a3d0u: goto label_31a3d0;
        case 0x31a3d4u: goto label_31a3d4;
        case 0x31a3d8u: goto label_31a3d8;
        case 0x31a3dcu: goto label_31a3dc;
        case 0x31a3e0u: goto label_31a3e0;
        case 0x31a3e4u: goto label_31a3e4;
        case 0x31a3e8u: goto label_31a3e8;
        case 0x31a3ecu: goto label_31a3ec;
        case 0x31a3f0u: goto label_31a3f0;
        case 0x31a3f4u: goto label_31a3f4;
        case 0x31a3f8u: goto label_31a3f8;
        case 0x31a3fcu: goto label_31a3fc;
        case 0x31a400u: goto label_31a400;
        case 0x31a404u: goto label_31a404;
        case 0x31a408u: goto label_31a408;
        case 0x31a40cu: goto label_31a40c;
        case 0x31a410u: goto label_31a410;
        case 0x31a414u: goto label_31a414;
        case 0x31a418u: goto label_31a418;
        case 0x31a41cu: goto label_31a41c;
        case 0x31a420u: goto label_31a420;
        case 0x31a424u: goto label_31a424;
        case 0x31a428u: goto label_31a428;
        case 0x31a42cu: goto label_31a42c;
        case 0x31a430u: goto label_31a430;
        case 0x31a434u: goto label_31a434;
        case 0x31a438u: goto label_31a438;
        case 0x31a43cu: goto label_31a43c;
        case 0x31a440u: goto label_31a440;
        case 0x31a444u: goto label_31a444;
        case 0x31a448u: goto label_31a448;
        case 0x31a44cu: goto label_31a44c;
        case 0x31a450u: goto label_31a450;
        case 0x31a454u: goto label_31a454;
        case 0x31a458u: goto label_31a458;
        case 0x31a45cu: goto label_31a45c;
        case 0x31a460u: goto label_31a460;
        case 0x31a464u: goto label_31a464;
        case 0x31a468u: goto label_31a468;
        case 0x31a46cu: goto label_31a46c;
        case 0x31a470u: goto label_31a470;
        case 0x31a474u: goto label_31a474;
        case 0x31a478u: goto label_31a478;
        case 0x31a47cu: goto label_31a47c;
        case 0x31a480u: goto label_31a480;
        case 0x31a484u: goto label_31a484;
        case 0x31a488u: goto label_31a488;
        case 0x31a48cu: goto label_31a48c;
        case 0x31a490u: goto label_31a490;
        case 0x31a494u: goto label_31a494;
        case 0x31a498u: goto label_31a498;
        case 0x31a49cu: goto label_31a49c;
        case 0x31a4a0u: goto label_31a4a0;
        case 0x31a4a4u: goto label_31a4a4;
        case 0x31a4a8u: goto label_31a4a8;
        case 0x31a4acu: goto label_31a4ac;
        case 0x31a4b0u: goto label_31a4b0;
        case 0x31a4b4u: goto label_31a4b4;
        case 0x31a4b8u: goto label_31a4b8;
        case 0x31a4bcu: goto label_31a4bc;
        case 0x31a4c0u: goto label_31a4c0;
        case 0x31a4c4u: goto label_31a4c4;
        case 0x31a4c8u: goto label_31a4c8;
        case 0x31a4ccu: goto label_31a4cc;
        case 0x31a4d0u: goto label_31a4d0;
        case 0x31a4d4u: goto label_31a4d4;
        case 0x31a4d8u: goto label_31a4d8;
        case 0x31a4dcu: goto label_31a4dc;
        case 0x31a4e0u: goto label_31a4e0;
        case 0x31a4e4u: goto label_31a4e4;
        case 0x31a4e8u: goto label_31a4e8;
        case 0x31a4ecu: goto label_31a4ec;
        case 0x31a4f0u: goto label_31a4f0;
        case 0x31a4f4u: goto label_31a4f4;
        case 0x31a4f8u: goto label_31a4f8;
        case 0x31a4fcu: goto label_31a4fc;
        case 0x31a500u: goto label_31a500;
        case 0x31a504u: goto label_31a504;
        case 0x31a508u: goto label_31a508;
        case 0x31a50cu: goto label_31a50c;
        case 0x31a510u: goto label_31a510;
        case 0x31a514u: goto label_31a514;
        case 0x31a518u: goto label_31a518;
        case 0x31a51cu: goto label_31a51c;
        case 0x31a520u: goto label_31a520;
        case 0x31a524u: goto label_31a524;
        case 0x31a528u: goto label_31a528;
        case 0x31a52cu: goto label_31a52c;
        case 0x31a530u: goto label_31a530;
        case 0x31a534u: goto label_31a534;
        case 0x31a538u: goto label_31a538;
        case 0x31a53cu: goto label_31a53c;
        case 0x31a540u: goto label_31a540;
        case 0x31a544u: goto label_31a544;
        case 0x31a548u: goto label_31a548;
        case 0x31a54cu: goto label_31a54c;
        case 0x31a550u: goto label_31a550;
        case 0x31a554u: goto label_31a554;
        case 0x31a558u: goto label_31a558;
        case 0x31a55cu: goto label_31a55c;
        case 0x31a560u: goto label_31a560;
        case 0x31a564u: goto label_31a564;
        case 0x31a568u: goto label_31a568;
        case 0x31a56cu: goto label_31a56c;
        case 0x31a570u: goto label_31a570;
        case 0x31a574u: goto label_31a574;
        case 0x31a578u: goto label_31a578;
        case 0x31a57cu: goto label_31a57c;
        case 0x31a580u: goto label_31a580;
        case 0x31a584u: goto label_31a584;
        case 0x31a588u: goto label_31a588;
        case 0x31a58cu: goto label_31a58c;
        case 0x31a590u: goto label_31a590;
        case 0x31a594u: goto label_31a594;
        case 0x31a598u: goto label_31a598;
        case 0x31a59cu: goto label_31a59c;
        case 0x31a5a0u: goto label_31a5a0;
        case 0x31a5a4u: goto label_31a5a4;
        case 0x31a5a8u: goto label_31a5a8;
        case 0x31a5acu: goto label_31a5ac;
        case 0x31a5b0u: goto label_31a5b0;
        case 0x31a5b4u: goto label_31a5b4;
        case 0x31a5b8u: goto label_31a5b8;
        case 0x31a5bcu: goto label_31a5bc;
        case 0x31a5c0u: goto label_31a5c0;
        case 0x31a5c4u: goto label_31a5c4;
        case 0x31a5c8u: goto label_31a5c8;
        case 0x31a5ccu: goto label_31a5cc;
        case 0x31a5d0u: goto label_31a5d0;
        case 0x31a5d4u: goto label_31a5d4;
        case 0x31a5d8u: goto label_31a5d8;
        case 0x31a5dcu: goto label_31a5dc;
        case 0x31a5e0u: goto label_31a5e0;
        case 0x31a5e4u: goto label_31a5e4;
        case 0x31a5e8u: goto label_31a5e8;
        case 0x31a5ecu: goto label_31a5ec;
        case 0x31a5f0u: goto label_31a5f0;
        case 0x31a5f4u: goto label_31a5f4;
        case 0x31a5f8u: goto label_31a5f8;
        case 0x31a5fcu: goto label_31a5fc;
        case 0x31a600u: goto label_31a600;
        case 0x31a604u: goto label_31a604;
        case 0x31a608u: goto label_31a608;
        case 0x31a60cu: goto label_31a60c;
        case 0x31a610u: goto label_31a610;
        case 0x31a614u: goto label_31a614;
        case 0x31a618u: goto label_31a618;
        case 0x31a61cu: goto label_31a61c;
        case 0x31a620u: goto label_31a620;
        case 0x31a624u: goto label_31a624;
        case 0x31a628u: goto label_31a628;
        case 0x31a62cu: goto label_31a62c;
        case 0x31a630u: goto label_31a630;
        case 0x31a634u: goto label_31a634;
        case 0x31a638u: goto label_31a638;
        case 0x31a63cu: goto label_31a63c;
        case 0x31a640u: goto label_31a640;
        case 0x31a644u: goto label_31a644;
        case 0x31a648u: goto label_31a648;
        case 0x31a64cu: goto label_31a64c;
        case 0x31a650u: goto label_31a650;
        case 0x31a654u: goto label_31a654;
        case 0x31a658u: goto label_31a658;
        case 0x31a65cu: goto label_31a65c;
        case 0x31a660u: goto label_31a660;
        case 0x31a664u: goto label_31a664;
        case 0x31a668u: goto label_31a668;
        case 0x31a66cu: goto label_31a66c;
        case 0x31a670u: goto label_31a670;
        case 0x31a674u: goto label_31a674;
        case 0x31a678u: goto label_31a678;
        case 0x31a67cu: goto label_31a67c;
        case 0x31a680u: goto label_31a680;
        case 0x31a684u: goto label_31a684;
        case 0x31a688u: goto label_31a688;
        case 0x31a68cu: goto label_31a68c;
        case 0x31a690u: goto label_31a690;
        case 0x31a694u: goto label_31a694;
        case 0x31a698u: goto label_31a698;
        case 0x31a69cu: goto label_31a69c;
        case 0x31a6a0u: goto label_31a6a0;
        case 0x31a6a4u: goto label_31a6a4;
        case 0x31a6a8u: goto label_31a6a8;
        case 0x31a6acu: goto label_31a6ac;
        case 0x31a6b0u: goto label_31a6b0;
        case 0x31a6b4u: goto label_31a6b4;
        case 0x31a6b8u: goto label_31a6b8;
        case 0x31a6bcu: goto label_31a6bc;
        case 0x31a6c0u: goto label_31a6c0;
        case 0x31a6c4u: goto label_31a6c4;
        case 0x31a6c8u: goto label_31a6c8;
        case 0x31a6ccu: goto label_31a6cc;
        case 0x31a6d0u: goto label_31a6d0;
        case 0x31a6d4u: goto label_31a6d4;
        case 0x31a6d8u: goto label_31a6d8;
        case 0x31a6dcu: goto label_31a6dc;
        case 0x31a6e0u: goto label_31a6e0;
        case 0x31a6e4u: goto label_31a6e4;
        case 0x31a6e8u: goto label_31a6e8;
        case 0x31a6ecu: goto label_31a6ec;
        case 0x31a6f0u: goto label_31a6f0;
        case 0x31a6f4u: goto label_31a6f4;
        case 0x31a6f8u: goto label_31a6f8;
        case 0x31a6fcu: goto label_31a6fc;
        case 0x31a700u: goto label_31a700;
        case 0x31a704u: goto label_31a704;
        case 0x31a708u: goto label_31a708;
        case 0x31a70cu: goto label_31a70c;
        case 0x31a710u: goto label_31a710;
        case 0x31a714u: goto label_31a714;
        case 0x31a718u: goto label_31a718;
        case 0x31a71cu: goto label_31a71c;
        case 0x31a720u: goto label_31a720;
        case 0x31a724u: goto label_31a724;
        case 0x31a728u: goto label_31a728;
        case 0x31a72cu: goto label_31a72c;
        case 0x31a730u: goto label_31a730;
        case 0x31a734u: goto label_31a734;
        case 0x31a738u: goto label_31a738;
        case 0x31a73cu: goto label_31a73c;
        case 0x31a740u: goto label_31a740;
        case 0x31a744u: goto label_31a744;
        case 0x31a748u: goto label_31a748;
        case 0x31a74cu: goto label_31a74c;
        case 0x31a750u: goto label_31a750;
        case 0x31a754u: goto label_31a754;
        case 0x31a758u: goto label_31a758;
        case 0x31a75cu: goto label_31a75c;
        case 0x31a760u: goto label_31a760;
        case 0x31a764u: goto label_31a764;
        case 0x31a768u: goto label_31a768;
        case 0x31a76cu: goto label_31a76c;
        case 0x31a770u: goto label_31a770;
        case 0x31a774u: goto label_31a774;
        case 0x31a778u: goto label_31a778;
        case 0x31a77cu: goto label_31a77c;
        case 0x31a780u: goto label_31a780;
        case 0x31a784u: goto label_31a784;
        case 0x31a788u: goto label_31a788;
        case 0x31a78cu: goto label_31a78c;
        case 0x31a790u: goto label_31a790;
        case 0x31a794u: goto label_31a794;
        case 0x31a798u: goto label_31a798;
        case 0x31a79cu: goto label_31a79c;
        case 0x31a7a0u: goto label_31a7a0;
        case 0x31a7a4u: goto label_31a7a4;
        case 0x31a7a8u: goto label_31a7a8;
        case 0x31a7acu: goto label_31a7ac;
        case 0x31a7b0u: goto label_31a7b0;
        case 0x31a7b4u: goto label_31a7b4;
        case 0x31a7b8u: goto label_31a7b8;
        case 0x31a7bcu: goto label_31a7bc;
        case 0x31a7c0u: goto label_31a7c0;
        case 0x31a7c4u: goto label_31a7c4;
        case 0x31a7c8u: goto label_31a7c8;
        case 0x31a7ccu: goto label_31a7cc;
        case 0x31a7d0u: goto label_31a7d0;
        case 0x31a7d4u: goto label_31a7d4;
        case 0x31a7d8u: goto label_31a7d8;
        case 0x31a7dcu: goto label_31a7dc;
        case 0x31a7e0u: goto label_31a7e0;
        case 0x31a7e4u: goto label_31a7e4;
        case 0x31a7e8u: goto label_31a7e8;
        case 0x31a7ecu: goto label_31a7ec;
        case 0x31a7f0u: goto label_31a7f0;
        case 0x31a7f4u: goto label_31a7f4;
        case 0x31a7f8u: goto label_31a7f8;
        case 0x31a7fcu: goto label_31a7fc;
        case 0x31a800u: goto label_31a800;
        case 0x31a804u: goto label_31a804;
        case 0x31a808u: goto label_31a808;
        case 0x31a80cu: goto label_31a80c;
        case 0x31a810u: goto label_31a810;
        case 0x31a814u: goto label_31a814;
        case 0x31a818u: goto label_31a818;
        case 0x31a81cu: goto label_31a81c;
        case 0x31a820u: goto label_31a820;
        case 0x31a824u: goto label_31a824;
        case 0x31a828u: goto label_31a828;
        case 0x31a82cu: goto label_31a82c;
        case 0x31a830u: goto label_31a830;
        case 0x31a834u: goto label_31a834;
        case 0x31a838u: goto label_31a838;
        case 0x31a83cu: goto label_31a83c;
        case 0x31a840u: goto label_31a840;
        case 0x31a844u: goto label_31a844;
        case 0x31a848u: goto label_31a848;
        case 0x31a84cu: goto label_31a84c;
        case 0x31a850u: goto label_31a850;
        case 0x31a854u: goto label_31a854;
        case 0x31a858u: goto label_31a858;
        case 0x31a85cu: goto label_31a85c;
        case 0x31a860u: goto label_31a860;
        case 0x31a864u: goto label_31a864;
        case 0x31a868u: goto label_31a868;
        case 0x31a86cu: goto label_31a86c;
        case 0x31a870u: goto label_31a870;
        case 0x31a874u: goto label_31a874;
        case 0x31a878u: goto label_31a878;
        default: break;
    }

    ctx->pc = 0x319290u;

label_319290:
    // 0x319290: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x319290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_319294:
    // 0x319294: 0x7fbf0050  sq          $ra, 0x50($sp)
    ctx->pc = 0x319294u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 31));
label_319298:
    // 0x319298: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x319298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_31929c:
    // 0x31929c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x31929cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3192a0:
    // 0x3192a0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3192a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3192a4:
    // 0x3192a4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3192a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3192a8:
    // 0x3192a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3192a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3192ac:
    // 0x3192ac: 0xafa40088  sw          $a0, 0x88($sp)
    ctx->pc = 0x3192acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 4));
label_3192b0:
    // 0x3192b0: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x3192b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
label_3192b4:
    // 0x3192b4: 0x24429c50  addiu       $v0, $v0, -0x63B0
    ctx->pc = 0x3192b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941776));
label_3192b8:
    // 0x3192b8: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x3192b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3192bc:
    // 0x3192bc: 0x78460000  lq          $a2, 0x0($v0)
    ctx->pc = 0x3192bcu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_3192c0:
    // 0x3192c0: 0x7c860000  sq          $a2, 0x0($a0)
    ctx->pc = 0x3192c0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 6));
label_3192c4:
    // 0x3192c4: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x3192c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
label_3192c8:
    // 0x3192c8: 0x24429c60  addiu       $v0, $v0, -0x63A0
    ctx->pc = 0x3192c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941792));
label_3192cc:
    // 0x3192cc: 0x27a30070  addiu       $v1, $sp, 0x70
    ctx->pc = 0x3192ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_3192d0:
    // 0x3192d0: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x3192d0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_3192d4:
    // 0x3192d4: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x3192d4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
label_3192d8:
    // 0x3192d8: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x3192d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_3192dc:
    // 0x3192dc: 0xc0c6b98  jal         func_31AE60
label_3192e0:
    if (ctx->pc == 0x3192E0u) {
        ctx->pc = 0x3192E4u;
        goto label_3192e4;
    }
    ctx->pc = 0x3192DCu;
    SET_GPR_U32(ctx, 31, 0x3192E4u);
    ctx->pc = 0x31AE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31AE60u, 0x3192DCu, 0x3192E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3192E4u;
label_3192e4:
    // 0x3192e4: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x3192e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_3192e8:
    // 0x3192e8: 0x8c7412a4  lw          $s4, 0x12A4($v1)
    ctx->pc = 0x3192e8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4772)));
label_3192ec:
    // 0x3192ec: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x3192ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_3192f0:
    // 0x3192f0: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x3192f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_3192f4:
    // 0x3192f4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x3192f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_3192f8:
    // 0x3192f8: 0x2c810006  sltiu       $at, $a0, 0x6
    ctx->pc = 0x3192f8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_3192fc:
    // 0x3192fc: 0x10200556  beqz        $at, . + 4 + (0x556 << 2)
label_319300:
    if (ctx->pc == 0x319300u) {
        ctx->pc = 0x319304u;
        goto label_319304;
    }
    ctx->pc = 0x3192FCu;
    {
        const bool branch_taken_0x3192fc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3192fc) {
            ctx->pc = 0x31A858u;
            goto label_31a858;
        }
    }
    ctx->pc = 0x319304u;
label_319304:
    // 0x319304: 0x3c06003b  lui         $a2, 0x3B
    ctx->pc = 0x319304u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)59 << 16));
label_319308:
    // 0x319308: 0x24c51da0  addiu       $a1, $a2, 0x1DA0
    ctx->pc = 0x319308u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 7584));
label_31930c:
    // 0x31930c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x31930cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_319310:
    // 0x319310: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x319310u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_319314:
    // 0x319314: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x319314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_319318:
    // 0x319318: 0x600008  jr          $v1
label_31931c:
    if (ctx->pc == 0x31931Cu) {
        ctx->pc = 0x319320u;
        goto label_319320;
    }
    ctx->pc = 0x319318u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x319318u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x319320u;
label_319320:
    // 0x319320: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x319320u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_319324:
    // 0x319324: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x319324u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_319328:
    // 0x319328: 0xac8312b0  sw          $v1, 0x12B0($a0)
    ctx->pc = 0x319328u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4784), GPR_U32(ctx, 3));
label_31932c:
    // 0x31932c: 0x3c033e99  lui         $v1, 0x3E99
    ctx->pc = 0x31932cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16025 << 16));
label_319330:
    // 0x319330: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x319330u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
label_319334:
    // 0x319334: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x319334u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_319338:
    // 0x319338: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x319338u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_31933c:
    // 0x31933c: 0xe48001a0  swc1        $f0, 0x1A0($a0)
    ctx->pc = 0x31933cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 416), bits); }
label_319340:
    // 0x319340: 0x3c053e99  lui         $a1, 0x3E99
    ctx->pc = 0x319340u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16025 << 16));
label_319344:
    // 0x319344: 0x34a5999a  ori         $a1, $a1, 0x999A
    ctx->pc = 0x319344u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)39322);
label_319348:
    // 0x319348: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x319348u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31934c:
    // 0x31934c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x31934cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_319350:
    // 0x319350: 0xe46001a4  swc1        $f0, 0x1A4($v1)
    ctx->pc = 0x319350u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 420), bits); }
label_319354:
    // 0x319354: 0x3c033e99  lui         $v1, 0x3E99
    ctx->pc = 0x319354u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16025 << 16));
label_319358:
    // 0x319358: 0x3464999a  ori         $a0, $v1, 0x999A
    ctx->pc = 0x319358u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
label_31935c:
    // 0x31935c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x31935cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_319360:
    // 0x319360: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x319360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_319364:
    // 0x319364: 0xe46001a8  swc1        $f0, 0x1A8($v1)
    ctx->pc = 0x319364u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 424), bits); }
label_319368:
    // 0x319368: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x319368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_31936c:
    // 0x31936c: 0xac60128c  sw          $zero, 0x128C($v1)
    ctx->pc = 0x31936cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4748), GPR_U32(ctx, 0));
label_319370:
    // 0x319370: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x319370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_319374:
    // 0x319374: 0xac401290  sw          $zero, 0x1290($v0)
    ctx->pc = 0x319374u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4752), GPR_U32(ctx, 0));
label_319378:
    // 0x319378: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x319378u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31937c:
    // 0x31937c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x31937cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_319380:
    // 0x319380: 0x8c4402d0  lw          $a0, 0x2D0($v0)
    ctx->pc = 0x319380u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
label_319384:
    // 0x319384: 0xe480010c  swc1        $f0, 0x10C($a0)
    ctx->pc = 0x319384u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 268), bits); }
label_319388:
    // 0x319388: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x319388u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_31938c:
    // 0x31938c: 0x8ca70130  lw          $a3, 0x130($a1)
    ctx->pc = 0x31938cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
label_319390:
    // 0x319390: 0x24040045  addiu       $a0, $zero, 0x45
    ctx->pc = 0x319390u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
label_319394:
    // 0x319394: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x319394u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_319398:
    // 0x319398: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x319398u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_31939c:
    // 0x31939c: 0xc0654fc  jal         func_1953F0
label_3193a0:
    if (ctx->pc == 0x3193A0u) {
        ctx->pc = 0x3193A4u;
        goto label_3193a4;
    }
    ctx->pc = 0x31939Cu;
    SET_GPR_U32(ctx, 31, 0x3193A4u);
    ctx->pc = 0x1953F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1953F0u, 0x31939Cu, 0x3193A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3193A4u;
label_3193a4:
    // 0x3193a4: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x3193a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_3193a8:
    // 0x3193a8: 0x8c470130  lw          $a3, 0x130($v0)
    ctx->pc = 0x3193a8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_3193ac:
    // 0x3193ac: 0x24040057  addiu       $a0, $zero, 0x57
    ctx->pc = 0x3193acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 87));
label_3193b0:
    // 0x3193b0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3193b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3193b4:
    // 0x3193b4: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x3193b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_3193b8:
    // 0x3193b8: 0xc0654fc  jal         func_1953F0
label_3193bc:
    if (ctx->pc == 0x3193BCu) {
        ctx->pc = 0x3193C0u;
        goto label_3193c0;
    }
    ctx->pc = 0x3193B8u;
    SET_GPR_U32(ctx, 31, 0x3193C0u);
    ctx->pc = 0x1953F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1953F0u, 0x3193B8u, 0x3193C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3193C0u;
label_3193c0:
    // 0x3193c0: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x3193c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_3193c4:
    // 0x3193c4: 0x8c421298  lw          $v0, 0x1298($v0)
    ctx->pc = 0x3193c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4760)));
label_3193c8:
    // 0x3193c8: 0x22180  sll         $a0, $v0, 6
    ctx->pc = 0x3193c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_3193cc:
    // 0x3193cc: 0x8e860130  lw          $a2, 0x130($s4)
    ctx->pc = 0x3193ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 304)));
label_3193d0:
    // 0x3193d0: 0xc43821  addu        $a3, $a2, $a0
    ctx->pc = 0x3193d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_3193d4:
    // 0x3193d4: 0x24050057  addiu       $a1, $zero, 0x57
    ctx->pc = 0x3193d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 87));
label_3193d8:
    // 0x3193d8: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x3193d8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_3193dc:
    // 0x3193dc: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3193dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3193e0:
    // 0x3193e0: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x3193e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_3193e4:
    // 0x3193e4: 0xc0654fc  jal         func_1953F0
label_3193e8:
    if (ctx->pc == 0x3193E8u) {
        ctx->pc = 0x3193ECu;
        goto label_3193ec;
    }
    ctx->pc = 0x3193E4u;
    SET_GPR_U32(ctx, 31, 0x3193ECu);
    ctx->pc = 0x1953F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1953F0u, 0x3193E4u, 0x3193ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3193ECu;
label_3193ec:
    // 0x3193ec: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x3193ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_3193f0:
    // 0x3193f0: 0x8c670130  lw          $a3, 0x130($v1)
    ctx->pc = 0x3193f0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
label_3193f4:
    // 0x3193f4: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x3193f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_3193f8:
    // 0x3193f8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3193f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3193fc:
    // 0x3193fc: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x3193fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_319400:
    // 0x319400: 0xc065580  jal         func_195600
label_319404:
    if (ctx->pc == 0x319404u) {
        ctx->pc = 0x319408u;
        goto label_319408;
    }
    ctx->pc = 0x319400u;
    SET_GPR_U32(ctx, 31, 0x319408u);
    ctx->pc = 0x195600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x195600u, 0x319400u, 0x319408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319408u;
label_319408:
    // 0x319408: 0x8fa60088  lw          $a2, 0x88($sp)
    ctx->pc = 0x319408u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_31940c:
    // 0x31940c: 0x8cc70130  lw          $a3, 0x130($a2)
    ctx->pc = 0x31940cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 304)));
label_319410:
    // 0x319410: 0x24040017  addiu       $a0, $zero, 0x17
    ctx->pc = 0x319410u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_319414:
    // 0x319414: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x319414u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_319418:
    // 0x319418: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x319418u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_31941c:
    // 0x31941c: 0xc065580  jal         func_195600
label_319420:
    if (ctx->pc == 0x319420u) {
        ctx->pc = 0x319424u;
        goto label_319424;
    }
    ctx->pc = 0x31941Cu;
    SET_GPR_U32(ctx, 31, 0x319424u);
    ctx->pc = 0x195600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x195600u, 0x31941Cu, 0x319424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319424u;
label_319424:
    // 0x319424: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x319424u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_319428:
    // 0x319428: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x319428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6808)));
label_31942c:
    // 0x31942c: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x31942cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
label_319430:
    // 0x319430: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x319430u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_319434:
    // 0x319434: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x319434u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_319438:
    // 0x319438: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x319438u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6808), GPR_U32(ctx, 2));
label_31943c:
    // 0x31943c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x31943cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_319440:
    // 0x319440: 0x0  nop
    ctx->pc = 0x319440u;
    // NOP
label_319444:
    // 0x319444: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x319444u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_319448:
    // 0x319448: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x319448u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31944c:
    // 0x31944c: 0x0  nop
    ctx->pc = 0x31944cu;
    // NOP
label_319450:
    // 0x319450: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x319450u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_319454:
    // 0x319454: 0x3c02c348  lui         $v0, 0xC348
    ctx->pc = 0x319454u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49992 << 16));
label_319458:
    // 0x319458: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x319458u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31945c:
    // 0x31945c: 0x0  nop
    ctx->pc = 0x31945cu;
    // NOP
label_319460:
    // 0x319460: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x319460u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_319464:
    // 0x319464: 0x3c044080  lui         $a0, 0x4080
    ctx->pc = 0x319464u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16512 << 16));
label_319468:
    // 0x319468: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x319468u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31946c:
    // 0x31946c: 0x0  nop
    ctx->pc = 0x31946cu;
    // NOP
label_319470:
    // 0x319470: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x319470u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
label_319474:
    // 0x319474: 0x8fa60088  lw          $a2, 0x88($sp)
    ctx->pc = 0x319474u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_319478:
    // 0x319478: 0x8cc20130  lw          $v0, 0x130($a2)
    ctx->pc = 0x319478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 304)));
label_31947c:
    // 0x31947c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x31947cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_319480:
    // 0x319480: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x319480u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_319484:
    // 0x319484: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x319484u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_319488:
    // 0x319488: 0x32438  dsll        $a0, $v1, 16
    ctx->pc = 0x319488u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << 16);
label_31948c:
    // 0x31948c: 0x3483ffff  ori         $v1, $a0, 0xFFFF
    ctx->pc = 0x31948cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_319490:
    // 0x319490: 0x433824  and         $a3, $v0, $v1
    ctx->pc = 0x319490u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_319494:
    // 0x319494: 0x24040300  addiu       $a0, $zero, 0x300
    ctx->pc = 0x319494u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
label_319498:
    // 0x319498: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x319498u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_31949c:
    // 0x31949c: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x31949cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3194a0:
    // 0x3194a0: 0xc062f5c  jal         func_18BD70
label_3194a4:
    if (ctx->pc == 0x3194A4u) {
        ctx->pc = 0x3194A8u;
        goto label_3194a8;
    }
    ctx->pc = 0x3194A0u;
    SET_GPR_U32(ctx, 31, 0x3194A8u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x3194A0u, 0x3194A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3194A8u;
label_3194a8:
    // 0x3194a8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x3194a8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_3194ac:
    // 0x3194ac: 0xc0630a8  jal         func_18C2A0
label_3194b0:
    if (ctx->pc == 0x3194B0u) {
        ctx->pc = 0x3194B4u;
        goto label_3194b4;
    }
    ctx->pc = 0x3194ACu;
    SET_GPR_U32(ctx, 31, 0x3194B4u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x3194ACu, 0x3194B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3194B4u;
label_3194b4:
    // 0x3194b4: 0x3c044396  lui         $a0, 0x4396
    ctx->pc = 0x3194b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17302 << 16));
label_3194b8:
    // 0x3194b8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3194b8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3194bc:
    // 0x3194bc: 0x0  nop
    ctx->pc = 0x3194bcu;
    // NOP
label_3194c0:
    // 0x3194c0: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x3194c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_3194c4:
    // 0x3194c4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3194c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3194c8:
    // 0x3194c8: 0x0  nop
    ctx->pc = 0x3194c8u;
    // NOP
label_3194cc:
    // 0x3194cc: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x3194ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_3194d0:
    // 0x3194d0: 0x3c06c348  lui         $a2, 0xC348
    ctx->pc = 0x3194d0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)49992 << 16));
label_3194d4:
    // 0x3194d4: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x3194d4u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3194d8:
    // 0x3194d8: 0x0  nop
    ctx->pc = 0x3194d8u;
    // NOP
label_3194dc:
    // 0x3194dc: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x3194dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_3194e0:
    // 0x3194e0: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x3194e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_3194e4:
    // 0x3194e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3194e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3194e8:
    // 0x3194e8: 0x0  nop
    ctx->pc = 0x3194e8u;
    // NOP
label_3194ec:
    // 0x3194ec: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x3194ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
label_3194f0:
    // 0x3194f0: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x3194f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_3194f4:
    // 0x3194f4: 0x8c850130  lw          $a1, 0x130($a0)
    ctx->pc = 0x3194f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
label_3194f8:
    // 0x3194f8: 0x5103c  dsll32      $v0, $a1, 0
    ctx->pc = 0x3194f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 0));
label_3194fc:
    // 0x3194fc: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x3194fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_319500:
    // 0x319500: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x319500u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_319504:
    // 0x319504: 0x32c38  dsll        $a1, $v1, 16
    ctx->pc = 0x319504u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << 16);
label_319508:
    // 0x319508: 0x34a3ffff  ori         $v1, $a1, 0xFFFF
    ctx->pc = 0x319508u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
label_31950c:
    // 0x31950c: 0x433824  and         $a3, $v0, $v1
    ctx->pc = 0x31950cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_319510:
    // 0x319510: 0x24040300  addiu       $a0, $zero, 0x300
    ctx->pc = 0x319510u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
label_319514:
    // 0x319514: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x319514u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_319518:
    // 0x319518: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x319518u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_31951c:
    // 0x31951c: 0xc062f5c  jal         func_18BD70
label_319520:
    if (ctx->pc == 0x319520u) {
        ctx->pc = 0x319524u;
        goto label_319524;
    }
    ctx->pc = 0x31951Cu;
    SET_GPR_U32(ctx, 31, 0x319524u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x31951Cu, 0x319524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319524u;
label_319524:
    // 0x319524: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x319524u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_319528:
    // 0x319528: 0xc0630a8  jal         func_18C2A0
label_31952c:
    if (ctx->pc == 0x31952Cu) {
        ctx->pc = 0x319530u;
        goto label_319530;
    }
    ctx->pc = 0x319528u;
    SET_GPR_U32(ctx, 31, 0x319530u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x319528u, 0x319530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319530u;
label_319530:
    // 0x319530: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x319530u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_319534:
    // 0x319534: 0x0  nop
    ctx->pc = 0x319534u;
    // NOP
label_319538:
    // 0x319538: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x319538u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_31953c:
    // 0x31953c: 0x3c0542c8  lui         $a1, 0x42C8
    ctx->pc = 0x31953cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17096 << 16));
label_319540:
    // 0x319540: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x319540u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_319544:
    // 0x319544: 0x0  nop
    ctx->pc = 0x319544u;
    // NOP
label_319548:
    // 0x319548: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x319548u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_31954c:
    // 0x31954c: 0x3c02c348  lui         $v0, 0xC348
    ctx->pc = 0x31954cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49992 << 16));
label_319550:
    // 0x319550: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x319550u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_319554:
    // 0x319554: 0x0  nop
    ctx->pc = 0x319554u;
    // NOP
label_319558:
    // 0x319558: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x319558u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_31955c:
    // 0x31955c: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x31955cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_319560:
    // 0x319560: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x319560u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_319564:
    // 0x319564: 0x0  nop
    ctx->pc = 0x319564u;
    // NOP
label_319568:
    // 0x319568: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x319568u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
label_31956c:
    // 0x31956c: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x31956cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_319570:
    // 0x319570: 0x8c850130  lw          $a1, 0x130($a0)
    ctx->pc = 0x319570u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
label_319574:
    // 0x319574: 0x5103c  dsll32      $v0, $a1, 0
    ctx->pc = 0x319574u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 0));
label_319578:
    // 0x319578: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x319578u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_31957c:
    // 0x31957c: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x31957cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_319580:
    // 0x319580: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x319580u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_319584:
    // 0x319584: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x319584u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_319588:
    // 0x319588: 0x433824  and         $a3, $v0, $v1
    ctx->pc = 0x319588u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_31958c:
    // 0x31958c: 0x24050300  addiu       $a1, $zero, 0x300
    ctx->pc = 0x31958cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
label_319590:
    // 0x319590: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x319590u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_319594:
    // 0x319594: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x319594u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_319598:
    // 0x319598: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x319598u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_31959c:
    // 0x31959c: 0xc062f5c  jal         func_18BD70
label_3195a0:
    if (ctx->pc == 0x3195A0u) {
        ctx->pc = 0x3195A4u;
        goto label_3195a4;
    }
    ctx->pc = 0x31959Cu;
    SET_GPR_U32(ctx, 31, 0x3195A4u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x31959Cu, 0x3195A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3195A4u;
label_3195a4:
    // 0x3195a4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x3195a4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_3195a8:
    // 0x3195a8: 0xc0630a8  jal         func_18C2A0
label_3195ac:
    if (ctx->pc == 0x3195ACu) {
        ctx->pc = 0x3195B0u;
        goto label_3195b0;
    }
    ctx->pc = 0x3195A8u;
    SET_GPR_U32(ctx, 31, 0x3195B0u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x3195A8u, 0x3195B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3195B0u;
label_3195b0:
    // 0x3195b0: 0x3c03c3fa  lui         $v1, 0xC3FA
    ctx->pc = 0x3195b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50170 << 16));
label_3195b4:
    // 0x3195b4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3195b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3195b8:
    // 0x3195b8: 0x0  nop
    ctx->pc = 0x3195b8u;
    // NOP
label_3195bc:
    // 0x3195bc: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x3195bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_3195c0:
    // 0x3195c0: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x3195c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_3195c4:
    // 0x3195c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3195c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3195c8:
    // 0x3195c8: 0x0  nop
    ctx->pc = 0x3195c8u;
    // NOP
label_3195cc:
    // 0x3195cc: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x3195ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_3195d0:
    // 0x3195d0: 0x3c02c348  lui         $v0, 0xC348
    ctx->pc = 0x3195d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49992 << 16));
label_3195d4:
    // 0x3195d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3195d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3195d8:
    // 0x3195d8: 0x0  nop
    ctx->pc = 0x3195d8u;
    // NOP
label_3195dc:
    // 0x3195dc: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x3195dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_3195e0:
    // 0x3195e0: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x3195e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_3195e4:
    // 0x3195e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3195e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3195e8:
    // 0x3195e8: 0x0  nop
    ctx->pc = 0x3195e8u;
    // NOP
label_3195ec:
    // 0x3195ec: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x3195ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
label_3195f0:
    // 0x3195f0: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x3195f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_3195f4:
    // 0x3195f4: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x3195f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_3195f8:
    // 0x3195f8: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x3195f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
label_3195fc:
    // 0x3195fc: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x3195fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
label_319600:
    // 0x319600: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x319600u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_319604:
    // 0x319604: 0x51438  dsll        $v0, $a1, 16
    ctx->pc = 0x319604u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << 16);
label_319608:
    // 0x319608: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x319608u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_31960c:
    // 0x31960c: 0x823824  and         $a3, $a0, $v0
    ctx->pc = 0x31960cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_319610:
    // 0x319610: 0x24040300  addiu       $a0, $zero, 0x300
    ctx->pc = 0x319610u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
label_319614:
    // 0x319614: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x319614u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_319618:
    // 0x319618: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x319618u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_31961c:
    // 0x31961c: 0xc062f5c  jal         func_18BD70
label_319620:
    if (ctx->pc == 0x319620u) {
        ctx->pc = 0x319624u;
        goto label_319624;
    }
    ctx->pc = 0x31961Cu;
    SET_GPR_U32(ctx, 31, 0x319624u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x31961Cu, 0x319624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319624u;
label_319624:
    // 0x319624: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x319624u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_319628:
    // 0x319628: 0xc0630a8  jal         func_18C2A0
label_31962c:
    if (ctx->pc == 0x31962Cu) {
        ctx->pc = 0x319630u;
        goto label_319630;
    }
    ctx->pc = 0x319628u;
    SET_GPR_U32(ctx, 31, 0x319630u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x319628u, 0x319630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319630u;
label_319630:
    // 0x319630: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x319630u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_319634:
    // 0x319634: 0x24820120  addiu       $v0, $a0, 0x120
    ctx->pc = 0x319634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
label_319638:
    // 0x319638: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x319638u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_31963c:
    // 0x31963c: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x31963cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_319640:
    // 0x319640: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x319640u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
label_319644:
    // 0x319644: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x319644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_319648:
    // 0x319648: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x319648u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
label_31964c:
    // 0x31964c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31964cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_319650:
    // 0x319650: 0x0  nop
    ctx->pc = 0x319650u;
    // NOP
label_319654:
    // 0x319654: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x319654u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_319658:
    // 0x319658: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x319658u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_31965c:
    // 0x31965c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x31965cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_319660:
    // 0x319660: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x319660u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
label_319664:
    // 0x319664: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x319664u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
label_319668:
    // 0x319668: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x319668u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_31966c:
    // 0x31966c: 0x51438  dsll        $v0, $a1, 16
    ctx->pc = 0x31966cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << 16);
label_319670:
    // 0x319670: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x319670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_319674:
    // 0x319674: 0x821824  and         $v1, $a0, $v0
    ctx->pc = 0x319674u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_319678:
    // 0x319678: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x319678u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
label_31967c:
    // 0x31967c: 0x34440018  ori         $a0, $v0, 0x18
    ctx->pc = 0x31967cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24);
label_319680:
    // 0x319680: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x319680u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_319684:
    // 0x319684: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x319684u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_319688:
    // 0x319688: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x319688u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_31968c:
    // 0x31968c: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x31968cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_319690:
    // 0x319690: 0xc06371c  jal         func_18DC70
label_319694:
    if (ctx->pc == 0x319694u) {
        ctx->pc = 0x319698u;
        goto label_319698;
    }
    ctx->pc = 0x319690u;
    SET_GPR_U32(ctx, 31, 0x319698u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x319690u, 0x319698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319698u;
label_319698:
    // 0x319698: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x319698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_31969c:
    // 0x31969c: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x31969cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
label_3196a0:
    // 0x3196a0: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x3196a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
label_3196a4:
    // 0x3196a4: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x3196a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_3196a8:
    // 0x3196a8: 0x51438  dsll        $v0, $a1, 16
    ctx->pc = 0x3196a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << 16);
label_3196ac:
    // 0x3196ac: 0x3445ffff  ori         $a1, $v0, 0xFFFF
    ctx->pc = 0x3196acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_3196b0:
    // 0x3196b0: 0x853024  and         $a2, $a0, $a1
    ctx->pc = 0x3196b0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
label_3196b4:
    // 0x3196b4: 0x6183c  dsll32      $v1, $a2, 0
    ctx->pc = 0x3196b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 0));
label_3196b8:
    // 0x3196b8: 0x34640018  ori         $a0, $v1, 0x18
    ctx->pc = 0x3196b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)24);
label_3196bc:
    // 0x3196bc: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x3196bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3196c0:
    // 0x3196c0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x3196c0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_3196c4:
    // 0x3196c4: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x3196c4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_3196c8:
    // 0x3196c8: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x3196c8u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_3196cc:
    // 0x3196cc: 0xc06371c  jal         func_18DC70
label_3196d0:
    if (ctx->pc == 0x3196D0u) {
        ctx->pc = 0x3196D4u;
        goto label_3196d4;
    }
    ctx->pc = 0x3196CCu;
    SET_GPR_U32(ctx, 31, 0x3196D4u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x3196CCu, 0x3196D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3196D4u;
label_3196d4:
    // 0x3196d4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x3196d4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_3196d8:
    // 0x3196d8: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x3196d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_3196dc:
    // 0x3196dc: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x3196dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
label_3196e0:
    // 0x3196e0: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x3196e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
label_3196e4:
    // 0x3196e4: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x3196e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_3196e8:
    // 0x3196e8: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x3196e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
label_3196ec:
    // 0x3196ec: 0x34a3ffff  ori         $v1, $a1, 0xFFFF
    ctx->pc = 0x3196ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
label_3196f0:
    // 0x3196f0: 0x839024  and         $s2, $a0, $v1
    ctx->pc = 0x3196f0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_3196f4:
    // 0x3196f4: 0x12983c  dsll32      $s3, $s2, 0
    ctx->pc = 0x3196f4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 18) << (32 + 0));
label_3196f8:
    // 0x3196f8: 0x36640018  ori         $a0, $s3, 0x18
    ctx->pc = 0x3196f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)24);
label_3196fc:
    // 0x3196fc: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x3196fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_319700:
    // 0x319700: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x319700u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_319704:
    // 0x319704: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x319704u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_319708:
    // 0x319708: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x319708u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_31970c:
    // 0x31970c: 0xc06371c  jal         func_18DC70
label_319710:
    if (ctx->pc == 0x319710u) {
        ctx->pc = 0x319714u;
        goto label_319714;
    }
    ctx->pc = 0x31970Cu;
    SET_GPR_U32(ctx, 31, 0x319714u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x31970Cu, 0x319714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319714u;
label_319714:
    // 0x319714: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x319714u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_319718:
    // 0x319718: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x319718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_31971c:
    // 0x31971c: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x31971cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
label_319720:
    // 0x319720: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x319720u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_319724:
    // 0x319724: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x319724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_319728:
    // 0x319728: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x319728u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
label_31972c:
    // 0x31972c: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x31972cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_319730:
    // 0x319730: 0x3c034396  lui         $v1, 0x4396
    ctx->pc = 0x319730u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
label_319734:
    // 0x319734: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x319734u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_319738:
    // 0x319738: 0x0  nop
    ctx->pc = 0x319738u;
    // NOP
label_31973c:
    // 0x31973c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x31973cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_319740:
    // 0x319740: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x319740u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_319744:
    // 0x319744: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x319744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_319748:
    // 0x319748: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x319748u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_31974c:
    // 0x31974c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x31974cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_319750:
    // 0x319750: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x319750u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_319754:
    // 0x319754: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x319754u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_319758:
    // 0x319758: 0x3444ffff  ori         $a0, $v0, 0xFFFF
    ctx->pc = 0x319758u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_31975c:
    // 0x31975c: 0x642824  and         $a1, $v1, $a0
    ctx->pc = 0x31975cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_319760:
    // 0x319760: 0x5103c  dsll32      $v0, $a1, 0
    ctx->pc = 0x319760u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 0));
label_319764:
    // 0x319764: 0x34440018  ori         $a0, $v0, 0x18
    ctx->pc = 0x319764u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24);
label_319768:
    // 0x319768: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x319768u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_31976c:
    // 0x31976c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x31976cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_319770:
    // 0x319770: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x319770u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_319774:
    // 0x319774: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x319774u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_319778:
    // 0x319778: 0xc06371c  jal         func_18DC70
label_31977c:
    if (ctx->pc == 0x31977Cu) {
        ctx->pc = 0x319780u;
        goto label_319780;
    }
    ctx->pc = 0x319778u;
    SET_GPR_U32(ctx, 31, 0x319780u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x319778u, 0x319780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319780u;
label_319780:
    // 0x319780: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x319780u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_319784:
    // 0x319784: 0x4303c  dsll32      $a2, $a0, 0
    ctx->pc = 0x319784u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << (32 + 0));
label_319788:
    // 0x319788: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x319788u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
label_31978c:
    // 0x31978c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x31978cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_319790:
    // 0x319790: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x319790u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_319794:
    // 0x319794: 0x3447ffff  ori         $a3, $v0, 0xFFFF
    ctx->pc = 0x319794u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_319798:
    // 0x319798: 0xc72024  and         $a0, $a2, $a3
    ctx->pc = 0x319798u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 7));
label_31979c:
    // 0x31979c: 0x4303c  dsll32      $a2, $a0, 0
    ctx->pc = 0x31979cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << (32 + 0));
label_3197a0:
    // 0x3197a0: 0x34c40018  ori         $a0, $a2, 0x18
    ctx->pc = 0x3197a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)24);
label_3197a4:
    // 0x3197a4: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x3197a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3197a8:
    // 0x3197a8: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x3197a8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_3197ac:
    // 0x3197ac: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x3197acu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_3197b0:
    // 0x3197b0: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x3197b0u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_3197b4:
    // 0x3197b4: 0xc06371c  jal         func_18DC70
label_3197b8:
    if (ctx->pc == 0x3197B8u) {
        ctx->pc = 0x3197BCu;
        goto label_3197bc;
    }
    ctx->pc = 0x3197B4u;
    SET_GPR_U32(ctx, 31, 0x3197BCu);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x3197B4u, 0x3197BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3197BCu;
label_3197bc:
    // 0x3197bc: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x3197bcu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_3197c0:
    // 0x3197c0: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x3197c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_3197c4:
    // 0x3197c4: 0x4303c  dsll32      $a2, $a0, 0
    ctx->pc = 0x3197c4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << (32 + 0));
label_3197c8:
    // 0x3197c8: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x3197c8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
label_3197cc:
    // 0x3197cc: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x3197ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_3197d0:
    // 0x3197d0: 0x41c38  dsll        $v1, $a0, 16
    ctx->pc = 0x3197d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << 16);
label_3197d4:
    // 0x3197d4: 0x3464ffff  ori         $a0, $v1, 0xFFFF
    ctx->pc = 0x3197d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_3197d8:
    // 0x3197d8: 0xc41824  and         $v1, $a2, $a0
    ctx->pc = 0x3197d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
label_3197dc:
    // 0x3197dc: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x3197dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_3197e0:
    // 0x3197e0: 0x34640018  ori         $a0, $v1, 0x18
    ctx->pc = 0x3197e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)24);
label_3197e4:
    // 0x3197e4: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x3197e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3197e8:
    // 0x3197e8: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x3197e8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_3197ec:
    // 0x3197ec: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x3197ecu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_3197f0:
    // 0x3197f0: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x3197f0u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_3197f4:
    // 0x3197f4: 0xc06371c  jal         func_18DC70
label_3197f8:
    if (ctx->pc == 0x3197F8u) {
        ctx->pc = 0x3197FCu;
        goto label_3197fc;
    }
    ctx->pc = 0x3197F4u;
    SET_GPR_U32(ctx, 31, 0x3197FCu);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x3197F4u, 0x3197FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3197FCu;
label_3197fc:
    // 0x3197fc: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x3197fcu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_319800:
    // 0x319800: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x319800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_319804:
    // 0x319804: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x319804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
label_319808:
    // 0x319808: 0x78860000  lq          $a2, 0x0($a0)
    ctx->pc = 0x319808u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_31980c:
    // 0x31980c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x31980cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_319810:
    // 0x319810: 0x7c860000  sq          $a2, 0x0($a0)
    ctx->pc = 0x319810u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 6));
label_319814:
    // 0x319814: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x319814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_319818:
    // 0x319818: 0x3c03c396  lui         $v1, 0xC396
    ctx->pc = 0x319818u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50070 << 16));
label_31981c:
    // 0x31981c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x31981cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_319820:
    // 0x319820: 0x0  nop
    ctx->pc = 0x319820u;
    // NOP
label_319824:
    // 0x319824: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x319824u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_319828:
    // 0x319828: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x319828u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_31982c:
    // 0x31982c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x31982cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_319830:
    // 0x319830: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x319830u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
label_319834:
    // 0x319834: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x319834u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
label_319838:
    // 0x319838: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x319838u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_31983c:
    // 0x31983c: 0x41c38  dsll        $v1, $a0, 16
    ctx->pc = 0x31983cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << 16);
label_319840:
    // 0x319840: 0x3470ffff  ori         $s0, $v1, 0xFFFF
    ctx->pc = 0x319840u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_319844:
    // 0x319844: 0xb01824  and         $v1, $a1, $s0
    ctx->pc = 0x319844u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 16));
label_319848:
    // 0x319848: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x319848u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
label_31984c:
    // 0x31984c: 0x34860018  ori         $a2, $a0, 0x18
    ctx->pc = 0x31984cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)24);
label_319850:
    // 0x319850: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x319850u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_319854:
    // 0x319854: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x319854u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_319858:
    // 0x319858: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x319858u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_31985c:
    // 0x31985c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x31985cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_319860:
    // 0x319860: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x319860u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_319864:
    // 0x319864: 0xc06371c  jal         func_18DC70
label_319868:
    if (ctx->pc == 0x319868u) {
        ctx->pc = 0x31986Cu;
        goto label_31986c;
    }
    ctx->pc = 0x319864u;
    SET_GPR_U32(ctx, 31, 0x31986Cu);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x319864u, 0x31986Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31986Cu;
label_31986c:
    // 0x31986c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x31986cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_319870:
    // 0x319870: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x319870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_319874:
    // 0x319874: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x319874u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
label_319878:
    // 0x319878: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x319878u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
label_31987c:
    // 0x31987c: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x31987cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_319880:
    // 0x319880: 0x31438  dsll        $v0, $v1, 16
    ctx->pc = 0x319880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 16);
label_319884:
    // 0x319884: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x319884u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_319888:
    // 0x319888: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x319888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_31988c:
    // 0x31988c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x31988cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_319890:
    // 0x319890: 0x34440018  ori         $a0, $v0, 0x18
    ctx->pc = 0x319890u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24);
label_319894:
    // 0x319894: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x319894u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_319898:
    // 0x319898: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x319898u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_31989c:
    // 0x31989c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x31989cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_3198a0:
    // 0x3198a0: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x3198a0u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_3198a4:
    // 0x3198a4: 0xc06371c  jal         func_18DC70
label_3198a8:
    if (ctx->pc == 0x3198A8u) {
        ctx->pc = 0x3198ACu;
        goto label_3198ac;
    }
    ctx->pc = 0x3198A4u;
    SET_GPR_U32(ctx, 31, 0x3198ACu);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x3198A4u, 0x3198ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3198ACu;
label_3198ac:
    // 0x3198ac: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x3198acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_3198b0:
    // 0x3198b0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3198b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_3198b4:
    // 0x3198b4: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x3198b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_3198b8:
    // 0x3198b8: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x3198b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_3198bc:
    // 0x3198bc: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x3198bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_3198c0:
    // 0x3198c0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x3198c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_3198c4:
    // 0x3198c4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3198c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_3198c8:
    // 0x3198c8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3198c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_3198cc:
    // 0x3198cc: 0x34440018  ori         $a0, $v0, 0x18
    ctx->pc = 0x3198ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24);
label_3198d0:
    // 0x3198d0: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x3198d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3198d4:
    // 0x3198d4: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x3198d4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_3198d8:
    // 0x3198d8: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x3198d8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_3198dc:
    // 0x3198dc: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x3198dcu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_3198e0:
    // 0x3198e0: 0xc06371c  jal         func_18DC70
label_3198e4:
    if (ctx->pc == 0x3198E4u) {
        ctx->pc = 0x3198E8u;
        goto label_3198e8;
    }
    ctx->pc = 0x3198E0u;
    SET_GPR_U32(ctx, 31, 0x3198E8u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x3198E0u, 0x3198E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3198E8u;
label_3198e8:
    // 0x3198e8: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x3198e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_3198ec:
    // 0x3198ec: 0x24420120  addiu       $v0, $v0, 0x120
    ctx->pc = 0x3198ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
label_3198f0:
    // 0x3198f0: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x3198f0u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_3198f4:
    // 0x3198f4: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x3198f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3198f8:
    // 0x3198f8: 0x7cc40000  sq          $a0, 0x0($a2)
    ctx->pc = 0x3198f8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 4));
label_3198fc:
    // 0x3198fc: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x3198fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_319900:
    // 0x319900: 0x3c02c396  lui         $v0, 0xC396
    ctx->pc = 0x319900u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50070 << 16));
label_319904:
    // 0x319904: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x319904u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_319908:
    // 0x319908: 0x0  nop
    ctx->pc = 0x319908u;
    // NOP
label_31990c:
    // 0x31990c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x31990cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_319910:
    // 0x319910: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x319910u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_319914:
    // 0x319914: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x319914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_319918:
    // 0x319918: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x319918u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
label_31991c:
    // 0x31991c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31991cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_319920:
    // 0x319920: 0x0  nop
    ctx->pc = 0x319920u;
    // NOP
label_319924:
    // 0x319924: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x319924u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_319928:
    // 0x319928: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x319928u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_31992c:
    // 0x31992c: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x31992cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_319930:
    // 0x319930: 0x3c03c348  lui         $v1, 0xC348
    ctx->pc = 0x319930u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49992 << 16));
label_319934:
    // 0x319934: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x319934u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_319938:
    // 0x319938: 0x0  nop
    ctx->pc = 0x319938u;
    // NOP
label_31993c:
    // 0x31993c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x31993cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_319940:
    // 0x319940: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x319940u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_319944:
    // 0x319944: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x319944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_319948:
    // 0x319948: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x319948u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
label_31994c:
    // 0x31994c: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x31994cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
label_319950:
    // 0x319950: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x319950u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_319954:
    // 0x319954: 0x21c38  dsll        $v1, $v0, 16
    ctx->pc = 0x319954u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 16);
label_319958:
    // 0x319958: 0x3474ffff  ori         $s4, $v1, 0xFFFF
    ctx->pc = 0x319958u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_31995c:
    // 0x31995c: 0x941824  and         $v1, $a0, $s4
    ctx->pc = 0x31995cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 20));
label_319960:
    // 0x319960: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x319960u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_319964:
    // 0x319964: 0x34640018  ori         $a0, $v1, 0x18
    ctx->pc = 0x319964u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)24);
label_319968:
    // 0x319968: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x319968u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_31996c:
    // 0x31996c: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x31996cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_319970:
    // 0x319970: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x319970u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_319974:
    // 0x319974: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x319974u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_319978:
    // 0x319978: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x319978u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_31997c:
    // 0x31997c: 0xc06371c  jal         func_18DC70
label_319980:
    if (ctx->pc == 0x319980u) {
        ctx->pc = 0x319984u;
        goto label_319984;
    }
    ctx->pc = 0x31997Cu;
    SET_GPR_U32(ctx, 31, 0x319984u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x31997Cu, 0x319984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319984u;
label_319984:
    // 0x319984: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x319984u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_319988:
    // 0x319988: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x319988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_31998c:
    // 0x31998c: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x31998cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
label_319990:
    // 0x319990: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x319990u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
label_319994:
    // 0x319994: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x319994u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_319998:
    // 0x319998: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x319998u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_31999c:
    // 0x31999c: 0x3464ffff  ori         $a0, $v1, 0xFFFF
    ctx->pc = 0x31999cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_3199a0:
    // 0x3199a0: 0xa41824  and         $v1, $a1, $a0
    ctx->pc = 0x3199a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
label_3199a4:
    // 0x3199a4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x3199a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_3199a8:
    // 0x3199a8: 0x34640018  ori         $a0, $v1, 0x18
    ctx->pc = 0x3199a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)24);
label_3199ac:
    // 0x3199ac: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x3199acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3199b0:
    // 0x3199b0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x3199b0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_3199b4:
    // 0x3199b4: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x3199b4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_3199b8:
    // 0x3199b8: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x3199b8u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_3199bc:
    // 0x3199bc: 0xc06371c  jal         func_18DC70
label_3199c0:
    if (ctx->pc == 0x3199C0u) {
        ctx->pc = 0x3199C4u;
        goto label_3199c4;
    }
    ctx->pc = 0x3199BCu;
    SET_GPR_U32(ctx, 31, 0x3199C4u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x3199BCu, 0x3199C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3199C4u;
label_3199c4:
    // 0x3199c4: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x3199c4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_3199c8:
    // 0x3199c8: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x3199c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_3199cc:
    // 0x3199cc: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x3199ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
label_3199d0:
    // 0x3199d0: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x3199d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
label_3199d4:
    // 0x3199d4: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x3199d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_3199d8:
    // 0x3199d8: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x3199d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_3199dc:
    // 0x3199dc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x3199dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_3199e0:
    // 0x3199e0: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x3199e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_3199e4:
    // 0x3199e4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3199e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_3199e8:
    // 0x3199e8: 0x34440018  ori         $a0, $v0, 0x18
    ctx->pc = 0x3199e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24);
label_3199ec:
    // 0x3199ec: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x3199ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3199f0:
    // 0x3199f0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x3199f0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_3199f4:
    // 0x3199f4: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x3199f4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_3199f8:
    // 0x3199f8: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x3199f8u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_3199fc:
    // 0x3199fc: 0xc06371c  jal         func_18DC70
label_319a00:
    if (ctx->pc == 0x319A00u) {
        ctx->pc = 0x319A04u;
        goto label_319a04;
    }
    ctx->pc = 0x3199FCu;
    SET_GPR_U32(ctx, 31, 0x319A04u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x3199FCu, 0x319A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319A04u;
label_319a04:
    // 0x319a04: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x319a04u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_319a08:
    // 0x319a08: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x319a08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_319a0c:
    // 0x319a0c: 0x24850120  addiu       $a1, $a0, 0x120
    ctx->pc = 0x319a0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
label_319a10:
    // 0x319a10: 0x78a60000  lq          $a2, 0x0($a1)
    ctx->pc = 0x319a10u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_319a14:
    // 0x319a14: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x319a14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_319a18:
    // 0x319a18: 0x7c460000  sq          $a2, 0x0($v0)
    ctx->pc = 0x319a18u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 6));
label_319a1c:
    // 0x319a1c: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x319a1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_319a20:
    // 0x319a20: 0x3c02c396  lui         $v0, 0xC396
    ctx->pc = 0x319a20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50070 << 16));
label_319a24:
    // 0x319a24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x319a24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_319a28:
    // 0x319a28: 0x0  nop
    ctx->pc = 0x319a28u;
    // NOP
label_319a2c:
    // 0x319a2c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x319a2cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_319a30:
    // 0x319a30: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x319a30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_319a34:
    // 0x319a34: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x319a34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_319a38:
    // 0x319a38: 0x3c0742c8  lui         $a3, 0x42C8
    ctx->pc = 0x319a38u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)17096 << 16));
label_319a3c:
    // 0x319a3c: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x319a3cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_319a40:
    // 0x319a40: 0x0  nop
    ctx->pc = 0x319a40u;
    // NOP
label_319a44:
    // 0x319a44: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x319a44u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_319a48:
    // 0x319a48: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x319a48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_319a4c:
    // 0x319a4c: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x319a4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_319a50:
    // 0x319a50: 0x3c04c348  lui         $a0, 0xC348
    ctx->pc = 0x319a50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49992 << 16));
label_319a54:
    // 0x319a54: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x319a54u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_319a58:
    // 0x319a58: 0x0  nop
    ctx->pc = 0x319a58u;
    // NOP
label_319a5c:
    // 0x319a5c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x319a5cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_319a60:
    // 0x319a60: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x319a60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_319a64:
    // 0x319a64: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x319a64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_319a68:
    // 0x319a68: 0x5303c  dsll32      $a2, $a1, 0
    ctx->pc = 0x319a68u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << (32 + 0));
label_319a6c:
    // 0x319a6c: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x319a6cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
label_319a70:
    // 0x319a70: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x319a70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_319a74:
    // 0x319a74: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x319a74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_319a78:
    // 0x319a78: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x319a78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_319a7c:
    // 0x319a7c: 0xc22024  and         $a0, $a2, $v0
    ctx->pc = 0x319a7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
label_319a80:
    // 0x319a80: 0x4303c  dsll32      $a2, $a0, 0
    ctx->pc = 0x319a80u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << (32 + 0));
label_319a84:
    // 0x319a84: 0x34c70018  ori         $a3, $a2, 0x18
    ctx->pc = 0x319a84u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)24);
label_319a88:
    // 0x319a88: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x319a88u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
label_319a8c:
    // 0x319a8c: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x319a8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_319a90:
    // 0x319a90: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x319a90u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_319a94:
    // 0x319a94: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x319a94u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_319a98:
    // 0x319a98: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x319a98u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_319a9c:
    // 0x319a9c: 0xc06371c  jal         func_18DC70
label_319aa0:
    if (ctx->pc == 0x319AA0u) {
        ctx->pc = 0x319AA4u;
        goto label_319aa4;
    }
    ctx->pc = 0x319A9Cu;
    SET_GPR_U32(ctx, 31, 0x319AA4u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x319A9Cu, 0x319AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319AA4u;
label_319aa4:
    // 0x319aa4: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x319aa4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_319aa8:
    // 0x319aa8: 0x8fa60088  lw          $a2, 0x88($sp)
    ctx->pc = 0x319aa8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_319aac:
    // 0x319aac: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x319aacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
label_319ab0:
    // 0x319ab0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x319ab0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_319ab4:
    // 0x319ab4: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x319ab4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_319ab8:
    // 0x319ab8: 0x33c38  dsll        $a3, $v1, 16
    ctx->pc = 0x319ab8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << 16);
label_319abc:
    // 0x319abc: 0x34e4ffff  ori         $a0, $a3, 0xFFFF
    ctx->pc = 0x319abcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
label_319ac0:
    // 0x319ac0: 0x442824  and         $a1, $v0, $a0
    ctx->pc = 0x319ac0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_319ac4:
    // 0x319ac4: 0x5303c  dsll32      $a2, $a1, 0
    ctx->pc = 0x319ac4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << (32 + 0));
label_319ac8:
    // 0x319ac8: 0x34c20018  ori         $v0, $a2, 0x18
    ctx->pc = 0x319ac8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)24);
label_319acc:
    // 0x319acc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x319accu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_319ad0:
    // 0x319ad0: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x319ad0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_319ad4:
    // 0x319ad4: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x319ad4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_319ad8:
    // 0x319ad8: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x319ad8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_319adc:
    // 0x319adc: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x319adcu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_319ae0:
    // 0x319ae0: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x319ae0u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_319ae4:
    // 0x319ae4: 0xc06371c  jal         func_18DC70
label_319ae8:
    if (ctx->pc == 0x319AE8u) {
        ctx->pc = 0x319AECu;
        goto label_319aec;
    }
    ctx->pc = 0x319AE4u;
    SET_GPR_U32(ctx, 31, 0x319AECu);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x319AE4u, 0x319AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319AECu;
label_319aec:
    // 0x319aec: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x319aecu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_319af0:
    // 0x319af0: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x319af0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_319af4:
    // 0x319af4: 0x4303c  dsll32      $a2, $a0, 0
    ctx->pc = 0x319af4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << (32 + 0));
label_319af8:
    // 0x319af8: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x319af8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
label_319afc:
    // 0x319afc: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x319afcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_319b00:
    // 0x319b00: 0x21c38  dsll        $v1, $v0, 16
    ctx->pc = 0x319b00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 16);
label_319b04:
    // 0x319b04: 0x3462ffff  ori         $v0, $v1, 0xFFFF
    ctx->pc = 0x319b04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_319b08:
    // 0x319b08: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x319b08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
label_319b0c:
    // 0x319b0c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x319b0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_319b10:
    // 0x319b10: 0x34440018  ori         $a0, $v0, 0x18
    ctx->pc = 0x319b10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24);
label_319b14:
    // 0x319b14: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x319b14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_319b18:
    // 0x319b18: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x319b18u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_319b1c:
    // 0x319b1c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x319b1cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_319b20:
    // 0x319b20: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x319b20u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_319b24:
    // 0x319b24: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x319b24u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_319b28:
    // 0x319b28: 0xc06371c  jal         func_18DC70
label_319b2c:
    if (ctx->pc == 0x319B2Cu) {
        ctx->pc = 0x319B30u;
        goto label_319b30;
    }
    ctx->pc = 0x319B28u;
    SET_GPR_U32(ctx, 31, 0x319B30u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x319B28u, 0x319B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319B30u;
label_319b30:
    // 0x319b30: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x319b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_319b34:
    // 0x319b34: 0x24430120  addiu       $v1, $v0, 0x120
    ctx->pc = 0x319b34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
label_319b38:
    // 0x319b38: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x319b38u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_319b3c:
    // 0x319b3c: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x319b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_319b40:
    // 0x319b40: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x319b40u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
label_319b44:
    // 0x319b44: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x319b44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_319b48:
    // 0x319b48: 0x3c07c396  lui         $a3, 0xC396
    ctx->pc = 0x319b48u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)50070 << 16));
label_319b4c:
    // 0x319b4c: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x319b4cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_319b50:
    // 0x319b50: 0x0  nop
    ctx->pc = 0x319b50u;
    // NOP
label_319b54:
    // 0x319b54: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x319b54u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_319b58:
    // 0x319b58: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x319b58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_319b5c:
    // 0x319b5c: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x319b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_319b60:
    // 0x319b60: 0x4303c  dsll32      $a2, $a0, 0
    ctx->pc = 0x319b60u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << (32 + 0));
label_319b64:
    // 0x319b64: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x319b64u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
label_319b68:
    // 0x319b68: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x319b68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_319b6c:
    // 0x319b6c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x319b6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_319b70:
    // 0x319b70: 0x3444ffff  ori         $a0, $v0, 0xFFFF
    ctx->pc = 0x319b70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_319b74:
    // 0x319b74: 0xc43024  and         $a2, $a2, $a0
    ctx->pc = 0x319b74u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
label_319b78:
    // 0x319b78: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x319b78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
label_319b7c:
    // 0x319b7c: 0x34440018  ori         $a0, $v0, 0x18
    ctx->pc = 0x319b7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24);
label_319b80:
    // 0x319b80: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x319b80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_319b84:
    // 0x319b84: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x319b84u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_319b88:
    // 0x319b88: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x319b88u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_319b8c:
    // 0x319b8c: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x319b8cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_319b90:
    // 0x319b90: 0xc06371c  jal         func_18DC70
label_319b94:
    if (ctx->pc == 0x319B94u) {
        ctx->pc = 0x319B98u;
        goto label_319b98;
    }
    ctx->pc = 0x319B90u;
    SET_GPR_U32(ctx, 31, 0x319B98u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x319B90u, 0x319B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319B98u;
label_319b98:
    // 0x319b98: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x319b98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_319b9c:
    // 0x319b9c: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x319b9cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
label_319ba0:
    // 0x319ba0: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x319ba0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
label_319ba4:
    // 0x319ba4: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x319ba4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_319ba8:
    // 0x319ba8: 0x33c38  dsll        $a3, $v1, 16
    ctx->pc = 0x319ba8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << 16);
label_319bac:
    // 0x319bac: 0x34e4ffff  ori         $a0, $a3, 0xFFFF
    ctx->pc = 0x319bacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
label_319bb0:
    // 0x319bb0: 0xa43024  and         $a2, $a1, $a0
    ctx->pc = 0x319bb0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
label_319bb4:
    // 0x319bb4: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x319bb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
label_319bb8:
    // 0x319bb8: 0x34420018  ori         $v0, $v0, 0x18
    ctx->pc = 0x319bb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24);
label_319bbc:
    // 0x319bbc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x319bbcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_319bc0:
    // 0x319bc0: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x319bc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_319bc4:
    // 0x319bc4: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x319bc4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_319bc8:
    // 0x319bc8: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x319bc8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_319bcc:
    // 0x319bcc: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x319bccu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_319bd0:
    // 0x319bd0: 0xc06371c  jal         func_18DC70
label_319bd4:
    if (ctx->pc == 0x319BD4u) {
        ctx->pc = 0x319BD8u;
        goto label_319bd8;
    }
    ctx->pc = 0x319BD0u;
    SET_GPR_U32(ctx, 31, 0x319BD8u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x319BD0u, 0x319BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319BD8u;
label_319bd8:
    // 0x319bd8: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x319bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_319bdc:
    // 0x319bdc: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x319bdcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
label_319be0:
    // 0x319be0: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x319be0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
label_319be4:
    // 0x319be4: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x319be4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_319be8:
    // 0x319be8: 0x51438  dsll        $v0, $a1, 16
    ctx->pc = 0x319be8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << 16);
label_319bec:
    // 0x319bec: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x319becu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_319bf0:
    // 0x319bf0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x319bf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_319bf4:
    // 0x319bf4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x319bf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_319bf8:
    // 0x319bf8: 0x34670018  ori         $a3, $v1, 0x18
    ctx->pc = 0x319bf8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)24);
label_319bfc:
    // 0x319bfc: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x319bfcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
label_319c00:
    // 0x319c00: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x319c00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_319c04:
    // 0x319c04: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x319c04u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_319c08:
    // 0x319c08: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x319c08u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_319c0c:
    // 0x319c0c: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x319c0cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_319c10:
    // 0x319c10: 0xc06371c  jal         func_18DC70
label_319c14:
    if (ctx->pc == 0x319C14u) {
        ctx->pc = 0x319C18u;
        goto label_319c18;
    }
    ctx->pc = 0x319C10u;
    SET_GPR_U32(ctx, 31, 0x319C18u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x319C10u, 0x319C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319C18u;
label_319c18:
    // 0x319c18: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x319c18u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_319c1c:
    // 0x319c1c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x319c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_319c20:
    // 0x319c20: 0x24420120  addiu       $v0, $v0, 0x120
    ctx->pc = 0x319c20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
label_319c24:
    // 0x319c24: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x319c24u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_319c28:
    // 0x319c28: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x319c28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_319c2c:
    // 0x319c2c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x319c2cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
label_319c30:
    // 0x319c30: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x319c30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_319c34:
    // 0x319c34: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x319c34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
label_319c38:
    // 0x319c38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x319c38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_319c3c:
    // 0x319c3c: 0x0  nop
    ctx->pc = 0x319c3cu;
    // NOP
label_319c40:
    // 0x319c40: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x319c40u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_319c44:
    // 0x319c44: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x319c44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_319c48:
    // 0x319c48: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x319c48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_319c4c:
    // 0x319c4c: 0x3c02c396  lui         $v0, 0xC396
    ctx->pc = 0x319c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50070 << 16));
label_319c50:
    // 0x319c50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x319c50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_319c54:
    // 0x319c54: 0x0  nop
    ctx->pc = 0x319c54u;
    // NOP
label_319c58:
    // 0x319c58: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x319c58u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_319c5c:
    // 0x319c5c: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x319c5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_319c60:
    // 0x319c60: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x319c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_319c64:
    // 0x319c64: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x319c64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_319c68:
    // 0x319c68: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x319c68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_319c6c:
    // 0x319c6c: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x319c6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_319c70:
    // 0x319c70: 0x42c38  dsll        $a1, $a0, 16
    ctx->pc = 0x319c70u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << 16);
label_319c74:
    // 0x319c74: 0x34a2ffff  ori         $v0, $a1, 0xFFFF
    ctx->pc = 0x319c74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
label_319c78:
    // 0x319c78: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x319c78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_319c7c:
    // 0x319c7c: 0x2383c  dsll32      $a3, $v0, 0
    ctx->pc = 0x319c7cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 0));
label_319c80:
    // 0x319c80: 0x34e40018  ori         $a0, $a3, 0x18
    ctx->pc = 0x319c80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)24);
label_319c84:
    // 0x319c84: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x319c84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_319c88:
    // 0x319c88: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x319c88u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_319c8c:
    // 0x319c8c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x319c8cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_319c90:
    // 0x319c90: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x319c90u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_319c94:
    // 0x319c94: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x319c94u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_319c98:
    // 0x319c98: 0xc06371c  jal         func_18DC70
label_319c9c:
    if (ctx->pc == 0x319C9Cu) {
        ctx->pc = 0x319CA0u;
        goto label_319ca0;
    }
    ctx->pc = 0x319C98u;
    SET_GPR_U32(ctx, 31, 0x319CA0u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x319C98u, 0x319CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319CA0u;
label_319ca0:
    // 0x319ca0: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x319ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_319ca4:
    // 0x319ca4: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x319ca4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
label_319ca8:
    // 0x319ca8: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x319ca8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
label_319cac:
    // 0x319cac: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x319cacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_319cb0:
    // 0x319cb0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x319cb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_319cb4:
    // 0x319cb4: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x319cb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_319cb8:
    // 0x319cb8: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x319cb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_319cbc:
    // 0x319cbc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x319cbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_319cc0:
    // 0x319cc0: 0x34440018  ori         $a0, $v0, 0x18
    ctx->pc = 0x319cc0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24);
label_319cc4:
    // 0x319cc4: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x319cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_319cc8:
    // 0x319cc8: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x319cc8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_319ccc:
    // 0x319ccc: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x319cccu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_319cd0:
    // 0x319cd0: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x319cd0u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_319cd4:
    // 0x319cd4: 0xc06371c  jal         func_18DC70
label_319cd8:
    if (ctx->pc == 0x319CD8u) {
        ctx->pc = 0x319CDCu;
        goto label_319cdc;
    }
    ctx->pc = 0x319CD4u;
    SET_GPR_U32(ctx, 31, 0x319CDCu);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x319CD4u, 0x319CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319CDCu;
label_319cdc:
    // 0x319cdc: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x319cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_319ce0:
    // 0x319ce0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x319ce0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_319ce4:
    // 0x319ce4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x319ce4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_319ce8:
    // 0x319ce8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x319ce8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_319cec:
    // 0x319cec: 0x22438  dsll        $a0, $v0, 16
    ctx->pc = 0x319cecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << 16);
label_319cf0:
    // 0x319cf0: 0x3485ffff  ori         $a1, $a0, 0xFFFF
    ctx->pc = 0x319cf0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_319cf4:
    // 0x319cf4: 0x651024  and         $v0, $v1, $a1
    ctx->pc = 0x319cf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
label_319cf8:
    // 0x319cf8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x319cf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_319cfc:
    // 0x319cfc: 0x34640018  ori         $a0, $v1, 0x18
    ctx->pc = 0x319cfcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)24);
label_319d00:
    // 0x319d00: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x319d00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_319d04:
    // 0x319d04: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x319d04u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_319d08:
    // 0x319d08: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x319d08u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_319d0c:
    // 0x319d0c: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x319d0cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_319d10:
    // 0x319d10: 0xc06371c  jal         func_18DC70
label_319d14:
    if (ctx->pc == 0x319D14u) {
        ctx->pc = 0x319D18u;
        goto label_319d18;
    }
    ctx->pc = 0x319D10u;
    SET_GPR_U32(ctx, 31, 0x319D18u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x319D10u, 0x319D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319D18u;
label_319d18:
    // 0x319d18: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x319d18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_319d1c:
    // 0x319d1c: 0x90a60002  lbu         $a2, 0x2($a1)
    ctx->pc = 0x319d1cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
label_319d20:
    // 0x319d20: 0x24c30001  addiu       $v1, $a2, 0x1
    ctx->pc = 0x319d20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_319d24:
    // 0x319d24: 0xa0a30002  sb          $v1, 0x2($a1)
    ctx->pc = 0x319d24u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 3));
label_319d28:
    // 0x319d28: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x319d28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_319d2c:
    // 0x319d2c: 0x8c851290  lw          $a1, 0x1290($a0)
    ctx->pc = 0x319d2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4752)));
label_319d30:
    // 0x319d30: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x319d30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_319d34:
    // 0x319d34: 0xac831290  sw          $v1, 0x1290($a0)
    ctx->pc = 0x319d34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4752), GPR_U32(ctx, 3));
label_319d38:
    // 0x319d38: 0x2c610005  sltiu       $at, $v1, 0x5
    ctx->pc = 0x319d38u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_319d3c:
    // 0x319d3c: 0x142002c6  bnez        $at, . + 4 + (0x2C6 << 2)
label_319d40:
    if (ctx->pc == 0x319D40u) {
        ctx->pc = 0x319D44u;
        goto label_319d44;
    }
    ctx->pc = 0x319D3Cu;
    {
        const bool branch_taken_0x319d3c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x319d3c) {
            ctx->pc = 0x31A858u;
            goto label_31a858;
        }
    }
    ctx->pc = 0x319D44u;
label_319d44:
    // 0x319d44: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x319d44u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_319d48:
    // 0x319d48: 0x1000000d  b           . + 4 + (0xD << 2)
label_319d4c:
    if (ctx->pc == 0x319D4Cu) {
        ctx->pc = 0x319D50u;
        goto label_319d50;
    }
    ctx->pc = 0x319D48u;
    {
        const bool branch_taken_0x319d48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x319d48) {
            ctx->pc = 0x319D80u;
            goto label_319d80;
        }
    }
    ctx->pc = 0x319D50u;
label_319d50:
    // 0x319d50: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x319d50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_319d54:
    // 0x319d54: 0x1120c0  sll         $a0, $s1, 3
    ctx->pc = 0x319d54u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
label_319d58:
    // 0x319d58: 0x912821  addu        $a1, $a0, $s1
    ctx->pc = 0x319d58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
label_319d5c:
    // 0x319d5c: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x319d5cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_319d60:
    // 0x319d60: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x319d60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
label_319d64:
    // 0x319d64: 0x659021  addu        $s2, $v1, $a1
    ctx->pc = 0x319d64u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_319d68:
    // 0x319d68: 0x8e530034  lw          $s3, 0x34($s2)
    ctx->pc = 0x319d68u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
label_319d6c:
    // 0x319d6c: 0x8e640024  lw          $a0, 0x24($s3)
    ctx->pc = 0x319d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_319d70:
    // 0x319d70: 0x34850002  ori         $a1, $a0, 0x2
    ctx->pc = 0x319d70u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2);
label_319d74:
    // 0x319d74: 0xae650024  sw          $a1, 0x24($s3)
    ctx->pc = 0x319d74u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 5));
label_319d78:
    // 0x319d78: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x319d78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_319d7c:
    // 0x319d7c: 0x0  nop
    ctx->pc = 0x319d7cu;
    // NOP
label_319d80:
    // 0x319d80: 0x2a230002  slti        $v1, $s1, 0x2
    ctx->pc = 0x319d80u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
label_319d84:
    // 0x319d84: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
label_319d88:
    if (ctx->pc == 0x319D88u) {
        ctx->pc = 0x319D8Cu;
        goto label_319d8c;
    }
    ctx->pc = 0x319D84u;
    {
        const bool branch_taken_0x319d84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x319d84) {
            ctx->pc = 0x319D50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_319d50;
        }
    }
    ctx->pc = 0x319D8Cu;
label_319d8c:
    // 0x319d8c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x319d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_319d90:
    // 0x319d90: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x319d90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_319d94:
    // 0x319d94: 0xac6412a8  sw          $a0, 0x12A8($v1)
    ctx->pc = 0x319d94u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4776), GPR_U32(ctx, 4));
label_319d98:
    // 0x319d98: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x319d98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_319d9c:
    // 0x319d9c: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x319d9cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_319da0:
    // 0x319da0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x319da0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_319da4:
    // 0x319da4: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x319da4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_319da8:
    // 0x319da8: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x319da8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_319dac:
    // 0x319dac: 0xac601290  sw          $zero, 0x1290($v1)
    ctx->pc = 0x319dacu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4752), GPR_U32(ctx, 0));
label_319db0:
    // 0x319db0: 0x100002a9  b           . + 4 + (0x2A9 << 2)
label_319db4:
    if (ctx->pc == 0x319DB4u) {
        ctx->pc = 0x319DB8u;
        goto label_319db8;
    }
    ctx->pc = 0x319DB0u;
    {
        const bool branch_taken_0x319db0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x319db0) {
            ctx->pc = 0x31A858u;
            goto label_31a858;
        }
    }
    ctx->pc = 0x319DB8u;
label_319db8:
    // 0x319db8: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x319db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_319dbc:
    // 0x319dbc: 0xac401290  sw          $zero, 0x1290($v0)
    ctx->pc = 0x319dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4752), GPR_U32(ctx, 0));
label_319dc0:
    // 0x319dc0: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x319dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_319dc4:
    // 0x319dc4: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x319dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
label_319dc8:
    // 0x319dc8: 0x78850000  lq          $a1, 0x0($a0)
    ctx->pc = 0x319dc8u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_319dcc:
    // 0x319dcc: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x319dccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_319dd0:
    // 0x319dd0: 0x7c450000  sq          $a1, 0x0($v0)
    ctx->pc = 0x319dd0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 5));
label_319dd4:
    // 0x319dd4: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x319dd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_319dd8:
    // 0x319dd8: 0x3c04c2c8  lui         $a0, 0xC2C8
    ctx->pc = 0x319dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49864 << 16));
label_319ddc:
    // 0x319ddc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x319ddcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_319de0:
    // 0x319de0: 0x0  nop
    ctx->pc = 0x319de0u;
    // NOP
label_319de4:
    // 0x319de4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x319de4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_319de8:
    // 0x319de8: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x319de8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_319dec:
    // 0x319dec: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x319decu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_319df0:
    // 0x319df0: 0x3c0542c8  lui         $a1, 0x42C8
    ctx->pc = 0x319df0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17096 << 16));
label_319df4:
    // 0x319df4: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x319df4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_319df8:
    // 0x319df8: 0x0  nop
    ctx->pc = 0x319df8u;
    // NOP
label_319dfc:
    // 0x319dfc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x319dfcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_319e00:
    // 0x319e00: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x319e00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_319e04:
    // 0x319e04: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x319e04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_319e08:
    // 0x319e08: 0x3c02c348  lui         $v0, 0xC348
    ctx->pc = 0x319e08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49992 << 16));
label_319e0c:
    // 0x319e0c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x319e0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_319e10:
    // 0x319e10: 0x0  nop
    ctx->pc = 0x319e10u;
    // NOP
label_319e14:
    // 0x319e14: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x319e14u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_319e18:
    // 0x319e18: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x319e18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_319e1c:
    // 0x319e1c: 0x24040301  addiu       $a0, $zero, 0x301
    ctx->pc = 0x319e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 769));
label_319e20:
    // 0x319e20: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x319e20u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_319e24:
    // 0x319e24: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x319e24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_319e28:
    // 0x319e28: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x319e28u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_319e2c:
    // 0x319e2c: 0xc062f5c  jal         func_18BD70
label_319e30:
    if (ctx->pc == 0x319E30u) {
        ctx->pc = 0x319E34u;
        goto label_319e34;
    }
    ctx->pc = 0x319E2Cu;
    SET_GPR_U32(ctx, 31, 0x319E34u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x319E2Cu, 0x319E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319E34u;
label_319e34:
    // 0x319e34: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x319e34u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_319e38:
    // 0x319e38: 0xc0630a8  jal         func_18C2A0
label_319e3c:
    if (ctx->pc == 0x319E3Cu) {
        ctx->pc = 0x319E40u;
        goto label_319e40;
    }
    ctx->pc = 0x319E38u;
    SET_GPR_U32(ctx, 31, 0x319E40u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x319E38u, 0x319E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319E40u;
label_319e40:
    // 0x319e40: 0x8fa70088  lw          $a3, 0x88($sp)
    ctx->pc = 0x319e40u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_319e44:
    // 0x319e44: 0x24e40120  addiu       $a0, $a3, 0x120
    ctx->pc = 0x319e44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 288));
label_319e48:
    // 0x319e48: 0x78860000  lq          $a2, 0x0($a0)
    ctx->pc = 0x319e48u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_319e4c:
    // 0x319e4c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x319e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_319e50:
    // 0x319e50: 0x7c860000  sq          $a2, 0x0($a0)
    ctx->pc = 0x319e50u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 6));
label_319e54:
    // 0x319e54: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x319e54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_319e58:
    // 0x319e58: 0x3c054396  lui         $a1, 0x4396
    ctx->pc = 0x319e58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17302 << 16));
label_319e5c:
    // 0x319e5c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x319e5cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_319e60:
    // 0x319e60: 0x0  nop
    ctx->pc = 0x319e60u;
    // NOP
label_319e64:
    // 0x319e64: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x319e64u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_319e68:
    // 0x319e68: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x319e68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_319e6c:
    // 0x319e6c: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x319e6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_319e70:
    // 0x319e70: 0x3c03c3c8  lui         $v1, 0xC3C8
    ctx->pc = 0x319e70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50120 << 16));
label_319e74:
    // 0x319e74: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x319e74u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_319e78:
    // 0x319e78: 0x0  nop
    ctx->pc = 0x319e78u;
    // NOP
label_319e7c:
    // 0x319e7c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x319e7cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_319e80:
    // 0x319e80: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x319e80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_319e84:
    // 0x319e84: 0x24040301  addiu       $a0, $zero, 0x301
    ctx->pc = 0x319e84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 769));
label_319e88:
    // 0x319e88: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x319e88u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_319e8c:
    // 0x319e8c: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x319e8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_319e90:
    // 0x319e90: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x319e90u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_319e94:
    // 0x319e94: 0xc062f5c  jal         func_18BD70
label_319e98:
    if (ctx->pc == 0x319E98u) {
        ctx->pc = 0x319E9Cu;
        goto label_319e9c;
    }
    ctx->pc = 0x319E94u;
    SET_GPR_U32(ctx, 31, 0x319E9Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x319E94u, 0x319E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319E9Cu;
label_319e9c:
    // 0x319e9c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x319e9cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_319ea0:
    // 0x319ea0: 0xc0630a8  jal         func_18C2A0
label_319ea4:
    if (ctx->pc == 0x319EA4u) {
        ctx->pc = 0x319EA8u;
        goto label_319ea8;
    }
    ctx->pc = 0x319EA0u;
    SET_GPR_U32(ctx, 31, 0x319EA8u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x319EA0u, 0x319EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319EA8u;
label_319ea8:
    // 0x319ea8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x319ea8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_319eac:
    // 0x319eac: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x319eacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_319eb0:
    // 0x319eb0: 0x24830120  addiu       $v1, $a0, 0x120
    ctx->pc = 0x319eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
label_319eb4:
    // 0x319eb4: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x319eb4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_319eb8:
    // 0x319eb8: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x319eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_319ebc:
    // 0x319ebc: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x319ebcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
label_319ec0:
    // 0x319ec0: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x319ec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_319ec4:
    // 0x319ec4: 0x3c05c47a  lui         $a1, 0xC47A
    ctx->pc = 0x319ec4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)50298 << 16));
label_319ec8:
    // 0x319ec8: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x319ec8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_319ecc:
    // 0x319ecc: 0x0  nop
    ctx->pc = 0x319eccu;
    // NOP
label_319ed0:
    // 0x319ed0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x319ed0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_319ed4:
    // 0x319ed4: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x319ed4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_319ed8:
    // 0x319ed8: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x319ed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_319edc:
    // 0x319edc: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x319edcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
label_319ee0:
    // 0x319ee0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x319ee0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_319ee4:
    // 0x319ee4: 0x0  nop
    ctx->pc = 0x319ee4u;
    // NOP
label_319ee8:
    // 0x319ee8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x319ee8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_319eec:
    // 0x319eec: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x319eecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_319ef0:
    // 0x319ef0: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x319ef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_319ef4:
    // 0x319ef4: 0x3c03c3fa  lui         $v1, 0xC3FA
    ctx->pc = 0x319ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50170 << 16));
label_319ef8:
    // 0x319ef8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x319ef8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_319efc:
    // 0x319efc: 0x0  nop
    ctx->pc = 0x319efcu;
    // NOP
label_319f00:
    // 0x319f00: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x319f00u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_319f04:
    // 0x319f04: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x319f04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_319f08:
    // 0x319f08: 0x24040301  addiu       $a0, $zero, 0x301
    ctx->pc = 0x319f08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 769));
label_319f0c:
    // 0x319f0c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x319f0cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_319f10:
    // 0x319f10: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x319f10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_319f14:
    // 0x319f14: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x319f14u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_319f18:
    // 0x319f18: 0xc062f5c  jal         func_18BD70
label_319f1c:
    if (ctx->pc == 0x319F1Cu) {
        ctx->pc = 0x319F20u;
        goto label_319f20;
    }
    ctx->pc = 0x319F18u;
    SET_GPR_U32(ctx, 31, 0x319F20u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x319F18u, 0x319F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319F20u;
label_319f20:
    // 0x319f20: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x319f20u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_319f24:
    // 0x319f24: 0xc0630a8  jal         func_18C2A0
label_319f28:
    if (ctx->pc == 0x319F28u) {
        ctx->pc = 0x319F2Cu;
        goto label_319f2c;
    }
    ctx->pc = 0x319F24u;
    SET_GPR_U32(ctx, 31, 0x319F2Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x319F24u, 0x319F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319F2Cu;
label_319f2c:
    // 0x319f2c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x319f2cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_319f30:
    // 0x319f30: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x319f30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_319f34:
    // 0x319f34: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x319f34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
label_319f38:
    // 0x319f38: 0x78a40000  lq          $a0, 0x0($a1)
    ctx->pc = 0x319f38u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_319f3c:
    // 0x319f3c: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x319f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_319f40:
    // 0x319f40: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x319f40u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
label_319f44:
    // 0x319f44: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x319f44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_319f48:
    // 0x319f48: 0x3c104396  lui         $s0, 0x4396
    ctx->pc = 0x319f48u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)17302 << 16));
label_319f4c:
    // 0x319f4c: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x319f4cu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_319f50:
    // 0x319f50: 0x0  nop
    ctx->pc = 0x319f50u;
    // NOP
label_319f54:
    // 0x319f54: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x319f54u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_319f58:
    // 0x319f58: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x319f58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_319f5c:
    // 0x319f5c: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x319f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
label_319f60:
    // 0x319f60: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x319f60u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_319f64:
    // 0x319f64: 0x0  nop
    ctx->pc = 0x319f64u;
    // NOP
label_319f68:
    // 0x319f68: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x319f68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
label_319f6c:
    // 0x319f6c: 0x24040300  addiu       $a0, $zero, 0x300
    ctx->pc = 0x319f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
label_319f70:
    // 0x319f70: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x319f70u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_319f74:
    // 0x319f74: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x319f74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_319f78:
    // 0x319f78: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x319f78u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_319f7c:
    // 0x319f7c: 0xc062f5c  jal         func_18BD70
label_319f80:
    if (ctx->pc == 0x319F80u) {
        ctx->pc = 0x319F84u;
        goto label_319f84;
    }
    ctx->pc = 0x319F7Cu;
    SET_GPR_U32(ctx, 31, 0x319F84u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x319F7Cu, 0x319F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319F84u;
label_319f84:
    // 0x319f84: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x319f84u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_319f88:
    // 0x319f88: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x319f88u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_319f8c:
    // 0x319f8c: 0xc0630a8  jal         func_18C2A0
label_319f90:
    if (ctx->pc == 0x319F90u) {
        ctx->pc = 0x319F94u;
        goto label_319f94;
    }
    ctx->pc = 0x319F8Cu;
    SET_GPR_U32(ctx, 31, 0x319F94u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x319F8Cu, 0x319F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319F94u;
label_319f94:
    // 0x319f94: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x319f94u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_319f98:
    // 0x319f98: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x319f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_319f9c:
    // 0x319f9c: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x319f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
label_319fa0:
    // 0x319fa0: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x319fa0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_319fa4:
    // 0x319fa4: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x319fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_319fa8:
    // 0x319fa8: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x319fa8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
label_319fac:
    // 0x319fac: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x319facu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_319fb0:
    // 0x319fb0: 0x3c02c348  lui         $v0, 0xC348
    ctx->pc = 0x319fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49992 << 16));
label_319fb4:
    // 0x319fb4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x319fb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_319fb8:
    // 0x319fb8: 0x0  nop
    ctx->pc = 0x319fb8u;
    // NOP
label_319fbc:
    // 0x319fbc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x319fbcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_319fc0:
    // 0x319fc0: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x319fc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_319fc4:
    // 0x319fc4: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x319fc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_319fc8:
    // 0x319fc8: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x319fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
label_319fcc:
    // 0x319fcc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x319fccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_319fd0:
    // 0x319fd0: 0x0  nop
    ctx->pc = 0x319fd0u;
    // NOP
label_319fd4:
    // 0x319fd4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x319fd4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_319fd8:
    // 0x319fd8: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x319fd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_319fdc:
    // 0x319fdc: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x319fdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_319fe0:
    // 0x319fe0: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x319fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
label_319fe4:
    // 0x319fe4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x319fe4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_319fe8:
    // 0x319fe8: 0x0  nop
    ctx->pc = 0x319fe8u;
    // NOP
label_319fec:
    // 0x319fec: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x319fecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_319ff0:
    // 0x319ff0: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x319ff0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_319ff4:
    // 0x319ff4: 0x3c044120  lui         $a0, 0x4120
    ctx->pc = 0x319ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16672 << 16));
label_319ff8:
    // 0x319ff8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x319ff8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_319ffc:
    // 0x319ffc: 0x0  nop
    ctx->pc = 0x319ffcu;
    // NOP
label_31a000:
    // 0x31a000: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x31a000u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
label_31a004:
    // 0x31a004: 0x24050301  addiu       $a1, $zero, 0x301
    ctx->pc = 0x31a004u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 769));
label_31a008:
    // 0x31a008: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x31a008u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_31a00c:
    // 0x31a00c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x31a00cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_31a010:
    // 0x31a010: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x31a010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_31a014:
    // 0x31a014: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x31a014u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_31a018:
    // 0x31a018: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x31a018u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_31a01c:
    // 0x31a01c: 0xc062f5c  jal         func_18BD70
label_31a020:
    if (ctx->pc == 0x31A020u) {
        ctx->pc = 0x31A024u;
        goto label_31a024;
    }
    ctx->pc = 0x31A01Cu;
    SET_GPR_U32(ctx, 31, 0x31A024u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x31A01Cu, 0x31A024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A024u;
label_31a024:
    // 0x31a024: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x31a024u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_31a028:
    // 0x31a028: 0xc0630a8  jal         func_18C2A0
label_31a02c:
    if (ctx->pc == 0x31A02Cu) {
        ctx->pc = 0x31A030u;
        goto label_31a030;
    }
    ctx->pc = 0x31A028u;
    SET_GPR_U32(ctx, 31, 0x31A030u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x31A028u, 0x31A030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A030u;
label_31a030:
    // 0x31a030: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x31a030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_31a034:
    // 0x31a034: 0x24630120  addiu       $v1, $v1, 0x120
    ctx->pc = 0x31a034u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
label_31a038:
    // 0x31a038: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x31a038u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_31a03c:
    // 0x31a03c: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x31a03cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_31a040:
    // 0x31a040: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x31a040u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
label_31a044:
    // 0x31a044: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x31a044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_31a048:
    // 0x31a048: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x31a048u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
label_31a04c:
    // 0x31a04c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31a04cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31a050:
    // 0x31a050: 0x0  nop
    ctx->pc = 0x31a050u;
    // NOP
label_31a054:
    // 0x31a054: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x31a054u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_31a058:
    // 0x31a058: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x31a058u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_31a05c:
    // 0x31a05c: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x31a05cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_31a060:
    // 0x31a060: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31a060u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31a064:
    // 0x31a064: 0x0  nop
    ctx->pc = 0x31a064u;
    // NOP
label_31a068:
    // 0x31a068: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x31a068u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
label_31a06c:
    // 0x31a06c: 0x24040301  addiu       $a0, $zero, 0x301
    ctx->pc = 0x31a06cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 769));
label_31a070:
    // 0x31a070: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x31a070u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_31a074:
    // 0x31a074: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x31a074u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_31a078:
    // 0x31a078: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x31a078u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_31a07c:
    // 0x31a07c: 0xc062f5c  jal         func_18BD70
label_31a080:
    if (ctx->pc == 0x31A080u) {
        ctx->pc = 0x31A084u;
        goto label_31a084;
    }
    ctx->pc = 0x31A07Cu;
    SET_GPR_U32(ctx, 31, 0x31A084u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x31A07Cu, 0x31A084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A084u;
label_31a084:
    // 0x31a084: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x31a084u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_31a088:
    // 0x31a088: 0xc0630a8  jal         func_18C2A0
label_31a08c:
    if (ctx->pc == 0x31A08Cu) {
        ctx->pc = 0x31A090u;
        goto label_31a090;
    }
    ctx->pc = 0x31A088u;
    SET_GPR_U32(ctx, 31, 0x31A090u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x31A088u, 0x31A090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A090u;
label_31a090:
    // 0x31a090: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x31a090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_31a094:
    // 0x31a094: 0x24620120  addiu       $v0, $v1, 0x120
    ctx->pc = 0x31a094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
label_31a098:
    // 0x31a098: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x31a098u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_31a09c:
    // 0x31a09c: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x31a09cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_31a0a0:
    // 0x31a0a0: 0x7c440000  sq          $a0, 0x0($v0)
    ctx->pc = 0x31a0a0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
label_31a0a4:
    // 0x31a0a4: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x31a0a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_31a0a8:
    // 0x31a0a8: 0x3c03c348  lui         $v1, 0xC348
    ctx->pc = 0x31a0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49992 << 16));
label_31a0ac:
    // 0x31a0ac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x31a0acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31a0b0:
    // 0x31a0b0: 0x0  nop
    ctx->pc = 0x31a0b0u;
    // NOP
label_31a0b4:
    // 0x31a0b4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x31a0b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_31a0b8:
    // 0x31a0b8: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x31a0b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_31a0bc:
    // 0x31a0bc: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x31a0bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_31a0c0:
    // 0x31a0c0: 0x3c144316  lui         $s4, 0x4316
    ctx->pc = 0x31a0c0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)17174 << 16));
label_31a0c4:
    // 0x31a0c4: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x31a0c4u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31a0c8:
    // 0x31a0c8: 0x0  nop
    ctx->pc = 0x31a0c8u;
    // NOP
label_31a0cc:
    // 0x31a0cc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x31a0ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_31a0d0:
    // 0x31a0d0: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x31a0d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_31a0d4:
    // 0x31a0d4: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x31a0d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_31a0d8:
    // 0x31a0d8: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x31a0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
label_31a0dc:
    // 0x31a0dc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x31a0dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31a0e0:
    // 0x31a0e0: 0x0  nop
    ctx->pc = 0x31a0e0u;
    // NOP
label_31a0e4:
    // 0x31a0e4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x31a0e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_31a0e8:
    // 0x31a0e8: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x31a0e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_31a0ec:
    // 0x31a0ec: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x31a0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
label_31a0f0:
    // 0x31a0f0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x31a0f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31a0f4:
    // 0x31a0f4: 0x0  nop
    ctx->pc = 0x31a0f4u;
    // NOP
label_31a0f8:
    // 0x31a0f8: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x31a0f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
label_31a0fc:
    // 0x31a0fc: 0x24040301  addiu       $a0, $zero, 0x301
    ctx->pc = 0x31a0fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 769));
label_31a100:
    // 0x31a100: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x31a100u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_31a104:
    // 0x31a104: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x31a104u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_31a108:
    // 0x31a108: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x31a108u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_31a10c:
    // 0x31a10c: 0xc062f5c  jal         func_18BD70
label_31a110:
    if (ctx->pc == 0x31A110u) {
        ctx->pc = 0x31A114u;
        goto label_31a114;
    }
    ctx->pc = 0x31A10Cu;
    SET_GPR_U32(ctx, 31, 0x31A114u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x31A10Cu, 0x31A114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A114u;
label_31a114:
    // 0x31a114: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x31a114u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_31a118:
    // 0x31a118: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x31a118u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_31a11c:
    // 0x31a11c: 0xc0630a8  jal         func_18C2A0
label_31a120:
    if (ctx->pc == 0x31A120u) {
        ctx->pc = 0x31A124u;
        goto label_31a124;
    }
    ctx->pc = 0x31A11Cu;
    SET_GPR_U32(ctx, 31, 0x31A124u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x31A11Cu, 0x31A124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A124u;
label_31a124:
    // 0x31a124: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x31a124u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_31a128:
    // 0x31a128: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x31a128u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31a12c:
    // 0x31a12c: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x31a12cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_31a130:
    // 0x31a130: 0xe4a001a0  swc1        $f0, 0x1A0($a1)
    ctx->pc = 0x31a130u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 416), bits); }
label_31a134:
    // 0x31a134: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x31a134u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31a138:
    // 0x31a138: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x31a138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_31a13c:
    // 0x31a13c: 0xe46001a4  swc1        $f0, 0x1A4($v1)
    ctx->pc = 0x31a13cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 420), bits); }
label_31a140:
    // 0x31a140: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x31a140u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31a144:
    // 0x31a144: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x31a144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_31a148:
    // 0x31a148: 0xe46001a8  swc1        $f0, 0x1A8($v1)
    ctx->pc = 0x31a148u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 424), bits); }
label_31a14c:
    // 0x31a14c: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x31a14cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_31a150:
    // 0x31a150: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x31a150u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_31a154:
    // 0x31a154: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x31a154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_31a158:
    // 0x31a158: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x31a158u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_31a15c:
    // 0x31a15c: 0x100001be  b           . + 4 + (0x1BE << 2)
label_31a160:
    if (ctx->pc == 0x31A160u) {
        ctx->pc = 0x31A164u;
        goto label_31a164;
    }
    ctx->pc = 0x31A15Cu;
    {
        const bool branch_taken_0x31a15c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31a15c) {
            ctx->pc = 0x31A858u;
            goto label_31a858;
        }
    }
    ctx->pc = 0x31A164u;
label_31a164:
    // 0x31a164: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x31a164u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_31a168:
    // 0x31a168: 0x8c851290  lw          $a1, 0x1290($a0)
    ctx->pc = 0x31a168u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4752)));
label_31a16c:
    // 0x31a16c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x31a16cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_31a170:
    // 0x31a170: 0xac851290  sw          $a1, 0x1290($a0)
    ctx->pc = 0x31a170u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4752), GPR_U32(ctx, 5));
label_31a174:
    // 0x31a174: 0x2ca10009  sltiu       $at, $a1, 0x9
    ctx->pc = 0x31a174u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_31a178:
    // 0x31a178: 0x102001b7  beqz        $at, . + 4 + (0x1B7 << 2)
label_31a17c:
    if (ctx->pc == 0x31A17Cu) {
        ctx->pc = 0x31A180u;
        goto label_31a180;
    }
    ctx->pc = 0x31A178u;
    {
        const bool branch_taken_0x31a178 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x31a178) {
            ctx->pc = 0x31A858u;
            goto label_31a858;
        }
    }
    ctx->pc = 0x31A180u;
label_31a180:
    // 0x31a180: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x31a180u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_31a184:
    // 0x31a184: 0x24641d70  addiu       $a0, $v1, 0x1D70
    ctx->pc = 0x31a184u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 7536));
label_31a188:
    // 0x31a188: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x31a188u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_31a18c:
    // 0x31a18c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x31a18cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_31a190:
    // 0x31a190: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x31a190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_31a194:
    // 0x31a194: 0x600008  jr          $v1
label_31a198:
    if (ctx->pc == 0x31A198u) {
        ctx->pc = 0x31A19Cu;
        goto label_31a19c;
    }
    ctx->pc = 0x31A194u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31A194u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x31A19Cu;
label_31a19c:
    // 0x31a19c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x31a19cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_31a1a0:
    // 0x31a1a0: 0x24420120  addiu       $v0, $v0, 0x120
    ctx->pc = 0x31a1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
label_31a1a4:
    // 0x31a1a4: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x31a1a4u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_31a1a8:
    // 0x31a1a8: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x31a1a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_31a1ac:
    // 0x31a1ac: 0x7ca40000  sq          $a0, 0x0($a1)
    ctx->pc = 0x31a1acu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 4));
label_31a1b0:
    // 0x31a1b0: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x31a1b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_31a1b4:
    // 0x31a1b4: 0x3c07c3fa  lui         $a3, 0xC3FA
    ctx->pc = 0x31a1b4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)50170 << 16));
label_31a1b8:
    // 0x31a1b8: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x31a1b8u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31a1bc:
    // 0x31a1bc: 0x0  nop
    ctx->pc = 0x31a1bcu;
    // NOP
label_31a1c0:
    // 0x31a1c0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x31a1c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_31a1c4:
    // 0x31a1c4: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x31a1c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_31a1c8:
    // 0x31a1c8: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x31a1c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_31a1cc:
    // 0x31a1cc: 0x3c0442c8  lui         $a0, 0x42C8
    ctx->pc = 0x31a1ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17096 << 16));
label_31a1d0:
    // 0x31a1d0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x31a1d0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31a1d4:
    // 0x31a1d4: 0x0  nop
    ctx->pc = 0x31a1d4u;
    // NOP
label_31a1d8:
    // 0x31a1d8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x31a1d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_31a1dc:
    // 0x31a1dc: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x31a1dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_31a1e0:
    // 0x31a1e0: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x31a1e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_31a1e4:
    // 0x31a1e4: 0x3c05c348  lui         $a1, 0xC348
    ctx->pc = 0x31a1e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49992 << 16));
label_31a1e8:
    // 0x31a1e8: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x31a1e8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31a1ec:
    // 0x31a1ec: 0x0  nop
    ctx->pc = 0x31a1ecu;
    // NOP
label_31a1f0:
    // 0x31a1f0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x31a1f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_31a1f4:
    // 0x31a1f4: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x31a1f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_31a1f8:
    // 0x31a1f8: 0x24060301  addiu       $a2, $zero, 0x301
    ctx->pc = 0x31a1f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 769));
label_31a1fc:
    // 0x31a1fc: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x31a1fcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_31a200:
    // 0x31a200: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x31a200u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_31a204:
    // 0x31a204: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x31a204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_31a208:
    // 0x31a208: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x31a208u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_31a20c:
    // 0x31a20c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x31a20cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_31a210:
    // 0x31a210: 0xc062f5c  jal         func_18BD70
label_31a214:
    if (ctx->pc == 0x31A214u) {
        ctx->pc = 0x31A218u;
        goto label_31a218;
    }
    ctx->pc = 0x31A210u;
    SET_GPR_U32(ctx, 31, 0x31A218u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x31A210u, 0x31A218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A218u;
label_31a218:
    // 0x31a218: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x31a218u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_31a21c:
    // 0x31a21c: 0xc0630a8  jal         func_18C2A0
label_31a220:
    if (ctx->pc == 0x31A220u) {
        ctx->pc = 0x31A224u;
        goto label_31a224;
    }
    ctx->pc = 0x31A21Cu;
    SET_GPR_U32(ctx, 31, 0x31A224u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x31A21Cu, 0x31A224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A224u;
label_31a224:
    // 0x31a224: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x31a224u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_31a228:
    // 0x31a228: 0x1000018b  b           . + 4 + (0x18B << 2)
label_31a22c:
    if (ctx->pc == 0x31A22Cu) {
        ctx->pc = 0x31A230u;
        goto label_31a230;
    }
    ctx->pc = 0x31A228u;
    {
        const bool branch_taken_0x31a228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31a228) {
            ctx->pc = 0x31A858u;
            goto label_31a858;
        }
    }
    ctx->pc = 0x31A230u;
label_31a230:
    // 0x31a230: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x31a230u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_31a234:
    // 0x31a234: 0x24850120  addiu       $a1, $a0, 0x120
    ctx->pc = 0x31a234u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
label_31a238:
    // 0x31a238: 0x78a60000  lq          $a2, 0x0($a1)
    ctx->pc = 0x31a238u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_31a23c:
    // 0x31a23c: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x31a23cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_31a240:
    // 0x31a240: 0x7c460000  sq          $a2, 0x0($v0)
    ctx->pc = 0x31a240u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 6));
label_31a244:
    // 0x31a244: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x31a244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_31a248:
    // 0x31a248: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x31a248u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
label_31a24c:
    // 0x31a24c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31a24cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31a250:
    // 0x31a250: 0x0  nop
    ctx->pc = 0x31a250u;
    // NOP
label_31a254:
    // 0x31a254: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x31a254u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_31a258:
    // 0x31a258: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x31a258u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_31a25c:
    // 0x31a25c: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x31a25cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_31a260:
    // 0x31a260: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31a260u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31a264:
    // 0x31a264: 0x0  nop
    ctx->pc = 0x31a264u;
    // NOP
label_31a268:
    // 0x31a268: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x31a268u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
label_31a26c:
    // 0x31a26c: 0x24040425  addiu       $a0, $zero, 0x425
    ctx->pc = 0x31a26cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1061));
label_31a270:
    // 0x31a270: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x31a270u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_31a274:
    // 0x31a274: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x31a274u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_31a278:
    // 0x31a278: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x31a278u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_31a27c:
    // 0x31a27c: 0xc062f5c  jal         func_18BD70
label_31a280:
    if (ctx->pc == 0x31A280u) {
        ctx->pc = 0x31A284u;
        goto label_31a284;
    }
    ctx->pc = 0x31A27Cu;
    SET_GPR_U32(ctx, 31, 0x31A284u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x31A27Cu, 0x31A284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A284u;
label_31a284:
    // 0x31a284: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x31a284u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_31a288:
    // 0x31a288: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x31a288u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
label_31a28c:
    // 0x31a28c: 0xc0630a8  jal         func_18C2A0
label_31a290:
    if (ctx->pc == 0x31A290u) {
        ctx->pc = 0x31A294u;
        goto label_31a294;
    }
    ctx->pc = 0x31A28Cu;
    SET_GPR_U32(ctx, 31, 0x31A294u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x31A28Cu, 0x31A294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A294u;
label_31a294:
    // 0x31a294: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x31a294u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_31a298:
    // 0x31a298: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x31a298u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_31a29c:
    // 0x31a29c: 0x24a60120  addiu       $a2, $a1, 0x120
    ctx->pc = 0x31a29cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 288));
label_31a2a0:
    // 0x31a2a0: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x31a2a0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_31a2a4:
    // 0x31a2a4: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x31a2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_31a2a8:
    // 0x31a2a8: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x31a2a8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
label_31a2ac:
    // 0x31a2ac: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x31a2acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_31a2b0:
    // 0x31a2b0: 0x3c07c348  lui         $a3, 0xC348
    ctx->pc = 0x31a2b0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)49992 << 16));
label_31a2b4:
    // 0x31a2b4: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x31a2b4u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31a2b8:
    // 0x31a2b8: 0x0  nop
    ctx->pc = 0x31a2b8u;
    // NOP
label_31a2bc:
    // 0x31a2bc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x31a2bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_31a2c0:
    // 0x31a2c0: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x31a2c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_31a2c4:
    // 0x31a2c4: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x31a2c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_31a2c8:
    // 0x31a2c8: 0x3c044316  lui         $a0, 0x4316
    ctx->pc = 0x31a2c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17174 << 16));
label_31a2cc:
    // 0x31a2cc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x31a2ccu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31a2d0:
    // 0x31a2d0: 0x0  nop
    ctx->pc = 0x31a2d0u;
    // NOP
label_31a2d4:
    // 0x31a2d4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x31a2d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_31a2d8:
    // 0x31a2d8: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x31a2d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_31a2dc:
    // 0x31a2dc: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x31a2dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_31a2e0:
    // 0x31a2e0: 0x3c054348  lui         $a1, 0x4348
    ctx->pc = 0x31a2e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17224 << 16));
label_31a2e4:
    // 0x31a2e4: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x31a2e4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31a2e8:
    // 0x31a2e8: 0x0  nop
    ctx->pc = 0x31a2e8u;
    // NOP
label_31a2ec:
    // 0x31a2ec: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x31a2ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_31a2f0:
    // 0x31a2f0: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x31a2f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_31a2f4:
    // 0x31a2f4: 0x3c064120  lui         $a2, 0x4120
    ctx->pc = 0x31a2f4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16672 << 16));
label_31a2f8:
    // 0x31a2f8: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x31a2f8u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31a2fc:
    // 0x31a2fc: 0x0  nop
    ctx->pc = 0x31a2fcu;
    // NOP
label_31a300:
    // 0x31a300: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x31a300u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
label_31a304:
    // 0x31a304: 0x24020425  addiu       $v0, $zero, 0x425
    ctx->pc = 0x31a304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1061));
label_31a308:
    // 0x31a308: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x31a308u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_31a30c:
    // 0x31a30c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x31a30cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_31a310:
    // 0x31a310: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x31a310u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_31a314:
    // 0x31a314: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x31a314u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_31a318:
    // 0x31a318: 0xc062f5c  jal         func_18BD70
label_31a31c:
    if (ctx->pc == 0x31A31Cu) {
        ctx->pc = 0x31A320u;
        goto label_31a320;
    }
    ctx->pc = 0x31A318u;
    SET_GPR_U32(ctx, 31, 0x31A320u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x31A318u, 0x31A320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A320u;
label_31a320:
    // 0x31a320: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x31a320u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_31a324:
    // 0x31a324: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x31a324u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
label_31a328:
    // 0x31a328: 0xc0630a8  jal         func_18C2A0
label_31a32c:
    if (ctx->pc == 0x31A32Cu) {
        ctx->pc = 0x31A330u;
        goto label_31a330;
    }
    ctx->pc = 0x31A328u;
    SET_GPR_U32(ctx, 31, 0x31A330u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x31A328u, 0x31A330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A330u;
label_31a330:
    // 0x31a330: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x31a330u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_31a334:
    // 0x31a334: 0x8fa60088  lw          $a2, 0x88($sp)
    ctx->pc = 0x31a334u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_31a338:
    // 0x31a338: 0x24c20120  addiu       $v0, $a2, 0x120
    ctx->pc = 0x31a338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 288));
label_31a33c:
    // 0x31a33c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x31a33cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_31a340:
    // 0x31a340: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x31a340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_31a344:
    // 0x31a344: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x31a344u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
label_31a348:
    // 0x31a348: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x31a348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_31a34c:
    // 0x31a34c: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x31a34cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
label_31a350:
    // 0x31a350: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31a350u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31a354:
    // 0x31a354: 0x0  nop
    ctx->pc = 0x31a354u;
    // NOP
label_31a358:
    // 0x31a358: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x31a358u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_31a35c:
    // 0x31a35c: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x31a35cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_31a360:
    // 0x31a360: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x31a360u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_31a364:
    // 0x31a364: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31a364u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31a368:
    // 0x31a368: 0x0  nop
    ctx->pc = 0x31a368u;
    // NOP
label_31a36c:
    // 0x31a36c: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x31a36cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
label_31a370:
    // 0x31a370: 0x24040425  addiu       $a0, $zero, 0x425
    ctx->pc = 0x31a370u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1061));
label_31a374:
    // 0x31a374: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x31a374u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_31a378:
    // 0x31a378: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x31a378u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_31a37c:
    // 0x31a37c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x31a37cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_31a380:
    // 0x31a380: 0xc062f5c  jal         func_18BD70
label_31a384:
    if (ctx->pc == 0x31A384u) {
        ctx->pc = 0x31A388u;
        goto label_31a388;
    }
    ctx->pc = 0x31A380u;
    SET_GPR_U32(ctx, 31, 0x31A388u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x31A380u, 0x31A388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A388u;
label_31a388:
    // 0x31a388: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x31a388u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_31a38c:
    // 0x31a38c: 0xc0630a8  jal         func_18C2A0
label_31a390:
    if (ctx->pc == 0x31A390u) {
        ctx->pc = 0x31A394u;
        goto label_31a394;
    }
    ctx->pc = 0x31A38Cu;
    SET_GPR_U32(ctx, 31, 0x31A394u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x31A38Cu, 0x31A394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A394u;
label_31a394:
    // 0x31a394: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x31a394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_31a398:
    // 0x31a398: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x31a398u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
label_31a39c:
    // 0x31a39c: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x31a39cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_31a3a0:
    // 0x31a3a0: 0x27a70060  addiu       $a3, $sp, 0x60
    ctx->pc = 0x31a3a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_31a3a4:
    // 0x31a3a4: 0x7ce30000  sq          $v1, 0x0($a3)
    ctx->pc = 0x31a3a4u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 3));
label_31a3a8:
    // 0x31a3a8: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x31a3a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_31a3ac:
    // 0x31a3ac: 0x3c04c348  lui         $a0, 0xC348
    ctx->pc = 0x31a3acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49992 << 16));
label_31a3b0:
    // 0x31a3b0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x31a3b0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31a3b4:
    // 0x31a3b4: 0x0  nop
    ctx->pc = 0x31a3b4u;
    // NOP
label_31a3b8:
    // 0x31a3b8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x31a3b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_31a3bc:
    // 0x31a3bc: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x31a3bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_31a3c0:
    // 0x31a3c0: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x31a3c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_31a3c4:
    // 0x31a3c4: 0x3c064316  lui         $a2, 0x4316
    ctx->pc = 0x31a3c4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17174 << 16));
label_31a3c8:
    // 0x31a3c8: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x31a3c8u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31a3cc:
    // 0x31a3cc: 0x0  nop
    ctx->pc = 0x31a3ccu;
    // NOP
label_31a3d0:
    // 0x31a3d0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x31a3d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_31a3d4:
    // 0x31a3d4: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x31a3d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_31a3d8:
    // 0x31a3d8: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x31a3d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_31a3dc:
    // 0x31a3dc: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x31a3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
label_31a3e0:
    // 0x31a3e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31a3e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31a3e4:
    // 0x31a3e4: 0x0  nop
    ctx->pc = 0x31a3e4u;
    // NOP
label_31a3e8:
    // 0x31a3e8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x31a3e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_31a3ec:
    // 0x31a3ec: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x31a3ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_31a3f0:
    // 0x31a3f0: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x31a3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_31a3f4:
    // 0x31a3f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31a3f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31a3f8:
    // 0x31a3f8: 0x0  nop
    ctx->pc = 0x31a3f8u;
    // NOP
label_31a3fc:
    // 0x31a3fc: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x31a3fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
label_31a400:
    // 0x31a400: 0x24040301  addiu       $a0, $zero, 0x301
    ctx->pc = 0x31a400u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 769));
label_31a404:
    // 0x31a404: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x31a404u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_31a408:
    // 0x31a408: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x31a408u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_31a40c:
    // 0x31a40c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x31a40cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_31a410:
    // 0x31a410: 0xc062f5c  jal         func_18BD70
label_31a414:
    if (ctx->pc == 0x31A414u) {
        ctx->pc = 0x31A418u;
        goto label_31a418;
    }
    ctx->pc = 0x31A410u;
    SET_GPR_U32(ctx, 31, 0x31A418u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x31A410u, 0x31A418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A418u;
label_31a418:
    // 0x31a418: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x31a418u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_31a41c:
    // 0x31a41c: 0xc0630a8  jal         func_18C2A0
label_31a420:
    if (ctx->pc == 0x31A420u) {
        ctx->pc = 0x31A424u;
        goto label_31a424;
    }
    ctx->pc = 0x31A41Cu;
    SET_GPR_U32(ctx, 31, 0x31A424u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x31A41Cu, 0x31A424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A424u;
label_31a424:
    // 0x31a424: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x31a424u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_31a428:
    // 0x31a428: 0x1000010b  b           . + 4 + (0x10B << 2)
label_31a42c:
    if (ctx->pc == 0x31A42Cu) {
        ctx->pc = 0x31A430u;
        goto label_31a430;
    }
    ctx->pc = 0x31A428u;
    {
        const bool branch_taken_0x31a428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31a428) {
            ctx->pc = 0x31A858u;
            goto label_31a858;
        }
    }
    ctx->pc = 0x31A430u;
label_31a430:
    // 0x31a430: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x31a430u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_31a434:
    // 0x31a434: 0x24a20120  addiu       $v0, $a1, 0x120
    ctx->pc = 0x31a434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 288));
label_31a438:
    // 0x31a438: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x31a438u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_31a43c:
    // 0x31a43c: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x31a43cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_31a440:
    // 0x31a440: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x31a440u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
label_31a444:
    // 0x31a444: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x31a444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_31a448:
    // 0x31a448: 0x3c03c3fa  lui         $v1, 0xC3FA
    ctx->pc = 0x31a448u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50170 << 16));
label_31a44c:
    // 0x31a44c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x31a44cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31a450:
    // 0x31a450: 0x0  nop
    ctx->pc = 0x31a450u;
    // NOP
label_31a454:
    // 0x31a454: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x31a454u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_31a458:
    // 0x31a458: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x31a458u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_31a45c:
    // 0x31a45c: 0x3c074040  lui         $a3, 0x4040
    ctx->pc = 0x31a45cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16448 << 16));
label_31a460:
    // 0x31a460: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x31a460u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31a464:
    // 0x31a464: 0x0  nop
    ctx->pc = 0x31a464u;
    // NOP
label_31a468:
    // 0x31a468: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x31a468u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
label_31a46c:
    // 0x31a46c: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x31a46cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_31a470:
    // 0x31a470: 0x4303c  dsll32      $a2, $a0, 0
    ctx->pc = 0x31a470u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << (32 + 0));
label_31a474:
    // 0x31a474: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x31a474u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
label_31a478:
    // 0x31a478: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x31a478u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_31a47c:
    // 0x31a47c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x31a47cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_31a480:
    // 0x31a480: 0x3445ffff  ori         $a1, $v0, 0xFFFF
    ctx->pc = 0x31a480u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_31a484:
    // 0x31a484: 0xc51024  and         $v0, $a2, $a1
    ctx->pc = 0x31a484u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
label_31a488:
    // 0x31a488: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x31a488u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_31a48c:
    // 0x31a48c: 0x34440118  ori         $a0, $v0, 0x118
    ctx->pc = 0x31a48cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)280);
label_31a490:
    // 0x31a490: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x31a490u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_31a494:
    // 0x31a494: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x31a494u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_31a498:
    // 0x31a498: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x31a498u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_31a49c:
    // 0x31a49c: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x31a49cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_31a4a0:
    // 0x31a4a0: 0xc06371c  jal         func_18DC70
label_31a4a4:
    if (ctx->pc == 0x31A4A4u) {
        ctx->pc = 0x31A4A8u;
        goto label_31a4a8;
    }
    ctx->pc = 0x31A4A0u;
    SET_GPR_U32(ctx, 31, 0x31A4A8u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x31A4A0u, 0x31A4A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A4A8u;
label_31a4a8:
    // 0x31a4a8: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x31a4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_31a4ac:
    // 0x31a4ac: 0x24630120  addiu       $v1, $v1, 0x120
    ctx->pc = 0x31a4acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
label_31a4b0:
    // 0x31a4b0: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x31a4b0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_31a4b4:
    // 0x31a4b4: 0x27a70060  addiu       $a3, $sp, 0x60
    ctx->pc = 0x31a4b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_31a4b8:
    // 0x31a4b8: 0x7ce30000  sq          $v1, 0x0($a3)
    ctx->pc = 0x31a4b8u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 3));
label_31a4bc:
    // 0x31a4bc: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x31a4bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_31a4c0:
    // 0x31a4c0: 0x3c05c3c8  lui         $a1, 0xC3C8
    ctx->pc = 0x31a4c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)50120 << 16));
label_31a4c4:
    // 0x31a4c4: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x31a4c4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31a4c8:
    // 0x31a4c8: 0x0  nop
    ctx->pc = 0x31a4c8u;
    // NOP
label_31a4cc:
    // 0x31a4cc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x31a4ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_31a4d0:
    // 0x31a4d0: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x31a4d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_31a4d4:
    // 0x31a4d4: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x31a4d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_31a4d8:
    // 0x31a4d8: 0x3c0642c8  lui         $a2, 0x42C8
    ctx->pc = 0x31a4d8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17096 << 16));
label_31a4dc:
    // 0x31a4dc: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x31a4dcu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31a4e0:
    // 0x31a4e0: 0x0  nop
    ctx->pc = 0x31a4e0u;
    // NOP
label_31a4e4:
    // 0x31a4e4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x31a4e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_31a4e8:
    // 0x31a4e8: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x31a4e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_31a4ec:
    // 0x31a4ec: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x31a4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_31a4f0:
    // 0x31a4f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31a4f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31a4f4:
    // 0x31a4f4: 0x0  nop
    ctx->pc = 0x31a4f4u;
    // NOP
label_31a4f8:
    // 0x31a4f8: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x31a4f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
label_31a4fc:
    // 0x31a4fc: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x31a4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_31a500:
    // 0x31a500: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x31a500u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_31a504:
    // 0x31a504: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x31a504u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_31a508:
    // 0x31a508: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x31a508u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_31a50c:
    // 0x31a50c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x31a50cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_31a510:
    // 0x31a510: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x31a510u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_31a514:
    // 0x31a514: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x31a514u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_31a518:
    // 0x31a518: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x31a518u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_31a51c:
    // 0x31a51c: 0x34640118  ori         $a0, $v1, 0x118
    ctx->pc = 0x31a51cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)280);
label_31a520:
    // 0x31a520: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x31a520u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_31a524:
    // 0x31a524: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x31a524u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_31a528:
    // 0x31a528: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x31a528u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_31a52c:
    // 0x31a52c: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x31a52cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_31a530:
    // 0x31a530: 0xc06371c  jal         func_18DC70
label_31a534:
    if (ctx->pc == 0x31A534u) {
        ctx->pc = 0x31A538u;
        goto label_31a538;
    }
    ctx->pc = 0x31A530u;
    SET_GPR_U32(ctx, 31, 0x31A538u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x31A530u, 0x31A538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A538u;
label_31a538:
    // 0x31a538: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x31a538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_31a53c:
    // 0x31a53c: 0x24470120  addiu       $a3, $v0, 0x120
    ctx->pc = 0x31a53cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
label_31a540:
    // 0x31a540: 0x78e40000  lq          $a0, 0x0($a3)
    ctx->pc = 0x31a540u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 7), 0)));
label_31a544:
    // 0x31a544: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x31a544u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_31a548:
    // 0x31a548: 0x7cc40000  sq          $a0, 0x0($a2)
    ctx->pc = 0x31a548u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 4));
label_31a54c:
    // 0x31a54c: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x31a54cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_31a550:
    // 0x31a550: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x31a550u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
label_31a554:
    // 0x31a554: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31a554u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31a558:
    // 0x31a558: 0x0  nop
    ctx->pc = 0x31a558u;
    // NOP
label_31a55c:
    // 0x31a55c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x31a55cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_31a560:
    // 0x31a560: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x31a560u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_31a564:
    // 0x31a564: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x31a564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_31a568:
    // 0x31a568: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x31a568u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_31a56c:
    // 0x31a56c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31a56cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31a570:
    // 0x31a570: 0x0  nop
    ctx->pc = 0x31a570u;
    // NOP
label_31a574:
    // 0x31a574: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x31a574u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_31a578:
    // 0x31a578: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x31a578u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_31a57c:
    // 0x31a57c: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x31a57cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_31a580:
    // 0x31a580: 0x3c0443af  lui         $a0, 0x43AF
    ctx->pc = 0x31a580u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17327 << 16));
label_31a584:
    // 0x31a584: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x31a584u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31a588:
    // 0x31a588: 0x0  nop
    ctx->pc = 0x31a588u;
    // NOP
label_31a58c:
    // 0x31a58c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x31a58cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_31a590:
    // 0x31a590: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x31a590u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_31a594:
    // 0x31a594: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x31a594u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_31a598:
    // 0x31a598: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31a598u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31a59c:
    // 0x31a59c: 0x0  nop
    ctx->pc = 0x31a59cu;
    // NOP
label_31a5a0:
    // 0x31a5a0: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x31a5a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
label_31a5a4:
    // 0x31a5a4: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x31a5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_31a5a8:
    // 0x31a5a8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x31a5a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_31a5ac:
    // 0x31a5ac: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x31a5acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_31a5b0:
    // 0x31a5b0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x31a5b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_31a5b4:
    // 0x31a5b4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x31a5b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_31a5b8:
    // 0x31a5b8: 0x3444ffff  ori         $a0, $v0, 0xFFFF
    ctx->pc = 0x31a5b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_31a5bc:
    // 0x31a5bc: 0x642824  and         $a1, $v1, $a0
    ctx->pc = 0x31a5bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_31a5c0:
    // 0x31a5c0: 0x5103c  dsll32      $v0, $a1, 0
    ctx->pc = 0x31a5c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 0));
label_31a5c4:
    // 0x31a5c4: 0x34420118  ori         $v0, $v0, 0x118
    ctx->pc = 0x31a5c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)280);
label_31a5c8:
    // 0x31a5c8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x31a5c8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_31a5cc:
    // 0x31a5cc: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x31a5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_31a5d0:
    // 0x31a5d0: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x31a5d0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_31a5d4:
    // 0x31a5d4: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x31a5d4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_31a5d8:
    // 0x31a5d8: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x31a5d8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_31a5dc:
    // 0x31a5dc: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x31a5dcu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_31a5e0:
    // 0x31a5e0: 0xc06371c  jal         func_18DC70
label_31a5e4:
    if (ctx->pc == 0x31A5E4u) {
        ctx->pc = 0x31A5E8u;
        goto label_31a5e8;
    }
    ctx->pc = 0x31A5E0u;
    SET_GPR_U32(ctx, 31, 0x31A5E8u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x31A5E0u, 0x31A5E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A5E8u;
label_31a5e8:
    // 0x31a5e8: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x31a5e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_31a5ec:
    // 0x31a5ec: 0x24850120  addiu       $a1, $a0, 0x120
    ctx->pc = 0x31a5ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
label_31a5f0:
    // 0x31a5f0: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x31a5f0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_31a5f4:
    // 0x31a5f4: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x31a5f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_31a5f8:
    // 0x31a5f8: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x31a5f8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
label_31a5fc:
    // 0x31a5fc: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x31a5fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_31a600:
    // 0x31a600: 0x3c0443c8  lui         $a0, 0x43C8
    ctx->pc = 0x31a600u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17352 << 16));
label_31a604:
    // 0x31a604: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x31a604u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31a608:
    // 0x31a608: 0x0  nop
    ctx->pc = 0x31a608u;
    // NOP
label_31a60c:
    // 0x31a60c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x31a60cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_31a610:
    // 0x31a610: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x31a610u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_31a614:
    // 0x31a614: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x31a614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_31a618:
    // 0x31a618: 0x3c0543fa  lui         $a1, 0x43FA
    ctx->pc = 0x31a618u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17402 << 16));
label_31a61c:
    // 0x31a61c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x31a61cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31a620:
    // 0x31a620: 0x0  nop
    ctx->pc = 0x31a620u;
    // NOP
label_31a624:
    // 0x31a624: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x31a624u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_31a628:
    // 0x31a628: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x31a628u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_31a62c:
    // 0x31a62c: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x31a62cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_31a630:
    // 0x31a630: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31a630u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31a634:
    // 0x31a634: 0x0  nop
    ctx->pc = 0x31a634u;
    // NOP
label_31a638:
    // 0x31a638: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x31a638u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
label_31a63c:
    // 0x31a63c: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x31a63cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_31a640:
    // 0x31a640: 0x5303c  dsll32      $a2, $a1, 0
    ctx->pc = 0x31a640u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << (32 + 0));
label_31a644:
    // 0x31a644: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x31a644u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
label_31a648:
    // 0x31a648: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x31a648u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_31a64c:
    // 0x31a64c: 0x32438  dsll        $a0, $v1, 16
    ctx->pc = 0x31a64cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << 16);
label_31a650:
    // 0x31a650: 0x3485ffff  ori         $a1, $a0, 0xFFFF
    ctx->pc = 0x31a650u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_31a654:
    // 0x31a654: 0xc51824  and         $v1, $a2, $a1
    ctx->pc = 0x31a654u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
label_31a658:
    // 0x31a658: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x31a658u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_31a65c:
    // 0x31a65c: 0x34640118  ori         $a0, $v1, 0x118
    ctx->pc = 0x31a65cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)280);
label_31a660:
    // 0x31a660: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x31a660u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_31a664:
    // 0x31a664: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x31a664u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_31a668:
    // 0x31a668: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x31a668u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_31a66c:
    // 0x31a66c: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x31a66cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_31a670:
    // 0x31a670: 0xc06371c  jal         func_18DC70
label_31a674:
    if (ctx->pc == 0x31A674u) {
        ctx->pc = 0x31A678u;
        goto label_31a678;
    }
    ctx->pc = 0x31A670u;
    SET_GPR_U32(ctx, 31, 0x31A678u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x31A670u, 0x31A678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A678u;
label_31a678:
    // 0x31a678: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x31a678u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_31a67c:
    // 0x31a67c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x31a67cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_31a680:
    // 0x31a680: 0x24720120  addiu       $s2, $v1, 0x120
    ctx->pc = 0x31a680u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
label_31a684:
    // 0x31a684: 0x7a530000  lq          $s3, 0x0($s2)
    ctx->pc = 0x31a684u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 18), 0)));
label_31a688:
    // 0x31a688: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x31a688u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_31a68c:
    // 0x31a68c: 0x7c930000  sq          $s3, 0x0($a0)
    ctx->pc = 0x31a68cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 19));
label_31a690:
    // 0x31a690: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x31a690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_31a694:
    // 0x31a694: 0x3c054248  lui         $a1, 0x4248
    ctx->pc = 0x31a694u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16968 << 16));
label_31a698:
    // 0x31a698: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x31a698u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31a69c:
    // 0x31a69c: 0x0  nop
    ctx->pc = 0x31a69cu;
    // NOP
label_31a6a0:
    // 0x31a6a0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x31a6a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_31a6a4:
    // 0x31a6a4: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x31a6a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_31a6a8:
    // 0x31a6a8: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x31a6a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_31a6ac:
    // 0x31a6ac: 0x3c114220  lui         $s1, 0x4220
    ctx->pc = 0x31a6acu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)16928 << 16));
label_31a6b0:
    // 0x31a6b0: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x31a6b0u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31a6b4:
    // 0x31a6b4: 0x0  nop
    ctx->pc = 0x31a6b4u;
    // NOP
label_31a6b8:
    // 0x31a6b8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x31a6b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_31a6bc:
    // 0x31a6bc: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x31a6bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_31a6c0:
    // 0x31a6c0: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x31a6c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_31a6c4:
    // 0x31a6c4: 0x3c03c3fa  lui         $v1, 0xC3FA
    ctx->pc = 0x31a6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50170 << 16));
label_31a6c8:
    // 0x31a6c8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x31a6c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31a6cc:
    // 0x31a6cc: 0x0  nop
    ctx->pc = 0x31a6ccu;
    // NOP
label_31a6d0:
    // 0x31a6d0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x31a6d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_31a6d4:
    // 0x31a6d4: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x31a6d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_31a6d8:
    // 0x31a6d8: 0x3c044040  lui         $a0, 0x4040
    ctx->pc = 0x31a6d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16448 << 16));
label_31a6dc:
    // 0x31a6dc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x31a6dcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31a6e0:
    // 0x31a6e0: 0x0  nop
    ctx->pc = 0x31a6e0u;
    // NOP
label_31a6e4:
    // 0x31a6e4: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x31a6e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
label_31a6e8:
    // 0x31a6e8: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x31a6e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_31a6ec:
    // 0x31a6ec: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x31a6ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
label_31a6f0:
    // 0x31a6f0: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x31a6f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
label_31a6f4:
    // 0x31a6f4: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x31a6f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_31a6f8:
    // 0x31a6f8: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x31a6f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_31a6fc:
    // 0x31a6fc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x31a6fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_31a700:
    // 0x31a700: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x31a700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_31a704:
    // 0x31a704: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x31a704u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_31a708:
    // 0x31a708: 0x34440118  ori         $a0, $v0, 0x118
    ctx->pc = 0x31a708u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)280);
label_31a70c:
    // 0x31a70c: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x31a70cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_31a710:
    // 0x31a710: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x31a710u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_31a714:
    // 0x31a714: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x31a714u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_31a718:
    // 0x31a718: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x31a718u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_31a71c:
    // 0x31a71c: 0xc06371c  jal         func_18DC70
label_31a720:
    if (ctx->pc == 0x31A720u) {
        ctx->pc = 0x31A724u;
        goto label_31a724;
    }
    ctx->pc = 0x31A71Cu;
    SET_GPR_U32(ctx, 31, 0x31A724u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x31A71Cu, 0x31A724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A724u;
label_31a724:
    // 0x31a724: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x31a724u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_31a728:
    // 0x31a728: 0xac801290  sw          $zero, 0x1290($a0)
    ctx->pc = 0x31a728u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4752), GPR_U32(ctx, 0));
label_31a72c:
    // 0x31a72c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x31a72cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_31a730:
    // 0x31a730: 0x8c251a98  lw          $a1, 0x1A98($at)
    ctx->pc = 0x31a730u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6808)));
label_31a734:
    // 0x31a734: 0x3c04ffdf  lui         $a0, 0xFFDF
    ctx->pc = 0x31a734u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65503 << 16));
label_31a738:
    // 0x31a738: 0x3482ffff  ori         $v0, $a0, 0xFFFF
    ctx->pc = 0x31a738u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_31a73c:
    // 0x31a73c: 0xa23024  and         $a2, $a1, $v0
    ctx->pc = 0x31a73cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
label_31a740:
    // 0x31a740: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x31a740u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_31a744:
    // 0x31a744: 0xac261a98  sw          $a2, 0x1A98($at)
    ctx->pc = 0x31a744u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6808), GPR_U32(ctx, 6));
label_31a748:
    // 0x31a748: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x31a748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_31a74c:
    // 0x31a74c: 0xac401290  sw          $zero, 0x1290($v0)
    ctx->pc = 0x31a74cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4752), GPR_U32(ctx, 0));
label_31a750:
    // 0x31a750: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x31a750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_31a754:
    // 0x31a754: 0x8c470130  lw          $a3, 0x130($v0)
    ctx->pc = 0x31a754u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_31a758:
    // 0x31a758: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x31a758u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_31a75c:
    // 0x31a75c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x31a75cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_31a760:
    // 0x31a760: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x31a760u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_31a764:
    // 0x31a764: 0xc065580  jal         func_195600
label_31a768:
    if (ctx->pc == 0x31A768u) {
        ctx->pc = 0x31A76Cu;
        goto label_31a76c;
    }
    ctx->pc = 0x31A764u;
    SET_GPR_U32(ctx, 31, 0x31A76Cu);
    ctx->pc = 0x195600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x195600u, 0x31A764u, 0x31A76Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A76Cu;
label_31a76c:
    // 0x31a76c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x31a76cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_31a770:
    // 0x31a770: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x31a770u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_31a774:
    // 0x31a774: 0x90a30002  lbu         $v1, 0x2($a1)
    ctx->pc = 0x31a774u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
label_31a778:
    // 0x31a778: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x31a778u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_31a77c:
    // 0x31a77c: 0xa0a40002  sb          $a0, 0x2($a1)
    ctx->pc = 0x31a77cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 4));
label_31a780:
    // 0x31a780: 0x10000035  b           . + 4 + (0x35 << 2)
label_31a784:
    if (ctx->pc == 0x31A784u) {
        ctx->pc = 0x31A788u;
        goto label_31a788;
    }
    ctx->pc = 0x31A780u;
    {
        const bool branch_taken_0x31a780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31a780) {
            ctx->pc = 0x31A858u;
            goto label_31a858;
        }
    }
    ctx->pc = 0x31A788u;
label_31a788:
    // 0x31a788: 0x8fa60088  lw          $a2, 0x88($sp)
    ctx->pc = 0x31a788u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_31a78c:
    // 0x31a78c: 0x8cc41290  lw          $a0, 0x1290($a2)
    ctx->pc = 0x31a78cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4752)));
label_31a790:
    // 0x31a790: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x31a790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_31a794:
    // 0x31a794: 0xacc31290  sw          $v1, 0x1290($a2)
    ctx->pc = 0x31a794u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4752), GPR_U32(ctx, 3));
label_31a798:
    // 0x31a798: 0x2c610006  sltiu       $at, $v1, 0x6
    ctx->pc = 0x31a798u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_31a79c:
    // 0x31a79c: 0x1420002e  bnez        $at, . + 4 + (0x2E << 2)
label_31a7a0:
    if (ctx->pc == 0x31A7A0u) {
        ctx->pc = 0x31A7A4u;
        goto label_31a7a4;
    }
    ctx->pc = 0x31A79Cu;
    {
        const bool branch_taken_0x31a79c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x31a79c) {
            ctx->pc = 0x31A858u;
            goto label_31a858;
        }
    }
    ctx->pc = 0x31A7A4u;
label_31a7a4:
    // 0x31a7a4: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x31a7a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_31a7a8:
    // 0x31a7a8: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x31a7a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_31a7ac:
    // 0x31a7ac: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x31a7acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_31a7b0:
    // 0x31a7b0: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x31a7b0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_31a7b4:
    // 0x31a7b4: 0x10000028  b           . + 4 + (0x28 << 2)
label_31a7b8:
    if (ctx->pc == 0x31A7B8u) {
        ctx->pc = 0x31A7BCu;
        goto label_31a7bc;
    }
    ctx->pc = 0x31A7B4u;
    {
        const bool branch_taken_0x31a7b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31a7b4) {
            ctx->pc = 0x31A858u;
            goto label_31a858;
        }
    }
    ctx->pc = 0x31A7BCu;
label_31a7bc:
    // 0x31a7bc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x31a7bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31a7c0:
    // 0x31a7c0: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x31a7c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_31a7c4:
    // 0x31a7c4: 0xa0a40000  sb          $a0, 0x0($a1)
    ctx->pc = 0x31a7c4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 4));
label_31a7c8:
    // 0x31a7c8: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x31a7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_31a7cc:
    // 0x31a7cc: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x31a7ccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
label_31a7d0:
    // 0x31a7d0: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x31a7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_31a7d4:
    // 0x31a7d4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x31a7d4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_31a7d8:
    // 0x31a7d8: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x31a7d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_31a7dc:
    // 0x31a7dc: 0xa0800003  sb          $zero, 0x3($a0)
    ctx->pc = 0x31a7dcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
label_31a7e0:
    // 0x31a7e0: 0x8fa60088  lw          $a2, 0x88($sp)
    ctx->pc = 0x31a7e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_31a7e4:
    // 0x31a7e4: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x31a7e4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
label_31a7e8:
    // 0x31a7e8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x31a7e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31a7ec:
    // 0x31a7ec: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x31a7ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_31a7f0:
    // 0x31a7f0: 0xe48001a0  swc1        $f0, 0x1A0($a0)
    ctx->pc = 0x31a7f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 416), bits); }
label_31a7f4:
    // 0x31a7f4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x31a7f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31a7f8:
    // 0x31a7f8: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x31a7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_31a7fc:
    // 0x31a7fc: 0xe46001a4  swc1        $f0, 0x1A4($v1)
    ctx->pc = 0x31a7fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 420), bits); }
label_31a800:
    // 0x31a800: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x31a800u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31a804:
    // 0x31a804: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x31a804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_31a808:
    // 0x31a808: 0xe46001a8  swc1        $f0, 0x1A8($v1)
    ctx->pc = 0x31a808u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 424), bits); }
label_31a80c:
    // 0x31a80c: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x31a80cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_31a810:
    // 0x31a810: 0x10000007  b           . + 4 + (0x7 << 2)
label_31a814:
    if (ctx->pc == 0x31A814u) {
        ctx->pc = 0x31A818u;
        goto label_31a818;
    }
    ctx->pc = 0x31A810u;
    {
        const bool branch_taken_0x31a810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31a810) {
            ctx->pc = 0x31A830u;
            goto label_31a830;
        }
    }
    ctx->pc = 0x31A818u;
label_31a818:
    // 0x31a818: 0x102880  sll         $a1, $s0, 2
    ctx->pc = 0x31a818u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_31a81c:
    // 0x31a81c: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x31a81cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_31a820:
    // 0x31a820: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x31a820u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_31a824:
    // 0x31a824: 0xac60128c  sw          $zero, 0x128C($v1)
    ctx->pc = 0x31a824u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4748), GPR_U32(ctx, 0));
label_31a828:
    // 0x31a828: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x31a828u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_31a82c:
    // 0x31a82c: 0x0  nop
    ctx->pc = 0x31a82cu;
    // NOP
label_31a830:
    // 0x31a830: 0x2e030008  sltiu       $v1, $s0, 0x8
    ctx->pc = 0x31a830u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_31a834:
    // 0x31a834: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
label_31a838:
    if (ctx->pc == 0x31A838u) {
        ctx->pc = 0x31A83Cu;
        goto label_31a83c;
    }
    ctx->pc = 0x31A834u;
    {
        const bool branch_taken_0x31a834 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x31a834) {
            ctx->pc = 0x31A818u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31a818;
        }
    }
    ctx->pc = 0x31A83Cu;
label_31a83c:
    // 0x31a83c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x31a83cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31a840:
    // 0x31a840: 0x8fa60088  lw          $a2, 0x88($sp)
    ctx->pc = 0x31a840u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_31a844:
    // 0x31a844: 0xa4c410a6  sh          $a0, 0x10A6($a2)
    ctx->pc = 0x31a844u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 4262), (uint16_t)GPR_U32(ctx, 4));
label_31a848:
    // 0x31a848: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x31a848u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_31a84c:
    // 0x31a84c: 0xa0a011ee  sb          $zero, 0x11EE($a1)
    ctx->pc = 0x31a84cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4590), (uint8_t)GPR_U32(ctx, 0));
label_31a850:
    // 0x31a850: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x31a850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_31a854:
    // 0x31a854: 0xa06010a8  sb          $zero, 0x10A8($v1)
    ctx->pc = 0x31a854u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 0));
label_31a858:
    // 0x31a858: 0x7bbf0050  lq          $ra, 0x50($sp)
    ctx->pc = 0x31a858u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_31a85c:
    // 0x31a85c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x31a85cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_31a860:
    // 0x31a860: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x31a860u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_31a864:
    // 0x31a864: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x31a864u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_31a868:
    // 0x31a868: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x31a868u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_31a86c:
    // 0x31a86c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x31a86cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_31a870:
    // 0x31a870: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x31a870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_31a874:
    // 0x31a874: 0x3e00008  jr          $ra
label_31a878:
    if (ctx->pc == 0x31A878u) {
        ctx->pc = 0x31A87Cu;
        goto label_fallthrough_0x31a874;
    }
    ctx->pc = 0x31A874u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31A874u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x31a874:
    ctx->pc = 0x31A87Cu;
}
