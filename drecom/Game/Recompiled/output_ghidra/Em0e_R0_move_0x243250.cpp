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

// Function: Em0e_R0_move
// Address: 0x243250 - 0x243a0c
void Em0e_R0_move_0x243250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0e_R0_move_0x243250");
#endif

    switch (ctx->pc) {
        case 0x243250u: goto label_243250;
        case 0x243254u: goto label_243254;
        case 0x243258u: goto label_243258;
        case 0x24325cu: goto label_24325c;
        case 0x243260u: goto label_243260;
        case 0x243264u: goto label_243264;
        case 0x243268u: goto label_243268;
        case 0x24326cu: goto label_24326c;
        case 0x243270u: goto label_243270;
        case 0x243274u: goto label_243274;
        case 0x243278u: goto label_243278;
        case 0x24327cu: goto label_24327c;
        case 0x243280u: goto label_243280;
        case 0x243284u: goto label_243284;
        case 0x243288u: goto label_243288;
        case 0x24328cu: goto label_24328c;
        case 0x243290u: goto label_243290;
        case 0x243294u: goto label_243294;
        case 0x243298u: goto label_243298;
        case 0x24329cu: goto label_24329c;
        case 0x2432a0u: goto label_2432a0;
        case 0x2432a4u: goto label_2432a4;
        case 0x2432a8u: goto label_2432a8;
        case 0x2432acu: goto label_2432ac;
        case 0x2432b0u: goto label_2432b0;
        case 0x2432b4u: goto label_2432b4;
        case 0x2432b8u: goto label_2432b8;
        case 0x2432bcu: goto label_2432bc;
        case 0x2432c0u: goto label_2432c0;
        case 0x2432c4u: goto label_2432c4;
        case 0x2432c8u: goto label_2432c8;
        case 0x2432ccu: goto label_2432cc;
        case 0x2432d0u: goto label_2432d0;
        case 0x2432d4u: goto label_2432d4;
        case 0x2432d8u: goto label_2432d8;
        case 0x2432dcu: goto label_2432dc;
        case 0x2432e0u: goto label_2432e0;
        case 0x2432e4u: goto label_2432e4;
        case 0x2432e8u: goto label_2432e8;
        case 0x2432ecu: goto label_2432ec;
        case 0x2432f0u: goto label_2432f0;
        case 0x2432f4u: goto label_2432f4;
        case 0x2432f8u: goto label_2432f8;
        case 0x2432fcu: goto label_2432fc;
        case 0x243300u: goto label_243300;
        case 0x243304u: goto label_243304;
        case 0x243308u: goto label_243308;
        case 0x24330cu: goto label_24330c;
        case 0x243310u: goto label_243310;
        case 0x243314u: goto label_243314;
        case 0x243318u: goto label_243318;
        case 0x24331cu: goto label_24331c;
        case 0x243320u: goto label_243320;
        case 0x243324u: goto label_243324;
        case 0x243328u: goto label_243328;
        case 0x24332cu: goto label_24332c;
        case 0x243330u: goto label_243330;
        case 0x243334u: goto label_243334;
        case 0x243338u: goto label_243338;
        case 0x24333cu: goto label_24333c;
        case 0x243340u: goto label_243340;
        case 0x243344u: goto label_243344;
        case 0x243348u: goto label_243348;
        case 0x24334cu: goto label_24334c;
        case 0x243350u: goto label_243350;
        case 0x243354u: goto label_243354;
        case 0x243358u: goto label_243358;
        case 0x24335cu: goto label_24335c;
        case 0x243360u: goto label_243360;
        case 0x243364u: goto label_243364;
        case 0x243368u: goto label_243368;
        case 0x24336cu: goto label_24336c;
        case 0x243370u: goto label_243370;
        case 0x243374u: goto label_243374;
        case 0x243378u: goto label_243378;
        case 0x24337cu: goto label_24337c;
        case 0x243380u: goto label_243380;
        case 0x243384u: goto label_243384;
        case 0x243388u: goto label_243388;
        case 0x24338cu: goto label_24338c;
        case 0x243390u: goto label_243390;
        case 0x243394u: goto label_243394;
        case 0x243398u: goto label_243398;
        case 0x24339cu: goto label_24339c;
        case 0x2433a0u: goto label_2433a0;
        case 0x2433a4u: goto label_2433a4;
        case 0x2433a8u: goto label_2433a8;
        case 0x2433acu: goto label_2433ac;
        case 0x2433b0u: goto label_2433b0;
        case 0x2433b4u: goto label_2433b4;
        case 0x2433b8u: goto label_2433b8;
        case 0x2433bcu: goto label_2433bc;
        case 0x2433c0u: goto label_2433c0;
        case 0x2433c4u: goto label_2433c4;
        case 0x2433c8u: goto label_2433c8;
        case 0x2433ccu: goto label_2433cc;
        case 0x2433d0u: goto label_2433d0;
        case 0x2433d4u: goto label_2433d4;
        case 0x2433d8u: goto label_2433d8;
        case 0x2433dcu: goto label_2433dc;
        case 0x2433e0u: goto label_2433e0;
        case 0x2433e4u: goto label_2433e4;
        case 0x2433e8u: goto label_2433e8;
        case 0x2433ecu: goto label_2433ec;
        case 0x2433f0u: goto label_2433f0;
        case 0x2433f4u: goto label_2433f4;
        case 0x2433f8u: goto label_2433f8;
        case 0x2433fcu: goto label_2433fc;
        case 0x243400u: goto label_243400;
        case 0x243404u: goto label_243404;
        case 0x243408u: goto label_243408;
        case 0x24340cu: goto label_24340c;
        case 0x243410u: goto label_243410;
        case 0x243414u: goto label_243414;
        case 0x243418u: goto label_243418;
        case 0x24341cu: goto label_24341c;
        case 0x243420u: goto label_243420;
        case 0x243424u: goto label_243424;
        case 0x243428u: goto label_243428;
        case 0x24342cu: goto label_24342c;
        case 0x243430u: goto label_243430;
        case 0x243434u: goto label_243434;
        case 0x243438u: goto label_243438;
        case 0x24343cu: goto label_24343c;
        case 0x243440u: goto label_243440;
        case 0x243444u: goto label_243444;
        case 0x243448u: goto label_243448;
        case 0x24344cu: goto label_24344c;
        case 0x243450u: goto label_243450;
        case 0x243454u: goto label_243454;
        case 0x243458u: goto label_243458;
        case 0x24345cu: goto label_24345c;
        case 0x243460u: goto label_243460;
        case 0x243464u: goto label_243464;
        case 0x243468u: goto label_243468;
        case 0x24346cu: goto label_24346c;
        case 0x243470u: goto label_243470;
        case 0x243474u: goto label_243474;
        case 0x243478u: goto label_243478;
        case 0x24347cu: goto label_24347c;
        case 0x243480u: goto label_243480;
        case 0x243484u: goto label_243484;
        case 0x243488u: goto label_243488;
        case 0x24348cu: goto label_24348c;
        case 0x243490u: goto label_243490;
        case 0x243494u: goto label_243494;
        case 0x243498u: goto label_243498;
        case 0x24349cu: goto label_24349c;
        case 0x2434a0u: goto label_2434a0;
        case 0x2434a4u: goto label_2434a4;
        case 0x2434a8u: goto label_2434a8;
        case 0x2434acu: goto label_2434ac;
        case 0x2434b0u: goto label_2434b0;
        case 0x2434b4u: goto label_2434b4;
        case 0x2434b8u: goto label_2434b8;
        case 0x2434bcu: goto label_2434bc;
        case 0x2434c0u: goto label_2434c0;
        case 0x2434c4u: goto label_2434c4;
        case 0x2434c8u: goto label_2434c8;
        case 0x2434ccu: goto label_2434cc;
        case 0x2434d0u: goto label_2434d0;
        case 0x2434d4u: goto label_2434d4;
        case 0x2434d8u: goto label_2434d8;
        case 0x2434dcu: goto label_2434dc;
        case 0x2434e0u: goto label_2434e0;
        case 0x2434e4u: goto label_2434e4;
        case 0x2434e8u: goto label_2434e8;
        case 0x2434ecu: goto label_2434ec;
        case 0x2434f0u: goto label_2434f0;
        case 0x2434f4u: goto label_2434f4;
        case 0x2434f8u: goto label_2434f8;
        case 0x2434fcu: goto label_2434fc;
        case 0x243500u: goto label_243500;
        case 0x243504u: goto label_243504;
        case 0x243508u: goto label_243508;
        case 0x24350cu: goto label_24350c;
        case 0x243510u: goto label_243510;
        case 0x243514u: goto label_243514;
        case 0x243518u: goto label_243518;
        case 0x24351cu: goto label_24351c;
        case 0x243520u: goto label_243520;
        case 0x243524u: goto label_243524;
        case 0x243528u: goto label_243528;
        case 0x24352cu: goto label_24352c;
        case 0x243530u: goto label_243530;
        case 0x243534u: goto label_243534;
        case 0x243538u: goto label_243538;
        case 0x24353cu: goto label_24353c;
        case 0x243540u: goto label_243540;
        case 0x243544u: goto label_243544;
        case 0x243548u: goto label_243548;
        case 0x24354cu: goto label_24354c;
        case 0x243550u: goto label_243550;
        case 0x243554u: goto label_243554;
        case 0x243558u: goto label_243558;
        case 0x24355cu: goto label_24355c;
        case 0x243560u: goto label_243560;
        case 0x243564u: goto label_243564;
        case 0x243568u: goto label_243568;
        case 0x24356cu: goto label_24356c;
        case 0x243570u: goto label_243570;
        case 0x243574u: goto label_243574;
        case 0x243578u: goto label_243578;
        case 0x24357cu: goto label_24357c;
        case 0x243580u: goto label_243580;
        case 0x243584u: goto label_243584;
        case 0x243588u: goto label_243588;
        case 0x24358cu: goto label_24358c;
        case 0x243590u: goto label_243590;
        case 0x243594u: goto label_243594;
        case 0x243598u: goto label_243598;
        case 0x24359cu: goto label_24359c;
        case 0x2435a0u: goto label_2435a0;
        case 0x2435a4u: goto label_2435a4;
        case 0x2435a8u: goto label_2435a8;
        case 0x2435acu: goto label_2435ac;
        case 0x2435b0u: goto label_2435b0;
        case 0x2435b4u: goto label_2435b4;
        case 0x2435b8u: goto label_2435b8;
        case 0x2435bcu: goto label_2435bc;
        case 0x2435c0u: goto label_2435c0;
        case 0x2435c4u: goto label_2435c4;
        case 0x2435c8u: goto label_2435c8;
        case 0x2435ccu: goto label_2435cc;
        case 0x2435d0u: goto label_2435d0;
        case 0x2435d4u: goto label_2435d4;
        case 0x2435d8u: goto label_2435d8;
        case 0x2435dcu: goto label_2435dc;
        case 0x2435e0u: goto label_2435e0;
        case 0x2435e4u: goto label_2435e4;
        case 0x2435e8u: goto label_2435e8;
        case 0x2435ecu: goto label_2435ec;
        case 0x2435f0u: goto label_2435f0;
        case 0x2435f4u: goto label_2435f4;
        case 0x2435f8u: goto label_2435f8;
        case 0x2435fcu: goto label_2435fc;
        case 0x243600u: goto label_243600;
        case 0x243604u: goto label_243604;
        case 0x243608u: goto label_243608;
        case 0x24360cu: goto label_24360c;
        case 0x243610u: goto label_243610;
        case 0x243614u: goto label_243614;
        case 0x243618u: goto label_243618;
        case 0x24361cu: goto label_24361c;
        case 0x243620u: goto label_243620;
        case 0x243624u: goto label_243624;
        case 0x243628u: goto label_243628;
        case 0x24362cu: goto label_24362c;
        case 0x243630u: goto label_243630;
        case 0x243634u: goto label_243634;
        case 0x243638u: goto label_243638;
        case 0x24363cu: goto label_24363c;
        case 0x243640u: goto label_243640;
        case 0x243644u: goto label_243644;
        case 0x243648u: goto label_243648;
        case 0x24364cu: goto label_24364c;
        case 0x243650u: goto label_243650;
        case 0x243654u: goto label_243654;
        case 0x243658u: goto label_243658;
        case 0x24365cu: goto label_24365c;
        case 0x243660u: goto label_243660;
        case 0x243664u: goto label_243664;
        case 0x243668u: goto label_243668;
        case 0x24366cu: goto label_24366c;
        case 0x243670u: goto label_243670;
        case 0x243674u: goto label_243674;
        case 0x243678u: goto label_243678;
        case 0x24367cu: goto label_24367c;
        case 0x243680u: goto label_243680;
        case 0x243684u: goto label_243684;
        case 0x243688u: goto label_243688;
        case 0x24368cu: goto label_24368c;
        case 0x243690u: goto label_243690;
        case 0x243694u: goto label_243694;
        case 0x243698u: goto label_243698;
        case 0x24369cu: goto label_24369c;
        case 0x2436a0u: goto label_2436a0;
        case 0x2436a4u: goto label_2436a4;
        case 0x2436a8u: goto label_2436a8;
        case 0x2436acu: goto label_2436ac;
        case 0x2436b0u: goto label_2436b0;
        case 0x2436b4u: goto label_2436b4;
        case 0x2436b8u: goto label_2436b8;
        case 0x2436bcu: goto label_2436bc;
        case 0x2436c0u: goto label_2436c0;
        case 0x2436c4u: goto label_2436c4;
        case 0x2436c8u: goto label_2436c8;
        case 0x2436ccu: goto label_2436cc;
        case 0x2436d0u: goto label_2436d0;
        case 0x2436d4u: goto label_2436d4;
        case 0x2436d8u: goto label_2436d8;
        case 0x2436dcu: goto label_2436dc;
        case 0x2436e0u: goto label_2436e0;
        case 0x2436e4u: goto label_2436e4;
        case 0x2436e8u: goto label_2436e8;
        case 0x2436ecu: goto label_2436ec;
        case 0x2436f0u: goto label_2436f0;
        case 0x2436f4u: goto label_2436f4;
        case 0x2436f8u: goto label_2436f8;
        case 0x2436fcu: goto label_2436fc;
        case 0x243700u: goto label_243700;
        case 0x243704u: goto label_243704;
        case 0x243708u: goto label_243708;
        case 0x24370cu: goto label_24370c;
        case 0x243710u: goto label_243710;
        case 0x243714u: goto label_243714;
        case 0x243718u: goto label_243718;
        case 0x24371cu: goto label_24371c;
        case 0x243720u: goto label_243720;
        case 0x243724u: goto label_243724;
        case 0x243728u: goto label_243728;
        case 0x24372cu: goto label_24372c;
        case 0x243730u: goto label_243730;
        case 0x243734u: goto label_243734;
        case 0x243738u: goto label_243738;
        case 0x24373cu: goto label_24373c;
        case 0x243740u: goto label_243740;
        case 0x243744u: goto label_243744;
        case 0x243748u: goto label_243748;
        case 0x24374cu: goto label_24374c;
        case 0x243750u: goto label_243750;
        case 0x243754u: goto label_243754;
        case 0x243758u: goto label_243758;
        case 0x24375cu: goto label_24375c;
        case 0x243760u: goto label_243760;
        case 0x243764u: goto label_243764;
        case 0x243768u: goto label_243768;
        case 0x24376cu: goto label_24376c;
        case 0x243770u: goto label_243770;
        case 0x243774u: goto label_243774;
        case 0x243778u: goto label_243778;
        case 0x24377cu: goto label_24377c;
        case 0x243780u: goto label_243780;
        case 0x243784u: goto label_243784;
        case 0x243788u: goto label_243788;
        case 0x24378cu: goto label_24378c;
        case 0x243790u: goto label_243790;
        case 0x243794u: goto label_243794;
        case 0x243798u: goto label_243798;
        case 0x24379cu: goto label_24379c;
        case 0x2437a0u: goto label_2437a0;
        case 0x2437a4u: goto label_2437a4;
        case 0x2437a8u: goto label_2437a8;
        case 0x2437acu: goto label_2437ac;
        case 0x2437b0u: goto label_2437b0;
        case 0x2437b4u: goto label_2437b4;
        case 0x2437b8u: goto label_2437b8;
        case 0x2437bcu: goto label_2437bc;
        case 0x2437c0u: goto label_2437c0;
        case 0x2437c4u: goto label_2437c4;
        case 0x2437c8u: goto label_2437c8;
        case 0x2437ccu: goto label_2437cc;
        case 0x2437d0u: goto label_2437d0;
        case 0x2437d4u: goto label_2437d4;
        case 0x2437d8u: goto label_2437d8;
        case 0x2437dcu: goto label_2437dc;
        case 0x2437e0u: goto label_2437e0;
        case 0x2437e4u: goto label_2437e4;
        case 0x2437e8u: goto label_2437e8;
        case 0x2437ecu: goto label_2437ec;
        case 0x2437f0u: goto label_2437f0;
        case 0x2437f4u: goto label_2437f4;
        case 0x2437f8u: goto label_2437f8;
        case 0x2437fcu: goto label_2437fc;
        case 0x243800u: goto label_243800;
        case 0x243804u: goto label_243804;
        case 0x243808u: goto label_243808;
        case 0x24380cu: goto label_24380c;
        case 0x243810u: goto label_243810;
        case 0x243814u: goto label_243814;
        case 0x243818u: goto label_243818;
        case 0x24381cu: goto label_24381c;
        case 0x243820u: goto label_243820;
        case 0x243824u: goto label_243824;
        case 0x243828u: goto label_243828;
        case 0x24382cu: goto label_24382c;
        case 0x243830u: goto label_243830;
        case 0x243834u: goto label_243834;
        case 0x243838u: goto label_243838;
        case 0x24383cu: goto label_24383c;
        case 0x243840u: goto label_243840;
        case 0x243844u: goto label_243844;
        case 0x243848u: goto label_243848;
        case 0x24384cu: goto label_24384c;
        case 0x243850u: goto label_243850;
        case 0x243854u: goto label_243854;
        case 0x243858u: goto label_243858;
        case 0x24385cu: goto label_24385c;
        case 0x243860u: goto label_243860;
        case 0x243864u: goto label_243864;
        case 0x243868u: goto label_243868;
        case 0x24386cu: goto label_24386c;
        case 0x243870u: goto label_243870;
        case 0x243874u: goto label_243874;
        case 0x243878u: goto label_243878;
        case 0x24387cu: goto label_24387c;
        case 0x243880u: goto label_243880;
        case 0x243884u: goto label_243884;
        case 0x243888u: goto label_243888;
        case 0x24388cu: goto label_24388c;
        case 0x243890u: goto label_243890;
        case 0x243894u: goto label_243894;
        case 0x243898u: goto label_243898;
        case 0x24389cu: goto label_24389c;
        case 0x2438a0u: goto label_2438a0;
        case 0x2438a4u: goto label_2438a4;
        case 0x2438a8u: goto label_2438a8;
        case 0x2438acu: goto label_2438ac;
        case 0x2438b0u: goto label_2438b0;
        case 0x2438b4u: goto label_2438b4;
        case 0x2438b8u: goto label_2438b8;
        case 0x2438bcu: goto label_2438bc;
        case 0x2438c0u: goto label_2438c0;
        case 0x2438c4u: goto label_2438c4;
        case 0x2438c8u: goto label_2438c8;
        case 0x2438ccu: goto label_2438cc;
        case 0x2438d0u: goto label_2438d0;
        case 0x2438d4u: goto label_2438d4;
        case 0x2438d8u: goto label_2438d8;
        case 0x2438dcu: goto label_2438dc;
        case 0x2438e0u: goto label_2438e0;
        case 0x2438e4u: goto label_2438e4;
        case 0x2438e8u: goto label_2438e8;
        case 0x2438ecu: goto label_2438ec;
        case 0x2438f0u: goto label_2438f0;
        case 0x2438f4u: goto label_2438f4;
        case 0x2438f8u: goto label_2438f8;
        case 0x2438fcu: goto label_2438fc;
        case 0x243900u: goto label_243900;
        case 0x243904u: goto label_243904;
        case 0x243908u: goto label_243908;
        case 0x24390cu: goto label_24390c;
        case 0x243910u: goto label_243910;
        case 0x243914u: goto label_243914;
        case 0x243918u: goto label_243918;
        case 0x24391cu: goto label_24391c;
        case 0x243920u: goto label_243920;
        case 0x243924u: goto label_243924;
        case 0x243928u: goto label_243928;
        case 0x24392cu: goto label_24392c;
        case 0x243930u: goto label_243930;
        case 0x243934u: goto label_243934;
        case 0x243938u: goto label_243938;
        case 0x24393cu: goto label_24393c;
        case 0x243940u: goto label_243940;
        case 0x243944u: goto label_243944;
        case 0x243948u: goto label_243948;
        case 0x24394cu: goto label_24394c;
        case 0x243950u: goto label_243950;
        case 0x243954u: goto label_243954;
        case 0x243958u: goto label_243958;
        case 0x24395cu: goto label_24395c;
        case 0x243960u: goto label_243960;
        case 0x243964u: goto label_243964;
        case 0x243968u: goto label_243968;
        case 0x24396cu: goto label_24396c;
        case 0x243970u: goto label_243970;
        case 0x243974u: goto label_243974;
        case 0x243978u: goto label_243978;
        case 0x24397cu: goto label_24397c;
        case 0x243980u: goto label_243980;
        case 0x243984u: goto label_243984;
        case 0x243988u: goto label_243988;
        case 0x24398cu: goto label_24398c;
        case 0x243990u: goto label_243990;
        case 0x243994u: goto label_243994;
        case 0x243998u: goto label_243998;
        case 0x24399cu: goto label_24399c;
        case 0x2439a0u: goto label_2439a0;
        case 0x2439a4u: goto label_2439a4;
        case 0x2439a8u: goto label_2439a8;
        case 0x2439acu: goto label_2439ac;
        case 0x2439b0u: goto label_2439b0;
        case 0x2439b4u: goto label_2439b4;
        case 0x2439b8u: goto label_2439b8;
        case 0x2439bcu: goto label_2439bc;
        case 0x2439c0u: goto label_2439c0;
        case 0x2439c4u: goto label_2439c4;
        case 0x2439c8u: goto label_2439c8;
        case 0x2439ccu: goto label_2439cc;
        case 0x2439d0u: goto label_2439d0;
        case 0x2439d4u: goto label_2439d4;
        case 0x2439d8u: goto label_2439d8;
        case 0x2439dcu: goto label_2439dc;
        case 0x2439e0u: goto label_2439e0;
        case 0x2439e4u: goto label_2439e4;
        case 0x2439e8u: goto label_2439e8;
        case 0x2439ecu: goto label_2439ec;
        case 0x2439f0u: goto label_2439f0;
        case 0x2439f4u: goto label_2439f4;
        case 0x2439f8u: goto label_2439f8;
        case 0x2439fcu: goto label_2439fc;
        case 0x243a00u: goto label_243a00;
        case 0x243a04u: goto label_243a04;
        case 0x243a08u: goto label_243a08;
        default: break;
    }

    ctx->pc = 0x243250u;

label_243250:
    // 0x243250: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x243250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_243254:
    // 0x243254: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x243254u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
label_243258:
    // 0x243258: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x243258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_24325c:
    // 0x24325c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x24325cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_243260:
    // 0x243260: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x243260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_243264:
    // 0x243264: 0xafa40058  sw          $a0, 0x58($sp)
    ctx->pc = 0x243264u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
label_243268:
    // 0x243268: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x243268u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_24326c:
    // 0x24326c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24326cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_243270:
    // 0x243270: 0x0  nop
    ctx->pc = 0x243270u;
    // NOP
label_243274:
    // 0x243274: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x243274u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_243278:
    // 0x243278: 0x24100064  addiu       $s0, $zero, 0x64
    ctx->pc = 0x243278u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_24327c:
    // 0x24327c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x24327cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_243280:
    // 0x243280: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x243280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_243284:
    // 0x243284: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x243284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_243288:
    // 0x243288: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x243288u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_24328c:
    // 0x24328c: 0x1440004b  bnez        $v0, . + 4 + (0x4B << 2)
label_243290:
    if (ctx->pc == 0x243290u) {
        ctx->pc = 0x243294u;
        goto label_243294;
    }
    ctx->pc = 0x24328Cu;
    {
        const bool branch_taken_0x24328c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24328c) {
            ctx->pc = 0x2433BCu;
            goto label_2433bc;
        }
    }
    ctx->pc = 0x243294u;
label_243294:
    // 0x243294: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x243294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_243298:
    // 0x243298: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x243298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_24329c:
    // 0x24329c: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x24329cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_2432a0:
    // 0x2432a0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2432a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2432a4:
    // 0x2432a4: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_2432a8:
    if (ctx->pc == 0x2432A8u) {
        ctx->pc = 0x2432ACu;
        goto label_2432ac;
    }
    ctx->pc = 0x2432A4u;
    {
        const bool branch_taken_0x2432a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2432a4) {
            ctx->pc = 0x24332Cu;
            goto label_24332c;
        }
    }
    ctx->pc = 0x2432ACu;
label_2432ac:
    // 0x2432ac: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2432acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2432b0:
    // 0x2432b0: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x2432b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_2432b4:
    // 0x2432b4: 0xc461002c  lwc1        $f1, 0x2C($v1)
    ctx->pc = 0x2432b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2432b8:
    // 0x2432b8: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x2432b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
label_2432bc:
    // 0x2432bc: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x2432bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_2432c0:
    // 0x2432c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2432c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2432c4:
    // 0x2432c4: 0x0  nop
    ctx->pc = 0x2432c4u;
    // NOP
label_2432c8:
    // 0x2432c8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2432c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2432cc:
    // 0x2432cc: 0xe460002c  swc1        $f0, 0x2C($v1)
    ctx->pc = 0x2432ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 44), bits); }
label_2432d0:
    // 0x2432d0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2432d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2432d4:
    // 0x2432d4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2432d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_2432d8:
    // 0x2432d8: 0xc441002c  lwc1        $f1, 0x2C($v0)
    ctx->pc = 0x2432d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2432dc:
    // 0x2432dc: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x2432dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
label_2432e0:
    // 0x2432e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2432e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2432e4:
    // 0x2432e4: 0x0  nop
    ctx->pc = 0x2432e4u;
    // NOP
label_2432e8:
    // 0x2432e8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2432e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2432ec:
    // 0x2432ec: 0x0  nop
    ctx->pc = 0x2432ecu;
    // NOP
label_2432f0:
    // 0x2432f0: 0x4501002b  bc1t        . + 4 + (0x2B << 2)
label_2432f4:
    if (ctx->pc == 0x2432F4u) {
        ctx->pc = 0x2432F8u;
        goto label_2432f8;
    }
    ctx->pc = 0x2432F0u;
    {
        const bool branch_taken_0x2432f0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2432f0) {
            ctx->pc = 0x2433A0u;
            goto label_2433a0;
        }
    }
    ctx->pc = 0x2432F8u;
label_2432f8:
    // 0x2432f8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2432f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2432fc:
    // 0x2432fc: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x2432fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_243300:
    // 0x243300: 0x8c830030  lw          $v1, 0x30($a0)
    ctx->pc = 0x243300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_243304:
    // 0x243304: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x243304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_243308:
    // 0x243308: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x243308u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_24330c:
    // 0x24330c: 0xac820030  sw          $v0, 0x30($a0)
    ctx->pc = 0x24330cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
label_243310:
    // 0x243310: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x243310u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
label_243314:
    // 0x243314: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x243314u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_243318:
    // 0x243318: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x243318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_24331c:
    // 0x24331c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x24331cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_243320:
    // 0x243320: 0xe440002c  swc1        $f0, 0x2C($v0)
    ctx->pc = 0x243320u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 44), bits); }
label_243324:
    // 0x243324: 0x1000001e  b           . + 4 + (0x1E << 2)
label_243328:
    if (ctx->pc == 0x243328u) {
        ctx->pc = 0x24332Cu;
        goto label_24332c;
    }
    ctx->pc = 0x243324u;
    {
        const bool branch_taken_0x243324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x243324) {
            ctx->pc = 0x2433A0u;
            goto label_2433a0;
        }
    }
    ctx->pc = 0x24332Cu;
label_24332c:
    // 0x24332c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x24332cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_243330:
    // 0x243330: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x243330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_243334:
    // 0x243334: 0xc461002c  lwc1        $f1, 0x2C($v1)
    ctx->pc = 0x243334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_243338:
    // 0x243338: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x243338u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
label_24333c:
    // 0x24333c: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x24333cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_243340:
    // 0x243340: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x243340u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_243344:
    // 0x243344: 0x0  nop
    ctx->pc = 0x243344u;
    // NOP
label_243348:
    // 0x243348: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x243348u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_24334c:
    // 0x24334c: 0xe460002c  swc1        $f0, 0x2C($v1)
    ctx->pc = 0x24334cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 44), bits); }
label_243350:
    // 0x243350: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x243350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_243354:
    // 0x243354: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x243354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_243358:
    // 0x243358: 0xc441002c  lwc1        $f1, 0x2C($v0)
    ctx->pc = 0x243358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_24335c:
    // 0x24335c: 0x3c02c140  lui         $v0, 0xC140
    ctx->pc = 0x24335cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49472 << 16));
label_243360:
    // 0x243360: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x243360u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_243364:
    // 0x243364: 0x0  nop
    ctx->pc = 0x243364u;
    // NOP
label_243368:
    // 0x243368: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x243368u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_24336c:
    // 0x24336c: 0x0  nop
    ctx->pc = 0x24336cu;
    // NOP
label_243370:
    // 0x243370: 0x4500000b  bc1f        . + 4 + (0xB << 2)
label_243374:
    if (ctx->pc == 0x243374u) {
        ctx->pc = 0x243378u;
        goto label_243378;
    }
    ctx->pc = 0x243370u;
    {
        const bool branch_taken_0x243370 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x243370) {
            ctx->pc = 0x2433A0u;
            goto label_2433a0;
        }
    }
    ctx->pc = 0x243378u;
label_243378:
    // 0x243378: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x243378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_24337c:
    // 0x24337c: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x24337cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_243380:
    // 0x243380: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x243380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_243384:
    // 0x243384: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x243384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_243388:
    // 0x243388: 0xac620030  sw          $v0, 0x30($v1)
    ctx->pc = 0x243388u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 2));
label_24338c:
    // 0x24338c: 0x3c02c140  lui         $v0, 0xC140
    ctx->pc = 0x24338cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49472 << 16));
label_243390:
    // 0x243390: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x243390u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_243394:
    // 0x243394: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x243394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_243398:
    // 0x243398: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x243398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_24339c:
    // 0x24339c: 0xe440002c  swc1        $f0, 0x2C($v0)
    ctx->pc = 0x24339cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 44), bits); }
label_2433a0:
    // 0x2433a0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2433a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2433a4:
    // 0x2433a4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2433a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_2433a8:
    // 0x2433a8: 0xc441002c  lwc1        $f1, 0x2C($v0)
    ctx->pc = 0x2433a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2433ac:
    // 0x2433ac: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2433acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2433b0:
    // 0x2433b0: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x2433b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2433b4:
    // 0x2433b4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2433b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2433b8:
    // 0x2433b8: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x2433b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_2433bc:
    // 0x2433bc: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2433bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2433c0:
    // 0x2433c0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2433c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2433c4:
    // 0x2433c4: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x2433c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
label_2433c8:
    // 0x2433c8: 0x244512c0  addiu       $a1, $v0, 0x12C0
    ctx->pc = 0x2433c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
label_2433cc:
    // 0x2433cc: 0xc05cf7c  jal         func_173DF0
label_2433d0:
    if (ctx->pc == 0x2433D0u) {
        ctx->pc = 0x2433D4u;
        goto label_2433d4;
    }
    ctx->pc = 0x2433CCu;
    SET_GPR_U32(ctx, 31, 0x2433D4u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x2433CCu, 0x2433D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2433D4u;
label_2433d4:
    // 0x2433d4: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x2433d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
label_2433d8:
    // 0x2433d8: 0x3c02c974  lui         $v0, 0xC974
    ctx->pc = 0x2433d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51572 << 16));
label_2433dc:
    // 0x2433dc: 0x34422400  ori         $v0, $v0, 0x2400
    ctx->pc = 0x2433dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9216);
label_2433e0:
    // 0x2433e0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2433e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2433e4:
    // 0x2433e4: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x2433e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2433e8:
    // 0x2433e8: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2433e8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2433ec:
    // 0x2433ec: 0x0  nop
    ctx->pc = 0x2433ecu;
    // NOP
label_2433f0:
    // 0x2433f0: 0x4501001c  bc1t        . + 4 + (0x1C << 2)
label_2433f4:
    if (ctx->pc == 0x2433F4u) {
        ctx->pc = 0x2433F8u;
        goto label_2433f8;
    }
    ctx->pc = 0x2433F0u;
    {
        const bool branch_taken_0x2433f0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2433f0) {
            ctx->pc = 0x243464u;
            goto label_243464;
        }
    }
    ctx->pc = 0x2433F8u;
label_2433f8:
    // 0x2433f8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2433f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2433fc:
    // 0x2433fc: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x2433fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_243400:
    // 0x243400: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x243400u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
label_243404:
    // 0x243404: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x243404u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_243408:
    // 0x243408: 0x0  nop
    ctx->pc = 0x243408u;
    // NOP
label_24340c:
    // 0x24340c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x24340cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_243410:
    // 0x243410: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x243410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_243414:
    // 0x243414: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x243414u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_243418:
    // 0x243418: 0x0  nop
    ctx->pc = 0x243418u;
    // NOP
label_24341c:
    // 0x24341c: 0x45010011  bc1t        . + 4 + (0x11 << 2)
label_243420:
    if (ctx->pc == 0x243420u) {
        ctx->pc = 0x243424u;
        goto label_243424;
    }
    ctx->pc = 0x24341Cu;
    {
        const bool branch_taken_0x24341c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x24341c) {
            ctx->pc = 0x243464u;
            goto label_243464;
        }
    }
    ctx->pc = 0x243424u;
label_243424:
    // 0x243424: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x243424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_243428:
    // 0x243428: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x243428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_24342c:
    // 0x24342c: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x24342cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
label_243430:
    // 0x243430: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x243430u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_243434:
    // 0x243434: 0x0  nop
    ctx->pc = 0x243434u;
    // NOP
label_243438:
    // 0x243438: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x243438u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_24343c:
    // 0x24343c: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x24343cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_243440:
    // 0x243440: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x243440u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_243444:
    // 0x243444: 0x0  nop
    ctx->pc = 0x243444u;
    // NOP
label_243448:
    // 0x243448: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_24344c:
    if (ctx->pc == 0x24344Cu) {
        ctx->pc = 0x243450u;
        goto label_243450;
    }
    ctx->pc = 0x243448u;
    {
        const bool branch_taken_0x243448 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x243448) {
            ctx->pc = 0x243464u;
            goto label_243464;
        }
    }
    ctx->pc = 0x243450u;
label_243450:
    // 0x243450: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x243450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_243454:
    // 0x243454: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x243454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_243458:
    // 0x243458: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x243458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_24345c:
    // 0x24345c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x24345cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_243460:
    // 0x243460: 0xac620030  sw          $v0, 0x30($v1)
    ctx->pc = 0x243460u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 2));
label_243464:
    // 0x243464: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x243464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_243468:
    // 0x243468: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x243468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_24346c:
    // 0x24346c: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x24346cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_243470:
    // 0x243470: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x243470u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_243474:
    // 0x243474: 0x1440002e  bnez        $v0, . + 4 + (0x2E << 2)
label_243478:
    if (ctx->pc == 0x243478u) {
        ctx->pc = 0x24347Cu;
        goto label_24347c;
    }
    ctx->pc = 0x243474u;
    {
        const bool branch_taken_0x243474 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x243474) {
            ctx->pc = 0x243530u;
            goto label_243530;
        }
    }
    ctx->pc = 0x24347Cu;
label_24347c:
    // 0x24347c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x24347cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_243480:
    // 0x243480: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x243480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_243484:
    // 0x243484: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x243484u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
label_243488:
    // 0x243488: 0x3c0243c8  lui         $v0, 0x43C8
    ctx->pc = 0x243488u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17352 << 16));
label_24348c:
    // 0x24348c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x24348cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_243490:
    // 0x243490: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x243490u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_243494:
    // 0x243494: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x243494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294958308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_243498:
    // 0x243498: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x243498u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_24349c:
    // 0x24349c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x24349cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2434a0:
    // 0x2434a0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2434a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_2434a4:
    // 0x2434a4: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x2434a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
label_2434a8:
    // 0x2434a8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2434a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2434ac:
    // 0x2434ac: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2434acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_2434b0:
    // 0x2434b0: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x2434b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2434b4:
    // 0x2434b4: 0x3c02442f  lui         $v0, 0x442F
    ctx->pc = 0x2434b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17455 << 16));
label_2434b8:
    // 0x2434b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2434b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2434bc:
    // 0x2434bc: 0x0  nop
    ctx->pc = 0x2434bcu;
    // NOP
label_2434c0:
    // 0x2434c0: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2434c0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2434c4:
    // 0x2434c4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2434c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2434c8:
    // 0x2434c8: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x2434c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2434cc:
    // 0x2434cc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2434ccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2434d0:
    // 0x2434d0: 0x0  nop
    ctx->pc = 0x2434d0u;
    // NOP
label_2434d4:
    // 0x2434d4: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_2434d8:
    if (ctx->pc == 0x2434D8u) {
        ctx->pc = 0x2434DCu;
        goto label_2434dc;
    }
    ctx->pc = 0x2434D4u;
    {
        const bool branch_taken_0x2434d4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2434d4) {
            ctx->pc = 0x2434ECu;
            goto label_2434ec;
        }
    }
    ctx->pc = 0x2434DCu;
label_2434dc:
    // 0x2434dc: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x2434dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
label_2434e0:
    // 0x2434e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2434e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2434e4:
    // 0x2434e4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2434e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2434e8:
    // 0x2434e8: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x2434e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
label_2434ec:
    // 0x2434ec: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2434ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2434f0:
    // 0x2434f0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2434f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_2434f4:
    // 0x2434f4: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x2434f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2434f8:
    // 0x2434f8: 0x3c02442f  lui         $v0, 0x442F
    ctx->pc = 0x2434f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17455 << 16));
label_2434fc:
    // 0x2434fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2434fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_243500:
    // 0x243500: 0x0  nop
    ctx->pc = 0x243500u;
    // NOP
label_243504:
    // 0x243504: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x243504u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_243508:
    // 0x243508: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x243508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_24350c:
    // 0x24350c: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x24350cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_243510:
    // 0x243510: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x243510u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_243514:
    // 0x243514: 0x0  nop
    ctx->pc = 0x243514u;
    // NOP
label_243518:
    // 0x243518: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_24351c:
    if (ctx->pc == 0x24351Cu) {
        ctx->pc = 0x243520u;
        goto label_243520;
    }
    ctx->pc = 0x243518u;
    {
        const bool branch_taken_0x243518 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x243518) {
            ctx->pc = 0x243530u;
            goto label_243530;
        }
    }
    ctx->pc = 0x243520u;
label_243520:
    // 0x243520: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x243520u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_243524:
    // 0x243524: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x243524u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_243528:
    // 0x243528: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x243528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_24352c:
    // 0x24352c: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x24352cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
label_243530:
    // 0x243530: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x243530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_243534:
    // 0x243534: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x243534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_243538:
    // 0x243538: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x243538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_24353c:
    // 0x24353c: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x24353cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
label_243540:
    // 0x243540: 0x14400091  bnez        $v0, . + 4 + (0x91 << 2)
label_243544:
    if (ctx->pc == 0x243544u) {
        ctx->pc = 0x243548u;
        goto label_243548;
    }
    ctx->pc = 0x243540u;
    {
        const bool branch_taken_0x243540 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x243540) {
            ctx->pc = 0x243788u;
            goto label_243788;
        }
    }
    ctx->pc = 0x243548u;
label_243548:
    // 0x243548: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x243548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_24354c:
    // 0x24354c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x24354cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_243550:
    // 0x243550: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x243550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_243554:
    // 0x243554: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x243554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_243558:
    // 0x243558: 0xc4400188  lwc1        $f0, 0x188($v0)
    ctx->pc = 0x243558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24355c:
    // 0x24355c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x24355cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_243560:
    // 0x243560: 0x0  nop
    ctx->pc = 0x243560u;
    // NOP
label_243564:
    // 0x243564: 0x45010040  bc1t        . + 4 + (0x40 << 2)
label_243568:
    if (ctx->pc == 0x243568u) {
        ctx->pc = 0x24356Cu;
        goto label_24356c;
    }
    ctx->pc = 0x243564u;
    {
        const bool branch_taken_0x243564 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x243564) {
            ctx->pc = 0x243668u;
            goto label_243668;
        }
    }
    ctx->pc = 0x24356Cu;
label_24356c:
    // 0x24356c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x24356cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_243570:
    // 0x243570: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x243570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_243574:
    // 0x243574: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x243574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_243578:
    // 0x243578: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x243578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_24357c:
    // 0x24357c: 0xc4400188  lwc1        $f0, 0x188($v0)
    ctx->pc = 0x24357cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_243580:
    // 0x243580: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x243580u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_243584:
    // 0x243584: 0x0  nop
    ctx->pc = 0x243584u;
    // NOP
label_243588:
    // 0x243588: 0x45010016  bc1t        . + 4 + (0x16 << 2)
label_24358c:
    if (ctx->pc == 0x24358Cu) {
        ctx->pc = 0x243590u;
        goto label_243590;
    }
    ctx->pc = 0x243588u;
    {
        const bool branch_taken_0x243588 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x243588) {
            ctx->pc = 0x2435E4u;
            goto label_2435e4;
        }
    }
    ctx->pc = 0x243590u;
label_243590:
    // 0x243590: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x243590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_243594:
    // 0x243594: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x243594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_243598:
    // 0x243598: 0xc4410024  lwc1        $f1, 0x24($v0)
    ctx->pc = 0x243598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_24359c:
    // 0x24359c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x24359cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2435a0:
    // 0x2435a0: 0xc4400188  lwc1        $f0, 0x188($v0)
    ctx->pc = 0x2435a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2435a4:
    // 0x2435a4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2435a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2435a8:
    // 0x2435a8: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x2435a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
label_2435ac:
    // 0x2435ac: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2435acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2435b0:
    // 0x2435b0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2435b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_2435b4:
    // 0x2435b4: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x2435b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2435b8:
    // 0x2435b8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2435b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2435bc:
    // 0x2435bc: 0xc4400188  lwc1        $f0, 0x188($v0)
    ctx->pc = 0x2435bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2435c0:
    // 0x2435c0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2435c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2435c4:
    // 0x2435c4: 0x0  nop
    ctx->pc = 0x2435c4u;
    // NOP
label_2435c8:
    // 0x2435c8: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_2435cc:
    if (ctx->pc == 0x2435CCu) {
        ctx->pc = 0x2435D0u;
        goto label_2435d0;
    }
    ctx->pc = 0x2435C8u;
    {
        const bool branch_taken_0x2435c8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2435c8) {
            ctx->pc = 0x2435E4u;
            goto label_2435e4;
        }
    }
    ctx->pc = 0x2435D0u;
label_2435d0:
    // 0x2435d0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2435d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2435d4:
    // 0x2435d4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2435d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_2435d8:
    // 0x2435d8: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x2435d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2435dc:
    // 0x2435dc: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2435dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2435e0:
    // 0x2435e0: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x2435e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
label_2435e4:
    // 0x2435e4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2435e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2435e8:
    // 0x2435e8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2435e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_2435ec:
    // 0x2435ec: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x2435ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2435f0:
    // 0x2435f0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2435f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2435f4:
    // 0x2435f4: 0xc4400188  lwc1        $f0, 0x188($v0)
    ctx->pc = 0x2435f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2435f8:
    // 0x2435f8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2435f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2435fc:
    // 0x2435fc: 0x0  nop
    ctx->pc = 0x2435fcu;
    // NOP
label_243600:
    // 0x243600: 0x45000019  bc1f        . + 4 + (0x19 << 2)
label_243604:
    if (ctx->pc == 0x243604u) {
        ctx->pc = 0x243608u;
        goto label_243608;
    }
    ctx->pc = 0x243600u;
    {
        const bool branch_taken_0x243600 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x243600) {
            ctx->pc = 0x243668u;
            goto label_243668;
        }
    }
    ctx->pc = 0x243608u;
label_243608:
    // 0x243608: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x243608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_24360c:
    // 0x24360c: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x24360cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_243610:
    // 0x243610: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x243610u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_243614:
    // 0x243614: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x243614u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_243618:
    // 0x243618: 0xc4600024  lwc1        $f0, 0x24($v1)
    ctx->pc = 0x243618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24361c:
    // 0x24361c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x24361cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_243620:
    // 0x243620: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x243620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_243624:
    // 0x243624: 0xc4400188  lwc1        $f0, 0x188($v0)
    ctx->pc = 0x243624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_243628:
    // 0x243628: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x243628u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_24362c:
    // 0x24362c: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x24362cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
label_243630:
    // 0x243630: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x243630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_243634:
    // 0x243634: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x243634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_243638:
    // 0x243638: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x243638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_24363c:
    // 0x24363c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x24363cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_243640:
    // 0x243640: 0xc4400188  lwc1        $f0, 0x188($v0)
    ctx->pc = 0x243640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_243644:
    // 0x243644: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x243644u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_243648:
    // 0x243648: 0x0  nop
    ctx->pc = 0x243648u;
    // NOP
label_24364c:
    // 0x24364c: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_243650:
    if (ctx->pc == 0x243650u) {
        ctx->pc = 0x243654u;
        goto label_243654;
    }
    ctx->pc = 0x24364Cu;
    {
        const bool branch_taken_0x24364c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x24364c) {
            ctx->pc = 0x243668u;
            goto label_243668;
        }
    }
    ctx->pc = 0x243654u;
label_243654:
    // 0x243654: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x243654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_243658:
    // 0x243658: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x243658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_24365c:
    // 0x24365c: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x24365cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_243660:
    // 0x243660: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x243660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_243664:
    // 0x243664: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x243664u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
label_243668:
    // 0x243668: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x243668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_24366c:
    // 0x24366c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x24366cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_243670:
    // 0x243670: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x243670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_243674:
    // 0x243674: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x243674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_243678:
    // 0x243678: 0xc4400180  lwc1        $f0, 0x180($v0)
    ctx->pc = 0x243678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24367c:
    // 0x24367c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x24367cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_243680:
    // 0x243680: 0x0  nop
    ctx->pc = 0x243680u;
    // NOP
label_243684:
    // 0x243684: 0x45010040  bc1t        . + 4 + (0x40 << 2)
label_243688:
    if (ctx->pc == 0x243688u) {
        ctx->pc = 0x24368Cu;
        goto label_24368c;
    }
    ctx->pc = 0x243684u;
    {
        const bool branch_taken_0x243684 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x243684) {
            ctx->pc = 0x243788u;
            goto label_243788;
        }
    }
    ctx->pc = 0x24368Cu;
label_24368c:
    // 0x24368c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x24368cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_243690:
    // 0x243690: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x243690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_243694:
    // 0x243694: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x243694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_243698:
    // 0x243698: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x243698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_24369c:
    // 0x24369c: 0xc4400180  lwc1        $f0, 0x180($v0)
    ctx->pc = 0x24369cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2436a0:
    // 0x2436a0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2436a0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2436a4:
    // 0x2436a4: 0x0  nop
    ctx->pc = 0x2436a4u;
    // NOP
label_2436a8:
    // 0x2436a8: 0x45010016  bc1t        . + 4 + (0x16 << 2)
label_2436ac:
    if (ctx->pc == 0x2436ACu) {
        ctx->pc = 0x2436B0u;
        goto label_2436b0;
    }
    ctx->pc = 0x2436A8u;
    {
        const bool branch_taken_0x2436a8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2436a8) {
            ctx->pc = 0x243704u;
            goto label_243704;
        }
    }
    ctx->pc = 0x2436B0u;
label_2436b0:
    // 0x2436b0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2436b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2436b4:
    // 0x2436b4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2436b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_2436b8:
    // 0x2436b8: 0xc4410020  lwc1        $f1, 0x20($v0)
    ctx->pc = 0x2436b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2436bc:
    // 0x2436bc: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2436bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2436c0:
    // 0x2436c0: 0xc4400180  lwc1        $f0, 0x180($v0)
    ctx->pc = 0x2436c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2436c4:
    // 0x2436c4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2436c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2436c8:
    // 0x2436c8: 0xe4400180  swc1        $f0, 0x180($v0)
    ctx->pc = 0x2436c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
label_2436cc:
    // 0x2436cc: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2436ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2436d0:
    // 0x2436d0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2436d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_2436d4:
    // 0x2436d4: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x2436d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2436d8:
    // 0x2436d8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2436d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2436dc:
    // 0x2436dc: 0xc4400180  lwc1        $f0, 0x180($v0)
    ctx->pc = 0x2436dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2436e0:
    // 0x2436e0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2436e0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2436e4:
    // 0x2436e4: 0x0  nop
    ctx->pc = 0x2436e4u;
    // NOP
label_2436e8:
    // 0x2436e8: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_2436ec:
    if (ctx->pc == 0x2436ECu) {
        ctx->pc = 0x2436F0u;
        goto label_2436f0;
    }
    ctx->pc = 0x2436E8u;
    {
        const bool branch_taken_0x2436e8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2436e8) {
            ctx->pc = 0x243704u;
            goto label_243704;
        }
    }
    ctx->pc = 0x2436F0u;
label_2436f0:
    // 0x2436f0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2436f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2436f4:
    // 0x2436f4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2436f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_2436f8:
    // 0x2436f8: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x2436f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2436fc:
    // 0x2436fc: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2436fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_243700:
    // 0x243700: 0xe4400180  swc1        $f0, 0x180($v0)
    ctx->pc = 0x243700u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
label_243704:
    // 0x243704: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x243704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_243708:
    // 0x243708: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x243708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_24370c:
    // 0x24370c: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x24370cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_243710:
    // 0x243710: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x243710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_243714:
    // 0x243714: 0xc4400180  lwc1        $f0, 0x180($v0)
    ctx->pc = 0x243714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_243718:
    // 0x243718: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x243718u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_24371c:
    // 0x24371c: 0x0  nop
    ctx->pc = 0x24371cu;
    // NOP
label_243720:
    // 0x243720: 0x45000019  bc1f        . + 4 + (0x19 << 2)
label_243724:
    if (ctx->pc == 0x243724u) {
        ctx->pc = 0x243728u;
        goto label_243728;
    }
    ctx->pc = 0x243720u;
    {
        const bool branch_taken_0x243720 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x243720) {
            ctx->pc = 0x243788u;
            goto label_243788;
        }
    }
    ctx->pc = 0x243728u;
label_243728:
    // 0x243728: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x243728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_24372c:
    // 0x24372c: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x24372cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_243730:
    // 0x243730: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x243730u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_243734:
    // 0x243734: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x243734u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_243738:
    // 0x243738: 0xc4600024  lwc1        $f0, 0x24($v1)
    ctx->pc = 0x243738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24373c:
    // 0x24373c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x24373cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_243740:
    // 0x243740: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x243740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_243744:
    // 0x243744: 0xc4400180  lwc1        $f0, 0x180($v0)
    ctx->pc = 0x243744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_243748:
    // 0x243748: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x243748u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_24374c:
    // 0x24374c: 0xe4400180  swc1        $f0, 0x180($v0)
    ctx->pc = 0x24374cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
label_243750:
    // 0x243750: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x243750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_243754:
    // 0x243754: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x243754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_243758:
    // 0x243758: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x243758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_24375c:
    // 0x24375c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x24375cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_243760:
    // 0x243760: 0xc4400180  lwc1        $f0, 0x180($v0)
    ctx->pc = 0x243760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_243764:
    // 0x243764: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x243764u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_243768:
    // 0x243768: 0x0  nop
    ctx->pc = 0x243768u;
    // NOP
label_24376c:
    // 0x24376c: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_243770:
    if (ctx->pc == 0x243770u) {
        ctx->pc = 0x243774u;
        goto label_243774;
    }
    ctx->pc = 0x24376Cu;
    {
        const bool branch_taken_0x24376c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x24376c) {
            ctx->pc = 0x243788u;
            goto label_243788;
        }
    }
    ctx->pc = 0x243774u;
label_243774:
    // 0x243774: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x243774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_243778:
    // 0x243778: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x243778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_24377c:
    // 0x24377c: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x24377cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_243780:
    // 0x243780: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x243780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_243784:
    // 0x243784: 0xe4400180  swc1        $f0, 0x180($v0)
    ctx->pc = 0x243784u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
label_243788:
    // 0x243788: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x243788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_24378c:
    // 0x24378c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x24378cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_243790:
    // 0x243790: 0xc4410038  lwc1        $f1, 0x38($v0)
    ctx->pc = 0x243790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_243794:
    // 0x243794: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x243794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_243798:
    // 0x243798: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x243798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_24379c:
    // 0x24379c: 0xc440003c  lwc1        $f0, 0x3C($v0)
    ctx->pc = 0x24379cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2437a0:
    // 0x2437a0: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2437a0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2437a4:
    // 0x2437a4: 0x0  nop
    ctx->pc = 0x2437a4u;
    // NOP
label_2437a8:
    // 0x2437a8: 0x45010045  bc1t        . + 4 + (0x45 << 2)
label_2437ac:
    if (ctx->pc == 0x2437ACu) {
        ctx->pc = 0x2437B0u;
        goto label_2437b0;
    }
    ctx->pc = 0x2437A8u;
    {
        const bool branch_taken_0x2437a8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2437a8) {
            ctx->pc = 0x2438C0u;
            goto label_2438c0;
        }
    }
    ctx->pc = 0x2437B0u;
label_2437b0:
    // 0x2437b0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2437b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2437b4:
    // 0x2437b4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2437b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_2437b8:
    // 0x2437b8: 0xc441003c  lwc1        $f1, 0x3C($v0)
    ctx->pc = 0x2437b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2437bc:
    // 0x2437bc: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2437bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2437c0:
    // 0x2437c0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2437c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_2437c4:
    // 0x2437c4: 0xc4400038  lwc1        $f0, 0x38($v0)
    ctx->pc = 0x2437c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2437c8:
    // 0x2437c8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2437c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2437cc:
    // 0x2437cc: 0x0  nop
    ctx->pc = 0x2437ccu;
    // NOP
label_2437d0:
    // 0x2437d0: 0x45010019  bc1t        . + 4 + (0x19 << 2)
label_2437d4:
    if (ctx->pc == 0x2437D4u) {
        ctx->pc = 0x2437D8u;
        goto label_2437d8;
    }
    ctx->pc = 0x2437D0u;
    {
        const bool branch_taken_0x2437d0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2437d0) {
            ctx->pc = 0x243838u;
            goto label_243838;
        }
    }
    ctx->pc = 0x2437D8u;
label_2437d8:
    // 0x2437d8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2437d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2437dc:
    // 0x2437dc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2437dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_2437e0:
    // 0x2437e0: 0xc4410058  lwc1        $f1, 0x58($v0)
    ctx->pc = 0x2437e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2437e4:
    // 0x2437e4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2437e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2437e8:
    // 0x2437e8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2437e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_2437ec:
    // 0x2437ec: 0xc4400038  lwc1        $f0, 0x38($v0)
    ctx->pc = 0x2437ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2437f0:
    // 0x2437f0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2437f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2437f4:
    // 0x2437f4: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x2437f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
label_2437f8:
    // 0x2437f8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2437f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2437fc:
    // 0x2437fc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2437fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_243800:
    // 0x243800: 0xc441003c  lwc1        $f1, 0x3C($v0)
    ctx->pc = 0x243800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_243804:
    // 0x243804: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x243804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_243808:
    // 0x243808: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x243808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_24380c:
    // 0x24380c: 0xc4400038  lwc1        $f0, 0x38($v0)
    ctx->pc = 0x24380cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_243810:
    // 0x243810: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x243810u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_243814:
    // 0x243814: 0x0  nop
    ctx->pc = 0x243814u;
    // NOP
label_243818:
    // 0x243818: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_24381c:
    if (ctx->pc == 0x24381Cu) {
        ctx->pc = 0x243820u;
        goto label_243820;
    }
    ctx->pc = 0x243818u;
    {
        const bool branch_taken_0x243818 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x243818) {
            ctx->pc = 0x243838u;
            goto label_243838;
        }
    }
    ctx->pc = 0x243820u;
label_243820:
    // 0x243820: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x243820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_243824:
    // 0x243824: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x243824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_243828:
    // 0x243828: 0xc440003c  lwc1        $f0, 0x3C($v0)
    ctx->pc = 0x243828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24382c:
    // 0x24382c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x24382cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_243830:
    // 0x243830: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x243830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_243834:
    // 0x243834: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x243834u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
label_243838:
    // 0x243838: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x243838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_24383c:
    // 0x24383c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x24383cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_243840:
    // 0x243840: 0xc441003c  lwc1        $f1, 0x3C($v0)
    ctx->pc = 0x243840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_243844:
    // 0x243844: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x243844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_243848:
    // 0x243848: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x243848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_24384c:
    // 0x24384c: 0xc4400038  lwc1        $f0, 0x38($v0)
    ctx->pc = 0x24384cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_243850:
    // 0x243850: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x243850u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_243854:
    // 0x243854: 0x0  nop
    ctx->pc = 0x243854u;
    // NOP
label_243858:
    // 0x243858: 0x45000019  bc1f        . + 4 + (0x19 << 2)
label_24385c:
    if (ctx->pc == 0x24385Cu) {
        ctx->pc = 0x243860u;
        goto label_243860;
    }
    ctx->pc = 0x243858u;
    {
        const bool branch_taken_0x243858 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x243858) {
            ctx->pc = 0x2438C0u;
            goto label_2438c0;
        }
    }
    ctx->pc = 0x243860u;
label_243860:
    // 0x243860: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x243860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_243864:
    // 0x243864: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x243864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_243868:
    // 0x243868: 0xc4410058  lwc1        $f1, 0x58($v0)
    ctx->pc = 0x243868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_24386c:
    // 0x24386c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x24386cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_243870:
    // 0x243870: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x243870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_243874:
    // 0x243874: 0xc4400038  lwc1        $f0, 0x38($v0)
    ctx->pc = 0x243874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_243878:
    // 0x243878: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x243878u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_24387c:
    // 0x24387c: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x24387cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
label_243880:
    // 0x243880: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x243880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_243884:
    // 0x243884: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x243884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_243888:
    // 0x243888: 0xc441003c  lwc1        $f1, 0x3C($v0)
    ctx->pc = 0x243888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_24388c:
    // 0x24388c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x24388cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_243890:
    // 0x243890: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x243890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_243894:
    // 0x243894: 0xc4400038  lwc1        $f0, 0x38($v0)
    ctx->pc = 0x243894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_243898:
    // 0x243898: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x243898u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_24389c:
    // 0x24389c: 0x0  nop
    ctx->pc = 0x24389cu;
    // NOP
label_2438a0:
    // 0x2438a0: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_2438a4:
    if (ctx->pc == 0x2438A4u) {
        ctx->pc = 0x2438A8u;
        goto label_2438a8;
    }
    ctx->pc = 0x2438A0u;
    {
        const bool branch_taken_0x2438a0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2438a0) {
            ctx->pc = 0x2438C0u;
            goto label_2438c0;
        }
    }
    ctx->pc = 0x2438A8u;
label_2438a8:
    // 0x2438a8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2438a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2438ac:
    // 0x2438ac: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2438acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_2438b0:
    // 0x2438b0: 0xc440003c  lwc1        $f0, 0x3C($v0)
    ctx->pc = 0x2438b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2438b4:
    // 0x2438b4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2438b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2438b8:
    // 0x2438b8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2438b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_2438bc:
    // 0x2438bc: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x2438bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
label_2438c0:
    // 0x2438c0: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2438c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2438c4:
    // 0x2438c4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2438c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2438c8:
    // 0x2438c8: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x2438c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_2438cc:
    // 0x2438cc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2438ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2438d0:
    // 0x2438d0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2438d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2438d4:
    // 0x2438d4: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2438d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_2438d8:
    // 0x2438d8: 0x2442b390  addiu       $v0, $v0, -0x4C70
    ctx->pc = 0x2438d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947728));
label_2438dc:
    // 0x2438dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2438dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2438e0:
    // 0x2438e0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2438e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2438e4:
    // 0x2438e4: 0x40f809  jalr        $v0
label_2438e8:
    if (ctx->pc == 0x2438E8u) {
        ctx->pc = 0x2438ECu;
        goto label_2438ec;
    }
    ctx->pc = 0x2438E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2438ECu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2438E4u, 0x2438ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2438ECu;
label_2438ec:
    // 0x2438ec: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2438ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2438f0:
    // 0x2438f0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2438f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2438f4:
    // 0x2438f4: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x2438f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_2438f8:
    // 0x2438f8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2438f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2438fc:
    // 0x2438fc: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2438fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_243900:
    // 0x243900: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x243900u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_243904:
    // 0x243904: 0x2442b3d0  addiu       $v0, $v0, -0x4C30
    ctx->pc = 0x243904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947792));
label_243908:
    // 0x243908: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x243908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_24390c:
    // 0x24390c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x24390cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_243910:
    // 0x243910: 0x40f809  jalr        $v0
label_243914:
    if (ctx->pc == 0x243914u) {
        ctx->pc = 0x243918u;
        goto label_243918;
    }
    ctx->pc = 0x243910u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x243918u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x243910u, 0x243918u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x243918u;
label_243918:
    // 0x243918: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x243918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_24391c:
    // 0x24391c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x24391cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_243920:
    // 0x243920: 0x8442005c  lh          $v0, 0x5C($v0)
    ctx->pc = 0x243920u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 92)));
label_243924:
    // 0x243924: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_243928:
    if (ctx->pc == 0x243928u) {
        ctx->pc = 0x24392Cu;
        goto label_24392c;
    }
    ctx->pc = 0x243924u;
    {
        const bool branch_taken_0x243924 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x243924) {
            ctx->pc = 0x243940u;
            goto label_243940;
        }
    }
    ctx->pc = 0x24392Cu;
label_24392c:
    // 0x24392c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x24392cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_243930:
    // 0x243930: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x243930u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_243934:
    // 0x243934: 0x8462005c  lh          $v0, 0x5C($v1)
    ctx->pc = 0x243934u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 92)));
label_243938:
    // 0x243938: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x243938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_24393c:
    // 0x24393c: 0xa462005c  sh          $v0, 0x5C($v1)
    ctx->pc = 0x24393cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 92), (uint16_t)GPR_U32(ctx, 2));
label_243940:
    // 0x243940: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x243940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_243944:
    // 0x243944: 0xc44c0120  lwc1        $f12, 0x120($v0)
    ctx->pc = 0x243944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_243948:
    // 0x243948: 0xc047fe2  jal         func_11FF88
label_24394c:
    if (ctx->pc == 0x24394Cu) {
        ctx->pc = 0x243950u;
        goto label_243950;
    }
    ctx->pc = 0x243948u;
    SET_GPR_U32(ctx, 31, 0x243950u);
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x243948u, 0x243950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243950u;
label_243950:
    // 0x243950: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x243950u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_243954:
    // 0x243954: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x243954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_243958:
    // 0x243958: 0xc44c0124  lwc1        $f12, 0x124($v0)
    ctx->pc = 0x243958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_24395c:
    // 0x24395c: 0xc047fe2  jal         func_11FF88
label_243960:
    if (ctx->pc == 0x243960u) {
        ctx->pc = 0x243964u;
        goto label_243964;
    }
    ctx->pc = 0x24395Cu;
    SET_GPR_U32(ctx, 31, 0x243964u);
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x24395Cu, 0x243964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243964u;
label_243964:
    // 0x243964: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x243964u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_243968:
    // 0x243968: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x243968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_24396c:
    // 0x24396c: 0xc44c0128  lwc1        $f12, 0x128($v0)
    ctx->pc = 0x24396cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_243970:
    // 0x243970: 0xc047fe2  jal         func_11FF88
label_243974:
    if (ctx->pc == 0x243974u) {
        ctx->pc = 0x243978u;
        goto label_243978;
    }
    ctx->pc = 0x243970u;
    SET_GPR_U32(ctx, 31, 0x243978u);
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x243970u, 0x243978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243978u;
label_243978:
    // 0x243978: 0x24030808  addiu       $v1, $zero, 0x808
    ctx->pc = 0x243978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
label_24397c:
    // 0x24397c: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x24397cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
label_243980:
    // 0x243980: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x243980u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
label_243984:
    // 0x243984: 0x34630a05  ori         $v1, $v1, 0xA05
    ctx->pc = 0x243984u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2565);
label_243988:
    // 0x243988: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x243988u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_24398c:
    // 0x24398c: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x24398cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_243990:
    // 0x243990: 0x24651248  addiu       $a1, $v1, 0x1248
    ctx->pc = 0x243990u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4680));
label_243994:
    // 0x243994: 0x72403628  paddub      $a2, $s2, $zero
    ctx->pc = 0x243994u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
label_243998:
    // 0x243998: 0x72203e28  paddub      $a3, $s1, $zero
    ctx->pc = 0x243998u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_24399c:
    // 0x24399c: 0x70404628  paddub      $t0, $v0, $zero
    ctx->pc = 0x24399cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2439a0:
    // 0x2439a0: 0xc059b14  jal         func_166C50
label_2439a4:
    if (ctx->pc == 0x2439A4u) {
        ctx->pc = 0x2439A8u;
        goto label_2439a8;
    }
    ctx->pc = 0x2439A0u;
    SET_GPR_U32(ctx, 31, 0x2439A8u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x2439A0u, 0x2439A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2439A8u;
label_2439a8:
    // 0x2439a8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2439a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2439ac:
    // 0x2439ac: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x2439acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_2439b0:
    // 0x2439b0: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x2439b0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2439b4:
    // 0x2439b4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2439b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2439b8:
    // 0x2439b8: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x2439b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_2439bc:
    // 0x2439bc: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x2439bcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2439c0:
    // 0x2439c0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2439c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2439c4:
    // 0x2439c4: 0x90420002  lbu         $v0, 0x2($v0)
    ctx->pc = 0x2439c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_2439c8:
    // 0x2439c8: 0x304800ff  andi        $t0, $v0, 0xFF
    ctx->pc = 0x2439c8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2439cc:
    // 0x2439cc: 0x24020808  addiu       $v0, $zero, 0x808
    ctx->pc = 0x2439ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
label_2439d0:
    // 0x2439d0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2439d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_2439d4:
    // 0x2439d4: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x2439d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
label_2439d8:
    // 0x2439d8: 0x34420a06  ori         $v0, $v0, 0xA06
    ctx->pc = 0x2439d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2566);
label_2439dc:
    // 0x2439dc: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x2439dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_2439e0:
    // 0x2439e0: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2439e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_2439e4:
    // 0x2439e4: 0x24451258  addiu       $a1, $v0, 0x1258
    ctx->pc = 0x2439e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4696));
label_2439e8:
    // 0x2439e8: 0xc059b14  jal         func_166C50
label_2439ec:
    if (ctx->pc == 0x2439ECu) {
        ctx->pc = 0x2439F0u;
        goto label_2439f0;
    }
    ctx->pc = 0x2439E8u;
    SET_GPR_U32(ctx, 31, 0x2439F0u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x2439E8u, 0x2439F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2439F0u;
label_2439f0:
    // 0x2439f0: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x2439f0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2439f4:
    // 0x2439f4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2439f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2439f8:
    // 0x2439f8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2439f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2439fc:
    // 0x2439fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2439fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_243a00:
    // 0x243a00: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x243a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_243a04:
    // 0x243a04: 0x3e00008  jr          $ra
label_243a08:
    if (ctx->pc == 0x243A08u) {
        ctx->pc = 0x243A0Cu;
        goto label_fallthrough_0x243a04;
    }
    ctx->pc = 0x243A04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x243A04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x243a04:
    ctx->pc = 0x243A0Cu;
}
