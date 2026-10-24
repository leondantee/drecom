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

// Function: Em0c_R0_move
// Address: 0x224130 - 0x224ad4
void Em0c_R0_move_0x224130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0c_R0_move_0x224130");
#endif

    switch (ctx->pc) {
        case 0x224130u: goto label_224130;
        case 0x224134u: goto label_224134;
        case 0x224138u: goto label_224138;
        case 0x22413cu: goto label_22413c;
        case 0x224140u: goto label_224140;
        case 0x224144u: goto label_224144;
        case 0x224148u: goto label_224148;
        case 0x22414cu: goto label_22414c;
        case 0x224150u: goto label_224150;
        case 0x224154u: goto label_224154;
        case 0x224158u: goto label_224158;
        case 0x22415cu: goto label_22415c;
        case 0x224160u: goto label_224160;
        case 0x224164u: goto label_224164;
        case 0x224168u: goto label_224168;
        case 0x22416cu: goto label_22416c;
        case 0x224170u: goto label_224170;
        case 0x224174u: goto label_224174;
        case 0x224178u: goto label_224178;
        case 0x22417cu: goto label_22417c;
        case 0x224180u: goto label_224180;
        case 0x224184u: goto label_224184;
        case 0x224188u: goto label_224188;
        case 0x22418cu: goto label_22418c;
        case 0x224190u: goto label_224190;
        case 0x224194u: goto label_224194;
        case 0x224198u: goto label_224198;
        case 0x22419cu: goto label_22419c;
        case 0x2241a0u: goto label_2241a0;
        case 0x2241a4u: goto label_2241a4;
        case 0x2241a8u: goto label_2241a8;
        case 0x2241acu: goto label_2241ac;
        case 0x2241b0u: goto label_2241b0;
        case 0x2241b4u: goto label_2241b4;
        case 0x2241b8u: goto label_2241b8;
        case 0x2241bcu: goto label_2241bc;
        case 0x2241c0u: goto label_2241c0;
        case 0x2241c4u: goto label_2241c4;
        case 0x2241c8u: goto label_2241c8;
        case 0x2241ccu: goto label_2241cc;
        case 0x2241d0u: goto label_2241d0;
        case 0x2241d4u: goto label_2241d4;
        case 0x2241d8u: goto label_2241d8;
        case 0x2241dcu: goto label_2241dc;
        case 0x2241e0u: goto label_2241e0;
        case 0x2241e4u: goto label_2241e4;
        case 0x2241e8u: goto label_2241e8;
        case 0x2241ecu: goto label_2241ec;
        case 0x2241f0u: goto label_2241f0;
        case 0x2241f4u: goto label_2241f4;
        case 0x2241f8u: goto label_2241f8;
        case 0x2241fcu: goto label_2241fc;
        case 0x224200u: goto label_224200;
        case 0x224204u: goto label_224204;
        case 0x224208u: goto label_224208;
        case 0x22420cu: goto label_22420c;
        case 0x224210u: goto label_224210;
        case 0x224214u: goto label_224214;
        case 0x224218u: goto label_224218;
        case 0x22421cu: goto label_22421c;
        case 0x224220u: goto label_224220;
        case 0x224224u: goto label_224224;
        case 0x224228u: goto label_224228;
        case 0x22422cu: goto label_22422c;
        case 0x224230u: goto label_224230;
        case 0x224234u: goto label_224234;
        case 0x224238u: goto label_224238;
        case 0x22423cu: goto label_22423c;
        case 0x224240u: goto label_224240;
        case 0x224244u: goto label_224244;
        case 0x224248u: goto label_224248;
        case 0x22424cu: goto label_22424c;
        case 0x224250u: goto label_224250;
        case 0x224254u: goto label_224254;
        case 0x224258u: goto label_224258;
        case 0x22425cu: goto label_22425c;
        case 0x224260u: goto label_224260;
        case 0x224264u: goto label_224264;
        case 0x224268u: goto label_224268;
        case 0x22426cu: goto label_22426c;
        case 0x224270u: goto label_224270;
        case 0x224274u: goto label_224274;
        case 0x224278u: goto label_224278;
        case 0x22427cu: goto label_22427c;
        case 0x224280u: goto label_224280;
        case 0x224284u: goto label_224284;
        case 0x224288u: goto label_224288;
        case 0x22428cu: goto label_22428c;
        case 0x224290u: goto label_224290;
        case 0x224294u: goto label_224294;
        case 0x224298u: goto label_224298;
        case 0x22429cu: goto label_22429c;
        case 0x2242a0u: goto label_2242a0;
        case 0x2242a4u: goto label_2242a4;
        case 0x2242a8u: goto label_2242a8;
        case 0x2242acu: goto label_2242ac;
        case 0x2242b0u: goto label_2242b0;
        case 0x2242b4u: goto label_2242b4;
        case 0x2242b8u: goto label_2242b8;
        case 0x2242bcu: goto label_2242bc;
        case 0x2242c0u: goto label_2242c0;
        case 0x2242c4u: goto label_2242c4;
        case 0x2242c8u: goto label_2242c8;
        case 0x2242ccu: goto label_2242cc;
        case 0x2242d0u: goto label_2242d0;
        case 0x2242d4u: goto label_2242d4;
        case 0x2242d8u: goto label_2242d8;
        case 0x2242dcu: goto label_2242dc;
        case 0x2242e0u: goto label_2242e0;
        case 0x2242e4u: goto label_2242e4;
        case 0x2242e8u: goto label_2242e8;
        case 0x2242ecu: goto label_2242ec;
        case 0x2242f0u: goto label_2242f0;
        case 0x2242f4u: goto label_2242f4;
        case 0x2242f8u: goto label_2242f8;
        case 0x2242fcu: goto label_2242fc;
        case 0x224300u: goto label_224300;
        case 0x224304u: goto label_224304;
        case 0x224308u: goto label_224308;
        case 0x22430cu: goto label_22430c;
        case 0x224310u: goto label_224310;
        case 0x224314u: goto label_224314;
        case 0x224318u: goto label_224318;
        case 0x22431cu: goto label_22431c;
        case 0x224320u: goto label_224320;
        case 0x224324u: goto label_224324;
        case 0x224328u: goto label_224328;
        case 0x22432cu: goto label_22432c;
        case 0x224330u: goto label_224330;
        case 0x224334u: goto label_224334;
        case 0x224338u: goto label_224338;
        case 0x22433cu: goto label_22433c;
        case 0x224340u: goto label_224340;
        case 0x224344u: goto label_224344;
        case 0x224348u: goto label_224348;
        case 0x22434cu: goto label_22434c;
        case 0x224350u: goto label_224350;
        case 0x224354u: goto label_224354;
        case 0x224358u: goto label_224358;
        case 0x22435cu: goto label_22435c;
        case 0x224360u: goto label_224360;
        case 0x224364u: goto label_224364;
        case 0x224368u: goto label_224368;
        case 0x22436cu: goto label_22436c;
        case 0x224370u: goto label_224370;
        case 0x224374u: goto label_224374;
        case 0x224378u: goto label_224378;
        case 0x22437cu: goto label_22437c;
        case 0x224380u: goto label_224380;
        case 0x224384u: goto label_224384;
        case 0x224388u: goto label_224388;
        case 0x22438cu: goto label_22438c;
        case 0x224390u: goto label_224390;
        case 0x224394u: goto label_224394;
        case 0x224398u: goto label_224398;
        case 0x22439cu: goto label_22439c;
        case 0x2243a0u: goto label_2243a0;
        case 0x2243a4u: goto label_2243a4;
        case 0x2243a8u: goto label_2243a8;
        case 0x2243acu: goto label_2243ac;
        case 0x2243b0u: goto label_2243b0;
        case 0x2243b4u: goto label_2243b4;
        case 0x2243b8u: goto label_2243b8;
        case 0x2243bcu: goto label_2243bc;
        case 0x2243c0u: goto label_2243c0;
        case 0x2243c4u: goto label_2243c4;
        case 0x2243c8u: goto label_2243c8;
        case 0x2243ccu: goto label_2243cc;
        case 0x2243d0u: goto label_2243d0;
        case 0x2243d4u: goto label_2243d4;
        case 0x2243d8u: goto label_2243d8;
        case 0x2243dcu: goto label_2243dc;
        case 0x2243e0u: goto label_2243e0;
        case 0x2243e4u: goto label_2243e4;
        case 0x2243e8u: goto label_2243e8;
        case 0x2243ecu: goto label_2243ec;
        case 0x2243f0u: goto label_2243f0;
        case 0x2243f4u: goto label_2243f4;
        case 0x2243f8u: goto label_2243f8;
        case 0x2243fcu: goto label_2243fc;
        case 0x224400u: goto label_224400;
        case 0x224404u: goto label_224404;
        case 0x224408u: goto label_224408;
        case 0x22440cu: goto label_22440c;
        case 0x224410u: goto label_224410;
        case 0x224414u: goto label_224414;
        case 0x224418u: goto label_224418;
        case 0x22441cu: goto label_22441c;
        case 0x224420u: goto label_224420;
        case 0x224424u: goto label_224424;
        case 0x224428u: goto label_224428;
        case 0x22442cu: goto label_22442c;
        case 0x224430u: goto label_224430;
        case 0x224434u: goto label_224434;
        case 0x224438u: goto label_224438;
        case 0x22443cu: goto label_22443c;
        case 0x224440u: goto label_224440;
        case 0x224444u: goto label_224444;
        case 0x224448u: goto label_224448;
        case 0x22444cu: goto label_22444c;
        case 0x224450u: goto label_224450;
        case 0x224454u: goto label_224454;
        case 0x224458u: goto label_224458;
        case 0x22445cu: goto label_22445c;
        case 0x224460u: goto label_224460;
        case 0x224464u: goto label_224464;
        case 0x224468u: goto label_224468;
        case 0x22446cu: goto label_22446c;
        case 0x224470u: goto label_224470;
        case 0x224474u: goto label_224474;
        case 0x224478u: goto label_224478;
        case 0x22447cu: goto label_22447c;
        case 0x224480u: goto label_224480;
        case 0x224484u: goto label_224484;
        case 0x224488u: goto label_224488;
        case 0x22448cu: goto label_22448c;
        case 0x224490u: goto label_224490;
        case 0x224494u: goto label_224494;
        case 0x224498u: goto label_224498;
        case 0x22449cu: goto label_22449c;
        case 0x2244a0u: goto label_2244a0;
        case 0x2244a4u: goto label_2244a4;
        case 0x2244a8u: goto label_2244a8;
        case 0x2244acu: goto label_2244ac;
        case 0x2244b0u: goto label_2244b0;
        case 0x2244b4u: goto label_2244b4;
        case 0x2244b8u: goto label_2244b8;
        case 0x2244bcu: goto label_2244bc;
        case 0x2244c0u: goto label_2244c0;
        case 0x2244c4u: goto label_2244c4;
        case 0x2244c8u: goto label_2244c8;
        case 0x2244ccu: goto label_2244cc;
        case 0x2244d0u: goto label_2244d0;
        case 0x2244d4u: goto label_2244d4;
        case 0x2244d8u: goto label_2244d8;
        case 0x2244dcu: goto label_2244dc;
        case 0x2244e0u: goto label_2244e0;
        case 0x2244e4u: goto label_2244e4;
        case 0x2244e8u: goto label_2244e8;
        case 0x2244ecu: goto label_2244ec;
        case 0x2244f0u: goto label_2244f0;
        case 0x2244f4u: goto label_2244f4;
        case 0x2244f8u: goto label_2244f8;
        case 0x2244fcu: goto label_2244fc;
        case 0x224500u: goto label_224500;
        case 0x224504u: goto label_224504;
        case 0x224508u: goto label_224508;
        case 0x22450cu: goto label_22450c;
        case 0x224510u: goto label_224510;
        case 0x224514u: goto label_224514;
        case 0x224518u: goto label_224518;
        case 0x22451cu: goto label_22451c;
        case 0x224520u: goto label_224520;
        case 0x224524u: goto label_224524;
        case 0x224528u: goto label_224528;
        case 0x22452cu: goto label_22452c;
        case 0x224530u: goto label_224530;
        case 0x224534u: goto label_224534;
        case 0x224538u: goto label_224538;
        case 0x22453cu: goto label_22453c;
        case 0x224540u: goto label_224540;
        case 0x224544u: goto label_224544;
        case 0x224548u: goto label_224548;
        case 0x22454cu: goto label_22454c;
        case 0x224550u: goto label_224550;
        case 0x224554u: goto label_224554;
        case 0x224558u: goto label_224558;
        case 0x22455cu: goto label_22455c;
        case 0x224560u: goto label_224560;
        case 0x224564u: goto label_224564;
        case 0x224568u: goto label_224568;
        case 0x22456cu: goto label_22456c;
        case 0x224570u: goto label_224570;
        case 0x224574u: goto label_224574;
        case 0x224578u: goto label_224578;
        case 0x22457cu: goto label_22457c;
        case 0x224580u: goto label_224580;
        case 0x224584u: goto label_224584;
        case 0x224588u: goto label_224588;
        case 0x22458cu: goto label_22458c;
        case 0x224590u: goto label_224590;
        case 0x224594u: goto label_224594;
        case 0x224598u: goto label_224598;
        case 0x22459cu: goto label_22459c;
        case 0x2245a0u: goto label_2245a0;
        case 0x2245a4u: goto label_2245a4;
        case 0x2245a8u: goto label_2245a8;
        case 0x2245acu: goto label_2245ac;
        case 0x2245b0u: goto label_2245b0;
        case 0x2245b4u: goto label_2245b4;
        case 0x2245b8u: goto label_2245b8;
        case 0x2245bcu: goto label_2245bc;
        case 0x2245c0u: goto label_2245c0;
        case 0x2245c4u: goto label_2245c4;
        case 0x2245c8u: goto label_2245c8;
        case 0x2245ccu: goto label_2245cc;
        case 0x2245d0u: goto label_2245d0;
        case 0x2245d4u: goto label_2245d4;
        case 0x2245d8u: goto label_2245d8;
        case 0x2245dcu: goto label_2245dc;
        case 0x2245e0u: goto label_2245e0;
        case 0x2245e4u: goto label_2245e4;
        case 0x2245e8u: goto label_2245e8;
        case 0x2245ecu: goto label_2245ec;
        case 0x2245f0u: goto label_2245f0;
        case 0x2245f4u: goto label_2245f4;
        case 0x2245f8u: goto label_2245f8;
        case 0x2245fcu: goto label_2245fc;
        case 0x224600u: goto label_224600;
        case 0x224604u: goto label_224604;
        case 0x224608u: goto label_224608;
        case 0x22460cu: goto label_22460c;
        case 0x224610u: goto label_224610;
        case 0x224614u: goto label_224614;
        case 0x224618u: goto label_224618;
        case 0x22461cu: goto label_22461c;
        case 0x224620u: goto label_224620;
        case 0x224624u: goto label_224624;
        case 0x224628u: goto label_224628;
        case 0x22462cu: goto label_22462c;
        case 0x224630u: goto label_224630;
        case 0x224634u: goto label_224634;
        case 0x224638u: goto label_224638;
        case 0x22463cu: goto label_22463c;
        case 0x224640u: goto label_224640;
        case 0x224644u: goto label_224644;
        case 0x224648u: goto label_224648;
        case 0x22464cu: goto label_22464c;
        case 0x224650u: goto label_224650;
        case 0x224654u: goto label_224654;
        case 0x224658u: goto label_224658;
        case 0x22465cu: goto label_22465c;
        case 0x224660u: goto label_224660;
        case 0x224664u: goto label_224664;
        case 0x224668u: goto label_224668;
        case 0x22466cu: goto label_22466c;
        case 0x224670u: goto label_224670;
        case 0x224674u: goto label_224674;
        case 0x224678u: goto label_224678;
        case 0x22467cu: goto label_22467c;
        case 0x224680u: goto label_224680;
        case 0x224684u: goto label_224684;
        case 0x224688u: goto label_224688;
        case 0x22468cu: goto label_22468c;
        case 0x224690u: goto label_224690;
        case 0x224694u: goto label_224694;
        case 0x224698u: goto label_224698;
        case 0x22469cu: goto label_22469c;
        case 0x2246a0u: goto label_2246a0;
        case 0x2246a4u: goto label_2246a4;
        case 0x2246a8u: goto label_2246a8;
        case 0x2246acu: goto label_2246ac;
        case 0x2246b0u: goto label_2246b0;
        case 0x2246b4u: goto label_2246b4;
        case 0x2246b8u: goto label_2246b8;
        case 0x2246bcu: goto label_2246bc;
        case 0x2246c0u: goto label_2246c0;
        case 0x2246c4u: goto label_2246c4;
        case 0x2246c8u: goto label_2246c8;
        case 0x2246ccu: goto label_2246cc;
        case 0x2246d0u: goto label_2246d0;
        case 0x2246d4u: goto label_2246d4;
        case 0x2246d8u: goto label_2246d8;
        case 0x2246dcu: goto label_2246dc;
        case 0x2246e0u: goto label_2246e0;
        case 0x2246e4u: goto label_2246e4;
        case 0x2246e8u: goto label_2246e8;
        case 0x2246ecu: goto label_2246ec;
        case 0x2246f0u: goto label_2246f0;
        case 0x2246f4u: goto label_2246f4;
        case 0x2246f8u: goto label_2246f8;
        case 0x2246fcu: goto label_2246fc;
        case 0x224700u: goto label_224700;
        case 0x224704u: goto label_224704;
        case 0x224708u: goto label_224708;
        case 0x22470cu: goto label_22470c;
        case 0x224710u: goto label_224710;
        case 0x224714u: goto label_224714;
        case 0x224718u: goto label_224718;
        case 0x22471cu: goto label_22471c;
        case 0x224720u: goto label_224720;
        case 0x224724u: goto label_224724;
        case 0x224728u: goto label_224728;
        case 0x22472cu: goto label_22472c;
        case 0x224730u: goto label_224730;
        case 0x224734u: goto label_224734;
        case 0x224738u: goto label_224738;
        case 0x22473cu: goto label_22473c;
        case 0x224740u: goto label_224740;
        case 0x224744u: goto label_224744;
        case 0x224748u: goto label_224748;
        case 0x22474cu: goto label_22474c;
        case 0x224750u: goto label_224750;
        case 0x224754u: goto label_224754;
        case 0x224758u: goto label_224758;
        case 0x22475cu: goto label_22475c;
        case 0x224760u: goto label_224760;
        case 0x224764u: goto label_224764;
        case 0x224768u: goto label_224768;
        case 0x22476cu: goto label_22476c;
        case 0x224770u: goto label_224770;
        case 0x224774u: goto label_224774;
        case 0x224778u: goto label_224778;
        case 0x22477cu: goto label_22477c;
        case 0x224780u: goto label_224780;
        case 0x224784u: goto label_224784;
        case 0x224788u: goto label_224788;
        case 0x22478cu: goto label_22478c;
        case 0x224790u: goto label_224790;
        case 0x224794u: goto label_224794;
        case 0x224798u: goto label_224798;
        case 0x22479cu: goto label_22479c;
        case 0x2247a0u: goto label_2247a0;
        case 0x2247a4u: goto label_2247a4;
        case 0x2247a8u: goto label_2247a8;
        case 0x2247acu: goto label_2247ac;
        case 0x2247b0u: goto label_2247b0;
        case 0x2247b4u: goto label_2247b4;
        case 0x2247b8u: goto label_2247b8;
        case 0x2247bcu: goto label_2247bc;
        case 0x2247c0u: goto label_2247c0;
        case 0x2247c4u: goto label_2247c4;
        case 0x2247c8u: goto label_2247c8;
        case 0x2247ccu: goto label_2247cc;
        case 0x2247d0u: goto label_2247d0;
        case 0x2247d4u: goto label_2247d4;
        case 0x2247d8u: goto label_2247d8;
        case 0x2247dcu: goto label_2247dc;
        case 0x2247e0u: goto label_2247e0;
        case 0x2247e4u: goto label_2247e4;
        case 0x2247e8u: goto label_2247e8;
        case 0x2247ecu: goto label_2247ec;
        case 0x2247f0u: goto label_2247f0;
        case 0x2247f4u: goto label_2247f4;
        case 0x2247f8u: goto label_2247f8;
        case 0x2247fcu: goto label_2247fc;
        case 0x224800u: goto label_224800;
        case 0x224804u: goto label_224804;
        case 0x224808u: goto label_224808;
        case 0x22480cu: goto label_22480c;
        case 0x224810u: goto label_224810;
        case 0x224814u: goto label_224814;
        case 0x224818u: goto label_224818;
        case 0x22481cu: goto label_22481c;
        case 0x224820u: goto label_224820;
        case 0x224824u: goto label_224824;
        case 0x224828u: goto label_224828;
        case 0x22482cu: goto label_22482c;
        case 0x224830u: goto label_224830;
        case 0x224834u: goto label_224834;
        case 0x224838u: goto label_224838;
        case 0x22483cu: goto label_22483c;
        case 0x224840u: goto label_224840;
        case 0x224844u: goto label_224844;
        case 0x224848u: goto label_224848;
        case 0x22484cu: goto label_22484c;
        case 0x224850u: goto label_224850;
        case 0x224854u: goto label_224854;
        case 0x224858u: goto label_224858;
        case 0x22485cu: goto label_22485c;
        case 0x224860u: goto label_224860;
        case 0x224864u: goto label_224864;
        case 0x224868u: goto label_224868;
        case 0x22486cu: goto label_22486c;
        case 0x224870u: goto label_224870;
        case 0x224874u: goto label_224874;
        case 0x224878u: goto label_224878;
        case 0x22487cu: goto label_22487c;
        case 0x224880u: goto label_224880;
        case 0x224884u: goto label_224884;
        case 0x224888u: goto label_224888;
        case 0x22488cu: goto label_22488c;
        case 0x224890u: goto label_224890;
        case 0x224894u: goto label_224894;
        case 0x224898u: goto label_224898;
        case 0x22489cu: goto label_22489c;
        case 0x2248a0u: goto label_2248a0;
        case 0x2248a4u: goto label_2248a4;
        case 0x2248a8u: goto label_2248a8;
        case 0x2248acu: goto label_2248ac;
        case 0x2248b0u: goto label_2248b0;
        case 0x2248b4u: goto label_2248b4;
        case 0x2248b8u: goto label_2248b8;
        case 0x2248bcu: goto label_2248bc;
        case 0x2248c0u: goto label_2248c0;
        case 0x2248c4u: goto label_2248c4;
        case 0x2248c8u: goto label_2248c8;
        case 0x2248ccu: goto label_2248cc;
        case 0x2248d0u: goto label_2248d0;
        case 0x2248d4u: goto label_2248d4;
        case 0x2248d8u: goto label_2248d8;
        case 0x2248dcu: goto label_2248dc;
        case 0x2248e0u: goto label_2248e0;
        case 0x2248e4u: goto label_2248e4;
        case 0x2248e8u: goto label_2248e8;
        case 0x2248ecu: goto label_2248ec;
        case 0x2248f0u: goto label_2248f0;
        case 0x2248f4u: goto label_2248f4;
        case 0x2248f8u: goto label_2248f8;
        case 0x2248fcu: goto label_2248fc;
        case 0x224900u: goto label_224900;
        case 0x224904u: goto label_224904;
        case 0x224908u: goto label_224908;
        case 0x22490cu: goto label_22490c;
        case 0x224910u: goto label_224910;
        case 0x224914u: goto label_224914;
        case 0x224918u: goto label_224918;
        case 0x22491cu: goto label_22491c;
        case 0x224920u: goto label_224920;
        case 0x224924u: goto label_224924;
        case 0x224928u: goto label_224928;
        case 0x22492cu: goto label_22492c;
        case 0x224930u: goto label_224930;
        case 0x224934u: goto label_224934;
        case 0x224938u: goto label_224938;
        case 0x22493cu: goto label_22493c;
        case 0x224940u: goto label_224940;
        case 0x224944u: goto label_224944;
        case 0x224948u: goto label_224948;
        case 0x22494cu: goto label_22494c;
        case 0x224950u: goto label_224950;
        case 0x224954u: goto label_224954;
        case 0x224958u: goto label_224958;
        case 0x22495cu: goto label_22495c;
        case 0x224960u: goto label_224960;
        case 0x224964u: goto label_224964;
        case 0x224968u: goto label_224968;
        case 0x22496cu: goto label_22496c;
        case 0x224970u: goto label_224970;
        case 0x224974u: goto label_224974;
        case 0x224978u: goto label_224978;
        case 0x22497cu: goto label_22497c;
        case 0x224980u: goto label_224980;
        case 0x224984u: goto label_224984;
        case 0x224988u: goto label_224988;
        case 0x22498cu: goto label_22498c;
        case 0x224990u: goto label_224990;
        case 0x224994u: goto label_224994;
        case 0x224998u: goto label_224998;
        case 0x22499cu: goto label_22499c;
        case 0x2249a0u: goto label_2249a0;
        case 0x2249a4u: goto label_2249a4;
        case 0x2249a8u: goto label_2249a8;
        case 0x2249acu: goto label_2249ac;
        case 0x2249b0u: goto label_2249b0;
        case 0x2249b4u: goto label_2249b4;
        case 0x2249b8u: goto label_2249b8;
        case 0x2249bcu: goto label_2249bc;
        case 0x2249c0u: goto label_2249c0;
        case 0x2249c4u: goto label_2249c4;
        case 0x2249c8u: goto label_2249c8;
        case 0x2249ccu: goto label_2249cc;
        case 0x2249d0u: goto label_2249d0;
        case 0x2249d4u: goto label_2249d4;
        case 0x2249d8u: goto label_2249d8;
        case 0x2249dcu: goto label_2249dc;
        case 0x2249e0u: goto label_2249e0;
        case 0x2249e4u: goto label_2249e4;
        case 0x2249e8u: goto label_2249e8;
        case 0x2249ecu: goto label_2249ec;
        case 0x2249f0u: goto label_2249f0;
        case 0x2249f4u: goto label_2249f4;
        case 0x2249f8u: goto label_2249f8;
        case 0x2249fcu: goto label_2249fc;
        case 0x224a00u: goto label_224a00;
        case 0x224a04u: goto label_224a04;
        case 0x224a08u: goto label_224a08;
        case 0x224a0cu: goto label_224a0c;
        case 0x224a10u: goto label_224a10;
        case 0x224a14u: goto label_224a14;
        case 0x224a18u: goto label_224a18;
        case 0x224a1cu: goto label_224a1c;
        case 0x224a20u: goto label_224a20;
        case 0x224a24u: goto label_224a24;
        case 0x224a28u: goto label_224a28;
        case 0x224a2cu: goto label_224a2c;
        case 0x224a30u: goto label_224a30;
        case 0x224a34u: goto label_224a34;
        case 0x224a38u: goto label_224a38;
        case 0x224a3cu: goto label_224a3c;
        case 0x224a40u: goto label_224a40;
        case 0x224a44u: goto label_224a44;
        case 0x224a48u: goto label_224a48;
        case 0x224a4cu: goto label_224a4c;
        case 0x224a50u: goto label_224a50;
        case 0x224a54u: goto label_224a54;
        case 0x224a58u: goto label_224a58;
        case 0x224a5cu: goto label_224a5c;
        case 0x224a60u: goto label_224a60;
        case 0x224a64u: goto label_224a64;
        case 0x224a68u: goto label_224a68;
        case 0x224a6cu: goto label_224a6c;
        case 0x224a70u: goto label_224a70;
        case 0x224a74u: goto label_224a74;
        case 0x224a78u: goto label_224a78;
        case 0x224a7cu: goto label_224a7c;
        case 0x224a80u: goto label_224a80;
        case 0x224a84u: goto label_224a84;
        case 0x224a88u: goto label_224a88;
        case 0x224a8cu: goto label_224a8c;
        case 0x224a90u: goto label_224a90;
        case 0x224a94u: goto label_224a94;
        case 0x224a98u: goto label_224a98;
        case 0x224a9cu: goto label_224a9c;
        case 0x224aa0u: goto label_224aa0;
        case 0x224aa4u: goto label_224aa4;
        case 0x224aa8u: goto label_224aa8;
        case 0x224aacu: goto label_224aac;
        case 0x224ab0u: goto label_224ab0;
        case 0x224ab4u: goto label_224ab4;
        case 0x224ab8u: goto label_224ab8;
        case 0x224abcu: goto label_224abc;
        case 0x224ac0u: goto label_224ac0;
        case 0x224ac4u: goto label_224ac4;
        case 0x224ac8u: goto label_224ac8;
        case 0x224accu: goto label_224acc;
        case 0x224ad0u: goto label_224ad0;
        default: break;
    }

    ctx->pc = 0x224130u;

label_224130:
    // 0x224130: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x224130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_224134:
    // 0x224134: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x224134u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
label_224138:
    // 0x224138: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x224138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_22413c:
    // 0x22413c: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x22413cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
label_224140:
    // 0x224140: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x224140u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_224144:
    // 0x224144: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x224144u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_224148:
    // 0x224148: 0x0  nop
    ctx->pc = 0x224148u;
    // NOP
label_22414c:
    // 0x22414c: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x22414cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_224150:
    // 0x224150: 0x24100064  addiu       $s0, $zero, 0x64
    ctx->pc = 0x224150u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_224154:
    // 0x224154: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x224154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_224158:
    // 0x224158: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x224158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_22415c:
    // 0x22415c: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x22415cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_224160:
    // 0x224160: 0x30820008  andi        $v0, $a0, 0x8
    ctx->pc = 0x224160u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8);
label_224164:
    // 0x224164: 0x1440004b  bnez        $v0, . + 4 + (0x4B << 2)
label_224168:
    if (ctx->pc == 0x224168u) {
        ctx->pc = 0x22416Cu;
        goto label_22416c;
    }
    ctx->pc = 0x224164u;
    {
        const bool branch_taken_0x224164 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x224164) {
            ctx->pc = 0x224294u;
            goto label_224294;
        }
    }
    ctx->pc = 0x22416Cu;
label_22416c:
    // 0x22416c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x22416cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_224170:
    // 0x224170: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x224170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_224174:
    // 0x224174: 0x8c430030  lw          $v1, 0x30($v0)
    ctx->pc = 0x224174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_224178:
    // 0x224178: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x224178u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_22417c:
    // 0x22417c: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_224180:
    if (ctx->pc == 0x224180u) {
        ctx->pc = 0x224184u;
        goto label_224184;
    }
    ctx->pc = 0x22417Cu;
    {
        const bool branch_taken_0x22417c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22417c) {
            ctx->pc = 0x224204u;
            goto label_224204;
        }
    }
    ctx->pc = 0x224184u;
label_224184:
    // 0x224184: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x224184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_224188:
    // 0x224188: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x224188u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_22418c:
    // 0x22418c: 0xc461002c  lwc1        $f1, 0x2C($v1)
    ctx->pc = 0x22418cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_224190:
    // 0x224190: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x224190u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
label_224194:
    // 0x224194: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x224194u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_224198:
    // 0x224198: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x224198u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22419c:
    // 0x22419c: 0x0  nop
    ctx->pc = 0x22419cu;
    // NOP
label_2241a0:
    // 0x2241a0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2241a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2241a4:
    // 0x2241a4: 0xe460002c  swc1        $f0, 0x2C($v1)
    ctx->pc = 0x2241a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 44), bits); }
label_2241a8:
    // 0x2241a8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2241a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2241ac:
    // 0x2241ac: 0x24821330  addiu       $v0, $a0, 0x1330
    ctx->pc = 0x2241acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
label_2241b0:
    // 0x2241b0: 0xc441002c  lwc1        $f1, 0x2C($v0)
    ctx->pc = 0x2241b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2241b4:
    // 0x2241b4: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x2241b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
label_2241b8:
    // 0x2241b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2241b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2241bc:
    // 0x2241bc: 0x0  nop
    ctx->pc = 0x2241bcu;
    // NOP
label_2241c0:
    // 0x2241c0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2241c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2241c4:
    // 0x2241c4: 0x0  nop
    ctx->pc = 0x2241c4u;
    // NOP
label_2241c8:
    // 0x2241c8: 0x4501002b  bc1t        . + 4 + (0x2B << 2)
label_2241cc:
    if (ctx->pc == 0x2241CCu) {
        ctx->pc = 0x2241D0u;
        goto label_2241d0;
    }
    ctx->pc = 0x2241C8u;
    {
        const bool branch_taken_0x2241c8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2241c8) {
            ctx->pc = 0x224278u;
            goto label_224278;
        }
    }
    ctx->pc = 0x2241D0u;
label_2241d0:
    // 0x2241d0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2241d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2241d4:
    // 0x2241d4: 0x24451330  addiu       $a1, $v0, 0x1330
    ctx->pc = 0x2241d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_2241d8:
    // 0x2241d8: 0x8ca30030  lw          $v1, 0x30($a1)
    ctx->pc = 0x2241d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
label_2241dc:
    // 0x2241dc: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x2241dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_2241e0:
    // 0x2241e0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2241e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_2241e4:
    // 0x2241e4: 0xaca20030  sw          $v0, 0x30($a1)
    ctx->pc = 0x2241e4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 2));
label_2241e8:
    // 0x2241e8: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x2241e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
label_2241ec:
    // 0x2241ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2241ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2241f0:
    // 0x2241f0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2241f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2241f4:
    // 0x2241f4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2241f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_2241f8:
    // 0x2241f8: 0xe440002c  swc1        $f0, 0x2C($v0)
    ctx->pc = 0x2241f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 44), bits); }
label_2241fc:
    // 0x2241fc: 0x1000001e  b           . + 4 + (0x1E << 2)
label_224200:
    if (ctx->pc == 0x224200u) {
        ctx->pc = 0x224204u;
        goto label_224204;
    }
    ctx->pc = 0x2241FCu;
    {
        const bool branch_taken_0x2241fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2241fc) {
            ctx->pc = 0x224278u;
            goto label_224278;
        }
    }
    ctx->pc = 0x224204u;
label_224204:
    // 0x224204: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x224204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_224208:
    // 0x224208: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x224208u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_22420c:
    // 0x22420c: 0xc481002c  lwc1        $f1, 0x2C($a0)
    ctx->pc = 0x22420cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_224210:
    // 0x224210: 0x3c033e99  lui         $v1, 0x3E99
    ctx->pc = 0x224210u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16025 << 16));
label_224214:
    // 0x224214: 0x3462999a  ori         $v0, $v1, 0x999A
    ctx->pc = 0x224214u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
label_224218:
    // 0x224218: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x224218u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22421c:
    // 0x22421c: 0x0  nop
    ctx->pc = 0x22421cu;
    // NOP
label_224220:
    // 0x224220: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x224220u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_224224:
    // 0x224224: 0xe480002c  swc1        $f0, 0x2C($a0)
    ctx->pc = 0x224224u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 44), bits); }
label_224228:
    // 0x224228: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x224228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_22422c:
    // 0x22422c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22422cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_224230:
    // 0x224230: 0xc441002c  lwc1        $f1, 0x2C($v0)
    ctx->pc = 0x224230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_224234:
    // 0x224234: 0x3c02c140  lui         $v0, 0xC140
    ctx->pc = 0x224234u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49472 << 16));
label_224238:
    // 0x224238: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x224238u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22423c:
    // 0x22423c: 0x0  nop
    ctx->pc = 0x22423cu;
    // NOP
label_224240:
    // 0x224240: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x224240u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_224244:
    // 0x224244: 0x0  nop
    ctx->pc = 0x224244u;
    // NOP
label_224248:
    // 0x224248: 0x4500000b  bc1f        . + 4 + (0xB << 2)
label_22424c:
    if (ctx->pc == 0x22424Cu) {
        ctx->pc = 0x224250u;
        goto label_224250;
    }
    ctx->pc = 0x224248u;
    {
        const bool branch_taken_0x224248 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x224248) {
            ctx->pc = 0x224278u;
            goto label_224278;
        }
    }
    ctx->pc = 0x224250u;
label_224250:
    // 0x224250: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x224250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_224254:
    // 0x224254: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x224254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_224258:
    // 0x224258: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x224258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_22425c:
    // 0x22425c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x22425cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_224260:
    // 0x224260: 0xac620030  sw          $v0, 0x30($v1)
    ctx->pc = 0x224260u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 2));
label_224264:
    // 0x224264: 0x3c02c140  lui         $v0, 0xC140
    ctx->pc = 0x224264u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49472 << 16));
label_224268:
    // 0x224268: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x224268u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22426c:
    // 0x22426c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x22426cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_224270:
    // 0x224270: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x224270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_224274:
    // 0x224274: 0xe440002c  swc1        $f0, 0x2C($v0)
    ctx->pc = 0x224274u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 44), bits); }
label_224278:
    // 0x224278: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x224278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_22427c:
    // 0x22427c: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x22427cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_224280:
    // 0x224280: 0xc461002c  lwc1        $f1, 0x2C($v1)
    ctx->pc = 0x224280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_224284:
    // 0x224284: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x224284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_224288:
    // 0x224288: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x224288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22428c:
    // 0x22428c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x22428cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_224290:
    // 0x224290: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x224290u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_224294:
    // 0x224294: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x224294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_224298:
    // 0x224298: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x224298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_22429c:
    // 0x22429c: 0x24420120  addiu       $v0, $v0, 0x120
    ctx->pc = 0x22429cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
label_2242a0:
    // 0x2242a0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2242a0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2242a4:
    // 0x2242a4: 0x246512c0  addiu       $a1, $v1, 0x12C0
    ctx->pc = 0x2242a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4800));
label_2242a8:
    // 0x2242a8: 0xc05cf7c  jal         func_173DF0
label_2242ac:
    if (ctx->pc == 0x2242ACu) {
        ctx->pc = 0x2242B0u;
        goto label_2242b0;
    }
    ctx->pc = 0x2242A8u;
    SET_GPR_U32(ctx, 31, 0x2242B0u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x2242A8u, 0x2242B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2242B0u;
label_2242b0:
    // 0x2242b0: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x2242b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_2242b4:
    // 0x2242b4: 0x3c02c974  lui         $v0, 0xC974
    ctx->pc = 0x2242b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51572 << 16));
label_2242b8:
    // 0x2242b8: 0x34422400  ori         $v0, $v0, 0x2400
    ctx->pc = 0x2242b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9216);
label_2242bc:
    // 0x2242bc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2242bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2242c0:
    // 0x2242c0: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x2242c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2242c4:
    // 0x2242c4: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2242c4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2242c8:
    // 0x2242c8: 0x0  nop
    ctx->pc = 0x2242c8u;
    // NOP
label_2242cc:
    // 0x2242cc: 0x4501001c  bc1t        . + 4 + (0x1C << 2)
label_2242d0:
    if (ctx->pc == 0x2242D0u) {
        ctx->pc = 0x2242D4u;
        goto label_2242d4;
    }
    ctx->pc = 0x2242CCu;
    {
        const bool branch_taken_0x2242cc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2242cc) {
            ctx->pc = 0x224340u;
            goto label_224340;
        }
    }
    ctx->pc = 0x2242D4u;
label_2242d4:
    // 0x2242d4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2242d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2242d8:
    // 0x2242d8: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x2242d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2242dc:
    // 0x2242dc: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x2242dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
label_2242e0:
    // 0x2242e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2242e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2242e4:
    // 0x2242e4: 0x0  nop
    ctx->pc = 0x2242e4u;
    // NOP
label_2242e8:
    // 0x2242e8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2242e8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2242ec:
    // 0x2242ec: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x2242ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2242f0:
    // 0x2242f0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2242f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2242f4:
    // 0x2242f4: 0x0  nop
    ctx->pc = 0x2242f4u;
    // NOP
label_2242f8:
    // 0x2242f8: 0x45010011  bc1t        . + 4 + (0x11 << 2)
label_2242fc:
    if (ctx->pc == 0x2242FCu) {
        ctx->pc = 0x224300u;
        goto label_224300;
    }
    ctx->pc = 0x2242F8u;
    {
        const bool branch_taken_0x2242f8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2242f8) {
            ctx->pc = 0x224340u;
            goto label_224340;
        }
    }
    ctx->pc = 0x224300u;
label_224300:
    // 0x224300: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x224300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_224304:
    // 0x224304: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x224304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_224308:
    // 0x224308: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x224308u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
label_22430c:
    // 0x22430c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22430cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_224310:
    // 0x224310: 0x0  nop
    ctx->pc = 0x224310u;
    // NOP
label_224314:
    // 0x224314: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x224314u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_224318:
    // 0x224318: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x224318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22431c:
    // 0x22431c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x22431cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_224320:
    // 0x224320: 0x0  nop
    ctx->pc = 0x224320u;
    // NOP
label_224324:
    // 0x224324: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_224328:
    if (ctx->pc == 0x224328u) {
        ctx->pc = 0x22432Cu;
        goto label_22432c;
    }
    ctx->pc = 0x224324u;
    {
        const bool branch_taken_0x224324 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x224324) {
            ctx->pc = 0x224340u;
            goto label_224340;
        }
    }
    ctx->pc = 0x22432Cu;
label_22432c:
    // 0x22432c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x22432cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_224330:
    // 0x224330: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x224330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_224334:
    // 0x224334: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x224334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_224338:
    // 0x224338: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x224338u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_22433c:
    // 0x22433c: 0xac620030  sw          $v0, 0x30($v1)
    ctx->pc = 0x22433cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 2));
label_224340:
    // 0x224340: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x224340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_224344:
    // 0x224344: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x224344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_224348:
    // 0x224348: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x224348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_22434c:
    // 0x22434c: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x22434cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_224350:
    // 0x224350: 0x14400081  bnez        $v0, . + 4 + (0x81 << 2)
label_224354:
    if (ctx->pc == 0x224354u) {
        ctx->pc = 0x224358u;
        goto label_224358;
    }
    ctx->pc = 0x224350u;
    {
        const bool branch_taken_0x224350 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x224350) {
            ctx->pc = 0x224558u;
            goto label_224558;
        }
    }
    ctx->pc = 0x224358u;
label_224358:
    // 0x224358: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x224358u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22435c:
    // 0x22435c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x22435cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_224360:
    // 0x224360: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x224360u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
label_224364:
    // 0x224364: 0x3c024448  lui         $v0, 0x4448
    ctx->pc = 0x224364u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17480 << 16));
label_224368:
    // 0x224368: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x224368u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_22436c:
    // 0x22436c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x22436cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_224370:
    // 0x224370: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x224370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294958308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_224374:
    // 0x224374: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x224374u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_224378:
    // 0x224378: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x224378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_22437c:
    // 0x22437c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22437cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_224380:
    // 0x224380: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x224380u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
label_224384:
    // 0x224384: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x224384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_224388:
    // 0x224388: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x224388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_22438c:
    // 0x22438c: 0x944200aa  lhu         $v0, 0xAA($v0)
    ctx->pc = 0x22438cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 170)));
label_224390:
    // 0x224390: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x224390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_224394:
    // 0x224394: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x224394u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_224398:
    // 0x224398: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_22439c:
    if (ctx->pc == 0x22439Cu) {
        ctx->pc = 0x2243A0u;
        goto label_2243a0;
    }
    ctx->pc = 0x224398u;
    {
        const bool branch_taken_0x224398 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x224398) {
            ctx->pc = 0x2243C0u;
            goto label_2243c0;
        }
    }
    ctx->pc = 0x2243A0u;
label_2243a0:
    // 0x2243a0: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x2243a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
label_2243a4:
    // 0x2243a4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2243a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2243a8:
    // 0x2243a8: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2243a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_2243ac:
    // 0x2243ac: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x2243acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294958308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2243b0:
    // 0x2243b0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2243b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2243b4:
    // 0x2243b4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2243b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2243b8:
    // 0x2243b8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2243b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_2243bc:
    // 0x2243bc: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x2243bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
label_2243c0:
    // 0x2243c0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2243c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2243c4:
    // 0x2243c4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2243c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_2243c8:
    // 0x2243c8: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x2243c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2243cc:
    // 0x2243cc: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x2243ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
label_2243d0:
    // 0x2243d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2243d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2243d4:
    // 0x2243d4: 0x0  nop
    ctx->pc = 0x2243d4u;
    // NOP
label_2243d8:
    // 0x2243d8: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2243d8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2243dc:
    // 0x2243dc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2243dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2243e0:
    // 0x2243e0: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x2243e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2243e4:
    // 0x2243e4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2243e4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2243e8:
    // 0x2243e8: 0x0  nop
    ctx->pc = 0x2243e8u;
    // NOP
label_2243ec:
    // 0x2243ec: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_2243f0:
    if (ctx->pc == 0x2243F0u) {
        ctx->pc = 0x2243F4u;
        goto label_2243f4;
    }
    ctx->pc = 0x2243ECu;
    {
        const bool branch_taken_0x2243ec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2243ec) {
            ctx->pc = 0x224404u;
            goto label_224404;
        }
    }
    ctx->pc = 0x2243F4u;
label_2243f4:
    // 0x2243f4: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x2243f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
label_2243f8:
    // 0x2243f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2243f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2243fc:
    // 0x2243fc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2243fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_224400:
    // 0x224400: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x224400u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
label_224404:
    // 0x224404: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x224404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_224408:
    // 0x224408: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x224408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_22440c:
    // 0x22440c: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x22440cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_224410:
    // 0x224410: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x224410u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
label_224414:
    // 0x224414: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x224414u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_224418:
    // 0x224418: 0x0  nop
    ctx->pc = 0x224418u;
    // NOP
label_22441c:
    // 0x22441c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x22441cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_224420:
    // 0x224420: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x224420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_224424:
    // 0x224424: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x224424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_224428:
    // 0x224428: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x224428u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22442c:
    // 0x22442c: 0x0  nop
    ctx->pc = 0x22442cu;
    // NOP
label_224430:
    // 0x224430: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_224434:
    if (ctx->pc == 0x224434u) {
        ctx->pc = 0x224438u;
        goto label_224438;
    }
    ctx->pc = 0x224430u;
    {
        const bool branch_taken_0x224430 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x224430) {
            ctx->pc = 0x224448u;
            goto label_224448;
        }
    }
    ctx->pc = 0x224438u;
label_224438:
    // 0x224438: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x224438u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_22443c:
    // 0x22443c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22443cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_224440:
    // 0x224440: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x224440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_224444:
    // 0x224444: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x224444u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
label_224448:
    // 0x224448: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x224448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_22444c:
    // 0x22444c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22444cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_224450:
    // 0x224450: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x224450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_224454:
    // 0x224454: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x224454u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
label_224458:
    // 0x224458: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x224458u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22445c:
    // 0x22445c: 0x0  nop
    ctx->pc = 0x22445cu;
    // NOP
label_224460:
    // 0x224460: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x224460u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_224464:
    // 0x224464: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x224464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_224468:
    // 0x224468: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x224468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22446c:
    // 0x22446c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x22446cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_224470:
    // 0x224470: 0x0  nop
    ctx->pc = 0x224470u;
    // NOP
label_224474:
    // 0x224474: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_224478:
    if (ctx->pc == 0x224478u) {
        ctx->pc = 0x22447Cu;
        goto label_22447c;
    }
    ctx->pc = 0x224474u;
    {
        const bool branch_taken_0x224474 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x224474) {
            ctx->pc = 0x22448Cu;
            goto label_22448c;
        }
    }
    ctx->pc = 0x22447Cu;
label_22447c:
    // 0x22447c: 0x3c02c0a0  lui         $v0, 0xC0A0
    ctx->pc = 0x22447cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49312 << 16));
label_224480:
    // 0x224480: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x224480u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_224484:
    // 0x224484: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x224484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_224488:
    // 0x224488: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x224488u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
label_22448c:
    // 0x22448c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x22448cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_224490:
    // 0x224490: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x224490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_224494:
    // 0x224494: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x224494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_224498:
    // 0x224498: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x224498u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
label_22449c:
    // 0x22449c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22449cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2244a0:
    // 0x2244a0: 0x0  nop
    ctx->pc = 0x2244a0u;
    // NOP
label_2244a4:
    // 0x2244a4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2244a4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2244a8:
    // 0x2244a8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2244a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2244ac:
    // 0x2244ac: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x2244acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2244b0:
    // 0x2244b0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2244b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2244b4:
    // 0x2244b4: 0x0  nop
    ctx->pc = 0x2244b4u;
    // NOP
label_2244b8:
    // 0x2244b8: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_2244bc:
    if (ctx->pc == 0x2244BCu) {
        ctx->pc = 0x2244C0u;
        goto label_2244c0;
    }
    ctx->pc = 0x2244B8u;
    {
        const bool branch_taken_0x2244b8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2244b8) {
            ctx->pc = 0x2244D0u;
            goto label_2244d0;
        }
    }
    ctx->pc = 0x2244C0u;
label_2244c0:
    // 0x2244c0: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x2244c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
label_2244c4:
    // 0x2244c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2244c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2244c8:
    // 0x2244c8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2244c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2244cc:
    // 0x2244cc: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x2244ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
label_2244d0:
    // 0x2244d0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2244d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2244d4:
    // 0x2244d4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2244d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_2244d8:
    // 0x2244d8: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x2244d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2244dc:
    // 0x2244dc: 0x3c024448  lui         $v0, 0x4448
    ctx->pc = 0x2244dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17480 << 16));
label_2244e0:
    // 0x2244e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2244e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2244e4:
    // 0x2244e4: 0x0  nop
    ctx->pc = 0x2244e4u;
    // NOP
label_2244e8:
    // 0x2244e8: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2244e8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2244ec:
    // 0x2244ec: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2244ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2244f0:
    // 0x2244f0: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x2244f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2244f4:
    // 0x2244f4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2244f4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2244f8:
    // 0x2244f8: 0x0  nop
    ctx->pc = 0x2244f8u;
    // NOP
label_2244fc:
    // 0x2244fc: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_224500:
    if (ctx->pc == 0x224500u) {
        ctx->pc = 0x224504u;
        goto label_224504;
    }
    ctx->pc = 0x2244FCu;
    {
        const bool branch_taken_0x2244fc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2244fc) {
            ctx->pc = 0x224514u;
            goto label_224514;
        }
    }
    ctx->pc = 0x224504u;
label_224504:
    // 0x224504: 0x3c02c120  lui         $v0, 0xC120
    ctx->pc = 0x224504u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49440 << 16));
label_224508:
    // 0x224508: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x224508u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22450c:
    // 0x22450c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x22450cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_224510:
    // 0x224510: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x224510u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
label_224514:
    // 0x224514: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x224514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_224518:
    // 0x224518: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x224518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_22451c:
    // 0x22451c: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x22451cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_224520:
    // 0x224520: 0x3c024448  lui         $v0, 0x4448
    ctx->pc = 0x224520u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17480 << 16));
label_224524:
    // 0x224524: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x224524u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_224528:
    // 0x224528: 0x0  nop
    ctx->pc = 0x224528u;
    // NOP
label_22452c:
    // 0x22452c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x22452cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_224530:
    // 0x224530: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x224530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_224534:
    // 0x224534: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x224534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_224538:
    // 0x224538: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x224538u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22453c:
    // 0x22453c: 0x0  nop
    ctx->pc = 0x22453cu;
    // NOP
label_224540:
    // 0x224540: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_224544:
    if (ctx->pc == 0x224544u) {
        ctx->pc = 0x224548u;
        goto label_224548;
    }
    ctx->pc = 0x224540u;
    {
        const bool branch_taken_0x224540 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x224540) {
            ctx->pc = 0x224558u;
            goto label_224558;
        }
    }
    ctx->pc = 0x224548u;
label_224548:
    // 0x224548: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x224548u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_22454c:
    // 0x22454c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22454cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_224550:
    // 0x224550: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x224550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_224554:
    // 0x224554: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x224554u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
label_224558:
    // 0x224558: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x224558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_22455c:
    // 0x22455c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22455cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_224560:
    // 0x224560: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x224560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_224564:
    // 0x224564: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x224564u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
label_224568:
    // 0x224568: 0x1440008b  bnez        $v0, . + 4 + (0x8B << 2)
label_22456c:
    if (ctx->pc == 0x22456Cu) {
        ctx->pc = 0x224570u;
        goto label_224570;
    }
    ctx->pc = 0x224568u;
    {
        const bool branch_taken_0x224568 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x224568) {
            ctx->pc = 0x224798u;
            goto label_224798;
        }
    }
    ctx->pc = 0x224570u;
label_224570:
    // 0x224570: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x224570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_224574:
    // 0x224574: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x224574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_224578:
    // 0x224578: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x224578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22457c:
    // 0x22457c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x22457cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_224580:
    // 0x224580: 0xc4400188  lwc1        $f0, 0x188($v0)
    ctx->pc = 0x224580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_224584:
    // 0x224584: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x224584u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_224588:
    // 0x224588: 0x0  nop
    ctx->pc = 0x224588u;
    // NOP
label_22458c:
    // 0x22458c: 0x4501003d  bc1t        . + 4 + (0x3D << 2)
label_224590:
    if (ctx->pc == 0x224590u) {
        ctx->pc = 0x224594u;
        goto label_224594;
    }
    ctx->pc = 0x22458Cu;
    {
        const bool branch_taken_0x22458c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22458c) {
            ctx->pc = 0x224684u;
            goto label_224684;
        }
    }
    ctx->pc = 0x224594u;
label_224594:
    // 0x224594: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x224594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_224598:
    // 0x224598: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x224598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_22459c:
    // 0x22459c: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x22459cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2245a0:
    // 0x2245a0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2245a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2245a4:
    // 0x2245a4: 0xc4400188  lwc1        $f0, 0x188($v0)
    ctx->pc = 0x2245a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2245a8:
    // 0x2245a8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2245a8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2245ac:
    // 0x2245ac: 0x0  nop
    ctx->pc = 0x2245acu;
    // NOP
label_2245b0:
    // 0x2245b0: 0x45010016  bc1t        . + 4 + (0x16 << 2)
label_2245b4:
    if (ctx->pc == 0x2245B4u) {
        ctx->pc = 0x2245B8u;
        goto label_2245b8;
    }
    ctx->pc = 0x2245B0u;
    {
        const bool branch_taken_0x2245b0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2245b0) {
            ctx->pc = 0x22460Cu;
            goto label_22460c;
        }
    }
    ctx->pc = 0x2245B8u;
label_2245b8:
    // 0x2245b8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2245b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2245bc:
    // 0x2245bc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2245bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_2245c0:
    // 0x2245c0: 0xc4410024  lwc1        $f1, 0x24($v0)
    ctx->pc = 0x2245c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2245c4:
    // 0x2245c4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2245c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2245c8:
    // 0x2245c8: 0xc4400188  lwc1        $f0, 0x188($v0)
    ctx->pc = 0x2245c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2245cc:
    // 0x2245cc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2245ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2245d0:
    // 0x2245d0: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x2245d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
label_2245d4:
    // 0x2245d4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2245d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2245d8:
    // 0x2245d8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2245d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_2245dc:
    // 0x2245dc: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x2245dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2245e0:
    // 0x2245e0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2245e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2245e4:
    // 0x2245e4: 0xc4400188  lwc1        $f0, 0x188($v0)
    ctx->pc = 0x2245e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2245e8:
    // 0x2245e8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2245e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2245ec:
    // 0x2245ec: 0x0  nop
    ctx->pc = 0x2245ecu;
    // NOP
label_2245f0:
    // 0x2245f0: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_2245f4:
    if (ctx->pc == 0x2245F4u) {
        ctx->pc = 0x2245F8u;
        goto label_2245f8;
    }
    ctx->pc = 0x2245F0u;
    {
        const bool branch_taken_0x2245f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2245f0) {
            ctx->pc = 0x22460Cu;
            goto label_22460c;
        }
    }
    ctx->pc = 0x2245F8u;
label_2245f8:
    // 0x2245f8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2245f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2245fc:
    // 0x2245fc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2245fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_224600:
    // 0x224600: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x224600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_224604:
    // 0x224604: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x224604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_224608:
    // 0x224608: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x224608u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
label_22460c:
    // 0x22460c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x22460cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_224610:
    // 0x224610: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x224610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_224614:
    // 0x224614: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x224614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_224618:
    // 0x224618: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x224618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_22461c:
    // 0x22461c: 0xc4400188  lwc1        $f0, 0x188($v0)
    ctx->pc = 0x22461cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_224620:
    // 0x224620: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x224620u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_224624:
    // 0x224624: 0x0  nop
    ctx->pc = 0x224624u;
    // NOP
label_224628:
    // 0x224628: 0x45000016  bc1f        . + 4 + (0x16 << 2)
label_22462c:
    if (ctx->pc == 0x22462Cu) {
        ctx->pc = 0x224630u;
        goto label_224630;
    }
    ctx->pc = 0x224628u;
    {
        const bool branch_taken_0x224628 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x224628) {
            ctx->pc = 0x224684u;
            goto label_224684;
        }
    }
    ctx->pc = 0x224630u;
label_224630:
    // 0x224630: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x224630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_224634:
    // 0x224634: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x224634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_224638:
    // 0x224638: 0xc4410024  lwc1        $f1, 0x24($v0)
    ctx->pc = 0x224638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22463c:
    // 0x22463c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x22463cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_224640:
    // 0x224640: 0xc4400188  lwc1        $f0, 0x188($v0)
    ctx->pc = 0x224640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_224644:
    // 0x224644: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x224644u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_224648:
    // 0x224648: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x224648u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
label_22464c:
    // 0x22464c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x22464cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_224650:
    // 0x224650: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x224650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_224654:
    // 0x224654: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x224654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_224658:
    // 0x224658: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x224658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_22465c:
    // 0x22465c: 0xc4400188  lwc1        $f0, 0x188($v0)
    ctx->pc = 0x22465cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_224660:
    // 0x224660: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x224660u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_224664:
    // 0x224664: 0x0  nop
    ctx->pc = 0x224664u;
    // NOP
label_224668:
    // 0x224668: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_22466c:
    if (ctx->pc == 0x22466Cu) {
        ctx->pc = 0x224670u;
        goto label_224670;
    }
    ctx->pc = 0x224668u;
    {
        const bool branch_taken_0x224668 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x224668) {
            ctx->pc = 0x224684u;
            goto label_224684;
        }
    }
    ctx->pc = 0x224670u;
label_224670:
    // 0x224670: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x224670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_224674:
    // 0x224674: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x224674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_224678:
    // 0x224678: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x224678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22467c:
    // 0x22467c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x22467cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_224680:
    // 0x224680: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x224680u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
label_224684:
    // 0x224684: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x224684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_224688:
    // 0x224688: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x224688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_22468c:
    // 0x22468c: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x22468cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_224690:
    // 0x224690: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x224690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_224694:
    // 0x224694: 0xc4400180  lwc1        $f0, 0x180($v0)
    ctx->pc = 0x224694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_224698:
    // 0x224698: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x224698u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22469c:
    // 0x22469c: 0x0  nop
    ctx->pc = 0x22469cu;
    // NOP
label_2246a0:
    // 0x2246a0: 0x4501003d  bc1t        . + 4 + (0x3D << 2)
label_2246a4:
    if (ctx->pc == 0x2246A4u) {
        ctx->pc = 0x2246A8u;
        goto label_2246a8;
    }
    ctx->pc = 0x2246A0u;
    {
        const bool branch_taken_0x2246a0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2246a0) {
            ctx->pc = 0x224798u;
            goto label_224798;
        }
    }
    ctx->pc = 0x2246A8u;
label_2246a8:
    // 0x2246a8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2246a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2246ac:
    // 0x2246ac: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2246acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_2246b0:
    // 0x2246b0: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x2246b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2246b4:
    // 0x2246b4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2246b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2246b8:
    // 0x2246b8: 0xc4400180  lwc1        $f0, 0x180($v0)
    ctx->pc = 0x2246b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2246bc:
    // 0x2246bc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2246bcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2246c0:
    // 0x2246c0: 0x0  nop
    ctx->pc = 0x2246c0u;
    // NOP
label_2246c4:
    // 0x2246c4: 0x45010016  bc1t        . + 4 + (0x16 << 2)
label_2246c8:
    if (ctx->pc == 0x2246C8u) {
        ctx->pc = 0x2246CCu;
        goto label_2246cc;
    }
    ctx->pc = 0x2246C4u;
    {
        const bool branch_taken_0x2246c4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2246c4) {
            ctx->pc = 0x224720u;
            goto label_224720;
        }
    }
    ctx->pc = 0x2246CCu;
label_2246cc:
    // 0x2246cc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2246ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2246d0:
    // 0x2246d0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2246d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_2246d4:
    // 0x2246d4: 0xc4410020  lwc1        $f1, 0x20($v0)
    ctx->pc = 0x2246d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2246d8:
    // 0x2246d8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2246d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2246dc:
    // 0x2246dc: 0xc4400180  lwc1        $f0, 0x180($v0)
    ctx->pc = 0x2246dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2246e0:
    // 0x2246e0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2246e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2246e4:
    // 0x2246e4: 0xe4400180  swc1        $f0, 0x180($v0)
    ctx->pc = 0x2246e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
label_2246e8:
    // 0x2246e8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2246e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2246ec:
    // 0x2246ec: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2246ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_2246f0:
    // 0x2246f0: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x2246f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2246f4:
    // 0x2246f4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2246f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2246f8:
    // 0x2246f8: 0xc4400180  lwc1        $f0, 0x180($v0)
    ctx->pc = 0x2246f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2246fc:
    // 0x2246fc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2246fcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_224700:
    // 0x224700: 0x0  nop
    ctx->pc = 0x224700u;
    // NOP
label_224704:
    // 0x224704: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_224708:
    if (ctx->pc == 0x224708u) {
        ctx->pc = 0x22470Cu;
        goto label_22470c;
    }
    ctx->pc = 0x224704u;
    {
        const bool branch_taken_0x224704 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x224704) {
            ctx->pc = 0x224720u;
            goto label_224720;
        }
    }
    ctx->pc = 0x22470Cu;
label_22470c:
    // 0x22470c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x22470cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_224710:
    // 0x224710: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x224710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_224714:
    // 0x224714: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x224714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_224718:
    // 0x224718: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x224718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_22471c:
    // 0x22471c: 0xe4400180  swc1        $f0, 0x180($v0)
    ctx->pc = 0x22471cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
label_224720:
    // 0x224720: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x224720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_224724:
    // 0x224724: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x224724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_224728:
    // 0x224728: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x224728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22472c:
    // 0x22472c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x22472cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_224730:
    // 0x224730: 0xc4400180  lwc1        $f0, 0x180($v0)
    ctx->pc = 0x224730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_224734:
    // 0x224734: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x224734u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_224738:
    // 0x224738: 0x0  nop
    ctx->pc = 0x224738u;
    // NOP
label_22473c:
    // 0x22473c: 0x45000016  bc1f        . + 4 + (0x16 << 2)
label_224740:
    if (ctx->pc == 0x224740u) {
        ctx->pc = 0x224744u;
        goto label_224744;
    }
    ctx->pc = 0x22473Cu;
    {
        const bool branch_taken_0x22473c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22473c) {
            ctx->pc = 0x224798u;
            goto label_224798;
        }
    }
    ctx->pc = 0x224744u;
label_224744:
    // 0x224744: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x224744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_224748:
    // 0x224748: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x224748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_22474c:
    // 0x22474c: 0xc4410024  lwc1        $f1, 0x24($v0)
    ctx->pc = 0x22474cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_224750:
    // 0x224750: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x224750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_224754:
    // 0x224754: 0xc4400180  lwc1        $f0, 0x180($v0)
    ctx->pc = 0x224754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_224758:
    // 0x224758: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x224758u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_22475c:
    // 0x22475c: 0xe4400180  swc1        $f0, 0x180($v0)
    ctx->pc = 0x22475cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
label_224760:
    // 0x224760: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x224760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_224764:
    // 0x224764: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x224764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_224768:
    // 0x224768: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x224768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22476c:
    // 0x22476c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x22476cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_224770:
    // 0x224770: 0xc4400180  lwc1        $f0, 0x180($v0)
    ctx->pc = 0x224770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_224774:
    // 0x224774: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x224774u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_224778:
    // 0x224778: 0x0  nop
    ctx->pc = 0x224778u;
    // NOP
label_22477c:
    // 0x22477c: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_224780:
    if (ctx->pc == 0x224780u) {
        ctx->pc = 0x224784u;
        goto label_224784;
    }
    ctx->pc = 0x22477Cu;
    {
        const bool branch_taken_0x22477c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22477c) {
            ctx->pc = 0x224798u;
            goto label_224798;
        }
    }
    ctx->pc = 0x224784u;
label_224784:
    // 0x224784: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x224784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_224788:
    // 0x224788: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x224788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_22478c:
    // 0x22478c: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x22478cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_224790:
    // 0x224790: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x224790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_224794:
    // 0x224794: 0xe4400180  swc1        $f0, 0x180($v0)
    ctx->pc = 0x224794u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
label_224798:
    // 0x224798: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x224798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_22479c:
    // 0x22479c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22479cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_2247a0:
    // 0x2247a0: 0xc441001c  lwc1        $f1, 0x1C($v0)
    ctx->pc = 0x2247a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2247a4:
    // 0x2247a4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2247a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2247a8:
    // 0x2247a8: 0xc4400184  lwc1        $f0, 0x184($v0)
    ctx->pc = 0x2247a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2247ac:
    // 0x2247ac: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x2247acu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2247b0:
    // 0x2247b0: 0x0  nop
    ctx->pc = 0x2247b0u;
    // NOP
label_2247b4:
    // 0x2247b4: 0x4501003d  bc1t        . + 4 + (0x3D << 2)
label_2247b8:
    if (ctx->pc == 0x2247B8u) {
        ctx->pc = 0x2247BCu;
        goto label_2247bc;
    }
    ctx->pc = 0x2247B4u;
    {
        const bool branch_taken_0x2247b4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2247b4) {
            ctx->pc = 0x2248ACu;
            goto label_2248ac;
        }
    }
    ctx->pc = 0x2247BCu;
label_2247bc:
    // 0x2247bc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2247bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2247c0:
    // 0x2247c0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2247c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_2247c4:
    // 0x2247c4: 0xc441001c  lwc1        $f1, 0x1C($v0)
    ctx->pc = 0x2247c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2247c8:
    // 0x2247c8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2247c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2247cc:
    // 0x2247cc: 0xc4400184  lwc1        $f0, 0x184($v0)
    ctx->pc = 0x2247ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2247d0:
    // 0x2247d0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2247d0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2247d4:
    // 0x2247d4: 0x0  nop
    ctx->pc = 0x2247d4u;
    // NOP
label_2247d8:
    // 0x2247d8: 0x45010016  bc1t        . + 4 + (0x16 << 2)
label_2247dc:
    if (ctx->pc == 0x2247DCu) {
        ctx->pc = 0x2247E0u;
        goto label_2247e0;
    }
    ctx->pc = 0x2247D8u;
    {
        const bool branch_taken_0x2247d8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2247d8) {
            ctx->pc = 0x224834u;
            goto label_224834;
        }
    }
    ctx->pc = 0x2247E0u;
label_2247e0:
    // 0x2247e0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2247e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2247e4:
    // 0x2247e4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2247e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_2247e8:
    // 0x2247e8: 0xc4410028  lwc1        $f1, 0x28($v0)
    ctx->pc = 0x2247e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2247ec:
    // 0x2247ec: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2247ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2247f0:
    // 0x2247f0: 0xc4400184  lwc1        $f0, 0x184($v0)
    ctx->pc = 0x2247f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2247f4:
    // 0x2247f4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2247f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2247f8:
    // 0x2247f8: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x2247f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
label_2247fc:
    // 0x2247fc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2247fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_224800:
    // 0x224800: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x224800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_224804:
    // 0x224804: 0xc441001c  lwc1        $f1, 0x1C($v0)
    ctx->pc = 0x224804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_224808:
    // 0x224808: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x224808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_22480c:
    // 0x22480c: 0xc4400184  lwc1        $f0, 0x184($v0)
    ctx->pc = 0x22480cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_224810:
    // 0x224810: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x224810u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_224814:
    // 0x224814: 0x0  nop
    ctx->pc = 0x224814u;
    // NOP
label_224818:
    // 0x224818: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_22481c:
    if (ctx->pc == 0x22481Cu) {
        ctx->pc = 0x224820u;
        goto label_224820;
    }
    ctx->pc = 0x224818u;
    {
        const bool branch_taken_0x224818 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x224818) {
            ctx->pc = 0x224834u;
            goto label_224834;
        }
    }
    ctx->pc = 0x224820u;
label_224820:
    // 0x224820: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x224820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_224824:
    // 0x224824: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x224824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_224828:
    // 0x224828: 0xc440001c  lwc1        $f0, 0x1C($v0)
    ctx->pc = 0x224828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22482c:
    // 0x22482c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x22482cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_224830:
    // 0x224830: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x224830u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
label_224834:
    // 0x224834: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x224834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_224838:
    // 0x224838: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x224838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_22483c:
    // 0x22483c: 0xc441001c  lwc1        $f1, 0x1C($v0)
    ctx->pc = 0x22483cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_224840:
    // 0x224840: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x224840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_224844:
    // 0x224844: 0xc4400184  lwc1        $f0, 0x184($v0)
    ctx->pc = 0x224844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_224848:
    // 0x224848: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x224848u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22484c:
    // 0x22484c: 0x0  nop
    ctx->pc = 0x22484cu;
    // NOP
label_224850:
    // 0x224850: 0x45000016  bc1f        . + 4 + (0x16 << 2)
label_224854:
    if (ctx->pc == 0x224854u) {
        ctx->pc = 0x224858u;
        goto label_224858;
    }
    ctx->pc = 0x224850u;
    {
        const bool branch_taken_0x224850 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x224850) {
            ctx->pc = 0x2248ACu;
            goto label_2248ac;
        }
    }
    ctx->pc = 0x224858u;
label_224858:
    // 0x224858: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x224858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_22485c:
    // 0x22485c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22485cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_224860:
    // 0x224860: 0xc4410028  lwc1        $f1, 0x28($v0)
    ctx->pc = 0x224860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_224864:
    // 0x224864: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x224864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_224868:
    // 0x224868: 0xc4400184  lwc1        $f0, 0x184($v0)
    ctx->pc = 0x224868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22486c:
    // 0x22486c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x22486cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_224870:
    // 0x224870: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x224870u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
label_224874:
    // 0x224874: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x224874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_224878:
    // 0x224878: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x224878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_22487c:
    // 0x22487c: 0xc441001c  lwc1        $f1, 0x1C($v0)
    ctx->pc = 0x22487cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_224880:
    // 0x224880: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x224880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_224884:
    // 0x224884: 0xc4400184  lwc1        $f0, 0x184($v0)
    ctx->pc = 0x224884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_224888:
    // 0x224888: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x224888u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22488c:
    // 0x22488c: 0x0  nop
    ctx->pc = 0x22488cu;
    // NOP
label_224890:
    // 0x224890: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_224894:
    if (ctx->pc == 0x224894u) {
        ctx->pc = 0x224898u;
        goto label_224898;
    }
    ctx->pc = 0x224890u;
    {
        const bool branch_taken_0x224890 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x224890) {
            ctx->pc = 0x2248ACu;
            goto label_2248ac;
        }
    }
    ctx->pc = 0x224898u;
label_224898:
    // 0x224898: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x224898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_22489c:
    // 0x22489c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22489cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_2248a0:
    // 0x2248a0: 0xc440001c  lwc1        $f0, 0x1C($v0)
    ctx->pc = 0x2248a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2248a4:
    // 0x2248a4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2248a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2248a8:
    // 0x2248a8: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x2248a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
label_2248ac:
    // 0x2248ac: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2248acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2248b0:
    // 0x2248b0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2248b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_2248b4:
    // 0x2248b4: 0xc4410038  lwc1        $f1, 0x38($v0)
    ctx->pc = 0x2248b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2248b8:
    // 0x2248b8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2248b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2248bc:
    // 0x2248bc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2248bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_2248c0:
    // 0x2248c0: 0xc440003c  lwc1        $f0, 0x3C($v0)
    ctx->pc = 0x2248c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2248c4:
    // 0x2248c4: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2248c4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2248c8:
    // 0x2248c8: 0x0  nop
    ctx->pc = 0x2248c8u;
    // NOP
label_2248cc:
    // 0x2248cc: 0x45010045  bc1t        . + 4 + (0x45 << 2)
label_2248d0:
    if (ctx->pc == 0x2248D0u) {
        ctx->pc = 0x2248D4u;
        goto label_2248d4;
    }
    ctx->pc = 0x2248CCu;
    {
        const bool branch_taken_0x2248cc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2248cc) {
            ctx->pc = 0x2249E4u;
            goto label_2249e4;
        }
    }
    ctx->pc = 0x2248D4u;
label_2248d4:
    // 0x2248d4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2248d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2248d8:
    // 0x2248d8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2248d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_2248dc:
    // 0x2248dc: 0xc441003c  lwc1        $f1, 0x3C($v0)
    ctx->pc = 0x2248dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2248e0:
    // 0x2248e0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2248e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2248e4:
    // 0x2248e4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2248e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_2248e8:
    // 0x2248e8: 0xc4400038  lwc1        $f0, 0x38($v0)
    ctx->pc = 0x2248e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2248ec:
    // 0x2248ec: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2248ecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2248f0:
    // 0x2248f0: 0x0  nop
    ctx->pc = 0x2248f0u;
    // NOP
label_2248f4:
    // 0x2248f4: 0x45010019  bc1t        . + 4 + (0x19 << 2)
label_2248f8:
    if (ctx->pc == 0x2248F8u) {
        ctx->pc = 0x2248FCu;
        goto label_2248fc;
    }
    ctx->pc = 0x2248F4u;
    {
        const bool branch_taken_0x2248f4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2248f4) {
            ctx->pc = 0x22495Cu;
            goto label_22495c;
        }
    }
    ctx->pc = 0x2248FCu;
label_2248fc:
    // 0x2248fc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2248fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_224900:
    // 0x224900: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x224900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_224904:
    // 0x224904: 0xc4410058  lwc1        $f1, 0x58($v0)
    ctx->pc = 0x224904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_224908:
    // 0x224908: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x224908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_22490c:
    // 0x22490c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22490cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_224910:
    // 0x224910: 0xc4400038  lwc1        $f0, 0x38($v0)
    ctx->pc = 0x224910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_224914:
    // 0x224914: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x224914u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_224918:
    // 0x224918: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x224918u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
label_22491c:
    // 0x22491c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x22491cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_224920:
    // 0x224920: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x224920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_224924:
    // 0x224924: 0xc441003c  lwc1        $f1, 0x3C($v0)
    ctx->pc = 0x224924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_224928:
    // 0x224928: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x224928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_22492c:
    // 0x22492c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22492cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_224930:
    // 0x224930: 0xc4400038  lwc1        $f0, 0x38($v0)
    ctx->pc = 0x224930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_224934:
    // 0x224934: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x224934u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_224938:
    // 0x224938: 0x0  nop
    ctx->pc = 0x224938u;
    // NOP
label_22493c:
    // 0x22493c: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_224940:
    if (ctx->pc == 0x224940u) {
        ctx->pc = 0x224944u;
        goto label_224944;
    }
    ctx->pc = 0x22493Cu;
    {
        const bool branch_taken_0x22493c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22493c) {
            ctx->pc = 0x22495Cu;
            goto label_22495c;
        }
    }
    ctx->pc = 0x224944u;
label_224944:
    // 0x224944: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x224944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_224948:
    // 0x224948: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x224948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_22494c:
    // 0x22494c: 0xc440003c  lwc1        $f0, 0x3C($v0)
    ctx->pc = 0x22494cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_224950:
    // 0x224950: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x224950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_224954:
    // 0x224954: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x224954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_224958:
    // 0x224958: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x224958u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
label_22495c:
    // 0x22495c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x22495cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_224960:
    // 0x224960: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x224960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_224964:
    // 0x224964: 0xc441003c  lwc1        $f1, 0x3C($v0)
    ctx->pc = 0x224964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_224968:
    // 0x224968: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x224968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_22496c:
    // 0x22496c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22496cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_224970:
    // 0x224970: 0xc4400038  lwc1        $f0, 0x38($v0)
    ctx->pc = 0x224970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_224974:
    // 0x224974: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x224974u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_224978:
    // 0x224978: 0x0  nop
    ctx->pc = 0x224978u;
    // NOP
label_22497c:
    // 0x22497c: 0x45000019  bc1f        . + 4 + (0x19 << 2)
label_224980:
    if (ctx->pc == 0x224980u) {
        ctx->pc = 0x224984u;
        goto label_224984;
    }
    ctx->pc = 0x22497Cu;
    {
        const bool branch_taken_0x22497c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22497c) {
            ctx->pc = 0x2249E4u;
            goto label_2249e4;
        }
    }
    ctx->pc = 0x224984u;
label_224984:
    // 0x224984: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x224984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_224988:
    // 0x224988: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x224988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_22498c:
    // 0x22498c: 0xc4410058  lwc1        $f1, 0x58($v0)
    ctx->pc = 0x22498cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_224990:
    // 0x224990: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x224990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_224994:
    // 0x224994: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x224994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_224998:
    // 0x224998: 0xc4400038  lwc1        $f0, 0x38($v0)
    ctx->pc = 0x224998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22499c:
    // 0x22499c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x22499cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_2249a0:
    // 0x2249a0: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x2249a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
label_2249a4:
    // 0x2249a4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2249a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2249a8:
    // 0x2249a8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2249a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_2249ac:
    // 0x2249ac: 0xc441003c  lwc1        $f1, 0x3C($v0)
    ctx->pc = 0x2249acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2249b0:
    // 0x2249b0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2249b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2249b4:
    // 0x2249b4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2249b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_2249b8:
    // 0x2249b8: 0xc4400038  lwc1        $f0, 0x38($v0)
    ctx->pc = 0x2249b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2249bc:
    // 0x2249bc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2249bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2249c0:
    // 0x2249c0: 0x0  nop
    ctx->pc = 0x2249c0u;
    // NOP
label_2249c4:
    // 0x2249c4: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_2249c8:
    if (ctx->pc == 0x2249C8u) {
        ctx->pc = 0x2249CCu;
        goto label_2249cc;
    }
    ctx->pc = 0x2249C4u;
    {
        const bool branch_taken_0x2249c4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2249c4) {
            ctx->pc = 0x2249E4u;
            goto label_2249e4;
        }
    }
    ctx->pc = 0x2249CCu;
label_2249cc:
    // 0x2249cc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2249ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2249d0:
    // 0x2249d0: 0x24501330  addiu       $s0, $v0, 0x1330
    ctx->pc = 0x2249d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_2249d4:
    // 0x2249d4: 0xc600003c  lwc1        $f0, 0x3C($s0)
    ctx->pc = 0x2249d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2249d8:
    // 0x2249d8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2249d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2249dc:
    // 0x2249dc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2249dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_2249e0:
    // 0x2249e0: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x2249e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
label_2249e4:
    // 0x2249e4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2249e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2249e8:
    // 0x2249e8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2249e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2249ec:
    // 0x2249ec: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x2249ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_2249f0:
    // 0x2249f0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2249f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2249f4:
    // 0x2249f4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2249f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2249f8:
    // 0x2249f8: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2249f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_2249fc:
    // 0x2249fc: 0x2442adc0  addiu       $v0, $v0, -0x5240
    ctx->pc = 0x2249fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946240));
label_224a00:
    // 0x224a00: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x224a00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_224a04:
    // 0x224a04: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x224a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_224a08:
    // 0x224a08: 0x40f809  jalr        $v0
label_224a0c:
    if (ctx->pc == 0x224A0Cu) {
        ctx->pc = 0x224A10u;
        goto label_224a10;
    }
    ctx->pc = 0x224A08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x224A10u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x224A08u, 0x224A10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x224A10u;
label_224a10:
    // 0x224a10: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x224a10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_224a14:
    // 0x224a14: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x224a14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_224a18:
    // 0x224a18: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x224a18u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_224a1c:
    // 0x224a1c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x224a1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_224a20:
    // 0x224a20: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x224a20u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_224a24:
    // 0x224a24: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x224a24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
label_224a28:
    // 0x224a28: 0x2462ae20  addiu       $v0, $v1, -0x51E0
    ctx->pc = 0x224a28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946336));
label_224a2c:
    // 0x224a2c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x224a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_224a30:
    // 0x224a30: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x224a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_224a34:
    // 0x224a34: 0x40f809  jalr        $v0
label_224a38:
    if (ctx->pc == 0x224A38u) {
        ctx->pc = 0x224A3Cu;
        goto label_224a3c;
    }
    ctx->pc = 0x224A34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x224A3Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x224A34u, 0x224A3Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x224A3Cu;
label_224a3c:
    // 0x224a3c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x224a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_224a40:
    // 0x224a40: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x224a40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_224a44:
    // 0x224a44: 0x8444005c  lh          $a0, 0x5C($v0)
    ctx->pc = 0x224a44u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 92)));
label_224a48:
    // 0x224a48: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_224a4c:
    if (ctx->pc == 0x224A4Cu) {
        ctx->pc = 0x224A50u;
        goto label_224a50;
    }
    ctx->pc = 0x224A48u;
    {
        const bool branch_taken_0x224a48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x224a48) {
            ctx->pc = 0x224A64u;
            goto label_224a64;
        }
    }
    ctx->pc = 0x224A50u;
label_224a50:
    // 0x224a50: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x224a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_224a54:
    // 0x224a54: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x224a54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_224a58:
    // 0x224a58: 0x8462005c  lh          $v0, 0x5C($v1)
    ctx->pc = 0x224a58u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 92)));
label_224a5c:
    // 0x224a5c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x224a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_224a60:
    // 0x224a60: 0xa462005c  sh          $v0, 0x5C($v1)
    ctx->pc = 0x224a60u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 92), (uint16_t)GPR_U32(ctx, 2));
label_224a64:
    // 0x224a64: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x224a64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_224a68:
    // 0x224a68: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x224a68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_224a6c:
    // 0x224a6c: 0x944300aa  lhu         $v1, 0xAA($v0)
    ctx->pc = 0x224a6cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 170)));
label_224a70:
    // 0x224a70: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x224a70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_224a74:
    // 0x224a74: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x224a74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_224a78:
    // 0x224a78: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_224a7c:
    if (ctx->pc == 0x224A7Cu) {
        ctx->pc = 0x224A80u;
        goto label_224a80;
    }
    ctx->pc = 0x224A78u;
    {
        const bool branch_taken_0x224a78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x224a78) {
            ctx->pc = 0x224AA8u;
            goto label_224aa8;
        }
    }
    ctx->pc = 0x224A80u;
label_224a80:
    // 0x224a80: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x224a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_224a84:
    // 0x224a84: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x224a84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_224a88:
    // 0x224a88: 0x8442005c  lh          $v0, 0x5C($v0)
    ctx->pc = 0x224a88u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 92)));
label_224a8c:
    // 0x224a8c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_224a90:
    if (ctx->pc == 0x224A90u) {
        ctx->pc = 0x224A94u;
        goto label_224a94;
    }
    ctx->pc = 0x224A8Cu;
    {
        const bool branch_taken_0x224a8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x224a8c) {
            ctx->pc = 0x224AA8u;
            goto label_224aa8;
        }
    }
    ctx->pc = 0x224A94u;
label_224a94:
    // 0x224a94: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x224a94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_224a98:
    // 0x224a98: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x224a98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_224a9c:
    // 0x224a9c: 0x8462005c  lh          $v0, 0x5C($v1)
    ctx->pc = 0x224a9cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 92)));
label_224aa0:
    // 0x224aa0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x224aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_224aa4:
    // 0x224aa4: 0xa462005c  sh          $v0, 0x5C($v1)
    ctx->pc = 0x224aa4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 92), (uint16_t)GPR_U32(ctx, 2));
label_224aa8:
    // 0x224aa8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x224aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_224aac:
    // 0x224aac: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x224aacu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_224ab0:
    // 0x224ab0: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x224ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_224ab4:
    // 0x224ab4: 0x2445acf0  addiu       $a1, $v0, -0x5310
    ctx->pc = 0x224ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946032));
label_224ab8:
    // 0x224ab8: 0xc07e9c4  jal         func_1FA710
label_224abc:
    if (ctx->pc == 0x224ABCu) {
        ctx->pc = 0x224AC0u;
        goto label_224ac0;
    }
    ctx->pc = 0x224AB8u;
    SET_GPR_U32(ctx, 31, 0x224AC0u);
    ctx->pc = 0x1FA710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA710u, 0x224AB8u, 0x224AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224AC0u;
label_224ac0:
    // 0x224ac0: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x224ac0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_224ac4:
    // 0x224ac4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x224ac4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_224ac8:
    // 0x224ac8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x224ac8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_224acc:
    // 0x224acc: 0x3e00008  jr          $ra
label_224ad0:
    if (ctx->pc == 0x224AD0u) {
        ctx->pc = 0x224AD4u;
        goto label_fallthrough_0x224acc;
    }
    ctx->pc = 0x224ACCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x224ACCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x224acc:
    ctx->pc = 0x224AD4u;
}
