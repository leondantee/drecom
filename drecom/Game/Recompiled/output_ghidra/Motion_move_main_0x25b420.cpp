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

// Function: Motion_move_main
// Address: 0x25b420 - 0x25c430
void Motion_move_main_0x25b420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Motion_move_main_0x25b420");
#endif

    switch (ctx->pc) {
        case 0x25b420u: goto label_25b420;
        case 0x25b424u: goto label_25b424;
        case 0x25b428u: goto label_25b428;
        case 0x25b42cu: goto label_25b42c;
        case 0x25b430u: goto label_25b430;
        case 0x25b434u: goto label_25b434;
        case 0x25b438u: goto label_25b438;
        case 0x25b43cu: goto label_25b43c;
        case 0x25b440u: goto label_25b440;
        case 0x25b444u: goto label_25b444;
        case 0x25b448u: goto label_25b448;
        case 0x25b44cu: goto label_25b44c;
        case 0x25b450u: goto label_25b450;
        case 0x25b454u: goto label_25b454;
        case 0x25b458u: goto label_25b458;
        case 0x25b45cu: goto label_25b45c;
        case 0x25b460u: goto label_25b460;
        case 0x25b464u: goto label_25b464;
        case 0x25b468u: goto label_25b468;
        case 0x25b46cu: goto label_25b46c;
        case 0x25b470u: goto label_25b470;
        case 0x25b474u: goto label_25b474;
        case 0x25b478u: goto label_25b478;
        case 0x25b47cu: goto label_25b47c;
        case 0x25b480u: goto label_25b480;
        case 0x25b484u: goto label_25b484;
        case 0x25b488u: goto label_25b488;
        case 0x25b48cu: goto label_25b48c;
        case 0x25b490u: goto label_25b490;
        case 0x25b494u: goto label_25b494;
        case 0x25b498u: goto label_25b498;
        case 0x25b49cu: goto label_25b49c;
        case 0x25b4a0u: goto label_25b4a0;
        case 0x25b4a4u: goto label_25b4a4;
        case 0x25b4a8u: goto label_25b4a8;
        case 0x25b4acu: goto label_25b4ac;
        case 0x25b4b0u: goto label_25b4b0;
        case 0x25b4b4u: goto label_25b4b4;
        case 0x25b4b8u: goto label_25b4b8;
        case 0x25b4bcu: goto label_25b4bc;
        case 0x25b4c0u: goto label_25b4c0;
        case 0x25b4c4u: goto label_25b4c4;
        case 0x25b4c8u: goto label_25b4c8;
        case 0x25b4ccu: goto label_25b4cc;
        case 0x25b4d0u: goto label_25b4d0;
        case 0x25b4d4u: goto label_25b4d4;
        case 0x25b4d8u: goto label_25b4d8;
        case 0x25b4dcu: goto label_25b4dc;
        case 0x25b4e0u: goto label_25b4e0;
        case 0x25b4e4u: goto label_25b4e4;
        case 0x25b4e8u: goto label_25b4e8;
        case 0x25b4ecu: goto label_25b4ec;
        case 0x25b4f0u: goto label_25b4f0;
        case 0x25b4f4u: goto label_25b4f4;
        case 0x25b4f8u: goto label_25b4f8;
        case 0x25b4fcu: goto label_25b4fc;
        case 0x25b500u: goto label_25b500;
        case 0x25b504u: goto label_25b504;
        case 0x25b508u: goto label_25b508;
        case 0x25b50cu: goto label_25b50c;
        case 0x25b510u: goto label_25b510;
        case 0x25b514u: goto label_25b514;
        case 0x25b518u: goto label_25b518;
        case 0x25b51cu: goto label_25b51c;
        case 0x25b520u: goto label_25b520;
        case 0x25b524u: goto label_25b524;
        case 0x25b528u: goto label_25b528;
        case 0x25b52cu: goto label_25b52c;
        case 0x25b530u: goto label_25b530;
        case 0x25b534u: goto label_25b534;
        case 0x25b538u: goto label_25b538;
        case 0x25b53cu: goto label_25b53c;
        case 0x25b540u: goto label_25b540;
        case 0x25b544u: goto label_25b544;
        case 0x25b548u: goto label_25b548;
        case 0x25b54cu: goto label_25b54c;
        case 0x25b550u: goto label_25b550;
        case 0x25b554u: goto label_25b554;
        case 0x25b558u: goto label_25b558;
        case 0x25b55cu: goto label_25b55c;
        case 0x25b560u: goto label_25b560;
        case 0x25b564u: goto label_25b564;
        case 0x25b568u: goto label_25b568;
        case 0x25b56cu: goto label_25b56c;
        case 0x25b570u: goto label_25b570;
        case 0x25b574u: goto label_25b574;
        case 0x25b578u: goto label_25b578;
        case 0x25b57cu: goto label_25b57c;
        case 0x25b580u: goto label_25b580;
        case 0x25b584u: goto label_25b584;
        case 0x25b588u: goto label_25b588;
        case 0x25b58cu: goto label_25b58c;
        case 0x25b590u: goto label_25b590;
        case 0x25b594u: goto label_25b594;
        case 0x25b598u: goto label_25b598;
        case 0x25b59cu: goto label_25b59c;
        case 0x25b5a0u: goto label_25b5a0;
        case 0x25b5a4u: goto label_25b5a4;
        case 0x25b5a8u: goto label_25b5a8;
        case 0x25b5acu: goto label_25b5ac;
        case 0x25b5b0u: goto label_25b5b0;
        case 0x25b5b4u: goto label_25b5b4;
        case 0x25b5b8u: goto label_25b5b8;
        case 0x25b5bcu: goto label_25b5bc;
        case 0x25b5c0u: goto label_25b5c0;
        case 0x25b5c4u: goto label_25b5c4;
        case 0x25b5c8u: goto label_25b5c8;
        case 0x25b5ccu: goto label_25b5cc;
        case 0x25b5d0u: goto label_25b5d0;
        case 0x25b5d4u: goto label_25b5d4;
        case 0x25b5d8u: goto label_25b5d8;
        case 0x25b5dcu: goto label_25b5dc;
        case 0x25b5e0u: goto label_25b5e0;
        case 0x25b5e4u: goto label_25b5e4;
        case 0x25b5e8u: goto label_25b5e8;
        case 0x25b5ecu: goto label_25b5ec;
        case 0x25b5f0u: goto label_25b5f0;
        case 0x25b5f4u: goto label_25b5f4;
        case 0x25b5f8u: goto label_25b5f8;
        case 0x25b5fcu: goto label_25b5fc;
        case 0x25b600u: goto label_25b600;
        case 0x25b604u: goto label_25b604;
        case 0x25b608u: goto label_25b608;
        case 0x25b60cu: goto label_25b60c;
        case 0x25b610u: goto label_25b610;
        case 0x25b614u: goto label_25b614;
        case 0x25b618u: goto label_25b618;
        case 0x25b61cu: goto label_25b61c;
        case 0x25b620u: goto label_25b620;
        case 0x25b624u: goto label_25b624;
        case 0x25b628u: goto label_25b628;
        case 0x25b62cu: goto label_25b62c;
        case 0x25b630u: goto label_25b630;
        case 0x25b634u: goto label_25b634;
        case 0x25b638u: goto label_25b638;
        case 0x25b63cu: goto label_25b63c;
        case 0x25b640u: goto label_25b640;
        case 0x25b644u: goto label_25b644;
        case 0x25b648u: goto label_25b648;
        case 0x25b64cu: goto label_25b64c;
        case 0x25b650u: goto label_25b650;
        case 0x25b654u: goto label_25b654;
        case 0x25b658u: goto label_25b658;
        case 0x25b65cu: goto label_25b65c;
        case 0x25b660u: goto label_25b660;
        case 0x25b664u: goto label_25b664;
        case 0x25b668u: goto label_25b668;
        case 0x25b66cu: goto label_25b66c;
        case 0x25b670u: goto label_25b670;
        case 0x25b674u: goto label_25b674;
        case 0x25b678u: goto label_25b678;
        case 0x25b67cu: goto label_25b67c;
        case 0x25b680u: goto label_25b680;
        case 0x25b684u: goto label_25b684;
        case 0x25b688u: goto label_25b688;
        case 0x25b68cu: goto label_25b68c;
        case 0x25b690u: goto label_25b690;
        case 0x25b694u: goto label_25b694;
        case 0x25b698u: goto label_25b698;
        case 0x25b69cu: goto label_25b69c;
        case 0x25b6a0u: goto label_25b6a0;
        case 0x25b6a4u: goto label_25b6a4;
        case 0x25b6a8u: goto label_25b6a8;
        case 0x25b6acu: goto label_25b6ac;
        case 0x25b6b0u: goto label_25b6b0;
        case 0x25b6b4u: goto label_25b6b4;
        case 0x25b6b8u: goto label_25b6b8;
        case 0x25b6bcu: goto label_25b6bc;
        case 0x25b6c0u: goto label_25b6c0;
        case 0x25b6c4u: goto label_25b6c4;
        case 0x25b6c8u: goto label_25b6c8;
        case 0x25b6ccu: goto label_25b6cc;
        case 0x25b6d0u: goto label_25b6d0;
        case 0x25b6d4u: goto label_25b6d4;
        case 0x25b6d8u: goto label_25b6d8;
        case 0x25b6dcu: goto label_25b6dc;
        case 0x25b6e0u: goto label_25b6e0;
        case 0x25b6e4u: goto label_25b6e4;
        case 0x25b6e8u: goto label_25b6e8;
        case 0x25b6ecu: goto label_25b6ec;
        case 0x25b6f0u: goto label_25b6f0;
        case 0x25b6f4u: goto label_25b6f4;
        case 0x25b6f8u: goto label_25b6f8;
        case 0x25b6fcu: goto label_25b6fc;
        case 0x25b700u: goto label_25b700;
        case 0x25b704u: goto label_25b704;
        case 0x25b708u: goto label_25b708;
        case 0x25b70cu: goto label_25b70c;
        case 0x25b710u: goto label_25b710;
        case 0x25b714u: goto label_25b714;
        case 0x25b718u: goto label_25b718;
        case 0x25b71cu: goto label_25b71c;
        case 0x25b720u: goto label_25b720;
        case 0x25b724u: goto label_25b724;
        case 0x25b728u: goto label_25b728;
        case 0x25b72cu: goto label_25b72c;
        case 0x25b730u: goto label_25b730;
        case 0x25b734u: goto label_25b734;
        case 0x25b738u: goto label_25b738;
        case 0x25b73cu: goto label_25b73c;
        case 0x25b740u: goto label_25b740;
        case 0x25b744u: goto label_25b744;
        case 0x25b748u: goto label_25b748;
        case 0x25b74cu: goto label_25b74c;
        case 0x25b750u: goto label_25b750;
        case 0x25b754u: goto label_25b754;
        case 0x25b758u: goto label_25b758;
        case 0x25b75cu: goto label_25b75c;
        case 0x25b760u: goto label_25b760;
        case 0x25b764u: goto label_25b764;
        case 0x25b768u: goto label_25b768;
        case 0x25b76cu: goto label_25b76c;
        case 0x25b770u: goto label_25b770;
        case 0x25b774u: goto label_25b774;
        case 0x25b778u: goto label_25b778;
        case 0x25b77cu: goto label_25b77c;
        case 0x25b780u: goto label_25b780;
        case 0x25b784u: goto label_25b784;
        case 0x25b788u: goto label_25b788;
        case 0x25b78cu: goto label_25b78c;
        case 0x25b790u: goto label_25b790;
        case 0x25b794u: goto label_25b794;
        case 0x25b798u: goto label_25b798;
        case 0x25b79cu: goto label_25b79c;
        case 0x25b7a0u: goto label_25b7a0;
        case 0x25b7a4u: goto label_25b7a4;
        case 0x25b7a8u: goto label_25b7a8;
        case 0x25b7acu: goto label_25b7ac;
        case 0x25b7b0u: goto label_25b7b0;
        case 0x25b7b4u: goto label_25b7b4;
        case 0x25b7b8u: goto label_25b7b8;
        case 0x25b7bcu: goto label_25b7bc;
        case 0x25b7c0u: goto label_25b7c0;
        case 0x25b7c4u: goto label_25b7c4;
        case 0x25b7c8u: goto label_25b7c8;
        case 0x25b7ccu: goto label_25b7cc;
        case 0x25b7d0u: goto label_25b7d0;
        case 0x25b7d4u: goto label_25b7d4;
        case 0x25b7d8u: goto label_25b7d8;
        case 0x25b7dcu: goto label_25b7dc;
        case 0x25b7e0u: goto label_25b7e0;
        case 0x25b7e4u: goto label_25b7e4;
        case 0x25b7e8u: goto label_25b7e8;
        case 0x25b7ecu: goto label_25b7ec;
        case 0x25b7f0u: goto label_25b7f0;
        case 0x25b7f4u: goto label_25b7f4;
        case 0x25b7f8u: goto label_25b7f8;
        case 0x25b7fcu: goto label_25b7fc;
        case 0x25b800u: goto label_25b800;
        case 0x25b804u: goto label_25b804;
        case 0x25b808u: goto label_25b808;
        case 0x25b80cu: goto label_25b80c;
        case 0x25b810u: goto label_25b810;
        case 0x25b814u: goto label_25b814;
        case 0x25b818u: goto label_25b818;
        case 0x25b81cu: goto label_25b81c;
        case 0x25b820u: goto label_25b820;
        case 0x25b824u: goto label_25b824;
        case 0x25b828u: goto label_25b828;
        case 0x25b82cu: goto label_25b82c;
        case 0x25b830u: goto label_25b830;
        case 0x25b834u: goto label_25b834;
        case 0x25b838u: goto label_25b838;
        case 0x25b83cu: goto label_25b83c;
        case 0x25b840u: goto label_25b840;
        case 0x25b844u: goto label_25b844;
        case 0x25b848u: goto label_25b848;
        case 0x25b84cu: goto label_25b84c;
        case 0x25b850u: goto label_25b850;
        case 0x25b854u: goto label_25b854;
        case 0x25b858u: goto label_25b858;
        case 0x25b85cu: goto label_25b85c;
        case 0x25b860u: goto label_25b860;
        case 0x25b864u: goto label_25b864;
        case 0x25b868u: goto label_25b868;
        case 0x25b86cu: goto label_25b86c;
        case 0x25b870u: goto label_25b870;
        case 0x25b874u: goto label_25b874;
        case 0x25b878u: goto label_25b878;
        case 0x25b87cu: goto label_25b87c;
        case 0x25b880u: goto label_25b880;
        case 0x25b884u: goto label_25b884;
        case 0x25b888u: goto label_25b888;
        case 0x25b88cu: goto label_25b88c;
        case 0x25b890u: goto label_25b890;
        case 0x25b894u: goto label_25b894;
        case 0x25b898u: goto label_25b898;
        case 0x25b89cu: goto label_25b89c;
        case 0x25b8a0u: goto label_25b8a0;
        case 0x25b8a4u: goto label_25b8a4;
        case 0x25b8a8u: goto label_25b8a8;
        case 0x25b8acu: goto label_25b8ac;
        case 0x25b8b0u: goto label_25b8b0;
        case 0x25b8b4u: goto label_25b8b4;
        case 0x25b8b8u: goto label_25b8b8;
        case 0x25b8bcu: goto label_25b8bc;
        case 0x25b8c0u: goto label_25b8c0;
        case 0x25b8c4u: goto label_25b8c4;
        case 0x25b8c8u: goto label_25b8c8;
        case 0x25b8ccu: goto label_25b8cc;
        case 0x25b8d0u: goto label_25b8d0;
        case 0x25b8d4u: goto label_25b8d4;
        case 0x25b8d8u: goto label_25b8d8;
        case 0x25b8dcu: goto label_25b8dc;
        case 0x25b8e0u: goto label_25b8e0;
        case 0x25b8e4u: goto label_25b8e4;
        case 0x25b8e8u: goto label_25b8e8;
        case 0x25b8ecu: goto label_25b8ec;
        case 0x25b8f0u: goto label_25b8f0;
        case 0x25b8f4u: goto label_25b8f4;
        case 0x25b8f8u: goto label_25b8f8;
        case 0x25b8fcu: goto label_25b8fc;
        case 0x25b900u: goto label_25b900;
        case 0x25b904u: goto label_25b904;
        case 0x25b908u: goto label_25b908;
        case 0x25b90cu: goto label_25b90c;
        case 0x25b910u: goto label_25b910;
        case 0x25b914u: goto label_25b914;
        case 0x25b918u: goto label_25b918;
        case 0x25b91cu: goto label_25b91c;
        case 0x25b920u: goto label_25b920;
        case 0x25b924u: goto label_25b924;
        case 0x25b928u: goto label_25b928;
        case 0x25b92cu: goto label_25b92c;
        case 0x25b930u: goto label_25b930;
        case 0x25b934u: goto label_25b934;
        case 0x25b938u: goto label_25b938;
        case 0x25b93cu: goto label_25b93c;
        case 0x25b940u: goto label_25b940;
        case 0x25b944u: goto label_25b944;
        case 0x25b948u: goto label_25b948;
        case 0x25b94cu: goto label_25b94c;
        case 0x25b950u: goto label_25b950;
        case 0x25b954u: goto label_25b954;
        case 0x25b958u: goto label_25b958;
        case 0x25b95cu: goto label_25b95c;
        case 0x25b960u: goto label_25b960;
        case 0x25b964u: goto label_25b964;
        case 0x25b968u: goto label_25b968;
        case 0x25b96cu: goto label_25b96c;
        case 0x25b970u: goto label_25b970;
        case 0x25b974u: goto label_25b974;
        case 0x25b978u: goto label_25b978;
        case 0x25b97cu: goto label_25b97c;
        case 0x25b980u: goto label_25b980;
        case 0x25b984u: goto label_25b984;
        case 0x25b988u: goto label_25b988;
        case 0x25b98cu: goto label_25b98c;
        case 0x25b990u: goto label_25b990;
        case 0x25b994u: goto label_25b994;
        case 0x25b998u: goto label_25b998;
        case 0x25b99cu: goto label_25b99c;
        case 0x25b9a0u: goto label_25b9a0;
        case 0x25b9a4u: goto label_25b9a4;
        case 0x25b9a8u: goto label_25b9a8;
        case 0x25b9acu: goto label_25b9ac;
        case 0x25b9b0u: goto label_25b9b0;
        case 0x25b9b4u: goto label_25b9b4;
        case 0x25b9b8u: goto label_25b9b8;
        case 0x25b9bcu: goto label_25b9bc;
        case 0x25b9c0u: goto label_25b9c0;
        case 0x25b9c4u: goto label_25b9c4;
        case 0x25b9c8u: goto label_25b9c8;
        case 0x25b9ccu: goto label_25b9cc;
        case 0x25b9d0u: goto label_25b9d0;
        case 0x25b9d4u: goto label_25b9d4;
        case 0x25b9d8u: goto label_25b9d8;
        case 0x25b9dcu: goto label_25b9dc;
        case 0x25b9e0u: goto label_25b9e0;
        case 0x25b9e4u: goto label_25b9e4;
        case 0x25b9e8u: goto label_25b9e8;
        case 0x25b9ecu: goto label_25b9ec;
        case 0x25b9f0u: goto label_25b9f0;
        case 0x25b9f4u: goto label_25b9f4;
        case 0x25b9f8u: goto label_25b9f8;
        case 0x25b9fcu: goto label_25b9fc;
        case 0x25ba00u: goto label_25ba00;
        case 0x25ba04u: goto label_25ba04;
        case 0x25ba08u: goto label_25ba08;
        case 0x25ba0cu: goto label_25ba0c;
        case 0x25ba10u: goto label_25ba10;
        case 0x25ba14u: goto label_25ba14;
        case 0x25ba18u: goto label_25ba18;
        case 0x25ba1cu: goto label_25ba1c;
        case 0x25ba20u: goto label_25ba20;
        case 0x25ba24u: goto label_25ba24;
        case 0x25ba28u: goto label_25ba28;
        case 0x25ba2cu: goto label_25ba2c;
        case 0x25ba30u: goto label_25ba30;
        case 0x25ba34u: goto label_25ba34;
        case 0x25ba38u: goto label_25ba38;
        case 0x25ba3cu: goto label_25ba3c;
        case 0x25ba40u: goto label_25ba40;
        case 0x25ba44u: goto label_25ba44;
        case 0x25ba48u: goto label_25ba48;
        case 0x25ba4cu: goto label_25ba4c;
        case 0x25ba50u: goto label_25ba50;
        case 0x25ba54u: goto label_25ba54;
        case 0x25ba58u: goto label_25ba58;
        case 0x25ba5cu: goto label_25ba5c;
        case 0x25ba60u: goto label_25ba60;
        case 0x25ba64u: goto label_25ba64;
        case 0x25ba68u: goto label_25ba68;
        case 0x25ba6cu: goto label_25ba6c;
        case 0x25ba70u: goto label_25ba70;
        case 0x25ba74u: goto label_25ba74;
        case 0x25ba78u: goto label_25ba78;
        case 0x25ba7cu: goto label_25ba7c;
        case 0x25ba80u: goto label_25ba80;
        case 0x25ba84u: goto label_25ba84;
        case 0x25ba88u: goto label_25ba88;
        case 0x25ba8cu: goto label_25ba8c;
        case 0x25ba90u: goto label_25ba90;
        case 0x25ba94u: goto label_25ba94;
        case 0x25ba98u: goto label_25ba98;
        case 0x25ba9cu: goto label_25ba9c;
        case 0x25baa0u: goto label_25baa0;
        case 0x25baa4u: goto label_25baa4;
        case 0x25baa8u: goto label_25baa8;
        case 0x25baacu: goto label_25baac;
        case 0x25bab0u: goto label_25bab0;
        case 0x25bab4u: goto label_25bab4;
        case 0x25bab8u: goto label_25bab8;
        case 0x25babcu: goto label_25babc;
        case 0x25bac0u: goto label_25bac0;
        case 0x25bac4u: goto label_25bac4;
        case 0x25bac8u: goto label_25bac8;
        case 0x25baccu: goto label_25bacc;
        case 0x25bad0u: goto label_25bad0;
        case 0x25bad4u: goto label_25bad4;
        case 0x25bad8u: goto label_25bad8;
        case 0x25badcu: goto label_25badc;
        case 0x25bae0u: goto label_25bae0;
        case 0x25bae4u: goto label_25bae4;
        case 0x25bae8u: goto label_25bae8;
        case 0x25baecu: goto label_25baec;
        case 0x25baf0u: goto label_25baf0;
        case 0x25baf4u: goto label_25baf4;
        case 0x25baf8u: goto label_25baf8;
        case 0x25bafcu: goto label_25bafc;
        case 0x25bb00u: goto label_25bb00;
        case 0x25bb04u: goto label_25bb04;
        case 0x25bb08u: goto label_25bb08;
        case 0x25bb0cu: goto label_25bb0c;
        case 0x25bb10u: goto label_25bb10;
        case 0x25bb14u: goto label_25bb14;
        case 0x25bb18u: goto label_25bb18;
        case 0x25bb1cu: goto label_25bb1c;
        case 0x25bb20u: goto label_25bb20;
        case 0x25bb24u: goto label_25bb24;
        case 0x25bb28u: goto label_25bb28;
        case 0x25bb2cu: goto label_25bb2c;
        case 0x25bb30u: goto label_25bb30;
        case 0x25bb34u: goto label_25bb34;
        case 0x25bb38u: goto label_25bb38;
        case 0x25bb3cu: goto label_25bb3c;
        case 0x25bb40u: goto label_25bb40;
        case 0x25bb44u: goto label_25bb44;
        case 0x25bb48u: goto label_25bb48;
        case 0x25bb4cu: goto label_25bb4c;
        case 0x25bb50u: goto label_25bb50;
        case 0x25bb54u: goto label_25bb54;
        case 0x25bb58u: goto label_25bb58;
        case 0x25bb5cu: goto label_25bb5c;
        case 0x25bb60u: goto label_25bb60;
        case 0x25bb64u: goto label_25bb64;
        case 0x25bb68u: goto label_25bb68;
        case 0x25bb6cu: goto label_25bb6c;
        case 0x25bb70u: goto label_25bb70;
        case 0x25bb74u: goto label_25bb74;
        case 0x25bb78u: goto label_25bb78;
        case 0x25bb7cu: goto label_25bb7c;
        case 0x25bb80u: goto label_25bb80;
        case 0x25bb84u: goto label_25bb84;
        case 0x25bb88u: goto label_25bb88;
        case 0x25bb8cu: goto label_25bb8c;
        case 0x25bb90u: goto label_25bb90;
        case 0x25bb94u: goto label_25bb94;
        case 0x25bb98u: goto label_25bb98;
        case 0x25bb9cu: goto label_25bb9c;
        case 0x25bba0u: goto label_25bba0;
        case 0x25bba4u: goto label_25bba4;
        case 0x25bba8u: goto label_25bba8;
        case 0x25bbacu: goto label_25bbac;
        case 0x25bbb0u: goto label_25bbb0;
        case 0x25bbb4u: goto label_25bbb4;
        case 0x25bbb8u: goto label_25bbb8;
        case 0x25bbbcu: goto label_25bbbc;
        case 0x25bbc0u: goto label_25bbc0;
        case 0x25bbc4u: goto label_25bbc4;
        case 0x25bbc8u: goto label_25bbc8;
        case 0x25bbccu: goto label_25bbcc;
        case 0x25bbd0u: goto label_25bbd0;
        case 0x25bbd4u: goto label_25bbd4;
        case 0x25bbd8u: goto label_25bbd8;
        case 0x25bbdcu: goto label_25bbdc;
        case 0x25bbe0u: goto label_25bbe0;
        case 0x25bbe4u: goto label_25bbe4;
        case 0x25bbe8u: goto label_25bbe8;
        case 0x25bbecu: goto label_25bbec;
        case 0x25bbf0u: goto label_25bbf0;
        case 0x25bbf4u: goto label_25bbf4;
        case 0x25bbf8u: goto label_25bbf8;
        case 0x25bbfcu: goto label_25bbfc;
        case 0x25bc00u: goto label_25bc00;
        case 0x25bc04u: goto label_25bc04;
        case 0x25bc08u: goto label_25bc08;
        case 0x25bc0cu: goto label_25bc0c;
        case 0x25bc10u: goto label_25bc10;
        case 0x25bc14u: goto label_25bc14;
        case 0x25bc18u: goto label_25bc18;
        case 0x25bc1cu: goto label_25bc1c;
        case 0x25bc20u: goto label_25bc20;
        case 0x25bc24u: goto label_25bc24;
        case 0x25bc28u: goto label_25bc28;
        case 0x25bc2cu: goto label_25bc2c;
        case 0x25bc30u: goto label_25bc30;
        case 0x25bc34u: goto label_25bc34;
        case 0x25bc38u: goto label_25bc38;
        case 0x25bc3cu: goto label_25bc3c;
        case 0x25bc40u: goto label_25bc40;
        case 0x25bc44u: goto label_25bc44;
        case 0x25bc48u: goto label_25bc48;
        case 0x25bc4cu: goto label_25bc4c;
        case 0x25bc50u: goto label_25bc50;
        case 0x25bc54u: goto label_25bc54;
        case 0x25bc58u: goto label_25bc58;
        case 0x25bc5cu: goto label_25bc5c;
        case 0x25bc60u: goto label_25bc60;
        case 0x25bc64u: goto label_25bc64;
        case 0x25bc68u: goto label_25bc68;
        case 0x25bc6cu: goto label_25bc6c;
        case 0x25bc70u: goto label_25bc70;
        case 0x25bc74u: goto label_25bc74;
        case 0x25bc78u: goto label_25bc78;
        case 0x25bc7cu: goto label_25bc7c;
        case 0x25bc80u: goto label_25bc80;
        case 0x25bc84u: goto label_25bc84;
        case 0x25bc88u: goto label_25bc88;
        case 0x25bc8cu: goto label_25bc8c;
        case 0x25bc90u: goto label_25bc90;
        case 0x25bc94u: goto label_25bc94;
        case 0x25bc98u: goto label_25bc98;
        case 0x25bc9cu: goto label_25bc9c;
        case 0x25bca0u: goto label_25bca0;
        case 0x25bca4u: goto label_25bca4;
        case 0x25bca8u: goto label_25bca8;
        case 0x25bcacu: goto label_25bcac;
        case 0x25bcb0u: goto label_25bcb0;
        case 0x25bcb4u: goto label_25bcb4;
        case 0x25bcb8u: goto label_25bcb8;
        case 0x25bcbcu: goto label_25bcbc;
        case 0x25bcc0u: goto label_25bcc0;
        case 0x25bcc4u: goto label_25bcc4;
        case 0x25bcc8u: goto label_25bcc8;
        case 0x25bcccu: goto label_25bccc;
        case 0x25bcd0u: goto label_25bcd0;
        case 0x25bcd4u: goto label_25bcd4;
        case 0x25bcd8u: goto label_25bcd8;
        case 0x25bcdcu: goto label_25bcdc;
        case 0x25bce0u: goto label_25bce0;
        case 0x25bce4u: goto label_25bce4;
        case 0x25bce8u: goto label_25bce8;
        case 0x25bcecu: goto label_25bcec;
        case 0x25bcf0u: goto label_25bcf0;
        case 0x25bcf4u: goto label_25bcf4;
        case 0x25bcf8u: goto label_25bcf8;
        case 0x25bcfcu: goto label_25bcfc;
        case 0x25bd00u: goto label_25bd00;
        case 0x25bd04u: goto label_25bd04;
        case 0x25bd08u: goto label_25bd08;
        case 0x25bd0cu: goto label_25bd0c;
        case 0x25bd10u: goto label_25bd10;
        case 0x25bd14u: goto label_25bd14;
        case 0x25bd18u: goto label_25bd18;
        case 0x25bd1cu: goto label_25bd1c;
        case 0x25bd20u: goto label_25bd20;
        case 0x25bd24u: goto label_25bd24;
        case 0x25bd28u: goto label_25bd28;
        case 0x25bd2cu: goto label_25bd2c;
        case 0x25bd30u: goto label_25bd30;
        case 0x25bd34u: goto label_25bd34;
        case 0x25bd38u: goto label_25bd38;
        case 0x25bd3cu: goto label_25bd3c;
        case 0x25bd40u: goto label_25bd40;
        case 0x25bd44u: goto label_25bd44;
        case 0x25bd48u: goto label_25bd48;
        case 0x25bd4cu: goto label_25bd4c;
        case 0x25bd50u: goto label_25bd50;
        case 0x25bd54u: goto label_25bd54;
        case 0x25bd58u: goto label_25bd58;
        case 0x25bd5cu: goto label_25bd5c;
        case 0x25bd60u: goto label_25bd60;
        case 0x25bd64u: goto label_25bd64;
        case 0x25bd68u: goto label_25bd68;
        case 0x25bd6cu: goto label_25bd6c;
        case 0x25bd70u: goto label_25bd70;
        case 0x25bd74u: goto label_25bd74;
        case 0x25bd78u: goto label_25bd78;
        case 0x25bd7cu: goto label_25bd7c;
        case 0x25bd80u: goto label_25bd80;
        case 0x25bd84u: goto label_25bd84;
        case 0x25bd88u: goto label_25bd88;
        case 0x25bd8cu: goto label_25bd8c;
        case 0x25bd90u: goto label_25bd90;
        case 0x25bd94u: goto label_25bd94;
        case 0x25bd98u: goto label_25bd98;
        case 0x25bd9cu: goto label_25bd9c;
        case 0x25bda0u: goto label_25bda0;
        case 0x25bda4u: goto label_25bda4;
        case 0x25bda8u: goto label_25bda8;
        case 0x25bdacu: goto label_25bdac;
        case 0x25bdb0u: goto label_25bdb0;
        case 0x25bdb4u: goto label_25bdb4;
        case 0x25bdb8u: goto label_25bdb8;
        case 0x25bdbcu: goto label_25bdbc;
        case 0x25bdc0u: goto label_25bdc0;
        case 0x25bdc4u: goto label_25bdc4;
        case 0x25bdc8u: goto label_25bdc8;
        case 0x25bdccu: goto label_25bdcc;
        case 0x25bdd0u: goto label_25bdd0;
        case 0x25bdd4u: goto label_25bdd4;
        case 0x25bdd8u: goto label_25bdd8;
        case 0x25bddcu: goto label_25bddc;
        case 0x25bde0u: goto label_25bde0;
        case 0x25bde4u: goto label_25bde4;
        case 0x25bde8u: goto label_25bde8;
        case 0x25bdecu: goto label_25bdec;
        case 0x25bdf0u: goto label_25bdf0;
        case 0x25bdf4u: goto label_25bdf4;
        case 0x25bdf8u: goto label_25bdf8;
        case 0x25bdfcu: goto label_25bdfc;
        case 0x25be00u: goto label_25be00;
        case 0x25be04u: goto label_25be04;
        case 0x25be08u: goto label_25be08;
        case 0x25be0cu: goto label_25be0c;
        case 0x25be10u: goto label_25be10;
        case 0x25be14u: goto label_25be14;
        case 0x25be18u: goto label_25be18;
        case 0x25be1cu: goto label_25be1c;
        case 0x25be20u: goto label_25be20;
        case 0x25be24u: goto label_25be24;
        case 0x25be28u: goto label_25be28;
        case 0x25be2cu: goto label_25be2c;
        case 0x25be30u: goto label_25be30;
        case 0x25be34u: goto label_25be34;
        case 0x25be38u: goto label_25be38;
        case 0x25be3cu: goto label_25be3c;
        case 0x25be40u: goto label_25be40;
        case 0x25be44u: goto label_25be44;
        case 0x25be48u: goto label_25be48;
        case 0x25be4cu: goto label_25be4c;
        case 0x25be50u: goto label_25be50;
        case 0x25be54u: goto label_25be54;
        case 0x25be58u: goto label_25be58;
        case 0x25be5cu: goto label_25be5c;
        case 0x25be60u: goto label_25be60;
        case 0x25be64u: goto label_25be64;
        case 0x25be68u: goto label_25be68;
        case 0x25be6cu: goto label_25be6c;
        case 0x25be70u: goto label_25be70;
        case 0x25be74u: goto label_25be74;
        case 0x25be78u: goto label_25be78;
        case 0x25be7cu: goto label_25be7c;
        case 0x25be80u: goto label_25be80;
        case 0x25be84u: goto label_25be84;
        case 0x25be88u: goto label_25be88;
        case 0x25be8cu: goto label_25be8c;
        case 0x25be90u: goto label_25be90;
        case 0x25be94u: goto label_25be94;
        case 0x25be98u: goto label_25be98;
        case 0x25be9cu: goto label_25be9c;
        case 0x25bea0u: goto label_25bea0;
        case 0x25bea4u: goto label_25bea4;
        case 0x25bea8u: goto label_25bea8;
        case 0x25beacu: goto label_25beac;
        case 0x25beb0u: goto label_25beb0;
        case 0x25beb4u: goto label_25beb4;
        case 0x25beb8u: goto label_25beb8;
        case 0x25bebcu: goto label_25bebc;
        case 0x25bec0u: goto label_25bec0;
        case 0x25bec4u: goto label_25bec4;
        case 0x25bec8u: goto label_25bec8;
        case 0x25beccu: goto label_25becc;
        case 0x25bed0u: goto label_25bed0;
        case 0x25bed4u: goto label_25bed4;
        case 0x25bed8u: goto label_25bed8;
        case 0x25bedcu: goto label_25bedc;
        case 0x25bee0u: goto label_25bee0;
        case 0x25bee4u: goto label_25bee4;
        case 0x25bee8u: goto label_25bee8;
        case 0x25beecu: goto label_25beec;
        case 0x25bef0u: goto label_25bef0;
        case 0x25bef4u: goto label_25bef4;
        case 0x25bef8u: goto label_25bef8;
        case 0x25befcu: goto label_25befc;
        case 0x25bf00u: goto label_25bf00;
        case 0x25bf04u: goto label_25bf04;
        case 0x25bf08u: goto label_25bf08;
        case 0x25bf0cu: goto label_25bf0c;
        case 0x25bf10u: goto label_25bf10;
        case 0x25bf14u: goto label_25bf14;
        case 0x25bf18u: goto label_25bf18;
        case 0x25bf1cu: goto label_25bf1c;
        case 0x25bf20u: goto label_25bf20;
        case 0x25bf24u: goto label_25bf24;
        case 0x25bf28u: goto label_25bf28;
        case 0x25bf2cu: goto label_25bf2c;
        case 0x25bf30u: goto label_25bf30;
        case 0x25bf34u: goto label_25bf34;
        case 0x25bf38u: goto label_25bf38;
        case 0x25bf3cu: goto label_25bf3c;
        case 0x25bf40u: goto label_25bf40;
        case 0x25bf44u: goto label_25bf44;
        case 0x25bf48u: goto label_25bf48;
        case 0x25bf4cu: goto label_25bf4c;
        case 0x25bf50u: goto label_25bf50;
        case 0x25bf54u: goto label_25bf54;
        case 0x25bf58u: goto label_25bf58;
        case 0x25bf5cu: goto label_25bf5c;
        case 0x25bf60u: goto label_25bf60;
        case 0x25bf64u: goto label_25bf64;
        case 0x25bf68u: goto label_25bf68;
        case 0x25bf6cu: goto label_25bf6c;
        case 0x25bf70u: goto label_25bf70;
        case 0x25bf74u: goto label_25bf74;
        case 0x25bf78u: goto label_25bf78;
        case 0x25bf7cu: goto label_25bf7c;
        case 0x25bf80u: goto label_25bf80;
        case 0x25bf84u: goto label_25bf84;
        case 0x25bf88u: goto label_25bf88;
        case 0x25bf8cu: goto label_25bf8c;
        case 0x25bf90u: goto label_25bf90;
        case 0x25bf94u: goto label_25bf94;
        case 0x25bf98u: goto label_25bf98;
        case 0x25bf9cu: goto label_25bf9c;
        case 0x25bfa0u: goto label_25bfa0;
        case 0x25bfa4u: goto label_25bfa4;
        case 0x25bfa8u: goto label_25bfa8;
        case 0x25bfacu: goto label_25bfac;
        case 0x25bfb0u: goto label_25bfb0;
        case 0x25bfb4u: goto label_25bfb4;
        case 0x25bfb8u: goto label_25bfb8;
        case 0x25bfbcu: goto label_25bfbc;
        case 0x25bfc0u: goto label_25bfc0;
        case 0x25bfc4u: goto label_25bfc4;
        case 0x25bfc8u: goto label_25bfc8;
        case 0x25bfccu: goto label_25bfcc;
        case 0x25bfd0u: goto label_25bfd0;
        case 0x25bfd4u: goto label_25bfd4;
        case 0x25bfd8u: goto label_25bfd8;
        case 0x25bfdcu: goto label_25bfdc;
        case 0x25bfe0u: goto label_25bfe0;
        case 0x25bfe4u: goto label_25bfe4;
        case 0x25bfe8u: goto label_25bfe8;
        case 0x25bfecu: goto label_25bfec;
        case 0x25bff0u: goto label_25bff0;
        case 0x25bff4u: goto label_25bff4;
        case 0x25bff8u: goto label_25bff8;
        case 0x25bffcu: goto label_25bffc;
        case 0x25c000u: goto label_25c000;
        case 0x25c004u: goto label_25c004;
        case 0x25c008u: goto label_25c008;
        case 0x25c00cu: goto label_25c00c;
        case 0x25c010u: goto label_25c010;
        case 0x25c014u: goto label_25c014;
        case 0x25c018u: goto label_25c018;
        case 0x25c01cu: goto label_25c01c;
        case 0x25c020u: goto label_25c020;
        case 0x25c024u: goto label_25c024;
        case 0x25c028u: goto label_25c028;
        case 0x25c02cu: goto label_25c02c;
        case 0x25c030u: goto label_25c030;
        case 0x25c034u: goto label_25c034;
        case 0x25c038u: goto label_25c038;
        case 0x25c03cu: goto label_25c03c;
        case 0x25c040u: goto label_25c040;
        case 0x25c044u: goto label_25c044;
        case 0x25c048u: goto label_25c048;
        case 0x25c04cu: goto label_25c04c;
        case 0x25c050u: goto label_25c050;
        case 0x25c054u: goto label_25c054;
        case 0x25c058u: goto label_25c058;
        case 0x25c05cu: goto label_25c05c;
        case 0x25c060u: goto label_25c060;
        case 0x25c064u: goto label_25c064;
        case 0x25c068u: goto label_25c068;
        case 0x25c06cu: goto label_25c06c;
        case 0x25c070u: goto label_25c070;
        case 0x25c074u: goto label_25c074;
        case 0x25c078u: goto label_25c078;
        case 0x25c07cu: goto label_25c07c;
        case 0x25c080u: goto label_25c080;
        case 0x25c084u: goto label_25c084;
        case 0x25c088u: goto label_25c088;
        case 0x25c08cu: goto label_25c08c;
        case 0x25c090u: goto label_25c090;
        case 0x25c094u: goto label_25c094;
        case 0x25c098u: goto label_25c098;
        case 0x25c09cu: goto label_25c09c;
        case 0x25c0a0u: goto label_25c0a0;
        case 0x25c0a4u: goto label_25c0a4;
        case 0x25c0a8u: goto label_25c0a8;
        case 0x25c0acu: goto label_25c0ac;
        case 0x25c0b0u: goto label_25c0b0;
        case 0x25c0b4u: goto label_25c0b4;
        case 0x25c0b8u: goto label_25c0b8;
        case 0x25c0bcu: goto label_25c0bc;
        case 0x25c0c0u: goto label_25c0c0;
        case 0x25c0c4u: goto label_25c0c4;
        case 0x25c0c8u: goto label_25c0c8;
        case 0x25c0ccu: goto label_25c0cc;
        case 0x25c0d0u: goto label_25c0d0;
        case 0x25c0d4u: goto label_25c0d4;
        case 0x25c0d8u: goto label_25c0d8;
        case 0x25c0dcu: goto label_25c0dc;
        case 0x25c0e0u: goto label_25c0e0;
        case 0x25c0e4u: goto label_25c0e4;
        case 0x25c0e8u: goto label_25c0e8;
        case 0x25c0ecu: goto label_25c0ec;
        case 0x25c0f0u: goto label_25c0f0;
        case 0x25c0f4u: goto label_25c0f4;
        case 0x25c0f8u: goto label_25c0f8;
        case 0x25c0fcu: goto label_25c0fc;
        case 0x25c100u: goto label_25c100;
        case 0x25c104u: goto label_25c104;
        case 0x25c108u: goto label_25c108;
        case 0x25c10cu: goto label_25c10c;
        case 0x25c110u: goto label_25c110;
        case 0x25c114u: goto label_25c114;
        case 0x25c118u: goto label_25c118;
        case 0x25c11cu: goto label_25c11c;
        case 0x25c120u: goto label_25c120;
        case 0x25c124u: goto label_25c124;
        case 0x25c128u: goto label_25c128;
        case 0x25c12cu: goto label_25c12c;
        case 0x25c130u: goto label_25c130;
        case 0x25c134u: goto label_25c134;
        case 0x25c138u: goto label_25c138;
        case 0x25c13cu: goto label_25c13c;
        case 0x25c140u: goto label_25c140;
        case 0x25c144u: goto label_25c144;
        case 0x25c148u: goto label_25c148;
        case 0x25c14cu: goto label_25c14c;
        case 0x25c150u: goto label_25c150;
        case 0x25c154u: goto label_25c154;
        case 0x25c158u: goto label_25c158;
        case 0x25c15cu: goto label_25c15c;
        case 0x25c160u: goto label_25c160;
        case 0x25c164u: goto label_25c164;
        case 0x25c168u: goto label_25c168;
        case 0x25c16cu: goto label_25c16c;
        case 0x25c170u: goto label_25c170;
        case 0x25c174u: goto label_25c174;
        case 0x25c178u: goto label_25c178;
        case 0x25c17cu: goto label_25c17c;
        case 0x25c180u: goto label_25c180;
        case 0x25c184u: goto label_25c184;
        case 0x25c188u: goto label_25c188;
        case 0x25c18cu: goto label_25c18c;
        case 0x25c190u: goto label_25c190;
        case 0x25c194u: goto label_25c194;
        case 0x25c198u: goto label_25c198;
        case 0x25c19cu: goto label_25c19c;
        case 0x25c1a0u: goto label_25c1a0;
        case 0x25c1a4u: goto label_25c1a4;
        case 0x25c1a8u: goto label_25c1a8;
        case 0x25c1acu: goto label_25c1ac;
        case 0x25c1b0u: goto label_25c1b0;
        case 0x25c1b4u: goto label_25c1b4;
        case 0x25c1b8u: goto label_25c1b8;
        case 0x25c1bcu: goto label_25c1bc;
        case 0x25c1c0u: goto label_25c1c0;
        case 0x25c1c4u: goto label_25c1c4;
        case 0x25c1c8u: goto label_25c1c8;
        case 0x25c1ccu: goto label_25c1cc;
        case 0x25c1d0u: goto label_25c1d0;
        case 0x25c1d4u: goto label_25c1d4;
        case 0x25c1d8u: goto label_25c1d8;
        case 0x25c1dcu: goto label_25c1dc;
        case 0x25c1e0u: goto label_25c1e0;
        case 0x25c1e4u: goto label_25c1e4;
        case 0x25c1e8u: goto label_25c1e8;
        case 0x25c1ecu: goto label_25c1ec;
        case 0x25c1f0u: goto label_25c1f0;
        case 0x25c1f4u: goto label_25c1f4;
        case 0x25c1f8u: goto label_25c1f8;
        case 0x25c1fcu: goto label_25c1fc;
        case 0x25c200u: goto label_25c200;
        case 0x25c204u: goto label_25c204;
        case 0x25c208u: goto label_25c208;
        case 0x25c20cu: goto label_25c20c;
        case 0x25c210u: goto label_25c210;
        case 0x25c214u: goto label_25c214;
        case 0x25c218u: goto label_25c218;
        case 0x25c21cu: goto label_25c21c;
        case 0x25c220u: goto label_25c220;
        case 0x25c224u: goto label_25c224;
        case 0x25c228u: goto label_25c228;
        case 0x25c22cu: goto label_25c22c;
        case 0x25c230u: goto label_25c230;
        case 0x25c234u: goto label_25c234;
        case 0x25c238u: goto label_25c238;
        case 0x25c23cu: goto label_25c23c;
        case 0x25c240u: goto label_25c240;
        case 0x25c244u: goto label_25c244;
        case 0x25c248u: goto label_25c248;
        case 0x25c24cu: goto label_25c24c;
        case 0x25c250u: goto label_25c250;
        case 0x25c254u: goto label_25c254;
        case 0x25c258u: goto label_25c258;
        case 0x25c25cu: goto label_25c25c;
        case 0x25c260u: goto label_25c260;
        case 0x25c264u: goto label_25c264;
        case 0x25c268u: goto label_25c268;
        case 0x25c26cu: goto label_25c26c;
        case 0x25c270u: goto label_25c270;
        case 0x25c274u: goto label_25c274;
        case 0x25c278u: goto label_25c278;
        case 0x25c27cu: goto label_25c27c;
        case 0x25c280u: goto label_25c280;
        case 0x25c284u: goto label_25c284;
        case 0x25c288u: goto label_25c288;
        case 0x25c28cu: goto label_25c28c;
        case 0x25c290u: goto label_25c290;
        case 0x25c294u: goto label_25c294;
        case 0x25c298u: goto label_25c298;
        case 0x25c29cu: goto label_25c29c;
        case 0x25c2a0u: goto label_25c2a0;
        case 0x25c2a4u: goto label_25c2a4;
        case 0x25c2a8u: goto label_25c2a8;
        case 0x25c2acu: goto label_25c2ac;
        case 0x25c2b0u: goto label_25c2b0;
        case 0x25c2b4u: goto label_25c2b4;
        case 0x25c2b8u: goto label_25c2b8;
        case 0x25c2bcu: goto label_25c2bc;
        case 0x25c2c0u: goto label_25c2c0;
        case 0x25c2c4u: goto label_25c2c4;
        case 0x25c2c8u: goto label_25c2c8;
        case 0x25c2ccu: goto label_25c2cc;
        case 0x25c2d0u: goto label_25c2d0;
        case 0x25c2d4u: goto label_25c2d4;
        case 0x25c2d8u: goto label_25c2d8;
        case 0x25c2dcu: goto label_25c2dc;
        case 0x25c2e0u: goto label_25c2e0;
        case 0x25c2e4u: goto label_25c2e4;
        case 0x25c2e8u: goto label_25c2e8;
        case 0x25c2ecu: goto label_25c2ec;
        case 0x25c2f0u: goto label_25c2f0;
        case 0x25c2f4u: goto label_25c2f4;
        case 0x25c2f8u: goto label_25c2f8;
        case 0x25c2fcu: goto label_25c2fc;
        case 0x25c300u: goto label_25c300;
        case 0x25c304u: goto label_25c304;
        case 0x25c308u: goto label_25c308;
        case 0x25c30cu: goto label_25c30c;
        case 0x25c310u: goto label_25c310;
        case 0x25c314u: goto label_25c314;
        case 0x25c318u: goto label_25c318;
        case 0x25c31cu: goto label_25c31c;
        case 0x25c320u: goto label_25c320;
        case 0x25c324u: goto label_25c324;
        case 0x25c328u: goto label_25c328;
        case 0x25c32cu: goto label_25c32c;
        case 0x25c330u: goto label_25c330;
        case 0x25c334u: goto label_25c334;
        case 0x25c338u: goto label_25c338;
        case 0x25c33cu: goto label_25c33c;
        case 0x25c340u: goto label_25c340;
        case 0x25c344u: goto label_25c344;
        case 0x25c348u: goto label_25c348;
        case 0x25c34cu: goto label_25c34c;
        case 0x25c350u: goto label_25c350;
        case 0x25c354u: goto label_25c354;
        case 0x25c358u: goto label_25c358;
        case 0x25c35cu: goto label_25c35c;
        case 0x25c360u: goto label_25c360;
        case 0x25c364u: goto label_25c364;
        case 0x25c368u: goto label_25c368;
        case 0x25c36cu: goto label_25c36c;
        case 0x25c370u: goto label_25c370;
        case 0x25c374u: goto label_25c374;
        case 0x25c378u: goto label_25c378;
        case 0x25c37cu: goto label_25c37c;
        case 0x25c380u: goto label_25c380;
        case 0x25c384u: goto label_25c384;
        case 0x25c388u: goto label_25c388;
        case 0x25c38cu: goto label_25c38c;
        case 0x25c390u: goto label_25c390;
        case 0x25c394u: goto label_25c394;
        case 0x25c398u: goto label_25c398;
        case 0x25c39cu: goto label_25c39c;
        case 0x25c3a0u: goto label_25c3a0;
        case 0x25c3a4u: goto label_25c3a4;
        case 0x25c3a8u: goto label_25c3a8;
        case 0x25c3acu: goto label_25c3ac;
        case 0x25c3b0u: goto label_25c3b0;
        case 0x25c3b4u: goto label_25c3b4;
        case 0x25c3b8u: goto label_25c3b8;
        case 0x25c3bcu: goto label_25c3bc;
        case 0x25c3c0u: goto label_25c3c0;
        case 0x25c3c4u: goto label_25c3c4;
        case 0x25c3c8u: goto label_25c3c8;
        case 0x25c3ccu: goto label_25c3cc;
        case 0x25c3d0u: goto label_25c3d0;
        case 0x25c3d4u: goto label_25c3d4;
        case 0x25c3d8u: goto label_25c3d8;
        case 0x25c3dcu: goto label_25c3dc;
        case 0x25c3e0u: goto label_25c3e0;
        case 0x25c3e4u: goto label_25c3e4;
        case 0x25c3e8u: goto label_25c3e8;
        case 0x25c3ecu: goto label_25c3ec;
        case 0x25c3f0u: goto label_25c3f0;
        case 0x25c3f4u: goto label_25c3f4;
        case 0x25c3f8u: goto label_25c3f8;
        case 0x25c3fcu: goto label_25c3fc;
        case 0x25c400u: goto label_25c400;
        case 0x25c404u: goto label_25c404;
        case 0x25c408u: goto label_25c408;
        case 0x25c40cu: goto label_25c40c;
        case 0x25c410u: goto label_25c410;
        case 0x25c414u: goto label_25c414;
        case 0x25c418u: goto label_25c418;
        case 0x25c41cu: goto label_25c41c;
        case 0x25c420u: goto label_25c420;
        case 0x25c424u: goto label_25c424;
        case 0x25c428u: goto label_25c428;
        case 0x25c42cu: goto label_25c42c;
        default: break;
    }

    ctx->pc = 0x25b420u;

label_25b420:
    // 0x25b420: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x25b420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
label_25b424:
    // 0x25b424: 0x7fbf0060  sq          $ra, 0x60($sp)
    ctx->pc = 0x25b424u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 31));
label_25b428:
    // 0x25b428: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x25b428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_25b42c:
    // 0x25b42c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x25b42cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_25b430:
    // 0x25b430: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x25b430u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_25b434:
    // 0x25b434: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x25b434u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_25b438:
    // 0x25b438: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25b438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_25b43c:
    // 0x25b43c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25b43cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_25b440:
    // 0x25b440: 0xafa40138  sw          $a0, 0x138($sp)
    ctx->pc = 0x25b440u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 4));
label_25b444:
    // 0x25b444: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x25b444u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_25b448:
    // 0x25b448: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x25b448u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_25b44c:
    // 0x25b44c: 0x8c8309f8  lw          $v1, 0x9F8($a0)
    ctx->pc = 0x25b44cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2552)));
label_25b450:
    // 0x25b450: 0x31202  srl         $v0, $v1, 8
    ctx->pc = 0x25b450u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
label_25b454:
    // 0x25b454: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_25b458:
    if (ctx->pc == 0x25B458u) {
        ctx->pc = 0x25B45Cu;
        goto label_25b45c;
    }
    ctx->pc = 0x25B454u;
    {
        const bool branch_taken_0x25b454 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x25b454) {
            ctx->pc = 0x25B470u;
            goto label_25b470;
        }
    }
    ctx->pc = 0x25B45Cu;
label_25b45c:
    // 0x25b45c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25b45cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_25b460:
    // 0x25b460: 0x0  nop
    ctx->pc = 0x25b460u;
    // NOP
label_25b464:
    // 0x25b464: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x25b464u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_25b468:
    // 0x25b468: 0x10000008  b           . + 4 + (0x8 << 2)
label_25b46c:
    if (ctx->pc == 0x25B46Cu) {
        ctx->pc = 0x25B470u;
        goto label_25b470;
    }
    ctx->pc = 0x25B468u;
    {
        const bool branch_taken_0x25b468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25b468) {
            ctx->pc = 0x25B48Cu;
            goto label_25b48c;
        }
    }
    ctx->pc = 0x25B470u;
label_25b470:
    // 0x25b470: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x25b470u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_25b474:
    // 0x25b474: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x25b474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_25b478:
    // 0x25b478: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x25b478u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_25b47c:
    // 0x25b47c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x25b47cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_25b480:
    // 0x25b480: 0x0  nop
    ctx->pc = 0x25b480u;
    // NOP
label_25b484:
    // 0x25b484: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x25b484u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_25b488:
    // 0x25b488: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x25b488u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_25b48c:
    // 0x25b48c: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x25b48cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_25b490:
    // 0x25b490: 0x8c6209f8  lw          $v0, 0x9F8($v1)
    ctx->pc = 0x25b490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2552)));
label_25b494:
    // 0x25b494: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x25b494u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_25b498:
    // 0x25b498: 0x6400006  bltz        $s2, . + 4 + (0x6 << 2)
label_25b49c:
    if (ctx->pc == 0x25B49Cu) {
        ctx->pc = 0x25B4A0u;
        goto label_25b4a0;
    }
    ctx->pc = 0x25B498u;
    {
        const bool branch_taken_0x25b498 = (GPR_S32(ctx, 18) < 0);
        if (branch_taken_0x25b498) {
            ctx->pc = 0x25B4B4u;
            goto label_25b4b4;
        }
    }
    ctx->pc = 0x25B4A0u;
label_25b4a0:
    // 0x25b4a0: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x25b4a0u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_25b4a4:
    // 0x25b4a4: 0x0  nop
    ctx->pc = 0x25b4a4u;
    // NOP
label_25b4a8:
    // 0x25b4a8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x25b4a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_25b4ac:
    // 0x25b4ac: 0x10000008  b           . + 4 + (0x8 << 2)
label_25b4b0:
    if (ctx->pc == 0x25B4B0u) {
        ctx->pc = 0x25B4B4u;
        goto label_25b4b4;
    }
    ctx->pc = 0x25B4ACu;
    {
        const bool branch_taken_0x25b4ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25b4ac) {
            ctx->pc = 0x25B4D0u;
            goto label_25b4d0;
        }
    }
    ctx->pc = 0x25B4B4u;
label_25b4b4:
    // 0x25b4b4: 0x121842  srl         $v1, $s2, 1
    ctx->pc = 0x25b4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
label_25b4b8:
    // 0x25b4b8: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x25b4b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
label_25b4bc:
    // 0x25b4bc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x25b4bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_25b4c0:
    // 0x25b4c0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x25b4c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_25b4c4:
    // 0x25b4c4: 0x0  nop
    ctx->pc = 0x25b4c4u;
    // NOP
label_25b4c8:
    // 0x25b4c8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x25b4c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_25b4cc:
    // 0x25b4cc: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x25b4ccu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_25b4d0:
    // 0x25b4d0: 0x3c024380  lui         $v0, 0x4380
    ctx->pc = 0x25b4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17280 << 16));
label_25b4d4:
    // 0x25b4d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25b4d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_25b4d8:
    // 0x25b4d8: 0x0  nop
    ctx->pc = 0x25b4d8u;
    // NOP
label_25b4dc:
    // 0x25b4dc: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x25b4dcu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_25b4e0:
    // 0x25b4e0: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x25b4e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_25b4e4:
    // 0x25b4e4: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x25b4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_25b4e8:
    // 0x25b4e8: 0xe44009d0  swc1        $f0, 0x9D0($v0)
    ctx->pc = 0x25b4e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 2512), bits); }
label_25b4ec:
    // 0x25b4ec: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x25b4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_25b4f0:
    // 0x25b4f0: 0x24420300  addiu       $v0, $v0, 0x300
    ctx->pc = 0x25b4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 768));
label_25b4f4:
    // 0x25b4f4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x25b4f4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_25b4f8:
    // 0x25b4f8: 0x27a200d0  addiu       $v0, $sp, 0xD0
    ctx->pc = 0x25b4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_25b4fc:
    // 0x25b4fc: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x25b4fcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
label_25b500:
    // 0x25b500: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x25b500u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_25b504:
    // 0x25b504: 0xc48009d0  lwc1        $f0, 0x9D0($a0)
    ctx->pc = 0x25b504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 2512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25b508:
    // 0x25b508: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x25b508u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_25b50c:
    // 0x25b50c: 0x8fa50138  lw          $a1, 0x138($sp)
    ctx->pc = 0x25b50cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_25b510:
    // 0x25b510: 0xc4a009d4  lwc1        $f0, 0x9D4($a1)
    ctx->pc = 0x25b510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 2516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25b514:
    // 0x25b514: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x25b514u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_25b518:
    // 0x25b518: 0x8fa60138  lw          $a2, 0x138($sp)
    ctx->pc = 0x25b518u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_25b51c:
    // 0x25b51c: 0x94c209e0  lhu         $v0, 0x9E0($a2)
    ctx->pc = 0x25b51cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 2528)));
label_25b520:
    // 0x25b520: 0xa7a200c8  sh          $v0, 0xC8($sp)
    ctx->pc = 0x25b520u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 200), (uint16_t)GPR_U32(ctx, 2));
label_25b524:
    // 0x25b524: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x25b524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_25b528:
    // 0x25b528: 0x90620012  lbu         $v0, 0x12($v1)
    ctx->pc = 0x25b528u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 18)));
label_25b52c:
    // 0x25b52c: 0xa3a200e0  sb          $v0, 0xE0($sp)
    ctx->pc = 0x25b52cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 224), (uint8_t)GPR_U32(ctx, 2));
label_25b530:
    // 0x25b530: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x25b530u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_25b534:
    // 0x25b534: 0x248500e0  addiu       $a1, $a0, 0xE0
    ctx->pc = 0x25b534u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 224));
label_25b538:
    // 0x25b538: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x25b538u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_25b53c:
    // 0x25b53c: 0xc067688  jal         func_19DA20
label_25b540:
    if (ctx->pc == 0x25B540u) {
        ctx->pc = 0x25B544u;
        goto label_25b544;
    }
    ctx->pc = 0x25B53Cu;
    SET_GPR_U32(ctx, 31, 0x25B544u);
    ctx->pc = 0x19DA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA20u, 0x25B53Cu, 0x25B544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B544u;
label_25b544:
    // 0x25b544: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x25b544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_25b548:
    // 0x25b548: 0x8fa50138  lw          $a1, 0x138($sp)
    ctx->pc = 0x25b548u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_25b54c:
    // 0x25b54c: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x25b54cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_25b550:
    // 0x25b550: 0x244400e0  addiu       $a0, $v0, 0xE0
    ctx->pc = 0x25b550u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 224));
label_25b554:
    // 0x25b554: 0x24a500e0  addiu       $a1, $a1, 0xE0
    ctx->pc = 0x25b554u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 224));
label_25b558:
    // 0x25b558: 0xc46c00d0  lwc1        $f12, 0xD0($v1)
    ctx->pc = 0x25b558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_25b55c:
    // 0x25b55c: 0xc06776c  jal         func_19DDB0
label_25b560:
    if (ctx->pc == 0x25B560u) {
        ctx->pc = 0x25B564u;
        goto label_25b564;
    }
    ctx->pc = 0x25B55Cu;
    SET_GPR_U32(ctx, 31, 0x25B564u);
    ctx->pc = 0x19DDB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DDB0u, 0x25B55Cu, 0x25B564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B564u;
label_25b564:
    // 0x25b564: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x25b564u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_25b568:
    // 0x25b568: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x25b568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_25b56c:
    // 0x25b56c: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x25b56cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_25b570:
    // 0x25b570: 0x248400e0  addiu       $a0, $a0, 0xE0
    ctx->pc = 0x25b570u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 224));
label_25b574:
    // 0x25b574: 0x246500e0  addiu       $a1, $v1, 0xE0
    ctx->pc = 0x25b574u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 224));
label_25b578:
    // 0x25b578: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x25b578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_25b57c:
    // 0x25b57c: 0xc067808  jal         func_19E020
label_25b580:
    if (ctx->pc == 0x25B580u) {
        ctx->pc = 0x25B584u;
        goto label_25b584;
    }
    ctx->pc = 0x25B57Cu;
    SET_GPR_U32(ctx, 31, 0x25B584u);
    ctx->pc = 0x19E020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E020u, 0x25B57Cu, 0x25B584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B584u;
label_25b584:
    // 0x25b584: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x25b584u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_25b588:
    // 0x25b588: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x25b588u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_25b58c:
    // 0x25b58c: 0x8fa50138  lw          $a1, 0x138($sp)
    ctx->pc = 0x25b58cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_25b590:
    // 0x25b590: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x25b590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_25b594:
    // 0x25b594: 0x248400e0  addiu       $a0, $a0, 0xE0
    ctx->pc = 0x25b594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 224));
label_25b598:
    // 0x25b598: 0x24a500e0  addiu       $a1, $a1, 0xE0
    ctx->pc = 0x25b598u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 224));
label_25b59c:
    // 0x25b59c: 0xc46c00d8  lwc1        $f12, 0xD8($v1)
    ctx->pc = 0x25b59cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_25b5a0:
    // 0x25b5a0: 0xc0676d0  jal         func_19DB40
label_25b5a4:
    if (ctx->pc == 0x25B5A4u) {
        ctx->pc = 0x25B5A8u;
        goto label_25b5a8;
    }
    ctx->pc = 0x25B5A0u;
    SET_GPR_U32(ctx, 31, 0x25B5A8u);
    ctx->pc = 0x19DB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DB40u, 0x25B5A0u, 0x25B5A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B5A8u;
label_25b5a8:
    // 0x25b5a8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x25b5a8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_25b5ac:
    // 0x25b5ac: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x25b5acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_25b5b0:
    // 0x25b5b0: 0x24830120  addiu       $v1, $a0, 0x120
    ctx->pc = 0x25b5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
label_25b5b4:
    // 0x25b5b4: 0x78660000  lq          $a2, 0x0($v1)
    ctx->pc = 0x25b5b4u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_25b5b8:
    // 0x25b5b8: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x25b5b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_25b5bc:
    // 0x25b5bc: 0x24830110  addiu       $v1, $a0, 0x110
    ctx->pc = 0x25b5bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 272));
label_25b5c0:
    // 0x25b5c0: 0x7c660000  sq          $a2, 0x0($v1)
    ctx->pc = 0x25b5c0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 6));
label_25b5c4:
    // 0x25b5c4: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x25b5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_25b5c8:
    // 0x25b5c8: 0x8c6305f4  lw          $v1, 0x5F4($v1)
    ctx->pc = 0x25b5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1524)));
label_25b5cc:
    // 0x25b5cc: 0x10600047  beqz        $v1, . + 4 + (0x47 << 2)
label_25b5d0:
    if (ctx->pc == 0x25B5D0u) {
        ctx->pc = 0x25B5D4u;
        goto label_25b5d4;
    }
    ctx->pc = 0x25B5CCu;
    {
        const bool branch_taken_0x25b5cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25b5cc) {
            ctx->pc = 0x25B6ECu;
            goto label_25b6ec;
        }
    }
    ctx->pc = 0x25B5D4u;
label_25b5d4:
    // 0x25b5d4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x25b5d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_25b5d8:
    // 0x25b5d8: 0xa7a300ca  sh          $v1, 0xCA($sp)
    ctx->pc = 0x25b5d8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 202), (uint16_t)GPR_U32(ctx, 3));
label_25b5dc:
    // 0x25b5dc: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x25b5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_25b5e0:
    // 0x25b5e0: 0x8c6405f4  lw          $a0, 0x5F4($v1)
    ctx->pc = 0x25b5e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1524)));
label_25b5e4:
    // 0x25b5e4: 0xafa400cc  sw          $a0, 0xCC($sp)
    ctx->pc = 0x25b5e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 4));
label_25b5e8:
    // 0x25b5e8: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x25b5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_25b5ec:
    // 0x25b5ec: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x25b5ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_25b5f0:
    // 0x25b5f0: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x25b5f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_25b5f4:
    // 0x25b5f4: 0x24460602  addiu       $a2, $v0, 0x602
    ctx->pc = 0x25b5f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1538));
label_25b5f8:
    // 0x25b5f8: 0xc098ba0  jal         func_262E80
label_25b5fc:
    if (ctx->pc == 0x25B5FCu) {
        ctx->pc = 0x25B600u;
        goto label_25b600;
    }
    ctx->pc = 0x25B5F8u;
    SET_GPR_U32(ctx, 31, 0x25B600u);
    ctx->pc = 0x262E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262E80u, 0x25B5F8u, 0x25B600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B600u;
label_25b600:
    // 0x25b600: 0x8fa50138  lw          $a1, 0x138($sp)
    ctx->pc = 0x25b600u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_25b604:
    // 0x25b604: 0x94a209e0  lhu         $v0, 0x9E0($a1)
    ctx->pc = 0x25b604u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2528)));
label_25b608:
    // 0x25b608: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x25b608u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_25b60c:
    // 0x25b60c: 0x30850004  andi        $a1, $a0, 0x4
    ctx->pc = 0x25b60cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
label_25b610:
    // 0x25b610: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
label_25b614:
    if (ctx->pc == 0x25B614u) {
        ctx->pc = 0x25B618u;
        goto label_25b618;
    }
    ctx->pc = 0x25B610u;
    {
        const bool branch_taken_0x25b610 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x25b610) {
            ctx->pc = 0x25B62Cu;
            goto label_25b62c;
        }
    }
    ctx->pc = 0x25B618u;
label_25b618:
    // 0x25b618: 0x3c06bf80  lui         $a2, 0xBF80
    ctx->pc = 0x25b618u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)49024 << 16));
label_25b61c:
    // 0x25b61c: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x25b61cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_25b620:
    // 0x25b620: 0xc7a00110  lwc1        $f0, 0x110($sp)
    ctx->pc = 0x25b620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25b624:
    // 0x25b624: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x25b624u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_25b628:
    // 0x25b628: 0xe7a00110  swc1        $f0, 0x110($sp)
    ctx->pc = 0x25b628u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_25b62c:
    // 0x25b62c: 0xc7a00114  lwc1        $f0, 0x114($sp)
    ctx->pc = 0x25b62cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25b630:
    // 0x25b630: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x25b630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_25b634:
    // 0x25b634: 0xe44009cc  swc1        $f0, 0x9CC($v0)
    ctx->pc = 0x25b634u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 2508), bits); }
label_25b638:
    // 0x25b638: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x25b638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_25b63c:
    // 0x25b63c: 0x8c630330  lw          $v1, 0x330($v1)
    ctx->pc = 0x25b63cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 816)));
label_25b640:
    // 0x25b640: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x25b640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25b644:
    // 0x25b644: 0xe7a00120  swc1        $f0, 0x120($sp)
    ctx->pc = 0x25b644u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_25b648:
    // 0x25b648: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x25b648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_25b64c:
    // 0x25b64c: 0x8c630330  lw          $v1, 0x330($v1)
    ctx->pc = 0x25b64cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 816)));
label_25b650:
    // 0x25b650: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x25b650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25b654:
    // 0x25b654: 0xe7a00124  swc1        $f0, 0x124($sp)
    ctx->pc = 0x25b654u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
label_25b658:
    // 0x25b658: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x25b658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_25b65c:
    // 0x25b65c: 0x8c630330  lw          $v1, 0x330($v1)
    ctx->pc = 0x25b65cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 816)));
label_25b660:
    // 0x25b660: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x25b660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25b664:
    // 0x25b664: 0xe7a00128  swc1        $f0, 0x128($sp)
    ctx->pc = 0x25b664u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
label_25b668:
    // 0x25b668: 0xc7a00110  lwc1        $f0, 0x110($sp)
    ctx->pc = 0x25b668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25b66c:
    // 0x25b66c: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x25b66cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_25b670:
    // 0x25b670: 0x8c630330  lw          $v1, 0x330($v1)
    ctx->pc = 0x25b670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 816)));
label_25b674:
    // 0x25b674: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x25b674u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_25b678:
    // 0x25b678: 0xc7a00114  lwc1        $f0, 0x114($sp)
    ctx->pc = 0x25b678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25b67c:
    // 0x25b67c: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x25b67cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_25b680:
    // 0x25b680: 0x8c630330  lw          $v1, 0x330($v1)
    ctx->pc = 0x25b680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 816)));
label_25b684:
    // 0x25b684: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x25b684u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_25b688:
    // 0x25b688: 0xc7a00118  lwc1        $f0, 0x118($sp)
    ctx->pc = 0x25b688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25b68c:
    // 0x25b68c: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x25b68cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_25b690:
    // 0x25b690: 0x8c830330  lw          $v1, 0x330($a0)
    ctx->pc = 0x25b690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 816)));
label_25b694:
    // 0x25b694: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x25b694u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_25b698:
    // 0x25b698: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x25b698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_25b69c:
    // 0x25b69c: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x25b69cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
label_25b6a0:
    // 0x25b6a0: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x25b6a0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_25b6a4:
    // 0x25b6a4: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x25b6a4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_25b6a8:
    // 0x25b6a8: 0xc040cbc  jal         func_1032F0
label_25b6ac:
    if (ctx->pc == 0x25B6ACu) {
        ctx->pc = 0x25B6B0u;
        goto label_25b6b0;
    }
    ctx->pc = 0x25B6A8u;
    SET_GPR_U32(ctx, 31, 0x25B6B0u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x25B6B0u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25B6B0u) { return; }
    ctx->pc = 0x25B6B0u;
label_25b6b0:
    // 0x25b6b0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x25b6b0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_25b6b4:
    // 0x25b6b4: 0xc7a00110  lwc1        $f0, 0x110($sp)
    ctx->pc = 0x25b6b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25b6b8:
    // 0x25b6b8: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x25b6b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
label_25b6bc:
    // 0x25b6bc: 0xc7a00114  lwc1        $f0, 0x114($sp)
    ctx->pc = 0x25b6bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25b6c0:
    // 0x25b6c0: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x25b6c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
label_25b6c4:
    // 0x25b6c4: 0xc7a00118  lwc1        $f0, 0x118($sp)
    ctx->pc = 0x25b6c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25b6c8:
    // 0x25b6c8: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x25b6c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
label_25b6cc:
    // 0x25b6cc: 0x8fa50138  lw          $a1, 0x138($sp)
    ctx->pc = 0x25b6ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_25b6d0:
    // 0x25b6d0: 0x8fa60138  lw          $a2, 0x138($sp)
    ctx->pc = 0x25b6d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_25b6d4:
    // 0x25b6d4: 0x8ca40130  lw          $a0, 0x130($a1)
    ctx->pc = 0x25b6d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
label_25b6d8:
    // 0x25b6d8: 0x24c500e0  addiu       $a1, $a2, 0xE0
    ctx->pc = 0x25b6d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 224));
label_25b6dc:
    // 0x25b6dc: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x25b6dcu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_25b6e0:
    // 0x25b6e0: 0xc0675f8  jal         func_19D7E0
label_25b6e4:
    if (ctx->pc == 0x25B6E4u) {
        ctx->pc = 0x25B6E8u;
        goto label_25b6e8;
    }
    ctx->pc = 0x25B6E0u;
    SET_GPR_U32(ctx, 31, 0x25B6E8u);
    ctx->pc = 0x19D7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D7E0u, 0x25B6E0u, 0x25B6E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B6E8u;
label_25b6e8:
    // 0x25b6e8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x25b6e8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_25b6ec:
    // 0x25b6ec: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x25b6ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_25b6f0:
    // 0x25b6f0: 0x8c24fdf8  lw          $a0, -0x208($at)
    ctx->pc = 0x25b6f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294966776)));
label_25b6f4:
    // 0x25b6f4: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
label_25b6f8:
    if (ctx->pc == 0x25B6F8u) {
        ctx->pc = 0x25B6FCu;
        goto label_25b6fc;
    }
    ctx->pc = 0x25B6F4u;
    {
        const bool branch_taken_0x25b6f4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x25b6f4) {
            ctx->pc = 0x25B714u;
            goto label_25b714;
        }
    }
    ctx->pc = 0x25B6FCu;
label_25b6fc:
    // 0x25b6fc: 0x8fa50138  lw          $a1, 0x138($sp)
    ctx->pc = 0x25b6fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_25b700:
    // 0x25b700: 0xc4a00124  lwc1        $f0, 0x124($a1)
    ctx->pc = 0x25b700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25b704:
    // 0x25b704: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x25b704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_25b708:
    // 0x25b708: 0xe46002d8  swc1        $f0, 0x2D8($v1)
    ctx->pc = 0x25b708u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 728), bits); }
label_25b70c:
    // 0x25b70c: 0x10000017  b           . + 4 + (0x17 << 2)
label_25b710:
    if (ctx->pc == 0x25B710u) {
        ctx->pc = 0x25B714u;
        goto label_25b714;
    }
    ctx->pc = 0x25B70Cu;
    {
        const bool branch_taken_0x25b70c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25b70c) {
            ctx->pc = 0x25B76Cu;
            goto label_25b76c;
        }
    }
    ctx->pc = 0x25B714u;
label_25b714:
    // 0x25b714: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x25b714u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_25b718:
    // 0x25b718: 0x8c850130  lw          $a1, 0x130($a0)
    ctx->pc = 0x25b718u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
label_25b71c:
    // 0x25b71c: 0x24a40030  addiu       $a0, $a1, 0x30
    ctx->pc = 0x25b71cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
label_25b720:
    // 0x25b720: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x25b720u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_25b724:
    // 0x25b724: 0xc05cf7c  jal         func_173DF0
label_25b728:
    if (ctx->pc == 0x25B728u) {
        ctx->pc = 0x25B72Cu;
        goto label_25b72c;
    }
    ctx->pc = 0x25B724u;
    SET_GPR_U32(ctx, 31, 0x25B72Cu);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x25B724u, 0x25B72Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B72Cu;
label_25b72c:
    // 0x25b72c: 0x8fa50138  lw          $a1, 0x138($sp)
    ctx->pc = 0x25b72cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_25b730:
    // 0x25b730: 0xe4a002d8  swc1        $f0, 0x2D8($a1)
    ctx->pc = 0x25b730u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 728), bits); }
label_25b734:
    // 0x25b734: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x25b734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_25b738:
    // 0x25b738: 0xc46102d8  lwc1        $f1, 0x2D8($v1)
    ctx->pc = 0x25b738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25b73c:
    // 0x25b73c: 0x3c05c974  lui         $a1, 0xC974
    ctx->pc = 0x25b73cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51572 << 16));
label_25b740:
    // 0x25b740: 0x34a42400  ori         $a0, $a1, 0x2400
    ctx->pc = 0x25b740u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)9216);
label_25b744:
    // 0x25b744: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x25b744u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_25b748:
    // 0x25b748: 0x0  nop
    ctx->pc = 0x25b748u;
    // NOP
label_25b74c:
    // 0x25b74c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x25b74cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_25b750:
    // 0x25b750: 0x0  nop
    ctx->pc = 0x25b750u;
    // NOP
label_25b754:
    // 0x25b754: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_25b758:
    if (ctx->pc == 0x25B758u) {
        ctx->pc = 0x25B75Cu;
        goto label_25b75c;
    }
    ctx->pc = 0x25B754u;
    {
        const bool branch_taken_0x25b754 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25b754) {
            ctx->pc = 0x25B76Cu;
            goto label_25b76c;
        }
    }
    ctx->pc = 0x25B75Cu;
label_25b75c:
    // 0x25b75c: 0x8fa60138  lw          $a2, 0x138($sp)
    ctx->pc = 0x25b75cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_25b760:
    // 0x25b760: 0xc4c00124  lwc1        $f0, 0x124($a2)
    ctx->pc = 0x25b760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25b764:
    // 0x25b764: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x25b764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_25b768:
    // 0x25b768: 0xe46002d8  swc1        $f0, 0x2D8($v1)
    ctx->pc = 0x25b768u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 728), bits); }
label_25b76c:
    // 0x25b76c: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x25b76cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_25b770:
    // 0x25b770: 0x8c850350  lw          $a1, 0x350($a0)
    ctx->pc = 0x25b770u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 848)));
label_25b774:
    // 0x25b774: 0xb31821  addu        $v1, $a1, $s3
    ctx->pc = 0x25b774u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
label_25b778:
    // 0x25b778: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x25b778u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_25b77c:
    // 0x25b77c: 0x307500ff  andi        $s5, $v1, 0xFF
    ctx->pc = 0x25b77cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_25b780:
    // 0x25b780: 0x32a3003f  andi        $v1, $s5, 0x3F
    ctx->pc = 0x25b780u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)63);
label_25b784:
    // 0x25b784: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x25b784u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_25b788:
    // 0x25b788: 0x309100ff  andi        $s1, $a0, 0xFF
    ctx->pc = 0x25b788u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_25b78c:
    // 0x25b78c: 0x7220a628  paddub      $s4, $s1, $zero
    ctx->pc = 0x25b78cu;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_25b790:
    // 0x25b790: 0x8fa60138  lw          $a2, 0x138($sp)
    ctx->pc = 0x25b790u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_25b794:
    // 0x25b794: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x25b794u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_25b798:
    // 0x25b798: 0x912821  addu        $a1, $a0, $s1
    ctx->pc = 0x25b798u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
label_25b79c:
    // 0x25b79c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x25b79cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_25b7a0:
    // 0x25b7a0: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x25b7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_25b7a4:
    // 0x25b7a4: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x25b7a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_25b7a8:
    // 0x25b7a8: 0x8cc302d0  lw          $v1, 0x2D0($a2)
    ctx->pc = 0x25b7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 720)));
label_25b7ac:
    // 0x25b7ac: 0x643021  addu        $a2, $v1, $a0
    ctx->pc = 0x25b7acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_25b7b0:
    // 0x25b7b0: 0x70c08628  paddub      $s0, $a2, $zero
    ctx->pc = 0x25b7b0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_25b7b4:
    // 0x25b7b4: 0x72009628  paddub      $s2, $s0, $zero
    ctx->pc = 0x25b7b4u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_25b7b8:
    // 0x25b7b8: 0x8fa50138  lw          $a1, 0x138($sp)
    ctx->pc = 0x25b7b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_25b7bc:
    // 0x25b7bc: 0x94a309e0  lhu         $v1, 0x9E0($a1)
    ctx->pc = 0x25b7bcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2528)));
label_25b7c0:
    // 0x25b7c0: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x25b7c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_25b7c4:
    // 0x25b7c4: 0x30830004  andi        $v1, $a0, 0x4
    ctx->pc = 0x25b7c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
label_25b7c8:
    // 0x25b7c8: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
label_25b7cc:
    if (ctx->pc == 0x25B7CCu) {
        ctx->pc = 0x25B7D0u;
        goto label_25b7d0;
    }
    ctx->pc = 0x25B7C8u;
    {
        const bool branch_taken_0x25b7c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25b7c8) {
            ctx->pc = 0x25B818u;
            goto label_25b818;
        }
    }
    ctx->pc = 0x25B7D0u;
label_25b7d0:
    // 0x25b7d0: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x25b7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_25b7d4:
    // 0x25b7d4: 0x8c630354  lw          $v1, 0x354($v1)
    ctx->pc = 0x25b7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 852)));
label_25b7d8:
    // 0x25b7d8: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
label_25b7dc:
    if (ctx->pc == 0x25B7DCu) {
        ctx->pc = 0x25B7E0u;
        goto label_25b7e0;
    }
    ctx->pc = 0x25B7D8u;
    {
        const bool branch_taken_0x25b7d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25b7d8) {
            ctx->pc = 0x25B818u;
            goto label_25b818;
        }
    }
    ctx->pc = 0x25B7E0u;
label_25b7e0:
    // 0x25b7e0: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x25b7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_25b7e4:
    // 0x25b7e4: 0x8c640354  lw          $a0, 0x354($v1)
    ctx->pc = 0x25b7e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 852)));
label_25b7e8:
    // 0x25b7e8: 0x911821  addu        $v1, $a0, $s1
    ctx->pc = 0x25b7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
label_25b7ec:
    // 0x25b7ec: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x25b7ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_25b7f0:
    // 0x25b7f0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x25b7f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_25b7f4:
    // 0x25b7f4: 0x70608e28  paddub      $s1, $v1, $zero
    ctx->pc = 0x25b7f4u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_25b7f8:
    // 0x25b7f8: 0x8fa50138  lw          $a1, 0x138($sp)
    ctx->pc = 0x25b7f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_25b7fc:
    // 0x25b7fc: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x25b7fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_25b800:
    // 0x25b800: 0x712021  addu        $a0, $v1, $s1
    ctx->pc = 0x25b800u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_25b804:
    // 0x25b804: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x25b804u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_25b808:
    // 0x25b808: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x25b808u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_25b80c:
    // 0x25b80c: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x25b80cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_25b810:
    // 0x25b810: 0x8ca502d0  lw          $a1, 0x2D0($a1)
    ctx->pc = 0x25b810u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 720)));
label_25b814:
    // 0x25b814: 0xa49021  addu        $s2, $a1, $a0
    ctx->pc = 0x25b814u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_25b818:
    // 0x25b818: 0x32a300c0  andi        $v1, $s5, 0xC0
    ctx->pc = 0x25b818u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)192);
label_25b81c:
    // 0x25b81c: 0x14600065  bnez        $v1, . + 4 + (0x65 << 2)
label_25b820:
    if (ctx->pc == 0x25B820u) {
        ctx->pc = 0x25B824u;
        goto label_25b824;
    }
    ctx->pc = 0x25B81Cu;
    {
        const bool branch_taken_0x25b81c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x25b81c) {
            ctx->pc = 0x25B9B4u;
            goto label_25b9b4;
        }
    }
    ctx->pc = 0x25B824u;
label_25b824:
    // 0x25b824: 0x96030140  lhu         $v1, 0x140($s0)
    ctx->pc = 0x25b824u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
label_25b828:
    // 0x25b828: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x25b828u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_25b82c:
    // 0x25b82c: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x25b82cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
label_25b830:
    // 0x25b830: 0x14600031  bnez        $v1, . + 4 + (0x31 << 2)
label_25b834:
    if (ctx->pc == 0x25B834u) {
        ctx->pc = 0x25B838u;
        goto label_25b838;
    }
    ctx->pc = 0x25B830u;
    {
        const bool branch_taken_0x25b830 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x25b830) {
            ctx->pc = 0x25B8F8u;
            goto label_25b8f8;
        }
    }
    ctx->pc = 0x25B838u;
label_25b838:
    // 0x25b838: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x25b838u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_25b83c:
    // 0x25b83c: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x25b83cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_25b840:
    // 0x25b840: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x25b840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_25b844:
    // 0x25b844: 0x8c630370  lw          $v1, 0x370($v1)
    ctx->pc = 0x25b844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 880)));
label_25b848:
    // 0x25b848: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
label_25b84c:
    if (ctx->pc == 0x25B84Cu) {
        ctx->pc = 0x25B850u;
        goto label_25b850;
    }
    ctx->pc = 0x25B848u;
    {
        const bool branch_taken_0x25b848 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25b848) {
            ctx->pc = 0x25B89Cu;
            goto label_25b89c;
        }
    }
    ctx->pc = 0x25B850u;
label_25b850:
    // 0x25b850: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25b850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_25b854:
    // 0x25b854: 0xa7a200ca  sh          $v0, 0xCA($sp)
    ctx->pc = 0x25b854u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 202), (uint16_t)GPR_U32(ctx, 2));
label_25b858:
    // 0x25b858: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x25b858u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_25b85c:
    // 0x25b85c: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x25b85cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_25b860:
    // 0x25b860: 0x43a821  addu        $s5, $v0, $v1
    ctx->pc = 0x25b860u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_25b864:
    // 0x25b864: 0x8ea20370  lw          $v0, 0x370($s5)
    ctx->pc = 0x25b864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 880)));
label_25b868:
    // 0x25b868: 0xafa200cc  sw          $v0, 0xCC($sp)
    ctx->pc = 0x25b868u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 2));
label_25b86c:
    // 0x25b86c: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x25b86cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
label_25b870:
    // 0x25b870: 0x518821  addu        $s1, $v0, $s1
    ctx->pc = 0x25b870u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_25b874:
    // 0x25b874: 0x111840  sll         $v1, $s1, 1
    ctx->pc = 0x25b874u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
label_25b878:
    // 0x25b878: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x25b878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_25b87c:
    // 0x25b87c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x25b87cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_25b880:
    // 0x25b880: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x25b880u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_25b884:
    // 0x25b884: 0x26050104  addiu       $a1, $s0, 0x104
    ctx->pc = 0x25b884u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 260));
label_25b888:
    // 0x25b888: 0x24460608  addiu       $a2, $v0, 0x608
    ctx->pc = 0x25b888u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1544));
label_25b88c:
    // 0x25b88c: 0xc098ba0  jal         func_262E80
label_25b890:
    if (ctx->pc == 0x25B890u) {
        ctx->pc = 0x25B894u;
        goto label_25b894;
    }
    ctx->pc = 0x25B88Cu;
    SET_GPR_U32(ctx, 31, 0x25B894u);
    ctx->pc = 0x262E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262E80u, 0x25B88Cu, 0x25B894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B894u;
label_25b894:
    // 0x25b894: 0x10000008  b           . + 4 + (0x8 << 2)
label_25b898:
    if (ctx->pc == 0x25B898u) {
        ctx->pc = 0x25B89Cu;
        goto label_25b89c;
    }
    ctx->pc = 0x25B894u;
    {
        const bool branch_taken_0x25b894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25b894) {
            ctx->pc = 0x25B8B8u;
            goto label_25b8b8;
        }
    }
    ctx->pc = 0x25B89Cu;
label_25b89c:
    // 0x25b89c: 0xc6400104  lwc1        $f0, 0x104($s2)
    ctx->pc = 0x25b89cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25b8a0:
    // 0x25b8a0: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x25b8a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
label_25b8a4:
    // 0x25b8a4: 0xc6400108  lwc1        $f0, 0x108($s2)
    ctx->pc = 0x25b8a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25b8a8:
    // 0x25b8a8: 0xe6000108  swc1        $f0, 0x108($s0)
    ctx->pc = 0x25b8a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 264), bits); }
label_25b8ac:
    // 0x25b8ac: 0xc640010c  lwc1        $f0, 0x10C($s2)
    ctx->pc = 0x25b8acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25b8b0:
    // 0x25b8b0: 0xe600010c  swc1        $f0, 0x10C($s0)
    ctx->pc = 0x25b8b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 268), bits); }
label_25b8b4:
    // 0x25b8b4: 0x0  nop
    ctx->pc = 0x25b8b4u;
    // NOP
label_25b8b8:
    // 0x25b8b8: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x25b8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_25b8bc:
    // 0x25b8bc: 0x946309e0  lhu         $v1, 0x9E0($v1)
    ctx->pc = 0x25b8bcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2528)));
label_25b8c0:
    // 0x25b8c0: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x25b8c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_25b8c4:
    // 0x25b8c4: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x25b8c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_25b8c8:
    // 0x25b8c8: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_25b8cc:
    if (ctx->pc == 0x25B8CCu) {
        ctx->pc = 0x25B8D0u;
        goto label_25b8d0;
    }
    ctx->pc = 0x25B8C8u;
    {
        const bool branch_taken_0x25b8c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25b8c8) {
            ctx->pc = 0x25B8F8u;
            goto label_25b8f8;
        }
    }
    ctx->pc = 0x25B8D0u;
label_25b8d0:
    // 0x25b8d0: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x25b8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
label_25b8d4:
    // 0x25b8d4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x25b8d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_25b8d8:
    // 0x25b8d8: 0xc6000108  lwc1        $f0, 0x108($s0)
    ctx->pc = 0x25b8d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25b8dc:
    // 0x25b8dc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x25b8dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_25b8e0:
    // 0x25b8e0: 0xe6000108  swc1        $f0, 0x108($s0)
    ctx->pc = 0x25b8e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 264), bits); }
label_25b8e4:
    // 0x25b8e4: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x25b8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
label_25b8e8:
    // 0x25b8e8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x25b8e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_25b8ec:
    // 0x25b8ec: 0xc600010c  lwc1        $f0, 0x10C($s0)
    ctx->pc = 0x25b8ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25b8f0:
    // 0x25b8f0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x25b8f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_25b8f4:
    // 0x25b8f4: 0xe600010c  swc1        $f0, 0x10C($s0)
    ctx->pc = 0x25b8f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 268), bits); }
label_25b8f8:
    // 0x25b8f8: 0x96030140  lhu         $v1, 0x140($s0)
    ctx->pc = 0x25b8f8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
label_25b8fc:
    // 0x25b8fc: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x25b8fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
label_25b900:
    // 0x25b900: 0xa6030140  sh          $v1, 0x140($s0)
    ctx->pc = 0x25b900u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 3));
label_25b904:
    // 0x25b904: 0x96030140  lhu         $v1, 0x140($s0)
    ctx->pc = 0x25b904u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
label_25b908:
    // 0x25b908: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x25b908u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_25b90c:
    // 0x25b90c: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x25b90cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_25b910:
    // 0x25b910: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
label_25b914:
    if (ctx->pc == 0x25B914u) {
        ctx->pc = 0x25B918u;
        goto label_25b918;
    }
    ctx->pc = 0x25B910u;
    {
        const bool branch_taken_0x25b910 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25b910) {
            ctx->pc = 0x25B950u;
            goto label_25b950;
        }
    }
    ctx->pc = 0x25B918u;
label_25b918:
    // 0x25b918: 0x96110140  lhu         $s1, 0x140($s0)
    ctx->pc = 0x25b918u;
    SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
label_25b91c:
    // 0x25b91c: 0x3225ffff  andi        $a1, $s1, 0xFFFF
    ctx->pc = 0x25b91cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
label_25b920:
    // 0x25b920: 0x30a30080  andi        $v1, $a1, 0x80
    ctx->pc = 0x25b920u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)128);
label_25b924:
    // 0x25b924: 0x14600260  bnez        $v1, . + 4 + (0x260 << 2)
label_25b928:
    if (ctx->pc == 0x25B928u) {
        ctx->pc = 0x25B92Cu;
        goto label_25b92c;
    }
    ctx->pc = 0x25B924u;
    {
        const bool branch_taken_0x25b924 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x25b924) {
            ctx->pc = 0x25C2A8u;
            goto label_25c2a8;
        }
    }
    ctx->pc = 0x25B92Cu;
label_25b92c:
    // 0x25b92c: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x25b92cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_25b930:
    // 0x25b930: 0x141980  sll         $v1, $s4, 6
    ctx->pc = 0x25b930u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 6));
label_25b934:
    // 0x25b934: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x25b934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_25b938:
    // 0x25b938: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x25b938u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_25b93c:
    // 0x25b93c: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x25b93cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_25b940:
    // 0x25b940: 0xc040ca2  jal         func_103288
label_25b944:
    if (ctx->pc == 0x25B944u) {
        ctx->pc = 0x25B948u;
        goto label_25b948;
    }
    ctx->pc = 0x25B940u;
    SET_GPR_U32(ctx, 31, 0x25B948u);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x25B948u;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25B948u) { return; }
    ctx->pc = 0x25B948u;
label_25b948:
    // 0x25b948: 0x10000257  b           . + 4 + (0x257 << 2)
label_25b94c:
    if (ctx->pc == 0x25B94Cu) {
        ctx->pc = 0x25B950u;
        goto label_25b950;
    }
    ctx->pc = 0x25B948u;
    {
        const bool branch_taken_0x25b948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25b948) {
            ctx->pc = 0x25C2A8u;
            goto label_25c2a8;
        }
    }
    ctx->pc = 0x25B950u;
label_25b950:
    // 0x25b950: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x25b950u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_25b954:
    // 0x25b954: 0xc60c0104  lwc1        $f12, 0x104($s0)
    ctx->pc = 0x25b954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_25b958:
    // 0x25b958: 0xc0677d8  jal         func_19DF60
label_25b95c:
    if (ctx->pc == 0x25B95Cu) {
        ctx->pc = 0x25B960u;
        goto label_25b960;
    }
    ctx->pc = 0x25B958u;
    SET_GPR_U32(ctx, 31, 0x25B960u);
    ctx->pc = 0x19DF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DF60u, 0x25B958u, 0x25B960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B960u;
label_25b960:
    // 0x25b960: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x25b960u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_25b964:
    // 0x25b964: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x25b964u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_25b968:
    // 0x25b968: 0xc60c0108  lwc1        $f12, 0x108($s0)
    ctx->pc = 0x25b968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_25b96c:
    // 0x25b96c: 0xc067808  jal         func_19E020
label_25b970:
    if (ctx->pc == 0x25B970u) {
        ctx->pc = 0x25B974u;
        goto label_25b974;
    }
    ctx->pc = 0x25B96Cu;
    SET_GPR_U32(ctx, 31, 0x25B974u);
    ctx->pc = 0x19E020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E020u, 0x25B96Cu, 0x25B974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B974u;
label_25b974:
    // 0x25b974: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x25b974u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_25b978:
    // 0x25b978: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x25b978u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_25b97c:
    // 0x25b97c: 0xc60c010c  lwc1        $f12, 0x10C($s0)
    ctx->pc = 0x25b97cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_25b980:
    // 0x25b980: 0xc0676d0  jal         func_19DB40
label_25b984:
    if (ctx->pc == 0x25B984u) {
        ctx->pc = 0x25B988u;
        goto label_25b988;
    }
    ctx->pc = 0x25B980u;
    SET_GPR_U32(ctx, 31, 0x25B988u);
    ctx->pc = 0x19DB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DB40u, 0x25B980u, 0x25B988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B988u;
label_25b988:
    // 0x25b988: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x25b988u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_25b98c:
    // 0x25b98c: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x25b98cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_25b990:
    // 0x25b990: 0x141980  sll         $v1, $s4, 6
    ctx->pc = 0x25b990u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 6));
label_25b994:
    // 0x25b994: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x25b994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_25b998:
    // 0x25b998: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x25b998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_25b99c:
    // 0x25b99c: 0x8e050100  lw          $a1, 0x100($s0)
    ctx->pc = 0x25b99cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
label_25b9a0:
    // 0x25b9a0: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x25b9a0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_25b9a4:
    // 0x25b9a4: 0xc0675f8  jal         func_19D7E0
label_25b9a8:
    if (ctx->pc == 0x25B9A8u) {
        ctx->pc = 0x25B9ACu;
        goto label_25b9ac;
    }
    ctx->pc = 0x25B9A4u;
    SET_GPR_U32(ctx, 31, 0x25B9ACu);
    ctx->pc = 0x19D7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D7E0u, 0x25B9A4u, 0x25B9ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B9ACu;
label_25b9ac:
    // 0x25b9ac: 0x1000023e  b           . + 4 + (0x23E << 2)
label_25b9b0:
    if (ctx->pc == 0x25B9B0u) {
        ctx->pc = 0x25B9B4u;
        goto label_25b9b4;
    }
    ctx->pc = 0x25B9ACu;
    {
        const bool branch_taken_0x25b9ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25b9ac) {
            ctx->pc = 0x25C2A8u;
            goto label_25c2a8;
        }
    }
    ctx->pc = 0x25B9B4u;
label_25b9b4:
    // 0x25b9b4: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x25b9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_25b9b8:
    // 0x25b9b8: 0x12a3023b  beq         $s5, $v1, . + 4 + (0x23B << 2)
label_25b9bc:
    if (ctx->pc == 0x25B9BCu) {
        ctx->pc = 0x25B9C0u;
        goto label_25b9c0;
    }
    ctx->pc = 0x25B9B8u;
    {
        const bool branch_taken_0x25b9b8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 3));
        if (branch_taken_0x25b9b8) {
            ctx->pc = 0x25C2A8u;
            goto label_25c2a8;
        }
    }
    ctx->pc = 0x25B9C0u;
label_25b9c0:
    // 0x25b9c0: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x25b9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_25b9c4:
    // 0x25b9c4: 0x12a30238  beq         $s5, $v1, . + 4 + (0x238 << 2)
label_25b9c8:
    if (ctx->pc == 0x25B9C8u) {
        ctx->pc = 0x25B9CCu;
        goto label_25b9cc;
    }
    ctx->pc = 0x25B9C4u;
    {
        const bool branch_taken_0x25b9c4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 3));
        if (branch_taken_0x25b9c4) {
            ctx->pc = 0x25C2A8u;
            goto label_25c2a8;
        }
    }
    ctx->pc = 0x25B9CCu;
label_25b9cc:
    // 0x25b9cc: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x25b9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_25b9d0:
    // 0x25b9d0: 0x8c64034c  lw          $a0, 0x34C($v1)
    ctx->pc = 0x25b9d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 844)));
label_25b9d4:
    // 0x25b9d4: 0x911821  addu        $v1, $a0, $s1
    ctx->pc = 0x25b9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
label_25b9d8:
    // 0x25b9d8: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x25b9d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_25b9dc:
    // 0x25b9dc: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x25b9dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_25b9e0:
    // 0x25b9e0: 0x2085fffd  addi        $a1, $a0, -0x3
    ctx->pc = 0x25b9e0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 4), (int32_t)4294967293, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
label_25b9e4:
    // 0x25b9e4: 0x2ca10010  sltiu       $at, $a1, 0x10
    ctx->pc = 0x25b9e4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_25b9e8:
    // 0x25b9e8: 0x1020022f  beqz        $at, . + 4 + (0x22F << 2)
label_25b9ec:
    if (ctx->pc == 0x25B9ECu) {
        ctx->pc = 0x25B9F0u;
        goto label_25b9f0;
    }
    ctx->pc = 0x25B9E8u;
    {
        const bool branch_taken_0x25b9e8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x25b9e8) {
            ctx->pc = 0x25C2A8u;
            goto label_25c2a8;
        }
    }
    ctx->pc = 0x25B9F0u;
label_25b9f0:
    // 0x25b9f0: 0x3c06003b  lui         $a2, 0x3B
    ctx->pc = 0x25b9f0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)59 << 16));
label_25b9f4:
    // 0x25b9f4: 0x24c412f0  addiu       $a0, $a2, 0x12F0
    ctx->pc = 0x25b9f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4848));
label_25b9f8:
    // 0x25b9f8: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x25b9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_25b9fc:
    // 0x25b9fc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x25b9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_25ba00:
    // 0x25ba00: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x25ba00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_25ba04:
    // 0x25ba04: 0x600008  jr          $v1
label_25ba08:
    if (ctx->pc == 0x25BA08u) {
        ctx->pc = 0x25BA0Cu;
        goto label_25ba0c;
    }
    ctx->pc = 0x25BA04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25BA04u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x25BA0Cu;
label_25ba0c:
    // 0x25ba0c: 0x0  nop
    ctx->pc = 0x25ba0cu;
    // NOP
label_25ba10:
    // 0x25ba10: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x25ba10u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_25ba14:
    // 0x25ba14: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x25ba14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_25ba18:
    // 0x25ba18: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x25ba18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_25ba1c:
    // 0x25ba1c: 0x8c6304b0  lw          $v1, 0x4B0($v1)
    ctx->pc = 0x25ba1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1200)));
label_25ba20:
    // 0x25ba20: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
label_25ba24:
    if (ctx->pc == 0x25BA24u) {
        ctx->pc = 0x25BA28u;
        goto label_25ba28;
    }
    ctx->pc = 0x25BA20u;
    {
        const bool branch_taken_0x25ba20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25ba20) {
            ctx->pc = 0x25BA74u;
            goto label_25ba74;
        }
    }
    ctx->pc = 0x25BA28u;
label_25ba28:
    // 0x25ba28: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x25ba28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_25ba2c:
    // 0x25ba2c: 0xa7a200ca  sh          $v0, 0xCA($sp)
    ctx->pc = 0x25ba2cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 202), (uint16_t)GPR_U32(ctx, 2));
label_25ba30:
    // 0x25ba30: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x25ba30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_25ba34:
    // 0x25ba34: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x25ba34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_25ba38:
    // 0x25ba38: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x25ba38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_25ba3c:
    // 0x25ba3c: 0x8c5504b0  lw          $s5, 0x4B0($v0)
    ctx->pc = 0x25ba3cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1200)));
label_25ba40:
    // 0x25ba40: 0xafb500cc  sw          $s5, 0xCC($sp)
    ctx->pc = 0x25ba40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 21));
label_25ba44:
    // 0x25ba44: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x25ba44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
label_25ba48:
    // 0x25ba48: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x25ba48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_25ba4c:
    // 0x25ba4c: 0x28840  sll         $s1, $v0, 1
    ctx->pc = 0x25ba4cu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_25ba50:
    // 0x25ba50: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x25ba50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_25ba54:
    // 0x25ba54: 0x711021  addu        $v0, $v1, $s1
    ctx->pc = 0x25ba54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_25ba58:
    // 0x25ba58: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x25ba58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_25ba5c:
    // 0x25ba5c: 0x26050110  addiu       $a1, $s0, 0x110
    ctx->pc = 0x25ba5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
label_25ba60:
    // 0x25ba60: 0x244607e8  addiu       $a2, $v0, 0x7E8
    ctx->pc = 0x25ba60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 2024));
label_25ba64:
    // 0x25ba64: 0xc098ba0  jal         func_262E80
label_25ba68:
    if (ctx->pc == 0x25BA68u) {
        ctx->pc = 0x25BA6Cu;
        goto label_25ba6c;
    }
    ctx->pc = 0x25BA64u;
    SET_GPR_U32(ctx, 31, 0x25BA6Cu);
    ctx->pc = 0x262E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262E80u, 0x25BA64u, 0x25BA6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25BA6Cu;
label_25ba6c:
    // 0x25ba6c: 0x10000008  b           . + 4 + (0x8 << 2)
label_25ba70:
    if (ctx->pc == 0x25BA70u) {
        ctx->pc = 0x25BA74u;
        goto label_25ba74;
    }
    ctx->pc = 0x25BA6Cu;
    {
        const bool branch_taken_0x25ba6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25ba6c) {
            ctx->pc = 0x25BA90u;
            goto label_25ba90;
        }
    }
    ctx->pc = 0x25BA74u;
label_25ba74:
    // 0x25ba74: 0xc6400110  lwc1        $f0, 0x110($s2)
    ctx->pc = 0x25ba74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25ba78:
    // 0x25ba78: 0xe6000110  swc1        $f0, 0x110($s0)
    ctx->pc = 0x25ba78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 272), bits); }
label_25ba7c:
    // 0x25ba7c: 0xc6400114  lwc1        $f0, 0x114($s2)
    ctx->pc = 0x25ba7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25ba80:
    // 0x25ba80: 0xe6000114  swc1        $f0, 0x114($s0)
    ctx->pc = 0x25ba80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 276), bits); }
label_25ba84:
    // 0x25ba84: 0xc6400118  lwc1        $f0, 0x118($s2)
    ctx->pc = 0x25ba84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25ba88:
    // 0x25ba88: 0xe6000118  swc1        $f0, 0x118($s0)
    ctx->pc = 0x25ba88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 280), bits); }
label_25ba8c:
    // 0x25ba8c: 0x0  nop
    ctx->pc = 0x25ba8cu;
    // NOP
label_25ba90:
    // 0x25ba90: 0xc6000110  lwc1        $f0, 0x110($s0)
    ctx->pc = 0x25ba90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25ba94:
    // 0x25ba94: 0xe6000134  swc1        $f0, 0x134($s0)
    ctx->pc = 0x25ba94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 308), bits); }
label_25ba98:
    // 0x25ba98: 0xc6000114  lwc1        $f0, 0x114($s0)
    ctx->pc = 0x25ba98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25ba9c:
    // 0x25ba9c: 0xe6000138  swc1        $f0, 0x138($s0)
    ctx->pc = 0x25ba9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 312), bits); }
label_25baa0:
    // 0x25baa0: 0xc6000118  lwc1        $f0, 0x118($s0)
    ctx->pc = 0x25baa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25baa4:
    // 0x25baa4: 0xe600013c  swc1        $f0, 0x13C($s0)
    ctx->pc = 0x25baa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 316), bits); }
label_25baa8:
    // 0x25baa8: 0x96030140  lhu         $v1, 0x140($s0)
    ctx->pc = 0x25baa8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
label_25baac:
    // 0x25baac: 0x34630600  ori         $v1, $v1, 0x600
    ctx->pc = 0x25baacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1536);
label_25bab0:
    // 0x25bab0: 0xa6030140  sh          $v1, 0x140($s0)
    ctx->pc = 0x25bab0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 3));
label_25bab4:
    // 0x25bab4: 0x100001fc  b           . + 4 + (0x1FC << 2)
label_25bab8:
    if (ctx->pc == 0x25BAB8u) {
        ctx->pc = 0x25BABCu;
        goto label_25babc;
    }
    ctx->pc = 0x25BAB4u;
    {
        const bool branch_taken_0x25bab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25bab4) {
            ctx->pc = 0x25C2A8u;
            goto label_25c2a8;
        }
    }
    ctx->pc = 0x25BABCu;
label_25babc:
    // 0x25babc: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x25babcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_25bac0:
    // 0x25bac0: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x25bac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_25bac4:
    // 0x25bac4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x25bac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_25bac8:
    // 0x25bac8: 0x8c6304b0  lw          $v1, 0x4B0($v1)
    ctx->pc = 0x25bac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1200)));
label_25bacc:
    // 0x25bacc: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
label_25bad0:
    if (ctx->pc == 0x25BAD0u) {
        ctx->pc = 0x25BAD4u;
        goto label_25bad4;
    }
    ctx->pc = 0x25BACCu;
    {
        const bool branch_taken_0x25bacc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25bacc) {
            ctx->pc = 0x25BB20u;
            goto label_25bb20;
        }
    }
    ctx->pc = 0x25BAD4u;
label_25bad4:
    // 0x25bad4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x25bad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_25bad8:
    // 0x25bad8: 0xa7a200ca  sh          $v0, 0xCA($sp)
    ctx->pc = 0x25bad8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 202), (uint16_t)GPR_U32(ctx, 2));
label_25badc:
    // 0x25badc: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x25badcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_25bae0:
    // 0x25bae0: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x25bae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_25bae4:
    // 0x25bae4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x25bae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_25bae8:
    // 0x25bae8: 0x8c4204b0  lw          $v0, 0x4B0($v0)
    ctx->pc = 0x25bae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1200)));
label_25baec:
    // 0x25baec: 0xafa200cc  sw          $v0, 0xCC($sp)
    ctx->pc = 0x25baecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 2));
label_25baf0:
    // 0x25baf0: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x25baf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
label_25baf4:
    // 0x25baf4: 0x518821  addu        $s1, $v0, $s1
    ctx->pc = 0x25baf4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_25baf8:
    // 0x25baf8: 0x111840  sll         $v1, $s1, 1
    ctx->pc = 0x25baf8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
label_25bafc:
    // 0x25bafc: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x25bafcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_25bb00:
    // 0x25bb00: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x25bb00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_25bb04:
    // 0x25bb04: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x25bb04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_25bb08:
    // 0x25bb08: 0x26050110  addiu       $a1, $s0, 0x110
    ctx->pc = 0x25bb08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
label_25bb0c:
    // 0x25bb0c: 0x244607e8  addiu       $a2, $v0, 0x7E8
    ctx->pc = 0x25bb0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 2024));
label_25bb10:
    // 0x25bb10: 0xc098ba0  jal         func_262E80
label_25bb14:
    if (ctx->pc == 0x25BB14u) {
        ctx->pc = 0x25BB18u;
        goto label_25bb18;
    }
    ctx->pc = 0x25BB10u;
    SET_GPR_U32(ctx, 31, 0x25BB18u);
    ctx->pc = 0x262E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262E80u, 0x25BB10u, 0x25BB18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25BB18u;
label_25bb18:
    // 0x25bb18: 0x10000007  b           . + 4 + (0x7 << 2)
label_25bb1c:
    if (ctx->pc == 0x25BB1Cu) {
        ctx->pc = 0x25BB20u;
        goto label_25bb20;
    }
    ctx->pc = 0x25BB18u;
    {
        const bool branch_taken_0x25bb18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25bb18) {
            ctx->pc = 0x25BB38u;
            goto label_25bb38;
        }
    }
    ctx->pc = 0x25BB20u;
label_25bb20:
    // 0x25bb20: 0xc6400110  lwc1        $f0, 0x110($s2)
    ctx->pc = 0x25bb20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25bb24:
    // 0x25bb24: 0xe6000110  swc1        $f0, 0x110($s0)
    ctx->pc = 0x25bb24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 272), bits); }
label_25bb28:
    // 0x25bb28: 0xc6400114  lwc1        $f0, 0x114($s2)
    ctx->pc = 0x25bb28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25bb2c:
    // 0x25bb2c: 0xe6000114  swc1        $f0, 0x114($s0)
    ctx->pc = 0x25bb2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 276), bits); }
label_25bb30:
    // 0x25bb30: 0xc6400118  lwc1        $f0, 0x118($s2)
    ctx->pc = 0x25bb30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25bb34:
    // 0x25bb34: 0xe6000118  swc1        $f0, 0x118($s0)
    ctx->pc = 0x25bb34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 280), bits); }
label_25bb38:
    // 0x25bb38: 0x96040140  lhu         $a0, 0x140($s0)
    ctx->pc = 0x25bb38u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
label_25bb3c:
    // 0x25bb3c: 0x34830008  ori         $v1, $a0, 0x8
    ctx->pc = 0x25bb3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8);
label_25bb40:
    // 0x25bb40: 0xa6030140  sh          $v1, 0x140($s0)
    ctx->pc = 0x25bb40u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 3));
label_25bb44:
    // 0x25bb44: 0xc6000110  lwc1        $f0, 0x110($s0)
    ctx->pc = 0x25bb44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25bb48:
    // 0x25bb48: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x25bb48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
label_25bb4c:
    // 0x25bb4c: 0xc6000114  lwc1        $f0, 0x114($s0)
    ctx->pc = 0x25bb4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25bb50:
    // 0x25bb50: 0xe600012c  swc1        $f0, 0x12C($s0)
    ctx->pc = 0x25bb50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 300), bits); }
label_25bb54:
    // 0x25bb54: 0xc6000118  lwc1        $f0, 0x118($s0)
    ctx->pc = 0x25bb54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25bb58:
    // 0x25bb58: 0xe6000130  swc1        $f0, 0x130($s0)
    ctx->pc = 0x25bb58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 304), bits); }
label_25bb5c:
    // 0x25bb5c: 0x100001d2  b           . + 4 + (0x1D2 << 2)
label_25bb60:
    if (ctx->pc == 0x25BB60u) {
        ctx->pc = 0x25BB64u;
        goto label_25bb64;
    }
    ctx->pc = 0x25BB5Cu;
    {
        const bool branch_taken_0x25bb5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25bb5c) {
            ctx->pc = 0x25C2A8u;
            goto label_25c2a8;
        }
    }
    ctx->pc = 0x25BB64u;
label_25bb64:
    // 0x25bb64: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x25bb64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_25bb68:
    // 0x25bb68: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x25bb68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_25bb6c:
    // 0x25bb6c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x25bb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_25bb70:
    // 0x25bb70: 0x8c4304b0  lw          $v1, 0x4B0($v0)
    ctx->pc = 0x25bb70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1200)));
label_25bb74:
    // 0x25bb74: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
label_25bb78:
    if (ctx->pc == 0x25BB78u) {
        ctx->pc = 0x25BB7Cu;
        goto label_25bb7c;
    }
    ctx->pc = 0x25BB74u;
    {
        const bool branch_taken_0x25bb74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25bb74) {
            ctx->pc = 0x25BBC8u;
            goto label_25bbc8;
        }
    }
    ctx->pc = 0x25BB7Cu;
label_25bb7c:
    // 0x25bb7c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x25bb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_25bb80:
    // 0x25bb80: 0xa7a200ca  sh          $v0, 0xCA($sp)
    ctx->pc = 0x25bb80u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 202), (uint16_t)GPR_U32(ctx, 2));
label_25bb84:
    // 0x25bb84: 0x119080  sll         $s2, $s1, 2
    ctx->pc = 0x25bb84u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_25bb88:
    // 0x25bb88: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x25bb88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_25bb8c:
    // 0x25bb8c: 0x721021  addu        $v0, $v1, $s2
    ctx->pc = 0x25bb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_25bb90:
    // 0x25bb90: 0x8c4204b0  lw          $v0, 0x4B0($v0)
    ctx->pc = 0x25bb90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1200)));
label_25bb94:
    // 0x25bb94: 0xafa200cc  sw          $v0, 0xCC($sp)
    ctx->pc = 0x25bb94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 2));
label_25bb98:
    // 0x25bb98: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x25bb98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
label_25bb9c:
    // 0x25bb9c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x25bb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_25bba0:
    // 0x25bba0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x25bba0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_25bba4:
    // 0x25bba4: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x25bba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_25bba8:
    // 0x25bba8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x25bba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_25bbac:
    // 0x25bbac: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x25bbacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_25bbb0:
    // 0x25bbb0: 0x26050110  addiu       $a1, $s0, 0x110
    ctx->pc = 0x25bbb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
label_25bbb4:
    // 0x25bbb4: 0x244607e8  addiu       $a2, $v0, 0x7E8
    ctx->pc = 0x25bbb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 2024));
label_25bbb8:
    // 0x25bbb8: 0xc098ba0  jal         func_262E80
label_25bbbc:
    if (ctx->pc == 0x25BBBCu) {
        ctx->pc = 0x25BBC0u;
        goto label_25bbc0;
    }
    ctx->pc = 0x25BBB8u;
    SET_GPR_U32(ctx, 31, 0x25BBC0u);
    ctx->pc = 0x262E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262E80u, 0x25BBB8u, 0x25BBC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25BBC0u;
label_25bbc0:
    // 0x25bbc0: 0x10000007  b           . + 4 + (0x7 << 2)
label_25bbc4:
    if (ctx->pc == 0x25BBC4u) {
        ctx->pc = 0x25BBC8u;
        goto label_25bbc8;
    }
    ctx->pc = 0x25BBC0u;
    {
        const bool branch_taken_0x25bbc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25bbc0) {
            ctx->pc = 0x25BBE0u;
            goto label_25bbe0;
        }
    }
    ctx->pc = 0x25BBC8u;
label_25bbc8:
    // 0x25bbc8: 0xc6400110  lwc1        $f0, 0x110($s2)
    ctx->pc = 0x25bbc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25bbcc:
    // 0x25bbcc: 0xe6000110  swc1        $f0, 0x110($s0)
    ctx->pc = 0x25bbccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 272), bits); }
label_25bbd0:
    // 0x25bbd0: 0xc6400114  lwc1        $f0, 0x114($s2)
    ctx->pc = 0x25bbd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25bbd4:
    // 0x25bbd4: 0xe6000114  swc1        $f0, 0x114($s0)
    ctx->pc = 0x25bbd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 276), bits); }
label_25bbd8:
    // 0x25bbd8: 0xc6400118  lwc1        $f0, 0x118($s2)
    ctx->pc = 0x25bbd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25bbdc:
    // 0x25bbdc: 0xe6000118  swc1        $f0, 0x118($s0)
    ctx->pc = 0x25bbdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 280), bits); }
label_25bbe0:
    // 0x25bbe0: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x25bbe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_25bbe4:
    // 0x25bbe4: 0x946209e0  lhu         $v0, 0x9E0($v1)
    ctx->pc = 0x25bbe4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2528)));
label_25bbe8:
    // 0x25bbe8: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x25bbe8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_25bbec:
    // 0x25bbec: 0x30850004  andi        $a1, $a0, 0x4
    ctx->pc = 0x25bbecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
label_25bbf0:
    // 0x25bbf0: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
label_25bbf4:
    if (ctx->pc == 0x25BBF4u) {
        ctx->pc = 0x25BBF8u;
        goto label_25bbf8;
    }
    ctx->pc = 0x25BBF0u;
    {
        const bool branch_taken_0x25bbf0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x25bbf0) {
            ctx->pc = 0x25BC10u;
            goto label_25bc10;
        }
    }
    ctx->pc = 0x25BBF8u;
label_25bbf8:
    // 0x25bbf8: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x25bbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_25bbfc:
    // 0x25bbfc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x25bbfcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_25bc00:
    // 0x25bc00: 0xc6000110  lwc1        $f0, 0x110($s0)
    ctx->pc = 0x25bc00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25bc04:
    // 0x25bc04: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x25bc04u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_25bc08:
    // 0x25bc08: 0xe6000110  swc1        $f0, 0x110($s0)
    ctx->pc = 0x25bc08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 272), bits); }
label_25bc0c:
    // 0x25bc0c: 0x0  nop
    ctx->pc = 0x25bc0cu;
    // NOP
label_25bc10:
    // 0x25bc10: 0xc6000110  lwc1        $f0, 0x110($s0)
    ctx->pc = 0x25bc10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25bc14:
    // 0x25bc14: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x25bc14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
label_25bc18:
    // 0x25bc18: 0xc6000114  lwc1        $f0, 0x114($s0)
    ctx->pc = 0x25bc18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25bc1c:
    // 0x25bc1c: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x25bc1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
label_25bc20:
    // 0x25bc20: 0xc6000118  lwc1        $f0, 0x118($s0)
    ctx->pc = 0x25bc20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25bc24:
    // 0x25bc24: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x25bc24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
label_25bc28:
    // 0x25bc28: 0xc6000110  lwc1        $f0, 0x110($s0)
    ctx->pc = 0x25bc28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25bc2c:
    // 0x25bc2c: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x25bc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_25bc30:
    // 0x25bc30: 0x142900  sll         $a1, $s4, 4
    ctx->pc = 0x25bc30u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
label_25bc34:
    // 0x25bc34: 0x8c430330  lw          $v1, 0x330($v0)
    ctx->pc = 0x25bc34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 816)));
label_25bc38:
    // 0x25bc38: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x25bc38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_25bc3c:
    // 0x25bc3c: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x25bc3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_25bc40:
    // 0x25bc40: 0xc6000114  lwc1        $f0, 0x114($s0)
    ctx->pc = 0x25bc40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25bc44:
    // 0x25bc44: 0x8fa50138  lw          $a1, 0x138($sp)
    ctx->pc = 0x25bc44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_25bc48:
    // 0x25bc48: 0x141100  sll         $v0, $s4, 4
    ctx->pc = 0x25bc48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
label_25bc4c:
    // 0x25bc4c: 0x8ca40330  lw          $a0, 0x330($a1)
    ctx->pc = 0x25bc4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 816)));
label_25bc50:
    // 0x25bc50: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x25bc50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_25bc54:
    // 0x25bc54: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x25bc54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_25bc58:
    // 0x25bc58: 0xc6000118  lwc1        $f0, 0x118($s0)
    ctx->pc = 0x25bc58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25bc5c:
    // 0x25bc5c: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x25bc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_25bc60:
    // 0x25bc60: 0x142100  sll         $a0, $s4, 4
    ctx->pc = 0x25bc60u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
label_25bc64:
    // 0x25bc64: 0x8c450330  lw          $a1, 0x330($v0)
    ctx->pc = 0x25bc64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 816)));
label_25bc68:
    // 0x25bc68: 0xa43021  addu        $a2, $a1, $a0
    ctx->pc = 0x25bc68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_25bc6c:
    // 0x25bc6c: 0xe4c00008  swc1        $f0, 0x8($a2)
    ctx->pc = 0x25bc6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
label_25bc70:
    // 0x25bc70: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x25bc70u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_25bc74:
    // 0x25bc74: 0xc60c0104  lwc1        $f12, 0x104($s0)
    ctx->pc = 0x25bc74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_25bc78:
    // 0x25bc78: 0xc0677d8  jal         func_19DF60
label_25bc7c:
    if (ctx->pc == 0x25BC7Cu) {
        ctx->pc = 0x25BC80u;
        goto label_25bc80;
    }
    ctx->pc = 0x25BC78u;
    SET_GPR_U32(ctx, 31, 0x25BC80u);
    ctx->pc = 0x19DF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DF60u, 0x25BC78u, 0x25BC80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25BC80u;
label_25bc80:
    // 0x25bc80: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x25bc80u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_25bc84:
    // 0x25bc84: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x25bc84u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_25bc88:
    // 0x25bc88: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x25bc88u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_25bc8c:
    // 0x25bc8c: 0xc60c0108  lwc1        $f12, 0x108($s0)
    ctx->pc = 0x25bc8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_25bc90:
    // 0x25bc90: 0xc067808  jal         func_19E020
label_25bc94:
    if (ctx->pc == 0x25BC94u) {
        ctx->pc = 0x25BC98u;
        goto label_25bc98;
    }
    ctx->pc = 0x25BC90u;
    SET_GPR_U32(ctx, 31, 0x25BC98u);
    ctx->pc = 0x19E020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E020u, 0x25BC90u, 0x25BC98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25BC98u;
label_25bc98:
    // 0x25bc98: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x25bc98u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_25bc9c:
    // 0x25bc9c: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x25bc9cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_25bca0:
    // 0x25bca0: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x25bca0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_25bca4:
    // 0x25bca4: 0xc60c010c  lwc1        $f12, 0x10C($s0)
    ctx->pc = 0x25bca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_25bca8:
    // 0x25bca8: 0xc0676d0  jal         func_19DB40
label_25bcac:
    if (ctx->pc == 0x25BCACu) {
        ctx->pc = 0x25BCB0u;
        goto label_25bcb0;
    }
    ctx->pc = 0x25BCA8u;
    SET_GPR_U32(ctx, 31, 0x25BCB0u);
    ctx->pc = 0x19DB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DB40u, 0x25BCA8u, 0x25BCB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25BCB0u;
label_25bcb0:
    // 0x25bcb0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x25bcb0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_25bcb4:
    // 0x25bcb4: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x25bcb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_25bcb8:
    // 0x25bcb8: 0x142980  sll         $a1, $s4, 6
    ctx->pc = 0x25bcb8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 20), 6));
label_25bcbc:
    // 0x25bcbc: 0x8c830130  lw          $v1, 0x130($a0)
    ctx->pc = 0x25bcbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
label_25bcc0:
    // 0x25bcc0: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x25bcc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_25bcc4:
    // 0x25bcc4: 0x8e030100  lw          $v1, 0x100($s0)
    ctx->pc = 0x25bcc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
label_25bcc8:
    // 0x25bcc8: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x25bcc8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_25bccc:
    // 0x25bccc: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x25bcccu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_25bcd0:
    // 0x25bcd0: 0xc0675f8  jal         func_19D7E0
label_25bcd4:
    if (ctx->pc == 0x25BCD4u) {
        ctx->pc = 0x25BCD8u;
        goto label_25bcd8;
    }
    ctx->pc = 0x25BCD0u;
    SET_GPR_U32(ctx, 31, 0x25BCD8u);
    ctx->pc = 0x19D7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D7E0u, 0x25BCD0u, 0x25BCD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25BCD8u;
label_25bcd8:
    // 0x25bcd8: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x25bcd8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_25bcdc:
    // 0x25bcdc: 0x10000172  b           . + 4 + (0x172 << 2)
label_25bce0:
    if (ctx->pc == 0x25BCE0u) {
        ctx->pc = 0x25BCE4u;
        goto label_25bce4;
    }
    ctx->pc = 0x25BCDCu;
    {
        const bool branch_taken_0x25bcdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25bcdc) {
            ctx->pc = 0x25C2A8u;
            goto label_25c2a8;
        }
    }
    ctx->pc = 0x25BCE4u;
label_25bce4:
    // 0x25bce4: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x25bce4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_25bce8:
    // 0x25bce8: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x25bce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_25bcec:
    // 0x25bcec: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x25bcecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_25bcf0:
    // 0x25bcf0: 0x8c6304b0  lw          $v1, 0x4B0($v1)
    ctx->pc = 0x25bcf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1200)));
label_25bcf4:
    // 0x25bcf4: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
label_25bcf8:
    if (ctx->pc == 0x25BCF8u) {
        ctx->pc = 0x25BCFCu;
        goto label_25bcfc;
    }
    ctx->pc = 0x25BCF4u;
    {
        const bool branch_taken_0x25bcf4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25bcf4) {
            ctx->pc = 0x25BD48u;
            goto label_25bd48;
        }
    }
    ctx->pc = 0x25BCFCu;
label_25bcfc:
    // 0x25bcfc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x25bcfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_25bd00:
    // 0x25bd00: 0xa7a300ca  sh          $v1, 0xCA($sp)
    ctx->pc = 0x25bd00u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 202), (uint16_t)GPR_U32(ctx, 3));
label_25bd04:
    // 0x25bd04: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x25bd04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_25bd08:
    // 0x25bd08: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x25bd08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_25bd0c:
    // 0x25bd0c: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x25bd0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_25bd10:
    // 0x25bd10: 0x8c4404b0  lw          $a0, 0x4B0($v0)
    ctx->pc = 0x25bd10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1200)));
label_25bd14:
    // 0x25bd14: 0xafa400cc  sw          $a0, 0xCC($sp)
    ctx->pc = 0x25bd14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 4));
label_25bd18:
    // 0x25bd18: 0x112840  sll         $a1, $s1, 1
    ctx->pc = 0x25bd18u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
label_25bd1c:
    // 0x25bd1c: 0xb13021  addu        $a2, $a1, $s1
    ctx->pc = 0x25bd1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
label_25bd20:
    // 0x25bd20: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x25bd20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_25bd24:
    // 0x25bd24: 0x8fa50138  lw          $a1, 0x138($sp)
    ctx->pc = 0x25bd24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_25bd28:
    // 0x25bd28: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x25bd28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_25bd2c:
    // 0x25bd2c: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x25bd2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_25bd30:
    // 0x25bd30: 0x26050110  addiu       $a1, $s0, 0x110
    ctx->pc = 0x25bd30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
label_25bd34:
    // 0x25bd34: 0x244607e8  addiu       $a2, $v0, 0x7E8
    ctx->pc = 0x25bd34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 2024));
label_25bd38:
    // 0x25bd38: 0xc098ba0  jal         func_262E80
label_25bd3c:
    if (ctx->pc == 0x25BD3Cu) {
        ctx->pc = 0x25BD40u;
        goto label_25bd40;
    }
    ctx->pc = 0x25BD38u;
    SET_GPR_U32(ctx, 31, 0x25BD40u);
    ctx->pc = 0x262E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262E80u, 0x25BD38u, 0x25BD40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25BD40u;
label_25bd40:
    // 0x25bd40: 0x10000007  b           . + 4 + (0x7 << 2)
label_25bd44:
    if (ctx->pc == 0x25BD44u) {
        ctx->pc = 0x25BD48u;
        goto label_25bd48;
    }
    ctx->pc = 0x25BD40u;
    {
        const bool branch_taken_0x25bd40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25bd40) {
            ctx->pc = 0x25BD60u;
            goto label_25bd60;
        }
    }
    ctx->pc = 0x25BD48u;
label_25bd48:
    // 0x25bd48: 0xc6400110  lwc1        $f0, 0x110($s2)
    ctx->pc = 0x25bd48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25bd4c:
    // 0x25bd4c: 0xe6000110  swc1        $f0, 0x110($s0)
    ctx->pc = 0x25bd4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 272), bits); }
label_25bd50:
    // 0x25bd50: 0xc6400114  lwc1        $f0, 0x114($s2)
    ctx->pc = 0x25bd50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25bd54:
    // 0x25bd54: 0xe6000114  swc1        $f0, 0x114($s0)
    ctx->pc = 0x25bd54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 276), bits); }
label_25bd58:
    // 0x25bd58: 0xc6400118  lwc1        $f0, 0x118($s2)
    ctx->pc = 0x25bd58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25bd5c:
    // 0x25bd5c: 0xe6000118  swc1        $f0, 0x118($s0)
    ctx->pc = 0x25bd5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 280), bits); }
label_25bd60:
    // 0x25bd60: 0xc6010110  lwc1        $f1, 0x110($s0)
    ctx->pc = 0x25bd60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25bd64:
    // 0x25bd64: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x25bd64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_25bd68:
    // 0x25bd68: 0xc46002e0  lwc1        $f0, 0x2E0($v1)
    ctx->pc = 0x25bd68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25bd6c:
    // 0x25bd6c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x25bd6cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_25bd70:
    // 0x25bd70: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x25bd70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_25bd74:
    // 0x25bd74: 0xc6000114  lwc1        $f0, 0x114($s0)
    ctx->pc = 0x25bd74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25bd78:
    // 0x25bd78: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x25bd78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_25bd7c:
    // 0x25bd7c: 0xc6010118  lwc1        $f1, 0x118($s0)
    ctx->pc = 0x25bd7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25bd80:
    // 0x25bd80: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x25bd80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_25bd84:
    // 0x25bd84: 0xc46002e8  lwc1        $f0, 0x2E8($v1)
    ctx->pc = 0x25bd84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25bd88:
    // 0x25bd88: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x25bd88u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_25bd8c:
    // 0x25bd8c: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x25bd8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_25bd90:
    // 0x25bd90: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x25bd90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_25bd94:
    // 0x25bd94: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x25bd94u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_25bd98:
    // 0x25bd98: 0x0  nop
    ctx->pc = 0x25bd98u;
    // NOP
label_25bd9c:
    // 0x25bd9c: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x25bd9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
label_25bda0:
    // 0x25bda0: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x25bda0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_25bda4:
    // 0x25bda4: 0x946309e0  lhu         $v1, 0x9E0($v1)
    ctx->pc = 0x25bda4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2528)));
label_25bda8:
    // 0x25bda8: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x25bda8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_25bdac:
    // 0x25bdac: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x25bdacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_25bdb0:
    // 0x25bdb0: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_25bdb4:
    if (ctx->pc == 0x25BDB4u) {
        ctx->pc = 0x25BDB8u;
        goto label_25bdb8;
    }
    ctx->pc = 0x25BDB0u;
    {
        const bool branch_taken_0x25bdb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25bdb0) {
            ctx->pc = 0x25BDD0u;
            goto label_25bdd0;
        }
    }
    ctx->pc = 0x25BDB8u;
label_25bdb8:
    // 0x25bdb8: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x25bdb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
label_25bdbc:
    // 0x25bdbc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x25bdbcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_25bdc0:
    // 0x25bdc0: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x25bdc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25bdc4:
    // 0x25bdc4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x25bdc4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_25bdc8:
    // 0x25bdc8: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x25bdc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_25bdcc:
    // 0x25bdcc: 0x0  nop
    ctx->pc = 0x25bdccu;
    // NOP
label_25bdd0:
    // 0x25bdd0: 0x96030140  lhu         $v1, 0x140($s0)
    ctx->pc = 0x25bdd0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
label_25bdd4:
    // 0x25bdd4: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x25bdd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
label_25bdd8:
    // 0x25bdd8: 0xa6030140  sh          $v1, 0x140($s0)
    ctx->pc = 0x25bdd8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 3));
label_25bddc:
    // 0x25bddc: 0x96040140  lhu         $a0, 0x140($s0)
    ctx->pc = 0x25bddcu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
label_25bde0:
    // 0x25bde0: 0x3083ffff  andi        $v1, $a0, 0xFFFF
    ctx->pc = 0x25bde0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
label_25bde4:
    // 0x25bde4: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x25bde4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_25bde8:
    // 0x25bde8: 0x1460012f  bnez        $v1, . + 4 + (0x12F << 2)
label_25bdec:
    if (ctx->pc == 0x25BDECu) {
        ctx->pc = 0x25BDF0u;
        goto label_25bdf0;
    }
    ctx->pc = 0x25BDE8u;
    {
        const bool branch_taken_0x25bde8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x25bde8) {
            ctx->pc = 0x25C2A8u;
            goto label_25c2a8;
        }
    }
    ctx->pc = 0x25BDF0u;
label_25bdf0:
    // 0x25bdf0: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x25bdf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_25bdf4:
    // 0x25bdf4: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x25bdf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_25bdf8:
    // 0x25bdf8: 0x246500e0  addiu       $a1, $v1, 0xE0
    ctx->pc = 0x25bdf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 224));
label_25bdfc:
    // 0x25bdfc: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x25bdfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_25be00:
    // 0x25be00: 0xc040bf4  jal         func_102FD0
label_25be04:
    if (ctx->pc == 0x25BE04u) {
        ctx->pc = 0x25BE08u;
        goto label_25be08;
    }
    ctx->pc = 0x25BE00u;
    SET_GPR_U32(ctx, 31, 0x25BE08u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x25BE08u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25BE08u) { return; }
    ctx->pc = 0x25BE08u;
label_25be08:
    // 0x25be08: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x25be08u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_25be0c:
    // 0x25be0c: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x25be0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_25be10:
    // 0x25be10: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x25be10u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_25be14:
    // 0x25be14: 0xc040cbc  jal         func_1032F0
label_25be18:
    if (ctx->pc == 0x25BE18u) {
        ctx->pc = 0x25BE1Cu;
        goto label_25be1c;
    }
    ctx->pc = 0x25BE14u;
    SET_GPR_U32(ctx, 31, 0x25BE1Cu);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x25BE1Cu;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25BE1Cu) { return; }
    ctx->pc = 0x25BE1Cu;
label_25be1c:
    // 0x25be1c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x25be1cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_25be20:
    // 0x25be20: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x25be20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_25be24:
    // 0x25be24: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x25be24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_25be28:
    // 0x25be28: 0xc60c0104  lwc1        $f12, 0x104($s0)
    ctx->pc = 0x25be28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_25be2c:
    // 0x25be2c: 0xc040d0e  jal         func_103438
label_25be30:
    if (ctx->pc == 0x25BE30u) {
        ctx->pc = 0x25BE34u;
        goto label_25be34;
    }
    ctx->pc = 0x25BE2Cu;
    SET_GPR_U32(ctx, 31, 0x25BE34u);
    ctx->pc = 0x103438u;
    {
        ctx->pc = 0x25BE34u;
        ps2_stubs::sceVu0RotMatrixX(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25BE34u) { return; }
    ctx->pc = 0x25BE34u;
label_25be34:
    // 0x25be34: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x25be34u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_25be38:
    // 0x25be38: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x25be38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_25be3c:
    // 0x25be3c: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x25be3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_25be40:
    // 0x25be40: 0xc60c0108  lwc1        $f12, 0x108($s0)
    ctx->pc = 0x25be40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_25be44:
    // 0x25be44: 0xc040d38  jal         func_1034E0
label_25be48:
    if (ctx->pc == 0x25BE48u) {
        ctx->pc = 0x25BE4Cu;
        goto label_25be4c;
    }
    ctx->pc = 0x25BE44u;
    SET_GPR_U32(ctx, 31, 0x25BE4Cu);
    ctx->pc = 0x1034E0u;
    {
        ctx->pc = 0x25BE4Cu;
        ps2_stubs::sceVu0RotMatrixY(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25BE4Cu) { return; }
    ctx->pc = 0x25BE4Cu;
label_25be4c:
    // 0x25be4c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x25be4cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_25be50:
    // 0x25be50: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x25be50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_25be54:
    // 0x25be54: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x25be54u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_25be58:
    // 0x25be58: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x25be58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_25be5c:
    // 0x25be5c: 0xc60c010c  lwc1        $f12, 0x10C($s0)
    ctx->pc = 0x25be5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_25be60:
    // 0x25be60: 0xc040ce4  jal         func_103390
label_25be64:
    if (ctx->pc == 0x25BE64u) {
        ctx->pc = 0x25BE68u;
        goto label_25be68;
    }
    ctx->pc = 0x25BE60u;
    SET_GPR_U32(ctx, 31, 0x25BE68u);
    ctx->pc = 0x103390u;
    {
        ctx->pc = 0x25BE68u;
        ps2_stubs::sceVu0RotMatrixZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25BE68u) { return; }
    ctx->pc = 0x25BE68u;
label_25be68:
    // 0x25be68: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x25be68u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_25be6c:
    // 0x25be6c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x25be6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_25be70:
    // 0x25be70: 0x8e050100  lw          $a1, 0x100($s0)
    ctx->pc = 0x25be70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
label_25be74:
    // 0x25be74: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x25be74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_25be78:
    // 0x25be78: 0xc040c00  jal         func_103000
label_25be7c:
    if (ctx->pc == 0x25BE7Cu) {
        ctx->pc = 0x25BE80u;
        goto label_25be80;
    }
    ctx->pc = 0x25BE78u;
    SET_GPR_U32(ctx, 31, 0x25BE80u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x25BE80u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25BE80u) { return; }
    ctx->pc = 0x25BE80u;
label_25be80:
    // 0x25be80: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x25be80u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_25be84:
    // 0x25be84: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x25be84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_25be88:
    // 0x25be88: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x25be88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_25be8c:
    // 0x25be8c: 0xc040c9e  jal         func_103278
label_25be90:
    if (ctx->pc == 0x25BE90u) {
        ctx->pc = 0x25BE94u;
        goto label_25be94;
    }
    ctx->pc = 0x25BE8Cu;
    SET_GPR_U32(ctx, 31, 0x25BE94u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x25BE94u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25BE94u) { return; }
    ctx->pc = 0x25BE94u;
label_25be94:
    // 0x25be94: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x25be94u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_25be98:
    // 0x25be98: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x25be98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_25be9c:
    // 0x25be9c: 0x14a980  sll         $s5, $s4, 6
    ctx->pc = 0x25be9cu;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 20), 6));
label_25bea0:
    // 0x25bea0: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x25bea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
label_25bea4:
    // 0x25bea4: 0x752021  addu        $a0, $v1, $s5
    ctx->pc = 0x25bea4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
label_25bea8:
    // 0x25bea8: 0x27b10080  addiu       $s1, $sp, 0x80
    ctx->pc = 0x25bea8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_25beac:
    // 0x25beac: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x25beacu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_25beb0:
    // 0x25beb0: 0xc040ca2  jal         func_103288
label_25beb4:
    if (ctx->pc == 0x25BEB4u) {
        ctx->pc = 0x25BEB8u;
        goto label_25beb8;
    }
    ctx->pc = 0x25BEB0u;
    SET_GPR_U32(ctx, 31, 0x25BEB8u);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x25BEB8u;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25BEB8u) { return; }
    ctx->pc = 0x25BEB8u;
label_25beb8:
    // 0x25beb8: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x25beb8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_25bebc:
    // 0x25bebc: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x25bebcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_25bec0:
    // 0x25bec0: 0x8e050100  lw          $a1, 0x100($s0)
    ctx->pc = 0x25bec0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
label_25bec4:
    // 0x25bec4: 0xc040c44  jal         func_103110
label_25bec8:
    if (ctx->pc == 0x25BEC8u) {
        ctx->pc = 0x25BECCu;
        goto label_25becc;
    }
    ctx->pc = 0x25BEC4u;
    SET_GPR_U32(ctx, 31, 0x25BECCu);
    ctx->pc = 0x103110u;
    {
        ctx->pc = 0x25BECCu;
        ps2_stubs::sceVu0InversMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25BECCu) { return; }
    ctx->pc = 0x25BECCu;
label_25becc:
    // 0x25becc: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x25beccu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_25bed0:
    // 0x25bed0: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x25bed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_25bed4:
    // 0x25bed4: 0x142180  sll         $a0, $s4, 6
    ctx->pc = 0x25bed4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 20), 6));
label_25bed8:
    // 0x25bed8: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x25bed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
label_25bedc:
    // 0x25bedc: 0x643021  addu        $a2, $v1, $a0
    ctx->pc = 0x25bedcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_25bee0:
    // 0x25bee0: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x25bee0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_25bee4:
    // 0x25bee4: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x25bee4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_25bee8:
    // 0x25bee8: 0xc040c00  jal         func_103000
label_25beec:
    if (ctx->pc == 0x25BEECu) {
        ctx->pc = 0x25BEF0u;
        goto label_25bef0;
    }
    ctx->pc = 0x25BEE8u;
    SET_GPR_U32(ctx, 31, 0x25BEF0u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x25BEF0u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25BEF0u) { return; }
    ctx->pc = 0x25BEF0u;
label_25bef0:
    // 0x25bef0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x25bef0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_25bef4:
    // 0x25bef4: 0x100000ec  b           . + 4 + (0xEC << 2)
label_25bef8:
    if (ctx->pc == 0x25BEF8u) {
        ctx->pc = 0x25BEFCu;
        goto label_25befc;
    }
    ctx->pc = 0x25BEF4u;
    {
        const bool branch_taken_0x25bef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25bef4) {
            ctx->pc = 0x25C2A8u;
            goto label_25c2a8;
        }
    }
    ctx->pc = 0x25BEFCu;
label_25befc:
    // 0x25befc: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x25befcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_25bf00:
    // 0x25bf00: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x25bf00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_25bf04:
    // 0x25bf04: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x25bf04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_25bf08:
    // 0x25bf08: 0x8c6304b0  lw          $v1, 0x4B0($v1)
    ctx->pc = 0x25bf08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1200)));
label_25bf0c:
    // 0x25bf0c: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
label_25bf10:
    if (ctx->pc == 0x25BF10u) {
        ctx->pc = 0x25BF14u;
        goto label_25bf14;
    }
    ctx->pc = 0x25BF0Cu;
    {
        const bool branch_taken_0x25bf0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25bf0c) {
            ctx->pc = 0x25BF68u;
            goto label_25bf68;
        }
    }
    ctx->pc = 0x25BF14u;
label_25bf14:
    // 0x25bf14: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x25bf14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_25bf18:
    // 0x25bf18: 0xa7a300ca  sh          $v1, 0xCA($sp)
    ctx->pc = 0x25bf18u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 202), (uint16_t)GPR_U32(ctx, 3));
label_25bf1c:
    // 0x25bf1c: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x25bf1cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_25bf20:
    // 0x25bf20: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x25bf20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_25bf24:
    // 0x25bf24: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x25bf24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_25bf28:
    // 0x25bf28: 0x8c6304b0  lw          $v1, 0x4B0($v1)
    ctx->pc = 0x25bf28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1200)));
label_25bf2c:
    // 0x25bf2c: 0xafa300cc  sw          $v1, 0xCC($sp)
    ctx->pc = 0x25bf2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 3));
label_25bf30:
    // 0x25bf30: 0x112840  sll         $a1, $s1, 1
    ctx->pc = 0x25bf30u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
label_25bf34:
    // 0x25bf34: 0xb11821  addu        $v1, $a1, $s1
    ctx->pc = 0x25bf34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
label_25bf38:
    // 0x25bf38: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x25bf38u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_25bf3c:
    // 0x25bf3c: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x25bf3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_25bf40:
    // 0x25bf40: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x25bf40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_25bf44:
    // 0x25bf44: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x25bf44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_25bf48:
    // 0x25bf48: 0x26050110  addiu       $a1, $s0, 0x110
    ctx->pc = 0x25bf48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
label_25bf4c:
    // 0x25bf4c: 0x247207e8  addiu       $s2, $v1, 0x7E8
    ctx->pc = 0x25bf4cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 2024));
label_25bf50:
    // 0x25bf50: 0x72403628  paddub      $a2, $s2, $zero
    ctx->pc = 0x25bf50u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
label_25bf54:
    // 0x25bf54: 0xc098ba0  jal         func_262E80
label_25bf58:
    if (ctx->pc == 0x25BF58u) {
        ctx->pc = 0x25BF5Cu;
        goto label_25bf5c;
    }
    ctx->pc = 0x25BF54u;
    SET_GPR_U32(ctx, 31, 0x25BF5Cu);
    ctx->pc = 0x262E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262E80u, 0x25BF54u, 0x25BF5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25BF5Cu;
label_25bf5c:
    // 0x25bf5c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x25bf5cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_25bf60:
    // 0x25bf60: 0x10000007  b           . + 4 + (0x7 << 2)
label_25bf64:
    if (ctx->pc == 0x25BF64u) {
        ctx->pc = 0x25BF68u;
        goto label_25bf68;
    }
    ctx->pc = 0x25BF60u;
    {
        const bool branch_taken_0x25bf60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25bf60) {
            ctx->pc = 0x25BF80u;
            goto label_25bf80;
        }
    }
    ctx->pc = 0x25BF68u;
label_25bf68:
    // 0x25bf68: 0xc6400110  lwc1        $f0, 0x110($s2)
    ctx->pc = 0x25bf68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25bf6c:
    // 0x25bf6c: 0xe6000110  swc1        $f0, 0x110($s0)
    ctx->pc = 0x25bf6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 272), bits); }
label_25bf70:
    // 0x25bf70: 0xc6400114  lwc1        $f0, 0x114($s2)
    ctx->pc = 0x25bf70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25bf74:
    // 0x25bf74: 0xe6000114  swc1        $f0, 0x114($s0)
    ctx->pc = 0x25bf74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 276), bits); }
label_25bf78:
    // 0x25bf78: 0xc6400118  lwc1        $f0, 0x118($s2)
    ctx->pc = 0x25bf78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25bf7c:
    // 0x25bf7c: 0xe6000118  swc1        $f0, 0x118($s0)
    ctx->pc = 0x25bf7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 280), bits); }
label_25bf80:
    // 0x25bf80: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x25bf80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_25bf84:
    // 0x25bf84: 0x946309e0  lhu         $v1, 0x9E0($v1)
    ctx->pc = 0x25bf84u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2528)));
label_25bf88:
    // 0x25bf88: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x25bf88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_25bf8c:
    // 0x25bf8c: 0x30640004  andi        $a0, $v1, 0x4
    ctx->pc = 0x25bf8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_25bf90:
    // 0x25bf90: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_25bf94:
    if (ctx->pc == 0x25BF94u) {
        ctx->pc = 0x25BF98u;
        goto label_25bf98;
    }
    ctx->pc = 0x25BF90u;
    {
        const bool branch_taken_0x25bf90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x25bf90) {
            ctx->pc = 0x25BFB0u;
            goto label_25bfb0;
        }
    }
    ctx->pc = 0x25BF98u;
label_25bf98:
    // 0x25bf98: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x25bf98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
label_25bf9c:
    // 0x25bf9c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x25bf9cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_25bfa0:
    // 0x25bfa0: 0xc6000110  lwc1        $f0, 0x110($s0)
    ctx->pc = 0x25bfa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25bfa4:
    // 0x25bfa4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x25bfa4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_25bfa8:
    // 0x25bfa8: 0xe6000110  swc1        $f0, 0x110($s0)
    ctx->pc = 0x25bfa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 272), bits); }
label_25bfac:
    // 0x25bfac: 0x0  nop
    ctx->pc = 0x25bfacu;
    // NOP
label_25bfb0:
    // 0x25bfb0: 0x26630001  addiu       $v1, $s3, 0x1
    ctx->pc = 0x25bfb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_25bfb4:
    // 0x25bfb4: 0x70609e28  paddub      $s3, $v1, $zero
    ctx->pc = 0x25bfb4u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_25bfb8:
    // 0x25bfb8: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x25bfb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_25bfbc:
    // 0x25bfbc: 0x8c620350  lw          $v0, 0x350($v1)
    ctx->pc = 0x25bfbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 848)));
label_25bfc0:
    // 0x25bfc0: 0x531821  addu        $v1, $v0, $s3
    ctx->pc = 0x25bfc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_25bfc4:
    // 0x25bfc4: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x25bfc4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_25bfc8:
    // 0x25bfc8: 0x305500ff  andi        $s5, $v0, 0xFF
    ctx->pc = 0x25bfc8u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_25bfcc:
    // 0x25bfcc: 0x32a2003f  andi        $v0, $s5, 0x3F
    ctx->pc = 0x25bfccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)63);
label_25bfd0:
    // 0x25bfd0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25bfd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_25bfd4:
    // 0x25bfd4: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x25bfd4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_25bfd8:
    // 0x25bfd8: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x25bfd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_25bfdc:
    // 0x25bfdc: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x25bfdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_25bfe0:
    // 0x25bfe0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x25bfe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_25bfe4:
    // 0x25bfe4: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x25bfe4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_25bfe8:
    // 0x25bfe8: 0x442821  addu        $a1, $v0, $a0
    ctx->pc = 0x25bfe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_25bfec:
    // 0x25bfec: 0x53100  sll         $a2, $a1, 4
    ctx->pc = 0x25bfecu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_25bff0:
    // 0x25bff0: 0x8c6202d0  lw          $v0, 0x2D0($v1)
    ctx->pc = 0x25bff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
label_25bff4:
    // 0x25bff4: 0x461821  addu        $v1, $v0, $a2
    ctx->pc = 0x25bff4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_25bff8:
    // 0x25bff8: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x25bff8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_25bffc:
    // 0x25bffc: 0x72009628  paddub      $s2, $s0, $zero
    ctx->pc = 0x25bffcu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_25c000:
    // 0x25c000: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x25c000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_25c004:
    // 0x25c004: 0x946309e0  lhu         $v1, 0x9E0($v1)
    ctx->pc = 0x25c004u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2528)));
label_25c008:
    // 0x25c008: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x25c008u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_25c00c:
    // 0x25c00c: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x25c00cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_25c010:
    // 0x25c010: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
label_25c014:
    if (ctx->pc == 0x25C014u) {
        ctx->pc = 0x25C018u;
        goto label_25c018;
    }
    ctx->pc = 0x25C010u;
    {
        const bool branch_taken_0x25c010 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25c010) {
            ctx->pc = 0x25C060u;
            goto label_25c060;
        }
    }
    ctx->pc = 0x25C018u;
label_25c018:
    // 0x25c018: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x25c018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_25c01c:
    // 0x25c01c: 0x8c630354  lw          $v1, 0x354($v1)
    ctx->pc = 0x25c01cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 852)));
label_25c020:
    // 0x25c020: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
label_25c024:
    if (ctx->pc == 0x25C024u) {
        ctx->pc = 0x25C028u;
        goto label_25c028;
    }
    ctx->pc = 0x25C020u;
    {
        const bool branch_taken_0x25c020 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25c020) {
            ctx->pc = 0x25C060u;
            goto label_25c060;
        }
    }
    ctx->pc = 0x25C028u;
label_25c028:
    // 0x25c028: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x25c028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_25c02c:
    // 0x25c02c: 0x8c630354  lw          $v1, 0x354($v1)
    ctx->pc = 0x25c02cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 852)));
label_25c030:
    // 0x25c030: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x25c030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_25c034:
    // 0x25c034: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x25c034u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_25c038:
    // 0x25c038: 0x307100ff  andi        $s1, $v1, 0xFF
    ctx->pc = 0x25c038u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_25c03c:
    // 0x25c03c: 0x8fa50138  lw          $a1, 0x138($sp)
    ctx->pc = 0x25c03cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_25c040:
    // 0x25c040: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x25c040u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_25c044:
    // 0x25c044: 0x711021  addu        $v0, $v1, $s1
    ctx->pc = 0x25c044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_25c048:
    // 0x25c048: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x25c048u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_25c04c:
    // 0x25c04c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x25c04cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_25c050:
    // 0x25c050: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x25c050u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_25c054:
    // 0x25c054: 0x8ca202d0  lw          $v0, 0x2D0($a1)
    ctx->pc = 0x25c054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 720)));
label_25c058:
    // 0x25c058: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x25c058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_25c05c:
    // 0x25c05c: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x25c05cu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_25c060:
    // 0x25c060: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x25c060u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_25c064:
    // 0x25c064: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x25c064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_25c068:
    // 0x25c068: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x25c068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_25c06c:
    // 0x25c06c: 0x8c430370  lw          $v1, 0x370($v0)
    ctx->pc = 0x25c06cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 880)));
label_25c070:
    // 0x25c070: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
label_25c074:
    if (ctx->pc == 0x25C074u) {
        ctx->pc = 0x25C078u;
        goto label_25c078;
    }
    ctx->pc = 0x25C070u;
    {
        const bool branch_taken_0x25c070 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25c070) {
            ctx->pc = 0x25C0C8u;
            goto label_25c0c8;
        }
    }
    ctx->pc = 0x25C078u;
label_25c078:
    // 0x25c078: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25c078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_25c07c:
    // 0x25c07c: 0xa7a200ca  sh          $v0, 0xCA($sp)
    ctx->pc = 0x25c07cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 202), (uint16_t)GPR_U32(ctx, 2));
label_25c080:
    // 0x25c080: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x25c080u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_25c084:
    // 0x25c084: 0x8fa50138  lw          $a1, 0x138($sp)
    ctx->pc = 0x25c084u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_25c088:
    // 0x25c088: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x25c088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_25c08c:
    // 0x25c08c: 0x8c430370  lw          $v1, 0x370($v0)
    ctx->pc = 0x25c08cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 880)));
label_25c090:
    // 0x25c090: 0xafa300cc  sw          $v1, 0xCC($sp)
    ctx->pc = 0x25c090u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 3));
label_25c094:
    // 0x25c094: 0x111840  sll         $v1, $s1, 1
    ctx->pc = 0x25c094u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
label_25c098:
    // 0x25c098: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x25c098u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_25c09c:
    // 0x25c09c: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x25c09cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_25c0a0:
    // 0x25c0a0: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x25c0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_25c0a4:
    // 0x25c0a4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x25c0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_25c0a8:
    // 0x25c0a8: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x25c0a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_25c0ac:
    // 0x25c0ac: 0x26050104  addiu       $a1, $s0, 0x104
    ctx->pc = 0x25c0acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 260));
label_25c0b0:
    // 0x25c0b0: 0x24660608  addiu       $a2, $v1, 0x608
    ctx->pc = 0x25c0b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 1544));
label_25c0b4:
    // 0x25c0b4: 0xc098ba0  jal         func_262E80
label_25c0b8:
    if (ctx->pc == 0x25C0B8u) {
        ctx->pc = 0x25C0BCu;
        goto label_25c0bc;
    }
    ctx->pc = 0x25C0B4u;
    SET_GPR_U32(ctx, 31, 0x25C0BCu);
    ctx->pc = 0x262E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262E80u, 0x25C0B4u, 0x25C0BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C0BCu;
label_25c0bc:
    // 0x25c0bc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x25c0bcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_25c0c0:
    // 0x25c0c0: 0x10000007  b           . + 4 + (0x7 << 2)
label_25c0c4:
    if (ctx->pc == 0x25C0C4u) {
        ctx->pc = 0x25C0C8u;
        goto label_25c0c8;
    }
    ctx->pc = 0x25C0C0u;
    {
        const bool branch_taken_0x25c0c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25c0c0) {
            ctx->pc = 0x25C0E0u;
            goto label_25c0e0;
        }
    }
    ctx->pc = 0x25C0C8u;
label_25c0c8:
    // 0x25c0c8: 0xc6400104  lwc1        $f0, 0x104($s2)
    ctx->pc = 0x25c0c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25c0cc:
    // 0x25c0cc: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x25c0ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
label_25c0d0:
    // 0x25c0d0: 0xc6400108  lwc1        $f0, 0x108($s2)
    ctx->pc = 0x25c0d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25c0d4:
    // 0x25c0d4: 0xe6000108  swc1        $f0, 0x108($s0)
    ctx->pc = 0x25c0d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 264), bits); }
label_25c0d8:
    // 0x25c0d8: 0xc640010c  lwc1        $f0, 0x10C($s2)
    ctx->pc = 0x25c0d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25c0dc:
    // 0x25c0dc: 0xe600010c  swc1        $f0, 0x10C($s0)
    ctx->pc = 0x25c0dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 268), bits); }
label_25c0e0:
    // 0x25c0e0: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x25c0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_25c0e4:
    // 0x25c0e4: 0x946309e0  lhu         $v1, 0x9E0($v1)
    ctx->pc = 0x25c0e4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2528)));
label_25c0e8:
    // 0x25c0e8: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x25c0e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_25c0ec:
    // 0x25c0ec: 0x30640004  andi        $a0, $v1, 0x4
    ctx->pc = 0x25c0ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_25c0f0:
    // 0x25c0f0: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
label_25c0f4:
    if (ctx->pc == 0x25C0F4u) {
        ctx->pc = 0x25C0F8u;
        goto label_25c0f8;
    }
    ctx->pc = 0x25C0F0u;
    {
        const bool branch_taken_0x25c0f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x25c0f0) {
            ctx->pc = 0x25C120u;
            goto label_25c120;
        }
    }
    ctx->pc = 0x25C0F8u;
label_25c0f8:
    // 0x25c0f8: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x25c0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
label_25c0fc:
    // 0x25c0fc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x25c0fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_25c100:
    // 0x25c100: 0xc6000108  lwc1        $f0, 0x108($s0)
    ctx->pc = 0x25c100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25c104:
    // 0x25c104: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x25c104u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_25c108:
    // 0x25c108: 0xe6000108  swc1        $f0, 0x108($s0)
    ctx->pc = 0x25c108u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 264), bits); }
label_25c10c:
    // 0x25c10c: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x25c10cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
label_25c110:
    // 0x25c110: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x25c110u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_25c114:
    // 0x25c114: 0xc600010c  lwc1        $f0, 0x10C($s0)
    ctx->pc = 0x25c114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25c118:
    // 0x25c118: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x25c118u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_25c11c:
    // 0x25c11c: 0xe600010c  swc1        $f0, 0x10C($s0)
    ctx->pc = 0x25c11cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 268), bits); }
label_25c120:
    // 0x25c120: 0x26630001  addiu       $v1, $s3, 0x1
    ctx->pc = 0x25c120u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_25c124:
    // 0x25c124: 0x70609e28  paddub      $s3, $v1, $zero
    ctx->pc = 0x25c124u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_25c128:
    // 0x25c128: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x25c128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_25c12c:
    // 0x25c12c: 0x8c430350  lw          $v1, 0x350($v0)
    ctx->pc = 0x25c12cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 848)));
label_25c130:
    // 0x25c130: 0x731021  addu        $v0, $v1, $s3
    ctx->pc = 0x25c130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_25c134:
    // 0x25c134: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x25c134u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_25c138:
    // 0x25c138: 0x305500ff  andi        $s5, $v0, 0xFF
    ctx->pc = 0x25c138u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_25c13c:
    // 0x25c13c: 0x32a2003f  andi        $v0, $s5, 0x3F
    ctx->pc = 0x25c13cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)63);
label_25c140:
    // 0x25c140: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25c140u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_25c144:
    // 0x25c144: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x25c144u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_25c148:
    // 0x25c148: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x25c148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_25c14c:
    // 0x25c14c: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x25c14cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_25c150:
    // 0x25c150: 0x512021  addu        $a0, $v0, $s1
    ctx->pc = 0x25c150u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_25c154:
    // 0x25c154: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x25c154u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_25c158:
    // 0x25c158: 0x853021  addu        $a2, $a0, $a1
    ctx->pc = 0x25c158u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_25c15c:
    // 0x25c15c: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x25c15cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_25c160:
    // 0x25c160: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x25c160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
label_25c164:
    // 0x25c164: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x25c164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_25c168:
    // 0x25c168: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x25c168u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_25c16c:
    // 0x25c16c: 0x72009628  paddub      $s2, $s0, $zero
    ctx->pc = 0x25c16cu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_25c170:
    // 0x25c170: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x25c170u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_25c174:
    // 0x25c174: 0x948309e0  lhu         $v1, 0x9E0($a0)
    ctx->pc = 0x25c174u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2528)));
label_25c178:
    // 0x25c178: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x25c178u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_25c17c:
    // 0x25c17c: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x25c17cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_25c180:
    // 0x25c180: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
label_25c184:
    if (ctx->pc == 0x25C184u) {
        ctx->pc = 0x25C188u;
        goto label_25c188;
    }
    ctx->pc = 0x25C180u;
    {
        const bool branch_taken_0x25c180 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25c180) {
            ctx->pc = 0x25C1D0u;
            goto label_25c1d0;
        }
    }
    ctx->pc = 0x25C188u;
label_25c188:
    // 0x25c188: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x25c188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_25c18c:
    // 0x25c18c: 0x8c430354  lw          $v1, 0x354($v0)
    ctx->pc = 0x25c18cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 852)));
label_25c190:
    // 0x25c190: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
label_25c194:
    if (ctx->pc == 0x25C194u) {
        ctx->pc = 0x25C198u;
        goto label_25c198;
    }
    ctx->pc = 0x25C190u;
    {
        const bool branch_taken_0x25c190 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25c190) {
            ctx->pc = 0x25C1D0u;
            goto label_25c1d0;
        }
    }
    ctx->pc = 0x25C198u;
label_25c198:
    // 0x25c198: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x25c198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_25c19c:
    // 0x25c19c: 0x8c420354  lw          $v0, 0x354($v0)
    ctx->pc = 0x25c19cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 852)));
label_25c1a0:
    // 0x25c1a0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x25c1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_25c1a4:
    // 0x25c1a4: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x25c1a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_25c1a8:
    // 0x25c1a8: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x25c1a8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_25c1ac:
    // 0x25c1ac: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x25c1acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_25c1b0:
    // 0x25c1b0: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x25c1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_25c1b4:
    // 0x25c1b4: 0x711021  addu        $v0, $v1, $s1
    ctx->pc = 0x25c1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_25c1b8:
    // 0x25c1b8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x25c1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_25c1bc:
    // 0x25c1bc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x25c1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_25c1c0:
    // 0x25c1c0: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x25c1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_25c1c4:
    // 0x25c1c4: 0x8c8202d0  lw          $v0, 0x2D0($a0)
    ctx->pc = 0x25c1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 720)));
label_25c1c8:
    // 0x25c1c8: 0x439021  addu        $s2, $v0, $v1
    ctx->pc = 0x25c1c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_25c1cc:
    // 0x25c1cc: 0x0  nop
    ctx->pc = 0x25c1ccu;
    // NOP
label_25c1d0:
    // 0x25c1d0: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x25c1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_25c1d4:
    // 0x25c1d4: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x25c1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_25c1d8:
    // 0x25c1d8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x25c1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_25c1dc:
    // 0x25c1dc: 0x8c4204b0  lw          $v0, 0x4B0($v0)
    ctx->pc = 0x25c1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1200)));
label_25c1e0:
    // 0x25c1e0: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_25c1e4:
    if (ctx->pc == 0x25C1E4u) {
        ctx->pc = 0x25C1E8u;
        goto label_25c1e8;
    }
    ctx->pc = 0x25C1E0u;
    {
        const bool branch_taken_0x25c1e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25c1e0) {
            ctx->pc = 0x25C238u;
            goto label_25c238;
        }
    }
    ctx->pc = 0x25C1E8u;
label_25c1e8:
    // 0x25c1e8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x25c1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_25c1ec:
    // 0x25c1ec: 0xa7a200ca  sh          $v0, 0xCA($sp)
    ctx->pc = 0x25c1ecu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 202), (uint16_t)GPR_U32(ctx, 2));
label_25c1f0:
    // 0x25c1f0: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x25c1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_25c1f4:
    // 0x25c1f4: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x25c1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_25c1f8:
    // 0x25c1f8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x25c1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_25c1fc:
    // 0x25c1fc: 0x8c4404b0  lw          $a0, 0x4B0($v0)
    ctx->pc = 0x25c1fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1200)));
label_25c200:
    // 0x25c200: 0xafa400cc  sw          $a0, 0xCC($sp)
    ctx->pc = 0x25c200u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 4));
label_25c204:
    // 0x25c204: 0x112840  sll         $a1, $s1, 1
    ctx->pc = 0x25c204u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
label_25c208:
    // 0x25c208: 0xb13021  addu        $a2, $a1, $s1
    ctx->pc = 0x25c208u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
label_25c20c:
    // 0x25c20c: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x25c20cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_25c210:
    // 0x25c210: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x25c210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_25c214:
    // 0x25c214: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x25c214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_25c218:
    // 0x25c218: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x25c218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_25c21c:
    // 0x25c21c: 0x26050110  addiu       $a1, $s0, 0x110
    ctx->pc = 0x25c21cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
label_25c220:
    // 0x25c220: 0x244207e8  addiu       $v0, $v0, 0x7E8
    ctx->pc = 0x25c220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2024));
label_25c224:
    // 0x25c224: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x25c224u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_25c228:
    // 0x25c228: 0xc098ba0  jal         func_262E80
label_25c22c:
    if (ctx->pc == 0x25C22Cu) {
        ctx->pc = 0x25C230u;
        goto label_25c230;
    }
    ctx->pc = 0x25C228u;
    SET_GPR_U32(ctx, 31, 0x25C230u);
    ctx->pc = 0x262E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262E80u, 0x25C228u, 0x25C230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C230u;
label_25c230:
    // 0x25c230: 0x10000007  b           . + 4 + (0x7 << 2)
label_25c234:
    if (ctx->pc == 0x25C234u) {
        ctx->pc = 0x25C238u;
        goto label_25c238;
    }
    ctx->pc = 0x25C230u;
    {
        const bool branch_taken_0x25c230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25c230) {
            ctx->pc = 0x25C250u;
            goto label_25c250;
        }
    }
    ctx->pc = 0x25C238u;
label_25c238:
    // 0x25c238: 0xc6400110  lwc1        $f0, 0x110($s2)
    ctx->pc = 0x25c238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25c23c:
    // 0x25c23c: 0xe6000110  swc1        $f0, 0x110($s0)
    ctx->pc = 0x25c23cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 272), bits); }
label_25c240:
    // 0x25c240: 0xc6400114  lwc1        $f0, 0x114($s2)
    ctx->pc = 0x25c240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25c244:
    // 0x25c244: 0xe6000114  swc1        $f0, 0x114($s0)
    ctx->pc = 0x25c244u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 276), bits); }
label_25c248:
    // 0x25c248: 0xc6400118  lwc1        $f0, 0x118($s2)
    ctx->pc = 0x25c248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25c24c:
    // 0x25c24c: 0xe6000118  swc1        $f0, 0x118($s0)
    ctx->pc = 0x25c24cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 280), bits); }
label_25c250:
    // 0x25c250: 0x8fa50138  lw          $a1, 0x138($sp)
    ctx->pc = 0x25c250u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_25c254:
    // 0x25c254: 0x94a309e0  lhu         $v1, 0x9E0($a1)
    ctx->pc = 0x25c254u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2528)));
label_25c258:
    // 0x25c258: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x25c258u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_25c25c:
    // 0x25c25c: 0x30850004  andi        $a1, $a0, 0x4
    ctx->pc = 0x25c25cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
label_25c260:
    // 0x25c260: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
label_25c264:
    if (ctx->pc == 0x25C264u) {
        ctx->pc = 0x25C268u;
        goto label_25c268;
    }
    ctx->pc = 0x25C260u;
    {
        const bool branch_taken_0x25c260 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x25c260) {
            ctx->pc = 0x25C280u;
            goto label_25c280;
        }
    }
    ctx->pc = 0x25C268u;
label_25c268:
    // 0x25c268: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x25c268u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_25c26c:
    // 0x25c26c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x25c26cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_25c270:
    // 0x25c270: 0xc6000110  lwc1        $f0, 0x110($s0)
    ctx->pc = 0x25c270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25c274:
    // 0x25c274: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x25c274u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_25c278:
    // 0x25c278: 0xe6000110  swc1        $f0, 0x110($s0)
    ctx->pc = 0x25c278u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 272), bits); }
label_25c27c:
    // 0x25c27c: 0x0  nop
    ctx->pc = 0x25c27cu;
    // NOP
label_25c280:
    // 0x25c280: 0x96040140  lhu         $a0, 0x140($s0)
    ctx->pc = 0x25c280u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
label_25c284:
    // 0x25c284: 0x34830040  ori         $v1, $a0, 0x40
    ctx->pc = 0x25c284u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)64);
label_25c288:
    // 0x25c288: 0xa6030140  sh          $v1, 0x140($s0)
    ctx->pc = 0x25c288u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 3));
label_25c28c:
    // 0x25c28c: 0x328200ff  andi        $v0, $s4, 0xFF
    ctx->pc = 0x25c28cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
label_25c290:
    // 0x25c290: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x25c290u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_25c294:
    // 0x25c294: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x25c294u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_25c298:
    // 0x25c298: 0xc097e7c  jal         func_25F9F0
label_25c29c:
    if (ctx->pc == 0x25C29Cu) {
        ctx->pc = 0x25C2A0u;
        goto label_25c2a0;
    }
    ctx->pc = 0x25C298u;
    SET_GPR_U32(ctx, 31, 0x25C2A0u);
    ctx->pc = 0x25F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F9F0u, 0x25C298u, 0x25C2A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C2A0u;
label_25c2a0:
    // 0x25c2a0: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x25c2a0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_25c2a4:
    // 0x25c2a4: 0x0  nop
    ctx->pc = 0x25c2a4u;
    // NOP
label_25c2a8:
    // 0x25c2a8: 0x26660001  addiu       $a2, $s3, 0x1
    ctx->pc = 0x25c2a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_25c2ac:
    // 0x25c2ac: 0x70c09e28  paddub      $s3, $a2, $zero
    ctx->pc = 0x25c2acu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_25c2b0:
    // 0x25c2b0: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x25c2b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_25c2b4:
    // 0x25c2b4: 0x908509e4  lbu         $a1, 0x9E4($a0)
    ctx->pc = 0x25c2b4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2532)));
label_25c2b8:
    // 0x25c2b8: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x25c2b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_25c2bc:
    // 0x25c2bc: 0xc3202a  slt         $a0, $a2, $v1
    ctx->pc = 0x25c2bcu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_25c2c0:
    // 0x25c2c0: 0x1480fd2a  bnez        $a0, . + 4 + (-0x2D6 << 2)
label_25c2c4:
    if (ctx->pc == 0x25C2C4u) {
        ctx->pc = 0x25C2C8u;
        goto label_25c2c8;
    }
    ctx->pc = 0x25C2C0u;
    {
        const bool branch_taken_0x25c2c0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x25c2c0) {
            ctx->pc = 0x25B76Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25b76c;
        }
    }
    ctx->pc = 0x25C2C8u;
label_25c2c8:
    // 0x25c2c8: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x25c2c8u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_25c2cc:
    // 0x25c2cc: 0x10000030  b           . + 4 + (0x30 << 2)
label_25c2d0:
    if (ctx->pc == 0x25C2D0u) {
        ctx->pc = 0x25C2D4u;
        goto label_25c2d4;
    }
    ctx->pc = 0x25C2CCu;
    {
        const bool branch_taken_0x25c2cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25c2cc) {
            ctx->pc = 0x25C390u;
            goto label_25c390;
        }
    }
    ctx->pc = 0x25C2D4u;
label_25c2d4:
    // 0x25c2d4: 0x8fa50138  lw          $a1, 0x138($sp)
    ctx->pc = 0x25c2d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_25c2d8:
    // 0x25c2d8: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x25c2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_25c2dc:
    // 0x25c2dc: 0x732021  addu        $a0, $v1, $s3
    ctx->pc = 0x25c2dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_25c2e0:
    // 0x25c2e0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x25c2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_25c2e4:
    // 0x25c2e4: 0x833021  addu        $a2, $a0, $v1
    ctx->pc = 0x25c2e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_25c2e8:
    // 0x25c2e8: 0x62100  sll         $a0, $a2, 4
    ctx->pc = 0x25c2e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_25c2ec:
    // 0x25c2ec: 0x8ca302d0  lw          $v1, 0x2D0($a1)
    ctx->pc = 0x25c2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 720)));
label_25c2f0:
    // 0x25c2f0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x25c2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_25c2f4:
    // 0x25c2f4: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x25c2f4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_25c2f8:
    // 0x25c2f8: 0x96030140  lhu         $v1, 0x140($s0)
    ctx->pc = 0x25c2f8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
label_25c2fc:
    // 0x25c2fc: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x25c2fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_25c300:
    // 0x25c300: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x25c300u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_25c304:
    // 0x25c304: 0x10600020  beqz        $v1, . + 4 + (0x20 << 2)
label_25c308:
    if (ctx->pc == 0x25C308u) {
        ctx->pc = 0x25C30Cu;
        goto label_25c30c;
    }
    ctx->pc = 0x25C304u;
    {
        const bool branch_taken_0x25c304 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25c304) {
            ctx->pc = 0x25C388u;
            goto label_25c388;
        }
    }
    ctx->pc = 0x25C30Cu;
label_25c30c:
    // 0x25c30c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x25c30cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_25c310:
    // 0x25c310: 0xc040cbc  jal         func_1032F0
label_25c314:
    if (ctx->pc == 0x25C314u) {
        ctx->pc = 0x25C318u;
        goto label_25c318;
    }
    ctx->pc = 0x25C310u;
    SET_GPR_U32(ctx, 31, 0x25C318u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x25C318u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25C318u) { return; }
    ctx->pc = 0x25C318u;
label_25c318:
    // 0x25c318: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x25c318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_25c31c:
    // 0x25c31c: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x25c31cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_25c320:
    // 0x25c320: 0xc60c011c  lwc1        $f12, 0x11C($s0)
    ctx->pc = 0x25c320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_25c324:
    // 0x25c324: 0xc040d0e  jal         func_103438
label_25c328:
    if (ctx->pc == 0x25C328u) {
        ctx->pc = 0x25C32Cu;
        goto label_25c32c;
    }
    ctx->pc = 0x25C324u;
    SET_GPR_U32(ctx, 31, 0x25C32Cu);
    ctx->pc = 0x103438u;
    {
        ctx->pc = 0x25C32Cu;
        ps2_stubs::sceVu0RotMatrixX(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25C32Cu) { return; }
    ctx->pc = 0x25C32Cu;
label_25c32c:
    // 0x25c32c: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x25c32cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_25c330:
    // 0x25c330: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x25c330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_25c334:
    // 0x25c334: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x25c334u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_25c338:
    // 0x25c338: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x25c338u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_25c33c:
    // 0x25c33c: 0xc60c0120  lwc1        $f12, 0x120($s0)
    ctx->pc = 0x25c33cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_25c340:
    // 0x25c340: 0xc040d38  jal         func_1034E0
label_25c344:
    if (ctx->pc == 0x25C344u) {
        ctx->pc = 0x25C348u;
        goto label_25c348;
    }
    ctx->pc = 0x25C340u;
    SET_GPR_U32(ctx, 31, 0x25C348u);
    ctx->pc = 0x1034E0u;
    {
        ctx->pc = 0x25C348u;
        ps2_stubs::sceVu0RotMatrixY(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25C348u) { return; }
    ctx->pc = 0x25C348u;
label_25c348:
    // 0x25c348: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x25c348u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_25c34c:
    // 0x25c34c: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x25c34cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_25c350:
    // 0x25c350: 0xc60c0124  lwc1        $f12, 0x124($s0)
    ctx->pc = 0x25c350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_25c354:
    // 0x25c354: 0xc040ce4  jal         func_103390
label_25c358:
    if (ctx->pc == 0x25C358u) {
        ctx->pc = 0x25C35Cu;
        goto label_25c35c;
    }
    ctx->pc = 0x25C354u;
    SET_GPR_U32(ctx, 31, 0x25C35Cu);
    ctx->pc = 0x103390u;
    {
        ctx->pc = 0x25C35Cu;
        ps2_stubs::sceVu0RotMatrixZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25C35Cu) { return; }
    ctx->pc = 0x25C35Cu;
label_25c35c:
    // 0x25c35c: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x25c35cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_25c360:
    // 0x25c360: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x25c360u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_25c364:
    // 0x25c364: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x25c364u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_25c368:
    // 0x25c368: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x25c368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_25c36c:
    // 0x25c36c: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x25c36cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_25c370:
    // 0x25c370: 0xc0675f8  jal         func_19D7E0
label_25c374:
    if (ctx->pc == 0x25C374u) {
        ctx->pc = 0x25C378u;
        goto label_25c378;
    }
    ctx->pc = 0x25C370u;
    SET_GPR_U32(ctx, 31, 0x25C378u);
    ctx->pc = 0x19D7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D7E0u, 0x25C370u, 0x25C378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C378u;
label_25c378:
    // 0x25c378: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x25c378u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_25c37c:
    // 0x25c37c: 0x96030140  lhu         $v1, 0x140($s0)
    ctx->pc = 0x25c37cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
label_25c380:
    // 0x25c380: 0x3063ffbf  andi        $v1, $v1, 0xFFBF
    ctx->pc = 0x25c380u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65471);
label_25c384:
    // 0x25c384: 0xa6030140  sh          $v1, 0x140($s0)
    ctx->pc = 0x25c384u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 3));
label_25c388:
    // 0x25c388: 0x26630001  addiu       $v1, $s3, 0x1
    ctx->pc = 0x25c388u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_25c38c:
    // 0x25c38c: 0x70609e28  paddub      $s3, $v1, $zero
    ctx->pc = 0x25c38cu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_25c390:
    // 0x25c390: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x25c390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_25c394:
    // 0x25c394: 0x94630050  lhu         $v1, 0x50($v1)
    ctx->pc = 0x25c394u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_25c398:
    // 0x25c398: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x25c398u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_25c39c:
    // 0x25c39c: 0x263182a  slt         $v1, $s3, $v1
    ctx->pc = 0x25c39cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_25c3a0:
    // 0x25c3a0: 0x1460ffcc  bnez        $v1, . + 4 + (-0x34 << 2)
label_25c3a4:
    if (ctx->pc == 0x25C3A4u) {
        ctx->pc = 0x25C3A8u;
        goto label_25c3a8;
    }
    ctx->pc = 0x25C3A0u;
    {
        const bool branch_taken_0x25c3a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x25c3a0) {
            ctx->pc = 0x25C2D4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25c2d4;
        }
    }
    ctx->pc = 0x25C3A8u;
label_25c3a8:
    // 0x25c3a8: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x25c3a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_25c3ac:
    // 0x25c3ac: 0x906309e6  lbu         $v1, 0x9E6($v1)
    ctx->pc = 0x25c3acu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2534)));
label_25c3b0:
    // 0x25c3b0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_25c3b4:
    if (ctx->pc == 0x25C3B4u) {
        ctx->pc = 0x25C3B8u;
        goto label_25c3b8;
    }
    ctx->pc = 0x25C3B0u;
    {
        const bool branch_taken_0x25c3b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25c3b0) {
            ctx->pc = 0x25C3C8u;
            goto label_25c3c8;
        }
    }
    ctx->pc = 0x25C3B8u;
label_25c3b8:
    // 0x25c3b8: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x25c3b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_25c3bc:
    // 0x25c3bc: 0xc098970  jal         func_2625C0
label_25c3c0:
    if (ctx->pc == 0x25C3C0u) {
        ctx->pc = 0x25C3C4u;
        goto label_25c3c4;
    }
    ctx->pc = 0x25C3BCu;
    SET_GPR_U32(ctx, 31, 0x25C3C4u);
    ctx->pc = 0x2625C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2625C0u, 0x25C3BCu, 0x25C3C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C3C4u;
label_25c3c4:
    // 0x25c3c4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x25c3c4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_25c3c8:
    // 0x25c3c8: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x25c3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_25c3cc:
    // 0x25c3cc: 0x8c6305f4  lw          $v1, 0x5F4($v1)
    ctx->pc = 0x25c3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1524)));
label_25c3d0:
    // 0x25c3d0: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
label_25c3d4:
    if (ctx->pc == 0x25C3D4u) {
        ctx->pc = 0x25C3D8u;
        goto label_25c3d8;
    }
    ctx->pc = 0x25C3D0u;
    {
        const bool branch_taken_0x25c3d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25c3d0) {
            ctx->pc = 0x25C408u;
            goto label_25c408;
        }
    }
    ctx->pc = 0x25C3D8u;
label_25c3d8:
    // 0x25c3d8: 0xc7a00120  lwc1        $f0, 0x120($sp)
    ctx->pc = 0x25c3d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25c3dc:
    // 0x25c3dc: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x25c3dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_25c3e0:
    // 0x25c3e0: 0x8c850330  lw          $a1, 0x330($a0)
    ctx->pc = 0x25c3e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 816)));
label_25c3e4:
    // 0x25c3e4: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x25c3e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_25c3e8:
    // 0x25c3e8: 0xc7a00124  lwc1        $f0, 0x124($sp)
    ctx->pc = 0x25c3e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25c3ec:
    // 0x25c3ec: 0x8fa60138  lw          $a2, 0x138($sp)
    ctx->pc = 0x25c3ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_25c3f0:
    // 0x25c3f0: 0x8cc40330  lw          $a0, 0x330($a2)
    ctx->pc = 0x25c3f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 816)));
label_25c3f4:
    // 0x25c3f4: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x25c3f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
label_25c3f8:
    // 0x25c3f8: 0xc7a00128  lwc1        $f0, 0x128($sp)
    ctx->pc = 0x25c3f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25c3fc:
    // 0x25c3fc: 0x8fa50138  lw          $a1, 0x138($sp)
    ctx->pc = 0x25c3fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_25c400:
    // 0x25c400: 0x8ca30330  lw          $v1, 0x330($a1)
    ctx->pc = 0x25c400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 816)));
label_25c404:
    // 0x25c404: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x25c404u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_25c408:
    // 0x25c408: 0x7bbf0060  lq          $ra, 0x60($sp)
    ctx->pc = 0x25c408u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_25c40c:
    // 0x25c40c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x25c40cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_25c410:
    // 0x25c410: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x25c410u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_25c414:
    // 0x25c414: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x25c414u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_25c418:
    // 0x25c418: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x25c418u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_25c41c:
    // 0x25c41c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25c41cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_25c420:
    // 0x25c420: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25c420u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_25c424:
    // 0x25c424: 0x27bd0140  addiu       $sp, $sp, 0x140
    ctx->pc = 0x25c424u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_25c428:
    // 0x25c428: 0x3e00008  jr          $ra
label_25c42c:
    if (ctx->pc == 0x25C42Cu) {
        ctx->pc = 0x25C430u;
        goto label_fallthrough_0x25c428;
    }
    ctx->pc = 0x25C428u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25C428u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x25c428:
    ctx->pc = 0x25C430u;
}
