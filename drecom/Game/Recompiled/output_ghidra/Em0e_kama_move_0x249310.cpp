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

// Function: Em0e_kama_move
// Address: 0x249310 - 0x24abb0
void Em0e_kama_move_0x249310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0e_kama_move_0x249310");
#endif

    switch (ctx->pc) {
        case 0x249310u: goto label_249310;
        case 0x249314u: goto label_249314;
        case 0x249318u: goto label_249318;
        case 0x24931cu: goto label_24931c;
        case 0x249320u: goto label_249320;
        case 0x249324u: goto label_249324;
        case 0x249328u: goto label_249328;
        case 0x24932cu: goto label_24932c;
        case 0x249330u: goto label_249330;
        case 0x249334u: goto label_249334;
        case 0x249338u: goto label_249338;
        case 0x24933cu: goto label_24933c;
        case 0x249340u: goto label_249340;
        case 0x249344u: goto label_249344;
        case 0x249348u: goto label_249348;
        case 0x24934cu: goto label_24934c;
        case 0x249350u: goto label_249350;
        case 0x249354u: goto label_249354;
        case 0x249358u: goto label_249358;
        case 0x24935cu: goto label_24935c;
        case 0x249360u: goto label_249360;
        case 0x249364u: goto label_249364;
        case 0x249368u: goto label_249368;
        case 0x24936cu: goto label_24936c;
        case 0x249370u: goto label_249370;
        case 0x249374u: goto label_249374;
        case 0x249378u: goto label_249378;
        case 0x24937cu: goto label_24937c;
        case 0x249380u: goto label_249380;
        case 0x249384u: goto label_249384;
        case 0x249388u: goto label_249388;
        case 0x24938cu: goto label_24938c;
        case 0x249390u: goto label_249390;
        case 0x249394u: goto label_249394;
        case 0x249398u: goto label_249398;
        case 0x24939cu: goto label_24939c;
        case 0x2493a0u: goto label_2493a0;
        case 0x2493a4u: goto label_2493a4;
        case 0x2493a8u: goto label_2493a8;
        case 0x2493acu: goto label_2493ac;
        case 0x2493b0u: goto label_2493b0;
        case 0x2493b4u: goto label_2493b4;
        case 0x2493b8u: goto label_2493b8;
        case 0x2493bcu: goto label_2493bc;
        case 0x2493c0u: goto label_2493c0;
        case 0x2493c4u: goto label_2493c4;
        case 0x2493c8u: goto label_2493c8;
        case 0x2493ccu: goto label_2493cc;
        case 0x2493d0u: goto label_2493d0;
        case 0x2493d4u: goto label_2493d4;
        case 0x2493d8u: goto label_2493d8;
        case 0x2493dcu: goto label_2493dc;
        case 0x2493e0u: goto label_2493e0;
        case 0x2493e4u: goto label_2493e4;
        case 0x2493e8u: goto label_2493e8;
        case 0x2493ecu: goto label_2493ec;
        case 0x2493f0u: goto label_2493f0;
        case 0x2493f4u: goto label_2493f4;
        case 0x2493f8u: goto label_2493f8;
        case 0x2493fcu: goto label_2493fc;
        case 0x249400u: goto label_249400;
        case 0x249404u: goto label_249404;
        case 0x249408u: goto label_249408;
        case 0x24940cu: goto label_24940c;
        case 0x249410u: goto label_249410;
        case 0x249414u: goto label_249414;
        case 0x249418u: goto label_249418;
        case 0x24941cu: goto label_24941c;
        case 0x249420u: goto label_249420;
        case 0x249424u: goto label_249424;
        case 0x249428u: goto label_249428;
        case 0x24942cu: goto label_24942c;
        case 0x249430u: goto label_249430;
        case 0x249434u: goto label_249434;
        case 0x249438u: goto label_249438;
        case 0x24943cu: goto label_24943c;
        case 0x249440u: goto label_249440;
        case 0x249444u: goto label_249444;
        case 0x249448u: goto label_249448;
        case 0x24944cu: goto label_24944c;
        case 0x249450u: goto label_249450;
        case 0x249454u: goto label_249454;
        case 0x249458u: goto label_249458;
        case 0x24945cu: goto label_24945c;
        case 0x249460u: goto label_249460;
        case 0x249464u: goto label_249464;
        case 0x249468u: goto label_249468;
        case 0x24946cu: goto label_24946c;
        case 0x249470u: goto label_249470;
        case 0x249474u: goto label_249474;
        case 0x249478u: goto label_249478;
        case 0x24947cu: goto label_24947c;
        case 0x249480u: goto label_249480;
        case 0x249484u: goto label_249484;
        case 0x249488u: goto label_249488;
        case 0x24948cu: goto label_24948c;
        case 0x249490u: goto label_249490;
        case 0x249494u: goto label_249494;
        case 0x249498u: goto label_249498;
        case 0x24949cu: goto label_24949c;
        case 0x2494a0u: goto label_2494a0;
        case 0x2494a4u: goto label_2494a4;
        case 0x2494a8u: goto label_2494a8;
        case 0x2494acu: goto label_2494ac;
        case 0x2494b0u: goto label_2494b0;
        case 0x2494b4u: goto label_2494b4;
        case 0x2494b8u: goto label_2494b8;
        case 0x2494bcu: goto label_2494bc;
        case 0x2494c0u: goto label_2494c0;
        case 0x2494c4u: goto label_2494c4;
        case 0x2494c8u: goto label_2494c8;
        case 0x2494ccu: goto label_2494cc;
        case 0x2494d0u: goto label_2494d0;
        case 0x2494d4u: goto label_2494d4;
        case 0x2494d8u: goto label_2494d8;
        case 0x2494dcu: goto label_2494dc;
        case 0x2494e0u: goto label_2494e0;
        case 0x2494e4u: goto label_2494e4;
        case 0x2494e8u: goto label_2494e8;
        case 0x2494ecu: goto label_2494ec;
        case 0x2494f0u: goto label_2494f0;
        case 0x2494f4u: goto label_2494f4;
        case 0x2494f8u: goto label_2494f8;
        case 0x2494fcu: goto label_2494fc;
        case 0x249500u: goto label_249500;
        case 0x249504u: goto label_249504;
        case 0x249508u: goto label_249508;
        case 0x24950cu: goto label_24950c;
        case 0x249510u: goto label_249510;
        case 0x249514u: goto label_249514;
        case 0x249518u: goto label_249518;
        case 0x24951cu: goto label_24951c;
        case 0x249520u: goto label_249520;
        case 0x249524u: goto label_249524;
        case 0x249528u: goto label_249528;
        case 0x24952cu: goto label_24952c;
        case 0x249530u: goto label_249530;
        case 0x249534u: goto label_249534;
        case 0x249538u: goto label_249538;
        case 0x24953cu: goto label_24953c;
        case 0x249540u: goto label_249540;
        case 0x249544u: goto label_249544;
        case 0x249548u: goto label_249548;
        case 0x24954cu: goto label_24954c;
        case 0x249550u: goto label_249550;
        case 0x249554u: goto label_249554;
        case 0x249558u: goto label_249558;
        case 0x24955cu: goto label_24955c;
        case 0x249560u: goto label_249560;
        case 0x249564u: goto label_249564;
        case 0x249568u: goto label_249568;
        case 0x24956cu: goto label_24956c;
        case 0x249570u: goto label_249570;
        case 0x249574u: goto label_249574;
        case 0x249578u: goto label_249578;
        case 0x24957cu: goto label_24957c;
        case 0x249580u: goto label_249580;
        case 0x249584u: goto label_249584;
        case 0x249588u: goto label_249588;
        case 0x24958cu: goto label_24958c;
        case 0x249590u: goto label_249590;
        case 0x249594u: goto label_249594;
        case 0x249598u: goto label_249598;
        case 0x24959cu: goto label_24959c;
        case 0x2495a0u: goto label_2495a0;
        case 0x2495a4u: goto label_2495a4;
        case 0x2495a8u: goto label_2495a8;
        case 0x2495acu: goto label_2495ac;
        case 0x2495b0u: goto label_2495b0;
        case 0x2495b4u: goto label_2495b4;
        case 0x2495b8u: goto label_2495b8;
        case 0x2495bcu: goto label_2495bc;
        case 0x2495c0u: goto label_2495c0;
        case 0x2495c4u: goto label_2495c4;
        case 0x2495c8u: goto label_2495c8;
        case 0x2495ccu: goto label_2495cc;
        case 0x2495d0u: goto label_2495d0;
        case 0x2495d4u: goto label_2495d4;
        case 0x2495d8u: goto label_2495d8;
        case 0x2495dcu: goto label_2495dc;
        case 0x2495e0u: goto label_2495e0;
        case 0x2495e4u: goto label_2495e4;
        case 0x2495e8u: goto label_2495e8;
        case 0x2495ecu: goto label_2495ec;
        case 0x2495f0u: goto label_2495f0;
        case 0x2495f4u: goto label_2495f4;
        case 0x2495f8u: goto label_2495f8;
        case 0x2495fcu: goto label_2495fc;
        case 0x249600u: goto label_249600;
        case 0x249604u: goto label_249604;
        case 0x249608u: goto label_249608;
        case 0x24960cu: goto label_24960c;
        case 0x249610u: goto label_249610;
        case 0x249614u: goto label_249614;
        case 0x249618u: goto label_249618;
        case 0x24961cu: goto label_24961c;
        case 0x249620u: goto label_249620;
        case 0x249624u: goto label_249624;
        case 0x249628u: goto label_249628;
        case 0x24962cu: goto label_24962c;
        case 0x249630u: goto label_249630;
        case 0x249634u: goto label_249634;
        case 0x249638u: goto label_249638;
        case 0x24963cu: goto label_24963c;
        case 0x249640u: goto label_249640;
        case 0x249644u: goto label_249644;
        case 0x249648u: goto label_249648;
        case 0x24964cu: goto label_24964c;
        case 0x249650u: goto label_249650;
        case 0x249654u: goto label_249654;
        case 0x249658u: goto label_249658;
        case 0x24965cu: goto label_24965c;
        case 0x249660u: goto label_249660;
        case 0x249664u: goto label_249664;
        case 0x249668u: goto label_249668;
        case 0x24966cu: goto label_24966c;
        case 0x249670u: goto label_249670;
        case 0x249674u: goto label_249674;
        case 0x249678u: goto label_249678;
        case 0x24967cu: goto label_24967c;
        case 0x249680u: goto label_249680;
        case 0x249684u: goto label_249684;
        case 0x249688u: goto label_249688;
        case 0x24968cu: goto label_24968c;
        case 0x249690u: goto label_249690;
        case 0x249694u: goto label_249694;
        case 0x249698u: goto label_249698;
        case 0x24969cu: goto label_24969c;
        case 0x2496a0u: goto label_2496a0;
        case 0x2496a4u: goto label_2496a4;
        case 0x2496a8u: goto label_2496a8;
        case 0x2496acu: goto label_2496ac;
        case 0x2496b0u: goto label_2496b0;
        case 0x2496b4u: goto label_2496b4;
        case 0x2496b8u: goto label_2496b8;
        case 0x2496bcu: goto label_2496bc;
        case 0x2496c0u: goto label_2496c0;
        case 0x2496c4u: goto label_2496c4;
        case 0x2496c8u: goto label_2496c8;
        case 0x2496ccu: goto label_2496cc;
        case 0x2496d0u: goto label_2496d0;
        case 0x2496d4u: goto label_2496d4;
        case 0x2496d8u: goto label_2496d8;
        case 0x2496dcu: goto label_2496dc;
        case 0x2496e0u: goto label_2496e0;
        case 0x2496e4u: goto label_2496e4;
        case 0x2496e8u: goto label_2496e8;
        case 0x2496ecu: goto label_2496ec;
        case 0x2496f0u: goto label_2496f0;
        case 0x2496f4u: goto label_2496f4;
        case 0x2496f8u: goto label_2496f8;
        case 0x2496fcu: goto label_2496fc;
        case 0x249700u: goto label_249700;
        case 0x249704u: goto label_249704;
        case 0x249708u: goto label_249708;
        case 0x24970cu: goto label_24970c;
        case 0x249710u: goto label_249710;
        case 0x249714u: goto label_249714;
        case 0x249718u: goto label_249718;
        case 0x24971cu: goto label_24971c;
        case 0x249720u: goto label_249720;
        case 0x249724u: goto label_249724;
        case 0x249728u: goto label_249728;
        case 0x24972cu: goto label_24972c;
        case 0x249730u: goto label_249730;
        case 0x249734u: goto label_249734;
        case 0x249738u: goto label_249738;
        case 0x24973cu: goto label_24973c;
        case 0x249740u: goto label_249740;
        case 0x249744u: goto label_249744;
        case 0x249748u: goto label_249748;
        case 0x24974cu: goto label_24974c;
        case 0x249750u: goto label_249750;
        case 0x249754u: goto label_249754;
        case 0x249758u: goto label_249758;
        case 0x24975cu: goto label_24975c;
        case 0x249760u: goto label_249760;
        case 0x249764u: goto label_249764;
        case 0x249768u: goto label_249768;
        case 0x24976cu: goto label_24976c;
        case 0x249770u: goto label_249770;
        case 0x249774u: goto label_249774;
        case 0x249778u: goto label_249778;
        case 0x24977cu: goto label_24977c;
        case 0x249780u: goto label_249780;
        case 0x249784u: goto label_249784;
        case 0x249788u: goto label_249788;
        case 0x24978cu: goto label_24978c;
        case 0x249790u: goto label_249790;
        case 0x249794u: goto label_249794;
        case 0x249798u: goto label_249798;
        case 0x24979cu: goto label_24979c;
        case 0x2497a0u: goto label_2497a0;
        case 0x2497a4u: goto label_2497a4;
        case 0x2497a8u: goto label_2497a8;
        case 0x2497acu: goto label_2497ac;
        case 0x2497b0u: goto label_2497b0;
        case 0x2497b4u: goto label_2497b4;
        case 0x2497b8u: goto label_2497b8;
        case 0x2497bcu: goto label_2497bc;
        case 0x2497c0u: goto label_2497c0;
        case 0x2497c4u: goto label_2497c4;
        case 0x2497c8u: goto label_2497c8;
        case 0x2497ccu: goto label_2497cc;
        case 0x2497d0u: goto label_2497d0;
        case 0x2497d4u: goto label_2497d4;
        case 0x2497d8u: goto label_2497d8;
        case 0x2497dcu: goto label_2497dc;
        case 0x2497e0u: goto label_2497e0;
        case 0x2497e4u: goto label_2497e4;
        case 0x2497e8u: goto label_2497e8;
        case 0x2497ecu: goto label_2497ec;
        case 0x2497f0u: goto label_2497f0;
        case 0x2497f4u: goto label_2497f4;
        case 0x2497f8u: goto label_2497f8;
        case 0x2497fcu: goto label_2497fc;
        case 0x249800u: goto label_249800;
        case 0x249804u: goto label_249804;
        case 0x249808u: goto label_249808;
        case 0x24980cu: goto label_24980c;
        case 0x249810u: goto label_249810;
        case 0x249814u: goto label_249814;
        case 0x249818u: goto label_249818;
        case 0x24981cu: goto label_24981c;
        case 0x249820u: goto label_249820;
        case 0x249824u: goto label_249824;
        case 0x249828u: goto label_249828;
        case 0x24982cu: goto label_24982c;
        case 0x249830u: goto label_249830;
        case 0x249834u: goto label_249834;
        case 0x249838u: goto label_249838;
        case 0x24983cu: goto label_24983c;
        case 0x249840u: goto label_249840;
        case 0x249844u: goto label_249844;
        case 0x249848u: goto label_249848;
        case 0x24984cu: goto label_24984c;
        case 0x249850u: goto label_249850;
        case 0x249854u: goto label_249854;
        case 0x249858u: goto label_249858;
        case 0x24985cu: goto label_24985c;
        case 0x249860u: goto label_249860;
        case 0x249864u: goto label_249864;
        case 0x249868u: goto label_249868;
        case 0x24986cu: goto label_24986c;
        case 0x249870u: goto label_249870;
        case 0x249874u: goto label_249874;
        case 0x249878u: goto label_249878;
        case 0x24987cu: goto label_24987c;
        case 0x249880u: goto label_249880;
        case 0x249884u: goto label_249884;
        case 0x249888u: goto label_249888;
        case 0x24988cu: goto label_24988c;
        case 0x249890u: goto label_249890;
        case 0x249894u: goto label_249894;
        case 0x249898u: goto label_249898;
        case 0x24989cu: goto label_24989c;
        case 0x2498a0u: goto label_2498a0;
        case 0x2498a4u: goto label_2498a4;
        case 0x2498a8u: goto label_2498a8;
        case 0x2498acu: goto label_2498ac;
        case 0x2498b0u: goto label_2498b0;
        case 0x2498b4u: goto label_2498b4;
        case 0x2498b8u: goto label_2498b8;
        case 0x2498bcu: goto label_2498bc;
        case 0x2498c0u: goto label_2498c0;
        case 0x2498c4u: goto label_2498c4;
        case 0x2498c8u: goto label_2498c8;
        case 0x2498ccu: goto label_2498cc;
        case 0x2498d0u: goto label_2498d0;
        case 0x2498d4u: goto label_2498d4;
        case 0x2498d8u: goto label_2498d8;
        case 0x2498dcu: goto label_2498dc;
        case 0x2498e0u: goto label_2498e0;
        case 0x2498e4u: goto label_2498e4;
        case 0x2498e8u: goto label_2498e8;
        case 0x2498ecu: goto label_2498ec;
        case 0x2498f0u: goto label_2498f0;
        case 0x2498f4u: goto label_2498f4;
        case 0x2498f8u: goto label_2498f8;
        case 0x2498fcu: goto label_2498fc;
        case 0x249900u: goto label_249900;
        case 0x249904u: goto label_249904;
        case 0x249908u: goto label_249908;
        case 0x24990cu: goto label_24990c;
        case 0x249910u: goto label_249910;
        case 0x249914u: goto label_249914;
        case 0x249918u: goto label_249918;
        case 0x24991cu: goto label_24991c;
        case 0x249920u: goto label_249920;
        case 0x249924u: goto label_249924;
        case 0x249928u: goto label_249928;
        case 0x24992cu: goto label_24992c;
        case 0x249930u: goto label_249930;
        case 0x249934u: goto label_249934;
        case 0x249938u: goto label_249938;
        case 0x24993cu: goto label_24993c;
        case 0x249940u: goto label_249940;
        case 0x249944u: goto label_249944;
        case 0x249948u: goto label_249948;
        case 0x24994cu: goto label_24994c;
        case 0x249950u: goto label_249950;
        case 0x249954u: goto label_249954;
        case 0x249958u: goto label_249958;
        case 0x24995cu: goto label_24995c;
        case 0x249960u: goto label_249960;
        case 0x249964u: goto label_249964;
        case 0x249968u: goto label_249968;
        case 0x24996cu: goto label_24996c;
        case 0x249970u: goto label_249970;
        case 0x249974u: goto label_249974;
        case 0x249978u: goto label_249978;
        case 0x24997cu: goto label_24997c;
        case 0x249980u: goto label_249980;
        case 0x249984u: goto label_249984;
        case 0x249988u: goto label_249988;
        case 0x24998cu: goto label_24998c;
        case 0x249990u: goto label_249990;
        case 0x249994u: goto label_249994;
        case 0x249998u: goto label_249998;
        case 0x24999cu: goto label_24999c;
        case 0x2499a0u: goto label_2499a0;
        case 0x2499a4u: goto label_2499a4;
        case 0x2499a8u: goto label_2499a8;
        case 0x2499acu: goto label_2499ac;
        case 0x2499b0u: goto label_2499b0;
        case 0x2499b4u: goto label_2499b4;
        case 0x2499b8u: goto label_2499b8;
        case 0x2499bcu: goto label_2499bc;
        case 0x2499c0u: goto label_2499c0;
        case 0x2499c4u: goto label_2499c4;
        case 0x2499c8u: goto label_2499c8;
        case 0x2499ccu: goto label_2499cc;
        case 0x2499d0u: goto label_2499d0;
        case 0x2499d4u: goto label_2499d4;
        case 0x2499d8u: goto label_2499d8;
        case 0x2499dcu: goto label_2499dc;
        case 0x2499e0u: goto label_2499e0;
        case 0x2499e4u: goto label_2499e4;
        case 0x2499e8u: goto label_2499e8;
        case 0x2499ecu: goto label_2499ec;
        case 0x2499f0u: goto label_2499f0;
        case 0x2499f4u: goto label_2499f4;
        case 0x2499f8u: goto label_2499f8;
        case 0x2499fcu: goto label_2499fc;
        case 0x249a00u: goto label_249a00;
        case 0x249a04u: goto label_249a04;
        case 0x249a08u: goto label_249a08;
        case 0x249a0cu: goto label_249a0c;
        case 0x249a10u: goto label_249a10;
        case 0x249a14u: goto label_249a14;
        case 0x249a18u: goto label_249a18;
        case 0x249a1cu: goto label_249a1c;
        case 0x249a20u: goto label_249a20;
        case 0x249a24u: goto label_249a24;
        case 0x249a28u: goto label_249a28;
        case 0x249a2cu: goto label_249a2c;
        case 0x249a30u: goto label_249a30;
        case 0x249a34u: goto label_249a34;
        case 0x249a38u: goto label_249a38;
        case 0x249a3cu: goto label_249a3c;
        case 0x249a40u: goto label_249a40;
        case 0x249a44u: goto label_249a44;
        case 0x249a48u: goto label_249a48;
        case 0x249a4cu: goto label_249a4c;
        case 0x249a50u: goto label_249a50;
        case 0x249a54u: goto label_249a54;
        case 0x249a58u: goto label_249a58;
        case 0x249a5cu: goto label_249a5c;
        case 0x249a60u: goto label_249a60;
        case 0x249a64u: goto label_249a64;
        case 0x249a68u: goto label_249a68;
        case 0x249a6cu: goto label_249a6c;
        case 0x249a70u: goto label_249a70;
        case 0x249a74u: goto label_249a74;
        case 0x249a78u: goto label_249a78;
        case 0x249a7cu: goto label_249a7c;
        case 0x249a80u: goto label_249a80;
        case 0x249a84u: goto label_249a84;
        case 0x249a88u: goto label_249a88;
        case 0x249a8cu: goto label_249a8c;
        case 0x249a90u: goto label_249a90;
        case 0x249a94u: goto label_249a94;
        case 0x249a98u: goto label_249a98;
        case 0x249a9cu: goto label_249a9c;
        case 0x249aa0u: goto label_249aa0;
        case 0x249aa4u: goto label_249aa4;
        case 0x249aa8u: goto label_249aa8;
        case 0x249aacu: goto label_249aac;
        case 0x249ab0u: goto label_249ab0;
        case 0x249ab4u: goto label_249ab4;
        case 0x249ab8u: goto label_249ab8;
        case 0x249abcu: goto label_249abc;
        case 0x249ac0u: goto label_249ac0;
        case 0x249ac4u: goto label_249ac4;
        case 0x249ac8u: goto label_249ac8;
        case 0x249accu: goto label_249acc;
        case 0x249ad0u: goto label_249ad0;
        case 0x249ad4u: goto label_249ad4;
        case 0x249ad8u: goto label_249ad8;
        case 0x249adcu: goto label_249adc;
        case 0x249ae0u: goto label_249ae0;
        case 0x249ae4u: goto label_249ae4;
        case 0x249ae8u: goto label_249ae8;
        case 0x249aecu: goto label_249aec;
        case 0x249af0u: goto label_249af0;
        case 0x249af4u: goto label_249af4;
        case 0x249af8u: goto label_249af8;
        case 0x249afcu: goto label_249afc;
        case 0x249b00u: goto label_249b00;
        case 0x249b04u: goto label_249b04;
        case 0x249b08u: goto label_249b08;
        case 0x249b0cu: goto label_249b0c;
        case 0x249b10u: goto label_249b10;
        case 0x249b14u: goto label_249b14;
        case 0x249b18u: goto label_249b18;
        case 0x249b1cu: goto label_249b1c;
        case 0x249b20u: goto label_249b20;
        case 0x249b24u: goto label_249b24;
        case 0x249b28u: goto label_249b28;
        case 0x249b2cu: goto label_249b2c;
        case 0x249b30u: goto label_249b30;
        case 0x249b34u: goto label_249b34;
        case 0x249b38u: goto label_249b38;
        case 0x249b3cu: goto label_249b3c;
        case 0x249b40u: goto label_249b40;
        case 0x249b44u: goto label_249b44;
        case 0x249b48u: goto label_249b48;
        case 0x249b4cu: goto label_249b4c;
        case 0x249b50u: goto label_249b50;
        case 0x249b54u: goto label_249b54;
        case 0x249b58u: goto label_249b58;
        case 0x249b5cu: goto label_249b5c;
        case 0x249b60u: goto label_249b60;
        case 0x249b64u: goto label_249b64;
        case 0x249b68u: goto label_249b68;
        case 0x249b6cu: goto label_249b6c;
        case 0x249b70u: goto label_249b70;
        case 0x249b74u: goto label_249b74;
        case 0x249b78u: goto label_249b78;
        case 0x249b7cu: goto label_249b7c;
        case 0x249b80u: goto label_249b80;
        case 0x249b84u: goto label_249b84;
        case 0x249b88u: goto label_249b88;
        case 0x249b8cu: goto label_249b8c;
        case 0x249b90u: goto label_249b90;
        case 0x249b94u: goto label_249b94;
        case 0x249b98u: goto label_249b98;
        case 0x249b9cu: goto label_249b9c;
        case 0x249ba0u: goto label_249ba0;
        case 0x249ba4u: goto label_249ba4;
        case 0x249ba8u: goto label_249ba8;
        case 0x249bacu: goto label_249bac;
        case 0x249bb0u: goto label_249bb0;
        case 0x249bb4u: goto label_249bb4;
        case 0x249bb8u: goto label_249bb8;
        case 0x249bbcu: goto label_249bbc;
        case 0x249bc0u: goto label_249bc0;
        case 0x249bc4u: goto label_249bc4;
        case 0x249bc8u: goto label_249bc8;
        case 0x249bccu: goto label_249bcc;
        case 0x249bd0u: goto label_249bd0;
        case 0x249bd4u: goto label_249bd4;
        case 0x249bd8u: goto label_249bd8;
        case 0x249bdcu: goto label_249bdc;
        case 0x249be0u: goto label_249be0;
        case 0x249be4u: goto label_249be4;
        case 0x249be8u: goto label_249be8;
        case 0x249becu: goto label_249bec;
        case 0x249bf0u: goto label_249bf0;
        case 0x249bf4u: goto label_249bf4;
        case 0x249bf8u: goto label_249bf8;
        case 0x249bfcu: goto label_249bfc;
        case 0x249c00u: goto label_249c00;
        case 0x249c04u: goto label_249c04;
        case 0x249c08u: goto label_249c08;
        case 0x249c0cu: goto label_249c0c;
        case 0x249c10u: goto label_249c10;
        case 0x249c14u: goto label_249c14;
        case 0x249c18u: goto label_249c18;
        case 0x249c1cu: goto label_249c1c;
        case 0x249c20u: goto label_249c20;
        case 0x249c24u: goto label_249c24;
        case 0x249c28u: goto label_249c28;
        case 0x249c2cu: goto label_249c2c;
        case 0x249c30u: goto label_249c30;
        case 0x249c34u: goto label_249c34;
        case 0x249c38u: goto label_249c38;
        case 0x249c3cu: goto label_249c3c;
        case 0x249c40u: goto label_249c40;
        case 0x249c44u: goto label_249c44;
        case 0x249c48u: goto label_249c48;
        case 0x249c4cu: goto label_249c4c;
        case 0x249c50u: goto label_249c50;
        case 0x249c54u: goto label_249c54;
        case 0x249c58u: goto label_249c58;
        case 0x249c5cu: goto label_249c5c;
        case 0x249c60u: goto label_249c60;
        case 0x249c64u: goto label_249c64;
        case 0x249c68u: goto label_249c68;
        case 0x249c6cu: goto label_249c6c;
        case 0x249c70u: goto label_249c70;
        case 0x249c74u: goto label_249c74;
        case 0x249c78u: goto label_249c78;
        case 0x249c7cu: goto label_249c7c;
        case 0x249c80u: goto label_249c80;
        case 0x249c84u: goto label_249c84;
        case 0x249c88u: goto label_249c88;
        case 0x249c8cu: goto label_249c8c;
        case 0x249c90u: goto label_249c90;
        case 0x249c94u: goto label_249c94;
        case 0x249c98u: goto label_249c98;
        case 0x249c9cu: goto label_249c9c;
        case 0x249ca0u: goto label_249ca0;
        case 0x249ca4u: goto label_249ca4;
        case 0x249ca8u: goto label_249ca8;
        case 0x249cacu: goto label_249cac;
        case 0x249cb0u: goto label_249cb0;
        case 0x249cb4u: goto label_249cb4;
        case 0x249cb8u: goto label_249cb8;
        case 0x249cbcu: goto label_249cbc;
        case 0x249cc0u: goto label_249cc0;
        case 0x249cc4u: goto label_249cc4;
        case 0x249cc8u: goto label_249cc8;
        case 0x249cccu: goto label_249ccc;
        case 0x249cd0u: goto label_249cd0;
        case 0x249cd4u: goto label_249cd4;
        case 0x249cd8u: goto label_249cd8;
        case 0x249cdcu: goto label_249cdc;
        case 0x249ce0u: goto label_249ce0;
        case 0x249ce4u: goto label_249ce4;
        case 0x249ce8u: goto label_249ce8;
        case 0x249cecu: goto label_249cec;
        case 0x249cf0u: goto label_249cf0;
        case 0x249cf4u: goto label_249cf4;
        case 0x249cf8u: goto label_249cf8;
        case 0x249cfcu: goto label_249cfc;
        case 0x249d00u: goto label_249d00;
        case 0x249d04u: goto label_249d04;
        case 0x249d08u: goto label_249d08;
        case 0x249d0cu: goto label_249d0c;
        case 0x249d10u: goto label_249d10;
        case 0x249d14u: goto label_249d14;
        case 0x249d18u: goto label_249d18;
        case 0x249d1cu: goto label_249d1c;
        case 0x249d20u: goto label_249d20;
        case 0x249d24u: goto label_249d24;
        case 0x249d28u: goto label_249d28;
        case 0x249d2cu: goto label_249d2c;
        case 0x249d30u: goto label_249d30;
        case 0x249d34u: goto label_249d34;
        case 0x249d38u: goto label_249d38;
        case 0x249d3cu: goto label_249d3c;
        case 0x249d40u: goto label_249d40;
        case 0x249d44u: goto label_249d44;
        case 0x249d48u: goto label_249d48;
        case 0x249d4cu: goto label_249d4c;
        case 0x249d50u: goto label_249d50;
        case 0x249d54u: goto label_249d54;
        case 0x249d58u: goto label_249d58;
        case 0x249d5cu: goto label_249d5c;
        case 0x249d60u: goto label_249d60;
        case 0x249d64u: goto label_249d64;
        case 0x249d68u: goto label_249d68;
        case 0x249d6cu: goto label_249d6c;
        case 0x249d70u: goto label_249d70;
        case 0x249d74u: goto label_249d74;
        case 0x249d78u: goto label_249d78;
        case 0x249d7cu: goto label_249d7c;
        case 0x249d80u: goto label_249d80;
        case 0x249d84u: goto label_249d84;
        case 0x249d88u: goto label_249d88;
        case 0x249d8cu: goto label_249d8c;
        case 0x249d90u: goto label_249d90;
        case 0x249d94u: goto label_249d94;
        case 0x249d98u: goto label_249d98;
        case 0x249d9cu: goto label_249d9c;
        case 0x249da0u: goto label_249da0;
        case 0x249da4u: goto label_249da4;
        case 0x249da8u: goto label_249da8;
        case 0x249dacu: goto label_249dac;
        case 0x249db0u: goto label_249db0;
        case 0x249db4u: goto label_249db4;
        case 0x249db8u: goto label_249db8;
        case 0x249dbcu: goto label_249dbc;
        case 0x249dc0u: goto label_249dc0;
        case 0x249dc4u: goto label_249dc4;
        case 0x249dc8u: goto label_249dc8;
        case 0x249dccu: goto label_249dcc;
        case 0x249dd0u: goto label_249dd0;
        case 0x249dd4u: goto label_249dd4;
        case 0x249dd8u: goto label_249dd8;
        case 0x249ddcu: goto label_249ddc;
        case 0x249de0u: goto label_249de0;
        case 0x249de4u: goto label_249de4;
        case 0x249de8u: goto label_249de8;
        case 0x249decu: goto label_249dec;
        case 0x249df0u: goto label_249df0;
        case 0x249df4u: goto label_249df4;
        case 0x249df8u: goto label_249df8;
        case 0x249dfcu: goto label_249dfc;
        case 0x249e00u: goto label_249e00;
        case 0x249e04u: goto label_249e04;
        case 0x249e08u: goto label_249e08;
        case 0x249e0cu: goto label_249e0c;
        case 0x249e10u: goto label_249e10;
        case 0x249e14u: goto label_249e14;
        case 0x249e18u: goto label_249e18;
        case 0x249e1cu: goto label_249e1c;
        case 0x249e20u: goto label_249e20;
        case 0x249e24u: goto label_249e24;
        case 0x249e28u: goto label_249e28;
        case 0x249e2cu: goto label_249e2c;
        case 0x249e30u: goto label_249e30;
        case 0x249e34u: goto label_249e34;
        case 0x249e38u: goto label_249e38;
        case 0x249e3cu: goto label_249e3c;
        case 0x249e40u: goto label_249e40;
        case 0x249e44u: goto label_249e44;
        case 0x249e48u: goto label_249e48;
        case 0x249e4cu: goto label_249e4c;
        case 0x249e50u: goto label_249e50;
        case 0x249e54u: goto label_249e54;
        case 0x249e58u: goto label_249e58;
        case 0x249e5cu: goto label_249e5c;
        case 0x249e60u: goto label_249e60;
        case 0x249e64u: goto label_249e64;
        case 0x249e68u: goto label_249e68;
        case 0x249e6cu: goto label_249e6c;
        case 0x249e70u: goto label_249e70;
        case 0x249e74u: goto label_249e74;
        case 0x249e78u: goto label_249e78;
        case 0x249e7cu: goto label_249e7c;
        case 0x249e80u: goto label_249e80;
        case 0x249e84u: goto label_249e84;
        case 0x249e88u: goto label_249e88;
        case 0x249e8cu: goto label_249e8c;
        case 0x249e90u: goto label_249e90;
        case 0x249e94u: goto label_249e94;
        case 0x249e98u: goto label_249e98;
        case 0x249e9cu: goto label_249e9c;
        case 0x249ea0u: goto label_249ea0;
        case 0x249ea4u: goto label_249ea4;
        case 0x249ea8u: goto label_249ea8;
        case 0x249eacu: goto label_249eac;
        case 0x249eb0u: goto label_249eb0;
        case 0x249eb4u: goto label_249eb4;
        case 0x249eb8u: goto label_249eb8;
        case 0x249ebcu: goto label_249ebc;
        case 0x249ec0u: goto label_249ec0;
        case 0x249ec4u: goto label_249ec4;
        case 0x249ec8u: goto label_249ec8;
        case 0x249eccu: goto label_249ecc;
        case 0x249ed0u: goto label_249ed0;
        case 0x249ed4u: goto label_249ed4;
        case 0x249ed8u: goto label_249ed8;
        case 0x249edcu: goto label_249edc;
        case 0x249ee0u: goto label_249ee0;
        case 0x249ee4u: goto label_249ee4;
        case 0x249ee8u: goto label_249ee8;
        case 0x249eecu: goto label_249eec;
        case 0x249ef0u: goto label_249ef0;
        case 0x249ef4u: goto label_249ef4;
        case 0x249ef8u: goto label_249ef8;
        case 0x249efcu: goto label_249efc;
        case 0x249f00u: goto label_249f00;
        case 0x249f04u: goto label_249f04;
        case 0x249f08u: goto label_249f08;
        case 0x249f0cu: goto label_249f0c;
        case 0x249f10u: goto label_249f10;
        case 0x249f14u: goto label_249f14;
        case 0x249f18u: goto label_249f18;
        case 0x249f1cu: goto label_249f1c;
        case 0x249f20u: goto label_249f20;
        case 0x249f24u: goto label_249f24;
        case 0x249f28u: goto label_249f28;
        case 0x249f2cu: goto label_249f2c;
        case 0x249f30u: goto label_249f30;
        case 0x249f34u: goto label_249f34;
        case 0x249f38u: goto label_249f38;
        case 0x249f3cu: goto label_249f3c;
        case 0x249f40u: goto label_249f40;
        case 0x249f44u: goto label_249f44;
        case 0x249f48u: goto label_249f48;
        case 0x249f4cu: goto label_249f4c;
        case 0x249f50u: goto label_249f50;
        case 0x249f54u: goto label_249f54;
        case 0x249f58u: goto label_249f58;
        case 0x249f5cu: goto label_249f5c;
        case 0x249f60u: goto label_249f60;
        case 0x249f64u: goto label_249f64;
        case 0x249f68u: goto label_249f68;
        case 0x249f6cu: goto label_249f6c;
        case 0x249f70u: goto label_249f70;
        case 0x249f74u: goto label_249f74;
        case 0x249f78u: goto label_249f78;
        case 0x249f7cu: goto label_249f7c;
        case 0x249f80u: goto label_249f80;
        case 0x249f84u: goto label_249f84;
        case 0x249f88u: goto label_249f88;
        case 0x249f8cu: goto label_249f8c;
        case 0x249f90u: goto label_249f90;
        case 0x249f94u: goto label_249f94;
        case 0x249f98u: goto label_249f98;
        case 0x249f9cu: goto label_249f9c;
        case 0x249fa0u: goto label_249fa0;
        case 0x249fa4u: goto label_249fa4;
        case 0x249fa8u: goto label_249fa8;
        case 0x249facu: goto label_249fac;
        case 0x249fb0u: goto label_249fb0;
        case 0x249fb4u: goto label_249fb4;
        case 0x249fb8u: goto label_249fb8;
        case 0x249fbcu: goto label_249fbc;
        case 0x249fc0u: goto label_249fc0;
        case 0x249fc4u: goto label_249fc4;
        case 0x249fc8u: goto label_249fc8;
        case 0x249fccu: goto label_249fcc;
        case 0x249fd0u: goto label_249fd0;
        case 0x249fd4u: goto label_249fd4;
        case 0x249fd8u: goto label_249fd8;
        case 0x249fdcu: goto label_249fdc;
        case 0x249fe0u: goto label_249fe0;
        case 0x249fe4u: goto label_249fe4;
        case 0x249fe8u: goto label_249fe8;
        case 0x249fecu: goto label_249fec;
        case 0x249ff0u: goto label_249ff0;
        case 0x249ff4u: goto label_249ff4;
        case 0x249ff8u: goto label_249ff8;
        case 0x249ffcu: goto label_249ffc;
        case 0x24a000u: goto label_24a000;
        case 0x24a004u: goto label_24a004;
        case 0x24a008u: goto label_24a008;
        case 0x24a00cu: goto label_24a00c;
        case 0x24a010u: goto label_24a010;
        case 0x24a014u: goto label_24a014;
        case 0x24a018u: goto label_24a018;
        case 0x24a01cu: goto label_24a01c;
        case 0x24a020u: goto label_24a020;
        case 0x24a024u: goto label_24a024;
        case 0x24a028u: goto label_24a028;
        case 0x24a02cu: goto label_24a02c;
        case 0x24a030u: goto label_24a030;
        case 0x24a034u: goto label_24a034;
        case 0x24a038u: goto label_24a038;
        case 0x24a03cu: goto label_24a03c;
        case 0x24a040u: goto label_24a040;
        case 0x24a044u: goto label_24a044;
        case 0x24a048u: goto label_24a048;
        case 0x24a04cu: goto label_24a04c;
        case 0x24a050u: goto label_24a050;
        case 0x24a054u: goto label_24a054;
        case 0x24a058u: goto label_24a058;
        case 0x24a05cu: goto label_24a05c;
        case 0x24a060u: goto label_24a060;
        case 0x24a064u: goto label_24a064;
        case 0x24a068u: goto label_24a068;
        case 0x24a06cu: goto label_24a06c;
        case 0x24a070u: goto label_24a070;
        case 0x24a074u: goto label_24a074;
        case 0x24a078u: goto label_24a078;
        case 0x24a07cu: goto label_24a07c;
        case 0x24a080u: goto label_24a080;
        case 0x24a084u: goto label_24a084;
        case 0x24a088u: goto label_24a088;
        case 0x24a08cu: goto label_24a08c;
        case 0x24a090u: goto label_24a090;
        case 0x24a094u: goto label_24a094;
        case 0x24a098u: goto label_24a098;
        case 0x24a09cu: goto label_24a09c;
        case 0x24a0a0u: goto label_24a0a0;
        case 0x24a0a4u: goto label_24a0a4;
        case 0x24a0a8u: goto label_24a0a8;
        case 0x24a0acu: goto label_24a0ac;
        case 0x24a0b0u: goto label_24a0b0;
        case 0x24a0b4u: goto label_24a0b4;
        case 0x24a0b8u: goto label_24a0b8;
        case 0x24a0bcu: goto label_24a0bc;
        case 0x24a0c0u: goto label_24a0c0;
        case 0x24a0c4u: goto label_24a0c4;
        case 0x24a0c8u: goto label_24a0c8;
        case 0x24a0ccu: goto label_24a0cc;
        case 0x24a0d0u: goto label_24a0d0;
        case 0x24a0d4u: goto label_24a0d4;
        case 0x24a0d8u: goto label_24a0d8;
        case 0x24a0dcu: goto label_24a0dc;
        case 0x24a0e0u: goto label_24a0e0;
        case 0x24a0e4u: goto label_24a0e4;
        case 0x24a0e8u: goto label_24a0e8;
        case 0x24a0ecu: goto label_24a0ec;
        case 0x24a0f0u: goto label_24a0f0;
        case 0x24a0f4u: goto label_24a0f4;
        case 0x24a0f8u: goto label_24a0f8;
        case 0x24a0fcu: goto label_24a0fc;
        case 0x24a100u: goto label_24a100;
        case 0x24a104u: goto label_24a104;
        case 0x24a108u: goto label_24a108;
        case 0x24a10cu: goto label_24a10c;
        case 0x24a110u: goto label_24a110;
        case 0x24a114u: goto label_24a114;
        case 0x24a118u: goto label_24a118;
        case 0x24a11cu: goto label_24a11c;
        case 0x24a120u: goto label_24a120;
        case 0x24a124u: goto label_24a124;
        case 0x24a128u: goto label_24a128;
        case 0x24a12cu: goto label_24a12c;
        case 0x24a130u: goto label_24a130;
        case 0x24a134u: goto label_24a134;
        case 0x24a138u: goto label_24a138;
        case 0x24a13cu: goto label_24a13c;
        case 0x24a140u: goto label_24a140;
        case 0x24a144u: goto label_24a144;
        case 0x24a148u: goto label_24a148;
        case 0x24a14cu: goto label_24a14c;
        case 0x24a150u: goto label_24a150;
        case 0x24a154u: goto label_24a154;
        case 0x24a158u: goto label_24a158;
        case 0x24a15cu: goto label_24a15c;
        case 0x24a160u: goto label_24a160;
        case 0x24a164u: goto label_24a164;
        case 0x24a168u: goto label_24a168;
        case 0x24a16cu: goto label_24a16c;
        case 0x24a170u: goto label_24a170;
        case 0x24a174u: goto label_24a174;
        case 0x24a178u: goto label_24a178;
        case 0x24a17cu: goto label_24a17c;
        case 0x24a180u: goto label_24a180;
        case 0x24a184u: goto label_24a184;
        case 0x24a188u: goto label_24a188;
        case 0x24a18cu: goto label_24a18c;
        case 0x24a190u: goto label_24a190;
        case 0x24a194u: goto label_24a194;
        case 0x24a198u: goto label_24a198;
        case 0x24a19cu: goto label_24a19c;
        case 0x24a1a0u: goto label_24a1a0;
        case 0x24a1a4u: goto label_24a1a4;
        case 0x24a1a8u: goto label_24a1a8;
        case 0x24a1acu: goto label_24a1ac;
        case 0x24a1b0u: goto label_24a1b0;
        case 0x24a1b4u: goto label_24a1b4;
        case 0x24a1b8u: goto label_24a1b8;
        case 0x24a1bcu: goto label_24a1bc;
        case 0x24a1c0u: goto label_24a1c0;
        case 0x24a1c4u: goto label_24a1c4;
        case 0x24a1c8u: goto label_24a1c8;
        case 0x24a1ccu: goto label_24a1cc;
        case 0x24a1d0u: goto label_24a1d0;
        case 0x24a1d4u: goto label_24a1d4;
        case 0x24a1d8u: goto label_24a1d8;
        case 0x24a1dcu: goto label_24a1dc;
        case 0x24a1e0u: goto label_24a1e0;
        case 0x24a1e4u: goto label_24a1e4;
        case 0x24a1e8u: goto label_24a1e8;
        case 0x24a1ecu: goto label_24a1ec;
        case 0x24a1f0u: goto label_24a1f0;
        case 0x24a1f4u: goto label_24a1f4;
        case 0x24a1f8u: goto label_24a1f8;
        case 0x24a1fcu: goto label_24a1fc;
        case 0x24a200u: goto label_24a200;
        case 0x24a204u: goto label_24a204;
        case 0x24a208u: goto label_24a208;
        case 0x24a20cu: goto label_24a20c;
        case 0x24a210u: goto label_24a210;
        case 0x24a214u: goto label_24a214;
        case 0x24a218u: goto label_24a218;
        case 0x24a21cu: goto label_24a21c;
        case 0x24a220u: goto label_24a220;
        case 0x24a224u: goto label_24a224;
        case 0x24a228u: goto label_24a228;
        case 0x24a22cu: goto label_24a22c;
        case 0x24a230u: goto label_24a230;
        case 0x24a234u: goto label_24a234;
        case 0x24a238u: goto label_24a238;
        case 0x24a23cu: goto label_24a23c;
        case 0x24a240u: goto label_24a240;
        case 0x24a244u: goto label_24a244;
        case 0x24a248u: goto label_24a248;
        case 0x24a24cu: goto label_24a24c;
        case 0x24a250u: goto label_24a250;
        case 0x24a254u: goto label_24a254;
        case 0x24a258u: goto label_24a258;
        case 0x24a25cu: goto label_24a25c;
        case 0x24a260u: goto label_24a260;
        case 0x24a264u: goto label_24a264;
        case 0x24a268u: goto label_24a268;
        case 0x24a26cu: goto label_24a26c;
        case 0x24a270u: goto label_24a270;
        case 0x24a274u: goto label_24a274;
        case 0x24a278u: goto label_24a278;
        case 0x24a27cu: goto label_24a27c;
        case 0x24a280u: goto label_24a280;
        case 0x24a284u: goto label_24a284;
        case 0x24a288u: goto label_24a288;
        case 0x24a28cu: goto label_24a28c;
        case 0x24a290u: goto label_24a290;
        case 0x24a294u: goto label_24a294;
        case 0x24a298u: goto label_24a298;
        case 0x24a29cu: goto label_24a29c;
        case 0x24a2a0u: goto label_24a2a0;
        case 0x24a2a4u: goto label_24a2a4;
        case 0x24a2a8u: goto label_24a2a8;
        case 0x24a2acu: goto label_24a2ac;
        case 0x24a2b0u: goto label_24a2b0;
        case 0x24a2b4u: goto label_24a2b4;
        case 0x24a2b8u: goto label_24a2b8;
        case 0x24a2bcu: goto label_24a2bc;
        case 0x24a2c0u: goto label_24a2c0;
        case 0x24a2c4u: goto label_24a2c4;
        case 0x24a2c8u: goto label_24a2c8;
        case 0x24a2ccu: goto label_24a2cc;
        case 0x24a2d0u: goto label_24a2d0;
        case 0x24a2d4u: goto label_24a2d4;
        case 0x24a2d8u: goto label_24a2d8;
        case 0x24a2dcu: goto label_24a2dc;
        case 0x24a2e0u: goto label_24a2e0;
        case 0x24a2e4u: goto label_24a2e4;
        case 0x24a2e8u: goto label_24a2e8;
        case 0x24a2ecu: goto label_24a2ec;
        case 0x24a2f0u: goto label_24a2f0;
        case 0x24a2f4u: goto label_24a2f4;
        case 0x24a2f8u: goto label_24a2f8;
        case 0x24a2fcu: goto label_24a2fc;
        case 0x24a300u: goto label_24a300;
        case 0x24a304u: goto label_24a304;
        case 0x24a308u: goto label_24a308;
        case 0x24a30cu: goto label_24a30c;
        case 0x24a310u: goto label_24a310;
        case 0x24a314u: goto label_24a314;
        case 0x24a318u: goto label_24a318;
        case 0x24a31cu: goto label_24a31c;
        case 0x24a320u: goto label_24a320;
        case 0x24a324u: goto label_24a324;
        case 0x24a328u: goto label_24a328;
        case 0x24a32cu: goto label_24a32c;
        case 0x24a330u: goto label_24a330;
        case 0x24a334u: goto label_24a334;
        case 0x24a338u: goto label_24a338;
        case 0x24a33cu: goto label_24a33c;
        case 0x24a340u: goto label_24a340;
        case 0x24a344u: goto label_24a344;
        case 0x24a348u: goto label_24a348;
        case 0x24a34cu: goto label_24a34c;
        case 0x24a350u: goto label_24a350;
        case 0x24a354u: goto label_24a354;
        case 0x24a358u: goto label_24a358;
        case 0x24a35cu: goto label_24a35c;
        case 0x24a360u: goto label_24a360;
        case 0x24a364u: goto label_24a364;
        case 0x24a368u: goto label_24a368;
        case 0x24a36cu: goto label_24a36c;
        case 0x24a370u: goto label_24a370;
        case 0x24a374u: goto label_24a374;
        case 0x24a378u: goto label_24a378;
        case 0x24a37cu: goto label_24a37c;
        case 0x24a380u: goto label_24a380;
        case 0x24a384u: goto label_24a384;
        case 0x24a388u: goto label_24a388;
        case 0x24a38cu: goto label_24a38c;
        case 0x24a390u: goto label_24a390;
        case 0x24a394u: goto label_24a394;
        case 0x24a398u: goto label_24a398;
        case 0x24a39cu: goto label_24a39c;
        case 0x24a3a0u: goto label_24a3a0;
        case 0x24a3a4u: goto label_24a3a4;
        case 0x24a3a8u: goto label_24a3a8;
        case 0x24a3acu: goto label_24a3ac;
        case 0x24a3b0u: goto label_24a3b0;
        case 0x24a3b4u: goto label_24a3b4;
        case 0x24a3b8u: goto label_24a3b8;
        case 0x24a3bcu: goto label_24a3bc;
        case 0x24a3c0u: goto label_24a3c0;
        case 0x24a3c4u: goto label_24a3c4;
        case 0x24a3c8u: goto label_24a3c8;
        case 0x24a3ccu: goto label_24a3cc;
        case 0x24a3d0u: goto label_24a3d0;
        case 0x24a3d4u: goto label_24a3d4;
        case 0x24a3d8u: goto label_24a3d8;
        case 0x24a3dcu: goto label_24a3dc;
        case 0x24a3e0u: goto label_24a3e0;
        case 0x24a3e4u: goto label_24a3e4;
        case 0x24a3e8u: goto label_24a3e8;
        case 0x24a3ecu: goto label_24a3ec;
        case 0x24a3f0u: goto label_24a3f0;
        case 0x24a3f4u: goto label_24a3f4;
        case 0x24a3f8u: goto label_24a3f8;
        case 0x24a3fcu: goto label_24a3fc;
        case 0x24a400u: goto label_24a400;
        case 0x24a404u: goto label_24a404;
        case 0x24a408u: goto label_24a408;
        case 0x24a40cu: goto label_24a40c;
        case 0x24a410u: goto label_24a410;
        case 0x24a414u: goto label_24a414;
        case 0x24a418u: goto label_24a418;
        case 0x24a41cu: goto label_24a41c;
        case 0x24a420u: goto label_24a420;
        case 0x24a424u: goto label_24a424;
        case 0x24a428u: goto label_24a428;
        case 0x24a42cu: goto label_24a42c;
        case 0x24a430u: goto label_24a430;
        case 0x24a434u: goto label_24a434;
        case 0x24a438u: goto label_24a438;
        case 0x24a43cu: goto label_24a43c;
        case 0x24a440u: goto label_24a440;
        case 0x24a444u: goto label_24a444;
        case 0x24a448u: goto label_24a448;
        case 0x24a44cu: goto label_24a44c;
        case 0x24a450u: goto label_24a450;
        case 0x24a454u: goto label_24a454;
        case 0x24a458u: goto label_24a458;
        case 0x24a45cu: goto label_24a45c;
        case 0x24a460u: goto label_24a460;
        case 0x24a464u: goto label_24a464;
        case 0x24a468u: goto label_24a468;
        case 0x24a46cu: goto label_24a46c;
        case 0x24a470u: goto label_24a470;
        case 0x24a474u: goto label_24a474;
        case 0x24a478u: goto label_24a478;
        case 0x24a47cu: goto label_24a47c;
        case 0x24a480u: goto label_24a480;
        case 0x24a484u: goto label_24a484;
        case 0x24a488u: goto label_24a488;
        case 0x24a48cu: goto label_24a48c;
        case 0x24a490u: goto label_24a490;
        case 0x24a494u: goto label_24a494;
        case 0x24a498u: goto label_24a498;
        case 0x24a49cu: goto label_24a49c;
        case 0x24a4a0u: goto label_24a4a0;
        case 0x24a4a4u: goto label_24a4a4;
        case 0x24a4a8u: goto label_24a4a8;
        case 0x24a4acu: goto label_24a4ac;
        case 0x24a4b0u: goto label_24a4b0;
        case 0x24a4b4u: goto label_24a4b4;
        case 0x24a4b8u: goto label_24a4b8;
        case 0x24a4bcu: goto label_24a4bc;
        case 0x24a4c0u: goto label_24a4c0;
        case 0x24a4c4u: goto label_24a4c4;
        case 0x24a4c8u: goto label_24a4c8;
        case 0x24a4ccu: goto label_24a4cc;
        case 0x24a4d0u: goto label_24a4d0;
        case 0x24a4d4u: goto label_24a4d4;
        case 0x24a4d8u: goto label_24a4d8;
        case 0x24a4dcu: goto label_24a4dc;
        case 0x24a4e0u: goto label_24a4e0;
        case 0x24a4e4u: goto label_24a4e4;
        case 0x24a4e8u: goto label_24a4e8;
        case 0x24a4ecu: goto label_24a4ec;
        case 0x24a4f0u: goto label_24a4f0;
        case 0x24a4f4u: goto label_24a4f4;
        case 0x24a4f8u: goto label_24a4f8;
        case 0x24a4fcu: goto label_24a4fc;
        case 0x24a500u: goto label_24a500;
        case 0x24a504u: goto label_24a504;
        case 0x24a508u: goto label_24a508;
        case 0x24a50cu: goto label_24a50c;
        case 0x24a510u: goto label_24a510;
        case 0x24a514u: goto label_24a514;
        case 0x24a518u: goto label_24a518;
        case 0x24a51cu: goto label_24a51c;
        case 0x24a520u: goto label_24a520;
        case 0x24a524u: goto label_24a524;
        case 0x24a528u: goto label_24a528;
        case 0x24a52cu: goto label_24a52c;
        case 0x24a530u: goto label_24a530;
        case 0x24a534u: goto label_24a534;
        case 0x24a538u: goto label_24a538;
        case 0x24a53cu: goto label_24a53c;
        case 0x24a540u: goto label_24a540;
        case 0x24a544u: goto label_24a544;
        case 0x24a548u: goto label_24a548;
        case 0x24a54cu: goto label_24a54c;
        case 0x24a550u: goto label_24a550;
        case 0x24a554u: goto label_24a554;
        case 0x24a558u: goto label_24a558;
        case 0x24a55cu: goto label_24a55c;
        case 0x24a560u: goto label_24a560;
        case 0x24a564u: goto label_24a564;
        case 0x24a568u: goto label_24a568;
        case 0x24a56cu: goto label_24a56c;
        case 0x24a570u: goto label_24a570;
        case 0x24a574u: goto label_24a574;
        case 0x24a578u: goto label_24a578;
        case 0x24a57cu: goto label_24a57c;
        case 0x24a580u: goto label_24a580;
        case 0x24a584u: goto label_24a584;
        case 0x24a588u: goto label_24a588;
        case 0x24a58cu: goto label_24a58c;
        case 0x24a590u: goto label_24a590;
        case 0x24a594u: goto label_24a594;
        case 0x24a598u: goto label_24a598;
        case 0x24a59cu: goto label_24a59c;
        case 0x24a5a0u: goto label_24a5a0;
        case 0x24a5a4u: goto label_24a5a4;
        case 0x24a5a8u: goto label_24a5a8;
        case 0x24a5acu: goto label_24a5ac;
        case 0x24a5b0u: goto label_24a5b0;
        case 0x24a5b4u: goto label_24a5b4;
        case 0x24a5b8u: goto label_24a5b8;
        case 0x24a5bcu: goto label_24a5bc;
        case 0x24a5c0u: goto label_24a5c0;
        case 0x24a5c4u: goto label_24a5c4;
        case 0x24a5c8u: goto label_24a5c8;
        case 0x24a5ccu: goto label_24a5cc;
        case 0x24a5d0u: goto label_24a5d0;
        case 0x24a5d4u: goto label_24a5d4;
        case 0x24a5d8u: goto label_24a5d8;
        case 0x24a5dcu: goto label_24a5dc;
        case 0x24a5e0u: goto label_24a5e0;
        case 0x24a5e4u: goto label_24a5e4;
        case 0x24a5e8u: goto label_24a5e8;
        case 0x24a5ecu: goto label_24a5ec;
        case 0x24a5f0u: goto label_24a5f0;
        case 0x24a5f4u: goto label_24a5f4;
        case 0x24a5f8u: goto label_24a5f8;
        case 0x24a5fcu: goto label_24a5fc;
        case 0x24a600u: goto label_24a600;
        case 0x24a604u: goto label_24a604;
        case 0x24a608u: goto label_24a608;
        case 0x24a60cu: goto label_24a60c;
        case 0x24a610u: goto label_24a610;
        case 0x24a614u: goto label_24a614;
        case 0x24a618u: goto label_24a618;
        case 0x24a61cu: goto label_24a61c;
        case 0x24a620u: goto label_24a620;
        case 0x24a624u: goto label_24a624;
        case 0x24a628u: goto label_24a628;
        case 0x24a62cu: goto label_24a62c;
        case 0x24a630u: goto label_24a630;
        case 0x24a634u: goto label_24a634;
        case 0x24a638u: goto label_24a638;
        case 0x24a63cu: goto label_24a63c;
        case 0x24a640u: goto label_24a640;
        case 0x24a644u: goto label_24a644;
        case 0x24a648u: goto label_24a648;
        case 0x24a64cu: goto label_24a64c;
        case 0x24a650u: goto label_24a650;
        case 0x24a654u: goto label_24a654;
        case 0x24a658u: goto label_24a658;
        case 0x24a65cu: goto label_24a65c;
        case 0x24a660u: goto label_24a660;
        case 0x24a664u: goto label_24a664;
        case 0x24a668u: goto label_24a668;
        case 0x24a66cu: goto label_24a66c;
        case 0x24a670u: goto label_24a670;
        case 0x24a674u: goto label_24a674;
        case 0x24a678u: goto label_24a678;
        case 0x24a67cu: goto label_24a67c;
        case 0x24a680u: goto label_24a680;
        case 0x24a684u: goto label_24a684;
        case 0x24a688u: goto label_24a688;
        case 0x24a68cu: goto label_24a68c;
        case 0x24a690u: goto label_24a690;
        case 0x24a694u: goto label_24a694;
        case 0x24a698u: goto label_24a698;
        case 0x24a69cu: goto label_24a69c;
        case 0x24a6a0u: goto label_24a6a0;
        case 0x24a6a4u: goto label_24a6a4;
        case 0x24a6a8u: goto label_24a6a8;
        case 0x24a6acu: goto label_24a6ac;
        case 0x24a6b0u: goto label_24a6b0;
        case 0x24a6b4u: goto label_24a6b4;
        case 0x24a6b8u: goto label_24a6b8;
        case 0x24a6bcu: goto label_24a6bc;
        case 0x24a6c0u: goto label_24a6c0;
        case 0x24a6c4u: goto label_24a6c4;
        case 0x24a6c8u: goto label_24a6c8;
        case 0x24a6ccu: goto label_24a6cc;
        case 0x24a6d0u: goto label_24a6d0;
        case 0x24a6d4u: goto label_24a6d4;
        case 0x24a6d8u: goto label_24a6d8;
        case 0x24a6dcu: goto label_24a6dc;
        case 0x24a6e0u: goto label_24a6e0;
        case 0x24a6e4u: goto label_24a6e4;
        case 0x24a6e8u: goto label_24a6e8;
        case 0x24a6ecu: goto label_24a6ec;
        case 0x24a6f0u: goto label_24a6f0;
        case 0x24a6f4u: goto label_24a6f4;
        case 0x24a6f8u: goto label_24a6f8;
        case 0x24a6fcu: goto label_24a6fc;
        case 0x24a700u: goto label_24a700;
        case 0x24a704u: goto label_24a704;
        case 0x24a708u: goto label_24a708;
        case 0x24a70cu: goto label_24a70c;
        case 0x24a710u: goto label_24a710;
        case 0x24a714u: goto label_24a714;
        case 0x24a718u: goto label_24a718;
        case 0x24a71cu: goto label_24a71c;
        case 0x24a720u: goto label_24a720;
        case 0x24a724u: goto label_24a724;
        case 0x24a728u: goto label_24a728;
        case 0x24a72cu: goto label_24a72c;
        case 0x24a730u: goto label_24a730;
        case 0x24a734u: goto label_24a734;
        case 0x24a738u: goto label_24a738;
        case 0x24a73cu: goto label_24a73c;
        case 0x24a740u: goto label_24a740;
        case 0x24a744u: goto label_24a744;
        case 0x24a748u: goto label_24a748;
        case 0x24a74cu: goto label_24a74c;
        case 0x24a750u: goto label_24a750;
        case 0x24a754u: goto label_24a754;
        case 0x24a758u: goto label_24a758;
        case 0x24a75cu: goto label_24a75c;
        case 0x24a760u: goto label_24a760;
        case 0x24a764u: goto label_24a764;
        case 0x24a768u: goto label_24a768;
        case 0x24a76cu: goto label_24a76c;
        case 0x24a770u: goto label_24a770;
        case 0x24a774u: goto label_24a774;
        case 0x24a778u: goto label_24a778;
        case 0x24a77cu: goto label_24a77c;
        case 0x24a780u: goto label_24a780;
        case 0x24a784u: goto label_24a784;
        case 0x24a788u: goto label_24a788;
        case 0x24a78cu: goto label_24a78c;
        case 0x24a790u: goto label_24a790;
        case 0x24a794u: goto label_24a794;
        case 0x24a798u: goto label_24a798;
        case 0x24a79cu: goto label_24a79c;
        case 0x24a7a0u: goto label_24a7a0;
        case 0x24a7a4u: goto label_24a7a4;
        case 0x24a7a8u: goto label_24a7a8;
        case 0x24a7acu: goto label_24a7ac;
        case 0x24a7b0u: goto label_24a7b0;
        case 0x24a7b4u: goto label_24a7b4;
        case 0x24a7b8u: goto label_24a7b8;
        case 0x24a7bcu: goto label_24a7bc;
        case 0x24a7c0u: goto label_24a7c0;
        case 0x24a7c4u: goto label_24a7c4;
        case 0x24a7c8u: goto label_24a7c8;
        case 0x24a7ccu: goto label_24a7cc;
        case 0x24a7d0u: goto label_24a7d0;
        case 0x24a7d4u: goto label_24a7d4;
        case 0x24a7d8u: goto label_24a7d8;
        case 0x24a7dcu: goto label_24a7dc;
        case 0x24a7e0u: goto label_24a7e0;
        case 0x24a7e4u: goto label_24a7e4;
        case 0x24a7e8u: goto label_24a7e8;
        case 0x24a7ecu: goto label_24a7ec;
        case 0x24a7f0u: goto label_24a7f0;
        case 0x24a7f4u: goto label_24a7f4;
        case 0x24a7f8u: goto label_24a7f8;
        case 0x24a7fcu: goto label_24a7fc;
        case 0x24a800u: goto label_24a800;
        case 0x24a804u: goto label_24a804;
        case 0x24a808u: goto label_24a808;
        case 0x24a80cu: goto label_24a80c;
        case 0x24a810u: goto label_24a810;
        case 0x24a814u: goto label_24a814;
        case 0x24a818u: goto label_24a818;
        case 0x24a81cu: goto label_24a81c;
        case 0x24a820u: goto label_24a820;
        case 0x24a824u: goto label_24a824;
        case 0x24a828u: goto label_24a828;
        case 0x24a82cu: goto label_24a82c;
        case 0x24a830u: goto label_24a830;
        case 0x24a834u: goto label_24a834;
        case 0x24a838u: goto label_24a838;
        case 0x24a83cu: goto label_24a83c;
        case 0x24a840u: goto label_24a840;
        case 0x24a844u: goto label_24a844;
        case 0x24a848u: goto label_24a848;
        case 0x24a84cu: goto label_24a84c;
        case 0x24a850u: goto label_24a850;
        case 0x24a854u: goto label_24a854;
        case 0x24a858u: goto label_24a858;
        case 0x24a85cu: goto label_24a85c;
        case 0x24a860u: goto label_24a860;
        case 0x24a864u: goto label_24a864;
        case 0x24a868u: goto label_24a868;
        case 0x24a86cu: goto label_24a86c;
        case 0x24a870u: goto label_24a870;
        case 0x24a874u: goto label_24a874;
        case 0x24a878u: goto label_24a878;
        case 0x24a87cu: goto label_24a87c;
        case 0x24a880u: goto label_24a880;
        case 0x24a884u: goto label_24a884;
        case 0x24a888u: goto label_24a888;
        case 0x24a88cu: goto label_24a88c;
        case 0x24a890u: goto label_24a890;
        case 0x24a894u: goto label_24a894;
        case 0x24a898u: goto label_24a898;
        case 0x24a89cu: goto label_24a89c;
        case 0x24a8a0u: goto label_24a8a0;
        case 0x24a8a4u: goto label_24a8a4;
        case 0x24a8a8u: goto label_24a8a8;
        case 0x24a8acu: goto label_24a8ac;
        case 0x24a8b0u: goto label_24a8b0;
        case 0x24a8b4u: goto label_24a8b4;
        case 0x24a8b8u: goto label_24a8b8;
        case 0x24a8bcu: goto label_24a8bc;
        case 0x24a8c0u: goto label_24a8c0;
        case 0x24a8c4u: goto label_24a8c4;
        case 0x24a8c8u: goto label_24a8c8;
        case 0x24a8ccu: goto label_24a8cc;
        case 0x24a8d0u: goto label_24a8d0;
        case 0x24a8d4u: goto label_24a8d4;
        case 0x24a8d8u: goto label_24a8d8;
        case 0x24a8dcu: goto label_24a8dc;
        case 0x24a8e0u: goto label_24a8e0;
        case 0x24a8e4u: goto label_24a8e4;
        case 0x24a8e8u: goto label_24a8e8;
        case 0x24a8ecu: goto label_24a8ec;
        case 0x24a8f0u: goto label_24a8f0;
        case 0x24a8f4u: goto label_24a8f4;
        case 0x24a8f8u: goto label_24a8f8;
        case 0x24a8fcu: goto label_24a8fc;
        case 0x24a900u: goto label_24a900;
        case 0x24a904u: goto label_24a904;
        case 0x24a908u: goto label_24a908;
        case 0x24a90cu: goto label_24a90c;
        case 0x24a910u: goto label_24a910;
        case 0x24a914u: goto label_24a914;
        case 0x24a918u: goto label_24a918;
        case 0x24a91cu: goto label_24a91c;
        case 0x24a920u: goto label_24a920;
        case 0x24a924u: goto label_24a924;
        case 0x24a928u: goto label_24a928;
        case 0x24a92cu: goto label_24a92c;
        case 0x24a930u: goto label_24a930;
        case 0x24a934u: goto label_24a934;
        case 0x24a938u: goto label_24a938;
        case 0x24a93cu: goto label_24a93c;
        case 0x24a940u: goto label_24a940;
        case 0x24a944u: goto label_24a944;
        case 0x24a948u: goto label_24a948;
        case 0x24a94cu: goto label_24a94c;
        case 0x24a950u: goto label_24a950;
        case 0x24a954u: goto label_24a954;
        case 0x24a958u: goto label_24a958;
        case 0x24a95cu: goto label_24a95c;
        case 0x24a960u: goto label_24a960;
        case 0x24a964u: goto label_24a964;
        case 0x24a968u: goto label_24a968;
        case 0x24a96cu: goto label_24a96c;
        case 0x24a970u: goto label_24a970;
        case 0x24a974u: goto label_24a974;
        case 0x24a978u: goto label_24a978;
        case 0x24a97cu: goto label_24a97c;
        case 0x24a980u: goto label_24a980;
        case 0x24a984u: goto label_24a984;
        case 0x24a988u: goto label_24a988;
        case 0x24a98cu: goto label_24a98c;
        case 0x24a990u: goto label_24a990;
        case 0x24a994u: goto label_24a994;
        case 0x24a998u: goto label_24a998;
        case 0x24a99cu: goto label_24a99c;
        case 0x24a9a0u: goto label_24a9a0;
        case 0x24a9a4u: goto label_24a9a4;
        case 0x24a9a8u: goto label_24a9a8;
        case 0x24a9acu: goto label_24a9ac;
        case 0x24a9b0u: goto label_24a9b0;
        case 0x24a9b4u: goto label_24a9b4;
        case 0x24a9b8u: goto label_24a9b8;
        case 0x24a9bcu: goto label_24a9bc;
        case 0x24a9c0u: goto label_24a9c0;
        case 0x24a9c4u: goto label_24a9c4;
        case 0x24a9c8u: goto label_24a9c8;
        case 0x24a9ccu: goto label_24a9cc;
        case 0x24a9d0u: goto label_24a9d0;
        case 0x24a9d4u: goto label_24a9d4;
        case 0x24a9d8u: goto label_24a9d8;
        case 0x24a9dcu: goto label_24a9dc;
        case 0x24a9e0u: goto label_24a9e0;
        case 0x24a9e4u: goto label_24a9e4;
        case 0x24a9e8u: goto label_24a9e8;
        case 0x24a9ecu: goto label_24a9ec;
        case 0x24a9f0u: goto label_24a9f0;
        case 0x24a9f4u: goto label_24a9f4;
        case 0x24a9f8u: goto label_24a9f8;
        case 0x24a9fcu: goto label_24a9fc;
        case 0x24aa00u: goto label_24aa00;
        case 0x24aa04u: goto label_24aa04;
        case 0x24aa08u: goto label_24aa08;
        case 0x24aa0cu: goto label_24aa0c;
        case 0x24aa10u: goto label_24aa10;
        case 0x24aa14u: goto label_24aa14;
        case 0x24aa18u: goto label_24aa18;
        case 0x24aa1cu: goto label_24aa1c;
        case 0x24aa20u: goto label_24aa20;
        case 0x24aa24u: goto label_24aa24;
        case 0x24aa28u: goto label_24aa28;
        case 0x24aa2cu: goto label_24aa2c;
        case 0x24aa30u: goto label_24aa30;
        case 0x24aa34u: goto label_24aa34;
        case 0x24aa38u: goto label_24aa38;
        case 0x24aa3cu: goto label_24aa3c;
        case 0x24aa40u: goto label_24aa40;
        case 0x24aa44u: goto label_24aa44;
        case 0x24aa48u: goto label_24aa48;
        case 0x24aa4cu: goto label_24aa4c;
        case 0x24aa50u: goto label_24aa50;
        case 0x24aa54u: goto label_24aa54;
        case 0x24aa58u: goto label_24aa58;
        case 0x24aa5cu: goto label_24aa5c;
        case 0x24aa60u: goto label_24aa60;
        case 0x24aa64u: goto label_24aa64;
        case 0x24aa68u: goto label_24aa68;
        case 0x24aa6cu: goto label_24aa6c;
        case 0x24aa70u: goto label_24aa70;
        case 0x24aa74u: goto label_24aa74;
        case 0x24aa78u: goto label_24aa78;
        case 0x24aa7cu: goto label_24aa7c;
        case 0x24aa80u: goto label_24aa80;
        case 0x24aa84u: goto label_24aa84;
        case 0x24aa88u: goto label_24aa88;
        case 0x24aa8cu: goto label_24aa8c;
        case 0x24aa90u: goto label_24aa90;
        case 0x24aa94u: goto label_24aa94;
        case 0x24aa98u: goto label_24aa98;
        case 0x24aa9cu: goto label_24aa9c;
        case 0x24aaa0u: goto label_24aaa0;
        case 0x24aaa4u: goto label_24aaa4;
        case 0x24aaa8u: goto label_24aaa8;
        case 0x24aaacu: goto label_24aaac;
        case 0x24aab0u: goto label_24aab0;
        case 0x24aab4u: goto label_24aab4;
        case 0x24aab8u: goto label_24aab8;
        case 0x24aabcu: goto label_24aabc;
        case 0x24aac0u: goto label_24aac0;
        case 0x24aac4u: goto label_24aac4;
        case 0x24aac8u: goto label_24aac8;
        case 0x24aaccu: goto label_24aacc;
        case 0x24aad0u: goto label_24aad0;
        case 0x24aad4u: goto label_24aad4;
        case 0x24aad8u: goto label_24aad8;
        case 0x24aadcu: goto label_24aadc;
        case 0x24aae0u: goto label_24aae0;
        case 0x24aae4u: goto label_24aae4;
        case 0x24aae8u: goto label_24aae8;
        case 0x24aaecu: goto label_24aaec;
        case 0x24aaf0u: goto label_24aaf0;
        case 0x24aaf4u: goto label_24aaf4;
        case 0x24aaf8u: goto label_24aaf8;
        case 0x24aafcu: goto label_24aafc;
        case 0x24ab00u: goto label_24ab00;
        case 0x24ab04u: goto label_24ab04;
        case 0x24ab08u: goto label_24ab08;
        case 0x24ab0cu: goto label_24ab0c;
        case 0x24ab10u: goto label_24ab10;
        case 0x24ab14u: goto label_24ab14;
        case 0x24ab18u: goto label_24ab18;
        case 0x24ab1cu: goto label_24ab1c;
        case 0x24ab20u: goto label_24ab20;
        case 0x24ab24u: goto label_24ab24;
        case 0x24ab28u: goto label_24ab28;
        case 0x24ab2cu: goto label_24ab2c;
        case 0x24ab30u: goto label_24ab30;
        case 0x24ab34u: goto label_24ab34;
        case 0x24ab38u: goto label_24ab38;
        case 0x24ab3cu: goto label_24ab3c;
        case 0x24ab40u: goto label_24ab40;
        case 0x24ab44u: goto label_24ab44;
        case 0x24ab48u: goto label_24ab48;
        case 0x24ab4cu: goto label_24ab4c;
        case 0x24ab50u: goto label_24ab50;
        case 0x24ab54u: goto label_24ab54;
        case 0x24ab58u: goto label_24ab58;
        case 0x24ab5cu: goto label_24ab5c;
        case 0x24ab60u: goto label_24ab60;
        case 0x24ab64u: goto label_24ab64;
        case 0x24ab68u: goto label_24ab68;
        case 0x24ab6cu: goto label_24ab6c;
        case 0x24ab70u: goto label_24ab70;
        case 0x24ab74u: goto label_24ab74;
        case 0x24ab78u: goto label_24ab78;
        case 0x24ab7cu: goto label_24ab7c;
        case 0x24ab80u: goto label_24ab80;
        case 0x24ab84u: goto label_24ab84;
        case 0x24ab88u: goto label_24ab88;
        case 0x24ab8cu: goto label_24ab8c;
        case 0x24ab90u: goto label_24ab90;
        case 0x24ab94u: goto label_24ab94;
        case 0x24ab98u: goto label_24ab98;
        case 0x24ab9cu: goto label_24ab9c;
        case 0x24aba0u: goto label_24aba0;
        case 0x24aba4u: goto label_24aba4;
        case 0x24aba8u: goto label_24aba8;
        case 0x24abacu: goto label_24abac;
        default: break;
    }

    ctx->pc = 0x249310u;

label_249310:
    // 0x249310: 0x27bdfe30  addiu       $sp, $sp, -0x1D0
    ctx->pc = 0x249310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966832));
label_249314:
    // 0x249314: 0x7fbf0090  sq          $ra, 0x90($sp)
    ctx->pc = 0x249314u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 31));
label_249318:
    // 0x249318: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x249318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_24931c:
    // 0x24931c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x24931cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_249320:
    // 0x249320: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x249320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_249324:
    // 0x249324: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x249324u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_249328:
    // 0x249328: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x249328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_24932c:
    // 0x24932c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x24932cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_249330:
    // 0x249330: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x249330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_249334:
    // 0x249334: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x249334u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_249338:
    // 0x249338: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x249338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_24933c:
    // 0x24933c: 0xafa401c8  sw          $a0, 0x1C8($sp)
    ctx->pc = 0x24933cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 456), GPR_U32(ctx, 4));
label_249340:
    // 0x249340: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x249340u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_249344:
    // 0x249344: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x249344u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_249348:
    // 0x249348: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x249348u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
label_24934c:
    // 0x24934c: 0x2463b420  addiu       $v1, $v1, -0x4BE0
    ctx->pc = 0x24934cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947872));
label_249350:
    // 0x249350: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x249350u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_249354:
    // 0x249354: 0x90a60001  lbu         $a2, 0x1($a1)
    ctx->pc = 0x249354u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
label_249358:
    // 0x249358: 0x30c500ff  andi        $a1, $a2, 0xFF
    ctx->pc = 0x249358u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_24935c:
    // 0x24935c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x24935cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_249360:
    // 0x249360: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x249360u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_249364:
    // 0x249364: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x249364u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_249368:
    // 0x249368: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x249368u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_24936c:
    // 0x24936c: 0x42900  sll         $a1, $a0, 4
    ctx->pc = 0x24936cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_249370:
    // 0x249370: 0x8fa601c8  lw          $a2, 0x1C8($sp)
    ctx->pc = 0x249370u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 456)));
label_249374:
    // 0x249374: 0x8cc702d0  lw          $a3, 0x2D0($a2)
    ctx->pc = 0x249374u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 720)));
label_249378:
    // 0x249378: 0xe53021  addu        $a2, $a3, $a1
    ctx->pc = 0x249378u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
label_24937c:
    // 0x24937c: 0x70c08628  paddub      $s0, $a2, $zero
    ctx->pc = 0x24937cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_249380:
    // 0x249380: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x249380u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_249384:
    // 0x249384: 0x3c050039  lui         $a1, 0x39
    ctx->pc = 0x249384u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)57 << 16));
label_249388:
    // 0x249388: 0x24a6b420  addiu       $a2, $a1, -0x4BE0
    ctx->pc = 0x249388u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947872));
label_24938c:
    // 0x24938c: 0xc33821  addu        $a3, $a2, $v1
    ctx->pc = 0x24938cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_249390:
    // 0x249390: 0x90e40001  lbu         $a0, 0x1($a3)
    ctx->pc = 0x249390u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
label_249394:
    // 0x249394: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x249394u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_249398:
    // 0x249398: 0x32180  sll         $a0, $v1, 6
    ctx->pc = 0x249398u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_24939c:
    // 0x24939c: 0x8fb601c8  lw          $s6, 0x1C8($sp)
    ctx->pc = 0x24939cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 456)));
label_2493a0:
    // 0x2493a0: 0x8ec30130  lw          $v1, 0x130($s6)
    ctx->pc = 0x2493a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 304)));
label_2493a4:
    // 0x2493a4: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x2493a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2493a8:
    // 0x2493a8: 0xafa40120  sw          $a0, 0x120($sp)
    ctx->pc = 0x2493a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 4));
label_2493ac:
    // 0x2493ac: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x2493acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_2493b0:
    // 0x2493b0: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x2493b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
label_2493b4:
    // 0x2493b4: 0x2485b420  addiu       $a1, $a0, -0x4BE0
    ctx->pc = 0x2493b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947872));
label_2493b8:
    // 0x2493b8: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x2493b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_2493bc:
    // 0x2493bc: 0x90a50002  lbu         $a1, 0x2($a1)
    ctx->pc = 0x2493bcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
label_2493c0:
    // 0x2493c0: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x2493c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_2493c4:
    // 0x2493c4: 0x530c0  sll         $a2, $a1, 3
    ctx->pc = 0x2493c4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_2493c8:
    // 0x2493c8: 0xc51821  addu        $v1, $a2, $a1
    ctx->pc = 0x2493c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_2493cc:
    // 0x2493cc: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x2493ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_2493d0:
    // 0x2493d0: 0x8fb601c8  lw          $s6, 0x1C8($sp)
    ctx->pc = 0x2493d0u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 456)));
label_2493d4:
    // 0x2493d4: 0x8ec30058  lw          $v1, 0x58($s6)
    ctx->pc = 0x2493d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 88)));
label_2493d8:
    // 0x2493d8: 0x64b821  addu        $s7, $v1, $a0
    ctx->pc = 0x2493d8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2493dc:
    // 0x2493dc: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x2493dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_2493e0:
    // 0x2493e0: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x2493e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
label_2493e4:
    // 0x2493e4: 0x2485b420  addiu       $a1, $a0, -0x4BE0
    ctx->pc = 0x2493e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947872));
label_2493e8:
    // 0x2493e8: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2493e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_2493ec:
    // 0x2493ec: 0x90630003  lbu         $v1, 0x3($v1)
    ctx->pc = 0x2493ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
label_2493f0:
    // 0x2493f0: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x2493f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_2493f4:
    // 0x2493f4: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x2493f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_2493f8:
    // 0x2493f8: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x2493f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_2493fc:
    // 0x2493fc: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2493fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_249400:
    // 0x249400: 0x8fa701c8  lw          $a3, 0x1C8($sp)
    ctx->pc = 0x249400u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 456)));
label_249404:
    // 0x249404: 0x8ce50058  lw          $a1, 0x58($a3)
    ctx->pc = 0x249404u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 88)));
label_249408:
    // 0x249408: 0xa3f021  addu        $fp, $a1, $v1
    ctx->pc = 0x249408u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_24940c:
    // 0x24940c: 0x112880  sll         $a1, $s1, 2
    ctx->pc = 0x24940cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_249410:
    // 0x249410: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x249410u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
label_249414:
    // 0x249414: 0x2483b420  addiu       $v1, $a0, -0x4BE0
    ctx->pc = 0x249414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947872));
label_249418:
    // 0x249418: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x249418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_24941c:
    // 0x24941c: 0x90650001  lbu         $a1, 0x1($v1)
    ctx->pc = 0x24941cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
label_249420:
    // 0x249420: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x249420u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_249424:
    // 0x249424: 0x32180  sll         $a0, $v1, 6
    ctx->pc = 0x249424u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_249428:
    // 0x249428: 0x8fa301c8  lw          $v1, 0x1C8($sp)
    ctx->pc = 0x249428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 456)));
label_24942c:
    // 0x24942c: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x24942cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
label_249430:
    // 0x249430: 0x649021  addu        $s2, $v1, $a0
    ctx->pc = 0x249430u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_249434:
    // 0x249434: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x249434u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_249438:
    // 0x249438: 0x8c34dcf0  lw          $s4, -0x2310($at)
    ctx->pc = 0x249438u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294958320)));
label_24943c:
    // 0x24943c: 0x112880  sll         $a1, $s1, 2
    ctx->pc = 0x24943cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_249440:
    // 0x249440: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x249440u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
label_249444:
    // 0x249444: 0x2464b420  addiu       $a0, $v1, -0x4BE0
    ctx->pc = 0x249444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947872));
label_249448:
    // 0x249448: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x249448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_24944c:
    // 0x24944c: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x24944cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_249450:
    // 0x249450: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x249450u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_249454:
    // 0x249454: 0x52180  sll         $a0, $a1, 6
    ctx->pc = 0x249454u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
label_249458:
    // 0x249458: 0x8fa301c8  lw          $v1, 0x1C8($sp)
    ctx->pc = 0x249458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 456)));
label_24945c:
    // 0x24945c: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x24945cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
label_249460:
    // 0x249460: 0x64a821  addu        $s5, $v1, $a0
    ctx->pc = 0x249460u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_249464:
    // 0x249464: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x249464u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_249468:
    // 0x249468: 0x94a3002e  lhu         $v1, 0x2E($a1)
    ctx->pc = 0x249468u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 46)));
label_24946c:
    // 0x24946c: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x24946cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_249470:
    // 0x249470: 0x30850001  andi        $a1, $a0, 0x1
    ctx->pc = 0x249470u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_249474:
    // 0x249474: 0x10a005bc  beqz        $a1, . + 4 + (0x5BC << 2)
label_249478:
    if (ctx->pc == 0x249478u) {
        ctx->pc = 0x24947Cu;
        goto label_24947c;
    }
    ctx->pc = 0x249474u;
    {
        const bool branch_taken_0x249474 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x249474) {
            ctx->pc = 0x24AB68u;
            goto label_24ab68;
        }
    }
    ctx->pc = 0x24947Cu;
label_24947c:
    // 0x24947c: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x24947cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_249480:
    // 0x249480: 0x94a4002e  lhu         $a0, 0x2E($a1)
    ctx->pc = 0x249480u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 46)));
label_249484:
    // 0x249484: 0x3085ffff  andi        $a1, $a0, 0xFFFF
    ctx->pc = 0x249484u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
label_249488:
    // 0x249488: 0x30a40002  andi        $a0, $a1, 0x2
    ctx->pc = 0x249488u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
label_24948c:
    // 0x24948c: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
label_249490:
    if (ctx->pc == 0x249490u) {
        ctx->pc = 0x249494u;
        goto label_249494;
    }
    ctx->pc = 0x24948Cu;
    {
        const bool branch_taken_0x24948c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x24948c) {
            ctx->pc = 0x2494C0u;
            goto label_2494c0;
        }
    }
    ctx->pc = 0x249494u;
label_249494:
    // 0x249494: 0x26060150  addiu       $a2, $s0, 0x150
    ctx->pc = 0x249494u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_249498:
    // 0x249498: 0x94c4002e  lhu         $a0, 0x2E($a2)
    ctx->pc = 0x249498u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 46)));
label_24949c:
    // 0x24949c: 0x3085fffd  andi        $a1, $a0, 0xFFFD
    ctx->pc = 0x24949cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65533);
label_2494a0:
    // 0x2494a0: 0xa4c5002e  sh          $a1, 0x2E($a2)
    ctx->pc = 0x2494a0u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 46), (uint16_t)GPR_U32(ctx, 5));
label_2494a4:
    // 0x2494a4: 0x26070150  addiu       $a3, $s0, 0x150
    ctx->pc = 0x2494a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_2494a8:
    // 0x2494a8: 0xa0e00029  sb          $zero, 0x29($a3)
    ctx->pc = 0x2494a8u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 41), (uint8_t)GPR_U32(ctx, 0));
label_2494ac:
    // 0x2494ac: 0x8fa501c8  lw          $a1, 0x1C8($sp)
    ctx->pc = 0x2494acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 456)));
label_2494b0:
    // 0x2494b0: 0x24a31330  addiu       $v1, $a1, 0x1330
    ctx->pc = 0x2494b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
label_2494b4:
    // 0x2494b4: 0x8c640030  lw          $a0, 0x30($v1)
    ctx->pc = 0x2494b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_2494b8:
    // 0x2494b8: 0x34850100  ori         $a1, $a0, 0x100
    ctx->pc = 0x2494b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)256);
label_2494bc:
    // 0x2494bc: 0xac650030  sw          $a1, 0x30($v1)
    ctx->pc = 0x2494bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 5));
label_2494c0:
    // 0x2494c0: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x2494c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_2494c4:
    // 0x2494c4: 0x9464002e  lhu         $a0, 0x2E($v1)
    ctx->pc = 0x2494c4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 46)));
label_2494c8:
    // 0x2494c8: 0x3085ffff  andi        $a1, $a0, 0xFFFF
    ctx->pc = 0x2494c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
label_2494cc:
    // 0x2494cc: 0x30a30008  andi        $v1, $a1, 0x8
    ctx->pc = 0x2494ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)8);
label_2494d0:
    // 0x2494d0: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
label_2494d4:
    if (ctx->pc == 0x2494D4u) {
        ctx->pc = 0x2494D8u;
        goto label_2494d8;
    }
    ctx->pc = 0x2494D0u;
    {
        const bool branch_taken_0x2494d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2494d0) {
            ctx->pc = 0x249518u;
            goto label_249518;
        }
    }
    ctx->pc = 0x2494D8u;
label_2494d8:
    // 0x2494d8: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x2494d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_2494dc:
    // 0x2494dc: 0x9483002e  lhu         $v1, 0x2E($a0)
    ctx->pc = 0x2494dcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 46)));
label_2494e0:
    // 0x2494e0: 0x3063fff7  andi        $v1, $v1, 0xFFF7
    ctx->pc = 0x2494e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65527);
label_2494e4:
    // 0x2494e4: 0xa483002e  sh          $v1, 0x2E($a0)
    ctx->pc = 0x2494e4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 46), (uint16_t)GPR_U32(ctx, 3));
label_2494e8:
    // 0x2494e8: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x2494e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_2494ec:
    // 0x2494ec: 0x90850029  lbu         $a1, 0x29($a0)
    ctx->pc = 0x2494ecu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 41)));
label_2494f0:
    // 0x2494f0: 0x14a00006  bnez        $a1, . + 4 + (0x6 << 2)
label_2494f4:
    if (ctx->pc == 0x2494F4u) {
        ctx->pc = 0x2494F8u;
        goto label_2494f8;
    }
    ctx->pc = 0x2494F0u;
    {
        const bool branch_taken_0x2494f0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x2494f0) {
            ctx->pc = 0x24950Cu;
            goto label_24950c;
        }
    }
    ctx->pc = 0x2494F8u;
label_2494f8:
    // 0x2494f8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2494f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2494fc:
    // 0x2494fc: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x2494fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_249500:
    // 0x249500: 0xa0830029  sb          $v1, 0x29($a0)
    ctx->pc = 0x249500u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 41), (uint8_t)GPR_U32(ctx, 3));
label_249504:
    // 0x249504: 0x10000004  b           . + 4 + (0x4 << 2)
label_249508:
    if (ctx->pc == 0x249508u) {
        ctx->pc = 0x24950Cu;
        goto label_24950c;
    }
    ctx->pc = 0x249504u;
    {
        const bool branch_taken_0x249504 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x249504) {
            ctx->pc = 0x249518u;
            goto label_249518;
        }
    }
    ctx->pc = 0x24950Cu;
label_24950c:
    // 0x24950c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x24950cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_249510:
    // 0x249510: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x249510u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_249514:
    // 0x249514: 0xa0830029  sb          $v1, 0x29($a0)
    ctx->pc = 0x249514u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 41), (uint8_t)GPR_U32(ctx, 3));
label_249518:
    // 0x249518: 0x3c033e06  lui         $v1, 0x3E06
    ctx->pc = 0x249518u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15878 << 16));
label_24951c:
    // 0x24951c: 0x34630a92  ori         $v1, $v1, 0xA92
    ctx->pc = 0x24951cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2706);
label_249520:
    // 0x249520: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x249520u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_249524:
    // 0x249524: 0x0  nop
    ctx->pc = 0x249524u;
    // NOP
label_249528:
    // 0x249528: 0xe7a001b4  swc1        $f0, 0x1B4($sp)
    ctx->pc = 0x249528u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 436), bits); }
label_24952c:
    // 0x24952c: 0x3c043d49  lui         $a0, 0x3D49
    ctx->pc = 0x24952cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15689 << 16));
label_249530:
    // 0x249530: 0x34830fdb  ori         $v1, $a0, 0xFDB
    ctx->pc = 0x249530u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4059);
label_249534:
    // 0x249534: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x249534u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_249538:
    // 0x249538: 0x0  nop
    ctx->pc = 0x249538u;
    // NOP
label_24953c:
    // 0x24953c: 0xe7a001b8  swc1        $f0, 0x1B8($sp)
    ctx->pc = 0x24953cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 440), bits); }
label_249540:
    // 0x249540: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x249540u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_249544:
    // 0x249544: 0x90a30029  lbu         $v1, 0x29($a1)
    ctx->pc = 0x249544u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 41)));
label_249548:
    // 0x249548: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x249548u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_24954c:
    // 0x24954c: 0x2c810009  sltiu       $at, $a0, 0x9
    ctx->pc = 0x24954cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_249550:
    // 0x249550: 0x10200585  beqz        $at, . + 4 + (0x585 << 2)
label_249554:
    if (ctx->pc == 0x249554u) {
        ctx->pc = 0x249558u;
        goto label_249558;
    }
    ctx->pc = 0x249550u;
    {
        const bool branch_taken_0x249550 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x249550) {
            ctx->pc = 0x24AB68u;
            goto label_24ab68;
        }
    }
    ctx->pc = 0x249558u;
label_249558:
    // 0x249558: 0x3c06003b  lui         $a2, 0x3B
    ctx->pc = 0x249558u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)59 << 16));
label_24955c:
    // 0x24955c: 0x24c51290  addiu       $a1, $a2, 0x1290
    ctx->pc = 0x24955cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4752));
label_249560:
    // 0x249560: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x249560u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_249564:
    // 0x249564: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x249564u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_249568:
    // 0x249568: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x249568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_24956c:
    // 0x24956c: 0x600008  jr          $v1
label_249570:
    if (ctx->pc == 0x249570u) {
        ctx->pc = 0x249574u;
        goto label_249574;
    }
    ctx->pc = 0x24956Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24956Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x249574u;
label_249574:
    // 0x249574: 0x0  nop
    ctx->pc = 0x249574u;
    // NOP
label_249578:
    // 0x249578: 0x16200009  bnez        $s1, . + 4 + (0x9 << 2)
label_24957c:
    if (ctx->pc == 0x24957Cu) {
        ctx->pc = 0x249580u;
        goto label_249580;
    }
    ctx->pc = 0x249578u;
    {
        const bool branch_taken_0x249578 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x249578) {
            ctx->pc = 0x2495A0u;
            goto label_2495a0;
        }
    }
    ctx->pc = 0x249580u;
label_249580:
    // 0x249580: 0x96030140  lhu         $v1, 0x140($s0)
    ctx->pc = 0x249580u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
label_249584:
    // 0x249584: 0x346400a4  ori         $a0, $v1, 0xA4
    ctx->pc = 0x249584u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)164);
label_249588:
    // 0x249588: 0xa6040140  sh          $a0, 0x140($s0)
    ctx->pc = 0x249588u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 4));
label_24958c:
    // 0x24958c: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x24958cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_249590:
    // 0x249590: 0x8e050100  lw          $a1, 0x100($s0)
    ctx->pc = 0x249590u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
label_249594:
    // 0x249594: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x249594u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_249598:
    // 0x249598: 0xc040c00  jal         func_103000
label_24959c:
    if (ctx->pc == 0x24959Cu) {
        ctx->pc = 0x2495A0u;
        goto label_2495a0;
    }
    ctx->pc = 0x249598u;
    SET_GPR_U32(ctx, 31, 0x2495A0u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x2495A0u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2495A0u) { return; }
    ctx->pc = 0x2495A0u;
label_2495a0:
    // 0x2495a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2495a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2495a4:
    // 0x2495a4: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x2495a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_2495a8:
    // 0x2495a8: 0xa0820029  sb          $v0, 0x29($a0)
    ctx->pc = 0x2495a8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 41), (uint8_t)GPR_U32(ctx, 2));
label_2495ac:
    // 0x2495ac: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x2495acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
label_2495b0:
    // 0x2495b0: 0x34450fdb  ori         $a1, $v0, 0xFDB
    ctx->pc = 0x2495b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_2495b4:
    // 0x2495b4: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2495b4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2495b8:
    // 0x2495b8: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x2495b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_2495bc:
    // 0x2495bc: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x2495bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
label_2495c0:
    // 0x2495c0: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2495c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_2495c4:
    // 0x2495c4: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x2495c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
label_2495c8:
    // 0x2495c8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2495c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2495cc:
    // 0x2495cc: 0x8fa401c8  lw          $a0, 0x1C8($sp)
    ctx->pc = 0x2495ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 456)));
label_2495d0:
    // 0x2495d0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2495d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2495d4:
    // 0x2495d4: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x2495d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_2495d8:
    // 0x2495d8: 0xe4a1000c  swc1        $f1, 0xC($a1)
    ctx->pc = 0x2495d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
label_2495dc:
    // 0x2495dc: 0x26060150  addiu       $a2, $s0, 0x150
    ctx->pc = 0x2495dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_2495e0:
    // 0x2495e0: 0xe4c10014  swc1        $f1, 0x14($a2)
    ctx->pc = 0x2495e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 20), bits); }
label_2495e4:
    // 0x2495e4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2495e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2495e8:
    // 0x2495e8: 0x26070150  addiu       $a3, $s0, 0x150
    ctx->pc = 0x2495e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_2495ec:
    // 0x2495ec: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x2495ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
label_2495f0:
    // 0x2495f0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2495f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2495f4:
    // 0x2495f4: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2495f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_2495f8:
    // 0x2495f8: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2495f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_2495fc:
    // 0x2495fc: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2495fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_249600:
    // 0x249600: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x249600u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_249604:
    // 0x249604: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x249604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_249608:
    // 0x249608: 0xe4410018  swc1        $f1, 0x18($v0)
    ctx->pc = 0x249608u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
label_24960c:
    // 0x24960c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x24960cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_249610:
    // 0x249610: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x249610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_249614:
    // 0x249614: 0xe440001c  swc1        $f0, 0x1C($v0)
    ctx->pc = 0x249614u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
label_249618:
    // 0x249618: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x249618u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_24961c:
    // 0x24961c: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x24961cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_249620:
    // 0x249620: 0xa443002c  sh          $v1, 0x2C($v0)
    ctx->pc = 0x249620u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 44), (uint16_t)GPR_U32(ctx, 3));
label_249624:
    // 0x249624: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x249624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_249628:
    // 0x249628: 0xa4600030  sh          $zero, 0x30($v1)
    ctx->pc = 0x249628u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 48), (uint16_t)GPR_U32(ctx, 0));
label_24962c:
    // 0x24962c: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x24962cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_249630:
    // 0x249630: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x249630u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_249634:
    // 0x249634: 0xa4820030  sh          $v0, 0x30($a0)
    ctx->pc = 0x249634u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 48), (uint16_t)GPR_U32(ctx, 2));
label_249638:
    // 0x249638: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x249638u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_24963c:
    // 0x24963c: 0xc040cbc  jal         func_1032F0
label_249640:
    if (ctx->pc == 0x249640u) {
        ctx->pc = 0x249644u;
        goto label_249644;
    }
    ctx->pc = 0x24963Cu;
    SET_GPR_U32(ctx, 31, 0x249644u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x249644u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x249644u) { return; }
    ctx->pc = 0x249644u;
label_249644:
    // 0x249644: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x249644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_249648:
    // 0x249648: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x249648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_24964c:
    // 0x24964c: 0x3c023ec9  lui         $v0, 0x3EC9
    ctx->pc = 0x24964cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16073 << 16));
label_249650:
    // 0x249650: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x249650u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_249654:
    // 0x249654: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x249654u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_249658:
    // 0x249658: 0x0  nop
    ctx->pc = 0x249658u;
    // NOP
label_24965c:
    // 0x24965c: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x24965cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_249660:
    // 0x249660: 0xc058fec  jal         func_163FB0
label_249664:
    if (ctx->pc == 0x249664u) {
        ctx->pc = 0x249668u;
        goto label_249668;
    }
    ctx->pc = 0x249660u;
    SET_GPR_U32(ctx, 31, 0x249668u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x249660u, 0x249668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249668u;
label_249668:
    // 0x249668: 0x26060150  addiu       $a2, $s0, 0x150
    ctx->pc = 0x249668u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_24966c:
    // 0x24966c: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x24966cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
label_249670:
    // 0x249670: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x249670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_249674:
    // 0x249674: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x249674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_249678:
    // 0x249678: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x249678u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_24967c:
    // 0x24967c: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x24967cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_249680:
    // 0x249680: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x249680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_249684:
    // 0x249684: 0xc040ce4  jal         func_103390
label_249688:
    if (ctx->pc == 0x249688u) {
        ctx->pc = 0x24968Cu;
        goto label_24968c;
    }
    ctx->pc = 0x249684u;
    SET_GPR_U32(ctx, 31, 0x24968Cu);
    ctx->pc = 0x103390u;
    {
        ctx->pc = 0x24968Cu;
        ps2_stubs::sceVu0RotMatrixZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x24968Cu) { return; }
    ctx->pc = 0x24968Cu;
label_24968c:
    // 0x24968c: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x24968cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_249690:
    // 0x249690: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x249690u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_249694:
    // 0x249694: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x249694u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_249698:
    // 0x249698: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x249698u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_24969c:
    // 0x24969c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x24969cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2496a0:
    // 0x2496a0: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2496a0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_2496a4:
    // 0x2496a4: 0xc040d0e  jal         func_103438
label_2496a8:
    if (ctx->pc == 0x2496A8u) {
        ctx->pc = 0x2496ACu;
        goto label_2496ac;
    }
    ctx->pc = 0x2496A4u;
    SET_GPR_U32(ctx, 31, 0x2496ACu);
    ctx->pc = 0x103438u;
    {
        ctx->pc = 0x2496ACu;
        ps2_stubs::sceVu0RotMatrixX(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2496ACu) { return; }
    ctx->pc = 0x2496ACu;
label_2496ac:
    // 0x2496ac: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2496acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_2496b0:
    // 0x2496b0: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x2496b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_2496b4:
    // 0x2496b4: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x2496b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_2496b8:
    // 0x2496b8: 0xc44c0008  lwc1        $f12, 0x8($v0)
    ctx->pc = 0x2496b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2496bc:
    // 0x2496bc: 0xc46d000c  lwc1        $f13, 0xC($v1)
    ctx->pc = 0x2496bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_2496c0:
    // 0x2496c0: 0x26850030  addiu       $a1, $s4, 0x30
    ctx->pc = 0x2496c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
label_2496c4:
    // 0x2496c4: 0xc7ae01b4  lwc1        $f14, 0x1B4($sp)
    ctx->pc = 0x2496c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_2496c8:
    // 0x2496c8: 0xc7af01b4  lwc1        $f15, 0x1B4($sp)
    ctx->pc = 0x2496c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_2496cc:
    // 0x2496cc: 0x27a601ac  addiu       $a2, $sp, 0x1AC
    ctx->pc = 0x2496ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 428));
label_2496d0:
    // 0x2496d0: 0x27a701b0  addiu       $a3, $sp, 0x1B0
    ctx->pc = 0x2496d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_2496d4:
    // 0x2496d4: 0xc05c968  jal         func_1725A0
label_2496d8:
    if (ctx->pc == 0x2496D8u) {
        ctx->pc = 0x2496DCu;
        goto label_2496dc;
    }
    ctx->pc = 0x2496D4u;
    SET_GPR_U32(ctx, 31, 0x2496DCu);
    ctx->pc = 0x1725A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1725A0u, 0x2496D4u, 0x2496DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2496DCu;
label_2496dc:
    // 0x2496dc: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x2496dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_2496e0:
    // 0x2496e0: 0x8483002c  lh          $v1, 0x2C($a0)
    ctx->pc = 0x2496e0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 44)));
label_2496e4:
    // 0x2496e4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_2496e8:
    if (ctx->pc == 0x2496E8u) {
        ctx->pc = 0x2496ECu;
        goto label_2496ec;
    }
    ctx->pc = 0x2496E4u;
    {
        const bool branch_taken_0x2496e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2496e4) {
            ctx->pc = 0x249700u;
            goto label_249700;
        }
    }
    ctx->pc = 0x2496ECu;
label_2496ec:
    // 0x2496ec: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x2496ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_2496f0:
    // 0x2496f0: 0x8465002c  lh          $a1, 0x2C($v1)
    ctx->pc = 0x2496f0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 44)));
label_2496f4:
    // 0x2496f4: 0x24a4ffff  addiu       $a0, $a1, -0x1
    ctx->pc = 0x2496f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_2496f8:
    // 0x2496f8: 0xa464002c  sh          $a0, 0x2C($v1)
    ctx->pc = 0x2496f8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 44), (uint16_t)GPR_U32(ctx, 4));
label_2496fc:
    // 0x2496fc: 0x0  nop
    ctx->pc = 0x2496fcu;
    // NOP
label_249700:
    // 0x249700: 0x26830030  addiu       $v1, $s4, 0x30
    ctx->pc = 0x249700u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
label_249704:
    // 0x249704: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x249704u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_249708:
    // 0x249708: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x249708u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_24970c:
    // 0x24970c: 0xc067594  jal         func_19D650
label_249710:
    if (ctx->pc == 0x249710u) {
        ctx->pc = 0x249714u;
        goto label_249714;
    }
    ctx->pc = 0x24970Cu;
    SET_GPR_U32(ctx, 31, 0x249714u);
    ctx->pc = 0x19D650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D650u, 0x24970Cu, 0x249714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249714u;
label_249714:
    // 0x249714: 0xe7a001bc  swc1        $f0, 0x1BC($sp)
    ctx->pc = 0x249714u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 444), bits); }
label_249718:
    // 0x249718: 0xc7a101bc  lwc1        $f1, 0x1BC($sp)
    ctx->pc = 0x249718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_24971c:
    // 0x24971c: 0x3c044496  lui         $a0, 0x4496
    ctx->pc = 0x24971cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17558 << 16));
label_249720:
    // 0x249720: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x249720u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_249724:
    // 0x249724: 0x0  nop
    ctx->pc = 0x249724u;
    // NOP
label_249728:
    // 0x249728: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x249728u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_24972c:
    // 0x24972c: 0x0  nop
    ctx->pc = 0x24972cu;
    // NOP
label_249730:
    // 0x249730: 0x4500000f  bc1f        . + 4 + (0xF << 2)
label_249734:
    if (ctx->pc == 0x249734u) {
        ctx->pc = 0x249738u;
        goto label_249738;
    }
    ctx->pc = 0x249730u;
    {
        const bool branch_taken_0x249730 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x249730) {
            ctx->pc = 0x249770u;
            goto label_249770;
        }
    }
    ctx->pc = 0x249738u;
label_249738:
    // 0x249738: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x249738u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_24973c:
    // 0x24973c: 0x84a2002c  lh          $v0, 0x2C($a1)
    ctx->pc = 0x24973cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 44)));
label_249740:
    // 0x249740: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_249744:
    if (ctx->pc == 0x249744u) {
        ctx->pc = 0x249748u;
        goto label_249748;
    }
    ctx->pc = 0x249740u;
    {
        const bool branch_taken_0x249740 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x249740) {
            ctx->pc = 0x249770u;
            goto label_249770;
        }
    }
    ctx->pc = 0x249748u;
label_249748:
    // 0x249748: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x249748u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_24974c:
    // 0x24974c: 0x0  nop
    ctx->pc = 0x24974cu;
    // NOP
label_249750:
    // 0x249750: 0xe7a001ac  swc1        $f0, 0x1AC($sp)
    ctx->pc = 0x249750u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 428), bits); }
label_249754:
    // 0x249754: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x249754u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_249758:
    // 0x249758: 0x0  nop
    ctx->pc = 0x249758u;
    // NOP
label_24975c:
    // 0x24975c: 0xe7a001b0  swc1        $f0, 0x1B0($sp)
    ctx->pc = 0x24975cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 432), bits); }
label_249760:
    // 0x249760: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x249760u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_249764:
    // 0x249764: 0x26060150  addiu       $a2, $s0, 0x150
    ctx->pc = 0x249764u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_249768:
    // 0x249768: 0xa4c5002c  sh          $a1, 0x2C($a2)
    ctx->pc = 0x249768u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 44), (uint16_t)GPR_U32(ctx, 5));
label_24976c:
    // 0x24976c: 0x0  nop
    ctx->pc = 0x24976cu;
    // NOP
label_249770:
    // 0x249770: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x249770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_249774:
    // 0x249774: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x249774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_249778:
    // 0x249778: 0xc7a001ac  lwc1        $f0, 0x1AC($sp)
    ctx->pc = 0x249778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24977c:
    // 0x24977c: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x24977cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_249780:
    // 0x249780: 0xc058fec  jal         func_163FB0
label_249784:
    if (ctx->pc == 0x249784u) {
        ctx->pc = 0x249788u;
        goto label_249788;
    }
    ctx->pc = 0x249780u;
    SET_GPR_U32(ctx, 31, 0x249788u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x249780u, 0x249788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249788u;
label_249788:
    // 0x249788: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x249788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_24978c:
    // 0x24978c: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x24978cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_249790:
    // 0x249790: 0xc7a001ac  lwc1        $f0, 0x1AC($sp)
    ctx->pc = 0x249790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_249794:
    // 0x249794: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x249794u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_249798:
    // 0x249798: 0xe4a0001c  swc1        $f0, 0x1C($a1)
    ctx->pc = 0x249798u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 28), bits); }
label_24979c:
    // 0x24979c: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x24979cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_2497a0:
    // 0x2497a0: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x2497a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2497a4:
    // 0x2497a4: 0xc7a001b0  lwc1        $f0, 0x1B0($sp)
    ctx->pc = 0x2497a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2497a8:
    // 0x2497a8: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2497a8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2497ac:
    // 0x2497ac: 0xc058fec  jal         func_163FB0
label_2497b0:
    if (ctx->pc == 0x2497B0u) {
        ctx->pc = 0x2497B4u;
        goto label_2497b4;
    }
    ctx->pc = 0x2497ACu;
    SET_GPR_U32(ctx, 31, 0x2497B4u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2497ACu, 0x2497B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2497B4u;
label_2497b4:
    // 0x2497b4: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x2497b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_2497b8:
    // 0x2497b8: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x2497b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
label_2497bc:
    // 0x2497bc: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x2497bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_2497c0:
    // 0x2497c0: 0xc4a10018  lwc1        $f1, 0x18($a1)
    ctx->pc = 0x2497c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2497c4:
    // 0x2497c4: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x2497c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
label_2497c8:
    // 0x2497c8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2497c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2497cc:
    // 0x2497cc: 0x0  nop
    ctx->pc = 0x2497ccu;
    // NOP
label_2497d0:
    // 0x2497d0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2497d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2497d4:
    // 0x2497d4: 0xe4a00018  swc1        $f0, 0x18($a1)
    ctx->pc = 0x2497d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 24), bits); }
label_2497d8:
    // 0x2497d8: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x2497d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_2497dc:
    // 0x2497dc: 0xc4a10018  lwc1        $f1, 0x18($a1)
    ctx->pc = 0x2497dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2497e0:
    // 0x2497e0: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2497e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_2497e4:
    // 0x2497e4: 0xc4400020  lwc1        $f0, 0x20($v0)
    ctx->pc = 0x2497e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2497e8:
    // 0x2497e8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2497e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2497ec:
    // 0x2497ec: 0x0  nop
    ctx->pc = 0x2497ecu;
    // NOP
label_2497f0:
    // 0x2497f0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_2497f4:
    if (ctx->pc == 0x2497F4u) {
        ctx->pc = 0x2497F8u;
        goto label_2497f8;
    }
    ctx->pc = 0x2497F0u;
    {
        const bool branch_taken_0x2497f0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2497f0) {
            ctx->pc = 0x249808u;
            goto label_249808;
        }
    }
    ctx->pc = 0x2497F8u;
label_2497f8:
    // 0x2497f8: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x2497f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_2497fc:
    // 0x2497fc: 0xc4800020  lwc1        $f0, 0x20($a0)
    ctx->pc = 0x2497fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_249800:
    // 0x249800: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x249800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_249804:
    // 0x249804: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x249804u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
label_249808:
    // 0x249808: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x249808u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_24980c:
    // 0x24980c: 0x84a30030  lh          $v1, 0x30($a1)
    ctx->pc = 0x24980cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 48)));
label_249810:
    // 0x249810: 0x14600022  bnez        $v1, . + 4 + (0x22 << 2)
label_249814:
    if (ctx->pc == 0x249814u) {
        ctx->pc = 0x249818u;
        goto label_249818;
    }
    ctx->pc = 0x249810u;
    {
        const bool branch_taken_0x249810 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x249810) {
            ctx->pc = 0x24989Cu;
            goto label_24989c;
        }
    }
    ctx->pc = 0x249818u;
label_249818:
    // 0x249818: 0x3c044416  lui         $a0, 0x4416
    ctx->pc = 0x249818u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17430 << 16));
label_24981c:
    // 0x24981c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x24981cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_249820:
    // 0x249820: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x249820u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_249824:
    // 0x249824: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x249824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294958308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_249828:
    // 0x249828: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x249828u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_24982c:
    // 0x24982c: 0xc6000034  lwc1        $f0, 0x34($s0)
    ctx->pc = 0x24982cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_249830:
    // 0x249830: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x249830u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_249834:
    // 0x249834: 0x0  nop
    ctx->pc = 0x249834u;
    // NOP
label_249838:
    // 0x249838: 0x4501001d  bc1t        . + 4 + (0x1D << 2)
label_24983c:
    if (ctx->pc == 0x24983Cu) {
        ctx->pc = 0x249840u;
        goto label_249840;
    }
    ctx->pc = 0x249838u;
    {
        const bool branch_taken_0x249838 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x249838) {
            ctx->pc = 0x2498B0u;
            goto label_2498b0;
        }
    }
    ctx->pc = 0x249840u;
label_249840:
    // 0x249840: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x249840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_249844:
    // 0x249844: 0x8465002c  lh          $a1, 0x2C($v1)
    ctx->pc = 0x249844u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 44)));
label_249848:
    // 0x249848: 0x10a00019  beqz        $a1, . + 4 + (0x19 << 2)
label_24984c:
    if (ctx->pc == 0x24984Cu) {
        ctx->pc = 0x249850u;
        goto label_249850;
    }
    ctx->pc = 0x249848u;
    {
        const bool branch_taken_0x249848 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x249848) {
            ctx->pc = 0x2498B0u;
            goto label_2498b0;
        }
    }
    ctx->pc = 0x249850u;
label_249850:
    // 0x249850: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x249850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_249854:
    // 0x249854: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x249854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_249858:
    // 0x249858: 0xa0640029  sb          $a0, 0x29($v1)
    ctx->pc = 0x249858u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 41), (uint8_t)GPR_U32(ctx, 4));
label_24985c:
    // 0x24985c: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x24985cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_249860:
    // 0x249860: 0x8485002c  lh          $a1, 0x2C($a0)
    ctx->pc = 0x249860u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 44)));
label_249864:
    // 0x249864: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x249864u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_249868:
    // 0x249868: 0xa485002c  sh          $a1, 0x2C($a0)
    ctx->pc = 0x249868u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 44), (uint16_t)GPR_U32(ctx, 5));
label_24986c:
    // 0x24986c: 0xc067694  jal         func_19DA50
label_249870:
    if (ctx->pc == 0x249870u) {
        ctx->pc = 0x249874u;
        goto label_249874;
    }
    ctx->pc = 0x24986Cu;
    SET_GPR_U32(ctx, 31, 0x249874u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x24986Cu, 0x249874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249874u;
label_249874:
    // 0x249874: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x249874u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_249878:
    // 0x249878: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x249878u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_24987c:
    // 0x24987c: 0x30a4003f  andi        $a0, $a1, 0x3F
    ctx->pc = 0x24987cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)63);
label_249880:
    // 0x249880: 0x2483003c  addiu       $v1, $a0, 0x3C
    ctx->pc = 0x249880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 60));
label_249884:
    // 0x249884: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x249884u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
label_249888:
    // 0x249888: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x249888u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_24988c:
    // 0x24988c: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x24988cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_249890:
    // 0x249890: 0xa4440030  sh          $a0, 0x30($v0)
    ctx->pc = 0x249890u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 48), (uint16_t)GPR_U32(ctx, 4));
label_249894:
    // 0x249894: 0x10000006  b           . + 4 + (0x6 << 2)
label_249898:
    if (ctx->pc == 0x249898u) {
        ctx->pc = 0x24989Cu;
        goto label_24989c;
    }
    ctx->pc = 0x249894u;
    {
        const bool branch_taken_0x249894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x249894) {
            ctx->pc = 0x2498B0u;
            goto label_2498b0;
        }
    }
    ctx->pc = 0x24989Cu;
label_24989c:
    // 0x24989c: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x24989cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_2498a0:
    // 0x2498a0: 0x84620030  lh          $v0, 0x30($v1)
    ctx->pc = 0x2498a0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_2498a4:
    // 0x2498a4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2498a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2498a8:
    // 0x2498a8: 0xa4620030  sh          $v0, 0x30($v1)
    ctx->pc = 0x2498a8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 48), (uint16_t)GPR_U32(ctx, 2));
label_2498ac:
    // 0x2498ac: 0x0  nop
    ctx->pc = 0x2498acu;
    // NOP
label_2498b0:
    // 0x2498b0: 0x8fa401c8  lw          $a0, 0x1C8($sp)
    ctx->pc = 0x2498b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 456)));
label_2498b4:
    // 0x2498b4: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x2498b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
label_2498b8:
    // 0x2498b8: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x2498b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_2498bc:
    // 0x2498bc: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x2498bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
label_2498c0:
    // 0x2498c0: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x2498c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
label_2498c4:
    // 0x2498c4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_2498c8:
    if (ctx->pc == 0x2498C8u) {
        ctx->pc = 0x2498CCu;
        goto label_2498cc;
    }
    ctx->pc = 0x2498C4u;
    {
        const bool branch_taken_0x2498c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2498c4) {
            ctx->pc = 0x2498F8u;
            goto label_2498f8;
        }
    }
    ctx->pc = 0x2498CCu;
label_2498cc:
    // 0x2498cc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2498ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2498d0:
    // 0x2498d0: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2498d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_2498d4:
    // 0x2498d4: 0xa0430029  sb          $v1, 0x29($v0)
    ctx->pc = 0x2498d4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 41), (uint8_t)GPR_U32(ctx, 3));
label_2498d8:
    // 0x2498d8: 0x8fa401c8  lw          $a0, 0x1C8($sp)
    ctx->pc = 0x2498d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 456)));
label_2498dc:
    // 0x2498dc: 0x24821330  addiu       $v0, $a0, 0x1330
    ctx->pc = 0x2498dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
label_2498e0:
    // 0x2498e0: 0x8c460030  lw          $a2, 0x30($v0)
    ctx->pc = 0x2498e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_2498e4:
    // 0x2498e4: 0x3c03feff  lui         $v1, 0xFEFF
    ctx->pc = 0x2498e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65279 << 16));
label_2498e8:
    // 0x2498e8: 0x3467ffff  ori         $a3, $v1, 0xFFFF
    ctx->pc = 0x2498e8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_2498ec:
    // 0x2498ec: 0xc71824  and         $v1, $a2, $a3
    ctx->pc = 0x2498ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 7));
label_2498f0:
    // 0x2498f0: 0xac430030  sw          $v1, 0x30($v0)
    ctx->pc = 0x2498f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 3));
label_2498f4:
    // 0x2498f4: 0x0  nop
    ctx->pc = 0x2498f4u;
    // NOP
label_2498f8:
    // 0x2498f8: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x2498f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_2498fc:
    // 0x2498fc: 0xc040cbc  jal         func_1032F0
label_249900:
    if (ctx->pc == 0x249900u) {
        ctx->pc = 0x249904u;
        goto label_249904;
    }
    ctx->pc = 0x2498FCu;
    SET_GPR_U32(ctx, 31, 0x249904u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x249904u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x249904u) { return; }
    ctx->pc = 0x249904u;
label_249904:
    // 0x249904: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x249904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_249908:
    // 0x249908: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x249908u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_24990c:
    // 0x24990c: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x24990cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_249910:
    // 0x249910: 0xc44c000c  lwc1        $f12, 0xC($v0)
    ctx->pc = 0x249910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_249914:
    // 0x249914: 0xc040d0e  jal         func_103438
label_249918:
    if (ctx->pc == 0x249918u) {
        ctx->pc = 0x24991Cu;
        goto label_24991c;
    }
    ctx->pc = 0x249914u;
    SET_GPR_U32(ctx, 31, 0x24991Cu);
    ctx->pc = 0x103438u;
    {
        ctx->pc = 0x24991Cu;
        ps2_stubs::sceVu0RotMatrixX(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x24991Cu) { return; }
    ctx->pc = 0x24991Cu;
label_24991c:
    // 0x24991c: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x24991cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_249920:
    // 0x249920: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x249920u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_249924:
    // 0x249924: 0x27a300e0  addiu       $v1, $sp, 0xE0
    ctx->pc = 0x249924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_249928:
    // 0x249928: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x249928u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_24992c:
    // 0x24992c: 0xc44c0008  lwc1        $f12, 0x8($v0)
    ctx->pc = 0x24992cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_249930:
    // 0x249930: 0xc040d38  jal         func_1034E0
label_249934:
    if (ctx->pc == 0x249934u) {
        ctx->pc = 0x249938u;
        goto label_249938;
    }
    ctx->pc = 0x249930u;
    SET_GPR_U32(ctx, 31, 0x249938u);
    ctx->pc = 0x1034E0u;
    {
        ctx->pc = 0x249938u;
        ps2_stubs::sceVu0RotMatrixY(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x249938u) { return; }
    ctx->pc = 0x249938u;
label_249938:
    // 0x249938: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x249938u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_24993c:
    // 0x24993c: 0x0  nop
    ctx->pc = 0x24993cu;
    // NOP
label_249940:
    // 0x249940: 0xe7a00130  swc1        $f0, 0x130($sp)
    ctx->pc = 0x249940u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_249944:
    // 0x249944: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x249944u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_249948:
    // 0x249948: 0x0  nop
    ctx->pc = 0x249948u;
    // NOP
label_24994c:
    // 0x24994c: 0xe7a00134  swc1        $f0, 0x134($sp)
    ctx->pc = 0x24994cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
label_249950:
    // 0x249950: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x249950u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_249954:
    // 0x249954: 0xc4a00018  lwc1        $f0, 0x18($a1)
    ctx->pc = 0x249954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_249958:
    // 0x249958: 0xe7a00138  swc1        $f0, 0x138($sp)
    ctx->pc = 0x249958u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_24995c:
    // 0x24995c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x24995cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_249960:
    // 0x249960: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x249960u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_249964:
    // 0x249964: 0x0  nop
    ctx->pc = 0x249964u;
    // NOP
label_249968:
    // 0x249968: 0xe7a0013c  swc1        $f0, 0x13C($sp)
    ctx->pc = 0x249968u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
label_24996c:
    // 0x24996c: 0x27a30130  addiu       $v1, $sp, 0x130
    ctx->pc = 0x24996cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_249970:
    // 0x249970: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x249970u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_249974:
    // 0x249974: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x249974u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_249978:
    // 0x249978: 0x27a60130  addiu       $a2, $sp, 0x130
    ctx->pc = 0x249978u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_24997c:
    // 0x24997c: 0xc040bf4  jal         func_102FD0
label_249980:
    if (ctx->pc == 0x249980u) {
        ctx->pc = 0x249984u;
        goto label_249984;
    }
    ctx->pc = 0x24997Cu;
    SET_GPR_U32(ctx, 31, 0x249984u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x249984u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x249984u) { return; }
    ctx->pc = 0x249984u;
label_249984:
    // 0x249984: 0xc6010030  lwc1        $f1, 0x30($s0)
    ctx->pc = 0x249984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_249988:
    // 0x249988: 0xc7a00130  lwc1        $f0, 0x130($sp)
    ctx->pc = 0x249988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24998c:
    // 0x24998c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x24998cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_249990:
    // 0x249990: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x249990u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
label_249994:
    // 0x249994: 0xc6010034  lwc1        $f1, 0x34($s0)
    ctx->pc = 0x249994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_249998:
    // 0x249998: 0xc7a00134  lwc1        $f0, 0x134($sp)
    ctx->pc = 0x249998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24999c:
    // 0x24999c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x24999cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2499a0:
    // 0x2499a0: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x2499a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
label_2499a4:
    // 0x2499a4: 0xc6010038  lwc1        $f1, 0x38($s0)
    ctx->pc = 0x2499a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2499a8:
    // 0x2499a8: 0xc7a00138  lwc1        $f0, 0x138($sp)
    ctx->pc = 0x2499a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2499ac:
    // 0x2499ac: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2499acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2499b0:
    // 0x2499b0: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x2499b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
label_2499b4:
    // 0x2499b4: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x2499b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_2499b8:
    // 0x2499b8: 0xc040cbc  jal         func_1032F0
label_2499bc:
    if (ctx->pc == 0x2499BCu) {
        ctx->pc = 0x2499C0u;
        goto label_2499c0;
    }
    ctx->pc = 0x2499B8u;
    SET_GPR_U32(ctx, 31, 0x2499C0u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x2499C0u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2499C0u) { return; }
    ctx->pc = 0x2499C0u;
label_2499c0:
    // 0x2499c0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2499c0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2499c4:
    // 0x2499c4: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x2499c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_2499c8:
    // 0x2499c8: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x2499c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2499cc:
    // 0x2499cc: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x2499ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_2499d0:
    // 0x2499d0: 0xc4a00010  lwc1        $f0, 0x10($a1)
    ctx->pc = 0x2499d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2499d4:
    // 0x2499d4: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x2499d4u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2499d8:
    // 0x2499d8: 0xc058fec  jal         func_163FB0
label_2499dc:
    if (ctx->pc == 0x2499DCu) {
        ctx->pc = 0x2499E0u;
        goto label_2499e0;
    }
    ctx->pc = 0x2499D8u;
    SET_GPR_U32(ctx, 31, 0x2499E0u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2499D8u, 0x2499E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2499E0u;
label_2499e0:
    // 0x2499e0: 0xe7a001ac  swc1        $f0, 0x1AC($sp)
    ctx->pc = 0x2499e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 428), bits); }
label_2499e4:
    // 0x2499e4: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x2499e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_2499e8:
    // 0x2499e8: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x2499e8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_2499ec:
    // 0x2499ec: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x2499ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_2499f0:
    // 0x2499f0: 0xc7ac01ac  lwc1        $f12, 0x1AC($sp)
    ctx->pc = 0x2499f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2499f4:
    // 0x2499f4: 0xc040d38  jal         func_1034E0
label_2499f8:
    if (ctx->pc == 0x2499F8u) {
        ctx->pc = 0x2499FCu;
        goto label_2499fc;
    }
    ctx->pc = 0x2499F4u;
    SET_GPR_U32(ctx, 31, 0x2499FCu);
    ctx->pc = 0x1034E0u;
    {
        ctx->pc = 0x2499FCu;
        ps2_stubs::sceVu0RotMatrixY(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2499FCu) { return; }
    ctx->pc = 0x2499FCu;
label_2499fc:
    // 0x2499fc: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2499fcu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_249a00:
    // 0x249a00: 0xc6000030  lwc1        $f0, 0x30($s0)
    ctx->pc = 0x249a00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_249a04:
    // 0x249a04: 0xe7a00130  swc1        $f0, 0x130($sp)
    ctx->pc = 0x249a04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_249a08:
    // 0x249a08: 0xc6000034  lwc1        $f0, 0x34($s0)
    ctx->pc = 0x249a08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_249a0c:
    // 0x249a0c: 0xe7a00134  swc1        $f0, 0x134($sp)
    ctx->pc = 0x249a0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
label_249a10:
    // 0x249a10: 0xc6000038  lwc1        $f0, 0x38($s0)
    ctx->pc = 0x249a10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_249a14:
    // 0x249a14: 0xe7a00138  swc1        $f0, 0x138($sp)
    ctx->pc = 0x249a14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_249a18:
    // 0x249a18: 0xc600003c  lwc1        $f0, 0x3C($s0)
    ctx->pc = 0x249a18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_249a1c:
    // 0x249a1c: 0xe7a0013c  swc1        $f0, 0x13C($sp)
    ctx->pc = 0x249a1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
label_249a20:
    // 0x249a20: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x249a20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_249a24:
    // 0x249a24: 0x27a300e0  addiu       $v1, $sp, 0xE0
    ctx->pc = 0x249a24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_249a28:
    // 0x249a28: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x249a28u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_249a2c:
    // 0x249a2c: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x249a2cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_249a30:
    // 0x249a30: 0xc040c00  jal         func_103000
label_249a34:
    if (ctx->pc == 0x249A34u) {
        ctx->pc = 0x249A38u;
        goto label_249a38;
    }
    ctx->pc = 0x249A30u;
    SET_GPR_U32(ctx, 31, 0x249A38u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x249A38u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x249A38u) { return; }
    ctx->pc = 0x249A38u;
label_249a38:
    // 0x249a38: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x249a38u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_249a3c:
    // 0x249a3c: 0xc7a00130  lwc1        $f0, 0x130($sp)
    ctx->pc = 0x249a3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_249a40:
    // 0x249a40: 0xe7a00110  swc1        $f0, 0x110($sp)
    ctx->pc = 0x249a40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_249a44:
    // 0x249a44: 0xc7a00134  lwc1        $f0, 0x134($sp)
    ctx->pc = 0x249a44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_249a48:
    // 0x249a48: 0xe7a00114  swc1        $f0, 0x114($sp)
    ctx->pc = 0x249a48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
label_249a4c:
    // 0x249a4c: 0xc7a00138  lwc1        $f0, 0x138($sp)
    ctx->pc = 0x249a4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_249a50:
    // 0x249a50: 0xe7a00118  swc1        $f0, 0x118($sp)
    ctx->pc = 0x249a50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_249a54:
    // 0x249a54: 0xc7a0013c  lwc1        $f0, 0x13C($sp)
    ctx->pc = 0x249a54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_249a58:
    // 0x249a58: 0xe7a0011c  swc1        $f0, 0x11C($sp)
    ctx->pc = 0x249a58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
label_249a5c:
    // 0x249a5c: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x249a5cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
label_249a60:
    // 0x249a60: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x249a60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_249a64:
    // 0x249a64: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x249a64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_249a68:
    // 0x249a68: 0xc040c00  jal         func_103000
label_249a6c:
    if (ctx->pc == 0x249A6Cu) {
        ctx->pc = 0x249A70u;
        goto label_249a70;
    }
    ctx->pc = 0x249A68u;
    SET_GPR_U32(ctx, 31, 0x249A70u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x249A70u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x249A70u) { return; }
    ctx->pc = 0x249A70u;
label_249a70:
    // 0x249a70: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x249a70u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_249a74:
    // 0x249a74: 0x26060150  addiu       $a2, $s0, 0x150
    ctx->pc = 0x249a74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_249a78:
    // 0x249a78: 0x84c3002a  lh          $v1, 0x2A($a2)
    ctx->pc = 0x249a78u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 42)));
label_249a7c:
    // 0x249a7c: 0x2465ffff  addiu       $a1, $v1, -0x1
    ctx->pc = 0x249a7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_249a80:
    // 0x249a80: 0xa4c5002a  sh          $a1, 0x2A($a2)
    ctx->pc = 0x249a80u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 42), (uint16_t)GPR_U32(ctx, 5));
label_249a84:
    // 0x249a84: 0x26060150  addiu       $a2, $s0, 0x150
    ctx->pc = 0x249a84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_249a88:
    // 0x249a88: 0x84c7002a  lh          $a3, 0x2A($a2)
    ctx->pc = 0x249a88u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 42)));
label_249a8c:
    // 0x249a8c: 0x14e00004  bnez        $a3, . + 4 + (0x4 << 2)
label_249a90:
    if (ctx->pc == 0x249A90u) {
        ctx->pc = 0x249A94u;
        goto label_249a94;
    }
    ctx->pc = 0x249A8Cu;
    {
        const bool branch_taken_0x249a8c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x249a8c) {
            ctx->pc = 0x249AA0u;
            goto label_249aa0;
        }
    }
    ctx->pc = 0x249A94u;
label_249a94:
    // 0x249a94: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x249a94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_249a98:
    // 0x249a98: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x249a98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_249a9c:
    // 0x249a9c: 0xa0640029  sb          $a0, 0x29($v1)
    ctx->pc = 0x249a9cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 41), (uint8_t)GPR_U32(ctx, 4));
label_249aa0:
    // 0x249aa0: 0x8fa401c8  lw          $a0, 0x1C8($sp)
    ctx->pc = 0x249aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 456)));
label_249aa4:
    // 0x249aa4: 0xc06ce3c  jal         func_1B38F0
label_249aa8:
    if (ctx->pc == 0x249AA8u) {
        ctx->pc = 0x249AACu;
        goto label_249aac;
    }
    ctx->pc = 0x249AA4u;
    SET_GPR_U32(ctx, 31, 0x249AACu);
    ctx->pc = 0x1B38F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B38F0u, 0x249AA4u, 0x249AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249AACu;
label_249aac:
    // 0x249aac: 0x7040b628  paddub      $s6, $v0, $zero
    ctx->pc = 0x249aacu;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_249ab0:
    // 0x249ab0: 0x32c3ffff  andi        $v1, $s6, 0xFFFF
    ctx->pc = 0x249ab0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)65535);
label_249ab4:
    // 0x249ab4: 0x1460008c  bnez        $v1, . + 4 + (0x8C << 2)
label_249ab8:
    if (ctx->pc == 0x249AB8u) {
        ctx->pc = 0x249ABCu;
        goto label_249abc;
    }
    ctx->pc = 0x249AB4u;
    {
        const bool branch_taken_0x249ab4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x249ab4) {
            ctx->pc = 0x249CE8u;
            goto label_249ce8;
        }
    }
    ctx->pc = 0x249ABCu;
label_249abc:
    // 0x249abc: 0xafb20140  sw          $s2, 0x140($sp)
    ctx->pc = 0x249abcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 18));
label_249ac0:
    // 0x249ac0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x249ac0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_249ac4:
    // 0x249ac4: 0x0  nop
    ctx->pc = 0x249ac4u;
    // NOP
label_249ac8:
    // 0x249ac8: 0xe7a00150  swc1        $f0, 0x150($sp)
    ctx->pc = 0x249ac8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
label_249acc:
    // 0x249acc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x249accu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_249ad0:
    // 0x249ad0: 0x0  nop
    ctx->pc = 0x249ad0u;
    // NOP
label_249ad4:
    // 0x249ad4: 0xe7a00154  swc1        $f0, 0x154($sp)
    ctx->pc = 0x249ad4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 340), bits); }
label_249ad8:
    // 0x249ad8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x249ad8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_249adc:
    // 0x249adc: 0x0  nop
    ctx->pc = 0x249adcu;
    // NOP
label_249ae0:
    // 0x249ae0: 0xe7a00158  swc1        $f0, 0x158($sp)
    ctx->pc = 0x249ae0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
label_249ae4:
    // 0x249ae4: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x249ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
label_249ae8:
    // 0x249ae8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x249ae8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_249aec:
    // 0x249aec: 0x0  nop
    ctx->pc = 0x249aecu;
    // NOP
label_249af0:
    // 0x249af0: 0xe7a0015c  swc1        $f0, 0x15C($sp)
    ctx->pc = 0x249af0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 348), bits); }
label_249af4:
    // 0x249af4: 0x3c034396  lui         $v1, 0x4396
    ctx->pc = 0x249af4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
label_249af8:
    // 0x249af8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x249af8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_249afc:
    // 0x249afc: 0x0  nop
    ctx->pc = 0x249afcu;
    // NOP
label_249b00:
    // 0x249b00: 0xe7a00160  swc1        $f0, 0x160($sp)
    ctx->pc = 0x249b00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
label_249b04:
    // 0x249b04: 0xa7a00164  sh          $zero, 0x164($sp)
    ctx->pc = 0x249b04u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 356), (uint16_t)GPR_U32(ctx, 0));
label_249b08:
    // 0x249b08: 0xa3a00166  sb          $zero, 0x166($sp)
    ctx->pc = 0x249b08u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 358), (uint8_t)GPR_U32(ctx, 0));
label_249b0c:
    // 0x249b0c: 0xa3a00167  sb          $zero, 0x167($sp)
    ctx->pc = 0x249b0cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 359), (uint8_t)GPR_U32(ctx, 0));
label_249b10:
    // 0x249b10: 0x8fa401c8  lw          $a0, 0x1C8($sp)
    ctx->pc = 0x249b10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 456)));
label_249b14:
    // 0x249b14: 0x27a50140  addiu       $a1, $sp, 0x140
    ctx->pc = 0x249b14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_249b18:
    // 0x249b18: 0xc06ce90  jal         func_1B3A40
label_249b1c:
    if (ctx->pc == 0x249B1Cu) {
        ctx->pc = 0x249B20u;
        goto label_249b20;
    }
    ctx->pc = 0x249B18u;
    SET_GPR_U32(ctx, 31, 0x249B20u);
    ctx->pc = 0x1B3A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3A40u, 0x249B18u, 0x249B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249B20u;
label_249b20:
    // 0x249b20: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x249b20u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_249b24:
    // 0x249b24: 0x10a00070  beqz        $a1, . + 4 + (0x70 << 2)
label_249b28:
    if (ctx->pc == 0x249B28u) {
        ctx->pc = 0x249B2Cu;
        goto label_249b2c;
    }
    ctx->pc = 0x249B24u;
    {
        const bool branch_taken_0x249b24 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x249b24) {
            ctx->pc = 0x249CE8u;
            goto label_249ce8;
        }
    }
    ctx->pc = 0x249B2Cu;
label_249b2c:
    // 0x249b2c: 0x8fa501c8  lw          $a1, 0x1C8($sp)
    ctx->pc = 0x249b2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 456)));
label_249b30:
    // 0x249b30: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x249b30u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
label_249b34:
    // 0x249b34: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x249b34u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
label_249b38:
    // 0x249b38: 0x3406ffff  ori         $a2, $zero, 0xFFFF
    ctx->pc = 0x249b38u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_249b3c:
    // 0x249b3c: 0x61c38  dsll        $v1, $a2, 16
    ctx->pc = 0x249b3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << 16);
label_249b40:
    // 0x249b40: 0x3464ffff  ori         $a0, $v1, 0xFFFF
    ctx->pc = 0x249b40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_249b44:
    // 0x249b44: 0xa4b024  and         $s6, $a1, $a0
    ctx->pc = 0x249b44u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
label_249b48:
    // 0x249b48: 0x16183c  dsll32      $v1, $s6, 0
    ctx->pc = 0x249b48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) << (32 + 0));
label_249b4c:
    // 0x249b4c: 0x34770006  ori         $s7, $v1, 0x6
    ctx->pc = 0x249b4cu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)6);
label_249b50:
    // 0x249b50: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x249b50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_249b54:
    // 0x249b54: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x249b54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
label_249b58:
    // 0x249b58: 0x2485b420  addiu       $a1, $a0, -0x4BE0
    ctx->pc = 0x249b58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947872));
label_249b5c:
    // 0x249b5c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x249b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_249b60:
    // 0x249b60: 0x90630001  lbu         $v1, 0x1($v1)
    ctx->pc = 0x249b60u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
label_249b64:
    // 0x249b64: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x249b64u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_249b68:
    // 0x249b68: 0x52180  sll         $a0, $a1, 6
    ctx->pc = 0x249b68u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
label_249b6c:
    // 0x249b6c: 0x8fa301c8  lw          $v1, 0x1C8($sp)
    ctx->pc = 0x249b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 456)));
label_249b70:
    // 0x249b70: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x249b70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
label_249b74:
    // 0x249b74: 0x643821  addu        $a3, $v1, $a0
    ctx->pc = 0x249b74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_249b78:
    // 0x249b78: 0x72e02628  paddub      $a0, $s7, $zero
    ctx->pc = 0x249b78u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 23), GPR_VEC(ctx, 0)));
label_249b7c:
    // 0x249b7c: 0x27a50150  addiu       $a1, $sp, 0x150
    ctx->pc = 0x249b7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_249b80:
    // 0x249b80: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x249b80u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_249b84:
    // 0x249b84: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x249b84u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_249b88:
    // 0x249b88: 0xc06371c  jal         func_18DC70
label_249b8c:
    if (ctx->pc == 0x249B8Cu) {
        ctx->pc = 0x249B90u;
        goto label_249b90;
    }
    ctx->pc = 0x249B88u;
    SET_GPR_U32(ctx, 31, 0x249B90u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x249B88u, 0x249B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249B90u;
label_249b90:
    // 0x249b90: 0x7040f628  paddub      $fp, $v0, $zero
    ctx->pc = 0x249b90u;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_249b94:
    // 0x249b94: 0xc067694  jal         func_19DA50
label_249b98:
    if (ctx->pc == 0x249B98u) {
        ctx->pc = 0x249B9Cu;
        goto label_249b9c;
    }
    ctx->pc = 0x249B94u;
    SET_GPR_U32(ctx, 31, 0x249B9Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x249B94u, 0x249B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249B9Cu;
label_249b9c:
    // 0x249b9c: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x249b9cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_249ba0:
    // 0x249ba0: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
label_249ba4:
    if (ctx->pc == 0x249BA4u) {
        ctx->pc = 0x249BA8u;
        goto label_249ba8;
    }
    ctx->pc = 0x249BA0u;
    {
        const bool branch_taken_0x249ba0 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x249ba0) {
            ctx->pc = 0x249BBCu;
            goto label_249bbc;
        }
    }
    ctx->pc = 0x249BA8u;
label_249ba8:
    // 0x249ba8: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x249ba8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_249bac:
    // 0x249bac: 0x0  nop
    ctx->pc = 0x249bacu;
    // NOP
label_249bb0:
    // 0x249bb0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x249bb0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_249bb4:
    // 0x249bb4: 0x10000008  b           . + 4 + (0x8 << 2)
label_249bb8:
    if (ctx->pc == 0x249BB8u) {
        ctx->pc = 0x249BBCu;
        goto label_249bbc;
    }
    ctx->pc = 0x249BB4u;
    {
        const bool branch_taken_0x249bb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x249bb4) {
            ctx->pc = 0x249BD8u;
            goto label_249bd8;
        }
    }
    ctx->pc = 0x249BBCu;
label_249bbc:
    // 0x249bbc: 0x52042  srl         $a0, $a1, 1
    ctx->pc = 0x249bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
label_249bc0:
    // 0x249bc0: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x249bc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_249bc4:
    // 0x249bc4: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x249bc4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_249bc8:
    // 0x249bc8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x249bc8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_249bcc:
    // 0x249bcc: 0x0  nop
    ctx->pc = 0x249bccu;
    // NOP
label_249bd0:
    // 0x249bd0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x249bd0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_249bd4:
    // 0x249bd4: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x249bd4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_249bd8:
    // 0x249bd8: 0xc7a00154  lwc1        $f0, 0x154($sp)
    ctx->pc = 0x249bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_249bdc:
    // 0x249bdc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x249bdcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_249be0:
    // 0x249be0: 0xe7a00154  swc1        $f0, 0x154($sp)
    ctx->pc = 0x249be0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 340), bits); }
label_249be4:
    // 0x249be4: 0x8fa301c8  lw          $v1, 0x1C8($sp)
    ctx->pc = 0x249be4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 456)));
label_249be8:
    // 0x249be8: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x249be8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
label_249bec:
    // 0x249bec: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x249becu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
label_249bf0:
    // 0x249bf0: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x249bf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_249bf4:
    // 0x249bf4: 0x32438  dsll        $a0, $v1, 16
    ctx->pc = 0x249bf4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << 16);
label_249bf8:
    // 0x249bf8: 0x3483ffff  ori         $v1, $a0, 0xFFFF
    ctx->pc = 0x249bf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_249bfc:
    // 0x249bfc: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x249bfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_249c00:
    // 0x249c00: 0x3903c  dsll32      $s2, $v1, 0
    ctx->pc = 0x249c00u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) << (32 + 0));
label_249c04:
    // 0x249c04: 0x36540006  ori         $s4, $s2, 0x6
    ctx->pc = 0x249c04u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)6);
label_249c08:
    // 0x249c08: 0x112880  sll         $a1, $s1, 2
    ctx->pc = 0x249c08u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_249c0c:
    // 0x249c0c: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x249c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
label_249c10:
    // 0x249c10: 0x2464b420  addiu       $a0, $v1, -0x4BE0
    ctx->pc = 0x249c10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947872));
label_249c14:
    // 0x249c14: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x249c14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_249c18:
    // 0x249c18: 0x90630001  lbu         $v1, 0x1($v1)
    ctx->pc = 0x249c18u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
label_249c1c:
    // 0x249c1c: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x249c1cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_249c20:
    // 0x249c20: 0x52180  sll         $a0, $a1, 6
    ctx->pc = 0x249c20u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
label_249c24:
    // 0x249c24: 0x8fa301c8  lw          $v1, 0x1C8($sp)
    ctx->pc = 0x249c24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 456)));
label_249c28:
    // 0x249c28: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x249c28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
label_249c2c:
    // 0x249c2c: 0x64a821  addu        $s5, $v1, $a0
    ctx->pc = 0x249c2cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_249c30:
    // 0x249c30: 0x72802628  paddub      $a0, $s4, $zero
    ctx->pc = 0x249c30u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
label_249c34:
    // 0x249c34: 0x27a50150  addiu       $a1, $sp, 0x150
    ctx->pc = 0x249c34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_249c38:
    // 0x249c38: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x249c38u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_249c3c:
    // 0x249c3c: 0x72a03e28  paddub      $a3, $s5, $zero
    ctx->pc = 0x249c3cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
label_249c40:
    // 0x249c40: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x249c40u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_249c44:
    // 0x249c44: 0xc06371c  jal         func_18DC70
label_249c48:
    if (ctx->pc == 0x249C48u) {
        ctx->pc = 0x249C4Cu;
        goto label_249c4c;
    }
    ctx->pc = 0x249C44u;
    SET_GPR_U32(ctx, 31, 0x249C4Cu);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x249C44u, 0x249C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249C4Cu;
label_249c4c:
    // 0x249c4c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x249c4cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_249c50:
    // 0x249c50: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x249c50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
label_249c54:
    // 0x249c54: 0x3c05000a  lui         $a1, 0xA
    ctx->pc = 0x249c54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)10 << 16));
label_249c58:
    // 0x249c58: 0xc0684d8  jal         func_1A1360
label_249c5c:
    if (ctx->pc == 0x249C5Cu) {
        ctx->pc = 0x249C60u;
        goto label_249c60;
    }
    ctx->pc = 0x249C58u;
    SET_GPR_U32(ctx, 31, 0x249C60u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x249C58u, 0x249C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249C60u;
label_249c60:
    // 0x249c60: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x249c60u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_249c64:
    // 0x249c64: 0x3c0402ff  lui         $a0, 0x2FF
    ctx->pc = 0x249c64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)767 << 16));
label_249c68:
    // 0x249c68: 0x3c050005  lui         $a1, 0x5
    ctx->pc = 0x249c68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)5 << 16));
label_249c6c:
    // 0x249c6c: 0xc0684d8  jal         func_1A1360
label_249c70:
    if (ctx->pc == 0x249C70u) {
        ctx->pc = 0x249C74u;
        goto label_249c74;
    }
    ctx->pc = 0x249C6Cu;
    SET_GPR_U32(ctx, 31, 0x249C74u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x249C6Cu, 0x249C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249C74u;
label_249c74:
    // 0x249c74: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x249c74u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_249c78:
    // 0x249c78: 0x3c04469c  lui         $a0, 0x469C
    ctx->pc = 0x249c78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)18076 << 16));
label_249c7c:
    // 0x249c7c: 0x34864000  ori         $a2, $a0, 0x4000
    ctx->pc = 0x249c7cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16384);
label_249c80:
    // 0x249c80: 0x44866000  mtc1        $a2, $f12
    ctx->pc = 0x249c80u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_249c84:
    // 0x249c84: 0x8fa501c8  lw          $a1, 0x1C8($sp)
    ctx->pc = 0x249c84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 456)));
label_249c88:
    // 0x249c88: 0x24070511  addiu       $a3, $zero, 0x511
    ctx->pc = 0x249c88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1297));
label_249c8c:
    // 0x249c8c: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x249c8cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
label_249c90:
    // 0x249c90: 0x24a50120  addiu       $a1, $a1, 0x120
    ctx->pc = 0x249c90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 288));
label_249c94:
    // 0x249c94: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x249c94u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_249c98:
    // 0x249c98: 0xc067b18  jal         func_19EC60
label_249c9c:
    if (ctx->pc == 0x249C9Cu) {
        ctx->pc = 0x249CA0u;
        goto label_249ca0;
    }
    ctx->pc = 0x249C98u;
    SET_GPR_U32(ctx, 31, 0x249CA0u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x249C98u, 0x249CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249CA0u;
label_249ca0:
    // 0x249ca0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x249ca0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_249ca4:
    // 0x249ca4: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x249ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_249ca8:
    // 0x249ca8: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x249ca8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_249cac:
    // 0x249cac: 0xa4a4002c  sh          $a0, 0x2C($a1)
    ctx->pc = 0x249cacu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 44), (uint16_t)GPR_U32(ctx, 4));
label_249cb0:
    // 0x249cb0: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x249cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_249cb4:
    // 0x249cb4: 0x8464002a  lh          $a0, 0x2A($v1)
    ctx->pc = 0x249cb4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 42)));
label_249cb8:
    // 0x249cb8: 0x2485fffb  addiu       $a1, $a0, -0x5
    ctx->pc = 0x249cb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967291));
label_249cbc:
    // 0x249cbc: 0xa465002a  sh          $a1, 0x2A($v1)
    ctx->pc = 0x249cbcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 42), (uint16_t)GPR_U32(ctx, 5));
label_249cc0:
    // 0x249cc0: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x249cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_249cc4:
    // 0x249cc4: 0x8464002a  lh          $a0, 0x2A($v1)
    ctx->pc = 0x249cc4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 42)));
label_249cc8:
    // 0x249cc8: 0x41c3c  dsll32      $v1, $a0, 16
    ctx->pc = 0x249cc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 16));
label_249ccc:
    // 0x249ccc: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x249cccu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_249cd0:
    // 0x249cd0: 0x1c600005  bgtz        $v1, . + 4 + (0x5 << 2)
label_249cd4:
    if (ctx->pc == 0x249CD4u) {
        ctx->pc = 0x249CD8u;
        goto label_249cd8;
    }
    ctx->pc = 0x249CD0u;
    {
        const bool branch_taken_0x249cd0 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x249cd0) {
            ctx->pc = 0x249CE8u;
            goto label_249ce8;
        }
    }
    ctx->pc = 0x249CD8u;
label_249cd8:
    // 0x249cd8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x249cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_249cdc:
    // 0x249cdc: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x249cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_249ce0:
    // 0x249ce0: 0xa483002a  sh          $v1, 0x2A($a0)
    ctx->pc = 0x249ce0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 42), (uint16_t)GPR_U32(ctx, 3));
label_249ce4:
    // 0x249ce4: 0x0  nop
    ctx->pc = 0x249ce4u;
    // NOP
label_249ce8:
    // 0x249ce8: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x249ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_249cec:
    // 0x249cec: 0x84a30030  lh          $v1, 0x30($a1)
    ctx->pc = 0x249cecu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 48)));
label_249cf0:
    // 0x249cf0: 0x2464ffff  addiu       $a0, $v1, -0x1
    ctx->pc = 0x249cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_249cf4:
    // 0x249cf4: 0xa4a40030  sh          $a0, 0x30($a1)
    ctx->pc = 0x249cf4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 48), (uint16_t)GPR_U32(ctx, 4));
label_249cf8:
    // 0x249cf8: 0x1460039b  bnez        $v1, . + 4 + (0x39B << 2)
label_249cfc:
    if (ctx->pc == 0x249CFCu) {
        ctx->pc = 0x249D00u;
        goto label_249d00;
    }
    ctx->pc = 0x249CF8u;
    {
        const bool branch_taken_0x249cf8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x249cf8) {
            ctx->pc = 0x24AB68u;
            goto label_24ab68;
        }
    }
    ctx->pc = 0x249D00u;
label_249d00:
    // 0x249d00: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x249d00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_249d04:
    // 0x249d04: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x249d04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_249d08:
    // 0x249d08: 0xa4830030  sh          $v1, 0x30($a0)
    ctx->pc = 0x249d08u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 48), (uint16_t)GPR_U32(ctx, 3));
label_249d0c:
    // 0x249d0c: 0x3c03469c  lui         $v1, 0x469C
    ctx->pc = 0x249d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18076 << 16));
label_249d10:
    // 0x249d10: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x249d10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
label_249d14:
    // 0x249d14: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x249d14u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_249d18:
    // 0x249d18: 0x8fa301c8  lw          $v1, 0x1C8($sp)
    ctx->pc = 0x249d18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 456)));
label_249d1c:
    // 0x249d1c: 0x24040507  addiu       $a0, $zero, 0x507
    ctx->pc = 0x249d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1287));
label_249d20:
    // 0x249d20: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x249d20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
label_249d24:
    // 0x249d24: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x249d24u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_249d28:
    // 0x249d28: 0xc067b18  jal         func_19EC60
label_249d2c:
    if (ctx->pc == 0x249D2Cu) {
        ctx->pc = 0x249D30u;
        goto label_249d30;
    }
    ctx->pc = 0x249D28u;
    SET_GPR_U32(ctx, 31, 0x249D30u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x249D28u, 0x249D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249D30u;
label_249d30:
    // 0x249d30: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x249d30u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_249d34:
    // 0x249d34: 0x1000038c  b           . + 4 + (0x38C << 2)
label_249d38:
    if (ctx->pc == 0x249D38u) {
        ctx->pc = 0x249D3Cu;
        goto label_249d3c;
    }
    ctx->pc = 0x249D34u;
    {
        const bool branch_taken_0x249d34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x249d34) {
            ctx->pc = 0x24AB68u;
            goto label_24ab68;
        }
    }
    ctx->pc = 0x249D3Cu;
label_249d3c:
    // 0x249d3c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x249d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_249d40:
    // 0x249d40: 0xc040cbc  jal         func_1032F0
label_249d44:
    if (ctx->pc == 0x249D44u) {
        ctx->pc = 0x249D48u;
        goto label_249d48;
    }
    ctx->pc = 0x249D40u;
    SET_GPR_U32(ctx, 31, 0x249D48u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x249D48u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x249D48u) { return; }
    ctx->pc = 0x249D48u;
label_249d48:
    // 0x249d48: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x249d48u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_249d4c:
    // 0x249d4c: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x249d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_249d50:
    // 0x249d50: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x249d50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_249d54:
    // 0x249d54: 0x3c043ec9  lui         $a0, 0x3EC9
    ctx->pc = 0x249d54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16073 << 16));
label_249d58:
    // 0x249d58: 0x34830fdb  ori         $v1, $a0, 0xFDB
    ctx->pc = 0x249d58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4059);
label_249d5c:
    // 0x249d5c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x249d5cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_249d60:
    // 0x249d60: 0x0  nop
    ctx->pc = 0x249d60u;
    // NOP
label_249d64:
    // 0x249d64: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x249d64u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_249d68:
    // 0x249d68: 0xc058fec  jal         func_163FB0
label_249d6c:
    if (ctx->pc == 0x249D6Cu) {
        ctx->pc = 0x249D70u;
        goto label_249d70;
    }
    ctx->pc = 0x249D68u;
    SET_GPR_U32(ctx, 31, 0x249D70u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x249D68u, 0x249D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249D70u;
label_249d70:
    // 0x249d70: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x249d70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_249d74:
    // 0x249d74: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x249d74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_249d78:
    // 0x249d78: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x249d78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_249d7c:
    // 0x249d7c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x249d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_249d80:
    // 0x249d80: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x249d80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_249d84:
    // 0x249d84: 0xc46c0000  lwc1        $f12, 0x0($v1)
    ctx->pc = 0x249d84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_249d88:
    // 0x249d88: 0xc040ce4  jal         func_103390
label_249d8c:
    if (ctx->pc == 0x249D8Cu) {
        ctx->pc = 0x249D90u;
        goto label_249d90;
    }
    ctx->pc = 0x249D88u;
    SET_GPR_U32(ctx, 31, 0x249D90u);
    ctx->pc = 0x103390u;
    {
        ctx->pc = 0x249D90u;
        ps2_stubs::sceVu0RotMatrixZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x249D90u) { return; }
    ctx->pc = 0x249D90u;
label_249d90:
    // 0x249d90: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x249d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_249d94:
    // 0x249d94: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x249d94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_249d98:
    // 0x249d98: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x249d98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_249d9c:
    // 0x249d9c: 0xc44c0004  lwc1        $f12, 0x4($v0)
    ctx->pc = 0x249d9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_249da0:
    // 0x249da0: 0xc040d0e  jal         func_103438
label_249da4:
    if (ctx->pc == 0x249DA4u) {
        ctx->pc = 0x249DA8u;
        goto label_249da8;
    }
    ctx->pc = 0x249DA0u;
    SET_GPR_U32(ctx, 31, 0x249DA8u);
    ctx->pc = 0x103438u;
    {
        ctx->pc = 0x249DA8u;
        ps2_stubs::sceVu0RotMatrixX(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x249DA8u) { return; }
    ctx->pc = 0x249DA8u;
label_249da8:
    // 0x249da8: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x249da8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_249dac:
    // 0x249dac: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x249dacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_249db0:
    // 0x249db0: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x249db0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_249db4:
    // 0x249db4: 0xc4ac0008  lwc1        $f12, 0x8($a1)
    ctx->pc = 0x249db4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_249db8:
    // 0x249db8: 0xc44d000c  lwc1        $f13, 0xC($v0)
    ctx->pc = 0x249db8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_249dbc:
    // 0x249dbc: 0x26a50030  addiu       $a1, $s5, 0x30
    ctx->pc = 0x249dbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 48));
label_249dc0:
    // 0x249dc0: 0xc7ae01b4  lwc1        $f14, 0x1B4($sp)
    ctx->pc = 0x249dc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_249dc4:
    // 0x249dc4: 0xc7af01b4  lwc1        $f15, 0x1B4($sp)
    ctx->pc = 0x249dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_249dc8:
    // 0x249dc8: 0x27a601ac  addiu       $a2, $sp, 0x1AC
    ctx->pc = 0x249dc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 428));
label_249dcc:
    // 0x249dcc: 0x27a701b0  addiu       $a3, $sp, 0x1B0
    ctx->pc = 0x249dccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_249dd0:
    // 0x249dd0: 0xc05c968  jal         func_1725A0
label_249dd4:
    if (ctx->pc == 0x249DD4u) {
        ctx->pc = 0x249DD8u;
        goto label_249dd8;
    }
    ctx->pc = 0x249DD0u;
    SET_GPR_U32(ctx, 31, 0x249DD8u);
    ctx->pc = 0x1725A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1725A0u, 0x249DD0u, 0x249DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249DD8u;
label_249dd8:
    // 0x249dd8: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x249dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_249ddc:
    // 0x249ddc: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x249ddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_249de0:
    // 0x249de0: 0xc7a001ac  lwc1        $f0, 0x1AC($sp)
    ctx->pc = 0x249de0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_249de4:
    // 0x249de4: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x249de4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_249de8:
    // 0x249de8: 0xc058fec  jal         func_163FB0
label_249dec:
    if (ctx->pc == 0x249DECu) {
        ctx->pc = 0x249DF0u;
        goto label_249df0;
    }
    ctx->pc = 0x249DE8u;
    SET_GPR_U32(ctx, 31, 0x249DF0u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x249DE8u, 0x249DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249DF0u;
label_249df0:
    // 0x249df0: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x249df0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_249df4:
    // 0x249df4: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x249df4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_249df8:
    // 0x249df8: 0xc7a001ac  lwc1        $f0, 0x1AC($sp)
    ctx->pc = 0x249df8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_249dfc:
    // 0x249dfc: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x249dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_249e00:
    // 0x249e00: 0xe440001c  swc1        $f0, 0x1C($v0)
    ctx->pc = 0x249e00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
label_249e04:
    // 0x249e04: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x249e04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_249e08:
    // 0x249e08: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x249e08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_249e0c:
    // 0x249e0c: 0xc7a001b0  lwc1        $f0, 0x1B0($sp)
    ctx->pc = 0x249e0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_249e10:
    // 0x249e10: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x249e10u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_249e14:
    // 0x249e14: 0xc058fec  jal         func_163FB0
label_249e18:
    if (ctx->pc == 0x249E18u) {
        ctx->pc = 0x249E1Cu;
        goto label_249e1c;
    }
    ctx->pc = 0x249E14u;
    SET_GPR_U32(ctx, 31, 0x249E1Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x249E14u, 0x249E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249E1Cu;
label_249e1c:
    // 0x249e1c: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x249e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_249e20:
    // 0x249e20: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x249e20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_249e24:
    // 0x249e24: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x249e24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_249e28:
    // 0x249e28: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x249e28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_249e2c:
    // 0x249e2c: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x249e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
label_249e30:
    // 0x249e30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x249e30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_249e34:
    // 0x249e34: 0x0  nop
    ctx->pc = 0x249e34u;
    // NOP
label_249e38:
    // 0x249e38: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x249e38u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_249e3c:
    // 0x249e3c: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x249e3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
label_249e40:
    // 0x249e40: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x249e40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_249e44:
    // 0x249e44: 0xc4820018  lwc1        $f2, 0x18($a0)
    ctx->pc = 0x249e44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_249e48:
    // 0x249e48: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x249e48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_249e4c:
    // 0x249e4c: 0xc4810020  lwc1        $f1, 0x20($a0)
    ctx->pc = 0x249e4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_249e50:
    // 0x249e50: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x249e50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_249e54:
    // 0x249e54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x249e54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_249e58:
    // 0x249e58: 0x0  nop
    ctx->pc = 0x249e58u;
    // NOP
label_249e5c:
    // 0x249e5c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x249e5cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_249e60:
    // 0x249e60: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x249e60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_249e64:
    // 0x249e64: 0x0  nop
    ctx->pc = 0x249e64u;
    // NOP
label_249e68:
    // 0x249e68: 0x45000009  bc1f        . + 4 + (0x9 << 2)
label_249e6c:
    if (ctx->pc == 0x249E6Cu) {
        ctx->pc = 0x249E70u;
        goto label_249e70;
    }
    ctx->pc = 0x249E68u;
    {
        const bool branch_taken_0x249e68 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x249e68) {
            ctx->pc = 0x249E90u;
            goto label_249e90;
        }
    }
    ctx->pc = 0x249E70u;
label_249e70:
    // 0x249e70: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x249e70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_249e74:
    // 0x249e74: 0xc4410020  lwc1        $f1, 0x20($v0)
    ctx->pc = 0x249e74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_249e78:
    // 0x249e78: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x249e78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_249e7c:
    // 0x249e7c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x249e7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_249e80:
    // 0x249e80: 0x0  nop
    ctx->pc = 0x249e80u;
    // NOP
label_249e84:
    // 0x249e84: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x249e84u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_249e88:
    // 0x249e88: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x249e88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_249e8c:
    // 0x249e8c: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x249e8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
label_249e90:
    // 0x249e90: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x249e90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_249e94:
    // 0x249e94: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x249e94u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_249e98:
    // 0x249e98: 0xc040cbc  jal         func_1032F0
label_249e9c:
    if (ctx->pc == 0x249E9Cu) {
        ctx->pc = 0x249EA0u;
        goto label_249ea0;
    }
    ctx->pc = 0x249E98u;
    SET_GPR_U32(ctx, 31, 0x249EA0u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x249EA0u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x249EA0u) { return; }
    ctx->pc = 0x249EA0u;
label_249ea0:
    // 0x249ea0: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x249ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_249ea4:
    // 0x249ea4: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x249ea4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_249ea8:
    // 0x249ea8: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x249ea8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_249eac:
    // 0x249eac: 0x27a200e0  addiu       $v0, $sp, 0xE0
    ctx->pc = 0x249eacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_249eb0:
    // 0x249eb0: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x249eb0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_249eb4:
    // 0x249eb4: 0xc46c000c  lwc1        $f12, 0xC($v1)
    ctx->pc = 0x249eb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_249eb8:
    // 0x249eb8: 0xc040d0e  jal         func_103438
label_249ebc:
    if (ctx->pc == 0x249EBCu) {
        ctx->pc = 0x249EC0u;
        goto label_249ec0;
    }
    ctx->pc = 0x249EB8u;
    SET_GPR_U32(ctx, 31, 0x249EC0u);
    ctx->pc = 0x103438u;
    {
        ctx->pc = 0x249EC0u;
        ps2_stubs::sceVu0RotMatrixX(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x249EC0u) { return; }
    ctx->pc = 0x249EC0u;
label_249ec0:
    // 0x249ec0: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x249ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_249ec4:
    // 0x249ec4: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x249ec4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_249ec8:
    // 0x249ec8: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x249ec8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_249ecc:
    // 0x249ecc: 0x27a200e0  addiu       $v0, $sp, 0xE0
    ctx->pc = 0x249eccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_249ed0:
    // 0x249ed0: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x249ed0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_249ed4:
    // 0x249ed4: 0xc46c0008  lwc1        $f12, 0x8($v1)
    ctx->pc = 0x249ed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_249ed8:
    // 0x249ed8: 0xc040d38  jal         func_1034E0
label_249edc:
    if (ctx->pc == 0x249EDCu) {
        ctx->pc = 0x249EE0u;
        goto label_249ee0;
    }
    ctx->pc = 0x249ED8u;
    SET_GPR_U32(ctx, 31, 0x249EE0u);
    ctx->pc = 0x1034E0u;
    {
        ctx->pc = 0x249EE0u;
        ps2_stubs::sceVu0RotMatrixY(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x249EE0u) { return; }
    ctx->pc = 0x249EE0u;
label_249ee0:
    // 0x249ee0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x249ee0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_249ee4:
    // 0x249ee4: 0x0  nop
    ctx->pc = 0x249ee4u;
    // NOP
label_249ee8:
    // 0x249ee8: 0xe7a00130  swc1        $f0, 0x130($sp)
    ctx->pc = 0x249ee8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_249eec:
    // 0x249eec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x249eecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_249ef0:
    // 0x249ef0: 0x0  nop
    ctx->pc = 0x249ef0u;
    // NOP
label_249ef4:
    // 0x249ef4: 0xe7a00134  swc1        $f0, 0x134($sp)
    ctx->pc = 0x249ef4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
label_249ef8:
    // 0x249ef8: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x249ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_249efc:
    // 0x249efc: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x249efcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_249f00:
    // 0x249f00: 0xe7a00138  swc1        $f0, 0x138($sp)
    ctx->pc = 0x249f00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_249f04:
    // 0x249f04: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x249f04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
label_249f08:
    // 0x249f08: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x249f08u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_249f0c:
    // 0x249f0c: 0x0  nop
    ctx->pc = 0x249f0cu;
    // NOP
label_249f10:
    // 0x249f10: 0xe7a0013c  swc1        $f0, 0x13C($sp)
    ctx->pc = 0x249f10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
label_249f14:
    // 0x249f14: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x249f14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_249f18:
    // 0x249f18: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x249f18u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_249f1c:
    // 0x249f1c: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x249f1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_249f20:
    // 0x249f20: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x249f20u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_249f24:
    // 0x249f24: 0x27a70130  addiu       $a3, $sp, 0x130
    ctx->pc = 0x249f24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_249f28:
    // 0x249f28: 0x70e03628  paddub      $a2, $a3, $zero
    ctx->pc = 0x249f28u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
label_249f2c:
    // 0x249f2c: 0xc040bf4  jal         func_102FD0
label_249f30:
    if (ctx->pc == 0x249F30u) {
        ctx->pc = 0x249F34u;
        goto label_249f34;
    }
    ctx->pc = 0x249F2Cu;
    SET_GPR_U32(ctx, 31, 0x249F34u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x249F34u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x249F34u) { return; }
    ctx->pc = 0x249F34u;
label_249f34:
    // 0x249f34: 0xc6010030  lwc1        $f1, 0x30($s0)
    ctx->pc = 0x249f34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_249f38:
    // 0x249f38: 0xc7a00130  lwc1        $f0, 0x130($sp)
    ctx->pc = 0x249f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_249f3c:
    // 0x249f3c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x249f3cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_249f40:
    // 0x249f40: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x249f40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
label_249f44:
    // 0x249f44: 0xc6010034  lwc1        $f1, 0x34($s0)
    ctx->pc = 0x249f44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_249f48:
    // 0x249f48: 0xc7a00134  lwc1        $f0, 0x134($sp)
    ctx->pc = 0x249f48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_249f4c:
    // 0x249f4c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x249f4cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_249f50:
    // 0x249f50: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x249f50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
label_249f54:
    // 0x249f54: 0xc6010038  lwc1        $f1, 0x38($s0)
    ctx->pc = 0x249f54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_249f58:
    // 0x249f58: 0xc7a00138  lwc1        $f0, 0x138($sp)
    ctx->pc = 0x249f58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_249f5c:
    // 0x249f5c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x249f5cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_249f60:
    // 0x249f60: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x249f60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
label_249f64:
    // 0x249f64: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x249f64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_249f68:
    // 0x249f68: 0xc040cbc  jal         func_1032F0
label_249f6c:
    if (ctx->pc == 0x249F6Cu) {
        ctx->pc = 0x249F70u;
        goto label_249f70;
    }
    ctx->pc = 0x249F68u;
    SET_GPR_U32(ctx, 31, 0x249F70u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x249F70u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x249F70u) { return; }
    ctx->pc = 0x249F70u;
label_249f70:
    // 0x249f70: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x249f70u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_249f74:
    // 0x249f74: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x249f74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_249f78:
    // 0x249f78: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x249f78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_249f7c:
    // 0x249f7c: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x249f7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_249f80:
    // 0x249f80: 0xc4a00010  lwc1        $f0, 0x10($a1)
    ctx->pc = 0x249f80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_249f84:
    // 0x249f84: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x249f84u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_249f88:
    // 0x249f88: 0xc058fec  jal         func_163FB0
label_249f8c:
    if (ctx->pc == 0x249F8Cu) {
        ctx->pc = 0x249F90u;
        goto label_249f90;
    }
    ctx->pc = 0x249F88u;
    SET_GPR_U32(ctx, 31, 0x249F90u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x249F88u, 0x249F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249F90u;
label_249f90:
    // 0x249f90: 0xe7a001ac  swc1        $f0, 0x1AC($sp)
    ctx->pc = 0x249f90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 428), bits); }
label_249f94:
    // 0x249f94: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x249f94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_249f98:
    // 0x249f98: 0x27a300e0  addiu       $v1, $sp, 0xE0
    ctx->pc = 0x249f98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_249f9c:
    // 0x249f9c: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x249f9cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_249fa0:
    // 0x249fa0: 0xc7ac01ac  lwc1        $f12, 0x1AC($sp)
    ctx->pc = 0x249fa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_249fa4:
    // 0x249fa4: 0xc040d38  jal         func_1034E0
label_249fa8:
    if (ctx->pc == 0x249FA8u) {
        ctx->pc = 0x249FACu;
        goto label_249fac;
    }
    ctx->pc = 0x249FA4u;
    SET_GPR_U32(ctx, 31, 0x249FACu);
    ctx->pc = 0x1034E0u;
    {
        ctx->pc = 0x249FACu;
        ps2_stubs::sceVu0RotMatrixY(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x249FACu) { return; }
    ctx->pc = 0x249FACu;
label_249fac:
    // 0x249fac: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x249facu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_249fb0:
    // 0x249fb0: 0xc6000030  lwc1        $f0, 0x30($s0)
    ctx->pc = 0x249fb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_249fb4:
    // 0x249fb4: 0xe7a00130  swc1        $f0, 0x130($sp)
    ctx->pc = 0x249fb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_249fb8:
    // 0x249fb8: 0xc6000034  lwc1        $f0, 0x34($s0)
    ctx->pc = 0x249fb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_249fbc:
    // 0x249fbc: 0xe7a00134  swc1        $f0, 0x134($sp)
    ctx->pc = 0x249fbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
label_249fc0:
    // 0x249fc0: 0xc6000038  lwc1        $f0, 0x38($s0)
    ctx->pc = 0x249fc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_249fc4:
    // 0x249fc4: 0xe7a00138  swc1        $f0, 0x138($sp)
    ctx->pc = 0x249fc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_249fc8:
    // 0x249fc8: 0xc600003c  lwc1        $f0, 0x3C($s0)
    ctx->pc = 0x249fc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_249fcc:
    // 0x249fcc: 0xe7a0013c  swc1        $f0, 0x13C($sp)
    ctx->pc = 0x249fccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
label_249fd0:
    // 0x249fd0: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x249fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_249fd4:
    // 0x249fd4: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x249fd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_249fd8:
    // 0x249fd8: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x249fd8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_249fdc:
    // 0x249fdc: 0xc040c00  jal         func_103000
label_249fe0:
    if (ctx->pc == 0x249FE0u) {
        ctx->pc = 0x249FE4u;
        goto label_249fe4;
    }
    ctx->pc = 0x249FDCu;
    SET_GPR_U32(ctx, 31, 0x249FE4u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x249FE4u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x249FE4u) { return; }
    ctx->pc = 0x249FE4u;
label_249fe4:
    // 0x249fe4: 0xc7a00130  lwc1        $f0, 0x130($sp)
    ctx->pc = 0x249fe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_249fe8:
    // 0x249fe8: 0xe7a00110  swc1        $f0, 0x110($sp)
    ctx->pc = 0x249fe8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_249fec:
    // 0x249fec: 0xc7a00134  lwc1        $f0, 0x134($sp)
    ctx->pc = 0x249fecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_249ff0:
    // 0x249ff0: 0xe7a00114  swc1        $f0, 0x114($sp)
    ctx->pc = 0x249ff0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
label_249ff4:
    // 0x249ff4: 0xc7a00138  lwc1        $f0, 0x138($sp)
    ctx->pc = 0x249ff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_249ff8:
    // 0x249ff8: 0xe7a00118  swc1        $f0, 0x118($sp)
    ctx->pc = 0x249ff8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_249ffc:
    // 0x249ffc: 0xc7a0013c  lwc1        $f0, 0x13C($sp)
    ctx->pc = 0x249ffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24a000:
    // 0x24a000: 0xe7a0011c  swc1        $f0, 0x11C($sp)
    ctx->pc = 0x24a000u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
label_24a004:
    // 0x24a004: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x24a004u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
label_24a008:
    // 0x24a008: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x24a008u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_24a00c:
    // 0x24a00c: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x24a00cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_24a010:
    // 0x24a010: 0xc040c00  jal         func_103000
label_24a014:
    if (ctx->pc == 0x24A014u) {
        ctx->pc = 0x24A018u;
        goto label_24a018;
    }
    ctx->pc = 0x24A010u;
    SET_GPR_U32(ctx, 31, 0x24A018u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x24A018u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x24A018u) { return; }
    ctx->pc = 0x24A018u;
label_24a018:
    // 0x24a018: 0x3c044348  lui         $a0, 0x4348
    ctx->pc = 0x24a018u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17224 << 16));
label_24a01c:
    // 0x24a01c: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x24a01cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_24a020:
    // 0x24a020: 0x72a02628  paddub      $a0, $s5, $zero
    ctx->pc = 0x24a020u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
label_24a024:
    // 0x24a024: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x24a024u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
label_24a028:
    // 0x24a028: 0xc05cad8  jal         func_172B60
label_24a02c:
    if (ctx->pc == 0x24A02Cu) {
        ctx->pc = 0x24A030u;
        goto label_24a030;
    }
    ctx->pc = 0x24A028u;
    SET_GPR_U32(ctx, 31, 0x24A030u);
    ctx->pc = 0x172B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172B60u, 0x24A028u, 0x24A030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A030u;
label_24a030:
    // 0x24a030: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x24a030u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_24a034:
    // 0x24a034: 0x0  nop
    ctx->pc = 0x24a034u;
    // NOP
label_24a038:
    // 0x24a038: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x24a038u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_24a03c:
    // 0x24a03c: 0x0  nop
    ctx->pc = 0x24a03cu;
    // NOP
label_24a040:
    // 0x24a040: 0x45000025  bc1f        . + 4 + (0x25 << 2)
label_24a044:
    if (ctx->pc == 0x24A044u) {
        ctx->pc = 0x24A048u;
        goto label_24a048;
    }
    ctx->pc = 0x24A040u;
    {
        const bool branch_taken_0x24a040 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x24a040) {
            ctx->pc = 0x24A0D8u;
            goto label_24a0d8;
        }
    }
    ctx->pc = 0x24A048u;
label_24a048:
    // 0x24a048: 0x16200020  bnez        $s1, . + 4 + (0x20 << 2)
label_24a04c:
    if (ctx->pc == 0x24A04Cu) {
        ctx->pc = 0x24A050u;
        goto label_24a050;
    }
    ctx->pc = 0x24A048u;
    {
        const bool branch_taken_0x24a048 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x24a048) {
            ctx->pc = 0x24A0CCu;
            goto label_24a0cc;
        }
    }
    ctx->pc = 0x24A050u;
label_24a050:
    // 0x24a050: 0x96050140  lhu         $a1, 0x140($s0)
    ctx->pc = 0x24a050u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
label_24a054:
    // 0x24a054: 0x30a2ff5b  andi        $v0, $a1, 0xFF5B
    ctx->pc = 0x24a054u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65371);
label_24a058:
    // 0x24a058: 0xa6020140  sh          $v0, 0x140($s0)
    ctx->pc = 0x24a058u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 2));
label_24a05c:
    // 0x24a05c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x24a05cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_24a060:
    // 0x24a060: 0x8e050100  lw          $a1, 0x100($s0)
    ctx->pc = 0x24a060u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
label_24a064:
    // 0x24a064: 0xc040c44  jal         func_103110
label_24a068:
    if (ctx->pc == 0x24A068u) {
        ctx->pc = 0x24A06Cu;
        goto label_24a06c;
    }
    ctx->pc = 0x24A064u;
    SET_GPR_U32(ctx, 31, 0x24A06Cu);
    ctx->pc = 0x103110u;
    {
        ctx->pc = 0x24A06Cu;
        ps2_stubs::sceVu0InversMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x24A06Cu) { return; }
    ctx->pc = 0x24A06Cu;
label_24a06c:
    // 0x24a06c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x24a06cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_24a070:
    // 0x24a070: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x24a070u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_24a074:
    // 0x24a074: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x24a074u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_24a078:
    // 0x24a078: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x24a078u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_24a07c:
    // 0x24a07c: 0xc040c00  jal         func_103000
label_24a080:
    if (ctx->pc == 0x24A080u) {
        ctx->pc = 0x24A084u;
        goto label_24a084;
    }
    ctx->pc = 0x24A07Cu;
    SET_GPR_U32(ctx, 31, 0x24A084u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x24A084u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x24A084u) { return; }
    ctx->pc = 0x24A084u;
label_24a084:
    // 0x24a084: 0x26040080  addiu       $a0, $s0, 0x80
    ctx->pc = 0x24a084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
label_24a088:
    // 0x24a088: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x24a088u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_24a08c:
    // 0x24a08c: 0xc040ca2  jal         func_103288
label_24a090:
    if (ctx->pc == 0x24A090u) {
        ctx->pc = 0x24A094u;
        goto label_24a094;
    }
    ctx->pc = 0x24A08Cu;
    SET_GPR_U32(ctx, 31, 0x24A094u);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x24A094u;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x24A094u) { return; }
    ctx->pc = 0x24A094u;
label_24a094:
    // 0x24a094: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x24a094u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_24a098:
    // 0x24a098: 0x94a3002e  lhu         $v1, 0x2E($a1)
    ctx->pc = 0x24a098u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 46)));
label_24a09c:
    // 0x24a09c: 0x3064fffe  andi        $a0, $v1, 0xFFFE
    ctx->pc = 0x24a09cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65534);
label_24a0a0:
    // 0x24a0a0: 0xa4a4002e  sh          $a0, 0x2E($a1)
    ctx->pc = 0x24a0a0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 46), (uint16_t)GPR_U32(ctx, 4));
label_24a0a4:
    // 0x24a0a4: 0x8fa301c8  lw          $v1, 0x1C8($sp)
    ctx->pc = 0x24a0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 456)));
label_24a0a8:
    // 0x24a0a8: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x24a0a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_24a0ac:
    // 0x24a0ac: 0x8ca40030  lw          $a0, 0x30($a1)
    ctx->pc = 0x24a0acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
label_24a0b0:
    // 0x24a0b0: 0x2403feff  addiu       $v1, $zero, -0x101
    ctx->pc = 0x24a0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967039));
label_24a0b4:
    // 0x24a0b4: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x24a0b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_24a0b8:
    // 0x24a0b8: 0xaca40030  sw          $a0, 0x30($a1)
    ctx->pc = 0x24a0b8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 4));
label_24a0bc:
    // 0x24a0bc: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x24a0bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_24a0c0:
    // 0x24a0c0: 0xa0a00029  sb          $zero, 0x29($a1)
    ctx->pc = 0x24a0c0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 41), (uint8_t)GPR_U32(ctx, 0));
label_24a0c4:
    // 0x24a0c4: 0x10000004  b           . + 4 + (0x4 << 2)
label_24a0c8:
    if (ctx->pc == 0x24A0C8u) {
        ctx->pc = 0x24A0CCu;
        goto label_24a0cc;
    }
    ctx->pc = 0x24A0C4u;
    {
        const bool branch_taken_0x24a0c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24a0c4) {
            ctx->pc = 0x24A0D8u;
            goto label_24a0d8;
        }
    }
    ctx->pc = 0x24A0CCu;
label_24a0cc:
    // 0x24a0cc: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x24a0ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_24a0d0:
    // 0x24a0d0: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x24a0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_24a0d4:
    // 0x24a0d4: 0xa0650029  sb          $a1, 0x29($v1)
    ctx->pc = 0x24a0d4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 41), (uint8_t)GPR_U32(ctx, 5));
label_24a0d8:
    // 0x24a0d8: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x24a0d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_24a0dc:
    // 0x24a0dc: 0x84a40030  lh          $a0, 0x30($a1)
    ctx->pc = 0x24a0dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 48)));
label_24a0e0:
    // 0x24a0e0: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x24a0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_24a0e4:
    // 0x24a0e4: 0xa4a30030  sh          $v1, 0x30($a1)
    ctx->pc = 0x24a0e4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 48), (uint16_t)GPR_U32(ctx, 3));
label_24a0e8:
    // 0x24a0e8: 0x1480029f  bnez        $a0, . + 4 + (0x29F << 2)
label_24a0ec:
    if (ctx->pc == 0x24A0ECu) {
        ctx->pc = 0x24A0F0u;
        goto label_24a0f0;
    }
    ctx->pc = 0x24A0E8u;
    {
        const bool branch_taken_0x24a0e8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x24a0e8) {
            ctx->pc = 0x24AB68u;
            goto label_24ab68;
        }
    }
    ctx->pc = 0x24A0F0u;
label_24a0f0:
    // 0x24a0f0: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x24a0f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_24a0f4:
    // 0x24a0f4: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x24a0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_24a0f8:
    // 0x24a0f8: 0xa4440030  sh          $a0, 0x30($v0)
    ctx->pc = 0x24a0f8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 48), (uint16_t)GPR_U32(ctx, 4));
label_24a0fc:
    // 0x24a0fc: 0x8fa301c8  lw          $v1, 0x1C8($sp)
    ctx->pc = 0x24a0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 456)));
label_24a100:
    // 0x24a100: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x24a100u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
label_24a104:
    // 0x24a104: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x24a104u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_24a108:
    // 0x24a108: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x24a108u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_24a10c:
    // 0x24a10c: 0x24040507  addiu       $a0, $zero, 0x507
    ctx->pc = 0x24a10cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1287));
label_24a110:
    // 0x24a110: 0x24630120  addiu       $v1, $v1, 0x120
    ctx->pc = 0x24a110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
label_24a114:
    // 0x24a114: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x24a114u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_24a118:
    // 0x24a118: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x24a118u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_24a11c:
    // 0x24a11c: 0xc067b18  jal         func_19EC60
label_24a120:
    if (ctx->pc == 0x24A120u) {
        ctx->pc = 0x24A124u;
        goto label_24a124;
    }
    ctx->pc = 0x24A11Cu;
    SET_GPR_U32(ctx, 31, 0x24A124u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x24A11Cu, 0x24A124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A124u;
label_24a124:
    // 0x24a124: 0x10000290  b           . + 4 + (0x290 << 2)
label_24a128:
    if (ctx->pc == 0x24A128u) {
        ctx->pc = 0x24A12Cu;
        goto label_24a12c;
    }
    ctx->pc = 0x24A124u;
    {
        const bool branch_taken_0x24a124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24a124) {
            ctx->pc = 0x24AB68u;
            goto label_24ab68;
        }
    }
    ctx->pc = 0x24A12Cu;
label_24a12c:
    // 0x24a12c: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x24a12cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_24a130:
    // 0x24a130: 0x84a20030  lh          $v0, 0x30($a1)
    ctx->pc = 0x24a130u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 48)));
label_24a134:
    // 0x24a134: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x24a134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_24a138:
    // 0x24a138: 0xa4a30030  sh          $v1, 0x30($a1)
    ctx->pc = 0x24a138u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 48), (uint16_t)GPR_U32(ctx, 3));
label_24a13c:
    // 0x24a13c: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_24a140:
    if (ctx->pc == 0x24A140u) {
        ctx->pc = 0x24A144u;
        goto label_24a144;
    }
    ctx->pc = 0x24A13Cu;
    {
        const bool branch_taken_0x24a13c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24a13c) {
            ctx->pc = 0x24A178u;
            goto label_24a178;
        }
    }
    ctx->pc = 0x24A144u;
label_24a144:
    // 0x24a144: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24a144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24a148:
    // 0x24a148: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x24a148u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_24a14c:
    // 0x24a14c: 0xa0820029  sb          $v0, 0x29($a0)
    ctx->pc = 0x24a14cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 41), (uint8_t)GPR_U32(ctx, 2));
label_24a150:
    // 0x24a150: 0xc067694  jal         func_19DA50
label_24a154:
    if (ctx->pc == 0x24A154u) {
        ctx->pc = 0x24A158u;
        goto label_24a158;
    }
    ctx->pc = 0x24A150u;
    SET_GPR_U32(ctx, 31, 0x24A158u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x24A150u, 0x24A158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A158u;
label_24a158:
    // 0x24a158: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x24a158u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_24a15c:
    // 0x24a15c: 0x30c7001f  andi        $a3, $a2, 0x1F
    ctx->pc = 0x24a15cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)31);
label_24a160:
    // 0x24a160: 0x24e3001e  addiu       $v1, $a3, 0x1E
    ctx->pc = 0x24a160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 30));
label_24a164:
    // 0x24a164: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x24a164u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_24a168:
    // 0x24a168: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x24a168u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_24a16c:
    // 0x24a16c: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x24a16cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_24a170:
    // 0x24a170: 0xa4830030  sh          $v1, 0x30($a0)
    ctx->pc = 0x24a170u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 48), (uint16_t)GPR_U32(ctx, 3));
label_24a174:
    // 0x24a174: 0x0  nop
    ctx->pc = 0x24a174u;
    // NOP
label_24a178:
    // 0x24a178: 0x8fa201c8  lw          $v0, 0x1C8($sp)
    ctx->pc = 0x24a178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 456)));
label_24a17c:
    // 0x24a17c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x24a17cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_24a180:
    // 0x24a180: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x24a180u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_24a184:
    // 0x24a184: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x24a184u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
label_24a188:
    // 0x24a188: 0x851024  and         $v0, $a0, $a1
    ctx->pc = 0x24a188u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
label_24a18c:
    // 0x24a18c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_24a190:
    if (ctx->pc == 0x24A190u) {
        ctx->pc = 0x24A194u;
        goto label_24a194;
    }
    ctx->pc = 0x24A18Cu;
    {
        const bool branch_taken_0x24a18c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24a18c) {
            ctx->pc = 0x24A1C0u;
            goto label_24a1c0;
        }
    }
    ctx->pc = 0x24A194u;
label_24a194:
    // 0x24a194: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x24a194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_24a198:
    // 0x24a198: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x24a198u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_24a19c:
    // 0x24a19c: 0xa0820029  sb          $v0, 0x29($a0)
    ctx->pc = 0x24a19cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 41), (uint8_t)GPR_U32(ctx, 2));
label_24a1a0:
    // 0x24a1a0: 0x8fa301c8  lw          $v1, 0x1C8($sp)
    ctx->pc = 0x24a1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 456)));
label_24a1a4:
    // 0x24a1a4: 0x24621330  addiu       $v0, $v1, 0x1330
    ctx->pc = 0x24a1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_24a1a8:
    // 0x24a1a8: 0x8c450030  lw          $a1, 0x30($v0)
    ctx->pc = 0x24a1a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_24a1ac:
    // 0x24a1ac: 0x3c03feff  lui         $v1, 0xFEFF
    ctx->pc = 0x24a1acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65279 << 16));
label_24a1b0:
    // 0x24a1b0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x24a1b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_24a1b4:
    // 0x24a1b4: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x24a1b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_24a1b8:
    // 0x24a1b8: 0xac450030  sw          $a1, 0x30($v0)
    ctx->pc = 0x24a1b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 5));
label_24a1bc:
    // 0x24a1bc: 0x0  nop
    ctx->pc = 0x24a1bcu;
    // NOP
label_24a1c0:
    // 0x24a1c0: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x24a1c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_24a1c4:
    // 0x24a1c4: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x24a1c4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_24a1c8:
    // 0x24a1c8: 0xc040cbc  jal         func_1032F0
label_24a1cc:
    if (ctx->pc == 0x24A1CCu) {
        ctx->pc = 0x24A1D0u;
        goto label_24a1d0;
    }
    ctx->pc = 0x24A1C8u;
    SET_GPR_U32(ctx, 31, 0x24A1D0u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x24A1D0u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x24A1D0u) { return; }
    ctx->pc = 0x24A1D0u;
label_24a1d0:
    // 0x24a1d0: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x24a1d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_24a1d4:
    // 0x24a1d4: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x24a1d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_24a1d8:
    // 0x24a1d8: 0x3c033ec9  lui         $v1, 0x3EC9
    ctx->pc = 0x24a1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16073 << 16));
label_24a1dc:
    // 0x24a1dc: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x24a1dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_24a1e0:
    // 0x24a1e0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x24a1e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_24a1e4:
    // 0x24a1e4: 0x0  nop
    ctx->pc = 0x24a1e4u;
    // NOP
label_24a1e8:
    // 0x24a1e8: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x24a1e8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_24a1ec:
    // 0x24a1ec: 0xc058fec  jal         func_163FB0
label_24a1f0:
    if (ctx->pc == 0x24A1F0u) {
        ctx->pc = 0x24A1F4u;
        goto label_24a1f4;
    }
    ctx->pc = 0x24A1ECu;
    SET_GPR_U32(ctx, 31, 0x24A1F4u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x24A1ECu, 0x24A1F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A1F4u;
label_24a1f4:
    // 0x24a1f4: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x24a1f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_24a1f8:
    // 0x24a1f8: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x24a1f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_24a1fc:
    // 0x24a1fc: 0x26060150  addiu       $a2, $s0, 0x150
    ctx->pc = 0x24a1fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_24a200:
    // 0x24a200: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x24a200u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_24a204:
    // 0x24a204: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x24a204u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_24a208:
    // 0x24a208: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x24a208u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_24a20c:
    // 0x24a20c: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x24a20cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_24a210:
    // 0x24a210: 0xc4cc0000  lwc1        $f12, 0x0($a2)
    ctx->pc = 0x24a210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_24a214:
    // 0x24a214: 0xc040ce4  jal         func_103390
label_24a218:
    if (ctx->pc == 0x24A218u) {
        ctx->pc = 0x24A21Cu;
        goto label_24a21c;
    }
    ctx->pc = 0x24A214u;
    SET_GPR_U32(ctx, 31, 0x24A21Cu);
    ctx->pc = 0x103390u;
    {
        ctx->pc = 0x24A21Cu;
        ps2_stubs::sceVu0RotMatrixZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x24A21Cu) { return; }
    ctx->pc = 0x24A21Cu;
label_24a21c:
    // 0x24a21c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x24a21cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_24a220:
    // 0x24a220: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x24a220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_24a224:
    // 0x24a224: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x24a224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_24a228:
    // 0x24a228: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x24a228u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_24a22c:
    // 0x24a22c: 0xc46c0004  lwc1        $f12, 0x4($v1)
    ctx->pc = 0x24a22cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_24a230:
    // 0x24a230: 0xc040d0e  jal         func_103438
label_24a234:
    if (ctx->pc == 0x24A234u) {
        ctx->pc = 0x24A238u;
        goto label_24a238;
    }
    ctx->pc = 0x24A230u;
    SET_GPR_U32(ctx, 31, 0x24A238u);
    ctx->pc = 0x103438u;
    {
        ctx->pc = 0x24A238u;
        ps2_stubs::sceVu0RotMatrixX(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x24A238u) { return; }
    ctx->pc = 0x24A238u;
label_24a238:
    // 0x24a238: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x24a238u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_24a23c:
    // 0x24a23c: 0x26070150  addiu       $a3, $s0, 0x150
    ctx->pc = 0x24a23cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_24a240:
    // 0x24a240: 0x26060150  addiu       $a2, $s0, 0x150
    ctx->pc = 0x24a240u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_24a244:
    // 0x24a244: 0x26030030  addiu       $v1, $s0, 0x30
    ctx->pc = 0x24a244u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_24a248:
    // 0x24a248: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x24a248u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_24a24c:
    // 0x24a24c: 0xc4ec0008  lwc1        $f12, 0x8($a3)
    ctx->pc = 0x24a24cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_24a250:
    // 0x24a250: 0xc4cd000c  lwc1        $f13, 0xC($a2)
    ctx->pc = 0x24a250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_24a254:
    // 0x24a254: 0x26850030  addiu       $a1, $s4, 0x30
    ctx->pc = 0x24a254u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
label_24a258:
    // 0x24a258: 0xc7ae01b4  lwc1        $f14, 0x1B4($sp)
    ctx->pc = 0x24a258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_24a25c:
    // 0x24a25c: 0xc7af01b4  lwc1        $f15, 0x1B4($sp)
    ctx->pc = 0x24a25cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_24a260:
    // 0x24a260: 0x27a601ac  addiu       $a2, $sp, 0x1AC
    ctx->pc = 0x24a260u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 428));
label_24a264:
    // 0x24a264: 0x27a701b0  addiu       $a3, $sp, 0x1B0
    ctx->pc = 0x24a264u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_24a268:
    // 0x24a268: 0xc05c968  jal         func_1725A0
label_24a26c:
    if (ctx->pc == 0x24A26Cu) {
        ctx->pc = 0x24A270u;
        goto label_24a270;
    }
    ctx->pc = 0x24A268u;
    SET_GPR_U32(ctx, 31, 0x24A270u);
    ctx->pc = 0x1725A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1725A0u, 0x24A268u, 0x24A270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A270u;
label_24a270:
    // 0x24a270: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x24a270u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_24a274:
    // 0x24a274: 0x27a300e0  addiu       $v1, $sp, 0xE0
    ctx->pc = 0x24a274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_24a278:
    // 0x24a278: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x24a278u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_24a27c:
    // 0x24a27c: 0xc040cbc  jal         func_1032F0
label_24a280:
    if (ctx->pc == 0x24A280u) {
        ctx->pc = 0x24A284u;
        goto label_24a284;
    }
    ctx->pc = 0x24A27Cu;
    SET_GPR_U32(ctx, 31, 0x24A284u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x24A284u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x24A284u) { return; }
    ctx->pc = 0x24A284u;
label_24a284:
    // 0x24a284: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x24a284u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_24a288:
    // 0x24a288: 0x26160150  addiu       $s6, $s0, 0x150
    ctx->pc = 0x24a288u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_24a28c:
    // 0x24a28c: 0xc6c10008  lwc1        $f1, 0x8($s6)
    ctx->pc = 0x24a28cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_24a290:
    // 0x24a290: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x24a290u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_24a294:
    // 0x24a294: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x24a294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24a298:
    // 0x24a298: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x24a298u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_24a29c:
    // 0x24a29c: 0xc058fec  jal         func_163FB0
label_24a2a0:
    if (ctx->pc == 0x24A2A0u) {
        ctx->pc = 0x24A2A4u;
        goto label_24a2a4;
    }
    ctx->pc = 0x24A29Cu;
    SET_GPR_U32(ctx, 31, 0x24A2A4u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x24A29Cu, 0x24A2A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A2A4u;
label_24a2a4:
    // 0x24a2a4: 0xe7a001ac  swc1        $f0, 0x1AC($sp)
    ctx->pc = 0x24a2a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 428), bits); }
label_24a2a8:
    // 0x24a2a8: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x24a2a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_24a2ac:
    // 0x24a2ac: 0x27a300e0  addiu       $v1, $sp, 0xE0
    ctx->pc = 0x24a2acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_24a2b0:
    // 0x24a2b0: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x24a2b0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_24a2b4:
    // 0x24a2b4: 0xc7ac01ac  lwc1        $f12, 0x1AC($sp)
    ctx->pc = 0x24a2b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_24a2b8:
    // 0x24a2b8: 0xc040d38  jal         func_1034E0
label_24a2bc:
    if (ctx->pc == 0x24A2BCu) {
        ctx->pc = 0x24A2C0u;
        goto label_24a2c0;
    }
    ctx->pc = 0x24A2B8u;
    SET_GPR_U32(ctx, 31, 0x24A2C0u);
    ctx->pc = 0x1034E0u;
    {
        ctx->pc = 0x24A2C0u;
        ps2_stubs::sceVu0RotMatrixY(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x24A2C0u) { return; }
    ctx->pc = 0x24A2C0u;
label_24a2c0:
    // 0x24a2c0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x24a2c0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_24a2c4:
    // 0x24a2c4: 0xc6000030  lwc1        $f0, 0x30($s0)
    ctx->pc = 0x24a2c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24a2c8:
    // 0x24a2c8: 0xe7a00130  swc1        $f0, 0x130($sp)
    ctx->pc = 0x24a2c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_24a2cc:
    // 0x24a2cc: 0xc6000034  lwc1        $f0, 0x34($s0)
    ctx->pc = 0x24a2ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24a2d0:
    // 0x24a2d0: 0xe7a00134  swc1        $f0, 0x134($sp)
    ctx->pc = 0x24a2d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
label_24a2d4:
    // 0x24a2d4: 0xc6000038  lwc1        $f0, 0x38($s0)
    ctx->pc = 0x24a2d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24a2d8:
    // 0x24a2d8: 0xe7a00138  swc1        $f0, 0x138($sp)
    ctx->pc = 0x24a2d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_24a2dc:
    // 0x24a2dc: 0xc600003c  lwc1        $f0, 0x3C($s0)
    ctx->pc = 0x24a2dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24a2e0:
    // 0x24a2e0: 0xe7a0013c  swc1        $f0, 0x13C($sp)
    ctx->pc = 0x24a2e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
label_24a2e4:
    // 0x24a2e4: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x24a2e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_24a2e8:
    // 0x24a2e8: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x24a2e8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_24a2ec:
    // 0x24a2ec: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x24a2ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_24a2f0:
    // 0x24a2f0: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x24a2f0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_24a2f4:
    // 0x24a2f4: 0xc040c00  jal         func_103000
label_24a2f8:
    if (ctx->pc == 0x24A2F8u) {
        ctx->pc = 0x24A2FCu;
        goto label_24a2fc;
    }
    ctx->pc = 0x24A2F4u;
    SET_GPR_U32(ctx, 31, 0x24A2FCu);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x24A2FCu;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x24A2FCu) { return; }
    ctx->pc = 0x24A2FCu;
label_24a2fc:
    // 0x24a2fc: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x24a2fcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_24a300:
    // 0x24a300: 0xc7a00130  lwc1        $f0, 0x130($sp)
    ctx->pc = 0x24a300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24a304:
    // 0x24a304: 0xe7a00110  swc1        $f0, 0x110($sp)
    ctx->pc = 0x24a304u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_24a308:
    // 0x24a308: 0xc7a00134  lwc1        $f0, 0x134($sp)
    ctx->pc = 0x24a308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24a30c:
    // 0x24a30c: 0xe7a00114  swc1        $f0, 0x114($sp)
    ctx->pc = 0x24a30cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
label_24a310:
    // 0x24a310: 0xc7a00138  lwc1        $f0, 0x138($sp)
    ctx->pc = 0x24a310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24a314:
    // 0x24a314: 0xe7a00118  swc1        $f0, 0x118($sp)
    ctx->pc = 0x24a314u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_24a318:
    // 0x24a318: 0xc7a0013c  lwc1        $f0, 0x13C($sp)
    ctx->pc = 0x24a318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24a31c:
    // 0x24a31c: 0xe7a0011c  swc1        $f0, 0x11C($sp)
    ctx->pc = 0x24a31cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
label_24a320:
    // 0x24a320: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x24a320u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
label_24a324:
    // 0x24a324: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x24a324u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_24a328:
    // 0x24a328: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x24a328u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_24a32c:
    // 0x24a32c: 0xc040c00  jal         func_103000
label_24a330:
    if (ctx->pc == 0x24A330u) {
        ctx->pc = 0x24A334u;
        goto label_24a334;
    }
    ctx->pc = 0x24A32Cu;
    SET_GPR_U32(ctx, 31, 0x24A334u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x24A334u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x24A334u) { return; }
    ctx->pc = 0x24A334u;
label_24a334:
    // 0x24a334: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x24a334u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_24a338:
    // 0x24a338: 0x8fa401c8  lw          $a0, 0x1C8($sp)
    ctx->pc = 0x24a338u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 456)));
label_24a33c:
    // 0x24a33c: 0xc06ce3c  jal         func_1B38F0
label_24a340:
    if (ctx->pc == 0x24A340u) {
        ctx->pc = 0x24A344u;
        goto label_24a344;
    }
    ctx->pc = 0x24A33Cu;
    SET_GPR_U32(ctx, 31, 0x24A344u);
    ctx->pc = 0x1B38F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B38F0u, 0x24A33Cu, 0x24A344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A344u;
label_24a344:
    // 0x24a344: 0x7040b628  paddub      $s6, $v0, $zero
    ctx->pc = 0x24a344u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_24a348:
    // 0x24a348: 0x32c3ffff  andi        $v1, $s6, 0xFFFF
    ctx->pc = 0x24a348u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)65535);
label_24a34c:
    // 0x24a34c: 0x1460008c  bnez        $v1, . + 4 + (0x8C << 2)
label_24a350:
    if (ctx->pc == 0x24A350u) {
        ctx->pc = 0x24A354u;
        goto label_24a354;
    }
    ctx->pc = 0x24A34Cu;
    {
        const bool branch_taken_0x24a34c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x24a34c) {
            ctx->pc = 0x24A580u;
            goto label_24a580;
        }
    }
    ctx->pc = 0x24A354u;
label_24a354:
    // 0x24a354: 0xafb20170  sw          $s2, 0x170($sp)
    ctx->pc = 0x24a354u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 18));
label_24a358:
    // 0x24a358: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x24a358u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_24a35c:
    // 0x24a35c: 0x0  nop
    ctx->pc = 0x24a35cu;
    // NOP
label_24a360:
    // 0x24a360: 0xe7a00180  swc1        $f0, 0x180($sp)
    ctx->pc = 0x24a360u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
label_24a364:
    // 0x24a364: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x24a364u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_24a368:
    // 0x24a368: 0x0  nop
    ctx->pc = 0x24a368u;
    // NOP
label_24a36c:
    // 0x24a36c: 0xe7a00184  swc1        $f0, 0x184($sp)
    ctx->pc = 0x24a36cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 388), bits); }
label_24a370:
    // 0x24a370: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x24a370u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_24a374:
    // 0x24a374: 0x0  nop
    ctx->pc = 0x24a374u;
    // NOP
label_24a378:
    // 0x24a378: 0xe7a00188  swc1        $f0, 0x188($sp)
    ctx->pc = 0x24a378u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 392), bits); }
label_24a37c:
    // 0x24a37c: 0x3c173f80  lui         $s7, 0x3F80
    ctx->pc = 0x24a37cu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)16256 << 16));
label_24a380:
    // 0x24a380: 0x44970000  mtc1        $s7, $f0
    ctx->pc = 0x24a380u;
    { uint32_t bits = GPR_U32(ctx, 23); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_24a384:
    // 0x24a384: 0x0  nop
    ctx->pc = 0x24a384u;
    // NOP
label_24a388:
    // 0x24a388: 0xe7a0018c  swc1        $f0, 0x18C($sp)
    ctx->pc = 0x24a388u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 396), bits); }
label_24a38c:
    // 0x24a38c: 0x3c034396  lui         $v1, 0x4396
    ctx->pc = 0x24a38cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
label_24a390:
    // 0x24a390: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x24a390u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_24a394:
    // 0x24a394: 0x0  nop
    ctx->pc = 0x24a394u;
    // NOP
label_24a398:
    // 0x24a398: 0xe7a00190  swc1        $f0, 0x190($sp)
    ctx->pc = 0x24a398u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 400), bits); }
label_24a39c:
    // 0x24a39c: 0xa7a00194  sh          $zero, 0x194($sp)
    ctx->pc = 0x24a39cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 404), (uint16_t)GPR_U32(ctx, 0));
label_24a3a0:
    // 0x24a3a0: 0xa3a00196  sb          $zero, 0x196($sp)
    ctx->pc = 0x24a3a0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 406), (uint8_t)GPR_U32(ctx, 0));
label_24a3a4:
    // 0x24a3a4: 0xa3a00197  sb          $zero, 0x197($sp)
    ctx->pc = 0x24a3a4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 407), (uint8_t)GPR_U32(ctx, 0));
label_24a3a8:
    // 0x24a3a8: 0x8fa401c8  lw          $a0, 0x1C8($sp)
    ctx->pc = 0x24a3a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 456)));
label_24a3ac:
    // 0x24a3ac: 0x27a50170  addiu       $a1, $sp, 0x170
    ctx->pc = 0x24a3acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_24a3b0:
    // 0x24a3b0: 0xc06ce90  jal         func_1B3A40
label_24a3b4:
    if (ctx->pc == 0x24A3B4u) {
        ctx->pc = 0x24A3B8u;
        goto label_24a3b8;
    }
    ctx->pc = 0x24A3B0u;
    SET_GPR_U32(ctx, 31, 0x24A3B8u);
    ctx->pc = 0x1B3A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3A40u, 0x24A3B0u, 0x24A3B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A3B8u;
label_24a3b8:
    // 0x24a3b8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x24a3b8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_24a3bc:
    // 0x24a3bc: 0x10600070  beqz        $v1, . + 4 + (0x70 << 2)
label_24a3c0:
    if (ctx->pc == 0x24A3C0u) {
        ctx->pc = 0x24A3C4u;
        goto label_24a3c4;
    }
    ctx->pc = 0x24A3BCu;
    {
        const bool branch_taken_0x24a3bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x24a3bc) {
            ctx->pc = 0x24A580u;
            goto label_24a580;
        }
    }
    ctx->pc = 0x24A3C4u;
label_24a3c4:
    // 0x24a3c4: 0x8fa301c8  lw          $v1, 0x1C8($sp)
    ctx->pc = 0x24a3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 456)));
label_24a3c8:
    // 0x24a3c8: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x24a3c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
label_24a3cc:
    // 0x24a3cc: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x24a3ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
label_24a3d0:
    // 0x24a3d0: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x24a3d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_24a3d4:
    // 0x24a3d4: 0x41c38  dsll        $v1, $a0, 16
    ctx->pc = 0x24a3d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << 16);
label_24a3d8:
    // 0x24a3d8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x24a3d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_24a3dc:
    // 0x24a3dc: 0xa33824  and         $a3, $a1, $v1
    ctx->pc = 0x24a3dcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_24a3e0:
    // 0x24a3e0: 0x7283c  dsll32      $a1, $a3, 0
    ctx->pc = 0x24a3e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) << (32 + 0));
label_24a3e4:
    // 0x24a3e4: 0x34be0006  ori         $fp, $a1, 0x6
    ctx->pc = 0x24a3e4u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)6);
label_24a3e8:
    // 0x24a3e8: 0x112880  sll         $a1, $s1, 2
    ctx->pc = 0x24a3e8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_24a3ec:
    // 0x24a3ec: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x24a3ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
label_24a3f0:
    // 0x24a3f0: 0x2483b420  addiu       $v1, $a0, -0x4BE0
    ctx->pc = 0x24a3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947872));
label_24a3f4:
    // 0x24a3f4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x24a3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_24a3f8:
    // 0x24a3f8: 0x90650001  lbu         $a1, 0x1($v1)
    ctx->pc = 0x24a3f8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
label_24a3fc:
    // 0x24a3fc: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x24a3fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_24a400:
    // 0x24a400: 0x32180  sll         $a0, $v1, 6
    ctx->pc = 0x24a400u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_24a404:
    // 0x24a404: 0x8fa301c8  lw          $v1, 0x1C8($sp)
    ctx->pc = 0x24a404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 456)));
label_24a408:
    // 0x24a408: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x24a408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
label_24a40c:
    // 0x24a40c: 0x649021  addu        $s2, $v1, $a0
    ctx->pc = 0x24a40cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_24a410:
    // 0x24a410: 0x73c02628  paddub      $a0, $fp, $zero
    ctx->pc = 0x24a410u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 30), GPR_VEC(ctx, 0)));
label_24a414:
    // 0x24a414: 0x27b40180  addiu       $s4, $sp, 0x180
    ctx->pc = 0x24a414u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_24a418:
    // 0x24a418: 0x72802e28  paddub      $a1, $s4, $zero
    ctx->pc = 0x24a418u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
label_24a41c:
    // 0x24a41c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x24a41cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_24a420:
    // 0x24a420: 0x72403e28  paddub      $a3, $s2, $zero
    ctx->pc = 0x24a420u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
label_24a424:
    // 0x24a424: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x24a424u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_24a428:
    // 0x24a428: 0xc06371c  jal         func_18DC70
label_24a42c:
    if (ctx->pc == 0x24A42Cu) {
        ctx->pc = 0x24A430u;
        goto label_24a430;
    }
    ctx->pc = 0x24A428u;
    SET_GPR_U32(ctx, 31, 0x24A430u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x24A428u, 0x24A430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A430u;
label_24a430:
    // 0x24a430: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x24a430u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_24a434:
    // 0x24a434: 0xc067694  jal         func_19DA50
label_24a438:
    if (ctx->pc == 0x24A438u) {
        ctx->pc = 0x24A43Cu;
        goto label_24a43c;
    }
    ctx->pc = 0x24A434u;
    SET_GPR_U32(ctx, 31, 0x24A43Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x24A434u, 0x24A43Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A43Cu;
label_24a43c:
    // 0x24a43c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x24a43cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_24a440:
    // 0x24a440: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
label_24a444:
    if (ctx->pc == 0x24A444u) {
        ctx->pc = 0x24A448u;
        goto label_24a448;
    }
    ctx->pc = 0x24A440u;
    {
        const bool branch_taken_0x24a440 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x24a440) {
            ctx->pc = 0x24A45Cu;
            goto label_24a45c;
        }
    }
    ctx->pc = 0x24A448u;
label_24a448:
    // 0x24a448: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x24a448u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_24a44c:
    // 0x24a44c: 0x0  nop
    ctx->pc = 0x24a44cu;
    // NOP
label_24a450:
    // 0x24a450: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x24a450u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_24a454:
    // 0x24a454: 0x10000008  b           . + 4 + (0x8 << 2)
label_24a458:
    if (ctx->pc == 0x24A458u) {
        ctx->pc = 0x24A45Cu;
        goto label_24a45c;
    }
    ctx->pc = 0x24A454u;
    {
        const bool branch_taken_0x24a454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24a454) {
            ctx->pc = 0x24A478u;
            goto label_24a478;
        }
    }
    ctx->pc = 0x24A45Cu;
label_24a45c:
    // 0x24a45c: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x24a45cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
label_24a460:
    // 0x24a460: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x24a460u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_24a464:
    // 0x24a464: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x24a464u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_24a468:
    // 0x24a468: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x24a468u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_24a46c:
    // 0x24a46c: 0x0  nop
    ctx->pc = 0x24a46cu;
    // NOP
label_24a470:
    // 0x24a470: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x24a470u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_24a474:
    // 0x24a474: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x24a474u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_24a478:
    // 0x24a478: 0xc7a00184  lwc1        $f0, 0x184($sp)
    ctx->pc = 0x24a478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24a47c:
    // 0x24a47c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x24a47cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_24a480:
    // 0x24a480: 0xe7a00184  swc1        $f0, 0x184($sp)
    ctx->pc = 0x24a480u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 388), bits); }
label_24a484:
    // 0x24a484: 0x8fa301c8  lw          $v1, 0x1C8($sp)
    ctx->pc = 0x24a484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 456)));
label_24a488:
    // 0x24a488: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x24a488u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
label_24a48c:
    // 0x24a48c: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x24a48cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
label_24a490:
    // 0x24a490: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x24a490u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_24a494:
    // 0x24a494: 0x41c38  dsll        $v1, $a0, 16
    ctx->pc = 0x24a494u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << 16);
label_24a498:
    // 0x24a498: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x24a498u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_24a49c:
    // 0x24a49c: 0xa3a824  and         $s5, $a1, $v1
    ctx->pc = 0x24a49cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_24a4a0:
    // 0x24a4a0: 0x15283c  dsll32      $a1, $s5, 0
    ctx->pc = 0x24a4a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 21) << (32 + 0));
label_24a4a4:
    // 0x24a4a4: 0x34a30006  ori         $v1, $a1, 0x6
    ctx->pc = 0x24a4a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)6);
label_24a4a8:
    // 0x24a4a8: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x24a4a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_24a4ac:
    // 0x24a4ac: 0x3c050039  lui         $a1, 0x39
    ctx->pc = 0x24a4acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)57 << 16));
label_24a4b0:
    // 0x24a4b0: 0x24a5b420  addiu       $a1, $a1, -0x4BE0
    ctx->pc = 0x24a4b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947872));
label_24a4b4:
    // 0x24a4b4: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x24a4b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_24a4b8:
    // 0x24a4b8: 0x90850001  lbu         $a1, 0x1($a0)
    ctx->pc = 0x24a4b8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
label_24a4bc:
    // 0x24a4bc: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x24a4bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_24a4c0:
    // 0x24a4c0: 0x43180  sll         $a2, $a0, 6
    ctx->pc = 0x24a4c0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
label_24a4c4:
    // 0x24a4c4: 0x8fa401c8  lw          $a0, 0x1C8($sp)
    ctx->pc = 0x24a4c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 456)));
label_24a4c8:
    // 0x24a4c8: 0x8c850130  lw          $a1, 0x130($a0)
    ctx->pc = 0x24a4c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
label_24a4cc:
    // 0x24a4cc: 0xa63821  addu        $a3, $a1, $a2
    ctx->pc = 0x24a4ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_24a4d0:
    // 0x24a4d0: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x24a4d0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_24a4d4:
    // 0x24a4d4: 0x27a50180  addiu       $a1, $sp, 0x180
    ctx->pc = 0x24a4d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_24a4d8:
    // 0x24a4d8: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x24a4d8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_24a4dc:
    // 0x24a4dc: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x24a4dcu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_24a4e0:
    // 0x24a4e0: 0xc06371c  jal         func_18DC70
label_24a4e4:
    if (ctx->pc == 0x24A4E4u) {
        ctx->pc = 0x24A4E8u;
        goto label_24a4e8;
    }
    ctx->pc = 0x24A4E0u;
    SET_GPR_U32(ctx, 31, 0x24A4E8u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x24A4E0u, 0x24A4E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A4E8u;
label_24a4e8:
    // 0x24a4e8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x24a4e8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_24a4ec:
    // 0x24a4ec: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x24a4ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
label_24a4f0:
    // 0x24a4f0: 0x3c05000a  lui         $a1, 0xA
    ctx->pc = 0x24a4f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)10 << 16));
label_24a4f4:
    // 0x24a4f4: 0xc0684d8  jal         func_1A1360
label_24a4f8:
    if (ctx->pc == 0x24A4F8u) {
        ctx->pc = 0x24A4FCu;
        goto label_24a4fc;
    }
    ctx->pc = 0x24A4F4u;
    SET_GPR_U32(ctx, 31, 0x24A4FCu);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x24A4F4u, 0x24A4FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A4FCu;
label_24a4fc:
    // 0x24a4fc: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x24a4fcu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_24a500:
    // 0x24a500: 0x3c0402ff  lui         $a0, 0x2FF
    ctx->pc = 0x24a500u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)767 << 16));
label_24a504:
    // 0x24a504: 0x3c050005  lui         $a1, 0x5
    ctx->pc = 0x24a504u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)5 << 16));
label_24a508:
    // 0x24a508: 0xc0684d8  jal         func_1A1360
label_24a50c:
    if (ctx->pc == 0x24A50Cu) {
        ctx->pc = 0x24A510u;
        goto label_24a510;
    }
    ctx->pc = 0x24A508u;
    SET_GPR_U32(ctx, 31, 0x24A510u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x24A508u, 0x24A510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A510u;
label_24a510:
    // 0x24a510: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x24a510u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_24a514:
    // 0x24a514: 0x3c03469c  lui         $v1, 0x469C
    ctx->pc = 0x24a514u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18076 << 16));
label_24a518:
    // 0x24a518: 0x34644000  ori         $a0, $v1, 0x4000
    ctx->pc = 0x24a518u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
label_24a51c:
    // 0x24a51c: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x24a51cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_24a520:
    // 0x24a520: 0x8fa301c8  lw          $v1, 0x1C8($sp)
    ctx->pc = 0x24a520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 456)));
label_24a524:
    // 0x24a524: 0x24040511  addiu       $a0, $zero, 0x511
    ctx->pc = 0x24a524u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1297));
label_24a528:
    // 0x24a528: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x24a528u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
label_24a52c:
    // 0x24a52c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x24a52cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_24a530:
    // 0x24a530: 0xc067b18  jal         func_19EC60
label_24a534:
    if (ctx->pc == 0x24A534u) {
        ctx->pc = 0x24A538u;
        goto label_24a538;
    }
    ctx->pc = 0x24A530u;
    SET_GPR_U32(ctx, 31, 0x24A538u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x24A530u, 0x24A538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A538u;
label_24a538:
    // 0x24a538: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x24a538u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_24a53c:
    // 0x24a53c: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x24a53cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_24a540:
    // 0x24a540: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x24a540u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_24a544:
    // 0x24a544: 0xa464002c  sh          $a0, 0x2C($v1)
    ctx->pc = 0x24a544u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 44), (uint16_t)GPR_U32(ctx, 4));
label_24a548:
    // 0x24a548: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x24a548u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_24a54c:
    // 0x24a54c: 0x8483002a  lh          $v1, 0x2A($a0)
    ctx->pc = 0x24a54cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 42)));
label_24a550:
    // 0x24a550: 0x2463fffb  addiu       $v1, $v1, -0x5
    ctx->pc = 0x24a550u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967291));
label_24a554:
    // 0x24a554: 0xa483002a  sh          $v1, 0x2A($a0)
    ctx->pc = 0x24a554u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 42), (uint16_t)GPR_U32(ctx, 3));
label_24a558:
    // 0x24a558: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x24a558u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_24a55c:
    // 0x24a55c: 0x8464002a  lh          $a0, 0x2A($v1)
    ctx->pc = 0x24a55cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 42)));
label_24a560:
    // 0x24a560: 0x42c3c  dsll32      $a1, $a0, 16
    ctx->pc = 0x24a560u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 16));
label_24a564:
    // 0x24a564: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x24a564u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
label_24a568:
    // 0x24a568: 0x1ca00005  bgtz        $a1, . + 4 + (0x5 << 2)
label_24a56c:
    if (ctx->pc == 0x24A56Cu) {
        ctx->pc = 0x24A570u;
        goto label_24a570;
    }
    ctx->pc = 0x24A568u;
    {
        const bool branch_taken_0x24a568 = (GPR_S32(ctx, 5) > 0);
        if (branch_taken_0x24a568) {
            ctx->pc = 0x24A580u;
            goto label_24a580;
        }
    }
    ctx->pc = 0x24A570u;
label_24a570:
    // 0x24a570: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x24a570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24a574:
    // 0x24a574: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x24a574u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_24a578:
    // 0x24a578: 0xa483002a  sh          $v1, 0x2A($a0)
    ctx->pc = 0x24a578u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 42), (uint16_t)GPR_U32(ctx, 3));
label_24a57c:
    // 0x24a57c: 0x0  nop
    ctx->pc = 0x24a57cu;
    // NOP
label_24a580:
    // 0x24a580: 0x26060150  addiu       $a2, $s0, 0x150
    ctx->pc = 0x24a580u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_24a584:
    // 0x24a584: 0x84c50030  lh          $a1, 0x30($a2)
    ctx->pc = 0x24a584u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 48)));
label_24a588:
    // 0x24a588: 0x24a3ffff  addiu       $v1, $a1, -0x1
    ctx->pc = 0x24a588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_24a58c:
    // 0x24a58c: 0xa4c30030  sh          $v1, 0x30($a2)
    ctx->pc = 0x24a58cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 48), (uint16_t)GPR_U32(ctx, 3));
label_24a590:
    // 0x24a590: 0x14a00175  bnez        $a1, . + 4 + (0x175 << 2)
label_24a594:
    if (ctx->pc == 0x24A594u) {
        ctx->pc = 0x24A598u;
        goto label_24a598;
    }
    ctx->pc = 0x24A590u;
    {
        const bool branch_taken_0x24a590 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x24a590) {
            ctx->pc = 0x24AB68u;
            goto label_24ab68;
        }
    }
    ctx->pc = 0x24A598u;
label_24a598:
    // 0x24a598: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x24a598u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_24a59c:
    // 0x24a59c: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x24a59cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_24a5a0:
    // 0x24a5a0: 0xa4640030  sh          $a0, 0x30($v1)
    ctx->pc = 0x24a5a0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 48), (uint16_t)GPR_U32(ctx, 4));
label_24a5a4:
    // 0x24a5a4: 0x8fa301c8  lw          $v1, 0x1C8($sp)
    ctx->pc = 0x24a5a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 456)));
label_24a5a8:
    // 0x24a5a8: 0x3c05469c  lui         $a1, 0x469C
    ctx->pc = 0x24a5a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)18076 << 16));
label_24a5ac:
    // 0x24a5ac: 0x34a44000  ori         $a0, $a1, 0x4000
    ctx->pc = 0x24a5acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16384);
label_24a5b0:
    // 0x24a5b0: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x24a5b0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_24a5b4:
    // 0x24a5b4: 0x24020507  addiu       $v0, $zero, 0x507
    ctx->pc = 0x24a5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1287));
label_24a5b8:
    // 0x24a5b8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x24a5b8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_24a5bc:
    // 0x24a5bc: 0x24620120  addiu       $v0, $v1, 0x120
    ctx->pc = 0x24a5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
label_24a5c0:
    // 0x24a5c0: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x24a5c0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_24a5c4:
    // 0x24a5c4: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x24a5c4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_24a5c8:
    // 0x24a5c8: 0xc067b18  jal         func_19EC60
label_24a5cc:
    if (ctx->pc == 0x24A5CCu) {
        ctx->pc = 0x24A5D0u;
        goto label_24a5d0;
    }
    ctx->pc = 0x24A5C8u;
    SET_GPR_U32(ctx, 31, 0x24A5D0u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x24A5C8u, 0x24A5D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A5D0u;
label_24a5d0:
    // 0x24a5d0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x24a5d0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_24a5d4:
    // 0x24a5d4: 0x10000164  b           . + 4 + (0x164 << 2)
label_24a5d8:
    if (ctx->pc == 0x24A5D8u) {
        ctx->pc = 0x24A5DCu;
        goto label_24a5dc;
    }
    ctx->pc = 0x24A5D4u;
    {
        const bool branch_taken_0x24a5d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24a5d4) {
            ctx->pc = 0x24AB68u;
            goto label_24ab68;
        }
    }
    ctx->pc = 0x24A5DCu;
label_24a5dc:
    // 0x24a5dc: 0x96050140  lhu         $a1, 0x140($s0)
    ctx->pc = 0x24a5dcu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
label_24a5e0:
    // 0x24a5e0: 0x34a200a4  ori         $v0, $a1, 0xA4
    ctx->pc = 0x24a5e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)164);
label_24a5e4:
    // 0x24a5e4: 0xa6020140  sh          $v0, 0x140($s0)
    ctx->pc = 0x24a5e4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 2));
label_24a5e8:
    // 0x24a5e8: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x24a5e8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_24a5ec:
    // 0x24a5ec: 0x8e050100  lw          $a1, 0x100($s0)
    ctx->pc = 0x24a5ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
label_24a5f0:
    // 0x24a5f0: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x24a5f0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_24a5f4:
    // 0x24a5f4: 0xc040c00  jal         func_103000
label_24a5f8:
    if (ctx->pc == 0x24A5F8u) {
        ctx->pc = 0x24A5FCu;
        goto label_24a5fc;
    }
    ctx->pc = 0x24A5F4u;
    SET_GPR_U32(ctx, 31, 0x24A5FCu);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x24A5FCu;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x24A5FCu) { return; }
    ctx->pc = 0x24A5FCu;
label_24a5fc:
    // 0x24a5fc: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x24a5fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_24a600:
    // 0x24a600: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x24a600u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_24a604:
    // 0x24a604: 0xa0a40029  sb          $a0, 0x29($a1)
    ctx->pc = 0x24a604u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 41), (uint8_t)GPR_U32(ctx, 4));
label_24a608:
    // 0x24a608: 0x3c073fc9  lui         $a3, 0x3FC9
    ctx->pc = 0x24a608u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16329 << 16));
label_24a60c:
    // 0x24a60c: 0x34e60fdb  ori         $a2, $a3, 0xFDB
    ctx->pc = 0x24a60cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)4059);
label_24a610:
    // 0x24a610: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x24a610u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_24a614:
    // 0x24a614: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x24a614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_24a618:
    // 0x24a618: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x24a618u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_24a61c:
    // 0x24a61c: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x24a61cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_24a620:
    // 0x24a620: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x24a620u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
label_24a624:
    // 0x24a624: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x24a624u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_24a628:
    // 0x24a628: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x24a628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_24a62c:
    // 0x24a62c: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x24a62cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_24a630:
    // 0x24a630: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x24a630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_24a634:
    // 0x24a634: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x24a634u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
label_24a638:
    // 0x24a638: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x24a638u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_24a63c:
    // 0x24a63c: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x24a63cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_24a640:
    // 0x24a640: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x24a640u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_24a644:
    // 0x24a644: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x24a644u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_24a648:
    // 0x24a648: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x24a648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_24a64c:
    // 0x24a64c: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x24a64cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_24a650:
    // 0x24a650: 0x3c0342b4  lui         $v1, 0x42B4
    ctx->pc = 0x24a650u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17076 << 16));
label_24a654:
    // 0x24a654: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x24a654u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_24a658:
    // 0x24a658: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x24a658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_24a65c:
    // 0x24a65c: 0xe440001c  swc1        $f0, 0x1C($v0)
    ctx->pc = 0x24a65cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
label_24a660:
    // 0x24a660: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x24a660u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_24a664:
    // 0x24a664: 0xc040cbc  jal         func_1032F0
label_24a668:
    if (ctx->pc == 0x24A668u) {
        ctx->pc = 0x24A66Cu;
        goto label_24a66c;
    }
    ctx->pc = 0x24A664u;
    SET_GPR_U32(ctx, 31, 0x24A66Cu);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x24A66Cu;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x24A66Cu) { return; }
    ctx->pc = 0x24A66Cu;
label_24a66c:
    // 0x24a66c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x24a66cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_24a670:
    // 0x24a670: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x24a670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_24a674:
    // 0x24a674: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x24a674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_24a678:
    // 0x24a678: 0x3c023e49  lui         $v0, 0x3E49
    ctx->pc = 0x24a678u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15945 << 16));
label_24a67c:
    // 0x24a67c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x24a67cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_24a680:
    // 0x24a680: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24a680u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_24a684:
    // 0x24a684: 0x0  nop
    ctx->pc = 0x24a684u;
    // NOP
label_24a688:
    // 0x24a688: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x24a688u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_24a68c:
    // 0x24a68c: 0xc058fec  jal         func_163FB0
label_24a690:
    if (ctx->pc == 0x24A690u) {
        ctx->pc = 0x24A694u;
        goto label_24a694;
    }
    ctx->pc = 0x24A68Cu;
    SET_GPR_U32(ctx, 31, 0x24A694u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x24A68Cu, 0x24A694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A694u;
label_24a694:
    // 0x24a694: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x24a694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_24a698:
    // 0x24a698: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x24a698u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_24a69c:
    // 0x24a69c: 0x26060150  addiu       $a2, $s0, 0x150
    ctx->pc = 0x24a69cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_24a6a0:
    // 0x24a6a0: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x24a6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_24a6a4:
    // 0x24a6a4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x24a6a4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_24a6a8:
    // 0x24a6a8: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x24a6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_24a6ac:
    // 0x24a6ac: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x24a6acu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_24a6b0:
    // 0x24a6b0: 0xc4cc0000  lwc1        $f12, 0x0($a2)
    ctx->pc = 0x24a6b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_24a6b4:
    // 0x24a6b4: 0xc040ce4  jal         func_103390
label_24a6b8:
    if (ctx->pc == 0x24A6B8u) {
        ctx->pc = 0x24A6BCu;
        goto label_24a6bc;
    }
    ctx->pc = 0x24A6B4u;
    SET_GPR_U32(ctx, 31, 0x24A6BCu);
    ctx->pc = 0x103390u;
    {
        ctx->pc = 0x24A6BCu;
        ps2_stubs::sceVu0RotMatrixZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x24A6BCu) { return; }
    ctx->pc = 0x24A6BCu;
label_24a6bc:
    // 0x24a6bc: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x24a6bcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_24a6c0:
    // 0x24a6c0: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x24a6c0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
label_24a6c4:
    // 0x24a6c4: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x24a6c4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_24a6c8:
    // 0x24a6c8: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x24a6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_24a6cc:
    // 0x24a6cc: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x24a6ccu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_24a6d0:
    // 0x24a6d0: 0xc040c00  jal         func_103000
label_24a6d4:
    if (ctx->pc == 0x24A6D4u) {
        ctx->pc = 0x24A6D8u;
        goto label_24a6d8;
    }
    ctx->pc = 0x24A6D0u;
    SET_GPR_U32(ctx, 31, 0x24A6D8u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x24A6D8u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x24A6D8u) { return; }
    ctx->pc = 0x24A6D8u;
label_24a6d8:
    // 0x24a6d8: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x24a6d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_24a6dc:
    // 0x24a6dc: 0xc461001c  lwc1        $f1, 0x1C($v1)
    ctx->pc = 0x24a6dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_24a6e0:
    // 0x24a6e0: 0xc6000034  lwc1        $f0, 0x34($s0)
    ctx->pc = 0x24a6e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24a6e4:
    // 0x24a6e4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x24a6e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_24a6e8:
    // 0x24a6e8: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x24a6e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
label_24a6ec:
    // 0x24a6ec: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x24a6ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_24a6f0:
    // 0x24a6f0: 0xc4a1001c  lwc1        $f1, 0x1C($a1)
    ctx->pc = 0x24a6f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_24a6f4:
    // 0x24a6f4: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x24a6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_24a6f8:
    // 0x24a6f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24a6f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_24a6fc:
    // 0x24a6fc: 0x0  nop
    ctx->pc = 0x24a6fcu;
    // NOP
label_24a700:
    // 0x24a700: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x24a700u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_24a704:
    // 0x24a704: 0xe4a0001c  swc1        $f0, 0x1C($a1)
    ctx->pc = 0x24a704u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 28), bits); }
label_24a708:
    // 0x24a708: 0x26420030  addiu       $v0, $s2, 0x30
    ctx->pc = 0x24a708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
label_24a70c:
    // 0x24a70c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x24a70cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_24a710:
    // 0x24a710: 0xc05cfdc  jal         func_173F70
label_24a714:
    if (ctx->pc == 0x24A714u) {
        ctx->pc = 0x24A718u;
        goto label_24a718;
    }
    ctx->pc = 0x24A710u;
    SET_GPR_U32(ctx, 31, 0x24A718u);
    ctx->pc = 0x173F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173F70u, 0x24A710u, 0x24A718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A718u;
label_24a718:
    // 0x24a718: 0xc6420034  lwc1        $f2, 0x34($s2)
    ctx->pc = 0x24a718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_24a71c:
    // 0x24a71c: 0x3c034396  lui         $v1, 0x4396
    ctx->pc = 0x24a71cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
label_24a720:
    // 0x24a720: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x24a720u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_24a724:
    // 0x24a724: 0x0  nop
    ctx->pc = 0x24a724u;
    // NOP
label_24a728:
    // 0x24a728: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x24a728u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_24a72c:
    // 0x24a72c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x24a72cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_24a730:
    // 0x24a730: 0x0  nop
    ctx->pc = 0x24a730u;
    // NOP
label_24a734:
    // 0x24a734: 0x45000012  bc1f        . + 4 + (0x12 << 2)
label_24a738:
    if (ctx->pc == 0x24A738u) {
        ctx->pc = 0x24A73Cu;
        goto label_24a73c;
    }
    ctx->pc = 0x24A734u;
    {
        const bool branch_taken_0x24a734 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x24a734) {
            ctx->pc = 0x24A780u;
            goto label_24a780;
        }
    }
    ctx->pc = 0x24A73Cu;
label_24a73c:
    // 0x24a73c: 0x240400b4  addiu       $a0, $zero, 0xB4
    ctx->pc = 0x24a73cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
label_24a740:
    // 0x24a740: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x24a740u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_24a744:
    // 0x24a744: 0xa4a4002a  sh          $a0, 0x2A($a1)
    ctx->pc = 0x24a744u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 42), (uint16_t)GPR_U32(ctx, 4));
label_24a748:
    // 0x24a748: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x24a748u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_24a74c:
    // 0x24a74c: 0x26070150  addiu       $a3, $s0, 0x150
    ctx->pc = 0x24a74cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_24a750:
    // 0x24a750: 0xa0e60029  sb          $a2, 0x29($a3)
    ctx->pc = 0x24a750u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 41), (uint8_t)GPR_U32(ctx, 6));
label_24a754:
    // 0x24a754: 0x8fa201c8  lw          $v0, 0x1C8($sp)
    ctx->pc = 0x24a754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 456)));
label_24a758:
    // 0x24a758: 0x3c03469c  lui         $v1, 0x469C
    ctx->pc = 0x24a758u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18076 << 16));
label_24a75c:
    // 0x24a75c: 0x34644000  ori         $a0, $v1, 0x4000
    ctx->pc = 0x24a75cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
label_24a760:
    // 0x24a760: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x24a760u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_24a764:
    // 0x24a764: 0x24030507  addiu       $v1, $zero, 0x507
    ctx->pc = 0x24a764u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1287));
label_24a768:
    // 0x24a768: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x24a768u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_24a76c:
    // 0x24a76c: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x24a76cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
label_24a770:
    // 0x24a770: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x24a770u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_24a774:
    // 0x24a774: 0xc067b18  jal         func_19EC60
label_24a778:
    if (ctx->pc == 0x24A778u) {
        ctx->pc = 0x24A77Cu;
        goto label_24a77c;
    }
    ctx->pc = 0x24A774u;
    SET_GPR_U32(ctx, 31, 0x24A77Cu);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x24A774u, 0x24A77Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A77Cu;
label_24a77c:
    // 0x24a77c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x24a77cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_24a780:
    // 0x24a780: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x24a780u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_24a784:
    // 0x24a784: 0x84650030  lh          $a1, 0x30($v1)
    ctx->pc = 0x24a784u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_24a788:
    // 0x24a788: 0x24a4ffff  addiu       $a0, $a1, -0x1
    ctx->pc = 0x24a788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_24a78c:
    // 0x24a78c: 0xa4640030  sh          $a0, 0x30($v1)
    ctx->pc = 0x24a78cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 48), (uint16_t)GPR_U32(ctx, 4));
label_24a790:
    // 0x24a790: 0x14a000f5  bnez        $a1, . + 4 + (0xF5 << 2)
label_24a794:
    if (ctx->pc == 0x24A794u) {
        ctx->pc = 0x24A798u;
        goto label_24a798;
    }
    ctx->pc = 0x24A790u;
    {
        const bool branch_taken_0x24a790 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x24a790) {
            ctx->pc = 0x24AB68u;
            goto label_24ab68;
        }
    }
    ctx->pc = 0x24A798u;
label_24a798:
    // 0x24a798: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x24a798u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_24a79c:
    // 0x24a79c: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x24a79cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_24a7a0:
    // 0x24a7a0: 0xa4450030  sh          $a1, 0x30($v0)
    ctx->pc = 0x24a7a0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 48), (uint16_t)GPR_U32(ctx, 5));
label_24a7a4:
    // 0x24a7a4: 0x8fa501c8  lw          $a1, 0x1C8($sp)
    ctx->pc = 0x24a7a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 456)));
label_24a7a8:
    // 0x24a7a8: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x24a7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
label_24a7ac:
    // 0x24a7ac: 0x34464000  ori         $a2, $v0, 0x4000
    ctx->pc = 0x24a7acu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_24a7b0:
    // 0x24a7b0: 0x44866000  mtc1        $a2, $f12
    ctx->pc = 0x24a7b0u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_24a7b4:
    // 0x24a7b4: 0x24040507  addiu       $a0, $zero, 0x507
    ctx->pc = 0x24a7b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1287));
label_24a7b8:
    // 0x24a7b8: 0x24a50120  addiu       $a1, $a1, 0x120
    ctx->pc = 0x24a7b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 288));
label_24a7bc:
    // 0x24a7bc: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x24a7bcu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_24a7c0:
    // 0x24a7c0: 0xc067b18  jal         func_19EC60
label_24a7c4:
    if (ctx->pc == 0x24A7C4u) {
        ctx->pc = 0x24A7C8u;
        goto label_24a7c8;
    }
    ctx->pc = 0x24A7C0u;
    SET_GPR_U32(ctx, 31, 0x24A7C8u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x24A7C0u, 0x24A7C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A7C8u;
label_24a7c8:
    // 0x24a7c8: 0x100000e7  b           . + 4 + (0xE7 << 2)
label_24a7cc:
    if (ctx->pc == 0x24A7CCu) {
        ctx->pc = 0x24A7D0u;
        goto label_24a7d0;
    }
    ctx->pc = 0x24A7C8u;
    {
        const bool branch_taken_0x24a7c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24a7c8) {
            ctx->pc = 0x24AB68u;
            goto label_24ab68;
        }
    }
    ctx->pc = 0x24A7D0u;
label_24a7d0:
    // 0x24a7d0: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x24a7d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_24a7d4:
    // 0x24a7d4: 0x8485002a  lh          $a1, 0x2A($a0)
    ctx->pc = 0x24a7d4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 42)));
label_24a7d8:
    // 0x24a7d8: 0x24a3ffff  addiu       $v1, $a1, -0x1
    ctx->pc = 0x24a7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_24a7dc:
    // 0x24a7dc: 0xa483002a  sh          $v1, 0x2A($a0)
    ctx->pc = 0x24a7dcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 42), (uint16_t)GPR_U32(ctx, 3));
label_24a7e0:
    // 0x24a7e0: 0x14a000e1  bnez        $a1, . + 4 + (0xE1 << 2)
label_24a7e4:
    if (ctx->pc == 0x24A7E4u) {
        ctx->pc = 0x24A7E8u;
        goto label_24a7e8;
    }
    ctx->pc = 0x24A7E0u;
    {
        const bool branch_taken_0x24a7e0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x24a7e0) {
            ctx->pc = 0x24AB68u;
            goto label_24ab68;
        }
    }
    ctx->pc = 0x24A7E8u;
label_24a7e8:
    // 0x24a7e8: 0xa2e00000  sb          $zero, 0x0($s7)
    ctx->pc = 0x24a7e8u;
    WRITE8(ADD32(GPR_U32(ctx, 23), 0), (uint8_t)GPR_U32(ctx, 0));
label_24a7ec:
    // 0x24a7ec: 0x8ee50034  lw          $a1, 0x34($s7)
    ctx->pc = 0x24a7ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 52)));
label_24a7f0:
    // 0x24a7f0: 0x70a09e28  paddub      $s3, $a1, $zero
    ctx->pc = 0x24a7f0u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_24a7f4:
    // 0x24a7f4: 0x8e620024  lw          $v0, 0x24($s3)
    ctx->pc = 0x24a7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_24a7f8:
    // 0x24a7f8: 0x34440002  ori         $a0, $v0, 0x2
    ctx->pc = 0x24a7f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_24a7fc:
    // 0x24a7fc: 0xae640024  sw          $a0, 0x24($s3)
    ctx->pc = 0x24a7fcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 4));
label_24a800:
    // 0x24a800: 0xa3c00000  sb          $zero, 0x0($fp)
    ctx->pc = 0x24a800u;
    WRITE8(ADD32(GPR_U32(ctx, 30), 0), (uint8_t)GPR_U32(ctx, 0));
label_24a804:
    // 0x24a804: 0x8fc20034  lw          $v0, 0x34($fp)
    ctx->pc = 0x24a804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 52)));
label_24a808:
    // 0x24a808: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x24a808u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_24a80c:
    // 0x24a80c: 0x8e650024  lw          $a1, 0x24($s3)
    ctx->pc = 0x24a80cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_24a810:
    // 0x24a810: 0x34a30002  ori         $v1, $a1, 0x2
    ctx->pc = 0x24a810u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2);
label_24a814:
    // 0x24a814: 0xae630024  sw          $v1, 0x24($s3)
    ctx->pc = 0x24a814u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 3));
label_24a818:
    // 0x24a818: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x24a818u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_24a81c:
    // 0x24a81c: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x24a81cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_24a820:
    // 0x24a820: 0xa0640029  sb          $a0, 0x29($v1)
    ctx->pc = 0x24a820u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 41), (uint8_t)GPR_U32(ctx, 4));
label_24a824:
    // 0x24a824: 0x3c04469c  lui         $a0, 0x469C
    ctx->pc = 0x24a824u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)18076 << 16));
label_24a828:
    // 0x24a828: 0x34854000  ori         $a1, $a0, 0x4000
    ctx->pc = 0x24a828u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16384);
label_24a82c:
    // 0x24a82c: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x24a82cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_24a830:
    // 0x24a830: 0x8fa301c8  lw          $v1, 0x1C8($sp)
    ctx->pc = 0x24a830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 456)));
label_24a834:
    // 0x24a834: 0x2404051e  addiu       $a0, $zero, 0x51E
    ctx->pc = 0x24a834u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1310));
label_24a838:
    // 0x24a838: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x24a838u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
label_24a83c:
    // 0x24a83c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x24a83cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_24a840:
    // 0x24a840: 0xc067b18  jal         func_19EC60
label_24a844:
    if (ctx->pc == 0x24A844u) {
        ctx->pc = 0x24A848u;
        goto label_24a848;
    }
    ctx->pc = 0x24A840u;
    SET_GPR_U32(ctx, 31, 0x24A848u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x24A840u, 0x24A848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A848u;
label_24a848:
    // 0x24a848: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x24a848u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_24a84c:
    // 0x24a84c: 0x100000c6  b           . + 4 + (0xC6 << 2)
label_24a850:
    if (ctx->pc == 0x24A850u) {
        ctx->pc = 0x24A854u;
        goto label_24a854;
    }
    ctx->pc = 0x24A84Cu;
    {
        const bool branch_taken_0x24a84c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24a84c) {
            ctx->pc = 0x24AB68u;
            goto label_24ab68;
        }
    }
    ctx->pc = 0x24A854u;
label_24a854:
    // 0x24a854: 0x3c053d49  lui         $a1, 0x3D49
    ctx->pc = 0x24a854u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15689 << 16));
label_24a858:
    // 0x24a858: 0x34a30fdb  ori         $v1, $a1, 0xFDB
    ctx->pc = 0x24a858u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4059);
label_24a85c:
    // 0x24a85c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x24a85cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_24a860:
    // 0x24a860: 0x0  nop
    ctx->pc = 0x24a860u;
    // NOP
label_24a864:
    // 0x24a864: 0xe7a001b4  swc1        $f0, 0x1B4($sp)
    ctx->pc = 0x24a864u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 436), bits); }
label_24a868:
    // 0x24a868: 0x3c033cc9  lui         $v1, 0x3CC9
    ctx->pc = 0x24a868u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15561 << 16));
label_24a86c:
    // 0x24a86c: 0x34640fdb  ori         $a0, $v1, 0xFDB
    ctx->pc = 0x24a86cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_24a870:
    // 0x24a870: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x24a870u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_24a874:
    // 0x24a874: 0x0  nop
    ctx->pc = 0x24a874u;
    // NOP
label_24a878:
    // 0x24a878: 0xe7a001b8  swc1        $f0, 0x1B8($sp)
    ctx->pc = 0x24a878u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 440), bits); }
label_24a87c:
    // 0x24a87c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x24a87cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_24a880:
    // 0x24a880: 0xc040cbc  jal         func_1032F0
label_24a884:
    if (ctx->pc == 0x24A884u) {
        ctx->pc = 0x24A888u;
        goto label_24a888;
    }
    ctx->pc = 0x24A880u;
    SET_GPR_U32(ctx, 31, 0x24A888u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x24A888u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x24A888u) { return; }
    ctx->pc = 0x24A888u;
label_24a888:
    // 0x24a888: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x24a888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_24a88c:
    // 0x24a88c: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x24a88cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_24a890:
    // 0x24a890: 0x3c023e49  lui         $v0, 0x3E49
    ctx->pc = 0x24a890u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15945 << 16));
label_24a894:
    // 0x24a894: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x24a894u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_24a898:
    // 0x24a898: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24a898u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_24a89c:
    // 0x24a89c: 0x0  nop
    ctx->pc = 0x24a89cu;
    // NOP
label_24a8a0:
    // 0x24a8a0: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x24a8a0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_24a8a4:
    // 0x24a8a4: 0xc058fec  jal         func_163FB0
label_24a8a8:
    if (ctx->pc == 0x24A8A8u) {
        ctx->pc = 0x24A8ACu;
        goto label_24a8ac;
    }
    ctx->pc = 0x24A8A4u;
    SET_GPR_U32(ctx, 31, 0x24A8ACu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x24A8A4u, 0x24A8ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A8ACu;
label_24a8ac:
    // 0x24a8ac: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x24a8acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_24a8b0:
    // 0x24a8b0: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x24a8b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_24a8b4:
    // 0x24a8b4: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x24a8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_24a8b8:
    // 0x24a8b8: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x24a8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_24a8bc:
    // 0x24a8bc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x24a8bcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_24a8c0:
    // 0x24a8c0: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x24a8c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_24a8c4:
    // 0x24a8c4: 0xc46c0000  lwc1        $f12, 0x0($v1)
    ctx->pc = 0x24a8c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_24a8c8:
    // 0x24a8c8: 0xc040ce4  jal         func_103390
label_24a8cc:
    if (ctx->pc == 0x24A8CCu) {
        ctx->pc = 0x24A8D0u;
        goto label_24a8d0;
    }
    ctx->pc = 0x24A8C8u;
    SET_GPR_U32(ctx, 31, 0x24A8D0u);
    ctx->pc = 0x103390u;
    {
        ctx->pc = 0x24A8D0u;
        ps2_stubs::sceVu0RotMatrixZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x24A8D0u) { return; }
    ctx->pc = 0x24A8D0u;
label_24a8d0:
    // 0x24a8d0: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x24a8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_24a8d4:
    // 0x24a8d4: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x24a8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_24a8d8:
    // 0x24a8d8: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x24a8d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_24a8dc:
    // 0x24a8dc: 0xc46c0008  lwc1        $f12, 0x8($v1)
    ctx->pc = 0x24a8dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_24a8e0:
    // 0x24a8e0: 0xc44d000c  lwc1        $f13, 0xC($v0)
    ctx->pc = 0x24a8e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_24a8e4:
    // 0x24a8e4: 0x26a20030  addiu       $v0, $s5, 0x30
    ctx->pc = 0x24a8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 48));
label_24a8e8:
    // 0x24a8e8: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x24a8e8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_24a8ec:
    // 0x24a8ec: 0xc7ae01b4  lwc1        $f14, 0x1B4($sp)
    ctx->pc = 0x24a8ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_24a8f0:
    // 0x24a8f0: 0xc7af01b4  lwc1        $f15, 0x1B4($sp)
    ctx->pc = 0x24a8f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_24a8f4:
    // 0x24a8f4: 0x27a601ac  addiu       $a2, $sp, 0x1AC
    ctx->pc = 0x24a8f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 428));
label_24a8f8:
    // 0x24a8f8: 0x27a701b0  addiu       $a3, $sp, 0x1B0
    ctx->pc = 0x24a8f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_24a8fc:
    // 0x24a8fc: 0xc05c968  jal         func_1725A0
label_24a900:
    if (ctx->pc == 0x24A900u) {
        ctx->pc = 0x24A904u;
        goto label_24a904;
    }
    ctx->pc = 0x24A8FCu;
    SET_GPR_U32(ctx, 31, 0x24A904u);
    ctx->pc = 0x1725A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1725A0u, 0x24A8FCu, 0x24A904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A904u;
label_24a904:
    // 0x24a904: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x24a904u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_24a908:
    // 0x24a908: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x24a908u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_24a90c:
    // 0x24a90c: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x24a90cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_24a910:
    // 0x24a910: 0xc7a001ac  lwc1        $f0, 0x1AC($sp)
    ctx->pc = 0x24a910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24a914:
    // 0x24a914: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x24a914u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_24a918:
    // 0x24a918: 0xc058fec  jal         func_163FB0
label_24a91c:
    if (ctx->pc == 0x24A91Cu) {
        ctx->pc = 0x24A920u;
        goto label_24a920;
    }
    ctx->pc = 0x24A918u;
    SET_GPR_U32(ctx, 31, 0x24A920u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x24A918u, 0x24A920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A920u;
label_24a920:
    // 0x24a920: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x24a920u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_24a924:
    // 0x24a924: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x24a924u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_24a928:
    // 0x24a928: 0xc7a001ac  lwc1        $f0, 0x1AC($sp)
    ctx->pc = 0x24a928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24a92c:
    // 0x24a92c: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x24a92cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_24a930:
    // 0x24a930: 0xe440001c  swc1        $f0, 0x1C($v0)
    ctx->pc = 0x24a930u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
label_24a934:
    // 0x24a934: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x24a934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_24a938:
    // 0x24a938: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x24a938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_24a93c:
    // 0x24a93c: 0xc7a001b0  lwc1        $f0, 0x1B0($sp)
    ctx->pc = 0x24a93cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24a940:
    // 0x24a940: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x24a940u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_24a944:
    // 0x24a944: 0xc058fec  jal         func_163FB0
label_24a948:
    if (ctx->pc == 0x24A948u) {
        ctx->pc = 0x24A94Cu;
        goto label_24a94c;
    }
    ctx->pc = 0x24A944u;
    SET_GPR_U32(ctx, 31, 0x24A94Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x24A944u, 0x24A94Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A94Cu;
label_24a94c:
    // 0x24a94c: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x24a94cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_24a950:
    // 0x24a950: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x24a950u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
label_24a954:
    // 0x24a954: 0x3c054220  lui         $a1, 0x4220
    ctx->pc = 0x24a954u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16928 << 16));
label_24a958:
    // 0x24a958: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x24a958u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_24a95c:
    // 0x24a95c: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x24a95cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_24a960:
    // 0x24a960: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x24a960u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
label_24a964:
    // 0x24a964: 0x27a200e0  addiu       $v0, $sp, 0xE0
    ctx->pc = 0x24a964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_24a968:
    // 0x24a968: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x24a968u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_24a96c:
    // 0x24a96c: 0xc040cbc  jal         func_1032F0
label_24a970:
    if (ctx->pc == 0x24A970u) {
        ctx->pc = 0x24A974u;
        goto label_24a974;
    }
    ctx->pc = 0x24A96Cu;
    SET_GPR_U32(ctx, 31, 0x24A974u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x24A974u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x24A974u) { return; }
    ctx->pc = 0x24A974u;
label_24a974:
    // 0x24a974: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x24a974u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_24a978:
    // 0x24a978: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x24a978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_24a97c:
    // 0x24a97c: 0x27a200e0  addiu       $v0, $sp, 0xE0
    ctx->pc = 0x24a97cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_24a980:
    // 0x24a980: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x24a980u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_24a984:
    // 0x24a984: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x24a984u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_24a988:
    // 0x24a988: 0xc46c000c  lwc1        $f12, 0xC($v1)
    ctx->pc = 0x24a988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_24a98c:
    // 0x24a98c: 0xc040d0e  jal         func_103438
label_24a990:
    if (ctx->pc == 0x24A990u) {
        ctx->pc = 0x24A994u;
        goto label_24a994;
    }
    ctx->pc = 0x24A98Cu;
    SET_GPR_U32(ctx, 31, 0x24A994u);
    ctx->pc = 0x103438u;
    {
        ctx->pc = 0x24A994u;
        ps2_stubs::sceVu0RotMatrixX(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x24A994u) { return; }
    ctx->pc = 0x24A994u;
label_24a994:
    // 0x24a994: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x24a994u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_24a998:
    // 0x24a998: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x24a998u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_24a99c:
    // 0x24a99c: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x24a99cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_24a9a0:
    // 0x24a9a0: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x24a9a0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_24a9a4:
    // 0x24a9a4: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x24a9a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_24a9a8:
    // 0x24a9a8: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x24a9a8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_24a9ac:
    // 0x24a9ac: 0xc46c0008  lwc1        $f12, 0x8($v1)
    ctx->pc = 0x24a9acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_24a9b0:
    // 0x24a9b0: 0xc040d38  jal         func_1034E0
label_24a9b4:
    if (ctx->pc == 0x24A9B4u) {
        ctx->pc = 0x24A9B8u;
        goto label_24a9b8;
    }
    ctx->pc = 0x24A9B0u;
    SET_GPR_U32(ctx, 31, 0x24A9B8u);
    ctx->pc = 0x1034E0u;
    {
        ctx->pc = 0x24A9B8u;
        ps2_stubs::sceVu0RotMatrixY(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x24A9B8u) { return; }
    ctx->pc = 0x24A9B8u;
label_24a9b8:
    // 0x24a9b8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x24a9b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_24a9bc:
    // 0x24a9bc: 0x0  nop
    ctx->pc = 0x24a9bcu;
    // NOP
label_24a9c0:
    // 0x24a9c0: 0xe7a00130  swc1        $f0, 0x130($sp)
    ctx->pc = 0x24a9c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_24a9c4:
    // 0x24a9c4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x24a9c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_24a9c8:
    // 0x24a9c8: 0x0  nop
    ctx->pc = 0x24a9c8u;
    // NOP
label_24a9cc:
    // 0x24a9cc: 0xe7a00134  swc1        $f0, 0x134($sp)
    ctx->pc = 0x24a9ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
label_24a9d0:
    // 0x24a9d0: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x24a9d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_24a9d4:
    // 0x24a9d4: 0xc4800018  lwc1        $f0, 0x18($a0)
    ctx->pc = 0x24a9d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24a9d8:
    // 0x24a9d8: 0xe7a00138  swc1        $f0, 0x138($sp)
    ctx->pc = 0x24a9d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_24a9dc:
    // 0x24a9dc: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x24a9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_24a9e0:
    // 0x24a9e0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x24a9e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_24a9e4:
    // 0x24a9e4: 0x0  nop
    ctx->pc = 0x24a9e4u;
    // NOP
label_24a9e8:
    // 0x24a9e8: 0xe7a0013c  swc1        $f0, 0x13C($sp)
    ctx->pc = 0x24a9e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
label_24a9ec:
    // 0x24a9ec: 0x27a30130  addiu       $v1, $sp, 0x130
    ctx->pc = 0x24a9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_24a9f0:
    // 0x24a9f0: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x24a9f0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_24a9f4:
    // 0x24a9f4: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x24a9f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_24a9f8:
    // 0x24a9f8: 0x27a60130  addiu       $a2, $sp, 0x130
    ctx->pc = 0x24a9f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_24a9fc:
    // 0x24a9fc: 0xc040bf4  jal         func_102FD0
label_24aa00:
    if (ctx->pc == 0x24AA00u) {
        ctx->pc = 0x24AA04u;
        goto label_24aa04;
    }
    ctx->pc = 0x24A9FCu;
    SET_GPR_U32(ctx, 31, 0x24AA04u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x24AA04u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x24AA04u) { return; }
    ctx->pc = 0x24AA04u;
label_24aa04:
    // 0x24aa04: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x24aa04u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_24aa08:
    // 0x24aa08: 0xc6010030  lwc1        $f1, 0x30($s0)
    ctx->pc = 0x24aa08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_24aa0c:
    // 0x24aa0c: 0xc7a00130  lwc1        $f0, 0x130($sp)
    ctx->pc = 0x24aa0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24aa10:
    // 0x24aa10: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x24aa10u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_24aa14:
    // 0x24aa14: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x24aa14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
label_24aa18:
    // 0x24aa18: 0xc6010034  lwc1        $f1, 0x34($s0)
    ctx->pc = 0x24aa18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_24aa1c:
    // 0x24aa1c: 0xc7a00134  lwc1        $f0, 0x134($sp)
    ctx->pc = 0x24aa1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24aa20:
    // 0x24aa20: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x24aa20u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_24aa24:
    // 0x24aa24: 0xe6010034  swc1        $f1, 0x34($s0)
    ctx->pc = 0x24aa24u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
label_24aa28:
    // 0x24aa28: 0xc6000038  lwc1        $f0, 0x38($s0)
    ctx->pc = 0x24aa28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24aa2c:
    // 0x24aa2c: 0xc7ac0138  lwc1        $f12, 0x138($sp)
    ctx->pc = 0x24aa2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_24aa30:
    // 0x24aa30: 0x460c0000  add.s       $f0, $f0, $f12
    ctx->pc = 0x24aa30u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
label_24aa34:
    // 0x24aa34: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x24aa34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
label_24aa38:
    // 0x24aa38: 0x27a300e0  addiu       $v1, $sp, 0xE0
    ctx->pc = 0x24aa38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_24aa3c:
    // 0x24aa3c: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x24aa3cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_24aa40:
    // 0x24aa40: 0xc040cbc  jal         func_1032F0
label_24aa44:
    if (ctx->pc == 0x24AA44u) {
        ctx->pc = 0x24AA48u;
        goto label_24aa48;
    }
    ctx->pc = 0x24AA40u;
    SET_GPR_U32(ctx, 31, 0x24AA48u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x24AA48u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x24AA48u) { return; }
    ctx->pc = 0x24AA48u;
label_24aa48:
    // 0x24aa48: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x24aa48u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_24aa4c:
    // 0x24aa4c: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x24aa4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_24aa50:
    // 0x24aa50: 0xc46c0008  lwc1        $f12, 0x8($v1)
    ctx->pc = 0x24aa50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_24aa54:
    // 0x24aa54: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x24aa54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_24aa58:
    // 0x24aa58: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x24aa58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24aa5c:
    // 0x24aa5c: 0x46006301  sub.s       $f12, $f12, $f0
    ctx->pc = 0x24aa5cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
label_24aa60:
    // 0x24aa60: 0xc058fec  jal         func_163FB0
label_24aa64:
    if (ctx->pc == 0x24AA64u) {
        ctx->pc = 0x24AA68u;
        goto label_24aa68;
    }
    ctx->pc = 0x24AA60u;
    SET_GPR_U32(ctx, 31, 0x24AA68u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x24AA60u, 0x24AA68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AA68u;
label_24aa68:
    // 0x24aa68: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x24aa68u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
label_24aa6c:
    // 0x24aa6c: 0xe7ad01ac  swc1        $f13, 0x1AC($sp)
    ctx->pc = 0x24aa6cu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 428), bits); }
label_24aa70:
    // 0x24aa70: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x24aa70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_24aa74:
    // 0x24aa74: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x24aa74u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_24aa78:
    // 0x24aa78: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x24aa78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_24aa7c:
    // 0x24aa7c: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x24aa7cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_24aa80:
    // 0x24aa80: 0xc7ae01ac  lwc1        $f14, 0x1AC($sp)
    ctx->pc = 0x24aa80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_24aa84:
    // 0x24aa84: 0x46007306  mov.s       $f12, $f14
    ctx->pc = 0x24aa84u;
    ctx->f[12] = FPU_MOV_S(ctx->f[14]);
label_24aa88:
    // 0x24aa88: 0xc040d38  jal         func_1034E0
label_24aa8c:
    if (ctx->pc == 0x24AA8Cu) {
        ctx->pc = 0x24AA90u;
        goto label_24aa90;
    }
    ctx->pc = 0x24AA88u;
    SET_GPR_U32(ctx, 31, 0x24AA90u);
    ctx->pc = 0x1034E0u;
    {
        ctx->pc = 0x24AA90u;
        ps2_stubs::sceVu0RotMatrixY(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x24AA90u) { return; }
    ctx->pc = 0x24AA90u;
label_24aa90:
    // 0x24aa90: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x24aa90u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_24aa94:
    // 0x24aa94: 0xc60f0030  lwc1        $f15, 0x30($s0)
    ctx->pc = 0x24aa94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_24aa98:
    // 0x24aa98: 0xe7af0130  swc1        $f15, 0x130($sp)
    ctx->pc = 0x24aa98u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_24aa9c:
    // 0x24aa9c: 0xc6000034  lwc1        $f0, 0x34($s0)
    ctx->pc = 0x24aa9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24aaa0:
    // 0x24aaa0: 0xe7a00134  swc1        $f0, 0x134($sp)
    ctx->pc = 0x24aaa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
label_24aaa4:
    // 0x24aaa4: 0xc6010038  lwc1        $f1, 0x38($s0)
    ctx->pc = 0x24aaa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_24aaa8:
    // 0x24aaa8: 0xe7a10138  swc1        $f1, 0x138($sp)
    ctx->pc = 0x24aaa8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_24aaac:
    // 0x24aaac: 0xc600003c  lwc1        $f0, 0x3C($s0)
    ctx->pc = 0x24aaacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24aab0:
    // 0x24aab0: 0xe7a0013c  swc1        $f0, 0x13C($sp)
    ctx->pc = 0x24aab0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
label_24aab4:
    // 0x24aab4: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x24aab4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_24aab8:
    // 0x24aab8: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x24aab8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_24aabc:
    // 0x24aabc: 0x27a300e0  addiu       $v1, $sp, 0xE0
    ctx->pc = 0x24aabcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_24aac0:
    // 0x24aac0: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x24aac0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_24aac4:
    // 0x24aac4: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x24aac4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_24aac8:
    // 0x24aac8: 0xc040c00  jal         func_103000
label_24aacc:
    if (ctx->pc == 0x24AACCu) {
        ctx->pc = 0x24AAD0u;
        goto label_24aad0;
    }
    ctx->pc = 0x24AAC8u;
    SET_GPR_U32(ctx, 31, 0x24AAD0u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x24AAD0u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x24AAD0u) { return; }
    ctx->pc = 0x24AAD0u;
label_24aad0:
    // 0x24aad0: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x24aad0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_24aad4:
    // 0x24aad4: 0xc7a00130  lwc1        $f0, 0x130($sp)
    ctx->pc = 0x24aad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24aad8:
    // 0x24aad8: 0xe7a00110  swc1        $f0, 0x110($sp)
    ctx->pc = 0x24aad8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_24aadc:
    // 0x24aadc: 0xc7a00134  lwc1        $f0, 0x134($sp)
    ctx->pc = 0x24aadcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24aae0:
    // 0x24aae0: 0xe7a00114  swc1        $f0, 0x114($sp)
    ctx->pc = 0x24aae0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
label_24aae4:
    // 0x24aae4: 0xc7a10138  lwc1        $f1, 0x138($sp)
    ctx->pc = 0x24aae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_24aae8:
    // 0x24aae8: 0xe7a10118  swc1        $f1, 0x118($sp)
    ctx->pc = 0x24aae8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_24aaec:
    // 0x24aaec: 0xc7a0013c  lwc1        $f0, 0x13C($sp)
    ctx->pc = 0x24aaecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24aaf0:
    // 0x24aaf0: 0xe7a0011c  swc1        $f0, 0x11C($sp)
    ctx->pc = 0x24aaf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
label_24aaf4:
    // 0x24aaf4: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x24aaf4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
label_24aaf8:
    // 0x24aaf8: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x24aaf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_24aafc:
    // 0x24aafc: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x24aafcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_24ab00:
    // 0x24ab00: 0x27a700a0  addiu       $a3, $sp, 0xA0
    ctx->pc = 0x24ab00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_24ab04:
    // 0x24ab04: 0x70e03628  paddub      $a2, $a3, $zero
    ctx->pc = 0x24ab04u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
label_24ab08:
    // 0x24ab08: 0xc040c00  jal         func_103000
label_24ab0c:
    if (ctx->pc == 0x24AB0Cu) {
        ctx->pc = 0x24AB10u;
        goto label_24ab10;
    }
    ctx->pc = 0x24AB08u;
    SET_GPR_U32(ctx, 31, 0x24AB10u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x24AB10u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x24AB10u) { return; }
    ctx->pc = 0x24AB10u;
label_24ab10:
    // 0x24ab10: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x24ab10u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_24ab14:
    // 0x24ab14: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x24ab14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_24ab18:
    // 0x24ab18: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x24ab18u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_24ab1c:
    // 0x24ab1c: 0x2496ffff  addiu       $s6, $a0, -0x1
    ctx->pc = 0x24ab1cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_24ab20:
    // 0x24ab20: 0xa4760030  sh          $s6, 0x30($v1)
    ctx->pc = 0x24ab20u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 48), (uint16_t)GPR_U32(ctx, 22));
label_24ab24:
    // 0x24ab24: 0x14800010  bnez        $a0, . + 4 + (0x10 << 2)
label_24ab28:
    if (ctx->pc == 0x24AB28u) {
        ctx->pc = 0x24AB2Cu;
        goto label_24ab2c;
    }
    ctx->pc = 0x24AB24u;
    {
        const bool branch_taken_0x24ab24 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x24ab24) {
            ctx->pc = 0x24AB68u;
            goto label_24ab68;
        }
    }
    ctx->pc = 0x24AB2Cu;
label_24ab2c:
    // 0x24ab2c: 0x24030078  addiu       $v1, $zero, 0x78
    ctx->pc = 0x24ab2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_24ab30:
    // 0x24ab30: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x24ab30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_24ab34:
    // 0x24ab34: 0xa4830030  sh          $v1, 0x30($a0)
    ctx->pc = 0x24ab34u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 48), (uint16_t)GPR_U32(ctx, 3));
label_24ab38:
    // 0x24ab38: 0x8fa301c8  lw          $v1, 0x1C8($sp)
    ctx->pc = 0x24ab38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 456)));
label_24ab3c:
    // 0x24ab3c: 0x3c05461c  lui         $a1, 0x461C
    ctx->pc = 0x24ab3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17948 << 16));
label_24ab40:
    // 0x24ab40: 0x34a44000  ori         $a0, $a1, 0x4000
    ctx->pc = 0x24ab40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16384);
label_24ab44:
    // 0x24ab44: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x24ab44u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_24ab48:
    // 0x24ab48: 0x24050507  addiu       $a1, $zero, 0x507
    ctx->pc = 0x24ab48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1287));
label_24ab4c:
    // 0x24ab4c: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x24ab4cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_24ab50:
    // 0x24ab50: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x24ab50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
label_24ab54:
    // 0x24ab54: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x24ab54u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_24ab58:
    // 0x24ab58: 0xc067b18  jal         func_19EC60
label_24ab5c:
    if (ctx->pc == 0x24AB5Cu) {
        ctx->pc = 0x24AB60u;
        goto label_24ab60;
    }
    ctx->pc = 0x24AB58u;
    SET_GPR_U32(ctx, 31, 0x24AB60u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x24AB58u, 0x24AB60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AB60u;
label_24ab60:
    // 0x24ab60: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x24ab60u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_24ab64:
    // 0x24ab64: 0x0  nop
    ctx->pc = 0x24ab64u;
    // NOP
label_24ab68:
    // 0x24ab68: 0x26260001  addiu       $a2, $s1, 0x1
    ctx->pc = 0x24ab68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_24ab6c:
    // 0x24ab6c: 0x70c08e28  paddub      $s1, $a2, $zero
    ctx->pc = 0x24ab6cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_24ab70:
    // 0x24ab70: 0x2cc30004  sltiu       $v1, $a2, 0x4
    ctx->pc = 0x24ab70u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_24ab74:
    // 0x24ab74: 0x1460f9f3  bnez        $v1, . + 4 + (-0x60D << 2)
label_24ab78:
    if (ctx->pc == 0x24AB78u) {
        ctx->pc = 0x24AB7Cu;
        goto label_24ab7c;
    }
    ctx->pc = 0x24AB74u;
    {
        const bool branch_taken_0x24ab74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x24ab74) {
            ctx->pc = 0x249344u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_249344;
        }
    }
    ctx->pc = 0x24AB7Cu;
label_24ab7c:
    // 0x24ab7c: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x24ab7cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_24ab80:
    // 0x24ab80: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x24ab80u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_24ab84:
    // 0x24ab84: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x24ab84u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_24ab88:
    // 0x24ab88: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x24ab88u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_24ab8c:
    // 0x24ab8c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x24ab8cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_24ab90:
    // 0x24ab90: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x24ab90u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_24ab94:
    // 0x24ab94: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x24ab94u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_24ab98:
    // 0x24ab98: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x24ab98u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_24ab9c:
    // 0x24ab9c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x24ab9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_24aba0:
    // 0x24aba0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x24aba0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_24aba4:
    // 0x24aba4: 0x27bd01d0  addiu       $sp, $sp, 0x1D0
    ctx->pc = 0x24aba4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
label_24aba8:
    // 0x24aba8: 0x3e00008  jr          $ra
label_24abac:
    if (ctx->pc == 0x24ABACu) {
        ctx->pc = 0x24ABB0u;
        goto label_fallthrough_0x24aba8;
    }
    ctx->pc = 0x24ABA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24ABA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x24aba8:
    ctx->pc = 0x24ABB0u;
}
