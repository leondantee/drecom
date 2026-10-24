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

// Function: Em0c_R1_die00
// Address: 0x230010 - 0x2307b8
void Em0c_R1_die00_0x230010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0c_R1_die00_0x230010");
#endif

    switch (ctx->pc) {
        case 0x230010u: goto label_230010;
        case 0x230014u: goto label_230014;
        case 0x230018u: goto label_230018;
        case 0x23001cu: goto label_23001c;
        case 0x230020u: goto label_230020;
        case 0x230024u: goto label_230024;
        case 0x230028u: goto label_230028;
        case 0x23002cu: goto label_23002c;
        case 0x230030u: goto label_230030;
        case 0x230034u: goto label_230034;
        case 0x230038u: goto label_230038;
        case 0x23003cu: goto label_23003c;
        case 0x230040u: goto label_230040;
        case 0x230044u: goto label_230044;
        case 0x230048u: goto label_230048;
        case 0x23004cu: goto label_23004c;
        case 0x230050u: goto label_230050;
        case 0x230054u: goto label_230054;
        case 0x230058u: goto label_230058;
        case 0x23005cu: goto label_23005c;
        case 0x230060u: goto label_230060;
        case 0x230064u: goto label_230064;
        case 0x230068u: goto label_230068;
        case 0x23006cu: goto label_23006c;
        case 0x230070u: goto label_230070;
        case 0x230074u: goto label_230074;
        case 0x230078u: goto label_230078;
        case 0x23007cu: goto label_23007c;
        case 0x230080u: goto label_230080;
        case 0x230084u: goto label_230084;
        case 0x230088u: goto label_230088;
        case 0x23008cu: goto label_23008c;
        case 0x230090u: goto label_230090;
        case 0x230094u: goto label_230094;
        case 0x230098u: goto label_230098;
        case 0x23009cu: goto label_23009c;
        case 0x2300a0u: goto label_2300a0;
        case 0x2300a4u: goto label_2300a4;
        case 0x2300a8u: goto label_2300a8;
        case 0x2300acu: goto label_2300ac;
        case 0x2300b0u: goto label_2300b0;
        case 0x2300b4u: goto label_2300b4;
        case 0x2300b8u: goto label_2300b8;
        case 0x2300bcu: goto label_2300bc;
        case 0x2300c0u: goto label_2300c0;
        case 0x2300c4u: goto label_2300c4;
        case 0x2300c8u: goto label_2300c8;
        case 0x2300ccu: goto label_2300cc;
        case 0x2300d0u: goto label_2300d0;
        case 0x2300d4u: goto label_2300d4;
        case 0x2300d8u: goto label_2300d8;
        case 0x2300dcu: goto label_2300dc;
        case 0x2300e0u: goto label_2300e0;
        case 0x2300e4u: goto label_2300e4;
        case 0x2300e8u: goto label_2300e8;
        case 0x2300ecu: goto label_2300ec;
        case 0x2300f0u: goto label_2300f0;
        case 0x2300f4u: goto label_2300f4;
        case 0x2300f8u: goto label_2300f8;
        case 0x2300fcu: goto label_2300fc;
        case 0x230100u: goto label_230100;
        case 0x230104u: goto label_230104;
        case 0x230108u: goto label_230108;
        case 0x23010cu: goto label_23010c;
        case 0x230110u: goto label_230110;
        case 0x230114u: goto label_230114;
        case 0x230118u: goto label_230118;
        case 0x23011cu: goto label_23011c;
        case 0x230120u: goto label_230120;
        case 0x230124u: goto label_230124;
        case 0x230128u: goto label_230128;
        case 0x23012cu: goto label_23012c;
        case 0x230130u: goto label_230130;
        case 0x230134u: goto label_230134;
        case 0x230138u: goto label_230138;
        case 0x23013cu: goto label_23013c;
        case 0x230140u: goto label_230140;
        case 0x230144u: goto label_230144;
        case 0x230148u: goto label_230148;
        case 0x23014cu: goto label_23014c;
        case 0x230150u: goto label_230150;
        case 0x230154u: goto label_230154;
        case 0x230158u: goto label_230158;
        case 0x23015cu: goto label_23015c;
        case 0x230160u: goto label_230160;
        case 0x230164u: goto label_230164;
        case 0x230168u: goto label_230168;
        case 0x23016cu: goto label_23016c;
        case 0x230170u: goto label_230170;
        case 0x230174u: goto label_230174;
        case 0x230178u: goto label_230178;
        case 0x23017cu: goto label_23017c;
        case 0x230180u: goto label_230180;
        case 0x230184u: goto label_230184;
        case 0x230188u: goto label_230188;
        case 0x23018cu: goto label_23018c;
        case 0x230190u: goto label_230190;
        case 0x230194u: goto label_230194;
        case 0x230198u: goto label_230198;
        case 0x23019cu: goto label_23019c;
        case 0x2301a0u: goto label_2301a0;
        case 0x2301a4u: goto label_2301a4;
        case 0x2301a8u: goto label_2301a8;
        case 0x2301acu: goto label_2301ac;
        case 0x2301b0u: goto label_2301b0;
        case 0x2301b4u: goto label_2301b4;
        case 0x2301b8u: goto label_2301b8;
        case 0x2301bcu: goto label_2301bc;
        case 0x2301c0u: goto label_2301c0;
        case 0x2301c4u: goto label_2301c4;
        case 0x2301c8u: goto label_2301c8;
        case 0x2301ccu: goto label_2301cc;
        case 0x2301d0u: goto label_2301d0;
        case 0x2301d4u: goto label_2301d4;
        case 0x2301d8u: goto label_2301d8;
        case 0x2301dcu: goto label_2301dc;
        case 0x2301e0u: goto label_2301e0;
        case 0x2301e4u: goto label_2301e4;
        case 0x2301e8u: goto label_2301e8;
        case 0x2301ecu: goto label_2301ec;
        case 0x2301f0u: goto label_2301f0;
        case 0x2301f4u: goto label_2301f4;
        case 0x2301f8u: goto label_2301f8;
        case 0x2301fcu: goto label_2301fc;
        case 0x230200u: goto label_230200;
        case 0x230204u: goto label_230204;
        case 0x230208u: goto label_230208;
        case 0x23020cu: goto label_23020c;
        case 0x230210u: goto label_230210;
        case 0x230214u: goto label_230214;
        case 0x230218u: goto label_230218;
        case 0x23021cu: goto label_23021c;
        case 0x230220u: goto label_230220;
        case 0x230224u: goto label_230224;
        case 0x230228u: goto label_230228;
        case 0x23022cu: goto label_23022c;
        case 0x230230u: goto label_230230;
        case 0x230234u: goto label_230234;
        case 0x230238u: goto label_230238;
        case 0x23023cu: goto label_23023c;
        case 0x230240u: goto label_230240;
        case 0x230244u: goto label_230244;
        case 0x230248u: goto label_230248;
        case 0x23024cu: goto label_23024c;
        case 0x230250u: goto label_230250;
        case 0x230254u: goto label_230254;
        case 0x230258u: goto label_230258;
        case 0x23025cu: goto label_23025c;
        case 0x230260u: goto label_230260;
        case 0x230264u: goto label_230264;
        case 0x230268u: goto label_230268;
        case 0x23026cu: goto label_23026c;
        case 0x230270u: goto label_230270;
        case 0x230274u: goto label_230274;
        case 0x230278u: goto label_230278;
        case 0x23027cu: goto label_23027c;
        case 0x230280u: goto label_230280;
        case 0x230284u: goto label_230284;
        case 0x230288u: goto label_230288;
        case 0x23028cu: goto label_23028c;
        case 0x230290u: goto label_230290;
        case 0x230294u: goto label_230294;
        case 0x230298u: goto label_230298;
        case 0x23029cu: goto label_23029c;
        case 0x2302a0u: goto label_2302a0;
        case 0x2302a4u: goto label_2302a4;
        case 0x2302a8u: goto label_2302a8;
        case 0x2302acu: goto label_2302ac;
        case 0x2302b0u: goto label_2302b0;
        case 0x2302b4u: goto label_2302b4;
        case 0x2302b8u: goto label_2302b8;
        case 0x2302bcu: goto label_2302bc;
        case 0x2302c0u: goto label_2302c0;
        case 0x2302c4u: goto label_2302c4;
        case 0x2302c8u: goto label_2302c8;
        case 0x2302ccu: goto label_2302cc;
        case 0x2302d0u: goto label_2302d0;
        case 0x2302d4u: goto label_2302d4;
        case 0x2302d8u: goto label_2302d8;
        case 0x2302dcu: goto label_2302dc;
        case 0x2302e0u: goto label_2302e0;
        case 0x2302e4u: goto label_2302e4;
        case 0x2302e8u: goto label_2302e8;
        case 0x2302ecu: goto label_2302ec;
        case 0x2302f0u: goto label_2302f0;
        case 0x2302f4u: goto label_2302f4;
        case 0x2302f8u: goto label_2302f8;
        case 0x2302fcu: goto label_2302fc;
        case 0x230300u: goto label_230300;
        case 0x230304u: goto label_230304;
        case 0x230308u: goto label_230308;
        case 0x23030cu: goto label_23030c;
        case 0x230310u: goto label_230310;
        case 0x230314u: goto label_230314;
        case 0x230318u: goto label_230318;
        case 0x23031cu: goto label_23031c;
        case 0x230320u: goto label_230320;
        case 0x230324u: goto label_230324;
        case 0x230328u: goto label_230328;
        case 0x23032cu: goto label_23032c;
        case 0x230330u: goto label_230330;
        case 0x230334u: goto label_230334;
        case 0x230338u: goto label_230338;
        case 0x23033cu: goto label_23033c;
        case 0x230340u: goto label_230340;
        case 0x230344u: goto label_230344;
        case 0x230348u: goto label_230348;
        case 0x23034cu: goto label_23034c;
        case 0x230350u: goto label_230350;
        case 0x230354u: goto label_230354;
        case 0x230358u: goto label_230358;
        case 0x23035cu: goto label_23035c;
        case 0x230360u: goto label_230360;
        case 0x230364u: goto label_230364;
        case 0x230368u: goto label_230368;
        case 0x23036cu: goto label_23036c;
        case 0x230370u: goto label_230370;
        case 0x230374u: goto label_230374;
        case 0x230378u: goto label_230378;
        case 0x23037cu: goto label_23037c;
        case 0x230380u: goto label_230380;
        case 0x230384u: goto label_230384;
        case 0x230388u: goto label_230388;
        case 0x23038cu: goto label_23038c;
        case 0x230390u: goto label_230390;
        case 0x230394u: goto label_230394;
        case 0x230398u: goto label_230398;
        case 0x23039cu: goto label_23039c;
        case 0x2303a0u: goto label_2303a0;
        case 0x2303a4u: goto label_2303a4;
        case 0x2303a8u: goto label_2303a8;
        case 0x2303acu: goto label_2303ac;
        case 0x2303b0u: goto label_2303b0;
        case 0x2303b4u: goto label_2303b4;
        case 0x2303b8u: goto label_2303b8;
        case 0x2303bcu: goto label_2303bc;
        case 0x2303c0u: goto label_2303c0;
        case 0x2303c4u: goto label_2303c4;
        case 0x2303c8u: goto label_2303c8;
        case 0x2303ccu: goto label_2303cc;
        case 0x2303d0u: goto label_2303d0;
        case 0x2303d4u: goto label_2303d4;
        case 0x2303d8u: goto label_2303d8;
        case 0x2303dcu: goto label_2303dc;
        case 0x2303e0u: goto label_2303e0;
        case 0x2303e4u: goto label_2303e4;
        case 0x2303e8u: goto label_2303e8;
        case 0x2303ecu: goto label_2303ec;
        case 0x2303f0u: goto label_2303f0;
        case 0x2303f4u: goto label_2303f4;
        case 0x2303f8u: goto label_2303f8;
        case 0x2303fcu: goto label_2303fc;
        case 0x230400u: goto label_230400;
        case 0x230404u: goto label_230404;
        case 0x230408u: goto label_230408;
        case 0x23040cu: goto label_23040c;
        case 0x230410u: goto label_230410;
        case 0x230414u: goto label_230414;
        case 0x230418u: goto label_230418;
        case 0x23041cu: goto label_23041c;
        case 0x230420u: goto label_230420;
        case 0x230424u: goto label_230424;
        case 0x230428u: goto label_230428;
        case 0x23042cu: goto label_23042c;
        case 0x230430u: goto label_230430;
        case 0x230434u: goto label_230434;
        case 0x230438u: goto label_230438;
        case 0x23043cu: goto label_23043c;
        case 0x230440u: goto label_230440;
        case 0x230444u: goto label_230444;
        case 0x230448u: goto label_230448;
        case 0x23044cu: goto label_23044c;
        case 0x230450u: goto label_230450;
        case 0x230454u: goto label_230454;
        case 0x230458u: goto label_230458;
        case 0x23045cu: goto label_23045c;
        case 0x230460u: goto label_230460;
        case 0x230464u: goto label_230464;
        case 0x230468u: goto label_230468;
        case 0x23046cu: goto label_23046c;
        case 0x230470u: goto label_230470;
        case 0x230474u: goto label_230474;
        case 0x230478u: goto label_230478;
        case 0x23047cu: goto label_23047c;
        case 0x230480u: goto label_230480;
        case 0x230484u: goto label_230484;
        case 0x230488u: goto label_230488;
        case 0x23048cu: goto label_23048c;
        case 0x230490u: goto label_230490;
        case 0x230494u: goto label_230494;
        case 0x230498u: goto label_230498;
        case 0x23049cu: goto label_23049c;
        case 0x2304a0u: goto label_2304a0;
        case 0x2304a4u: goto label_2304a4;
        case 0x2304a8u: goto label_2304a8;
        case 0x2304acu: goto label_2304ac;
        case 0x2304b0u: goto label_2304b0;
        case 0x2304b4u: goto label_2304b4;
        case 0x2304b8u: goto label_2304b8;
        case 0x2304bcu: goto label_2304bc;
        case 0x2304c0u: goto label_2304c0;
        case 0x2304c4u: goto label_2304c4;
        case 0x2304c8u: goto label_2304c8;
        case 0x2304ccu: goto label_2304cc;
        case 0x2304d0u: goto label_2304d0;
        case 0x2304d4u: goto label_2304d4;
        case 0x2304d8u: goto label_2304d8;
        case 0x2304dcu: goto label_2304dc;
        case 0x2304e0u: goto label_2304e0;
        case 0x2304e4u: goto label_2304e4;
        case 0x2304e8u: goto label_2304e8;
        case 0x2304ecu: goto label_2304ec;
        case 0x2304f0u: goto label_2304f0;
        case 0x2304f4u: goto label_2304f4;
        case 0x2304f8u: goto label_2304f8;
        case 0x2304fcu: goto label_2304fc;
        case 0x230500u: goto label_230500;
        case 0x230504u: goto label_230504;
        case 0x230508u: goto label_230508;
        case 0x23050cu: goto label_23050c;
        case 0x230510u: goto label_230510;
        case 0x230514u: goto label_230514;
        case 0x230518u: goto label_230518;
        case 0x23051cu: goto label_23051c;
        case 0x230520u: goto label_230520;
        case 0x230524u: goto label_230524;
        case 0x230528u: goto label_230528;
        case 0x23052cu: goto label_23052c;
        case 0x230530u: goto label_230530;
        case 0x230534u: goto label_230534;
        case 0x230538u: goto label_230538;
        case 0x23053cu: goto label_23053c;
        case 0x230540u: goto label_230540;
        case 0x230544u: goto label_230544;
        case 0x230548u: goto label_230548;
        case 0x23054cu: goto label_23054c;
        case 0x230550u: goto label_230550;
        case 0x230554u: goto label_230554;
        case 0x230558u: goto label_230558;
        case 0x23055cu: goto label_23055c;
        case 0x230560u: goto label_230560;
        case 0x230564u: goto label_230564;
        case 0x230568u: goto label_230568;
        case 0x23056cu: goto label_23056c;
        case 0x230570u: goto label_230570;
        case 0x230574u: goto label_230574;
        case 0x230578u: goto label_230578;
        case 0x23057cu: goto label_23057c;
        case 0x230580u: goto label_230580;
        case 0x230584u: goto label_230584;
        case 0x230588u: goto label_230588;
        case 0x23058cu: goto label_23058c;
        case 0x230590u: goto label_230590;
        case 0x230594u: goto label_230594;
        case 0x230598u: goto label_230598;
        case 0x23059cu: goto label_23059c;
        case 0x2305a0u: goto label_2305a0;
        case 0x2305a4u: goto label_2305a4;
        case 0x2305a8u: goto label_2305a8;
        case 0x2305acu: goto label_2305ac;
        case 0x2305b0u: goto label_2305b0;
        case 0x2305b4u: goto label_2305b4;
        case 0x2305b8u: goto label_2305b8;
        case 0x2305bcu: goto label_2305bc;
        case 0x2305c0u: goto label_2305c0;
        case 0x2305c4u: goto label_2305c4;
        case 0x2305c8u: goto label_2305c8;
        case 0x2305ccu: goto label_2305cc;
        case 0x2305d0u: goto label_2305d0;
        case 0x2305d4u: goto label_2305d4;
        case 0x2305d8u: goto label_2305d8;
        case 0x2305dcu: goto label_2305dc;
        case 0x2305e0u: goto label_2305e0;
        case 0x2305e4u: goto label_2305e4;
        case 0x2305e8u: goto label_2305e8;
        case 0x2305ecu: goto label_2305ec;
        case 0x2305f0u: goto label_2305f0;
        case 0x2305f4u: goto label_2305f4;
        case 0x2305f8u: goto label_2305f8;
        case 0x2305fcu: goto label_2305fc;
        case 0x230600u: goto label_230600;
        case 0x230604u: goto label_230604;
        case 0x230608u: goto label_230608;
        case 0x23060cu: goto label_23060c;
        case 0x230610u: goto label_230610;
        case 0x230614u: goto label_230614;
        case 0x230618u: goto label_230618;
        case 0x23061cu: goto label_23061c;
        case 0x230620u: goto label_230620;
        case 0x230624u: goto label_230624;
        case 0x230628u: goto label_230628;
        case 0x23062cu: goto label_23062c;
        case 0x230630u: goto label_230630;
        case 0x230634u: goto label_230634;
        case 0x230638u: goto label_230638;
        case 0x23063cu: goto label_23063c;
        case 0x230640u: goto label_230640;
        case 0x230644u: goto label_230644;
        case 0x230648u: goto label_230648;
        case 0x23064cu: goto label_23064c;
        case 0x230650u: goto label_230650;
        case 0x230654u: goto label_230654;
        case 0x230658u: goto label_230658;
        case 0x23065cu: goto label_23065c;
        case 0x230660u: goto label_230660;
        case 0x230664u: goto label_230664;
        case 0x230668u: goto label_230668;
        case 0x23066cu: goto label_23066c;
        case 0x230670u: goto label_230670;
        case 0x230674u: goto label_230674;
        case 0x230678u: goto label_230678;
        case 0x23067cu: goto label_23067c;
        case 0x230680u: goto label_230680;
        case 0x230684u: goto label_230684;
        case 0x230688u: goto label_230688;
        case 0x23068cu: goto label_23068c;
        case 0x230690u: goto label_230690;
        case 0x230694u: goto label_230694;
        case 0x230698u: goto label_230698;
        case 0x23069cu: goto label_23069c;
        case 0x2306a0u: goto label_2306a0;
        case 0x2306a4u: goto label_2306a4;
        case 0x2306a8u: goto label_2306a8;
        case 0x2306acu: goto label_2306ac;
        case 0x2306b0u: goto label_2306b0;
        case 0x2306b4u: goto label_2306b4;
        case 0x2306b8u: goto label_2306b8;
        case 0x2306bcu: goto label_2306bc;
        case 0x2306c0u: goto label_2306c0;
        case 0x2306c4u: goto label_2306c4;
        case 0x2306c8u: goto label_2306c8;
        case 0x2306ccu: goto label_2306cc;
        case 0x2306d0u: goto label_2306d0;
        case 0x2306d4u: goto label_2306d4;
        case 0x2306d8u: goto label_2306d8;
        case 0x2306dcu: goto label_2306dc;
        case 0x2306e0u: goto label_2306e0;
        case 0x2306e4u: goto label_2306e4;
        case 0x2306e8u: goto label_2306e8;
        case 0x2306ecu: goto label_2306ec;
        case 0x2306f0u: goto label_2306f0;
        case 0x2306f4u: goto label_2306f4;
        case 0x2306f8u: goto label_2306f8;
        case 0x2306fcu: goto label_2306fc;
        case 0x230700u: goto label_230700;
        case 0x230704u: goto label_230704;
        case 0x230708u: goto label_230708;
        case 0x23070cu: goto label_23070c;
        case 0x230710u: goto label_230710;
        case 0x230714u: goto label_230714;
        case 0x230718u: goto label_230718;
        case 0x23071cu: goto label_23071c;
        case 0x230720u: goto label_230720;
        case 0x230724u: goto label_230724;
        case 0x230728u: goto label_230728;
        case 0x23072cu: goto label_23072c;
        case 0x230730u: goto label_230730;
        case 0x230734u: goto label_230734;
        case 0x230738u: goto label_230738;
        case 0x23073cu: goto label_23073c;
        case 0x230740u: goto label_230740;
        case 0x230744u: goto label_230744;
        case 0x230748u: goto label_230748;
        case 0x23074cu: goto label_23074c;
        case 0x230750u: goto label_230750;
        case 0x230754u: goto label_230754;
        case 0x230758u: goto label_230758;
        case 0x23075cu: goto label_23075c;
        case 0x230760u: goto label_230760;
        case 0x230764u: goto label_230764;
        case 0x230768u: goto label_230768;
        case 0x23076cu: goto label_23076c;
        case 0x230770u: goto label_230770;
        case 0x230774u: goto label_230774;
        case 0x230778u: goto label_230778;
        case 0x23077cu: goto label_23077c;
        case 0x230780u: goto label_230780;
        case 0x230784u: goto label_230784;
        case 0x230788u: goto label_230788;
        case 0x23078cu: goto label_23078c;
        case 0x230790u: goto label_230790;
        case 0x230794u: goto label_230794;
        case 0x230798u: goto label_230798;
        case 0x23079cu: goto label_23079c;
        case 0x2307a0u: goto label_2307a0;
        case 0x2307a4u: goto label_2307a4;
        case 0x2307a8u: goto label_2307a8;
        case 0x2307acu: goto label_2307ac;
        case 0x2307b0u: goto label_2307b0;
        case 0x2307b4u: goto label_2307b4;
        default: break;
    }

    ctx->pc = 0x230010u;

label_230010:
    // 0x230010: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x230010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_230014:
    // 0x230014: 0x7fbf0050  sq          $ra, 0x50($sp)
    ctx->pc = 0x230014u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 31));
label_230018:
    // 0x230018: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x230018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_23001c:
    // 0x23001c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x23001cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_230020:
    // 0x230020: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x230020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_230024:
    // 0x230024: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x230024u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_230028:
    // 0x230028: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x230028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_23002c:
    // 0x23002c: 0xafa40068  sw          $a0, 0x68($sp)
    ctx->pc = 0x23002cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 4));
label_230030:
    // 0x230030: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x230030u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_230034:
    // 0x230034: 0x8c8302d0  lw          $v1, 0x2D0($a0)
    ctx->pc = 0x230034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 720)));
label_230038:
    // 0x230038: 0x24723520  addiu       $s2, $v1, 0x3520
    ctx->pc = 0x230038u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 13600));
label_23003c:
    // 0x23003c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x23003cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_230040:
    // 0x230040: 0x8c830130  lw          $v1, 0x130($a0)
    ctx->pc = 0x230040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
label_230044:
    // 0x230044: 0x24740880  addiu       $s4, $v1, 0x880
    ctx->pc = 0x230044u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 2176));
label_230048:
    // 0x230048: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x230048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_23004c:
    // 0x23004c: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x23004cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_230050:
    // 0x230050: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x230050u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_230054:
    // 0x230054: 0x2ca10006  sltiu       $at, $a1, 0x6
    ctx->pc = 0x230054u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_230058:
    // 0x230058: 0x102001ce  beqz        $at, . + 4 + (0x1CE << 2)
label_23005c:
    if (ctx->pc == 0x23005Cu) {
        ctx->pc = 0x230060u;
        goto label_230060;
    }
    ctx->pc = 0x230058u;
    {
        const bool branch_taken_0x230058 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x230058) {
            ctx->pc = 0x230794u;
            goto label_230794;
        }
    }
    ctx->pc = 0x230060u;
label_230060:
    // 0x230060: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x230060u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_230064:
    // 0x230064: 0x24641190  addiu       $a0, $v1, 0x1190
    ctx->pc = 0x230064u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4496));
label_230068:
    // 0x230068: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x230068u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_23006c:
    // 0x23006c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x23006cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_230070:
    // 0x230070: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x230070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_230074:
    // 0x230074: 0x600008  jr          $v1
label_230078:
    if (ctx->pc == 0x230078u) {
        ctx->pc = 0x23007Cu;
        goto label_23007c;
    }
    ctx->pc = 0x230074u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x230074u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x23007Cu;
label_23007c:
    // 0x23007c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x23007cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_230080:
    // 0x230080: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x230080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_230084:
    // 0x230084: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x230084u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
label_230088:
    // 0x230088: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x230088u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23008c:
    // 0x23008c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x23008cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_230090:
    // 0x230090: 0xe4600180  swc1        $f0, 0x180($v1)
    ctx->pc = 0x230090u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 384), bits); }
label_230094:
    // 0x230094: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x230094u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_230098:
    // 0x230098: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x230098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_23009c:
    // 0x23009c: 0xe46000d0  swc1        $f0, 0xD0($v1)
    ctx->pc = 0x23009cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 208), bits); }
label_2300a0:
    // 0x2300a0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2300a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_2300a4:
    // 0x2300a4: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2300a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_2300a8:
    // 0x2300a8: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x2300a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
label_2300ac:
    // 0x2300ac: 0x24060416  addiu       $a2, $zero, 0x416
    ctx->pc = 0x2300acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1046));
label_2300b0:
    // 0x2300b0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2300b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2300b4:
    // 0x2300b4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2300b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_2300b8:
    // 0x2300b8: 0xc0965d0  jal         func_259740
label_2300bc:
    if (ctx->pc == 0x2300BCu) {
        ctx->pc = 0x2300C0u;
        goto label_2300c0;
    }
    ctx->pc = 0x2300B8u;
    SET_GPR_U32(ctx, 31, 0x2300C0u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2300B8u, 0x2300C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2300C0u;
label_2300c0:
    // 0x2300c0: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x2300c0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2300c4:
    // 0x2300c4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2300c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2300c8:
    // 0x2300c8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2300c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_2300cc:
    // 0x2300cc: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x2300ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
label_2300d0:
    // 0x2300d0: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x2300d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
label_2300d4:
    // 0x2300d4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2300d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2300d8:
    // 0x2300d8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2300d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_2300dc:
    // 0x2300dc: 0x24621330  addiu       $v0, $v1, 0x1330
    ctx->pc = 0x2300dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_2300e0:
    // 0x2300e0: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x2300e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
label_2300e4:
    // 0x2300e4: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x2300e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
label_2300e8:
    // 0x2300e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2300e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2300ec:
    // 0x2300ec: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2300ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_2300f0:
    // 0x2300f0: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x2300f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_2300f4:
    // 0x2300f4: 0xe4800020  swc1        $f0, 0x20($a0)
    ctx->pc = 0x2300f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
label_2300f8:
    // 0x2300f8: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x2300f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
label_2300fc:
    // 0x2300fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2300fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_230100:
    // 0x230100: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x230100u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_230104:
    // 0x230104: 0x24a41330  addiu       $a0, $a1, 0x1330
    ctx->pc = 0x230104u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
label_230108:
    // 0x230108: 0xe4800024  swc1        $f0, 0x24($a0)
    ctx->pc = 0x230108u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
label_23010c:
    // 0x23010c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x23010cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_230110:
    // 0x230110: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x230110u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_230114:
    // 0x230114: 0x8ca30030  lw          $v1, 0x30($a1)
    ctx->pc = 0x230114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
label_230118:
    // 0x230118: 0x34640018  ori         $a0, $v1, 0x18
    ctx->pc = 0x230118u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)24);
label_23011c:
    // 0x23011c: 0xaca40030  sw          $a0, 0x30($a1)
    ctx->pc = 0x23011cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 4));
label_230120:
    // 0x230120: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x230120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_230124:
    // 0x230124: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x230124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
label_230128:
    // 0x230128: 0x24700120  addiu       $s0, $v1, 0x120
    ctx->pc = 0x230128u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
label_23012c:
    // 0x23012c: 0x8e110034  lw          $s1, 0x34($s0)
    ctx->pc = 0x23012cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_230130:
    // 0x230130: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x230130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_230134:
    // 0x230134: 0x2113c  dsll32      $v0, $v0, 4
    ctx->pc = 0x230134u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 4));
label_230138:
    // 0x230138: 0x2113e  dsrl32      $v0, $v0, 4
    ctx->pc = 0x230138u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 4));
label_23013c:
    // 0x23013c: 0xae220024  sw          $v0, 0x24($s1)
    ctx->pc = 0x23013cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
label_230140:
    // 0x230140: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x230140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_230144:
    // 0x230144: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x230144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_230148:
    // 0x230148: 0xae220024  sw          $v0, 0x24($s1)
    ctx->pc = 0x230148u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
label_23014c:
    // 0x23014c: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x23014cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
label_230150:
    // 0x230150: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x230150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_230154:
    // 0x230154: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x230154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
label_230158:
    // 0x230158: 0x24500090  addiu       $s0, $v0, 0x90
    ctx->pc = 0x230158u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
label_23015c:
    // 0x23015c: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x23015cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
label_230160:
    // 0x230160: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x230160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_230164:
    // 0x230164: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x230164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
label_230168:
    // 0x230168: 0x24500240  addiu       $s0, $v0, 0x240
    ctx->pc = 0x230168u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 576));
label_23016c:
    // 0x23016c: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x23016cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
label_230170:
    // 0x230170: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x230170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_230174:
    // 0x230174: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x230174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
label_230178:
    // 0x230178: 0x245002d0  addiu       $s0, $v0, 0x2D0
    ctx->pc = 0x230178u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 720));
label_23017c:
    // 0x23017c: 0x8e110034  lw          $s1, 0x34($s0)
    ctx->pc = 0x23017cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_230180:
    // 0x230180: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x230180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_230184:
    // 0x230184: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x230184u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_230188:
    // 0x230188: 0xae220024  sw          $v0, 0x24($s1)
    ctx->pc = 0x230188u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
label_23018c:
    // 0x23018c: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x23018cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
label_230190:
    // 0x230190: 0x3c024496  lui         $v0, 0x4496
    ctx->pc = 0x230190u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17558 << 16));
label_230194:
    // 0x230194: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x230194u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_230198:
    // 0x230198: 0x0  nop
    ctx->pc = 0x230198u;
    // NOP
label_23019c:
    // 0x23019c: 0xe62000a0  swc1        $f0, 0xA0($s1)
    ctx->pc = 0x23019cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 160), bits); }
label_2301a0:
    // 0x2301a0: 0x3c02c080  lui         $v0, 0xC080
    ctx->pc = 0x2301a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49280 << 16));
label_2301a4:
    // 0x2301a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2301a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2301a8:
    // 0x2301a8: 0x0  nop
    ctx->pc = 0x2301a8u;
    // NOP
label_2301ac:
    // 0x2301ac: 0xe62000a4  swc1        $f0, 0xA4($s1)
    ctx->pc = 0x2301acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 164), bits); }
label_2301b0:
    // 0x2301b0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2301b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2301b4:
    // 0x2301b4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2301b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_2301b8:
    // 0x2301b8: 0xe4400180  swc1        $f0, 0x180($v0)
    ctx->pc = 0x2301b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
label_2301bc:
    // 0x2301bc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2301bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2301c0:
    // 0x2301c0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2301c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_2301c4:
    // 0x2301c4: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x2301c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
label_2301c8:
    // 0x2301c8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2301c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2301cc:
    // 0x2301cc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2301ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_2301d0:
    // 0x2301d0: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x2301d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
label_2301d4:
    // 0x2301d4: 0x3c02c080  lui         $v0, 0xC080
    ctx->pc = 0x2301d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49280 << 16));
label_2301d8:
    // 0x2301d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2301d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2301dc:
    // 0x2301dc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2301dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_2301e0:
    // 0x2301e0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2301e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_2301e4:
    // 0x2301e4: 0xe4400028  swc1        $f0, 0x28($v0)
    ctx->pc = 0x2301e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
label_2301e8:
    // 0x2301e8: 0x26430150  addiu       $v1, $s2, 0x150
    ctx->pc = 0x2301e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 336));
label_2301ec:
    // 0x2301ec: 0x9462002e  lhu         $v0, 0x2E($v1)
    ctx->pc = 0x2301ecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 46)));
label_2301f0:
    // 0x2301f0: 0x34420009  ori         $v0, $v0, 0x9
    ctx->pc = 0x2301f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9);
label_2301f4:
    // 0x2301f4: 0xa462002e  sh          $v0, 0x2E($v1)
    ctx->pc = 0x2301f4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 46), (uint16_t)GPR_U32(ctx, 2));
label_2301f8:
    // 0x2301f8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2301f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_2301fc:
    // 0x2301fc: 0x245310b0  addiu       $s3, $v0, 0x10B0
    ctx->pc = 0x2301fcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4272));
label_230200:
    // 0x230200: 0x8e6300f0  lw          $v1, 0xF0($s3)
    ctx->pc = 0x230200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 240)));
label_230204:
    // 0x230204: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x230204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_230208:
    // 0x230208: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x230208u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_23020c:
    // 0x23020c: 0xae6200f0  sw          $v0, 0xF0($s3)
    ctx->pc = 0x23020cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 240), GPR_U32(ctx, 2));
label_230210:
    // 0x230210: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x230210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_230214:
    // 0x230214: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x230214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_230218:
    // 0x230218: 0xa443127e  sh          $v1, 0x127E($v0)
    ctx->pc = 0x230218u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4734), (uint16_t)GPR_U32(ctx, 3));
label_23021c:
    // 0x23021c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x23021cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_230220:
    // 0x230220: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x230220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_230224:
    // 0x230224: 0x2402fff7  addiu       $v0, $zero, -0x9
    ctx->pc = 0x230224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
label_230228:
    // 0x230228: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x230228u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_23022c:
    // 0x23022c: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x23022cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_230230:
    // 0x230230: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x230230u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
label_230234:
    // 0x230234: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x230234u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_230238:
    // 0x230238: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x230238u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_23023c:
    // 0x23023c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x23023cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_230240:
    // 0x230240: 0x2404051e  addiu       $a0, $zero, 0x51E
    ctx->pc = 0x230240u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1310));
label_230244:
    // 0x230244: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x230244u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
label_230248:
    // 0x230248: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x230248u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_23024c:
    // 0x23024c: 0xc067b18  jal         func_19EC60
label_230250:
    if (ctx->pc == 0x230250u) {
        ctx->pc = 0x230254u;
        goto label_230254;
    }
    ctx->pc = 0x23024Cu;
    SET_GPR_U32(ctx, 31, 0x230254u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x23024Cu, 0x230254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230254u;
label_230254:
    // 0x230254: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x230254u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_230258:
    // 0x230258: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x230258u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
label_23025c:
    // 0x23025c: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x23025cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_230260:
    // 0x230260: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x230260u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_230264:
    // 0x230264: 0x24040517  addiu       $a0, $zero, 0x517
    ctx->pc = 0x230264u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1303));
label_230268:
    // 0x230268: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x230268u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
label_23026c:
    // 0x23026c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x23026cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_230270:
    // 0x230270: 0xc067b18  jal         func_19EC60
label_230274:
    if (ctx->pc == 0x230274u) {
        ctx->pc = 0x230278u;
        goto label_230278;
    }
    ctx->pc = 0x230270u;
    SET_GPR_U32(ctx, 31, 0x230278u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x230270u, 0x230278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230278u;
label_230278:
    // 0x230278: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x230278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_23027c:
    // 0x23027c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23027cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_230280:
    // 0x230280: 0x8c430030  lw          $v1, 0x30($v0)
    ctx->pc = 0x230280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_230284:
    // 0x230284: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x230284u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
label_230288:
    // 0x230288: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x230288u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_23028c:
    // 0x23028c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_230290:
    if (ctx->pc == 0x230290u) {
        ctx->pc = 0x230294u;
        goto label_230294;
    }
    ctx->pc = 0x23028Cu;
    {
        const bool branch_taken_0x23028c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23028c) {
            ctx->pc = 0x2302B0u;
            goto label_2302b0;
        }
    }
    ctx->pc = 0x230294u;
label_230294:
    // 0x230294: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x230294u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_230298:
    // 0x230298: 0x8c231a58  lw          $v1, 0x1A58($at)
    ctx->pc = 0x230298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6744)));
label_23029c:
    // 0x23029c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x23029cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_2302a0:
    // 0x2302a0: 0x34427fff  ori         $v0, $v0, 0x7FFF
    ctx->pc = 0x2302a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32767);
label_2302a4:
    // 0x2302a4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2302a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_2302a8:
    // 0x2302a8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2302a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_2302ac:
    // 0x2302ac: 0xac221a58  sw          $v0, 0x1A58($at)
    ctx->pc = 0x2302acu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6744), GPR_U32(ctx, 2));
label_2302b0:
    // 0x2302b0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2302b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_2302b4:
    // 0x2302b4: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x2302b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
label_2302b8:
    // 0x2302b8: 0x24500510  addiu       $s0, $v0, 0x510
    ctx->pc = 0x2302b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1296));
label_2302bc:
    // 0x2302bc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2302bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_2302c0:
    // 0x2302c0: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x2302c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
label_2302c4:
    // 0x2302c4: 0x24523b60  addiu       $s2, $v0, 0x3B60
    ctx->pc = 0x2302c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 15200));
label_2302c8:
    // 0x2302c8: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x2302c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_2302cc:
    // 0x2302cc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2302ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2302d0:
    // 0x2302d0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2302d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2302d4:
    // 0x2302d4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2302d8:
    if (ctx->pc == 0x2302D8u) {
        ctx->pc = 0x2302DCu;
        goto label_2302dc;
    }
    ctx->pc = 0x2302D4u;
    {
        const bool branch_taken_0x2302d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2302d4) {
            ctx->pc = 0x2302F8u;
            goto label_2302f8;
        }
    }
    ctx->pc = 0x2302DCu;
label_2302dc:
    // 0x2302dc: 0x26420150  addiu       $v0, $s2, 0x150
    ctx->pc = 0x2302dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 336));
label_2302e0:
    // 0x2302e0: 0x94420006  lhu         $v0, 0x6($v0)
    ctx->pc = 0x2302e0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
label_2302e4:
    // 0x2302e4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2302e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_2302e8:
    // 0x2302e8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2302e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2302ec:
    // 0x2302ec: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_2302f0:
    if (ctx->pc == 0x2302F0u) {
        ctx->pc = 0x2302F4u;
        goto label_2302f4;
    }
    ctx->pc = 0x2302ECu;
    {
        const bool branch_taken_0x2302ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2302ec) {
            ctx->pc = 0x2302F8u;
            goto label_2302f8;
        }
    }
    ctx->pc = 0x2302F4u;
label_2302f4:
    // 0x2302f4: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x2302f4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
label_2302f8:
    // 0x2302f8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2302f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_2302fc:
    // 0x2302fc: 0xc0974dc  jal         func_25D370
label_230300:
    if (ctx->pc == 0x230300u) {
        ctx->pc = 0x230304u;
        goto label_230304;
    }
    ctx->pc = 0x2302FCu;
    SET_GPR_U32(ctx, 31, 0x230304u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2302FCu, 0x230304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230304u;
label_230304:
    // 0x230304: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x230304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_230308:
    // 0x230308: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x230308u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_23030c:
    // 0x23030c: 0x10600121  beqz        $v1, . + 4 + (0x121 << 2)
label_230310:
    if (ctx->pc == 0x230310u) {
        ctx->pc = 0x230314u;
        goto label_230314;
    }
    ctx->pc = 0x23030Cu;
    {
        const bool branch_taken_0x23030c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23030c) {
            ctx->pc = 0x230794u;
            goto label_230794;
        }
    }
    ctx->pc = 0x230314u;
label_230314:
    // 0x230314: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x230314u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_230318:
    // 0x230318: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x230318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_23031c:
    // 0x23031c: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x23031cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
label_230320:
    // 0x230320: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x230320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_230324:
    // 0x230324: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x230324u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_230328:
    // 0x230328: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x230328u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_23032c:
    // 0x23032c: 0x24063c17  addiu       $a2, $zero, 0x3C17
    ctx->pc = 0x23032cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15383));
label_230330:
    // 0x230330: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x230330u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_230334:
    // 0x230334: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x230334u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_230338:
    // 0x230338: 0xc0965d0  jal         func_259740
label_23033c:
    if (ctx->pc == 0x23033Cu) {
        ctx->pc = 0x230340u;
        goto label_230340;
    }
    ctx->pc = 0x230338u;
    SET_GPR_U32(ctx, 31, 0x230340u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x230338u, 0x230340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230340u;
label_230340:
    // 0x230340: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x230340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_230344:
    // 0x230344: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x230344u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
label_230348:
    // 0x230348: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x230348u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_23034c:
    // 0x23034c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x23034cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_230350:
    // 0x230350: 0x24040521  addiu       $a0, $zero, 0x521
    ctx->pc = 0x230350u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1313));
label_230354:
    // 0x230354: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x230354u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
label_230358:
    // 0x230358: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x230358u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_23035c:
    // 0x23035c: 0xc067b18  jal         func_19EC60
label_230360:
    if (ctx->pc == 0x230360u) {
        ctx->pc = 0x230364u;
        goto label_230364;
    }
    ctx->pc = 0x23035Cu;
    SET_GPR_U32(ctx, 31, 0x230364u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x23035Cu, 0x230364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230364u;
label_230364:
    // 0x230364: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x230364u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_230368:
    // 0x230368: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x230368u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_23036c:
    // 0x23036c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x23036cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_230370:
    // 0x230370: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x230370u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_230374:
    // 0x230374: 0xc0c7a24  jal         func_31E890
label_230378:
    if (ctx->pc == 0x230378u) {
        ctx->pc = 0x23037Cu;
        goto label_23037c;
    }
    ctx->pc = 0x230374u;
    SET_GPR_U32(ctx, 31, 0x23037Cu);
    ctx->pc = 0x31E890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E890u, 0x230374u, 0x23037Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23037Cu;
label_23037c:
    // 0x23037c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x23037cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_230380:
    // 0x230380: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x230380u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_230384:
    // 0x230384: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x230384u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_230388:
    // 0x230388: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x230388u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_23038c:
    // 0x23038c: 0xc0c7a24  jal         func_31E890
label_230390:
    if (ctx->pc == 0x230390u) {
        ctx->pc = 0x230394u;
        goto label_230394;
    }
    ctx->pc = 0x23038Cu;
    SET_GPR_U32(ctx, 31, 0x230394u);
    ctx->pc = 0x31E890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E890u, 0x23038Cu, 0x230394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230394u;
label_230394:
    // 0x230394: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x230394u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_230398:
    // 0x230398: 0x24050022  addiu       $a1, $zero, 0x22
    ctx->pc = 0x230398u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
label_23039c:
    // 0x23039c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x23039cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2303a0:
    // 0x2303a0: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2303a0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2303a4:
    // 0x2303a4: 0xc0c7a24  jal         func_31E890
label_2303a8:
    if (ctx->pc == 0x2303A8u) {
        ctx->pc = 0x2303ACu;
        goto label_2303ac;
    }
    ctx->pc = 0x2303A4u;
    SET_GPR_U32(ctx, 31, 0x2303ACu);
    ctx->pc = 0x31E890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E890u, 0x2303A4u, 0x2303ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2303ACu;
label_2303ac:
    // 0x2303ac: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2303acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_2303b0:
    // 0x2303b0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2303b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_2303b4:
    // 0x2303b4: 0x946300aa  lhu         $v1, 0xAA($v1)
    ctx->pc = 0x2303b4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 170)));
label_2303b8:
    // 0x2303b8: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x2303b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_2303bc:
    // 0x2303bc: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x2303bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_2303c0:
    // 0x2303c0: 0x106000f4  beqz        $v1, . + 4 + (0xF4 << 2)
label_2303c4:
    if (ctx->pc == 0x2303C4u) {
        ctx->pc = 0x2303C8u;
        goto label_2303c8;
    }
    ctx->pc = 0x2303C0u;
    {
        const bool branch_taken_0x2303c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2303c0) {
            ctx->pc = 0x230794u;
            goto label_230794;
        }
    }
    ctx->pc = 0x2303C8u;
label_2303c8:
    // 0x2303c8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2303c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_2303cc:
    // 0x2303cc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2303ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2303d0:
    // 0x2303d0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x2303d0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2303d4:
    // 0x2303d4: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2303d4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2303d8:
    // 0x2303d8: 0xc0c7a24  jal         func_31E890
label_2303dc:
    if (ctx->pc == 0x2303DCu) {
        ctx->pc = 0x2303E0u;
        goto label_2303e0;
    }
    ctx->pc = 0x2303D8u;
    SET_GPR_U32(ctx, 31, 0x2303E0u);
    ctx->pc = 0x31E890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E890u, 0x2303D8u, 0x2303E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2303E0u;
label_2303e0:
    // 0x2303e0: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2303e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_2303e4:
    // 0x2303e4: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2303e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2303e8:
    // 0x2303e8: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x2303e8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2303ec:
    // 0x2303ec: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2303ecu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2303f0:
    // 0x2303f0: 0xc0c7a24  jal         func_31E890
label_2303f4:
    if (ctx->pc == 0x2303F4u) {
        ctx->pc = 0x2303F8u;
        goto label_2303f8;
    }
    ctx->pc = 0x2303F0u;
    SET_GPR_U32(ctx, 31, 0x2303F8u);
    ctx->pc = 0x31E890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E890u, 0x2303F0u, 0x2303F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2303F8u;
label_2303f8:
    // 0x2303f8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2303f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_2303fc:
    // 0x2303fc: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x2303fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_230400:
    // 0x230400: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x230400u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_230404:
    // 0x230404: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x230404u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_230408:
    // 0x230408: 0xc0c7a24  jal         func_31E890
label_23040c:
    if (ctx->pc == 0x23040Cu) {
        ctx->pc = 0x230410u;
        goto label_230410;
    }
    ctx->pc = 0x230408u;
    SET_GPR_U32(ctx, 31, 0x230410u);
    ctx->pc = 0x31E890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E890u, 0x230408u, 0x230410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230410u;
label_230410:
    // 0x230410: 0x100000e0  b           . + 4 + (0xE0 << 2)
label_230414:
    if (ctx->pc == 0x230414u) {
        ctx->pc = 0x230418u;
        goto label_230418;
    }
    ctx->pc = 0x230410u;
    {
        const bool branch_taken_0x230410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x230410) {
            ctx->pc = 0x230794u;
            goto label_230794;
        }
    }
    ctx->pc = 0x230418u;
label_230418:
    // 0x230418: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x230418u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_23041c:
    // 0x23041c: 0xc0974dc  jal         func_25D370
label_230420:
    if (ctx->pc == 0x230420u) {
        ctx->pc = 0x230424u;
        goto label_230424;
    }
    ctx->pc = 0x23041Cu;
    SET_GPR_U32(ctx, 31, 0x230424u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x23041Cu, 0x230424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230424u;
label_230424:
    // 0x230424: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x230424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_230428:
    // 0x230428: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x230428u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_23042c:
    // 0x23042c: 0x1060001f  beqz        $v1, . + 4 + (0x1F << 2)
label_230430:
    if (ctx->pc == 0x230430u) {
        ctx->pc = 0x230434u;
        goto label_230434;
    }
    ctx->pc = 0x23042Cu;
    {
        const bool branch_taken_0x23042c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23042c) {
            ctx->pc = 0x2304ACu;
            goto label_2304ac;
        }
    }
    ctx->pc = 0x230434u;
label_230434:
    // 0x230434: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x230434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_230438:
    // 0x230438: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x230438u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_23043c:
    // 0x23043c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x23043cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_230440:
    // 0x230440: 0x24063c17  addiu       $a2, $zero, 0x3C17
    ctx->pc = 0x230440u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15383));
label_230444:
    // 0x230444: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x230444u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_230448:
    // 0x230448: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x230448u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_23044c:
    // 0x23044c: 0xc0965d0  jal         func_259740
label_230450:
    if (ctx->pc == 0x230450u) {
        ctx->pc = 0x230454u;
        goto label_230454;
    }
    ctx->pc = 0x23044Cu;
    SET_GPR_U32(ctx, 31, 0x230454u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x23044Cu, 0x230454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230454u;
label_230454:
    // 0x230454: 0xc067694  jal         func_19DA50
label_230458:
    if (ctx->pc == 0x230458u) {
        ctx->pc = 0x23045Cu;
        goto label_23045c;
    }
    ctx->pc = 0x230454u;
    SET_GPR_U32(ctx, 31, 0x23045Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x230454u, 0x23045Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23045Cu;
label_23045c:
    // 0x23045c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x23045cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_230460:
    // 0x230460: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x230460u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
label_230464:
    // 0x230464: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x230464u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_230468:
    // 0x230468: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x230468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_23046c:
    // 0x23046c: 0xa44309ee  sh          $v1, 0x9EE($v0)
    ctx->pc = 0x23046cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2542), (uint16_t)GPR_U32(ctx, 3));
label_230470:
    // 0x230470: 0xc067694  jal         func_19DA50
label_230474:
    if (ctx->pc == 0x230474u) {
        ctx->pc = 0x230478u;
        goto label_230478;
    }
    ctx->pc = 0x230470u;
    SET_GPR_U32(ctx, 31, 0x230478u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x230470u, 0x230478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230478u;
label_230478:
    // 0x230478: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x230478u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_23047c:
    // 0x23047c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x23047cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_230480:
    // 0x230480: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_230484:
    if (ctx->pc == 0x230484u) {
        ctx->pc = 0x230488u;
        goto label_230488;
    }
    ctx->pc = 0x230480u;
    {
        const bool branch_taken_0x230480 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x230480) {
            ctx->pc = 0x2304ACu;
            goto label_2304ac;
        }
    }
    ctx->pc = 0x230488u;
label_230488:
    // 0x230488: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x230488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_23048c:
    // 0x23048c: 0x3c02461c  lui         $v0, 0x461C
    ctx->pc = 0x23048cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17948 << 16));
label_230490:
    // 0x230490: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x230490u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_230494:
    // 0x230494: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x230494u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_230498:
    // 0x230498: 0x24040521  addiu       $a0, $zero, 0x521
    ctx->pc = 0x230498u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1313));
label_23049c:
    // 0x23049c: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x23049cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
label_2304a0:
    // 0x2304a0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x2304a0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2304a4:
    // 0x2304a4: 0xc067b18  jal         func_19EC60
label_2304a8:
    if (ctx->pc == 0x2304A8u) {
        ctx->pc = 0x2304ACu;
        goto label_2304ac;
    }
    ctx->pc = 0x2304A4u;
    SET_GPR_U32(ctx, 31, 0x2304ACu);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x2304A4u, 0x2304ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2304ACu;
label_2304ac:
    // 0x2304ac: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2304acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_2304b0:
    // 0x2304b0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2304b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_2304b4:
    // 0x2304b4: 0xc4610028  lwc1        $f1, 0x28($v1)
    ctx->pc = 0x2304b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2304b8:
    // 0x2304b8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2304b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_2304bc:
    // 0x2304bc: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x2304bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2304c0:
    // 0x2304c0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2304c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2304c4:
    // 0x2304c4: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x2304c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
label_2304c8:
    // 0x2304c8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2304c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_2304cc:
    // 0x2304cc: 0x8463127e  lh          $v1, 0x127E($v1)
    ctx->pc = 0x2304ccu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4734)));
label_2304d0:
    // 0x2304d0: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x2304d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_2304d4:
    // 0x2304d4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2304d4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_2304d8:
    // 0x2304d8: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2304d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_2304dc:
    // 0x2304dc: 0x1460003d  bnez        $v1, . + 4 + (0x3D << 2)
label_2304e0:
    if (ctx->pc == 0x2304E0u) {
        ctx->pc = 0x2304E4u;
        goto label_2304e4;
    }
    ctx->pc = 0x2304DCu;
    {
        const bool branch_taken_0x2304dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2304dc) {
            ctx->pc = 0x2305D4u;
            goto label_2305d4;
        }
    }
    ctx->pc = 0x2304E4u;
label_2304e4:
    // 0x2304e4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2304e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_2304e8:
    // 0x2304e8: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x2304e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_2304ec:
    // 0x2304ec: 0xc4810028  lwc1        $f1, 0x28($a0)
    ctx->pc = 0x2304ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2304f0:
    // 0x2304f0: 0x3c033da3  lui         $v1, 0x3DA3
    ctx->pc = 0x2304f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15779 << 16));
label_2304f4:
    // 0x2304f4: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x2304f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
label_2304f8:
    // 0x2304f8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2304f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2304fc:
    // 0x2304fc: 0x0  nop
    ctx->pc = 0x2304fcu;
    // NOP
label_230500:
    // 0x230500: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x230500u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_230504:
    // 0x230504: 0xe4800028  swc1        $f0, 0x28($a0)
    ctx->pc = 0x230504u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
label_230508:
    // 0x230508: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x230508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_23050c:
    // 0x23050c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23050cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_230510:
    // 0x230510: 0xc4610028  lwc1        $f1, 0x28($v1)
    ctx->pc = 0x230510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_230514:
    // 0x230514: 0x3c034100  lui         $v1, 0x4100
    ctx->pc = 0x230514u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
label_230518:
    // 0x230518: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x230518u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23051c:
    // 0x23051c: 0x0  nop
    ctx->pc = 0x23051cu;
    // NOP
label_230520:
    // 0x230520: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x230520u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_230524:
    // 0x230524: 0x0  nop
    ctx->pc = 0x230524u;
    // NOP
label_230528:
    // 0x230528: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_23052c:
    if (ctx->pc == 0x23052Cu) {
        ctx->pc = 0x230530u;
        goto label_230530;
    }
    ctx->pc = 0x230528u;
    {
        const bool branch_taken_0x230528 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x230528) {
            ctx->pc = 0x230540u;
            goto label_230540;
        }
    }
    ctx->pc = 0x230530u;
label_230530:
    // 0x230530: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x230530u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_230534:
    // 0x230534: 0x8483127e  lh          $v1, 0x127E($a0)
    ctx->pc = 0x230534u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4734)));
label_230538:
    // 0x230538: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x230538u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
label_23053c:
    // 0x23053c: 0xa483127e  sh          $v1, 0x127E($a0)
    ctx->pc = 0x23053cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4734), (uint16_t)GPR_U32(ctx, 3));
label_230540:
    // 0x230540: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x230540u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_230544:
    // 0x230544: 0xc48100d0  lwc1        $f1, 0xD0($a0)
    ctx->pc = 0x230544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_230548:
    // 0x230548: 0x3c033c8e  lui         $v1, 0x3C8E
    ctx->pc = 0x230548u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15502 << 16));
label_23054c:
    // 0x23054c: 0x3463fa35  ori         $v1, $v1, 0xFA35
    ctx->pc = 0x23054cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64053);
label_230550:
    // 0x230550: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x230550u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_230554:
    // 0x230554: 0x0  nop
    ctx->pc = 0x230554u;
    // NOP
label_230558:
    // 0x230558: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x230558u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_23055c:
    // 0x23055c: 0xe48000d0  swc1        $f0, 0xD0($a0)
    ctx->pc = 0x23055cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 208), bits); }
label_230560:
    // 0x230560: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x230560u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_230564:
    // 0x230564: 0xc48100d4  lwc1        $f1, 0xD4($a0)
    ctx->pc = 0x230564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_230568:
    // 0x230568: 0x3c033c0e  lui         $v1, 0x3C0E
    ctx->pc = 0x230568u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15374 << 16));
label_23056c:
    // 0x23056c: 0x3463fa35  ori         $v1, $v1, 0xFA35
    ctx->pc = 0x23056cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64053);
label_230570:
    // 0x230570: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x230570u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_230574:
    // 0x230574: 0x0  nop
    ctx->pc = 0x230574u;
    // NOP
label_230578:
    // 0x230578: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x230578u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_23057c:
    // 0x23057c: 0xe48000d4  swc1        $f0, 0xD4($a0)
    ctx->pc = 0x23057cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 212), bits); }
label_230580:
    // 0x230580: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x230580u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_230584:
    // 0x230584: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x230584u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_230588:
    // 0x230588: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x230588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_23058c:
    // 0x23058c: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x23058cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
label_230590:
    // 0x230590: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x230590u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
label_230594:
    // 0x230594: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x230594u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_230598:
    // 0x230598: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x230598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_23059c:
    // 0x23059c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23059cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_2305a0:
    // 0x2305a0: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x2305a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
label_2305a4:
    // 0x2305a4: 0x3c034020  lui         $v1, 0x4020
    ctx->pc = 0x2305a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16416 << 16));
label_2305a8:
    // 0x2305a8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2305a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2305ac:
    // 0x2305ac: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2305acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_2305b0:
    // 0x2305b0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2305b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_2305b4:
    // 0x2305b4: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x2305b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
label_2305b8:
    // 0x2305b8: 0x3c034020  lui         $v1, 0x4020
    ctx->pc = 0x2305b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16416 << 16));
label_2305bc:
    // 0x2305bc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2305bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2305c0:
    // 0x2305c0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2305c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_2305c4:
    // 0x2305c4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2305c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_2305c8:
    // 0x2305c8: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x2305c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
label_2305cc:
    // 0x2305cc: 0x1000003c  b           . + 4 + (0x3C << 2)
label_2305d0:
    if (ctx->pc == 0x2305D0u) {
        ctx->pc = 0x2305D4u;
        goto label_2305d4;
    }
    ctx->pc = 0x2305CCu;
    {
        const bool branch_taken_0x2305cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2305cc) {
            ctx->pc = 0x2306C0u;
            goto label_2306c0;
        }
    }
    ctx->pc = 0x2305D4u;
label_2305d4:
    // 0x2305d4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2305d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_2305d8:
    // 0x2305d8: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x2305d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_2305dc:
    // 0x2305dc: 0xc4810028  lwc1        $f1, 0x28($a0)
    ctx->pc = 0x2305dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2305e0:
    // 0x2305e0: 0x3c033e75  lui         $v1, 0x3E75
    ctx->pc = 0x2305e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15989 << 16));
label_2305e4:
    // 0x2305e4: 0x3463c28f  ori         $v1, $v1, 0xC28F
    ctx->pc = 0x2305e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49807);
label_2305e8:
    // 0x2305e8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2305e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2305ec:
    // 0x2305ec: 0x0  nop
    ctx->pc = 0x2305ecu;
    // NOP
label_2305f0:
    // 0x2305f0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2305f0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2305f4:
    // 0x2305f4: 0xe4800028  swc1        $f0, 0x28($a0)
    ctx->pc = 0x2305f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
label_2305f8:
    // 0x2305f8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2305f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_2305fc:
    // 0x2305fc: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2305fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_230600:
    // 0x230600: 0xc4610028  lwc1        $f1, 0x28($v1)
    ctx->pc = 0x230600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_230604:
    // 0x230604: 0x3c03c1a0  lui         $v1, 0xC1A0
    ctx->pc = 0x230604u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49568 << 16));
label_230608:
    // 0x230608: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x230608u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23060c:
    // 0x23060c: 0x0  nop
    ctx->pc = 0x23060cu;
    // NOP
label_230610:
    // 0x230610: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x230610u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_230614:
    // 0x230614: 0x0  nop
    ctx->pc = 0x230614u;
    // NOP
label_230618:
    // 0x230618: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_23061c:
    if (ctx->pc == 0x23061Cu) {
        ctx->pc = 0x230620u;
        goto label_230620;
    }
    ctx->pc = 0x230618u;
    {
        const bool branch_taken_0x230618 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x230618) {
            ctx->pc = 0x230634u;
            goto label_230634;
        }
    }
    ctx->pc = 0x230620u;
label_230620:
    // 0x230620: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x230620u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_230624:
    // 0x230624: 0x84a4127e  lh          $a0, 0x127E($a1)
    ctx->pc = 0x230624u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4734)));
label_230628:
    // 0x230628: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x230628u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_23062c:
    // 0x23062c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x23062cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_230630:
    // 0x230630: 0xa4a3127e  sh          $v1, 0x127E($a1)
    ctx->pc = 0x230630u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4734), (uint16_t)GPR_U32(ctx, 3));
label_230634:
    // 0x230634: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x230634u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_230638:
    // 0x230638: 0xc48100d0  lwc1        $f1, 0xD0($a0)
    ctx->pc = 0x230638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_23063c:
    // 0x23063c: 0x3c123bdf  lui         $s2, 0x3BDF
    ctx->pc = 0x23063cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)15327 << 16));
label_230640:
    // 0x230640: 0x3643ca6a  ori         $v1, $s2, 0xCA6A
    ctx->pc = 0x230640u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)51818);
label_230644:
    // 0x230644: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x230644u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_230648:
    // 0x230648: 0x0  nop
    ctx->pc = 0x230648u;
    // NOP
label_23064c:
    // 0x23064c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x23064cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_230650:
    // 0x230650: 0xe48000d0  swc1        $f0, 0xD0($a0)
    ctx->pc = 0x230650u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 208), bits); }
label_230654:
    // 0x230654: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x230654u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_230658:
    // 0x230658: 0xc48100d4  lwc1        $f1, 0xD4($a0)
    ctx->pc = 0x230658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_23065c:
    // 0x23065c: 0x3c143c8e  lui         $s4, 0x3C8E
    ctx->pc = 0x23065cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)15502 << 16));
label_230660:
    // 0x230660: 0x3683fa35  ori         $v1, $s4, 0xFA35
    ctx->pc = 0x230660u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)64053);
label_230664:
    // 0x230664: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x230664u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_230668:
    // 0x230668: 0x0  nop
    ctx->pc = 0x230668u;
    // NOP
label_23066c:
    // 0x23066c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x23066cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_230670:
    // 0x230670: 0xe48000d4  swc1        $f0, 0xD4($a0)
    ctx->pc = 0x230670u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 212), bits); }
label_230674:
    // 0x230674: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x230674u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_230678:
    // 0x230678: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x230678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_23067c:
    // 0x23067c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23067cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_230680:
    // 0x230680: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x230680u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
label_230684:
    // 0x230684: 0x3c05c1a4  lui         $a1, 0xC1A4
    ctx->pc = 0x230684u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49572 << 16));
label_230688:
    // 0x230688: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x230688u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23068c:
    // 0x23068c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x23068cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_230690:
    // 0x230690: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x230690u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_230694:
    // 0x230694: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x230694u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
label_230698:
    // 0x230698: 0x3c034020  lui         $v1, 0x4020
    ctx->pc = 0x230698u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16416 << 16));
label_23069c:
    // 0x23069c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x23069cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2306a0:
    // 0x2306a0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2306a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_2306a4:
    // 0x2306a4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2306a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_2306a8:
    // 0x2306a8: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x2306a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
label_2306ac:
    // 0x2306ac: 0x3c044020  lui         $a0, 0x4020
    ctx->pc = 0x2306acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16416 << 16));
label_2306b0:
    // 0x2306b0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2306b0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2306b4:
    // 0x2306b4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2306b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_2306b8:
    // 0x2306b8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2306b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_2306bc:
    // 0x2306bc: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x2306bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
label_2306c0:
    // 0x2306c0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2306c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_2306c4:
    // 0x2306c4: 0xc4620124  lwc1        $f2, 0x124($v1)
    ctx->pc = 0x2306c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2306c8:
    // 0x2306c8: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2306c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_2306cc:
    // 0x2306cc: 0xc421dce4  lwc1        $f1, -0x231C($at)
    ctx->pc = 0x2306ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294958308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2306d0:
    // 0x2306d0: 0x3c04459c  lui         $a0, 0x459C
    ctx->pc = 0x2306d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17820 << 16));
label_2306d4:
    // 0x2306d4: 0x34834000  ori         $v1, $a0, 0x4000
    ctx->pc = 0x2306d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16384);
label_2306d8:
    // 0x2306d8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2306d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2306dc:
    // 0x2306dc: 0x0  nop
    ctx->pc = 0x2306dcu;
    // NOP
label_2306e0:
    // 0x2306e0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2306e0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2306e4:
    // 0x2306e4: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x2306e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2306e8:
    // 0x2306e8: 0x0  nop
    ctx->pc = 0x2306e8u;
    // NOP
label_2306ec:
    // 0x2306ec: 0x45000029  bc1f        . + 4 + (0x29 << 2)
label_2306f0:
    if (ctx->pc == 0x2306F0u) {
        ctx->pc = 0x2306F4u;
        goto label_2306f4;
    }
    ctx->pc = 0x2306ECu;
    {
        const bool branch_taken_0x2306ec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2306ec) {
            ctx->pc = 0x230794u;
            goto label_230794;
        }
    }
    ctx->pc = 0x2306F4u;
label_2306f4:
    // 0x2306f4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2306f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2306f8:
    // 0x2306f8: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x2306f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_2306fc:
    // 0x2306fc: 0xa0c50002  sb          $a1, 0x2($a2)
    ctx->pc = 0x2306fcu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 5));
label_230700:
    // 0x230700: 0x2407012c  addiu       $a3, $zero, 0x12C
    ctx->pc = 0x230700u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
label_230704:
    // 0x230704: 0x8fa80068  lw          $t0, 0x68($sp)
    ctx->pc = 0x230704u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_230708:
    // 0x230708: 0xa5071278  sh          $a3, 0x1278($t0)
    ctx->pc = 0x230708u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 4728), (uint16_t)GPR_U32(ctx, 7));
label_23070c:
    // 0x23070c: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x23070cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_230710:
    // 0x230710: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x230710u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_230714:
    // 0x230714: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x230714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_230718:
    // 0x230718: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x230718u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_23071c:
    // 0x23071c: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x23071cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
label_230720:
    // 0x230720: 0x1000001c  b           . + 4 + (0x1C << 2)
label_230724:
    if (ctx->pc == 0x230724u) {
        ctx->pc = 0x230728u;
        goto label_230728;
    }
    ctx->pc = 0x230720u;
    {
        const bool branch_taken_0x230720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x230720) {
            ctx->pc = 0x230794u;
            goto label_230794;
        }
    }
    ctx->pc = 0x230728u;
label_230728:
    // 0x230728: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x230728u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_23072c:
    // 0x23072c: 0xc421dce4  lwc1        $f1, -0x231C($at)
    ctx->pc = 0x23072cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294958308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_230730:
    // 0x230730: 0x3c0246ea  lui         $v0, 0x46EA
    ctx->pc = 0x230730u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18154 << 16));
label_230734:
    // 0x230734: 0x34426000  ori         $v0, $v0, 0x6000
    ctx->pc = 0x230734u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24576);
label_230738:
    // 0x230738: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x230738u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23073c:
    // 0x23073c: 0x0  nop
    ctx->pc = 0x23073cu;
    // NOP
label_230740:
    // 0x230740: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x230740u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_230744:
    // 0x230744: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x230744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_230748:
    // 0x230748: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x230748u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_23074c:
    // 0x23074c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x23074cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_230750:
    // 0x230750: 0xc097b94  jal         func_25EE50
label_230754:
    if (ctx->pc == 0x230754u) {
        ctx->pc = 0x230758u;
        goto label_230758;
    }
    ctx->pc = 0x230750u;
    SET_GPR_U32(ctx, 31, 0x230758u);
    ctx->pc = 0x25EE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25EE50u, 0x230750u, 0x230758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230758u;
label_230758:
    // 0x230758: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x230758u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_23075c:
    // 0x23075c: 0x84a41278  lh          $a0, 0x1278($a1)
    ctx->pc = 0x23075cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4728)));
label_230760:
    // 0x230760: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x230760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_230764:
    // 0x230764: 0xa4a31278  sh          $v1, 0x1278($a1)
    ctx->pc = 0x230764u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4728), (uint16_t)GPR_U32(ctx, 3));
label_230768:
    // 0x230768: 0x1480000a  bnez        $a0, . + 4 + (0xA << 2)
label_23076c:
    if (ctx->pc == 0x23076Cu) {
        ctx->pc = 0x230770u;
        goto label_230770;
    }
    ctx->pc = 0x230768u;
    {
        const bool branch_taken_0x230768 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x230768) {
            ctx->pc = 0x230794u;
            goto label_230794;
        }
    }
    ctx->pc = 0x230770u;
label_230770:
    // 0x230770: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x230770u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_230774:
    // 0x230774: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x230774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_230778:
    // 0x230778: 0xa0650002  sb          $a1, 0x2($v1)
    ctx->pc = 0x230778u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 5));
label_23077c:
    // 0x23077c: 0x10000005  b           . + 4 + (0x5 << 2)
label_230780:
    if (ctx->pc == 0x230780u) {
        ctx->pc = 0x230784u;
        goto label_230784;
    }
    ctx->pc = 0x23077Cu;
    {
        const bool branch_taken_0x23077c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23077c) {
            ctx->pc = 0x230794u;
            goto label_230794;
        }
    }
    ctx->pc = 0x230784u;
label_230784:
    // 0x230784: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x230784u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_230788:
    // 0x230788: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x230788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_23078c:
    // 0x23078c: 0x34630200  ori         $v1, $v1, 0x200
    ctx->pc = 0x23078cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)512);
label_230790:
    // 0x230790: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x230790u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
label_230794:
    // 0x230794: 0x7bbf0050  lq          $ra, 0x50($sp)
    ctx->pc = 0x230794u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_230798:
    // 0x230798: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x230798u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_23079c:
    // 0x23079c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x23079cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2307a0:
    // 0x2307a0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2307a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2307a4:
    // 0x2307a4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2307a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2307a8:
    // 0x2307a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2307a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2307ac:
    // 0x2307ac: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x2307acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2307b0:
    // 0x2307b0: 0x3e00008  jr          $ra
label_2307b4:
    if (ctx->pc == 0x2307B4u) {
        ctx->pc = 0x2307B8u;
        goto label_fallthrough_0x2307b0;
    }
    ctx->pc = 0x2307B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2307B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2307b0:
    ctx->pc = 0x2307B8u;
}
