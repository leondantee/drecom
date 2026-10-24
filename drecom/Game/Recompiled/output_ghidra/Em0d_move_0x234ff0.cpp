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

// Function: Em0d_move
// Address: 0x234ff0 - 0x2360a8
void Em0d_move_0x234ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0d_move_0x234ff0");
#endif

    switch (ctx->pc) {
        case 0x234ff0u: goto label_234ff0;
        case 0x234ff4u: goto label_234ff4;
        case 0x234ff8u: goto label_234ff8;
        case 0x234ffcu: goto label_234ffc;
        case 0x235000u: goto label_235000;
        case 0x235004u: goto label_235004;
        case 0x235008u: goto label_235008;
        case 0x23500cu: goto label_23500c;
        case 0x235010u: goto label_235010;
        case 0x235014u: goto label_235014;
        case 0x235018u: goto label_235018;
        case 0x23501cu: goto label_23501c;
        case 0x235020u: goto label_235020;
        case 0x235024u: goto label_235024;
        case 0x235028u: goto label_235028;
        case 0x23502cu: goto label_23502c;
        case 0x235030u: goto label_235030;
        case 0x235034u: goto label_235034;
        case 0x235038u: goto label_235038;
        case 0x23503cu: goto label_23503c;
        case 0x235040u: goto label_235040;
        case 0x235044u: goto label_235044;
        case 0x235048u: goto label_235048;
        case 0x23504cu: goto label_23504c;
        case 0x235050u: goto label_235050;
        case 0x235054u: goto label_235054;
        case 0x235058u: goto label_235058;
        case 0x23505cu: goto label_23505c;
        case 0x235060u: goto label_235060;
        case 0x235064u: goto label_235064;
        case 0x235068u: goto label_235068;
        case 0x23506cu: goto label_23506c;
        case 0x235070u: goto label_235070;
        case 0x235074u: goto label_235074;
        case 0x235078u: goto label_235078;
        case 0x23507cu: goto label_23507c;
        case 0x235080u: goto label_235080;
        case 0x235084u: goto label_235084;
        case 0x235088u: goto label_235088;
        case 0x23508cu: goto label_23508c;
        case 0x235090u: goto label_235090;
        case 0x235094u: goto label_235094;
        case 0x235098u: goto label_235098;
        case 0x23509cu: goto label_23509c;
        case 0x2350a0u: goto label_2350a0;
        case 0x2350a4u: goto label_2350a4;
        case 0x2350a8u: goto label_2350a8;
        case 0x2350acu: goto label_2350ac;
        case 0x2350b0u: goto label_2350b0;
        case 0x2350b4u: goto label_2350b4;
        case 0x2350b8u: goto label_2350b8;
        case 0x2350bcu: goto label_2350bc;
        case 0x2350c0u: goto label_2350c0;
        case 0x2350c4u: goto label_2350c4;
        case 0x2350c8u: goto label_2350c8;
        case 0x2350ccu: goto label_2350cc;
        case 0x2350d0u: goto label_2350d0;
        case 0x2350d4u: goto label_2350d4;
        case 0x2350d8u: goto label_2350d8;
        case 0x2350dcu: goto label_2350dc;
        case 0x2350e0u: goto label_2350e0;
        case 0x2350e4u: goto label_2350e4;
        case 0x2350e8u: goto label_2350e8;
        case 0x2350ecu: goto label_2350ec;
        case 0x2350f0u: goto label_2350f0;
        case 0x2350f4u: goto label_2350f4;
        case 0x2350f8u: goto label_2350f8;
        case 0x2350fcu: goto label_2350fc;
        case 0x235100u: goto label_235100;
        case 0x235104u: goto label_235104;
        case 0x235108u: goto label_235108;
        case 0x23510cu: goto label_23510c;
        case 0x235110u: goto label_235110;
        case 0x235114u: goto label_235114;
        case 0x235118u: goto label_235118;
        case 0x23511cu: goto label_23511c;
        case 0x235120u: goto label_235120;
        case 0x235124u: goto label_235124;
        case 0x235128u: goto label_235128;
        case 0x23512cu: goto label_23512c;
        case 0x235130u: goto label_235130;
        case 0x235134u: goto label_235134;
        case 0x235138u: goto label_235138;
        case 0x23513cu: goto label_23513c;
        case 0x235140u: goto label_235140;
        case 0x235144u: goto label_235144;
        case 0x235148u: goto label_235148;
        case 0x23514cu: goto label_23514c;
        case 0x235150u: goto label_235150;
        case 0x235154u: goto label_235154;
        case 0x235158u: goto label_235158;
        case 0x23515cu: goto label_23515c;
        case 0x235160u: goto label_235160;
        case 0x235164u: goto label_235164;
        case 0x235168u: goto label_235168;
        case 0x23516cu: goto label_23516c;
        case 0x235170u: goto label_235170;
        case 0x235174u: goto label_235174;
        case 0x235178u: goto label_235178;
        case 0x23517cu: goto label_23517c;
        case 0x235180u: goto label_235180;
        case 0x235184u: goto label_235184;
        case 0x235188u: goto label_235188;
        case 0x23518cu: goto label_23518c;
        case 0x235190u: goto label_235190;
        case 0x235194u: goto label_235194;
        case 0x235198u: goto label_235198;
        case 0x23519cu: goto label_23519c;
        case 0x2351a0u: goto label_2351a0;
        case 0x2351a4u: goto label_2351a4;
        case 0x2351a8u: goto label_2351a8;
        case 0x2351acu: goto label_2351ac;
        case 0x2351b0u: goto label_2351b0;
        case 0x2351b4u: goto label_2351b4;
        case 0x2351b8u: goto label_2351b8;
        case 0x2351bcu: goto label_2351bc;
        case 0x2351c0u: goto label_2351c0;
        case 0x2351c4u: goto label_2351c4;
        case 0x2351c8u: goto label_2351c8;
        case 0x2351ccu: goto label_2351cc;
        case 0x2351d0u: goto label_2351d0;
        case 0x2351d4u: goto label_2351d4;
        case 0x2351d8u: goto label_2351d8;
        case 0x2351dcu: goto label_2351dc;
        case 0x2351e0u: goto label_2351e0;
        case 0x2351e4u: goto label_2351e4;
        case 0x2351e8u: goto label_2351e8;
        case 0x2351ecu: goto label_2351ec;
        case 0x2351f0u: goto label_2351f0;
        case 0x2351f4u: goto label_2351f4;
        case 0x2351f8u: goto label_2351f8;
        case 0x2351fcu: goto label_2351fc;
        case 0x235200u: goto label_235200;
        case 0x235204u: goto label_235204;
        case 0x235208u: goto label_235208;
        case 0x23520cu: goto label_23520c;
        case 0x235210u: goto label_235210;
        case 0x235214u: goto label_235214;
        case 0x235218u: goto label_235218;
        case 0x23521cu: goto label_23521c;
        case 0x235220u: goto label_235220;
        case 0x235224u: goto label_235224;
        case 0x235228u: goto label_235228;
        case 0x23522cu: goto label_23522c;
        case 0x235230u: goto label_235230;
        case 0x235234u: goto label_235234;
        case 0x235238u: goto label_235238;
        case 0x23523cu: goto label_23523c;
        case 0x235240u: goto label_235240;
        case 0x235244u: goto label_235244;
        case 0x235248u: goto label_235248;
        case 0x23524cu: goto label_23524c;
        case 0x235250u: goto label_235250;
        case 0x235254u: goto label_235254;
        case 0x235258u: goto label_235258;
        case 0x23525cu: goto label_23525c;
        case 0x235260u: goto label_235260;
        case 0x235264u: goto label_235264;
        case 0x235268u: goto label_235268;
        case 0x23526cu: goto label_23526c;
        case 0x235270u: goto label_235270;
        case 0x235274u: goto label_235274;
        case 0x235278u: goto label_235278;
        case 0x23527cu: goto label_23527c;
        case 0x235280u: goto label_235280;
        case 0x235284u: goto label_235284;
        case 0x235288u: goto label_235288;
        case 0x23528cu: goto label_23528c;
        case 0x235290u: goto label_235290;
        case 0x235294u: goto label_235294;
        case 0x235298u: goto label_235298;
        case 0x23529cu: goto label_23529c;
        case 0x2352a0u: goto label_2352a0;
        case 0x2352a4u: goto label_2352a4;
        case 0x2352a8u: goto label_2352a8;
        case 0x2352acu: goto label_2352ac;
        case 0x2352b0u: goto label_2352b0;
        case 0x2352b4u: goto label_2352b4;
        case 0x2352b8u: goto label_2352b8;
        case 0x2352bcu: goto label_2352bc;
        case 0x2352c0u: goto label_2352c0;
        case 0x2352c4u: goto label_2352c4;
        case 0x2352c8u: goto label_2352c8;
        case 0x2352ccu: goto label_2352cc;
        case 0x2352d0u: goto label_2352d0;
        case 0x2352d4u: goto label_2352d4;
        case 0x2352d8u: goto label_2352d8;
        case 0x2352dcu: goto label_2352dc;
        case 0x2352e0u: goto label_2352e0;
        case 0x2352e4u: goto label_2352e4;
        case 0x2352e8u: goto label_2352e8;
        case 0x2352ecu: goto label_2352ec;
        case 0x2352f0u: goto label_2352f0;
        case 0x2352f4u: goto label_2352f4;
        case 0x2352f8u: goto label_2352f8;
        case 0x2352fcu: goto label_2352fc;
        case 0x235300u: goto label_235300;
        case 0x235304u: goto label_235304;
        case 0x235308u: goto label_235308;
        case 0x23530cu: goto label_23530c;
        case 0x235310u: goto label_235310;
        case 0x235314u: goto label_235314;
        case 0x235318u: goto label_235318;
        case 0x23531cu: goto label_23531c;
        case 0x235320u: goto label_235320;
        case 0x235324u: goto label_235324;
        case 0x235328u: goto label_235328;
        case 0x23532cu: goto label_23532c;
        case 0x235330u: goto label_235330;
        case 0x235334u: goto label_235334;
        case 0x235338u: goto label_235338;
        case 0x23533cu: goto label_23533c;
        case 0x235340u: goto label_235340;
        case 0x235344u: goto label_235344;
        case 0x235348u: goto label_235348;
        case 0x23534cu: goto label_23534c;
        case 0x235350u: goto label_235350;
        case 0x235354u: goto label_235354;
        case 0x235358u: goto label_235358;
        case 0x23535cu: goto label_23535c;
        case 0x235360u: goto label_235360;
        case 0x235364u: goto label_235364;
        case 0x235368u: goto label_235368;
        case 0x23536cu: goto label_23536c;
        case 0x235370u: goto label_235370;
        case 0x235374u: goto label_235374;
        case 0x235378u: goto label_235378;
        case 0x23537cu: goto label_23537c;
        case 0x235380u: goto label_235380;
        case 0x235384u: goto label_235384;
        case 0x235388u: goto label_235388;
        case 0x23538cu: goto label_23538c;
        case 0x235390u: goto label_235390;
        case 0x235394u: goto label_235394;
        case 0x235398u: goto label_235398;
        case 0x23539cu: goto label_23539c;
        case 0x2353a0u: goto label_2353a0;
        case 0x2353a4u: goto label_2353a4;
        case 0x2353a8u: goto label_2353a8;
        case 0x2353acu: goto label_2353ac;
        case 0x2353b0u: goto label_2353b0;
        case 0x2353b4u: goto label_2353b4;
        case 0x2353b8u: goto label_2353b8;
        case 0x2353bcu: goto label_2353bc;
        case 0x2353c0u: goto label_2353c0;
        case 0x2353c4u: goto label_2353c4;
        case 0x2353c8u: goto label_2353c8;
        case 0x2353ccu: goto label_2353cc;
        case 0x2353d0u: goto label_2353d0;
        case 0x2353d4u: goto label_2353d4;
        case 0x2353d8u: goto label_2353d8;
        case 0x2353dcu: goto label_2353dc;
        case 0x2353e0u: goto label_2353e0;
        case 0x2353e4u: goto label_2353e4;
        case 0x2353e8u: goto label_2353e8;
        case 0x2353ecu: goto label_2353ec;
        case 0x2353f0u: goto label_2353f0;
        case 0x2353f4u: goto label_2353f4;
        case 0x2353f8u: goto label_2353f8;
        case 0x2353fcu: goto label_2353fc;
        case 0x235400u: goto label_235400;
        case 0x235404u: goto label_235404;
        case 0x235408u: goto label_235408;
        case 0x23540cu: goto label_23540c;
        case 0x235410u: goto label_235410;
        case 0x235414u: goto label_235414;
        case 0x235418u: goto label_235418;
        case 0x23541cu: goto label_23541c;
        case 0x235420u: goto label_235420;
        case 0x235424u: goto label_235424;
        case 0x235428u: goto label_235428;
        case 0x23542cu: goto label_23542c;
        case 0x235430u: goto label_235430;
        case 0x235434u: goto label_235434;
        case 0x235438u: goto label_235438;
        case 0x23543cu: goto label_23543c;
        case 0x235440u: goto label_235440;
        case 0x235444u: goto label_235444;
        case 0x235448u: goto label_235448;
        case 0x23544cu: goto label_23544c;
        case 0x235450u: goto label_235450;
        case 0x235454u: goto label_235454;
        case 0x235458u: goto label_235458;
        case 0x23545cu: goto label_23545c;
        case 0x235460u: goto label_235460;
        case 0x235464u: goto label_235464;
        case 0x235468u: goto label_235468;
        case 0x23546cu: goto label_23546c;
        case 0x235470u: goto label_235470;
        case 0x235474u: goto label_235474;
        case 0x235478u: goto label_235478;
        case 0x23547cu: goto label_23547c;
        case 0x235480u: goto label_235480;
        case 0x235484u: goto label_235484;
        case 0x235488u: goto label_235488;
        case 0x23548cu: goto label_23548c;
        case 0x235490u: goto label_235490;
        case 0x235494u: goto label_235494;
        case 0x235498u: goto label_235498;
        case 0x23549cu: goto label_23549c;
        case 0x2354a0u: goto label_2354a0;
        case 0x2354a4u: goto label_2354a4;
        case 0x2354a8u: goto label_2354a8;
        case 0x2354acu: goto label_2354ac;
        case 0x2354b0u: goto label_2354b0;
        case 0x2354b4u: goto label_2354b4;
        case 0x2354b8u: goto label_2354b8;
        case 0x2354bcu: goto label_2354bc;
        case 0x2354c0u: goto label_2354c0;
        case 0x2354c4u: goto label_2354c4;
        case 0x2354c8u: goto label_2354c8;
        case 0x2354ccu: goto label_2354cc;
        case 0x2354d0u: goto label_2354d0;
        case 0x2354d4u: goto label_2354d4;
        case 0x2354d8u: goto label_2354d8;
        case 0x2354dcu: goto label_2354dc;
        case 0x2354e0u: goto label_2354e0;
        case 0x2354e4u: goto label_2354e4;
        case 0x2354e8u: goto label_2354e8;
        case 0x2354ecu: goto label_2354ec;
        case 0x2354f0u: goto label_2354f0;
        case 0x2354f4u: goto label_2354f4;
        case 0x2354f8u: goto label_2354f8;
        case 0x2354fcu: goto label_2354fc;
        case 0x235500u: goto label_235500;
        case 0x235504u: goto label_235504;
        case 0x235508u: goto label_235508;
        case 0x23550cu: goto label_23550c;
        case 0x235510u: goto label_235510;
        case 0x235514u: goto label_235514;
        case 0x235518u: goto label_235518;
        case 0x23551cu: goto label_23551c;
        case 0x235520u: goto label_235520;
        case 0x235524u: goto label_235524;
        case 0x235528u: goto label_235528;
        case 0x23552cu: goto label_23552c;
        case 0x235530u: goto label_235530;
        case 0x235534u: goto label_235534;
        case 0x235538u: goto label_235538;
        case 0x23553cu: goto label_23553c;
        case 0x235540u: goto label_235540;
        case 0x235544u: goto label_235544;
        case 0x235548u: goto label_235548;
        case 0x23554cu: goto label_23554c;
        case 0x235550u: goto label_235550;
        case 0x235554u: goto label_235554;
        case 0x235558u: goto label_235558;
        case 0x23555cu: goto label_23555c;
        case 0x235560u: goto label_235560;
        case 0x235564u: goto label_235564;
        case 0x235568u: goto label_235568;
        case 0x23556cu: goto label_23556c;
        case 0x235570u: goto label_235570;
        case 0x235574u: goto label_235574;
        case 0x235578u: goto label_235578;
        case 0x23557cu: goto label_23557c;
        case 0x235580u: goto label_235580;
        case 0x235584u: goto label_235584;
        case 0x235588u: goto label_235588;
        case 0x23558cu: goto label_23558c;
        case 0x235590u: goto label_235590;
        case 0x235594u: goto label_235594;
        case 0x235598u: goto label_235598;
        case 0x23559cu: goto label_23559c;
        case 0x2355a0u: goto label_2355a0;
        case 0x2355a4u: goto label_2355a4;
        case 0x2355a8u: goto label_2355a8;
        case 0x2355acu: goto label_2355ac;
        case 0x2355b0u: goto label_2355b0;
        case 0x2355b4u: goto label_2355b4;
        case 0x2355b8u: goto label_2355b8;
        case 0x2355bcu: goto label_2355bc;
        case 0x2355c0u: goto label_2355c0;
        case 0x2355c4u: goto label_2355c4;
        case 0x2355c8u: goto label_2355c8;
        case 0x2355ccu: goto label_2355cc;
        case 0x2355d0u: goto label_2355d0;
        case 0x2355d4u: goto label_2355d4;
        case 0x2355d8u: goto label_2355d8;
        case 0x2355dcu: goto label_2355dc;
        case 0x2355e0u: goto label_2355e0;
        case 0x2355e4u: goto label_2355e4;
        case 0x2355e8u: goto label_2355e8;
        case 0x2355ecu: goto label_2355ec;
        case 0x2355f0u: goto label_2355f0;
        case 0x2355f4u: goto label_2355f4;
        case 0x2355f8u: goto label_2355f8;
        case 0x2355fcu: goto label_2355fc;
        case 0x235600u: goto label_235600;
        case 0x235604u: goto label_235604;
        case 0x235608u: goto label_235608;
        case 0x23560cu: goto label_23560c;
        case 0x235610u: goto label_235610;
        case 0x235614u: goto label_235614;
        case 0x235618u: goto label_235618;
        case 0x23561cu: goto label_23561c;
        case 0x235620u: goto label_235620;
        case 0x235624u: goto label_235624;
        case 0x235628u: goto label_235628;
        case 0x23562cu: goto label_23562c;
        case 0x235630u: goto label_235630;
        case 0x235634u: goto label_235634;
        case 0x235638u: goto label_235638;
        case 0x23563cu: goto label_23563c;
        case 0x235640u: goto label_235640;
        case 0x235644u: goto label_235644;
        case 0x235648u: goto label_235648;
        case 0x23564cu: goto label_23564c;
        case 0x235650u: goto label_235650;
        case 0x235654u: goto label_235654;
        case 0x235658u: goto label_235658;
        case 0x23565cu: goto label_23565c;
        case 0x235660u: goto label_235660;
        case 0x235664u: goto label_235664;
        case 0x235668u: goto label_235668;
        case 0x23566cu: goto label_23566c;
        case 0x235670u: goto label_235670;
        case 0x235674u: goto label_235674;
        case 0x235678u: goto label_235678;
        case 0x23567cu: goto label_23567c;
        case 0x235680u: goto label_235680;
        case 0x235684u: goto label_235684;
        case 0x235688u: goto label_235688;
        case 0x23568cu: goto label_23568c;
        case 0x235690u: goto label_235690;
        case 0x235694u: goto label_235694;
        case 0x235698u: goto label_235698;
        case 0x23569cu: goto label_23569c;
        case 0x2356a0u: goto label_2356a0;
        case 0x2356a4u: goto label_2356a4;
        case 0x2356a8u: goto label_2356a8;
        case 0x2356acu: goto label_2356ac;
        case 0x2356b0u: goto label_2356b0;
        case 0x2356b4u: goto label_2356b4;
        case 0x2356b8u: goto label_2356b8;
        case 0x2356bcu: goto label_2356bc;
        case 0x2356c0u: goto label_2356c0;
        case 0x2356c4u: goto label_2356c4;
        case 0x2356c8u: goto label_2356c8;
        case 0x2356ccu: goto label_2356cc;
        case 0x2356d0u: goto label_2356d0;
        case 0x2356d4u: goto label_2356d4;
        case 0x2356d8u: goto label_2356d8;
        case 0x2356dcu: goto label_2356dc;
        case 0x2356e0u: goto label_2356e0;
        case 0x2356e4u: goto label_2356e4;
        case 0x2356e8u: goto label_2356e8;
        case 0x2356ecu: goto label_2356ec;
        case 0x2356f0u: goto label_2356f0;
        case 0x2356f4u: goto label_2356f4;
        case 0x2356f8u: goto label_2356f8;
        case 0x2356fcu: goto label_2356fc;
        case 0x235700u: goto label_235700;
        case 0x235704u: goto label_235704;
        case 0x235708u: goto label_235708;
        case 0x23570cu: goto label_23570c;
        case 0x235710u: goto label_235710;
        case 0x235714u: goto label_235714;
        case 0x235718u: goto label_235718;
        case 0x23571cu: goto label_23571c;
        case 0x235720u: goto label_235720;
        case 0x235724u: goto label_235724;
        case 0x235728u: goto label_235728;
        case 0x23572cu: goto label_23572c;
        case 0x235730u: goto label_235730;
        case 0x235734u: goto label_235734;
        case 0x235738u: goto label_235738;
        case 0x23573cu: goto label_23573c;
        case 0x235740u: goto label_235740;
        case 0x235744u: goto label_235744;
        case 0x235748u: goto label_235748;
        case 0x23574cu: goto label_23574c;
        case 0x235750u: goto label_235750;
        case 0x235754u: goto label_235754;
        case 0x235758u: goto label_235758;
        case 0x23575cu: goto label_23575c;
        case 0x235760u: goto label_235760;
        case 0x235764u: goto label_235764;
        case 0x235768u: goto label_235768;
        case 0x23576cu: goto label_23576c;
        case 0x235770u: goto label_235770;
        case 0x235774u: goto label_235774;
        case 0x235778u: goto label_235778;
        case 0x23577cu: goto label_23577c;
        case 0x235780u: goto label_235780;
        case 0x235784u: goto label_235784;
        case 0x235788u: goto label_235788;
        case 0x23578cu: goto label_23578c;
        case 0x235790u: goto label_235790;
        case 0x235794u: goto label_235794;
        case 0x235798u: goto label_235798;
        case 0x23579cu: goto label_23579c;
        case 0x2357a0u: goto label_2357a0;
        case 0x2357a4u: goto label_2357a4;
        case 0x2357a8u: goto label_2357a8;
        case 0x2357acu: goto label_2357ac;
        case 0x2357b0u: goto label_2357b0;
        case 0x2357b4u: goto label_2357b4;
        case 0x2357b8u: goto label_2357b8;
        case 0x2357bcu: goto label_2357bc;
        case 0x2357c0u: goto label_2357c0;
        case 0x2357c4u: goto label_2357c4;
        case 0x2357c8u: goto label_2357c8;
        case 0x2357ccu: goto label_2357cc;
        case 0x2357d0u: goto label_2357d0;
        case 0x2357d4u: goto label_2357d4;
        case 0x2357d8u: goto label_2357d8;
        case 0x2357dcu: goto label_2357dc;
        case 0x2357e0u: goto label_2357e0;
        case 0x2357e4u: goto label_2357e4;
        case 0x2357e8u: goto label_2357e8;
        case 0x2357ecu: goto label_2357ec;
        case 0x2357f0u: goto label_2357f0;
        case 0x2357f4u: goto label_2357f4;
        case 0x2357f8u: goto label_2357f8;
        case 0x2357fcu: goto label_2357fc;
        case 0x235800u: goto label_235800;
        case 0x235804u: goto label_235804;
        case 0x235808u: goto label_235808;
        case 0x23580cu: goto label_23580c;
        case 0x235810u: goto label_235810;
        case 0x235814u: goto label_235814;
        case 0x235818u: goto label_235818;
        case 0x23581cu: goto label_23581c;
        case 0x235820u: goto label_235820;
        case 0x235824u: goto label_235824;
        case 0x235828u: goto label_235828;
        case 0x23582cu: goto label_23582c;
        case 0x235830u: goto label_235830;
        case 0x235834u: goto label_235834;
        case 0x235838u: goto label_235838;
        case 0x23583cu: goto label_23583c;
        case 0x235840u: goto label_235840;
        case 0x235844u: goto label_235844;
        case 0x235848u: goto label_235848;
        case 0x23584cu: goto label_23584c;
        case 0x235850u: goto label_235850;
        case 0x235854u: goto label_235854;
        case 0x235858u: goto label_235858;
        case 0x23585cu: goto label_23585c;
        case 0x235860u: goto label_235860;
        case 0x235864u: goto label_235864;
        case 0x235868u: goto label_235868;
        case 0x23586cu: goto label_23586c;
        case 0x235870u: goto label_235870;
        case 0x235874u: goto label_235874;
        case 0x235878u: goto label_235878;
        case 0x23587cu: goto label_23587c;
        case 0x235880u: goto label_235880;
        case 0x235884u: goto label_235884;
        case 0x235888u: goto label_235888;
        case 0x23588cu: goto label_23588c;
        case 0x235890u: goto label_235890;
        case 0x235894u: goto label_235894;
        case 0x235898u: goto label_235898;
        case 0x23589cu: goto label_23589c;
        case 0x2358a0u: goto label_2358a0;
        case 0x2358a4u: goto label_2358a4;
        case 0x2358a8u: goto label_2358a8;
        case 0x2358acu: goto label_2358ac;
        case 0x2358b0u: goto label_2358b0;
        case 0x2358b4u: goto label_2358b4;
        case 0x2358b8u: goto label_2358b8;
        case 0x2358bcu: goto label_2358bc;
        case 0x2358c0u: goto label_2358c0;
        case 0x2358c4u: goto label_2358c4;
        case 0x2358c8u: goto label_2358c8;
        case 0x2358ccu: goto label_2358cc;
        case 0x2358d0u: goto label_2358d0;
        case 0x2358d4u: goto label_2358d4;
        case 0x2358d8u: goto label_2358d8;
        case 0x2358dcu: goto label_2358dc;
        case 0x2358e0u: goto label_2358e0;
        case 0x2358e4u: goto label_2358e4;
        case 0x2358e8u: goto label_2358e8;
        case 0x2358ecu: goto label_2358ec;
        case 0x2358f0u: goto label_2358f0;
        case 0x2358f4u: goto label_2358f4;
        case 0x2358f8u: goto label_2358f8;
        case 0x2358fcu: goto label_2358fc;
        case 0x235900u: goto label_235900;
        case 0x235904u: goto label_235904;
        case 0x235908u: goto label_235908;
        case 0x23590cu: goto label_23590c;
        case 0x235910u: goto label_235910;
        case 0x235914u: goto label_235914;
        case 0x235918u: goto label_235918;
        case 0x23591cu: goto label_23591c;
        case 0x235920u: goto label_235920;
        case 0x235924u: goto label_235924;
        case 0x235928u: goto label_235928;
        case 0x23592cu: goto label_23592c;
        case 0x235930u: goto label_235930;
        case 0x235934u: goto label_235934;
        case 0x235938u: goto label_235938;
        case 0x23593cu: goto label_23593c;
        case 0x235940u: goto label_235940;
        case 0x235944u: goto label_235944;
        case 0x235948u: goto label_235948;
        case 0x23594cu: goto label_23594c;
        case 0x235950u: goto label_235950;
        case 0x235954u: goto label_235954;
        case 0x235958u: goto label_235958;
        case 0x23595cu: goto label_23595c;
        case 0x235960u: goto label_235960;
        case 0x235964u: goto label_235964;
        case 0x235968u: goto label_235968;
        case 0x23596cu: goto label_23596c;
        case 0x235970u: goto label_235970;
        case 0x235974u: goto label_235974;
        case 0x235978u: goto label_235978;
        case 0x23597cu: goto label_23597c;
        case 0x235980u: goto label_235980;
        case 0x235984u: goto label_235984;
        case 0x235988u: goto label_235988;
        case 0x23598cu: goto label_23598c;
        case 0x235990u: goto label_235990;
        case 0x235994u: goto label_235994;
        case 0x235998u: goto label_235998;
        case 0x23599cu: goto label_23599c;
        case 0x2359a0u: goto label_2359a0;
        case 0x2359a4u: goto label_2359a4;
        case 0x2359a8u: goto label_2359a8;
        case 0x2359acu: goto label_2359ac;
        case 0x2359b0u: goto label_2359b0;
        case 0x2359b4u: goto label_2359b4;
        case 0x2359b8u: goto label_2359b8;
        case 0x2359bcu: goto label_2359bc;
        case 0x2359c0u: goto label_2359c0;
        case 0x2359c4u: goto label_2359c4;
        case 0x2359c8u: goto label_2359c8;
        case 0x2359ccu: goto label_2359cc;
        case 0x2359d0u: goto label_2359d0;
        case 0x2359d4u: goto label_2359d4;
        case 0x2359d8u: goto label_2359d8;
        case 0x2359dcu: goto label_2359dc;
        case 0x2359e0u: goto label_2359e0;
        case 0x2359e4u: goto label_2359e4;
        case 0x2359e8u: goto label_2359e8;
        case 0x2359ecu: goto label_2359ec;
        case 0x2359f0u: goto label_2359f0;
        case 0x2359f4u: goto label_2359f4;
        case 0x2359f8u: goto label_2359f8;
        case 0x2359fcu: goto label_2359fc;
        case 0x235a00u: goto label_235a00;
        case 0x235a04u: goto label_235a04;
        case 0x235a08u: goto label_235a08;
        case 0x235a0cu: goto label_235a0c;
        case 0x235a10u: goto label_235a10;
        case 0x235a14u: goto label_235a14;
        case 0x235a18u: goto label_235a18;
        case 0x235a1cu: goto label_235a1c;
        case 0x235a20u: goto label_235a20;
        case 0x235a24u: goto label_235a24;
        case 0x235a28u: goto label_235a28;
        case 0x235a2cu: goto label_235a2c;
        case 0x235a30u: goto label_235a30;
        case 0x235a34u: goto label_235a34;
        case 0x235a38u: goto label_235a38;
        case 0x235a3cu: goto label_235a3c;
        case 0x235a40u: goto label_235a40;
        case 0x235a44u: goto label_235a44;
        case 0x235a48u: goto label_235a48;
        case 0x235a4cu: goto label_235a4c;
        case 0x235a50u: goto label_235a50;
        case 0x235a54u: goto label_235a54;
        case 0x235a58u: goto label_235a58;
        case 0x235a5cu: goto label_235a5c;
        case 0x235a60u: goto label_235a60;
        case 0x235a64u: goto label_235a64;
        case 0x235a68u: goto label_235a68;
        case 0x235a6cu: goto label_235a6c;
        case 0x235a70u: goto label_235a70;
        case 0x235a74u: goto label_235a74;
        case 0x235a78u: goto label_235a78;
        case 0x235a7cu: goto label_235a7c;
        case 0x235a80u: goto label_235a80;
        case 0x235a84u: goto label_235a84;
        case 0x235a88u: goto label_235a88;
        case 0x235a8cu: goto label_235a8c;
        case 0x235a90u: goto label_235a90;
        case 0x235a94u: goto label_235a94;
        case 0x235a98u: goto label_235a98;
        case 0x235a9cu: goto label_235a9c;
        case 0x235aa0u: goto label_235aa0;
        case 0x235aa4u: goto label_235aa4;
        case 0x235aa8u: goto label_235aa8;
        case 0x235aacu: goto label_235aac;
        case 0x235ab0u: goto label_235ab0;
        case 0x235ab4u: goto label_235ab4;
        case 0x235ab8u: goto label_235ab8;
        case 0x235abcu: goto label_235abc;
        case 0x235ac0u: goto label_235ac0;
        case 0x235ac4u: goto label_235ac4;
        case 0x235ac8u: goto label_235ac8;
        case 0x235accu: goto label_235acc;
        case 0x235ad0u: goto label_235ad0;
        case 0x235ad4u: goto label_235ad4;
        case 0x235ad8u: goto label_235ad8;
        case 0x235adcu: goto label_235adc;
        case 0x235ae0u: goto label_235ae0;
        case 0x235ae4u: goto label_235ae4;
        case 0x235ae8u: goto label_235ae8;
        case 0x235aecu: goto label_235aec;
        case 0x235af0u: goto label_235af0;
        case 0x235af4u: goto label_235af4;
        case 0x235af8u: goto label_235af8;
        case 0x235afcu: goto label_235afc;
        case 0x235b00u: goto label_235b00;
        case 0x235b04u: goto label_235b04;
        case 0x235b08u: goto label_235b08;
        case 0x235b0cu: goto label_235b0c;
        case 0x235b10u: goto label_235b10;
        case 0x235b14u: goto label_235b14;
        case 0x235b18u: goto label_235b18;
        case 0x235b1cu: goto label_235b1c;
        case 0x235b20u: goto label_235b20;
        case 0x235b24u: goto label_235b24;
        case 0x235b28u: goto label_235b28;
        case 0x235b2cu: goto label_235b2c;
        case 0x235b30u: goto label_235b30;
        case 0x235b34u: goto label_235b34;
        case 0x235b38u: goto label_235b38;
        case 0x235b3cu: goto label_235b3c;
        case 0x235b40u: goto label_235b40;
        case 0x235b44u: goto label_235b44;
        case 0x235b48u: goto label_235b48;
        case 0x235b4cu: goto label_235b4c;
        case 0x235b50u: goto label_235b50;
        case 0x235b54u: goto label_235b54;
        case 0x235b58u: goto label_235b58;
        case 0x235b5cu: goto label_235b5c;
        case 0x235b60u: goto label_235b60;
        case 0x235b64u: goto label_235b64;
        case 0x235b68u: goto label_235b68;
        case 0x235b6cu: goto label_235b6c;
        case 0x235b70u: goto label_235b70;
        case 0x235b74u: goto label_235b74;
        case 0x235b78u: goto label_235b78;
        case 0x235b7cu: goto label_235b7c;
        case 0x235b80u: goto label_235b80;
        case 0x235b84u: goto label_235b84;
        case 0x235b88u: goto label_235b88;
        case 0x235b8cu: goto label_235b8c;
        case 0x235b90u: goto label_235b90;
        case 0x235b94u: goto label_235b94;
        case 0x235b98u: goto label_235b98;
        case 0x235b9cu: goto label_235b9c;
        case 0x235ba0u: goto label_235ba0;
        case 0x235ba4u: goto label_235ba4;
        case 0x235ba8u: goto label_235ba8;
        case 0x235bacu: goto label_235bac;
        case 0x235bb0u: goto label_235bb0;
        case 0x235bb4u: goto label_235bb4;
        case 0x235bb8u: goto label_235bb8;
        case 0x235bbcu: goto label_235bbc;
        case 0x235bc0u: goto label_235bc0;
        case 0x235bc4u: goto label_235bc4;
        case 0x235bc8u: goto label_235bc8;
        case 0x235bccu: goto label_235bcc;
        case 0x235bd0u: goto label_235bd0;
        case 0x235bd4u: goto label_235bd4;
        case 0x235bd8u: goto label_235bd8;
        case 0x235bdcu: goto label_235bdc;
        case 0x235be0u: goto label_235be0;
        case 0x235be4u: goto label_235be4;
        case 0x235be8u: goto label_235be8;
        case 0x235becu: goto label_235bec;
        case 0x235bf0u: goto label_235bf0;
        case 0x235bf4u: goto label_235bf4;
        case 0x235bf8u: goto label_235bf8;
        case 0x235bfcu: goto label_235bfc;
        case 0x235c00u: goto label_235c00;
        case 0x235c04u: goto label_235c04;
        case 0x235c08u: goto label_235c08;
        case 0x235c0cu: goto label_235c0c;
        case 0x235c10u: goto label_235c10;
        case 0x235c14u: goto label_235c14;
        case 0x235c18u: goto label_235c18;
        case 0x235c1cu: goto label_235c1c;
        case 0x235c20u: goto label_235c20;
        case 0x235c24u: goto label_235c24;
        case 0x235c28u: goto label_235c28;
        case 0x235c2cu: goto label_235c2c;
        case 0x235c30u: goto label_235c30;
        case 0x235c34u: goto label_235c34;
        case 0x235c38u: goto label_235c38;
        case 0x235c3cu: goto label_235c3c;
        case 0x235c40u: goto label_235c40;
        case 0x235c44u: goto label_235c44;
        case 0x235c48u: goto label_235c48;
        case 0x235c4cu: goto label_235c4c;
        case 0x235c50u: goto label_235c50;
        case 0x235c54u: goto label_235c54;
        case 0x235c58u: goto label_235c58;
        case 0x235c5cu: goto label_235c5c;
        case 0x235c60u: goto label_235c60;
        case 0x235c64u: goto label_235c64;
        case 0x235c68u: goto label_235c68;
        case 0x235c6cu: goto label_235c6c;
        case 0x235c70u: goto label_235c70;
        case 0x235c74u: goto label_235c74;
        case 0x235c78u: goto label_235c78;
        case 0x235c7cu: goto label_235c7c;
        case 0x235c80u: goto label_235c80;
        case 0x235c84u: goto label_235c84;
        case 0x235c88u: goto label_235c88;
        case 0x235c8cu: goto label_235c8c;
        case 0x235c90u: goto label_235c90;
        case 0x235c94u: goto label_235c94;
        case 0x235c98u: goto label_235c98;
        case 0x235c9cu: goto label_235c9c;
        case 0x235ca0u: goto label_235ca0;
        case 0x235ca4u: goto label_235ca4;
        case 0x235ca8u: goto label_235ca8;
        case 0x235cacu: goto label_235cac;
        case 0x235cb0u: goto label_235cb0;
        case 0x235cb4u: goto label_235cb4;
        case 0x235cb8u: goto label_235cb8;
        case 0x235cbcu: goto label_235cbc;
        case 0x235cc0u: goto label_235cc0;
        case 0x235cc4u: goto label_235cc4;
        case 0x235cc8u: goto label_235cc8;
        case 0x235cccu: goto label_235ccc;
        case 0x235cd0u: goto label_235cd0;
        case 0x235cd4u: goto label_235cd4;
        case 0x235cd8u: goto label_235cd8;
        case 0x235cdcu: goto label_235cdc;
        case 0x235ce0u: goto label_235ce0;
        case 0x235ce4u: goto label_235ce4;
        case 0x235ce8u: goto label_235ce8;
        case 0x235cecu: goto label_235cec;
        case 0x235cf0u: goto label_235cf0;
        case 0x235cf4u: goto label_235cf4;
        case 0x235cf8u: goto label_235cf8;
        case 0x235cfcu: goto label_235cfc;
        case 0x235d00u: goto label_235d00;
        case 0x235d04u: goto label_235d04;
        case 0x235d08u: goto label_235d08;
        case 0x235d0cu: goto label_235d0c;
        case 0x235d10u: goto label_235d10;
        case 0x235d14u: goto label_235d14;
        case 0x235d18u: goto label_235d18;
        case 0x235d1cu: goto label_235d1c;
        case 0x235d20u: goto label_235d20;
        case 0x235d24u: goto label_235d24;
        case 0x235d28u: goto label_235d28;
        case 0x235d2cu: goto label_235d2c;
        case 0x235d30u: goto label_235d30;
        case 0x235d34u: goto label_235d34;
        case 0x235d38u: goto label_235d38;
        case 0x235d3cu: goto label_235d3c;
        case 0x235d40u: goto label_235d40;
        case 0x235d44u: goto label_235d44;
        case 0x235d48u: goto label_235d48;
        case 0x235d4cu: goto label_235d4c;
        case 0x235d50u: goto label_235d50;
        case 0x235d54u: goto label_235d54;
        case 0x235d58u: goto label_235d58;
        case 0x235d5cu: goto label_235d5c;
        case 0x235d60u: goto label_235d60;
        case 0x235d64u: goto label_235d64;
        case 0x235d68u: goto label_235d68;
        case 0x235d6cu: goto label_235d6c;
        case 0x235d70u: goto label_235d70;
        case 0x235d74u: goto label_235d74;
        case 0x235d78u: goto label_235d78;
        case 0x235d7cu: goto label_235d7c;
        case 0x235d80u: goto label_235d80;
        case 0x235d84u: goto label_235d84;
        case 0x235d88u: goto label_235d88;
        case 0x235d8cu: goto label_235d8c;
        case 0x235d90u: goto label_235d90;
        case 0x235d94u: goto label_235d94;
        case 0x235d98u: goto label_235d98;
        case 0x235d9cu: goto label_235d9c;
        case 0x235da0u: goto label_235da0;
        case 0x235da4u: goto label_235da4;
        case 0x235da8u: goto label_235da8;
        case 0x235dacu: goto label_235dac;
        case 0x235db0u: goto label_235db0;
        case 0x235db4u: goto label_235db4;
        case 0x235db8u: goto label_235db8;
        case 0x235dbcu: goto label_235dbc;
        case 0x235dc0u: goto label_235dc0;
        case 0x235dc4u: goto label_235dc4;
        case 0x235dc8u: goto label_235dc8;
        case 0x235dccu: goto label_235dcc;
        case 0x235dd0u: goto label_235dd0;
        case 0x235dd4u: goto label_235dd4;
        case 0x235dd8u: goto label_235dd8;
        case 0x235ddcu: goto label_235ddc;
        case 0x235de0u: goto label_235de0;
        case 0x235de4u: goto label_235de4;
        case 0x235de8u: goto label_235de8;
        case 0x235decu: goto label_235dec;
        case 0x235df0u: goto label_235df0;
        case 0x235df4u: goto label_235df4;
        case 0x235df8u: goto label_235df8;
        case 0x235dfcu: goto label_235dfc;
        case 0x235e00u: goto label_235e00;
        case 0x235e04u: goto label_235e04;
        case 0x235e08u: goto label_235e08;
        case 0x235e0cu: goto label_235e0c;
        case 0x235e10u: goto label_235e10;
        case 0x235e14u: goto label_235e14;
        case 0x235e18u: goto label_235e18;
        case 0x235e1cu: goto label_235e1c;
        case 0x235e20u: goto label_235e20;
        case 0x235e24u: goto label_235e24;
        case 0x235e28u: goto label_235e28;
        case 0x235e2cu: goto label_235e2c;
        case 0x235e30u: goto label_235e30;
        case 0x235e34u: goto label_235e34;
        case 0x235e38u: goto label_235e38;
        case 0x235e3cu: goto label_235e3c;
        case 0x235e40u: goto label_235e40;
        case 0x235e44u: goto label_235e44;
        case 0x235e48u: goto label_235e48;
        case 0x235e4cu: goto label_235e4c;
        case 0x235e50u: goto label_235e50;
        case 0x235e54u: goto label_235e54;
        case 0x235e58u: goto label_235e58;
        case 0x235e5cu: goto label_235e5c;
        case 0x235e60u: goto label_235e60;
        case 0x235e64u: goto label_235e64;
        case 0x235e68u: goto label_235e68;
        case 0x235e6cu: goto label_235e6c;
        case 0x235e70u: goto label_235e70;
        case 0x235e74u: goto label_235e74;
        case 0x235e78u: goto label_235e78;
        case 0x235e7cu: goto label_235e7c;
        case 0x235e80u: goto label_235e80;
        case 0x235e84u: goto label_235e84;
        case 0x235e88u: goto label_235e88;
        case 0x235e8cu: goto label_235e8c;
        case 0x235e90u: goto label_235e90;
        case 0x235e94u: goto label_235e94;
        case 0x235e98u: goto label_235e98;
        case 0x235e9cu: goto label_235e9c;
        case 0x235ea0u: goto label_235ea0;
        case 0x235ea4u: goto label_235ea4;
        case 0x235ea8u: goto label_235ea8;
        case 0x235eacu: goto label_235eac;
        case 0x235eb0u: goto label_235eb0;
        case 0x235eb4u: goto label_235eb4;
        case 0x235eb8u: goto label_235eb8;
        case 0x235ebcu: goto label_235ebc;
        case 0x235ec0u: goto label_235ec0;
        case 0x235ec4u: goto label_235ec4;
        case 0x235ec8u: goto label_235ec8;
        case 0x235eccu: goto label_235ecc;
        case 0x235ed0u: goto label_235ed0;
        case 0x235ed4u: goto label_235ed4;
        case 0x235ed8u: goto label_235ed8;
        case 0x235edcu: goto label_235edc;
        case 0x235ee0u: goto label_235ee0;
        case 0x235ee4u: goto label_235ee4;
        case 0x235ee8u: goto label_235ee8;
        case 0x235eecu: goto label_235eec;
        case 0x235ef0u: goto label_235ef0;
        case 0x235ef4u: goto label_235ef4;
        case 0x235ef8u: goto label_235ef8;
        case 0x235efcu: goto label_235efc;
        case 0x235f00u: goto label_235f00;
        case 0x235f04u: goto label_235f04;
        case 0x235f08u: goto label_235f08;
        case 0x235f0cu: goto label_235f0c;
        case 0x235f10u: goto label_235f10;
        case 0x235f14u: goto label_235f14;
        case 0x235f18u: goto label_235f18;
        case 0x235f1cu: goto label_235f1c;
        case 0x235f20u: goto label_235f20;
        case 0x235f24u: goto label_235f24;
        case 0x235f28u: goto label_235f28;
        case 0x235f2cu: goto label_235f2c;
        case 0x235f30u: goto label_235f30;
        case 0x235f34u: goto label_235f34;
        case 0x235f38u: goto label_235f38;
        case 0x235f3cu: goto label_235f3c;
        case 0x235f40u: goto label_235f40;
        case 0x235f44u: goto label_235f44;
        case 0x235f48u: goto label_235f48;
        case 0x235f4cu: goto label_235f4c;
        case 0x235f50u: goto label_235f50;
        case 0x235f54u: goto label_235f54;
        case 0x235f58u: goto label_235f58;
        case 0x235f5cu: goto label_235f5c;
        case 0x235f60u: goto label_235f60;
        case 0x235f64u: goto label_235f64;
        case 0x235f68u: goto label_235f68;
        case 0x235f6cu: goto label_235f6c;
        case 0x235f70u: goto label_235f70;
        case 0x235f74u: goto label_235f74;
        case 0x235f78u: goto label_235f78;
        case 0x235f7cu: goto label_235f7c;
        case 0x235f80u: goto label_235f80;
        case 0x235f84u: goto label_235f84;
        case 0x235f88u: goto label_235f88;
        case 0x235f8cu: goto label_235f8c;
        case 0x235f90u: goto label_235f90;
        case 0x235f94u: goto label_235f94;
        case 0x235f98u: goto label_235f98;
        case 0x235f9cu: goto label_235f9c;
        case 0x235fa0u: goto label_235fa0;
        case 0x235fa4u: goto label_235fa4;
        case 0x235fa8u: goto label_235fa8;
        case 0x235facu: goto label_235fac;
        case 0x235fb0u: goto label_235fb0;
        case 0x235fb4u: goto label_235fb4;
        case 0x235fb8u: goto label_235fb8;
        case 0x235fbcu: goto label_235fbc;
        case 0x235fc0u: goto label_235fc0;
        case 0x235fc4u: goto label_235fc4;
        case 0x235fc8u: goto label_235fc8;
        case 0x235fccu: goto label_235fcc;
        case 0x235fd0u: goto label_235fd0;
        case 0x235fd4u: goto label_235fd4;
        case 0x235fd8u: goto label_235fd8;
        case 0x235fdcu: goto label_235fdc;
        case 0x235fe0u: goto label_235fe0;
        case 0x235fe4u: goto label_235fe4;
        case 0x235fe8u: goto label_235fe8;
        case 0x235fecu: goto label_235fec;
        case 0x235ff0u: goto label_235ff0;
        case 0x235ff4u: goto label_235ff4;
        case 0x235ff8u: goto label_235ff8;
        case 0x235ffcu: goto label_235ffc;
        case 0x236000u: goto label_236000;
        case 0x236004u: goto label_236004;
        case 0x236008u: goto label_236008;
        case 0x23600cu: goto label_23600c;
        case 0x236010u: goto label_236010;
        case 0x236014u: goto label_236014;
        case 0x236018u: goto label_236018;
        case 0x23601cu: goto label_23601c;
        case 0x236020u: goto label_236020;
        case 0x236024u: goto label_236024;
        case 0x236028u: goto label_236028;
        case 0x23602cu: goto label_23602c;
        case 0x236030u: goto label_236030;
        case 0x236034u: goto label_236034;
        case 0x236038u: goto label_236038;
        case 0x23603cu: goto label_23603c;
        case 0x236040u: goto label_236040;
        case 0x236044u: goto label_236044;
        case 0x236048u: goto label_236048;
        case 0x23604cu: goto label_23604c;
        case 0x236050u: goto label_236050;
        case 0x236054u: goto label_236054;
        case 0x236058u: goto label_236058;
        case 0x23605cu: goto label_23605c;
        case 0x236060u: goto label_236060;
        case 0x236064u: goto label_236064;
        case 0x236068u: goto label_236068;
        case 0x23606cu: goto label_23606c;
        case 0x236070u: goto label_236070;
        case 0x236074u: goto label_236074;
        case 0x236078u: goto label_236078;
        case 0x23607cu: goto label_23607c;
        case 0x236080u: goto label_236080;
        case 0x236084u: goto label_236084;
        case 0x236088u: goto label_236088;
        case 0x23608cu: goto label_23608c;
        case 0x236090u: goto label_236090;
        case 0x236094u: goto label_236094;
        case 0x236098u: goto label_236098;
        case 0x23609cu: goto label_23609c;
        case 0x2360a0u: goto label_2360a0;
        case 0x2360a4u: goto label_2360a4;
        default: break;
    }

    ctx->pc = 0x234ff0u;

label_234ff0:
    // 0x234ff0: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x234ff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
label_234ff4:
    // 0x234ff4: 0x7fbf0070  sq          $ra, 0x70($sp)
    ctx->pc = 0x234ff4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 31));
label_234ff8:
    // 0x234ff8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x234ff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_234ffc:
    // 0x234ffc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x234ffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_235000:
    // 0x235000: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x235000u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_235004:
    // 0x235004: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x235004u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_235008:
    // 0x235008: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x235008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_23500c:
    // 0x23500c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x23500cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_235010:
    // 0x235010: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x235010u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_235014:
    // 0x235014: 0xafa40118  sw          $a0, 0x118($sp)
    ctx->pc = 0x235014u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 4));
label_235018:
    // 0x235018: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x235018u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
label_23501c:
    // 0x23501c: 0x24560080  addiu       $s6, $v0, 0x80
    ctx->pc = 0x23501cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
label_235020:
    // 0x235020: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x235020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_235024:
    // 0x235024: 0x24621330  addiu       $v0, $v1, 0x1330
    ctx->pc = 0x235024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_235028:
    // 0x235028: 0xc4400040  lwc1        $f0, 0x40($v0)
    ctx->pc = 0x235028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_23502c:
    // 0x23502c: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x23502cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_235030:
    // 0x235030: 0x8fa50118  lw          $a1, 0x118($sp)
    ctx->pc = 0x235030u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_235034:
    // 0x235034: 0x24a41330  addiu       $a0, $a1, 0x1330
    ctx->pc = 0x235034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
label_235038:
    // 0x235038: 0xc4800044  lwc1        $f0, 0x44($a0)
    ctx->pc = 0x235038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_23503c:
    // 0x23503c: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x23503cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_235040:
    // 0x235040: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x235040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_235044:
    // 0x235044: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x235044u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_235048:
    // 0x235048: 0xc4600048  lwc1        $f0, 0x48($v1)
    ctx->pc = 0x235048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_23504c:
    // 0x23504c: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x23504cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_235050:
    // 0x235050: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x235050u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_235054:
    // 0x235054: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x235054u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_235058:
    // 0x235058: 0x0  nop
    ctx->pc = 0x235058u;
    // NOP
label_23505c:
    // 0x23505c: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x23505cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
label_235060:
    // 0x235060: 0x8fa60118  lw          $a2, 0x118($sp)
    ctx->pc = 0x235060u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_235064:
    // 0x235064: 0x27a20090  addiu       $v0, $sp, 0x90
    ctx->pc = 0x235064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_235068:
    // 0x235068: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x235068u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_23506c:
    // 0x23506c: 0x24c50120  addiu       $a1, $a2, 0x120
    ctx->pc = 0x23506cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 288));
label_235070:
    // 0x235070: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x235070u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_235074:
    // 0x235074: 0xc0675b0  jal         func_19D6C0
label_235078:
    if (ctx->pc == 0x235078u) {
        ctx->pc = 0x23507Cu;
        goto label_23507c;
    }
    ctx->pc = 0x235074u;
    SET_GPR_U32(ctx, 31, 0x23507Cu);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x235074u, 0x23507Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23507Cu;
label_23507c:
    // 0x23507c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x23507cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_235080:
    // 0x235080: 0xc067588  jal         func_19D620
label_235084:
    if (ctx->pc == 0x235084u) {
        ctx->pc = 0x235088u;
        goto label_235088;
    }
    ctx->pc = 0x235080u;
    SET_GPR_U32(ctx, 31, 0x235088u);
    ctx->pc = 0x19D620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D620u, 0x235080u, 0x235088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235088u;
label_235088:
    // 0x235088: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x235088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_23508c:
    // 0x23508c: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x23508cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_235090:
    // 0x235090: 0xe480004c  swc1        $f0, 0x4C($a0)
    ctx->pc = 0x235090u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 76), bits); }
label_235094:
    // 0x235094: 0x8fa50118  lw          $a1, 0x118($sp)
    ctx->pc = 0x235094u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_235098:
    // 0x235098: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x235098u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_23509c:
    // 0x23509c: 0x8fa60118  lw          $a2, 0x118($sp)
    ctx->pc = 0x23509cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_2350a0:
    // 0x2350a0: 0x90c70000  lbu         $a3, 0x0($a2)
    ctx->pc = 0x2350a0u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_2350a4:
    // 0x2350a4: 0x30e800ff  andi        $t0, $a3, 0xFF
    ctx->pc = 0x2350a4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
label_2350a8:
    // 0x2350a8: 0x84880  sll         $t1, $t0, 2
    ctx->pc = 0x2350a8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_2350ac:
    // 0x2350ac: 0x3c0a0039  lui         $t2, 0x39
    ctx->pc = 0x2350acu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)57 << 16));
label_2350b0:
    // 0x2350b0: 0x2542aff0  addiu       $v0, $t2, -0x5010
    ctx->pc = 0x2350b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 4294946800));
label_2350b4:
    // 0x2350b4: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x2350b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
label_2350b8:
    // 0x2350b8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2350b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2350bc:
    // 0x2350bc: 0x60f809  jalr        $v1
label_2350c0:
    if (ctx->pc == 0x2350C0u) {
        ctx->pc = 0x2350C4u;
        goto label_2350c4;
    }
    ctx->pc = 0x2350BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2350C4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2350BCu, 0x2350C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2350C4u;
label_2350c4:
    // 0x2350c4: 0x24100008  addiu       $s0, $zero, 0x8
    ctx->pc = 0x2350c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2350c8:
    // 0x2350c8: 0x2612ffff  addiu       $s2, $s0, -0x1
    ctx->pc = 0x2350c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_2350cc:
    // 0x2350cc: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x2350ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_2350d0:
    // 0x2350d0: 0x522021  addu        $a0, $v0, $s2
    ctx->pc = 0x2350d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_2350d4:
    // 0x2350d4: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x2350d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_2350d8:
    // 0x2350d8: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x2350d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
label_2350dc:
    // 0x2350dc: 0x2483d9c0  addiu       $v1, $a0, -0x2640
    ctx->pc = 0x2350dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957504));
label_2350e0:
    // 0x2350e0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2350e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2350e4:
    // 0x2350e4: 0xa4400014  sh          $zero, 0x14($v0)
    ctx->pc = 0x2350e4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 20), (uint16_t)GPR_U32(ctx, 0));
label_2350e8:
    // 0x2350e8: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x2350e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_2350ec:
    // 0x2350ec: 0x1600fff6  bnez        $s0, . + 4 + (-0xA << 2)
label_2350f0:
    if (ctx->pc == 0x2350F0u) {
        ctx->pc = 0x2350F4u;
        goto label_2350f4;
    }
    ctx->pc = 0x2350ECu;
    {
        const bool branch_taken_0x2350ec = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2350ec) {
            ctx->pc = 0x2350C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2350c8;
        }
    }
    ctx->pc = 0x2350F4u;
label_2350f4:
    // 0x2350f4: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x2350f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_2350f8:
    // 0x2350f8: 0x24861330  addiu       $a2, $a0, 0x1330
    ctx->pc = 0x2350f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
label_2350fc:
    // 0x2350fc: 0x8cc20030  lw          $v0, 0x30($a2)
    ctx->pc = 0x2350fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 48)));
label_235100:
    // 0x235100: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x235100u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
label_235104:
    // 0x235104: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_235108:
    if (ctx->pc == 0x235108u) {
        ctx->pc = 0x23510Cu;
        goto label_23510c;
    }
    ctx->pc = 0x235104u;
    {
        const bool branch_taken_0x235104 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x235104) {
            ctx->pc = 0x235140u;
            goto label_235140;
        }
    }
    ctx->pc = 0x23510Cu;
label_23510c:
    // 0x23510c: 0x24100008  addiu       $s0, $zero, 0x8
    ctx->pc = 0x23510cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_235110:
    // 0x235110: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x235110u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_235114:
    // 0x235114: 0x2603ffff  addiu       $v1, $s0, -0x1
    ctx->pc = 0x235114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_235118:
    // 0x235118: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x235118u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_23511c:
    // 0x23511c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x23511cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_235120:
    // 0x235120: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x235120u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_235124:
    // 0x235124: 0x3c050062  lui         $a1, 0x62
    ctx->pc = 0x235124u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)98 << 16));
label_235128:
    // 0x235128: 0x24a6d9c0  addiu       $a2, $a1, -0x2640
    ctx->pc = 0x235128u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957504));
label_23512c:
    // 0x23512c: 0xc41021  addu        $v0, $a2, $a0
    ctx->pc = 0x23512cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_235130:
    // 0x235130: 0xa4470014  sh          $a3, 0x14($v0)
    ctx->pc = 0x235130u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 20), (uint16_t)GPR_U32(ctx, 7));
label_235134:
    // 0x235134: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x235134u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_235138:
    // 0x235138: 0x1600fff5  bnez        $s0, . + 4 + (-0xB << 2)
label_23513c:
    if (ctx->pc == 0x23513Cu) {
        ctx->pc = 0x235140u;
        goto label_235140;
    }
    ctx->pc = 0x235138u;
    {
        const bool branch_taken_0x235138 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x235138) {
            ctx->pc = 0x235110u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_235110;
        }
    }
    ctx->pc = 0x235140u;
label_235140:
    // 0x235140: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x235140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_235144:
    // 0x235144: 0x24621330  addiu       $v0, $v1, 0x1330
    ctx->pc = 0x235144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_235148:
    // 0x235148: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x235148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_23514c:
    // 0x23514c: 0x30550020  andi        $s5, $v0, 0x20
    ctx->pc = 0x23514cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
label_235150:
    // 0x235150: 0x16a0000d  bnez        $s5, . + 4 + (0xD << 2)
label_235154:
    if (ctx->pc == 0x235154u) {
        ctx->pc = 0x235158u;
        goto label_235158;
    }
    ctx->pc = 0x235150u;
    {
        const bool branch_taken_0x235150 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x235150) {
            ctx->pc = 0x235188u;
            goto label_235188;
        }
    }
    ctx->pc = 0x235158u;
label_235158:
    // 0x235158: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x235158u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_23515c:
    // 0x23515c: 0x24851330  addiu       $a1, $a0, 0x1330
    ctx->pc = 0x23515cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
label_235160:
    // 0x235160: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x235160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_235164:
    // 0x235164: 0x8fa60118  lw          $a2, 0x118($sp)
    ctx->pc = 0x235164u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_235168:
    // 0x235168: 0xc4c000d4  lwc1        $f0, 0xD4($a2)
    ctx->pc = 0x235168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_23516c:
    // 0x23516c: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x23516cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_235170:
    // 0x235170: 0xc058fec  jal         func_163FB0
label_235174:
    if (ctx->pc == 0x235174u) {
        ctx->pc = 0x235178u;
        goto label_235178;
    }
    ctx->pc = 0x235170u;
    SET_GPR_U32(ctx, 31, 0x235178u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x235170u, 0x235178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235178u;
label_235178:
    // 0x235178: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x235178u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_23517c:
    // 0x23517c: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x23517cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_235180:
    // 0x235180: 0xc05cd78  jal         func_1735E0
label_235184:
    if (ctx->pc == 0x235184u) {
        ctx->pc = 0x235188u;
        goto label_235188;
    }
    ctx->pc = 0x235180u;
    SET_GPR_U32(ctx, 31, 0x235188u);
    ctx->pc = 0x1735E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1735E0u, 0x235180u, 0x235188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235188u;
label_235188:
    // 0x235188: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x235188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_23518c:
    // 0x23518c: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x23518cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_235190:
    // 0x235190: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x235190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_235194:
    // 0x235194: 0x30450040  andi        $a1, $v0, 0x40
    ctx->pc = 0x235194u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
label_235198:
    // 0x235198: 0x14a00006  bnez        $a1, . + 4 + (0x6 << 2)
label_23519c:
    if (ctx->pc == 0x23519Cu) {
        ctx->pc = 0x2351A0u;
        goto label_2351a0;
    }
    ctx->pc = 0x235198u;
    {
        const bool branch_taken_0x235198 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x235198) {
            ctx->pc = 0x2351B4u;
            goto label_2351b4;
        }
    }
    ctx->pc = 0x2351A0u;
label_2351a0:
    // 0x2351a0: 0x8fa60118  lw          $a2, 0x118($sp)
    ctx->pc = 0x2351a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_2351a4:
    // 0x2351a4: 0x24c710b0  addiu       $a3, $a2, 0x10B0
    ctx->pc = 0x2351a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 4272));
label_2351a8:
    // 0x2351a8: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x2351a8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
label_2351ac:
    // 0x2351ac: 0xc0624b4  jal         func_1892D0
label_2351b0:
    if (ctx->pc == 0x2351B0u) {
        ctx->pc = 0x2351B4u;
        goto label_2351b4;
    }
    ctx->pc = 0x2351ACu;
    SET_GPR_U32(ctx, 31, 0x2351B4u);
    ctx->pc = 0x1892D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1892D0u, 0x2351ACu, 0x2351B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2351B4u;
label_2351b4:
    // 0x2351b4: 0x8fb20118  lw          $s2, 0x118($sp)
    ctx->pc = 0x2351b4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_2351b8:
    // 0x2351b8: 0x26421330  addiu       $v0, $s2, 0x1330
    ctx->pc = 0x2351b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4912));
label_2351bc:
    // 0x2351bc: 0x90430073  lbu         $v1, 0x73($v0)
    ctx->pc = 0x2351bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 115)));
label_2351c0:
    // 0x2351c0: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x2351c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2351c4:
    // 0x2351c4: 0xa0440073  sb          $a0, 0x73($v0)
    ctx->pc = 0x2351c4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 115), (uint8_t)GPR_U32(ctx, 4));
label_2351c8:
    // 0x2351c8: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x2351c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_2351cc:
    // 0x2351cc: 0x24621330  addiu       $v0, $v1, 0x1330
    ctx->pc = 0x2351ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_2351d0:
    // 0x2351d0: 0x90420073  lbu         $v0, 0x73($v0)
    ctx->pc = 0x2351d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 115)));
label_2351d4:
    // 0x2351d4: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x2351d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2351d8:
    // 0x2351d8: 0x30a40001  andi        $a0, $a1, 0x1
    ctx->pc = 0x2351d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_2351dc:
    // 0x2351dc: 0x10800061  beqz        $a0, . + 4 + (0x61 << 2)
label_2351e0:
    if (ctx->pc == 0x2351E0u) {
        ctx->pc = 0x2351E4u;
        goto label_2351e4;
    }
    ctx->pc = 0x2351DCu;
    {
        const bool branch_taken_0x2351dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2351dc) {
            ctx->pc = 0x235364u;
            goto label_235364;
        }
    }
    ctx->pc = 0x2351E4u;
label_2351e4:
    // 0x2351e4: 0x8fa60118  lw          $a2, 0x118($sp)
    ctx->pc = 0x2351e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_2351e8:
    // 0x2351e8: 0x84c210a6  lh          $v0, 0x10A6($a2)
    ctx->pc = 0x2351e8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 4262)));
label_2351ec:
    // 0x2351ec: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x2351ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
label_2351f0:
    // 0x2351f0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2351f0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_2351f4:
    // 0x2351f4: 0x460005b  bltz        $v1, . + 4 + (0x5B << 2)
label_2351f8:
    if (ctx->pc == 0x2351F8u) {
        ctx->pc = 0x2351FCu;
        goto label_2351fc;
    }
    ctx->pc = 0x2351F4u;
    {
        const bool branch_taken_0x2351f4 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x2351f4) {
            ctx->pc = 0x235364u;
            goto label_235364;
        }
    }
    ctx->pc = 0x2351FCu;
label_2351fc:
    // 0x2351fc: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x2351fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_235200:
    // 0x235200: 0x8c45121c  lw          $a1, 0x121C($v0)
    ctx->pc = 0x235200u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4636)));
label_235204:
    // 0x235204: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x235204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
label_235208:
    // 0x235208: 0xa23024  and         $a2, $a1, $v0
    ctx->pc = 0x235208u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
label_23520c:
    // 0x23520c: 0x10c00055  beqz        $a2, . + 4 + (0x55 << 2)
label_235210:
    if (ctx->pc == 0x235210u) {
        ctx->pc = 0x235214u;
        goto label_235214;
    }
    ctx->pc = 0x23520Cu;
    {
        const bool branch_taken_0x23520c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x23520c) {
            ctx->pc = 0x235364u;
            goto label_235364;
        }
    }
    ctx->pc = 0x235214u;
label_235214:
    // 0x235214: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x235214u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_235218:
    // 0x235218: 0x0  nop
    ctx->pc = 0x235218u;
    // NOP
label_23521c:
    // 0x23521c: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x23521cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_235220:
    // 0x235220: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x235220u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_235224:
    // 0x235224: 0x0  nop
    ctx->pc = 0x235224u;
    // NOP
label_235228:
    // 0x235228: 0xe7a00104  swc1        $f0, 0x104($sp)
    ctx->pc = 0x235228u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
label_23522c:
    // 0x23522c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23522cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_235230:
    // 0x235230: 0x0  nop
    ctx->pc = 0x235230u;
    // NOP
label_235234:
    // 0x235234: 0xe7a00108  swc1        $f0, 0x108($sp)
    ctx->pc = 0x235234u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
label_235238:
    // 0x235238: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x235238u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_23523c:
    // 0x23523c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x23523cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_235240:
    // 0x235240: 0x0  nop
    ctx->pc = 0x235240u;
    // NOP
label_235244:
    // 0x235244: 0xe7a0010c  swc1        $f0, 0x10C($sp)
    ctx->pc = 0x235244u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
label_235248:
    // 0x235248: 0x8fa60118  lw          $a2, 0x118($sp)
    ctx->pc = 0x235248u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_23524c:
    // 0x23524c: 0x8cc20130  lw          $v0, 0x130($a2)
    ctx->pc = 0x23524cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 304)));
label_235250:
    // 0x235250: 0x24420100  addiu       $v0, $v0, 0x100
    ctx->pc = 0x235250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
label_235254:
    // 0x235254: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x235254u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
label_235258:
    // 0x235258: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x235258u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
label_23525c:
    // 0x23525c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x23525cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_235260:
    // 0x235260: 0x22c38  dsll        $a1, $v0, 16
    ctx->pc = 0x235260u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << 16);
label_235264:
    // 0x235264: 0x34a6ffff  ori         $a2, $a1, 0xFFFF
    ctx->pc = 0x235264u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
label_235268:
    // 0x235268: 0x863824  and         $a3, $a0, $a2
    ctx->pc = 0x235268u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
label_23526c:
    // 0x23526c: 0x24080e13  addiu       $t0, $zero, 0xE13
    ctx->pc = 0x23526cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3603));
label_235270:
    // 0x235270: 0x71002628  paddub      $a0, $t0, $zero
    ctx->pc = 0x235270u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
label_235274:
    // 0x235274: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x235274u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_235278:
    // 0x235278: 0x27a90100  addiu       $t1, $sp, 0x100
    ctx->pc = 0x235278u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_23527c:
    // 0x23527c: 0x71203628  paddub      $a2, $t1, $zero
    ctx->pc = 0x23527cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
label_235280:
    // 0x235280: 0xc062f5c  jal         func_18BD70
label_235284:
    if (ctx->pc == 0x235284u) {
        ctx->pc = 0x235288u;
        goto label_235288;
    }
    ctx->pc = 0x235280u;
    SET_GPR_U32(ctx, 31, 0x235288u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x235280u, 0x235288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235288u;
label_235288:
    // 0x235288: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x235288u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_23528c:
    // 0x23528c: 0xc0630a8  jal         func_18C2A0
label_235290:
    if (ctx->pc == 0x235290u) {
        ctx->pc = 0x235294u;
        goto label_235294;
    }
    ctx->pc = 0x23528Cu;
    SET_GPR_U32(ctx, 31, 0x235294u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x23528Cu, 0x235294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235294u;
label_235294:
    // 0x235294: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x235294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_235298:
    // 0x235298: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x235298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_23529c:
    // 0x23529c: 0x24420280  addiu       $v0, $v0, 0x280
    ctx->pc = 0x23529cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 640));
label_2352a0:
    // 0x2352a0: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x2352a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
label_2352a4:
    // 0x2352a4: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x2352a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
label_2352a8:
    // 0x2352a8: 0x3406ffff  ori         $a2, $zero, 0xFFFF
    ctx->pc = 0x2352a8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_2352ac:
    // 0x2352ac: 0x61438  dsll        $v0, $a2, 16
    ctx->pc = 0x2352acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << 16);
label_2352b0:
    // 0x2352b0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2352b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_2352b4:
    // 0x2352b4: 0x823824  and         $a3, $a0, $v0
    ctx->pc = 0x2352b4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_2352b8:
    // 0x2352b8: 0x24040e13  addiu       $a0, $zero, 0xE13
    ctx->pc = 0x2352b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3603));
label_2352bc:
    // 0x2352bc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2352bcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2352c0:
    // 0x2352c0: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x2352c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_2352c4:
    // 0x2352c4: 0xc062f5c  jal         func_18BD70
label_2352c8:
    if (ctx->pc == 0x2352C8u) {
        ctx->pc = 0x2352CCu;
        goto label_2352cc;
    }
    ctx->pc = 0x2352C4u;
    SET_GPR_U32(ctx, 31, 0x2352CCu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2352C4u, 0x2352CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2352CCu;
label_2352cc:
    // 0x2352cc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2352ccu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2352d0:
    // 0x2352d0: 0xc0630a8  jal         func_18C2A0
label_2352d4:
    if (ctx->pc == 0x2352D4u) {
        ctx->pc = 0x2352D8u;
        goto label_2352d8;
    }
    ctx->pc = 0x2352D0u;
    SET_GPR_U32(ctx, 31, 0x2352D8u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2352D0u, 0x2352D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2352D8u;
label_2352d8:
    // 0x2352d8: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x2352d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_2352dc:
    // 0x2352dc: 0x8c470130  lw          $a3, 0x130($v0)
    ctx->pc = 0x2352dcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_2352e0:
    // 0x2352e0: 0x24e80100  addiu       $t0, $a3, 0x100
    ctx->pc = 0x2352e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 256));
label_2352e4:
    // 0x2352e4: 0x8483c  dsll32      $t1, $t0, 0
    ctx->pc = 0x2352e4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) << (32 + 0));
label_2352e8:
    // 0x2352e8: 0x9483e  dsrl32      $t1, $t1, 0
    ctx->pc = 0x2352e8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) >> (32 + 0));
label_2352ec:
    // 0x2352ec: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2352ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_2352f0:
    // 0x2352f0: 0x22438  dsll        $a0, $v0, 16
    ctx->pc = 0x2352f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << 16);
label_2352f4:
    // 0x2352f4: 0x3486ffff  ori         $a2, $a0, 0xFFFF
    ctx->pc = 0x2352f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_2352f8:
    // 0x2352f8: 0x1263824  and         $a3, $t1, $a2
    ctx->pc = 0x2352f8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 9) & GPR_U64(ctx, 6));
label_2352fc:
    // 0x2352fc: 0x24040e15  addiu       $a0, $zero, 0xE15
    ctx->pc = 0x2352fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3605));
label_235300:
    // 0x235300: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x235300u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_235304:
    // 0x235304: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x235304u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_235308:
    // 0x235308: 0xc062f5c  jal         func_18BD70
label_23530c:
    if (ctx->pc == 0x23530Cu) {
        ctx->pc = 0x235310u;
        goto label_235310;
    }
    ctx->pc = 0x235308u;
    SET_GPR_U32(ctx, 31, 0x235310u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x235308u, 0x235310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235310u;
label_235310:
    // 0x235310: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x235310u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_235314:
    // 0x235314: 0xc0630a8  jal         func_18C2A0
label_235318:
    if (ctx->pc == 0x235318u) {
        ctx->pc = 0x23531Cu;
        goto label_23531c;
    }
    ctx->pc = 0x235314u;
    SET_GPR_U32(ctx, 31, 0x23531Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x235314u, 0x23531Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23531Cu;
label_23531c:
    // 0x23531c: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x23531cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_235320:
    // 0x235320: 0x8c860130  lw          $a2, 0x130($a0)
    ctx->pc = 0x235320u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
label_235324:
    // 0x235324: 0x24c20280  addiu       $v0, $a2, 0x280
    ctx->pc = 0x235324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 640));
label_235328:
    // 0x235328: 0x2883c  dsll32      $s1, $v0, 0
    ctx->pc = 0x235328u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 0));
label_23532c:
    // 0x23532c: 0x11883e  dsrl32      $s1, $s1, 0
    ctx->pc = 0x23532cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) >> (32 + 0));
label_235330:
    // 0x235330: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x235330u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_235334:
    // 0x235334: 0x41438  dsll        $v0, $a0, 16
    ctx->pc = 0x235334u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << 16);
label_235338:
    // 0x235338: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x235338u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_23533c:
    // 0x23533c: 0x2223824  and         $a3, $s1, $v0
    ctx->pc = 0x23533cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
label_235340:
    // 0x235340: 0x24060e15  addiu       $a2, $zero, 0xE15
    ctx->pc = 0x235340u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3605));
label_235344:
    // 0x235344: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x235344u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_235348:
    // 0x235348: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x235348u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_23534c:
    // 0x23534c: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x23534cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_235350:
    // 0x235350: 0xc062f5c  jal         func_18BD70
label_235354:
    if (ctx->pc == 0x235354u) {
        ctx->pc = 0x235358u;
        goto label_235358;
    }
    ctx->pc = 0x235350u;
    SET_GPR_U32(ctx, 31, 0x235358u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x235350u, 0x235358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235358u;
label_235358:
    // 0x235358: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x235358u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_23535c:
    // 0x23535c: 0xc0630a8  jal         func_18C2A0
label_235360:
    if (ctx->pc == 0x235360u) {
        ctx->pc = 0x235364u;
        goto label_235364;
    }
    ctx->pc = 0x23535Cu;
    SET_GPR_U32(ctx, 31, 0x235364u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x23535Cu, 0x235364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235364u;
label_235364:
    // 0x235364: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x235364u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_235368:
    // 0x235368: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x235368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_23536c:
    // 0x23536c: 0x28880  sll         $s1, $v0, 2
    ctx->pc = 0x23536cu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_235370:
    // 0x235370: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x235370u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_235374:
    // 0x235374: 0x913021  addu        $a2, $a0, $s1
    ctx->pc = 0x235374u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
label_235378:
    // 0x235378: 0x8cd50234  lw          $s5, 0x234($a2)
    ctx->pc = 0x235378u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 564)));
label_23537c:
    // 0x23537c: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x23537cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_235380:
    // 0x235380: 0x8c510130  lw          $s1, 0x130($v0)
    ctx->pc = 0x235380u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_235384:
    // 0x235384: 0x7220a628  paddub      $s4, $s1, $zero
    ctx->pc = 0x235384u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_235388:
    // 0x235388: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x235388u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_23538c:
    // 0x23538c: 0x8c240140  lw          $a0, 0x140($at)
    ctx->pc = 0x23538cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_235390:
    // 0x235390: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x235390u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_235394:
    // 0x235394: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x235394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_235398:
    // 0x235398: 0x43080  sll         $a2, $a0, 2
    ctx->pc = 0x235398u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_23539c:
    // 0x23539c: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x23539cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_2353a0:
    // 0x2353a0: 0x462021  addu        $a0, $v0, $a2
    ctx->pc = 0x2353a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_2353a4:
    // 0x2353a4: 0x24840204  addiu       $a0, $a0, 0x204
    ctx->pc = 0x2353a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 516));
label_2353a8:
    // 0x2353a8: 0x72a02e28  paddub      $a1, $s5, $zero
    ctx->pc = 0x2353a8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
label_2353ac:
    // 0x2353ac: 0xc06b06c  jal         func_1AC1B0
label_2353b0:
    if (ctx->pc == 0x2353B0u) {
        ctx->pc = 0x2353B4u;
        goto label_2353b4;
    }
    ctx->pc = 0x2353ACu;
    SET_GPR_U32(ctx, 31, 0x2353B4u);
    ctx->pc = 0x1AC1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC1B0u, 0x2353ACu, 0x2353B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2353B4u;
label_2353b4:
    // 0x2353b4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2353b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_2353b8:
    // 0x2353b8: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x2353b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_2353bc:
    // 0x2353bc: 0x22040  sll         $a0, $v0, 1
    ctx->pc = 0x2353bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_2353c0:
    // 0x2353c0: 0x823021  addu        $a2, $a0, $v0
    ctx->pc = 0x2353c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_2353c4:
    // 0x2353c4: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x2353c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_2353c8:
    // 0x2353c8: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x2353c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_2353cc:
    // 0x2353cc: 0x623021  addu        $a2, $v1, $v0
    ctx->pc = 0x2353ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2353d0:
    // 0x2353d0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2353d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_2353d4:
    // 0x2353d4: 0x8c310140  lw          $s1, 0x140($at)
    ctx->pc = 0x2353d4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_2353d8:
    // 0x2353d8: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x2353d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_2353dc:
    // 0x2353dc: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x2353dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_2353e0:
    // 0x2353e0: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x2353e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2353e4:
    // 0x2353e4: 0x8c650244  lw          $a1, 0x244($v1)
    ctx->pc = 0x2353e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 580)));
label_2353e8:
    // 0x2353e8: 0x24c40204  addiu       $a0, $a2, 0x204
    ctx->pc = 0x2353e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 516));
label_2353ec:
    // 0x2353ec: 0x24060150  addiu       $a2, $zero, 0x150
    ctx->pc = 0x2353ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 336));
label_2353f0:
    // 0x2353f0: 0xc06b07c  jal         func_1AC1F0
label_2353f4:
    if (ctx->pc == 0x2353F4u) {
        ctx->pc = 0x2353F8u;
        goto label_2353f8;
    }
    ctx->pc = 0x2353F0u;
    SET_GPR_U32(ctx, 31, 0x2353F8u);
    ctx->pc = 0x1AC1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC1F0u, 0x2353F0u, 0x2353F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2353F8u;
label_2353f8:
    // 0x2353f8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2353f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_2353fc:
    // 0x2353fc: 0x8c240140  lw          $a0, 0x140($at)
    ctx->pc = 0x2353fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_235400:
    // 0x235400: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x235400u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_235404:
    // 0x235404: 0x8fa60118  lw          $a2, 0x118($sp)
    ctx->pc = 0x235404u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_235408:
    // 0x235408: 0xc53821  addu        $a3, $a2, $a1
    ctx->pc = 0x235408u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_23540c:
    // 0x23540c: 0x8cf30244  lw          $s3, 0x244($a3)
    ctx->pc = 0x23540cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 580)));
label_235410:
    // 0x235410: 0x72602628  paddub      $a0, $s3, $zero
    ctx->pc = 0x235410u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
label_235414:
    // 0x235414: 0xc074974  jal         func_1D25D0
label_235418:
    if (ctx->pc == 0x235418u) {
        ctx->pc = 0x23541Cu;
        goto label_23541c;
    }
    ctx->pc = 0x235414u;
    SET_GPR_U32(ctx, 31, 0x23541Cu);
    ctx->pc = 0x1D25D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D25D0u, 0x235414u, 0x23541Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23541Cu;
label_23541c:
    // 0x23541c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x23541cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_235420:
    // 0x235420: 0x8c260140  lw          $a2, 0x140($at)
    ctx->pc = 0x235420u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_235424:
    // 0x235424: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x235424u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_235428:
    // 0x235428: 0x461821  addu        $v1, $v0, $a2
    ctx->pc = 0x235428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_23542c:
    // 0x23542c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x23542cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_235430:
    // 0x235430: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x235430u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_235434:
    // 0x235434: 0x822821  addu        $a1, $a0, $v0
    ctx->pc = 0x235434u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_235438:
    // 0x235438: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x235438u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_23543c:
    // 0x23543c: 0x8c260140  lw          $a2, 0x140($at)
    ctx->pc = 0x23543cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_235440:
    // 0x235440: 0x63880  sll         $a3, $a2, 2
    ctx->pc = 0x235440u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_235444:
    // 0x235444: 0x8fa80118  lw          $t0, 0x118($sp)
    ctx->pc = 0x235444u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_235448:
    // 0x235448: 0x1074821  addu        $t1, $t0, $a3
    ctx->pc = 0x235448u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
label_23544c:
    // 0x23544c: 0x8d2a024c  lw          $t2, 0x24C($t1)
    ctx->pc = 0x23544cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 588)));
label_235450:
    // 0x235450: 0x24a40204  addiu       $a0, $a1, 0x204
    ctx->pc = 0x235450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 516));
label_235454:
    // 0x235454: 0x71402e28  paddub      $a1, $t2, $zero
    ctx->pc = 0x235454u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
label_235458:
    // 0x235458: 0x24060150  addiu       $a2, $zero, 0x150
    ctx->pc = 0x235458u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 336));
label_23545c:
    // 0x23545c: 0xc06b07c  jal         func_1AC1F0
label_235460:
    if (ctx->pc == 0x235460u) {
        ctx->pc = 0x235464u;
        goto label_235464;
    }
    ctx->pc = 0x23545Cu;
    SET_GPR_U32(ctx, 31, 0x235464u);
    ctx->pc = 0x1AC1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC1F0u, 0x23545Cu, 0x235464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235464u;
label_235464:
    // 0x235464: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x235464u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_235468:
    // 0x235468: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x235468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_23546c:
    // 0x23546c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x23546cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_235470:
    // 0x235470: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x235470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_235474:
    // 0x235474: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x235474u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_235478:
    // 0x235478: 0x8c93024c  lw          $s3, 0x24C($a0)
    ctx->pc = 0x235478u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 588)));
label_23547c:
    // 0x23547c: 0x72602628  paddub      $a0, $s3, $zero
    ctx->pc = 0x23547cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
label_235480:
    // 0x235480: 0xc074974  jal         func_1D25D0
label_235484:
    if (ctx->pc == 0x235484u) {
        ctx->pc = 0x235488u;
        goto label_235488;
    }
    ctx->pc = 0x235480u;
    SET_GPR_U32(ctx, 31, 0x235488u);
    ctx->pc = 0x1D25D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D25D0u, 0x235480u, 0x235488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235488u;
label_235488:
    // 0x235488: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x235488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_23548c:
    // 0x23548c: 0x8c73024c  lw          $s3, 0x24C($v1)
    ctx->pc = 0x23548cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 588)));
label_235490:
    // 0x235490: 0x8fa50118  lw          $a1, 0x118($sp)
    ctx->pc = 0x235490u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_235494:
    // 0x235494: 0x24a41330  addiu       $a0, $a1, 0x1330
    ctx->pc = 0x235494u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
label_235498:
    // 0x235498: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x235498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_23549c:
    // 0x23549c: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x23549cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_2354a0:
    // 0x2354a0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2354a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_2354a4:
    // 0x2354a4: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x2354a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2354a8:
    // 0x2354a8: 0x72602628  paddub      $a0, $s3, $zero
    ctx->pc = 0x2354a8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
label_2354ac:
    // 0x2354ac: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x2354acu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_2354b0:
    // 0x2354b0: 0xc0749a4  jal         func_1D2690
label_2354b4:
    if (ctx->pc == 0x2354B4u) {
        ctx->pc = 0x2354B8u;
        goto label_2354b8;
    }
    ctx->pc = 0x2354B0u;
    SET_GPR_U32(ctx, 31, 0x2354B8u);
    ctx->pc = 0x1D2690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D2690u, 0x2354B0u, 0x2354B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2354B8u;
label_2354b8:
    // 0x2354b8: 0x8fa50118  lw          $a1, 0x118($sp)
    ctx->pc = 0x2354b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_2354bc:
    // 0x2354bc: 0x8cb30250  lw          $s3, 0x250($a1)
    ctx->pc = 0x2354bcu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 592)));
label_2354c0:
    // 0x2354c0: 0x8fa70118  lw          $a3, 0x118($sp)
    ctx->pc = 0x2354c0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_2354c4:
    // 0x2354c4: 0x24e81330  addiu       $t0, $a3, 0x1330
    ctx->pc = 0x2354c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 4912));
label_2354c8:
    // 0x2354c8: 0x8d090000  lw          $t1, 0x0($t0)
    ctx->pc = 0x2354c8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_2354cc:
    // 0x2354cc: 0x8faa0118  lw          $t2, 0x118($sp)
    ctx->pc = 0x2354ccu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_2354d0:
    // 0x2354d0: 0x25421330  addiu       $v0, $t2, 0x1330
    ctx->pc = 0x2354d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 4912));
label_2354d4:
    // 0x2354d4: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x2354d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2354d8:
    // 0x2354d8: 0x72602628  paddub      $a0, $s3, $zero
    ctx->pc = 0x2354d8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
label_2354dc:
    // 0x2354dc: 0x71202e28  paddub      $a1, $t1, $zero
    ctx->pc = 0x2354dcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
label_2354e0:
    // 0x2354e0: 0xc0749a4  jal         func_1D2690
label_2354e4:
    if (ctx->pc == 0x2354E4u) {
        ctx->pc = 0x2354E8u;
        goto label_2354e8;
    }
    ctx->pc = 0x2354E0u;
    SET_GPR_U32(ctx, 31, 0x2354E8u);
    ctx->pc = 0x1D2690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D2690u, 0x2354E0u, 0x2354E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2354E8u;
label_2354e8:
    // 0x2354e8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2354e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_2354ec:
    // 0x2354ec: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x2354ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_2354f0:
    // 0x2354f0: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x2354f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_2354f4:
    // 0x2354f4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2354f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2354f8:
    // 0x2354f8: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x2354f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2354fc:
    // 0x2354fc: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x2354fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_235500:
    // 0x235500: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x235500u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_235504:
    // 0x235504: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x235504u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_235508:
    // 0x235508: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x235508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_23550c:
    // 0x23550c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23550cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_235510:
    // 0x235510: 0x8fa50118  lw          $a1, 0x118($sp)
    ctx->pc = 0x235510u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_235514:
    // 0x235514: 0xa22021  addu        $a0, $a1, $v0
    ctx->pc = 0x235514u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_235518:
    // 0x235518: 0x8c860254  lw          $a2, 0x254($a0)
    ctx->pc = 0x235518u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 596)));
label_23551c:
    // 0x23551c: 0x24640204  addiu       $a0, $v1, 0x204
    ctx->pc = 0x23551cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 516));
label_235520:
    // 0x235520: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x235520u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_235524:
    // 0x235524: 0x24060150  addiu       $a2, $zero, 0x150
    ctx->pc = 0x235524u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 336));
label_235528:
    // 0x235528: 0xc06b07c  jal         func_1AC1F0
label_23552c:
    if (ctx->pc == 0x23552Cu) {
        ctx->pc = 0x235530u;
        goto label_235530;
    }
    ctx->pc = 0x235528u;
    SET_GPR_U32(ctx, 31, 0x235530u);
    ctx->pc = 0x1AC1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC1F0u, 0x235528u, 0x235530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235530u;
label_235530:
    // 0x235530: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x235530u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_235534:
    // 0x235534: 0x8c240140  lw          $a0, 0x140($at)
    ctx->pc = 0x235534u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_235538:
    // 0x235538: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x235538u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_23553c:
    // 0x23553c: 0x8fa60118  lw          $a2, 0x118($sp)
    ctx->pc = 0x23553cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_235540:
    // 0x235540: 0xc53821  addu        $a3, $a2, $a1
    ctx->pc = 0x235540u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_235544:
    // 0x235544: 0x8cf30254  lw          $s3, 0x254($a3)
    ctx->pc = 0x235544u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 596)));
label_235548:
    // 0x235548: 0x72602628  paddub      $a0, $s3, $zero
    ctx->pc = 0x235548u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
label_23554c:
    // 0x23554c: 0xc074974  jal         func_1D25D0
label_235550:
    if (ctx->pc == 0x235550u) {
        ctx->pc = 0x235554u;
        goto label_235554;
    }
    ctx->pc = 0x23554Cu;
    SET_GPR_U32(ctx, 31, 0x235554u);
    ctx->pc = 0x1D25D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D25D0u, 0x23554Cu, 0x235554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235554u;
label_235554:
    // 0x235554: 0x8faa0118  lw          $t2, 0x118($sp)
    ctx->pc = 0x235554u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_235558:
    // 0x235558: 0x8d530254  lw          $s3, 0x254($t2)
    ctx->pc = 0x235558u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 596)));
label_23555c:
    // 0x23555c: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x23555cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_235560:
    // 0x235560: 0x24561330  addiu       $s6, $v0, 0x1330
    ctx->pc = 0x235560u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_235564:
    // 0x235564: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x235564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_235568:
    // 0x235568: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x235568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_23556c:
    // 0x23556c: 0x32842  srl         $a1, $v1, 1
    ctx->pc = 0x23556cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
label_235570:
    // 0x235570: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x235570u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_235574:
    // 0x235574: 0x24821330  addiu       $v0, $a0, 0x1330
    ctx->pc = 0x235574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
label_235578:
    // 0x235578: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x235578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_23557c:
    // 0x23557c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x23557cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_235580:
    // 0x235580: 0x33042  srl         $a2, $v1, 1
    ctx->pc = 0x235580u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
label_235584:
    // 0x235584: 0x72602628  paddub      $a0, $s3, $zero
    ctx->pc = 0x235584u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
label_235588:
    // 0x235588: 0xc0749a4  jal         func_1D2690
label_23558c:
    if (ctx->pc == 0x23558Cu) {
        ctx->pc = 0x235590u;
        goto label_235590;
    }
    ctx->pc = 0x235588u;
    SET_GPR_U32(ctx, 31, 0x235590u);
    ctx->pc = 0x1D2690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D2690u, 0x235588u, 0x235590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235590u;
label_235590:
    // 0x235590: 0x8fa50118  lw          $a1, 0x118($sp)
    ctx->pc = 0x235590u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_235594:
    // 0x235594: 0x8ca60258  lw          $a2, 0x258($a1)
    ctx->pc = 0x235594u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 600)));
label_235598:
    // 0x235598: 0x70c09e28  paddub      $s3, $a2, $zero
    ctx->pc = 0x235598u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_23559c:
    // 0x23559c: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x23559cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_2355a0:
    // 0x2355a0: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x2355a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_2355a4:
    // 0x2355a4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2355a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2355a8:
    // 0x2355a8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2355a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2355ac:
    // 0x2355ac: 0x22842  srl         $a1, $v0, 1
    ctx->pc = 0x2355acu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_2355b0:
    // 0x2355b0: 0x8fa60118  lw          $a2, 0x118($sp)
    ctx->pc = 0x2355b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_2355b4:
    // 0x2355b4: 0x24c71330  addiu       $a3, $a2, 0x1330
    ctx->pc = 0x2355b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 4912));
label_2355b8:
    // 0x2355b8: 0x8ce80000  lw          $t0, 0x0($a3)
    ctx->pc = 0x2355b8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_2355bc:
    // 0x2355bc: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x2355bcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2355c0:
    // 0x2355c0: 0x85042  srl         $t2, $t0, 1
    ctx->pc = 0x2355c0u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 8), 1));
label_2355c4:
    // 0x2355c4: 0x72602628  paddub      $a0, $s3, $zero
    ctx->pc = 0x2355c4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
label_2355c8:
    // 0x2355c8: 0x71403628  paddub      $a2, $t2, $zero
    ctx->pc = 0x2355c8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
label_2355cc:
    // 0x2355cc: 0xc0749a4  jal         func_1D2690
label_2355d0:
    if (ctx->pc == 0x2355D0u) {
        ctx->pc = 0x2355D4u;
        goto label_2355d4;
    }
    ctx->pc = 0x2355CCu;
    SET_GPR_U32(ctx, 31, 0x2355D4u);
    ctx->pc = 0x1D2690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D2690u, 0x2355CCu, 0x2355D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2355D4u;
label_2355d4:
    // 0x2355d4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2355d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_2355d8:
    // 0x2355d8: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x2355d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_2355dc:
    // 0x2355dc: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x2355dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_2355e0:
    // 0x2355e0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2355e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2355e4:
    // 0x2355e4: 0x28080  sll         $s0, $v0, 2
    ctx->pc = 0x2355e4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2355e8:
    // 0x2355e8: 0x8fb20118  lw          $s2, 0x118($sp)
    ctx->pc = 0x2355e8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_2355ec:
    // 0x2355ec: 0x2501021  addu        $v0, $s2, $s0
    ctx->pc = 0x2355ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_2355f0:
    // 0x2355f0: 0x24440204  addiu       $a0, $v0, 0x204
    ctx->pc = 0x2355f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 516));
label_2355f4:
    // 0x2355f4: 0xc06b0d4  jal         func_1AC350
label_2355f8:
    if (ctx->pc == 0x2355F8u) {
        ctx->pc = 0x2355FCu;
        goto label_2355fc;
    }
    ctx->pc = 0x2355F4u;
    SET_GPR_U32(ctx, 31, 0x2355FCu);
    ctx->pc = 0x1AC350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC350u, 0x2355F4u, 0x2355FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2355FCu;
label_2355fc:
    // 0x2355fc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2355fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_235600:
    // 0x235600: 0x8c240140  lw          $a0, 0x140($at)
    ctx->pc = 0x235600u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_235604:
    // 0x235604: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x235604u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_235608:
    // 0x235608: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x235608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_23560c:
    // 0x23560c: 0x28080  sll         $s0, $v0, 2
    ctx->pc = 0x23560cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_235610:
    // 0x235610: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x235610u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_235614:
    // 0x235614: 0x903021  addu        $a2, $a0, $s0
    ctx->pc = 0x235614u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_235618:
    // 0x235618: 0xacc0021c  sw          $zero, 0x21C($a2)
    ctx->pc = 0x235618u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 540), GPR_U32(ctx, 0));
label_23561c:
    // 0x23561c: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x23561cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_235620:
    // 0x235620: 0x844210a6  lh          $v0, 0x10A6($v0)
    ctx->pc = 0x235620u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4262)));
label_235624:
    // 0x235624: 0x2843c  dsll32      $s0, $v0, 16
    ctx->pc = 0x235624u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 16));
label_235628:
    // 0x235628: 0x10843f  dsra32      $s0, $s0, 16
    ctx->pc = 0x235628u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
label_23562c:
    // 0x23562c: 0x6000246  bltz        $s0, . + 4 + (0x246 << 2)
label_235630:
    if (ctx->pc == 0x235630u) {
        ctx->pc = 0x235634u;
        goto label_235634;
    }
    ctx->pc = 0x23562Cu;
    {
        const bool branch_taken_0x23562c = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x23562c) {
            ctx->pc = 0x235F48u;
            goto label_235f48;
        }
    }
    ctx->pc = 0x235634u;
label_235634:
    // 0x235634: 0x8fa70118  lw          $a3, 0x118($sp)
    ctx->pc = 0x235634u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_235638:
    // 0x235638: 0x24e31330  addiu       $v1, $a3, 0x1330
    ctx->pc = 0x235638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4912));
label_23563c:
    // 0x23563c: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x23563cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_235640:
    // 0x235640: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x235640u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
label_235644:
    // 0x235644: 0x14400240  bnez        $v0, . + 4 + (0x240 << 2)
label_235648:
    if (ctx->pc == 0x235648u) {
        ctx->pc = 0x23564Cu;
        goto label_23564c;
    }
    ctx->pc = 0x235644u;
    {
        const bool branch_taken_0x235644 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x235644) {
            ctx->pc = 0x235F48u;
            goto label_235f48;
        }
    }
    ctx->pc = 0x23564Cu;
label_23564c:
    // 0x23564c: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x23564cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_235650:
    // 0x235650: 0x8c85121c  lw          $a1, 0x121C($a0)
    ctx->pc = 0x235650u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4636)));
label_235654:
    // 0x235654: 0x3c06c000  lui         $a2, 0xC000
    ctx->pc = 0x235654u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)49152 << 16));
label_235658:
    // 0x235658: 0xa61024  and         $v0, $a1, $a2
    ctx->pc = 0x235658u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
label_23565c:
    // 0x23565c: 0x1040023a  beqz        $v0, . + 4 + (0x23A << 2)
label_235660:
    if (ctx->pc == 0x235660u) {
        ctx->pc = 0x235664u;
        goto label_235664;
    }
    ctx->pc = 0x23565Cu;
    {
        const bool branch_taken_0x23565c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23565c) {
            ctx->pc = 0x235F48u;
            goto label_235f48;
        }
    }
    ctx->pc = 0x235664u;
label_235664:
    // 0x235664: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x235664u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_235668:
    // 0x235668: 0x8c300140  lw          $s0, 0x140($at)
    ctx->pc = 0x235668u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_23566c:
    // 0x23566c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x23566cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_235670:
    // 0x235670: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x235670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_235674:
    // 0x235674: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x235674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_235678:
    // 0x235678: 0x8c55023c  lw          $s5, 0x23C($v0)
    ctx->pc = 0x235678u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 572)));
label_23567c:
    // 0x23567c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x23567cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_235680:
    // 0x235680: 0x8c240140  lw          $a0, 0x140($at)
    ctx->pc = 0x235680u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_235684:
    // 0x235684: 0x42840  sll         $a1, $a0, 1
    ctx->pc = 0x235684u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_235688:
    // 0x235688: 0xa43021  addu        $a2, $a1, $a0
    ctx->pc = 0x235688u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_23568c:
    // 0x23568c: 0x62080  sll         $a0, $a2, 2
    ctx->pc = 0x23568cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_235690:
    // 0x235690: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x235690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_235694:
    // 0x235694: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x235694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_235698:
    // 0x235698: 0x2444021c  addiu       $a0, $v0, 0x21C
    ctx->pc = 0x235698u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 540));
label_23569c:
    // 0x23569c: 0x72a02e28  paddub      $a1, $s5, $zero
    ctx->pc = 0x23569cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
label_2356a0:
    // 0x2356a0: 0xc06b06c  jal         func_1AC1B0
label_2356a4:
    if (ctx->pc == 0x2356A4u) {
        ctx->pc = 0x2356A8u;
        goto label_2356a8;
    }
    ctx->pc = 0x2356A0u;
    SET_GPR_U32(ctx, 31, 0x2356A8u);
    ctx->pc = 0x1AC1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC1B0u, 0x2356A0u, 0x2356A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2356A8u;
label_2356a8:
    // 0x2356a8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2356a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_2356ac:
    // 0x2356ac: 0x8c250140  lw          $a1, 0x140($at)
    ctx->pc = 0x2356acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_2356b0:
    // 0x2356b0: 0x53080  sll         $a2, $a1, 2
    ctx->pc = 0x2356b0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_2356b4:
    // 0x2356b4: 0x8fa70118  lw          $a3, 0x118($sp)
    ctx->pc = 0x2356b4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_2356b8:
    // 0x2356b8: 0xe61021  addu        $v0, $a3, $a2
    ctx->pc = 0x2356b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_2356bc:
    // 0x2356bc: 0x8c520264  lw          $s2, 0x264($v0)
    ctx->pc = 0x2356bcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 612)));
label_2356c0:
    // 0x2356c0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2356c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_2356c4:
    // 0x2356c4: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x2356c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_2356c8:
    // 0x2356c8: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x2356c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_2356cc:
    // 0x2356cc: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x2356ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2356d0:
    // 0x2356d0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2356d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_2356d4:
    // 0x2356d4: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x2356d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_2356d8:
    // 0x2356d8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2356d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2356dc:
    // 0x2356dc: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x2356dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_2356e0:
    // 0x2356e0: 0x2444021c  addiu       $a0, $v0, 0x21C
    ctx->pc = 0x2356e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 540));
label_2356e4:
    // 0x2356e4: 0x8e46000c  lw          $a2, 0xC($s2)
    ctx->pc = 0x2356e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_2356e8:
    // 0x2356e8: 0xc06b07c  jal         func_1AC1F0
label_2356ec:
    if (ctx->pc == 0x2356ECu) {
        ctx->pc = 0x2356F0u;
        goto label_2356f0;
    }
    ctx->pc = 0x2356E8u;
    SET_GPR_U32(ctx, 31, 0x2356F0u);
    ctx->pc = 0x1AC1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC1F0u, 0x2356E8u, 0x2356F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2356F0u;
label_2356f0:
    // 0x2356f0: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x2356f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_2356f4:
    // 0x2356f4: 0x8c620264  lw          $v0, 0x264($v1)
    ctx->pc = 0x2356f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 612)));
label_2356f8:
    // 0x2356f8: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x2356f8u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2356fc:
    // 0x2356fc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2356fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_235700:
    // 0x235700: 0x0  nop
    ctx->pc = 0x235700u;
    // NOP
label_235704:
    // 0x235704: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x235704u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_235708:
    // 0x235708: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x235708u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23570c:
    // 0x23570c: 0x0  nop
    ctx->pc = 0x23570cu;
    // NOP
label_235710:
    // 0x235710: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x235710u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_235714:
    // 0x235714: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x235714u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_235718:
    // 0x235718: 0x0  nop
    ctx->pc = 0x235718u;
    // NOP
label_23571c:
    // 0x23571c: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x23571cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_235720:
    // 0x235720: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x235720u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_235724:
    // 0x235724: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x235724u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_235728:
    // 0x235728: 0x0  nop
    ctx->pc = 0x235728u;
    // NOP
label_23572c:
    // 0x23572c: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x23572cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
label_235730:
    // 0x235730: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x235730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_235734:
    // 0x235734: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x235734u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_235738:
    // 0x235738: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x235738u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_23573c:
    // 0x23573c: 0x244500e0  addiu       $a1, $v0, 0xE0
    ctx->pc = 0x23573cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 224));
label_235740:
    // 0x235740: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x235740u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_235744:
    // 0x235744: 0xc040bf4  jal         func_102FD0
label_235748:
    if (ctx->pc == 0x235748u) {
        ctx->pc = 0x23574Cu;
        goto label_23574c;
    }
    ctx->pc = 0x235744u;
    SET_GPR_U32(ctx, 31, 0x23574Cu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x23574Cu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x23574Cu) { return; }
    ctx->pc = 0x23574Cu;
label_23574c:
    // 0x23574c: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x23574cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_235750:
    // 0x235750: 0x8c440264  lw          $a0, 0x264($v0)
    ctx->pc = 0x235750u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 612)));
label_235754:
    // 0x235754: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x235754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_235758:
    // 0x235758: 0x8c450268  lw          $a1, 0x268($v0)
    ctx->pc = 0x235758u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 616)));
label_23575c:
    // 0x23575c: 0x26860030  addiu       $a2, $s4, 0x30
    ctx->pc = 0x23575cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
label_235760:
    // 0x235760: 0x27a70080  addiu       $a3, $sp, 0x80
    ctx->pc = 0x235760u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_235764:
    // 0x235764: 0x24080040  addiu       $t0, $zero, 0x40
    ctx->pc = 0x235764u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_235768:
    // 0x235768: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x235768u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_23576c:
    // 0x23576c: 0x8c290140  lw          $t1, 0x140($at)
    ctx->pc = 0x23576cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_235770:
    // 0x235770: 0xc074efc  jal         func_1D3BF0
label_235774:
    if (ctx->pc == 0x235774u) {
        ctx->pc = 0x235778u;
        goto label_235778;
    }
    ctx->pc = 0x235770u;
    SET_GPR_U32(ctx, 31, 0x235778u);
    ctx->pc = 0x1D3BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3BF0u, 0x235770u, 0x235778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235778u;
label_235778:
    // 0x235778: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x235778u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
label_23577c:
    // 0x23577c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23577cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_235780:
    // 0x235780: 0x0  nop
    ctx->pc = 0x235780u;
    // NOP
label_235784:
    // 0x235784: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x235784u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_235788:
    // 0x235788: 0x3c024416  lui         $v0, 0x4416
    ctx->pc = 0x235788u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17430 << 16));
label_23578c:
    // 0x23578c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23578cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_235790:
    // 0x235790: 0x0  nop
    ctx->pc = 0x235790u;
    // NOP
label_235794:
    // 0x235794: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x235794u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_235798:
    // 0x235798: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x235798u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
label_23579c:
    // 0x23579c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23579cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2357a0:
    // 0x2357a0: 0x0  nop
    ctx->pc = 0x2357a0u;
    // NOP
label_2357a4:
    // 0x2357a4: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x2357a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_2357a8:
    // 0x2357a8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2357a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2357ac:
    // 0x2357ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2357acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2357b0:
    // 0x2357b0: 0x0  nop
    ctx->pc = 0x2357b0u;
    // NOP
label_2357b4:
    // 0x2357b4: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x2357b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
label_2357b8:
    // 0x2357b8: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2357b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_2357bc:
    // 0x2357bc: 0x72802e28  paddub      $a1, $s4, $zero
    ctx->pc = 0x2357bcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
label_2357c0:
    // 0x2357c0: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x2357c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_2357c4:
    // 0x2357c4: 0xc040bf4  jal         func_102FD0
label_2357c8:
    if (ctx->pc == 0x2357C8u) {
        ctx->pc = 0x2357CCu;
        goto label_2357cc;
    }
    ctx->pc = 0x2357C4u;
    SET_GPR_U32(ctx, 31, 0x2357CCu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x2357CCu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2357CCu) { return; }
    ctx->pc = 0x2357CCu;
label_2357cc:
    // 0x2357cc: 0x3c02c47a  lui         $v0, 0xC47A
    ctx->pc = 0x2357ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50298 << 16));
label_2357d0:
    // 0x2357d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2357d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2357d4:
    // 0x2357d4: 0x0  nop
    ctx->pc = 0x2357d4u;
    // NOP
label_2357d8:
    // 0x2357d8: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x2357d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_2357dc:
    // 0x2357dc: 0x3c074416  lui         $a3, 0x4416
    ctx->pc = 0x2357dcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)17430 << 16));
label_2357e0:
    // 0x2357e0: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x2357e0u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2357e4:
    // 0x2357e4: 0x0  nop
    ctx->pc = 0x2357e4u;
    // NOP
label_2357e8:
    // 0x2357e8: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x2357e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_2357ec:
    // 0x2357ec: 0x3c04447a  lui         $a0, 0x447A
    ctx->pc = 0x2357ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17530 << 16));
label_2357f0:
    // 0x2357f0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2357f0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2357f4:
    // 0x2357f4: 0x0  nop
    ctx->pc = 0x2357f4u;
    // NOP
label_2357f8:
    // 0x2357f8: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x2357f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_2357fc:
    // 0x2357fc: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x2357fcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
label_235800:
    // 0x235800: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x235800u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_235804:
    // 0x235804: 0x0  nop
    ctx->pc = 0x235804u;
    // NOP
label_235808:
    // 0x235808: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x235808u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
label_23580c:
    // 0x23580c: 0x27a20090  addiu       $v0, $sp, 0x90
    ctx->pc = 0x23580cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_235810:
    // 0x235810: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x235810u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_235814:
    // 0x235814: 0x72802e28  paddub      $a1, $s4, $zero
    ctx->pc = 0x235814u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
label_235818:
    // 0x235818: 0x27a20090  addiu       $v0, $sp, 0x90
    ctx->pc = 0x235818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_23581c:
    // 0x23581c: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x23581cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_235820:
    // 0x235820: 0xc040bf4  jal         func_102FD0
label_235824:
    if (ctx->pc == 0x235824u) {
        ctx->pc = 0x235828u;
        goto label_235828;
    }
    ctx->pc = 0x235820u;
    SET_GPR_U32(ctx, 31, 0x235828u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x235828u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x235828u) { return; }
    ctx->pc = 0x235828u;
label_235828:
    // 0x235828: 0x3c07447a  lui         $a3, 0x447A
    ctx->pc = 0x235828u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)17530 << 16));
label_23582c:
    // 0x23582c: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x23582cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_235830:
    // 0x235830: 0x0  nop
    ctx->pc = 0x235830u;
    // NOP
label_235834:
    // 0x235834: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x235834u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_235838:
    // 0x235838: 0x3c084416  lui         $t0, 0x4416
    ctx->pc = 0x235838u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)17430 << 16));
label_23583c:
    // 0x23583c: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x23583cu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_235840:
    // 0x235840: 0x0  nop
    ctx->pc = 0x235840u;
    // NOP
label_235844:
    // 0x235844: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x235844u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_235848:
    // 0x235848: 0x3c09c47a  lui         $t1, 0xC47A
    ctx->pc = 0x235848u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)50298 << 16));
label_23584c:
    // 0x23584c: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x23584cu;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_235850:
    // 0x235850: 0x0  nop
    ctx->pc = 0x235850u;
    // NOP
label_235854:
    // 0x235854: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x235854u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_235858:
    // 0x235858: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x235858u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_23585c:
    // 0x23585c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23585cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_235860:
    // 0x235860: 0x0  nop
    ctx->pc = 0x235860u;
    // NOP
label_235864:
    // 0x235864: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x235864u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
label_235868:
    // 0x235868: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x235868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_23586c:
    // 0x23586c: 0x72802e28  paddub      $a1, $s4, $zero
    ctx->pc = 0x23586cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
label_235870:
    // 0x235870: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x235870u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_235874:
    // 0x235874: 0xc040bf4  jal         func_102FD0
label_235878:
    if (ctx->pc == 0x235878u) {
        ctx->pc = 0x23587Cu;
        goto label_23587c;
    }
    ctx->pc = 0x235874u;
    SET_GPR_U32(ctx, 31, 0x23587Cu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x23587Cu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x23587Cu) { return; }
    ctx->pc = 0x23587Cu;
label_23587c:
    // 0x23587c: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x23587cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_235880:
    // 0x235880: 0x3c04c47a  lui         $a0, 0xC47A
    ctx->pc = 0x235880u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)50298 << 16));
label_235884:
    // 0x235884: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x235884u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_235888:
    // 0x235888: 0x0  nop
    ctx->pc = 0x235888u;
    // NOP
label_23588c:
    // 0x23588c: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x23588cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_235890:
    // 0x235890: 0x3c064416  lui         $a2, 0x4416
    ctx->pc = 0x235890u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17430 << 16));
label_235894:
    // 0x235894: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x235894u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_235898:
    // 0x235898: 0x0  nop
    ctx->pc = 0x235898u;
    // NOP
label_23589c:
    // 0x23589c: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x23589cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
label_2358a0:
    // 0x2358a0: 0x3c02c47a  lui         $v0, 0xC47A
    ctx->pc = 0x2358a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50298 << 16));
label_2358a4:
    // 0x2358a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2358a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2358a8:
    // 0x2358a8: 0x0  nop
    ctx->pc = 0x2358a8u;
    // NOP
label_2358ac:
    // 0x2358ac: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x2358acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_2358b0:
    // 0x2358b0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2358b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2358b4:
    // 0x2358b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2358b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2358b8:
    // 0x2358b8: 0x0  nop
    ctx->pc = 0x2358b8u;
    // NOP
label_2358bc:
    // 0x2358bc: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x2358bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
label_2358c0:
    // 0x2358c0: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x2358c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_2358c4:
    // 0x2358c4: 0x72802e28  paddub      $a1, $s4, $zero
    ctx->pc = 0x2358c4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
label_2358c8:
    // 0x2358c8: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x2358c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_2358cc:
    // 0x2358cc: 0xc040bf4  jal         func_102FD0
label_2358d0:
    if (ctx->pc == 0x2358D0u) {
        ctx->pc = 0x2358D4u;
        goto label_2358d4;
    }
    ctx->pc = 0x2358CCu;
    SET_GPR_U32(ctx, 31, 0x2358D4u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x2358D4u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2358D4u) { return; }
    ctx->pc = 0x2358D4u;
label_2358d4:
    // 0x2358d4: 0x3c11447a  lui         $s1, 0x447A
    ctx->pc = 0x2358d4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)17530 << 16));
label_2358d8:
    // 0x2358d8: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x2358d8u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2358dc:
    // 0x2358dc: 0x0  nop
    ctx->pc = 0x2358dcu;
    // NOP
label_2358e0:
    // 0x2358e0: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x2358e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_2358e4:
    // 0x2358e4: 0x3c04c4af  lui         $a0, 0xC4AF
    ctx->pc = 0x2358e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)50351 << 16));
label_2358e8:
    // 0x2358e8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2358e8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2358ec:
    // 0x2358ec: 0x0  nop
    ctx->pc = 0x2358ecu;
    // NOP
label_2358f0:
    // 0x2358f0: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x2358f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_2358f4:
    // 0x2358f4: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x2358f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
label_2358f8:
    // 0x2358f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2358f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2358fc:
    // 0x2358fc: 0x0  nop
    ctx->pc = 0x2358fcu;
    // NOP
label_235900:
    // 0x235900: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x235900u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_235904:
    // 0x235904: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x235904u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_235908:
    // 0x235908: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x235908u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23590c:
    // 0x23590c: 0x0  nop
    ctx->pc = 0x23590cu;
    // NOP
label_235910:
    // 0x235910: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x235910u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
label_235914:
    // 0x235914: 0x27a700c0  addiu       $a3, $sp, 0xC0
    ctx->pc = 0x235914u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_235918:
    // 0x235918: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x235918u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
label_23591c:
    // 0x23591c: 0x72802e28  paddub      $a1, $s4, $zero
    ctx->pc = 0x23591cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
label_235920:
    // 0x235920: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x235920u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_235924:
    // 0x235924: 0xc040bf4  jal         func_102FD0
label_235928:
    if (ctx->pc == 0x235928u) {
        ctx->pc = 0x23592Cu;
        goto label_23592c;
    }
    ctx->pc = 0x235924u;
    SET_GPR_U32(ctx, 31, 0x23592Cu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x23592Cu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x23592Cu) { return; }
    ctx->pc = 0x23592Cu;
label_23592c:
    // 0x23592c: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x23592cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_235930:
    // 0x235930: 0x3c02c47a  lui         $v0, 0xC47A
    ctx->pc = 0x235930u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50298 << 16));
label_235934:
    // 0x235934: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x235934u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_235938:
    // 0x235938: 0x0  nop
    ctx->pc = 0x235938u;
    // NOP
label_23593c:
    // 0x23593c: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x23593cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_235940:
    // 0x235940: 0x3c02c4af  lui         $v0, 0xC4AF
    ctx->pc = 0x235940u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50351 << 16));
label_235944:
    // 0x235944: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x235944u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_235948:
    // 0x235948: 0x0  nop
    ctx->pc = 0x235948u;
    // NOP
label_23594c:
    // 0x23594c: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x23594cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_235950:
    // 0x235950: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x235950u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
label_235954:
    // 0x235954: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x235954u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_235958:
    // 0x235958: 0x0  nop
    ctx->pc = 0x235958u;
    // NOP
label_23595c:
    // 0x23595c: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x23595cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_235960:
    // 0x235960: 0x3c113f80  lui         $s1, 0x3F80
    ctx->pc = 0x235960u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)16256 << 16));
label_235964:
    // 0x235964: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x235964u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_235968:
    // 0x235968: 0x0  nop
    ctx->pc = 0x235968u;
    // NOP
label_23596c:
    // 0x23596c: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x23596cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
label_235970:
    // 0x235970: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x235970u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_235974:
    // 0x235974: 0x72802e28  paddub      $a1, $s4, $zero
    ctx->pc = 0x235974u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
label_235978:
    // 0x235978: 0x27a600d0  addiu       $a2, $sp, 0xD0
    ctx->pc = 0x235978u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_23597c:
    // 0x23597c: 0xc040bf4  jal         func_102FD0
label_235980:
    if (ctx->pc == 0x235980u) {
        ctx->pc = 0x235984u;
        goto label_235984;
    }
    ctx->pc = 0x23597Cu;
    SET_GPR_U32(ctx, 31, 0x235984u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x235984u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x235984u) { return; }
    ctx->pc = 0x235984u;
label_235984:
    // 0x235984: 0x7040ae28  paddub      $s5, $v0, $zero
    ctx->pc = 0x235984u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_235988:
    // 0x235988: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x235988u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
label_23598c:
    // 0x23598c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23598cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_235990:
    // 0x235990: 0x0  nop
    ctx->pc = 0x235990u;
    // NOP
label_235994:
    // 0x235994: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x235994u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_235998:
    // 0x235998: 0x3c11c4af  lui         $s1, 0xC4AF
    ctx->pc = 0x235998u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)50351 << 16));
label_23599c:
    // 0x23599c: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x23599cu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2359a0:
    // 0x2359a0: 0x0  nop
    ctx->pc = 0x2359a0u;
    // NOP
label_2359a4:
    // 0x2359a4: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x2359a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
label_2359a8:
    // 0x2359a8: 0x3c04c47a  lui         $a0, 0xC47A
    ctx->pc = 0x2359a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)50298 << 16));
label_2359ac:
    // 0x2359ac: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2359acu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2359b0:
    // 0x2359b0: 0x0  nop
    ctx->pc = 0x2359b0u;
    // NOP
label_2359b4:
    // 0x2359b4: 0xe7a000e8  swc1        $f0, 0xE8($sp)
    ctx->pc = 0x2359b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_2359b8:
    // 0x2359b8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2359b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2359bc:
    // 0x2359bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2359bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2359c0:
    // 0x2359c0: 0x0  nop
    ctx->pc = 0x2359c0u;
    // NOP
label_2359c4:
    // 0x2359c4: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x2359c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
label_2359c8:
    // 0x2359c8: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x2359c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_2359cc:
    // 0x2359cc: 0x72802e28  paddub      $a1, $s4, $zero
    ctx->pc = 0x2359ccu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
label_2359d0:
    // 0x2359d0: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x2359d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_2359d4:
    // 0x2359d4: 0xc040bf4  jal         func_102FD0
label_2359d8:
    if (ctx->pc == 0x2359D8u) {
        ctx->pc = 0x2359DCu;
        goto label_2359dc;
    }
    ctx->pc = 0x2359D4u;
    SET_GPR_U32(ctx, 31, 0x2359DCu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x2359DCu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2359DCu) { return; }
    ctx->pc = 0x2359DCu;
label_2359dc:
    // 0x2359dc: 0x3c04c47a  lui         $a0, 0xC47A
    ctx->pc = 0x2359dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)50298 << 16));
label_2359e0:
    // 0x2359e0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2359e0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2359e4:
    // 0x2359e4: 0x0  nop
    ctx->pc = 0x2359e4u;
    // NOP
label_2359e8:
    // 0x2359e8: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x2359e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_2359ec:
    // 0x2359ec: 0x3c04c4af  lui         $a0, 0xC4AF
    ctx->pc = 0x2359ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)50351 << 16));
label_2359f0:
    // 0x2359f0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2359f0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2359f4:
    // 0x2359f4: 0x0  nop
    ctx->pc = 0x2359f4u;
    // NOP
label_2359f8:
    // 0x2359f8: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x2359f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
label_2359fc:
    // 0x2359fc: 0x3c02c47a  lui         $v0, 0xC47A
    ctx->pc = 0x2359fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50298 << 16));
label_235a00:
    // 0x235a00: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x235a00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_235a04:
    // 0x235a04: 0x0  nop
    ctx->pc = 0x235a04u;
    // NOP
label_235a08:
    // 0x235a08: 0xe7a000f8  swc1        $f0, 0xF8($sp)
    ctx->pc = 0x235a08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
label_235a0c:
    // 0x235a0c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x235a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_235a10:
    // 0x235a10: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x235a10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_235a14:
    // 0x235a14: 0x0  nop
    ctx->pc = 0x235a14u;
    // NOP
label_235a18:
    // 0x235a18: 0xe7a000fc  swc1        $f0, 0xFC($sp)
    ctx->pc = 0x235a18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
label_235a1c:
    // 0x235a1c: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x235a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_235a20:
    // 0x235a20: 0x72802e28  paddub      $a1, $s4, $zero
    ctx->pc = 0x235a20u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
label_235a24:
    // 0x235a24: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x235a24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_235a28:
    // 0x235a28: 0xc040bf4  jal         func_102FD0
label_235a2c:
    if (ctx->pc == 0x235A2Cu) {
        ctx->pc = 0x235A30u;
        goto label_235a30;
    }
    ctx->pc = 0x235A28u;
    SET_GPR_U32(ctx, 31, 0x235A30u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x235A30u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x235A30u) { return; }
    ctx->pc = 0x235A30u;
label_235a30:
    // 0x235a30: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x235a30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_235a34:
    // 0x235a34: 0x24661330  addiu       $a2, $v1, 0x1330
    ctx->pc = 0x235a34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_235a38:
    // 0x235a38: 0x8cd10030  lw          $s1, 0x30($a2)
    ctx->pc = 0x235a38u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 48)));
label_235a3c:
    // 0x235a3c: 0x32240800  andi        $a0, $s1, 0x800
    ctx->pc = 0x235a3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)2048);
label_235a40:
    // 0x235a40: 0x10800081  beqz        $a0, . + 4 + (0x81 << 2)
label_235a44:
    if (ctx->pc == 0x235A44u) {
        ctx->pc = 0x235A48u;
        goto label_235a48;
    }
    ctx->pc = 0x235A40u;
    {
        const bool branch_taken_0x235a40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x235a40) {
            ctx->pc = 0x235C48u;
            goto label_235c48;
        }
    }
    ctx->pc = 0x235A48u;
label_235a48:
    // 0x235a48: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x235a48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_235a4c:
    // 0x235a4c: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x235a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_235a50:
    // 0x235a50: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x235a50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_235a54:
    // 0x235a54: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x235a54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_235a58:
    // 0x235a58: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x235a58u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_235a5c:
    // 0x235a5c: 0x8fa60118  lw          $a2, 0x118($sp)
    ctx->pc = 0x235a5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_235a60:
    // 0x235a60: 0xc41021  addu        $v0, $a2, $a0
    ctx->pc = 0x235a60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_235a64:
    // 0x235a64: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x235a64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_235a68:
    // 0x235a68: 0x8c240140  lw          $a0, 0x140($at)
    ctx->pc = 0x235a68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_235a6c:
    // 0x235a6c: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x235a6cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_235a70:
    // 0x235a70: 0x8fa60118  lw          $a2, 0x118($sp)
    ctx->pc = 0x235a70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_235a74:
    // 0x235a74: 0xc53821  addu        $a3, $a2, $a1
    ctx->pc = 0x235a74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_235a78:
    // 0x235a78: 0x8cf3026c  lw          $s3, 0x26C($a3)
    ctx->pc = 0x235a78u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 620)));
label_235a7c:
    // 0x235a7c: 0x2442021c  addiu       $v0, $v0, 0x21C
    ctx->pc = 0x235a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 540));
label_235a80:
    // 0x235a80: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x235a80u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_235a84:
    // 0x235a84: 0x72602e28  paddub      $a1, $s3, $zero
    ctx->pc = 0x235a84u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
label_235a88:
    // 0x235a88: 0x24060800  addiu       $a2, $zero, 0x800
    ctx->pc = 0x235a88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
label_235a8c:
    // 0x235a8c: 0xc06b07c  jal         func_1AC1F0
label_235a90:
    if (ctx->pc == 0x235A90u) {
        ctx->pc = 0x235A94u;
        goto label_235a94;
    }
    ctx->pc = 0x235A8Cu;
    SET_GPR_U32(ctx, 31, 0x235A94u);
    ctx->pc = 0x1AC1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC1F0u, 0x235A8Cu, 0x235A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235A94u;
label_235a94:
    // 0x235a94: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x235a94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_235a98:
    // 0x235a98: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x235a98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_235a9c:
    // 0x235a9c: 0x8c64026c  lw          $a0, 0x26C($v1)
    ctx->pc = 0x235a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 620)));
label_235aa0:
    // 0x235aa0: 0x8c450270  lw          $a1, 0x270($v0)
    ctx->pc = 0x235aa0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 624)));
label_235aa4:
    // 0x235aa4: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x235aa4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_235aa8:
    // 0x235aa8: 0x27a700d0  addiu       $a3, $sp, 0xD0
    ctx->pc = 0x235aa8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_235aac:
    // 0x235aac: 0x27a80080  addiu       $t0, $sp, 0x80
    ctx->pc = 0x235aacu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_235ab0:
    // 0x235ab0: 0x27a90090  addiu       $t1, $sp, 0x90
    ctx->pc = 0x235ab0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_235ab4:
    // 0x235ab4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x235ab4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_235ab8:
    // 0x235ab8: 0x8c2a0140  lw          $t2, 0x140($at)
    ctx->pc = 0x235ab8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_235abc:
    // 0x235abc: 0xc0755b4  jal         func_1D56D0
label_235ac0:
    if (ctx->pc == 0x235AC0u) {
        ctx->pc = 0x235AC4u;
        goto label_235ac4;
    }
    ctx->pc = 0x235ABCu;
    SET_GPR_U32(ctx, 31, 0x235AC4u);
    ctx->pc = 0x1D56D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D56D0u, 0x235ABCu, 0x235AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235AC4u;
label_235ac4:
    // 0x235ac4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x235ac4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_235ac8:
    // 0x235ac8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x235ac8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_235acc:
    // 0x235acc: 0x8c260140  lw          $a2, 0x140($at)
    ctx->pc = 0x235accu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_235ad0:
    // 0x235ad0: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x235ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_235ad4:
    // 0x235ad4: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x235ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_235ad8:
    // 0x235ad8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x235ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_235adc:
    // 0x235adc: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x235adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_235ae0:
    // 0x235ae0: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x235ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_235ae4:
    // 0x235ae4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x235ae4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_235ae8:
    // 0x235ae8: 0x8c330140  lw          $s3, 0x140($at)
    ctx->pc = 0x235ae8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_235aec:
    // 0x235aec: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x235aecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_235af0:
    // 0x235af0: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x235af0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_235af4:
    // 0x235af4: 0x629821  addu        $s3, $v1, $v0
    ctx->pc = 0x235af4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_235af8:
    // 0x235af8: 0x8e65028c  lw          $a1, 0x28C($s3)
    ctx->pc = 0x235af8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 652)));
label_235afc:
    // 0x235afc: 0x2484021c  addiu       $a0, $a0, 0x21C
    ctx->pc = 0x235afcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 540));
label_235b00:
    // 0x235b00: 0x24030800  addiu       $v1, $zero, 0x800
    ctx->pc = 0x235b00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
label_235b04:
    // 0x235b04: 0x70603628  paddub      $a2, $v1, $zero
    ctx->pc = 0x235b04u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_235b08:
    // 0x235b08: 0xc06b07c  jal         func_1AC1F0
label_235b0c:
    if (ctx->pc == 0x235B0Cu) {
        ctx->pc = 0x235B10u;
        goto label_235b10;
    }
    ctx->pc = 0x235B08u;
    SET_GPR_U32(ctx, 31, 0x235B10u);
    ctx->pc = 0x1AC1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC1F0u, 0x235B08u, 0x235B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235B10u;
label_235b10:
    // 0x235b10: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x235b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_235b14:
    // 0x235b14: 0x8fa60118  lw          $a2, 0x118($sp)
    ctx->pc = 0x235b14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_235b18:
    // 0x235b18: 0x8c42028c  lw          $v0, 0x28C($v0)
    ctx->pc = 0x235b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 652)));
label_235b1c:
    // 0x235b1c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x235b1cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_235b20:
    // 0x235b20: 0x8cc50290  lw          $a1, 0x290($a2)
    ctx->pc = 0x235b20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 656)));
label_235b24:
    // 0x235b24: 0x27b300c0  addiu       $s3, $sp, 0xC0
    ctx->pc = 0x235b24u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_235b28:
    // 0x235b28: 0x72603628  paddub      $a2, $s3, $zero
    ctx->pc = 0x235b28u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
label_235b2c:
    // 0x235b2c: 0x27a700e0  addiu       $a3, $sp, 0xE0
    ctx->pc = 0x235b2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_235b30:
    // 0x235b30: 0x27a80080  addiu       $t0, $sp, 0x80
    ctx->pc = 0x235b30u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_235b34:
    // 0x235b34: 0x27a900a0  addiu       $t1, $sp, 0xA0
    ctx->pc = 0x235b34u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_235b38:
    // 0x235b38: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x235b38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_235b3c:
    // 0x235b3c: 0x8c2a0140  lw          $t2, 0x140($at)
    ctx->pc = 0x235b3cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_235b40:
    // 0x235b40: 0xc0755b4  jal         func_1D56D0
label_235b44:
    if (ctx->pc == 0x235B44u) {
        ctx->pc = 0x235B48u;
        goto label_235b48;
    }
    ctx->pc = 0x235B40u;
    SET_GPR_U32(ctx, 31, 0x235B48u);
    ctx->pc = 0x1D56D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D56D0u, 0x235B40u, 0x235B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235B48u;
label_235b48:
    // 0x235b48: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x235b48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_235b4c:
    // 0x235b4c: 0x8c260140  lw          $a2, 0x140($at)
    ctx->pc = 0x235b4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_235b50:
    // 0x235b50: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x235b50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_235b54:
    // 0x235b54: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x235b54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_235b58:
    // 0x235b58: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x235b58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_235b5c:
    // 0x235b5c: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x235b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_235b60:
    // 0x235b60: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x235b60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_235b64:
    // 0x235b64: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x235b64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_235b68:
    // 0x235b68: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x235b68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_235b6c:
    // 0x235b6c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x235b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_235b70:
    // 0x235b70: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x235b70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_235b74:
    // 0x235b74: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x235b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_235b78:
    // 0x235b78: 0x8c450294  lw          $a1, 0x294($v0)
    ctx->pc = 0x235b78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 660)));
label_235b7c:
    // 0x235b7c: 0x2484021c  addiu       $a0, $a0, 0x21C
    ctx->pc = 0x235b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 540));
label_235b80:
    // 0x235b80: 0x24060800  addiu       $a2, $zero, 0x800
    ctx->pc = 0x235b80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
label_235b84:
    // 0x235b84: 0xc06b07c  jal         func_1AC1F0
label_235b88:
    if (ctx->pc == 0x235B88u) {
        ctx->pc = 0x235B8Cu;
        goto label_235b8c;
    }
    ctx->pc = 0x235B84u;
    SET_GPR_U32(ctx, 31, 0x235B8Cu);
    ctx->pc = 0x1AC1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC1F0u, 0x235B84u, 0x235B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235B8Cu;
label_235b8c:
    // 0x235b8c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x235b8cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_235b90:
    // 0x235b90: 0x8fa60118  lw          $a2, 0x118($sp)
    ctx->pc = 0x235b90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_235b94:
    // 0x235b94: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x235b94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_235b98:
    // 0x235b98: 0x8cc40294  lw          $a0, 0x294($a2)
    ctx->pc = 0x235b98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 660)));
label_235b9c:
    // 0x235b9c: 0x8c450298  lw          $a1, 0x298($v0)
    ctx->pc = 0x235b9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 664)));
label_235ba0:
    // 0x235ba0: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x235ba0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_235ba4:
    // 0x235ba4: 0x27a700d0  addiu       $a3, $sp, 0xD0
    ctx->pc = 0x235ba4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_235ba8:
    // 0x235ba8: 0x27b300b0  addiu       $s3, $sp, 0xB0
    ctx->pc = 0x235ba8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_235bac:
    // 0x235bac: 0x72604628  paddub      $t0, $s3, $zero
    ctx->pc = 0x235bacu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
label_235bb0:
    // 0x235bb0: 0x27a20090  addiu       $v0, $sp, 0x90
    ctx->pc = 0x235bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_235bb4:
    // 0x235bb4: 0x70404e28  paddub      $t1, $v0, $zero
    ctx->pc = 0x235bb4u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_235bb8:
    // 0x235bb8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x235bb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_235bbc:
    // 0x235bbc: 0x8c2a0140  lw          $t2, 0x140($at)
    ctx->pc = 0x235bbcu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_235bc0:
    // 0x235bc0: 0xc0755b4  jal         func_1D56D0
label_235bc4:
    if (ctx->pc == 0x235BC4u) {
        ctx->pc = 0x235BC8u;
        goto label_235bc8;
    }
    ctx->pc = 0x235BC0u;
    SET_GPR_U32(ctx, 31, 0x235BC8u);
    ctx->pc = 0x1D56D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D56D0u, 0x235BC0u, 0x235BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235BC8u;
label_235bc8:
    // 0x235bc8: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x235bc8u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_235bcc:
    // 0x235bcc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x235bccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_235bd0:
    // 0x235bd0: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x235bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_235bd4:
    // 0x235bd4: 0x2b040  sll         $s6, $v0, 1
    ctx->pc = 0x235bd4u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_235bd8:
    // 0x235bd8: 0x2c21821  addu        $v1, $s6, $v0
    ctx->pc = 0x235bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
label_235bdc:
    // 0x235bdc: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x235bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_235be0:
    // 0x235be0: 0x8fa50118  lw          $a1, 0x118($sp)
    ctx->pc = 0x235be0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_235be4:
    // 0x235be4: 0xa22021  addu        $a0, $a1, $v0
    ctx->pc = 0x235be4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_235be8:
    // 0x235be8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x235be8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_235bec:
    // 0x235bec: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x235becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_235bf0:
    // 0x235bf0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x235bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_235bf4:
    // 0x235bf4: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x235bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_235bf8:
    // 0x235bf8: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x235bf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_235bfc:
    // 0x235bfc: 0x8cc2029c  lw          $v0, 0x29C($a2)
    ctx->pc = 0x235bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 668)));
label_235c00:
    // 0x235c00: 0x2485021c  addiu       $a1, $a0, 0x21C
    ctx->pc = 0x235c00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 540));
label_235c04:
    // 0x235c04: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x235c04u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_235c08:
    // 0x235c08: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x235c08u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_235c0c:
    // 0x235c0c: 0x24060800  addiu       $a2, $zero, 0x800
    ctx->pc = 0x235c0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
label_235c10:
    // 0x235c10: 0xc06b07c  jal         func_1AC1F0
label_235c14:
    if (ctx->pc == 0x235C14u) {
        ctx->pc = 0x235C18u;
        goto label_235c18;
    }
    ctx->pc = 0x235C10u;
    SET_GPR_U32(ctx, 31, 0x235C18u);
    ctx->pc = 0x1AC1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC1F0u, 0x235C10u, 0x235C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235C18u;
label_235c18:
    // 0x235c18: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x235c18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_235c1c:
    // 0x235c1c: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x235c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_235c20:
    // 0x235c20: 0x8c84029c  lw          $a0, 0x29C($a0)
    ctx->pc = 0x235c20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 668)));
label_235c24:
    // 0x235c24: 0x8c4502a0  lw          $a1, 0x2A0($v0)
    ctx->pc = 0x235c24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 672)));
label_235c28:
    // 0x235c28: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x235c28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_235c2c:
    // 0x235c2c: 0x27a700e0  addiu       $a3, $sp, 0xE0
    ctx->pc = 0x235c2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_235c30:
    // 0x235c30: 0x27a800b0  addiu       $t0, $sp, 0xB0
    ctx->pc = 0x235c30u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_235c34:
    // 0x235c34: 0x27a900a0  addiu       $t1, $sp, 0xA0
    ctx->pc = 0x235c34u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_235c38:
    // 0x235c38: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x235c38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_235c3c:
    // 0x235c3c: 0x8c2a0140  lw          $t2, 0x140($at)
    ctx->pc = 0x235c3cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_235c40:
    // 0x235c40: 0xc0755b4  jal         func_1D56D0
label_235c44:
    if (ctx->pc == 0x235C44u) {
        ctx->pc = 0x235C48u;
        goto label_235c48;
    }
    ctx->pc = 0x235C40u;
    SET_GPR_U32(ctx, 31, 0x235C48u);
    ctx->pc = 0x1D56D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D56D0u, 0x235C40u, 0x235C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235C48u;
label_235c48:
    // 0x235c48: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x235c48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_235c4c:
    // 0x235c4c: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x235c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_235c50:
    // 0x235c50: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x235c50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_235c54:
    // 0x235c54: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x235c54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_235c58:
    // 0x235c58: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x235c58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_235c5c:
    // 0x235c5c: 0x8e12027c  lw          $s2, 0x27C($s0)
    ctx->pc = 0x235c5cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 636)));
label_235c60:
    // 0x235c60: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x235c60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_235c64:
    // 0x235c64: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x235c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_235c68:
    // 0x235c68: 0x22040  sll         $a0, $v0, 1
    ctx->pc = 0x235c68u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_235c6c:
    // 0x235c6c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x235c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_235c70:
    // 0x235c70: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x235c70u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_235c74:
    // 0x235c74: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x235c74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_235c78:
    // 0x235c78: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x235c78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_235c7c:
    // 0x235c7c: 0x8e500008  lw          $s0, 0x8($s2)
    ctx->pc = 0x235c7cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_235c80:
    // 0x235c80: 0x2444021c  addiu       $a0, $v0, 0x21C
    ctx->pc = 0x235c80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 540));
label_235c84:
    // 0x235c84: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x235c84u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_235c88:
    // 0x235c88: 0x8e46000c  lw          $a2, 0xC($s2)
    ctx->pc = 0x235c88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_235c8c:
    // 0x235c8c: 0xc06b07c  jal         func_1AC1F0
label_235c90:
    if (ctx->pc == 0x235C90u) {
        ctx->pc = 0x235C94u;
        goto label_235c94;
    }
    ctx->pc = 0x235C8Cu;
    SET_GPR_U32(ctx, 31, 0x235C94u);
    ctx->pc = 0x1AC1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC1F0u, 0x235C8Cu, 0x235C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235C94u;
label_235c94:
    // 0x235c94: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x235c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_235c98:
    // 0x235c98: 0x8c50027c  lw          $s0, 0x27C($v0)
    ctx->pc = 0x235c98u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 636)));
label_235c9c:
    // 0x235c9c: 0x72009628  paddub      $s2, $s0, $zero
    ctx->pc = 0x235c9cu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_235ca0:
    // 0x235ca0: 0x3c07420c  lui         $a3, 0x420C
    ctx->pc = 0x235ca0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16908 << 16));
label_235ca4:
    // 0x235ca4: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x235ca4u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_235ca8:
    // 0x235ca8: 0x0  nop
    ctx->pc = 0x235ca8u;
    // NOP
label_235cac:
    // 0x235cac: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x235cacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_235cb0:
    // 0x235cb0: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x235cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_235cb4:
    // 0x235cb4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x235cb4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_235cb8:
    // 0x235cb8: 0x0  nop
    ctx->pc = 0x235cb8u;
    // NOP
label_235cbc:
    // 0x235cbc: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x235cbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_235cc0:
    // 0x235cc0: 0x3c024307  lui         $v0, 0x4307
    ctx->pc = 0x235cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17159 << 16));
label_235cc4:
    // 0x235cc4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x235cc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_235cc8:
    // 0x235cc8: 0x0  nop
    ctx->pc = 0x235cc8u;
    // NOP
label_235ccc:
    // 0x235ccc: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x235cccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_235cd0:
    // 0x235cd0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x235cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_235cd4:
    // 0x235cd4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x235cd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_235cd8:
    // 0x235cd8: 0x0  nop
    ctx->pc = 0x235cd8u;
    // NOP
label_235cdc:
    // 0x235cdc: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x235cdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
label_235ce0:
    // 0x235ce0: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x235ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_235ce4:
    // 0x235ce4: 0x26850940  addiu       $a1, $s4, 0x940
    ctx->pc = 0x235ce4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 2368));
label_235ce8:
    // 0x235ce8: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x235ce8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_235cec:
    // 0x235cec: 0xc040bf4  jal         func_102FD0
label_235cf0:
    if (ctx->pc == 0x235CF0u) {
        ctx->pc = 0x235CF4u;
        goto label_235cf4;
    }
    ctx->pc = 0x235CECu;
    SET_GPR_U32(ctx, 31, 0x235CF4u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x235CF4u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x235CF4u) { return; }
    ctx->pc = 0x235CF4u;
label_235cf4:
    // 0x235cf4: 0x3c103f80  lui         $s0, 0x3F80
    ctx->pc = 0x235cf4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)16256 << 16));
label_235cf8:
    // 0x235cf8: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x235cf8u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_235cfc:
    // 0x235cfc: 0x0  nop
    ctx->pc = 0x235cfcu;
    // NOP
label_235d00:
    // 0x235d00: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x235d00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
label_235d04:
    // 0x235d04: 0x3c03420c  lui         $v1, 0x420C
    ctx->pc = 0x235d04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16908 << 16));
label_235d08:
    // 0x235d08: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x235d08u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_235d0c:
    // 0x235d0c: 0x0  nop
    ctx->pc = 0x235d0cu;
    // NOP
label_235d10:
    // 0x235d10: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x235d10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_235d14:
    // 0x235d14: 0x3c02c160  lui         $v0, 0xC160
    ctx->pc = 0x235d14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49504 << 16));
label_235d18:
    // 0x235d18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x235d18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_235d1c:
    // 0x235d1c: 0x0  nop
    ctx->pc = 0x235d1cu;
    // NOP
label_235d20:
    // 0x235d20: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x235d20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_235d24:
    // 0x235d24: 0x3c024307  lui         $v0, 0x4307
    ctx->pc = 0x235d24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17159 << 16));
label_235d28:
    // 0x235d28: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x235d28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_235d2c:
    // 0x235d2c: 0x0  nop
    ctx->pc = 0x235d2cu;
    // NOP
label_235d30:
    // 0x235d30: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x235d30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_235d34:
    // 0x235d34: 0x3c153f80  lui         $s5, 0x3F80
    ctx->pc = 0x235d34u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)16256 << 16));
label_235d38:
    // 0x235d38: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x235d38u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_235d3c:
    // 0x235d3c: 0x0  nop
    ctx->pc = 0x235d3cu;
    // NOP
label_235d40:
    // 0x235d40: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x235d40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
label_235d44:
    // 0x235d44: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x235d44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_235d48:
    // 0x235d48: 0x26850940  addiu       $a1, $s4, 0x940
    ctx->pc = 0x235d48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 2368));
label_235d4c:
    // 0x235d4c: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x235d4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_235d50:
    // 0x235d50: 0xc040bf4  jal         func_102FD0
label_235d54:
    if (ctx->pc == 0x235D54u) {
        ctx->pc = 0x235D58u;
        goto label_235d58;
    }
    ctx->pc = 0x235D50u;
    SET_GPR_U32(ctx, 31, 0x235D58u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x235D58u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x235D58u) { return; }
    ctx->pc = 0x235D58u;
label_235d58:
    // 0x235d58: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x235d58u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_235d5c:
    // 0x235d5c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x235d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_235d60:
    // 0x235d60: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x235d60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_235d64:
    // 0x235d64: 0x0  nop
    ctx->pc = 0x235d64u;
    // NOP
label_235d68:
    // 0x235d68: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x235d68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
label_235d6c:
    // 0x235d6c: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x235d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_235d70:
    // 0x235d70: 0x8c44027c  lw          $a0, 0x27C($v0)
    ctx->pc = 0x235d70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 636)));
label_235d74:
    // 0x235d74: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x235d74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_235d78:
    // 0x235d78: 0x8c450280  lw          $a1, 0x280($v0)
    ctx->pc = 0x235d78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 640)));
label_235d7c:
    // 0x235d7c: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x235d7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_235d80:
    // 0x235d80: 0x27a70080  addiu       $a3, $sp, 0x80
    ctx->pc = 0x235d80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_235d84:
    // 0x235d84: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x235d84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_235d88:
    // 0x235d88: 0x70404628  paddub      $t0, $v0, $zero
    ctx->pc = 0x235d88u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_235d8c:
    // 0x235d8c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x235d8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_235d90:
    // 0x235d90: 0x8c320140  lw          $s2, 0x140($at)
    ctx->pc = 0x235d90u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_235d94:
    // 0x235d94: 0x72404e28  paddub      $t1, $s2, $zero
    ctx->pc = 0x235d94u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
label_235d98:
    // 0x235d98: 0xc075378  jal         func_1D4DE0
label_235d9c:
    if (ctx->pc == 0x235D9Cu) {
        ctx->pc = 0x235DA0u;
        goto label_235da0;
    }
    ctx->pc = 0x235D98u;
    SET_GPR_U32(ctx, 31, 0x235DA0u);
    ctx->pc = 0x1D4DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4DE0u, 0x235D98u, 0x235DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235DA0u;
label_235da0:
    // 0x235da0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x235da0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_235da4:
    // 0x235da4: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x235da4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_235da8:
    // 0x235da8: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x235da8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_235dac:
    // 0x235dac: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x235dacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_235db0:
    // 0x235db0: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x235db0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_235db4:
    // 0x235db4: 0x8c420284  lw          $v0, 0x284($v0)
    ctx->pc = 0x235db4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 644)));
label_235db8:
    // 0x235db8: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x235db8u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_235dbc:
    // 0x235dbc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x235dbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_235dc0:
    // 0x235dc0: 0x8c250140  lw          $a1, 0x140($at)
    ctx->pc = 0x235dc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_235dc4:
    // 0x235dc4: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x235dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_235dc8:
    // 0x235dc8: 0x853021  addu        $a2, $a0, $a1
    ctx->pc = 0x235dc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_235dcc:
    // 0x235dcc: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x235dccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_235dd0:
    // 0x235dd0: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x235dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_235dd4:
    // 0x235dd4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x235dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_235dd8:
    // 0x235dd8: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x235dd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_235ddc:
    // 0x235ddc: 0x2442021c  addiu       $v0, $v0, 0x21C
    ctx->pc = 0x235ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 540));
label_235de0:
    // 0x235de0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x235de0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_235de4:
    // 0x235de4: 0x8e46000c  lw          $a2, 0xC($s2)
    ctx->pc = 0x235de4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_235de8:
    // 0x235de8: 0xc06b07c  jal         func_1AC1F0
label_235dec:
    if (ctx->pc == 0x235DECu) {
        ctx->pc = 0x235DF0u;
        goto label_235df0;
    }
    ctx->pc = 0x235DE8u;
    SET_GPR_U32(ctx, 31, 0x235DF0u);
    ctx->pc = 0x1AC1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC1F0u, 0x235DE8u, 0x235DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235DF0u;
label_235df0:
    // 0x235df0: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x235df0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_235df4:
    // 0x235df4: 0x8fa60118  lw          $a2, 0x118($sp)
    ctx->pc = 0x235df4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_235df8:
    // 0x235df8: 0x8cc20284  lw          $v0, 0x284($a2)
    ctx->pc = 0x235df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 644)));
label_235dfc:
    // 0x235dfc: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x235dfcu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_235e00:
    // 0x235e00: 0x3c02c20c  lui         $v0, 0xC20C
    ctx->pc = 0x235e00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49676 << 16));
label_235e04:
    // 0x235e04: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x235e04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_235e08:
    // 0x235e08: 0x0  nop
    ctx->pc = 0x235e08u;
    // NOP
label_235e0c:
    // 0x235e0c: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x235e0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_235e10:
    // 0x235e10: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x235e10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
label_235e14:
    // 0x235e14: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x235e14u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_235e18:
    // 0x235e18: 0x0  nop
    ctx->pc = 0x235e18u;
    // NOP
label_235e1c:
    // 0x235e1c: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x235e1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_235e20:
    // 0x235e20: 0x3c024307  lui         $v0, 0x4307
    ctx->pc = 0x235e20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17159 << 16));
label_235e24:
    // 0x235e24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x235e24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_235e28:
    // 0x235e28: 0x0  nop
    ctx->pc = 0x235e28u;
    // NOP
label_235e2c:
    // 0x235e2c: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x235e2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_235e30:
    // 0x235e30: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x235e30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_235e34:
    // 0x235e34: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x235e34u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_235e38:
    // 0x235e38: 0x0  nop
    ctx->pc = 0x235e38u;
    // NOP
label_235e3c:
    // 0x235e3c: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x235e3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
label_235e40:
    // 0x235e40: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x235e40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_235e44:
    // 0x235e44: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x235e44u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_235e48:
    // 0x235e48: 0x26870940  addiu       $a3, $s4, 0x940
    ctx->pc = 0x235e48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 2368));
label_235e4c:
    // 0x235e4c: 0x70e02e28  paddub      $a1, $a3, $zero
    ctx->pc = 0x235e4cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
label_235e50:
    // 0x235e50: 0x27a80080  addiu       $t0, $sp, 0x80
    ctx->pc = 0x235e50u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_235e54:
    // 0x235e54: 0x71003628  paddub      $a2, $t0, $zero
    ctx->pc = 0x235e54u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
label_235e58:
    // 0x235e58: 0xc040bf4  jal         func_102FD0
label_235e5c:
    if (ctx->pc == 0x235E5Cu) {
        ctx->pc = 0x235E60u;
        goto label_235e60;
    }
    ctx->pc = 0x235E58u;
    SET_GPR_U32(ctx, 31, 0x235E60u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x235E60u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x235E60u) { return; }
    ctx->pc = 0x235E60u;
label_235e60:
    // 0x235e60: 0x70404e28  paddub      $t1, $v0, $zero
    ctx->pc = 0x235e60u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_235e64:
    // 0x235e64: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x235e64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_235e68:
    // 0x235e68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x235e68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_235e6c:
    // 0x235e6c: 0x0  nop
    ctx->pc = 0x235e6cu;
    // NOP
label_235e70:
    // 0x235e70: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x235e70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
label_235e74:
    // 0x235e74: 0x3c02c20c  lui         $v0, 0xC20C
    ctx->pc = 0x235e74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49676 << 16));
label_235e78:
    // 0x235e78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x235e78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_235e7c:
    // 0x235e7c: 0x0  nop
    ctx->pc = 0x235e7cu;
    // NOP
label_235e80:
    // 0x235e80: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x235e80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_235e84:
    // 0x235e84: 0x3c02c160  lui         $v0, 0xC160
    ctx->pc = 0x235e84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49504 << 16));
label_235e88:
    // 0x235e88: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x235e88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_235e8c:
    // 0x235e8c: 0x0  nop
    ctx->pc = 0x235e8cu;
    // NOP
label_235e90:
    // 0x235e90: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x235e90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_235e94:
    // 0x235e94: 0x3c024307  lui         $v0, 0x4307
    ctx->pc = 0x235e94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17159 << 16));
label_235e98:
    // 0x235e98: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x235e98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_235e9c:
    // 0x235e9c: 0x0  nop
    ctx->pc = 0x235e9cu;
    // NOP
label_235ea0:
    // 0x235ea0: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x235ea0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_235ea4:
    // 0x235ea4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x235ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_235ea8:
    // 0x235ea8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x235ea8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_235eac:
    // 0x235eac: 0x0  nop
    ctx->pc = 0x235eacu;
    // NOP
label_235eb0:
    // 0x235eb0: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x235eb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
label_235eb4:
    // 0x235eb4: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x235eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_235eb8:
    // 0x235eb8: 0x26860940  addiu       $a2, $s4, 0x940
    ctx->pc = 0x235eb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 2368));
label_235ebc:
    // 0x235ebc: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x235ebcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_235ec0:
    // 0x235ec0: 0x27a20090  addiu       $v0, $sp, 0x90
    ctx->pc = 0x235ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_235ec4:
    // 0x235ec4: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x235ec4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_235ec8:
    // 0x235ec8: 0xc040bf4  jal         func_102FD0
label_235ecc:
    if (ctx->pc == 0x235ECCu) {
        ctx->pc = 0x235ED0u;
        goto label_235ed0;
    }
    ctx->pc = 0x235EC8u;
    SET_GPR_U32(ctx, 31, 0x235ED0u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x235ED0u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x235ED0u) { return; }
    ctx->pc = 0x235ED0u;
label_235ed0:
    // 0x235ed0: 0x3c073f80  lui         $a3, 0x3F80
    ctx->pc = 0x235ed0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16256 << 16));
label_235ed4:
    // 0x235ed4: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x235ed4u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_235ed8:
    // 0x235ed8: 0x0  nop
    ctx->pc = 0x235ed8u;
    // NOP
label_235edc:
    // 0x235edc: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x235edcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
label_235ee0:
    // 0x235ee0: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x235ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_235ee4:
    // 0x235ee4: 0x8c860284  lw          $a2, 0x284($a0)
    ctx->pc = 0x235ee4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 644)));
label_235ee8:
    // 0x235ee8: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x235ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_235eec:
    // 0x235eec: 0x8c420288  lw          $v0, 0x288($v0)
    ctx->pc = 0x235eecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 648)));
label_235ef0:
    // 0x235ef0: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x235ef0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_235ef4:
    // 0x235ef4: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x235ef4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_235ef8:
    // 0x235ef8: 0x27a20090  addiu       $v0, $sp, 0x90
    ctx->pc = 0x235ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_235efc:
    // 0x235efc: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x235efcu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_235f00:
    // 0x235f00: 0x27a70080  addiu       $a3, $sp, 0x80
    ctx->pc = 0x235f00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_235f04:
    // 0x235f04: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x235f04u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_235f08:
    // 0x235f08: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x235f08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_235f0c:
    // 0x235f0c: 0x8c290140  lw          $t1, 0x140($at)
    ctx->pc = 0x235f0cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_235f10:
    // 0x235f10: 0xc075378  jal         func_1D4DE0
label_235f14:
    if (ctx->pc == 0x235F14u) {
        ctx->pc = 0x235F18u;
        goto label_235f18;
    }
    ctx->pc = 0x235F10u;
    SET_GPR_U32(ctx, 31, 0x235F18u);
    ctx->pc = 0x1D4DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4DE0u, 0x235F10u, 0x235F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235F18u;
label_235f18:
    // 0x235f18: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x235f18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_235f1c:
    // 0x235f1c: 0x8c240140  lw          $a0, 0x140($at)
    ctx->pc = 0x235f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_235f20:
    // 0x235f20: 0x43040  sll         $a2, $a0, 1
    ctx->pc = 0x235f20u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_235f24:
    // 0x235f24: 0xc43821  addu        $a3, $a2, $a0
    ctx->pc = 0x235f24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_235f28:
    // 0x235f28: 0x72080  sll         $a0, $a3, 2
    ctx->pc = 0x235f28u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_235f2c:
    // 0x235f2c: 0x8fa60118  lw          $a2, 0x118($sp)
    ctx->pc = 0x235f2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_235f30:
    // 0x235f30: 0xc41021  addu        $v0, $a2, $a0
    ctx->pc = 0x235f30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_235f34:
    // 0x235f34: 0x2442021c  addiu       $v0, $v0, 0x21C
    ctx->pc = 0x235f34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 540));
label_235f38:
    // 0x235f38: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x235f38u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_235f3c:
    // 0x235f3c: 0xc06b0d4  jal         func_1AC350
label_235f40:
    if (ctx->pc == 0x235F40u) {
        ctx->pc = 0x235F44u;
        goto label_235f44;
    }
    ctx->pc = 0x235F3Cu;
    SET_GPR_U32(ctx, 31, 0x235F44u);
    ctx->pc = 0x1AC350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC350u, 0x235F3Cu, 0x235F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235F44u;
label_235f44:
    // 0x235f44: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x235f44u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_235f48:
    // 0x235f48: 0x8fa60118  lw          $a2, 0x118($sp)
    ctx->pc = 0x235f48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_235f4c:
    // 0x235f4c: 0x8cc20058  lw          $v0, 0x58($a2)
    ctx->pc = 0x235f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 88)));
label_235f50:
    // 0x235f50: 0x24510120  addiu       $s1, $v0, 0x120
    ctx->pc = 0x235f50u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
label_235f54:
    // 0x235f54: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x235f54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_235f58:
    // 0x235f58: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x235f58u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_235f5c:
    // 0x235f5c: 0xc079140  jal         func_1E4500
label_235f60:
    if (ctx->pc == 0x235F60u) {
        ctx->pc = 0x235F64u;
        goto label_235f64;
    }
    ctx->pc = 0x235F5Cu;
    SET_GPR_U32(ctx, 31, 0x235F64u);
    ctx->pc = 0x1E4500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4500u, 0x235F5Cu, 0x235F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235F64u;
label_235f64:
    // 0x235f64: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x235f64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_235f68:
    // 0x235f68: 0x8c470058  lw          $a3, 0x58($v0)
    ctx->pc = 0x235f68u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
label_235f6c:
    // 0x235f6c: 0x24e601b0  addiu       $a2, $a3, 0x1B0
    ctx->pc = 0x235f6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 432));
label_235f70:
    // 0x235f70: 0x70c08e28  paddub      $s1, $a2, $zero
    ctx->pc = 0x235f70u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_235f74:
    // 0x235f74: 0x8fa60118  lw          $a2, 0x118($sp)
    ctx->pc = 0x235f74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_235f78:
    // 0x235f78: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x235f78u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_235f7c:
    // 0x235f7c: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x235f7cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_235f80:
    // 0x235f80: 0xc079140  jal         func_1E4500
label_235f84:
    if (ctx->pc == 0x235F84u) {
        ctx->pc = 0x235F88u;
        goto label_235f88;
    }
    ctx->pc = 0x235F80u;
    SET_GPR_U32(ctx, 31, 0x235F88u);
    ctx->pc = 0x1E4500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4500u, 0x235F80u, 0x235F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235F88u;
label_235f88:
    // 0x235f88: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x235f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_235f8c:
    // 0x235f8c: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x235f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
label_235f90:
    // 0x235f90: 0x245105a0  addiu       $s1, $v0, 0x5A0
    ctx->pc = 0x235f90u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 1440));
label_235f94:
    // 0x235f94: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x235f94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_235f98:
    // 0x235f98: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x235f98u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_235f9c:
    // 0x235f9c: 0xc079140  jal         func_1E4500
label_235fa0:
    if (ctx->pc == 0x235FA0u) {
        ctx->pc = 0x235FA4u;
        goto label_235fa4;
    }
    ctx->pc = 0x235F9Cu;
    SET_GPR_U32(ctx, 31, 0x235FA4u);
    ctx->pc = 0x1E4500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4500u, 0x235F9Cu, 0x235FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235FA4u;
label_235fa4:
    // 0x235fa4: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x235fa4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_235fa8:
    // 0x235fa8: 0x8fb50118  lw          $s5, 0x118($sp)
    ctx->pc = 0x235fa8u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_235fac:
    // 0x235fac: 0x8ea20058  lw          $v0, 0x58($s5)
    ctx->pc = 0x235facu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 88)));
label_235fb0:
    // 0x235fb0: 0x24510630  addiu       $s1, $v0, 0x630
    ctx->pc = 0x235fb0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 1584));
label_235fb4:
    // 0x235fb4: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x235fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_235fb8:
    // 0x235fb8: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x235fb8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_235fbc:
    // 0x235fbc: 0xc079140  jal         func_1E4500
label_235fc0:
    if (ctx->pc == 0x235FC0u) {
        ctx->pc = 0x235FC4u;
        goto label_235fc4;
    }
    ctx->pc = 0x235FBCu;
    SET_GPR_U32(ctx, 31, 0x235FC4u);
    ctx->pc = 0x1E4500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4500u, 0x235FBCu, 0x235FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235FC4u;
label_235fc4:
    // 0x235fc4: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x235fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_235fc8:
    // 0x235fc8: 0x8c860058  lw          $a2, 0x58($a0)
    ctx->pc = 0x235fc8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_235fcc:
    // 0x235fcc: 0x24c203f0  addiu       $v0, $a2, 0x3F0
    ctx->pc = 0x235fccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1008));
label_235fd0:
    // 0x235fd0: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x235fd0u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_235fd4:
    // 0x235fd4: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x235fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_235fd8:
    // 0x235fd8: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x235fd8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_235fdc:
    // 0x235fdc: 0xc079140  jal         func_1E4500
label_235fe0:
    if (ctx->pc == 0x235FE0u) {
        ctx->pc = 0x235FE4u;
        goto label_235fe4;
    }
    ctx->pc = 0x235FDCu;
    SET_GPR_U32(ctx, 31, 0x235FE4u);
    ctx->pc = 0x1E4500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4500u, 0x235FDCu, 0x235FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235FE4u;
label_235fe4:
    // 0x235fe4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x235fe4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_235fe8:
    // 0x235fe8: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x235fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_235fec:
    // 0x235fec: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x235fecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
label_235ff0:
    // 0x235ff0: 0x24440510  addiu       $a0, $v0, 0x510
    ctx->pc = 0x235ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1296));
label_235ff4:
    // 0x235ff4: 0x70808e28  paddub      $s1, $a0, $zero
    ctx->pc = 0x235ff4u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
label_235ff8:
    // 0x235ff8: 0x8fa60118  lw          $a2, 0x118($sp)
    ctx->pc = 0x235ff8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_235ffc:
    // 0x235ffc: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x235ffcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_236000:
    // 0x236000: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x236000u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_236004:
    // 0x236004: 0xc079140  jal         func_1E4500
label_236008:
    if (ctx->pc == 0x236008u) {
        ctx->pc = 0x23600Cu;
        goto label_23600c;
    }
    ctx->pc = 0x236004u;
    SET_GPR_U32(ctx, 31, 0x23600Cu);
    ctx->pc = 0x1E4500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4500u, 0x236004u, 0x23600Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23600Cu;
label_23600c:
    // 0x23600c: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x23600cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_236010:
    // 0x236010: 0x8c660058  lw          $a2, 0x58($v1)
    ctx->pc = 0x236010u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
label_236014:
    // 0x236014: 0x24d102d0  addiu       $s1, $a2, 0x2D0
    ctx->pc = 0x236014u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), 720));
label_236018:
    // 0x236018: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x236018u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_23601c:
    // 0x23601c: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x23601cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_236020:
    // 0x236020: 0xc079140  jal         func_1E4500
label_236024:
    if (ctx->pc == 0x236024u) {
        ctx->pc = 0x236028u;
        goto label_236028;
    }
    ctx->pc = 0x236020u;
    SET_GPR_U32(ctx, 31, 0x236028u);
    ctx->pc = 0x1E4500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4500u, 0x236020u, 0x236028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236028u;
label_236028:
    // 0x236028: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x236028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_23602c:
    // 0x23602c: 0x8c650058  lw          $a1, 0x58($v1)
    ctx->pc = 0x23602cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
label_236030:
    // 0x236030: 0x24a40750  addiu       $a0, $a1, 0x750
    ctx->pc = 0x236030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 1872));
label_236034:
    // 0x236034: 0x70808e28  paddub      $s1, $a0, $zero
    ctx->pc = 0x236034u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
label_236038:
    // 0x236038: 0x8fa60118  lw          $a2, 0x118($sp)
    ctx->pc = 0x236038u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_23603c:
    // 0x23603c: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x23603cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_236040:
    // 0x236040: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x236040u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_236044:
    // 0x236044: 0xc079140  jal         func_1E4500
label_236048:
    if (ctx->pc == 0x236048u) {
        ctx->pc = 0x23604Cu;
        goto label_23604c;
    }
    ctx->pc = 0x236044u;
    SET_GPR_U32(ctx, 31, 0x23604Cu);
    ctx->pc = 0x1E4500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4500u, 0x236044u, 0x23604Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23604Cu;
label_23604c:
    // 0x23604c: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x23604cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_236050:
    // 0x236050: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x236050u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_236054:
    // 0x236054: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x236054u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_236058:
    // 0x236058: 0x24070009  addiu       $a3, $zero, 0x9
    ctx->pc = 0x236058u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_23605c:
    // 0x23605c: 0xc07e3d0  jal         func_1F8F40
label_236060:
    if (ctx->pc == 0x236060u) {
        ctx->pc = 0x236064u;
        goto label_236064;
    }
    ctx->pc = 0x23605Cu;
    SET_GPR_U32(ctx, 31, 0x236064u);
    ctx->pc = 0x1F8F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8F40u, 0x23605Cu, 0x236064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236064u;
label_236064:
    // 0x236064: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x236064u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_236068:
    // 0x236068: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x236068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_23606c:
    // 0x23606c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x23606cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_236070:
    // 0x236070: 0xc08ff8c  jal         func_23FE30
label_236074:
    if (ctx->pc == 0x236074u) {
        ctx->pc = 0x236078u;
        goto label_236078;
    }
    ctx->pc = 0x236070u;
    SET_GPR_U32(ctx, 31, 0x236078u);
    ctx->pc = 0x23FE30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FE30u, 0x236070u, 0x236078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236078u;
label_236078:
    // 0x236078: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x236078u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_23607c:
    // 0x23607c: 0x7bbf0070  lq          $ra, 0x70($sp)
    ctx->pc = 0x23607cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_236080:
    // 0x236080: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x236080u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_236084:
    // 0x236084: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x236084u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_236088:
    // 0x236088: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x236088u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_23608c:
    // 0x23608c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x23608cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_236090:
    // 0x236090: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x236090u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_236094:
    // 0x236094: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x236094u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_236098:
    // 0x236098: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x236098u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_23609c:
    // 0x23609c: 0x27bd0120  addiu       $sp, $sp, 0x120
    ctx->pc = 0x23609cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_2360a0:
    // 0x2360a0: 0x3e00008  jr          $ra
label_2360a4:
    if (ctx->pc == 0x2360A4u) {
        ctx->pc = 0x2360A8u;
        goto label_fallthrough_0x2360a0;
    }
    ctx->pc = 0x2360A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2360A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2360a0:
    ctx->pc = 0x2360A8u;
}
