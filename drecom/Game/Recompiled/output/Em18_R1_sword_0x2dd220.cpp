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

// Function: Em18_R1_sword
// Address: 0x2dd220 - 0x2ddde0
void Em18_R1_sword_0x2dd220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em18_R1_sword_0x2dd220");
#endif

    switch (ctx->pc) {
        case 0x2dd220u: goto label_2dd220;
        case 0x2dd224u: goto label_2dd224;
        case 0x2dd228u: goto label_2dd228;
        case 0x2dd22cu: goto label_2dd22c;
        case 0x2dd230u: goto label_2dd230;
        case 0x2dd234u: goto label_2dd234;
        case 0x2dd238u: goto label_2dd238;
        case 0x2dd23cu: goto label_2dd23c;
        case 0x2dd240u: goto label_2dd240;
        case 0x2dd244u: goto label_2dd244;
        case 0x2dd248u: goto label_2dd248;
        case 0x2dd24cu: goto label_2dd24c;
        case 0x2dd250u: goto label_2dd250;
        case 0x2dd254u: goto label_2dd254;
        case 0x2dd258u: goto label_2dd258;
        case 0x2dd25cu: goto label_2dd25c;
        case 0x2dd260u: goto label_2dd260;
        case 0x2dd264u: goto label_2dd264;
        case 0x2dd268u: goto label_2dd268;
        case 0x2dd26cu: goto label_2dd26c;
        case 0x2dd270u: goto label_2dd270;
        case 0x2dd274u: goto label_2dd274;
        case 0x2dd278u: goto label_2dd278;
        case 0x2dd27cu: goto label_2dd27c;
        case 0x2dd280u: goto label_2dd280;
        case 0x2dd284u: goto label_2dd284;
        case 0x2dd288u: goto label_2dd288;
        case 0x2dd28cu: goto label_2dd28c;
        case 0x2dd290u: goto label_2dd290;
        case 0x2dd294u: goto label_2dd294;
        case 0x2dd298u: goto label_2dd298;
        case 0x2dd29cu: goto label_2dd29c;
        case 0x2dd2a0u: goto label_2dd2a0;
        case 0x2dd2a4u: goto label_2dd2a4;
        case 0x2dd2a8u: goto label_2dd2a8;
        case 0x2dd2acu: goto label_2dd2ac;
        case 0x2dd2b0u: goto label_2dd2b0;
        case 0x2dd2b4u: goto label_2dd2b4;
        case 0x2dd2b8u: goto label_2dd2b8;
        case 0x2dd2bcu: goto label_2dd2bc;
        case 0x2dd2c0u: goto label_2dd2c0;
        case 0x2dd2c4u: goto label_2dd2c4;
        case 0x2dd2c8u: goto label_2dd2c8;
        case 0x2dd2ccu: goto label_2dd2cc;
        case 0x2dd2d0u: goto label_2dd2d0;
        case 0x2dd2d4u: goto label_2dd2d4;
        case 0x2dd2d8u: goto label_2dd2d8;
        case 0x2dd2dcu: goto label_2dd2dc;
        case 0x2dd2e0u: goto label_2dd2e0;
        case 0x2dd2e4u: goto label_2dd2e4;
        case 0x2dd2e8u: goto label_2dd2e8;
        case 0x2dd2ecu: goto label_2dd2ec;
        case 0x2dd2f0u: goto label_2dd2f0;
        case 0x2dd2f4u: goto label_2dd2f4;
        case 0x2dd2f8u: goto label_2dd2f8;
        case 0x2dd2fcu: goto label_2dd2fc;
        case 0x2dd300u: goto label_2dd300;
        case 0x2dd304u: goto label_2dd304;
        case 0x2dd308u: goto label_2dd308;
        case 0x2dd30cu: goto label_2dd30c;
        case 0x2dd310u: goto label_2dd310;
        case 0x2dd314u: goto label_2dd314;
        case 0x2dd318u: goto label_2dd318;
        case 0x2dd31cu: goto label_2dd31c;
        case 0x2dd320u: goto label_2dd320;
        case 0x2dd324u: goto label_2dd324;
        case 0x2dd328u: goto label_2dd328;
        case 0x2dd32cu: goto label_2dd32c;
        case 0x2dd330u: goto label_2dd330;
        case 0x2dd334u: goto label_2dd334;
        case 0x2dd338u: goto label_2dd338;
        case 0x2dd33cu: goto label_2dd33c;
        case 0x2dd340u: goto label_2dd340;
        case 0x2dd344u: goto label_2dd344;
        case 0x2dd348u: goto label_2dd348;
        case 0x2dd34cu: goto label_2dd34c;
        case 0x2dd350u: goto label_2dd350;
        case 0x2dd354u: goto label_2dd354;
        case 0x2dd358u: goto label_2dd358;
        case 0x2dd35cu: goto label_2dd35c;
        case 0x2dd360u: goto label_2dd360;
        case 0x2dd364u: goto label_2dd364;
        case 0x2dd368u: goto label_2dd368;
        case 0x2dd36cu: goto label_2dd36c;
        case 0x2dd370u: goto label_2dd370;
        case 0x2dd374u: goto label_2dd374;
        case 0x2dd378u: goto label_2dd378;
        case 0x2dd37cu: goto label_2dd37c;
        case 0x2dd380u: goto label_2dd380;
        case 0x2dd384u: goto label_2dd384;
        case 0x2dd388u: goto label_2dd388;
        case 0x2dd38cu: goto label_2dd38c;
        case 0x2dd390u: goto label_2dd390;
        case 0x2dd394u: goto label_2dd394;
        case 0x2dd398u: goto label_2dd398;
        case 0x2dd39cu: goto label_2dd39c;
        case 0x2dd3a0u: goto label_2dd3a0;
        case 0x2dd3a4u: goto label_2dd3a4;
        case 0x2dd3a8u: goto label_2dd3a8;
        case 0x2dd3acu: goto label_2dd3ac;
        case 0x2dd3b0u: goto label_2dd3b0;
        case 0x2dd3b4u: goto label_2dd3b4;
        case 0x2dd3b8u: goto label_2dd3b8;
        case 0x2dd3bcu: goto label_2dd3bc;
        case 0x2dd3c0u: goto label_2dd3c0;
        case 0x2dd3c4u: goto label_2dd3c4;
        case 0x2dd3c8u: goto label_2dd3c8;
        case 0x2dd3ccu: goto label_2dd3cc;
        case 0x2dd3d0u: goto label_2dd3d0;
        case 0x2dd3d4u: goto label_2dd3d4;
        case 0x2dd3d8u: goto label_2dd3d8;
        case 0x2dd3dcu: goto label_2dd3dc;
        case 0x2dd3e0u: goto label_2dd3e0;
        case 0x2dd3e4u: goto label_2dd3e4;
        case 0x2dd3e8u: goto label_2dd3e8;
        case 0x2dd3ecu: goto label_2dd3ec;
        case 0x2dd3f0u: goto label_2dd3f0;
        case 0x2dd3f4u: goto label_2dd3f4;
        case 0x2dd3f8u: goto label_2dd3f8;
        case 0x2dd3fcu: goto label_2dd3fc;
        case 0x2dd400u: goto label_2dd400;
        case 0x2dd404u: goto label_2dd404;
        case 0x2dd408u: goto label_2dd408;
        case 0x2dd40cu: goto label_2dd40c;
        case 0x2dd410u: goto label_2dd410;
        case 0x2dd414u: goto label_2dd414;
        case 0x2dd418u: goto label_2dd418;
        case 0x2dd41cu: goto label_2dd41c;
        case 0x2dd420u: goto label_2dd420;
        case 0x2dd424u: goto label_2dd424;
        case 0x2dd428u: goto label_2dd428;
        case 0x2dd42cu: goto label_2dd42c;
        case 0x2dd430u: goto label_2dd430;
        case 0x2dd434u: goto label_2dd434;
        case 0x2dd438u: goto label_2dd438;
        case 0x2dd43cu: goto label_2dd43c;
        case 0x2dd440u: goto label_2dd440;
        case 0x2dd444u: goto label_2dd444;
        case 0x2dd448u: goto label_2dd448;
        case 0x2dd44cu: goto label_2dd44c;
        case 0x2dd450u: goto label_2dd450;
        case 0x2dd454u: goto label_2dd454;
        case 0x2dd458u: goto label_2dd458;
        case 0x2dd45cu: goto label_2dd45c;
        case 0x2dd460u: goto label_2dd460;
        case 0x2dd464u: goto label_2dd464;
        case 0x2dd468u: goto label_2dd468;
        case 0x2dd46cu: goto label_2dd46c;
        case 0x2dd470u: goto label_2dd470;
        case 0x2dd474u: goto label_2dd474;
        case 0x2dd478u: goto label_2dd478;
        case 0x2dd47cu: goto label_2dd47c;
        case 0x2dd480u: goto label_2dd480;
        case 0x2dd484u: goto label_2dd484;
        case 0x2dd488u: goto label_2dd488;
        case 0x2dd48cu: goto label_2dd48c;
        case 0x2dd490u: goto label_2dd490;
        case 0x2dd494u: goto label_2dd494;
        case 0x2dd498u: goto label_2dd498;
        case 0x2dd49cu: goto label_2dd49c;
        case 0x2dd4a0u: goto label_2dd4a0;
        case 0x2dd4a4u: goto label_2dd4a4;
        case 0x2dd4a8u: goto label_2dd4a8;
        case 0x2dd4acu: goto label_2dd4ac;
        case 0x2dd4b0u: goto label_2dd4b0;
        case 0x2dd4b4u: goto label_2dd4b4;
        case 0x2dd4b8u: goto label_2dd4b8;
        case 0x2dd4bcu: goto label_2dd4bc;
        case 0x2dd4c0u: goto label_2dd4c0;
        case 0x2dd4c4u: goto label_2dd4c4;
        case 0x2dd4c8u: goto label_2dd4c8;
        case 0x2dd4ccu: goto label_2dd4cc;
        case 0x2dd4d0u: goto label_2dd4d0;
        case 0x2dd4d4u: goto label_2dd4d4;
        case 0x2dd4d8u: goto label_2dd4d8;
        case 0x2dd4dcu: goto label_2dd4dc;
        case 0x2dd4e0u: goto label_2dd4e0;
        case 0x2dd4e4u: goto label_2dd4e4;
        case 0x2dd4e8u: goto label_2dd4e8;
        case 0x2dd4ecu: goto label_2dd4ec;
        case 0x2dd4f0u: goto label_2dd4f0;
        case 0x2dd4f4u: goto label_2dd4f4;
        case 0x2dd4f8u: goto label_2dd4f8;
        case 0x2dd4fcu: goto label_2dd4fc;
        case 0x2dd500u: goto label_2dd500;
        case 0x2dd504u: goto label_2dd504;
        case 0x2dd508u: goto label_2dd508;
        case 0x2dd50cu: goto label_2dd50c;
        case 0x2dd510u: goto label_2dd510;
        case 0x2dd514u: goto label_2dd514;
        case 0x2dd518u: goto label_2dd518;
        case 0x2dd51cu: goto label_2dd51c;
        case 0x2dd520u: goto label_2dd520;
        case 0x2dd524u: goto label_2dd524;
        case 0x2dd528u: goto label_2dd528;
        case 0x2dd52cu: goto label_2dd52c;
        case 0x2dd530u: goto label_2dd530;
        case 0x2dd534u: goto label_2dd534;
        case 0x2dd538u: goto label_2dd538;
        case 0x2dd53cu: goto label_2dd53c;
        case 0x2dd540u: goto label_2dd540;
        case 0x2dd544u: goto label_2dd544;
        case 0x2dd548u: goto label_2dd548;
        case 0x2dd54cu: goto label_2dd54c;
        case 0x2dd550u: goto label_2dd550;
        case 0x2dd554u: goto label_2dd554;
        case 0x2dd558u: goto label_2dd558;
        case 0x2dd55cu: goto label_2dd55c;
        case 0x2dd560u: goto label_2dd560;
        case 0x2dd564u: goto label_2dd564;
        case 0x2dd568u: goto label_2dd568;
        case 0x2dd56cu: goto label_2dd56c;
        case 0x2dd570u: goto label_2dd570;
        case 0x2dd574u: goto label_2dd574;
        case 0x2dd578u: goto label_2dd578;
        case 0x2dd57cu: goto label_2dd57c;
        case 0x2dd580u: goto label_2dd580;
        case 0x2dd584u: goto label_2dd584;
        case 0x2dd588u: goto label_2dd588;
        case 0x2dd58cu: goto label_2dd58c;
        case 0x2dd590u: goto label_2dd590;
        case 0x2dd594u: goto label_2dd594;
        case 0x2dd598u: goto label_2dd598;
        case 0x2dd59cu: goto label_2dd59c;
        case 0x2dd5a0u: goto label_2dd5a0;
        case 0x2dd5a4u: goto label_2dd5a4;
        case 0x2dd5a8u: goto label_2dd5a8;
        case 0x2dd5acu: goto label_2dd5ac;
        case 0x2dd5b0u: goto label_2dd5b0;
        case 0x2dd5b4u: goto label_2dd5b4;
        case 0x2dd5b8u: goto label_2dd5b8;
        case 0x2dd5bcu: goto label_2dd5bc;
        case 0x2dd5c0u: goto label_2dd5c0;
        case 0x2dd5c4u: goto label_2dd5c4;
        case 0x2dd5c8u: goto label_2dd5c8;
        case 0x2dd5ccu: goto label_2dd5cc;
        case 0x2dd5d0u: goto label_2dd5d0;
        case 0x2dd5d4u: goto label_2dd5d4;
        case 0x2dd5d8u: goto label_2dd5d8;
        case 0x2dd5dcu: goto label_2dd5dc;
        case 0x2dd5e0u: goto label_2dd5e0;
        case 0x2dd5e4u: goto label_2dd5e4;
        case 0x2dd5e8u: goto label_2dd5e8;
        case 0x2dd5ecu: goto label_2dd5ec;
        case 0x2dd5f0u: goto label_2dd5f0;
        case 0x2dd5f4u: goto label_2dd5f4;
        case 0x2dd5f8u: goto label_2dd5f8;
        case 0x2dd5fcu: goto label_2dd5fc;
        case 0x2dd600u: goto label_2dd600;
        case 0x2dd604u: goto label_2dd604;
        case 0x2dd608u: goto label_2dd608;
        case 0x2dd60cu: goto label_2dd60c;
        case 0x2dd610u: goto label_2dd610;
        case 0x2dd614u: goto label_2dd614;
        case 0x2dd618u: goto label_2dd618;
        case 0x2dd61cu: goto label_2dd61c;
        case 0x2dd620u: goto label_2dd620;
        case 0x2dd624u: goto label_2dd624;
        case 0x2dd628u: goto label_2dd628;
        case 0x2dd62cu: goto label_2dd62c;
        case 0x2dd630u: goto label_2dd630;
        case 0x2dd634u: goto label_2dd634;
        case 0x2dd638u: goto label_2dd638;
        case 0x2dd63cu: goto label_2dd63c;
        case 0x2dd640u: goto label_2dd640;
        case 0x2dd644u: goto label_2dd644;
        case 0x2dd648u: goto label_2dd648;
        case 0x2dd64cu: goto label_2dd64c;
        case 0x2dd650u: goto label_2dd650;
        case 0x2dd654u: goto label_2dd654;
        case 0x2dd658u: goto label_2dd658;
        case 0x2dd65cu: goto label_2dd65c;
        case 0x2dd660u: goto label_2dd660;
        case 0x2dd664u: goto label_2dd664;
        case 0x2dd668u: goto label_2dd668;
        case 0x2dd66cu: goto label_2dd66c;
        case 0x2dd670u: goto label_2dd670;
        case 0x2dd674u: goto label_2dd674;
        case 0x2dd678u: goto label_2dd678;
        case 0x2dd67cu: goto label_2dd67c;
        case 0x2dd680u: goto label_2dd680;
        case 0x2dd684u: goto label_2dd684;
        case 0x2dd688u: goto label_2dd688;
        case 0x2dd68cu: goto label_2dd68c;
        case 0x2dd690u: goto label_2dd690;
        case 0x2dd694u: goto label_2dd694;
        case 0x2dd698u: goto label_2dd698;
        case 0x2dd69cu: goto label_2dd69c;
        case 0x2dd6a0u: goto label_2dd6a0;
        case 0x2dd6a4u: goto label_2dd6a4;
        case 0x2dd6a8u: goto label_2dd6a8;
        case 0x2dd6acu: goto label_2dd6ac;
        case 0x2dd6b0u: goto label_2dd6b0;
        case 0x2dd6b4u: goto label_2dd6b4;
        case 0x2dd6b8u: goto label_2dd6b8;
        case 0x2dd6bcu: goto label_2dd6bc;
        case 0x2dd6c0u: goto label_2dd6c0;
        case 0x2dd6c4u: goto label_2dd6c4;
        case 0x2dd6c8u: goto label_2dd6c8;
        case 0x2dd6ccu: goto label_2dd6cc;
        case 0x2dd6d0u: goto label_2dd6d0;
        case 0x2dd6d4u: goto label_2dd6d4;
        case 0x2dd6d8u: goto label_2dd6d8;
        case 0x2dd6dcu: goto label_2dd6dc;
        case 0x2dd6e0u: goto label_2dd6e0;
        case 0x2dd6e4u: goto label_2dd6e4;
        case 0x2dd6e8u: goto label_2dd6e8;
        case 0x2dd6ecu: goto label_2dd6ec;
        case 0x2dd6f0u: goto label_2dd6f0;
        case 0x2dd6f4u: goto label_2dd6f4;
        case 0x2dd6f8u: goto label_2dd6f8;
        case 0x2dd6fcu: goto label_2dd6fc;
        case 0x2dd700u: goto label_2dd700;
        case 0x2dd704u: goto label_2dd704;
        case 0x2dd708u: goto label_2dd708;
        case 0x2dd70cu: goto label_2dd70c;
        case 0x2dd710u: goto label_2dd710;
        case 0x2dd714u: goto label_2dd714;
        case 0x2dd718u: goto label_2dd718;
        case 0x2dd71cu: goto label_2dd71c;
        case 0x2dd720u: goto label_2dd720;
        case 0x2dd724u: goto label_2dd724;
        case 0x2dd728u: goto label_2dd728;
        case 0x2dd72cu: goto label_2dd72c;
        case 0x2dd730u: goto label_2dd730;
        case 0x2dd734u: goto label_2dd734;
        case 0x2dd738u: goto label_2dd738;
        case 0x2dd73cu: goto label_2dd73c;
        case 0x2dd740u: goto label_2dd740;
        case 0x2dd744u: goto label_2dd744;
        case 0x2dd748u: goto label_2dd748;
        case 0x2dd74cu: goto label_2dd74c;
        case 0x2dd750u: goto label_2dd750;
        case 0x2dd754u: goto label_2dd754;
        case 0x2dd758u: goto label_2dd758;
        case 0x2dd75cu: goto label_2dd75c;
        case 0x2dd760u: goto label_2dd760;
        case 0x2dd764u: goto label_2dd764;
        case 0x2dd768u: goto label_2dd768;
        case 0x2dd76cu: goto label_2dd76c;
        case 0x2dd770u: goto label_2dd770;
        case 0x2dd774u: goto label_2dd774;
        case 0x2dd778u: goto label_2dd778;
        case 0x2dd77cu: goto label_2dd77c;
        case 0x2dd780u: goto label_2dd780;
        case 0x2dd784u: goto label_2dd784;
        case 0x2dd788u: goto label_2dd788;
        case 0x2dd78cu: goto label_2dd78c;
        case 0x2dd790u: goto label_2dd790;
        case 0x2dd794u: goto label_2dd794;
        case 0x2dd798u: goto label_2dd798;
        case 0x2dd79cu: goto label_2dd79c;
        case 0x2dd7a0u: goto label_2dd7a0;
        case 0x2dd7a4u: goto label_2dd7a4;
        case 0x2dd7a8u: goto label_2dd7a8;
        case 0x2dd7acu: goto label_2dd7ac;
        case 0x2dd7b0u: goto label_2dd7b0;
        case 0x2dd7b4u: goto label_2dd7b4;
        case 0x2dd7b8u: goto label_2dd7b8;
        case 0x2dd7bcu: goto label_2dd7bc;
        case 0x2dd7c0u: goto label_2dd7c0;
        case 0x2dd7c4u: goto label_2dd7c4;
        case 0x2dd7c8u: goto label_2dd7c8;
        case 0x2dd7ccu: goto label_2dd7cc;
        case 0x2dd7d0u: goto label_2dd7d0;
        case 0x2dd7d4u: goto label_2dd7d4;
        case 0x2dd7d8u: goto label_2dd7d8;
        case 0x2dd7dcu: goto label_2dd7dc;
        case 0x2dd7e0u: goto label_2dd7e0;
        case 0x2dd7e4u: goto label_2dd7e4;
        case 0x2dd7e8u: goto label_2dd7e8;
        case 0x2dd7ecu: goto label_2dd7ec;
        case 0x2dd7f0u: goto label_2dd7f0;
        case 0x2dd7f4u: goto label_2dd7f4;
        case 0x2dd7f8u: goto label_2dd7f8;
        case 0x2dd7fcu: goto label_2dd7fc;
        case 0x2dd800u: goto label_2dd800;
        case 0x2dd804u: goto label_2dd804;
        case 0x2dd808u: goto label_2dd808;
        case 0x2dd80cu: goto label_2dd80c;
        case 0x2dd810u: goto label_2dd810;
        case 0x2dd814u: goto label_2dd814;
        case 0x2dd818u: goto label_2dd818;
        case 0x2dd81cu: goto label_2dd81c;
        case 0x2dd820u: goto label_2dd820;
        case 0x2dd824u: goto label_2dd824;
        case 0x2dd828u: goto label_2dd828;
        case 0x2dd82cu: goto label_2dd82c;
        case 0x2dd830u: goto label_2dd830;
        case 0x2dd834u: goto label_2dd834;
        case 0x2dd838u: goto label_2dd838;
        case 0x2dd83cu: goto label_2dd83c;
        case 0x2dd840u: goto label_2dd840;
        case 0x2dd844u: goto label_2dd844;
        case 0x2dd848u: goto label_2dd848;
        case 0x2dd84cu: goto label_2dd84c;
        case 0x2dd850u: goto label_2dd850;
        case 0x2dd854u: goto label_2dd854;
        case 0x2dd858u: goto label_2dd858;
        case 0x2dd85cu: goto label_2dd85c;
        case 0x2dd860u: goto label_2dd860;
        case 0x2dd864u: goto label_2dd864;
        case 0x2dd868u: goto label_2dd868;
        case 0x2dd86cu: goto label_2dd86c;
        case 0x2dd870u: goto label_2dd870;
        case 0x2dd874u: goto label_2dd874;
        case 0x2dd878u: goto label_2dd878;
        case 0x2dd87cu: goto label_2dd87c;
        case 0x2dd880u: goto label_2dd880;
        case 0x2dd884u: goto label_2dd884;
        case 0x2dd888u: goto label_2dd888;
        case 0x2dd88cu: goto label_2dd88c;
        case 0x2dd890u: goto label_2dd890;
        case 0x2dd894u: goto label_2dd894;
        case 0x2dd898u: goto label_2dd898;
        case 0x2dd89cu: goto label_2dd89c;
        case 0x2dd8a0u: goto label_2dd8a0;
        case 0x2dd8a4u: goto label_2dd8a4;
        case 0x2dd8a8u: goto label_2dd8a8;
        case 0x2dd8acu: goto label_2dd8ac;
        case 0x2dd8b0u: goto label_2dd8b0;
        case 0x2dd8b4u: goto label_2dd8b4;
        case 0x2dd8b8u: goto label_2dd8b8;
        case 0x2dd8bcu: goto label_2dd8bc;
        case 0x2dd8c0u: goto label_2dd8c0;
        case 0x2dd8c4u: goto label_2dd8c4;
        case 0x2dd8c8u: goto label_2dd8c8;
        case 0x2dd8ccu: goto label_2dd8cc;
        case 0x2dd8d0u: goto label_2dd8d0;
        case 0x2dd8d4u: goto label_2dd8d4;
        case 0x2dd8d8u: goto label_2dd8d8;
        case 0x2dd8dcu: goto label_2dd8dc;
        case 0x2dd8e0u: goto label_2dd8e0;
        case 0x2dd8e4u: goto label_2dd8e4;
        case 0x2dd8e8u: goto label_2dd8e8;
        case 0x2dd8ecu: goto label_2dd8ec;
        case 0x2dd8f0u: goto label_2dd8f0;
        case 0x2dd8f4u: goto label_2dd8f4;
        case 0x2dd8f8u: goto label_2dd8f8;
        case 0x2dd8fcu: goto label_2dd8fc;
        case 0x2dd900u: goto label_2dd900;
        case 0x2dd904u: goto label_2dd904;
        case 0x2dd908u: goto label_2dd908;
        case 0x2dd90cu: goto label_2dd90c;
        case 0x2dd910u: goto label_2dd910;
        case 0x2dd914u: goto label_2dd914;
        case 0x2dd918u: goto label_2dd918;
        case 0x2dd91cu: goto label_2dd91c;
        case 0x2dd920u: goto label_2dd920;
        case 0x2dd924u: goto label_2dd924;
        case 0x2dd928u: goto label_2dd928;
        case 0x2dd92cu: goto label_2dd92c;
        case 0x2dd930u: goto label_2dd930;
        case 0x2dd934u: goto label_2dd934;
        case 0x2dd938u: goto label_2dd938;
        case 0x2dd93cu: goto label_2dd93c;
        case 0x2dd940u: goto label_2dd940;
        case 0x2dd944u: goto label_2dd944;
        case 0x2dd948u: goto label_2dd948;
        case 0x2dd94cu: goto label_2dd94c;
        case 0x2dd950u: goto label_2dd950;
        case 0x2dd954u: goto label_2dd954;
        case 0x2dd958u: goto label_2dd958;
        case 0x2dd95cu: goto label_2dd95c;
        case 0x2dd960u: goto label_2dd960;
        case 0x2dd964u: goto label_2dd964;
        case 0x2dd968u: goto label_2dd968;
        case 0x2dd96cu: goto label_2dd96c;
        case 0x2dd970u: goto label_2dd970;
        case 0x2dd974u: goto label_2dd974;
        case 0x2dd978u: goto label_2dd978;
        case 0x2dd97cu: goto label_2dd97c;
        case 0x2dd980u: goto label_2dd980;
        case 0x2dd984u: goto label_2dd984;
        case 0x2dd988u: goto label_2dd988;
        case 0x2dd98cu: goto label_2dd98c;
        case 0x2dd990u: goto label_2dd990;
        case 0x2dd994u: goto label_2dd994;
        case 0x2dd998u: goto label_2dd998;
        case 0x2dd99cu: goto label_2dd99c;
        case 0x2dd9a0u: goto label_2dd9a0;
        case 0x2dd9a4u: goto label_2dd9a4;
        case 0x2dd9a8u: goto label_2dd9a8;
        case 0x2dd9acu: goto label_2dd9ac;
        case 0x2dd9b0u: goto label_2dd9b0;
        case 0x2dd9b4u: goto label_2dd9b4;
        case 0x2dd9b8u: goto label_2dd9b8;
        case 0x2dd9bcu: goto label_2dd9bc;
        case 0x2dd9c0u: goto label_2dd9c0;
        case 0x2dd9c4u: goto label_2dd9c4;
        case 0x2dd9c8u: goto label_2dd9c8;
        case 0x2dd9ccu: goto label_2dd9cc;
        case 0x2dd9d0u: goto label_2dd9d0;
        case 0x2dd9d4u: goto label_2dd9d4;
        case 0x2dd9d8u: goto label_2dd9d8;
        case 0x2dd9dcu: goto label_2dd9dc;
        case 0x2dd9e0u: goto label_2dd9e0;
        case 0x2dd9e4u: goto label_2dd9e4;
        case 0x2dd9e8u: goto label_2dd9e8;
        case 0x2dd9ecu: goto label_2dd9ec;
        case 0x2dd9f0u: goto label_2dd9f0;
        case 0x2dd9f4u: goto label_2dd9f4;
        case 0x2dd9f8u: goto label_2dd9f8;
        case 0x2dd9fcu: goto label_2dd9fc;
        case 0x2dda00u: goto label_2dda00;
        case 0x2dda04u: goto label_2dda04;
        case 0x2dda08u: goto label_2dda08;
        case 0x2dda0cu: goto label_2dda0c;
        case 0x2dda10u: goto label_2dda10;
        case 0x2dda14u: goto label_2dda14;
        case 0x2dda18u: goto label_2dda18;
        case 0x2dda1cu: goto label_2dda1c;
        case 0x2dda20u: goto label_2dda20;
        case 0x2dda24u: goto label_2dda24;
        case 0x2dda28u: goto label_2dda28;
        case 0x2dda2cu: goto label_2dda2c;
        case 0x2dda30u: goto label_2dda30;
        case 0x2dda34u: goto label_2dda34;
        case 0x2dda38u: goto label_2dda38;
        case 0x2dda3cu: goto label_2dda3c;
        case 0x2dda40u: goto label_2dda40;
        case 0x2dda44u: goto label_2dda44;
        case 0x2dda48u: goto label_2dda48;
        case 0x2dda4cu: goto label_2dda4c;
        case 0x2dda50u: goto label_2dda50;
        case 0x2dda54u: goto label_2dda54;
        case 0x2dda58u: goto label_2dda58;
        case 0x2dda5cu: goto label_2dda5c;
        case 0x2dda60u: goto label_2dda60;
        case 0x2dda64u: goto label_2dda64;
        case 0x2dda68u: goto label_2dda68;
        case 0x2dda6cu: goto label_2dda6c;
        case 0x2dda70u: goto label_2dda70;
        case 0x2dda74u: goto label_2dda74;
        case 0x2dda78u: goto label_2dda78;
        case 0x2dda7cu: goto label_2dda7c;
        case 0x2dda80u: goto label_2dda80;
        case 0x2dda84u: goto label_2dda84;
        case 0x2dda88u: goto label_2dda88;
        case 0x2dda8cu: goto label_2dda8c;
        case 0x2dda90u: goto label_2dda90;
        case 0x2dda94u: goto label_2dda94;
        case 0x2dda98u: goto label_2dda98;
        case 0x2dda9cu: goto label_2dda9c;
        case 0x2ddaa0u: goto label_2ddaa0;
        case 0x2ddaa4u: goto label_2ddaa4;
        case 0x2ddaa8u: goto label_2ddaa8;
        case 0x2ddaacu: goto label_2ddaac;
        case 0x2ddab0u: goto label_2ddab0;
        case 0x2ddab4u: goto label_2ddab4;
        case 0x2ddab8u: goto label_2ddab8;
        case 0x2ddabcu: goto label_2ddabc;
        case 0x2ddac0u: goto label_2ddac0;
        case 0x2ddac4u: goto label_2ddac4;
        case 0x2ddac8u: goto label_2ddac8;
        case 0x2ddaccu: goto label_2ddacc;
        case 0x2ddad0u: goto label_2ddad0;
        case 0x2ddad4u: goto label_2ddad4;
        case 0x2ddad8u: goto label_2ddad8;
        case 0x2ddadcu: goto label_2ddadc;
        case 0x2ddae0u: goto label_2ddae0;
        case 0x2ddae4u: goto label_2ddae4;
        case 0x2ddae8u: goto label_2ddae8;
        case 0x2ddaecu: goto label_2ddaec;
        case 0x2ddaf0u: goto label_2ddaf0;
        case 0x2ddaf4u: goto label_2ddaf4;
        case 0x2ddaf8u: goto label_2ddaf8;
        case 0x2ddafcu: goto label_2ddafc;
        case 0x2ddb00u: goto label_2ddb00;
        case 0x2ddb04u: goto label_2ddb04;
        case 0x2ddb08u: goto label_2ddb08;
        case 0x2ddb0cu: goto label_2ddb0c;
        case 0x2ddb10u: goto label_2ddb10;
        case 0x2ddb14u: goto label_2ddb14;
        case 0x2ddb18u: goto label_2ddb18;
        case 0x2ddb1cu: goto label_2ddb1c;
        case 0x2ddb20u: goto label_2ddb20;
        case 0x2ddb24u: goto label_2ddb24;
        case 0x2ddb28u: goto label_2ddb28;
        case 0x2ddb2cu: goto label_2ddb2c;
        case 0x2ddb30u: goto label_2ddb30;
        case 0x2ddb34u: goto label_2ddb34;
        case 0x2ddb38u: goto label_2ddb38;
        case 0x2ddb3cu: goto label_2ddb3c;
        case 0x2ddb40u: goto label_2ddb40;
        case 0x2ddb44u: goto label_2ddb44;
        case 0x2ddb48u: goto label_2ddb48;
        case 0x2ddb4cu: goto label_2ddb4c;
        case 0x2ddb50u: goto label_2ddb50;
        case 0x2ddb54u: goto label_2ddb54;
        case 0x2ddb58u: goto label_2ddb58;
        case 0x2ddb5cu: goto label_2ddb5c;
        case 0x2ddb60u: goto label_2ddb60;
        case 0x2ddb64u: goto label_2ddb64;
        case 0x2ddb68u: goto label_2ddb68;
        case 0x2ddb6cu: goto label_2ddb6c;
        case 0x2ddb70u: goto label_2ddb70;
        case 0x2ddb74u: goto label_2ddb74;
        case 0x2ddb78u: goto label_2ddb78;
        case 0x2ddb7cu: goto label_2ddb7c;
        case 0x2ddb80u: goto label_2ddb80;
        case 0x2ddb84u: goto label_2ddb84;
        case 0x2ddb88u: goto label_2ddb88;
        case 0x2ddb8cu: goto label_2ddb8c;
        case 0x2ddb90u: goto label_2ddb90;
        case 0x2ddb94u: goto label_2ddb94;
        case 0x2ddb98u: goto label_2ddb98;
        case 0x2ddb9cu: goto label_2ddb9c;
        case 0x2ddba0u: goto label_2ddba0;
        case 0x2ddba4u: goto label_2ddba4;
        case 0x2ddba8u: goto label_2ddba8;
        case 0x2ddbacu: goto label_2ddbac;
        case 0x2ddbb0u: goto label_2ddbb0;
        case 0x2ddbb4u: goto label_2ddbb4;
        case 0x2ddbb8u: goto label_2ddbb8;
        case 0x2ddbbcu: goto label_2ddbbc;
        case 0x2ddbc0u: goto label_2ddbc0;
        case 0x2ddbc4u: goto label_2ddbc4;
        case 0x2ddbc8u: goto label_2ddbc8;
        case 0x2ddbccu: goto label_2ddbcc;
        case 0x2ddbd0u: goto label_2ddbd0;
        case 0x2ddbd4u: goto label_2ddbd4;
        case 0x2ddbd8u: goto label_2ddbd8;
        case 0x2ddbdcu: goto label_2ddbdc;
        case 0x2ddbe0u: goto label_2ddbe0;
        case 0x2ddbe4u: goto label_2ddbe4;
        case 0x2ddbe8u: goto label_2ddbe8;
        case 0x2ddbecu: goto label_2ddbec;
        case 0x2ddbf0u: goto label_2ddbf0;
        case 0x2ddbf4u: goto label_2ddbf4;
        case 0x2ddbf8u: goto label_2ddbf8;
        case 0x2ddbfcu: goto label_2ddbfc;
        case 0x2ddc00u: goto label_2ddc00;
        case 0x2ddc04u: goto label_2ddc04;
        case 0x2ddc08u: goto label_2ddc08;
        case 0x2ddc0cu: goto label_2ddc0c;
        case 0x2ddc10u: goto label_2ddc10;
        case 0x2ddc14u: goto label_2ddc14;
        case 0x2ddc18u: goto label_2ddc18;
        case 0x2ddc1cu: goto label_2ddc1c;
        case 0x2ddc20u: goto label_2ddc20;
        case 0x2ddc24u: goto label_2ddc24;
        case 0x2ddc28u: goto label_2ddc28;
        case 0x2ddc2cu: goto label_2ddc2c;
        case 0x2ddc30u: goto label_2ddc30;
        case 0x2ddc34u: goto label_2ddc34;
        case 0x2ddc38u: goto label_2ddc38;
        case 0x2ddc3cu: goto label_2ddc3c;
        case 0x2ddc40u: goto label_2ddc40;
        case 0x2ddc44u: goto label_2ddc44;
        case 0x2ddc48u: goto label_2ddc48;
        case 0x2ddc4cu: goto label_2ddc4c;
        case 0x2ddc50u: goto label_2ddc50;
        case 0x2ddc54u: goto label_2ddc54;
        case 0x2ddc58u: goto label_2ddc58;
        case 0x2ddc5cu: goto label_2ddc5c;
        case 0x2ddc60u: goto label_2ddc60;
        case 0x2ddc64u: goto label_2ddc64;
        case 0x2ddc68u: goto label_2ddc68;
        case 0x2ddc6cu: goto label_2ddc6c;
        case 0x2ddc70u: goto label_2ddc70;
        case 0x2ddc74u: goto label_2ddc74;
        case 0x2ddc78u: goto label_2ddc78;
        case 0x2ddc7cu: goto label_2ddc7c;
        case 0x2ddc80u: goto label_2ddc80;
        case 0x2ddc84u: goto label_2ddc84;
        case 0x2ddc88u: goto label_2ddc88;
        case 0x2ddc8cu: goto label_2ddc8c;
        case 0x2ddc90u: goto label_2ddc90;
        case 0x2ddc94u: goto label_2ddc94;
        case 0x2ddc98u: goto label_2ddc98;
        case 0x2ddc9cu: goto label_2ddc9c;
        case 0x2ddca0u: goto label_2ddca0;
        case 0x2ddca4u: goto label_2ddca4;
        case 0x2ddca8u: goto label_2ddca8;
        case 0x2ddcacu: goto label_2ddcac;
        case 0x2ddcb0u: goto label_2ddcb0;
        case 0x2ddcb4u: goto label_2ddcb4;
        case 0x2ddcb8u: goto label_2ddcb8;
        case 0x2ddcbcu: goto label_2ddcbc;
        case 0x2ddcc0u: goto label_2ddcc0;
        case 0x2ddcc4u: goto label_2ddcc4;
        case 0x2ddcc8u: goto label_2ddcc8;
        case 0x2ddcccu: goto label_2ddccc;
        case 0x2ddcd0u: goto label_2ddcd0;
        case 0x2ddcd4u: goto label_2ddcd4;
        case 0x2ddcd8u: goto label_2ddcd8;
        case 0x2ddcdcu: goto label_2ddcdc;
        case 0x2ddce0u: goto label_2ddce0;
        case 0x2ddce4u: goto label_2ddce4;
        case 0x2ddce8u: goto label_2ddce8;
        case 0x2ddcecu: goto label_2ddcec;
        case 0x2ddcf0u: goto label_2ddcf0;
        case 0x2ddcf4u: goto label_2ddcf4;
        case 0x2ddcf8u: goto label_2ddcf8;
        case 0x2ddcfcu: goto label_2ddcfc;
        case 0x2ddd00u: goto label_2ddd00;
        case 0x2ddd04u: goto label_2ddd04;
        case 0x2ddd08u: goto label_2ddd08;
        case 0x2ddd0cu: goto label_2ddd0c;
        case 0x2ddd10u: goto label_2ddd10;
        case 0x2ddd14u: goto label_2ddd14;
        case 0x2ddd18u: goto label_2ddd18;
        case 0x2ddd1cu: goto label_2ddd1c;
        case 0x2ddd20u: goto label_2ddd20;
        case 0x2ddd24u: goto label_2ddd24;
        case 0x2ddd28u: goto label_2ddd28;
        case 0x2ddd2cu: goto label_2ddd2c;
        case 0x2ddd30u: goto label_2ddd30;
        case 0x2ddd34u: goto label_2ddd34;
        case 0x2ddd38u: goto label_2ddd38;
        case 0x2ddd3cu: goto label_2ddd3c;
        case 0x2ddd40u: goto label_2ddd40;
        case 0x2ddd44u: goto label_2ddd44;
        case 0x2ddd48u: goto label_2ddd48;
        case 0x2ddd4cu: goto label_2ddd4c;
        case 0x2ddd50u: goto label_2ddd50;
        case 0x2ddd54u: goto label_2ddd54;
        case 0x2ddd58u: goto label_2ddd58;
        case 0x2ddd5cu: goto label_2ddd5c;
        case 0x2ddd60u: goto label_2ddd60;
        case 0x2ddd64u: goto label_2ddd64;
        case 0x2ddd68u: goto label_2ddd68;
        case 0x2ddd6cu: goto label_2ddd6c;
        case 0x2ddd70u: goto label_2ddd70;
        case 0x2ddd74u: goto label_2ddd74;
        case 0x2ddd78u: goto label_2ddd78;
        case 0x2ddd7cu: goto label_2ddd7c;
        case 0x2ddd80u: goto label_2ddd80;
        case 0x2ddd84u: goto label_2ddd84;
        case 0x2ddd88u: goto label_2ddd88;
        case 0x2ddd8cu: goto label_2ddd8c;
        case 0x2ddd90u: goto label_2ddd90;
        case 0x2ddd94u: goto label_2ddd94;
        case 0x2ddd98u: goto label_2ddd98;
        case 0x2ddd9cu: goto label_2ddd9c;
        case 0x2ddda0u: goto label_2ddda0;
        case 0x2ddda4u: goto label_2ddda4;
        case 0x2ddda8u: goto label_2ddda8;
        case 0x2dddacu: goto label_2dddac;
        case 0x2dddb0u: goto label_2dddb0;
        case 0x2dddb4u: goto label_2dddb4;
        case 0x2dddb8u: goto label_2dddb8;
        case 0x2dddbcu: goto label_2dddbc;
        case 0x2dddc0u: goto label_2dddc0;
        case 0x2dddc4u: goto label_2dddc4;
        case 0x2dddc8u: goto label_2dddc8;
        case 0x2dddccu: goto label_2dddcc;
        case 0x2dddd0u: goto label_2dddd0;
        case 0x2dddd4u: goto label_2dddd4;
        case 0x2dddd8u: goto label_2dddd8;
        case 0x2ddddcu: goto label_2ddddc;
        default: break;
    }

    ctx->pc = 0x2dd220u;

label_2dd220:
    // 0x2dd220: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2dd220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2dd224:
    // 0x2dd224: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x2dd224u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
label_2dd228:
    // 0x2dd228: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2dd228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2dd22c:
    // 0x2dd22c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2dd22cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2dd230:
    // 0x2dd230: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x2dd230u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
label_2dd234:
    // 0x2dd234: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x2dd234u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
label_2dd238:
    // 0x2dd238: 0x24710080  addiu       $s1, $v1, 0x80
    ctx->pc = 0x2dd238u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
label_2dd23c:
    // 0x2dd23c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dd23cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2dd240:
    // 0x2dd240: 0x24701330  addiu       $s0, $v1, 0x1330
    ctx->pc = 0x2dd240u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_2dd244:
    // 0x2dd244: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dd244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2dd248:
    // 0x2dd248: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x2dd248u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_2dd24c:
    // 0x2dd24c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2dd24cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_2dd250:
    // 0x2dd250: 0x2c81000c  sltiu       $at, $a0, 0xC
    ctx->pc = 0x2dd250u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
label_2dd254:
    // 0x2dd254: 0x102002dc  beqz        $at, . + 4 + (0x2DC << 2)
label_2dd258:
    if (ctx->pc == 0x2DD258u) {
        ctx->pc = 0x2DD25Cu;
        goto label_2dd25c;
    }
    ctx->pc = 0x2DD254u;
    {
        const bool branch_taken_0x2dd254 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dd254) {
            ctx->pc = 0x2DDDC8u;
            goto label_2dddc8;
        }
    }
    ctx->pc = 0x2DD25Cu;
label_2dd25c:
    // 0x2dd25c: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x2dd25cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
label_2dd260:
    // 0x2dd260: 0x24a61980  addiu       $a2, $a1, 0x1980
    ctx->pc = 0x2dd260u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 6528));
label_2dd264:
    // 0x2dd264: 0x43880  sll         $a3, $a0, 2
    ctx->pc = 0x2dd264u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_2dd268:
    // 0x2dd268: 0xe64021  addu        $t0, $a3, $a2
    ctx->pc = 0x2dd268u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_2dd26c:
    // 0x2dd26c: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x2dd26cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_2dd270:
    // 0x2dd270: 0x600008  jr          $v1
label_2dd274:
    if (ctx->pc == 0x2DD274u) {
        ctx->pc = 0x2DD278u;
        goto label_2dd278;
    }
    ctx->pc = 0x2DD270u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DD270u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2DD278u;
label_2dd278:
    // 0x2dd278: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2dd278u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2dd27c:
    // 0x2dd27c: 0xa20300d6  sb          $v1, 0xD6($s0)
    ctx->pc = 0x2dd27cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 214), (uint8_t)GPR_U32(ctx, 3));
label_2dd280:
    // 0x2dd280: 0xa20000d5  sb          $zero, 0xD5($s0)
    ctx->pc = 0x2dd280u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 213), (uint8_t)GPR_U32(ctx, 0));
label_2dd284:
    // 0x2dd284: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2dd284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2dd288:
    // 0x2dd288: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dd288u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2dd28c:
    // 0x2dd28c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2dd28cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_2dd290:
    // 0x2dd290: 0x24060a19  addiu       $a2, $zero, 0xA19
    ctx->pc = 0x2dd290u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2585));
label_2dd294:
    // 0x2dd294: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2dd294u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2dd298:
    // 0x2dd298: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2dd298u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_2dd29c:
    // 0x2dd29c: 0xc0965d0  jal         func_259740
label_2dd2a0:
    if (ctx->pc == 0x2DD2A0u) {
        ctx->pc = 0x2DD2A4u;
        goto label_2dd2a4;
    }
    ctx->pc = 0x2DD29Cu;
    SET_GPR_U32(ctx, 31, 0x2DD2A4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2DD29Cu, 0x2DD2A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD2A4u;
label_2dd2a4:
    // 0x2dd2a4: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x2dd2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2dd2a8:
    // 0x2dd2a8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2dd2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2dd2ac:
    // 0x2dd2ac: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x2dd2acu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
label_2dd2b0:
    // 0x2dd2b0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dd2b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2dd2b4:
    // 0x2dd2b4: 0xa480127a  sh          $zero, 0x127A($a0)
    ctx->pc = 0x2dd2b4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4730), (uint16_t)GPR_U32(ctx, 0));
label_2dd2b8:
    // 0x2dd2b8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2dd2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2dd2bc:
    // 0x2dd2bc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2dd2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2dd2c0:
    // 0x2dd2c0: 0xa443127e  sh          $v1, 0x127E($v0)
    ctx->pc = 0x2dd2c0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4734), (uint16_t)GPR_U32(ctx, 3));
label_2dd2c4:
    // 0x2dd2c4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dd2c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2dd2c8:
    // 0x2dd2c8: 0x90640002  lbu         $a0, 0x2($v1)
    ctx->pc = 0x2dd2c8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_2dd2cc:
    // 0x2dd2cc: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x2dd2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_2dd2d0:
    // 0x2dd2d0: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2dd2d0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_2dd2d4:
    // 0x2dd2d4: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x2dd2d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2dd2d8:
    // 0x2dd2d8: 0x84a21278  lh          $v0, 0x1278($a1)
    ctx->pc = 0x2dd2d8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4728)));
label_2dd2dc:
    // 0x2dd2dc: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_2dd2e0:
    if (ctx->pc == 0x2DD2E0u) {
        ctx->pc = 0x2DD2E4u;
        goto label_2dd2e4;
    }
    ctx->pc = 0x2DD2DCu;
    {
        const bool branch_taken_0x2dd2dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dd2dc) {
            ctx->pc = 0x2DD340u;
            goto label_2dd340;
        }
    }
    ctx->pc = 0x2DD2E4u;
label_2dd2e4:
    // 0x2dd2e4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dd2e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2dd2e8:
    // 0x2dd2e8: 0x84821278  lh          $v0, 0x1278($a0)
    ctx->pc = 0x2dd2e8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
label_2dd2ec:
    // 0x2dd2ec: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x2dd2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2dd2f0:
    // 0x2dd2f0: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x2dd2f0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
label_2dd2f4:
    // 0x2dd2f4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2dd2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2dd2f8:
    // 0x2dd2f8: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x2dd2f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
label_2dd2fc:
    // 0x2dd2fc: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2dd2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_2dd300:
    // 0x2dd300: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x2dd300u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
label_2dd304:
    // 0x2dd304: 0xc05ccfc  jal         func_1733F0
label_2dd308:
    if (ctx->pc == 0x2DD308u) {
        ctx->pc = 0x2DD30Cu;
        goto label_2dd30c;
    }
    ctx->pc = 0x2DD304u;
    SET_GPR_U32(ctx, 31, 0x2DD30Cu);
    ctx->pc = 0x1733F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1733F0u, 0x2DD304u, 0x2DD30Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD30Cu;
label_2dd30c:
    // 0x2dd30c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dd30cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2dd310:
    // 0x2dd310: 0xe4801290  swc1        $f0, 0x1290($a0)
    ctx->pc = 0x2dd310u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4752), bits); }
label_2dd314:
    // 0x2dd314: 0x3c043e49  lui         $a0, 0x3E49
    ctx->pc = 0x2dd314u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15945 << 16));
label_2dd318:
    // 0x2dd318: 0x34820fdb  ori         $v0, $a0, 0xFDB
    ctx->pc = 0x2dd318u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4059);
label_2dd31c:
    // 0x2dd31c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2dd31cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_2dd320:
    // 0x2dd320: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2dd320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2dd324:
    // 0x2dd324: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dd324u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2dd328:
    // 0x2dd328: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x2dd328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2dd32c:
    // 0x2dd32c: 0xc48d00d4  lwc1        $f13, 0xD4($a0)
    ctx->pc = 0x2dd32cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_2dd330:
    // 0x2dd330: 0xc058f50  jal         func_163D40
label_2dd334:
    if (ctx->pc == 0x2DD334u) {
        ctx->pc = 0x2DD338u;
        goto label_2dd338;
    }
    ctx->pc = 0x2DD330u;
    SET_GPR_U32(ctx, 31, 0x2DD338u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x2DD330u, 0x2DD338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD338u;
label_2dd338:
    // 0x2dd338: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2dd338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2dd33c:
    // 0x2dd33c: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x2dd33cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
label_2dd340:
    // 0x2dd340: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dd340u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2dd344:
    // 0x2dd344: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2dd344u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2dd348:
    // 0x2dd348: 0xc096b40  jal         func_25AD00
label_2dd34c:
    if (ctx->pc == 0x2DD34Cu) {
        ctx->pc = 0x2DD350u;
        goto label_2dd350;
    }
    ctx->pc = 0x2DD348u;
    SET_GPR_U32(ctx, 31, 0x2DD350u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2DD348u, 0x2DD350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD350u;
label_2dd350:
    // 0x2dd350: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2dd350u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2dd354:
    // 0x2dd354: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dd354u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2dd358:
    // 0x2dd358: 0xc05cd10  jal         func_173440
label_2dd35c:
    if (ctx->pc == 0x2DD35Cu) {
        ctx->pc = 0x2DD360u;
        goto label_2dd360;
    }
    ctx->pc = 0x2DD358u;
    SET_GPR_U32(ctx, 31, 0x2DD360u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x2DD358u, 0x2DD360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD360u;
label_2dd360:
    // 0x2dd360: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2dd360u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2dd364:
    // 0x2dd364: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dd364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2dd368:
    // 0x2dd368: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x2dd368u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_2dd36c:
    // 0x2dd36c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2dd36cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2dd370:
    // 0x2dd370: 0xc05cec4  jal         func_173B10
label_2dd374:
    if (ctx->pc == 0x2DD374u) {
        ctx->pc = 0x2DD378u;
        goto label_2dd378;
    }
    ctx->pc = 0x2DD370u;
    SET_GPR_U32(ctx, 31, 0x2DD378u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x2DD370u, 0x2DD378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD378u;
label_2dd378:
    // 0x2dd378: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x2dd378u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2dd37c:
    // 0x2dd37c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dd37cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2dd380:
    // 0x2dd380: 0xc0974dc  jal         func_25D370
label_2dd384:
    if (ctx->pc == 0x2DD384u) {
        ctx->pc = 0x2DD388u;
        goto label_2dd388;
    }
    ctx->pc = 0x2DD380u;
    SET_GPR_U32(ctx, 31, 0x2DD388u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2DD380u, 0x2DD388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD388u;
label_2dd388:
    // 0x2dd388: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2dd388u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2dd38c:
    // 0x2dd38c: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x2dd38cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2dd390:
    // 0x2dd390: 0x84a3127a  lh          $v1, 0x127A($a1)
    ctx->pc = 0x2dd390u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4730)));
label_2dd394:
    // 0x2dd394: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_2dd398:
    if (ctx->pc == 0x2DD398u) {
        ctx->pc = 0x2DD39Cu;
        goto label_2dd39c;
    }
    ctx->pc = 0x2DD394u;
    {
        const bool branch_taken_0x2dd394 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dd394) {
            ctx->pc = 0x2DD3C4u;
            goto label_2dd3c4;
        }
    }
    ctx->pc = 0x2DD39Cu;
label_2dd39c:
    // 0x2dd39c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dd39cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2dd3a0:
    // 0x2dd3a0: 0x8483127a  lh          $v1, 0x127A($a0)
    ctx->pc = 0x2dd3a0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4730)));
label_2dd3a4:
    // 0x2dd3a4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2dd3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_2dd3a8:
    // 0x2dd3a8: 0xa483127a  sh          $v1, 0x127A($a0)
    ctx->pc = 0x2dd3a8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4730), (uint16_t)GPR_U32(ctx, 3));
label_2dd3ac:
    // 0x2dd3ac: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x2dd3acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2dd3b0:
    // 0x2dd3b0: 0x94a309e0  lhu         $v1, 0x9E0($a1)
    ctx->pc = 0x2dd3b0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2528)));
label_2dd3b4:
    // 0x2dd3b4: 0x34640100  ori         $a0, $v1, 0x100
    ctx->pc = 0x2dd3b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
label_2dd3b8:
    // 0x2dd3b8: 0xa4a409e0  sh          $a0, 0x9E0($a1)
    ctx->pc = 0x2dd3b8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2528), (uint16_t)GPR_U32(ctx, 4));
label_2dd3bc:
    // 0x2dd3bc: 0x10000045  b           . + 4 + (0x45 << 2)
label_2dd3c0:
    if (ctx->pc == 0x2DD3C0u) {
        ctx->pc = 0x2DD3C4u;
        goto label_2dd3c4;
    }
    ctx->pc = 0x2DD3BCu;
    {
        const bool branch_taken_0x2dd3bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dd3bc) {
            ctx->pc = 0x2DD4D4u;
            goto label_2dd4d4;
        }
    }
    ctx->pc = 0x2DD3C4u;
label_2dd3c4:
    // 0x2dd3c4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dd3c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2dd3c8:
    // 0x2dd3c8: 0x948309e0  lhu         $v1, 0x9E0($a0)
    ctx->pc = 0x2dd3c8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2528)));
label_2dd3cc:
    // 0x2dd3cc: 0x3063feff  andi        $v1, $v1, 0xFEFF
    ctx->pc = 0x2dd3ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65279);
label_2dd3d0:
    // 0x2dd3d0: 0xa48309e0  sh          $v1, 0x9E0($a0)
    ctx->pc = 0x2dd3d0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2528), (uint16_t)GPR_U32(ctx, 3));
label_2dd3d4:
    // 0x2dd3d4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dd3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2dd3d8:
    // 0x2dd3d8: 0x906409df  lbu         $a0, 0x9DF($v1)
    ctx->pc = 0x2dd3d8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2527)));
label_2dd3dc:
    // 0x2dd3dc: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x2dd3dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_2dd3e0:
    // 0x2dd3e0: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x2dd3e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
label_2dd3e4:
    // 0x2dd3e4: 0x1060003b  beqz        $v1, . + 4 + (0x3B << 2)
label_2dd3e8:
    if (ctx->pc == 0x2DD3E8u) {
        ctx->pc = 0x2DD3ECu;
        goto label_2dd3ec;
    }
    ctx->pc = 0x2DD3E4u;
    {
        const bool branch_taken_0x2dd3e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dd3e4) {
            ctx->pc = 0x2DD4D4u;
            goto label_2dd4d4;
        }
    }
    ctx->pc = 0x2DD3ECu;
label_2dd3ec:
    // 0x2dd3ec: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x2dd3ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2dd3f0:
    // 0x2dd3f0: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x2dd3f0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_2dd3f4:
    // 0x2dd3f4: 0xc0675a4  jal         func_19D690
label_2dd3f8:
    if (ctx->pc == 0x2DD3F8u) {
        ctx->pc = 0x2DD3FCu;
        goto label_2dd3fc;
    }
    ctx->pc = 0x2DD3F4u;
    SET_GPR_U32(ctx, 31, 0x2DD3FCu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2DD3F4u, 0x2DD3FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD3FCu;
label_2dd3fc:
    // 0x2dd3fc: 0x3c03437a  lui         $v1, 0x437A
    ctx->pc = 0x2dd3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17274 << 16));
label_2dd400:
    // 0x2dd400: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2dd400u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2dd404:
    // 0x2dd404: 0x0  nop
    ctx->pc = 0x2dd404u;
    // NOP
label_2dd408:
    // 0x2dd408: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x2dd408u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_2dd40c:
    // 0x2dd40c: 0x8fa70048  lw          $a3, 0x48($sp)
    ctx->pc = 0x2dd40cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2dd410:
    // 0x2dd410: 0x84e3127e  lh          $v1, 0x127E($a3)
    ctx->pc = 0x2dd410u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 4734)));
label_2dd414:
    // 0x2dd414: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
label_2dd418:
    if (ctx->pc == 0x2DD418u) {
        ctx->pc = 0x2DD41Cu;
        goto label_2dd41c;
    }
    ctx->pc = 0x2DD414u;
    {
        const bool branch_taken_0x2dd414 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dd414) {
            ctx->pc = 0x2DD464u;
            goto label_2dd464;
        }
    }
    ctx->pc = 0x2DD41Cu;
label_2dd41c:
    // 0x2dd41c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dd41cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2dd420:
    // 0x2dd420: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2dd420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2dd424:
    // 0x2dd424: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2dd424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_2dd428:
    // 0x2dd428: 0x244503c0  addiu       $a1, $v0, 0x3C0
    ctx->pc = 0x2dd428u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 960));
label_2dd42c:
    // 0x2dd42c: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x2dd42cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2dd430:
    // 0x2dd430: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x2dd430u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
label_2dd434:
    // 0x2dd434: 0x24678de8  addiu       $a3, $v1, -0x7218
    ctx->pc = 0x2dd434u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938088));
label_2dd438:
    // 0x2dd438: 0xc06d02c  jal         func_1B40B0
label_2dd43c:
    if (ctx->pc == 0x2DD43Cu) {
        ctx->pc = 0x2DD440u;
        goto label_2dd440;
    }
    ctx->pc = 0x2DD438u;
    SET_GPR_U32(ctx, 31, 0x2DD440u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x2DD438u, 0x2DD440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD440u;
label_2dd440:
    // 0x2dd440: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2dd444:
    if (ctx->pc == 0x2DD444u) {
        ctx->pc = 0x2DD448u;
        goto label_2dd448;
    }
    ctx->pc = 0x2DD440u;
    {
        const bool branch_taken_0x2dd440 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dd440) {
            ctx->pc = 0x2DD464u;
            goto label_2dd464;
        }
    }
    ctx->pc = 0x2DD448u;
label_2dd448:
    // 0x2dd448: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x2dd448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2dd44c:
    // 0x2dd44c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dd44cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2dd450:
    // 0x2dd450: 0xa464127a  sh          $a0, 0x127A($v1)
    ctx->pc = 0x2dd450u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4730), (uint16_t)GPR_U32(ctx, 4));
label_2dd454:
    // 0x2dd454: 0xc0b6534  jal         func_2D94D0
label_2dd458:
    if (ctx->pc == 0x2DD458u) {
        ctx->pc = 0x2DD45Cu;
        goto label_2dd45c;
    }
    ctx->pc = 0x2DD454u;
    SET_GPR_U32(ctx, 31, 0x2DD45Cu);
    ctx->pc = 0x2D94D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D94D0u, 0x2DD454u, 0x2DD45Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD45Cu;
label_2dd45c:
    // 0x2dd45c: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x2dd45cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2dd460:
    // 0x2dd460: 0xa4c0127e  sh          $zero, 0x127E($a2)
    ctx->pc = 0x2dd460u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 4734), (uint16_t)GPR_U32(ctx, 0));
label_2dd464:
    // 0x2dd464: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dd464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2dd468:
    // 0x2dd468: 0x8467127e  lh          $a3, 0x127E($v1)
    ctx->pc = 0x2dd468u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4734)));
label_2dd46c:
    // 0x2dd46c: 0x10e00019  beqz        $a3, . + 4 + (0x19 << 2)
label_2dd470:
    if (ctx->pc == 0x2DD470u) {
        ctx->pc = 0x2DD474u;
        goto label_2dd474;
    }
    ctx->pc = 0x2DD46Cu;
    {
        const bool branch_taken_0x2dd46c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dd46c) {
            ctx->pc = 0x2DD4D4u;
            goto label_2dd4d4;
        }
    }
    ctx->pc = 0x2DD474u;
label_2dd474:
    // 0x2dd474: 0x3c0243e1  lui         $v0, 0x43E1
    ctx->pc = 0x2dd474u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17377 << 16));
label_2dd478:
    // 0x2dd478: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2dd478u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2dd47c:
    // 0x2dd47c: 0x0  nop
    ctx->pc = 0x2dd47cu;
    // NOP
label_2dd480:
    // 0x2dd480: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x2dd480u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_2dd484:
    // 0x2dd484: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dd484u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2dd488:
    // 0x2dd488: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2dd488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2dd48c:
    // 0x2dd48c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2dd48cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_2dd490:
    // 0x2dd490: 0x244503c0  addiu       $a1, $v0, 0x3C0
    ctx->pc = 0x2dd490u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 960));
label_2dd494:
    // 0x2dd494: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x2dd494u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2dd498:
    // 0x2dd498: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x2dd498u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
label_2dd49c:
    // 0x2dd49c: 0x24678de8  addiu       $a3, $v1, -0x7218
    ctx->pc = 0x2dd49cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938088));
label_2dd4a0:
    // 0x2dd4a0: 0xc06d02c  jal         func_1B40B0
label_2dd4a4:
    if (ctx->pc == 0x2DD4A4u) {
        ctx->pc = 0x2DD4A8u;
        goto label_2dd4a8;
    }
    ctx->pc = 0x2DD4A0u;
    SET_GPR_U32(ctx, 31, 0x2DD4A8u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x2DD4A0u, 0x2DD4A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD4A8u;
label_2dd4a8:
    // 0x2dd4a8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2dd4a8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2dd4ac:
    // 0x2dd4ac: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_2dd4b0:
    if (ctx->pc == 0x2DD4B0u) {
        ctx->pc = 0x2DD4B4u;
        goto label_2dd4b4;
    }
    ctx->pc = 0x2DD4ACu;
    {
        const bool branch_taken_0x2dd4ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dd4ac) {
            ctx->pc = 0x2DD4D4u;
            goto label_2dd4d4;
        }
    }
    ctx->pc = 0x2DD4B4u;
label_2dd4b4:
    // 0x2dd4b4: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2dd4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2dd4b8:
    // 0x2dd4b8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dd4b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2dd4bc:
    // 0x2dd4bc: 0xa483127a  sh          $v1, 0x127A($a0)
    ctx->pc = 0x2dd4bcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4730), (uint16_t)GPR_U32(ctx, 3));
label_2dd4c0:
    // 0x2dd4c0: 0xc0b6534  jal         func_2D94D0
label_2dd4c4:
    if (ctx->pc == 0x2DD4C4u) {
        ctx->pc = 0x2DD4C8u;
        goto label_2dd4c8;
    }
    ctx->pc = 0x2DD4C0u;
    SET_GPR_U32(ctx, 31, 0x2DD4C8u);
    ctx->pc = 0x2D94D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D94D0u, 0x2DD4C0u, 0x2DD4C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD4C8u;
label_2dd4c8:
    // 0x2dd4c8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2dd4c8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2dd4cc:
    // 0x2dd4cc: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dd4ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2dd4d0:
    // 0x2dd4d0: 0xa480127e  sh          $zero, 0x127E($a0)
    ctx->pc = 0x2dd4d0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4734), (uint16_t)GPR_U32(ctx, 0));
label_2dd4d4:
    // 0x2dd4d4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dd4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2dd4d8:
    // 0x2dd4d8: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2dd4d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_2dd4dc:
    // 0x2dd4dc: 0x1060023a  beqz        $v1, . + 4 + (0x23A << 2)
label_2dd4e0:
    if (ctx->pc == 0x2DD4E0u) {
        ctx->pc = 0x2DD4E4u;
        goto label_2dd4e4;
    }
    ctx->pc = 0x2DD4DCu;
    {
        const bool branch_taken_0x2dd4dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dd4dc) {
            ctx->pc = 0x2DDDC8u;
            goto label_2dddc8;
        }
    }
    ctx->pc = 0x2DD4E4u;
label_2dd4e4:
    // 0x2dd4e4: 0x920300db  lbu         $v1, 0xDB($s0)
    ctx->pc = 0x2dd4e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 219)));
label_2dd4e8:
    // 0x2dd4e8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2dd4e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_2dd4ec:
    // 0x2dd4ec: 0x28630002  slti        $v1, $v1, 0x2
    ctx->pc = 0x2dd4ecu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_2dd4f0:
    // 0x2dd4f0: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_2dd4f4:
    if (ctx->pc == 0x2DD4F4u) {
        ctx->pc = 0x2DD4F8u;
        goto label_2dd4f8;
    }
    ctx->pc = 0x2DD4F0u;
    {
        const bool branch_taken_0x2dd4f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dd4f0) {
            ctx->pc = 0x2DD510u;
            goto label_2dd510;
        }
    }
    ctx->pc = 0x2DD4F8u;
label_2dd4f8:
    // 0x2dd4f8: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x2dd4f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2dd4fc:
    // 0x2dd4fc: 0x90a30002  lbu         $v1, 0x2($a1)
    ctx->pc = 0x2dd4fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
label_2dd500:
    // 0x2dd500: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x2dd500u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2dd504:
    // 0x2dd504: 0xa0a40002  sb          $a0, 0x2($a1)
    ctx->pc = 0x2dd504u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 4));
label_2dd508:
    // 0x2dd508: 0x1000022f  b           . + 4 + (0x22F << 2)
label_2dd50c:
    if (ctx->pc == 0x2DD50Cu) {
        ctx->pc = 0x2DD510u;
        goto label_2dd510;
    }
    ctx->pc = 0x2DD508u;
    {
        const bool branch_taken_0x2dd508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dd508) {
            ctx->pc = 0x2DDDC8u;
            goto label_2dddc8;
        }
    }
    ctx->pc = 0x2DD510u;
label_2dd510:
    // 0x2dd510: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x2dd510u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2dd514:
    // 0x2dd514: 0xc4a11288  lwc1        $f1, 0x1288($a1)
    ctx->pc = 0x2dd514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2dd518:
    // 0x2dd518: 0x3c07443b  lui         $a3, 0x443B
    ctx->pc = 0x2dd518u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)17467 << 16));
label_2dd51c:
    // 0x2dd51c: 0x34e68000  ori         $a2, $a3, 0x8000
    ctx->pc = 0x2dd51cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32768);
label_2dd520:
    // 0x2dd520: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x2dd520u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2dd524:
    // 0x2dd524: 0x0  nop
    ctx->pc = 0x2dd524u;
    // NOP
label_2dd528:
    // 0x2dd528: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2dd528u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2dd52c:
    // 0x2dd52c: 0x0  nop
    ctx->pc = 0x2dd52cu;
    // NOP
label_2dd530:
    // 0x2dd530: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_2dd534:
    if (ctx->pc == 0x2DD534u) {
        ctx->pc = 0x2DD538u;
        goto label_2dd538;
    }
    ctx->pc = 0x2DD530u;
    {
        const bool branch_taken_0x2dd530 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2dd530) {
            ctx->pc = 0x2DD550u;
            goto label_2dd550;
        }
    }
    ctx->pc = 0x2DD538u;
label_2dd538:
    // 0x2dd538: 0xc067694  jal         func_19DA50
label_2dd53c:
    if (ctx->pc == 0x2DD53Cu) {
        ctx->pc = 0x2DD540u;
        goto label_2dd540;
    }
    ctx->pc = 0x2DD538u;
    SET_GPR_U32(ctx, 31, 0x2DD540u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2DD538u, 0x2DD540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD540u;
label_2dd540:
    // 0x2dd540: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2dd540u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2dd544:
    // 0x2dd544: 0x30640001  andi        $a0, $v1, 0x1
    ctx->pc = 0x2dd544u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_2dd548:
    // 0x2dd548: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_2dd54c:
    if (ctx->pc == 0x2DD54Cu) {
        ctx->pc = 0x2DD550u;
        goto label_2dd550;
    }
    ctx->pc = 0x2DD548u;
    {
        const bool branch_taken_0x2dd548 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dd548) {
            ctx->pc = 0x2DD568u;
            goto label_2dd568;
        }
    }
    ctx->pc = 0x2DD550u;
label_2dd550:
    // 0x2dd550: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x2dd550u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2dd554:
    // 0x2dd554: 0x90a30002  lbu         $v1, 0x2($a1)
    ctx->pc = 0x2dd554u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
label_2dd558:
    // 0x2dd558: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x2dd558u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2dd55c:
    // 0x2dd55c: 0xa0a40002  sb          $a0, 0x2($a1)
    ctx->pc = 0x2dd55cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 4));
label_2dd560:
    // 0x2dd560: 0x10000219  b           . + 4 + (0x219 << 2)
label_2dd564:
    if (ctx->pc == 0x2DD564u) {
        ctx->pc = 0x2DD568u;
        goto label_2dd568;
    }
    ctx->pc = 0x2DD560u;
    {
        const bool branch_taken_0x2dd560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dd560) {
            ctx->pc = 0x2DDDC8u;
            goto label_2dddc8;
        }
    }
    ctx->pc = 0x2DD568u;
label_2dd568:
    // 0x2dd568: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2dd568u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2dd56c:
    // 0x2dd56c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dd56cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2dd570:
    // 0x2dd570: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x2dd570u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_2dd574:
    // 0x2dd574: 0x10000214  b           . + 4 + (0x214 << 2)
label_2dd578:
    if (ctx->pc == 0x2DD578u) {
        ctx->pc = 0x2DD57Cu;
        goto label_2dd57c;
    }
    ctx->pc = 0x2DD574u;
    {
        const bool branch_taken_0x2dd574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dd574) {
            ctx->pc = 0x2DDDC8u;
            goto label_2dddc8;
        }
    }
    ctx->pc = 0x2DD57Cu;
label_2dd57c:
    // 0x2dd57c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2dd57cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2dd580:
    // 0x2dd580: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dd580u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2dd584:
    // 0x2dd584: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2dd584u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_2dd588:
    // 0x2dd588: 0x2406001b  addiu       $a2, $zero, 0x1B
    ctx->pc = 0x2dd588u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
label_2dd58c:
    // 0x2dd58c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2dd58cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2dd590:
    // 0x2dd590: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2dd590u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_2dd594:
    // 0x2dd594: 0xc0965d0  jal         func_259740
label_2dd598:
    if (ctx->pc == 0x2DD598u) {
        ctx->pc = 0x2DD59Cu;
        goto label_2dd59c;
    }
    ctx->pc = 0x2DD594u;
    SET_GPR_U32(ctx, 31, 0x2DD59Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2DD594u, 0x2DD59Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD59Cu;
label_2dd59c:
    // 0x2dd59c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2dd59cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2dd5a0:
    // 0x2dd5a0: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x2dd5a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2dd5a4:
    // 0x2dd5a4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dd5a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2dd5a8:
    // 0x2dd5a8: 0xa4641278  sh          $a0, 0x1278($v1)
    ctx->pc = 0x2dd5a8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 4));
label_2dd5ac:
    // 0x2dd5ac: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dd5acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2dd5b0:
    // 0x2dd5b0: 0xa460127a  sh          $zero, 0x127A($v1)
    ctx->pc = 0x2dd5b0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4730), (uint16_t)GPR_U32(ctx, 0));
label_2dd5b4:
    // 0x2dd5b4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2dd5b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2dd5b8:
    // 0x2dd5b8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dd5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2dd5bc:
    // 0x2dd5bc: 0xa464127e  sh          $a0, 0x127E($v1)
    ctx->pc = 0x2dd5bcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4734), (uint16_t)GPR_U32(ctx, 4));
label_2dd5c0:
    // 0x2dd5c0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dd5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2dd5c4:
    // 0x2dd5c4: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2dd5c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_2dd5c8:
    // 0x2dd5c8: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x2dd5c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2dd5cc:
    // 0x2dd5cc: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x2dd5ccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
label_2dd5d0:
    // 0x2dd5d0: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x2dd5d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2dd5d4:
    // 0x2dd5d4: 0x84a61278  lh          $a2, 0x1278($a1)
    ctx->pc = 0x2dd5d4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4728)));
label_2dd5d8:
    // 0x2dd5d8: 0x10c00018  beqz        $a2, . + 4 + (0x18 << 2)
label_2dd5dc:
    if (ctx->pc == 0x2DD5DCu) {
        ctx->pc = 0x2DD5E0u;
        goto label_2dd5e0;
    }
    ctx->pc = 0x2DD5D8u;
    {
        const bool branch_taken_0x2dd5d8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dd5d8) {
            ctx->pc = 0x2DD63Cu;
            goto label_2dd63c;
        }
    }
    ctx->pc = 0x2DD5E0u;
label_2dd5e0:
    // 0x2dd5e0: 0x8fa70048  lw          $a3, 0x48($sp)
    ctx->pc = 0x2dd5e0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2dd5e4:
    // 0x2dd5e4: 0x84e81278  lh          $t0, 0x1278($a3)
    ctx->pc = 0x2dd5e4u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 4728)));
label_2dd5e8:
    // 0x2dd5e8: 0x2502ffff  addiu       $v0, $t0, -0x1
    ctx->pc = 0x2dd5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
label_2dd5ec:
    // 0x2dd5ec: 0xa4e21278  sh          $v0, 0x1278($a3)
    ctx->pc = 0x2dd5ecu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 4728), (uint16_t)GPR_U32(ctx, 2));
label_2dd5f0:
    // 0x2dd5f0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dd5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2dd5f4:
    // 0x2dd5f4: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x2dd5f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
label_2dd5f8:
    // 0x2dd5f8: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2dd5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_2dd5fc:
    // 0x2dd5fc: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x2dd5fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
label_2dd600:
    // 0x2dd600: 0xc05ccfc  jal         func_1733F0
label_2dd604:
    if (ctx->pc == 0x2DD604u) {
        ctx->pc = 0x2DD608u;
        goto label_2dd608;
    }
    ctx->pc = 0x2DD600u;
    SET_GPR_U32(ctx, 31, 0x2DD608u);
    ctx->pc = 0x1733F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1733F0u, 0x2DD600u, 0x2DD608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD608u;
label_2dd608:
    // 0x2dd608: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2dd608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2dd60c:
    // 0x2dd60c: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x2dd60cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
label_2dd610:
    // 0x2dd610: 0x3c023e49  lui         $v0, 0x3E49
    ctx->pc = 0x2dd610u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15945 << 16));
label_2dd614:
    // 0x2dd614: 0x34440fdb  ori         $a0, $v0, 0xFDB
    ctx->pc = 0x2dd614u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_2dd618:
    // 0x2dd618: 0x44847000  mtc1        $a0, $f14
    ctx->pc = 0x2dd618u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_2dd61c:
    // 0x2dd61c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dd61cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2dd620:
    // 0x2dd620: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2dd620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2dd624:
    // 0x2dd624: 0xc48c1290  lwc1        $f12, 0x1290($a0)
    ctx->pc = 0x2dd624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2dd628:
    // 0x2dd628: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x2dd628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_2dd62c:
    // 0x2dd62c: 0xc058f50  jal         func_163D40
label_2dd630:
    if (ctx->pc == 0x2DD630u) {
        ctx->pc = 0x2DD634u;
        goto label_2dd634;
    }
    ctx->pc = 0x2DD62Cu;
    SET_GPR_U32(ctx, 31, 0x2DD634u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x2DD62Cu, 0x2DD634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD634u;
label_2dd634:
    // 0x2dd634: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dd634u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2dd638:
    // 0x2dd638: 0xe48000d4  swc1        $f0, 0xD4($a0)
    ctx->pc = 0x2dd638u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 212), bits); }
label_2dd63c:
    // 0x2dd63c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dd63cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2dd640:
    // 0x2dd640: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2dd640u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2dd644:
    // 0x2dd644: 0xc096b40  jal         func_25AD00
label_2dd648:
    if (ctx->pc == 0x2DD648u) {
        ctx->pc = 0x2DD64Cu;
        goto label_2dd64c;
    }
    ctx->pc = 0x2DD644u;
    SET_GPR_U32(ctx, 31, 0x2DD64Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2DD644u, 0x2DD64Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD64Cu;
label_2dd64c:
    // 0x2dd64c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2dd64cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2dd650:
    // 0x2dd650: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dd650u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2dd654:
    // 0x2dd654: 0xc05cd10  jal         func_173440
label_2dd658:
    if (ctx->pc == 0x2DD658u) {
        ctx->pc = 0x2DD65Cu;
        goto label_2dd65c;
    }
    ctx->pc = 0x2DD654u;
    SET_GPR_U32(ctx, 31, 0x2DD65Cu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x2DD654u, 0x2DD65Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD65Cu;
label_2dd65c:
    // 0x2dd65c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2dd65cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2dd660:
    // 0x2dd660: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dd660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2dd664:
    // 0x2dd664: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2dd664u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2dd668:
    // 0x2dd668: 0xc05cec4  jal         func_173B10
label_2dd66c:
    if (ctx->pc == 0x2DD66Cu) {
        ctx->pc = 0x2DD670u;
        goto label_2dd670;
    }
    ctx->pc = 0x2DD668u;
    SET_GPR_U32(ctx, 31, 0x2DD670u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x2DD668u, 0x2DD670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD670u;
label_2dd670:
    // 0x2dd670: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2dd670u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2dd674:
    // 0x2dd674: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dd674u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2dd678:
    // 0x2dd678: 0xc0974dc  jal         func_25D370
label_2dd67c:
    if (ctx->pc == 0x2DD67Cu) {
        ctx->pc = 0x2DD680u;
        goto label_2dd680;
    }
    ctx->pc = 0x2DD678u;
    SET_GPR_U32(ctx, 31, 0x2DD680u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2DD678u, 0x2DD680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD680u;
label_2dd680:
    // 0x2dd680: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2dd680u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2dd684:
    // 0x2dd684: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dd684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2dd688:
    // 0x2dd688: 0x8463127a  lh          $v1, 0x127A($v1)
    ctx->pc = 0x2dd688u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4730)));
label_2dd68c:
    // 0x2dd68c: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_2dd690:
    if (ctx->pc == 0x2DD690u) {
        ctx->pc = 0x2DD694u;
        goto label_2dd694;
    }
    ctx->pc = 0x2DD68Cu;
    {
        const bool branch_taken_0x2dd68c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dd68c) {
            ctx->pc = 0x2DD6BCu;
            goto label_2dd6bc;
        }
    }
    ctx->pc = 0x2DD694u;
label_2dd694:
    // 0x2dd694: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dd694u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2dd698:
    // 0x2dd698: 0x8485127a  lh          $a1, 0x127A($a0)
    ctx->pc = 0x2dd698u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4730)));
label_2dd69c:
    // 0x2dd69c: 0x24a6ffff  addiu       $a2, $a1, -0x1
    ctx->pc = 0x2dd69cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_2dd6a0:
    // 0x2dd6a0: 0xa486127a  sh          $a2, 0x127A($a0)
    ctx->pc = 0x2dd6a0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4730), (uint16_t)GPR_U32(ctx, 6));
label_2dd6a4:
    // 0x2dd6a4: 0x8fa70048  lw          $a3, 0x48($sp)
    ctx->pc = 0x2dd6a4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2dd6a8:
    // 0x2dd6a8: 0x94e809e0  lhu         $t0, 0x9E0($a3)
    ctx->pc = 0x2dd6a8u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 2528)));
label_2dd6ac:
    // 0x2dd6ac: 0x35030100  ori         $v1, $t0, 0x100
    ctx->pc = 0x2dd6acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)256);
label_2dd6b0:
    // 0x2dd6b0: 0xa4e309e0  sh          $v1, 0x9E0($a3)
    ctx->pc = 0x2dd6b0u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 2528), (uint16_t)GPR_U32(ctx, 3));
label_2dd6b4:
    // 0x2dd6b4: 0x10000042  b           . + 4 + (0x42 << 2)
label_2dd6b8:
    if (ctx->pc == 0x2DD6B8u) {
        ctx->pc = 0x2DD6BCu;
        goto label_2dd6bc;
    }
    ctx->pc = 0x2DD6B4u;
    {
        const bool branch_taken_0x2dd6b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dd6b4) {
            ctx->pc = 0x2DD7C0u;
            goto label_2dd7c0;
        }
    }
    ctx->pc = 0x2DD6BCu;
label_2dd6bc:
    // 0x2dd6bc: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dd6bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2dd6c0:
    // 0x2dd6c0: 0x948309e0  lhu         $v1, 0x9E0($a0)
    ctx->pc = 0x2dd6c0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2528)));
label_2dd6c4:
    // 0x2dd6c4: 0x3063feff  andi        $v1, $v1, 0xFEFF
    ctx->pc = 0x2dd6c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65279);
label_2dd6c8:
    // 0x2dd6c8: 0xa48309e0  sh          $v1, 0x9E0($a0)
    ctx->pc = 0x2dd6c8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2528), (uint16_t)GPR_U32(ctx, 3));
label_2dd6cc:
    // 0x2dd6cc: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dd6ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2dd6d0:
    // 0x2dd6d0: 0x908309df  lbu         $v1, 0x9DF($a0)
    ctx->pc = 0x2dd6d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2527)));
label_2dd6d4:
    // 0x2dd6d4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2dd6d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_2dd6d8:
    // 0x2dd6d8: 0x30830080  andi        $v1, $a0, 0x80
    ctx->pc = 0x2dd6d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)128);
label_2dd6dc:
    // 0x2dd6dc: 0x10600038  beqz        $v1, . + 4 + (0x38 << 2)
label_2dd6e0:
    if (ctx->pc == 0x2DD6E0u) {
        ctx->pc = 0x2DD6E4u;
        goto label_2dd6e4;
    }
    ctx->pc = 0x2DD6DCu;
    {
        const bool branch_taken_0x2dd6dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dd6dc) {
            ctx->pc = 0x2DD7C0u;
            goto label_2dd7c0;
        }
    }
    ctx->pc = 0x2DD6E4u;
label_2dd6e4:
    // 0x2dd6e4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2dd6e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2dd6e8:
    // 0x2dd6e8: 0xc0675a4  jal         func_19D690
label_2dd6ec:
    if (ctx->pc == 0x2DD6ECu) {
        ctx->pc = 0x2DD6F0u;
        goto label_2dd6f0;
    }
    ctx->pc = 0x2DD6E8u;
    SET_GPR_U32(ctx, 31, 0x2DD6F0u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2DD6E8u, 0x2DD6F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD6F0u;
label_2dd6f0:
    // 0x2dd6f0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dd6f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2dd6f4:
    // 0x2dd6f4: 0x8483127e  lh          $v1, 0x127E($a0)
    ctx->pc = 0x2dd6f4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4734)));
label_2dd6f8:
    // 0x2dd6f8: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
label_2dd6fc:
    if (ctx->pc == 0x2DD6FCu) {
        ctx->pc = 0x2DD700u;
        goto label_2dd700;
    }
    ctx->pc = 0x2DD6F8u;
    {
        const bool branch_taken_0x2dd6f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dd6f8) {
            ctx->pc = 0x2DD758u;
            goto label_2dd758;
        }
    }
    ctx->pc = 0x2DD700u;
label_2dd700:
    // 0x2dd700: 0x3c03437a  lui         $v1, 0x437A
    ctx->pc = 0x2dd700u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17274 << 16));
label_2dd704:
    // 0x2dd704: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2dd704u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2dd708:
    // 0x2dd708: 0x0  nop
    ctx->pc = 0x2dd708u;
    // NOP
label_2dd70c:
    // 0x2dd70c: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x2dd70cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_2dd710:
    // 0x2dd710: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dd710u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2dd714:
    // 0x2dd714: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x2dd714u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2dd718:
    // 0x2dd718: 0x8ca30130  lw          $v1, 0x130($a1)
    ctx->pc = 0x2dd718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
label_2dd71c:
    // 0x2dd71c: 0x246503c0  addiu       $a1, $v1, 0x3C0
    ctx->pc = 0x2dd71cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 960));
label_2dd720:
    // 0x2dd720: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x2dd720u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2dd724:
    // 0x2dd724: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x2dd724u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
label_2dd728:
    // 0x2dd728: 0x24678df4  addiu       $a3, $v1, -0x720C
    ctx->pc = 0x2dd728u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938100));
label_2dd72c:
    // 0x2dd72c: 0xc06d02c  jal         func_1B40B0
label_2dd730:
    if (ctx->pc == 0x2DD730u) {
        ctx->pc = 0x2DD734u;
        goto label_2dd734;
    }
    ctx->pc = 0x2DD72Cu;
    SET_GPR_U32(ctx, 31, 0x2DD734u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x2DD72Cu, 0x2DD734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD734u;
label_2dd734:
    // 0x2dd734: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2dd738:
    if (ctx->pc == 0x2DD738u) {
        ctx->pc = 0x2DD73Cu;
        goto label_2dd73c;
    }
    ctx->pc = 0x2DD734u;
    {
        const bool branch_taken_0x2dd734 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dd734) {
            ctx->pc = 0x2DD758u;
            goto label_2dd758;
        }
    }
    ctx->pc = 0x2DD73Cu;
label_2dd73c:
    // 0x2dd73c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2dd73cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2dd740:
    // 0x2dd740: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2dd740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2dd744:
    // 0x2dd744: 0xa443127a  sh          $v1, 0x127A($v0)
    ctx->pc = 0x2dd744u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 3));
label_2dd748:
    // 0x2dd748: 0xc0b6534  jal         func_2D94D0
label_2dd74c:
    if (ctx->pc == 0x2DD74Cu) {
        ctx->pc = 0x2DD750u;
        goto label_2dd750;
    }
    ctx->pc = 0x2DD748u;
    SET_GPR_U32(ctx, 31, 0x2DD750u);
    ctx->pc = 0x2D94D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D94D0u, 0x2DD748u, 0x2DD750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD750u;
label_2dd750:
    // 0x2dd750: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dd750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2dd754:
    // 0x2dd754: 0xa460127e  sh          $zero, 0x127E($v1)
    ctx->pc = 0x2dd754u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4734), (uint16_t)GPR_U32(ctx, 0));
label_2dd758:
    // 0x2dd758: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dd758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2dd75c:
    // 0x2dd75c: 0x8463127e  lh          $v1, 0x127E($v1)
    ctx->pc = 0x2dd75cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4734)));
label_2dd760:
    // 0x2dd760: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
label_2dd764:
    if (ctx->pc == 0x2DD764u) {
        ctx->pc = 0x2DD768u;
        goto label_2dd768;
    }
    ctx->pc = 0x2DD760u;
    {
        const bool branch_taken_0x2dd760 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dd760) {
            ctx->pc = 0x2DD7C0u;
            goto label_2dd7c0;
        }
    }
    ctx->pc = 0x2DD768u;
label_2dd768:
    // 0x2dd768: 0x3c0243e1  lui         $v0, 0x43E1
    ctx->pc = 0x2dd768u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17377 << 16));
label_2dd76c:
    // 0x2dd76c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2dd76cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2dd770:
    // 0x2dd770: 0x0  nop
    ctx->pc = 0x2dd770u;
    // NOP
label_2dd774:
    // 0x2dd774: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x2dd774u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_2dd778:
    // 0x2dd778: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dd778u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2dd77c:
    // 0x2dd77c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2dd77cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2dd780:
    // 0x2dd780: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2dd780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_2dd784:
    // 0x2dd784: 0x244503c0  addiu       $a1, $v0, 0x3C0
    ctx->pc = 0x2dd784u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 960));
label_2dd788:
    // 0x2dd788: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x2dd788u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2dd78c:
    // 0x2dd78c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2dd78cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_2dd790:
    // 0x2dd790: 0x24478df4  addiu       $a3, $v0, -0x720C
    ctx->pc = 0x2dd790u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938100));
label_2dd794:
    // 0x2dd794: 0xc06d02c  jal         func_1B40B0
label_2dd798:
    if (ctx->pc == 0x2DD798u) {
        ctx->pc = 0x2DD79Cu;
        goto label_2dd79c;
    }
    ctx->pc = 0x2DD794u;
    SET_GPR_U32(ctx, 31, 0x2DD79Cu);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x2DD794u, 0x2DD79Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD79Cu;
label_2dd79c:
    // 0x2dd79c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2dd7a0:
    if (ctx->pc == 0x2DD7A0u) {
        ctx->pc = 0x2DD7A4u;
        goto label_2dd7a4;
    }
    ctx->pc = 0x2DD79Cu;
    {
        const bool branch_taken_0x2dd79c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dd79c) {
            ctx->pc = 0x2DD7C0u;
            goto label_2dd7c0;
        }
    }
    ctx->pc = 0x2DD7A4u;
label_2dd7a4:
    // 0x2dd7a4: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2dd7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2dd7a8:
    // 0x2dd7a8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2dd7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2dd7ac:
    // 0x2dd7ac: 0xa443127a  sh          $v1, 0x127A($v0)
    ctx->pc = 0x2dd7acu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 3));
label_2dd7b0:
    // 0x2dd7b0: 0xc0b6534  jal         func_2D94D0
label_2dd7b4:
    if (ctx->pc == 0x2DD7B4u) {
        ctx->pc = 0x2DD7B8u;
        goto label_2dd7b8;
    }
    ctx->pc = 0x2DD7B0u;
    SET_GPR_U32(ctx, 31, 0x2DD7B8u);
    ctx->pc = 0x2D94D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D94D0u, 0x2DD7B0u, 0x2DD7B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD7B8u;
label_2dd7b8:
    // 0x2dd7b8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dd7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2dd7bc:
    // 0x2dd7bc: 0xa460127e  sh          $zero, 0x127E($v1)
    ctx->pc = 0x2dd7bcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4734), (uint16_t)GPR_U32(ctx, 0));
label_2dd7c0:
    // 0x2dd7c0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dd7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2dd7c4:
    // 0x2dd7c4: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2dd7c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_2dd7c8:
    // 0x2dd7c8: 0x1060017f  beqz        $v1, . + 4 + (0x17F << 2)
label_2dd7cc:
    if (ctx->pc == 0x2DD7CCu) {
        ctx->pc = 0x2DD7D0u;
        goto label_2dd7d0;
    }
    ctx->pc = 0x2DD7C8u;
    {
        const bool branch_taken_0x2dd7c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dd7c8) {
            ctx->pc = 0x2DDDC8u;
            goto label_2dddc8;
        }
    }
    ctx->pc = 0x2DD7D0u;
label_2dd7d0:
    // 0x2dd7d0: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x2dd7d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2dd7d4:
    // 0x2dd7d4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dd7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2dd7d8:
    // 0x2dd7d8: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x2dd7d8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
label_2dd7dc:
    // 0x2dd7dc: 0x920300db  lbu         $v1, 0xDB($s0)
    ctx->pc = 0x2dd7dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 219)));
label_2dd7e0:
    // 0x2dd7e0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2dd7e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_2dd7e4:
    // 0x2dd7e4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2dd7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2dd7e8:
    // 0x2dd7e8: 0x10830032  beq         $a0, $v1, . + 4 + (0x32 << 2)
label_2dd7ec:
    if (ctx->pc == 0x2DD7ECu) {
        ctx->pc = 0x2DD7F0u;
        goto label_2dd7f0;
    }
    ctx->pc = 0x2DD7E8u;
    {
        const bool branch_taken_0x2dd7e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2dd7e8) {
            ctx->pc = 0x2DD8B4u;
            goto label_2dd8b4;
        }
    }
    ctx->pc = 0x2DD7F0u;
label_2dd7f0:
    // 0x2dd7f0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2dd7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2dd7f4:
    // 0x2dd7f4: 0x1083002f  beq         $a0, $v1, . + 4 + (0x2F << 2)
label_2dd7f8:
    if (ctx->pc == 0x2DD7F8u) {
        ctx->pc = 0x2DD7FCu;
        goto label_2dd7fc;
    }
    ctx->pc = 0x2DD7F4u;
    {
        const bool branch_taken_0x2dd7f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2dd7f4) {
            ctx->pc = 0x2DD8B4u;
            goto label_2dd8b4;
        }
    }
    ctx->pc = 0x2DD7FCu;
label_2dd7fc:
    // 0x2dd7fc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2dd7fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2dd800:
    // 0x2dd800: 0x10830017  beq         $a0, $v1, . + 4 + (0x17 << 2)
label_2dd804:
    if (ctx->pc == 0x2DD804u) {
        ctx->pc = 0x2DD808u;
        goto label_2dd808;
    }
    ctx->pc = 0x2DD800u;
    {
        const bool branch_taken_0x2dd800 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2dd800) {
            ctx->pc = 0x2DD860u;
            goto label_2dd860;
        }
    }
    ctx->pc = 0x2DD808u;
label_2dd808:
    // 0x2dd808: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2dd808u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2dd80c:
    // 0x2dd80c: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
label_2dd810:
    if (ctx->pc == 0x2DD810u) {
        ctx->pc = 0x2DD814u;
        goto label_2dd814;
    }
    ctx->pc = 0x2DD80Cu;
    {
        const bool branch_taken_0x2dd80c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2dd80c) {
            ctx->pc = 0x2DD824u;
            goto label_2dd824;
        }
    }
    ctx->pc = 0x2DD814u;
label_2dd814:
    // 0x2dd814: 0x1080016c  beqz        $a0, . + 4 + (0x16C << 2)
label_2dd818:
    if (ctx->pc == 0x2DD818u) {
        ctx->pc = 0x2DD81Cu;
        goto label_2dd81c;
    }
    ctx->pc = 0x2DD814u;
    {
        const bool branch_taken_0x2dd814 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dd814) {
            ctx->pc = 0x2DDDC8u;
            goto label_2dddc8;
        }
    }
    ctx->pc = 0x2DD81Cu;
label_2dd81c:
    // 0x2dd81c: 0x10000025  b           . + 4 + (0x25 << 2)
label_2dd820:
    if (ctx->pc == 0x2DD820u) {
        ctx->pc = 0x2DD824u;
        goto label_2dd824;
    }
    ctx->pc = 0x2DD81Cu;
    {
        const bool branch_taken_0x2dd81c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dd81c) {
            ctx->pc = 0x2DD8B4u;
            goto label_2dd8b4;
        }
    }
    ctx->pc = 0x2DD824u;
label_2dd824:
    // 0x2dd824: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dd824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2dd828:
    // 0x2dd828: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x2dd828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2dd82c:
    // 0x2dd82c: 0x3c03443b  lui         $v1, 0x443B
    ctx->pc = 0x2dd82cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17467 << 16));
label_2dd830:
    // 0x2dd830: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x2dd830u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
label_2dd834:
    // 0x2dd834: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2dd834u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2dd838:
    // 0x2dd838: 0x0  nop
    ctx->pc = 0x2dd838u;
    // NOP
label_2dd83c:
    // 0x2dd83c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2dd83cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2dd840:
    // 0x2dd840: 0x0  nop
    ctx->pc = 0x2dd840u;
    // NOP
label_2dd844:
    // 0x2dd844: 0x45000160  bc1f        . + 4 + (0x160 << 2)
label_2dd848:
    if (ctx->pc == 0x2DD848u) {
        ctx->pc = 0x2DD84Cu;
        goto label_2dd84c;
    }
    ctx->pc = 0x2DD844u;
    {
        const bool branch_taken_0x2dd844 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2dd844) {
            ctx->pc = 0x2DDDC8u;
            goto label_2dddc8;
        }
    }
    ctx->pc = 0x2DD84Cu;
label_2dd84c:
    // 0x2dd84c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2dd84cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2dd850:
    // 0x2dd850: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dd850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2dd854:
    // 0x2dd854: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x2dd854u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
label_2dd858:
    // 0x2dd858: 0x1000015b  b           . + 4 + (0x15B << 2)
label_2dd85c:
    if (ctx->pc == 0x2DD85Cu) {
        ctx->pc = 0x2DD860u;
        goto label_2dd860;
    }
    ctx->pc = 0x2DD858u;
    {
        const bool branch_taken_0x2dd858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dd858) {
            ctx->pc = 0x2DDDC8u;
            goto label_2dddc8;
        }
    }
    ctx->pc = 0x2DD860u;
label_2dd860:
    // 0x2dd860: 0xc067694  jal         func_19DA50
label_2dd864:
    if (ctx->pc == 0x2DD864u) {
        ctx->pc = 0x2DD868u;
        goto label_2dd868;
    }
    ctx->pc = 0x2DD860u;
    SET_GPR_U32(ctx, 31, 0x2DD868u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2DD860u, 0x2DD868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD868u;
label_2dd868:
    // 0x2dd868: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2dd868u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2dd86c:
    // 0x2dd86c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2dd86cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_2dd870:
    // 0x2dd870: 0x10600155  beqz        $v1, . + 4 + (0x155 << 2)
label_2dd874:
    if (ctx->pc == 0x2DD874u) {
        ctx->pc = 0x2DD878u;
        goto label_2dd878;
    }
    ctx->pc = 0x2DD870u;
    {
        const bool branch_taken_0x2dd870 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dd870) {
            ctx->pc = 0x2DDDC8u;
            goto label_2dddc8;
        }
    }
    ctx->pc = 0x2DD878u;
label_2dd878:
    // 0x2dd878: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2dd878u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2dd87c:
    // 0x2dd87c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dd87cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2dd880:
    // 0x2dd880: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2dd880u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_2dd884:
    // 0x2dd884: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x2dd884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2dd888:
    // 0x2dd888: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dd888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2dd88c:
    // 0x2dd88c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2dd88cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_2dd890:
    // 0x2dd890: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dd890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2dd894:
    // 0x2dd894: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2dd894u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_2dd898:
    // 0x2dd898: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dd898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2dd89c:
    // 0x2dd89c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2dd89cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_2dd8a0:
    // 0x2dd8a0: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2dd8a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2dd8a4:
    // 0x2dd8a4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dd8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2dd8a8:
    // 0x2dd8a8: 0xac710004  sw          $s1, 0x4($v1)
    ctx->pc = 0x2dd8a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 17));
label_2dd8ac:
    // 0x2dd8ac: 0x10000146  b           . + 4 + (0x146 << 2)
label_2dd8b0:
    if (ctx->pc == 0x2DD8B0u) {
        ctx->pc = 0x2DD8B4u;
        goto label_2dd8b4;
    }
    ctx->pc = 0x2DD8ACu;
    {
        const bool branch_taken_0x2dd8ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dd8ac) {
            ctx->pc = 0x2DDDC8u;
            goto label_2dddc8;
        }
    }
    ctx->pc = 0x2DD8B4u;
label_2dd8b4:
    // 0x2dd8b4: 0x24100004  addiu       $s0, $zero, 0x4
    ctx->pc = 0x2dd8b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2dd8b8:
    // 0x2dd8b8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dd8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2dd8bc:
    // 0x2dd8bc: 0xa0700002  sb          $s0, 0x2($v1)
    ctx->pc = 0x2dd8bcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 16));
label_2dd8c0:
    // 0x2dd8c0: 0x10000141  b           . + 4 + (0x141 << 2)
label_2dd8c4:
    if (ctx->pc == 0x2DD8C4u) {
        ctx->pc = 0x2DD8C8u;
        goto label_2dd8c8;
    }
    ctx->pc = 0x2DD8C0u;
    {
        const bool branch_taken_0x2dd8c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dd8c0) {
            ctx->pc = 0x2DDDC8u;
            goto label_2dddc8;
        }
    }
    ctx->pc = 0x2DD8C8u;
label_2dd8c8:
    // 0x2dd8c8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dd8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2dd8cc:
    // 0x2dd8cc: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dd8ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2dd8d0:
    // 0x2dd8d0: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x2dd8d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
label_2dd8d4:
    // 0x2dd8d4: 0x2406001d  addiu       $a2, $zero, 0x1D
    ctx->pc = 0x2dd8d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
label_2dd8d8:
    // 0x2dd8d8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2dd8d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2dd8dc:
    // 0x2dd8dc: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2dd8dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_2dd8e0:
    // 0x2dd8e0: 0xc0965d0  jal         func_259740
label_2dd8e4:
    if (ctx->pc == 0x2DD8E4u) {
        ctx->pc = 0x2DD8E8u;
        goto label_2dd8e8;
    }
    ctx->pc = 0x2DD8E0u;
    SET_GPR_U32(ctx, 31, 0x2DD8E8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2DD8E0u, 0x2DD8E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD8E8u;
label_2dd8e8:
    // 0x2dd8e8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2dd8e8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2dd8ec:
    // 0x2dd8ec: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x2dd8ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2dd8f0:
    // 0x2dd8f0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2dd8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2dd8f4:
    // 0x2dd8f4: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x2dd8f4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
label_2dd8f8:
    // 0x2dd8f8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dd8f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2dd8fc:
    // 0x2dd8fc: 0xa480127a  sh          $zero, 0x127A($a0)
    ctx->pc = 0x2dd8fcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4730), (uint16_t)GPR_U32(ctx, 0));
label_2dd900:
    // 0x2dd900: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2dd900u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2dd904:
    // 0x2dd904: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x2dd904u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2dd908:
    // 0x2dd908: 0xa4c5127e  sh          $a1, 0x127E($a2)
    ctx->pc = 0x2dd908u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 4734), (uint16_t)GPR_U32(ctx, 5));
label_2dd90c:
    // 0x2dd90c: 0x8fa70048  lw          $a3, 0x48($sp)
    ctx->pc = 0x2dd90cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2dd910:
    // 0x2dd910: 0x90e80002  lbu         $t0, 0x2($a3)
    ctx->pc = 0x2dd910u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2)));
label_2dd914:
    // 0x2dd914: 0x25020001  addiu       $v0, $t0, 0x1
    ctx->pc = 0x2dd914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_2dd918:
    // 0x2dd918: 0xa0e20002  sb          $v0, 0x2($a3)
    ctx->pc = 0x2dd918u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2), (uint8_t)GPR_U32(ctx, 2));
label_2dd91c:
    // 0x2dd91c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dd91cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2dd920:
    // 0x2dd920: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x2dd920u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
label_2dd924:
    // 0x2dd924: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_2dd928:
    if (ctx->pc == 0x2DD928u) {
        ctx->pc = 0x2DD92Cu;
        goto label_2dd92c;
    }
    ctx->pc = 0x2DD924u;
    {
        const bool branch_taken_0x2dd924 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dd924) {
            ctx->pc = 0x2DD988u;
            goto label_2dd988;
        }
    }
    ctx->pc = 0x2DD92Cu;
label_2dd92c:
    // 0x2dd92c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dd92cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2dd930:
    // 0x2dd930: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x2dd930u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
label_2dd934:
    // 0x2dd934: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x2dd934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_2dd938:
    // 0x2dd938: 0xa4821278  sh          $v0, 0x1278($a0)
    ctx->pc = 0x2dd938u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 2));
label_2dd93c:
    // 0x2dd93c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dd93cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2dd940:
    // 0x2dd940: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x2dd940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
label_2dd944:
    // 0x2dd944: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2dd944u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_2dd948:
    // 0x2dd948: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x2dd948u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
label_2dd94c:
    // 0x2dd94c: 0xc05ccfc  jal         func_1733F0
label_2dd950:
    if (ctx->pc == 0x2DD950u) {
        ctx->pc = 0x2DD954u;
        goto label_2dd954;
    }
    ctx->pc = 0x2DD94Cu;
    SET_GPR_U32(ctx, 31, 0x2DD954u);
    ctx->pc = 0x1733F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1733F0u, 0x2DD94Cu, 0x2DD954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD954u;
label_2dd954:
    // 0x2dd954: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2dd954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2dd958:
    // 0x2dd958: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x2dd958u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
label_2dd95c:
    // 0x2dd95c: 0x3c023e49  lui         $v0, 0x3E49
    ctx->pc = 0x2dd95cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15945 << 16));
label_2dd960:
    // 0x2dd960: 0x34440fdb  ori         $a0, $v0, 0xFDB
    ctx->pc = 0x2dd960u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_2dd964:
    // 0x2dd964: 0x44847000  mtc1        $a0, $f14
    ctx->pc = 0x2dd964u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_2dd968:
    // 0x2dd968: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dd968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2dd96c:
    // 0x2dd96c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2dd96cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2dd970:
    // 0x2dd970: 0xc46c1290  lwc1        $f12, 0x1290($v1)
    ctx->pc = 0x2dd970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2dd974:
    // 0x2dd974: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x2dd974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_2dd978:
    // 0x2dd978: 0xc058f50  jal         func_163D40
label_2dd97c:
    if (ctx->pc == 0x2DD97Cu) {
        ctx->pc = 0x2DD980u;
        goto label_2dd980;
    }
    ctx->pc = 0x2DD978u;
    SET_GPR_U32(ctx, 31, 0x2DD980u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x2DD978u, 0x2DD980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD980u;
label_2dd980:
    // 0x2dd980: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dd980u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2dd984:
    // 0x2dd984: 0xe48000d4  swc1        $f0, 0xD4($a0)
    ctx->pc = 0x2dd984u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 212), bits); }
label_2dd988:
    // 0x2dd988: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2dd988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2dd98c:
    // 0x2dd98c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2dd98cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2dd990:
    // 0x2dd990: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2dd990u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2dd994:
    // 0x2dd994: 0xc096b40  jal         func_25AD00
label_2dd998:
    if (ctx->pc == 0x2DD998u) {
        ctx->pc = 0x2DD99Cu;
        goto label_2dd99c;
    }
    ctx->pc = 0x2DD994u;
    SET_GPR_U32(ctx, 31, 0x2DD99Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2DD994u, 0x2DD99Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD99Cu;
label_2dd99c:
    // 0x2dd99c: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x2dd99cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2dd9a0:
    // 0x2dd9a0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dd9a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2dd9a4:
    // 0x2dd9a4: 0xc05cd10  jal         func_173440
label_2dd9a8:
    if (ctx->pc == 0x2DD9A8u) {
        ctx->pc = 0x2DD9ACu;
        goto label_2dd9ac;
    }
    ctx->pc = 0x2DD9A4u;
    SET_GPR_U32(ctx, 31, 0x2DD9ACu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x2DD9A4u, 0x2DD9ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD9ACu;
label_2dd9ac:
    // 0x2dd9ac: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dd9acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2dd9b0:
    // 0x2dd9b0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2dd9b0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2dd9b4:
    // 0x2dd9b4: 0xc05cec4  jal         func_173B10
label_2dd9b8:
    if (ctx->pc == 0x2DD9B8u) {
        ctx->pc = 0x2DD9BCu;
        goto label_2dd9bc;
    }
    ctx->pc = 0x2DD9B4u;
    SET_GPR_U32(ctx, 31, 0x2DD9BCu);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x2DD9B4u, 0x2DD9BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD9BCu;
label_2dd9bc:
    // 0x2dd9bc: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dd9bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2dd9c0:
    // 0x2dd9c0: 0xc0974dc  jal         func_25D370
label_2dd9c4:
    if (ctx->pc == 0x2DD9C4u) {
        ctx->pc = 0x2DD9C8u;
        goto label_2dd9c8;
    }
    ctx->pc = 0x2DD9C0u;
    SET_GPR_U32(ctx, 31, 0x2DD9C8u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2DD9C0u, 0x2DD9C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD9C8u;
label_2dd9c8:
    // 0x2dd9c8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dd9c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2dd9cc:
    // 0x2dd9cc: 0x8483127a  lh          $v1, 0x127A($a0)
    ctx->pc = 0x2dd9ccu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4730)));
label_2dd9d0:
    // 0x2dd9d0: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_2dd9d4:
    if (ctx->pc == 0x2DD9D4u) {
        ctx->pc = 0x2DD9D8u;
        goto label_2dd9d8;
    }
    ctx->pc = 0x2DD9D0u;
    {
        const bool branch_taken_0x2dd9d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dd9d0) {
            ctx->pc = 0x2DDA00u;
            goto label_2dda00;
        }
    }
    ctx->pc = 0x2DD9D8u;
label_2dd9d8:
    // 0x2dd9d8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dd9d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2dd9dc:
    // 0x2dd9dc: 0x8483127a  lh          $v1, 0x127A($a0)
    ctx->pc = 0x2dd9dcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4730)));
label_2dd9e0:
    // 0x2dd9e0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2dd9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_2dd9e4:
    // 0x2dd9e4: 0xa483127a  sh          $v1, 0x127A($a0)
    ctx->pc = 0x2dd9e4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4730), (uint16_t)GPR_U32(ctx, 3));
label_2dd9e8:
    // 0x2dd9e8: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x2dd9e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2dd9ec:
    // 0x2dd9ec: 0x94a409e0  lhu         $a0, 0x9E0($a1)
    ctx->pc = 0x2dd9ecu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2528)));
label_2dd9f0:
    // 0x2dd9f0: 0x34830100  ori         $v1, $a0, 0x100
    ctx->pc = 0x2dd9f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)256);
label_2dd9f4:
    // 0x2dd9f4: 0xa4a309e0  sh          $v1, 0x9E0($a1)
    ctx->pc = 0x2dd9f4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2528), (uint16_t)GPR_U32(ctx, 3));
label_2dd9f8:
    // 0x2dd9f8: 0x10000047  b           . + 4 + (0x47 << 2)
label_2dd9fc:
    if (ctx->pc == 0x2DD9FCu) {
        ctx->pc = 0x2DDA00u;
        goto label_2dda00;
    }
    ctx->pc = 0x2DD9F8u;
    {
        const bool branch_taken_0x2dd9f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dd9f8) {
            ctx->pc = 0x2DDB18u;
            goto label_2ddb18;
        }
    }
    ctx->pc = 0x2DDA00u;
label_2dda00:
    // 0x2dda00: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x2dda00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2dda04:
    // 0x2dda04: 0x94a309e0  lhu         $v1, 0x9E0($a1)
    ctx->pc = 0x2dda04u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2528)));
label_2dda08:
    // 0x2dda08: 0x3064feff  andi        $a0, $v1, 0xFEFF
    ctx->pc = 0x2dda08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65279);
label_2dda0c:
    // 0x2dda0c: 0xa4a409e0  sh          $a0, 0x9E0($a1)
    ctx->pc = 0x2dda0cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2528), (uint16_t)GPR_U32(ctx, 4));
label_2dda10:
    // 0x2dda10: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dda10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2dda14:
    // 0x2dda14: 0x906309df  lbu         $v1, 0x9DF($v1)
    ctx->pc = 0x2dda14u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2527)));
label_2dda18:
    // 0x2dda18: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x2dda18u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_2dda1c:
    // 0x2dda1c: 0x30a30080  andi        $v1, $a1, 0x80
    ctx->pc = 0x2dda1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)128);
label_2dda20:
    // 0x2dda20: 0x1060003d  beqz        $v1, . + 4 + (0x3D << 2)
label_2dda24:
    if (ctx->pc == 0x2DDA24u) {
        ctx->pc = 0x2DDA28u;
        goto label_2dda28;
    }
    ctx->pc = 0x2DDA20u;
    {
        const bool branch_taken_0x2dda20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dda20) {
            ctx->pc = 0x2DDB18u;
            goto label_2ddb18;
        }
    }
    ctx->pc = 0x2DDA28u;
label_2dda28:
    // 0x2dda28: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2dda28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2dda2c:
    // 0x2dda2c: 0xc0675a4  jal         func_19D690
label_2dda30:
    if (ctx->pc == 0x2DDA30u) {
        ctx->pc = 0x2DDA34u;
        goto label_2dda34;
    }
    ctx->pc = 0x2DDA2Cu;
    SET_GPR_U32(ctx, 31, 0x2DDA34u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2DDA2Cu, 0x2DDA34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDA34u;
label_2dda34:
    // 0x2dda34: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2dda34u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2dda38:
    // 0x2dda38: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dda38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2dda3c:
    // 0x2dda3c: 0x8463127e  lh          $v1, 0x127E($v1)
    ctx->pc = 0x2dda3cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4734)));
label_2dda40:
    // 0x2dda40: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
label_2dda44:
    if (ctx->pc == 0x2DDA44u) {
        ctx->pc = 0x2DDA48u;
        goto label_2dda48;
    }
    ctx->pc = 0x2DDA40u;
    {
        const bool branch_taken_0x2dda40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dda40) {
            ctx->pc = 0x2DDAA8u;
            goto label_2ddaa8;
        }
    }
    ctx->pc = 0x2DDA48u;
label_2dda48:
    // 0x2dda48: 0x3c03437a  lui         $v1, 0x437A
    ctx->pc = 0x2dda48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17274 << 16));
label_2dda4c:
    // 0x2dda4c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2dda4cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2dda50:
    // 0x2dda50: 0x0  nop
    ctx->pc = 0x2dda50u;
    // NOP
label_2dda54:
    // 0x2dda54: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x2dda54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_2dda58:
    // 0x2dda58: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dda58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2dda5c:
    // 0x2dda5c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dda5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2dda60:
    // 0x2dda60: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x2dda60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
label_2dda64:
    // 0x2dda64: 0x246503c0  addiu       $a1, $v1, 0x3C0
    ctx->pc = 0x2dda64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 960));
label_2dda68:
    // 0x2dda68: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x2dda68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2dda6c:
    // 0x2dda6c: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x2dda6cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2dda70:
    // 0x2dda70: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x2dda70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
label_2dda74:
    // 0x2dda74: 0x24678e00  addiu       $a3, $v1, -0x7200
    ctx->pc = 0x2dda74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938112));
label_2dda78:
    // 0x2dda78: 0xc06d02c  jal         func_1B40B0
label_2dda7c:
    if (ctx->pc == 0x2DDA7Cu) {
        ctx->pc = 0x2DDA80u;
        goto label_2dda80;
    }
    ctx->pc = 0x2DDA78u;
    SET_GPR_U32(ctx, 31, 0x2DDA80u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x2DDA78u, 0x2DDA80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDA80u;
label_2dda80:
    // 0x2dda80: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2dda80u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2dda84:
    // 0x2dda84: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_2dda88:
    if (ctx->pc == 0x2DDA88u) {
        ctx->pc = 0x2DDA8Cu;
        goto label_2dda8c;
    }
    ctx->pc = 0x2DDA84u;
    {
        const bool branch_taken_0x2dda84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dda84) {
            ctx->pc = 0x2DDAA8u;
            goto label_2ddaa8;
        }
    }
    ctx->pc = 0x2DDA8Cu;
label_2dda8c:
    // 0x2dda8c: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x2dda8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2dda90:
    // 0x2dda90: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2dda90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2dda94:
    // 0x2dda94: 0xa444127a  sh          $a0, 0x127A($v0)
    ctx->pc = 0x2dda94u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 4));
label_2dda98:
    // 0x2dda98: 0xc0b6534  jal         func_2D94D0
label_2dda9c:
    if (ctx->pc == 0x2DDA9Cu) {
        ctx->pc = 0x2DDAA0u;
        goto label_2ddaa0;
    }
    ctx->pc = 0x2DDA98u;
    SET_GPR_U32(ctx, 31, 0x2DDAA0u);
    ctx->pc = 0x2D94D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D94D0u, 0x2DDA98u, 0x2DDAA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDAA0u;
label_2ddaa0:
    // 0x2ddaa0: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x2ddaa0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2ddaa4:
    // 0x2ddaa4: 0xa4a0127e  sh          $zero, 0x127E($a1)
    ctx->pc = 0x2ddaa4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4734), (uint16_t)GPR_U32(ctx, 0));
label_2ddaa8:
    // 0x2ddaa8: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x2ddaa8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2ddaac:
    // 0x2ddaac: 0x84c3127e  lh          $v1, 0x127E($a2)
    ctx->pc = 0x2ddaacu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 4734)));
label_2ddab0:
    // 0x2ddab0: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
label_2ddab4:
    if (ctx->pc == 0x2DDAB4u) {
        ctx->pc = 0x2DDAB8u;
        goto label_2ddab8;
    }
    ctx->pc = 0x2DDAB0u;
    {
        const bool branch_taken_0x2ddab0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ddab0) {
            ctx->pc = 0x2DDB18u;
            goto label_2ddb18;
        }
    }
    ctx->pc = 0x2DDAB8u;
label_2ddab8:
    // 0x2ddab8: 0x3c0743e1  lui         $a3, 0x43E1
    ctx->pc = 0x2ddab8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)17377 << 16));
label_2ddabc:
    // 0x2ddabc: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x2ddabcu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ddac0:
    // 0x2ddac0: 0x0  nop
    ctx->pc = 0x2ddac0u;
    // NOP
label_2ddac4:
    // 0x2ddac4: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x2ddac4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_2ddac8:
    // 0x2ddac8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2ddac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2ddacc:
    // 0x2ddacc: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2ddaccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2ddad0:
    // 0x2ddad0: 0x8c830130  lw          $v1, 0x130($a0)
    ctx->pc = 0x2ddad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
label_2ddad4:
    // 0x2ddad4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2ddad4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2ddad8:
    // 0x2ddad8: 0x246203c0  addiu       $v0, $v1, 0x3C0
    ctx->pc = 0x2ddad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 960));
label_2ddadc:
    // 0x2ddadc: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x2ddadcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2ddae0:
    // 0x2ddae0: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x2ddae0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2ddae4:
    // 0x2ddae4: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x2ddae4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
label_2ddae8:
    // 0x2ddae8: 0x24678e00  addiu       $a3, $v1, -0x7200
    ctx->pc = 0x2ddae8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938112));
label_2ddaec:
    // 0x2ddaec: 0xc06d02c  jal         func_1B40B0
label_2ddaf0:
    if (ctx->pc == 0x2DDAF0u) {
        ctx->pc = 0x2DDAF4u;
        goto label_2ddaf4;
    }
    ctx->pc = 0x2DDAECu;
    SET_GPR_U32(ctx, 31, 0x2DDAF4u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x2DDAECu, 0x2DDAF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDAF4u;
label_2ddaf4:
    // 0x2ddaf4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2ddaf8:
    if (ctx->pc == 0x2DDAF8u) {
        ctx->pc = 0x2DDAFCu;
        goto label_2ddafc;
    }
    ctx->pc = 0x2DDAF4u;
    {
        const bool branch_taken_0x2ddaf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ddaf4) {
            ctx->pc = 0x2DDB18u;
            goto label_2ddb18;
        }
    }
    ctx->pc = 0x2DDAFCu;
label_2ddafc:
    // 0x2ddafc: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x2ddafcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2ddb00:
    // 0x2ddb00: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2ddb00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2ddb04:
    // 0x2ddb04: 0xa444127a  sh          $a0, 0x127A($v0)
    ctx->pc = 0x2ddb04u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 4));
label_2ddb08:
    // 0x2ddb08: 0xc0b6534  jal         func_2D94D0
label_2ddb0c:
    if (ctx->pc == 0x2DDB0Cu) {
        ctx->pc = 0x2DDB10u;
        goto label_2ddb10;
    }
    ctx->pc = 0x2DDB08u;
    SET_GPR_U32(ctx, 31, 0x2DDB10u);
    ctx->pc = 0x2D94D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D94D0u, 0x2DDB08u, 0x2DDB10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDB10u;
label_2ddb10:
    // 0x2ddb10: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x2ddb10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2ddb14:
    // 0x2ddb14: 0xa4a0127e  sh          $zero, 0x127E($a1)
    ctx->pc = 0x2ddb14u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4734), (uint16_t)GPR_U32(ctx, 0));
label_2ddb18:
    // 0x2ddb18: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x2ddb18u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2ddb1c:
    // 0x2ddb1c: 0x90c309e7  lbu         $v1, 0x9E7($a2)
    ctx->pc = 0x2ddb1cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2535)));
label_2ddb20:
    // 0x2ddb20: 0x106000a9  beqz        $v1, . + 4 + (0xA9 << 2)
label_2ddb24:
    if (ctx->pc == 0x2DDB24u) {
        ctx->pc = 0x2DDB28u;
        goto label_2ddb28;
    }
    ctx->pc = 0x2DDB20u;
    {
        const bool branch_taken_0x2ddb20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ddb20) {
            ctx->pc = 0x2DDDC8u;
            goto label_2dddc8;
        }
    }
    ctx->pc = 0x2DDB28u;
label_2ddb28:
    // 0x2ddb28: 0x920700db  lbu         $a3, 0xDB($s0)
    ctx->pc = 0x2ddb28u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 219)));
label_2ddb2c:
    // 0x2ddb2c: 0x30e300ff  andi        $v1, $a3, 0xFF
    ctx->pc = 0x2ddb2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
label_2ddb30:
    // 0x2ddb30: 0x28630003  slti        $v1, $v1, 0x3
    ctx->pc = 0x2ddb30u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_2ddb34:
    // 0x2ddb34: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
label_2ddb38:
    if (ctx->pc == 0x2DDB38u) {
        ctx->pc = 0x2DDB3Cu;
        goto label_2ddb3c;
    }
    ctx->pc = 0x2DDB34u;
    {
        const bool branch_taken_0x2ddb34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ddb34) {
            ctx->pc = 0x2DDB74u;
            goto label_2ddb74;
        }
    }
    ctx->pc = 0x2DDB3Cu;
label_2ddb3c:
    // 0x2ddb3c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2ddb3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ddb40:
    // 0x2ddb40: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2ddb40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2ddb44:
    // 0x2ddb44: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2ddb44u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_2ddb48:
    // 0x2ddb48: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x2ddb48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2ddb4c:
    // 0x2ddb4c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2ddb4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2ddb50:
    // 0x2ddb50: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2ddb50u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_2ddb54:
    // 0x2ddb54: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2ddb54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2ddb58:
    // 0x2ddb58: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2ddb58u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_2ddb5c:
    // 0x2ddb5c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2ddb5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2ddb60:
    // 0x2ddb60: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2ddb60u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_2ddb64:
    // 0x2ddb64: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2ddb64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2ddb68:
    // 0x2ddb68: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2ddb68u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_2ddb6c:
    // 0x2ddb6c: 0x10000096  b           . + 4 + (0x96 << 2)
label_2ddb70:
    if (ctx->pc == 0x2DDB70u) {
        ctx->pc = 0x2DDB74u;
        goto label_2ddb74;
    }
    ctx->pc = 0x2DDB6Cu;
    {
        const bool branch_taken_0x2ddb6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ddb6c) {
            ctx->pc = 0x2DDDC8u;
            goto label_2dddc8;
        }
    }
    ctx->pc = 0x2DDB74u;
label_2ddb74:
    // 0x2ddb74: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x2ddb74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2ddb78:
    // 0x2ddb78: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x2ddb78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2ddb7c:
    // 0x2ddb7c: 0xa0a30002  sb          $v1, 0x2($a1)
    ctx->pc = 0x2ddb7cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 3));
label_2ddb80:
    // 0x2ddb80: 0x10000091  b           . + 4 + (0x91 << 2)
label_2ddb84:
    if (ctx->pc == 0x2DDB84u) {
        ctx->pc = 0x2DDB88u;
        goto label_2ddb88;
    }
    ctx->pc = 0x2DDB80u;
    {
        const bool branch_taken_0x2ddb80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ddb80) {
            ctx->pc = 0x2DDDC8u;
            goto label_2dddc8;
        }
    }
    ctx->pc = 0x2DDB88u;
label_2ddb88:
    // 0x2ddb88: 0xa20000d6  sb          $zero, 0xD6($s0)
    ctx->pc = 0x2ddb88u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 214), (uint8_t)GPR_U32(ctx, 0));
label_2ddb8c:
    // 0x2ddb8c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2ddb8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2ddb90:
    // 0x2ddb90: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2ddb90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2ddb94:
    // 0x2ddb94: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x2ddb94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
label_2ddb98:
    // 0x2ddb98: 0x24061e23  addiu       $a2, $zero, 0x1E23
    ctx->pc = 0x2ddb98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7715));
label_2ddb9c:
    // 0x2ddb9c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2ddb9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ddba0:
    // 0x2ddba0: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x2ddba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_2ddba4:
    // 0x2ddba4: 0x70404628  paddub      $t0, $v0, $zero
    ctx->pc = 0x2ddba4u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2ddba8:
    // 0x2ddba8: 0xc0965d0  jal         func_259740
label_2ddbac:
    if (ctx->pc == 0x2DDBACu) {
        ctx->pc = 0x2DDBB0u;
        goto label_2ddbb0;
    }
    ctx->pc = 0x2DDBA8u;
    SET_GPR_U32(ctx, 31, 0x2DDBB0u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2DDBA8u, 0x2DDBB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDBB0u;
label_2ddbb0:
    // 0x2ddbb0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2ddbb0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2ddbb4:
    // 0x2ddbb4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2ddbb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2ddbb8:
    // 0x2ddbb8: 0x90850002  lbu         $a1, 0x2($a0)
    ctx->pc = 0x2ddbb8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_2ddbbc:
    // 0x2ddbbc: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x2ddbbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_2ddbc0:
    // 0x2ddbc0: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x2ddbc0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_2ddbc4:
    // 0x2ddbc4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2ddbc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2ddbc8:
    // 0x2ddbc8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2ddbc8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2ddbcc:
    // 0x2ddbcc: 0xc096b40  jal         func_25AD00
label_2ddbd0:
    if (ctx->pc == 0x2DDBD0u) {
        ctx->pc = 0x2DDBD4u;
        goto label_2ddbd4;
    }
    ctx->pc = 0x2DDBCCu;
    SET_GPR_U32(ctx, 31, 0x2DDBD4u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2DDBCCu, 0x2DDBD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDBD4u;
label_2ddbd4:
    // 0x2ddbd4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2ddbd4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2ddbd8:
    // 0x2ddbd8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2ddbd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2ddbdc:
    // 0x2ddbdc: 0xc05cd10  jal         func_173440
label_2ddbe0:
    if (ctx->pc == 0x2DDBE0u) {
        ctx->pc = 0x2DDBE4u;
        goto label_2ddbe4;
    }
    ctx->pc = 0x2DDBDCu;
    SET_GPR_U32(ctx, 31, 0x2DDBE4u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x2DDBDCu, 0x2DDBE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDBE4u;
label_2ddbe4:
    // 0x2ddbe4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2ddbe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2ddbe8:
    // 0x2ddbe8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2ddbe8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2ddbec:
    // 0x2ddbec: 0xc05cec4  jal         func_173B10
label_2ddbf0:
    if (ctx->pc == 0x2DDBF0u) {
        ctx->pc = 0x2DDBF4u;
        goto label_2ddbf4;
    }
    ctx->pc = 0x2DDBECu;
    SET_GPR_U32(ctx, 31, 0x2DDBF4u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x2DDBECu, 0x2DDBF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDBF4u;
label_2ddbf4:
    // 0x2ddbf4: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x2ddbf4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2ddbf8:
    // 0x2ddbf8: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x2ddbf8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2ddbfc:
    // 0x2ddbfc: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x2ddbfcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_2ddc00:
    // 0x2ddc00: 0xc0974dc  jal         func_25D370
label_2ddc04:
    if (ctx->pc == 0x2DDC04u) {
        ctx->pc = 0x2DDC08u;
        goto label_2ddc08;
    }
    ctx->pc = 0x2DDC00u;
    SET_GPR_U32(ctx, 31, 0x2DDC08u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2DDC00u, 0x2DDC08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDC08u;
label_2ddc08:
    // 0x2ddc08: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x2ddc08u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2ddc0c:
    // 0x2ddc0c: 0x8fa80048  lw          $t0, 0x48($sp)
    ctx->pc = 0x2ddc0cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2ddc10:
    // 0x2ddc10: 0x910309e7  lbu         $v1, 0x9E7($t0)
    ctx->pc = 0x2ddc10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 2535)));
label_2ddc14:
    // 0x2ddc14: 0x1060006c  beqz        $v1, . + 4 + (0x6C << 2)
label_2ddc18:
    if (ctx->pc == 0x2DDC18u) {
        ctx->pc = 0x2DDC1Cu;
        goto label_2ddc1c;
    }
    ctx->pc = 0x2DDC14u;
    {
        const bool branch_taken_0x2ddc14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ddc14) {
            ctx->pc = 0x2DDDC8u;
            goto label_2dddc8;
        }
    }
    ctx->pc = 0x2DDC1Cu;
label_2ddc1c:
    // 0x2ddc1c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2ddc1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ddc20:
    // 0x2ddc20: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2ddc20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2ddc24:
    // 0x2ddc24: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2ddc24u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_2ddc28:
    // 0x2ddc28: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2ddc28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2ddc2c:
    // 0x2ddc2c: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x2ddc2cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
label_2ddc30:
    // 0x2ddc30: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2ddc30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2ddc34:
    // 0x2ddc34: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x2ddc34u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
label_2ddc38:
    // 0x2ddc38: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2ddc38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2ddc3c:
    // 0x2ddc3c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2ddc3cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_2ddc40:
    // 0x2ddc40: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2ddc40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2ddc44:
    // 0x2ddc44: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2ddc44u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_2ddc48:
    // 0x2ddc48: 0x1000005f  b           . + 4 + (0x5F << 2)
label_2ddc4c:
    if (ctx->pc == 0x2DDC4Cu) {
        ctx->pc = 0x2DDC50u;
        goto label_2ddc50;
    }
    ctx->pc = 0x2DDC48u;
    {
        const bool branch_taken_0x2ddc48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ddc48) {
            ctx->pc = 0x2DDDC8u;
            goto label_2dddc8;
        }
    }
    ctx->pc = 0x2DDC50u;
label_2ddc50:
    // 0x2ddc50: 0xa20000d6  sb          $zero, 0xD6($s0)
    ctx->pc = 0x2ddc50u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 214), (uint8_t)GPR_U32(ctx, 0));
label_2ddc54:
    // 0x2ddc54: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2ddc54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2ddc58:
    // 0x2ddc58: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2ddc58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2ddc5c:
    // 0x2ddc5c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2ddc5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_2ddc60:
    // 0x2ddc60: 0x24061e24  addiu       $a2, $zero, 0x1E24
    ctx->pc = 0x2ddc60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7716));
label_2ddc64:
    // 0x2ddc64: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2ddc64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ddc68:
    // 0x2ddc68: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2ddc68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_2ddc6c:
    // 0x2ddc6c: 0xc0965d0  jal         func_259740
label_2ddc70:
    if (ctx->pc == 0x2DDC70u) {
        ctx->pc = 0x2DDC74u;
        goto label_2ddc74;
    }
    ctx->pc = 0x2DDC6Cu;
    SET_GPR_U32(ctx, 31, 0x2DDC74u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2DDC6Cu, 0x2DDC74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDC74u;
label_2ddc74:
    // 0x2ddc74: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2ddc74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2ddc78:
    // 0x2ddc78: 0x90640002  lbu         $a0, 0x2($v1)
    ctx->pc = 0x2ddc78u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_2ddc7c:
    // 0x2ddc7c: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x2ddc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_2ddc80:
    // 0x2ddc80: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2ddc80u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_2ddc84:
    // 0x2ddc84: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x2ddc84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2ddc88:
    // 0x2ddc88: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x2ddc88u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_2ddc8c:
    // 0x2ddc8c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2ddc8cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2ddc90:
    // 0x2ddc90: 0xc096b40  jal         func_25AD00
label_2ddc94:
    if (ctx->pc == 0x2DDC94u) {
        ctx->pc = 0x2DDC98u;
        goto label_2ddc98;
    }
    ctx->pc = 0x2DDC90u;
    SET_GPR_U32(ctx, 31, 0x2DDC98u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2DDC90u, 0x2DDC98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDC98u;
label_2ddc98:
    // 0x2ddc98: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2ddc98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2ddc9c:
    // 0x2ddc9c: 0xc05cd10  jal         func_173440
label_2ddca0:
    if (ctx->pc == 0x2DDCA0u) {
        ctx->pc = 0x2DDCA4u;
        goto label_2ddca4;
    }
    ctx->pc = 0x2DDC9Cu;
    SET_GPR_U32(ctx, 31, 0x2DDCA4u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x2DDC9Cu, 0x2DDCA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDCA4u;
label_2ddca4:
    // 0x2ddca4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2ddca4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2ddca8:
    // 0x2ddca8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2ddca8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2ddcac:
    // 0x2ddcac: 0xc05cec4  jal         func_173B10
label_2ddcb0:
    if (ctx->pc == 0x2DDCB0u) {
        ctx->pc = 0x2DDCB4u;
        goto label_2ddcb4;
    }
    ctx->pc = 0x2DDCACu;
    SET_GPR_U32(ctx, 31, 0x2DDCB4u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x2DDCACu, 0x2DDCB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDCB4u;
label_2ddcb4:
    // 0x2ddcb4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2ddcb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2ddcb8:
    // 0x2ddcb8: 0xc0974dc  jal         func_25D370
label_2ddcbc:
    if (ctx->pc == 0x2DDCBCu) {
        ctx->pc = 0x2DDCC0u;
        goto label_2ddcc0;
    }
    ctx->pc = 0x2DDCB8u;
    SET_GPR_U32(ctx, 31, 0x2DDCC0u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2DDCB8u, 0x2DDCC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDCC0u;
label_2ddcc0:
    // 0x2ddcc0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2ddcc0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2ddcc4:
    // 0x2ddcc4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2ddcc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2ddcc8:
    // 0x2ddcc8: 0x906409e7  lbu         $a0, 0x9E7($v1)
    ctx->pc = 0x2ddcc8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_2ddccc:
    // 0x2ddccc: 0x1080003e  beqz        $a0, . + 4 + (0x3E << 2)
label_2ddcd0:
    if (ctx->pc == 0x2DDCD0u) {
        ctx->pc = 0x2DDCD4u;
        goto label_2ddcd4;
    }
    ctx->pc = 0x2DDCCCu;
    {
        const bool branch_taken_0x2ddccc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ddccc) {
            ctx->pc = 0x2DDDC8u;
            goto label_2dddc8;
        }
    }
    ctx->pc = 0x2DDCD4u;
label_2ddcd4:
    // 0x2ddcd4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ddcd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ddcd8:
    // 0x2ddcd8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2ddcd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2ddcdc:
    // 0x2ddcdc: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x2ddcdcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
label_2ddce0:
    // 0x2ddce0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2ddce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2ddce4:
    // 0x2ddce4: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x2ddce4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
label_2ddce8:
    // 0x2ddce8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2ddce8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2ddcec:
    // 0x2ddcec: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x2ddcecu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
label_2ddcf0:
    // 0x2ddcf0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2ddcf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2ddcf4:
    // 0x2ddcf4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2ddcf4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_2ddcf8:
    // 0x2ddcf8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2ddcf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2ddcfc:
    // 0x2ddcfc: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2ddcfcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_2ddd00:
    // 0x2ddd00: 0x10000031  b           . + 4 + (0x31 << 2)
label_2ddd04:
    if (ctx->pc == 0x2DDD04u) {
        ctx->pc = 0x2DDD08u;
        goto label_2ddd08;
    }
    ctx->pc = 0x2DDD00u;
    {
        const bool branch_taken_0x2ddd00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ddd00) {
            ctx->pc = 0x2DDDC8u;
            goto label_2dddc8;
        }
    }
    ctx->pc = 0x2DDD08u;
label_2ddd08:
    // 0x2ddd08: 0xa20000d6  sb          $zero, 0xD6($s0)
    ctx->pc = 0x2ddd08u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 214), (uint8_t)GPR_U32(ctx, 0));
label_2ddd0c:
    // 0x2ddd0c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2ddd0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2ddd10:
    // 0x2ddd10: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2ddd10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2ddd14:
    // 0x2ddd14: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x2ddd14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
label_2ddd18:
    // 0x2ddd18: 0x24061e23  addiu       $a2, $zero, 0x1E23
    ctx->pc = 0x2ddd18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7715));
label_2ddd1c:
    // 0x2ddd1c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2ddd1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ddd20:
    // 0x2ddd20: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2ddd20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_2ddd24:
    // 0x2ddd24: 0xc0965d0  jal         func_259740
label_2ddd28:
    if (ctx->pc == 0x2DDD28u) {
        ctx->pc = 0x2DDD2Cu;
        goto label_2ddd2c;
    }
    ctx->pc = 0x2DDD24u;
    SET_GPR_U32(ctx, 31, 0x2DDD2Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2DDD24u, 0x2DDD2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDD2Cu;
label_2ddd2c:
    // 0x2ddd2c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2ddd2cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2ddd30:
    // 0x2ddd30: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2ddd30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2ddd34:
    // 0x2ddd34: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x2ddd34u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_2ddd38:
    // 0x2ddd38: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2ddd38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2ddd3c:
    // 0x2ddd3c: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x2ddd3cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_2ddd40:
    // 0x2ddd40: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2ddd40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2ddd44:
    // 0x2ddd44: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2ddd44u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2ddd48:
    // 0x2ddd48: 0xc096b40  jal         func_25AD00
label_2ddd4c:
    if (ctx->pc == 0x2DDD4Cu) {
        ctx->pc = 0x2DDD50u;
        goto label_2ddd50;
    }
    ctx->pc = 0x2DDD48u;
    SET_GPR_U32(ctx, 31, 0x2DDD50u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2DDD48u, 0x2DDD50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDD50u;
label_2ddd50:
    // 0x2ddd50: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2ddd50u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2ddd54:
    // 0x2ddd54: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2ddd54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2ddd58:
    // 0x2ddd58: 0xc05cd10  jal         func_173440
label_2ddd5c:
    if (ctx->pc == 0x2DDD5Cu) {
        ctx->pc = 0x2DDD60u;
        goto label_2ddd60;
    }
    ctx->pc = 0x2DDD58u;
    SET_GPR_U32(ctx, 31, 0x2DDD60u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x2DDD58u, 0x2DDD60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDD60u;
label_2ddd60:
    // 0x2ddd60: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2ddd60u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2ddd64:
    // 0x2ddd64: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2ddd64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2ddd68:
    // 0x2ddd68: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2ddd68u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2ddd6c:
    // 0x2ddd6c: 0xc05cec4  jal         func_173B10
label_2ddd70:
    if (ctx->pc == 0x2DDD70u) {
        ctx->pc = 0x2DDD74u;
        goto label_2ddd74;
    }
    ctx->pc = 0x2DDD6Cu;
    SET_GPR_U32(ctx, 31, 0x2DDD74u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x2DDD6Cu, 0x2DDD74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDD74u;
label_2ddd74:
    // 0x2ddd74: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2ddd74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2ddd78:
    // 0x2ddd78: 0xc0974dc  jal         func_25D370
label_2ddd7c:
    if (ctx->pc == 0x2DDD7Cu) {
        ctx->pc = 0x2DDD80u;
        goto label_2ddd80;
    }
    ctx->pc = 0x2DDD78u;
    SET_GPR_U32(ctx, 31, 0x2DDD80u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2DDD78u, 0x2DDD80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDD80u;
label_2ddd80:
    // 0x2ddd80: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2ddd80u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2ddd84:
    // 0x2ddd84: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2ddd84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2ddd88:
    // 0x2ddd88: 0x906409e7  lbu         $a0, 0x9E7($v1)
    ctx->pc = 0x2ddd88u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_2ddd8c:
    // 0x2ddd8c: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
label_2ddd90:
    if (ctx->pc == 0x2DDD90u) {
        ctx->pc = 0x2DDD94u;
        goto label_2ddd94;
    }
    ctx->pc = 0x2DDD8Cu;
    {
        const bool branch_taken_0x2ddd8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ddd8c) {
            ctx->pc = 0x2DDDC8u;
            goto label_2dddc8;
        }
    }
    ctx->pc = 0x2DDD94u;
label_2ddd94:
    // 0x2ddd94: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2ddd94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ddd98:
    // 0x2ddd98: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2ddd98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2ddd9c:
    // 0x2ddd9c: 0xa0650000  sb          $a1, 0x0($v1)
    ctx->pc = 0x2ddd9cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
label_2ddda0:
    // 0x2ddda0: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x2ddda0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2ddda4:
    // 0x2ddda4: 0xa0a00001  sb          $zero, 0x1($a1)
    ctx->pc = 0x2ddda4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 0));
label_2ddda8:
    // 0x2ddda8: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x2ddda8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2dddac:
    // 0x2dddac: 0xa0c00002  sb          $zero, 0x2($a2)
    ctx->pc = 0x2dddacu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 0));
label_2dddb0:
    // 0x2dddb0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dddb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2dddb4:
    // 0x2dddb4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2dddb4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_2dddb8:
    // 0x2dddb8: 0x8fa70048  lw          $a3, 0x48($sp)
    ctx->pc = 0x2dddb8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2dddbc:
    // 0x2dddbc: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x2dddbcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
label_2dddc0:
    // 0x2dddc0: 0x10000001  b           . + 4 + (0x1 << 2)
label_2dddc4:
    if (ctx->pc == 0x2DDDC4u) {
        ctx->pc = 0x2DDDC8u;
        goto label_2dddc8;
    }
    ctx->pc = 0x2DDDC0u;
    {
        const bool branch_taken_0x2dddc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dddc0) {
            ctx->pc = 0x2DDDC8u;
            goto label_2dddc8;
        }
    }
    ctx->pc = 0x2DDDC8u;
label_2dddc8:
    // 0x2dddc8: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x2dddc8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2dddcc:
    // 0x2dddcc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2dddccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2dddd0:
    // 0x2dddd0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2dddd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2dddd4:
    // 0x2dddd4: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2dddd4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_2dddd8:
    // 0x2dddd8: 0x3e00008  jr          $ra
label_2ddddc:
    if (ctx->pc == 0x2DDDDCu) {
        ctx->pc = 0x2DDDE0u;
        goto label_fallthrough_0x2dddd8;
    }
    ctx->pc = 0x2DDDD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DDDD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2dddd8:
    ctx->pc = 0x2DDDE0u;
}
