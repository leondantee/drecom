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

// Function: sub_00384190
// Address: 0x384190 - 0x3851d0
void sub_00384190_0x384190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00384190_0x384190");
#endif

    switch (ctx->pc) {
        case 0x384190u: goto label_384190;
        case 0x384194u: goto label_384194;
        case 0x384198u: goto label_384198;
        case 0x38419cu: goto label_38419c;
        case 0x3841a0u: goto label_3841a0;
        case 0x3841a4u: goto label_3841a4;
        case 0x3841a8u: goto label_3841a8;
        case 0x3841acu: goto label_3841ac;
        case 0x3841b0u: goto label_3841b0;
        case 0x3841b4u: goto label_3841b4;
        case 0x3841b8u: goto label_3841b8;
        case 0x3841bcu: goto label_3841bc;
        case 0x3841c0u: goto label_3841c0;
        case 0x3841c4u: goto label_3841c4;
        case 0x3841c8u: goto label_3841c8;
        case 0x3841ccu: goto label_3841cc;
        case 0x3841d0u: goto label_3841d0;
        case 0x3841d4u: goto label_3841d4;
        case 0x3841d8u: goto label_3841d8;
        case 0x3841dcu: goto label_3841dc;
        case 0x3841e0u: goto label_3841e0;
        case 0x3841e4u: goto label_3841e4;
        case 0x3841e8u: goto label_3841e8;
        case 0x3841ecu: goto label_3841ec;
        case 0x3841f0u: goto label_3841f0;
        case 0x3841f4u: goto label_3841f4;
        case 0x3841f8u: goto label_3841f8;
        case 0x3841fcu: goto label_3841fc;
        case 0x384200u: goto label_384200;
        case 0x384204u: goto label_384204;
        case 0x384208u: goto label_384208;
        case 0x38420cu: goto label_38420c;
        case 0x384210u: goto label_384210;
        case 0x384214u: goto label_384214;
        case 0x384218u: goto label_384218;
        case 0x38421cu: goto label_38421c;
        case 0x384220u: goto label_384220;
        case 0x384224u: goto label_384224;
        case 0x384228u: goto label_384228;
        case 0x38422cu: goto label_38422c;
        case 0x384230u: goto label_384230;
        case 0x384234u: goto label_384234;
        case 0x384238u: goto label_384238;
        case 0x38423cu: goto label_38423c;
        case 0x384240u: goto label_384240;
        case 0x384244u: goto label_384244;
        case 0x384248u: goto label_384248;
        case 0x38424cu: goto label_38424c;
        case 0x384250u: goto label_384250;
        case 0x384254u: goto label_384254;
        case 0x384258u: goto label_384258;
        case 0x38425cu: goto label_38425c;
        case 0x384260u: goto label_384260;
        case 0x384264u: goto label_384264;
        case 0x384268u: goto label_384268;
        case 0x38426cu: goto label_38426c;
        case 0x384270u: goto label_384270;
        case 0x384274u: goto label_384274;
        case 0x384278u: goto label_384278;
        case 0x38427cu: goto label_38427c;
        case 0x384280u: goto label_384280;
        case 0x384284u: goto label_384284;
        case 0x384288u: goto label_384288;
        case 0x38428cu: goto label_38428c;
        case 0x384290u: goto label_384290;
        case 0x384294u: goto label_384294;
        case 0x384298u: goto label_384298;
        case 0x38429cu: goto label_38429c;
        case 0x3842a0u: goto label_3842a0;
        case 0x3842a4u: goto label_3842a4;
        case 0x3842a8u: goto label_3842a8;
        case 0x3842acu: goto label_3842ac;
        case 0x3842b0u: goto label_3842b0;
        case 0x3842b4u: goto label_3842b4;
        case 0x3842b8u: goto label_3842b8;
        case 0x3842bcu: goto label_3842bc;
        case 0x3842c0u: goto label_3842c0;
        case 0x3842c4u: goto label_3842c4;
        case 0x3842c8u: goto label_3842c8;
        case 0x3842ccu: goto label_3842cc;
        case 0x3842d0u: goto label_3842d0;
        case 0x3842d4u: goto label_3842d4;
        case 0x3842d8u: goto label_3842d8;
        case 0x3842dcu: goto label_3842dc;
        case 0x3842e0u: goto label_3842e0;
        case 0x3842e4u: goto label_3842e4;
        case 0x3842e8u: goto label_3842e8;
        case 0x3842ecu: goto label_3842ec;
        case 0x3842f0u: goto label_3842f0;
        case 0x3842f4u: goto label_3842f4;
        case 0x3842f8u: goto label_3842f8;
        case 0x3842fcu: goto label_3842fc;
        case 0x384300u: goto label_384300;
        case 0x384304u: goto label_384304;
        case 0x384308u: goto label_384308;
        case 0x38430cu: goto label_38430c;
        case 0x384310u: goto label_384310;
        case 0x384314u: goto label_384314;
        case 0x384318u: goto label_384318;
        case 0x38431cu: goto label_38431c;
        case 0x384320u: goto label_384320;
        case 0x384324u: goto label_384324;
        case 0x384328u: goto label_384328;
        case 0x38432cu: goto label_38432c;
        case 0x384330u: goto label_384330;
        case 0x384334u: goto label_384334;
        case 0x384338u: goto label_384338;
        case 0x38433cu: goto label_38433c;
        case 0x384340u: goto label_384340;
        case 0x384344u: goto label_384344;
        case 0x384348u: goto label_384348;
        case 0x38434cu: goto label_38434c;
        case 0x384350u: goto label_384350;
        case 0x384354u: goto label_384354;
        case 0x384358u: goto label_384358;
        case 0x38435cu: goto label_38435c;
        case 0x384360u: goto label_384360;
        case 0x384364u: goto label_384364;
        case 0x384368u: goto label_384368;
        case 0x38436cu: goto label_38436c;
        case 0x384370u: goto label_384370;
        case 0x384374u: goto label_384374;
        case 0x384378u: goto label_384378;
        case 0x38437cu: goto label_38437c;
        case 0x384380u: goto label_384380;
        case 0x384384u: goto label_384384;
        case 0x384388u: goto label_384388;
        case 0x38438cu: goto label_38438c;
        case 0x384390u: goto label_384390;
        case 0x384394u: goto label_384394;
        case 0x384398u: goto label_384398;
        case 0x38439cu: goto label_38439c;
        case 0x3843a0u: goto label_3843a0;
        case 0x3843a4u: goto label_3843a4;
        case 0x3843a8u: goto label_3843a8;
        case 0x3843acu: goto label_3843ac;
        case 0x3843b0u: goto label_3843b0;
        case 0x3843b4u: goto label_3843b4;
        case 0x3843b8u: goto label_3843b8;
        case 0x3843bcu: goto label_3843bc;
        case 0x3843c0u: goto label_3843c0;
        case 0x3843c4u: goto label_3843c4;
        case 0x3843c8u: goto label_3843c8;
        case 0x3843ccu: goto label_3843cc;
        case 0x3843d0u: goto label_3843d0;
        case 0x3843d4u: goto label_3843d4;
        case 0x3843d8u: goto label_3843d8;
        case 0x3843dcu: goto label_3843dc;
        case 0x3843e0u: goto label_3843e0;
        case 0x3843e4u: goto label_3843e4;
        case 0x3843e8u: goto label_3843e8;
        case 0x3843ecu: goto label_3843ec;
        case 0x3843f0u: goto label_3843f0;
        case 0x3843f4u: goto label_3843f4;
        case 0x3843f8u: goto label_3843f8;
        case 0x3843fcu: goto label_3843fc;
        case 0x384400u: goto label_384400;
        case 0x384404u: goto label_384404;
        case 0x384408u: goto label_384408;
        case 0x38440cu: goto label_38440c;
        case 0x384410u: goto label_384410;
        case 0x384414u: goto label_384414;
        case 0x384418u: goto label_384418;
        case 0x38441cu: goto label_38441c;
        case 0x384420u: goto label_384420;
        case 0x384424u: goto label_384424;
        case 0x384428u: goto label_384428;
        case 0x38442cu: goto label_38442c;
        case 0x384430u: goto label_384430;
        case 0x384434u: goto label_384434;
        case 0x384438u: goto label_384438;
        case 0x38443cu: goto label_38443c;
        case 0x384440u: goto label_384440;
        case 0x384444u: goto label_384444;
        case 0x384448u: goto label_384448;
        case 0x38444cu: goto label_38444c;
        case 0x384450u: goto label_384450;
        case 0x384454u: goto label_384454;
        case 0x384458u: goto label_384458;
        case 0x38445cu: goto label_38445c;
        case 0x384460u: goto label_384460;
        case 0x384464u: goto label_384464;
        case 0x384468u: goto label_384468;
        case 0x38446cu: goto label_38446c;
        case 0x384470u: goto label_384470;
        case 0x384474u: goto label_384474;
        case 0x384478u: goto label_384478;
        case 0x38447cu: goto label_38447c;
        case 0x384480u: goto label_384480;
        case 0x384484u: goto label_384484;
        case 0x384488u: goto label_384488;
        case 0x38448cu: goto label_38448c;
        case 0x384490u: goto label_384490;
        case 0x384494u: goto label_384494;
        case 0x384498u: goto label_384498;
        case 0x38449cu: goto label_38449c;
        case 0x3844a0u: goto label_3844a0;
        case 0x3844a4u: goto label_3844a4;
        case 0x3844a8u: goto label_3844a8;
        case 0x3844acu: goto label_3844ac;
        case 0x3844b0u: goto label_3844b0;
        case 0x3844b4u: goto label_3844b4;
        case 0x3844b8u: goto label_3844b8;
        case 0x3844bcu: goto label_3844bc;
        case 0x3844c0u: goto label_3844c0;
        case 0x3844c4u: goto label_3844c4;
        case 0x3844c8u: goto label_3844c8;
        case 0x3844ccu: goto label_3844cc;
        case 0x3844d0u: goto label_3844d0;
        case 0x3844d4u: goto label_3844d4;
        case 0x3844d8u: goto label_3844d8;
        case 0x3844dcu: goto label_3844dc;
        case 0x3844e0u: goto label_3844e0;
        case 0x3844e4u: goto label_3844e4;
        case 0x3844e8u: goto label_3844e8;
        case 0x3844ecu: goto label_3844ec;
        case 0x3844f0u: goto label_3844f0;
        case 0x3844f4u: goto label_3844f4;
        case 0x3844f8u: goto label_3844f8;
        case 0x3844fcu: goto label_3844fc;
        case 0x384500u: goto label_384500;
        case 0x384504u: goto label_384504;
        case 0x384508u: goto label_384508;
        case 0x38450cu: goto label_38450c;
        case 0x384510u: goto label_384510;
        case 0x384514u: goto label_384514;
        case 0x384518u: goto label_384518;
        case 0x38451cu: goto label_38451c;
        case 0x384520u: goto label_384520;
        case 0x384524u: goto label_384524;
        case 0x384528u: goto label_384528;
        case 0x38452cu: goto label_38452c;
        case 0x384530u: goto label_384530;
        case 0x384534u: goto label_384534;
        case 0x384538u: goto label_384538;
        case 0x38453cu: goto label_38453c;
        case 0x384540u: goto label_384540;
        case 0x384544u: goto label_384544;
        case 0x384548u: goto label_384548;
        case 0x38454cu: goto label_38454c;
        case 0x384550u: goto label_384550;
        case 0x384554u: goto label_384554;
        case 0x384558u: goto label_384558;
        case 0x38455cu: goto label_38455c;
        case 0x384560u: goto label_384560;
        case 0x384564u: goto label_384564;
        case 0x384568u: goto label_384568;
        case 0x38456cu: goto label_38456c;
        case 0x384570u: goto label_384570;
        case 0x384574u: goto label_384574;
        case 0x384578u: goto label_384578;
        case 0x38457cu: goto label_38457c;
        case 0x384580u: goto label_384580;
        case 0x384584u: goto label_384584;
        case 0x384588u: goto label_384588;
        case 0x38458cu: goto label_38458c;
        case 0x384590u: goto label_384590;
        case 0x384594u: goto label_384594;
        case 0x384598u: goto label_384598;
        case 0x38459cu: goto label_38459c;
        case 0x3845a0u: goto label_3845a0;
        case 0x3845a4u: goto label_3845a4;
        case 0x3845a8u: goto label_3845a8;
        case 0x3845acu: goto label_3845ac;
        case 0x3845b0u: goto label_3845b0;
        case 0x3845b4u: goto label_3845b4;
        case 0x3845b8u: goto label_3845b8;
        case 0x3845bcu: goto label_3845bc;
        case 0x3845c0u: goto label_3845c0;
        case 0x3845c4u: goto label_3845c4;
        case 0x3845c8u: goto label_3845c8;
        case 0x3845ccu: goto label_3845cc;
        case 0x3845d0u: goto label_3845d0;
        case 0x3845d4u: goto label_3845d4;
        case 0x3845d8u: goto label_3845d8;
        case 0x3845dcu: goto label_3845dc;
        case 0x3845e0u: goto label_3845e0;
        case 0x3845e4u: goto label_3845e4;
        case 0x3845e8u: goto label_3845e8;
        case 0x3845ecu: goto label_3845ec;
        case 0x3845f0u: goto label_3845f0;
        case 0x3845f4u: goto label_3845f4;
        case 0x3845f8u: goto label_3845f8;
        case 0x3845fcu: goto label_3845fc;
        case 0x384600u: goto label_384600;
        case 0x384604u: goto label_384604;
        case 0x384608u: goto label_384608;
        case 0x38460cu: goto label_38460c;
        case 0x384610u: goto label_384610;
        case 0x384614u: goto label_384614;
        case 0x384618u: goto label_384618;
        case 0x38461cu: goto label_38461c;
        case 0x384620u: goto label_384620;
        case 0x384624u: goto label_384624;
        case 0x384628u: goto label_384628;
        case 0x38462cu: goto label_38462c;
        case 0x384630u: goto label_384630;
        case 0x384634u: goto label_384634;
        case 0x384638u: goto label_384638;
        case 0x38463cu: goto label_38463c;
        case 0x384640u: goto label_384640;
        case 0x384644u: goto label_384644;
        case 0x384648u: goto label_384648;
        case 0x38464cu: goto label_38464c;
        case 0x384650u: goto label_384650;
        case 0x384654u: goto label_384654;
        case 0x384658u: goto label_384658;
        case 0x38465cu: goto label_38465c;
        case 0x384660u: goto label_384660;
        case 0x384664u: goto label_384664;
        case 0x384668u: goto label_384668;
        case 0x38466cu: goto label_38466c;
        case 0x384670u: goto label_384670;
        case 0x384674u: goto label_384674;
        case 0x384678u: goto label_384678;
        case 0x38467cu: goto label_38467c;
        case 0x384680u: goto label_384680;
        case 0x384684u: goto label_384684;
        case 0x384688u: goto label_384688;
        case 0x38468cu: goto label_38468c;
        case 0x384690u: goto label_384690;
        case 0x384694u: goto label_384694;
        case 0x384698u: goto label_384698;
        case 0x38469cu: goto label_38469c;
        case 0x3846a0u: goto label_3846a0;
        case 0x3846a4u: goto label_3846a4;
        case 0x3846a8u: goto label_3846a8;
        case 0x3846acu: goto label_3846ac;
        case 0x3846b0u: goto label_3846b0;
        case 0x3846b4u: goto label_3846b4;
        case 0x3846b8u: goto label_3846b8;
        case 0x3846bcu: goto label_3846bc;
        case 0x3846c0u: goto label_3846c0;
        case 0x3846c4u: goto label_3846c4;
        case 0x3846c8u: goto label_3846c8;
        case 0x3846ccu: goto label_3846cc;
        case 0x3846d0u: goto label_3846d0;
        case 0x3846d4u: goto label_3846d4;
        case 0x3846d8u: goto label_3846d8;
        case 0x3846dcu: goto label_3846dc;
        case 0x3846e0u: goto label_3846e0;
        case 0x3846e4u: goto label_3846e4;
        case 0x3846e8u: goto label_3846e8;
        case 0x3846ecu: goto label_3846ec;
        case 0x3846f0u: goto label_3846f0;
        case 0x3846f4u: goto label_3846f4;
        case 0x3846f8u: goto label_3846f8;
        case 0x3846fcu: goto label_3846fc;
        case 0x384700u: goto label_384700;
        case 0x384704u: goto label_384704;
        case 0x384708u: goto label_384708;
        case 0x38470cu: goto label_38470c;
        case 0x384710u: goto label_384710;
        case 0x384714u: goto label_384714;
        case 0x384718u: goto label_384718;
        case 0x38471cu: goto label_38471c;
        case 0x384720u: goto label_384720;
        case 0x384724u: goto label_384724;
        case 0x384728u: goto label_384728;
        case 0x38472cu: goto label_38472c;
        case 0x384730u: goto label_384730;
        case 0x384734u: goto label_384734;
        case 0x384738u: goto label_384738;
        case 0x38473cu: goto label_38473c;
        case 0x384740u: goto label_384740;
        case 0x384744u: goto label_384744;
        case 0x384748u: goto label_384748;
        case 0x38474cu: goto label_38474c;
        case 0x384750u: goto label_384750;
        case 0x384754u: goto label_384754;
        case 0x384758u: goto label_384758;
        case 0x38475cu: goto label_38475c;
        case 0x384760u: goto label_384760;
        case 0x384764u: goto label_384764;
        case 0x384768u: goto label_384768;
        case 0x38476cu: goto label_38476c;
        case 0x384770u: goto label_384770;
        case 0x384774u: goto label_384774;
        case 0x384778u: goto label_384778;
        case 0x38477cu: goto label_38477c;
        case 0x384780u: goto label_384780;
        case 0x384784u: goto label_384784;
        case 0x384788u: goto label_384788;
        case 0x38478cu: goto label_38478c;
        case 0x384790u: goto label_384790;
        case 0x384794u: goto label_384794;
        case 0x384798u: goto label_384798;
        case 0x38479cu: goto label_38479c;
        case 0x3847a0u: goto label_3847a0;
        case 0x3847a4u: goto label_3847a4;
        case 0x3847a8u: goto label_3847a8;
        case 0x3847acu: goto label_3847ac;
        case 0x3847b0u: goto label_3847b0;
        case 0x3847b4u: goto label_3847b4;
        case 0x3847b8u: goto label_3847b8;
        case 0x3847bcu: goto label_3847bc;
        case 0x3847c0u: goto label_3847c0;
        case 0x3847c4u: goto label_3847c4;
        case 0x3847c8u: goto label_3847c8;
        case 0x3847ccu: goto label_3847cc;
        case 0x3847d0u: goto label_3847d0;
        case 0x3847d4u: goto label_3847d4;
        case 0x3847d8u: goto label_3847d8;
        case 0x3847dcu: goto label_3847dc;
        case 0x3847e0u: goto label_3847e0;
        case 0x3847e4u: goto label_3847e4;
        case 0x3847e8u: goto label_3847e8;
        case 0x3847ecu: goto label_3847ec;
        case 0x3847f0u: goto label_3847f0;
        case 0x3847f4u: goto label_3847f4;
        case 0x3847f8u: goto label_3847f8;
        case 0x3847fcu: goto label_3847fc;
        case 0x384800u: goto label_384800;
        case 0x384804u: goto label_384804;
        case 0x384808u: goto label_384808;
        case 0x38480cu: goto label_38480c;
        case 0x384810u: goto label_384810;
        case 0x384814u: goto label_384814;
        case 0x384818u: goto label_384818;
        case 0x38481cu: goto label_38481c;
        case 0x384820u: goto label_384820;
        case 0x384824u: goto label_384824;
        case 0x384828u: goto label_384828;
        case 0x38482cu: goto label_38482c;
        case 0x384830u: goto label_384830;
        case 0x384834u: goto label_384834;
        case 0x384838u: goto label_384838;
        case 0x38483cu: goto label_38483c;
        case 0x384840u: goto label_384840;
        case 0x384844u: goto label_384844;
        case 0x384848u: goto label_384848;
        case 0x38484cu: goto label_38484c;
        case 0x384850u: goto label_384850;
        case 0x384854u: goto label_384854;
        case 0x384858u: goto label_384858;
        case 0x38485cu: goto label_38485c;
        case 0x384860u: goto label_384860;
        case 0x384864u: goto label_384864;
        case 0x384868u: goto label_384868;
        case 0x38486cu: goto label_38486c;
        case 0x384870u: goto label_384870;
        case 0x384874u: goto label_384874;
        case 0x384878u: goto label_384878;
        case 0x38487cu: goto label_38487c;
        case 0x384880u: goto label_384880;
        case 0x384884u: goto label_384884;
        case 0x384888u: goto label_384888;
        case 0x38488cu: goto label_38488c;
        case 0x384890u: goto label_384890;
        case 0x384894u: goto label_384894;
        case 0x384898u: goto label_384898;
        case 0x38489cu: goto label_38489c;
        case 0x3848a0u: goto label_3848a0;
        case 0x3848a4u: goto label_3848a4;
        case 0x3848a8u: goto label_3848a8;
        case 0x3848acu: goto label_3848ac;
        case 0x3848b0u: goto label_3848b0;
        case 0x3848b4u: goto label_3848b4;
        case 0x3848b8u: goto label_3848b8;
        case 0x3848bcu: goto label_3848bc;
        case 0x3848c0u: goto label_3848c0;
        case 0x3848c4u: goto label_3848c4;
        case 0x3848c8u: goto label_3848c8;
        case 0x3848ccu: goto label_3848cc;
        case 0x3848d0u: goto label_3848d0;
        case 0x3848d4u: goto label_3848d4;
        case 0x3848d8u: goto label_3848d8;
        case 0x3848dcu: goto label_3848dc;
        case 0x3848e0u: goto label_3848e0;
        case 0x3848e4u: goto label_3848e4;
        case 0x3848e8u: goto label_3848e8;
        case 0x3848ecu: goto label_3848ec;
        case 0x3848f0u: goto label_3848f0;
        case 0x3848f4u: goto label_3848f4;
        case 0x3848f8u: goto label_3848f8;
        case 0x3848fcu: goto label_3848fc;
        case 0x384900u: goto label_384900;
        case 0x384904u: goto label_384904;
        case 0x384908u: goto label_384908;
        case 0x38490cu: goto label_38490c;
        case 0x384910u: goto label_384910;
        case 0x384914u: goto label_384914;
        case 0x384918u: goto label_384918;
        case 0x38491cu: goto label_38491c;
        case 0x384920u: goto label_384920;
        case 0x384924u: goto label_384924;
        case 0x384928u: goto label_384928;
        case 0x38492cu: goto label_38492c;
        case 0x384930u: goto label_384930;
        case 0x384934u: goto label_384934;
        case 0x384938u: goto label_384938;
        case 0x38493cu: goto label_38493c;
        case 0x384940u: goto label_384940;
        case 0x384944u: goto label_384944;
        case 0x384948u: goto label_384948;
        case 0x38494cu: goto label_38494c;
        case 0x384950u: goto label_384950;
        case 0x384954u: goto label_384954;
        case 0x384958u: goto label_384958;
        case 0x38495cu: goto label_38495c;
        case 0x384960u: goto label_384960;
        case 0x384964u: goto label_384964;
        case 0x384968u: goto label_384968;
        case 0x38496cu: goto label_38496c;
        case 0x384970u: goto label_384970;
        case 0x384974u: goto label_384974;
        case 0x384978u: goto label_384978;
        case 0x38497cu: goto label_38497c;
        case 0x384980u: goto label_384980;
        case 0x384984u: goto label_384984;
        case 0x384988u: goto label_384988;
        case 0x38498cu: goto label_38498c;
        case 0x384990u: goto label_384990;
        case 0x384994u: goto label_384994;
        case 0x384998u: goto label_384998;
        case 0x38499cu: goto label_38499c;
        case 0x3849a0u: goto label_3849a0;
        case 0x3849a4u: goto label_3849a4;
        case 0x3849a8u: goto label_3849a8;
        case 0x3849acu: goto label_3849ac;
        case 0x3849b0u: goto label_3849b0;
        case 0x3849b4u: goto label_3849b4;
        case 0x3849b8u: goto label_3849b8;
        case 0x3849bcu: goto label_3849bc;
        case 0x3849c0u: goto label_3849c0;
        case 0x3849c4u: goto label_3849c4;
        case 0x3849c8u: goto label_3849c8;
        case 0x3849ccu: goto label_3849cc;
        case 0x3849d0u: goto label_3849d0;
        case 0x3849d4u: goto label_3849d4;
        case 0x3849d8u: goto label_3849d8;
        case 0x3849dcu: goto label_3849dc;
        case 0x3849e0u: goto label_3849e0;
        case 0x3849e4u: goto label_3849e4;
        case 0x3849e8u: goto label_3849e8;
        case 0x3849ecu: goto label_3849ec;
        case 0x3849f0u: goto label_3849f0;
        case 0x3849f4u: goto label_3849f4;
        case 0x3849f8u: goto label_3849f8;
        case 0x3849fcu: goto label_3849fc;
        case 0x384a00u: goto label_384a00;
        case 0x384a04u: goto label_384a04;
        case 0x384a08u: goto label_384a08;
        case 0x384a0cu: goto label_384a0c;
        case 0x384a10u: goto label_384a10;
        case 0x384a14u: goto label_384a14;
        case 0x384a18u: goto label_384a18;
        case 0x384a1cu: goto label_384a1c;
        case 0x384a20u: goto label_384a20;
        case 0x384a24u: goto label_384a24;
        case 0x384a28u: goto label_384a28;
        case 0x384a2cu: goto label_384a2c;
        case 0x384a30u: goto label_384a30;
        case 0x384a34u: goto label_384a34;
        case 0x384a38u: goto label_384a38;
        case 0x384a3cu: goto label_384a3c;
        case 0x384a40u: goto label_384a40;
        case 0x384a44u: goto label_384a44;
        case 0x384a48u: goto label_384a48;
        case 0x384a4cu: goto label_384a4c;
        case 0x384a50u: goto label_384a50;
        case 0x384a54u: goto label_384a54;
        case 0x384a58u: goto label_384a58;
        case 0x384a5cu: goto label_384a5c;
        case 0x384a60u: goto label_384a60;
        case 0x384a64u: goto label_384a64;
        case 0x384a68u: goto label_384a68;
        case 0x384a6cu: goto label_384a6c;
        case 0x384a70u: goto label_384a70;
        case 0x384a74u: goto label_384a74;
        case 0x384a78u: goto label_384a78;
        case 0x384a7cu: goto label_384a7c;
        case 0x384a80u: goto label_384a80;
        case 0x384a84u: goto label_384a84;
        case 0x384a88u: goto label_384a88;
        case 0x384a8cu: goto label_384a8c;
        case 0x384a90u: goto label_384a90;
        case 0x384a94u: goto label_384a94;
        case 0x384a98u: goto label_384a98;
        case 0x384a9cu: goto label_384a9c;
        case 0x384aa0u: goto label_384aa0;
        case 0x384aa4u: goto label_384aa4;
        case 0x384aa8u: goto label_384aa8;
        case 0x384aacu: goto label_384aac;
        case 0x384ab0u: goto label_384ab0;
        case 0x384ab4u: goto label_384ab4;
        case 0x384ab8u: goto label_384ab8;
        case 0x384abcu: goto label_384abc;
        case 0x384ac0u: goto label_384ac0;
        case 0x384ac4u: goto label_384ac4;
        case 0x384ac8u: goto label_384ac8;
        case 0x384accu: goto label_384acc;
        case 0x384ad0u: goto label_384ad0;
        case 0x384ad4u: goto label_384ad4;
        case 0x384ad8u: goto label_384ad8;
        case 0x384adcu: goto label_384adc;
        case 0x384ae0u: goto label_384ae0;
        case 0x384ae4u: goto label_384ae4;
        case 0x384ae8u: goto label_384ae8;
        case 0x384aecu: goto label_384aec;
        case 0x384af0u: goto label_384af0;
        case 0x384af4u: goto label_384af4;
        case 0x384af8u: goto label_384af8;
        case 0x384afcu: goto label_384afc;
        case 0x384b00u: goto label_384b00;
        case 0x384b04u: goto label_384b04;
        case 0x384b08u: goto label_384b08;
        case 0x384b0cu: goto label_384b0c;
        case 0x384b10u: goto label_384b10;
        case 0x384b14u: goto label_384b14;
        case 0x384b18u: goto label_384b18;
        case 0x384b1cu: goto label_384b1c;
        case 0x384b20u: goto label_384b20;
        case 0x384b24u: goto label_384b24;
        case 0x384b28u: goto label_384b28;
        case 0x384b2cu: goto label_384b2c;
        case 0x384b30u: goto label_384b30;
        case 0x384b34u: goto label_384b34;
        case 0x384b38u: goto label_384b38;
        case 0x384b3cu: goto label_384b3c;
        case 0x384b40u: goto label_384b40;
        case 0x384b44u: goto label_384b44;
        case 0x384b48u: goto label_384b48;
        case 0x384b4cu: goto label_384b4c;
        case 0x384b50u: goto label_384b50;
        case 0x384b54u: goto label_384b54;
        case 0x384b58u: goto label_384b58;
        case 0x384b5cu: goto label_384b5c;
        case 0x384b60u: goto label_384b60;
        case 0x384b64u: goto label_384b64;
        case 0x384b68u: goto label_384b68;
        case 0x384b6cu: goto label_384b6c;
        case 0x384b70u: goto label_384b70;
        case 0x384b74u: goto label_384b74;
        case 0x384b78u: goto label_384b78;
        case 0x384b7cu: goto label_384b7c;
        case 0x384b80u: goto label_384b80;
        case 0x384b84u: goto label_384b84;
        case 0x384b88u: goto label_384b88;
        case 0x384b8cu: goto label_384b8c;
        case 0x384b90u: goto label_384b90;
        case 0x384b94u: goto label_384b94;
        case 0x384b98u: goto label_384b98;
        case 0x384b9cu: goto label_384b9c;
        case 0x384ba0u: goto label_384ba0;
        case 0x384ba4u: goto label_384ba4;
        case 0x384ba8u: goto label_384ba8;
        case 0x384bacu: goto label_384bac;
        case 0x384bb0u: goto label_384bb0;
        case 0x384bb4u: goto label_384bb4;
        case 0x384bb8u: goto label_384bb8;
        case 0x384bbcu: goto label_384bbc;
        case 0x384bc0u: goto label_384bc0;
        case 0x384bc4u: goto label_384bc4;
        case 0x384bc8u: goto label_384bc8;
        case 0x384bccu: goto label_384bcc;
        case 0x384bd0u: goto label_384bd0;
        case 0x384bd4u: goto label_384bd4;
        case 0x384bd8u: goto label_384bd8;
        case 0x384bdcu: goto label_384bdc;
        case 0x384be0u: goto label_384be0;
        case 0x384be4u: goto label_384be4;
        case 0x384be8u: goto label_384be8;
        case 0x384becu: goto label_384bec;
        case 0x384bf0u: goto label_384bf0;
        case 0x384bf4u: goto label_384bf4;
        case 0x384bf8u: goto label_384bf8;
        case 0x384bfcu: goto label_384bfc;
        case 0x384c00u: goto label_384c00;
        case 0x384c04u: goto label_384c04;
        case 0x384c08u: goto label_384c08;
        case 0x384c0cu: goto label_384c0c;
        case 0x384c10u: goto label_384c10;
        case 0x384c14u: goto label_384c14;
        case 0x384c18u: goto label_384c18;
        case 0x384c1cu: goto label_384c1c;
        case 0x384c20u: goto label_384c20;
        case 0x384c24u: goto label_384c24;
        case 0x384c28u: goto label_384c28;
        case 0x384c2cu: goto label_384c2c;
        case 0x384c30u: goto label_384c30;
        case 0x384c34u: goto label_384c34;
        case 0x384c38u: goto label_384c38;
        case 0x384c3cu: goto label_384c3c;
        case 0x384c40u: goto label_384c40;
        case 0x384c44u: goto label_384c44;
        case 0x384c48u: goto label_384c48;
        case 0x384c4cu: goto label_384c4c;
        case 0x384c50u: goto label_384c50;
        case 0x384c54u: goto label_384c54;
        case 0x384c58u: goto label_384c58;
        case 0x384c5cu: goto label_384c5c;
        case 0x384c60u: goto label_384c60;
        case 0x384c64u: goto label_384c64;
        case 0x384c68u: goto label_384c68;
        case 0x384c6cu: goto label_384c6c;
        case 0x384c70u: goto label_384c70;
        case 0x384c74u: goto label_384c74;
        case 0x384c78u: goto label_384c78;
        case 0x384c7cu: goto label_384c7c;
        case 0x384c80u: goto label_384c80;
        case 0x384c84u: goto label_384c84;
        case 0x384c88u: goto label_384c88;
        case 0x384c8cu: goto label_384c8c;
        case 0x384c90u: goto label_384c90;
        case 0x384c94u: goto label_384c94;
        case 0x384c98u: goto label_384c98;
        case 0x384c9cu: goto label_384c9c;
        case 0x384ca0u: goto label_384ca0;
        case 0x384ca4u: goto label_384ca4;
        case 0x384ca8u: goto label_384ca8;
        case 0x384cacu: goto label_384cac;
        case 0x384cb0u: goto label_384cb0;
        case 0x384cb4u: goto label_384cb4;
        case 0x384cb8u: goto label_384cb8;
        case 0x384cbcu: goto label_384cbc;
        case 0x384cc0u: goto label_384cc0;
        case 0x384cc4u: goto label_384cc4;
        case 0x384cc8u: goto label_384cc8;
        case 0x384cccu: goto label_384ccc;
        case 0x384cd0u: goto label_384cd0;
        case 0x384cd4u: goto label_384cd4;
        case 0x384cd8u: goto label_384cd8;
        case 0x384cdcu: goto label_384cdc;
        case 0x384ce0u: goto label_384ce0;
        case 0x384ce4u: goto label_384ce4;
        case 0x384ce8u: goto label_384ce8;
        case 0x384cecu: goto label_384cec;
        case 0x384cf0u: goto label_384cf0;
        case 0x384cf4u: goto label_384cf4;
        case 0x384cf8u: goto label_384cf8;
        case 0x384cfcu: goto label_384cfc;
        case 0x384d00u: goto label_384d00;
        case 0x384d04u: goto label_384d04;
        case 0x384d08u: goto label_384d08;
        case 0x384d0cu: goto label_384d0c;
        case 0x384d10u: goto label_384d10;
        case 0x384d14u: goto label_384d14;
        case 0x384d18u: goto label_384d18;
        case 0x384d1cu: goto label_384d1c;
        case 0x384d20u: goto label_384d20;
        case 0x384d24u: goto label_384d24;
        case 0x384d28u: goto label_384d28;
        case 0x384d2cu: goto label_384d2c;
        case 0x384d30u: goto label_384d30;
        case 0x384d34u: goto label_384d34;
        case 0x384d38u: goto label_384d38;
        case 0x384d3cu: goto label_384d3c;
        case 0x384d40u: goto label_384d40;
        case 0x384d44u: goto label_384d44;
        case 0x384d48u: goto label_384d48;
        case 0x384d4cu: goto label_384d4c;
        case 0x384d50u: goto label_384d50;
        case 0x384d54u: goto label_384d54;
        case 0x384d58u: goto label_384d58;
        case 0x384d5cu: goto label_384d5c;
        case 0x384d60u: goto label_384d60;
        case 0x384d64u: goto label_384d64;
        case 0x384d68u: goto label_384d68;
        case 0x384d6cu: goto label_384d6c;
        case 0x384d70u: goto label_384d70;
        case 0x384d74u: goto label_384d74;
        case 0x384d78u: goto label_384d78;
        case 0x384d7cu: goto label_384d7c;
        case 0x384d80u: goto label_384d80;
        case 0x384d84u: goto label_384d84;
        case 0x384d88u: goto label_384d88;
        case 0x384d8cu: goto label_384d8c;
        case 0x384d90u: goto label_384d90;
        case 0x384d94u: goto label_384d94;
        case 0x384d98u: goto label_384d98;
        case 0x384d9cu: goto label_384d9c;
        case 0x384da0u: goto label_384da0;
        case 0x384da4u: goto label_384da4;
        case 0x384da8u: goto label_384da8;
        case 0x384dacu: goto label_384dac;
        case 0x384db0u: goto label_384db0;
        case 0x384db4u: goto label_384db4;
        case 0x384db8u: goto label_384db8;
        case 0x384dbcu: goto label_384dbc;
        case 0x384dc0u: goto label_384dc0;
        case 0x384dc4u: goto label_384dc4;
        case 0x384dc8u: goto label_384dc8;
        case 0x384dccu: goto label_384dcc;
        case 0x384dd0u: goto label_384dd0;
        case 0x384dd4u: goto label_384dd4;
        case 0x384dd8u: goto label_384dd8;
        case 0x384ddcu: goto label_384ddc;
        case 0x384de0u: goto label_384de0;
        case 0x384de4u: goto label_384de4;
        case 0x384de8u: goto label_384de8;
        case 0x384decu: goto label_384dec;
        case 0x384df0u: goto label_384df0;
        case 0x384df4u: goto label_384df4;
        case 0x384df8u: goto label_384df8;
        case 0x384dfcu: goto label_384dfc;
        case 0x384e00u: goto label_384e00;
        case 0x384e04u: goto label_384e04;
        case 0x384e08u: goto label_384e08;
        case 0x384e0cu: goto label_384e0c;
        case 0x384e10u: goto label_384e10;
        case 0x384e14u: goto label_384e14;
        case 0x384e18u: goto label_384e18;
        case 0x384e1cu: goto label_384e1c;
        case 0x384e20u: goto label_384e20;
        case 0x384e24u: goto label_384e24;
        case 0x384e28u: goto label_384e28;
        case 0x384e2cu: goto label_384e2c;
        case 0x384e30u: goto label_384e30;
        case 0x384e34u: goto label_384e34;
        case 0x384e38u: goto label_384e38;
        case 0x384e3cu: goto label_384e3c;
        case 0x384e40u: goto label_384e40;
        case 0x384e44u: goto label_384e44;
        case 0x384e48u: goto label_384e48;
        case 0x384e4cu: goto label_384e4c;
        case 0x384e50u: goto label_384e50;
        case 0x384e54u: goto label_384e54;
        case 0x384e58u: goto label_384e58;
        case 0x384e5cu: goto label_384e5c;
        case 0x384e60u: goto label_384e60;
        case 0x384e64u: goto label_384e64;
        case 0x384e68u: goto label_384e68;
        case 0x384e6cu: goto label_384e6c;
        case 0x384e70u: goto label_384e70;
        case 0x384e74u: goto label_384e74;
        case 0x384e78u: goto label_384e78;
        case 0x384e7cu: goto label_384e7c;
        case 0x384e80u: goto label_384e80;
        case 0x384e84u: goto label_384e84;
        case 0x384e88u: goto label_384e88;
        case 0x384e8cu: goto label_384e8c;
        case 0x384e90u: goto label_384e90;
        case 0x384e94u: goto label_384e94;
        case 0x384e98u: goto label_384e98;
        case 0x384e9cu: goto label_384e9c;
        case 0x384ea0u: goto label_384ea0;
        case 0x384ea4u: goto label_384ea4;
        case 0x384ea8u: goto label_384ea8;
        case 0x384eacu: goto label_384eac;
        case 0x384eb0u: goto label_384eb0;
        case 0x384eb4u: goto label_384eb4;
        case 0x384eb8u: goto label_384eb8;
        case 0x384ebcu: goto label_384ebc;
        case 0x384ec0u: goto label_384ec0;
        case 0x384ec4u: goto label_384ec4;
        case 0x384ec8u: goto label_384ec8;
        case 0x384eccu: goto label_384ecc;
        case 0x384ed0u: goto label_384ed0;
        case 0x384ed4u: goto label_384ed4;
        case 0x384ed8u: goto label_384ed8;
        case 0x384edcu: goto label_384edc;
        case 0x384ee0u: goto label_384ee0;
        case 0x384ee4u: goto label_384ee4;
        case 0x384ee8u: goto label_384ee8;
        case 0x384eecu: goto label_384eec;
        case 0x384ef0u: goto label_384ef0;
        case 0x384ef4u: goto label_384ef4;
        case 0x384ef8u: goto label_384ef8;
        case 0x384efcu: goto label_384efc;
        case 0x384f00u: goto label_384f00;
        case 0x384f04u: goto label_384f04;
        case 0x384f08u: goto label_384f08;
        case 0x384f0cu: goto label_384f0c;
        case 0x384f10u: goto label_384f10;
        case 0x384f14u: goto label_384f14;
        case 0x384f18u: goto label_384f18;
        case 0x384f1cu: goto label_384f1c;
        case 0x384f20u: goto label_384f20;
        case 0x384f24u: goto label_384f24;
        case 0x384f28u: goto label_384f28;
        case 0x384f2cu: goto label_384f2c;
        case 0x384f30u: goto label_384f30;
        case 0x384f34u: goto label_384f34;
        case 0x384f38u: goto label_384f38;
        case 0x384f3cu: goto label_384f3c;
        case 0x384f40u: goto label_384f40;
        case 0x384f44u: goto label_384f44;
        case 0x384f48u: goto label_384f48;
        case 0x384f4cu: goto label_384f4c;
        case 0x384f50u: goto label_384f50;
        case 0x384f54u: goto label_384f54;
        case 0x384f58u: goto label_384f58;
        case 0x384f5cu: goto label_384f5c;
        case 0x384f60u: goto label_384f60;
        case 0x384f64u: goto label_384f64;
        case 0x384f68u: goto label_384f68;
        case 0x384f6cu: goto label_384f6c;
        case 0x384f70u: goto label_384f70;
        case 0x384f74u: goto label_384f74;
        case 0x384f78u: goto label_384f78;
        case 0x384f7cu: goto label_384f7c;
        case 0x384f80u: goto label_384f80;
        case 0x384f84u: goto label_384f84;
        case 0x384f88u: goto label_384f88;
        case 0x384f8cu: goto label_384f8c;
        case 0x384f90u: goto label_384f90;
        case 0x384f94u: goto label_384f94;
        case 0x384f98u: goto label_384f98;
        case 0x384f9cu: goto label_384f9c;
        case 0x384fa0u: goto label_384fa0;
        case 0x384fa4u: goto label_384fa4;
        case 0x384fa8u: goto label_384fa8;
        case 0x384facu: goto label_384fac;
        case 0x384fb0u: goto label_384fb0;
        case 0x384fb4u: goto label_384fb4;
        case 0x384fb8u: goto label_384fb8;
        case 0x384fbcu: goto label_384fbc;
        case 0x384fc0u: goto label_384fc0;
        case 0x384fc4u: goto label_384fc4;
        case 0x384fc8u: goto label_384fc8;
        case 0x384fccu: goto label_384fcc;
        case 0x384fd0u: goto label_384fd0;
        case 0x384fd4u: goto label_384fd4;
        case 0x384fd8u: goto label_384fd8;
        case 0x384fdcu: goto label_384fdc;
        case 0x384fe0u: goto label_384fe0;
        case 0x384fe4u: goto label_384fe4;
        case 0x384fe8u: goto label_384fe8;
        case 0x384fecu: goto label_384fec;
        case 0x384ff0u: goto label_384ff0;
        case 0x384ff4u: goto label_384ff4;
        case 0x384ff8u: goto label_384ff8;
        case 0x384ffcu: goto label_384ffc;
        case 0x385000u: goto label_385000;
        case 0x385004u: goto label_385004;
        case 0x385008u: goto label_385008;
        case 0x38500cu: goto label_38500c;
        case 0x385010u: goto label_385010;
        case 0x385014u: goto label_385014;
        case 0x385018u: goto label_385018;
        case 0x38501cu: goto label_38501c;
        case 0x385020u: goto label_385020;
        case 0x385024u: goto label_385024;
        case 0x385028u: goto label_385028;
        case 0x38502cu: goto label_38502c;
        case 0x385030u: goto label_385030;
        case 0x385034u: goto label_385034;
        case 0x385038u: goto label_385038;
        case 0x38503cu: goto label_38503c;
        case 0x385040u: goto label_385040;
        case 0x385044u: goto label_385044;
        case 0x385048u: goto label_385048;
        case 0x38504cu: goto label_38504c;
        case 0x385050u: goto label_385050;
        case 0x385054u: goto label_385054;
        case 0x385058u: goto label_385058;
        case 0x38505cu: goto label_38505c;
        case 0x385060u: goto label_385060;
        case 0x385064u: goto label_385064;
        case 0x385068u: goto label_385068;
        case 0x38506cu: goto label_38506c;
        case 0x385070u: goto label_385070;
        case 0x385074u: goto label_385074;
        case 0x385078u: goto label_385078;
        case 0x38507cu: goto label_38507c;
        case 0x385080u: goto label_385080;
        case 0x385084u: goto label_385084;
        case 0x385088u: goto label_385088;
        case 0x38508cu: goto label_38508c;
        case 0x385090u: goto label_385090;
        case 0x385094u: goto label_385094;
        case 0x385098u: goto label_385098;
        case 0x38509cu: goto label_38509c;
        case 0x3850a0u: goto label_3850a0;
        case 0x3850a4u: goto label_3850a4;
        case 0x3850a8u: goto label_3850a8;
        case 0x3850acu: goto label_3850ac;
        case 0x3850b0u: goto label_3850b0;
        case 0x3850b4u: goto label_3850b4;
        case 0x3850b8u: goto label_3850b8;
        case 0x3850bcu: goto label_3850bc;
        case 0x3850c0u: goto label_3850c0;
        case 0x3850c4u: goto label_3850c4;
        case 0x3850c8u: goto label_3850c8;
        case 0x3850ccu: goto label_3850cc;
        case 0x3850d0u: goto label_3850d0;
        case 0x3850d4u: goto label_3850d4;
        case 0x3850d8u: goto label_3850d8;
        case 0x3850dcu: goto label_3850dc;
        case 0x3850e0u: goto label_3850e0;
        case 0x3850e4u: goto label_3850e4;
        case 0x3850e8u: goto label_3850e8;
        case 0x3850ecu: goto label_3850ec;
        case 0x3850f0u: goto label_3850f0;
        case 0x3850f4u: goto label_3850f4;
        case 0x3850f8u: goto label_3850f8;
        case 0x3850fcu: goto label_3850fc;
        case 0x385100u: goto label_385100;
        case 0x385104u: goto label_385104;
        case 0x385108u: goto label_385108;
        case 0x38510cu: goto label_38510c;
        case 0x385110u: goto label_385110;
        case 0x385114u: goto label_385114;
        case 0x385118u: goto label_385118;
        case 0x38511cu: goto label_38511c;
        case 0x385120u: goto label_385120;
        case 0x385124u: goto label_385124;
        case 0x385128u: goto label_385128;
        case 0x38512cu: goto label_38512c;
        case 0x385130u: goto label_385130;
        case 0x385134u: goto label_385134;
        case 0x385138u: goto label_385138;
        case 0x38513cu: goto label_38513c;
        case 0x385140u: goto label_385140;
        case 0x385144u: goto label_385144;
        case 0x385148u: goto label_385148;
        case 0x38514cu: goto label_38514c;
        case 0x385150u: goto label_385150;
        case 0x385154u: goto label_385154;
        case 0x385158u: goto label_385158;
        case 0x38515cu: goto label_38515c;
        case 0x385160u: goto label_385160;
        case 0x385164u: goto label_385164;
        case 0x385168u: goto label_385168;
        case 0x38516cu: goto label_38516c;
        case 0x385170u: goto label_385170;
        case 0x385174u: goto label_385174;
        case 0x385178u: goto label_385178;
        case 0x38517cu: goto label_38517c;
        case 0x385180u: goto label_385180;
        case 0x385184u: goto label_385184;
        case 0x385188u: goto label_385188;
        case 0x38518cu: goto label_38518c;
        case 0x385190u: goto label_385190;
        case 0x385194u: goto label_385194;
        case 0x385198u: goto label_385198;
        case 0x38519cu: goto label_38519c;
        case 0x3851a0u: goto label_3851a0;
        case 0x3851a4u: goto label_3851a4;
        case 0x3851a8u: goto label_3851a8;
        case 0x3851acu: goto label_3851ac;
        case 0x3851b0u: goto label_3851b0;
        case 0x3851b4u: goto label_3851b4;
        case 0x3851b8u: goto label_3851b8;
        case 0x3851bcu: goto label_3851bc;
        case 0x3851c0u: goto label_3851c0;
        case 0x3851c4u: goto label_3851c4;
        case 0x3851c8u: goto label_3851c8;
        case 0x3851ccu: goto label_3851cc;
        default: break;
    }

    ctx->pc = 0x384190u;

label_384190:
    // 0x384190: 0x0  nop
    ctx->pc = 0x384190u;
    // NOP
label_384194:
    // 0x384194: 0x0  nop
    ctx->pc = 0x384194u;
    // NOP
label_384198:
    // 0x384198: 0x0  nop
    ctx->pc = 0x384198u;
    // NOP
label_38419c:
    // 0x38419c: 0x0  nop
    ctx->pc = 0x38419cu;
    // NOP
label_3841a0:
    // 0x3841a0: 0x0  nop
    ctx->pc = 0x3841a0u;
    // NOP
label_3841a4:
    // 0x3841a4: 0x0  nop
    ctx->pc = 0x3841a4u;
    // NOP
label_3841a8:
    // 0x3841a8: 0x0  nop
    ctx->pc = 0x3841a8u;
    // NOP
label_3841ac:
    // 0x3841ac: 0x0  nop
    ctx->pc = 0x3841acu;
    // NOP
label_3841b0:
    // 0x3841b0: 0x0  nop
    ctx->pc = 0x3841b0u;
    // NOP
label_3841b4:
    // 0x3841b4: 0x0  nop
    ctx->pc = 0x3841b4u;
    // NOP
label_3841b8:
    // 0x3841b8: 0x0  nop
    ctx->pc = 0x3841b8u;
    // NOP
label_3841bc:
    // 0x3841bc: 0x0  nop
    ctx->pc = 0x3841bcu;
    // NOP
label_3841c0:
    // 0x3841c0: 0x0  nop
    ctx->pc = 0x3841c0u;
    // NOP
label_3841c4:
    // 0x3841c4: 0x0  nop
    ctx->pc = 0x3841c4u;
    // NOP
label_3841c8:
    // 0x3841c8: 0x0  nop
    ctx->pc = 0x3841c8u;
    // NOP
label_3841cc:
    // 0x3841cc: 0x0  nop
    ctx->pc = 0x3841ccu;
    // NOP
label_3841d0:
    // 0x3841d0: 0x0  nop
    ctx->pc = 0x3841d0u;
    // NOP
label_3841d4:
    // 0x3841d4: 0x0  nop
    ctx->pc = 0x3841d4u;
    // NOP
label_3841d8:
    // 0x3841d8: 0x0  nop
    ctx->pc = 0x3841d8u;
    // NOP
label_3841dc:
    // 0x3841dc: 0x0  nop
    ctx->pc = 0x3841dcu;
    // NOP
label_3841e0:
    // 0x3841e0: 0x0  nop
    ctx->pc = 0x3841e0u;
    // NOP
label_3841e4:
    // 0x3841e4: 0x0  nop
    ctx->pc = 0x3841e4u;
    // NOP
label_3841e8:
    // 0x3841e8: 0x0  nop
    ctx->pc = 0x3841e8u;
    // NOP
label_3841ec:
    // 0x3841ec: 0x0  nop
    ctx->pc = 0x3841ecu;
    // NOP
label_3841f0:
    // 0x3841f0: 0x0  nop
    ctx->pc = 0x3841f0u;
    // NOP
label_3841f4:
    // 0x3841f4: 0x0  nop
    ctx->pc = 0x3841f4u;
    // NOP
label_3841f8:
    // 0x3841f8: 0x0  nop
    ctx->pc = 0x3841f8u;
    // NOP
label_3841fc:
    // 0x3841fc: 0x0  nop
    ctx->pc = 0x3841fcu;
    // NOP
label_384200:
    // 0x384200: 0x0  nop
    ctx->pc = 0x384200u;
    // NOP
label_384204:
    // 0x384204: 0x0  nop
    ctx->pc = 0x384204u;
    // NOP
label_384208:
    // 0x384208: 0x0  nop
    ctx->pc = 0x384208u;
    // NOP
label_38420c:
    // 0x38420c: 0x0  nop
    ctx->pc = 0x38420cu;
    // NOP
label_384210:
    // 0x384210: 0x0  nop
    ctx->pc = 0x384210u;
    // NOP
label_384214:
    // 0x384214: 0x0  nop
    ctx->pc = 0x384214u;
    // NOP
label_384218:
    // 0x384218: 0x0  nop
    ctx->pc = 0x384218u;
    // NOP
label_38421c:
    // 0x38421c: 0x0  nop
    ctx->pc = 0x38421cu;
    // NOP
label_384220:
    // 0x384220: 0x0  nop
    ctx->pc = 0x384220u;
    // NOP
label_384224:
    // 0x384224: 0x0  nop
    ctx->pc = 0x384224u;
    // NOP
label_384228:
    // 0x384228: 0x0  nop
    ctx->pc = 0x384228u;
    // NOP
label_38422c:
    // 0x38422c: 0x0  nop
    ctx->pc = 0x38422cu;
    // NOP
label_384230:
    // 0x384230: 0x0  nop
    ctx->pc = 0x384230u;
    // NOP
label_384234:
    // 0x384234: 0x0  nop
    ctx->pc = 0x384234u;
    // NOP
label_384238:
    // 0x384238: 0x0  nop
    ctx->pc = 0x384238u;
    // NOP
label_38423c:
    // 0x38423c: 0x0  nop
    ctx->pc = 0x38423cu;
    // NOP
label_384240:
    // 0x384240: 0x0  nop
    ctx->pc = 0x384240u;
    // NOP
label_384244:
    // 0x384244: 0x0  nop
    ctx->pc = 0x384244u;
    // NOP
label_384248:
    // 0x384248: 0x0  nop
    ctx->pc = 0x384248u;
    // NOP
label_38424c:
    // 0x38424c: 0x0  nop
    ctx->pc = 0x38424cu;
    // NOP
label_384250:
    // 0x384250: 0x0  nop
    ctx->pc = 0x384250u;
    // NOP
label_384254:
    // 0x384254: 0x0  nop
    ctx->pc = 0x384254u;
    // NOP
label_384258:
    // 0x384258: 0x0  nop
    ctx->pc = 0x384258u;
    // NOP
label_38425c:
    // 0x38425c: 0x0  nop
    ctx->pc = 0x38425cu;
    // NOP
label_384260:
    // 0x384260: 0x0  nop
    ctx->pc = 0x384260u;
    // NOP
label_384264:
    // 0x384264: 0x0  nop
    ctx->pc = 0x384264u;
    // NOP
label_384268:
    // 0x384268: 0x0  nop
    ctx->pc = 0x384268u;
    // NOP
label_38426c:
    // 0x38426c: 0x0  nop
    ctx->pc = 0x38426cu;
    // NOP
label_384270:
    // 0x384270: 0x0  nop
    ctx->pc = 0x384270u;
    // NOP
label_384274:
    // 0x384274: 0x0  nop
    ctx->pc = 0x384274u;
    // NOP
label_384278:
    // 0x384278: 0x0  nop
    ctx->pc = 0x384278u;
    // NOP
label_38427c:
    // 0x38427c: 0x0  nop
    ctx->pc = 0x38427cu;
    // NOP
label_384280:
    // 0x384280: 0x0  nop
    ctx->pc = 0x384280u;
    // NOP
label_384284:
    // 0x384284: 0x0  nop
    ctx->pc = 0x384284u;
    // NOP
label_384288:
    // 0x384288: 0x0  nop
    ctx->pc = 0x384288u;
    // NOP
label_38428c:
    // 0x38428c: 0x0  nop
    ctx->pc = 0x38428cu;
    // NOP
label_384290:
    // 0x384290: 0x0  nop
    ctx->pc = 0x384290u;
    // NOP
label_384294:
    // 0x384294: 0x0  nop
    ctx->pc = 0x384294u;
    // NOP
label_384298:
    // 0x384298: 0x0  nop
    ctx->pc = 0x384298u;
    // NOP
label_38429c:
    // 0x38429c: 0x0  nop
    ctx->pc = 0x38429cu;
    // NOP
label_3842a0:
    // 0x3842a0: 0x0  nop
    ctx->pc = 0x3842a0u;
    // NOP
label_3842a4:
    // 0x3842a4: 0x0  nop
    ctx->pc = 0x3842a4u;
    // NOP
label_3842a8:
    // 0x3842a8: 0x0  nop
    ctx->pc = 0x3842a8u;
    // NOP
label_3842ac:
    // 0x3842ac: 0x0  nop
    ctx->pc = 0x3842acu;
    // NOP
label_3842b0:
    // 0x3842b0: 0x0  nop
    ctx->pc = 0x3842b0u;
    // NOP
label_3842b4:
    // 0x3842b4: 0x0  nop
    ctx->pc = 0x3842b4u;
    // NOP
label_3842b8:
    // 0x3842b8: 0x0  nop
    ctx->pc = 0x3842b8u;
    // NOP
label_3842bc:
    // 0x3842bc: 0x0  nop
    ctx->pc = 0x3842bcu;
    // NOP
label_3842c0:
    // 0x3842c0: 0x0  nop
    ctx->pc = 0x3842c0u;
    // NOP
label_3842c4:
    // 0x3842c4: 0x0  nop
    ctx->pc = 0x3842c4u;
    // NOP
label_3842c8:
    // 0x3842c8: 0x0  nop
    ctx->pc = 0x3842c8u;
    // NOP
label_3842cc:
    // 0x3842cc: 0x0  nop
    ctx->pc = 0x3842ccu;
    // NOP
label_3842d0:
    // 0x3842d0: 0x0  nop
    ctx->pc = 0x3842d0u;
    // NOP
label_3842d4:
    // 0x3842d4: 0x0  nop
    ctx->pc = 0x3842d4u;
    // NOP
label_3842d8:
    // 0x3842d8: 0x0  nop
    ctx->pc = 0x3842d8u;
    // NOP
label_3842dc:
    // 0x3842dc: 0x0  nop
    ctx->pc = 0x3842dcu;
    // NOP
label_3842e0:
    // 0x3842e0: 0x0  nop
    ctx->pc = 0x3842e0u;
    // NOP
label_3842e4:
    // 0x3842e4: 0x0  nop
    ctx->pc = 0x3842e4u;
    // NOP
label_3842e8:
    // 0x3842e8: 0x0  nop
    ctx->pc = 0x3842e8u;
    // NOP
label_3842ec:
    // 0x3842ec: 0x0  nop
    ctx->pc = 0x3842ecu;
    // NOP
label_3842f0:
    // 0x3842f0: 0x0  nop
    ctx->pc = 0x3842f0u;
    // NOP
label_3842f4:
    // 0x3842f4: 0x0  nop
    ctx->pc = 0x3842f4u;
    // NOP
label_3842f8:
    // 0x3842f8: 0x0  nop
    ctx->pc = 0x3842f8u;
    // NOP
label_3842fc:
    // 0x3842fc: 0x0  nop
    ctx->pc = 0x3842fcu;
    // NOP
label_384300:
    // 0x384300: 0x0  nop
    ctx->pc = 0x384300u;
    // NOP
label_384304:
    // 0x384304: 0x0  nop
    ctx->pc = 0x384304u;
    // NOP
label_384308:
    // 0x384308: 0x0  nop
    ctx->pc = 0x384308u;
    // NOP
label_38430c:
    // 0x38430c: 0x0  nop
    ctx->pc = 0x38430cu;
    // NOP
label_384310:
    // 0x384310: 0x0  nop
    ctx->pc = 0x384310u;
    // NOP
label_384314:
    // 0x384314: 0x0  nop
    ctx->pc = 0x384314u;
    // NOP
label_384318:
    // 0x384318: 0x0  nop
    ctx->pc = 0x384318u;
    // NOP
label_38431c:
    // 0x38431c: 0x0  nop
    ctx->pc = 0x38431cu;
    // NOP
label_384320:
    // 0x384320: 0x0  nop
    ctx->pc = 0x384320u;
    // NOP
label_384324:
    // 0x384324: 0x0  nop
    ctx->pc = 0x384324u;
    // NOP
label_384328:
    // 0x384328: 0x0  nop
    ctx->pc = 0x384328u;
    // NOP
label_38432c:
    // 0x38432c: 0x0  nop
    ctx->pc = 0x38432cu;
    // NOP
label_384330:
    // 0x384330: 0x0  nop
    ctx->pc = 0x384330u;
    // NOP
label_384334:
    // 0x384334: 0x0  nop
    ctx->pc = 0x384334u;
    // NOP
label_384338:
    // 0x384338: 0x0  nop
    ctx->pc = 0x384338u;
    // NOP
label_38433c:
    // 0x38433c: 0x0  nop
    ctx->pc = 0x38433cu;
    // NOP
label_384340:
    // 0x384340: 0x0  nop
    ctx->pc = 0x384340u;
    // NOP
label_384344:
    // 0x384344: 0x0  nop
    ctx->pc = 0x384344u;
    // NOP
label_384348:
    // 0x384348: 0x0  nop
    ctx->pc = 0x384348u;
    // NOP
label_38434c:
    // 0x38434c: 0x0  nop
    ctx->pc = 0x38434cu;
    // NOP
label_384350:
    // 0x384350: 0x0  nop
    ctx->pc = 0x384350u;
    // NOP
label_384354:
    // 0x384354: 0x0  nop
    ctx->pc = 0x384354u;
    // NOP
label_384358:
    // 0x384358: 0x0  nop
    ctx->pc = 0x384358u;
    // NOP
label_38435c:
    // 0x38435c: 0x0  nop
    ctx->pc = 0x38435cu;
    // NOP
label_384360:
    // 0x384360: 0x0  nop
    ctx->pc = 0x384360u;
    // NOP
label_384364:
    // 0x384364: 0x0  nop
    ctx->pc = 0x384364u;
    // NOP
label_384368:
    // 0x384368: 0x0  nop
    ctx->pc = 0x384368u;
    // NOP
label_38436c:
    // 0x38436c: 0x0  nop
    ctx->pc = 0x38436cu;
    // NOP
label_384370:
    // 0x384370: 0x0  nop
    ctx->pc = 0x384370u;
    // NOP
label_384374:
    // 0x384374: 0x0  nop
    ctx->pc = 0x384374u;
    // NOP
label_384378:
    // 0x384378: 0x0  nop
    ctx->pc = 0x384378u;
    // NOP
label_38437c:
    // 0x38437c: 0x0  nop
    ctx->pc = 0x38437cu;
    // NOP
label_384380:
    // 0x384380: 0x0  nop
    ctx->pc = 0x384380u;
    // NOP
label_384384:
    // 0x384384: 0x0  nop
    ctx->pc = 0x384384u;
    // NOP
label_384388:
    // 0x384388: 0x0  nop
    ctx->pc = 0x384388u;
    // NOP
label_38438c:
    // 0x38438c: 0x0  nop
    ctx->pc = 0x38438cu;
    // NOP
label_384390:
    // 0x384390: 0x0  nop
    ctx->pc = 0x384390u;
    // NOP
label_384394:
    // 0x384394: 0x0  nop
    ctx->pc = 0x384394u;
    // NOP
label_384398:
    // 0x384398: 0x0  nop
    ctx->pc = 0x384398u;
    // NOP
label_38439c:
    // 0x38439c: 0x0  nop
    ctx->pc = 0x38439cu;
    // NOP
label_3843a0:
    // 0x3843a0: 0x0  nop
    ctx->pc = 0x3843a0u;
    // NOP
label_3843a4:
    // 0x3843a4: 0x0  nop
    ctx->pc = 0x3843a4u;
    // NOP
label_3843a8:
    // 0x3843a8: 0x0  nop
    ctx->pc = 0x3843a8u;
    // NOP
label_3843ac:
    // 0x3843ac: 0x0  nop
    ctx->pc = 0x3843acu;
    // NOP
label_3843b0:
    // 0x3843b0: 0x0  nop
    ctx->pc = 0x3843b0u;
    // NOP
label_3843b4:
    // 0x3843b4: 0x0  nop
    ctx->pc = 0x3843b4u;
    // NOP
label_3843b8:
    // 0x3843b8: 0x0  nop
    ctx->pc = 0x3843b8u;
    // NOP
label_3843bc:
    // 0x3843bc: 0x0  nop
    ctx->pc = 0x3843bcu;
    // NOP
label_3843c0:
    // 0x3843c0: 0x0  nop
    ctx->pc = 0x3843c0u;
    // NOP
label_3843c4:
    // 0x3843c4: 0x0  nop
    ctx->pc = 0x3843c4u;
    // NOP
label_3843c8:
    // 0x3843c8: 0x0  nop
    ctx->pc = 0x3843c8u;
    // NOP
label_3843cc:
    // 0x3843cc: 0x0  nop
    ctx->pc = 0x3843ccu;
    // NOP
label_3843d0:
    // 0x3843d0: 0x0  nop
    ctx->pc = 0x3843d0u;
    // NOP
label_3843d4:
    // 0x3843d4: 0x0  nop
    ctx->pc = 0x3843d4u;
    // NOP
label_3843d8:
    // 0x3843d8: 0x0  nop
    ctx->pc = 0x3843d8u;
    // NOP
label_3843dc:
    // 0x3843dc: 0x0  nop
    ctx->pc = 0x3843dcu;
    // NOP
label_3843e0:
    // 0x3843e0: 0x0  nop
    ctx->pc = 0x3843e0u;
    // NOP
label_3843e4:
    // 0x3843e4: 0x0  nop
    ctx->pc = 0x3843e4u;
    // NOP
label_3843e8:
    // 0x3843e8: 0x0  nop
    ctx->pc = 0x3843e8u;
    // NOP
label_3843ec:
    // 0x3843ec: 0x0  nop
    ctx->pc = 0x3843ecu;
    // NOP
label_3843f0:
    // 0x3843f0: 0x0  nop
    ctx->pc = 0x3843f0u;
    // NOP
label_3843f4:
    // 0x3843f4: 0x0  nop
    ctx->pc = 0x3843f4u;
    // NOP
label_3843f8:
    // 0x3843f8: 0x0  nop
    ctx->pc = 0x3843f8u;
    // NOP
label_3843fc:
    // 0x3843fc: 0x0  nop
    ctx->pc = 0x3843fcu;
    // NOP
label_384400:
    // 0x384400: 0x0  nop
    ctx->pc = 0x384400u;
    // NOP
label_384404:
    // 0x384404: 0x0  nop
    ctx->pc = 0x384404u;
    // NOP
label_384408:
    // 0x384408: 0x0  nop
    ctx->pc = 0x384408u;
    // NOP
label_38440c:
    // 0x38440c: 0x0  nop
    ctx->pc = 0x38440cu;
    // NOP
label_384410:
    // 0x384410: 0x0  nop
    ctx->pc = 0x384410u;
    // NOP
label_384414:
    // 0x384414: 0x0  nop
    ctx->pc = 0x384414u;
    // NOP
label_384418:
    // 0x384418: 0x0  nop
    ctx->pc = 0x384418u;
    // NOP
label_38441c:
    // 0x38441c: 0x0  nop
    ctx->pc = 0x38441cu;
    // NOP
label_384420:
    // 0x384420: 0x0  nop
    ctx->pc = 0x384420u;
    // NOP
label_384424:
    // 0x384424: 0x0  nop
    ctx->pc = 0x384424u;
    // NOP
label_384428:
    // 0x384428: 0x0  nop
    ctx->pc = 0x384428u;
    // NOP
label_38442c:
    // 0x38442c: 0x0  nop
    ctx->pc = 0x38442cu;
    // NOP
label_384430:
    // 0x384430: 0x0  nop
    ctx->pc = 0x384430u;
    // NOP
label_384434:
    // 0x384434: 0x0  nop
    ctx->pc = 0x384434u;
    // NOP
label_384438:
    // 0x384438: 0x0  nop
    ctx->pc = 0x384438u;
    // NOP
label_38443c:
    // 0x38443c: 0x0  nop
    ctx->pc = 0x38443cu;
    // NOP
label_384440:
    // 0x384440: 0x0  nop
    ctx->pc = 0x384440u;
    // NOP
label_384444:
    // 0x384444: 0x0  nop
    ctx->pc = 0x384444u;
    // NOP
label_384448:
    // 0x384448: 0x0  nop
    ctx->pc = 0x384448u;
    // NOP
label_38444c:
    // 0x38444c: 0x0  nop
    ctx->pc = 0x38444cu;
    // NOP
label_384450:
    // 0x384450: 0x0  nop
    ctx->pc = 0x384450u;
    // NOP
label_384454:
    // 0x384454: 0x0  nop
    ctx->pc = 0x384454u;
    // NOP
label_384458:
    // 0x384458: 0x0  nop
    ctx->pc = 0x384458u;
    // NOP
label_38445c:
    // 0x38445c: 0x0  nop
    ctx->pc = 0x38445cu;
    // NOP
label_384460:
    // 0x384460: 0x0  nop
    ctx->pc = 0x384460u;
    // NOP
label_384464:
    // 0x384464: 0x0  nop
    ctx->pc = 0x384464u;
    // NOP
label_384468:
    // 0x384468: 0x0  nop
    ctx->pc = 0x384468u;
    // NOP
label_38446c:
    // 0x38446c: 0x0  nop
    ctx->pc = 0x38446cu;
    // NOP
label_384470:
    // 0x384470: 0x0  nop
    ctx->pc = 0x384470u;
    // NOP
label_384474:
    // 0x384474: 0x0  nop
    ctx->pc = 0x384474u;
    // NOP
label_384478:
    // 0x384478: 0x0  nop
    ctx->pc = 0x384478u;
    // NOP
label_38447c:
    // 0x38447c: 0x0  nop
    ctx->pc = 0x38447cu;
    // NOP
label_384480:
    // 0x384480: 0x0  nop
    ctx->pc = 0x384480u;
    // NOP
label_384484:
    // 0x384484: 0x0  nop
    ctx->pc = 0x384484u;
    // NOP
label_384488:
    // 0x384488: 0x0  nop
    ctx->pc = 0x384488u;
    // NOP
label_38448c:
    // 0x38448c: 0x0  nop
    ctx->pc = 0x38448cu;
    // NOP
label_384490:
    // 0x384490: 0x0  nop
    ctx->pc = 0x384490u;
    // NOP
label_384494:
    // 0x384494: 0x0  nop
    ctx->pc = 0x384494u;
    // NOP
label_384498:
    // 0x384498: 0x0  nop
    ctx->pc = 0x384498u;
    // NOP
label_38449c:
    // 0x38449c: 0x0  nop
    ctx->pc = 0x38449cu;
    // NOP
label_3844a0:
    // 0x3844a0: 0x0  nop
    ctx->pc = 0x3844a0u;
    // NOP
label_3844a4:
    // 0x3844a4: 0x0  nop
    ctx->pc = 0x3844a4u;
    // NOP
label_3844a8:
    // 0x3844a8: 0x0  nop
    ctx->pc = 0x3844a8u;
    // NOP
label_3844ac:
    // 0x3844ac: 0x0  nop
    ctx->pc = 0x3844acu;
    // NOP
label_3844b0:
    // 0x3844b0: 0x0  nop
    ctx->pc = 0x3844b0u;
    // NOP
label_3844b4:
    // 0x3844b4: 0x0  nop
    ctx->pc = 0x3844b4u;
    // NOP
label_3844b8:
    // 0x3844b8: 0x0  nop
    ctx->pc = 0x3844b8u;
    // NOP
label_3844bc:
    // 0x3844bc: 0x0  nop
    ctx->pc = 0x3844bcu;
    // NOP
label_3844c0:
    // 0x3844c0: 0x0  nop
    ctx->pc = 0x3844c0u;
    // NOP
label_3844c4:
    // 0x3844c4: 0x0  nop
    ctx->pc = 0x3844c4u;
    // NOP
label_3844c8:
    // 0x3844c8: 0x0  nop
    ctx->pc = 0x3844c8u;
    // NOP
label_3844cc:
    // 0x3844cc: 0x0  nop
    ctx->pc = 0x3844ccu;
    // NOP
label_3844d0:
    // 0x3844d0: 0x49497350  .word       0x49497350                   # INVALID     $t2, $t1, 0x7350 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x3844d0u;
    throw std::runtime_error("Unhandled COP2 format: 0xA at 0x3844D0 raw=0x49497350");
label_3844d4:
    // 0x3844d4: 0x6962696c  ldl         $v0, 0x696C($t3)
    ctx->pc = 0x3844d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 26988); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_3844d8:
    // 0x3844d8: 0x20207570  addi        $zero, $at, 0x7570
    ctx->pc = 0x3844d8u;
    // NOP (addi to $zero)
label_3844dc:
    // 0x3844dc: 0x30303132  andi        $s0, $at, 0x3132
    ctx->pc = 0x3844dcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 1) & (uint64_t)(uint16_t)12594);
label_3844e0:
    // 0x3844e0: 0x13101008  beq         $t8, $s0, . + 4 + (0x1008 << 2)
label_3844e4:
    if (ctx->pc == 0x3844E4u) {
        ctx->pc = 0x3844E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3844E0u;
        // 0x3844e4: 0x16161310  bne         $s0, $s6, . + 4 + (0x1310 << 2) (Delay Slot)
        // Likely branch instruction at 0x3844E4 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x3844E8u;
        goto label_3844e8;
    }
    ctx->pc = 0x3844E0u;
    {
        const bool branch_taken_0x3844e0 = (GPR_U64(ctx, 24) == GPR_U64(ctx, 16));
        ctx->pc = 0x3844E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3844E0u;
        // 0x3844e4: 0x16161310  bne         $s0, $s6, . + 4 + (0x1310 << 2) (Delay Slot)
        // Likely branch instruction at 0x3844E4 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x3844e0) {
            ctx->pc = 0x388504u;
            return;
        }
    }
    ctx->pc = 0x3844E8u;
label_3844e8:
    // 0x3844e8: 0x16161616  bne         $s0, $s6, . + 4 + (0x1616 << 2)
label_3844ec:
    if (ctx->pc == 0x3844ECu) {
        ctx->pc = 0x3844ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3844E8u;
        // 0x3844ec: 0x1b1a181a  .word       0x1B1A181A                   # blez        $t8, . + 4 + (0x181A << 2) # 001A0000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x3844EC - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x3844F0u;
        goto label_3844f0;
    }
    ctx->pc = 0x3844E8u;
    {
        const bool branch_taken_0x3844e8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 22));
        ctx->pc = 0x3844ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3844E8u;
        // 0x3844ec: 0x1b1a181a  .word       0x1B1A181A                   # blez        $t8, . + 4 + (0x181A << 2) # 001A0000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x3844EC - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x3844e8) {
            ctx->pc = 0x389D44u;
            return;
        }
    }
    ctx->pc = 0x3844F0u;
label_3844f0:
    // 0x3844f0: 0x1a1a1b1b  .word       0x1A1A1B1B                   # blez        $s0, . + 4 + (0x1B1B << 2) # 001A0000 <InstrIdType: CPU_NORMAL>
label_3844f4:
    if (ctx->pc == 0x3844F4u) {
        ctx->pc = 0x3844F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3844F0u;
        // 0x3844f4: 0x1b1b1a1a  .word       0x1B1B1A1A                   # blez        $t8, . + 4 + (0x1A1A << 2) # 001B0000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x3844F4 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x3844F8u;
        goto label_3844f8;
    }
    ctx->pc = 0x3844F0u;
    {
        const bool branch_taken_0x3844f0 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x3844F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3844F0u;
        // 0x3844f4: 0x1b1b1a1a  .word       0x1B1B1A1A                   # blez        $t8, . + 4 + (0x1A1A << 2) # 001B0000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x3844F4 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x3844f0) {
            ctx->pc = 0x38B160u;
            return;
        }
    }
    ctx->pc = 0x3844F8u;
label_3844f8:
    // 0x3844f8: 0x1d1d1d1b  .word       0x1D1D1D1B                   # bgtz        $t0, . + 4 + (0x1D1B << 2) # 001D0000 <InstrIdType: CPU_NORMAL>
label_3844fc:
    if (ctx->pc == 0x3844FCu) {
        ctx->pc = 0x3844FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3844F8u;
        // 0x3844fc: 0x1d222222  .word       0x1D222222                   # bgtz        $t1, . + 4 + (0x2222 << 2) # 00020000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x3844FC - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x384500u;
        goto label_384500;
    }
    ctx->pc = 0x3844F8u;
    {
        const bool branch_taken_0x3844f8 = (GPR_S32(ctx, 8) > 0);
        ctx->pc = 0x3844FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3844F8u;
        // 0x3844fc: 0x1d222222  .word       0x1D222222                   # bgtz        $t1, . + 4 + (0x2222 << 2) # 00020000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x3844FC - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x3844f8) {
            ctx->pc = 0x38B968u;
            return;
        }
    }
    ctx->pc = 0x384500u;
label_384500:
    // 0x384500: 0x1b1b1d1d  .word       0x1B1B1D1D                   # blez        $t8, . + 4 + (0x1D1D << 2) # 001B0000 <InstrIdType: CPU_NORMAL>
label_384504:
    if (ctx->pc == 0x384504u) {
        ctx->pc = 0x384504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384500u;
        // 0x384504: 0x20201d1d  addi        $zero, $at, 0x1D1D (Delay Slot)
        // NOP (addi to $zero)
        ctx->in_delay_slot = false;
        ctx->pc = 0x384508u;
        goto label_384508;
    }
    ctx->pc = 0x384500u;
    {
        const bool branch_taken_0x384500 = (GPR_S32(ctx, 24) <= 0);
        ctx->pc = 0x384504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384500u;
        // 0x384504: 0x20201d1d  addi        $zero, $at, 0x1D1D (Delay Slot)
        // NOP (addi to $zero)
        ctx->in_delay_slot = false;
        if (branch_taken_0x384500) {
            ctx->pc = 0x38B978u;
            return;
        }
    }
    ctx->pc = 0x384508u;
label_384508:
    // 0x384508: 0x26252222  addiu       $a1, $s1, 0x2222
    ctx->pc = 0x384508u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 8738));
label_38450c:
    // 0x38450c: 0x22232325  addi        $v1, $s1, 0x2325
    ctx->pc = 0x38450cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 17), (int32_t)8997, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 3, (int32_t)tmp); }
label_384510:
    // 0x384510: 0x28262623  slti        $a2, $at, 0x2623
    ctx->pc = 0x384510u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 1) < (int64_t)(int32_t)9763) ? 1 : 0);
label_384514:
    // 0x384514: 0x30302828  andi        $s0, $at, 0x2828
    ctx->pc = 0x384514u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 1) & (uint64_t)(uint16_t)10280);
label_384518:
    // 0x384518: 0x38382e2e  xori        $t8, $at, 0x2E2E
    ctx->pc = 0x384518u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 1) ^ (uint64_t)(uint16_t)11822);
label_38451c:
    // 0x38451c: 0x5345453a  beql        $k0, $a1, . + 4 + (0x453A << 2)
label_384520:
    if (ctx->pc == 0x384520u) {
        ctx->pc = 0x384520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38451Cu;
        // 0x384520: 0x10101010  beq         $zero, $s0, . + 4 + (0x1010 << 2) (Delay Slot)
        // Likely branch instruction at 0x384520 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x384524u;
        goto label_384524;
    }
    ctx->pc = 0x38451Cu;
    {
        const bool branch_taken_0x38451c = (GPR_U64(ctx, 26) == GPR_U64(ctx, 5));
        if (branch_taken_0x38451c) {
            ctx->pc = 0x384520u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38451Cu;
            // 0x384520: 0x10101010  beq         $zero, $s0, . + 4 + (0x1010 << 2) (Delay Slot)
            // Likely branch instruction at 0x384520 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x395A08u;
            return;
        }
    }
    ctx->pc = 0x384524u;
label_384524:
    // 0x384524: 0x10101010  beq         $zero, $s0, . + 4 + (0x1010 << 2)
label_384528:
    if (ctx->pc == 0x384528u) {
        ctx->pc = 0x384528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384524u;
        // 0x384528: 0x10101010  beq         $zero, $s0, . + 4 + (0x1010 << 2) (Delay Slot)
        // Likely branch instruction at 0x384528 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x38452Cu;
        goto label_38452c;
    }
    ctx->pc = 0x384524u;
    {
        const bool branch_taken_0x384524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 16));
        ctx->pc = 0x384528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384524u;
        // 0x384528: 0x10101010  beq         $zero, $s0, . + 4 + (0x1010 << 2) (Delay Slot)
        // Likely branch instruction at 0x384528 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x384524) {
            ctx->pc = 0x388568u;
            return;
        }
    }
    ctx->pc = 0x38452Cu;
label_38452c:
    // 0x38452c: 0x10101010  beq         $zero, $s0, . + 4 + (0x1010 << 2)
label_384530:
    if (ctx->pc == 0x384530u) {
        ctx->pc = 0x384530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38452Cu;
        // 0x384530: 0x4210000  bgez        $at, . + 4 + (0x0 << 2) (Delay Slot)
        // REGIMM branch instruction to 0x384534 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x384534u;
        goto label_384534;
    }
    ctx->pc = 0x38452Cu;
    {
        const bool branch_taken_0x38452c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 16));
        ctx->pc = 0x384530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38452Cu;
        // 0x384530: 0x4210000  bgez        $at, . + 4 + (0x0 << 2) (Delay Slot)
        // REGIMM branch instruction to 0x384534 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x38452c) {
            ctx->pc = 0x388570u;
            return;
        }
    }
    ctx->pc = 0x384534u;
label_384534:
    // 0x384534: 0x3e00842  .word       0x03E00842                   # srl         $at, $zero, 1 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x384534u;
    SET_GPR_S32(ctx, 1, (int32_t)SRL32(GPR_U32(ctx, 0), 1));
label_384538:
    // 0x384538: 0x14a51084  bne         $a1, $a1, . + 4 + (0x1084 << 2)
label_38453c:
    if (ctx->pc == 0x38453Cu) {
        ctx->pc = 0x38453Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384538u;
        // 0x38453c: 0x1ce718c6  .word       0x1CE718C6                   # bgtz        $a3, . + 4 + (0x18C6 << 2) # 00070000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x38453C - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x384540u;
        goto label_384540;
    }
    ctx->pc = 0x384538u;
    {
        const bool branch_taken_0x384538 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 5));
        ctx->pc = 0x38453Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384538u;
        // 0x38453c: 0x1ce718c6  .word       0x1CE718C6                   # bgtz        $a3, . + 4 + (0x18C6 << 2) # 00070000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x38453C - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x384538) {
            ctx->pc = 0x38874Cu;
            return;
        }
    }
    ctx->pc = 0x384540u;
label_384540:
    // 0x384540: 0x2529001f  addiu       $t1, $t1, 0x1F
    ctx->pc = 0x384540u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 31));
label_384544:
    // 0x384544: 0x7c00294a  sq          $zero, 0x294A($zero)
    ctx->pc = 0x384544u;
    do { __m128i _value = (GPR_VEC(ctx, 0)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x294Au, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x294Au, _value); } while (0);
label_384548:
    // 0x384548: 0x35ad318c  ori         $t5, $t5, 0x318C
    ctx->pc = 0x384548u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)12684);
label_38454c:
    // 0x38454c: 0x39ce7fff  xori        $t6, $t6, 0x7FFF
    ctx->pc = 0x38454cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) ^ (uint64_t)(uint16_t)32767);
label_384550:
    // 0x384550: 0x49497350  .word       0x49497350                   # INVALID     $t2, $t1, 0x7350 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x384550u;
    throw std::runtime_error("Unhandled COP2 format: 0xA at 0x384550 raw=0x49497350");
label_384554:
    // 0x384554: 0x7062696c  .word       0x7062696C                   # INVALID     $v1, $v0, 0x696C # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x384554u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2C at 0x384554 raw=0x7062696C");
label_384558:
    // 0x384558: 0x20206461  addi        $zero, $at, 0x6461
    ctx->pc = 0x384558u;
    // NOP (addi to $zero)
label_38455c:
    // 0x38455c: 0x30313132  andi        $s1, $at, 0x3132
    ctx->pc = 0x38455cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 1) & (uint64_t)(uint16_t)12594);
label_384560:
    // 0x384560: 0x0  nop
    ctx->pc = 0x384560u;
    // NOP
label_384564:
    // 0x384564: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x384564u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x384564 raw=0x00000001");
label_384568:
    // 0x384568: 0x3acbb8  .word       0x003ACBB8                   # dsll        $t9, $k0, 14 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x384568u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 26) << 14);
label_38456c:
    // 0x38456c: 0x3acbb0  tge         $at, $k0, 814
    ctx->pc = 0x38456cu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 26)) { runtime->handleTrap(rdram, ctx); }
label_384570:
    // 0x384570: 0x3acba0  .word       0x003ACBA0                   # add         $t9, $at, $k0 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x384570u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 26);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 25, (int32_t)result);     } }
label_384574:
    // 0x384574: 0x3acbb0  tge         $at, $k0, 814
    ctx->pc = 0x384574u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 26)) { runtime->handleTrap(rdram, ctx); }
label_384578:
    // 0x384578: 0x3acbb0  tge         $at, $k0, 814
    ctx->pc = 0x384578u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 26)) { runtime->handleTrap(rdram, ctx); }
label_38457c:
    // 0x38457c: 0x3acb98  .word       0x003ACB98                   # mult        $t9, $at, $k0 # 00000380 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x38457cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 26); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 25, (int32_t)result); }
label_384580:
    // 0x384580: 0x3acb90  .word       0x003ACB90                   # mfhi        $t9 # 003A0380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x384580u;
    SET_GPR_U64(ctx, 25, ctx->hi);
label_384584:
    // 0x384584: 0x3acb88  .word       0x003ACB88                   # jr          $at # 001ACB80 <InstrIdType: CPU_SPECIAL>
label_384588:
    if (ctx->pc == 0x384588u) {
        ctx->pc = 0x384588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384584u;
        // 0x384588: 0x3acbd8  .word       0x003ACBD8                   # mult        $t9, $at, $k0 # 000003C0 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 26); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 25, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x38458Cu;
        goto label_38458c;
    }
    ctx->pc = 0x384584u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x384588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384584u;
        // 0x384588: 0x3acbd8  .word       0x003ACBD8                   # mult        $t9, $at, $k0 # 000003C0 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 26); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 25, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x384584u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x38458Cu;
label_38458c:
    // 0x38458c: 0x3acbd0  .word       0x003ACBD0                   # mfhi        $t9 # 003A03C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x38458cu;
    SET_GPR_U64(ctx, 25, ctx->hi);
label_384590:
    // 0x384590: 0x3acbc8  .word       0x003ACBC8                   # jr          $at # 001ACBC0 <InstrIdType: CPU_SPECIAL>
label_384594:
    if (ctx->pc == 0x384594u) {
        ctx->pc = 0x384598u;
        goto label_384598;
    }
    ctx->pc = 0x384590u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x384590u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x384598u;
label_384598:
    // 0x384598: 0x49497350  .word       0x49497350                   # INVALID     $t2, $t1, 0x7350 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x384598u;
    throw std::runtime_error("Unhandled COP2 format: 0xA at 0x384598 raw=0x49497350");
label_38459c:
    // 0x38459c: 0x6362696c  daddi       $v0, $k1, 0x696C
    ctx->pc = 0x38459cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)26988; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 2, res); }
label_3845a0:
    // 0x3845a0: 0x20647664  addi        $a0, $v1, 0x7664
    ctx->pc = 0x3845a0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)30308, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
label_3845a4:
    // 0x3845a4: 0x30313132  andi        $s1, $at, 0x3132
    ctx->pc = 0x3845a4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 1) & (uint64_t)(uint16_t)12594);
label_3845a8:
    // 0x3845a8: 0x0  nop
    ctx->pc = 0x3845a8u;
    // NOP
label_3845ac:
    // 0x3845ac: 0x0  nop
    ctx->pc = 0x3845acu;
    // NOP
label_3845b0:
    // 0x3845b0: 0x0  nop
    ctx->pc = 0x3845b0u;
    // NOP
label_3845b4:
    // 0x3845b4: 0x0  nop
    ctx->pc = 0x3845b4u;
    // NOP
label_3845b8:
    // 0x3845b8: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x3845b8u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_3845bc:
    // 0x3845bc: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x3845bcu;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_3845c0:
    // 0x3845c0: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x3845c0u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_3845c4:
    // 0x3845c4: 0x0  nop
    ctx->pc = 0x3845c4u;
    // NOP
label_3845c8:
    // 0x3845c8: 0x0  nop
    ctx->pc = 0x3845c8u;
    // NOP
label_3845cc:
    // 0x3845cc: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x3845ccu;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_3845d0:
    // 0x3845d0: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x3845d0u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_3845d4:
    // 0x3845d4: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x3845d4u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_3845d8:
    // 0x3845d8: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x3845d8u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_3845dc:
    // 0x3845dc: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x3845dcu;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_3845e0:
    // 0x3845e0: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x3845e0u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_3845e4:
    // 0x3845e4: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x3845e4u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_3845e8:
    // 0x3845e8: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x3845e8u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_3845ec:
    // 0x3845ec: 0x0  nop
    ctx->pc = 0x3845ecu;
    // NOP
label_3845f0:
    // 0x3845f0: 0x0  nop
    ctx->pc = 0x3845f0u;
    // NOP
label_3845f4:
    // 0x3845f4: 0x0  nop
    ctx->pc = 0x3845f4u;
    // NOP
label_3845f8:
    // 0x3845f8: 0x0  nop
    ctx->pc = 0x3845f8u;
    // NOP
label_3845fc:
    // 0x3845fc: 0x0  nop
    ctx->pc = 0x3845fcu;
    // NOP
label_384600:
    // 0x384600: 0x0  nop
    ctx->pc = 0x384600u;
    // NOP
label_384604:
    // 0x384604: 0x0  nop
    ctx->pc = 0x384604u;
    // NOP
label_384608:
    // 0x384608: 0x49497350  .word       0x49497350                   # INVALID     $t2, $t1, 0x7350 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x384608u;
    throw std::runtime_error("Unhandled COP2 format: 0xA at 0x384608 raw=0x49497350");
label_38460c:
    // 0x38460c: 0x6d62696c  ldr         $v0, 0x696C($t3)
    ctx->pc = 0x38460cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 26988); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_384610:
    // 0x384610: 0x20202063  addi        $zero, $at, 0x2063
    ctx->pc = 0x384610u;
    // NOP (addi to $zero)
label_384614:
    // 0x384614: 0x30303132  andi        $s0, $at, 0x3132
    ctx->pc = 0x384614u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 1) & (uint64_t)(uint16_t)12594);
label_384618:
    // 0x384618: 0x0  nop
    ctx->pc = 0x384618u;
    // NOP
label_38461c:
    // 0x38461c: 0x0  nop
    ctx->pc = 0x38461cu;
    // NOP
label_384620:
    // 0x384620: 0x0  nop
    ctx->pc = 0x384620u;
    // NOP
label_384624:
    // 0x384624: 0x384804  sllv        $t1, $t8, $at
    ctx->pc = 0x384624u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 24), GPR_U32(ctx, 1) & 0x1F));
label_384628:
    // 0x384628: 0x38485c  .word       0x0038485C                   # dmult       $at, $t8 # 00004840 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x384628u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x384628 raw=0x0038485C");
label_38462c:
    // 0x38462c: 0x3848b4  teq         $at, $t8, 290
    ctx->pc = 0x38462cu;
    if (GPR_U64(ctx, 1) == GPR_U64(ctx, 24)) { runtime->handleTrap(rdram, ctx); }
label_384630:
    // 0x384630: 0x0  nop
    ctx->pc = 0x384630u;
    // NOP
label_384634:
    // 0x384634: 0x0  nop
    ctx->pc = 0x384634u;
    // NOP
label_384638:
    // 0x384638: 0x0  nop
    ctx->pc = 0x384638u;
    // NOP
label_38463c:
    // 0x38463c: 0x0  nop
    ctx->pc = 0x38463cu;
    // NOP
label_384640:
    // 0x384640: 0x0  nop
    ctx->pc = 0x384640u;
    // NOP
label_384644:
    // 0x384644: 0x0  nop
    ctx->pc = 0x384644u;
    // NOP
label_384648:
    // 0x384648: 0x0  nop
    ctx->pc = 0x384648u;
    // NOP
label_38464c:
    // 0x38464c: 0x0  nop
    ctx->pc = 0x38464cu;
    // NOP
label_384650:
    // 0x384650: 0x0  nop
    ctx->pc = 0x384650u;
    // NOP
label_384654:
    // 0x384654: 0x3ad9a8  .word       0x003AD9A8                   # mfsa        $k1 # 003A0180 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x384654u;
    SET_GPR_U32(ctx, 27, ctx->sa);
label_384658:
    // 0x384658: 0x0  nop
    ctx->pc = 0x384658u;
    // NOP
label_38465c:
    // 0x38465c: 0x0  nop
    ctx->pc = 0x38465cu;
    // NOP
label_384660:
    // 0x384660: 0x0  nop
    ctx->pc = 0x384660u;
    // NOP
label_384664:
    // 0x384664: 0x0  nop
    ctx->pc = 0x384664u;
    // NOP
label_384668:
    // 0x384668: 0x0  nop
    ctx->pc = 0x384668u;
    // NOP
label_38466c:
    // 0x38466c: 0x0  nop
    ctx->pc = 0x38466cu;
    // NOP
label_384670:
    // 0x384670: 0x0  nop
    ctx->pc = 0x384670u;
    // NOP
label_384674:
    // 0x384674: 0x0  nop
    ctx->pc = 0x384674u;
    // NOP
label_384678:
    // 0x384678: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x384678u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x384678 raw=0x00000001");
label_38467c:
    // 0x38467c: 0x0  nop
    ctx->pc = 0x38467cu;
    // NOP
label_384680:
    // 0x384680: 0x0  nop
    ctx->pc = 0x384680u;
    // NOP
label_384684:
    // 0x384684: 0x0  nop
    ctx->pc = 0x384684u;
    // NOP
label_384688:
    // 0x384688: 0x0  nop
    ctx->pc = 0x384688u;
    // NOP
label_38468c:
    // 0x38468c: 0x0  nop
    ctx->pc = 0x38468cu;
    // NOP
label_384690:
    // 0x384690: 0x0  nop
    ctx->pc = 0x384690u;
    // NOP
label_384694:
    // 0x384694: 0x0  nop
    ctx->pc = 0x384694u;
    // NOP
label_384698:
    // 0x384698: 0x0  nop
    ctx->pc = 0x384698u;
    // NOP
label_38469c:
    // 0x38469c: 0x0  nop
    ctx->pc = 0x38469cu;
    // NOP
label_3846a0:
    // 0x3846a0: 0x0  nop
    ctx->pc = 0x3846a0u;
    // NOP
label_3846a4:
    // 0x3846a4: 0x0  nop
    ctx->pc = 0x3846a4u;
    // NOP
label_3846a8:
    // 0x3846a8: 0x0  nop
    ctx->pc = 0x3846a8u;
    // NOP
label_3846ac:
    // 0x3846ac: 0x0  nop
    ctx->pc = 0x3846acu;
    // NOP
label_3846b0:
    // 0x3846b0: 0x0  nop
    ctx->pc = 0x3846b0u;
    // NOP
label_3846b4:
    // 0x3846b4: 0x0  nop
    ctx->pc = 0x3846b4u;
    // NOP
label_3846b8:
    // 0x3846b8: 0x0  nop
    ctx->pc = 0x3846b8u;
    // NOP
label_3846bc:
    // 0x3846bc: 0x0  nop
    ctx->pc = 0x3846bcu;
    // NOP
label_3846c0:
    // 0x3846c0: 0x0  nop
    ctx->pc = 0x3846c0u;
    // NOP
label_3846c4:
    // 0x3846c4: 0x0  nop
    ctx->pc = 0x3846c4u;
    // NOP
label_3846c8:
    // 0x3846c8: 0x0  nop
    ctx->pc = 0x3846c8u;
    // NOP
label_3846cc:
    // 0x3846cc: 0x0  nop
    ctx->pc = 0x3846ccu;
    // NOP
label_3846d0:
    // 0x3846d0: 0x0  nop
    ctx->pc = 0x3846d0u;
    // NOP
label_3846d4:
    // 0x3846d4: 0x0  nop
    ctx->pc = 0x3846d4u;
    // NOP
label_3846d8:
    // 0x3846d8: 0x0  nop
    ctx->pc = 0x3846d8u;
    // NOP
label_3846dc:
    // 0x3846dc: 0x0  nop
    ctx->pc = 0x3846dcu;
    // NOP
label_3846e0:
    // 0x3846e0: 0x0  nop
    ctx->pc = 0x3846e0u;
    // NOP
label_3846e4:
    // 0x3846e4: 0x0  nop
    ctx->pc = 0x3846e4u;
    // NOP
label_3846e8:
    // 0x3846e8: 0x0  nop
    ctx->pc = 0x3846e8u;
    // NOP
label_3846ec:
    // 0x3846ec: 0x0  nop
    ctx->pc = 0x3846ecu;
    // NOP
label_3846f0:
    // 0x3846f0: 0x0  nop
    ctx->pc = 0x3846f0u;
    // NOP
label_3846f4:
    // 0x3846f4: 0x0  nop
    ctx->pc = 0x3846f4u;
    // NOP
label_3846f8:
    // 0x3846f8: 0x0  nop
    ctx->pc = 0x3846f8u;
    // NOP
label_3846fc:
    // 0x3846fc: 0x0  nop
    ctx->pc = 0x3846fcu;
    // NOP
label_384700:
    // 0x384700: 0x0  nop
    ctx->pc = 0x384700u;
    // NOP
label_384704:
    // 0x384704: 0x0  nop
    ctx->pc = 0x384704u;
    // NOP
label_384708:
    // 0x384708: 0x0  nop
    ctx->pc = 0x384708u;
    // NOP
label_38470c:
    // 0x38470c: 0x0  nop
    ctx->pc = 0x38470cu;
    // NOP
label_384710:
    // 0x384710: 0x0  nop
    ctx->pc = 0x384710u;
    // NOP
label_384714:
    // 0x384714: 0x0  nop
    ctx->pc = 0x384714u;
    // NOP
label_384718:
    // 0x384718: 0x0  nop
    ctx->pc = 0x384718u;
    // NOP
label_38471c:
    // 0x38471c: 0x0  nop
    ctx->pc = 0x38471cu;
    // NOP
label_384720:
    // 0x384720: 0x0  nop
    ctx->pc = 0x384720u;
    // NOP
label_384724:
    // 0x384724: 0x0  nop
    ctx->pc = 0x384724u;
    // NOP
label_384728:
    // 0x384728: 0x0  nop
    ctx->pc = 0x384728u;
    // NOP
label_38472c:
    // 0x38472c: 0x0  nop
    ctx->pc = 0x38472cu;
    // NOP
label_384730:
    // 0x384730: 0x0  nop
    ctx->pc = 0x384730u;
    // NOP
label_384734:
    // 0x384734: 0x0  nop
    ctx->pc = 0x384734u;
    // NOP
label_384738:
    // 0x384738: 0x0  nop
    ctx->pc = 0x384738u;
    // NOP
label_38473c:
    // 0x38473c: 0x0  nop
    ctx->pc = 0x38473cu;
    // NOP
label_384740:
    // 0x384740: 0x0  nop
    ctx->pc = 0x384740u;
    // NOP
label_384744:
    // 0x384744: 0x0  nop
    ctx->pc = 0x384744u;
    // NOP
label_384748:
    // 0x384748: 0x0  nop
    ctx->pc = 0x384748u;
    // NOP
label_38474c:
    // 0x38474c: 0x0  nop
    ctx->pc = 0x38474cu;
    // NOP
label_384750:
    // 0x384750: 0x0  nop
    ctx->pc = 0x384750u;
    // NOP
label_384754:
    // 0x384754: 0x0  nop
    ctx->pc = 0x384754u;
    // NOP
label_384758:
    // 0x384758: 0x0  nop
    ctx->pc = 0x384758u;
    // NOP
label_38475c:
    // 0x38475c: 0x0  nop
    ctx->pc = 0x38475cu;
    // NOP
label_384760:
    // 0x384760: 0x0  nop
    ctx->pc = 0x384760u;
    // NOP
label_384764:
    // 0x384764: 0x0  nop
    ctx->pc = 0x384764u;
    // NOP
label_384768:
    // 0x384768: 0x0  nop
    ctx->pc = 0x384768u;
    // NOP
label_38476c:
    // 0x38476c: 0x0  nop
    ctx->pc = 0x38476cu;
    // NOP
label_384770:
    // 0x384770: 0x0  nop
    ctx->pc = 0x384770u;
    // NOP
label_384774:
    // 0x384774: 0x0  nop
    ctx->pc = 0x384774u;
    // NOP
label_384778:
    // 0x384778: 0x0  nop
    ctx->pc = 0x384778u;
    // NOP
label_38477c:
    // 0x38477c: 0x0  nop
    ctx->pc = 0x38477cu;
    // NOP
label_384780:
    // 0x384780: 0x0  nop
    ctx->pc = 0x384780u;
    // NOP
label_384784:
    // 0x384784: 0x0  nop
    ctx->pc = 0x384784u;
    // NOP
label_384788:
    // 0x384788: 0x0  nop
    ctx->pc = 0x384788u;
    // NOP
label_38478c:
    // 0x38478c: 0x0  nop
    ctx->pc = 0x38478cu;
    // NOP
label_384790:
    // 0x384790: 0x0  nop
    ctx->pc = 0x384790u;
    // NOP
label_384794:
    // 0x384794: 0x0  nop
    ctx->pc = 0x384794u;
    // NOP
label_384798:
    // 0x384798: 0x0  nop
    ctx->pc = 0x384798u;
    // NOP
label_38479c:
    // 0x38479c: 0x0  nop
    ctx->pc = 0x38479cu;
    // NOP
label_3847a0:
    // 0x3847a0: 0x0  nop
    ctx->pc = 0x3847a0u;
    // NOP
label_3847a4:
    // 0x3847a4: 0x0  nop
    ctx->pc = 0x3847a4u;
    // NOP
label_3847a8:
    // 0x3847a8: 0x0  nop
    ctx->pc = 0x3847a8u;
    // NOP
label_3847ac:
    // 0x3847ac: 0x0  nop
    ctx->pc = 0x3847acu;
    // NOP
label_3847b0:
    // 0x3847b0: 0x0  nop
    ctx->pc = 0x3847b0u;
    // NOP
label_3847b4:
    // 0x3847b4: 0x0  nop
    ctx->pc = 0x3847b4u;
    // NOP
label_3847b8:
    // 0x3847b8: 0x0  nop
    ctx->pc = 0x3847b8u;
    // NOP
label_3847bc:
    // 0x3847bc: 0x0  nop
    ctx->pc = 0x3847bcu;
    // NOP
label_3847c0:
    // 0x3847c0: 0x0  nop
    ctx->pc = 0x3847c0u;
    // NOP
label_3847c4:
    // 0x3847c4: 0x0  nop
    ctx->pc = 0x3847c4u;
    // NOP
label_3847c8:
    // 0x3847c8: 0x0  nop
    ctx->pc = 0x3847c8u;
    // NOP
label_3847cc:
    // 0x3847cc: 0x0  nop
    ctx->pc = 0x3847ccu;
    // NOP
label_3847d0:
    // 0x3847d0: 0x0  nop
    ctx->pc = 0x3847d0u;
    // NOP
label_3847d4:
    // 0x3847d4: 0x0  nop
    ctx->pc = 0x3847d4u;
    // NOP
label_3847d8:
    // 0x3847d8: 0x0  nop
    ctx->pc = 0x3847d8u;
    // NOP
label_3847dc:
    // 0x3847dc: 0x0  nop
    ctx->pc = 0x3847dcu;
    // NOP
label_3847e0:
    // 0x3847e0: 0x0  nop
    ctx->pc = 0x3847e0u;
    // NOP
label_3847e4:
    // 0x3847e4: 0x0  nop
    ctx->pc = 0x3847e4u;
    // NOP
label_3847e8:
    // 0x3847e8: 0x0  nop
    ctx->pc = 0x3847e8u;
    // NOP
label_3847ec:
    // 0x3847ec: 0x0  nop
    ctx->pc = 0x3847ecu;
    // NOP
label_3847f0:
    // 0x3847f0: 0x0  nop
    ctx->pc = 0x3847f0u;
    // NOP
label_3847f4:
    // 0x3847f4: 0x0  nop
    ctx->pc = 0x3847f4u;
    // NOP
label_3847f8:
    // 0x3847f8: 0x0  nop
    ctx->pc = 0x3847f8u;
    // NOP
label_3847fc:
    // 0x3847fc: 0x0  nop
    ctx->pc = 0x3847fcu;
    // NOP
label_384800:
    // 0x384800: 0x0  nop
    ctx->pc = 0x384800u;
    // NOP
label_384804:
    // 0x384804: 0x0  nop
    ctx->pc = 0x384804u;
    // NOP
label_384808:
    // 0x384808: 0x0  nop
    ctx->pc = 0x384808u;
    // NOP
label_38480c:
    // 0x38480c: 0x0  nop
    ctx->pc = 0x38480cu;
    // NOP
label_384810:
    // 0x384810: 0x0  nop
    ctx->pc = 0x384810u;
    // NOP
label_384814:
    // 0x384814: 0x0  nop
    ctx->pc = 0x384814u;
    // NOP
label_384818:
    // 0x384818: 0x0  nop
    ctx->pc = 0x384818u;
    // NOP
label_38481c:
    // 0x38481c: 0x0  nop
    ctx->pc = 0x38481cu;
    // NOP
label_384820:
    // 0x384820: 0x0  nop
    ctx->pc = 0x384820u;
    // NOP
label_384824:
    // 0x384824: 0x0  nop
    ctx->pc = 0x384824u;
    // NOP
label_384828:
    // 0x384828: 0x0  nop
    ctx->pc = 0x384828u;
    // NOP
label_38482c:
    // 0x38482c: 0x0  nop
    ctx->pc = 0x38482cu;
    // NOP
label_384830:
    // 0x384830: 0x0  nop
    ctx->pc = 0x384830u;
    // NOP
label_384834:
    // 0x384834: 0x0  nop
    ctx->pc = 0x384834u;
    // NOP
label_384838:
    // 0x384838: 0x0  nop
    ctx->pc = 0x384838u;
    // NOP
label_38483c:
    // 0x38483c: 0x0  nop
    ctx->pc = 0x38483cu;
    // NOP
label_384840:
    // 0x384840: 0x0  nop
    ctx->pc = 0x384840u;
    // NOP
label_384844:
    // 0x384844: 0x0  nop
    ctx->pc = 0x384844u;
    // NOP
label_384848:
    // 0x384848: 0x0  nop
    ctx->pc = 0x384848u;
    // NOP
label_38484c:
    // 0x38484c: 0x0  nop
    ctx->pc = 0x38484cu;
    // NOP
label_384850:
    // 0x384850: 0x0  nop
    ctx->pc = 0x384850u;
    // NOP
label_384854:
    // 0x384854: 0x0  nop
    ctx->pc = 0x384854u;
    // NOP
label_384858:
    // 0x384858: 0x0  nop
    ctx->pc = 0x384858u;
    // NOP
label_38485c:
    // 0x38485c: 0x0  nop
    ctx->pc = 0x38485cu;
    // NOP
label_384860:
    // 0x384860: 0x0  nop
    ctx->pc = 0x384860u;
    // NOP
label_384864:
    // 0x384864: 0x0  nop
    ctx->pc = 0x384864u;
    // NOP
label_384868:
    // 0x384868: 0x0  nop
    ctx->pc = 0x384868u;
    // NOP
label_38486c:
    // 0x38486c: 0x0  nop
    ctx->pc = 0x38486cu;
    // NOP
label_384870:
    // 0x384870: 0x0  nop
    ctx->pc = 0x384870u;
    // NOP
label_384874:
    // 0x384874: 0x0  nop
    ctx->pc = 0x384874u;
    // NOP
label_384878:
    // 0x384878: 0x0  nop
    ctx->pc = 0x384878u;
    // NOP
label_38487c:
    // 0x38487c: 0x0  nop
    ctx->pc = 0x38487cu;
    // NOP
label_384880:
    // 0x384880: 0x0  nop
    ctx->pc = 0x384880u;
    // NOP
label_384884:
    // 0x384884: 0x0  nop
    ctx->pc = 0x384884u;
    // NOP
label_384888:
    // 0x384888: 0x0  nop
    ctx->pc = 0x384888u;
    // NOP
label_38488c:
    // 0x38488c: 0x0  nop
    ctx->pc = 0x38488cu;
    // NOP
label_384890:
    // 0x384890: 0x0  nop
    ctx->pc = 0x384890u;
    // NOP
label_384894:
    // 0x384894: 0x0  nop
    ctx->pc = 0x384894u;
    // NOP
label_384898:
    // 0x384898: 0x0  nop
    ctx->pc = 0x384898u;
    // NOP
label_38489c:
    // 0x38489c: 0x0  nop
    ctx->pc = 0x38489cu;
    // NOP
label_3848a0:
    // 0x3848a0: 0x0  nop
    ctx->pc = 0x3848a0u;
    // NOP
label_3848a4:
    // 0x3848a4: 0x0  nop
    ctx->pc = 0x3848a4u;
    // NOP
label_3848a8:
    // 0x3848a8: 0x0  nop
    ctx->pc = 0x3848a8u;
    // NOP
label_3848ac:
    // 0x3848ac: 0x0  nop
    ctx->pc = 0x3848acu;
    // NOP
label_3848b0:
    // 0x3848b0: 0x0  nop
    ctx->pc = 0x3848b0u;
    // NOP
label_3848b4:
    // 0x3848b4: 0x0  nop
    ctx->pc = 0x3848b4u;
    // NOP
label_3848b8:
    // 0x3848b8: 0x0  nop
    ctx->pc = 0x3848b8u;
    // NOP
label_3848bc:
    // 0x3848bc: 0x0  nop
    ctx->pc = 0x3848bcu;
    // NOP
label_3848c0:
    // 0x3848c0: 0x0  nop
    ctx->pc = 0x3848c0u;
    // NOP
label_3848c4:
    // 0x3848c4: 0x0  nop
    ctx->pc = 0x3848c4u;
    // NOP
label_3848c8:
    // 0x3848c8: 0x0  nop
    ctx->pc = 0x3848c8u;
    // NOP
label_3848cc:
    // 0x3848cc: 0x0  nop
    ctx->pc = 0x3848ccu;
    // NOP
label_3848d0:
    // 0x3848d0: 0x0  nop
    ctx->pc = 0x3848d0u;
    // NOP
label_3848d4:
    // 0x3848d4: 0x0  nop
    ctx->pc = 0x3848d4u;
    // NOP
label_3848d8:
    // 0x3848d8: 0x0  nop
    ctx->pc = 0x3848d8u;
    // NOP
label_3848dc:
    // 0x3848dc: 0x0  nop
    ctx->pc = 0x3848dcu;
    // NOP
label_3848e0:
    // 0x3848e0: 0x0  nop
    ctx->pc = 0x3848e0u;
    // NOP
label_3848e4:
    // 0x3848e4: 0x0  nop
    ctx->pc = 0x3848e4u;
    // NOP
label_3848e8:
    // 0x3848e8: 0x0  nop
    ctx->pc = 0x3848e8u;
    // NOP
label_3848ec:
    // 0x3848ec: 0x0  nop
    ctx->pc = 0x3848ecu;
    // NOP
label_3848f0:
    // 0x3848f0: 0x0  nop
    ctx->pc = 0x3848f0u;
    // NOP
label_3848f4:
    // 0x3848f4: 0x0  nop
    ctx->pc = 0x3848f4u;
    // NOP
label_3848f8:
    // 0x3848f8: 0x0  nop
    ctx->pc = 0x3848f8u;
    // NOP
label_3848fc:
    // 0x3848fc: 0x0  nop
    ctx->pc = 0x3848fcu;
    // NOP
label_384900:
    // 0x384900: 0x0  nop
    ctx->pc = 0x384900u;
    // NOP
label_384904:
    // 0x384904: 0x0  nop
    ctx->pc = 0x384904u;
    // NOP
label_384908:
    // 0x384908: 0x0  nop
    ctx->pc = 0x384908u;
    // NOP
label_38490c:
    // 0x38490c: 0x384620  .word       0x00384620                   # add         $t0, $at, $t8 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x38490cu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 24);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_384910:
    // 0x384910: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x384910u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x384910 raw=0x00000001");
label_384914:
    // 0x384914: 0x0  nop
    ctx->pc = 0x384914u;
    // NOP
label_384918:
    // 0x384918: 0x43  sra         $zero, $zero, 1
    ctx->pc = 0x384918u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 1));
label_38491c:
    // 0x38491c: 0x0  nop
    ctx->pc = 0x38491cu;
    // NOP
label_384920:
    // 0x384920: 0x43  sra         $zero, $zero, 1
    ctx->pc = 0x384920u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 1));
label_384924:
    // 0x384924: 0x0  nop
    ctx->pc = 0x384924u;
    // NOP
label_384928:
    // 0x384928: 0x0  nop
    ctx->pc = 0x384928u;
    // NOP
label_38492c:
    // 0x38492c: 0x0  nop
    ctx->pc = 0x38492cu;
    // NOP
label_384930:
    // 0x384930: 0x384928  .word       0x00384928                   # mfsa        $t1 # 00380100 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x384930u;
    SET_GPR_U32(ctx, 9, ctx->sa);
label_384934:
    // 0x384934: 0x384928  .word       0x00384928                   # mfsa        $t1 # 00380100 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x384934u;
    SET_GPR_U32(ctx, 9, ctx->sa);
label_384938:
    // 0x384938: 0x384930  tge         $at, $t8, 292
    ctx->pc = 0x384938u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 24)) { runtime->handleTrap(rdram, ctx); }
label_38493c:
    // 0x38493c: 0x384930  tge         $at, $t8, 292
    ctx->pc = 0x38493cu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 24)) { runtime->handleTrap(rdram, ctx); }
label_384940:
    // 0x384940: 0x384938  .word       0x00384938                   # dsll        $t1, $t8, 4 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x384940u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 24) << 4);
label_384944:
    // 0x384944: 0x384938  .word       0x00384938                   # dsll        $t1, $t8, 4 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x384944u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 24) << 4);
label_384948:
    // 0x384948: 0x384940  .word       0x00384940                   # sll         $t1, $t8, 5 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x384948u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 24), 5));
label_38494c:
    // 0x38494c: 0x384940  .word       0x00384940                   # sll         $t1, $t8, 5 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x38494cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 24), 5));
label_384950:
    // 0x384950: 0x384948  .word       0x00384948                   # jr          $at # 00184940 <InstrIdType: CPU_SPECIAL>
label_384954:
    if (ctx->pc == 0x384954u) {
        ctx->pc = 0x384954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384950u;
        // 0x384954: 0x384948  .word       0x00384948                   # jr          $at # 00184940 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $1 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x384958u;
        goto label_384958;
    }
    ctx->pc = 0x384950u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x384954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384950u;
        // 0x384954: 0x384948  .word       0x00384948                   # jr          $at # 00184940 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $1 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x384950u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x384958u;
label_384958:
    // 0x384958: 0x384950  .word       0x00384950                   # mfhi        $t1 # 00380140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x384958u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_38495c:
    // 0x38495c: 0x384950  .word       0x00384950                   # mfhi        $t1 # 00380140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x38495cu;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_384960:
    // 0x384960: 0x384958  .word       0x00384958                   # mult        $t1, $at, $t8 # 00000140 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x384960u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 24); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_384964:
    // 0x384964: 0x384958  .word       0x00384958                   # mult        $t1, $at, $t8 # 00000140 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x384964u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 24); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_384968:
    // 0x384968: 0x384960  .word       0x00384960                   # add         $t1, $at, $t8 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x384968u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 24);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_38496c:
    // 0x38496c: 0x384960  .word       0x00384960                   # add         $t1, $at, $t8 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x38496cu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 24);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_384970:
    // 0x384970: 0x384968  .word       0x00384968                   # mfsa        $t1 # 00380140 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x384970u;
    SET_GPR_U32(ctx, 9, ctx->sa);
label_384974:
    // 0x384974: 0x384968  .word       0x00384968                   # mfsa        $t1 # 00380140 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x384974u;
    SET_GPR_U32(ctx, 9, ctx->sa);
label_384978:
    // 0x384978: 0x384970  tge         $at, $t8, 293
    ctx->pc = 0x384978u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 24)) { runtime->handleTrap(rdram, ctx); }
label_38497c:
    // 0x38497c: 0x384970  tge         $at, $t8, 293
    ctx->pc = 0x38497cu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 24)) { runtime->handleTrap(rdram, ctx); }
label_384980:
    // 0x384980: 0x384978  .word       0x00384978                   # dsll        $t1, $t8, 5 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x384980u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 24) << 5);
label_384984:
    // 0x384984: 0x384978  .word       0x00384978                   # dsll        $t1, $t8, 5 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x384984u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 24) << 5);
label_384988:
    // 0x384988: 0x384980  .word       0x00384980                   # sll         $t1, $t8, 6 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x384988u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 24), 6));
label_38498c:
    // 0x38498c: 0x384980  .word       0x00384980                   # sll         $t1, $t8, 6 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x38498cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 24), 6));
label_384990:
    // 0x384990: 0x384988  .word       0x00384988                   # jr          $at # 00184980 <InstrIdType: CPU_SPECIAL>
label_384994:
    if (ctx->pc == 0x384994u) {
        ctx->pc = 0x384994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384990u;
        // 0x384994: 0x384988  .word       0x00384988                   # jr          $at # 00184980 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $1 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x384998u;
        goto label_384998;
    }
    ctx->pc = 0x384990u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x384994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384990u;
        // 0x384994: 0x384988  .word       0x00384988                   # jr          $at # 00184980 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $1 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x384990u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x384998u;
label_384998:
    // 0x384998: 0x384990  .word       0x00384990                   # mfhi        $t1 # 00380180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x384998u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_38499c:
    // 0x38499c: 0x384990  .word       0x00384990                   # mfhi        $t1 # 00380180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x38499cu;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_3849a0:
    // 0x3849a0: 0x384998  .word       0x00384998                   # mult        $t1, $at, $t8 # 00000180 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3849a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 24); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_3849a4:
    // 0x3849a4: 0x384998  .word       0x00384998                   # mult        $t1, $at, $t8 # 00000180 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3849a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 24); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_3849a8:
    // 0x3849a8: 0x3849a0  .word       0x003849A0                   # add         $t1, $at, $t8 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3849a8u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 24);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_3849ac:
    // 0x3849ac: 0x3849a0  .word       0x003849A0                   # add         $t1, $at, $t8 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3849acu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 24);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_3849b0:
    // 0x3849b0: 0x3849a8  .word       0x003849A8                   # mfsa        $t1 # 00380180 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3849b0u;
    SET_GPR_U32(ctx, 9, ctx->sa);
label_3849b4:
    // 0x3849b4: 0x3849a8  .word       0x003849A8                   # mfsa        $t1 # 00380180 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3849b4u;
    SET_GPR_U32(ctx, 9, ctx->sa);
label_3849b8:
    // 0x3849b8: 0x3849b0  tge         $at, $t8, 294
    ctx->pc = 0x3849b8u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 24)) { runtime->handleTrap(rdram, ctx); }
label_3849bc:
    // 0x3849bc: 0x3849b0  tge         $at, $t8, 294
    ctx->pc = 0x3849bcu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 24)) { runtime->handleTrap(rdram, ctx); }
label_3849c0:
    // 0x3849c0: 0x3849b8  .word       0x003849B8                   # dsll        $t1, $t8, 6 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3849c0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 24) << 6);
label_3849c4:
    // 0x3849c4: 0x3849b8  .word       0x003849B8                   # dsll        $t1, $t8, 6 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3849c4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 24) << 6);
label_3849c8:
    // 0x3849c8: 0x3849c0  .word       0x003849C0                   # sll         $t1, $t8, 7 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3849c8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 24), 7));
label_3849cc:
    // 0x3849cc: 0x3849c0  .word       0x003849C0                   # sll         $t1, $t8, 7 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3849ccu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 24), 7));
label_3849d0:
    // 0x3849d0: 0x3849c8  .word       0x003849C8                   # jr          $at # 001849C0 <InstrIdType: CPU_SPECIAL>
label_3849d4:
    if (ctx->pc == 0x3849D4u) {
        ctx->pc = 0x3849D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3849D0u;
        // 0x3849d4: 0x3849c8  .word       0x003849C8                   # jr          $at # 001849C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $1 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x3849D8u;
        goto label_3849d8;
    }
    ctx->pc = 0x3849D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x3849D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3849D0u;
        // 0x3849d4: 0x3849c8  .word       0x003849C8                   # jr          $at # 001849C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $1 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3849D0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3849D8u;
label_3849d8:
    // 0x3849d8: 0x3849d0  .word       0x003849D0                   # mfhi        $t1 # 003801C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3849d8u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_3849dc:
    // 0x3849dc: 0x3849d0  .word       0x003849D0                   # mfhi        $t1 # 003801C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3849dcu;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_3849e0:
    // 0x3849e0: 0x3849d8  .word       0x003849D8                   # mult        $t1, $at, $t8 # 000001C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3849e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 24); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_3849e4:
    // 0x3849e4: 0x3849d8  .word       0x003849D8                   # mult        $t1, $at, $t8 # 000001C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3849e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 24); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_3849e8:
    // 0x3849e8: 0x3849e0  .word       0x003849E0                   # add         $t1, $at, $t8 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3849e8u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 24);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_3849ec:
    // 0x3849ec: 0x3849e0  .word       0x003849E0                   # add         $t1, $at, $t8 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3849ecu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 24);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_3849f0:
    // 0x3849f0: 0x3849e8  .word       0x003849E8                   # mfsa        $t1 # 003801C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3849f0u;
    SET_GPR_U32(ctx, 9, ctx->sa);
label_3849f4:
    // 0x3849f4: 0x3849e8  .word       0x003849E8                   # mfsa        $t1 # 003801C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3849f4u;
    SET_GPR_U32(ctx, 9, ctx->sa);
label_3849f8:
    // 0x3849f8: 0x3849f0  tge         $at, $t8, 295
    ctx->pc = 0x3849f8u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 24)) { runtime->handleTrap(rdram, ctx); }
label_3849fc:
    // 0x3849fc: 0x3849f0  tge         $at, $t8, 295
    ctx->pc = 0x3849fcu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 24)) { runtime->handleTrap(rdram, ctx); }
label_384a00:
    // 0x384a00: 0x3849f8  .word       0x003849F8                   # dsll        $t1, $t8, 7 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x384a00u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 24) << 7);
label_384a04:
    // 0x384a04: 0x3849f8  .word       0x003849F8                   # dsll        $t1, $t8, 7 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x384a04u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 24) << 7);
label_384a08:
    // 0x384a08: 0x384a00  .word       0x00384A00                   # sll         $t1, $t8, 8 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x384a08u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 24), 8));
label_384a0c:
    // 0x384a0c: 0x384a00  .word       0x00384A00                   # sll         $t1, $t8, 8 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x384a0cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 24), 8));
label_384a10:
    // 0x384a10: 0x384a08  .word       0x00384A08                   # jr          $at # 00184A00 <InstrIdType: CPU_SPECIAL>
label_384a14:
    if (ctx->pc == 0x384A14u) {
        ctx->pc = 0x384A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384A10u;
        // 0x384a14: 0x384a08  .word       0x00384A08                   # jr          $at # 00184A00 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $1 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x384A18u;
        goto label_384a18;
    }
    ctx->pc = 0x384A10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x384A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384A10u;
        // 0x384a14: 0x384a08  .word       0x00384A08                   # jr          $at # 00184A00 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $1 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x384A10u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x384A18u;
label_384a18:
    // 0x384a18: 0x384a10  .word       0x00384A10                   # mfhi        $t1 # 00380200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x384a18u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_384a1c:
    // 0x384a1c: 0x384a10  .word       0x00384A10                   # mfhi        $t1 # 00380200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x384a1cu;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_384a20:
    // 0x384a20: 0x384a18  .word       0x00384A18                   # mult        $t1, $at, $t8 # 00000200 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x384a20u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 24); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_384a24:
    // 0x384a24: 0x384a18  .word       0x00384A18                   # mult        $t1, $at, $t8 # 00000200 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x384a24u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 24); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_384a28:
    // 0x384a28: 0x384a20  .word       0x00384A20                   # add         $t1, $at, $t8 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x384a28u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 24);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_384a2c:
    // 0x384a2c: 0x384a20  .word       0x00384A20                   # add         $t1, $at, $t8 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x384a2cu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 24);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_384a30:
    // 0x384a30: 0x384a28  .word       0x00384A28                   # mfsa        $t1 # 00380200 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x384a30u;
    SET_GPR_U32(ctx, 9, ctx->sa);
label_384a34:
    // 0x384a34: 0x384a28  .word       0x00384A28                   # mfsa        $t1 # 00380200 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x384a34u;
    SET_GPR_U32(ctx, 9, ctx->sa);
label_384a38:
    // 0x384a38: 0x384a30  tge         $at, $t8, 296
    ctx->pc = 0x384a38u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 24)) { runtime->handleTrap(rdram, ctx); }
label_384a3c:
    // 0x384a3c: 0x384a30  tge         $at, $t8, 296
    ctx->pc = 0x384a3cu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 24)) { runtime->handleTrap(rdram, ctx); }
label_384a40:
    // 0x384a40: 0x384a38  .word       0x00384A38                   # dsll        $t1, $t8, 8 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x384a40u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 24) << 8);
label_384a44:
    // 0x384a44: 0x384a38  .word       0x00384A38                   # dsll        $t1, $t8, 8 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x384a44u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 24) << 8);
label_384a48:
    // 0x384a48: 0x384a40  .word       0x00384A40                   # sll         $t1, $t8, 9 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x384a48u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 24), 9));
label_384a4c:
    // 0x384a4c: 0x384a40  .word       0x00384A40                   # sll         $t1, $t8, 9 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x384a4cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 24), 9));
label_384a50:
    // 0x384a50: 0x384a48  .word       0x00384A48                   # jr          $at # 00184A40 <InstrIdType: CPU_SPECIAL>
label_384a54:
    if (ctx->pc == 0x384A54u) {
        ctx->pc = 0x384A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384A50u;
        // 0x384a54: 0x384a48  .word       0x00384A48                   # jr          $at # 00184A40 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $1 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x384A58u;
        goto label_384a58;
    }
    ctx->pc = 0x384A50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x384A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384A50u;
        // 0x384a54: 0x384a48  .word       0x00384A48                   # jr          $at # 00184A40 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $1 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x384A50u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x384A58u;
label_384a58:
    // 0x384a58: 0x384a50  .word       0x00384A50                   # mfhi        $t1 # 00380240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x384a58u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_384a5c:
    // 0x384a5c: 0x384a50  .word       0x00384A50                   # mfhi        $t1 # 00380240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x384a5cu;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_384a60:
    // 0x384a60: 0x384a58  .word       0x00384A58                   # mult        $t1, $at, $t8 # 00000240 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x384a60u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 24); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_384a64:
    // 0x384a64: 0x384a58  .word       0x00384A58                   # mult        $t1, $at, $t8 # 00000240 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x384a64u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 24); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_384a68:
    // 0x384a68: 0x384a60  .word       0x00384A60                   # add         $t1, $at, $t8 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x384a68u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 24);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_384a6c:
    // 0x384a6c: 0x384a60  .word       0x00384A60                   # add         $t1, $at, $t8 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x384a6cu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 24);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_384a70:
    // 0x384a70: 0x384a68  .word       0x00384A68                   # mfsa        $t1 # 00380240 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x384a70u;
    SET_GPR_U32(ctx, 9, ctx->sa);
label_384a74:
    // 0x384a74: 0x384a68  .word       0x00384A68                   # mfsa        $t1 # 00380240 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x384a74u;
    SET_GPR_U32(ctx, 9, ctx->sa);
label_384a78:
    // 0x384a78: 0x384a70  tge         $at, $t8, 297
    ctx->pc = 0x384a78u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 24)) { runtime->handleTrap(rdram, ctx); }
label_384a7c:
    // 0x384a7c: 0x384a70  tge         $at, $t8, 297
    ctx->pc = 0x384a7cu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 24)) { runtime->handleTrap(rdram, ctx); }
label_384a80:
    // 0x384a80: 0x384a78  .word       0x00384A78                   # dsll        $t1, $t8, 9 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x384a80u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 24) << 9);
label_384a84:
    // 0x384a84: 0x384a78  .word       0x00384A78                   # dsll        $t1, $t8, 9 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x384a84u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 24) << 9);
label_384a88:
    // 0x384a88: 0x384a80  .word       0x00384A80                   # sll         $t1, $t8, 10 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x384a88u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 24), 10));
label_384a8c:
    // 0x384a8c: 0x384a80  .word       0x00384A80                   # sll         $t1, $t8, 10 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x384a8cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 24), 10));
label_384a90:
    // 0x384a90: 0x384a88  .word       0x00384A88                   # jr          $at # 00184A80 <InstrIdType: CPU_SPECIAL>
label_384a94:
    if (ctx->pc == 0x384A94u) {
        ctx->pc = 0x384A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384A90u;
        // 0x384a94: 0x384a88  .word       0x00384A88                   # jr          $at # 00184A80 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $1 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x384A98u;
        goto label_384a98;
    }
    ctx->pc = 0x384A90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x384A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384A90u;
        // 0x384a94: 0x384a88  .word       0x00384A88                   # jr          $at # 00184A80 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $1 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x384A90u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x384A98u;
label_384a98:
    // 0x384a98: 0x384a90  .word       0x00384A90                   # mfhi        $t1 # 00380280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x384a98u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_384a9c:
    // 0x384a9c: 0x384a90  .word       0x00384A90                   # mfhi        $t1 # 00380280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x384a9cu;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_384aa0:
    // 0x384aa0: 0x384a98  .word       0x00384A98                   # mult        $t1, $at, $t8 # 00000280 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x384aa0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 24); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_384aa4:
    // 0x384aa4: 0x384a98  .word       0x00384A98                   # mult        $t1, $at, $t8 # 00000280 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x384aa4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 24); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_384aa8:
    // 0x384aa8: 0x384aa0  .word       0x00384AA0                   # add         $t1, $at, $t8 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x384aa8u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 24);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_384aac:
    // 0x384aac: 0x384aa0  .word       0x00384AA0                   # add         $t1, $at, $t8 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x384aacu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 24);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_384ab0:
    // 0x384ab0: 0x384aa8  .word       0x00384AA8                   # mfsa        $t1 # 00380280 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x384ab0u;
    SET_GPR_U32(ctx, 9, ctx->sa);
label_384ab4:
    // 0x384ab4: 0x384aa8  .word       0x00384AA8                   # mfsa        $t1 # 00380280 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x384ab4u;
    SET_GPR_U32(ctx, 9, ctx->sa);
label_384ab8:
    // 0x384ab8: 0x384ab0  tge         $at, $t8, 298
    ctx->pc = 0x384ab8u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 24)) { runtime->handleTrap(rdram, ctx); }
label_384abc:
    // 0x384abc: 0x384ab0  tge         $at, $t8, 298
    ctx->pc = 0x384abcu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 24)) { runtime->handleTrap(rdram, ctx); }
label_384ac0:
    // 0x384ac0: 0x384ab8  .word       0x00384AB8                   # dsll        $t1, $t8, 10 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x384ac0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 24) << 10);
label_384ac4:
    // 0x384ac4: 0x384ab8  .word       0x00384AB8                   # dsll        $t1, $t8, 10 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x384ac4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 24) << 10);
label_384ac8:
    // 0x384ac8: 0x384ac0  .word       0x00384AC0                   # sll         $t1, $t8, 11 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x384ac8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 24), 11));
label_384acc:
    // 0x384acc: 0x384ac0  .word       0x00384AC0                   # sll         $t1, $t8, 11 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x384accu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 24), 11));
label_384ad0:
    // 0x384ad0: 0x384ac8  .word       0x00384AC8                   # jr          $at # 00184AC0 <InstrIdType: CPU_SPECIAL>
label_384ad4:
    if (ctx->pc == 0x384AD4u) {
        ctx->pc = 0x384AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384AD0u;
        // 0x384ad4: 0x384ac8  .word       0x00384AC8                   # jr          $at # 00184AC0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $1 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x384AD8u;
        goto label_384ad8;
    }
    ctx->pc = 0x384AD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x384AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384AD0u;
        // 0x384ad4: 0x384ac8  .word       0x00384AC8                   # jr          $at # 00184AC0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $1 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x384AD0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x384AD8u;
label_384ad8:
    // 0x384ad8: 0x384ad0  .word       0x00384AD0                   # mfhi        $t1 # 003802C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x384ad8u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_384adc:
    // 0x384adc: 0x384ad0  .word       0x00384AD0                   # mfhi        $t1 # 003802C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x384adcu;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_384ae0:
    // 0x384ae0: 0x384ad8  .word       0x00384AD8                   # mult        $t1, $at, $t8 # 000002C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x384ae0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 24); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_384ae4:
    // 0x384ae4: 0x384ad8  .word       0x00384AD8                   # mult        $t1, $at, $t8 # 000002C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x384ae4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 24); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_384ae8:
    // 0x384ae8: 0x384ae0  .word       0x00384AE0                   # add         $t1, $at, $t8 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x384ae8u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 24);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_384aec:
    // 0x384aec: 0x384ae0  .word       0x00384AE0                   # add         $t1, $at, $t8 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x384aecu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 24);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_384af0:
    // 0x384af0: 0x384ae8  .word       0x00384AE8                   # mfsa        $t1 # 003802C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x384af0u;
    SET_GPR_U32(ctx, 9, ctx->sa);
label_384af4:
    // 0x384af4: 0x384ae8  .word       0x00384AE8                   # mfsa        $t1 # 003802C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x384af4u;
    SET_GPR_U32(ctx, 9, ctx->sa);
label_384af8:
    // 0x384af8: 0x384af0  tge         $at, $t8, 299
    ctx->pc = 0x384af8u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 24)) { runtime->handleTrap(rdram, ctx); }
label_384afc:
    // 0x384afc: 0x384af0  tge         $at, $t8, 299
    ctx->pc = 0x384afcu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 24)) { runtime->handleTrap(rdram, ctx); }
label_384b00:
    // 0x384b00: 0x384af8  .word       0x00384AF8                   # dsll        $t1, $t8, 11 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x384b00u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 24) << 11);
label_384b04:
    // 0x384b04: 0x384af8  .word       0x00384AF8                   # dsll        $t1, $t8, 11 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x384b04u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 24) << 11);
label_384b08:
    // 0x384b08: 0x384b00  .word       0x00384B00                   # sll         $t1, $t8, 12 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x384b08u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 24), 12));
label_384b0c:
    // 0x384b0c: 0x384b00  .word       0x00384B00                   # sll         $t1, $t8, 12 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x384b0cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 24), 12));
label_384b10:
    // 0x384b10: 0x384b08  .word       0x00384B08                   # jr          $at # 00184B00 <InstrIdType: CPU_SPECIAL>
label_384b14:
    if (ctx->pc == 0x384B14u) {
        ctx->pc = 0x384B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384B10u;
        // 0x384b14: 0x384b08  .word       0x00384B08                   # jr          $at # 00184B00 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $1 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x384B18u;
        goto label_384b18;
    }
    ctx->pc = 0x384B10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x384B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384B10u;
        // 0x384b14: 0x384b08  .word       0x00384B08                   # jr          $at # 00184B00 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $1 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x384B10u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x384B18u;
label_384b18:
    // 0x384b18: 0x384b10  .word       0x00384B10                   # mfhi        $t1 # 00380300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x384b18u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_384b1c:
    // 0x384b1c: 0x384b10  .word       0x00384B10                   # mfhi        $t1 # 00380300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x384b1cu;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_384b20:
    // 0x384b20: 0x384b18  .word       0x00384B18                   # mult        $t1, $at, $t8 # 00000300 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x384b20u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 24); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_384b24:
    // 0x384b24: 0x384b18  .word       0x00384B18                   # mult        $t1, $at, $t8 # 00000300 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x384b24u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 24); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_384b28:
    // 0x384b28: 0x384b20  .word       0x00384B20                   # add         $t1, $at, $t8 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x384b28u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 24);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_384b2c:
    // 0x384b2c: 0x384b20  .word       0x00384B20                   # add         $t1, $at, $t8 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x384b2cu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 24);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_384b30:
    // 0x384b30: 0x384b28  .word       0x00384B28                   # mfsa        $t1 # 00380300 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x384b30u;
    SET_GPR_U32(ctx, 9, ctx->sa);
label_384b34:
    // 0x384b34: 0x384b28  .word       0x00384B28                   # mfsa        $t1 # 00380300 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x384b34u;
    SET_GPR_U32(ctx, 9, ctx->sa);
label_384b38:
    // 0x384b38: 0x384b30  tge         $at, $t8, 300
    ctx->pc = 0x384b38u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 24)) { runtime->handleTrap(rdram, ctx); }
label_384b3c:
    // 0x384b3c: 0x384b30  tge         $at, $t8, 300
    ctx->pc = 0x384b3cu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 24)) { runtime->handleTrap(rdram, ctx); }
label_384b40:
    // 0x384b40: 0x384b38  .word       0x00384B38                   # dsll        $t1, $t8, 12 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x384b40u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 24) << 12);
label_384b44:
    // 0x384b44: 0x384b38  .word       0x00384B38                   # dsll        $t1, $t8, 12 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x384b44u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 24) << 12);
label_384b48:
    // 0x384b48: 0x384b40  .word       0x00384B40                   # sll         $t1, $t8, 13 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x384b48u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 24), 13));
label_384b4c:
    // 0x384b4c: 0x384b40  .word       0x00384B40                   # sll         $t1, $t8, 13 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x384b4cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 24), 13));
label_384b50:
    // 0x384b50: 0x384b48  .word       0x00384B48                   # jr          $at # 00184B40 <InstrIdType: CPU_SPECIAL>
label_384b54:
    if (ctx->pc == 0x384B54u) {
        ctx->pc = 0x384B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384B50u;
        // 0x384b54: 0x384b48  .word       0x00384B48                   # jr          $at # 00184B40 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $1 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x384B58u;
        goto label_384b58;
    }
    ctx->pc = 0x384B50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x384B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384B50u;
        // 0x384b54: 0x384b48  .word       0x00384B48                   # jr          $at # 00184B40 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $1 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x384B50u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x384B58u;
label_384b58:
    // 0x384b58: 0x384b50  .word       0x00384B50                   # mfhi        $t1 # 00380340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x384b58u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_384b5c:
    // 0x384b5c: 0x384b50  .word       0x00384B50                   # mfhi        $t1 # 00380340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x384b5cu;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_384b60:
    // 0x384b60: 0x384b58  .word       0x00384B58                   # mult        $t1, $at, $t8 # 00000340 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x384b60u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 24); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_384b64:
    // 0x384b64: 0x384b58  .word       0x00384B58                   # mult        $t1, $at, $t8 # 00000340 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x384b64u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 24); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_384b68:
    // 0x384b68: 0x384b60  .word       0x00384B60                   # add         $t1, $at, $t8 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x384b68u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 24);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_384b6c:
    // 0x384b6c: 0x384b60  .word       0x00384B60                   # add         $t1, $at, $t8 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x384b6cu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 24);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_384b70:
    // 0x384b70: 0x384b68  .word       0x00384B68                   # mfsa        $t1 # 00380340 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x384b70u;
    SET_GPR_U32(ctx, 9, ctx->sa);
label_384b74:
    // 0x384b74: 0x384b68  .word       0x00384B68                   # mfsa        $t1 # 00380340 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x384b74u;
    SET_GPR_U32(ctx, 9, ctx->sa);
label_384b78:
    // 0x384b78: 0x384b70  tge         $at, $t8, 301
    ctx->pc = 0x384b78u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 24)) { runtime->handleTrap(rdram, ctx); }
label_384b7c:
    // 0x384b7c: 0x384b70  tge         $at, $t8, 301
    ctx->pc = 0x384b7cu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 24)) { runtime->handleTrap(rdram, ctx); }
label_384b80:
    // 0x384b80: 0x384b78  .word       0x00384B78                   # dsll        $t1, $t8, 13 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x384b80u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 24) << 13);
label_384b84:
    // 0x384b84: 0x384b78  .word       0x00384B78                   # dsll        $t1, $t8, 13 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x384b84u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 24) << 13);
label_384b88:
    // 0x384b88: 0x384b80  .word       0x00384B80                   # sll         $t1, $t8, 14 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x384b88u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 24), 14));
label_384b8c:
    // 0x384b8c: 0x384b80  .word       0x00384B80                   # sll         $t1, $t8, 14 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x384b8cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 24), 14));
label_384b90:
    // 0x384b90: 0x384b88  .word       0x00384B88                   # jr          $at # 00184B80 <InstrIdType: CPU_SPECIAL>
label_384b94:
    if (ctx->pc == 0x384B94u) {
        ctx->pc = 0x384B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384B90u;
        // 0x384b94: 0x384b88  .word       0x00384B88                   # jr          $at # 00184B80 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $1 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x384B98u;
        goto label_384b98;
    }
    ctx->pc = 0x384B90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x384B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384B90u;
        // 0x384b94: 0x384b88  .word       0x00384B88                   # jr          $at # 00184B80 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $1 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x384B90u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x384B98u;
label_384b98:
    // 0x384b98: 0x384b90  .word       0x00384B90                   # mfhi        $t1 # 00380380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x384b98u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_384b9c:
    // 0x384b9c: 0x384b90  .word       0x00384B90                   # mfhi        $t1 # 00380380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x384b9cu;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_384ba0:
    // 0x384ba0: 0x384b98  .word       0x00384B98                   # mult        $t1, $at, $t8 # 00000380 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x384ba0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 24); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_384ba4:
    // 0x384ba4: 0x384b98  .word       0x00384B98                   # mult        $t1, $at, $t8 # 00000380 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x384ba4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 24); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_384ba8:
    // 0x384ba8: 0x384ba0  .word       0x00384BA0                   # add         $t1, $at, $t8 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x384ba8u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 24);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_384bac:
    // 0x384bac: 0x384ba0  .word       0x00384BA0                   # add         $t1, $at, $t8 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x384bacu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 24);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_384bb0:
    // 0x384bb0: 0x384ba8  .word       0x00384BA8                   # mfsa        $t1 # 00380380 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x384bb0u;
    SET_GPR_U32(ctx, 9, ctx->sa);
label_384bb4:
    // 0x384bb4: 0x384ba8  .word       0x00384BA8                   # mfsa        $t1 # 00380380 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x384bb4u;
    SET_GPR_U32(ctx, 9, ctx->sa);
label_384bb8:
    // 0x384bb8: 0x384bb0  tge         $at, $t8, 302
    ctx->pc = 0x384bb8u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 24)) { runtime->handleTrap(rdram, ctx); }
label_384bbc:
    // 0x384bbc: 0x384bb0  tge         $at, $t8, 302
    ctx->pc = 0x384bbcu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 24)) { runtime->handleTrap(rdram, ctx); }
label_384bc0:
    // 0x384bc0: 0x384bb8  .word       0x00384BB8                   # dsll        $t1, $t8, 14 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x384bc0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 24) << 14);
label_384bc4:
    // 0x384bc4: 0x384bb8  .word       0x00384BB8                   # dsll        $t1, $t8, 14 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x384bc4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 24) << 14);
label_384bc8:
    // 0x384bc8: 0x384bc0  .word       0x00384BC0                   # sll         $t1, $t8, 15 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x384bc8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 24), 15));
label_384bcc:
    // 0x384bcc: 0x384bc0  .word       0x00384BC0                   # sll         $t1, $t8, 15 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x384bccu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 24), 15));
label_384bd0:
    // 0x384bd0: 0x384bc8  .word       0x00384BC8                   # jr          $at # 00184BC0 <InstrIdType: CPU_SPECIAL>
label_384bd4:
    if (ctx->pc == 0x384BD4u) {
        ctx->pc = 0x384BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384BD0u;
        // 0x384bd4: 0x384bc8  .word       0x00384BC8                   # jr          $at # 00184BC0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $1 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x384BD8u;
        goto label_384bd8;
    }
    ctx->pc = 0x384BD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x384BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384BD0u;
        // 0x384bd4: 0x384bc8  .word       0x00384BC8                   # jr          $at # 00184BC0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $1 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x384BD0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x384BD8u;
label_384bd8:
    // 0x384bd8: 0x384bd0  .word       0x00384BD0                   # mfhi        $t1 # 003803C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x384bd8u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_384bdc:
    // 0x384bdc: 0x384bd0  .word       0x00384BD0                   # mfhi        $t1 # 003803C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x384bdcu;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_384be0:
    // 0x384be0: 0x384bd8  .word       0x00384BD8                   # mult        $t1, $at, $t8 # 000003C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x384be0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 24); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_384be4:
    // 0x384be4: 0x384bd8  .word       0x00384BD8                   # mult        $t1, $at, $t8 # 000003C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x384be4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 24); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_384be8:
    // 0x384be8: 0x384be0  .word       0x00384BE0                   # add         $t1, $at, $t8 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x384be8u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 24);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_384bec:
    // 0x384bec: 0x384be0  .word       0x00384BE0                   # add         $t1, $at, $t8 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x384becu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 24);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_384bf0:
    // 0x384bf0: 0x384be8  .word       0x00384BE8                   # mfsa        $t1 # 003803C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x384bf0u;
    SET_GPR_U32(ctx, 9, ctx->sa);
label_384bf4:
    // 0x384bf4: 0x384be8  .word       0x00384BE8                   # mfsa        $t1 # 003803C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x384bf4u;
    SET_GPR_U32(ctx, 9, ctx->sa);
label_384bf8:
    // 0x384bf8: 0x384bf0  tge         $at, $t8, 303
    ctx->pc = 0x384bf8u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 24)) { runtime->handleTrap(rdram, ctx); }
label_384bfc:
    // 0x384bfc: 0x384bf0  tge         $at, $t8, 303
    ctx->pc = 0x384bfcu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 24)) { runtime->handleTrap(rdram, ctx); }
label_384c00:
    // 0x384c00: 0x384bf8  .word       0x00384BF8                   # dsll        $t1, $t8, 15 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x384c00u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 24) << 15);
label_384c04:
    // 0x384c04: 0x384bf8  .word       0x00384BF8                   # dsll        $t1, $t8, 15 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x384c04u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 24) << 15);
label_384c08:
    // 0x384c08: 0x384c00  .word       0x00384C00                   # sll         $t1, $t8, 16 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x384c08u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 24), 16));
label_384c0c:
    // 0x384c0c: 0x384c00  .word       0x00384C00                   # sll         $t1, $t8, 16 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x384c0cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 24), 16));
label_384c10:
    // 0x384c10: 0x384c08  .word       0x00384C08                   # jr          $at # 00184C00 <InstrIdType: CPU_SPECIAL>
label_384c14:
    if (ctx->pc == 0x384C14u) {
        ctx->pc = 0x384C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384C10u;
        // 0x384c14: 0x384c08  .word       0x00384C08                   # jr          $at # 00184C00 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $1 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x384C18u;
        goto label_384c18;
    }
    ctx->pc = 0x384C10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x384C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384C10u;
        // 0x384c14: 0x384c08  .word       0x00384C08                   # jr          $at # 00184C00 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $1 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x384C10u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x384C18u;
label_384c18:
    // 0x384c18: 0x384c10  .word       0x00384C10                   # mfhi        $t1 # 00380400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x384c18u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_384c1c:
    // 0x384c1c: 0x384c10  .word       0x00384C10                   # mfhi        $t1 # 00380400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x384c1cu;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_384c20:
    // 0x384c20: 0x384c18  .word       0x00384C18                   # mult        $t1, $at, $t8 # 00000400 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x384c20u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 24); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_384c24:
    // 0x384c24: 0x384c18  .word       0x00384C18                   # mult        $t1, $at, $t8 # 00000400 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x384c24u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 24); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_384c28:
    // 0x384c28: 0x384c20  .word       0x00384C20                   # add         $t1, $at, $t8 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x384c28u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 24);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_384c2c:
    // 0x384c2c: 0x384c20  .word       0x00384C20                   # add         $t1, $at, $t8 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x384c2cu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 24);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_384c30:
    // 0x384c30: 0x384c28  .word       0x00384C28                   # mfsa        $t1 # 00380400 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x384c30u;
    SET_GPR_U32(ctx, 9, ctx->sa);
label_384c34:
    // 0x384c34: 0x384c28  .word       0x00384C28                   # mfsa        $t1 # 00380400 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x384c34u;
    SET_GPR_U32(ctx, 9, ctx->sa);
label_384c38:
    // 0x384c38: 0x384c30  tge         $at, $t8, 304
    ctx->pc = 0x384c38u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 24)) { runtime->handleTrap(rdram, ctx); }
label_384c3c:
    // 0x384c3c: 0x384c30  tge         $at, $t8, 304
    ctx->pc = 0x384c3cu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 24)) { runtime->handleTrap(rdram, ctx); }
label_384c40:
    // 0x384c40: 0x384c38  .word       0x00384C38                   # dsll        $t1, $t8, 16 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x384c40u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 24) << 16);
label_384c44:
    // 0x384c44: 0x384c38  .word       0x00384C38                   # dsll        $t1, $t8, 16 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x384c44u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 24) << 16);
label_384c48:
    // 0x384c48: 0x384c40  .word       0x00384C40                   # sll         $t1, $t8, 17 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x384c48u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 24), 17));
label_384c4c:
    // 0x384c4c: 0x384c40  .word       0x00384C40                   # sll         $t1, $t8, 17 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x384c4cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 24), 17));
label_384c50:
    // 0x384c50: 0x384c48  .word       0x00384C48                   # jr          $at # 00184C40 <InstrIdType: CPU_SPECIAL>
label_384c54:
    if (ctx->pc == 0x384C54u) {
        ctx->pc = 0x384C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384C50u;
        // 0x384c54: 0x384c48  .word       0x00384C48                   # jr          $at # 00184C40 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $1 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x384C58u;
        goto label_384c58;
    }
    ctx->pc = 0x384C50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x384C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384C50u;
        // 0x384c54: 0x384c48  .word       0x00384C48                   # jr          $at # 00184C40 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $1 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x384C50u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x384C58u;
label_384c58:
    // 0x384c58: 0x384c50  .word       0x00384C50                   # mfhi        $t1 # 00380440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x384c58u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_384c5c:
    // 0x384c5c: 0x384c50  .word       0x00384C50                   # mfhi        $t1 # 00380440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x384c5cu;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_384c60:
    // 0x384c60: 0x384c58  .word       0x00384C58                   # mult        $t1, $at, $t8 # 00000440 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x384c60u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 24); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_384c64:
    // 0x384c64: 0x384c58  .word       0x00384C58                   # mult        $t1, $at, $t8 # 00000440 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x384c64u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 24); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_384c68:
    // 0x384c68: 0x384c60  .word       0x00384C60                   # add         $t1, $at, $t8 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x384c68u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 24);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_384c6c:
    // 0x384c6c: 0x384c60  .word       0x00384C60                   # add         $t1, $at, $t8 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x384c6cu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 24);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_384c70:
    // 0x384c70: 0x384c68  .word       0x00384C68                   # mfsa        $t1 # 00380440 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x384c70u;
    SET_GPR_U32(ctx, 9, ctx->sa);
label_384c74:
    // 0x384c74: 0x384c68  .word       0x00384C68                   # mfsa        $t1 # 00380440 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x384c74u;
    SET_GPR_U32(ctx, 9, ctx->sa);
label_384c78:
    // 0x384c78: 0x384c70  tge         $at, $t8, 305
    ctx->pc = 0x384c78u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 24)) { runtime->handleTrap(rdram, ctx); }
label_384c7c:
    // 0x384c7c: 0x384c70  tge         $at, $t8, 305
    ctx->pc = 0x384c7cu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 24)) { runtime->handleTrap(rdram, ctx); }
label_384c80:
    // 0x384c80: 0x384c78  .word       0x00384C78                   # dsll        $t1, $t8, 17 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x384c80u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 24) << 17);
label_384c84:
    // 0x384c84: 0x384c78  .word       0x00384C78                   # dsll        $t1, $t8, 17 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x384c84u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 24) << 17);
label_384c88:
    // 0x384c88: 0x384c80  .word       0x00384C80                   # sll         $t1, $t8, 18 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x384c88u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 24), 18));
label_384c8c:
    // 0x384c8c: 0x384c80  .word       0x00384C80                   # sll         $t1, $t8, 18 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x384c8cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 24), 18));
label_384c90:
    // 0x384c90: 0x384c88  .word       0x00384C88                   # jr          $at # 00184C80 <InstrIdType: CPU_SPECIAL>
label_384c94:
    if (ctx->pc == 0x384C94u) {
        ctx->pc = 0x384C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384C90u;
        // 0x384c94: 0x384c88  .word       0x00384C88                   # jr          $at # 00184C80 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $1 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x384C98u;
        goto label_384c98;
    }
    ctx->pc = 0x384C90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x384C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384C90u;
        // 0x384c94: 0x384c88  .word       0x00384C88                   # jr          $at # 00184C80 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $1 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x384C90u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x384C98u;
label_384c98:
    // 0x384c98: 0x384c90  .word       0x00384C90                   # mfhi        $t1 # 00380480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x384c98u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_384c9c:
    // 0x384c9c: 0x384c90  .word       0x00384C90                   # mfhi        $t1 # 00380480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x384c9cu;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_384ca0:
    // 0x384ca0: 0x384c98  .word       0x00384C98                   # mult        $t1, $at, $t8 # 00000480 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x384ca0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 24); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_384ca4:
    // 0x384ca4: 0x384c98  .word       0x00384C98                   # mult        $t1, $at, $t8 # 00000480 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x384ca4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 24); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_384ca8:
    // 0x384ca8: 0x384ca0  .word       0x00384CA0                   # add         $t1, $at, $t8 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x384ca8u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 24);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_384cac:
    // 0x384cac: 0x384ca0  .word       0x00384CA0                   # add         $t1, $at, $t8 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x384cacu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 24);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_384cb0:
    // 0x384cb0: 0x384ca8  .word       0x00384CA8                   # mfsa        $t1 # 00380480 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x384cb0u;
    SET_GPR_U32(ctx, 9, ctx->sa);
label_384cb4:
    // 0x384cb4: 0x384ca8  .word       0x00384CA8                   # mfsa        $t1 # 00380480 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x384cb4u;
    SET_GPR_U32(ctx, 9, ctx->sa);
label_384cb8:
    // 0x384cb8: 0x384cb0  tge         $at, $t8, 306
    ctx->pc = 0x384cb8u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 24)) { runtime->handleTrap(rdram, ctx); }
label_384cbc:
    // 0x384cbc: 0x384cb0  tge         $at, $t8, 306
    ctx->pc = 0x384cbcu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 24)) { runtime->handleTrap(rdram, ctx); }
label_384cc0:
    // 0x384cc0: 0x384cb8  .word       0x00384CB8                   # dsll        $t1, $t8, 18 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x384cc0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 24) << 18);
label_384cc4:
    // 0x384cc4: 0x384cb8  .word       0x00384CB8                   # dsll        $t1, $t8, 18 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x384cc4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 24) << 18);
label_384cc8:
    // 0x384cc8: 0x384cc0  .word       0x00384CC0                   # sll         $t1, $t8, 19 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x384cc8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 24), 19));
label_384ccc:
    // 0x384ccc: 0x384cc0  .word       0x00384CC0                   # sll         $t1, $t8, 19 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x384cccu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 24), 19));
label_384cd0:
    // 0x384cd0: 0x384cc8  .word       0x00384CC8                   # jr          $at # 00184CC0 <InstrIdType: CPU_SPECIAL>
label_384cd4:
    if (ctx->pc == 0x384CD4u) {
        ctx->pc = 0x384CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384CD0u;
        // 0x384cd4: 0x384cc8  .word       0x00384CC8                   # jr          $at # 00184CC0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $1 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x384CD8u;
        goto label_384cd8;
    }
    ctx->pc = 0x384CD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x384CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384CD0u;
        // 0x384cd4: 0x384cc8  .word       0x00384CC8                   # jr          $at # 00184CC0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $1 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x384CD0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x384CD8u;
label_384cd8:
    // 0x384cd8: 0x384cd0  .word       0x00384CD0                   # mfhi        $t1 # 003804C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x384cd8u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_384cdc:
    // 0x384cdc: 0x384cd0  .word       0x00384CD0                   # mfhi        $t1 # 003804C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x384cdcu;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_384ce0:
    // 0x384ce0: 0x384cd8  .word       0x00384CD8                   # mult        $t1, $at, $t8 # 000004C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x384ce0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 24); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_384ce4:
    // 0x384ce4: 0x384cd8  .word       0x00384CD8                   # mult        $t1, $at, $t8 # 000004C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x384ce4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 24); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_384ce8:
    // 0x384ce8: 0x384ce0  .word       0x00384CE0                   # add         $t1, $at, $t8 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x384ce8u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 24);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_384cec:
    // 0x384cec: 0x384ce0  .word       0x00384CE0                   # add         $t1, $at, $t8 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x384cecu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 24);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_384cf0:
    // 0x384cf0: 0x384ce8  .word       0x00384CE8                   # mfsa        $t1 # 003804C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x384cf0u;
    SET_GPR_U32(ctx, 9, ctx->sa);
label_384cf4:
    // 0x384cf4: 0x384ce8  .word       0x00384CE8                   # mfsa        $t1 # 003804C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x384cf4u;
    SET_GPR_U32(ctx, 9, ctx->sa);
label_384cf8:
    // 0x384cf8: 0x384cf0  tge         $at, $t8, 307
    ctx->pc = 0x384cf8u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 24)) { runtime->handleTrap(rdram, ctx); }
label_384cfc:
    // 0x384cfc: 0x384cf0  tge         $at, $t8, 307
    ctx->pc = 0x384cfcu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 24)) { runtime->handleTrap(rdram, ctx); }
label_384d00:
    // 0x384d00: 0x384cf8  .word       0x00384CF8                   # dsll        $t1, $t8, 19 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x384d00u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 24) << 19);
label_384d04:
    // 0x384d04: 0x384cf8  .word       0x00384CF8                   # dsll        $t1, $t8, 19 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x384d04u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 24) << 19);
label_384d08:
    // 0x384d08: 0x384d00  .word       0x00384D00                   # sll         $t1, $t8, 20 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x384d08u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 24), 20));
label_384d0c:
    // 0x384d0c: 0x384d00  .word       0x00384D00                   # sll         $t1, $t8, 20 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x384d0cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 24), 20));
label_384d10:
    // 0x384d10: 0x384d08  .word       0x00384D08                   # jr          $at # 00184D00 <InstrIdType: CPU_SPECIAL>
label_384d14:
    if (ctx->pc == 0x384D14u) {
        ctx->pc = 0x384D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384D10u;
        // 0x384d14: 0x384d08  .word       0x00384D08                   # jr          $at # 00184D00 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $1 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x384D18u;
        goto label_384d18;
    }
    ctx->pc = 0x384D10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x384D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384D10u;
        // 0x384d14: 0x384d08  .word       0x00384D08                   # jr          $at # 00184D00 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $1 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x384D10u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x384D18u;
label_384d18:
    // 0x384d18: 0x384d10  .word       0x00384D10                   # mfhi        $t1 # 00380500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x384d18u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_384d1c:
    // 0x384d1c: 0x384d10  .word       0x00384D10                   # mfhi        $t1 # 00380500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x384d1cu;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_384d20:
    // 0x384d20: 0x384d18  .word       0x00384D18                   # mult        $t1, $at, $t8 # 00000500 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x384d20u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 24); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_384d24:
    // 0x384d24: 0x384d18  .word       0x00384D18                   # mult        $t1, $at, $t8 # 00000500 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x384d24u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 24); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_384d28:
    // 0x384d28: 0x384d20  .word       0x00384D20                   # add         $t1, $at, $t8 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x384d28u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 24);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_384d2c:
    // 0x384d2c: 0x384d20  .word       0x00384D20                   # add         $t1, $at, $t8 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x384d2cu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 24);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_384d30:
    // 0x384d30: 0x20000  sll         $zero, $v0, 0
    ctx->pc = 0x384d30u;
    
label_384d34:
    // 0x384d34: 0x0  nop
    ctx->pc = 0x384d34u;
    // NOP
label_384d38:
    // 0x384d38: 0x0  nop
    ctx->pc = 0x384d38u;
    // NOP
label_384d3c:
    // 0x384d3c: 0x0  nop
    ctx->pc = 0x384d3cu;
    // NOP
label_384d40:
    // 0x384d40: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x384d40u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_384d44:
    // 0x384d44: 0x0  nop
    ctx->pc = 0x384d44u;
    // NOP
label_384d48:
    // 0x384d48: 0x0  nop
    ctx->pc = 0x384d48u;
    // NOP
label_384d4c:
    // 0x384d4c: 0x0  nop
    ctx->pc = 0x384d4cu;
    // NOP
label_384d50:
    // 0x384d50: 0x0  nop
    ctx->pc = 0x384d50u;
    // NOP
label_384d54:
    // 0x384d54: 0x0  nop
    ctx->pc = 0x384d54u;
    // NOP
label_384d58:
    // 0x384d58: 0x0  nop
    ctx->pc = 0x384d58u;
    // NOP
label_384d5c:
    // 0x384d5c: 0x0  nop
    ctx->pc = 0x384d5cu;
    // NOP
label_384d60:
    // 0x384d60: 0x0  nop
    ctx->pc = 0x384d60u;
    // NOP
label_384d64:
    // 0x384d64: 0x0  nop
    ctx->pc = 0x384d64u;
    // NOP
label_384d68:
    // 0x384d68: 0x0  nop
    ctx->pc = 0x384d68u;
    // NOP
label_384d6c:
    // 0x384d6c: 0x0  nop
    ctx->pc = 0x384d6cu;
    // NOP
label_384d70:
    // 0x384d70: 0x0  nop
    ctx->pc = 0x384d70u;
    // NOP
label_384d74:
    // 0x384d74: 0x0  nop
    ctx->pc = 0x384d74u;
    // NOP
label_384d78:
    // 0x384d78: 0x0  nop
    ctx->pc = 0x384d78u;
    // NOP
label_384d7c:
    // 0x384d7c: 0x0  nop
    ctx->pc = 0x384d7cu;
    // NOP
label_384d80:
    // 0x384d80: 0x3e803e8  .word       0x03E803E8                   # mfsa        $zero # 03E803C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x384d80u;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_384d84:
    // 0x384d84: 0x3e803e8  .word       0x03E803E8                   # mfsa        $zero # 03E803C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x384d84u;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_384d88:
    // 0x384d88: 0x3e803e8  .word       0x03E803E8                   # mfsa        $zero # 03E803C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x384d88u;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_384d8c:
    // 0x384d8c: 0x3e803e8  .word       0x03E803E8                   # mfsa        $zero # 03E803C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x384d8cu;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_384d90:
    // 0x384d90: 0x3e803e8  .word       0x03E803E8                   # mfsa        $zero # 03E803C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x384d90u;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_384d94:
    // 0x384d94: 0x3e803e8  .word       0x03E803E8                   # mfsa        $zero # 03E803C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x384d94u;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_384d98:
    // 0x384d98: 0x3e803e8  .word       0x03E803E8                   # mfsa        $zero # 03E803C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x384d98u;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_384d9c:
    // 0x384d9c: 0x3e803e8  .word       0x03E803E8                   # mfsa        $zero # 03E803C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x384d9cu;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_384da0:
    // 0x384da0: 0x15  .word       0x00000015                   # INVALID     $zero, $zero, 0x15 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x384da0u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x384DA0 raw=0x00000015");
label_384da4:
    // 0x384da4: 0x42c80000  .word       0x42C80000                   # INVALID     $s6, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x384da4u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x384DA4 raw=0x42C80000");
label_384da8:
    // 0x384da8: 0xc2c80000  ll          $t0, 0x0($s6)
    ctx->pc = 0x384da8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_384dac:
    // 0x384dac: 0x437a0000  .word       0x437A0000                   # INVALID     $k1, $k0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x384dacu;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1B at 0x384DAC raw=0x437A0000");
label_384db0:
    // 0x384db0: 0x0  nop
    ctx->pc = 0x384db0u;
    // NOP
label_384db4:
    // 0x384db4: 0x0  nop
    ctx->pc = 0x384db4u;
    // NOP
label_384db8:
    // 0x384db8: 0x0  nop
    ctx->pc = 0x384db8u;
    // NOP
label_384dbc:
    // 0x384dbc: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x384dbcu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_384dc0:
    // 0x384dc0: 0x16  dsrlv       $zero, $zero, $zero
    ctx->pc = 0x384dc0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_384dc4:
    // 0x384dc4: 0x42c80000  .word       0x42C80000                   # INVALID     $s6, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x384dc4u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x384DC4 raw=0x42C80000");
label_384dc8:
    // 0x384dc8: 0xc2c80000  ll          $t0, 0x0($s6)
    ctx->pc = 0x384dc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_384dcc:
    // 0x384dcc: 0x437a0000  .word       0x437A0000                   # INVALID     $k1, $k0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x384dccu;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1B at 0x384DCC raw=0x437A0000");
label_384dd0:
    // 0x384dd0: 0x0  nop
    ctx->pc = 0x384dd0u;
    // NOP
label_384dd4:
    // 0x384dd4: 0x0  nop
    ctx->pc = 0x384dd4u;
    // NOP
label_384dd8:
    // 0x384dd8: 0x0  nop
    ctx->pc = 0x384dd8u;
    // NOP
label_384ddc:
    // 0x384ddc: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x384ddcu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_384de0:
    // 0x384de0: 0x1000  sll         $v0, $zero, 0
    ctx->pc = 0x384de0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_384de4:
    // 0x384de4: 0x437a0000  .word       0x437A0000                   # INVALID     $k1, $k0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x384de4u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1B at 0x384DE4 raw=0x437A0000");
label_384de8:
    // 0x384de8: 0xc42f0000  lwc1        $f15, 0x0($at)
    ctx->pc = 0x384de8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_384dec:
    // 0x384dec: 0x43340000  .word       0x43340000                   # INVALID     $t9, $s4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x384decu;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x384DEC raw=0x43340000");
label_384df0:
    // 0x384df0: 0x0  nop
    ctx->pc = 0x384df0u;
    // NOP
label_384df4:
    // 0x384df4: 0x0  nop
    ctx->pc = 0x384df4u;
    // NOP
label_384df8:
    // 0x384df8: 0x0  nop
    ctx->pc = 0x384df8u;
    // NOP
label_384dfc:
    // 0x384dfc: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x384dfcu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_384e00:
    // 0x384e00: 0x0  nop
    ctx->pc = 0x384e00u;
    // NOP
label_384e04:
    // 0x384e04: 0x437a0000  .word       0x437A0000                   # INVALID     $k1, $k0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x384e04u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1B at 0x384E04 raw=0x437A0000");
label_384e08:
    // 0x384e08: 0xc42f0000  lwc1        $f15, 0x0($at)
    ctx->pc = 0x384e08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_384e0c:
    // 0x384e0c: 0x43340000  .word       0x43340000                   # INVALID     $t9, $s4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x384e0cu;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x384E0C raw=0x43340000");
label_384e10:
    // 0x384e10: 0x0  nop
    ctx->pc = 0x384e10u;
    // NOP
label_384e14:
    // 0x384e14: 0x0  nop
    ctx->pc = 0x384e14u;
    // NOP
label_384e18:
    // 0x384e18: 0x0  nop
    ctx->pc = 0x384e18u;
    // NOP
label_384e1c:
    // 0x384e1c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x384e1cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_384e20:
    // 0x384e20: 0x100  sll         $zero, $zero, 4
    ctx->pc = 0x384e20u;
    
label_384e24:
    // 0x384e24: 0x437a0000  .word       0x437A0000                   # INVALID     $k1, $k0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x384e24u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1B at 0x384E24 raw=0x437A0000");
label_384e28:
    // 0x384e28: 0xc42f0000  lwc1        $f15, 0x0($at)
    ctx->pc = 0x384e28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_384e2c:
    // 0x384e2c: 0x43340000  .word       0x43340000                   # INVALID     $t9, $s4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x384e2cu;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x384E2C raw=0x43340000");
label_384e30:
    // 0x384e30: 0x0  nop
    ctx->pc = 0x384e30u;
    // NOP
label_384e34:
    // 0x384e34: 0x0  nop
    ctx->pc = 0x384e34u;
    // NOP
label_384e38:
    // 0x384e38: 0x0  nop
    ctx->pc = 0x384e38u;
    // NOP
label_384e3c:
    // 0x384e3c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x384e3cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_384e40:
    // 0x384e40: 0x0  nop
    ctx->pc = 0x384e40u;
    // NOP
label_384e44:
    // 0x384e44: 0x437a0000  .word       0x437A0000                   # INVALID     $k1, $k0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x384e44u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1B at 0x384E44 raw=0x437A0000");
label_384e48:
    // 0x384e48: 0xc42f0000  lwc1        $f15, 0x0($at)
    ctx->pc = 0x384e48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_384e4c:
    // 0x384e4c: 0x43340000  .word       0x43340000                   # INVALID     $t9, $s4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x384e4cu;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x384E4C raw=0x43340000");
label_384e50:
    // 0x384e50: 0x0  nop
    ctx->pc = 0x384e50u;
    // NOP
label_384e54:
    // 0x384e54: 0x0  nop
    ctx->pc = 0x384e54u;
    // NOP
label_384e58:
    // 0x384e58: 0x0  nop
    ctx->pc = 0x384e58u;
    // NOP
label_384e5c:
    // 0x384e5c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x384e5cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_384e60:
    // 0x384e60: 0xc37a0000  ll          $k0, 0x0($k1)
    ctx->pc = 0x384e60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 0); SET_GPR_S32(ctx, 26, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_384e64:
    // 0x384e64: 0xc37a0000  ll          $k0, 0x0($k1)
    ctx->pc = 0x384e64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 0); SET_GPR_S32(ctx, 26, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_384e68:
    // 0x384e68: 0x0  nop
    ctx->pc = 0x384e68u;
    // NOP
label_384e6c:
    // 0x384e6c: 0x437a0000  .word       0x437A0000                   # INVALID     $k1, $k0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x384e6cu;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1B at 0x384E6C raw=0x437A0000");
label_384e70:
    // 0x384e70: 0x437a0000  .word       0x437A0000                   # INVALID     $k1, $k0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x384e70u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1B at 0x384E70 raw=0x437A0000");
label_384e74:
    // 0x384e74: 0x441c4000  mfc1        $gp, $f8
    ctx->pc = 0x384e74u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[8], sizeof(bits)); SET_GPR_U32(ctx, 28, bits); }
label_384e78:
    // 0x384e78: 0x50004  sllv        $zero, $a1, $zero
    ctx->pc = 0x384e78u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 0) & 0x1F));
label_384e7c:
    // 0x384e7c: 0x64  .word       0x00000064                   # and         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x384e7cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_384e80:
    // 0x384e80: 0x804020  add         $t0, $a0, $zero
    ctx->pc = 0x384e80u;
    {     int32_t rs_val = GPR_S32(ctx, 4);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_384e84:
    // 0x384e84: 0x0  nop
    ctx->pc = 0x384e84u;
    // NOP
label_384e88:
    // 0x384e88: 0xd090c08  jal         func_4243020
label_384e8c:
    if (ctx->pc == 0x384E8Cu) {
        ctx->pc = 0x384E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384E88u;
        // 0x384e8c: 0xb07  .word       0x00000B07                   # srav        $at, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_S32(ctx, 1, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x384E90u;
        goto label_384e90;
    }
    ctx->pc = 0x384E88u;
    SET_GPR_U32(ctx, 31, 0x384E90u);
    ctx->pc = 0x384E8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384E88u;
    // 0x384e8c: 0xb07  .word       0x00000B07                   # srav        $at, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL> (Delay Slot)
    SET_GPR_S32(ctx, 1, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4243020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4243020u, 0x384E88u, 0x384E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384E90u;
label_384e90:
    // 0x384e90: 0xe070d06  jal         func_81C3418
label_384e94:
    if (ctx->pc == 0x384E94u) {
        ctx->pc = 0x384E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384E90u;
        // 0x384e94: 0xf08  .word       0x00000F08                   # jr          $zero # 00000F00 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $0 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x384E98u;
        goto label_384e98;
    }
    ctx->pc = 0x384E90u;
    SET_GPR_U32(ctx, 31, 0x384E98u);
    ctx->pc = 0x384E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384E90u;
    // 0x384e94: 0xf08  .word       0x00000F08                   # jr          $zero # 00000F00 <InstrIdType: CPU_SPECIAL> (Delay Slot)
    // JR $0 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x81C3418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x81C3418u, 0x384E90u, 0x384E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384E98u;
label_384e98:
    // 0x384e98: 0xd09  .word       0x00000D09                   # jalr        $at, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
label_384e9c:
    if (ctx->pc == 0x384E9Cu) {
        ctx->pc = 0x384EA0u;
        goto label_384ea0;
    }
    ctx->pc = 0x384E98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 1, 0x384EA0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x384E98u, 0x384EA0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x384EA0u;
label_384ea0:
    // 0x384ea0: 0xc08  .word       0x00000C08                   # jr          $zero # 00000C00 <InstrIdType: CPU_SPECIAL>
label_384ea4:
    if (ctx->pc == 0x384EA4u) {
        ctx->pc = 0x384EA8u;
        goto label_384ea8;
    }
    ctx->pc = 0x384EA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x384EA0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x384EA8u;
label_384ea8:
    // 0x384ea8: 0xb07  .word       0x00000B07                   # srav        $at, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x384ea8u;
    SET_GPR_S32(ctx, 1, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_384eac:
    // 0x384eac: 0x0  nop
    ctx->pc = 0x384eacu;
    // NOP
label_384eb0:
    // 0x384eb0: 0x17161104  bne         $t8, $s6, . + 4 + (0x1104 << 2)
label_384eb4:
    if (ctx->pc == 0x384EB4u) {
        ctx->pc = 0x384EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384EB0u;
        // 0x384eb4: 0x1c1918  .word       0x001C1918                   # mult        $v1, $zero, $gp # 00000100 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 28); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x384EB8u;
        goto label_384eb8;
    }
    ctx->pc = 0x384EB0u;
    {
        const bool branch_taken_0x384eb0 = (GPR_U64(ctx, 24) != GPR_U64(ctx, 22));
        ctx->pc = 0x384EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384EB0u;
        // 0x384eb4: 0x1c1918  .word       0x001C1918                   # mult        $v1, $zero, $gp # 00000100 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 28); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x384eb0) {
            ctx->pc = 0x3892C4u;
            return;
        }
    }
    ctx->pc = 0x384EB8u;
label_384eb8:
    // 0x384eb8: 0x1003  sra         $v0, $zero, 0
    ctx->pc = 0x384eb8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 0), 0));
label_384ebc:
    // 0x384ebc: 0x0  nop
    ctx->pc = 0x384ebcu;
    // NOP
label_384ec0:
    // 0x384ec0: 0xf0e0201  jal         func_C380804
label_384ec4:
    if (ctx->pc == 0x384EC4u) {
        ctx->pc = 0x384EC8u;
        goto label_384ec8;
    }
    ctx->pc = 0x384EC0u;
    SET_GPR_U32(ctx, 31, 0x384EC8u);
    ctx->pc = 0xC380804u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC380804u, 0x384EC0u, 0x384EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384EC8u;
label_384ec8:
    // 0x384ec8: 0x50d0012  .word       0x050D0012                   # INVALID     $t0, $t5, 0x12 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x384ec8u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0xD at 0x384EC8 raw=0x050D0012");
label_384ecc:
    // 0x384ecc: 0x70a0609  tlti        $t8, 0x609
    ctx->pc = 0x384eccu;
    if (GPR_S64(ctx, 24) < (int64_t)(int32_t)1545) { runtime->handleTrap(rdram, ctx); }
label_384ed0:
    // 0x384ed0: 0xc080b  movn        $at, $zero, $t4
    ctx->pc = 0x384ed0u;
    if (GPR_U64(ctx, 12) != 0) SET_GPR_VEC(ctx, 1, GPR_VEC(ctx, 0));
label_384ed4:
    // 0x384ed4: 0x0  nop
    ctx->pc = 0x384ed4u;
    // NOP
label_384ed8:
    // 0x384ed8: 0x151413  .word       0x00151413                   # mtlo        $zero # 00151400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x384ed8u;
    ctx->lo = GPR_U64(ctx, 0);
label_384edc:
    // 0x384edc: 0x0  nop
    ctx->pc = 0x384edcu;
    // NOP
label_384ee0:
    // 0x384ee0: 0x1e1d  .word       0x00001E1D                   # dmultu      $zero, $zero # 00001E00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x384ee0u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x384EE0 raw=0x00001E1D");
label_384ee4:
    // 0x384ee4: 0x0  nop
    ctx->pc = 0x384ee4u;
    // NOP
label_384ee8:
    // 0x384ee8: 0x0  nop
    ctx->pc = 0x384ee8u;
    // NOP
label_384eec:
    // 0x384eec: 0x0  nop
    ctx->pc = 0x384eecu;
    // NOP
label_384ef0:
    // 0x384ef0: 0x123550  .word       0x00123550                   # mfhi        $a2 # 00120540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x384ef0u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_384ef4:
    // 0x384ef4: 0x124610  .word       0x00124610                   # mfhi        $t0 # 00120600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x384ef4u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_384ef8:
    // 0x384ef8: 0x131010  .word       0x00131010                   # mfhi        $v0 # 00130000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x384ef8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_384efc:
    // 0x384efc: 0x132b90  .word       0x00132B90                   # mfhi        $a1 # 00130380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x384efcu;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_384f00:
    // 0x384f00: 0x0  nop
    ctx->pc = 0x384f00u;
    // NOP
label_384f04:
    // 0x384f04: 0x0  nop
    ctx->pc = 0x384f04u;
    // NOP
label_384f08:
    // 0x384f08: 0x0  nop
    ctx->pc = 0x384f08u;
    // NOP
label_384f0c:
    // 0x384f0c: 0x0  nop
    ctx->pc = 0x384f0cu;
    // NOP
label_384f10:
    // 0x384f10: 0x139360  .word       0x00139360                   # add         $s2, $zero, $s3 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x384f10u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 19);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_384f14:
    // 0x384f14: 0x175140  sll         $t2, $s7, 5
    ctx->pc = 0x384f14u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 23), 5));
label_384f18:
    // 0x384f18: 0x0  nop
    ctx->pc = 0x384f18u;
    // NOP
label_384f1c:
    // 0x384f1c: 0x0  nop
    ctx->pc = 0x384f1cu;
    // NOP
label_384f20:
    // 0x384f20: 0x124690  .word       0x00124690                   # mfhi        $t0 # 00120680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x384f20u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_384f24:
    // 0x384f24: 0x124a70  tge         $zero, $s2, 297
    ctx->pc = 0x384f24u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 18)) { runtime->handleTrap(rdram, ctx); }
label_384f28:
    // 0x384f28: 0x124e00  sll         $t1, $s2, 24
    ctx->pc = 0x384f28u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 18), 24));
label_384f2c:
    // 0x384f2c: 0x1253f0  tge         $zero, $s2, 335
    ctx->pc = 0x384f2cu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 18)) { runtime->handleTrap(rdram, ctx); }
label_384f30:
    // 0x384f30: 0x12a550  .word       0x0012A550                   # mfhi        $s4 # 00120540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x384f30u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_384f34:
    // 0x384f34: 0x12af40  sll         $s5, $s2, 29
    ctx->pc = 0x384f34u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 18), 29));
label_384f38:
    // 0x384f38: 0x12b780  sll         $s6, $s2, 30
    ctx->pc = 0x384f38u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 18), 30));
label_384f3c:
    // 0x384f3c: 0x12ba20  .word       0x0012BA20                   # add         $s7, $zero, $s2 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x384f3cu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 18);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
label_384f40:
    // 0x384f40: 0x12bea0  .word       0x0012BEA0                   # add         $s7, $zero, $s2 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x384f40u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 18);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
label_384f44:
    // 0x384f44: 0x12c8a0  .word       0x0012C8A0                   # add         $t9, $zero, $s2 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x384f44u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 18);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 25, (int32_t)result);     } }
label_384f48:
    // 0x384f48: 0x12d520  .word       0x0012D520                   # add         $k0, $zero, $s2 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x384f48u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 18);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 26, (int32_t)result);     } }
label_384f4c:
    // 0x384f4c: 0x12d650  .word       0x0012D650                   # mfhi        $k0 # 00120640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x384f4cu;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_384f50:
    // 0x384f50: 0x12d8c0  sll         $k1, $s2, 3
    ctx->pc = 0x384f50u;
    SET_GPR_S32(ctx, 27, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
label_384f54:
    // 0x384f54: 0x12e1c0  sll         $gp, $s2, 7
    ctx->pc = 0x384f54u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 18), 7));
label_384f58:
    // 0x384f58: 0x12e750  .word       0x0012E750                   # mfhi        $gp # 00120740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x384f58u;
    SET_GPR_U64(ctx, 28, ctx->hi);
label_384f5c:
    // 0x384f5c: 0x12ee90  .word       0x0012EE90                   # mfhi        $sp # 00120680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x384f5cu;
    SET_GPR_U64(ctx, 29, ctx->hi);
label_384f60:
    // 0x384f60: 0x12f140  sll         $fp, $s2, 5
    ctx->pc = 0x384f60u;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
label_384f64:
    // 0x384f64: 0x12f500  sll         $fp, $s2, 20
    ctx->pc = 0x384f64u;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 18), 20));
label_384f68:
    // 0x384f68: 0x12f810  .word       0x0012F810                   # mfhi        $ra # 00120000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x384f68u;
    SET_GPR_U64(ctx, 31, ctx->hi);
label_384f6c:
    // 0x384f6c: 0x12fda0  .word       0x0012FDA0                   # add         $ra, $zero, $s2 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x384f6cu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 18);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 31, (int32_t)result);     } }
label_384f70:
    // 0x384f70: 0x12b270  tge         $zero, $s2, 713
    ctx->pc = 0x384f70u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 18)) { runtime->handleTrap(rdram, ctx); }
label_384f74:
    // 0x384f74: 0x12d2f0  tge         $zero, $s2, 843
    ctx->pc = 0x384f74u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 18)) { runtime->handleTrap(rdram, ctx); }
label_384f78:
    // 0x384f78: 0x12e3f0  tge         $zero, $s2, 911
    ctx->pc = 0x384f78u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 18)) { runtime->handleTrap(rdram, ctx); }
label_384f7c:
    // 0x384f7c: 0x12e630  tge         $zero, $s2, 920
    ctx->pc = 0x384f7cu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 18)) { runtime->handleTrap(rdram, ctx); }
label_384f80:
    // 0x384f80: 0x12acf0  tge         $zero, $s2, 691
    ctx->pc = 0x384f80u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 18)) { runtime->handleTrap(rdram, ctx); }
label_384f84:
    // 0x384f84: 0x130690  .word       0x00130690                   # mfhi        $zero # 00130680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x384f84u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_384f88:
    // 0x384f88: 0x130a10  .word       0x00130A10                   # mfhi        $at # 00130200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x384f88u;
    SET_GPR_U64(ctx, 1, ctx->hi);
label_384f8c:
    // 0x384f8c: 0x130c70  tge         $zero, $s3, 49
    ctx->pc = 0x384f8cu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 19)) { runtime->handleTrap(rdram, ctx); }
label_384f90:
    // 0x384f90: 0x125570  tge         $zero, $s2, 341
    ctx->pc = 0x384f90u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 18)) { runtime->handleTrap(rdram, ctx); }
label_384f94:
    // 0x384f94: 0x0  nop
    ctx->pc = 0x384f94u;
    // NOP
label_384f98:
    // 0x384f98: 0x0  nop
    ctx->pc = 0x384f98u;
    // NOP
label_384f9c:
    // 0x384f9c: 0x0  nop
    ctx->pc = 0x384f9cu;
    // NOP
label_384fa0:
    // 0x384fa0: 0x1246b0  tge         $zero, $s2, 282
    ctx->pc = 0x384fa0u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 18)) { runtime->handleTrap(rdram, ctx); }
label_384fa4:
    // 0x384fa4: 0x124a90  .word       0x00124A90                   # mfhi        $t1 # 00120280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x384fa4u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_384fa8:
    // 0x384fa8: 0x124fc0  sll         $t1, $s2, 31
    ctx->pc = 0x384fa8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 18), 31));
label_384fac:
    // 0x384fac: 0x125410  .word       0x00125410                   # mfhi        $t2 # 00120400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x384facu;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_384fb0:
    // 0x384fb0: 0x12a800  sll         $s5, $s2, 0
    ctx->pc = 0x384fb0u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 18), 0));
label_384fb4:
    // 0x384fb4: 0x12af60  .word       0x0012AF60                   # add         $s5, $zero, $s2 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x384fb4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 18);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 21, (int32_t)result);     } }
label_384fb8:
    // 0x384fb8: 0x12b8a0  .word       0x0012B8A0                   # add         $s7, $zero, $s2 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x384fb8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 18);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
label_384fbc:
    // 0x384fbc: 0x12bb60  .word       0x0012BB60                   # add         $s7, $zero, $s2 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x384fbcu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 18);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
label_384fc0:
    // 0x384fc0: 0x12bec0  sll         $s7, $s2, 27
    ctx->pc = 0x384fc0u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 18), 27));
label_384fc4:
    // 0x384fc4: 0x12c8c0  sll         $t9, $s2, 3
    ctx->pc = 0x384fc4u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
label_384fc8:
    // 0x384fc8: 0x12d540  sll         $k0, $s2, 21
    ctx->pc = 0x384fc8u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 18), 21));
label_384fcc:
    // 0x384fcc: 0x12d670  tge         $zero, $s2, 857
    ctx->pc = 0x384fccu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 18)) { runtime->handleTrap(rdram, ctx); }
label_384fd0:
    // 0x384fd0: 0x12d8e0  .word       0x0012D8E0                   # add         $k1, $zero, $s2 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x384fd0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 18);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 27, (int32_t)result);     } }
label_384fd4:
    // 0x384fd4: 0x12e1e0  .word       0x0012E1E0                   # add         $gp, $zero, $s2 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x384fd4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 18);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 28, (int32_t)result);     } }
label_384fd8:
    // 0x384fd8: 0x12e770  tge         $zero, $s2, 925
    ctx->pc = 0x384fd8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 18)) { runtime->handleTrap(rdram, ctx); }
label_384fdc:
    // 0x384fdc: 0x12ef90  .word       0x0012EF90                   # mfhi        $sp # 00120780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x384fdcu;
    SET_GPR_U64(ctx, 29, ctx->hi);
label_384fe0:
    // 0x384fe0: 0x12f160  .word       0x0012F160                   # add         $fp, $zero, $s2 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x384fe0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 18);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 30, (int32_t)result);     } }
label_384fe4:
    // 0x384fe4: 0x12f520  .word       0x0012F520                   # add         $fp, $zero, $s2 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x384fe4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 18);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 30, (int32_t)result);     } }
label_384fe8:
    // 0x384fe8: 0x12f830  tge         $zero, $s2, 992
    ctx->pc = 0x384fe8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 18)) { runtime->handleTrap(rdram, ctx); }
label_384fec:
    // 0x384fec: 0x12fdc0  sll         $ra, $s2, 23
    ctx->pc = 0x384fecu;
    SET_GPR_S32(ctx, 31, (int32_t)SLL32(GPR_U32(ctx, 18), 23));
label_384ff0:
    // 0x384ff0: 0x12b290  .word       0x0012B290                   # mfhi        $s6 # 00120280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x384ff0u;
    SET_GPR_U64(ctx, 22, ctx->hi);
label_384ff4:
    // 0x384ff4: 0x12d310  .word       0x0012D310                   # mfhi        $k0 # 00120300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x384ff4u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_384ff8:
    // 0x384ff8: 0x12e410  .word       0x0012E410                   # mfhi        $gp # 00120400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x384ff8u;
    SET_GPR_U64(ctx, 28, ctx->hi);
label_384ffc:
    // 0x384ffc: 0x12e650  .word       0x0012E650                   # mfhi        $gp # 00120640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x384ffcu;
    SET_GPR_U64(ctx, 28, ctx->hi);
label_385000:
    // 0x385000: 0x12ad70  tge         $zero, $s2, 693
    ctx->pc = 0x385000u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 18)) { runtime->handleTrap(rdram, ctx); }
label_385004:
    // 0x385004: 0x1306b0  tge         $zero, $s3, 26
    ctx->pc = 0x385004u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 19)) { runtime->handleTrap(rdram, ctx); }
label_385008:
    // 0x385008: 0x130a30  tge         $zero, $s3, 40
    ctx->pc = 0x385008u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 19)) { runtime->handleTrap(rdram, ctx); }
label_38500c:
    // 0x38500c: 0x130c90  .word       0x00130C90                   # mfhi        $at # 00130480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x38500cu;
    SET_GPR_U64(ctx, 1, ctx->hi);
label_385010:
    // 0x385010: 0x125590  .word       0x00125590                   # mfhi        $t2 # 00120580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x385010u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_385014:
    // 0x385014: 0x0  nop
    ctx->pc = 0x385014u;
    // NOP
label_385018:
    // 0x385018: 0x0  nop
    ctx->pc = 0x385018u;
    // NOP
label_38501c:
    // 0x38501c: 0x0  nop
    ctx->pc = 0x38501cu;
    // NOP
label_385020:
    // 0x385020: 0x132c10  .word       0x00132C10                   # mfhi        $a1 # 00130400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x385020u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_385024:
    // 0x385024: 0x133070  tge         $zero, $s3, 193
    ctx->pc = 0x385024u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 19)) { runtime->handleTrap(rdram, ctx); }
label_385028:
    // 0x385028: 0x1334d0  .word       0x001334D0                   # mfhi        $a2 # 001304C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x385028u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_38502c:
    // 0x38502c: 0x133950  .word       0x00133950                   # mfhi        $a3 # 00130140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x38502cu;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_385030:
    // 0x385030: 0x133da0  .word       0x00133DA0                   # add         $a3, $zero, $s3 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x385030u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 19);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
label_385034:
    // 0x385034: 0x0  nop
    ctx->pc = 0x385034u;
    // NOP
label_385038:
    // 0x385038: 0x0  nop
    ctx->pc = 0x385038u;
    // NOP
label_38503c:
    // 0x38503c: 0x0  nop
    ctx->pc = 0x38503cu;
    // NOP
label_385040:
    // 0x385040: 0x132c30  tge         $zero, $s3, 176
    ctx->pc = 0x385040u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 19)) { runtime->handleTrap(rdram, ctx); }
label_385044:
    // 0x385044: 0x133090  .word       0x00133090                   # mfhi        $a2 # 00130080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x385044u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_385048:
    // 0x385048: 0x1334f0  tge         $zero, $s3, 211
    ctx->pc = 0x385048u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 19)) { runtime->handleTrap(rdram, ctx); }
label_38504c:
    // 0x38504c: 0x133970  tge         $zero, $s3, 229
    ctx->pc = 0x38504cu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 19)) { runtime->handleTrap(rdram, ctx); }
label_385050:
    // 0x385050: 0x133dc0  sll         $a3, $s3, 23
    ctx->pc = 0x385050u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 19), 23));
label_385054:
    // 0x385054: 0x0  nop
    ctx->pc = 0x385054u;
    // NOP
label_385058:
    // 0x385058: 0x0  nop
    ctx->pc = 0x385058u;
    // NOP
label_38505c:
    // 0x38505c: 0x0  nop
    ctx->pc = 0x38505cu;
    // NOP
label_385060:
    // 0x385060: 0x131090  .word       0x00131090                   # mfhi        $v0 # 00130080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x385060u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_385064:
    // 0x385064: 0x131370  tge         $zero, $s3, 77
    ctx->pc = 0x385064u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 19)) { runtime->handleTrap(rdram, ctx); }
label_385068:
    // 0x385068: 0x131760  .word       0x00131760                   # add         $v0, $zero, $s3 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x385068u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 19);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
label_38506c:
    // 0x38506c: 0x131b50  .word       0x00131B50                   # mfhi        $v1 # 00130340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x38506cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_385070:
    // 0x385070: 0x131df0  tge         $zero, $s3, 119
    ctx->pc = 0x385070u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 19)) { runtime->handleTrap(rdram, ctx); }
label_385074:
    // 0x385074: 0x132490  .word       0x00132490                   # mfhi        $a0 # 00130480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x385074u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_385078:
    // 0x385078: 0x0  nop
    ctx->pc = 0x385078u;
    // NOP
label_38507c:
    // 0x38507c: 0x0  nop
    ctx->pc = 0x38507cu;
    // NOP
label_385080:
    // 0x385080: 0x1310b0  tge         $zero, $s3, 66
    ctx->pc = 0x385080u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 19)) { runtime->handleTrap(rdram, ctx); }
label_385084:
    // 0x385084: 0x131390  .word       0x00131390                   # mfhi        $v0 # 00130380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x385084u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_385088:
    // 0x385088: 0x131780  sll         $v0, $s3, 30
    ctx->pc = 0x385088u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 30));
label_38508c:
    // 0x38508c: 0x131b70  tge         $zero, $s3, 109
    ctx->pc = 0x38508cu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 19)) { runtime->handleTrap(rdram, ctx); }
label_385090:
    // 0x385090: 0x131e10  .word       0x00131E10                   # mfhi        $v1 # 00130600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x385090u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_385094:
    // 0x385094: 0x1324b0  tge         $zero, $s3, 146
    ctx->pc = 0x385094u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 19)) { runtime->handleTrap(rdram, ctx); }
label_385098:
    // 0x385098: 0x1398f0  tge         $zero, $s3, 611
    ctx->pc = 0x385098u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 19)) { runtime->handleTrap(rdram, ctx); }
label_38509c:
    // 0x38509c: 0x139df0  tge         $zero, $s3, 631
    ctx->pc = 0x38509cu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 19)) { runtime->handleTrap(rdram, ctx); }
label_3850a0:
    // 0x3850a0: 0x13a2f0  tge         $zero, $s3, 651
    ctx->pc = 0x3850a0u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 19)) { runtime->handleTrap(rdram, ctx); }
label_3850a4:
    // 0x3850a4: 0x0  nop
    ctx->pc = 0x3850a4u;
    // NOP
label_3850a8:
    // 0x3850a8: 0x13b2f0  tge         $zero, $s3, 715
    ctx->pc = 0x3850a8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 19)) { runtime->handleTrap(rdram, ctx); }
label_3850ac:
    // 0x3850ac: 0x13b3f0  tge         $zero, $s3, 719
    ctx->pc = 0x3850acu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 19)) { runtime->handleTrap(rdram, ctx); }
label_3850b0:
    // 0x3850b0: 0x1393b0  tge         $zero, $s3, 590
    ctx->pc = 0x3850b0u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 19)) { runtime->handleTrap(rdram, ctx); }
label_3850b4:
    // 0x3850b4: 0x139610  .word       0x00139610                   # mfhi        $s2 # 00130600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3850b4u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_3850b8:
    // 0x3850b8: 0x1398b0  tge         $zero, $s3, 610
    ctx->pc = 0x3850b8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 19)) { runtime->handleTrap(rdram, ctx); }
label_3850bc:
    // 0x3850bc: 0x1398d0  .word       0x001398D0                   # mfhi        $s3 # 001300C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3850bcu;
    SET_GPR_U64(ctx, 19, ctx->hi);
label_3850c0:
    // 0x3850c0: 0x0  nop
    ctx->pc = 0x3850c0u;
    // NOP
label_3850c4:
    // 0x3850c4: 0x42480000  .word       0x42480000                   # INVALID     $s2, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3850c4u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x3850C4 raw=0x42480000");
label_3850c8:
    // 0x3850c8: 0x0  nop
    ctx->pc = 0x3850c8u;
    // NOP
label_3850cc:
    // 0x3850cc: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3850ccu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_3850d0:
    // 0x3850d0: 0x80300000  lb          $s0, 0x0($at)
    ctx->pc = 0x3850d0u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 0)));
label_3850d4:
    // 0x3850d4: 0x0  nop
    ctx->pc = 0x3850d4u;
    // NOP
label_3850d8:
    // 0x3850d8: 0x0  nop
    ctx->pc = 0x3850d8u;
    // NOP
label_3850dc:
    // 0x3850dc: 0x0  nop
    ctx->pc = 0x3850dcu;
    // NOP
label_3850e0:
    // 0x3850e0: 0x44  .word       0x00000044                   # sllv        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3850e0u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_3850e4:
    // 0x3850e4: 0x80  sll         $zero, $zero, 2
    ctx->pc = 0x3850e4u;
    
label_3850e8:
    // 0x3850e8: 0x68  .word       0x00000068                   # mfsa        $zero # 00000040 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3850e8u;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_3850ec:
    // 0x3850ec: 0x80  sll         $zero, $zero, 2
    ctx->pc = 0x3850ecu;
    
label_3850f0:
    // 0x3850f0: 0xa4  .word       0x000000A4                   # and         $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3850f0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_3850f4:
    // 0x3850f4: 0x80  sll         $zero, $zero, 2
    ctx->pc = 0x3850f4u;
    
label_3850f8:
    // 0x3850f8: 0xa1  .word       0x000000A1                   # addu        $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3850f8u;
    SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_3850fc:
    // 0x3850fc: 0x80  sll         $zero, $zero, 2
    ctx->pc = 0x3850fcu;
    
label_385100:
    // 0x385100: 0x9  jalr        $zero, $zero
label_385104:
    if (ctx->pc == 0x385104u) {
        ctx->pc = 0x385104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385100u;
        // 0x385104: 0x80  sll         $zero, $zero, 2 (Delay Slot)
        ctx->in_delay_slot = false;
        ctx->pc = 0x385108u;
        goto label_385108;
    }
    ctx->pc = 0x385100u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x385104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385100u;
        // 0x385104: 0x80  sll         $zero, $zero, 2 (Delay Slot)
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x385100u, 0x385108u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x385108u;
label_385108:
    // 0x385108: 0x48  .word       0x00000048                   # jr          $zero # 00000040 <InstrIdType: CPU_SPECIAL>
label_38510c:
    if (ctx->pc == 0x38510Cu) {
        ctx->pc = 0x38510Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385108u;
        // 0x38510c: 0x80  sll         $zero, $zero, 2 (Delay Slot)
        ctx->in_delay_slot = false;
        ctx->pc = 0x385110u;
        goto label_385110;
    }
    ctx->pc = 0x385108u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x38510Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385108u;
        // 0x38510c: 0x80  sll         $zero, $zero, 2 (Delay Slot)
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x385108u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x385110u;
label_385110:
    // 0x385110: 0x42  srl         $zero, $zero, 1
    ctx->pc = 0x385110u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 1));
label_385114:
    // 0x385114: 0x80  sll         $zero, $zero, 2
    ctx->pc = 0x385114u;
    
label_385118:
    // 0x385118: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x385118u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_38511c:
    // 0x38511c: 0x80  sll         $zero, $zero, 2
    ctx->pc = 0x38511cu;
    
label_385120:
    // 0x385120: 0x89  .word       0x00000089                   # jalr        $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
label_385124:
    if (ctx->pc == 0x385124u) {
        ctx->pc = 0x385124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385120u;
        // 0x385124: 0x80  sll         $zero, $zero, 2 (Delay Slot)
        ctx->in_delay_slot = false;
        ctx->pc = 0x385128u;
        goto label_385128;
    }
    ctx->pc = 0x385120u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x385124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385120u;
        // 0x385124: 0x80  sll         $zero, $zero, 2 (Delay Slot)
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x385120u, 0x385128u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x385128u;
label_385128:
    // 0x385128: 0x49  .word       0x00000049                   # jalr        $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
label_38512c:
    if (ctx->pc == 0x38512Cu) {
        ctx->pc = 0x38512Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385128u;
        // 0x38512c: 0x80  sll         $zero, $zero, 2 (Delay Slot)
        ctx->in_delay_slot = false;
        ctx->pc = 0x385130u;
        goto label_385130;
    }
    ctx->pc = 0x385128u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x38512Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385128u;
        // 0x38512c: 0x80  sll         $zero, $zero, 2 (Delay Slot)
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x385128u, 0x385130u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x385130u;
label_385130:
    // 0x385130: 0x2a  slt         $zero, $zero, $zero
    ctx->pc = 0x385130u;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_385134:
    // 0x385134: 0x80  sll         $zero, $zero, 2
    ctx->pc = 0x385134u;
    
label_385138:
    // 0x385138: 0x64  .word       0x00000064                   # and         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x385138u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_38513c:
    // 0x38513c: 0x80  sll         $zero, $zero, 2
    ctx->pc = 0x38513cu;
    
label_385140:
    // 0x385140: 0x0  nop
    ctx->pc = 0x385140u;
    // NOP
label_385144:
    // 0x385144: 0x0  nop
    ctx->pc = 0x385144u;
    // NOP
label_385148:
    // 0x385148: 0x0  nop
    ctx->pc = 0x385148u;
    // NOP
label_38514c:
    // 0x38514c: 0x0  nop
    ctx->pc = 0x38514cu;
    // NOP
label_385150:
    // 0x385150: 0x0  nop
    ctx->pc = 0x385150u;
    // NOP
label_385154:
    // 0x385154: 0x0  nop
    ctx->pc = 0x385154u;
    // NOP
label_385158:
    // 0x385158: 0x0  nop
    ctx->pc = 0x385158u;
    // NOP
label_38515c:
    // 0x38515c: 0x0  nop
    ctx->pc = 0x38515cu;
    // NOP
label_385160:
    // 0x385160: 0x1402f0  tge         $zero, $s4, 11
    ctx->pc = 0x385160u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 20)) { runtime->handleTrap(rdram, ctx); }
label_385164:
    // 0x385164: 0x1404e0  .word       0x001404E0                   # add         $zero, $zero, $s4 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x385164u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 20);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_385168:
    // 0x385168: 0x140810  .word       0x00140810                   # mfhi        $at # 00140000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x385168u;
    SET_GPR_U64(ctx, 1, ctx->hi);
label_38516c:
    // 0x38516c: 0x141590  .word       0x00141590                   # mfhi        $v0 # 00140580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x38516cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_385170:
    // 0x385170: 0x3c  dsll32      $zero, $zero, 0
    ctx->pc = 0x385170u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (32 + 0));
label_385174:
    // 0x385174: 0x0  nop
    ctx->pc = 0x385174u;
    // NOP
label_385178:
    // 0x385178: 0x0  nop
    ctx->pc = 0x385178u;
    // NOP
label_38517c:
    // 0x38517c: 0x0  nop
    ctx->pc = 0x38517cu;
    // NOP
label_385180:
    // 0x385180: 0x0  nop
    ctx->pc = 0x385180u;
    // NOP
label_385184:
    // 0x385184: 0x0  nop
    ctx->pc = 0x385184u;
    // NOP
label_385188:
    // 0x385188: 0x0  nop
    ctx->pc = 0x385188u;
    // NOP
label_38518c:
    // 0x38518c: 0x0  nop
    ctx->pc = 0x38518cu;
    // NOP
label_385190:
    // 0x385190: 0x1010101  .word       0x01010101                   # INVALID     $t0, $at, 0x101 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x385190u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x385190 raw=0x01010101");
label_385194:
    // 0x385194: 0x1010101  .word       0x01010101                   # INVALID     $t0, $at, 0x101 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x385194u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x385194 raw=0x01010101");
label_385198:
    // 0x385198: 0x0  nop
    ctx->pc = 0x385198u;
    // NOP
label_38519c:
    // 0x38519c: 0x0  nop
    ctx->pc = 0x38519cu;
    // NOP
label_3851a0:
    // 0x3851a0: 0x0  nop
    ctx->pc = 0x3851a0u;
    // NOP
label_3851a4:
    // 0x3851a4: 0x0  nop
    ctx->pc = 0x3851a4u;
    // NOP
label_3851a8:
    // 0x3851a8: 0x0  nop
    ctx->pc = 0x3851a8u;
    // NOP
label_3851ac:
    // 0x3851ac: 0x0  nop
    ctx->pc = 0x3851acu;
    // NOP
label_3851b0:
    // 0x3851b0: 0x77  .word       0x00000077                   # INVALID     $zero, $zero, 0x77 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3851b0u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x3851B0 raw=0x00000077");
label_3851b4:
    // 0x3851b4: 0x78  dsll        $zero, $zero, 1
    ctx->pc = 0x3851b4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << 1);
label_3851b8:
    // 0x3851b8: 0x79  .word       0x00000079                   # INVALID     $zero, $zero, 0x79 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3851b8u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x3851B8 raw=0x00000079");
label_3851bc:
    // 0x3851bc: 0x7a  dsrl        $zero, $zero, 1
    ctx->pc = 0x3851bcu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> 1);
label_3851c0:
    // 0x3851c0: 0x7b  dsra        $zero, $zero, 1
    ctx->pc = 0x3851c0u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> 1);
label_3851c4:
    // 0x3851c4: 0x0  nop
    ctx->pc = 0x3851c4u;
    // NOP
label_3851c8:
    // 0x3851c8: 0x0  nop
    ctx->pc = 0x3851c8u;
    // NOP
label_3851cc:
    // 0x3851cc: 0x0  nop
    ctx->pc = 0x3851ccu;
    // NOP
    ctx->pc = 0x3851d0u;
}
