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

// Function: Pl_r1_devil_sky_start
// Address: 0x26b2f0 - 0x26bf24
void Pl_r1_devil_sky_start_0x26b2f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Pl_r1_devil_sky_start_0x26b2f0");
#endif

    switch (ctx->pc) {
        case 0x26b2f0u: goto label_26b2f0;
        case 0x26b2f4u: goto label_26b2f4;
        case 0x26b2f8u: goto label_26b2f8;
        case 0x26b2fcu: goto label_26b2fc;
        case 0x26b300u: goto label_26b300;
        case 0x26b304u: goto label_26b304;
        case 0x26b308u: goto label_26b308;
        case 0x26b30cu: goto label_26b30c;
        case 0x26b310u: goto label_26b310;
        case 0x26b314u: goto label_26b314;
        case 0x26b318u: goto label_26b318;
        case 0x26b31cu: goto label_26b31c;
        case 0x26b320u: goto label_26b320;
        case 0x26b324u: goto label_26b324;
        case 0x26b328u: goto label_26b328;
        case 0x26b32cu: goto label_26b32c;
        case 0x26b330u: goto label_26b330;
        case 0x26b334u: goto label_26b334;
        case 0x26b338u: goto label_26b338;
        case 0x26b33cu: goto label_26b33c;
        case 0x26b340u: goto label_26b340;
        case 0x26b344u: goto label_26b344;
        case 0x26b348u: goto label_26b348;
        case 0x26b34cu: goto label_26b34c;
        case 0x26b350u: goto label_26b350;
        case 0x26b354u: goto label_26b354;
        case 0x26b358u: goto label_26b358;
        case 0x26b35cu: goto label_26b35c;
        case 0x26b360u: goto label_26b360;
        case 0x26b364u: goto label_26b364;
        case 0x26b368u: goto label_26b368;
        case 0x26b36cu: goto label_26b36c;
        case 0x26b370u: goto label_26b370;
        case 0x26b374u: goto label_26b374;
        case 0x26b378u: goto label_26b378;
        case 0x26b37cu: goto label_26b37c;
        case 0x26b380u: goto label_26b380;
        case 0x26b384u: goto label_26b384;
        case 0x26b388u: goto label_26b388;
        case 0x26b38cu: goto label_26b38c;
        case 0x26b390u: goto label_26b390;
        case 0x26b394u: goto label_26b394;
        case 0x26b398u: goto label_26b398;
        case 0x26b39cu: goto label_26b39c;
        case 0x26b3a0u: goto label_26b3a0;
        case 0x26b3a4u: goto label_26b3a4;
        case 0x26b3a8u: goto label_26b3a8;
        case 0x26b3acu: goto label_26b3ac;
        case 0x26b3b0u: goto label_26b3b0;
        case 0x26b3b4u: goto label_26b3b4;
        case 0x26b3b8u: goto label_26b3b8;
        case 0x26b3bcu: goto label_26b3bc;
        case 0x26b3c0u: goto label_26b3c0;
        case 0x26b3c4u: goto label_26b3c4;
        case 0x26b3c8u: goto label_26b3c8;
        case 0x26b3ccu: goto label_26b3cc;
        case 0x26b3d0u: goto label_26b3d0;
        case 0x26b3d4u: goto label_26b3d4;
        case 0x26b3d8u: goto label_26b3d8;
        case 0x26b3dcu: goto label_26b3dc;
        case 0x26b3e0u: goto label_26b3e0;
        case 0x26b3e4u: goto label_26b3e4;
        case 0x26b3e8u: goto label_26b3e8;
        case 0x26b3ecu: goto label_26b3ec;
        case 0x26b3f0u: goto label_26b3f0;
        case 0x26b3f4u: goto label_26b3f4;
        case 0x26b3f8u: goto label_26b3f8;
        case 0x26b3fcu: goto label_26b3fc;
        case 0x26b400u: goto label_26b400;
        case 0x26b404u: goto label_26b404;
        case 0x26b408u: goto label_26b408;
        case 0x26b40cu: goto label_26b40c;
        case 0x26b410u: goto label_26b410;
        case 0x26b414u: goto label_26b414;
        case 0x26b418u: goto label_26b418;
        case 0x26b41cu: goto label_26b41c;
        case 0x26b420u: goto label_26b420;
        case 0x26b424u: goto label_26b424;
        case 0x26b428u: goto label_26b428;
        case 0x26b42cu: goto label_26b42c;
        case 0x26b430u: goto label_26b430;
        case 0x26b434u: goto label_26b434;
        case 0x26b438u: goto label_26b438;
        case 0x26b43cu: goto label_26b43c;
        case 0x26b440u: goto label_26b440;
        case 0x26b444u: goto label_26b444;
        case 0x26b448u: goto label_26b448;
        case 0x26b44cu: goto label_26b44c;
        case 0x26b450u: goto label_26b450;
        case 0x26b454u: goto label_26b454;
        case 0x26b458u: goto label_26b458;
        case 0x26b45cu: goto label_26b45c;
        case 0x26b460u: goto label_26b460;
        case 0x26b464u: goto label_26b464;
        case 0x26b468u: goto label_26b468;
        case 0x26b46cu: goto label_26b46c;
        case 0x26b470u: goto label_26b470;
        case 0x26b474u: goto label_26b474;
        case 0x26b478u: goto label_26b478;
        case 0x26b47cu: goto label_26b47c;
        case 0x26b480u: goto label_26b480;
        case 0x26b484u: goto label_26b484;
        case 0x26b488u: goto label_26b488;
        case 0x26b48cu: goto label_26b48c;
        case 0x26b490u: goto label_26b490;
        case 0x26b494u: goto label_26b494;
        case 0x26b498u: goto label_26b498;
        case 0x26b49cu: goto label_26b49c;
        case 0x26b4a0u: goto label_26b4a0;
        case 0x26b4a4u: goto label_26b4a4;
        case 0x26b4a8u: goto label_26b4a8;
        case 0x26b4acu: goto label_26b4ac;
        case 0x26b4b0u: goto label_26b4b0;
        case 0x26b4b4u: goto label_26b4b4;
        case 0x26b4b8u: goto label_26b4b8;
        case 0x26b4bcu: goto label_26b4bc;
        case 0x26b4c0u: goto label_26b4c0;
        case 0x26b4c4u: goto label_26b4c4;
        case 0x26b4c8u: goto label_26b4c8;
        case 0x26b4ccu: goto label_26b4cc;
        case 0x26b4d0u: goto label_26b4d0;
        case 0x26b4d4u: goto label_26b4d4;
        case 0x26b4d8u: goto label_26b4d8;
        case 0x26b4dcu: goto label_26b4dc;
        case 0x26b4e0u: goto label_26b4e0;
        case 0x26b4e4u: goto label_26b4e4;
        case 0x26b4e8u: goto label_26b4e8;
        case 0x26b4ecu: goto label_26b4ec;
        case 0x26b4f0u: goto label_26b4f0;
        case 0x26b4f4u: goto label_26b4f4;
        case 0x26b4f8u: goto label_26b4f8;
        case 0x26b4fcu: goto label_26b4fc;
        case 0x26b500u: goto label_26b500;
        case 0x26b504u: goto label_26b504;
        case 0x26b508u: goto label_26b508;
        case 0x26b50cu: goto label_26b50c;
        case 0x26b510u: goto label_26b510;
        case 0x26b514u: goto label_26b514;
        case 0x26b518u: goto label_26b518;
        case 0x26b51cu: goto label_26b51c;
        case 0x26b520u: goto label_26b520;
        case 0x26b524u: goto label_26b524;
        case 0x26b528u: goto label_26b528;
        case 0x26b52cu: goto label_26b52c;
        case 0x26b530u: goto label_26b530;
        case 0x26b534u: goto label_26b534;
        case 0x26b538u: goto label_26b538;
        case 0x26b53cu: goto label_26b53c;
        case 0x26b540u: goto label_26b540;
        case 0x26b544u: goto label_26b544;
        case 0x26b548u: goto label_26b548;
        case 0x26b54cu: goto label_26b54c;
        case 0x26b550u: goto label_26b550;
        case 0x26b554u: goto label_26b554;
        case 0x26b558u: goto label_26b558;
        case 0x26b55cu: goto label_26b55c;
        case 0x26b560u: goto label_26b560;
        case 0x26b564u: goto label_26b564;
        case 0x26b568u: goto label_26b568;
        case 0x26b56cu: goto label_26b56c;
        case 0x26b570u: goto label_26b570;
        case 0x26b574u: goto label_26b574;
        case 0x26b578u: goto label_26b578;
        case 0x26b57cu: goto label_26b57c;
        case 0x26b580u: goto label_26b580;
        case 0x26b584u: goto label_26b584;
        case 0x26b588u: goto label_26b588;
        case 0x26b58cu: goto label_26b58c;
        case 0x26b590u: goto label_26b590;
        case 0x26b594u: goto label_26b594;
        case 0x26b598u: goto label_26b598;
        case 0x26b59cu: goto label_26b59c;
        case 0x26b5a0u: goto label_26b5a0;
        case 0x26b5a4u: goto label_26b5a4;
        case 0x26b5a8u: goto label_26b5a8;
        case 0x26b5acu: goto label_26b5ac;
        case 0x26b5b0u: goto label_26b5b0;
        case 0x26b5b4u: goto label_26b5b4;
        case 0x26b5b8u: goto label_26b5b8;
        case 0x26b5bcu: goto label_26b5bc;
        case 0x26b5c0u: goto label_26b5c0;
        case 0x26b5c4u: goto label_26b5c4;
        case 0x26b5c8u: goto label_26b5c8;
        case 0x26b5ccu: goto label_26b5cc;
        case 0x26b5d0u: goto label_26b5d0;
        case 0x26b5d4u: goto label_26b5d4;
        case 0x26b5d8u: goto label_26b5d8;
        case 0x26b5dcu: goto label_26b5dc;
        case 0x26b5e0u: goto label_26b5e0;
        case 0x26b5e4u: goto label_26b5e4;
        case 0x26b5e8u: goto label_26b5e8;
        case 0x26b5ecu: goto label_26b5ec;
        case 0x26b5f0u: goto label_26b5f0;
        case 0x26b5f4u: goto label_26b5f4;
        case 0x26b5f8u: goto label_26b5f8;
        case 0x26b5fcu: goto label_26b5fc;
        case 0x26b600u: goto label_26b600;
        case 0x26b604u: goto label_26b604;
        case 0x26b608u: goto label_26b608;
        case 0x26b60cu: goto label_26b60c;
        case 0x26b610u: goto label_26b610;
        case 0x26b614u: goto label_26b614;
        case 0x26b618u: goto label_26b618;
        case 0x26b61cu: goto label_26b61c;
        case 0x26b620u: goto label_26b620;
        case 0x26b624u: goto label_26b624;
        case 0x26b628u: goto label_26b628;
        case 0x26b62cu: goto label_26b62c;
        case 0x26b630u: goto label_26b630;
        case 0x26b634u: goto label_26b634;
        case 0x26b638u: goto label_26b638;
        case 0x26b63cu: goto label_26b63c;
        case 0x26b640u: goto label_26b640;
        case 0x26b644u: goto label_26b644;
        case 0x26b648u: goto label_26b648;
        case 0x26b64cu: goto label_26b64c;
        case 0x26b650u: goto label_26b650;
        case 0x26b654u: goto label_26b654;
        case 0x26b658u: goto label_26b658;
        case 0x26b65cu: goto label_26b65c;
        case 0x26b660u: goto label_26b660;
        case 0x26b664u: goto label_26b664;
        case 0x26b668u: goto label_26b668;
        case 0x26b66cu: goto label_26b66c;
        case 0x26b670u: goto label_26b670;
        case 0x26b674u: goto label_26b674;
        case 0x26b678u: goto label_26b678;
        case 0x26b67cu: goto label_26b67c;
        case 0x26b680u: goto label_26b680;
        case 0x26b684u: goto label_26b684;
        case 0x26b688u: goto label_26b688;
        case 0x26b68cu: goto label_26b68c;
        case 0x26b690u: goto label_26b690;
        case 0x26b694u: goto label_26b694;
        case 0x26b698u: goto label_26b698;
        case 0x26b69cu: goto label_26b69c;
        case 0x26b6a0u: goto label_26b6a0;
        case 0x26b6a4u: goto label_26b6a4;
        case 0x26b6a8u: goto label_26b6a8;
        case 0x26b6acu: goto label_26b6ac;
        case 0x26b6b0u: goto label_26b6b0;
        case 0x26b6b4u: goto label_26b6b4;
        case 0x26b6b8u: goto label_26b6b8;
        case 0x26b6bcu: goto label_26b6bc;
        case 0x26b6c0u: goto label_26b6c0;
        case 0x26b6c4u: goto label_26b6c4;
        case 0x26b6c8u: goto label_26b6c8;
        case 0x26b6ccu: goto label_26b6cc;
        case 0x26b6d0u: goto label_26b6d0;
        case 0x26b6d4u: goto label_26b6d4;
        case 0x26b6d8u: goto label_26b6d8;
        case 0x26b6dcu: goto label_26b6dc;
        case 0x26b6e0u: goto label_26b6e0;
        case 0x26b6e4u: goto label_26b6e4;
        case 0x26b6e8u: goto label_26b6e8;
        case 0x26b6ecu: goto label_26b6ec;
        case 0x26b6f0u: goto label_26b6f0;
        case 0x26b6f4u: goto label_26b6f4;
        case 0x26b6f8u: goto label_26b6f8;
        case 0x26b6fcu: goto label_26b6fc;
        case 0x26b700u: goto label_26b700;
        case 0x26b704u: goto label_26b704;
        case 0x26b708u: goto label_26b708;
        case 0x26b70cu: goto label_26b70c;
        case 0x26b710u: goto label_26b710;
        case 0x26b714u: goto label_26b714;
        case 0x26b718u: goto label_26b718;
        case 0x26b71cu: goto label_26b71c;
        case 0x26b720u: goto label_26b720;
        case 0x26b724u: goto label_26b724;
        case 0x26b728u: goto label_26b728;
        case 0x26b72cu: goto label_26b72c;
        case 0x26b730u: goto label_26b730;
        case 0x26b734u: goto label_26b734;
        case 0x26b738u: goto label_26b738;
        case 0x26b73cu: goto label_26b73c;
        case 0x26b740u: goto label_26b740;
        case 0x26b744u: goto label_26b744;
        case 0x26b748u: goto label_26b748;
        case 0x26b74cu: goto label_26b74c;
        case 0x26b750u: goto label_26b750;
        case 0x26b754u: goto label_26b754;
        case 0x26b758u: goto label_26b758;
        case 0x26b75cu: goto label_26b75c;
        case 0x26b760u: goto label_26b760;
        case 0x26b764u: goto label_26b764;
        case 0x26b768u: goto label_26b768;
        case 0x26b76cu: goto label_26b76c;
        case 0x26b770u: goto label_26b770;
        case 0x26b774u: goto label_26b774;
        case 0x26b778u: goto label_26b778;
        case 0x26b77cu: goto label_26b77c;
        case 0x26b780u: goto label_26b780;
        case 0x26b784u: goto label_26b784;
        case 0x26b788u: goto label_26b788;
        case 0x26b78cu: goto label_26b78c;
        case 0x26b790u: goto label_26b790;
        case 0x26b794u: goto label_26b794;
        case 0x26b798u: goto label_26b798;
        case 0x26b79cu: goto label_26b79c;
        case 0x26b7a0u: goto label_26b7a0;
        case 0x26b7a4u: goto label_26b7a4;
        case 0x26b7a8u: goto label_26b7a8;
        case 0x26b7acu: goto label_26b7ac;
        case 0x26b7b0u: goto label_26b7b0;
        case 0x26b7b4u: goto label_26b7b4;
        case 0x26b7b8u: goto label_26b7b8;
        case 0x26b7bcu: goto label_26b7bc;
        case 0x26b7c0u: goto label_26b7c0;
        case 0x26b7c4u: goto label_26b7c4;
        case 0x26b7c8u: goto label_26b7c8;
        case 0x26b7ccu: goto label_26b7cc;
        case 0x26b7d0u: goto label_26b7d0;
        case 0x26b7d4u: goto label_26b7d4;
        case 0x26b7d8u: goto label_26b7d8;
        case 0x26b7dcu: goto label_26b7dc;
        case 0x26b7e0u: goto label_26b7e0;
        case 0x26b7e4u: goto label_26b7e4;
        case 0x26b7e8u: goto label_26b7e8;
        case 0x26b7ecu: goto label_26b7ec;
        case 0x26b7f0u: goto label_26b7f0;
        case 0x26b7f4u: goto label_26b7f4;
        case 0x26b7f8u: goto label_26b7f8;
        case 0x26b7fcu: goto label_26b7fc;
        case 0x26b800u: goto label_26b800;
        case 0x26b804u: goto label_26b804;
        case 0x26b808u: goto label_26b808;
        case 0x26b80cu: goto label_26b80c;
        case 0x26b810u: goto label_26b810;
        case 0x26b814u: goto label_26b814;
        case 0x26b818u: goto label_26b818;
        case 0x26b81cu: goto label_26b81c;
        case 0x26b820u: goto label_26b820;
        case 0x26b824u: goto label_26b824;
        case 0x26b828u: goto label_26b828;
        case 0x26b82cu: goto label_26b82c;
        case 0x26b830u: goto label_26b830;
        case 0x26b834u: goto label_26b834;
        case 0x26b838u: goto label_26b838;
        case 0x26b83cu: goto label_26b83c;
        case 0x26b840u: goto label_26b840;
        case 0x26b844u: goto label_26b844;
        case 0x26b848u: goto label_26b848;
        case 0x26b84cu: goto label_26b84c;
        case 0x26b850u: goto label_26b850;
        case 0x26b854u: goto label_26b854;
        case 0x26b858u: goto label_26b858;
        case 0x26b85cu: goto label_26b85c;
        case 0x26b860u: goto label_26b860;
        case 0x26b864u: goto label_26b864;
        case 0x26b868u: goto label_26b868;
        case 0x26b86cu: goto label_26b86c;
        case 0x26b870u: goto label_26b870;
        case 0x26b874u: goto label_26b874;
        case 0x26b878u: goto label_26b878;
        case 0x26b87cu: goto label_26b87c;
        case 0x26b880u: goto label_26b880;
        case 0x26b884u: goto label_26b884;
        case 0x26b888u: goto label_26b888;
        case 0x26b88cu: goto label_26b88c;
        case 0x26b890u: goto label_26b890;
        case 0x26b894u: goto label_26b894;
        case 0x26b898u: goto label_26b898;
        case 0x26b89cu: goto label_26b89c;
        case 0x26b8a0u: goto label_26b8a0;
        case 0x26b8a4u: goto label_26b8a4;
        case 0x26b8a8u: goto label_26b8a8;
        case 0x26b8acu: goto label_26b8ac;
        case 0x26b8b0u: goto label_26b8b0;
        case 0x26b8b4u: goto label_26b8b4;
        case 0x26b8b8u: goto label_26b8b8;
        case 0x26b8bcu: goto label_26b8bc;
        case 0x26b8c0u: goto label_26b8c0;
        case 0x26b8c4u: goto label_26b8c4;
        case 0x26b8c8u: goto label_26b8c8;
        case 0x26b8ccu: goto label_26b8cc;
        case 0x26b8d0u: goto label_26b8d0;
        case 0x26b8d4u: goto label_26b8d4;
        case 0x26b8d8u: goto label_26b8d8;
        case 0x26b8dcu: goto label_26b8dc;
        case 0x26b8e0u: goto label_26b8e0;
        case 0x26b8e4u: goto label_26b8e4;
        case 0x26b8e8u: goto label_26b8e8;
        case 0x26b8ecu: goto label_26b8ec;
        case 0x26b8f0u: goto label_26b8f0;
        case 0x26b8f4u: goto label_26b8f4;
        case 0x26b8f8u: goto label_26b8f8;
        case 0x26b8fcu: goto label_26b8fc;
        case 0x26b900u: goto label_26b900;
        case 0x26b904u: goto label_26b904;
        case 0x26b908u: goto label_26b908;
        case 0x26b90cu: goto label_26b90c;
        case 0x26b910u: goto label_26b910;
        case 0x26b914u: goto label_26b914;
        case 0x26b918u: goto label_26b918;
        case 0x26b91cu: goto label_26b91c;
        case 0x26b920u: goto label_26b920;
        case 0x26b924u: goto label_26b924;
        case 0x26b928u: goto label_26b928;
        case 0x26b92cu: goto label_26b92c;
        case 0x26b930u: goto label_26b930;
        case 0x26b934u: goto label_26b934;
        case 0x26b938u: goto label_26b938;
        case 0x26b93cu: goto label_26b93c;
        case 0x26b940u: goto label_26b940;
        case 0x26b944u: goto label_26b944;
        case 0x26b948u: goto label_26b948;
        case 0x26b94cu: goto label_26b94c;
        case 0x26b950u: goto label_26b950;
        case 0x26b954u: goto label_26b954;
        case 0x26b958u: goto label_26b958;
        case 0x26b95cu: goto label_26b95c;
        case 0x26b960u: goto label_26b960;
        case 0x26b964u: goto label_26b964;
        case 0x26b968u: goto label_26b968;
        case 0x26b96cu: goto label_26b96c;
        case 0x26b970u: goto label_26b970;
        case 0x26b974u: goto label_26b974;
        case 0x26b978u: goto label_26b978;
        case 0x26b97cu: goto label_26b97c;
        case 0x26b980u: goto label_26b980;
        case 0x26b984u: goto label_26b984;
        case 0x26b988u: goto label_26b988;
        case 0x26b98cu: goto label_26b98c;
        case 0x26b990u: goto label_26b990;
        case 0x26b994u: goto label_26b994;
        case 0x26b998u: goto label_26b998;
        case 0x26b99cu: goto label_26b99c;
        case 0x26b9a0u: goto label_26b9a0;
        case 0x26b9a4u: goto label_26b9a4;
        case 0x26b9a8u: goto label_26b9a8;
        case 0x26b9acu: goto label_26b9ac;
        case 0x26b9b0u: goto label_26b9b0;
        case 0x26b9b4u: goto label_26b9b4;
        case 0x26b9b8u: goto label_26b9b8;
        case 0x26b9bcu: goto label_26b9bc;
        case 0x26b9c0u: goto label_26b9c0;
        case 0x26b9c4u: goto label_26b9c4;
        case 0x26b9c8u: goto label_26b9c8;
        case 0x26b9ccu: goto label_26b9cc;
        case 0x26b9d0u: goto label_26b9d0;
        case 0x26b9d4u: goto label_26b9d4;
        case 0x26b9d8u: goto label_26b9d8;
        case 0x26b9dcu: goto label_26b9dc;
        case 0x26b9e0u: goto label_26b9e0;
        case 0x26b9e4u: goto label_26b9e4;
        case 0x26b9e8u: goto label_26b9e8;
        case 0x26b9ecu: goto label_26b9ec;
        case 0x26b9f0u: goto label_26b9f0;
        case 0x26b9f4u: goto label_26b9f4;
        case 0x26b9f8u: goto label_26b9f8;
        case 0x26b9fcu: goto label_26b9fc;
        case 0x26ba00u: goto label_26ba00;
        case 0x26ba04u: goto label_26ba04;
        case 0x26ba08u: goto label_26ba08;
        case 0x26ba0cu: goto label_26ba0c;
        case 0x26ba10u: goto label_26ba10;
        case 0x26ba14u: goto label_26ba14;
        case 0x26ba18u: goto label_26ba18;
        case 0x26ba1cu: goto label_26ba1c;
        case 0x26ba20u: goto label_26ba20;
        case 0x26ba24u: goto label_26ba24;
        case 0x26ba28u: goto label_26ba28;
        case 0x26ba2cu: goto label_26ba2c;
        case 0x26ba30u: goto label_26ba30;
        case 0x26ba34u: goto label_26ba34;
        case 0x26ba38u: goto label_26ba38;
        case 0x26ba3cu: goto label_26ba3c;
        case 0x26ba40u: goto label_26ba40;
        case 0x26ba44u: goto label_26ba44;
        case 0x26ba48u: goto label_26ba48;
        case 0x26ba4cu: goto label_26ba4c;
        case 0x26ba50u: goto label_26ba50;
        case 0x26ba54u: goto label_26ba54;
        case 0x26ba58u: goto label_26ba58;
        case 0x26ba5cu: goto label_26ba5c;
        case 0x26ba60u: goto label_26ba60;
        case 0x26ba64u: goto label_26ba64;
        case 0x26ba68u: goto label_26ba68;
        case 0x26ba6cu: goto label_26ba6c;
        case 0x26ba70u: goto label_26ba70;
        case 0x26ba74u: goto label_26ba74;
        case 0x26ba78u: goto label_26ba78;
        case 0x26ba7cu: goto label_26ba7c;
        case 0x26ba80u: goto label_26ba80;
        case 0x26ba84u: goto label_26ba84;
        case 0x26ba88u: goto label_26ba88;
        case 0x26ba8cu: goto label_26ba8c;
        case 0x26ba90u: goto label_26ba90;
        case 0x26ba94u: goto label_26ba94;
        case 0x26ba98u: goto label_26ba98;
        case 0x26ba9cu: goto label_26ba9c;
        case 0x26baa0u: goto label_26baa0;
        case 0x26baa4u: goto label_26baa4;
        case 0x26baa8u: goto label_26baa8;
        case 0x26baacu: goto label_26baac;
        case 0x26bab0u: goto label_26bab0;
        case 0x26bab4u: goto label_26bab4;
        case 0x26bab8u: goto label_26bab8;
        case 0x26babcu: goto label_26babc;
        case 0x26bac0u: goto label_26bac0;
        case 0x26bac4u: goto label_26bac4;
        case 0x26bac8u: goto label_26bac8;
        case 0x26baccu: goto label_26bacc;
        case 0x26bad0u: goto label_26bad0;
        case 0x26bad4u: goto label_26bad4;
        case 0x26bad8u: goto label_26bad8;
        case 0x26badcu: goto label_26badc;
        case 0x26bae0u: goto label_26bae0;
        case 0x26bae4u: goto label_26bae4;
        case 0x26bae8u: goto label_26bae8;
        case 0x26baecu: goto label_26baec;
        case 0x26baf0u: goto label_26baf0;
        case 0x26baf4u: goto label_26baf4;
        case 0x26baf8u: goto label_26baf8;
        case 0x26bafcu: goto label_26bafc;
        case 0x26bb00u: goto label_26bb00;
        case 0x26bb04u: goto label_26bb04;
        case 0x26bb08u: goto label_26bb08;
        case 0x26bb0cu: goto label_26bb0c;
        case 0x26bb10u: goto label_26bb10;
        case 0x26bb14u: goto label_26bb14;
        case 0x26bb18u: goto label_26bb18;
        case 0x26bb1cu: goto label_26bb1c;
        case 0x26bb20u: goto label_26bb20;
        case 0x26bb24u: goto label_26bb24;
        case 0x26bb28u: goto label_26bb28;
        case 0x26bb2cu: goto label_26bb2c;
        case 0x26bb30u: goto label_26bb30;
        case 0x26bb34u: goto label_26bb34;
        case 0x26bb38u: goto label_26bb38;
        case 0x26bb3cu: goto label_26bb3c;
        case 0x26bb40u: goto label_26bb40;
        case 0x26bb44u: goto label_26bb44;
        case 0x26bb48u: goto label_26bb48;
        case 0x26bb4cu: goto label_26bb4c;
        case 0x26bb50u: goto label_26bb50;
        case 0x26bb54u: goto label_26bb54;
        case 0x26bb58u: goto label_26bb58;
        case 0x26bb5cu: goto label_26bb5c;
        case 0x26bb60u: goto label_26bb60;
        case 0x26bb64u: goto label_26bb64;
        case 0x26bb68u: goto label_26bb68;
        case 0x26bb6cu: goto label_26bb6c;
        case 0x26bb70u: goto label_26bb70;
        case 0x26bb74u: goto label_26bb74;
        case 0x26bb78u: goto label_26bb78;
        case 0x26bb7cu: goto label_26bb7c;
        case 0x26bb80u: goto label_26bb80;
        case 0x26bb84u: goto label_26bb84;
        case 0x26bb88u: goto label_26bb88;
        case 0x26bb8cu: goto label_26bb8c;
        case 0x26bb90u: goto label_26bb90;
        case 0x26bb94u: goto label_26bb94;
        case 0x26bb98u: goto label_26bb98;
        case 0x26bb9cu: goto label_26bb9c;
        case 0x26bba0u: goto label_26bba0;
        case 0x26bba4u: goto label_26bba4;
        case 0x26bba8u: goto label_26bba8;
        case 0x26bbacu: goto label_26bbac;
        case 0x26bbb0u: goto label_26bbb0;
        case 0x26bbb4u: goto label_26bbb4;
        case 0x26bbb8u: goto label_26bbb8;
        case 0x26bbbcu: goto label_26bbbc;
        case 0x26bbc0u: goto label_26bbc0;
        case 0x26bbc4u: goto label_26bbc4;
        case 0x26bbc8u: goto label_26bbc8;
        case 0x26bbccu: goto label_26bbcc;
        case 0x26bbd0u: goto label_26bbd0;
        case 0x26bbd4u: goto label_26bbd4;
        case 0x26bbd8u: goto label_26bbd8;
        case 0x26bbdcu: goto label_26bbdc;
        case 0x26bbe0u: goto label_26bbe0;
        case 0x26bbe4u: goto label_26bbe4;
        case 0x26bbe8u: goto label_26bbe8;
        case 0x26bbecu: goto label_26bbec;
        case 0x26bbf0u: goto label_26bbf0;
        case 0x26bbf4u: goto label_26bbf4;
        case 0x26bbf8u: goto label_26bbf8;
        case 0x26bbfcu: goto label_26bbfc;
        case 0x26bc00u: goto label_26bc00;
        case 0x26bc04u: goto label_26bc04;
        case 0x26bc08u: goto label_26bc08;
        case 0x26bc0cu: goto label_26bc0c;
        case 0x26bc10u: goto label_26bc10;
        case 0x26bc14u: goto label_26bc14;
        case 0x26bc18u: goto label_26bc18;
        case 0x26bc1cu: goto label_26bc1c;
        case 0x26bc20u: goto label_26bc20;
        case 0x26bc24u: goto label_26bc24;
        case 0x26bc28u: goto label_26bc28;
        case 0x26bc2cu: goto label_26bc2c;
        case 0x26bc30u: goto label_26bc30;
        case 0x26bc34u: goto label_26bc34;
        case 0x26bc38u: goto label_26bc38;
        case 0x26bc3cu: goto label_26bc3c;
        case 0x26bc40u: goto label_26bc40;
        case 0x26bc44u: goto label_26bc44;
        case 0x26bc48u: goto label_26bc48;
        case 0x26bc4cu: goto label_26bc4c;
        case 0x26bc50u: goto label_26bc50;
        case 0x26bc54u: goto label_26bc54;
        case 0x26bc58u: goto label_26bc58;
        case 0x26bc5cu: goto label_26bc5c;
        case 0x26bc60u: goto label_26bc60;
        case 0x26bc64u: goto label_26bc64;
        case 0x26bc68u: goto label_26bc68;
        case 0x26bc6cu: goto label_26bc6c;
        case 0x26bc70u: goto label_26bc70;
        case 0x26bc74u: goto label_26bc74;
        case 0x26bc78u: goto label_26bc78;
        case 0x26bc7cu: goto label_26bc7c;
        case 0x26bc80u: goto label_26bc80;
        case 0x26bc84u: goto label_26bc84;
        case 0x26bc88u: goto label_26bc88;
        case 0x26bc8cu: goto label_26bc8c;
        case 0x26bc90u: goto label_26bc90;
        case 0x26bc94u: goto label_26bc94;
        case 0x26bc98u: goto label_26bc98;
        case 0x26bc9cu: goto label_26bc9c;
        case 0x26bca0u: goto label_26bca0;
        case 0x26bca4u: goto label_26bca4;
        case 0x26bca8u: goto label_26bca8;
        case 0x26bcacu: goto label_26bcac;
        case 0x26bcb0u: goto label_26bcb0;
        case 0x26bcb4u: goto label_26bcb4;
        case 0x26bcb8u: goto label_26bcb8;
        case 0x26bcbcu: goto label_26bcbc;
        case 0x26bcc0u: goto label_26bcc0;
        case 0x26bcc4u: goto label_26bcc4;
        case 0x26bcc8u: goto label_26bcc8;
        case 0x26bcccu: goto label_26bccc;
        case 0x26bcd0u: goto label_26bcd0;
        case 0x26bcd4u: goto label_26bcd4;
        case 0x26bcd8u: goto label_26bcd8;
        case 0x26bcdcu: goto label_26bcdc;
        case 0x26bce0u: goto label_26bce0;
        case 0x26bce4u: goto label_26bce4;
        case 0x26bce8u: goto label_26bce8;
        case 0x26bcecu: goto label_26bcec;
        case 0x26bcf0u: goto label_26bcf0;
        case 0x26bcf4u: goto label_26bcf4;
        case 0x26bcf8u: goto label_26bcf8;
        case 0x26bcfcu: goto label_26bcfc;
        case 0x26bd00u: goto label_26bd00;
        case 0x26bd04u: goto label_26bd04;
        case 0x26bd08u: goto label_26bd08;
        case 0x26bd0cu: goto label_26bd0c;
        case 0x26bd10u: goto label_26bd10;
        case 0x26bd14u: goto label_26bd14;
        case 0x26bd18u: goto label_26bd18;
        case 0x26bd1cu: goto label_26bd1c;
        case 0x26bd20u: goto label_26bd20;
        case 0x26bd24u: goto label_26bd24;
        case 0x26bd28u: goto label_26bd28;
        case 0x26bd2cu: goto label_26bd2c;
        case 0x26bd30u: goto label_26bd30;
        case 0x26bd34u: goto label_26bd34;
        case 0x26bd38u: goto label_26bd38;
        case 0x26bd3cu: goto label_26bd3c;
        case 0x26bd40u: goto label_26bd40;
        case 0x26bd44u: goto label_26bd44;
        case 0x26bd48u: goto label_26bd48;
        case 0x26bd4cu: goto label_26bd4c;
        case 0x26bd50u: goto label_26bd50;
        case 0x26bd54u: goto label_26bd54;
        case 0x26bd58u: goto label_26bd58;
        case 0x26bd5cu: goto label_26bd5c;
        case 0x26bd60u: goto label_26bd60;
        case 0x26bd64u: goto label_26bd64;
        case 0x26bd68u: goto label_26bd68;
        case 0x26bd6cu: goto label_26bd6c;
        case 0x26bd70u: goto label_26bd70;
        case 0x26bd74u: goto label_26bd74;
        case 0x26bd78u: goto label_26bd78;
        case 0x26bd7cu: goto label_26bd7c;
        case 0x26bd80u: goto label_26bd80;
        case 0x26bd84u: goto label_26bd84;
        case 0x26bd88u: goto label_26bd88;
        case 0x26bd8cu: goto label_26bd8c;
        case 0x26bd90u: goto label_26bd90;
        case 0x26bd94u: goto label_26bd94;
        case 0x26bd98u: goto label_26bd98;
        case 0x26bd9cu: goto label_26bd9c;
        case 0x26bda0u: goto label_26bda0;
        case 0x26bda4u: goto label_26bda4;
        case 0x26bda8u: goto label_26bda8;
        case 0x26bdacu: goto label_26bdac;
        case 0x26bdb0u: goto label_26bdb0;
        case 0x26bdb4u: goto label_26bdb4;
        case 0x26bdb8u: goto label_26bdb8;
        case 0x26bdbcu: goto label_26bdbc;
        case 0x26bdc0u: goto label_26bdc0;
        case 0x26bdc4u: goto label_26bdc4;
        case 0x26bdc8u: goto label_26bdc8;
        case 0x26bdccu: goto label_26bdcc;
        case 0x26bdd0u: goto label_26bdd0;
        case 0x26bdd4u: goto label_26bdd4;
        case 0x26bdd8u: goto label_26bdd8;
        case 0x26bddcu: goto label_26bddc;
        case 0x26bde0u: goto label_26bde0;
        case 0x26bde4u: goto label_26bde4;
        case 0x26bde8u: goto label_26bde8;
        case 0x26bdecu: goto label_26bdec;
        case 0x26bdf0u: goto label_26bdf0;
        case 0x26bdf4u: goto label_26bdf4;
        case 0x26bdf8u: goto label_26bdf8;
        case 0x26bdfcu: goto label_26bdfc;
        case 0x26be00u: goto label_26be00;
        case 0x26be04u: goto label_26be04;
        case 0x26be08u: goto label_26be08;
        case 0x26be0cu: goto label_26be0c;
        case 0x26be10u: goto label_26be10;
        case 0x26be14u: goto label_26be14;
        case 0x26be18u: goto label_26be18;
        case 0x26be1cu: goto label_26be1c;
        case 0x26be20u: goto label_26be20;
        case 0x26be24u: goto label_26be24;
        case 0x26be28u: goto label_26be28;
        case 0x26be2cu: goto label_26be2c;
        case 0x26be30u: goto label_26be30;
        case 0x26be34u: goto label_26be34;
        case 0x26be38u: goto label_26be38;
        case 0x26be3cu: goto label_26be3c;
        case 0x26be40u: goto label_26be40;
        case 0x26be44u: goto label_26be44;
        case 0x26be48u: goto label_26be48;
        case 0x26be4cu: goto label_26be4c;
        case 0x26be50u: goto label_26be50;
        case 0x26be54u: goto label_26be54;
        case 0x26be58u: goto label_26be58;
        case 0x26be5cu: goto label_26be5c;
        case 0x26be60u: goto label_26be60;
        case 0x26be64u: goto label_26be64;
        case 0x26be68u: goto label_26be68;
        case 0x26be6cu: goto label_26be6c;
        case 0x26be70u: goto label_26be70;
        case 0x26be74u: goto label_26be74;
        case 0x26be78u: goto label_26be78;
        case 0x26be7cu: goto label_26be7c;
        case 0x26be80u: goto label_26be80;
        case 0x26be84u: goto label_26be84;
        case 0x26be88u: goto label_26be88;
        case 0x26be8cu: goto label_26be8c;
        case 0x26be90u: goto label_26be90;
        case 0x26be94u: goto label_26be94;
        case 0x26be98u: goto label_26be98;
        case 0x26be9cu: goto label_26be9c;
        case 0x26bea0u: goto label_26bea0;
        case 0x26bea4u: goto label_26bea4;
        case 0x26bea8u: goto label_26bea8;
        case 0x26beacu: goto label_26beac;
        case 0x26beb0u: goto label_26beb0;
        case 0x26beb4u: goto label_26beb4;
        case 0x26beb8u: goto label_26beb8;
        case 0x26bebcu: goto label_26bebc;
        case 0x26bec0u: goto label_26bec0;
        case 0x26bec4u: goto label_26bec4;
        case 0x26bec8u: goto label_26bec8;
        case 0x26beccu: goto label_26becc;
        case 0x26bed0u: goto label_26bed0;
        case 0x26bed4u: goto label_26bed4;
        case 0x26bed8u: goto label_26bed8;
        case 0x26bedcu: goto label_26bedc;
        case 0x26bee0u: goto label_26bee0;
        case 0x26bee4u: goto label_26bee4;
        case 0x26bee8u: goto label_26bee8;
        case 0x26beecu: goto label_26beec;
        case 0x26bef0u: goto label_26bef0;
        case 0x26bef4u: goto label_26bef4;
        case 0x26bef8u: goto label_26bef8;
        case 0x26befcu: goto label_26befc;
        case 0x26bf00u: goto label_26bf00;
        case 0x26bf04u: goto label_26bf04;
        case 0x26bf08u: goto label_26bf08;
        case 0x26bf0cu: goto label_26bf0c;
        case 0x26bf10u: goto label_26bf10;
        case 0x26bf14u: goto label_26bf14;
        case 0x26bf18u: goto label_26bf18;
        case 0x26bf1cu: goto label_26bf1c;
        case 0x26bf20u: goto label_26bf20;
        default: break;
    }

    ctx->pc = 0x26b2f0u;

label_26b2f0:
    // 0x26b2f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x26b2f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_26b2f4:
    // 0x26b2f4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x26b2f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
label_26b2f8:
    // 0x26b2f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x26b2f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_26b2fc:
    // 0x26b2fc: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x26b2fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
label_26b300:
    // 0x26b300: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x26b300u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
label_26b304:
    // 0x26b304: 0x24900080  addiu       $s0, $a0, 0x80
    ctx->pc = 0x26b304u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
label_26b308:
    // 0x26b308: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x26b308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_26b30c:
    // 0x26b30c: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x26b30cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_26b310:
    // 0x26b310: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x26b310u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_26b314:
    // 0x26b314: 0x2ca10006  sltiu       $at, $a1, 0x6
    ctx->pc = 0x26b314u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_26b318:
    // 0x26b318: 0x102002f0  beqz        $at, . + 4 + (0x2F0 << 2)
label_26b31c:
    if (ctx->pc == 0x26B31Cu) {
        ctx->pc = 0x26B320u;
        goto label_26b320;
    }
    ctx->pc = 0x26B318u;
    {
        const bool branch_taken_0x26b318 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x26b318) {
            ctx->pc = 0x26BEDCu;
            goto label_26bedc;
        }
    }
    ctx->pc = 0x26B320u;
label_26b320:
    // 0x26b320: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x26b320u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_26b324:
    // 0x26b324: 0x24671480  addiu       $a3, $v1, 0x1480
    ctx->pc = 0x26b324u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 5248));
label_26b328:
    // 0x26b328: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x26b328u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_26b32c:
    // 0x26b32c: 0xa73021  addu        $a2, $a1, $a3
    ctx->pc = 0x26b32cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_26b330:
    // 0x26b330: 0x8cc80000  lw          $t0, 0x0($a2)
    ctx->pc = 0x26b330u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_26b334:
    // 0x26b334: 0x1000008  jr          $t0
label_26b338:
    if (ctx->pc == 0x26B338u) {
        ctx->pc = 0x26B33Cu;
        goto label_26b33c;
    }
    ctx->pc = 0x26B334u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 8);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26B334u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x26B33Cu;
label_26b33c:
    // 0x26b33c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x26b33cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_26b340:
    // 0x26b340: 0x8c221a98  lw          $v0, 0x1A98($at)
    ctx->pc = 0x26b340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6808)));
label_26b344:
    // 0x26b344: 0x34442000  ori         $a0, $v0, 0x2000
    ctx->pc = 0x26b344u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
label_26b348:
    // 0x26b348: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x26b348u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_26b34c:
    // 0x26b34c: 0xac241a98  sw          $a0, 0x1A98($at)
    ctx->pc = 0x26b34cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6808), GPR_U32(ctx, 4));
label_26b350:
    // 0x26b350: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x26b350u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_26b354:
    // 0x26b354: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x26b354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_26b358:
    // 0x26b358: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x26b358u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
label_26b35c:
    // 0x26b35c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26b35cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26b360:
    // 0x26b360: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x26b360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_26b364:
    // 0x26b364: 0xe4401b50  swc1        $f0, 0x1B50($v0)
    ctx->pc = 0x26b364u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 6992), bits); }
label_26b368:
    // 0x26b368: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26b368u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26b36c:
    // 0x26b36c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x26b36cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_26b370:
    // 0x26b370: 0xe4401b54  swc1        $f0, 0x1B54($v0)
    ctx->pc = 0x26b370u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 6996), bits); }
label_26b374:
    // 0x26b374: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26b374u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26b378:
    // 0x26b378: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x26b378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_26b37c:
    // 0x26b37c: 0xe4401b58  swc1        $f0, 0x1B58($v0)
    ctx->pc = 0x26b37cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 7000), bits); }
label_26b380:
    // 0x26b380: 0x8fa70038  lw          $a3, 0x38($sp)
    ctx->pc = 0x26b380u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_26b384:
    // 0x26b384: 0xace01b64  sw          $zero, 0x1B64($a3)
    ctx->pc = 0x26b384u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 7012), GPR_U32(ctx, 0));
label_26b388:
    // 0x26b388: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x26b388u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_26b38c:
    // 0x26b38c: 0xa4a0127c  sh          $zero, 0x127C($a1)
    ctx->pc = 0x26b38cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4732), (uint16_t)GPR_U32(ctx, 0));
label_26b390:
    // 0x26b390: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x26b390u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_26b394:
    // 0x26b394: 0xc4c000d4  lwc1        $f0, 0xD4($a2)
    ctx->pc = 0x26b394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26b398:
    // 0x26b398: 0x8fa80038  lw          $t0, 0x38($sp)
    ctx->pc = 0x26b398u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_26b39c:
    // 0x26b39c: 0xe5001290  swc1        $f0, 0x1290($t0)
    ctx->pc = 0x26b39cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4752), bits); }
label_26b3a0:
    // 0x26b3a0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x26b3a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_26b3a4:
    // 0x26b3a4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x26b3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_26b3a8:
    // 0x26b3a8: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x26b3a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_26b3ac:
    // 0x26b3ac: 0x24060a82  addiu       $a2, $zero, 0xA82
    ctx->pc = 0x26b3acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2690));
label_26b3b0:
    // 0x26b3b0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x26b3b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26b3b4:
    // 0x26b3b4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x26b3b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_26b3b8:
    // 0x26b3b8: 0xc0965d0  jal         func_259740
label_26b3bc:
    if (ctx->pc == 0x26B3BCu) {
        ctx->pc = 0x26B3C0u;
        goto label_26b3c0;
    }
    ctx->pc = 0x26B3B8u;
    SET_GPR_U32(ctx, 31, 0x26B3C0u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x26B3B8u, 0x26B3C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B3C0u;
label_26b3c0:
    // 0x26b3c0: 0x8fa70038  lw          $a3, 0x38($sp)
    ctx->pc = 0x26b3c0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_26b3c4:
    // 0x26b3c4: 0x24e50120  addiu       $a1, $a3, 0x120
    ctx->pc = 0x26b3c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 288));
label_26b3c8:
    // 0x26b3c8: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x26b3c8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_26b3cc:
    // 0x26b3cc: 0xc057a80  jal         func_15EA00
label_26b3d0:
    if (ctx->pc == 0x26B3D0u) {
        ctx->pc = 0x26B3D4u;
        goto label_26b3d4;
    }
    ctx->pc = 0x26B3CCu;
    SET_GPR_U32(ctx, 31, 0x26B3D4u);
    ctx->pc = 0x15EA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EA00u, 0x26B3CCu, 0x26B3D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B3D4u;
label_26b3d4:
    // 0x26b3d4: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x26b3d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_26b3d8:
    // 0x26b3d8: 0xc4c20124  lwc1        $f2, 0x124($a2)
    ctx->pc = 0x26b3d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_26b3dc:
    // 0x26b3dc: 0x3c024467  lui         $v0, 0x4467
    ctx->pc = 0x26b3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17511 << 16));
label_26b3e0:
    // 0x26b3e0: 0x34484000  ori         $t0, $v0, 0x4000
    ctx->pc = 0x26b3e0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_26b3e4:
    // 0x26b3e4: 0x44880800  mtc1        $t0, $f1
    ctx->pc = 0x26b3e4u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_26b3e8:
    // 0x26b3e8: 0x0  nop
    ctx->pc = 0x26b3e8u;
    // NOP
label_26b3ec:
    // 0x26b3ec: 0x46020880  add.s       $f2, $f1, $f2
    ctx->pc = 0x26b3ecu;
    ctx->f[2] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_26b3f0:
    // 0x26b3f0: 0x3c0443fa  lui         $a0, 0x43FA
    ctx->pc = 0x26b3f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17402 << 16));
label_26b3f4:
    // 0x26b3f4: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x26b3f4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_26b3f8:
    // 0x26b3f8: 0x0  nop
    ctx->pc = 0x26b3f8u;
    // NOP
label_26b3fc:
    // 0x26b3fc: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x26b3fcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_26b400:
    // 0x26b400: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x26b400u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_26b404:
    // 0x26b404: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x26b404u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_26b408:
    // 0x26b408: 0xc7a1002c  lwc1        $f1, 0x2C($sp)
    ctx->pc = 0x26b408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26b40c:
    // 0x26b40c: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x26b40cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
label_26b410:
    // 0x26b410: 0x34434000  ori         $v1, $v0, 0x4000
    ctx->pc = 0x26b410u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_26b414:
    // 0x26b414: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x26b414u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26b418:
    // 0x26b418: 0x0  nop
    ctx->pc = 0x26b418u;
    // NOP
label_26b41c:
    // 0x26b41c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x26b41cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_26b420:
    // 0x26b420: 0x0  nop
    ctx->pc = 0x26b420u;
    // NOP
label_26b424:
    // 0x26b424: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_26b428:
    if (ctx->pc == 0x26B428u) {
        ctx->pc = 0x26B42Cu;
        goto label_26b42c;
    }
    ctx->pc = 0x26B424u;
    {
        const bool branch_taken_0x26b424 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26b424) {
            ctx->pc = 0x26B440u;
            goto label_26b440;
        }
    }
    ctx->pc = 0x26B42Cu;
label_26b42c:
    // 0x26b42c: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x26b42cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
label_26b430:
    // 0x26b430: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x26b430u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_26b434:
    // 0x26b434: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26b434u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26b438:
    // 0x26b438: 0x0  nop
    ctx->pc = 0x26b438u;
    // NOP
label_26b43c:
    // 0x26b43c: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x26b43cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_26b440:
    // 0x26b440: 0xc7a1002c  lwc1        $f1, 0x2C($sp)
    ctx->pc = 0x26b440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26b444:
    // 0x26b444: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26b444u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26b448:
    // 0x26b448: 0x0  nop
    ctx->pc = 0x26b448u;
    // NOP
label_26b44c:
    // 0x26b44c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x26b44cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_26b450:
    // 0x26b450: 0x0  nop
    ctx->pc = 0x26b450u;
    // NOP
label_26b454:
    // 0x26b454: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_26b458:
    if (ctx->pc == 0x26B458u) {
        ctx->pc = 0x26B45Cu;
        goto label_26b45c;
    }
    ctx->pc = 0x26B454u;
    {
        const bool branch_taken_0x26b454 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26b454) {
            ctx->pc = 0x26B468u;
            goto label_26b468;
        }
    }
    ctx->pc = 0x26B45Cu;
label_26b45c:
    // 0x26b45c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26b45cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26b460:
    // 0x26b460: 0x0  nop
    ctx->pc = 0x26b460u;
    // NOP
label_26b464:
    // 0x26b464: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x26b464u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_26b468:
    // 0x26b468: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x26b468u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_26b46c:
    // 0x26b46c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x26b46cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_26b470:
    // 0x26b470: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x26b470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26b474:
    // 0x26b474: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x26b474u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_26b478:
    // 0x26b478: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x26b478u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_26b47c:
    // 0x26b47c: 0x3c053f4c  lui         $a1, 0x3F4C
    ctx->pc = 0x26b47cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16204 << 16));
label_26b480:
    // 0x26b480: 0x34a7cccd  ori         $a3, $a1, 0xCCCD
    ctx->pc = 0x26b480u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)52429);
label_26b484:
    // 0x26b484: 0x44870800  mtc1        $a3, $f1
    ctx->pc = 0x26b484u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_26b488:
    // 0x26b488: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x26b488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26b48c:
    // 0x26b48c: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x26b48cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_26b490:
    // 0x26b490: 0xc045630  jal         func_1158C0
label_26b494:
    if (ctx->pc == 0x26B494u) {
        ctx->pc = 0x26B498u;
        goto label_26b498;
    }
    ctx->pc = 0x26B490u;
    SET_GPR_U32(ctx, 31, 0x26B498u);
    ctx->pc = 0x1158C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1158C0u, 0x26B490u, 0x26B498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B498u;
label_26b498:
    // 0x26b498: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x26b498u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_26b49c:
    // 0x26b49c: 0x3c064020  lui         $a2, 0x4020
    ctx->pc = 0x26b49cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16416 << 16));
label_26b4a0:
    // 0x26b4a0: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x26b4a0u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_26b4a4:
    // 0x26b4a4: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x26b4a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26b4a8:
    // 0x26b4a8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x26b4a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_26b4ac:
    // 0x26b4ac: 0x8fa80038  lw          $t0, 0x38($sp)
    ctx->pc = 0x26b4acu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_26b4b0:
    // 0x26b4b0: 0xe5001284  swc1        $f0, 0x1284($t0)
    ctx->pc = 0x26b4b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4740), bits); }
label_26b4b4:
    // 0x26b4b4: 0xc7ac002c  lwc1        $f12, 0x2C($sp)
    ctx->pc = 0x26b4b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_26b4b8:
    // 0x26b4b8: 0xc047fa2  jal         func_11FE88
label_26b4bc:
    if (ctx->pc == 0x26B4BCu) {
        ctx->pc = 0x26B4C0u;
        goto label_26b4c0;
    }
    ctx->pc = 0x26B4B8u;
    SET_GPR_U32(ctx, 31, 0x26B4C0u);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x26B4B8u, 0x26B4C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B4C0u;
label_26b4c0:
    // 0x26b4c0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x26b4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_26b4c4:
    // 0x26b4c4: 0xac621b60  sw          $v0, 0x1B60($v1)
    ctx->pc = 0x26b4c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7008), GPR_U32(ctx, 2));
label_26b4c8:
    // 0x26b4c8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x26b4c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_26b4cc:
    // 0x26b4cc: 0x8c831b60  lw          $v1, 0x1B60($a0)
    ctx->pc = 0x26b4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 7008)));
label_26b4d0:
    // 0x26b4d0: 0x2462001e  addiu       $v0, $v1, 0x1E
    ctx->pc = 0x26b4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 30));
label_26b4d4:
    // 0x26b4d4: 0xac821b60  sw          $v0, 0x1B60($a0)
    ctx->pc = 0x26b4d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 7008), GPR_U32(ctx, 2));
label_26b4d8:
    // 0x26b4d8: 0x3c024020  lui         $v0, 0x4020
    ctx->pc = 0x26b4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16416 << 16));
label_26b4dc:
    // 0x26b4dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26b4dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26b4e0:
    // 0x26b4e0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x26b4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_26b4e4:
    // 0x26b4e4: 0xe4401280  swc1        $f0, 0x1280($v0)
    ctx->pc = 0x26b4e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4736), bits); }
label_26b4e8:
    // 0x26b4e8: 0x8fa70038  lw          $a3, 0x38($sp)
    ctx->pc = 0x26b4e8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_26b4ec:
    // 0x26b4ec: 0x24e41b40  addiu       $a0, $a3, 0x1B40
    ctx->pc = 0x26b4ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 6976));
label_26b4f0:
    // 0x26b4f0: 0xc0675a4  jal         func_19D690
label_26b4f4:
    if (ctx->pc == 0x26B4F4u) {
        ctx->pc = 0x26B4F8u;
        goto label_26b4f8;
    }
    ctx->pc = 0x26B4F0u;
    SET_GPR_U32(ctx, 31, 0x26B4F8u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x26B4F0u, 0x26B4F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B4F8u;
label_26b4f8:
    // 0x26b4f8: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x26b4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
label_26b4fc:
    // 0x26b4fc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x26b4fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_26b500:
    // 0x26b500: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x26b500u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_26b504:
    // 0x26b504: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x26b504u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_26b508:
    // 0x26b508: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x26b508u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
label_26b50c:
    // 0x26b50c: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x26b50cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_26b510:
    // 0x26b510: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x26b510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_26b514:
    // 0x26b514: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x26b514u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_26b518:
    // 0x26b518: 0x24c61b40  addiu       $a2, $a2, 0x1B40
    ctx->pc = 0x26b518u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 6976));
label_26b51c:
    // 0x26b51c: 0x8c471b60  lw          $a3, 0x1B60($v0)
    ctx->pc = 0x26b51cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7008)));
label_26b520:
    // 0x26b520: 0x2408000f  addiu       $t0, $zero, 0xF
    ctx->pc = 0x26b520u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_26b524:
    // 0x26b524: 0xc0bbfe4  jal         func_2EFF90
label_26b528:
    if (ctx->pc == 0x26B528u) {
        ctx->pc = 0x26B52Cu;
        goto label_26b52c;
    }
    ctx->pc = 0x26B524u;
    SET_GPR_U32(ctx, 31, 0x26B52Cu);
    ctx->pc = 0x2EFF90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EFF90u, 0x26B524u, 0x26B52Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B52Cu;
label_26b52c:
    // 0x26b52c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x26b52cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_26b530:
    // 0x26b530: 0x24441b40  addiu       $a0, $v0, 0x1B40
    ctx->pc = 0x26b530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 6976));
label_26b534:
    // 0x26b534: 0xc0675a4  jal         func_19D690
label_26b538:
    if (ctx->pc == 0x26B538u) {
        ctx->pc = 0x26B53Cu;
        goto label_26b53c;
    }
    ctx->pc = 0x26B534u;
    SET_GPR_U32(ctx, 31, 0x26B53Cu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x26B534u, 0x26B53Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B53Cu;
label_26b53c:
    // 0x26b53c: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x26b53cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
label_26b540:
    // 0x26b540: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x26b540u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_26b544:
    // 0x26b544: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x26b544u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_26b548:
    // 0x26b548: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x26b548u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_26b54c:
    // 0x26b54c: 0x3c034316  lui         $v1, 0x4316
    ctx->pc = 0x26b54cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17174 << 16));
label_26b550:
    // 0x26b550: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x26b550u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_26b554:
    // 0x26b554: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x26b554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_26b558:
    // 0x26b558: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x26b558u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_26b55c:
    // 0x26b55c: 0x24c61b40  addiu       $a2, $a2, 0x1B40
    ctx->pc = 0x26b55cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 6976));
label_26b560:
    // 0x26b560: 0x8c471b60  lw          $a3, 0x1B60($v0)
    ctx->pc = 0x26b560u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7008)));
label_26b564:
    // 0x26b564: 0x2408000f  addiu       $t0, $zero, 0xF
    ctx->pc = 0x26b564u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_26b568:
    // 0x26b568: 0xc0bbfe4  jal         func_2EFF90
label_26b56c:
    if (ctx->pc == 0x26B56Cu) {
        ctx->pc = 0x26B570u;
        goto label_26b570;
    }
    ctx->pc = 0x26B568u;
    SET_GPR_U32(ctx, 31, 0x26B570u);
    ctx->pc = 0x2EFF90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EFF90u, 0x26B568u, 0x26B570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B570u;
label_26b570:
    // 0x26b570: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x26b570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_26b574:
    // 0x26b574: 0x24441b40  addiu       $a0, $v0, 0x1B40
    ctx->pc = 0x26b574u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 6976));
label_26b578:
    // 0x26b578: 0xc0675a4  jal         func_19D690
label_26b57c:
    if (ctx->pc == 0x26B57Cu) {
        ctx->pc = 0x26B580u;
        goto label_26b580;
    }
    ctx->pc = 0x26B578u;
    SET_GPR_U32(ctx, 31, 0x26B580u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x26B578u, 0x26B580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B580u;
label_26b580:
    // 0x26b580: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x26b580u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
label_26b584:
    // 0x26b584: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x26b584u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_26b588:
    // 0x26b588: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x26b588u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_26b58c:
    // 0x26b58c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x26b58cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_26b590:
    // 0x26b590: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x26b590u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
label_26b594:
    // 0x26b594: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x26b594u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_26b598:
    // 0x26b598: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x26b598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_26b59c:
    // 0x26b59c: 0x24050017  addiu       $a1, $zero, 0x17
    ctx->pc = 0x26b59cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_26b5a0:
    // 0x26b5a0: 0x24661b40  addiu       $a2, $v1, 0x1B40
    ctx->pc = 0x26b5a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 6976));
label_26b5a4:
    // 0x26b5a4: 0x8c471b60  lw          $a3, 0x1B60($v0)
    ctx->pc = 0x26b5a4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7008)));
label_26b5a8:
    // 0x26b5a8: 0x2408000f  addiu       $t0, $zero, 0xF
    ctx->pc = 0x26b5a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_26b5ac:
    // 0x26b5ac: 0xc0bbfe4  jal         func_2EFF90
label_26b5b0:
    if (ctx->pc == 0x26B5B0u) {
        ctx->pc = 0x26B5B4u;
        goto label_26b5b4;
    }
    ctx->pc = 0x26B5ACu;
    SET_GPR_U32(ctx, 31, 0x26B5B4u);
    ctx->pc = 0x2EFF90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EFF90u, 0x26B5ACu, 0x26B5B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B5B4u;
label_26b5b4:
    // 0x26b5b4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x26b5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_26b5b8:
    // 0x26b5b8: 0x24441b40  addiu       $a0, $v0, 0x1B40
    ctx->pc = 0x26b5b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 6976));
label_26b5bc:
    // 0x26b5bc: 0xc0675a4  jal         func_19D690
label_26b5c0:
    if (ctx->pc == 0x26B5C0u) {
        ctx->pc = 0x26B5C4u;
        goto label_26b5c4;
    }
    ctx->pc = 0x26B5BCu;
    SET_GPR_U32(ctx, 31, 0x26B5C4u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x26B5BCu, 0x26B5C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B5C4u;
label_26b5c4:
    // 0x26b5c4: 0x3c034316  lui         $v1, 0x4316
    ctx->pc = 0x26b5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17174 << 16));
label_26b5c8:
    // 0x26b5c8: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x26b5c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_26b5cc:
    // 0x26b5cc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x26b5ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_26b5d0:
    // 0x26b5d0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x26b5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_26b5d4:
    // 0x26b5d4: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x26b5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
label_26b5d8:
    // 0x26b5d8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x26b5d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_26b5dc:
    // 0x26b5dc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x26b5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_26b5e0:
    // 0x26b5e0: 0x2405001b  addiu       $a1, $zero, 0x1B
    ctx->pc = 0x26b5e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
label_26b5e4:
    // 0x26b5e4: 0x24661b40  addiu       $a2, $v1, 0x1B40
    ctx->pc = 0x26b5e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 6976));
label_26b5e8:
    // 0x26b5e8: 0x8c471b60  lw          $a3, 0x1B60($v0)
    ctx->pc = 0x26b5e8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7008)));
label_26b5ec:
    // 0x26b5ec: 0x2408000f  addiu       $t0, $zero, 0xF
    ctx->pc = 0x26b5ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_26b5f0:
    // 0x26b5f0: 0xc0bbfe4  jal         func_2EFF90
label_26b5f4:
    if (ctx->pc == 0x26B5F4u) {
        ctx->pc = 0x26B5F8u;
        goto label_26b5f8;
    }
    ctx->pc = 0x26B5F0u;
    SET_GPR_U32(ctx, 31, 0x26B5F8u);
    ctx->pc = 0x2EFF90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EFF90u, 0x26B5F0u, 0x26B5F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B5F8u;
label_26b5f8:
    // 0x26b5f8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x26b5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_26b5fc:
    // 0x26b5fc: 0x24441b40  addiu       $a0, $v0, 0x1B40
    ctx->pc = 0x26b5fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 6976));
label_26b600:
    // 0x26b600: 0xc0675a4  jal         func_19D690
label_26b604:
    if (ctx->pc == 0x26B604u) {
        ctx->pc = 0x26B608u;
        goto label_26b608;
    }
    ctx->pc = 0x26B600u;
    SET_GPR_U32(ctx, 31, 0x26B608u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x26B600u, 0x26B608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B608u;
label_26b608:
    // 0x26b608: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x26b608u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
label_26b60c:
    // 0x26b60c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26b60cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26b610:
    // 0x26b610: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x26b610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_26b614:
    // 0x26b614: 0xe4401b40  swc1        $f0, 0x1B40($v0)
    ctx->pc = 0x26b614u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 6976), bits); }
label_26b618:
    // 0x26b618: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x26b618u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
label_26b61c:
    // 0x26b61c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x26b61cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26b620:
    // 0x26b620: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x26b620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_26b624:
    // 0x26b624: 0xe4401b48  swc1        $f0, 0x1B48($v0)
    ctx->pc = 0x26b624u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 6984), bits); }
label_26b628:
    // 0x26b628: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x26b628u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
label_26b62c:
    // 0x26b62c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x26b62cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_26b630:
    // 0x26b630: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x26b630u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_26b634:
    // 0x26b634: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x26b634u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_26b638:
    // 0x26b638: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x26b638u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
label_26b63c:
    // 0x26b63c: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x26b63cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_26b640:
    // 0x26b640: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x26b640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_26b644:
    // 0x26b644: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x26b644u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_26b648:
    // 0x26b648: 0x24c61b40  addiu       $a2, $a2, 0x1B40
    ctx->pc = 0x26b648u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 6976));
label_26b64c:
    // 0x26b64c: 0x8c471b60  lw          $a3, 0x1B60($v0)
    ctx->pc = 0x26b64cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7008)));
label_26b650:
    // 0x26b650: 0x2408000f  addiu       $t0, $zero, 0xF
    ctx->pc = 0x26b650u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_26b654:
    // 0x26b654: 0xc0bbfe4  jal         func_2EFF90
label_26b658:
    if (ctx->pc == 0x26B658u) {
        ctx->pc = 0x26B65Cu;
        goto label_26b65c;
    }
    ctx->pc = 0x26B654u;
    SET_GPR_U32(ctx, 31, 0x26B65Cu);
    ctx->pc = 0x2EFF90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EFF90u, 0x26B654u, 0x26B65Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B65Cu;
label_26b65c:
    // 0x26b65c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x26b65cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_26b660:
    // 0x26b660: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x26b660u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_26b664:
    // 0x26b664: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x26b664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_26b668:
    // 0x26b668: 0xa0820002  sb          $v0, 0x2($a0)
    ctx->pc = 0x26b668u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 2));
label_26b66c:
    // 0x26b66c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x26b66cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_26b670:
    // 0x26b670: 0x904309db  lbu         $v1, 0x9DB($v0)
    ctx->pc = 0x26b670u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
label_26b674:
    // 0x26b674: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x26b674u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_26b678:
    // 0x26b678: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x26b678u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
label_26b67c:
    // 0x26b67c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_26b680:
    if (ctx->pc == 0x26B680u) {
        ctx->pc = 0x26B684u;
        goto label_26b684;
    }
    ctx->pc = 0x26B67Cu;
    {
        const bool branch_taken_0x26b67c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26b67c) {
            ctx->pc = 0x26B694u;
            goto label_26b694;
        }
    }
    ctx->pc = 0x26B684u;
label_26b684:
    // 0x26b684: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x26b684u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_26b688:
    // 0x26b688: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x26b688u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_26b68c:
    // 0x26b68c: 0xc0bc448  jal         func_2F1120
label_26b690:
    if (ctx->pc == 0x26B690u) {
        ctx->pc = 0x26B694u;
        goto label_26b694;
    }
    ctx->pc = 0x26B68Cu;
    SET_GPR_U32(ctx, 31, 0x26B694u);
    ctx->pc = 0x2F1120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1120u, 0x26B68Cu, 0x26B694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B694u;
label_26b694:
    // 0x26b694: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x26b694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_26b698:
    // 0x26b698: 0x906209da  lbu         $v0, 0x9DA($v1)
    ctx->pc = 0x26b698u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2522)));
label_26b69c:
    // 0x26b69c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x26b69cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_26b6a0:
    // 0x26b6a0: 0x30620040  andi        $v0, $v1, 0x40
    ctx->pc = 0x26b6a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
label_26b6a4:
    // 0x26b6a4: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_26b6a8:
    if (ctx->pc == 0x26B6A8u) {
        ctx->pc = 0x26B6ACu;
        goto label_26b6ac;
    }
    ctx->pc = 0x26B6A4u;
    {
        const bool branch_taken_0x26b6a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26b6a4) {
            ctx->pc = 0x26B748u;
            goto label_26b748;
        }
    }
    ctx->pc = 0x26B6ACu;
label_26b6ac:
    // 0x26b6ac: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x26b6acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_26b6b0:
    // 0x26b6b0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x26b6b0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_26b6b4:
    // 0x26b6b4: 0xc096b40  jal         func_25AD00
label_26b6b8:
    if (ctx->pc == 0x26B6B8u) {
        ctx->pc = 0x26B6BCu;
        goto label_26b6bc;
    }
    ctx->pc = 0x26B6B4u;
    SET_GPR_U32(ctx, 31, 0x26B6BCu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x26B6B4u, 0x26B6BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B6BCu;
label_26b6bc:
    // 0x26b6bc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x26b6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_26b6c0:
    // 0x26b6c0: 0x24440180  addiu       $a0, $v0, 0x180
    ctx->pc = 0x26b6c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
label_26b6c4:
    // 0x26b6c4: 0xc0675a4  jal         func_19D690
label_26b6c8:
    if (ctx->pc == 0x26B6C8u) {
        ctx->pc = 0x26B6CCu;
        goto label_26b6cc;
    }
    ctx->pc = 0x26B6C4u;
    SET_GPR_U32(ctx, 31, 0x26B6CCu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x26B6C4u, 0x26B6CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B6CCu;
label_26b6cc:
    // 0x26b6cc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x26b6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_26b6d0:
    // 0x26b6d0: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x26b6d0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_26b6d4:
    // 0x26b6d4: 0xc05cd10  jal         func_173440
label_26b6d8:
    if (ctx->pc == 0x26B6D8u) {
        ctx->pc = 0x26B6DCu;
        goto label_26b6dc;
    }
    ctx->pc = 0x26B6D4u;
    SET_GPR_U32(ctx, 31, 0x26B6DCu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x26B6D4u, 0x26B6DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B6DCu;
label_26b6dc:
    // 0x26b6dc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x26b6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_26b6e0:
    // 0x26b6e0: 0xc4411284  lwc1        $f1, 0x1284($v0)
    ctx->pc = 0x26b6e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26b6e4:
    // 0x26b6e4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26b6e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26b6e8:
    // 0x26b6e8: 0x0  nop
    ctx->pc = 0x26b6e8u;
    // NOP
label_26b6ec:
    // 0x26b6ec: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x26b6ecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_26b6f0:
    // 0x26b6f0: 0x0  nop
    ctx->pc = 0x26b6f0u;
    // NOP
label_26b6f4:
    // 0x26b6f4: 0x4501000d  bc1t        . + 4 + (0xD << 2)
label_26b6f8:
    if (ctx->pc == 0x26B6F8u) {
        ctx->pc = 0x26B6FCu;
        goto label_26b6fc;
    }
    ctx->pc = 0x26B6F4u;
    {
        const bool branch_taken_0x26b6f4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26b6f4) {
            ctx->pc = 0x26B72Cu;
            goto label_26b72c;
        }
    }
    ctx->pc = 0x26B6FCu;
label_26b6fc:
    // 0x26b6fc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x26b6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_26b700:
    // 0x26b700: 0xc4411284  lwc1        $f1, 0x1284($v0)
    ctx->pc = 0x26b700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26b704:
    // 0x26b704: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x26b704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_26b708:
    // 0x26b708: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x26b708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26b70c:
    // 0x26b70c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x26b70cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_26b710:
    // 0x26b710: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x26b710u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_26b714:
    // 0x26b714: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x26b714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_26b718:
    // 0x26b718: 0xc4411280  lwc1        $f1, 0x1280($v0)
    ctx->pc = 0x26b718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26b71c:
    // 0x26b71c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x26b71cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_26b720:
    // 0x26b720: 0xc4401284  lwc1        $f0, 0x1284($v0)
    ctx->pc = 0x26b720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26b724:
    // 0x26b724: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x26b724u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_26b728:
    // 0x26b728: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x26b728u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
label_26b72c:
    // 0x26b72c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x26b72cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_26b730:
    // 0x26b730: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x26b730u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_26b734:
    // 0x26b734: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x26b734u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_26b738:
    // 0x26b738: 0xc0574f4  jal         func_15D3D0
label_26b73c:
    if (ctx->pc == 0x26B73Cu) {
        ctx->pc = 0x26B740u;
        goto label_26b740;
    }
    ctx->pc = 0x26B738u;
    SET_GPR_U32(ctx, 31, 0x26B740u);
    ctx->pc = 0x15D3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D3D0u, 0x26B738u, 0x26B740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B740u;
label_26b740:
    // 0x26b740: 0x1000000d  b           . + 4 + (0xD << 2)
label_26b744:
    if (ctx->pc == 0x26B744u) {
        ctx->pc = 0x26B748u;
        goto label_26b748;
    }
    ctx->pc = 0x26B740u;
    {
        const bool branch_taken_0x26b740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26b740) {
            ctx->pc = 0x26B778u;
            goto label_26b778;
        }
    }
    ctx->pc = 0x26B748u;
label_26b748:
    // 0x26b748: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x26b748u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_26b74c:
    // 0x26b74c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x26b74cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_26b750:
    // 0x26b750: 0xc096b40  jal         func_25AD00
label_26b754:
    if (ctx->pc == 0x26B754u) {
        ctx->pc = 0x26B758u;
        goto label_26b758;
    }
    ctx->pc = 0x26B750u;
    SET_GPR_U32(ctx, 31, 0x26B758u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x26B750u, 0x26B758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B758u;
label_26b758:
    // 0x26b758: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x26b758u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_26b75c:
    // 0x26b75c: 0xc05cd10  jal         func_173440
label_26b760:
    if (ctx->pc == 0x26B760u) {
        ctx->pc = 0x26B764u;
        goto label_26b764;
    }
    ctx->pc = 0x26B75Cu;
    SET_GPR_U32(ctx, 31, 0x26B764u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x26B75Cu, 0x26B764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B764u;
label_26b764:
    // 0x26b764: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x26b764u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_26b768:
    // 0x26b768: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x26b768u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_26b76c:
    // 0x26b76c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x26b76cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_26b770:
    // 0x26b770: 0xc0573d8  jal         func_15CF60
label_26b774:
    if (ctx->pc == 0x26B774u) {
        ctx->pc = 0x26B778u;
        goto label_26b778;
    }
    ctx->pc = 0x26B770u;
    SET_GPR_U32(ctx, 31, 0x26B778u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x26B770u, 0x26B778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B778u;
label_26b778:
    // 0x26b778: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x26b778u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_26b77c:
    // 0x26b77c: 0xc097530  jal         func_25D4C0
label_26b780:
    if (ctx->pc == 0x26B780u) {
        ctx->pc = 0x26B784u;
        goto label_26b784;
    }
    ctx->pc = 0x26B77Cu;
    SET_GPR_U32(ctx, 31, 0x26B784u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x26B77Cu, 0x26B784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B784u;
label_26b784:
    // 0x26b784: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x26b784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_26b788:
    // 0x26b788: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x26b788u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_26b78c:
    // 0x26b78c: 0x106001d3  beqz        $v1, . + 4 + (0x1D3 << 2)
label_26b790:
    if (ctx->pc == 0x26B790u) {
        ctx->pc = 0x26B794u;
        goto label_26b794;
    }
    ctx->pc = 0x26B78Cu;
    {
        const bool branch_taken_0x26b78c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x26b78c) {
            ctx->pc = 0x26BEDCu;
            goto label_26bedc;
        }
    }
    ctx->pc = 0x26B794u;
label_26b794:
    // 0x26b794: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x26b794u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_26b798:
    // 0x26b798: 0x90a30002  lbu         $v1, 0x2($a1)
    ctx->pc = 0x26b798u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
label_26b79c:
    // 0x26b79c: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x26b79cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_26b7a0:
    // 0x26b7a0: 0xa0a40002  sb          $a0, 0x2($a1)
    ctx->pc = 0x26b7a0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 4));
label_26b7a4:
    // 0x26b7a4: 0x100001cd  b           . + 4 + (0x1CD << 2)
label_26b7a8:
    if (ctx->pc == 0x26B7A8u) {
        ctx->pc = 0x26B7ACu;
        goto label_26b7ac;
    }
    ctx->pc = 0x26B7A4u;
    {
        const bool branch_taken_0x26b7a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26b7a4) {
            ctx->pc = 0x26BEDCu;
            goto label_26bedc;
        }
    }
    ctx->pc = 0x26B7ACu;
label_26b7ac:
    // 0x26b7ac: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x26b7acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_26b7b0:
    // 0x26b7b0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x26b7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_26b7b4:
    // 0x26b7b4: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x26b7b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_26b7b8:
    // 0x26b7b8: 0x2406056a  addiu       $a2, $zero, 0x56A
    ctx->pc = 0x26b7b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1386));
label_26b7bc:
    // 0x26b7bc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x26b7bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26b7c0:
    // 0x26b7c0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x26b7c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_26b7c4:
    // 0x26b7c4: 0xc0965d0  jal         func_259740
label_26b7c8:
    if (ctx->pc == 0x26B7C8u) {
        ctx->pc = 0x26B7CCu;
        goto label_26b7cc;
    }
    ctx->pc = 0x26B7C4u;
    SET_GPR_U32(ctx, 31, 0x26B7CCu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x26B7C4u, 0x26B7CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B7CCu;
label_26b7cc:
    // 0x26b7cc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x26b7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_26b7d0:
    // 0x26b7d0: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x26b7d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_26b7d4:
    // 0x26b7d4: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x26b7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
label_26b7d8:
    // 0x26b7d8: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x26b7d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_26b7dc:
    // 0x26b7dc: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x26b7dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
label_26b7e0:
    // 0x26b7e0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x26b7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_26b7e4:
    // 0x26b7e4: 0xa46013c0  sh          $zero, 0x13C0($v1)
    ctx->pc = 0x26b7e4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 5056), (uint16_t)GPR_U32(ctx, 0));
label_26b7e8:
    // 0x26b7e8: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x26b7e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_26b7ec:
    // 0x26b7ec: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x26b7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_26b7f0:
    // 0x26b7f0: 0xa46413c2  sh          $a0, 0x13C2($v1)
    ctx->pc = 0x26b7f0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 5058), (uint16_t)GPR_U32(ctx, 4));
label_26b7f4:
    // 0x26b7f4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x26b7f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_26b7f8:
    // 0x26b7f8: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x26b7f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_26b7fc:
    // 0x26b7fc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x26b7fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_26b800:
    // 0x26b800: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x26b800u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_26b804:
    // 0x26b804: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x26b804u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_26b808:
    // 0x26b808: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x26b808u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_26b80c:
    // 0x26b80c: 0xc096b40  jal         func_25AD00
label_26b810:
    if (ctx->pc == 0x26B810u) {
        ctx->pc = 0x26B814u;
        goto label_26b814;
    }
    ctx->pc = 0x26B80Cu;
    SET_GPR_U32(ctx, 31, 0x26B814u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x26B80Cu, 0x26B814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B814u;
label_26b814:
    // 0x26b814: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x26b814u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_26b818:
    // 0x26b818: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x26b818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_26b81c:
    // 0x26b81c: 0x24640180  addiu       $a0, $v1, 0x180
    ctx->pc = 0x26b81cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 384));
label_26b820:
    // 0x26b820: 0xc0675a4  jal         func_19D690
label_26b824:
    if (ctx->pc == 0x26B824u) {
        ctx->pc = 0x26B828u;
        goto label_26b828;
    }
    ctx->pc = 0x26B820u;
    SET_GPR_U32(ctx, 31, 0x26B828u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x26B820u, 0x26B828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B828u;
label_26b828:
    // 0x26b828: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x26b828u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_26b82c:
    // 0x26b82c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x26b82cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_26b830:
    // 0x26b830: 0xc05cd10  jal         func_173440
label_26b834:
    if (ctx->pc == 0x26B834u) {
        ctx->pc = 0x26B838u;
        goto label_26b838;
    }
    ctx->pc = 0x26B830u;
    SET_GPR_U32(ctx, 31, 0x26B838u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x26B830u, 0x26B838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B838u;
label_26b838:
    // 0x26b838: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x26b838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_26b83c:
    // 0x26b83c: 0xc4611284  lwc1        $f1, 0x1284($v1)
    ctx->pc = 0x26b83cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26b840:
    // 0x26b840: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26b840u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26b844:
    // 0x26b844: 0x0  nop
    ctx->pc = 0x26b844u;
    // NOP
label_26b848:
    // 0x26b848: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x26b848u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_26b84c:
    // 0x26b84c: 0x0  nop
    ctx->pc = 0x26b84cu;
    // NOP
label_26b850:
    // 0x26b850: 0x4501001d  bc1t        . + 4 + (0x1D << 2)
label_26b854:
    if (ctx->pc == 0x26B854u) {
        ctx->pc = 0x26B858u;
        goto label_26b858;
    }
    ctx->pc = 0x26B850u;
    {
        const bool branch_taken_0x26b850 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26b850) {
            ctx->pc = 0x26B8C8u;
            goto label_26b8c8;
        }
    }
    ctx->pc = 0x26B858u;
label_26b858:
    // 0x26b858: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x26b858u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_26b85c:
    // 0x26b85c: 0xc4811284  lwc1        $f1, 0x1284($a0)
    ctx->pc = 0x26b85cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26b860:
    // 0x26b860: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x26b860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_26b864:
    // 0x26b864: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x26b864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26b868:
    // 0x26b868: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x26b868u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_26b86c:
    // 0x26b86c: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x26b86cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
label_26b870:
    // 0x26b870: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x26b870u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_26b874:
    // 0x26b874: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x26b874u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_26b878:
    // 0x26b878: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x26b878u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_26b87c:
    // 0x26b87c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_26b880:
    if (ctx->pc == 0x26B880u) {
        ctx->pc = 0x26B884u;
        goto label_26b884;
    }
    ctx->pc = 0x26B87Cu;
    {
        const bool branch_taken_0x26b87c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26b87c) {
            ctx->pc = 0x26B8B0u;
            goto label_26b8b0;
        }
    }
    ctx->pc = 0x26B884u;
label_26b884:
    // 0x26b884: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x26b884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_26b888:
    // 0x26b888: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x26b888u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_26b88c:
    // 0x26b88c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x26b88cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_26b890:
    // 0x26b890: 0xc4601280  lwc1        $f0, 0x1280($v1)
    ctx->pc = 0x26b890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26b894:
    // 0x26b894: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x26b894u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_26b898:
    // 0x26b898: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x26b898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_26b89c:
    // 0x26b89c: 0xc4401284  lwc1        $f0, 0x1284($v0)
    ctx->pc = 0x26b89cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26b8a0:
    // 0x26b8a0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x26b8a0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_26b8a4:
    // 0x26b8a4: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x26b8a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
label_26b8a8:
    // 0x26b8a8: 0x10000007  b           . + 4 + (0x7 << 2)
label_26b8ac:
    if (ctx->pc == 0x26B8ACu) {
        ctx->pc = 0x26B8B0u;
        goto label_26b8b0;
    }
    ctx->pc = 0x26B8A8u;
    {
        const bool branch_taken_0x26b8a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26b8a8) {
            ctx->pc = 0x26B8C8u;
            goto label_26b8c8;
        }
    }
    ctx->pc = 0x26B8B0u;
label_26b8b0:
    // 0x26b8b0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x26b8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_26b8b4:
    // 0x26b8b4: 0xc4411280  lwc1        $f1, 0x1280($v0)
    ctx->pc = 0x26b8b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26b8b8:
    // 0x26b8b8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x26b8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_26b8bc:
    // 0x26b8bc: 0xc4401284  lwc1        $f0, 0x1284($v0)
    ctx->pc = 0x26b8bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26b8c0:
    // 0x26b8c0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x26b8c0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_26b8c4:
    // 0x26b8c4: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x26b8c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
label_26b8c8:
    // 0x26b8c8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x26b8c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_26b8cc:
    // 0x26b8cc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x26b8ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_26b8d0:
    // 0x26b8d0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x26b8d0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_26b8d4:
    // 0x26b8d4: 0xc0574f4  jal         func_15D3D0
label_26b8d8:
    if (ctx->pc == 0x26B8D8u) {
        ctx->pc = 0x26B8DCu;
        goto label_26b8dc;
    }
    ctx->pc = 0x26B8D4u;
    SET_GPR_U32(ctx, 31, 0x26B8DCu);
    ctx->pc = 0x15D3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D3D0u, 0x26B8D4u, 0x26B8DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B8DCu;
label_26b8dc:
    // 0x26b8dc: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x26b8dcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_26b8e0:
    // 0x26b8e0: 0xc097530  jal         func_25D4C0
label_26b8e4:
    if (ctx->pc == 0x26B8E4u) {
        ctx->pc = 0x26B8E8u;
        goto label_26b8e8;
    }
    ctx->pc = 0x26B8E0u;
    SET_GPR_U32(ctx, 31, 0x26B8E8u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x26B8E0u, 0x26B8E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B8E8u;
label_26b8e8:
    // 0x26b8e8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x26b8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_26b8ec:
    // 0x26b8ec: 0xc4611284  lwc1        $f1, 0x1284($v1)
    ctx->pc = 0x26b8ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26b8f0:
    // 0x26b8f0: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x26b8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
label_26b8f4:
    // 0x26b8f4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x26b8f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26b8f8:
    // 0x26b8f8: 0x0  nop
    ctx->pc = 0x26b8f8u;
    // NOP
label_26b8fc:
    // 0x26b8fc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x26b8fcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_26b900:
    // 0x26b900: 0x0  nop
    ctx->pc = 0x26b900u;
    // NOP
label_26b904:
    // 0x26b904: 0x45000009  bc1f        . + 4 + (0x9 << 2)
label_26b908:
    if (ctx->pc == 0x26B908u) {
        ctx->pc = 0x26B90Cu;
        goto label_26b90c;
    }
    ctx->pc = 0x26B904u;
    {
        const bool branch_taken_0x26b904 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26b904) {
            ctx->pc = 0x26B92Cu;
            goto label_26b92c;
        }
    }
    ctx->pc = 0x26B90Cu;
label_26b90c:
    // 0x26b90c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x26b90cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_26b910:
    // 0x26b910: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x26b910u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_26b914:
    // 0x26b914: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_26b918:
    if (ctx->pc == 0x26B918u) {
        ctx->pc = 0x26B91Cu;
        goto label_26b91c;
    }
    ctx->pc = 0x26B914u;
    {
        const bool branch_taken_0x26b914 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x26b914) {
            ctx->pc = 0x26B92Cu;
            goto label_26b92c;
        }
    }
    ctx->pc = 0x26B91Cu;
label_26b91c:
    // 0x26b91c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x26b91cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_26b920:
    // 0x26b920: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x26b920u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_26b924:
    // 0x26b924: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x26b924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_26b928:
    // 0x26b928: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x26b928u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_26b92c:
    // 0x26b92c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x26b92cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_26b930:
    // 0x26b930: 0x8463127c  lh          $v1, 0x127C($v1)
    ctx->pc = 0x26b930u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4732)));
label_26b934:
    // 0x26b934: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x26b934u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_26b938:
    // 0x26b938: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x26b938u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_26b93c:
    // 0x26b93c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x26b93cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_26b940:
    // 0x26b940: 0x14600166  bnez        $v1, . + 4 + (0x166 << 2)
label_26b944:
    if (ctx->pc == 0x26B944u) {
        ctx->pc = 0x26B948u;
        goto label_26b948;
    }
    ctx->pc = 0x26B940u;
    {
        const bool branch_taken_0x26b940 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x26b940) {
            ctx->pc = 0x26BEDCu;
            goto label_26bedc;
        }
    }
    ctx->pc = 0x26B948u;
label_26b948:
    // 0x26b948: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x26b948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_26b94c:
    // 0x26b94c: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x26b94cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_26b950:
    // 0x26b950: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x26b950u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
label_26b954:
    // 0x26b954: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x26b954u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_26b958:
    // 0x26b958: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x26b958u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_26b95c:
    // 0x26b95c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x26b95cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_26b960:
    // 0x26b960: 0x3c0244bb  lui         $v0, 0x44BB
    ctx->pc = 0x26b960u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17595 << 16));
label_26b964:
    // 0x26b964: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x26b964u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_26b968:
    // 0x26b968: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x26b968u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_26b96c:
    // 0x26b96c: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x26b96cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_26b970:
    // 0x26b970: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x26b970u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_26b974:
    // 0x26b974: 0x24660030  addiu       $a2, $v1, 0x30
    ctx->pc = 0x26b974u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
label_26b978:
    // 0x26b978: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x26b978u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_26b97c:
    // 0x26b97c: 0xc086488  jal         func_219220
label_26b980:
    if (ctx->pc == 0x26B980u) {
        ctx->pc = 0x26B984u;
        goto label_26b984;
    }
    ctx->pc = 0x26B97Cu;
    SET_GPR_U32(ctx, 31, 0x26B984u);
    ctx->pc = 0x219220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219220u, 0x26B97Cu, 0x26B984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B984u;
label_26b984:
    // 0x26b984: 0x10000155  b           . + 4 + (0x155 << 2)
label_26b988:
    if (ctx->pc == 0x26B988u) {
        ctx->pc = 0x26B98Cu;
        goto label_26b98c;
    }
    ctx->pc = 0x26B984u;
    {
        const bool branch_taken_0x26b984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26b984) {
            ctx->pc = 0x26BEDCu;
            goto label_26bedc;
        }
    }
    ctx->pc = 0x26B98Cu;
label_26b98c:
    // 0x26b98c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x26b98cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_26b990:
    // 0x26b990: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x26b990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_26b994:
    // 0x26b994: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x26b994u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_26b998:
    // 0x26b998: 0x2406006b  addiu       $a2, $zero, 0x6B
    ctx->pc = 0x26b998u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 107));
label_26b99c:
    // 0x26b99c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x26b99cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26b9a0:
    // 0x26b9a0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x26b9a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_26b9a4:
    // 0x26b9a4: 0xc0965d0  jal         func_259740
label_26b9a8:
    if (ctx->pc == 0x26B9A8u) {
        ctx->pc = 0x26B9ACu;
        goto label_26b9ac;
    }
    ctx->pc = 0x26B9A4u;
    SET_GPR_U32(ctx, 31, 0x26B9ACu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x26B9A4u, 0x26B9ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B9ACu;
label_26b9ac:
    // 0x26b9ac: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x26b9acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_26b9b0:
    // 0x26b9b0: 0x24441b40  addiu       $a0, $v0, 0x1B40
    ctx->pc = 0x26b9b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 6976));
label_26b9b4:
    // 0x26b9b4: 0xc0675a4  jal         func_19D690
label_26b9b8:
    if (ctx->pc == 0x26B9B8u) {
        ctx->pc = 0x26B9BCu;
        goto label_26b9bc;
    }
    ctx->pc = 0x26B9B4u;
    SET_GPR_U32(ctx, 31, 0x26B9BCu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x26B9B4u, 0x26B9BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B9BCu;
label_26b9bc:
    // 0x26b9bc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x26b9bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_26b9c0:
    // 0x26b9c0: 0x8fb00038  lw          $s0, 0x38($sp)
    ctx->pc = 0x26b9c0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_26b9c4:
    // 0x26b9c4: 0x3c034316  lui         $v1, 0x4316
    ctx->pc = 0x26b9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17174 << 16));
label_26b9c8:
    // 0x26b9c8: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x26b9c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_26b9cc:
    // 0x26b9cc: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x26b9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
label_26b9d0:
    // 0x26b9d0: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x26b9d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_26b9d4:
    // 0x26b9d4: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x26b9d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_26b9d8:
    // 0x26b9d8: 0x94a30a02  lhu         $v1, 0xA02($a1)
    ctx->pc = 0x26b9d8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2562)));
label_26b9dc:
    // 0x26b9dc: 0x3067ffff  andi        $a3, $v1, 0xFFFF
    ctx->pc = 0x26b9dcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_26b9e0:
    // 0x26b9e0: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x26b9e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_26b9e4:
    // 0x26b9e4: 0x26061b40  addiu       $a2, $s0, 0x1B40
    ctx->pc = 0x26b9e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 6976));
label_26b9e8:
    // 0x26b9e8: 0x2408000f  addiu       $t0, $zero, 0xF
    ctx->pc = 0x26b9e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_26b9ec:
    // 0x26b9ec: 0xc0bbfe4  jal         func_2EFF90
label_26b9f0:
    if (ctx->pc == 0x26B9F0u) {
        ctx->pc = 0x26B9F4u;
        goto label_26b9f4;
    }
    ctx->pc = 0x26B9ECu;
    SET_GPR_U32(ctx, 31, 0x26B9F4u);
    ctx->pc = 0x2EFF90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EFF90u, 0x26B9ECu, 0x26B9F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B9F4u;
label_26b9f4:
    // 0x26b9f4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x26b9f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_26b9f8:
    // 0x26b9f8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x26b9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_26b9fc:
    // 0x26b9fc: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x26b9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
label_26ba00:
    // 0x26ba00: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x26ba00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_26ba04:
    // 0x26ba04: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x26ba04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
label_26ba08:
    // 0x26ba08: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x26ba08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_26ba0c:
    // 0x26ba0c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x26ba0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_26ba10:
    // 0x26ba10: 0x94420a02  lhu         $v0, 0xA02($v0)
    ctx->pc = 0x26ba10u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2562)));
label_26ba14:
    // 0x26ba14: 0x3047ffff  andi        $a3, $v0, 0xFFFF
    ctx->pc = 0x26ba14u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_26ba18:
    // 0x26ba18: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x26ba18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_26ba1c:
    // 0x26ba1c: 0x24661b40  addiu       $a2, $v1, 0x1B40
    ctx->pc = 0x26ba1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 6976));
label_26ba20:
    // 0x26ba20: 0x2408000f  addiu       $t0, $zero, 0xF
    ctx->pc = 0x26ba20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_26ba24:
    // 0x26ba24: 0xc0bbfe4  jal         func_2EFF90
label_26ba28:
    if (ctx->pc == 0x26BA28u) {
        ctx->pc = 0x26BA2Cu;
        goto label_26ba2c;
    }
    ctx->pc = 0x26BA24u;
    SET_GPR_U32(ctx, 31, 0x26BA2Cu);
    ctx->pc = 0x2EFF90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EFF90u, 0x26BA24u, 0x26BA2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BA2Cu;
label_26ba2c:
    // 0x26ba2c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x26ba2cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_26ba30:
    // 0x26ba30: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x26ba30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
label_26ba34:
    // 0x26ba34: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x26ba34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_26ba38:
    // 0x26ba38: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x26ba38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_26ba3c:
    // 0x26ba3c: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x26ba3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_26ba40:
    // 0x26ba40: 0x3c074316  lui         $a3, 0x4316
    ctx->pc = 0x26ba40u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)17174 << 16));
label_26ba44:
    // 0x26ba44: 0x44876000  mtc1        $a3, $f12
    ctx->pc = 0x26ba44u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_26ba48:
    // 0x26ba48: 0x8fa80038  lw          $t0, 0x38($sp)
    ctx->pc = 0x26ba48u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_26ba4c:
    // 0x26ba4c: 0x95020a02  lhu         $v0, 0xA02($t0)
    ctx->pc = 0x26ba4cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 2562)));
label_26ba50:
    // 0x26ba50: 0x3047ffff  andi        $a3, $v0, 0xFFFF
    ctx->pc = 0x26ba50u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_26ba54:
    // 0x26ba54: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x26ba54u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_26ba58:
    // 0x26ba58: 0x24050017  addiu       $a1, $zero, 0x17
    ctx->pc = 0x26ba58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_26ba5c:
    // 0x26ba5c: 0x24c61b40  addiu       $a2, $a2, 0x1B40
    ctx->pc = 0x26ba5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 6976));
label_26ba60:
    // 0x26ba60: 0x2408000f  addiu       $t0, $zero, 0xF
    ctx->pc = 0x26ba60u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_26ba64:
    // 0x26ba64: 0xc0bbfe4  jal         func_2EFF90
label_26ba68:
    if (ctx->pc == 0x26BA68u) {
        ctx->pc = 0x26BA6Cu;
        goto label_26ba6c;
    }
    ctx->pc = 0x26BA64u;
    SET_GPR_U32(ctx, 31, 0x26BA6Cu);
    ctx->pc = 0x2EFF90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EFF90u, 0x26BA64u, 0x26BA6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BA6Cu;
label_26ba6c:
    // 0x26ba6c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x26ba6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_26ba70:
    // 0x26ba70: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x26ba70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_26ba74:
    // 0x26ba74: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x26ba74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
label_26ba78:
    // 0x26ba78: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x26ba78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_26ba7c:
    // 0x26ba7c: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x26ba7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
label_26ba80:
    // 0x26ba80: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x26ba80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_26ba84:
    // 0x26ba84: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x26ba84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_26ba88:
    // 0x26ba88: 0x94420a02  lhu         $v0, 0xA02($v0)
    ctx->pc = 0x26ba88u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2562)));
label_26ba8c:
    // 0x26ba8c: 0x3047ffff  andi        $a3, $v0, 0xFFFF
    ctx->pc = 0x26ba8cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_26ba90:
    // 0x26ba90: 0x2405001b  addiu       $a1, $zero, 0x1B
    ctx->pc = 0x26ba90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
label_26ba94:
    // 0x26ba94: 0x24661b40  addiu       $a2, $v1, 0x1B40
    ctx->pc = 0x26ba94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 6976));
label_26ba98:
    // 0x26ba98: 0x2408000f  addiu       $t0, $zero, 0xF
    ctx->pc = 0x26ba98u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_26ba9c:
    // 0x26ba9c: 0xc0bbfe4  jal         func_2EFF90
label_26baa0:
    if (ctx->pc == 0x26BAA0u) {
        ctx->pc = 0x26BAA4u;
        goto label_26baa4;
    }
    ctx->pc = 0x26BA9Cu;
    SET_GPR_U32(ctx, 31, 0x26BAA4u);
    ctx->pc = 0x2EFF90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EFF90u, 0x26BA9Cu, 0x26BAA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BAA4u;
label_26baa4:
    // 0x26baa4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x26baa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_26baa8:
    // 0x26baa8: 0x8c640130  lw          $a0, 0x130($v1)
    ctx->pc = 0x26baa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
label_26baac:
    // 0x26baac: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x26baacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
label_26bab0:
    // 0x26bab0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x26bab0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_26bab4:
    // 0x26bab4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x26bab4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_26bab8:
    // 0x26bab8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x26bab8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_26babc:
    // 0x26babc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x26babcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_26bac0:
    // 0x26bac0: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x26bac0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_26bac4:
    // 0x26bac4: 0x24041702  addiu       $a0, $zero, 0x1702
    ctx->pc = 0x26bac4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5890));
label_26bac8:
    // 0x26bac8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x26bac8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_26bacc:
    // 0x26bacc: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x26baccu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_26bad0:
    // 0x26bad0: 0xc062f5c  jal         func_18BD70
label_26bad4:
    if (ctx->pc == 0x26BAD4u) {
        ctx->pc = 0x26BAD8u;
        goto label_26bad8;
    }
    ctx->pc = 0x26BAD0u;
    SET_GPR_U32(ctx, 31, 0x26BAD8u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x26BAD0u, 0x26BAD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BAD8u;
label_26bad8:
    // 0x26bad8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x26bad8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_26badc:
    // 0x26badc: 0xc0630a8  jal         func_18C2A0
label_26bae0:
    if (ctx->pc == 0x26BAE0u) {
        ctx->pc = 0x26BAE4u;
        goto label_26bae4;
    }
    ctx->pc = 0x26BADCu;
    SET_GPR_U32(ctx, 31, 0x26BAE4u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x26BADCu, 0x26BAE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BAE4u;
label_26bae4:
    // 0x26bae4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x26bae4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_26bae8:
    // 0x26bae8: 0x8c860130  lw          $a2, 0x130($a0)
    ctx->pc = 0x26bae8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
label_26baec:
    // 0x26baec: 0x6183c  dsll32      $v1, $a2, 0
    ctx->pc = 0x26baecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 0));
label_26baf0:
    // 0x26baf0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x26baf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_26baf4:
    // 0x26baf4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x26baf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_26baf8:
    // 0x26baf8: 0x22c38  dsll        $a1, $v0, 16
    ctx->pc = 0x26baf8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << 16);
label_26bafc:
    // 0x26bafc: 0x34a6ffff  ori         $a2, $a1, 0xFFFF
    ctx->pc = 0x26bafcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
label_26bb00:
    // 0x26bb00: 0x663824  and         $a3, $v1, $a2
    ctx->pc = 0x26bb00u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
label_26bb04:
    // 0x26bb04: 0x24082d00  addiu       $t0, $zero, 0x2D00
    ctx->pc = 0x26bb04u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 11520));
label_26bb08:
    // 0x26bb08: 0x71002628  paddub      $a0, $t0, $zero
    ctx->pc = 0x26bb08u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
label_26bb0c:
    // 0x26bb0c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x26bb0cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_26bb10:
    // 0x26bb10: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x26bb10u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_26bb14:
    // 0x26bb14: 0xc062f5c  jal         func_18BD70
label_26bb18:
    if (ctx->pc == 0x26BB18u) {
        ctx->pc = 0x26BB1Cu;
        goto label_26bb1c;
    }
    ctx->pc = 0x26BB14u;
    SET_GPR_U32(ctx, 31, 0x26BB1Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x26BB14u, 0x26BB1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BB1Cu;
label_26bb1c:
    // 0x26bb1c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x26bb1cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_26bb20:
    // 0x26bb20: 0xc0630a8  jal         func_18C2A0
label_26bb24:
    if (ctx->pc == 0x26BB24u) {
        ctx->pc = 0x26BB28u;
        goto label_26bb28;
    }
    ctx->pc = 0x26BB20u;
    SET_GPR_U32(ctx, 31, 0x26BB28u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x26BB20u, 0x26BB28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BB28u;
label_26bb28:
    // 0x26bb28: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x26bb28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_26bb2c:
    // 0x26bb2c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x26bb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_26bb30:
    // 0x26bb30: 0xac441b6c  sw          $a0, 0x1B6C($v0)
    ctx->pc = 0x26bb30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7020), GPR_U32(ctx, 4));
label_26bb34:
    // 0x26bb34: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x26bb34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_26bb38:
    // 0x26bb38: 0x90440002  lbu         $a0, 0x2($v0)
    ctx->pc = 0x26bb38u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_26bb3c:
    // 0x26bb3c: 0x24860001  addiu       $a2, $a0, 0x1
    ctx->pc = 0x26bb3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_26bb40:
    // 0x26bb40: 0xa0460002  sb          $a2, 0x2($v0)
    ctx->pc = 0x26bb40u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 6));
label_26bb44:
    // 0x26bb44: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x26bb44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_26bb48:
    // 0x26bb48: 0xc4611b54  lwc1        $f1, 0x1B54($v1)
    ctx->pc = 0x26bb48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6996)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26bb4c:
    // 0x26bb4c: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x26bb4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
label_26bb50:
    // 0x26bb50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26bb50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26bb54:
    // 0x26bb54: 0x0  nop
    ctx->pc = 0x26bb54u;
    // NOP
label_26bb58:
    // 0x26bb58: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x26bb58u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_26bb5c:
    // 0x26bb5c: 0xe4601b54  swc1        $f0, 0x1B54($v1)
    ctx->pc = 0x26bb5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 6996), bits); }
label_26bb60:
    // 0x26bb60: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x26bb60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_26bb64:
    // 0x26bb64: 0x8ca61b64  lw          $a2, 0x1B64($a1)
    ctx->pc = 0x26bb64u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 7012)));
label_26bb68:
    // 0x26bb68: 0x10c00023  beqz        $a2, . + 4 + (0x23 << 2)
label_26bb6c:
    if (ctx->pc == 0x26BB6Cu) {
        ctx->pc = 0x26BB70u;
        goto label_26bb70;
    }
    ctx->pc = 0x26BB68u;
    {
        const bool branch_taken_0x26bb68 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x26bb68) {
            ctx->pc = 0x26BBF8u;
            goto label_26bbf8;
        }
    }
    ctx->pc = 0x26BB70u;
label_26bb70:
    // 0x26bb70: 0x8fa70038  lw          $a3, 0x38($sp)
    ctx->pc = 0x26bb70u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_26bb74:
    // 0x26bb74: 0xc4e11b58  lwc1        $f1, 0x1B58($a3)
    ctx->pc = 0x26bb74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 7000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26bb78:
    // 0x26bb78: 0x3c084080  lui         $t0, 0x4080
    ctx->pc = 0x26bb78u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16512 << 16));
label_26bb7c:
    // 0x26bb7c: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x26bb7cu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26bb80:
    // 0x26bb80: 0x0  nop
    ctx->pc = 0x26bb80u;
    // NOP
label_26bb84:
    // 0x26bb84: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x26bb84u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_26bb88:
    // 0x26bb88: 0xe4e01b58  swc1        $f0, 0x1B58($a3)
    ctx->pc = 0x26bb88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 7000), bits); }
label_26bb8c:
    // 0x26bb8c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x26bb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_26bb90:
    // 0x26bb90: 0xc4411b58  lwc1        $f1, 0x1B58($v0)
    ctx->pc = 0x26bb90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 7000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26bb94:
    // 0x26bb94: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26bb94u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26bb98:
    // 0x26bb98: 0x0  nop
    ctx->pc = 0x26bb98u;
    // NOP
label_26bb9c:
    // 0x26bb9c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x26bb9cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_26bba0:
    // 0x26bba0: 0x0  nop
    ctx->pc = 0x26bba0u;
    // NOP
label_26bba4:
    // 0x26bba4: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_26bba8:
    if (ctx->pc == 0x26BBA8u) {
        ctx->pc = 0x26BBACu;
        goto label_26bbac;
    }
    ctx->pc = 0x26BBA4u;
    {
        const bool branch_taken_0x26bba4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26bba4) {
            ctx->pc = 0x26BBB8u;
            goto label_26bbb8;
        }
    }
    ctx->pc = 0x26BBACu;
label_26bbac:
    // 0x26bbac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26bbacu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26bbb0:
    // 0x26bbb0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x26bbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_26bbb4:
    // 0x26bbb4: 0xe4401b58  swc1        $f0, 0x1B58($v0)
    ctx->pc = 0x26bbb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 7000), bits); }
label_26bbb8:
    // 0x26bbb8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x26bbb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_26bbbc:
    // 0x26bbbc: 0x8c821b6c  lw          $v0, 0x1B6C($a0)
    ctx->pc = 0x26bbbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 7020)));
label_26bbc0:
    // 0x26bbc0: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_26bbc4:
    if (ctx->pc == 0x26BBC4u) {
        ctx->pc = 0x26BBC8u;
        goto label_26bbc8;
    }
    ctx->pc = 0x26BBC0u;
    {
        const bool branch_taken_0x26bbc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26bbc0) {
            ctx->pc = 0x26BC48u;
            goto label_26bc48;
        }
    }
    ctx->pc = 0x26BBC8u;
label_26bbc8:
    // 0x26bbc8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x26bbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_26bbcc:
    // 0x26bbcc: 0x8c441b6c  lw          $a0, 0x1B6C($v0)
    ctx->pc = 0x26bbccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7020)));
label_26bbd0:
    // 0x26bbd0: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x26bbd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_26bbd4:
    // 0x26bbd4: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x26bbd4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_26bbd8:
    // 0x26bbd8: 0xc0bcf50  jal         func_2F3D40
label_26bbdc:
    if (ctx->pc == 0x26BBDCu) {
        ctx->pc = 0x26BBE0u;
        goto label_26bbe0;
    }
    ctx->pc = 0x26BBD8u;
    SET_GPR_U32(ctx, 31, 0x26BBE0u);
    ctx->pc = 0x2F3D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F3D40u, 0x26BBD8u, 0x26BBE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BBE0u;
label_26bbe0:
    // 0x26bbe0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x26bbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_26bbe4:
    // 0x26bbe4: 0x8c451b6c  lw          $a1, 0x1B6C($v0)
    ctx->pc = 0x26bbe4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7020)));
label_26bbe8:
    // 0x26bbe8: 0x24a6ffff  addiu       $a2, $a1, -0x1
    ctx->pc = 0x26bbe8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_26bbec:
    // 0x26bbec: 0xac461b6c  sw          $a2, 0x1B6C($v0)
    ctx->pc = 0x26bbecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7020), GPR_U32(ctx, 6));
label_26bbf0:
    // 0x26bbf0: 0x10000015  b           . + 4 + (0x15 << 2)
label_26bbf4:
    if (ctx->pc == 0x26BBF4u) {
        ctx->pc = 0x26BBF8u;
        goto label_26bbf8;
    }
    ctx->pc = 0x26BBF0u;
    {
        const bool branch_taken_0x26bbf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26bbf0) {
            ctx->pc = 0x26BC48u;
            goto label_26bc48;
        }
    }
    ctx->pc = 0x26BBF8u;
label_26bbf8:
    // 0x26bbf8: 0x8fa70038  lw          $a3, 0x38($sp)
    ctx->pc = 0x26bbf8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_26bbfc:
    // 0x26bbfc: 0xc4e11b58  lwc1        $f1, 0x1B58($a3)
    ctx->pc = 0x26bbfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 7000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26bc00:
    // 0x26bc00: 0x3c083f80  lui         $t0, 0x3F80
    ctx->pc = 0x26bc00u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16256 << 16));
label_26bc04:
    // 0x26bc04: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x26bc04u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26bc08:
    // 0x26bc08: 0x0  nop
    ctx->pc = 0x26bc08u;
    // NOP
label_26bc0c:
    // 0x26bc0c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x26bc0cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_26bc10:
    // 0x26bc10: 0xe4e01b58  swc1        $f0, 0x1B58($a3)
    ctx->pc = 0x26bc10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 7000), bits); }
label_26bc14:
    // 0x26bc14: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x26bc14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_26bc18:
    // 0x26bc18: 0xc4411b58  lwc1        $f1, 0x1B58($v0)
    ctx->pc = 0x26bc18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 7000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26bc1c:
    // 0x26bc1c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x26bc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
label_26bc20:
    // 0x26bc20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26bc20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26bc24:
    // 0x26bc24: 0x0  nop
    ctx->pc = 0x26bc24u;
    // NOP
label_26bc28:
    // 0x26bc28: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x26bc28u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_26bc2c:
    // 0x26bc2c: 0x0  nop
    ctx->pc = 0x26bc2cu;
    // NOP
label_26bc30:
    // 0x26bc30: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_26bc34:
    if (ctx->pc == 0x26BC34u) {
        ctx->pc = 0x26BC38u;
        goto label_26bc38;
    }
    ctx->pc = 0x26BC30u;
    {
        const bool branch_taken_0x26bc30 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26bc30) {
            ctx->pc = 0x26BC48u;
            goto label_26bc48;
        }
    }
    ctx->pc = 0x26BC38u;
label_26bc38:
    // 0x26bc38: 0x3c044300  lui         $a0, 0x4300
    ctx->pc = 0x26bc38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17152 << 16));
label_26bc3c:
    // 0x26bc3c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x26bc3cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26bc40:
    // 0x26bc40: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x26bc40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_26bc44:
    // 0x26bc44: 0xe4401b58  swc1        $f0, 0x1B58($v0)
    ctx->pc = 0x26bc44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 7000), bits); }
label_26bc48:
    // 0x26bc48: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x26bc48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_26bc4c:
    // 0x26bc4c: 0xc4811b58  lwc1        $f1, 0x1B58($a0)
    ctx->pc = 0x26bc4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 7000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26bc50:
    // 0x26bc50: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26bc50u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26bc54:
    // 0x26bc54: 0x0  nop
    ctx->pc = 0x26bc54u;
    // NOP
label_26bc58:
    // 0x26bc58: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x26bc58u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_26bc5c:
    // 0x26bc5c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x26bc5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26bc60:
    // 0x26bc60: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_26bc64:
    if (ctx->pc == 0x26BC64u) {
        ctx->pc = 0x26BC68u;
        goto label_26bc68;
    }
    ctx->pc = 0x26BC60u;
    {
        const bool branch_taken_0x26bc60 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26bc60) {
            ctx->pc = 0x26BC6Cu;
            goto label_26bc6c;
        }
    }
    ctx->pc = 0x26BC68u;
label_26bc68:
    // 0x26bc68: 0x70001e28  paddub      $v1, $zero, $zero
    ctx->pc = 0x26bc68u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_26bc6c:
    // 0x26bc6c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x26bc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_26bc70:
    // 0x26bc70: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x26bc70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
label_26bc74:
    // 0x26bc74: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x26bc74u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_26bc78:
    // 0x26bc78: 0x30a60040  andi        $a2, $a1, 0x40
    ctx->pc = 0x26bc78u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)64);
label_26bc7c:
    // 0x26bc7c: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
label_26bc80:
    if (ctx->pc == 0x26BC80u) {
        ctx->pc = 0x26BC84u;
        goto label_26bc84;
    }
    ctx->pc = 0x26BC7Cu;
    {
        const bool branch_taken_0x26bc7c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x26bc7c) {
            ctx->pc = 0x26BC98u;
            goto label_26bc98;
        }
    }
    ctx->pc = 0x26BC84u;
label_26bc84:
    // 0x26bc84: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x26bc84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_26bc88:
    // 0x26bc88: 0x8c271a64  lw          $a3, 0x1A64($at)
    ctx->pc = 0x26bc88u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6756)));
label_26bc8c:
    // 0x26bc8c: 0x34e80020  ori         $t0, $a3, 0x20
    ctx->pc = 0x26bc8cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32);
label_26bc90:
    // 0x26bc90: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x26bc90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_26bc94:
    // 0x26bc94: 0xac281a64  sw          $t0, 0x1A64($at)
    ctx->pc = 0x26bc94u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6756), GPR_U32(ctx, 8));
label_26bc98:
    // 0x26bc98: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x26bc98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_26bc9c:
    // 0x26bc9c: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x26bc9cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
label_26bca0:
    // 0x26bca0: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x26bca0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_26bca4:
    // 0x26bca4: 0x30820080  andi        $v0, $a0, 0x80
    ctx->pc = 0x26bca4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)128);
label_26bca8:
    // 0x26bca8: 0x1040004c  beqz        $v0, . + 4 + (0x4C << 2)
label_26bcac:
    if (ctx->pc == 0x26BCACu) {
        ctx->pc = 0x26BCB0u;
        goto label_26bcb0;
    }
    ctx->pc = 0x26BCA8u;
    {
        const bool branch_taken_0x26bca8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26bca8) {
            ctx->pc = 0x26BDDCu;
            goto label_26bddc;
        }
    }
    ctx->pc = 0x26BCB0u;
label_26bcb0:
    // 0x26bcb0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x26bcb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_26bcb4:
    // 0x26bcb4: 0x8c221a98  lw          $v0, 0x1A98($at)
    ctx->pc = 0x26bcb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6808)));
label_26bcb8:
    // 0x26bcb8: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x26bcb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_26bcbc:
    // 0x26bcbc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x26bcbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_26bcc0:
    // 0x26bcc0: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x26bcc0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6808), GPR_U32(ctx, 2));
label_26bcc4:
    // 0x26bcc4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x26bcc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_26bcc8:
    // 0x26bcc8: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x26bcc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6808)));
label_26bccc:
    // 0x26bccc: 0x2402dfff  addiu       $v0, $zero, -0x2001
    ctx->pc = 0x26bcccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294959103));
label_26bcd0:
    // 0x26bcd0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x26bcd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_26bcd4:
    // 0x26bcd4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x26bcd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_26bcd8:
    // 0x26bcd8: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x26bcd8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6808), GPR_U32(ctx, 2));
label_26bcdc:
    // 0x26bcdc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x26bcdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_26bce0:
    // 0x26bce0: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x26bce0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_26bce4:
    // 0x26bce4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x26bce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_26bce8:
    // 0x26bce8: 0x8c821344  lw          $v0, 0x1344($a0)
    ctx->pc = 0x26bce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4932)));
label_26bcec:
    // 0x26bcec: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x26bcecu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_26bcf0:
    // 0x26bcf0: 0x8cc51334  lw          $a1, 0x1334($a2)
    ctx->pc = 0x26bcf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4916)));
label_26bcf4:
    // 0x26bcf4: 0x8c66133c  lw          $a2, 0x133C($v1)
    ctx->pc = 0x26bcf4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4924)));
label_26bcf8:
    // 0x26bcf8: 0xc050f5c  jal         func_143D70
label_26bcfc:
    if (ctx->pc == 0x26BCFCu) {
        ctx->pc = 0x26BD00u;
        goto label_26bd00;
    }
    ctx->pc = 0x26BCF8u;
    SET_GPR_U32(ctx, 31, 0x26BD00u);
    ctx->pc = 0x143D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143D70u, 0x26BCF8u, 0x26BD00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BD00u;
label_26bd00:
    // 0x26bd00: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x26bd00u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_26bd04:
    // 0x26bd04: 0x8fa80038  lw          $t0, 0x38($sp)
    ctx->pc = 0x26bd04u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_26bd08:
    // 0x26bd08: 0xad0013e8  sw          $zero, 0x13E8($t0)
    ctx->pc = 0x26bd08u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 5096), GPR_U32(ctx, 0));
label_26bd0c:
    // 0x26bd0c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x26bd0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_26bd10:
    // 0x26bd10: 0xac4013ec  sw          $zero, 0x13EC($v0)
    ctx->pc = 0x26bd10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 5100), GPR_U32(ctx, 0));
label_26bd14:
    // 0x26bd14: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x26bd14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_26bd18:
    // 0x26bd18: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x26bd18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_26bd1c:
    // 0x26bd1c: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x26bd1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
label_26bd20:
    // 0x26bd20: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x26bd20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_26bd24:
    // 0x26bd24: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x26bd24u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_26bd28:
    // 0x26bd28: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x26bd28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_26bd2c:
    // 0x26bd2c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x26bd2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_26bd30:
    // 0x26bd30: 0xa44313c0  sh          $v1, 0x13C0($v0)
    ctx->pc = 0x26bd30u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 5056), (uint16_t)GPR_U32(ctx, 3));
label_26bd34:
    // 0x26bd34: 0x2402ffc0  addiu       $v0, $zero, -0x40
    ctx->pc = 0x26bd34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
label_26bd38:
    // 0x26bd38: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x26bd38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_26bd3c:
    // 0x26bd3c: 0xa48213c2  sh          $v0, 0x13C2($a0)
    ctx->pc = 0x26bd3cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 5058), (uint16_t)GPR_U32(ctx, 2));
label_26bd40:
    // 0x26bd40: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26bd40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26bd44:
    // 0x26bd44: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x26bd44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_26bd48:
    // 0x26bd48: 0xac621b64  sw          $v0, 0x1B64($v1)
    ctx->pc = 0x26bd48u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7012), GPR_U32(ctx, 2));
label_26bd4c:
    // 0x26bd4c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x26bd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_26bd50:
    // 0x26bd50: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x26bd50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_26bd54:
    // 0x26bd54: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x26bd54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_26bd58:
    // 0x26bd58: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x26bd58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_26bd5c:
    // 0x26bd5c: 0x22438  dsll        $a0, $v0, 16
    ctx->pc = 0x26bd5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << 16);
label_26bd60:
    // 0x26bd60: 0x3482ffff  ori         $v0, $a0, 0xFFFF
    ctx->pc = 0x26bd60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_26bd64:
    // 0x26bd64: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x26bd64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_26bd68:
    // 0x26bd68: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x26bd68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
label_26bd6c:
    // 0x26bd6c: 0x34820012  ori         $v0, $a0, 0x12
    ctx->pc = 0x26bd6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)18);
label_26bd70:
    // 0x26bd70: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x26bd70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_26bd74:
    // 0x26bd74: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x26bd74u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_26bd78:
    // 0x26bd78: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x26bd78u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_26bd7c:
    // 0x26bd7c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x26bd7cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_26bd80:
    // 0x26bd80: 0x8c620130  lw          $v0, 0x130($v1)
    ctx->pc = 0x26bd80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
label_26bd84:
    // 0x26bd84: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x26bd84u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_26bd88:
    // 0x26bd88: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x26bd88u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_26bd8c:
    // 0x26bd8c: 0xc06371c  jal         func_18DC70
label_26bd90:
    if (ctx->pc == 0x26BD90u) {
        ctx->pc = 0x26BD94u;
        goto label_26bd94;
    }
    ctx->pc = 0x26BD8Cu;
    SET_GPR_U32(ctx, 31, 0x26BD94u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x26BD8Cu, 0x26BD94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BD94u;
label_26bd94:
    // 0x26bd94: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x26bd94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_26bd98:
    // 0x26bd98: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x26bd98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
label_26bd9c:
    // 0x26bd9c: 0xa0400b40  sb          $zero, 0xB40($v0)
    ctx->pc = 0x26bd9cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2880), (uint8_t)GPR_U32(ctx, 0));
label_26bda0:
    // 0x26bda0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x26bda0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_26bda4:
    // 0x26bda4: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x26bda4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
label_26bda8:
    // 0x26bda8: 0xa0400bd0  sb          $zero, 0xBD0($v0)
    ctx->pc = 0x26bda8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3024), (uint8_t)GPR_U32(ctx, 0));
label_26bdac:
    // 0x26bdac: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x26bdacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_26bdb0:
    // 0x26bdb0: 0x8c820058  lw          $v0, 0x58($a0)
    ctx->pc = 0x26bdb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_26bdb4:
    // 0x26bdb4: 0xa0400c60  sb          $zero, 0xC60($v0)
    ctx->pc = 0x26bdb4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3168), (uint8_t)GPR_U32(ctx, 0));
label_26bdb8:
    // 0x26bdb8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x26bdb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_26bdbc:
    // 0x26bdbc: 0x8c820058  lw          $v0, 0x58($a0)
    ctx->pc = 0x26bdbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_26bdc0:
    // 0x26bdc0: 0xa0400cf0  sb          $zero, 0xCF0($v0)
    ctx->pc = 0x26bdc0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3312), (uint8_t)GPR_U32(ctx, 0));
label_26bdc4:
    // 0x26bdc4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x26bdc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_26bdc8:
    // 0x26bdc8: 0x8c820058  lw          $v0, 0x58($a0)
    ctx->pc = 0x26bdc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_26bdcc:
    // 0x26bdcc: 0xa0400d80  sb          $zero, 0xD80($v0)
    ctx->pc = 0x26bdccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3456), (uint8_t)GPR_U32(ctx, 0));
label_26bdd0:
    // 0x26bdd0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x26bdd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_26bdd4:
    // 0x26bdd4: 0x8c820058  lw          $v0, 0x58($a0)
    ctx->pc = 0x26bdd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_26bdd8:
    // 0x26bdd8: 0xa0400e10  sb          $zero, 0xE10($v0)
    ctx->pc = 0x26bdd8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3600), (uint8_t)GPR_U32(ctx, 0));
label_26bddc:
    // 0x26bddc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x26bddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_26bde0:
    // 0x26bde0: 0xc4411284  lwc1        $f1, 0x1284($v0)
    ctx->pc = 0x26bde0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26bde4:
    // 0x26bde4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26bde4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26bde8:
    // 0x26bde8: 0x0  nop
    ctx->pc = 0x26bde8u;
    // NOP
label_26bdec:
    // 0x26bdec: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x26bdecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_26bdf0:
    // 0x26bdf0: 0x0  nop
    ctx->pc = 0x26bdf0u;
    // NOP
label_26bdf4:
    // 0x26bdf4: 0x4501000d  bc1t        . + 4 + (0xD << 2)
label_26bdf8:
    if (ctx->pc == 0x26BDF8u) {
        ctx->pc = 0x26BDFCu;
        goto label_26bdfc;
    }
    ctx->pc = 0x26BDF4u;
    {
        const bool branch_taken_0x26bdf4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26bdf4) {
            ctx->pc = 0x26BE2Cu;
            goto label_26be2c;
        }
    }
    ctx->pc = 0x26BDFCu;
label_26bdfc:
    // 0x26bdfc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x26bdfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_26be00:
    // 0x26be00: 0xc4611284  lwc1        $f1, 0x1284($v1)
    ctx->pc = 0x26be00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26be04:
    // 0x26be04: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x26be04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_26be08:
    // 0x26be08: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x26be08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26be0c:
    // 0x26be0c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x26be0cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_26be10:
    // 0x26be10: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x26be10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
label_26be14:
    // 0x26be14: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x26be14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_26be18:
    // 0x26be18: 0xc4a11280  lwc1        $f1, 0x1280($a1)
    ctx->pc = 0x26be18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26be1c:
    // 0x26be1c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x26be1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_26be20:
    // 0x26be20: 0xc4601284  lwc1        $f0, 0x1284($v1)
    ctx->pc = 0x26be20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26be24:
    // 0x26be24: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x26be24u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_26be28:
    // 0x26be28: 0xe4601284  swc1        $f0, 0x1284($v1)
    ctx->pc = 0x26be28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4740), bits); }
label_26be2c:
    // 0x26be2c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x26be2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_26be30:
    // 0x26be30: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x26be30u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_26be34:
    // 0x26be34: 0xc096b40  jal         func_25AD00
label_26be38:
    if (ctx->pc == 0x26BE38u) {
        ctx->pc = 0x26BE3Cu;
        goto label_26be3c;
    }
    ctx->pc = 0x26BE34u;
    SET_GPR_U32(ctx, 31, 0x26BE3Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x26BE34u, 0x26BE3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BE3Cu;
label_26be3c:
    // 0x26be3c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x26be3cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_26be40:
    // 0x26be40: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x26be40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_26be44:
    // 0x26be44: 0x24450180  addiu       $a1, $v0, 0x180
    ctx->pc = 0x26be44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
label_26be48:
    // 0x26be48: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x26be48u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_26be4c:
    // 0x26be4c: 0xc0675a4  jal         func_19D690
label_26be50:
    if (ctx->pc == 0x26BE50u) {
        ctx->pc = 0x26BE54u;
        goto label_26be54;
    }
    ctx->pc = 0x26BE4Cu;
    SET_GPR_U32(ctx, 31, 0x26BE54u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x26BE4Cu, 0x26BE54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BE54u;
label_26be54:
    // 0x26be54: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x26be54u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_26be58:
    // 0x26be58: 0x8fa70038  lw          $a3, 0x38($sp)
    ctx->pc = 0x26be58u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_26be5c:
    // 0x26be5c: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x26be5cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
label_26be60:
    // 0x26be60: 0xc05cd10  jal         func_173440
label_26be64:
    if (ctx->pc == 0x26BE64u) {
        ctx->pc = 0x26BE68u;
        goto label_26be68;
    }
    ctx->pc = 0x26BE60u;
    SET_GPR_U32(ctx, 31, 0x26BE68u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x26BE60u, 0x26BE68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BE68u;
label_26be68:
    // 0x26be68: 0x70404628  paddub      $t0, $v0, $zero
    ctx->pc = 0x26be68u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_26be6c:
    // 0x26be6c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x26be6cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_26be70:
    // 0x26be70: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x26be70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_26be74:
    // 0x26be74: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x26be74u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_26be78:
    // 0x26be78: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x26be78u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_26be7c:
    // 0x26be7c: 0xc0574f4  jal         func_15D3D0
label_26be80:
    if (ctx->pc == 0x26BE80u) {
        ctx->pc = 0x26BE84u;
        goto label_26be84;
    }
    ctx->pc = 0x26BE7Cu;
    SET_GPR_U32(ctx, 31, 0x26BE84u);
    ctx->pc = 0x15D3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D3D0u, 0x26BE7Cu, 0x26BE84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BE84u;
label_26be84:
    // 0x26be84: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x26be84u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_26be88:
    // 0x26be88: 0xc097530  jal         func_25D4C0
label_26be8c:
    if (ctx->pc == 0x26BE8Cu) {
        ctx->pc = 0x26BE90u;
        goto label_26be90;
    }
    ctx->pc = 0x26BE88u;
    SET_GPR_U32(ctx, 31, 0x26BE90u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x26BE88u, 0x26BE90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BE90u;
label_26be90:
    // 0x26be90: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x26be90u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_26be94:
    // 0x26be94: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x26be94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_26be98:
    // 0x26be98: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x26be98u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_26be9c:
    // 0x26be9c: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
label_26bea0:
    if (ctx->pc == 0x26BEA0u) {
        ctx->pc = 0x26BEA4u;
        goto label_26bea4;
    }
    ctx->pc = 0x26BE9Cu;
    {
        const bool branch_taken_0x26be9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x26be9c) {
            ctx->pc = 0x26BEDCu;
            goto label_26bedc;
        }
    }
    ctx->pc = 0x26BEA4u;
label_26bea4:
    // 0x26bea4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x26bea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_26bea8:
    // 0x26bea8: 0xa06010a8  sb          $zero, 0x10A8($v1)
    ctx->pc = 0x26bea8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 0));
label_26beac:
    // 0x26beac: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x26beacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_26beb0:
    // 0x26beb0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x26beb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_26beb4:
    // 0x26beb4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x26beb4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_26beb8:
    // 0x26beb8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x26beb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26bebc:
    // 0x26bebc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x26bebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_26bec0:
    // 0x26bec0: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x26bec0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_26bec4:
    // 0x26bec4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x26bec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_26bec8:
    // 0x26bec8: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x26bec8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_26becc:
    // 0x26becc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x26beccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_26bed0:
    // 0x26bed0: 0xa0800003  sb          $zero, 0x3($a0)
    ctx->pc = 0x26bed0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
label_26bed4:
    // 0x26bed4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x26bed4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_26bed8:
    // 0x26bed8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x26bed8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_26bedc:
    // 0x26bedc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x26bedcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_26bee0:
    // 0x26bee0: 0x8464127c  lh          $a0, 0x127C($v1)
    ctx->pc = 0x26bee0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4732)));
label_26bee4:
    // 0x26bee4: 0x41c3c  dsll32      $v1, $a0, 16
    ctx->pc = 0x26bee4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 16));
label_26bee8:
    // 0x26bee8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x26bee8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_26beec:
    // 0x26beec: 0x3064000f  andi        $a0, $v1, 0xF
    ctx->pc = 0x26beecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
label_26bef0:
    // 0x26bef0: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
label_26bef4:
    if (ctx->pc == 0x26BEF4u) {
        ctx->pc = 0x26BEF8u;
        goto label_26bef8;
    }
    ctx->pc = 0x26BEF0u;
    {
        const bool branch_taken_0x26bef0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x26bef0) {
            ctx->pc = 0x26BF00u;
            goto label_26bf00;
        }
    }
    ctx->pc = 0x26BEF8u;
label_26bef8:
    // 0x26bef8: 0xc0bc094  jal         func_2F0250
label_26befc:
    if (ctx->pc == 0x26BEFCu) {
        ctx->pc = 0x26BF00u;
        goto label_26bf00;
    }
    ctx->pc = 0x26BEF8u;
    SET_GPR_U32(ctx, 31, 0x26BF00u);
    ctx->pc = 0x2F0250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0250u, 0x26BEF8u, 0x26BF00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BF00u;
label_26bf00:
    // 0x26bf00: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x26bf00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_26bf04:
    // 0x26bf04: 0x846413ae  lh          $a0, 0x13AE($v1)
    ctx->pc = 0x26bf04u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 5038)));
label_26bf08:
    // 0x26bf08: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x26bf08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_26bf0c:
    // 0x26bf0c: 0xa46413ac  sh          $a0, 0x13AC($v1)
    ctx->pc = 0x26bf0cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 5036), (uint16_t)GPR_U32(ctx, 4));
label_26bf10:
    // 0x26bf10: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x26bf10u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_26bf14:
    // 0x26bf14: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26bf14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_26bf18:
    // 0x26bf18: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x26bf18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_26bf1c:
    // 0x26bf1c: 0x3e00008  jr          $ra
label_26bf20:
    if (ctx->pc == 0x26BF20u) {
        ctx->pc = 0x26BF24u;
        goto label_fallthrough_0x26bf1c;
    }
    ctx->pc = 0x26BF1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26BF1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x26bf1c:
    ctx->pc = 0x26BF24u;
}
