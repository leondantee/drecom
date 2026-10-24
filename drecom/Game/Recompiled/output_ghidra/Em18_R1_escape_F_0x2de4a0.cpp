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

// Function: Em18_R1_escape_F
// Address: 0x2de4a0 - 0x2deb08
void Em18_R1_escape_F_0x2de4a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em18_R1_escape_F_0x2de4a0");
#endif

    switch (ctx->pc) {
        case 0x2de4a0u: goto label_2de4a0;
        case 0x2de4a4u: goto label_2de4a4;
        case 0x2de4a8u: goto label_2de4a8;
        case 0x2de4acu: goto label_2de4ac;
        case 0x2de4b0u: goto label_2de4b0;
        case 0x2de4b4u: goto label_2de4b4;
        case 0x2de4b8u: goto label_2de4b8;
        case 0x2de4bcu: goto label_2de4bc;
        case 0x2de4c0u: goto label_2de4c0;
        case 0x2de4c4u: goto label_2de4c4;
        case 0x2de4c8u: goto label_2de4c8;
        case 0x2de4ccu: goto label_2de4cc;
        case 0x2de4d0u: goto label_2de4d0;
        case 0x2de4d4u: goto label_2de4d4;
        case 0x2de4d8u: goto label_2de4d8;
        case 0x2de4dcu: goto label_2de4dc;
        case 0x2de4e0u: goto label_2de4e0;
        case 0x2de4e4u: goto label_2de4e4;
        case 0x2de4e8u: goto label_2de4e8;
        case 0x2de4ecu: goto label_2de4ec;
        case 0x2de4f0u: goto label_2de4f0;
        case 0x2de4f4u: goto label_2de4f4;
        case 0x2de4f8u: goto label_2de4f8;
        case 0x2de4fcu: goto label_2de4fc;
        case 0x2de500u: goto label_2de500;
        case 0x2de504u: goto label_2de504;
        case 0x2de508u: goto label_2de508;
        case 0x2de50cu: goto label_2de50c;
        case 0x2de510u: goto label_2de510;
        case 0x2de514u: goto label_2de514;
        case 0x2de518u: goto label_2de518;
        case 0x2de51cu: goto label_2de51c;
        case 0x2de520u: goto label_2de520;
        case 0x2de524u: goto label_2de524;
        case 0x2de528u: goto label_2de528;
        case 0x2de52cu: goto label_2de52c;
        case 0x2de530u: goto label_2de530;
        case 0x2de534u: goto label_2de534;
        case 0x2de538u: goto label_2de538;
        case 0x2de53cu: goto label_2de53c;
        case 0x2de540u: goto label_2de540;
        case 0x2de544u: goto label_2de544;
        case 0x2de548u: goto label_2de548;
        case 0x2de54cu: goto label_2de54c;
        case 0x2de550u: goto label_2de550;
        case 0x2de554u: goto label_2de554;
        case 0x2de558u: goto label_2de558;
        case 0x2de55cu: goto label_2de55c;
        case 0x2de560u: goto label_2de560;
        case 0x2de564u: goto label_2de564;
        case 0x2de568u: goto label_2de568;
        case 0x2de56cu: goto label_2de56c;
        case 0x2de570u: goto label_2de570;
        case 0x2de574u: goto label_2de574;
        case 0x2de578u: goto label_2de578;
        case 0x2de57cu: goto label_2de57c;
        case 0x2de580u: goto label_2de580;
        case 0x2de584u: goto label_2de584;
        case 0x2de588u: goto label_2de588;
        case 0x2de58cu: goto label_2de58c;
        case 0x2de590u: goto label_2de590;
        case 0x2de594u: goto label_2de594;
        case 0x2de598u: goto label_2de598;
        case 0x2de59cu: goto label_2de59c;
        case 0x2de5a0u: goto label_2de5a0;
        case 0x2de5a4u: goto label_2de5a4;
        case 0x2de5a8u: goto label_2de5a8;
        case 0x2de5acu: goto label_2de5ac;
        case 0x2de5b0u: goto label_2de5b0;
        case 0x2de5b4u: goto label_2de5b4;
        case 0x2de5b8u: goto label_2de5b8;
        case 0x2de5bcu: goto label_2de5bc;
        case 0x2de5c0u: goto label_2de5c0;
        case 0x2de5c4u: goto label_2de5c4;
        case 0x2de5c8u: goto label_2de5c8;
        case 0x2de5ccu: goto label_2de5cc;
        case 0x2de5d0u: goto label_2de5d0;
        case 0x2de5d4u: goto label_2de5d4;
        case 0x2de5d8u: goto label_2de5d8;
        case 0x2de5dcu: goto label_2de5dc;
        case 0x2de5e0u: goto label_2de5e0;
        case 0x2de5e4u: goto label_2de5e4;
        case 0x2de5e8u: goto label_2de5e8;
        case 0x2de5ecu: goto label_2de5ec;
        case 0x2de5f0u: goto label_2de5f0;
        case 0x2de5f4u: goto label_2de5f4;
        case 0x2de5f8u: goto label_2de5f8;
        case 0x2de5fcu: goto label_2de5fc;
        case 0x2de600u: goto label_2de600;
        case 0x2de604u: goto label_2de604;
        case 0x2de608u: goto label_2de608;
        case 0x2de60cu: goto label_2de60c;
        case 0x2de610u: goto label_2de610;
        case 0x2de614u: goto label_2de614;
        case 0x2de618u: goto label_2de618;
        case 0x2de61cu: goto label_2de61c;
        case 0x2de620u: goto label_2de620;
        case 0x2de624u: goto label_2de624;
        case 0x2de628u: goto label_2de628;
        case 0x2de62cu: goto label_2de62c;
        case 0x2de630u: goto label_2de630;
        case 0x2de634u: goto label_2de634;
        case 0x2de638u: goto label_2de638;
        case 0x2de63cu: goto label_2de63c;
        case 0x2de640u: goto label_2de640;
        case 0x2de644u: goto label_2de644;
        case 0x2de648u: goto label_2de648;
        case 0x2de64cu: goto label_2de64c;
        case 0x2de650u: goto label_2de650;
        case 0x2de654u: goto label_2de654;
        case 0x2de658u: goto label_2de658;
        case 0x2de65cu: goto label_2de65c;
        case 0x2de660u: goto label_2de660;
        case 0x2de664u: goto label_2de664;
        case 0x2de668u: goto label_2de668;
        case 0x2de66cu: goto label_2de66c;
        case 0x2de670u: goto label_2de670;
        case 0x2de674u: goto label_2de674;
        case 0x2de678u: goto label_2de678;
        case 0x2de67cu: goto label_2de67c;
        case 0x2de680u: goto label_2de680;
        case 0x2de684u: goto label_2de684;
        case 0x2de688u: goto label_2de688;
        case 0x2de68cu: goto label_2de68c;
        case 0x2de690u: goto label_2de690;
        case 0x2de694u: goto label_2de694;
        case 0x2de698u: goto label_2de698;
        case 0x2de69cu: goto label_2de69c;
        case 0x2de6a0u: goto label_2de6a0;
        case 0x2de6a4u: goto label_2de6a4;
        case 0x2de6a8u: goto label_2de6a8;
        case 0x2de6acu: goto label_2de6ac;
        case 0x2de6b0u: goto label_2de6b0;
        case 0x2de6b4u: goto label_2de6b4;
        case 0x2de6b8u: goto label_2de6b8;
        case 0x2de6bcu: goto label_2de6bc;
        case 0x2de6c0u: goto label_2de6c0;
        case 0x2de6c4u: goto label_2de6c4;
        case 0x2de6c8u: goto label_2de6c8;
        case 0x2de6ccu: goto label_2de6cc;
        case 0x2de6d0u: goto label_2de6d0;
        case 0x2de6d4u: goto label_2de6d4;
        case 0x2de6d8u: goto label_2de6d8;
        case 0x2de6dcu: goto label_2de6dc;
        case 0x2de6e0u: goto label_2de6e0;
        case 0x2de6e4u: goto label_2de6e4;
        case 0x2de6e8u: goto label_2de6e8;
        case 0x2de6ecu: goto label_2de6ec;
        case 0x2de6f0u: goto label_2de6f0;
        case 0x2de6f4u: goto label_2de6f4;
        case 0x2de6f8u: goto label_2de6f8;
        case 0x2de6fcu: goto label_2de6fc;
        case 0x2de700u: goto label_2de700;
        case 0x2de704u: goto label_2de704;
        case 0x2de708u: goto label_2de708;
        case 0x2de70cu: goto label_2de70c;
        case 0x2de710u: goto label_2de710;
        case 0x2de714u: goto label_2de714;
        case 0x2de718u: goto label_2de718;
        case 0x2de71cu: goto label_2de71c;
        case 0x2de720u: goto label_2de720;
        case 0x2de724u: goto label_2de724;
        case 0x2de728u: goto label_2de728;
        case 0x2de72cu: goto label_2de72c;
        case 0x2de730u: goto label_2de730;
        case 0x2de734u: goto label_2de734;
        case 0x2de738u: goto label_2de738;
        case 0x2de73cu: goto label_2de73c;
        case 0x2de740u: goto label_2de740;
        case 0x2de744u: goto label_2de744;
        case 0x2de748u: goto label_2de748;
        case 0x2de74cu: goto label_2de74c;
        case 0x2de750u: goto label_2de750;
        case 0x2de754u: goto label_2de754;
        case 0x2de758u: goto label_2de758;
        case 0x2de75cu: goto label_2de75c;
        case 0x2de760u: goto label_2de760;
        case 0x2de764u: goto label_2de764;
        case 0x2de768u: goto label_2de768;
        case 0x2de76cu: goto label_2de76c;
        case 0x2de770u: goto label_2de770;
        case 0x2de774u: goto label_2de774;
        case 0x2de778u: goto label_2de778;
        case 0x2de77cu: goto label_2de77c;
        case 0x2de780u: goto label_2de780;
        case 0x2de784u: goto label_2de784;
        case 0x2de788u: goto label_2de788;
        case 0x2de78cu: goto label_2de78c;
        case 0x2de790u: goto label_2de790;
        case 0x2de794u: goto label_2de794;
        case 0x2de798u: goto label_2de798;
        case 0x2de79cu: goto label_2de79c;
        case 0x2de7a0u: goto label_2de7a0;
        case 0x2de7a4u: goto label_2de7a4;
        case 0x2de7a8u: goto label_2de7a8;
        case 0x2de7acu: goto label_2de7ac;
        case 0x2de7b0u: goto label_2de7b0;
        case 0x2de7b4u: goto label_2de7b4;
        case 0x2de7b8u: goto label_2de7b8;
        case 0x2de7bcu: goto label_2de7bc;
        case 0x2de7c0u: goto label_2de7c0;
        case 0x2de7c4u: goto label_2de7c4;
        case 0x2de7c8u: goto label_2de7c8;
        case 0x2de7ccu: goto label_2de7cc;
        case 0x2de7d0u: goto label_2de7d0;
        case 0x2de7d4u: goto label_2de7d4;
        case 0x2de7d8u: goto label_2de7d8;
        case 0x2de7dcu: goto label_2de7dc;
        case 0x2de7e0u: goto label_2de7e0;
        case 0x2de7e4u: goto label_2de7e4;
        case 0x2de7e8u: goto label_2de7e8;
        case 0x2de7ecu: goto label_2de7ec;
        case 0x2de7f0u: goto label_2de7f0;
        case 0x2de7f4u: goto label_2de7f4;
        case 0x2de7f8u: goto label_2de7f8;
        case 0x2de7fcu: goto label_2de7fc;
        case 0x2de800u: goto label_2de800;
        case 0x2de804u: goto label_2de804;
        case 0x2de808u: goto label_2de808;
        case 0x2de80cu: goto label_2de80c;
        case 0x2de810u: goto label_2de810;
        case 0x2de814u: goto label_2de814;
        case 0x2de818u: goto label_2de818;
        case 0x2de81cu: goto label_2de81c;
        case 0x2de820u: goto label_2de820;
        case 0x2de824u: goto label_2de824;
        case 0x2de828u: goto label_2de828;
        case 0x2de82cu: goto label_2de82c;
        case 0x2de830u: goto label_2de830;
        case 0x2de834u: goto label_2de834;
        case 0x2de838u: goto label_2de838;
        case 0x2de83cu: goto label_2de83c;
        case 0x2de840u: goto label_2de840;
        case 0x2de844u: goto label_2de844;
        case 0x2de848u: goto label_2de848;
        case 0x2de84cu: goto label_2de84c;
        case 0x2de850u: goto label_2de850;
        case 0x2de854u: goto label_2de854;
        case 0x2de858u: goto label_2de858;
        case 0x2de85cu: goto label_2de85c;
        case 0x2de860u: goto label_2de860;
        case 0x2de864u: goto label_2de864;
        case 0x2de868u: goto label_2de868;
        case 0x2de86cu: goto label_2de86c;
        case 0x2de870u: goto label_2de870;
        case 0x2de874u: goto label_2de874;
        case 0x2de878u: goto label_2de878;
        case 0x2de87cu: goto label_2de87c;
        case 0x2de880u: goto label_2de880;
        case 0x2de884u: goto label_2de884;
        case 0x2de888u: goto label_2de888;
        case 0x2de88cu: goto label_2de88c;
        case 0x2de890u: goto label_2de890;
        case 0x2de894u: goto label_2de894;
        case 0x2de898u: goto label_2de898;
        case 0x2de89cu: goto label_2de89c;
        case 0x2de8a0u: goto label_2de8a0;
        case 0x2de8a4u: goto label_2de8a4;
        case 0x2de8a8u: goto label_2de8a8;
        case 0x2de8acu: goto label_2de8ac;
        case 0x2de8b0u: goto label_2de8b0;
        case 0x2de8b4u: goto label_2de8b4;
        case 0x2de8b8u: goto label_2de8b8;
        case 0x2de8bcu: goto label_2de8bc;
        case 0x2de8c0u: goto label_2de8c0;
        case 0x2de8c4u: goto label_2de8c4;
        case 0x2de8c8u: goto label_2de8c8;
        case 0x2de8ccu: goto label_2de8cc;
        case 0x2de8d0u: goto label_2de8d0;
        case 0x2de8d4u: goto label_2de8d4;
        case 0x2de8d8u: goto label_2de8d8;
        case 0x2de8dcu: goto label_2de8dc;
        case 0x2de8e0u: goto label_2de8e0;
        case 0x2de8e4u: goto label_2de8e4;
        case 0x2de8e8u: goto label_2de8e8;
        case 0x2de8ecu: goto label_2de8ec;
        case 0x2de8f0u: goto label_2de8f0;
        case 0x2de8f4u: goto label_2de8f4;
        case 0x2de8f8u: goto label_2de8f8;
        case 0x2de8fcu: goto label_2de8fc;
        case 0x2de900u: goto label_2de900;
        case 0x2de904u: goto label_2de904;
        case 0x2de908u: goto label_2de908;
        case 0x2de90cu: goto label_2de90c;
        case 0x2de910u: goto label_2de910;
        case 0x2de914u: goto label_2de914;
        case 0x2de918u: goto label_2de918;
        case 0x2de91cu: goto label_2de91c;
        case 0x2de920u: goto label_2de920;
        case 0x2de924u: goto label_2de924;
        case 0x2de928u: goto label_2de928;
        case 0x2de92cu: goto label_2de92c;
        case 0x2de930u: goto label_2de930;
        case 0x2de934u: goto label_2de934;
        case 0x2de938u: goto label_2de938;
        case 0x2de93cu: goto label_2de93c;
        case 0x2de940u: goto label_2de940;
        case 0x2de944u: goto label_2de944;
        case 0x2de948u: goto label_2de948;
        case 0x2de94cu: goto label_2de94c;
        case 0x2de950u: goto label_2de950;
        case 0x2de954u: goto label_2de954;
        case 0x2de958u: goto label_2de958;
        case 0x2de95cu: goto label_2de95c;
        case 0x2de960u: goto label_2de960;
        case 0x2de964u: goto label_2de964;
        case 0x2de968u: goto label_2de968;
        case 0x2de96cu: goto label_2de96c;
        case 0x2de970u: goto label_2de970;
        case 0x2de974u: goto label_2de974;
        case 0x2de978u: goto label_2de978;
        case 0x2de97cu: goto label_2de97c;
        case 0x2de980u: goto label_2de980;
        case 0x2de984u: goto label_2de984;
        case 0x2de988u: goto label_2de988;
        case 0x2de98cu: goto label_2de98c;
        case 0x2de990u: goto label_2de990;
        case 0x2de994u: goto label_2de994;
        case 0x2de998u: goto label_2de998;
        case 0x2de99cu: goto label_2de99c;
        case 0x2de9a0u: goto label_2de9a0;
        case 0x2de9a4u: goto label_2de9a4;
        case 0x2de9a8u: goto label_2de9a8;
        case 0x2de9acu: goto label_2de9ac;
        case 0x2de9b0u: goto label_2de9b0;
        case 0x2de9b4u: goto label_2de9b4;
        case 0x2de9b8u: goto label_2de9b8;
        case 0x2de9bcu: goto label_2de9bc;
        case 0x2de9c0u: goto label_2de9c0;
        case 0x2de9c4u: goto label_2de9c4;
        case 0x2de9c8u: goto label_2de9c8;
        case 0x2de9ccu: goto label_2de9cc;
        case 0x2de9d0u: goto label_2de9d0;
        case 0x2de9d4u: goto label_2de9d4;
        case 0x2de9d8u: goto label_2de9d8;
        case 0x2de9dcu: goto label_2de9dc;
        case 0x2de9e0u: goto label_2de9e0;
        case 0x2de9e4u: goto label_2de9e4;
        case 0x2de9e8u: goto label_2de9e8;
        case 0x2de9ecu: goto label_2de9ec;
        case 0x2de9f0u: goto label_2de9f0;
        case 0x2de9f4u: goto label_2de9f4;
        case 0x2de9f8u: goto label_2de9f8;
        case 0x2de9fcu: goto label_2de9fc;
        case 0x2dea00u: goto label_2dea00;
        case 0x2dea04u: goto label_2dea04;
        case 0x2dea08u: goto label_2dea08;
        case 0x2dea0cu: goto label_2dea0c;
        case 0x2dea10u: goto label_2dea10;
        case 0x2dea14u: goto label_2dea14;
        case 0x2dea18u: goto label_2dea18;
        case 0x2dea1cu: goto label_2dea1c;
        case 0x2dea20u: goto label_2dea20;
        case 0x2dea24u: goto label_2dea24;
        case 0x2dea28u: goto label_2dea28;
        case 0x2dea2cu: goto label_2dea2c;
        case 0x2dea30u: goto label_2dea30;
        case 0x2dea34u: goto label_2dea34;
        case 0x2dea38u: goto label_2dea38;
        case 0x2dea3cu: goto label_2dea3c;
        case 0x2dea40u: goto label_2dea40;
        case 0x2dea44u: goto label_2dea44;
        case 0x2dea48u: goto label_2dea48;
        case 0x2dea4cu: goto label_2dea4c;
        case 0x2dea50u: goto label_2dea50;
        case 0x2dea54u: goto label_2dea54;
        case 0x2dea58u: goto label_2dea58;
        case 0x2dea5cu: goto label_2dea5c;
        case 0x2dea60u: goto label_2dea60;
        case 0x2dea64u: goto label_2dea64;
        case 0x2dea68u: goto label_2dea68;
        case 0x2dea6cu: goto label_2dea6c;
        case 0x2dea70u: goto label_2dea70;
        case 0x2dea74u: goto label_2dea74;
        case 0x2dea78u: goto label_2dea78;
        case 0x2dea7cu: goto label_2dea7c;
        case 0x2dea80u: goto label_2dea80;
        case 0x2dea84u: goto label_2dea84;
        case 0x2dea88u: goto label_2dea88;
        case 0x2dea8cu: goto label_2dea8c;
        case 0x2dea90u: goto label_2dea90;
        case 0x2dea94u: goto label_2dea94;
        case 0x2dea98u: goto label_2dea98;
        case 0x2dea9cu: goto label_2dea9c;
        case 0x2deaa0u: goto label_2deaa0;
        case 0x2deaa4u: goto label_2deaa4;
        case 0x2deaa8u: goto label_2deaa8;
        case 0x2deaacu: goto label_2deaac;
        case 0x2deab0u: goto label_2deab0;
        case 0x2deab4u: goto label_2deab4;
        case 0x2deab8u: goto label_2deab8;
        case 0x2deabcu: goto label_2deabc;
        case 0x2deac0u: goto label_2deac0;
        case 0x2deac4u: goto label_2deac4;
        case 0x2deac8u: goto label_2deac8;
        case 0x2deaccu: goto label_2deacc;
        case 0x2dead0u: goto label_2dead0;
        case 0x2dead4u: goto label_2dead4;
        case 0x2dead8u: goto label_2dead8;
        case 0x2deadcu: goto label_2deadc;
        case 0x2deae0u: goto label_2deae0;
        case 0x2deae4u: goto label_2deae4;
        case 0x2deae8u: goto label_2deae8;
        case 0x2deaecu: goto label_2deaec;
        case 0x2deaf0u: goto label_2deaf0;
        case 0x2deaf4u: goto label_2deaf4;
        case 0x2deaf8u: goto label_2deaf8;
        case 0x2deafcu: goto label_2deafc;
        case 0x2deb00u: goto label_2deb00;
        case 0x2deb04u: goto label_2deb04;
        default: break;
    }

    ctx->pc = 0x2de4a0u;

label_2de4a0:
    // 0x2de4a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2de4a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2de4a4:
    // 0x2de4a4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2de4a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_2de4a8:
    // 0x2de4a8: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x2de4a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
label_2de4ac:
    // 0x2de4ac: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2de4acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2de4b0:
    // 0x2de4b0: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x2de4b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_2de4b4:
    // 0x2de4b4: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x2de4b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_2de4b8:
    // 0x2de4b8: 0x2ca1000a  sltiu       $at, $a1, 0xA
    ctx->pc = 0x2de4b8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_2de4bc:
    // 0x2de4bc: 0x1020018e  beqz        $at, . + 4 + (0x18E << 2)
label_2de4c0:
    if (ctx->pc == 0x2DE4C0u) {
        ctx->pc = 0x2DE4C4u;
        goto label_2de4c4;
    }
    ctx->pc = 0x2DE4BCu;
    {
        const bool branch_taken_0x2de4bc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2de4bc) {
            ctx->pc = 0x2DEAF8u;
            goto label_2deaf8;
        }
    }
    ctx->pc = 0x2DE4C4u;
label_2de4c4:
    // 0x2de4c4: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2de4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_2de4c8:
    // 0x2de4c8: 0x246419d0  addiu       $a0, $v1, 0x19D0
    ctx->pc = 0x2de4c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 6608));
label_2de4cc:
    // 0x2de4cc: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x2de4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_2de4d0:
    // 0x2de4d0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2de4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2de4d4:
    // 0x2de4d4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2de4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2de4d8:
    // 0x2de4d8: 0x600008  jr          $v1
label_2de4dc:
    if (ctx->pc == 0x2DE4DCu) {
        ctx->pc = 0x2DE4E0u;
        goto label_2de4e0;
    }
    ctx->pc = 0x2DE4D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DE4D8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2DE4E0u;
label_2de4e0:
    // 0x2de4e0: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x2de4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_2de4e4:
    // 0x2de4e4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2de4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2de4e8:
    // 0x2de4e8: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x2de4e8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
label_2de4ec:
    // 0x2de4ec: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2de4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2de4f0:
    // 0x2de4f0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2de4f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2de4f4:
    // 0x2de4f4: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2de4f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_2de4f8:
    // 0x2de4f8: 0x24060a26  addiu       $a2, $zero, 0xA26
    ctx->pc = 0x2de4f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2598));
label_2de4fc:
    // 0x2de4fc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2de4fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2de500:
    // 0x2de500: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2de500u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_2de504:
    // 0x2de504: 0xc0965d0  jal         func_259740
label_2de508:
    if (ctx->pc == 0x2DE508u) {
        ctx->pc = 0x2DE50Cu;
        goto label_2de50c;
    }
    ctx->pc = 0x2DE504u;
    SET_GPR_U32(ctx, 31, 0x2DE50Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2DE504u, 0x2DE50Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE50Cu;
label_2de50c:
    // 0x2de50c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2de50cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2de510:
    // 0x2de510: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2de510u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_2de514:
    // 0x2de514: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2de514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2de518:
    // 0x2de518: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2de518u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_2de51c:
    // 0x2de51c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2de51cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2de520:
    // 0x2de520: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2de520u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2de524:
    // 0x2de524: 0xc096b40  jal         func_25AD00
label_2de528:
    if (ctx->pc == 0x2DE528u) {
        ctx->pc = 0x2DE52Cu;
        goto label_2de52c;
    }
    ctx->pc = 0x2DE524u;
    SET_GPR_U32(ctx, 31, 0x2DE52Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2DE524u, 0x2DE52Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE52Cu;
label_2de52c:
    // 0x2de52c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2de52cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2de530:
    // 0x2de530: 0xc05cd10  jal         func_173440
label_2de534:
    if (ctx->pc == 0x2DE534u) {
        ctx->pc = 0x2DE538u;
        goto label_2de538;
    }
    ctx->pc = 0x2DE530u;
    SET_GPR_U32(ctx, 31, 0x2DE538u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x2DE530u, 0x2DE538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE538u;
label_2de538:
    // 0x2de538: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2de538u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2de53c:
    // 0x2de53c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2de53cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2de540:
    // 0x2de540: 0xc05cec4  jal         func_173B10
label_2de544:
    if (ctx->pc == 0x2DE544u) {
        ctx->pc = 0x2DE548u;
        goto label_2de548;
    }
    ctx->pc = 0x2DE540u;
    SET_GPR_U32(ctx, 31, 0x2DE548u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x2DE540u, 0x2DE548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE548u;
label_2de548:
    // 0x2de548: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2de548u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2de54c:
    // 0x2de54c: 0xc0974dc  jal         func_25D370
label_2de550:
    if (ctx->pc == 0x2DE550u) {
        ctx->pc = 0x2DE554u;
        goto label_2de554;
    }
    ctx->pc = 0x2DE54Cu;
    SET_GPR_U32(ctx, 31, 0x2DE554u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2DE54Cu, 0x2DE554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE554u;
label_2de554:
    // 0x2de554: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2de554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2de558:
    // 0x2de558: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2de558u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_2de55c:
    // 0x2de55c: 0x10600166  beqz        $v1, . + 4 + (0x166 << 2)
label_2de560:
    if (ctx->pc == 0x2DE560u) {
        ctx->pc = 0x2DE564u;
        goto label_2de564;
    }
    ctx->pc = 0x2DE55Cu;
    {
        const bool branch_taken_0x2de55c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2de55c) {
            ctx->pc = 0x2DEAF8u;
            goto label_2deaf8;
        }
    }
    ctx->pc = 0x2DE564u;
label_2de564:
    // 0x2de564: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2de564u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2de568:
    // 0x2de568: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x2de568u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_2de56c:
    // 0x2de56c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2de56cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2de570:
    // 0x2de570: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x2de570u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_2de574:
    // 0x2de574: 0x10000160  b           . + 4 + (0x160 << 2)
label_2de578:
    if (ctx->pc == 0x2DE578u) {
        ctx->pc = 0x2DE57Cu;
        goto label_2de57c;
    }
    ctx->pc = 0x2DE574u;
    {
        const bool branch_taken_0x2de574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2de574) {
            ctx->pc = 0x2DEAF8u;
            goto label_2deaf8;
        }
    }
    ctx->pc = 0x2DE57Cu;
label_2de57c:
    // 0x2de57c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2de57cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2de580:
    // 0x2de580: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2de580u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2de584:
    // 0x2de584: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2de584u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_2de588:
    // 0x2de588: 0x24060027  addiu       $a2, $zero, 0x27
    ctx->pc = 0x2de588u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
label_2de58c:
    // 0x2de58c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2de58cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2de590:
    // 0x2de590: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2de590u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_2de594:
    // 0x2de594: 0xc0965d0  jal         func_259740
label_2de598:
    if (ctx->pc == 0x2DE598u) {
        ctx->pc = 0x2DE59Cu;
        goto label_2de59c;
    }
    ctx->pc = 0x2DE594u;
    SET_GPR_U32(ctx, 31, 0x2DE59Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2DE594u, 0x2DE59Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE59Cu;
label_2de59c:
    // 0x2de59c: 0x3c0242e0  lui         $v0, 0x42E0
    ctx->pc = 0x2de59cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17120 << 16));
label_2de5a0:
    // 0x2de5a0: 0x34426667  ori         $v0, $v0, 0x6667
    ctx->pc = 0x2de5a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
label_2de5a4:
    // 0x2de5a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2de5a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2de5a8:
    // 0x2de5a8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2de5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2de5ac:
    // 0x2de5ac: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x2de5acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
label_2de5b0:
    // 0x2de5b0: 0x3c0240a3  lui         $v0, 0x40A3
    ctx->pc = 0x2de5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16547 << 16));
label_2de5b4:
    // 0x2de5b4: 0x34423334  ori         $v0, $v0, 0x3334
    ctx->pc = 0x2de5b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13108);
label_2de5b8:
    // 0x2de5b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2de5b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2de5bc:
    // 0x2de5bc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2de5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2de5c0:
    // 0x2de5c0: 0xe4401280  swc1        $f0, 0x1280($v0)
    ctx->pc = 0x2de5c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4736), bits); }
label_2de5c4:
    // 0x2de5c4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2de5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2de5c8:
    // 0x2de5c8: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2de5c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_2de5cc:
    // 0x2de5cc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2de5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2de5d0:
    // 0x2de5d0: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2de5d0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_2de5d4:
    // 0x2de5d4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2de5d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2de5d8:
    // 0x2de5d8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2de5d8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2de5dc:
    // 0x2de5dc: 0xc096b40  jal         func_25AD00
label_2de5e0:
    if (ctx->pc == 0x2DE5E0u) {
        ctx->pc = 0x2DE5E4u;
        goto label_2de5e4;
    }
    ctx->pc = 0x2DE5DCu;
    SET_GPR_U32(ctx, 31, 0x2DE5E4u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2DE5DCu, 0x2DE5E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE5E4u;
label_2de5e4:
    // 0x2de5e4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2de5e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2de5e8:
    // 0x2de5e8: 0xc05cd10  jal         func_173440
label_2de5ec:
    if (ctx->pc == 0x2DE5ECu) {
        ctx->pc = 0x2DE5F0u;
        goto label_2de5f0;
    }
    ctx->pc = 0x2DE5E8u;
    SET_GPR_U32(ctx, 31, 0x2DE5F0u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x2DE5E8u, 0x2DE5F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE5F0u;
label_2de5f0:
    // 0x2de5f0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2de5f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2de5f4:
    // 0x2de5f4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2de5f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2de5f8:
    // 0x2de5f8: 0xc05cec4  jal         func_173B10
label_2de5fc:
    if (ctx->pc == 0x2DE5FCu) {
        ctx->pc = 0x2DE600u;
        goto label_2de600;
    }
    ctx->pc = 0x2DE5F8u;
    SET_GPR_U32(ctx, 31, 0x2DE600u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x2DE5F8u, 0x2DE600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE600u;
label_2de600:
    // 0x2de600: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2de600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2de604:
    // 0x2de604: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x2de604u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
label_2de608:
    // 0x2de608: 0xc057a80  jal         func_15EA00
label_2de60c:
    if (ctx->pc == 0x2DE60Cu) {
        ctx->pc = 0x2DE610u;
        goto label_2de610;
    }
    ctx->pc = 0x2DE608u;
    SET_GPR_U32(ctx, 31, 0x2DE610u);
    ctx->pc = 0x15EA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EA00u, 0x2DE608u, 0x2DE610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE610u;
label_2de610:
    // 0x2de610: 0x3c024467  lui         $v0, 0x4467
    ctx->pc = 0x2de610u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17511 << 16));
label_2de614:
    // 0x2de614: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x2de614u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_2de618:
    // 0x2de618: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2de618u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2de61c:
    // 0x2de61c: 0x0  nop
    ctx->pc = 0x2de61cu;
    // NOP
label_2de620:
    // 0x2de620: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2de620u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_2de624:
    // 0x2de624: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x2de624u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_2de628:
    // 0x2de628: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2de628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2de62c:
    // 0x2de62c: 0xc4411284  lwc1        $f1, 0x1284($v0)
    ctx->pc = 0x2de62cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2de630:
    // 0x2de630: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2de630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2de634:
    // 0x2de634: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x2de634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2de638:
    // 0x2de638: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2de638u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2de63c:
    // 0x2de63c: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x2de63cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_2de640:
    // 0x2de640: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2de640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2de644:
    // 0x2de644: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x2de644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2de648:
    // 0x2de648: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x2de648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2de64c:
    // 0x2de64c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2de64cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2de650:
    // 0x2de650: 0x0  nop
    ctx->pc = 0x2de650u;
    // NOP
label_2de654:
    // 0x2de654: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_2de658:
    if (ctx->pc == 0x2DE658u) {
        ctx->pc = 0x2DE65Cu;
        goto label_2de65c;
    }
    ctx->pc = 0x2DE654u;
    {
        const bool branch_taken_0x2de654 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2de654) {
            ctx->pc = 0x2DE668u;
            goto label_2de668;
        }
    }
    ctx->pc = 0x2DE65Cu;
label_2de65c:
    // 0x2de65c: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x2de65cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2de660:
    // 0x2de660: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2de660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2de664:
    // 0x2de664: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x2de664u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_2de668:
    // 0x2de668: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2de668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2de66c:
    // 0x2de66c: 0xc4411280  lwc1        $f1, 0x1280($v0)
    ctx->pc = 0x2de66cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2de670:
    // 0x2de670: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2de670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2de674:
    // 0x2de674: 0xc4401284  lwc1        $f0, 0x1284($v0)
    ctx->pc = 0x2de674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2de678:
    // 0x2de678: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2de678u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_2de67c:
    // 0x2de67c: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x2de67cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
label_2de680:
    // 0x2de680: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2de680u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2de684:
    // 0x2de684: 0xc0974dc  jal         func_25D370
label_2de688:
    if (ctx->pc == 0x2DE688u) {
        ctx->pc = 0x2DE68Cu;
        goto label_2de68c;
    }
    ctx->pc = 0x2DE684u;
    SET_GPR_U32(ctx, 31, 0x2DE68Cu);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2DE684u, 0x2DE68Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE68Cu;
label_2de68c:
    // 0x2de68c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2de68cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2de690:
    // 0x2de690: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2de690u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_2de694:
    // 0x2de694: 0x10600118  beqz        $v1, . + 4 + (0x118 << 2)
label_2de698:
    if (ctx->pc == 0x2DE698u) {
        ctx->pc = 0x2DE69Cu;
        goto label_2de69c;
    }
    ctx->pc = 0x2DE694u;
    {
        const bool branch_taken_0x2de694 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2de694) {
            ctx->pc = 0x2DEAF8u;
            goto label_2deaf8;
        }
    }
    ctx->pc = 0x2DE69Cu;
label_2de69c:
    // 0x2de69c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2de69cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2de6a0:
    // 0x2de6a0: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x2de6a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_2de6a4:
    // 0x2de6a4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2de6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2de6a8:
    // 0x2de6a8: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x2de6a8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_2de6ac:
    // 0x2de6ac: 0x10000112  b           . + 4 + (0x112 << 2)
label_2de6b0:
    if (ctx->pc == 0x2DE6B0u) {
        ctx->pc = 0x2DE6B4u;
        goto label_2de6b4;
    }
    ctx->pc = 0x2DE6ACu;
    {
        const bool branch_taken_0x2de6ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2de6ac) {
            ctx->pc = 0x2DEAF8u;
            goto label_2deaf8;
        }
    }
    ctx->pc = 0x2DE6B4u;
label_2de6b4:
    // 0x2de6b4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2de6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2de6b8:
    // 0x2de6b8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2de6b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2de6bc:
    // 0x2de6bc: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2de6bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_2de6c0:
    // 0x2de6c0: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x2de6c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_2de6c4:
    // 0x2de6c4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2de6c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2de6c8:
    // 0x2de6c8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2de6c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_2de6cc:
    // 0x2de6cc: 0xc0965d0  jal         func_259740
label_2de6d0:
    if (ctx->pc == 0x2DE6D0u) {
        ctx->pc = 0x2DE6D4u;
        goto label_2de6d4;
    }
    ctx->pc = 0x2DE6CCu;
    SET_GPR_U32(ctx, 31, 0x2DE6D4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2DE6CCu, 0x2DE6D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE6D4u;
label_2de6d4:
    // 0x2de6d4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2de6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2de6d8:
    // 0x2de6d8: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2de6d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_2de6dc:
    // 0x2de6dc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2de6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2de6e0:
    // 0x2de6e0: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2de6e0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_2de6e4:
    // 0x2de6e4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2de6e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2de6e8:
    // 0x2de6e8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2de6e8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2de6ec:
    // 0x2de6ec: 0xc096b40  jal         func_25AD00
label_2de6f0:
    if (ctx->pc == 0x2DE6F0u) {
        ctx->pc = 0x2DE6F4u;
        goto label_2de6f4;
    }
    ctx->pc = 0x2DE6ECu;
    SET_GPR_U32(ctx, 31, 0x2DE6F4u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2DE6ECu, 0x2DE6F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE6F4u;
label_2de6f4:
    // 0x2de6f4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2de6f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2de6f8:
    // 0x2de6f8: 0xc05cd10  jal         func_173440
label_2de6fc:
    if (ctx->pc == 0x2DE6FCu) {
        ctx->pc = 0x2DE700u;
        goto label_2de700;
    }
    ctx->pc = 0x2DE6F8u;
    SET_GPR_U32(ctx, 31, 0x2DE700u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x2DE6F8u, 0x2DE700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE700u;
label_2de700:
    // 0x2de700: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2de700u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2de704:
    // 0x2de704: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2de704u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2de708:
    // 0x2de708: 0xc05cec4  jal         func_173B10
label_2de70c:
    if (ctx->pc == 0x2DE70Cu) {
        ctx->pc = 0x2DE710u;
        goto label_2de710;
    }
    ctx->pc = 0x2DE708u;
    SET_GPR_U32(ctx, 31, 0x2DE710u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x2DE708u, 0x2DE710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE710u;
label_2de710:
    // 0x2de710: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2de710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2de714:
    // 0x2de714: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2de714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2de718:
    // 0x2de718: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x2de718u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
label_2de71c:
    // 0x2de71c: 0x244512c0  addiu       $a1, $v0, 0x12C0
    ctx->pc = 0x2de71cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
label_2de720:
    // 0x2de720: 0xc05cf7c  jal         func_173DF0
label_2de724:
    if (ctx->pc == 0x2DE724u) {
        ctx->pc = 0x2DE728u;
        goto label_2de728;
    }
    ctx->pc = 0x2DE720u;
    SET_GPR_U32(ctx, 31, 0x2DE728u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x2DE720u, 0x2DE728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE728u;
label_2de728:
    // 0x2de728: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x2de728u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_2de72c:
    // 0x2de72c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2de72cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2de730:
    // 0x2de730: 0xc4411284  lwc1        $f1, 0x1284($v0)
    ctx->pc = 0x2de730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2de734:
    // 0x2de734: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2de734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2de738:
    // 0x2de738: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x2de738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2de73c:
    // 0x2de73c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2de73cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2de740:
    // 0x2de740: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x2de740u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_2de744:
    // 0x2de744: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2de744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2de748:
    // 0x2de748: 0xc4411280  lwc1        $f1, 0x1280($v0)
    ctx->pc = 0x2de748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2de74c:
    // 0x2de74c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2de74cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2de750:
    // 0x2de750: 0xc4401284  lwc1        $f0, 0x1284($v0)
    ctx->pc = 0x2de750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2de754:
    // 0x2de754: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2de754u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_2de758:
    // 0x2de758: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x2de758u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
label_2de75c:
    // 0x2de75c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2de75cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2de760:
    // 0x2de760: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x2de760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2de764:
    // 0x2de764: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x2de764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2de768:
    // 0x2de768: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2de768u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2de76c:
    // 0x2de76c: 0x0  nop
    ctx->pc = 0x2de76cu;
    // NOP
label_2de770:
    // 0x2de770: 0x4500000e  bc1f        . + 4 + (0xE << 2)
label_2de774:
    if (ctx->pc == 0x2DE774u) {
        ctx->pc = 0x2DE778u;
        goto label_2de778;
    }
    ctx->pc = 0x2DE770u;
    {
        const bool branch_taken_0x2de770 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2de770) {
            ctx->pc = 0x2DE7ACu;
            goto label_2de7ac;
        }
    }
    ctx->pc = 0x2DE778u;
label_2de778:
    // 0x2de778: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x2de778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2de77c:
    // 0x2de77c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2de77cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2de780:
    // 0x2de780: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x2de780u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_2de784:
    // 0x2de784: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x2de784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2de788:
    // 0x2de788: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2de788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2de78c:
    // 0x2de78c: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x2de78cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
label_2de790:
    // 0x2de790: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2de790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2de794:
    // 0x2de794: 0xa04010a8  sb          $zero, 0x10A8($v0)
    ctx->pc = 0x2de794u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 0));
label_2de798:
    // 0x2de798: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2de798u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2de79c:
    // 0x2de79c: 0xc0974dc  jal         func_25D370
label_2de7a0:
    if (ctx->pc == 0x2DE7A0u) {
        ctx->pc = 0x2DE7A4u;
        goto label_2de7a4;
    }
    ctx->pc = 0x2DE79Cu;
    SET_GPR_U32(ctx, 31, 0x2DE7A4u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2DE79Cu, 0x2DE7A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE7A4u;
label_2de7a4:
    // 0x2de7a4: 0x100000d4  b           . + 4 + (0xD4 << 2)
label_2de7a8:
    if (ctx->pc == 0x2DE7A8u) {
        ctx->pc = 0x2DE7ACu;
        goto label_2de7ac;
    }
    ctx->pc = 0x2DE7A4u;
    {
        const bool branch_taken_0x2de7a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2de7a4) {
            ctx->pc = 0x2DEAF8u;
            goto label_2deaf8;
        }
    }
    ctx->pc = 0x2DE7ACu;
label_2de7ac:
    // 0x2de7ac: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2de7acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2de7b0:
    // 0x2de7b0: 0xc0974dc  jal         func_25D370
label_2de7b4:
    if (ctx->pc == 0x2DE7B4u) {
        ctx->pc = 0x2DE7B8u;
        goto label_2de7b8;
    }
    ctx->pc = 0x2DE7B0u;
    SET_GPR_U32(ctx, 31, 0x2DE7B8u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2DE7B0u, 0x2DE7B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE7B8u;
label_2de7b8:
    // 0x2de7b8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2de7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2de7bc:
    // 0x2de7bc: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2de7bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_2de7c0:
    // 0x2de7c0: 0x106000cd  beqz        $v1, . + 4 + (0xCD << 2)
label_2de7c4:
    if (ctx->pc == 0x2DE7C4u) {
        ctx->pc = 0x2DE7C8u;
        goto label_2de7c8;
    }
    ctx->pc = 0x2DE7C0u;
    {
        const bool branch_taken_0x2de7c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2de7c0) {
            ctx->pc = 0x2DEAF8u;
            goto label_2deaf8;
        }
    }
    ctx->pc = 0x2DE7C8u;
label_2de7c8:
    // 0x2de7c8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2de7c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2de7cc:
    // 0x2de7cc: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x2de7ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_2de7d0:
    // 0x2de7d0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2de7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2de7d4:
    // 0x2de7d4: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x2de7d4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_2de7d8:
    // 0x2de7d8: 0x100000c7  b           . + 4 + (0xC7 << 2)
label_2de7dc:
    if (ctx->pc == 0x2DE7DCu) {
        ctx->pc = 0x2DE7E0u;
        goto label_2de7e0;
    }
    ctx->pc = 0x2DE7D8u;
    {
        const bool branch_taken_0x2de7d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2de7d8) {
            ctx->pc = 0x2DEAF8u;
            goto label_2deaf8;
        }
    }
    ctx->pc = 0x2DE7E0u;
label_2de7e0:
    // 0x2de7e0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2de7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2de7e4:
    // 0x2de7e4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2de7e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2de7e8:
    // 0x2de7e8: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2de7e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_2de7ec:
    // 0x2de7ec: 0x24060029  addiu       $a2, $zero, 0x29
    ctx->pc = 0x2de7ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
label_2de7f0:
    // 0x2de7f0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2de7f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2de7f4:
    // 0x2de7f4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2de7f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_2de7f8:
    // 0x2de7f8: 0xc0965d0  jal         func_259740
label_2de7fc:
    if (ctx->pc == 0x2DE7FCu) {
        ctx->pc = 0x2DE800u;
        goto label_2de800;
    }
    ctx->pc = 0x2DE7F8u;
    SET_GPR_U32(ctx, 31, 0x2DE800u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2DE7F8u, 0x2DE800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE800u;
label_2de800:
    // 0x2de800: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2de800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2de804:
    // 0x2de804: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2de804u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_2de808:
    // 0x2de808: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2de808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2de80c:
    // 0x2de80c: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2de80cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_2de810:
    // 0x2de810: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2de810u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2de814:
    // 0x2de814: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2de814u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2de818:
    // 0x2de818: 0xc096b40  jal         func_25AD00
label_2de81c:
    if (ctx->pc == 0x2DE81Cu) {
        ctx->pc = 0x2DE820u;
        goto label_2de820;
    }
    ctx->pc = 0x2DE818u;
    SET_GPR_U32(ctx, 31, 0x2DE820u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2DE818u, 0x2DE820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE820u;
label_2de820:
    // 0x2de820: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2de820u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2de824:
    // 0x2de824: 0xc05cd10  jal         func_173440
label_2de828:
    if (ctx->pc == 0x2DE828u) {
        ctx->pc = 0x2DE82Cu;
        goto label_2de82c;
    }
    ctx->pc = 0x2DE824u;
    SET_GPR_U32(ctx, 31, 0x2DE82Cu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x2DE824u, 0x2DE82Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE82Cu;
label_2de82c:
    // 0x2de82c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2de82cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2de830:
    // 0x2de830: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2de830u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2de834:
    // 0x2de834: 0xc05cec4  jal         func_173B10
label_2de838:
    if (ctx->pc == 0x2DE838u) {
        ctx->pc = 0x2DE83Cu;
        goto label_2de83c;
    }
    ctx->pc = 0x2DE834u;
    SET_GPR_U32(ctx, 31, 0x2DE83Cu);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x2DE834u, 0x2DE83Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE83Cu;
label_2de83c:
    // 0x2de83c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2de83cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2de840:
    // 0x2de840: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2de840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2de844:
    // 0x2de844: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x2de844u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
label_2de848:
    // 0x2de848: 0x244512c0  addiu       $a1, $v0, 0x12C0
    ctx->pc = 0x2de848u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
label_2de84c:
    // 0x2de84c: 0xc05cf7c  jal         func_173DF0
label_2de850:
    if (ctx->pc == 0x2DE850u) {
        ctx->pc = 0x2DE854u;
        goto label_2de854;
    }
    ctx->pc = 0x2DE84Cu;
    SET_GPR_U32(ctx, 31, 0x2DE854u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x2DE84Cu, 0x2DE854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE854u;
label_2de854:
    // 0x2de854: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x2de854u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_2de858:
    // 0x2de858: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2de858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2de85c:
    // 0x2de85c: 0xc4411284  lwc1        $f1, 0x1284($v0)
    ctx->pc = 0x2de85cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2de860:
    // 0x2de860: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2de860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2de864:
    // 0x2de864: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x2de864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2de868:
    // 0x2de868: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2de868u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2de86c:
    // 0x2de86c: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x2de86cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_2de870:
    // 0x2de870: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2de870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2de874:
    // 0x2de874: 0xc4411280  lwc1        $f1, 0x1280($v0)
    ctx->pc = 0x2de874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2de878:
    // 0x2de878: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2de878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2de87c:
    // 0x2de87c: 0xc4401284  lwc1        $f0, 0x1284($v0)
    ctx->pc = 0x2de87cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2de880:
    // 0x2de880: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2de880u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_2de884:
    // 0x2de884: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x2de884u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
label_2de888:
    // 0x2de888: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2de888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2de88c:
    // 0x2de88c: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x2de88cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2de890:
    // 0x2de890: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x2de890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2de894:
    // 0x2de894: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2de894u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2de898:
    // 0x2de898: 0x0  nop
    ctx->pc = 0x2de898u;
    // NOP
label_2de89c:
    // 0x2de89c: 0x45000009  bc1f        . + 4 + (0x9 << 2)
label_2de8a0:
    if (ctx->pc == 0x2DE8A0u) {
        ctx->pc = 0x2DE8A4u;
        goto label_2de8a4;
    }
    ctx->pc = 0x2DE89Cu;
    {
        const bool branch_taken_0x2de89c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2de89c) {
            ctx->pc = 0x2DE8C4u;
            goto label_2de8c4;
        }
    }
    ctx->pc = 0x2DE8A4u;
label_2de8a4:
    // 0x2de8a4: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x2de8a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2de8a8:
    // 0x2de8a8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2de8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2de8ac:
    // 0x2de8ac: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x2de8acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_2de8b0:
    // 0x2de8b0: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x2de8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2de8b4:
    // 0x2de8b4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2de8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2de8b8:
    // 0x2de8b8: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x2de8b8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
label_2de8bc:
    // 0x2de8bc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2de8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2de8c0:
    // 0x2de8c0: 0xa04010a8  sb          $zero, 0x10A8($v0)
    ctx->pc = 0x2de8c0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 0));
label_2de8c4:
    // 0x2de8c4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2de8c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2de8c8:
    // 0x2de8c8: 0xc0974dc  jal         func_25D370
label_2de8cc:
    if (ctx->pc == 0x2DE8CCu) {
        ctx->pc = 0x2DE8D0u;
        goto label_2de8d0;
    }
    ctx->pc = 0x2DE8C8u;
    SET_GPR_U32(ctx, 31, 0x2DE8D0u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2DE8C8u, 0x2DE8D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE8D0u;
label_2de8d0:
    // 0x2de8d0: 0x10000089  b           . + 4 + (0x89 << 2)
label_2de8d4:
    if (ctx->pc == 0x2DE8D4u) {
        ctx->pc = 0x2DE8D8u;
        goto label_2de8d8;
    }
    ctx->pc = 0x2DE8D0u;
    {
        const bool branch_taken_0x2de8d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2de8d0) {
            ctx->pc = 0x2DEAF8u;
            goto label_2deaf8;
        }
    }
    ctx->pc = 0x2DE8D8u;
label_2de8d8:
    // 0x2de8d8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2de8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2de8dc:
    // 0x2de8dc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2de8dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2de8e0:
    // 0x2de8e0: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2de8e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_2de8e4:
    // 0x2de8e4: 0x2406002a  addiu       $a2, $zero, 0x2A
    ctx->pc = 0x2de8e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
label_2de8e8:
    // 0x2de8e8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2de8e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2de8ec:
    // 0x2de8ec: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2de8ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_2de8f0:
    // 0x2de8f0: 0xc0965d0  jal         func_259740
label_2de8f4:
    if (ctx->pc == 0x2DE8F4u) {
        ctx->pc = 0x2DE8F8u;
        goto label_2de8f8;
    }
    ctx->pc = 0x2DE8F0u;
    SET_GPR_U32(ctx, 31, 0x2DE8F8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2DE8F0u, 0x2DE8F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE8F8u;
label_2de8f8:
    // 0x2de8f8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2de8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2de8fc:
    // 0x2de8fc: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2de8fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_2de900:
    // 0x2de900: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2de900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2de904:
    // 0x2de904: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2de904u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_2de908:
    // 0x2de908: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2de908u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2de90c:
    // 0x2de90c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2de90cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2de910:
    // 0x2de910: 0xc096b40  jal         func_25AD00
label_2de914:
    if (ctx->pc == 0x2DE914u) {
        ctx->pc = 0x2DE918u;
        goto label_2de918;
    }
    ctx->pc = 0x2DE910u;
    SET_GPR_U32(ctx, 31, 0x2DE918u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2DE910u, 0x2DE918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE918u;
label_2de918:
    // 0x2de918: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2de918u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2de91c:
    // 0x2de91c: 0xc05cd10  jal         func_173440
label_2de920:
    if (ctx->pc == 0x2DE920u) {
        ctx->pc = 0x2DE924u;
        goto label_2de924;
    }
    ctx->pc = 0x2DE91Cu;
    SET_GPR_U32(ctx, 31, 0x2DE924u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x2DE91Cu, 0x2DE924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE924u;
label_2de924:
    // 0x2de924: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2de924u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2de928:
    // 0x2de928: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2de928u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2de92c:
    // 0x2de92c: 0xc05cec4  jal         func_173B10
label_2de930:
    if (ctx->pc == 0x2DE930u) {
        ctx->pc = 0x2DE934u;
        goto label_2de934;
    }
    ctx->pc = 0x2DE92Cu;
    SET_GPR_U32(ctx, 31, 0x2DE934u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x2DE92Cu, 0x2DE934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE934u;
label_2de934:
    // 0x2de934: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2de934u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2de938:
    // 0x2de938: 0xc0974dc  jal         func_25D370
label_2de93c:
    if (ctx->pc == 0x2DE93Cu) {
        ctx->pc = 0x2DE940u;
        goto label_2de940;
    }
    ctx->pc = 0x2DE938u;
    SET_GPR_U32(ctx, 31, 0x2DE940u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2DE938u, 0x2DE940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE940u;
label_2de940:
    // 0x2de940: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2de940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2de944:
    // 0x2de944: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2de944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2de948:
    // 0x2de948: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x2de948u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
label_2de94c:
    // 0x2de94c: 0x244512c0  addiu       $a1, $v0, 0x12C0
    ctx->pc = 0x2de94cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
label_2de950:
    // 0x2de950: 0xc05cf7c  jal         func_173DF0
label_2de954:
    if (ctx->pc == 0x2DE954u) {
        ctx->pc = 0x2DE958u;
        goto label_2de958;
    }
    ctx->pc = 0x2DE950u;
    SET_GPR_U32(ctx, 31, 0x2DE958u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x2DE950u, 0x2DE958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE958u;
label_2de958:
    // 0x2de958: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x2de958u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_2de95c:
    // 0x2de95c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2de95cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2de960:
    // 0x2de960: 0xc4610124  lwc1        $f1, 0x124($v1)
    ctx->pc = 0x2de960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2de964:
    // 0x2de964: 0x3c03437a  lui         $v1, 0x437A
    ctx->pc = 0x2de964u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17274 << 16));
label_2de968:
    // 0x2de968: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2de968u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2de96c:
    // 0x2de96c: 0x0  nop
    ctx->pc = 0x2de96cu;
    // NOP
label_2de970:
    // 0x2de970: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2de970u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2de974:
    // 0x2de974: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x2de974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2de978:
    // 0x2de978: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2de978u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2de97c:
    // 0x2de97c: 0x0  nop
    ctx->pc = 0x2de97cu;
    // NOP
label_2de980:
    // 0x2de980: 0x4500001c  bc1f        . + 4 + (0x1C << 2)
label_2de984:
    if (ctx->pc == 0x2DE984u) {
        ctx->pc = 0x2DE988u;
        goto label_2de988;
    }
    ctx->pc = 0x2DE980u;
    {
        const bool branch_taken_0x2de980 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2de980) {
            ctx->pc = 0x2DE9F4u;
            goto label_2de9f4;
        }
    }
    ctx->pc = 0x2DE988u;
label_2de988:
    // 0x2de988: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2de988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2de98c:
    // 0x2de98c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2de98cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2de990:
    // 0x2de990: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2de990u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2de994:
    // 0x2de994: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x2de994u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
label_2de998:
    // 0x2de998: 0x24460170  addiu       $a2, $v0, 0x170
    ctx->pc = 0x2de998u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 368));
label_2de99c:
    // 0x2de99c: 0xc0675b0  jal         func_19D6C0
label_2de9a0:
    if (ctx->pc == 0x2DE9A0u) {
        ctx->pc = 0x2DE9A4u;
        goto label_2de9a4;
    }
    ctx->pc = 0x2DE99Cu;
    SET_GPR_U32(ctx, 31, 0x2DE9A4u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x2DE99Cu, 0x2DE9A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE9A4u;
label_2de9a4:
    // 0x2de9a4: 0xc7ac0010  lwc1        $f12, 0x10($sp)
    ctx->pc = 0x2de9a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2de9a8:
    // 0x2de9a8: 0xc7ad0018  lwc1        $f13, 0x18($sp)
    ctx->pc = 0x2de9a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_2de9ac:
    // 0x2de9ac: 0xc0455e6  jal         func_115798
label_2de9b0:
    if (ctx->pc == 0x2DE9B0u) {
        ctx->pc = 0x2DE9B4u;
        goto label_2de9b4;
    }
    ctx->pc = 0x2DE9ACu;
    SET_GPR_U32(ctx, 31, 0x2DE9B4u);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x2DE9ACu, 0x2DE9B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE9B4u;
label_2de9b4:
    // 0x2de9b4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2de9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2de9b8:
    // 0x2de9b8: 0xe4601290  swc1        $f0, 0x1290($v1)
    ctx->pc = 0x2de9b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4752), bits); }
label_2de9bc:
    // 0x2de9bc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2de9bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2de9c0:
    // 0x2de9c0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2de9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2de9c4:
    // 0x2de9c4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2de9c4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_2de9c8:
    // 0x2de9c8: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x2de9c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_2de9cc:
    // 0x2de9cc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2de9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2de9d0:
    // 0x2de9d0: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2de9d0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_2de9d4:
    // 0x2de9d4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2de9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2de9d8:
    // 0x2de9d8: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2de9d8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_2de9dc:
    // 0x2de9dc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2de9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2de9e0:
    // 0x2de9e0: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2de9e0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_2de9e4:
    // 0x2de9e4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2de9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2de9e8:
    // 0x2de9e8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2de9e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_2de9ec:
    // 0x2de9ec: 0x10000042  b           . + 4 + (0x42 << 2)
label_2de9f0:
    if (ctx->pc == 0x2DE9F0u) {
        ctx->pc = 0x2DE9F4u;
        goto label_2de9f4;
    }
    ctx->pc = 0x2DE9ECu;
    {
        const bool branch_taken_0x2de9ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2de9ec) {
            ctx->pc = 0x2DEAF8u;
            goto label_2deaf8;
        }
    }
    ctx->pc = 0x2DE9F4u;
label_2de9f4:
    // 0x2de9f4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2de9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2de9f8:
    // 0x2de9f8: 0x8c6312c4  lw          $v1, 0x12C4($v1)
    ctx->pc = 0x2de9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4804)));
label_2de9fc:
    // 0x2de9fc: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x2de9fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
label_2dea00:
    // 0x2dea00: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
label_2dea04:
    if (ctx->pc == 0x2DEA04u) {
        ctx->pc = 0x2DEA08u;
        goto label_2dea08;
    }
    ctx->pc = 0x2DEA00u;
    {
        const bool branch_taken_0x2dea00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dea00) {
            ctx->pc = 0x2DEA60u;
            goto label_2dea60;
        }
    }
    ctx->pc = 0x2DEA08u;
label_2dea08:
    // 0x2dea08: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2dea08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2dea0c:
    // 0x2dea0c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2dea0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2dea10:
    // 0x2dea10: 0xc46c12d0  lwc1        $f12, 0x12D0($v1)
    ctx->pc = 0x2dea10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2dea14:
    // 0x2dea14: 0xc44d12d8  lwc1        $f13, 0x12D8($v0)
    ctx->pc = 0x2dea14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_2dea18:
    // 0x2dea18: 0xc0455e6  jal         func_115798
label_2dea1c:
    if (ctx->pc == 0x2DEA1Cu) {
        ctx->pc = 0x2DEA20u;
        goto label_2dea20;
    }
    ctx->pc = 0x2DEA18u;
    SET_GPR_U32(ctx, 31, 0x2DEA20u);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x2DEA18u, 0x2DEA20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DEA20u;
label_2dea20:
    // 0x2dea20: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2dea20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2dea24:
    // 0x2dea24: 0xe4601290  swc1        $f0, 0x1290($v1)
    ctx->pc = 0x2dea24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4752), bits); }
label_2dea28:
    // 0x2dea28: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2dea28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2dea2c:
    // 0x2dea2c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2dea2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2dea30:
    // 0x2dea30: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2dea30u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_2dea34:
    // 0x2dea34: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x2dea34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_2dea38:
    // 0x2dea38: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2dea38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2dea3c:
    // 0x2dea3c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2dea3cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_2dea40:
    // 0x2dea40: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2dea40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2dea44:
    // 0x2dea44: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2dea44u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_2dea48:
    // 0x2dea48: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2dea48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2dea4c:
    // 0x2dea4c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2dea4cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_2dea50:
    // 0x2dea50: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2dea50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2dea54:
    // 0x2dea54: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2dea54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_2dea58:
    // 0x2dea58: 0x10000027  b           . + 4 + (0x27 << 2)
label_2dea5c:
    if (ctx->pc == 0x2DEA5Cu) {
        ctx->pc = 0x2DEA60u;
        goto label_2dea60;
    }
    ctx->pc = 0x2DEA58u;
    {
        const bool branch_taken_0x2dea58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dea58) {
            ctx->pc = 0x2DEAF8u;
            goto label_2deaf8;
        }
    }
    ctx->pc = 0x2DEA60u;
label_2dea60:
    // 0x2dea60: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2dea60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2dea64:
    // 0x2dea64: 0x906309df  lbu         $v1, 0x9DF($v1)
    ctx->pc = 0x2dea64u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2527)));
label_2dea68:
    // 0x2dea68: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2dea68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_2dea6c:
    // 0x2dea6c: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x2dea6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
label_2dea70:
    // 0x2dea70: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
label_2dea74:
    if (ctx->pc == 0x2DEA74u) {
        ctx->pc = 0x2DEA78u;
        goto label_2dea78;
    }
    ctx->pc = 0x2DEA70u;
    {
        const bool branch_taken_0x2dea70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dea70) {
            ctx->pc = 0x2DEAB0u;
            goto label_2deab0;
        }
    }
    ctx->pc = 0x2DEA78u;
label_2dea78:
    // 0x2dea78: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2dea78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2dea7c:
    // 0x2dea7c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2dea7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2dea80:
    // 0x2dea80: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2dea80u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_2dea84:
    // 0x2dea84: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2dea84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2dea88:
    // 0x2dea88: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2dea88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2dea8c:
    // 0x2dea8c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2dea8cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_2dea90:
    // 0x2dea90: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2dea90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2dea94:
    // 0x2dea94: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2dea94u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_2dea98:
    // 0x2dea98: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2dea98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2dea9c:
    // 0x2dea9c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2dea9cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_2deaa0:
    // 0x2deaa0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2deaa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2deaa4:
    // 0x2deaa4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2deaa4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_2deaa8:
    // 0x2deaa8: 0x10000013  b           . + 4 + (0x13 << 2)
label_2deaac:
    if (ctx->pc == 0x2DEAACu) {
        ctx->pc = 0x2DEAB0u;
        goto label_2deab0;
    }
    ctx->pc = 0x2DEAA8u;
    {
        const bool branch_taken_0x2deaa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2deaa8) {
            ctx->pc = 0x2DEAF8u;
            goto label_2deaf8;
        }
    }
    ctx->pc = 0x2DEAB0u;
label_2deab0:
    // 0x2deab0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2deab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2deab4:
    // 0x2deab4: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2deab4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_2deab8:
    // 0x2deab8: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
label_2deabc:
    if (ctx->pc == 0x2DEABCu) {
        ctx->pc = 0x2DEAC0u;
        goto label_2deac0;
    }
    ctx->pc = 0x2DEAB8u;
    {
        const bool branch_taken_0x2deab8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2deab8) {
            ctx->pc = 0x2DEAF8u;
            goto label_2deaf8;
        }
    }
    ctx->pc = 0x2DEAC0u;
label_2deac0:
    // 0x2deac0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2deac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2deac4:
    // 0x2deac4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2deac4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2deac8:
    // 0x2deac8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2deac8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_2deacc:
    // 0x2deacc: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2deaccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2dead0:
    // 0x2dead0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2dead0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2dead4:
    // 0x2dead4: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2dead4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_2dead8:
    // 0x2dead8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2dead8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2deadc:
    // 0x2deadc: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2deadcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_2deae0:
    // 0x2deae0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2deae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2deae4:
    // 0x2deae4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2deae4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_2deae8:
    // 0x2deae8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2deae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2deaec:
    // 0x2deaec: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2deaecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_2deaf0:
    // 0x2deaf0: 0x10000001  b           . + 4 + (0x1 << 2)
label_2deaf4:
    if (ctx->pc == 0x2DEAF4u) {
        ctx->pc = 0x2DEAF8u;
        goto label_2deaf8;
    }
    ctx->pc = 0x2DEAF0u;
    {
        const bool branch_taken_0x2deaf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2deaf0) {
            ctx->pc = 0x2DEAF8u;
            goto label_2deaf8;
        }
    }
    ctx->pc = 0x2DEAF8u;
label_2deaf8:
    // 0x2deaf8: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2deaf8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2deafc:
    // 0x2deafc: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2deafcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_2deb00:
    // 0x2deb00: 0x3e00008  jr          $ra
label_2deb04:
    if (ctx->pc == 0x2DEB04u) {
        ctx->pc = 0x2DEB08u;
        goto label_fallthrough_0x2deb00;
    }
    ctx->pc = 0x2DEB00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DEB00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2deb00:
    ctx->pc = 0x2DEB08u;
}
