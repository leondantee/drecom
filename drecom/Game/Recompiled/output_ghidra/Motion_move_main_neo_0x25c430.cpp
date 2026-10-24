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

// Function: Motion_move_main_neo
// Address: 0x25c430 - 0x25d1d8
void Motion_move_main_neo_0x25c430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Motion_move_main_neo_0x25c430");
#endif

    switch (ctx->pc) {
        case 0x25c430u: goto label_25c430;
        case 0x25c434u: goto label_25c434;
        case 0x25c438u: goto label_25c438;
        case 0x25c43cu: goto label_25c43c;
        case 0x25c440u: goto label_25c440;
        case 0x25c444u: goto label_25c444;
        case 0x25c448u: goto label_25c448;
        case 0x25c44cu: goto label_25c44c;
        case 0x25c450u: goto label_25c450;
        case 0x25c454u: goto label_25c454;
        case 0x25c458u: goto label_25c458;
        case 0x25c45cu: goto label_25c45c;
        case 0x25c460u: goto label_25c460;
        case 0x25c464u: goto label_25c464;
        case 0x25c468u: goto label_25c468;
        case 0x25c46cu: goto label_25c46c;
        case 0x25c470u: goto label_25c470;
        case 0x25c474u: goto label_25c474;
        case 0x25c478u: goto label_25c478;
        case 0x25c47cu: goto label_25c47c;
        case 0x25c480u: goto label_25c480;
        case 0x25c484u: goto label_25c484;
        case 0x25c488u: goto label_25c488;
        case 0x25c48cu: goto label_25c48c;
        case 0x25c490u: goto label_25c490;
        case 0x25c494u: goto label_25c494;
        case 0x25c498u: goto label_25c498;
        case 0x25c49cu: goto label_25c49c;
        case 0x25c4a0u: goto label_25c4a0;
        case 0x25c4a4u: goto label_25c4a4;
        case 0x25c4a8u: goto label_25c4a8;
        case 0x25c4acu: goto label_25c4ac;
        case 0x25c4b0u: goto label_25c4b0;
        case 0x25c4b4u: goto label_25c4b4;
        case 0x25c4b8u: goto label_25c4b8;
        case 0x25c4bcu: goto label_25c4bc;
        case 0x25c4c0u: goto label_25c4c0;
        case 0x25c4c4u: goto label_25c4c4;
        case 0x25c4c8u: goto label_25c4c8;
        case 0x25c4ccu: goto label_25c4cc;
        case 0x25c4d0u: goto label_25c4d0;
        case 0x25c4d4u: goto label_25c4d4;
        case 0x25c4d8u: goto label_25c4d8;
        case 0x25c4dcu: goto label_25c4dc;
        case 0x25c4e0u: goto label_25c4e0;
        case 0x25c4e4u: goto label_25c4e4;
        case 0x25c4e8u: goto label_25c4e8;
        case 0x25c4ecu: goto label_25c4ec;
        case 0x25c4f0u: goto label_25c4f0;
        case 0x25c4f4u: goto label_25c4f4;
        case 0x25c4f8u: goto label_25c4f8;
        case 0x25c4fcu: goto label_25c4fc;
        case 0x25c500u: goto label_25c500;
        case 0x25c504u: goto label_25c504;
        case 0x25c508u: goto label_25c508;
        case 0x25c50cu: goto label_25c50c;
        case 0x25c510u: goto label_25c510;
        case 0x25c514u: goto label_25c514;
        case 0x25c518u: goto label_25c518;
        case 0x25c51cu: goto label_25c51c;
        case 0x25c520u: goto label_25c520;
        case 0x25c524u: goto label_25c524;
        case 0x25c528u: goto label_25c528;
        case 0x25c52cu: goto label_25c52c;
        case 0x25c530u: goto label_25c530;
        case 0x25c534u: goto label_25c534;
        case 0x25c538u: goto label_25c538;
        case 0x25c53cu: goto label_25c53c;
        case 0x25c540u: goto label_25c540;
        case 0x25c544u: goto label_25c544;
        case 0x25c548u: goto label_25c548;
        case 0x25c54cu: goto label_25c54c;
        case 0x25c550u: goto label_25c550;
        case 0x25c554u: goto label_25c554;
        case 0x25c558u: goto label_25c558;
        case 0x25c55cu: goto label_25c55c;
        case 0x25c560u: goto label_25c560;
        case 0x25c564u: goto label_25c564;
        case 0x25c568u: goto label_25c568;
        case 0x25c56cu: goto label_25c56c;
        case 0x25c570u: goto label_25c570;
        case 0x25c574u: goto label_25c574;
        case 0x25c578u: goto label_25c578;
        case 0x25c57cu: goto label_25c57c;
        case 0x25c580u: goto label_25c580;
        case 0x25c584u: goto label_25c584;
        case 0x25c588u: goto label_25c588;
        case 0x25c58cu: goto label_25c58c;
        case 0x25c590u: goto label_25c590;
        case 0x25c594u: goto label_25c594;
        case 0x25c598u: goto label_25c598;
        case 0x25c59cu: goto label_25c59c;
        case 0x25c5a0u: goto label_25c5a0;
        case 0x25c5a4u: goto label_25c5a4;
        case 0x25c5a8u: goto label_25c5a8;
        case 0x25c5acu: goto label_25c5ac;
        case 0x25c5b0u: goto label_25c5b0;
        case 0x25c5b4u: goto label_25c5b4;
        case 0x25c5b8u: goto label_25c5b8;
        case 0x25c5bcu: goto label_25c5bc;
        case 0x25c5c0u: goto label_25c5c0;
        case 0x25c5c4u: goto label_25c5c4;
        case 0x25c5c8u: goto label_25c5c8;
        case 0x25c5ccu: goto label_25c5cc;
        case 0x25c5d0u: goto label_25c5d0;
        case 0x25c5d4u: goto label_25c5d4;
        case 0x25c5d8u: goto label_25c5d8;
        case 0x25c5dcu: goto label_25c5dc;
        case 0x25c5e0u: goto label_25c5e0;
        case 0x25c5e4u: goto label_25c5e4;
        case 0x25c5e8u: goto label_25c5e8;
        case 0x25c5ecu: goto label_25c5ec;
        case 0x25c5f0u: goto label_25c5f0;
        case 0x25c5f4u: goto label_25c5f4;
        case 0x25c5f8u: goto label_25c5f8;
        case 0x25c5fcu: goto label_25c5fc;
        case 0x25c600u: goto label_25c600;
        case 0x25c604u: goto label_25c604;
        case 0x25c608u: goto label_25c608;
        case 0x25c60cu: goto label_25c60c;
        case 0x25c610u: goto label_25c610;
        case 0x25c614u: goto label_25c614;
        case 0x25c618u: goto label_25c618;
        case 0x25c61cu: goto label_25c61c;
        case 0x25c620u: goto label_25c620;
        case 0x25c624u: goto label_25c624;
        case 0x25c628u: goto label_25c628;
        case 0x25c62cu: goto label_25c62c;
        case 0x25c630u: goto label_25c630;
        case 0x25c634u: goto label_25c634;
        case 0x25c638u: goto label_25c638;
        case 0x25c63cu: goto label_25c63c;
        case 0x25c640u: goto label_25c640;
        case 0x25c644u: goto label_25c644;
        case 0x25c648u: goto label_25c648;
        case 0x25c64cu: goto label_25c64c;
        case 0x25c650u: goto label_25c650;
        case 0x25c654u: goto label_25c654;
        case 0x25c658u: goto label_25c658;
        case 0x25c65cu: goto label_25c65c;
        case 0x25c660u: goto label_25c660;
        case 0x25c664u: goto label_25c664;
        case 0x25c668u: goto label_25c668;
        case 0x25c66cu: goto label_25c66c;
        case 0x25c670u: goto label_25c670;
        case 0x25c674u: goto label_25c674;
        case 0x25c678u: goto label_25c678;
        case 0x25c67cu: goto label_25c67c;
        case 0x25c680u: goto label_25c680;
        case 0x25c684u: goto label_25c684;
        case 0x25c688u: goto label_25c688;
        case 0x25c68cu: goto label_25c68c;
        case 0x25c690u: goto label_25c690;
        case 0x25c694u: goto label_25c694;
        case 0x25c698u: goto label_25c698;
        case 0x25c69cu: goto label_25c69c;
        case 0x25c6a0u: goto label_25c6a0;
        case 0x25c6a4u: goto label_25c6a4;
        case 0x25c6a8u: goto label_25c6a8;
        case 0x25c6acu: goto label_25c6ac;
        case 0x25c6b0u: goto label_25c6b0;
        case 0x25c6b4u: goto label_25c6b4;
        case 0x25c6b8u: goto label_25c6b8;
        case 0x25c6bcu: goto label_25c6bc;
        case 0x25c6c0u: goto label_25c6c0;
        case 0x25c6c4u: goto label_25c6c4;
        case 0x25c6c8u: goto label_25c6c8;
        case 0x25c6ccu: goto label_25c6cc;
        case 0x25c6d0u: goto label_25c6d0;
        case 0x25c6d4u: goto label_25c6d4;
        case 0x25c6d8u: goto label_25c6d8;
        case 0x25c6dcu: goto label_25c6dc;
        case 0x25c6e0u: goto label_25c6e0;
        case 0x25c6e4u: goto label_25c6e4;
        case 0x25c6e8u: goto label_25c6e8;
        case 0x25c6ecu: goto label_25c6ec;
        case 0x25c6f0u: goto label_25c6f0;
        case 0x25c6f4u: goto label_25c6f4;
        case 0x25c6f8u: goto label_25c6f8;
        case 0x25c6fcu: goto label_25c6fc;
        case 0x25c700u: goto label_25c700;
        case 0x25c704u: goto label_25c704;
        case 0x25c708u: goto label_25c708;
        case 0x25c70cu: goto label_25c70c;
        case 0x25c710u: goto label_25c710;
        case 0x25c714u: goto label_25c714;
        case 0x25c718u: goto label_25c718;
        case 0x25c71cu: goto label_25c71c;
        case 0x25c720u: goto label_25c720;
        case 0x25c724u: goto label_25c724;
        case 0x25c728u: goto label_25c728;
        case 0x25c72cu: goto label_25c72c;
        case 0x25c730u: goto label_25c730;
        case 0x25c734u: goto label_25c734;
        case 0x25c738u: goto label_25c738;
        case 0x25c73cu: goto label_25c73c;
        case 0x25c740u: goto label_25c740;
        case 0x25c744u: goto label_25c744;
        case 0x25c748u: goto label_25c748;
        case 0x25c74cu: goto label_25c74c;
        case 0x25c750u: goto label_25c750;
        case 0x25c754u: goto label_25c754;
        case 0x25c758u: goto label_25c758;
        case 0x25c75cu: goto label_25c75c;
        case 0x25c760u: goto label_25c760;
        case 0x25c764u: goto label_25c764;
        case 0x25c768u: goto label_25c768;
        case 0x25c76cu: goto label_25c76c;
        case 0x25c770u: goto label_25c770;
        case 0x25c774u: goto label_25c774;
        case 0x25c778u: goto label_25c778;
        case 0x25c77cu: goto label_25c77c;
        case 0x25c780u: goto label_25c780;
        case 0x25c784u: goto label_25c784;
        case 0x25c788u: goto label_25c788;
        case 0x25c78cu: goto label_25c78c;
        case 0x25c790u: goto label_25c790;
        case 0x25c794u: goto label_25c794;
        case 0x25c798u: goto label_25c798;
        case 0x25c79cu: goto label_25c79c;
        case 0x25c7a0u: goto label_25c7a0;
        case 0x25c7a4u: goto label_25c7a4;
        case 0x25c7a8u: goto label_25c7a8;
        case 0x25c7acu: goto label_25c7ac;
        case 0x25c7b0u: goto label_25c7b0;
        case 0x25c7b4u: goto label_25c7b4;
        case 0x25c7b8u: goto label_25c7b8;
        case 0x25c7bcu: goto label_25c7bc;
        case 0x25c7c0u: goto label_25c7c0;
        case 0x25c7c4u: goto label_25c7c4;
        case 0x25c7c8u: goto label_25c7c8;
        case 0x25c7ccu: goto label_25c7cc;
        case 0x25c7d0u: goto label_25c7d0;
        case 0x25c7d4u: goto label_25c7d4;
        case 0x25c7d8u: goto label_25c7d8;
        case 0x25c7dcu: goto label_25c7dc;
        case 0x25c7e0u: goto label_25c7e0;
        case 0x25c7e4u: goto label_25c7e4;
        case 0x25c7e8u: goto label_25c7e8;
        case 0x25c7ecu: goto label_25c7ec;
        case 0x25c7f0u: goto label_25c7f0;
        case 0x25c7f4u: goto label_25c7f4;
        case 0x25c7f8u: goto label_25c7f8;
        case 0x25c7fcu: goto label_25c7fc;
        case 0x25c800u: goto label_25c800;
        case 0x25c804u: goto label_25c804;
        case 0x25c808u: goto label_25c808;
        case 0x25c80cu: goto label_25c80c;
        case 0x25c810u: goto label_25c810;
        case 0x25c814u: goto label_25c814;
        case 0x25c818u: goto label_25c818;
        case 0x25c81cu: goto label_25c81c;
        case 0x25c820u: goto label_25c820;
        case 0x25c824u: goto label_25c824;
        case 0x25c828u: goto label_25c828;
        case 0x25c82cu: goto label_25c82c;
        case 0x25c830u: goto label_25c830;
        case 0x25c834u: goto label_25c834;
        case 0x25c838u: goto label_25c838;
        case 0x25c83cu: goto label_25c83c;
        case 0x25c840u: goto label_25c840;
        case 0x25c844u: goto label_25c844;
        case 0x25c848u: goto label_25c848;
        case 0x25c84cu: goto label_25c84c;
        case 0x25c850u: goto label_25c850;
        case 0x25c854u: goto label_25c854;
        case 0x25c858u: goto label_25c858;
        case 0x25c85cu: goto label_25c85c;
        case 0x25c860u: goto label_25c860;
        case 0x25c864u: goto label_25c864;
        case 0x25c868u: goto label_25c868;
        case 0x25c86cu: goto label_25c86c;
        case 0x25c870u: goto label_25c870;
        case 0x25c874u: goto label_25c874;
        case 0x25c878u: goto label_25c878;
        case 0x25c87cu: goto label_25c87c;
        case 0x25c880u: goto label_25c880;
        case 0x25c884u: goto label_25c884;
        case 0x25c888u: goto label_25c888;
        case 0x25c88cu: goto label_25c88c;
        case 0x25c890u: goto label_25c890;
        case 0x25c894u: goto label_25c894;
        case 0x25c898u: goto label_25c898;
        case 0x25c89cu: goto label_25c89c;
        case 0x25c8a0u: goto label_25c8a0;
        case 0x25c8a4u: goto label_25c8a4;
        case 0x25c8a8u: goto label_25c8a8;
        case 0x25c8acu: goto label_25c8ac;
        case 0x25c8b0u: goto label_25c8b0;
        case 0x25c8b4u: goto label_25c8b4;
        case 0x25c8b8u: goto label_25c8b8;
        case 0x25c8bcu: goto label_25c8bc;
        case 0x25c8c0u: goto label_25c8c0;
        case 0x25c8c4u: goto label_25c8c4;
        case 0x25c8c8u: goto label_25c8c8;
        case 0x25c8ccu: goto label_25c8cc;
        case 0x25c8d0u: goto label_25c8d0;
        case 0x25c8d4u: goto label_25c8d4;
        case 0x25c8d8u: goto label_25c8d8;
        case 0x25c8dcu: goto label_25c8dc;
        case 0x25c8e0u: goto label_25c8e0;
        case 0x25c8e4u: goto label_25c8e4;
        case 0x25c8e8u: goto label_25c8e8;
        case 0x25c8ecu: goto label_25c8ec;
        case 0x25c8f0u: goto label_25c8f0;
        case 0x25c8f4u: goto label_25c8f4;
        case 0x25c8f8u: goto label_25c8f8;
        case 0x25c8fcu: goto label_25c8fc;
        case 0x25c900u: goto label_25c900;
        case 0x25c904u: goto label_25c904;
        case 0x25c908u: goto label_25c908;
        case 0x25c90cu: goto label_25c90c;
        case 0x25c910u: goto label_25c910;
        case 0x25c914u: goto label_25c914;
        case 0x25c918u: goto label_25c918;
        case 0x25c91cu: goto label_25c91c;
        case 0x25c920u: goto label_25c920;
        case 0x25c924u: goto label_25c924;
        case 0x25c928u: goto label_25c928;
        case 0x25c92cu: goto label_25c92c;
        case 0x25c930u: goto label_25c930;
        case 0x25c934u: goto label_25c934;
        case 0x25c938u: goto label_25c938;
        case 0x25c93cu: goto label_25c93c;
        case 0x25c940u: goto label_25c940;
        case 0x25c944u: goto label_25c944;
        case 0x25c948u: goto label_25c948;
        case 0x25c94cu: goto label_25c94c;
        case 0x25c950u: goto label_25c950;
        case 0x25c954u: goto label_25c954;
        case 0x25c958u: goto label_25c958;
        case 0x25c95cu: goto label_25c95c;
        case 0x25c960u: goto label_25c960;
        case 0x25c964u: goto label_25c964;
        case 0x25c968u: goto label_25c968;
        case 0x25c96cu: goto label_25c96c;
        case 0x25c970u: goto label_25c970;
        case 0x25c974u: goto label_25c974;
        case 0x25c978u: goto label_25c978;
        case 0x25c97cu: goto label_25c97c;
        case 0x25c980u: goto label_25c980;
        case 0x25c984u: goto label_25c984;
        case 0x25c988u: goto label_25c988;
        case 0x25c98cu: goto label_25c98c;
        case 0x25c990u: goto label_25c990;
        case 0x25c994u: goto label_25c994;
        case 0x25c998u: goto label_25c998;
        case 0x25c99cu: goto label_25c99c;
        case 0x25c9a0u: goto label_25c9a0;
        case 0x25c9a4u: goto label_25c9a4;
        case 0x25c9a8u: goto label_25c9a8;
        case 0x25c9acu: goto label_25c9ac;
        case 0x25c9b0u: goto label_25c9b0;
        case 0x25c9b4u: goto label_25c9b4;
        case 0x25c9b8u: goto label_25c9b8;
        case 0x25c9bcu: goto label_25c9bc;
        case 0x25c9c0u: goto label_25c9c0;
        case 0x25c9c4u: goto label_25c9c4;
        case 0x25c9c8u: goto label_25c9c8;
        case 0x25c9ccu: goto label_25c9cc;
        case 0x25c9d0u: goto label_25c9d0;
        case 0x25c9d4u: goto label_25c9d4;
        case 0x25c9d8u: goto label_25c9d8;
        case 0x25c9dcu: goto label_25c9dc;
        case 0x25c9e0u: goto label_25c9e0;
        case 0x25c9e4u: goto label_25c9e4;
        case 0x25c9e8u: goto label_25c9e8;
        case 0x25c9ecu: goto label_25c9ec;
        case 0x25c9f0u: goto label_25c9f0;
        case 0x25c9f4u: goto label_25c9f4;
        case 0x25c9f8u: goto label_25c9f8;
        case 0x25c9fcu: goto label_25c9fc;
        case 0x25ca00u: goto label_25ca00;
        case 0x25ca04u: goto label_25ca04;
        case 0x25ca08u: goto label_25ca08;
        case 0x25ca0cu: goto label_25ca0c;
        case 0x25ca10u: goto label_25ca10;
        case 0x25ca14u: goto label_25ca14;
        case 0x25ca18u: goto label_25ca18;
        case 0x25ca1cu: goto label_25ca1c;
        case 0x25ca20u: goto label_25ca20;
        case 0x25ca24u: goto label_25ca24;
        case 0x25ca28u: goto label_25ca28;
        case 0x25ca2cu: goto label_25ca2c;
        case 0x25ca30u: goto label_25ca30;
        case 0x25ca34u: goto label_25ca34;
        case 0x25ca38u: goto label_25ca38;
        case 0x25ca3cu: goto label_25ca3c;
        case 0x25ca40u: goto label_25ca40;
        case 0x25ca44u: goto label_25ca44;
        case 0x25ca48u: goto label_25ca48;
        case 0x25ca4cu: goto label_25ca4c;
        case 0x25ca50u: goto label_25ca50;
        case 0x25ca54u: goto label_25ca54;
        case 0x25ca58u: goto label_25ca58;
        case 0x25ca5cu: goto label_25ca5c;
        case 0x25ca60u: goto label_25ca60;
        case 0x25ca64u: goto label_25ca64;
        case 0x25ca68u: goto label_25ca68;
        case 0x25ca6cu: goto label_25ca6c;
        case 0x25ca70u: goto label_25ca70;
        case 0x25ca74u: goto label_25ca74;
        case 0x25ca78u: goto label_25ca78;
        case 0x25ca7cu: goto label_25ca7c;
        case 0x25ca80u: goto label_25ca80;
        case 0x25ca84u: goto label_25ca84;
        case 0x25ca88u: goto label_25ca88;
        case 0x25ca8cu: goto label_25ca8c;
        case 0x25ca90u: goto label_25ca90;
        case 0x25ca94u: goto label_25ca94;
        case 0x25ca98u: goto label_25ca98;
        case 0x25ca9cu: goto label_25ca9c;
        case 0x25caa0u: goto label_25caa0;
        case 0x25caa4u: goto label_25caa4;
        case 0x25caa8u: goto label_25caa8;
        case 0x25caacu: goto label_25caac;
        case 0x25cab0u: goto label_25cab0;
        case 0x25cab4u: goto label_25cab4;
        case 0x25cab8u: goto label_25cab8;
        case 0x25cabcu: goto label_25cabc;
        case 0x25cac0u: goto label_25cac0;
        case 0x25cac4u: goto label_25cac4;
        case 0x25cac8u: goto label_25cac8;
        case 0x25caccu: goto label_25cacc;
        case 0x25cad0u: goto label_25cad0;
        case 0x25cad4u: goto label_25cad4;
        case 0x25cad8u: goto label_25cad8;
        case 0x25cadcu: goto label_25cadc;
        case 0x25cae0u: goto label_25cae0;
        case 0x25cae4u: goto label_25cae4;
        case 0x25cae8u: goto label_25cae8;
        case 0x25caecu: goto label_25caec;
        case 0x25caf0u: goto label_25caf0;
        case 0x25caf4u: goto label_25caf4;
        case 0x25caf8u: goto label_25caf8;
        case 0x25cafcu: goto label_25cafc;
        case 0x25cb00u: goto label_25cb00;
        case 0x25cb04u: goto label_25cb04;
        case 0x25cb08u: goto label_25cb08;
        case 0x25cb0cu: goto label_25cb0c;
        case 0x25cb10u: goto label_25cb10;
        case 0x25cb14u: goto label_25cb14;
        case 0x25cb18u: goto label_25cb18;
        case 0x25cb1cu: goto label_25cb1c;
        case 0x25cb20u: goto label_25cb20;
        case 0x25cb24u: goto label_25cb24;
        case 0x25cb28u: goto label_25cb28;
        case 0x25cb2cu: goto label_25cb2c;
        case 0x25cb30u: goto label_25cb30;
        case 0x25cb34u: goto label_25cb34;
        case 0x25cb38u: goto label_25cb38;
        case 0x25cb3cu: goto label_25cb3c;
        case 0x25cb40u: goto label_25cb40;
        case 0x25cb44u: goto label_25cb44;
        case 0x25cb48u: goto label_25cb48;
        case 0x25cb4cu: goto label_25cb4c;
        case 0x25cb50u: goto label_25cb50;
        case 0x25cb54u: goto label_25cb54;
        case 0x25cb58u: goto label_25cb58;
        case 0x25cb5cu: goto label_25cb5c;
        case 0x25cb60u: goto label_25cb60;
        case 0x25cb64u: goto label_25cb64;
        case 0x25cb68u: goto label_25cb68;
        case 0x25cb6cu: goto label_25cb6c;
        case 0x25cb70u: goto label_25cb70;
        case 0x25cb74u: goto label_25cb74;
        case 0x25cb78u: goto label_25cb78;
        case 0x25cb7cu: goto label_25cb7c;
        case 0x25cb80u: goto label_25cb80;
        case 0x25cb84u: goto label_25cb84;
        case 0x25cb88u: goto label_25cb88;
        case 0x25cb8cu: goto label_25cb8c;
        case 0x25cb90u: goto label_25cb90;
        case 0x25cb94u: goto label_25cb94;
        case 0x25cb98u: goto label_25cb98;
        case 0x25cb9cu: goto label_25cb9c;
        case 0x25cba0u: goto label_25cba0;
        case 0x25cba4u: goto label_25cba4;
        case 0x25cba8u: goto label_25cba8;
        case 0x25cbacu: goto label_25cbac;
        case 0x25cbb0u: goto label_25cbb0;
        case 0x25cbb4u: goto label_25cbb4;
        case 0x25cbb8u: goto label_25cbb8;
        case 0x25cbbcu: goto label_25cbbc;
        case 0x25cbc0u: goto label_25cbc0;
        case 0x25cbc4u: goto label_25cbc4;
        case 0x25cbc8u: goto label_25cbc8;
        case 0x25cbccu: goto label_25cbcc;
        case 0x25cbd0u: goto label_25cbd0;
        case 0x25cbd4u: goto label_25cbd4;
        case 0x25cbd8u: goto label_25cbd8;
        case 0x25cbdcu: goto label_25cbdc;
        case 0x25cbe0u: goto label_25cbe0;
        case 0x25cbe4u: goto label_25cbe4;
        case 0x25cbe8u: goto label_25cbe8;
        case 0x25cbecu: goto label_25cbec;
        case 0x25cbf0u: goto label_25cbf0;
        case 0x25cbf4u: goto label_25cbf4;
        case 0x25cbf8u: goto label_25cbf8;
        case 0x25cbfcu: goto label_25cbfc;
        case 0x25cc00u: goto label_25cc00;
        case 0x25cc04u: goto label_25cc04;
        case 0x25cc08u: goto label_25cc08;
        case 0x25cc0cu: goto label_25cc0c;
        case 0x25cc10u: goto label_25cc10;
        case 0x25cc14u: goto label_25cc14;
        case 0x25cc18u: goto label_25cc18;
        case 0x25cc1cu: goto label_25cc1c;
        case 0x25cc20u: goto label_25cc20;
        case 0x25cc24u: goto label_25cc24;
        case 0x25cc28u: goto label_25cc28;
        case 0x25cc2cu: goto label_25cc2c;
        case 0x25cc30u: goto label_25cc30;
        case 0x25cc34u: goto label_25cc34;
        case 0x25cc38u: goto label_25cc38;
        case 0x25cc3cu: goto label_25cc3c;
        case 0x25cc40u: goto label_25cc40;
        case 0x25cc44u: goto label_25cc44;
        case 0x25cc48u: goto label_25cc48;
        case 0x25cc4cu: goto label_25cc4c;
        case 0x25cc50u: goto label_25cc50;
        case 0x25cc54u: goto label_25cc54;
        case 0x25cc58u: goto label_25cc58;
        case 0x25cc5cu: goto label_25cc5c;
        case 0x25cc60u: goto label_25cc60;
        case 0x25cc64u: goto label_25cc64;
        case 0x25cc68u: goto label_25cc68;
        case 0x25cc6cu: goto label_25cc6c;
        case 0x25cc70u: goto label_25cc70;
        case 0x25cc74u: goto label_25cc74;
        case 0x25cc78u: goto label_25cc78;
        case 0x25cc7cu: goto label_25cc7c;
        case 0x25cc80u: goto label_25cc80;
        case 0x25cc84u: goto label_25cc84;
        case 0x25cc88u: goto label_25cc88;
        case 0x25cc8cu: goto label_25cc8c;
        case 0x25cc90u: goto label_25cc90;
        case 0x25cc94u: goto label_25cc94;
        case 0x25cc98u: goto label_25cc98;
        case 0x25cc9cu: goto label_25cc9c;
        case 0x25cca0u: goto label_25cca0;
        case 0x25cca4u: goto label_25cca4;
        case 0x25cca8u: goto label_25cca8;
        case 0x25ccacu: goto label_25ccac;
        case 0x25ccb0u: goto label_25ccb0;
        case 0x25ccb4u: goto label_25ccb4;
        case 0x25ccb8u: goto label_25ccb8;
        case 0x25ccbcu: goto label_25ccbc;
        case 0x25ccc0u: goto label_25ccc0;
        case 0x25ccc4u: goto label_25ccc4;
        case 0x25ccc8u: goto label_25ccc8;
        case 0x25ccccu: goto label_25cccc;
        case 0x25ccd0u: goto label_25ccd0;
        case 0x25ccd4u: goto label_25ccd4;
        case 0x25ccd8u: goto label_25ccd8;
        case 0x25ccdcu: goto label_25ccdc;
        case 0x25cce0u: goto label_25cce0;
        case 0x25cce4u: goto label_25cce4;
        case 0x25cce8u: goto label_25cce8;
        case 0x25ccecu: goto label_25ccec;
        case 0x25ccf0u: goto label_25ccf0;
        case 0x25ccf4u: goto label_25ccf4;
        case 0x25ccf8u: goto label_25ccf8;
        case 0x25ccfcu: goto label_25ccfc;
        case 0x25cd00u: goto label_25cd00;
        case 0x25cd04u: goto label_25cd04;
        case 0x25cd08u: goto label_25cd08;
        case 0x25cd0cu: goto label_25cd0c;
        case 0x25cd10u: goto label_25cd10;
        case 0x25cd14u: goto label_25cd14;
        case 0x25cd18u: goto label_25cd18;
        case 0x25cd1cu: goto label_25cd1c;
        case 0x25cd20u: goto label_25cd20;
        case 0x25cd24u: goto label_25cd24;
        case 0x25cd28u: goto label_25cd28;
        case 0x25cd2cu: goto label_25cd2c;
        case 0x25cd30u: goto label_25cd30;
        case 0x25cd34u: goto label_25cd34;
        case 0x25cd38u: goto label_25cd38;
        case 0x25cd3cu: goto label_25cd3c;
        case 0x25cd40u: goto label_25cd40;
        case 0x25cd44u: goto label_25cd44;
        case 0x25cd48u: goto label_25cd48;
        case 0x25cd4cu: goto label_25cd4c;
        case 0x25cd50u: goto label_25cd50;
        case 0x25cd54u: goto label_25cd54;
        case 0x25cd58u: goto label_25cd58;
        case 0x25cd5cu: goto label_25cd5c;
        case 0x25cd60u: goto label_25cd60;
        case 0x25cd64u: goto label_25cd64;
        case 0x25cd68u: goto label_25cd68;
        case 0x25cd6cu: goto label_25cd6c;
        case 0x25cd70u: goto label_25cd70;
        case 0x25cd74u: goto label_25cd74;
        case 0x25cd78u: goto label_25cd78;
        case 0x25cd7cu: goto label_25cd7c;
        case 0x25cd80u: goto label_25cd80;
        case 0x25cd84u: goto label_25cd84;
        case 0x25cd88u: goto label_25cd88;
        case 0x25cd8cu: goto label_25cd8c;
        case 0x25cd90u: goto label_25cd90;
        case 0x25cd94u: goto label_25cd94;
        case 0x25cd98u: goto label_25cd98;
        case 0x25cd9cu: goto label_25cd9c;
        case 0x25cda0u: goto label_25cda0;
        case 0x25cda4u: goto label_25cda4;
        case 0x25cda8u: goto label_25cda8;
        case 0x25cdacu: goto label_25cdac;
        case 0x25cdb0u: goto label_25cdb0;
        case 0x25cdb4u: goto label_25cdb4;
        case 0x25cdb8u: goto label_25cdb8;
        case 0x25cdbcu: goto label_25cdbc;
        case 0x25cdc0u: goto label_25cdc0;
        case 0x25cdc4u: goto label_25cdc4;
        case 0x25cdc8u: goto label_25cdc8;
        case 0x25cdccu: goto label_25cdcc;
        case 0x25cdd0u: goto label_25cdd0;
        case 0x25cdd4u: goto label_25cdd4;
        case 0x25cdd8u: goto label_25cdd8;
        case 0x25cddcu: goto label_25cddc;
        case 0x25cde0u: goto label_25cde0;
        case 0x25cde4u: goto label_25cde4;
        case 0x25cde8u: goto label_25cde8;
        case 0x25cdecu: goto label_25cdec;
        case 0x25cdf0u: goto label_25cdf0;
        case 0x25cdf4u: goto label_25cdf4;
        case 0x25cdf8u: goto label_25cdf8;
        case 0x25cdfcu: goto label_25cdfc;
        case 0x25ce00u: goto label_25ce00;
        case 0x25ce04u: goto label_25ce04;
        case 0x25ce08u: goto label_25ce08;
        case 0x25ce0cu: goto label_25ce0c;
        case 0x25ce10u: goto label_25ce10;
        case 0x25ce14u: goto label_25ce14;
        case 0x25ce18u: goto label_25ce18;
        case 0x25ce1cu: goto label_25ce1c;
        case 0x25ce20u: goto label_25ce20;
        case 0x25ce24u: goto label_25ce24;
        case 0x25ce28u: goto label_25ce28;
        case 0x25ce2cu: goto label_25ce2c;
        case 0x25ce30u: goto label_25ce30;
        case 0x25ce34u: goto label_25ce34;
        case 0x25ce38u: goto label_25ce38;
        case 0x25ce3cu: goto label_25ce3c;
        case 0x25ce40u: goto label_25ce40;
        case 0x25ce44u: goto label_25ce44;
        case 0x25ce48u: goto label_25ce48;
        case 0x25ce4cu: goto label_25ce4c;
        case 0x25ce50u: goto label_25ce50;
        case 0x25ce54u: goto label_25ce54;
        case 0x25ce58u: goto label_25ce58;
        case 0x25ce5cu: goto label_25ce5c;
        case 0x25ce60u: goto label_25ce60;
        case 0x25ce64u: goto label_25ce64;
        case 0x25ce68u: goto label_25ce68;
        case 0x25ce6cu: goto label_25ce6c;
        case 0x25ce70u: goto label_25ce70;
        case 0x25ce74u: goto label_25ce74;
        case 0x25ce78u: goto label_25ce78;
        case 0x25ce7cu: goto label_25ce7c;
        case 0x25ce80u: goto label_25ce80;
        case 0x25ce84u: goto label_25ce84;
        case 0x25ce88u: goto label_25ce88;
        case 0x25ce8cu: goto label_25ce8c;
        case 0x25ce90u: goto label_25ce90;
        case 0x25ce94u: goto label_25ce94;
        case 0x25ce98u: goto label_25ce98;
        case 0x25ce9cu: goto label_25ce9c;
        case 0x25cea0u: goto label_25cea0;
        case 0x25cea4u: goto label_25cea4;
        case 0x25cea8u: goto label_25cea8;
        case 0x25ceacu: goto label_25ceac;
        case 0x25ceb0u: goto label_25ceb0;
        case 0x25ceb4u: goto label_25ceb4;
        case 0x25ceb8u: goto label_25ceb8;
        case 0x25cebcu: goto label_25cebc;
        case 0x25cec0u: goto label_25cec0;
        case 0x25cec4u: goto label_25cec4;
        case 0x25cec8u: goto label_25cec8;
        case 0x25ceccu: goto label_25cecc;
        case 0x25ced0u: goto label_25ced0;
        case 0x25ced4u: goto label_25ced4;
        case 0x25ced8u: goto label_25ced8;
        case 0x25cedcu: goto label_25cedc;
        case 0x25cee0u: goto label_25cee0;
        case 0x25cee4u: goto label_25cee4;
        case 0x25cee8u: goto label_25cee8;
        case 0x25ceecu: goto label_25ceec;
        case 0x25cef0u: goto label_25cef0;
        case 0x25cef4u: goto label_25cef4;
        case 0x25cef8u: goto label_25cef8;
        case 0x25cefcu: goto label_25cefc;
        case 0x25cf00u: goto label_25cf00;
        case 0x25cf04u: goto label_25cf04;
        case 0x25cf08u: goto label_25cf08;
        case 0x25cf0cu: goto label_25cf0c;
        case 0x25cf10u: goto label_25cf10;
        case 0x25cf14u: goto label_25cf14;
        case 0x25cf18u: goto label_25cf18;
        case 0x25cf1cu: goto label_25cf1c;
        case 0x25cf20u: goto label_25cf20;
        case 0x25cf24u: goto label_25cf24;
        case 0x25cf28u: goto label_25cf28;
        case 0x25cf2cu: goto label_25cf2c;
        case 0x25cf30u: goto label_25cf30;
        case 0x25cf34u: goto label_25cf34;
        case 0x25cf38u: goto label_25cf38;
        case 0x25cf3cu: goto label_25cf3c;
        case 0x25cf40u: goto label_25cf40;
        case 0x25cf44u: goto label_25cf44;
        case 0x25cf48u: goto label_25cf48;
        case 0x25cf4cu: goto label_25cf4c;
        case 0x25cf50u: goto label_25cf50;
        case 0x25cf54u: goto label_25cf54;
        case 0x25cf58u: goto label_25cf58;
        case 0x25cf5cu: goto label_25cf5c;
        case 0x25cf60u: goto label_25cf60;
        case 0x25cf64u: goto label_25cf64;
        case 0x25cf68u: goto label_25cf68;
        case 0x25cf6cu: goto label_25cf6c;
        case 0x25cf70u: goto label_25cf70;
        case 0x25cf74u: goto label_25cf74;
        case 0x25cf78u: goto label_25cf78;
        case 0x25cf7cu: goto label_25cf7c;
        case 0x25cf80u: goto label_25cf80;
        case 0x25cf84u: goto label_25cf84;
        case 0x25cf88u: goto label_25cf88;
        case 0x25cf8cu: goto label_25cf8c;
        case 0x25cf90u: goto label_25cf90;
        case 0x25cf94u: goto label_25cf94;
        case 0x25cf98u: goto label_25cf98;
        case 0x25cf9cu: goto label_25cf9c;
        case 0x25cfa0u: goto label_25cfa0;
        case 0x25cfa4u: goto label_25cfa4;
        case 0x25cfa8u: goto label_25cfa8;
        case 0x25cfacu: goto label_25cfac;
        case 0x25cfb0u: goto label_25cfb0;
        case 0x25cfb4u: goto label_25cfb4;
        case 0x25cfb8u: goto label_25cfb8;
        case 0x25cfbcu: goto label_25cfbc;
        case 0x25cfc0u: goto label_25cfc0;
        case 0x25cfc4u: goto label_25cfc4;
        case 0x25cfc8u: goto label_25cfc8;
        case 0x25cfccu: goto label_25cfcc;
        case 0x25cfd0u: goto label_25cfd0;
        case 0x25cfd4u: goto label_25cfd4;
        case 0x25cfd8u: goto label_25cfd8;
        case 0x25cfdcu: goto label_25cfdc;
        case 0x25cfe0u: goto label_25cfe0;
        case 0x25cfe4u: goto label_25cfe4;
        case 0x25cfe8u: goto label_25cfe8;
        case 0x25cfecu: goto label_25cfec;
        case 0x25cff0u: goto label_25cff0;
        case 0x25cff4u: goto label_25cff4;
        case 0x25cff8u: goto label_25cff8;
        case 0x25cffcu: goto label_25cffc;
        case 0x25d000u: goto label_25d000;
        case 0x25d004u: goto label_25d004;
        case 0x25d008u: goto label_25d008;
        case 0x25d00cu: goto label_25d00c;
        case 0x25d010u: goto label_25d010;
        case 0x25d014u: goto label_25d014;
        case 0x25d018u: goto label_25d018;
        case 0x25d01cu: goto label_25d01c;
        case 0x25d020u: goto label_25d020;
        case 0x25d024u: goto label_25d024;
        case 0x25d028u: goto label_25d028;
        case 0x25d02cu: goto label_25d02c;
        case 0x25d030u: goto label_25d030;
        case 0x25d034u: goto label_25d034;
        case 0x25d038u: goto label_25d038;
        case 0x25d03cu: goto label_25d03c;
        case 0x25d040u: goto label_25d040;
        case 0x25d044u: goto label_25d044;
        case 0x25d048u: goto label_25d048;
        case 0x25d04cu: goto label_25d04c;
        case 0x25d050u: goto label_25d050;
        case 0x25d054u: goto label_25d054;
        case 0x25d058u: goto label_25d058;
        case 0x25d05cu: goto label_25d05c;
        case 0x25d060u: goto label_25d060;
        case 0x25d064u: goto label_25d064;
        case 0x25d068u: goto label_25d068;
        case 0x25d06cu: goto label_25d06c;
        case 0x25d070u: goto label_25d070;
        case 0x25d074u: goto label_25d074;
        case 0x25d078u: goto label_25d078;
        case 0x25d07cu: goto label_25d07c;
        case 0x25d080u: goto label_25d080;
        case 0x25d084u: goto label_25d084;
        case 0x25d088u: goto label_25d088;
        case 0x25d08cu: goto label_25d08c;
        case 0x25d090u: goto label_25d090;
        case 0x25d094u: goto label_25d094;
        case 0x25d098u: goto label_25d098;
        case 0x25d09cu: goto label_25d09c;
        case 0x25d0a0u: goto label_25d0a0;
        case 0x25d0a4u: goto label_25d0a4;
        case 0x25d0a8u: goto label_25d0a8;
        case 0x25d0acu: goto label_25d0ac;
        case 0x25d0b0u: goto label_25d0b0;
        case 0x25d0b4u: goto label_25d0b4;
        case 0x25d0b8u: goto label_25d0b8;
        case 0x25d0bcu: goto label_25d0bc;
        case 0x25d0c0u: goto label_25d0c0;
        case 0x25d0c4u: goto label_25d0c4;
        case 0x25d0c8u: goto label_25d0c8;
        case 0x25d0ccu: goto label_25d0cc;
        case 0x25d0d0u: goto label_25d0d0;
        case 0x25d0d4u: goto label_25d0d4;
        case 0x25d0d8u: goto label_25d0d8;
        case 0x25d0dcu: goto label_25d0dc;
        case 0x25d0e0u: goto label_25d0e0;
        case 0x25d0e4u: goto label_25d0e4;
        case 0x25d0e8u: goto label_25d0e8;
        case 0x25d0ecu: goto label_25d0ec;
        case 0x25d0f0u: goto label_25d0f0;
        case 0x25d0f4u: goto label_25d0f4;
        case 0x25d0f8u: goto label_25d0f8;
        case 0x25d0fcu: goto label_25d0fc;
        case 0x25d100u: goto label_25d100;
        case 0x25d104u: goto label_25d104;
        case 0x25d108u: goto label_25d108;
        case 0x25d10cu: goto label_25d10c;
        case 0x25d110u: goto label_25d110;
        case 0x25d114u: goto label_25d114;
        case 0x25d118u: goto label_25d118;
        case 0x25d11cu: goto label_25d11c;
        case 0x25d120u: goto label_25d120;
        case 0x25d124u: goto label_25d124;
        case 0x25d128u: goto label_25d128;
        case 0x25d12cu: goto label_25d12c;
        case 0x25d130u: goto label_25d130;
        case 0x25d134u: goto label_25d134;
        case 0x25d138u: goto label_25d138;
        case 0x25d13cu: goto label_25d13c;
        case 0x25d140u: goto label_25d140;
        case 0x25d144u: goto label_25d144;
        case 0x25d148u: goto label_25d148;
        case 0x25d14cu: goto label_25d14c;
        case 0x25d150u: goto label_25d150;
        case 0x25d154u: goto label_25d154;
        case 0x25d158u: goto label_25d158;
        case 0x25d15cu: goto label_25d15c;
        case 0x25d160u: goto label_25d160;
        case 0x25d164u: goto label_25d164;
        case 0x25d168u: goto label_25d168;
        case 0x25d16cu: goto label_25d16c;
        case 0x25d170u: goto label_25d170;
        case 0x25d174u: goto label_25d174;
        case 0x25d178u: goto label_25d178;
        case 0x25d17cu: goto label_25d17c;
        case 0x25d180u: goto label_25d180;
        case 0x25d184u: goto label_25d184;
        case 0x25d188u: goto label_25d188;
        case 0x25d18cu: goto label_25d18c;
        case 0x25d190u: goto label_25d190;
        case 0x25d194u: goto label_25d194;
        case 0x25d198u: goto label_25d198;
        case 0x25d19cu: goto label_25d19c;
        case 0x25d1a0u: goto label_25d1a0;
        case 0x25d1a4u: goto label_25d1a4;
        case 0x25d1a8u: goto label_25d1a8;
        case 0x25d1acu: goto label_25d1ac;
        case 0x25d1b0u: goto label_25d1b0;
        case 0x25d1b4u: goto label_25d1b4;
        case 0x25d1b8u: goto label_25d1b8;
        case 0x25d1bcu: goto label_25d1bc;
        case 0x25d1c0u: goto label_25d1c0;
        case 0x25d1c4u: goto label_25d1c4;
        case 0x25d1c8u: goto label_25d1c8;
        case 0x25d1ccu: goto label_25d1cc;
        case 0x25d1d0u: goto label_25d1d0;
        case 0x25d1d4u: goto label_25d1d4;
        default: break;
    }

    ctx->pc = 0x25c430u;

label_25c430:
    // 0x25c430: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x25c430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
label_25c434:
    // 0x25c434: 0x7fbf0090  sq          $ra, 0x90($sp)
    ctx->pc = 0x25c434u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 31));
label_25c438:
    // 0x25c438: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x25c438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_25c43c:
    // 0x25c43c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x25c43cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_25c440:
    // 0x25c440: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x25c440u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_25c444:
    // 0x25c444: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x25c444u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_25c448:
    // 0x25c448: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x25c448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_25c44c:
    // 0x25c44c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x25c44cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_25c450:
    // 0x25c450: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x25c450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_25c454:
    // 0x25c454: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25c454u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_25c458:
    // 0x25c458: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25c458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_25c45c:
    // 0x25c45c: 0xafa40168  sw          $a0, 0x168($sp)
    ctx->pc = 0x25c45cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 360), GPR_U32(ctx, 4));
label_25c460:
    // 0x25c460: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x25c460u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_25c464:
    // 0x25c464: 0x8fa30168  lw          $v1, 0x168($sp)
    ctx->pc = 0x25c464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
label_25c468:
    // 0x25c468: 0x906309e4  lbu         $v1, 0x9E4($v1)
    ctx->pc = 0x25c468u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2532)));
label_25c46c:
    // 0x25c46c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x25c46cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_25c470:
    // 0x25c470: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x25c470u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_25c474:
    // 0x25c474: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x25c474u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_25c478:
    // 0x25c478: 0x7060f628  paddub      $fp, $v1, $zero
    ctx->pc = 0x25c478u;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_25c47c:
    // 0x25c47c: 0x8fa30168  lw          $v1, 0x168($sp)
    ctx->pc = 0x25c47cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
label_25c480:
    // 0x25c480: 0x8c6309f8  lw          $v1, 0x9F8($v1)
    ctx->pc = 0x25c480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2552)));
label_25c484:
    // 0x25c484: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x25c484u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
label_25c488:
    // 0x25c488: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
label_25c48c:
    if (ctx->pc == 0x25C48Cu) {
        ctx->pc = 0x25C490u;
        goto label_25c490;
    }
    ctx->pc = 0x25C488u;
    {
        const bool branch_taken_0x25c488 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x25c488) {
            ctx->pc = 0x25C4A4u;
            goto label_25c4a4;
        }
    }
    ctx->pc = 0x25C490u;
label_25c490:
    // 0x25c490: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x25c490u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_25c494:
    // 0x25c494: 0x0  nop
    ctx->pc = 0x25c494u;
    // NOP
label_25c498:
    // 0x25c498: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x25c498u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_25c49c:
    // 0x25c49c: 0x10000008  b           . + 4 + (0x8 << 2)
label_25c4a0:
    if (ctx->pc == 0x25C4A0u) {
        ctx->pc = 0x25C4A4u;
        goto label_25c4a4;
    }
    ctx->pc = 0x25C49Cu;
    {
        const bool branch_taken_0x25c49c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25c49c) {
            ctx->pc = 0x25C4C0u;
            goto label_25c4c0;
        }
    }
    ctx->pc = 0x25C4A4u;
label_25c4a4:
    // 0x25c4a4: 0x32842  srl         $a1, $v1, 1
    ctx->pc = 0x25c4a4u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
label_25c4a8:
    // 0x25c4a8: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x25c4a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_25c4ac:
    // 0x25c4ac: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x25c4acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_25c4b0:
    // 0x25c4b0: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x25c4b0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_25c4b4:
    // 0x25c4b4: 0x0  nop
    ctx->pc = 0x25c4b4u;
    // NOP
label_25c4b8:
    // 0x25c4b8: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x25c4b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_25c4bc:
    // 0x25c4bc: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x25c4bcu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_25c4c0:
    // 0x25c4c0: 0x8fa40168  lw          $a0, 0x168($sp)
    ctx->pc = 0x25c4c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
label_25c4c4:
    // 0x25c4c4: 0x8c8309f8  lw          $v1, 0x9F8($a0)
    ctx->pc = 0x25c4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2552)));
label_25c4c8:
    // 0x25c4c8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x25c4c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_25c4cc:
    // 0x25c4cc: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
label_25c4d0:
    if (ctx->pc == 0x25C4D0u) {
        ctx->pc = 0x25C4D4u;
        goto label_25c4d4;
    }
    ctx->pc = 0x25C4CCu;
    {
        const bool branch_taken_0x25c4cc = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x25c4cc) {
            ctx->pc = 0x25C4E8u;
            goto label_25c4e8;
        }
    }
    ctx->pc = 0x25C4D4u;
label_25c4d4:
    // 0x25c4d4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x25c4d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_25c4d8:
    // 0x25c4d8: 0x0  nop
    ctx->pc = 0x25c4d8u;
    // NOP
label_25c4dc:
    // 0x25c4dc: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x25c4dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_25c4e0:
    // 0x25c4e0: 0x10000008  b           . + 4 + (0x8 << 2)
label_25c4e4:
    if (ctx->pc == 0x25C4E4u) {
        ctx->pc = 0x25C4E8u;
        goto label_25c4e8;
    }
    ctx->pc = 0x25C4E0u;
    {
        const bool branch_taken_0x25c4e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25c4e0) {
            ctx->pc = 0x25C504u;
            goto label_25c504;
        }
    }
    ctx->pc = 0x25C4E8u;
label_25c4e8:
    // 0x25c4e8: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x25c4e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
label_25c4ec:
    // 0x25c4ec: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x25c4ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_25c4f0:
    // 0x25c4f0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x25c4f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_25c4f4:
    // 0x25c4f4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x25c4f4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_25c4f8:
    // 0x25c4f8: 0x0  nop
    ctx->pc = 0x25c4f8u;
    // NOP
label_25c4fc:
    // 0x25c4fc: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x25c4fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_25c500:
    // 0x25c500: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x25c500u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_25c504:
    // 0x25c504: 0x3c034380  lui         $v1, 0x4380
    ctx->pc = 0x25c504u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17280 << 16));
label_25c508:
    // 0x25c508: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x25c508u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_25c50c:
    // 0x25c50c: 0x0  nop
    ctx->pc = 0x25c50cu;
    // NOP
label_25c510:
    // 0x25c510: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x25c510u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_25c514:
    // 0x25c514: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x25c514u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_25c518:
    // 0x25c518: 0x8fa30168  lw          $v1, 0x168($sp)
    ctx->pc = 0x25c518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
label_25c51c:
    // 0x25c51c: 0xe46009d0  swc1        $f0, 0x9D0($v1)
    ctx->pc = 0x25c51cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 2512), bits); }
label_25c520:
    // 0x25c520: 0x8fa30168  lw          $v1, 0x168($sp)
    ctx->pc = 0x25c520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
label_25c524:
    // 0x25c524: 0x24620300  addiu       $v0, $v1, 0x300
    ctx->pc = 0x25c524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 768));
label_25c528:
    // 0x25c528: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x25c528u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_25c52c:
    // 0x25c52c: 0x27a20100  addiu       $v0, $sp, 0x100
    ctx->pc = 0x25c52cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_25c530:
    // 0x25c530: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x25c530u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
label_25c534:
    // 0x25c534: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x25c534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
label_25c538:
    // 0x25c538: 0xc44009d0  lwc1        $f0, 0x9D0($v0)
    ctx->pc = 0x25c538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25c53c:
    // 0x25c53c: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x25c53cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_25c540:
    // 0x25c540: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x25c540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
label_25c544:
    // 0x25c544: 0xc44009d4  lwc1        $f0, 0x9D4($v0)
    ctx->pc = 0x25c544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25c548:
    // 0x25c548: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x25c548u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
label_25c54c:
    // 0x25c54c: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x25c54cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
label_25c550:
    // 0x25c550: 0x944309e0  lhu         $v1, 0x9E0($v0)
    ctx->pc = 0x25c550u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2528)));
label_25c554:
    // 0x25c554: 0xa7a300f8  sh          $v1, 0xF8($sp)
    ctx->pc = 0x25c554u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 248), (uint16_t)GPR_U32(ctx, 3));
label_25c558:
    // 0x25c558: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x25c558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
label_25c55c:
    // 0x25c55c: 0x90420012  lbu         $v0, 0x12($v0)
    ctx->pc = 0x25c55cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 18)));
label_25c560:
    // 0x25c560: 0xa3a20110  sb          $v0, 0x110($sp)
    ctx->pc = 0x25c560u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 272), (uint8_t)GPR_U32(ctx, 2));
label_25c564:
    // 0x25c564: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x25c564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
label_25c568:
    // 0x25c568: 0x244400e0  addiu       $a0, $v0, 0xE0
    ctx->pc = 0x25c568u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 224));
label_25c56c:
    // 0x25c56c: 0xc067688  jal         func_19DA20
label_25c570:
    if (ctx->pc == 0x25C570u) {
        ctx->pc = 0x25C574u;
        goto label_25c574;
    }
    ctx->pc = 0x25C56Cu;
    SET_GPR_U32(ctx, 31, 0x25C574u);
    ctx->pc = 0x19DA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA20u, 0x25C56Cu, 0x25C574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C574u;
label_25c574:
    // 0x25c574: 0x8fa40168  lw          $a0, 0x168($sp)
    ctx->pc = 0x25c574u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
label_25c578:
    // 0x25c578: 0x8fa30168  lw          $v1, 0x168($sp)
    ctx->pc = 0x25c578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
label_25c57c:
    // 0x25c57c: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x25c57cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
label_25c580:
    // 0x25c580: 0x248400e0  addiu       $a0, $a0, 0xE0
    ctx->pc = 0x25c580u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 224));
label_25c584:
    // 0x25c584: 0x246500e0  addiu       $a1, $v1, 0xE0
    ctx->pc = 0x25c584u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 224));
label_25c588:
    // 0x25c588: 0xc44c00d0  lwc1        $f12, 0xD0($v0)
    ctx->pc = 0x25c588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_25c58c:
    // 0x25c58c: 0xc06776c  jal         func_19DDB0
label_25c590:
    if (ctx->pc == 0x25C590u) {
        ctx->pc = 0x25C594u;
        goto label_25c594;
    }
    ctx->pc = 0x25C58Cu;
    SET_GPR_U32(ctx, 31, 0x25C594u);
    ctx->pc = 0x19DDB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DDB0u, 0x25C58Cu, 0x25C594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C594u;
label_25c594:
    // 0x25c594: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x25c594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
label_25c598:
    // 0x25c598: 0x8fa50168  lw          $a1, 0x168($sp)
    ctx->pc = 0x25c598u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
label_25c59c:
    // 0x25c59c: 0x8fa30168  lw          $v1, 0x168($sp)
    ctx->pc = 0x25c59cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
label_25c5a0:
    // 0x25c5a0: 0x244400e0  addiu       $a0, $v0, 0xE0
    ctx->pc = 0x25c5a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 224));
label_25c5a4:
    // 0x25c5a4: 0x24a500e0  addiu       $a1, $a1, 0xE0
    ctx->pc = 0x25c5a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 224));
label_25c5a8:
    // 0x25c5a8: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x25c5a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_25c5ac:
    // 0x25c5ac: 0xc067808  jal         func_19E020
label_25c5b0:
    if (ctx->pc == 0x25C5B0u) {
        ctx->pc = 0x25C5B4u;
        goto label_25c5b4;
    }
    ctx->pc = 0x25C5ACu;
    SET_GPR_U32(ctx, 31, 0x25C5B4u);
    ctx->pc = 0x19E020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E020u, 0x25C5ACu, 0x25C5B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C5B4u;
label_25c5b4:
    // 0x25c5b4: 0x8fa50168  lw          $a1, 0x168($sp)
    ctx->pc = 0x25c5b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
label_25c5b8:
    // 0x25c5b8: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x25c5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
label_25c5bc:
    // 0x25c5bc: 0x8fa30168  lw          $v1, 0x168($sp)
    ctx->pc = 0x25c5bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
label_25c5c0:
    // 0x25c5c0: 0x24a400e0  addiu       $a0, $a1, 0xE0
    ctx->pc = 0x25c5c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 224));
label_25c5c4:
    // 0x25c5c4: 0x244500e0  addiu       $a1, $v0, 0xE0
    ctx->pc = 0x25c5c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 224));
label_25c5c8:
    // 0x25c5c8: 0xc46c00d8  lwc1        $f12, 0xD8($v1)
    ctx->pc = 0x25c5c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_25c5cc:
    // 0x25c5cc: 0xc0676d0  jal         func_19DB40
label_25c5d0:
    if (ctx->pc == 0x25C5D0u) {
        ctx->pc = 0x25C5D4u;
        goto label_25c5d4;
    }
    ctx->pc = 0x25C5CCu;
    SET_GPR_U32(ctx, 31, 0x25C5D4u);
    ctx->pc = 0x19DB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DB40u, 0x25C5CCu, 0x25C5D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C5D4u;
label_25c5d4:
    // 0x25c5d4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x25c5d4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_25c5d8:
    // 0x25c5d8: 0x8fa30168  lw          $v1, 0x168($sp)
    ctx->pc = 0x25c5d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
label_25c5dc:
    // 0x25c5dc: 0x24630120  addiu       $v1, $v1, 0x120
    ctx->pc = 0x25c5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
label_25c5e0:
    // 0x25c5e0: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x25c5e0u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_25c5e4:
    // 0x25c5e4: 0x8fa30168  lw          $v1, 0x168($sp)
    ctx->pc = 0x25c5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
label_25c5e8:
    // 0x25c5e8: 0x24630110  addiu       $v1, $v1, 0x110
    ctx->pc = 0x25c5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
label_25c5ec:
    // 0x25c5ec: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x25c5ecu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
label_25c5f0:
    // 0x25c5f0: 0x8fa30168  lw          $v1, 0x168($sp)
    ctx->pc = 0x25c5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
label_25c5f4:
    // 0x25c5f4: 0x8c6305f4  lw          $v1, 0x5F4($v1)
    ctx->pc = 0x25c5f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1524)));
label_25c5f8:
    // 0x25c5f8: 0x10600047  beqz        $v1, . + 4 + (0x47 << 2)
label_25c5fc:
    if (ctx->pc == 0x25C5FCu) {
        ctx->pc = 0x25C600u;
        goto label_25c600;
    }
    ctx->pc = 0x25C5F8u;
    {
        const bool branch_taken_0x25c5f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25c5f8) {
            ctx->pc = 0x25C718u;
            goto label_25c718;
        }
    }
    ctx->pc = 0x25C600u;
label_25c600:
    // 0x25c600: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x25c600u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_25c604:
    // 0x25c604: 0xa7a300fa  sh          $v1, 0xFA($sp)
    ctx->pc = 0x25c604u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 250), (uint16_t)GPR_U32(ctx, 3));
label_25c608:
    // 0x25c608: 0x8fa30168  lw          $v1, 0x168($sp)
    ctx->pc = 0x25c608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
label_25c60c:
    // 0x25c60c: 0x8c6305f4  lw          $v1, 0x5F4($v1)
    ctx->pc = 0x25c60cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1524)));
label_25c610:
    // 0x25c610: 0xafa300fc  sw          $v1, 0xFC($sp)
    ctx->pc = 0x25c610u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 3));
label_25c614:
    // 0x25c614: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x25c614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
label_25c618:
    // 0x25c618: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x25c618u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_25c61c:
    // 0x25c61c: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x25c61cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_25c620:
    // 0x25c620: 0x27a60140  addiu       $a2, $sp, 0x140
    ctx->pc = 0x25c620u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_25c624:
    // 0x25c624: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x25c624u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_25c628:
    // 0x25c628: 0x24460602  addiu       $a2, $v0, 0x602
    ctx->pc = 0x25c628u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1538));
label_25c62c:
    // 0x25c62c: 0xc098ba0  jal         func_262E80
label_25c630:
    if (ctx->pc == 0x25C630u) {
        ctx->pc = 0x25C634u;
        goto label_25c634;
    }
    ctx->pc = 0x25C62Cu;
    SET_GPR_U32(ctx, 31, 0x25C634u);
    ctx->pc = 0x262E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262E80u, 0x25C62Cu, 0x25C634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C634u;
label_25c634:
    // 0x25c634: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x25c634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
label_25c638:
    // 0x25c638: 0x944409e0  lhu         $a0, 0x9E0($v0)
    ctx->pc = 0x25c638u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2528)));
label_25c63c:
    // 0x25c63c: 0x3085ffff  andi        $a1, $a0, 0xFFFF
    ctx->pc = 0x25c63cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
label_25c640:
    // 0x25c640: 0x30a20004  andi        $v0, $a1, 0x4
    ctx->pc = 0x25c640u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4);
label_25c644:
    // 0x25c644: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_25c648:
    if (ctx->pc == 0x25C648u) {
        ctx->pc = 0x25C64Cu;
        goto label_25c64c;
    }
    ctx->pc = 0x25C644u;
    {
        const bool branch_taken_0x25c644 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25c644) {
            ctx->pc = 0x25C660u;
            goto label_25c660;
        }
    }
    ctx->pc = 0x25C64Cu;
label_25c64c:
    // 0x25c64c: 0x3c04bf80  lui         $a0, 0xBF80
    ctx->pc = 0x25c64cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49024 << 16));
label_25c650:
    // 0x25c650: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x25c650u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_25c654:
    // 0x25c654: 0xc7a00140  lwc1        $f0, 0x140($sp)
    ctx->pc = 0x25c654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25c658:
    // 0x25c658: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x25c658u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_25c65c:
    // 0x25c65c: 0xe7a00140  swc1        $f0, 0x140($sp)
    ctx->pc = 0x25c65cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_25c660:
    // 0x25c660: 0xc7a00144  lwc1        $f0, 0x144($sp)
    ctx->pc = 0x25c660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25c664:
    // 0x25c664: 0x8fa50168  lw          $a1, 0x168($sp)
    ctx->pc = 0x25c664u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
label_25c668:
    // 0x25c668: 0xe4a009cc  swc1        $f0, 0x9CC($a1)
    ctx->pc = 0x25c668u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 2508), bits); }
label_25c66c:
    // 0x25c66c: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x25c66cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
label_25c670:
    // 0x25c670: 0x8c440330  lw          $a0, 0x330($v0)
    ctx->pc = 0x25c670u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 816)));
label_25c674:
    // 0x25c674: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x25c674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25c678:
    // 0x25c678: 0xe7a00150  swc1        $f0, 0x150($sp)
    ctx->pc = 0x25c678u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
label_25c67c:
    // 0x25c67c: 0x8fa50168  lw          $a1, 0x168($sp)
    ctx->pc = 0x25c67cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
label_25c680:
    // 0x25c680: 0x8ca20330  lw          $v0, 0x330($a1)
    ctx->pc = 0x25c680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 816)));
label_25c684:
    // 0x25c684: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x25c684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25c688:
    // 0x25c688: 0xe7a00154  swc1        $f0, 0x154($sp)
    ctx->pc = 0x25c688u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 340), bits); }
label_25c68c:
    // 0x25c68c: 0x8fa40168  lw          $a0, 0x168($sp)
    ctx->pc = 0x25c68cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
label_25c690:
    // 0x25c690: 0x8c850330  lw          $a1, 0x330($a0)
    ctx->pc = 0x25c690u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 816)));
label_25c694:
    // 0x25c694: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x25c694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25c698:
    // 0x25c698: 0xe7a00158  swc1        $f0, 0x158($sp)
    ctx->pc = 0x25c698u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
label_25c69c:
    // 0x25c69c: 0xc7a00140  lwc1        $f0, 0x140($sp)
    ctx->pc = 0x25c69cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25c6a0:
    // 0x25c6a0: 0x8fa60168  lw          $a2, 0x168($sp)
    ctx->pc = 0x25c6a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
label_25c6a4:
    // 0x25c6a4: 0x8cc20330  lw          $v0, 0x330($a2)
    ctx->pc = 0x25c6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 816)));
label_25c6a8:
    // 0x25c6a8: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x25c6a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_25c6ac:
    // 0x25c6ac: 0xc7a00144  lwc1        $f0, 0x144($sp)
    ctx->pc = 0x25c6acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25c6b0:
    // 0x25c6b0: 0x8fa40168  lw          $a0, 0x168($sp)
    ctx->pc = 0x25c6b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
label_25c6b4:
    // 0x25c6b4: 0x8c850330  lw          $a1, 0x330($a0)
    ctx->pc = 0x25c6b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 816)));
label_25c6b8:
    // 0x25c6b8: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x25c6b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
label_25c6bc:
    // 0x25c6bc: 0xc7a00148  lwc1        $f0, 0x148($sp)
    ctx->pc = 0x25c6bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25c6c0:
    // 0x25c6c0: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x25c6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
label_25c6c4:
    // 0x25c6c4: 0x8c420330  lw          $v0, 0x330($v0)
    ctx->pc = 0x25c6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 816)));
label_25c6c8:
    // 0x25c6c8: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x25c6c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_25c6cc:
    // 0x25c6cc: 0x8fa30168  lw          $v1, 0x168($sp)
    ctx->pc = 0x25c6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
label_25c6d0:
    // 0x25c6d0: 0x8c6202d0  lw          $v0, 0x2D0($v1)
    ctx->pc = 0x25c6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
label_25c6d4:
    // 0x25c6d4: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x25c6d4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_25c6d8:
    // 0x25c6d8: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x25c6d8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_25c6dc:
    // 0x25c6dc: 0xc040cbc  jal         func_1032F0
label_25c6e0:
    if (ctx->pc == 0x25C6E0u) {
        ctx->pc = 0x25C6E4u;
        goto label_25c6e4;
    }
    ctx->pc = 0x25C6DCu;
    SET_GPR_U32(ctx, 31, 0x25C6E4u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x25C6E4u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25C6E4u) { return; }
    ctx->pc = 0x25C6E4u;
label_25c6e4:
    // 0x25c6e4: 0xc7a00140  lwc1        $f0, 0x140($sp)
    ctx->pc = 0x25c6e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25c6e8:
    // 0x25c6e8: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x25c6e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
label_25c6ec:
    // 0x25c6ec: 0xc7a00144  lwc1        $f0, 0x144($sp)
    ctx->pc = 0x25c6ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25c6f0:
    // 0x25c6f0: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x25c6f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
label_25c6f4:
    // 0x25c6f4: 0xc7a00148  lwc1        $f0, 0x148($sp)
    ctx->pc = 0x25c6f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25c6f8:
    // 0x25c6f8: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x25c6f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
label_25c6fc:
    // 0x25c6fc: 0x8fa50168  lw          $a1, 0x168($sp)
    ctx->pc = 0x25c6fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
label_25c700:
    // 0x25c700: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x25c700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
label_25c704:
    // 0x25c704: 0x8ca40130  lw          $a0, 0x130($a1)
    ctx->pc = 0x25c704u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
label_25c708:
    // 0x25c708: 0x244500e0  addiu       $a1, $v0, 0xE0
    ctx->pc = 0x25c708u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 224));
label_25c70c:
    // 0x25c70c: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x25c70cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_25c710:
    // 0x25c710: 0xc0675f8  jal         func_19D7E0
label_25c714:
    if (ctx->pc == 0x25C714u) {
        ctx->pc = 0x25C718u;
        goto label_25c718;
    }
    ctx->pc = 0x25C710u;
    SET_GPR_U32(ctx, 31, 0x25C718u);
    ctx->pc = 0x19D7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D7E0u, 0x25C710u, 0x25C718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C718u;
label_25c718:
    // 0x25c718: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x25c718u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_25c71c:
    // 0x25c71c: 0x8c23fdf8  lw          $v1, -0x208($at)
    ctx->pc = 0x25c71cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294966776)));
label_25c720:
    // 0x25c720: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_25c724:
    if (ctx->pc == 0x25C724u) {
        ctx->pc = 0x25C728u;
        goto label_25c728;
    }
    ctx->pc = 0x25C720u;
    {
        const bool branch_taken_0x25c720 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x25c720) {
            ctx->pc = 0x25C740u;
            goto label_25c740;
        }
    }
    ctx->pc = 0x25C728u;
label_25c728:
    // 0x25c728: 0x8fa40168  lw          $a0, 0x168($sp)
    ctx->pc = 0x25c728u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
label_25c72c:
    // 0x25c72c: 0xc4800124  lwc1        $f0, 0x124($a0)
    ctx->pc = 0x25c72cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25c730:
    // 0x25c730: 0x8fa30168  lw          $v1, 0x168($sp)
    ctx->pc = 0x25c730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
label_25c734:
    // 0x25c734: 0xe46002d8  swc1        $f0, 0x2D8($v1)
    ctx->pc = 0x25c734u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 728), bits); }
label_25c738:
    // 0x25c738: 0x10000017  b           . + 4 + (0x17 << 2)
label_25c73c:
    if (ctx->pc == 0x25C73Cu) {
        ctx->pc = 0x25C740u;
        goto label_25c740;
    }
    ctx->pc = 0x25C738u;
    {
        const bool branch_taken_0x25c738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25c738) {
            ctx->pc = 0x25C798u;
            goto label_25c798;
        }
    }
    ctx->pc = 0x25C740u;
label_25c740:
    // 0x25c740: 0x8fa60168  lw          $a2, 0x168($sp)
    ctx->pc = 0x25c740u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
label_25c744:
    // 0x25c744: 0x8cc50130  lw          $a1, 0x130($a2)
    ctx->pc = 0x25c744u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 304)));
label_25c748:
    // 0x25c748: 0x24a40030  addiu       $a0, $a1, 0x30
    ctx->pc = 0x25c748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
label_25c74c:
    // 0x25c74c: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x25c74cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_25c750:
    // 0x25c750: 0xc05cf7c  jal         func_173DF0
label_25c754:
    if (ctx->pc == 0x25C754u) {
        ctx->pc = 0x25C758u;
        goto label_25c758;
    }
    ctx->pc = 0x25C750u;
    SET_GPR_U32(ctx, 31, 0x25C758u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x25C750u, 0x25C758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C758u;
label_25c758:
    // 0x25c758: 0x8fa30168  lw          $v1, 0x168($sp)
    ctx->pc = 0x25c758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
label_25c75c:
    // 0x25c75c: 0xe46002d8  swc1        $f0, 0x2D8($v1)
    ctx->pc = 0x25c75cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 728), bits); }
label_25c760:
    // 0x25c760: 0x8fa30168  lw          $v1, 0x168($sp)
    ctx->pc = 0x25c760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
label_25c764:
    // 0x25c764: 0xc46102d8  lwc1        $f1, 0x2D8($v1)
    ctx->pc = 0x25c764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25c768:
    // 0x25c768: 0x3c03c974  lui         $v1, 0xC974
    ctx->pc = 0x25c768u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51572 << 16));
label_25c76c:
    // 0x25c76c: 0x34632400  ori         $v1, $v1, 0x2400
    ctx->pc = 0x25c76cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)9216);
label_25c770:
    // 0x25c770: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x25c770u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_25c774:
    // 0x25c774: 0x0  nop
    ctx->pc = 0x25c774u;
    // NOP
label_25c778:
    // 0x25c778: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x25c778u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_25c77c:
    // 0x25c77c: 0x0  nop
    ctx->pc = 0x25c77cu;
    // NOP
label_25c780:
    // 0x25c780: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_25c784:
    if (ctx->pc == 0x25C784u) {
        ctx->pc = 0x25C788u;
        goto label_25c788;
    }
    ctx->pc = 0x25C780u;
    {
        const bool branch_taken_0x25c780 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25c780) {
            ctx->pc = 0x25C798u;
            goto label_25c798;
        }
    }
    ctx->pc = 0x25C788u;
label_25c788:
    // 0x25c788: 0x8fa30168  lw          $v1, 0x168($sp)
    ctx->pc = 0x25c788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
label_25c78c:
    // 0x25c78c: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x25c78cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25c790:
    // 0x25c790: 0x8fa30168  lw          $v1, 0x168($sp)
    ctx->pc = 0x25c790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
label_25c794:
    // 0x25c794: 0xe46002d8  swc1        $f0, 0x2D8($v1)
    ctx->pc = 0x25c794u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 728), bits); }
label_25c798:
    // 0x25c798: 0x8fa30168  lw          $v1, 0x168($sp)
    ctx->pc = 0x25c798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
label_25c79c:
    // 0x25c79c: 0x8c630350  lw          $v1, 0x350($v1)
    ctx->pc = 0x25c79cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 848)));
label_25c7a0:
    // 0x25c7a0: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x25c7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_25c7a4:
    // 0x25c7a4: 0x90760000  lbu         $s6, 0x0($v1)
    ctx->pc = 0x25c7a4u;
    SET_GPR_ZE32(ctx, 22, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_25c7a8:
    // 0x25c7a8: 0x32d700ff  andi        $s7, $s6, 0xFF
    ctx->pc = 0x25c7a8u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
label_25c7ac:
    // 0x25c7ac: 0x32e3003f  andi        $v1, $s7, 0x3F
    ctx->pc = 0x25c7acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)63);
label_25c7b0:
    // 0x25c7b0: 0x307100ff  andi        $s1, $v1, 0xFF
    ctx->pc = 0x25c7b0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_25c7b4:
    // 0x25c7b4: 0x323400ff  andi        $s4, $s1, 0xFF
    ctx->pc = 0x25c7b4u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_25c7b8:
    // 0x25c7b8: 0xafb4015c  sw          $s4, 0x15C($sp)
    ctx->pc = 0x25c7b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 20));
label_25c7bc:
    // 0x25c7bc: 0x8fa50168  lw          $a1, 0x168($sp)
    ctx->pc = 0x25c7bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
label_25c7c0:
    // 0x25c7c0: 0x141880  sll         $v1, $s4, 2
    ctx->pc = 0x25c7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_25c7c4:
    // 0x25c7c4: 0x742021  addu        $a0, $v1, $s4
    ctx->pc = 0x25c7c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_25c7c8:
    // 0x25c7c8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x25c7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_25c7cc:
    // 0x25c7cc: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x25c7ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_25c7d0:
    // 0x25c7d0: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x25c7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_25c7d4:
    // 0x25c7d4: 0x8cb002d0  lw          $s0, 0x2D0($a1)
    ctx->pc = 0x25c7d4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 720)));
label_25c7d8:
    // 0x25c7d8: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x25c7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_25c7dc:
    // 0x25c7dc: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x25c7dcu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_25c7e0:
    // 0x25c7e0: 0x72009628  paddub      $s2, $s0, $zero
    ctx->pc = 0x25c7e0u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_25c7e4:
    // 0x25c7e4: 0x8fa30168  lw          $v1, 0x168($sp)
    ctx->pc = 0x25c7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
label_25c7e8:
    // 0x25c7e8: 0x946309e0  lhu         $v1, 0x9E0($v1)
    ctx->pc = 0x25c7e8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2528)));
label_25c7ec:
    // 0x25c7ec: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x25c7ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_25c7f0:
    // 0x25c7f0: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x25c7f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_25c7f4:
    // 0x25c7f4: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
label_25c7f8:
    if (ctx->pc == 0x25C7F8u) {
        ctx->pc = 0x25C7FCu;
        goto label_25c7fc;
    }
    ctx->pc = 0x25C7F4u;
    {
        const bool branch_taken_0x25c7f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25c7f4) {
            ctx->pc = 0x25C840u;
            goto label_25c840;
        }
    }
    ctx->pc = 0x25C7FCu;
label_25c7fc:
    // 0x25c7fc: 0x8fa30168  lw          $v1, 0x168($sp)
    ctx->pc = 0x25c7fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
label_25c800:
    // 0x25c800: 0x8c630354  lw          $v1, 0x354($v1)
    ctx->pc = 0x25c800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 852)));
label_25c804:
    // 0x25c804: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
label_25c808:
    if (ctx->pc == 0x25C808u) {
        ctx->pc = 0x25C80Cu;
        goto label_25c80c;
    }
    ctx->pc = 0x25C804u;
    {
        const bool branch_taken_0x25c804 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25c804) {
            ctx->pc = 0x25C840u;
            goto label_25c840;
        }
    }
    ctx->pc = 0x25C80Cu;
label_25c80c:
    // 0x25c80c: 0x8fa30168  lw          $v1, 0x168($sp)
    ctx->pc = 0x25c80cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
label_25c810:
    // 0x25c810: 0x8c630354  lw          $v1, 0x354($v1)
    ctx->pc = 0x25c810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 852)));
label_25c814:
    // 0x25c814: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x25c814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_25c818:
    // 0x25c818: 0x90710000  lbu         $s1, 0x0($v1)
    ctx->pc = 0x25c818u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_25c81c:
    // 0x25c81c: 0x323400ff  andi        $s4, $s1, 0xFF
    ctx->pc = 0x25c81cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_25c820:
    // 0x25c820: 0x8fa50168  lw          $a1, 0x168($sp)
    ctx->pc = 0x25c820u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
label_25c824:
    // 0x25c824: 0x141880  sll         $v1, $s4, 2
    ctx->pc = 0x25c824u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_25c828:
    // 0x25c828: 0x742021  addu        $a0, $v1, $s4
    ctx->pc = 0x25c828u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_25c82c:
    // 0x25c82c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x25c82cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_25c830:
    // 0x25c830: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x25c830u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_25c834:
    // 0x25c834: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x25c834u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_25c838:
    // 0x25c838: 0x8cb202d0  lw          $s2, 0x2D0($a1)
    ctx->pc = 0x25c838u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 720)));
label_25c83c:
    // 0x25c83c: 0x2439021  addu        $s2, $s2, $v1
    ctx->pc = 0x25c83cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
label_25c840:
    // 0x25c840: 0x32e300c0  andi        $v1, $s7, 0xC0
    ctx->pc = 0x25c840u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)192);
label_25c844:
    // 0x25c844: 0x14600027  bnez        $v1, . + 4 + (0x27 << 2)
label_25c848:
    if (ctx->pc == 0x25C848u) {
        ctx->pc = 0x25C84Cu;
        goto label_25c84c;
    }
    ctx->pc = 0x25C844u;
    {
        const bool branch_taken_0x25c844 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x25c844) {
            ctx->pc = 0x25C8E4u;
            goto label_25c8e4;
        }
    }
    ctx->pc = 0x25C84Cu;
label_25c84c:
    // 0x25c84c: 0x96030140  lhu         $v1, 0x140($s0)
    ctx->pc = 0x25c84cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
label_25c850:
    // 0x25c850: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x25c850u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_25c854:
    // 0x25c854: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x25c854u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
label_25c858:
    // 0x25c858: 0x14600047  bnez        $v1, . + 4 + (0x47 << 2)
label_25c85c:
    if (ctx->pc == 0x25C85Cu) {
        ctx->pc = 0x25C860u;
        goto label_25c860;
    }
    ctx->pc = 0x25C858u;
    {
        const bool branch_taken_0x25c858 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x25c858) {
            ctx->pc = 0x25C978u;
            goto label_25c978;
        }
    }
    ctx->pc = 0x25C860u;
label_25c860:
    // 0x25c860: 0x142080  sll         $a0, $s4, 2
    ctx->pc = 0x25c860u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_25c864:
    // 0x25c864: 0x8fa30168  lw          $v1, 0x168($sp)
    ctx->pc = 0x25c864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
label_25c868:
    // 0x25c868: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x25c868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_25c86c:
    // 0x25c86c: 0x8c630370  lw          $v1, 0x370($v1)
    ctx->pc = 0x25c86cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 880)));
label_25c870:
    // 0x25c870: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
label_25c874:
    if (ctx->pc == 0x25C874u) {
        ctx->pc = 0x25C878u;
        goto label_25c878;
    }
    ctx->pc = 0x25C870u;
    {
        const bool branch_taken_0x25c870 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25c870) {
            ctx->pc = 0x25C8C4u;
            goto label_25c8c4;
        }
    }
    ctx->pc = 0x25C878u;
label_25c878:
    // 0x25c878: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25c878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_25c87c:
    // 0x25c87c: 0xa7a200fa  sh          $v0, 0xFA($sp)
    ctx->pc = 0x25c87cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 250), (uint16_t)GPR_U32(ctx, 2));
label_25c880:
    // 0x25c880: 0x141080  sll         $v0, $s4, 2
    ctx->pc = 0x25c880u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_25c884:
    // 0x25c884: 0x8fb60168  lw          $s6, 0x168($sp)
    ctx->pc = 0x25c884u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
label_25c888:
    // 0x25c888: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x25c888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
label_25c88c:
    // 0x25c88c: 0x8c420370  lw          $v0, 0x370($v0)
    ctx->pc = 0x25c88cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 880)));
label_25c890:
    // 0x25c890: 0xafa200fc  sw          $v0, 0xFC($sp)
    ctx->pc = 0x25c890u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 2));
label_25c894:
    // 0x25c894: 0x148840  sll         $s1, $s4, 1
    ctx->pc = 0x25c894u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
label_25c898:
    // 0x25c898: 0x2343021  addu        $a2, $s1, $s4
    ctx->pc = 0x25c898u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
label_25c89c:
    // 0x25c89c: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x25c89cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_25c8a0:
    // 0x25c8a0: 0x8fa30168  lw          $v1, 0x168($sp)
    ctx->pc = 0x25c8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
label_25c8a4:
    // 0x25c8a4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x25c8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_25c8a8:
    // 0x25c8a8: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x25c8a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_25c8ac:
    // 0x25c8ac: 0x26050104  addiu       $a1, $s0, 0x104
    ctx->pc = 0x25c8acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 260));
label_25c8b0:
    // 0x25c8b0: 0x24460608  addiu       $a2, $v0, 0x608
    ctx->pc = 0x25c8b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1544));
label_25c8b4:
    // 0x25c8b4: 0xc098ba0  jal         func_262E80
label_25c8b8:
    if (ctx->pc == 0x25C8B8u) {
        ctx->pc = 0x25C8BCu;
        goto label_25c8bc;
    }
    ctx->pc = 0x25C8B4u;
    SET_GPR_U32(ctx, 31, 0x25C8BCu);
    ctx->pc = 0x262E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262E80u, 0x25C8B4u, 0x25C8BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C8BCu;
label_25c8bc:
    // 0x25c8bc: 0x1000002e  b           . + 4 + (0x2E << 2)
label_25c8c0:
    if (ctx->pc == 0x25C8C0u) {
        ctx->pc = 0x25C8C4u;
        goto label_25c8c4;
    }
    ctx->pc = 0x25C8BCu;
    {
        const bool branch_taken_0x25c8bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25c8bc) {
            ctx->pc = 0x25C978u;
            goto label_25c978;
        }
    }
    ctx->pc = 0x25C8C4u;
label_25c8c4:
    // 0x25c8c4: 0xc6400104  lwc1        $f0, 0x104($s2)
    ctx->pc = 0x25c8c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25c8c8:
    // 0x25c8c8: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x25c8c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
label_25c8cc:
    // 0x25c8cc: 0xc6400108  lwc1        $f0, 0x108($s2)
    ctx->pc = 0x25c8ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25c8d0:
    // 0x25c8d0: 0xe6000108  swc1        $f0, 0x108($s0)
    ctx->pc = 0x25c8d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 264), bits); }
label_25c8d4:
    // 0x25c8d4: 0xc640010c  lwc1        $f0, 0x10C($s2)
    ctx->pc = 0x25c8d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25c8d8:
    // 0x25c8d8: 0xe600010c  swc1        $f0, 0x10C($s0)
    ctx->pc = 0x25c8d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 268), bits); }
label_25c8dc:
    // 0x25c8dc: 0x10000026  b           . + 4 + (0x26 << 2)
label_25c8e0:
    if (ctx->pc == 0x25C8E0u) {
        ctx->pc = 0x25C8E4u;
        goto label_25c8e4;
    }
    ctx->pc = 0x25C8DCu;
    {
        const bool branch_taken_0x25c8dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25c8dc) {
            ctx->pc = 0x25C978u;
            goto label_25c978;
        }
    }
    ctx->pc = 0x25C8E4u;
label_25c8e4:
    // 0x25c8e4: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x25c8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_25c8e8:
    // 0x25c8e8: 0x12e30023  beq         $s7, $v1, . + 4 + (0x23 << 2)
label_25c8ec:
    if (ctx->pc == 0x25C8ECu) {
        ctx->pc = 0x25C8F0u;
        goto label_25c8f0;
    }
    ctx->pc = 0x25C8E8u;
    {
        const bool branch_taken_0x25c8e8 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 3));
        if (branch_taken_0x25c8e8) {
            ctx->pc = 0x25C978u;
            goto label_25c978;
        }
    }
    ctx->pc = 0x25C8F0u;
label_25c8f0:
    // 0x25c8f0: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x25c8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_25c8f4:
    // 0x25c8f4: 0x12e30020  beq         $s7, $v1, . + 4 + (0x20 << 2)
label_25c8f8:
    if (ctx->pc == 0x25C8F8u) {
        ctx->pc = 0x25C8FCu;
        goto label_25c8fc;
    }
    ctx->pc = 0x25C8F4u;
    {
        const bool branch_taken_0x25c8f4 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 3));
        if (branch_taken_0x25c8f4) {
            ctx->pc = 0x25C978u;
            goto label_25c978;
        }
    }
    ctx->pc = 0x25C8FCu;
label_25c8fc:
    // 0x25c8fc: 0x142080  sll         $a0, $s4, 2
    ctx->pc = 0x25c8fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_25c900:
    // 0x25c900: 0x8fa30168  lw          $v1, 0x168($sp)
    ctx->pc = 0x25c900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
label_25c904:
    // 0x25c904: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x25c904u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_25c908:
    // 0x25c908: 0x8c6304b0  lw          $v1, 0x4B0($v1)
    ctx->pc = 0x25c908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1200)));
label_25c90c:
    // 0x25c90c: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
label_25c910:
    if (ctx->pc == 0x25C910u) {
        ctx->pc = 0x25C914u;
        goto label_25c914;
    }
    ctx->pc = 0x25C90Cu;
    {
        const bool branch_taken_0x25c90c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25c90c) {
            ctx->pc = 0x25C960u;
            goto label_25c960;
        }
    }
    ctx->pc = 0x25C914u;
label_25c914:
    // 0x25c914: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x25c914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_25c918:
    // 0x25c918: 0xa7a200fa  sh          $v0, 0xFA($sp)
    ctx->pc = 0x25c918u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 250), (uint16_t)GPR_U32(ctx, 2));
label_25c91c:
    // 0x25c91c: 0x141880  sll         $v1, $s4, 2
    ctx->pc = 0x25c91cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_25c920:
    // 0x25c920: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x25c920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
label_25c924:
    // 0x25c924: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x25c924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_25c928:
    // 0x25c928: 0x8c5104b0  lw          $s1, 0x4B0($v0)
    ctx->pc = 0x25c928u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1200)));
label_25c92c:
    // 0x25c92c: 0xafb100fc  sw          $s1, 0xFC($sp)
    ctx->pc = 0x25c92cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 17));
label_25c930:
    // 0x25c930: 0x142840  sll         $a1, $s4, 1
    ctx->pc = 0x25c930u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
label_25c934:
    // 0x25c934: 0xb41021  addu        $v0, $a1, $s4
    ctx->pc = 0x25c934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 20)));
label_25c938:
    // 0x25c938: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x25c938u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_25c93c:
    // 0x25c93c: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x25c93cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
label_25c940:
    // 0x25c940: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x25c940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_25c944:
    // 0x25c944: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x25c944u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_25c948:
    // 0x25c948: 0x26050110  addiu       $a1, $s0, 0x110
    ctx->pc = 0x25c948u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
label_25c94c:
    // 0x25c94c: 0x244607e8  addiu       $a2, $v0, 0x7E8
    ctx->pc = 0x25c94cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 2024));
label_25c950:
    // 0x25c950: 0xc098ba0  jal         func_262E80
label_25c954:
    if (ctx->pc == 0x25C954u) {
        ctx->pc = 0x25C958u;
        goto label_25c958;
    }
    ctx->pc = 0x25C950u;
    SET_GPR_U32(ctx, 31, 0x25C958u);
    ctx->pc = 0x262E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262E80u, 0x25C950u, 0x25C958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C958u;
label_25c958:
    // 0x25c958: 0x10000007  b           . + 4 + (0x7 << 2)
label_25c95c:
    if (ctx->pc == 0x25C95Cu) {
        ctx->pc = 0x25C960u;
        goto label_25c960;
    }
    ctx->pc = 0x25C958u;
    {
        const bool branch_taken_0x25c958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25c958) {
            ctx->pc = 0x25C978u;
            goto label_25c978;
        }
    }
    ctx->pc = 0x25C960u;
label_25c960:
    // 0x25c960: 0xc6400110  lwc1        $f0, 0x110($s2)
    ctx->pc = 0x25c960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25c964:
    // 0x25c964: 0xe6000110  swc1        $f0, 0x110($s0)
    ctx->pc = 0x25c964u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 272), bits); }
label_25c968:
    // 0x25c968: 0xc6400114  lwc1        $f0, 0x114($s2)
    ctx->pc = 0x25c968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25c96c:
    // 0x25c96c: 0xe6000114  swc1        $f0, 0x114($s0)
    ctx->pc = 0x25c96cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 276), bits); }
label_25c970:
    // 0x25c970: 0xc6400118  lwc1        $f0, 0x118($s2)
    ctx->pc = 0x25c970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25c974:
    // 0x25c974: 0xe6000118  swc1        $f0, 0x118($s0)
    ctx->pc = 0x25c974u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 280), bits); }
label_25c978:
    // 0x25c978: 0x26640001  addiu       $a0, $s3, 0x1
    ctx->pc = 0x25c978u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_25c97c:
    // 0x25c97c: 0x70809e28  paddub      $s3, $a0, $zero
    ctx->pc = 0x25c97cu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
label_25c980:
    // 0x25c980: 0x1e1c3c  dsll32      $v1, $fp, 16
    ctx->pc = 0x25c980u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 30) << (32 + 16));
label_25c984:
    // 0x25c984: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x25c984u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_25c988:
    // 0x25c988: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x25c988u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_25c98c:
    // 0x25c98c: 0x1460ff82  bnez        $v1, . + 4 + (-0x7E << 2)
label_25c990:
    if (ctx->pc == 0x25C990u) {
        ctx->pc = 0x25C994u;
        goto label_25c994;
    }
    ctx->pc = 0x25C98Cu;
    {
        const bool branch_taken_0x25c98c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x25c98c) {
            ctx->pc = 0x25C798u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25c798;
        }
    }
    ctx->pc = 0x25C994u;
label_25c994:
    // 0x25c994: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x25c994u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_25c998:
    // 0x25c998: 0x8fa30168  lw          $v1, 0x168($sp)
    ctx->pc = 0x25c998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
label_25c99c:
    // 0x25c99c: 0x8c630350  lw          $v1, 0x350($v1)
    ctx->pc = 0x25c99cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 848)));
label_25c9a0:
    // 0x25c9a0: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x25c9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_25c9a4:
    // 0x25c9a4: 0x90650000  lbu         $a1, 0x0($v1)
    ctx->pc = 0x25c9a4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_25c9a8:
    // 0x25c9a8: 0x30b600ff  andi        $s6, $a1, 0xFF
    ctx->pc = 0x25c9a8u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_25c9ac:
    // 0x25c9ac: 0x32c3003f  andi        $v1, $s6, 0x3F
    ctx->pc = 0x25c9acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)63);
label_25c9b0:
    // 0x25c9b0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x25c9b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_25c9b4:
    // 0x25c9b4: 0x307100ff  andi        $s1, $v1, 0xFF
    ctx->pc = 0x25c9b4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_25c9b8:
    // 0x25c9b8: 0x7220ae28  paddub      $s5, $s1, $zero
    ctx->pc = 0x25c9b8u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_25c9bc:
    // 0x25c9bc: 0x8fa60168  lw          $a2, 0x168($sp)
    ctx->pc = 0x25c9bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
label_25c9c0:
    // 0x25c9c0: 0x112880  sll         $a1, $s1, 2
    ctx->pc = 0x25c9c0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_25c9c4:
    // 0x25c9c4: 0xb11821  addu        $v1, $a1, $s1
    ctx->pc = 0x25c9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
label_25c9c8:
    // 0x25c9c8: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x25c9c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_25c9cc:
    // 0x25c9cc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x25c9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_25c9d0:
    // 0x25c9d0: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x25c9d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_25c9d4:
    // 0x25c9d4: 0x8cc302d0  lw          $v1, 0x2D0($a2)
    ctx->pc = 0x25c9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 720)));
label_25c9d8:
    // 0x25c9d8: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x25c9d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_25c9dc:
    // 0x25c9dc: 0x72009628  paddub      $s2, $s0, $zero
    ctx->pc = 0x25c9dcu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_25c9e0:
    // 0x25c9e0: 0x32c300c0  andi        $v1, $s6, 0xC0
    ctx->pc = 0x25c9e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)192);
label_25c9e4:
    // 0x25c9e4: 0x14600048  bnez        $v1, . + 4 + (0x48 << 2)
label_25c9e8:
    if (ctx->pc == 0x25C9E8u) {
        ctx->pc = 0x25C9ECu;
        goto label_25c9ec;
    }
    ctx->pc = 0x25C9E4u;
    {
        const bool branch_taken_0x25c9e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x25c9e4) {
            ctx->pc = 0x25CB08u;
            goto label_25cb08;
        }
    }
    ctx->pc = 0x25C9ECu;
label_25c9ec:
    // 0x25c9ec: 0x96030140  lhu         $v1, 0x140($s0)
    ctx->pc = 0x25c9ecu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
label_25c9f0:
    // 0x25c9f0: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x25c9f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_25c9f4:
    // 0x25c9f4: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x25c9f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
label_25c9f8:
    // 0x25c9f8: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
label_25c9fc:
    if (ctx->pc == 0x25C9FCu) {
        ctx->pc = 0x25CA00u;
        goto label_25ca00;
    }
    ctx->pc = 0x25C9F8u;
    {
        const bool branch_taken_0x25c9f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x25c9f8) {
            ctx->pc = 0x25CA40u;
            goto label_25ca40;
        }
    }
    ctx->pc = 0x25CA00u;
label_25ca00:
    // 0x25ca00: 0x8fa40168  lw          $a0, 0x168($sp)
    ctx->pc = 0x25ca00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
label_25ca04:
    // 0x25ca04: 0x948309e0  lhu         $v1, 0x9E0($a0)
    ctx->pc = 0x25ca04u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2528)));
label_25ca08:
    // 0x25ca08: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x25ca08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_25ca0c:
    // 0x25ca0c: 0x30850004  andi        $a1, $a0, 0x4
    ctx->pc = 0x25ca0cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
label_25ca10:
    // 0x25ca10: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
label_25ca14:
    if (ctx->pc == 0x25CA14u) {
        ctx->pc = 0x25CA18u;
        goto label_25ca18;
    }
    ctx->pc = 0x25CA10u;
    {
        const bool branch_taken_0x25ca10 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x25ca10) {
            ctx->pc = 0x25CA40u;
            goto label_25ca40;
        }
    }
    ctx->pc = 0x25CA18u;
label_25ca18:
    // 0x25ca18: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x25ca18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
label_25ca1c:
    // 0x25ca1c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x25ca1cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_25ca20:
    // 0x25ca20: 0xc6000108  lwc1        $f0, 0x108($s0)
    ctx->pc = 0x25ca20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25ca24:
    // 0x25ca24: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x25ca24u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_25ca28:
    // 0x25ca28: 0xe6000108  swc1        $f0, 0x108($s0)
    ctx->pc = 0x25ca28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 264), bits); }
label_25ca2c:
    // 0x25ca2c: 0x3c04bf80  lui         $a0, 0xBF80
    ctx->pc = 0x25ca2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49024 << 16));
label_25ca30:
    // 0x25ca30: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x25ca30u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_25ca34:
    // 0x25ca34: 0xc600010c  lwc1        $f0, 0x10C($s0)
    ctx->pc = 0x25ca34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25ca38:
    // 0x25ca38: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x25ca38u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_25ca3c:
    // 0x25ca3c: 0xe600010c  swc1        $f0, 0x10C($s0)
    ctx->pc = 0x25ca3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 268), bits); }
label_25ca40:
    // 0x25ca40: 0x96050140  lhu         $a1, 0x140($s0)
    ctx->pc = 0x25ca40u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
label_25ca44:
    // 0x25ca44: 0x34a30040  ori         $v1, $a1, 0x40
    ctx->pc = 0x25ca44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)64);
label_25ca48:
    // 0x25ca48: 0xa6030140  sh          $v1, 0x140($s0)
    ctx->pc = 0x25ca48u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 3));
label_25ca4c:
    // 0x25ca4c: 0x96040140  lhu         $a0, 0x140($s0)
    ctx->pc = 0x25ca4cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
label_25ca50:
    // 0x25ca50: 0x3085ffff  andi        $a1, $a0, 0xFFFF
    ctx->pc = 0x25ca50u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
label_25ca54:
    // 0x25ca54: 0x30a30004  andi        $v1, $a1, 0x4
    ctx->pc = 0x25ca54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4);
label_25ca58:
    // 0x25ca58: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
label_25ca5c:
    if (ctx->pc == 0x25CA5Cu) {
        ctx->pc = 0x25CA60u;
        goto label_25ca60;
    }
    ctx->pc = 0x25CA58u;
    {
        const bool branch_taken_0x25ca58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25ca58) {
            ctx->pc = 0x25CA9Cu;
            goto label_25ca9c;
        }
    }
    ctx->pc = 0x25CA60u;
label_25ca60:
    // 0x25ca60: 0x96060140  lhu         $a2, 0x140($s0)
    ctx->pc = 0x25ca60u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
label_25ca64:
    // 0x25ca64: 0x30c3ffff  andi        $v1, $a2, 0xFFFF
    ctx->pc = 0x25ca64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
label_25ca68:
    // 0x25ca68: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x25ca68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
label_25ca6c:
    // 0x25ca6c: 0x14600176  bnez        $v1, . + 4 + (0x176 << 2)
label_25ca70:
    if (ctx->pc == 0x25CA70u) {
        ctx->pc = 0x25CA74u;
        goto label_25ca74;
    }
    ctx->pc = 0x25CA6Cu;
    {
        const bool branch_taken_0x25ca6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x25ca6c) {
            ctx->pc = 0x25D048u;
            goto label_25d048;
        }
    }
    ctx->pc = 0x25CA74u;
label_25ca74:
    // 0x25ca74: 0x8fa30168  lw          $v1, 0x168($sp)
    ctx->pc = 0x25ca74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
label_25ca78:
    // 0x25ca78: 0x152180  sll         $a0, $s5, 6
    ctx->pc = 0x25ca78u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 21), 6));
label_25ca7c:
    // 0x25ca7c: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x25ca7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
label_25ca80:
    // 0x25ca80: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x25ca80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_25ca84:
    // 0x25ca84: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x25ca84u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_25ca88:
    // 0x25ca88: 0xc040ca2  jal         func_103288
label_25ca8c:
    if (ctx->pc == 0x25CA8Cu) {
        ctx->pc = 0x25CA90u;
        goto label_25ca90;
    }
    ctx->pc = 0x25CA88u;
    SET_GPR_U32(ctx, 31, 0x25CA90u);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x25CA90u;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25CA90u) { return; }
    ctx->pc = 0x25CA90u;
label_25ca90:
    // 0x25ca90: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x25ca90u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_25ca94:
    // 0x25ca94: 0x1000016c  b           . + 4 + (0x16C << 2)
label_25ca98:
    if (ctx->pc == 0x25CA98u) {
        ctx->pc = 0x25CA9Cu;
        goto label_25ca9c;
    }
    ctx->pc = 0x25CA94u;
    {
        const bool branch_taken_0x25ca94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25ca94) {
            ctx->pc = 0x25D048u;
            goto label_25d048;
        }
    }
    ctx->pc = 0x25CA9Cu;
label_25ca9c:
    // 0x25ca9c: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x25ca9cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_25caa0:
    // 0x25caa0: 0xc60c0104  lwc1        $f12, 0x104($s0)
    ctx->pc = 0x25caa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_25caa4:
    // 0x25caa4: 0xc0677d8  jal         func_19DF60
label_25caa8:
    if (ctx->pc == 0x25CAA8u) {
        ctx->pc = 0x25CAACu;
        goto label_25caac;
    }
    ctx->pc = 0x25CAA4u;
    SET_GPR_U32(ctx, 31, 0x25CAACu);
    ctx->pc = 0x19DF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DF60u, 0x25CAA4u, 0x25CAACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CAACu;
label_25caac:
    // 0x25caac: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x25caacu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_25cab0:
    // 0x25cab0: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x25cab0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_25cab4:
    // 0x25cab4: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x25cab4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_25cab8:
    // 0x25cab8: 0xc60c0108  lwc1        $f12, 0x108($s0)
    ctx->pc = 0x25cab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_25cabc:
    // 0x25cabc: 0xc067808  jal         func_19E020
label_25cac0:
    if (ctx->pc == 0x25CAC0u) {
        ctx->pc = 0x25CAC4u;
        goto label_25cac4;
    }
    ctx->pc = 0x25CABCu;
    SET_GPR_U32(ctx, 31, 0x25CAC4u);
    ctx->pc = 0x19E020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E020u, 0x25CABCu, 0x25CAC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CAC4u;
label_25cac4:
    // 0x25cac4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x25cac4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_25cac8:
    // 0x25cac8: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x25cac8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_25cacc:
    // 0x25cacc: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x25caccu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_25cad0:
    // 0x25cad0: 0xc60c010c  lwc1        $f12, 0x10C($s0)
    ctx->pc = 0x25cad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_25cad4:
    // 0x25cad4: 0xc0676d0  jal         func_19DB40
label_25cad8:
    if (ctx->pc == 0x25CAD8u) {
        ctx->pc = 0x25CADCu;
        goto label_25cadc;
    }
    ctx->pc = 0x25CAD4u;
    SET_GPR_U32(ctx, 31, 0x25CADCu);
    ctx->pc = 0x19DB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DB40u, 0x25CAD4u, 0x25CADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CADCu;
label_25cadc:
    // 0x25cadc: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x25cadcu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_25cae0:
    // 0x25cae0: 0x8fa40168  lw          $a0, 0x168($sp)
    ctx->pc = 0x25cae0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
label_25cae4:
    // 0x25cae4: 0x151180  sll         $v0, $s5, 6
    ctx->pc = 0x25cae4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 6));
label_25cae8:
    // 0x25cae8: 0x8c830130  lw          $v1, 0x130($a0)
    ctx->pc = 0x25cae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
label_25caec:
    // 0x25caec: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x25caecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_25caf0:
    // 0x25caf0: 0x8e050100  lw          $a1, 0x100($s0)
    ctx->pc = 0x25caf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
label_25caf4:
    // 0x25caf4: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x25caf4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_25caf8:
    // 0x25caf8: 0xc0675f8  jal         func_19D7E0
label_25cafc:
    if (ctx->pc == 0x25CAFCu) {
        ctx->pc = 0x25CB00u;
        goto label_25cb00;
    }
    ctx->pc = 0x25CAF8u;
    SET_GPR_U32(ctx, 31, 0x25CB00u);
    ctx->pc = 0x19D7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D7E0u, 0x25CAF8u, 0x25CB00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CB00u;
label_25cb00:
    // 0x25cb00: 0x10000151  b           . + 4 + (0x151 << 2)
label_25cb04:
    if (ctx->pc == 0x25CB04u) {
        ctx->pc = 0x25CB08u;
        goto label_25cb08;
    }
    ctx->pc = 0x25CB00u;
    {
        const bool branch_taken_0x25cb00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25cb00) {
            ctx->pc = 0x25D048u;
            goto label_25d048;
        }
    }
    ctx->pc = 0x25CB08u;
label_25cb08:
    // 0x25cb08: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x25cb08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_25cb0c:
    // 0x25cb0c: 0x12c3014e  beq         $s6, $v1, . + 4 + (0x14E << 2)
label_25cb10:
    if (ctx->pc == 0x25CB10u) {
        ctx->pc = 0x25CB14u;
        goto label_25cb14;
    }
    ctx->pc = 0x25CB0Cu;
    {
        const bool branch_taken_0x25cb0c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 3));
        if (branch_taken_0x25cb0c) {
            ctx->pc = 0x25D048u;
            goto label_25d048;
        }
    }
    ctx->pc = 0x25CB14u;
label_25cb14:
    // 0x25cb14: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x25cb14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_25cb18:
    // 0x25cb18: 0x12c3014b  beq         $s6, $v1, . + 4 + (0x14B << 2)
label_25cb1c:
    if (ctx->pc == 0x25CB1Cu) {
        ctx->pc = 0x25CB20u;
        goto label_25cb20;
    }
    ctx->pc = 0x25CB18u;
    {
        const bool branch_taken_0x25cb18 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 3));
        if (branch_taken_0x25cb18) {
            ctx->pc = 0x25D048u;
            goto label_25d048;
        }
    }
    ctx->pc = 0x25CB20u;
label_25cb20:
    // 0x25cb20: 0x8fa30168  lw          $v1, 0x168($sp)
    ctx->pc = 0x25cb20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
label_25cb24:
    // 0x25cb24: 0x8c63034c  lw          $v1, 0x34C($v1)
    ctx->pc = 0x25cb24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 844)));
label_25cb28:
    // 0x25cb28: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x25cb28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_25cb2c:
    // 0x25cb2c: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x25cb2cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_25cb30:
    // 0x25cb30: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x25cb30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_25cb34:
    // 0x25cb34: 0x2065fffd  addi        $a1, $v1, -0x3
    ctx->pc = 0x25cb34u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)4294967293, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
label_25cb38:
    // 0x25cb38: 0x2ca10010  sltiu       $at, $a1, 0x10
    ctx->pc = 0x25cb38u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_25cb3c:
    // 0x25cb3c: 0x10200142  beqz        $at, . + 4 + (0x142 << 2)
label_25cb40:
    if (ctx->pc == 0x25CB40u) {
        ctx->pc = 0x25CB44u;
        goto label_25cb44;
    }
    ctx->pc = 0x25CB3Cu;
    {
        const bool branch_taken_0x25cb3c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x25cb3c) {
            ctx->pc = 0x25D048u;
            goto label_25d048;
        }
    }
    ctx->pc = 0x25CB44u;
label_25cb44:
    // 0x25cb44: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x25cb44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_25cb48:
    // 0x25cb48: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x25cb48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_25cb4c:
    // 0x25cb4c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x25cb4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_25cb50:
    // 0x25cb50: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x25cb50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_25cb54:
    // 0x25cb54: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x25cb54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_25cb58:
    // 0x25cb58: 0x800008  jr          $a0
label_25cb5c:
    if (ctx->pc == 0x25CB5Cu) {
        ctx->pc = 0x25CB60u;
        goto label_25cb60;
    }
    ctx->pc = 0x25CB58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25CB58u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x25CB60u;
label_25cb60:
    // 0x25cb60: 0xc6000110  lwc1        $f0, 0x110($s0)
    ctx->pc = 0x25cb60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25cb64:
    // 0x25cb64: 0xe6000134  swc1        $f0, 0x134($s0)
    ctx->pc = 0x25cb64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 308), bits); }
label_25cb68:
    // 0x25cb68: 0xc6000114  lwc1        $f0, 0x114($s0)
    ctx->pc = 0x25cb68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25cb6c:
    // 0x25cb6c: 0xe6000138  swc1        $f0, 0x138($s0)
    ctx->pc = 0x25cb6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 312), bits); }
label_25cb70:
    // 0x25cb70: 0xc6000118  lwc1        $f0, 0x118($s0)
    ctx->pc = 0x25cb70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25cb74:
    // 0x25cb74: 0xe600013c  swc1        $f0, 0x13C($s0)
    ctx->pc = 0x25cb74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 316), bits); }
label_25cb78:
    // 0x25cb78: 0x96030140  lhu         $v1, 0x140($s0)
    ctx->pc = 0x25cb78u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
label_25cb7c:
    // 0x25cb7c: 0x34630600  ori         $v1, $v1, 0x600
    ctx->pc = 0x25cb7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1536);
label_25cb80:
    // 0x25cb80: 0xa6030140  sh          $v1, 0x140($s0)
    ctx->pc = 0x25cb80u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 3));
label_25cb84:
    // 0x25cb84: 0x10000130  b           . + 4 + (0x130 << 2)
label_25cb88:
    if (ctx->pc == 0x25CB88u) {
        ctx->pc = 0x25CB8Cu;
        goto label_25cb8c;
    }
    ctx->pc = 0x25CB84u;
    {
        const bool branch_taken_0x25cb84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25cb84) {
            ctx->pc = 0x25D048u;
            goto label_25d048;
        }
    }
    ctx->pc = 0x25CB8Cu;
label_25cb8c:
    // 0x25cb8c: 0x96030140  lhu         $v1, 0x140($s0)
    ctx->pc = 0x25cb8cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
label_25cb90:
    // 0x25cb90: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x25cb90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
label_25cb94:
    // 0x25cb94: 0xa6030140  sh          $v1, 0x140($s0)
    ctx->pc = 0x25cb94u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 3));
label_25cb98:
    // 0x25cb98: 0xc6000110  lwc1        $f0, 0x110($s0)
    ctx->pc = 0x25cb98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25cb9c:
    // 0x25cb9c: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x25cb9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
label_25cba0:
    // 0x25cba0: 0xc6000114  lwc1        $f0, 0x114($s0)
    ctx->pc = 0x25cba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25cba4:
    // 0x25cba4: 0xe600012c  swc1        $f0, 0x12C($s0)
    ctx->pc = 0x25cba4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 300), bits); }
label_25cba8:
    // 0x25cba8: 0xc6000118  lwc1        $f0, 0x118($s0)
    ctx->pc = 0x25cba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25cbac:
    // 0x25cbac: 0xe6000130  swc1        $f0, 0x130($s0)
    ctx->pc = 0x25cbacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 304), bits); }
label_25cbb0:
    // 0x25cbb0: 0x10000125  b           . + 4 + (0x125 << 2)
label_25cbb4:
    if (ctx->pc == 0x25CBB4u) {
        ctx->pc = 0x25CBB8u;
        goto label_25cbb8;
    }
    ctx->pc = 0x25CBB0u;
    {
        const bool branch_taken_0x25cbb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25cbb0) {
            ctx->pc = 0x25D048u;
            goto label_25d048;
        }
    }
    ctx->pc = 0x25CBB8u;
label_25cbb8:
    // 0x25cbb8: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x25cbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
label_25cbbc:
    // 0x25cbbc: 0x944309e0  lhu         $v1, 0x9E0($v0)
    ctx->pc = 0x25cbbcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2528)));
label_25cbc0:
    // 0x25cbc0: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x25cbc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_25cbc4:
    // 0x25cbc4: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x25cbc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_25cbc8:
    // 0x25cbc8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_25cbcc:
    if (ctx->pc == 0x25CBCCu) {
        ctx->pc = 0x25CBD0u;
        goto label_25cbd0;
    }
    ctx->pc = 0x25CBC8u;
    {
        const bool branch_taken_0x25cbc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25cbc8) {
            ctx->pc = 0x25CBE8u;
            goto label_25cbe8;
        }
    }
    ctx->pc = 0x25CBD0u;
label_25cbd0:
    // 0x25cbd0: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x25cbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_25cbd4:
    // 0x25cbd4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x25cbd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_25cbd8:
    // 0x25cbd8: 0xc6000110  lwc1        $f0, 0x110($s0)
    ctx->pc = 0x25cbd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25cbdc:
    // 0x25cbdc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x25cbdcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_25cbe0:
    // 0x25cbe0: 0xe6000110  swc1        $f0, 0x110($s0)
    ctx->pc = 0x25cbe0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 272), bits); }
label_25cbe4:
    // 0x25cbe4: 0x0  nop
    ctx->pc = 0x25cbe4u;
    // NOP
label_25cbe8:
    // 0x25cbe8: 0xc6000110  lwc1        $f0, 0x110($s0)
    ctx->pc = 0x25cbe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25cbec:
    // 0x25cbec: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x25cbecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
label_25cbf0:
    // 0x25cbf0: 0xc6000114  lwc1        $f0, 0x114($s0)
    ctx->pc = 0x25cbf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25cbf4:
    // 0x25cbf4: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x25cbf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
label_25cbf8:
    // 0x25cbf8: 0xc6000118  lwc1        $f0, 0x118($s0)
    ctx->pc = 0x25cbf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25cbfc:
    // 0x25cbfc: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x25cbfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
label_25cc00:
    // 0x25cc00: 0xc6000110  lwc1        $f0, 0x110($s0)
    ctx->pc = 0x25cc00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25cc04:
    // 0x25cc04: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x25cc04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
label_25cc08:
    // 0x25cc08: 0x151900  sll         $v1, $s5, 4
    ctx->pc = 0x25cc08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
label_25cc0c:
    // 0x25cc0c: 0x8c420330  lw          $v0, 0x330($v0)
    ctx->pc = 0x25cc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 816)));
label_25cc10:
    // 0x25cc10: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x25cc10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_25cc14:
    // 0x25cc14: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x25cc14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_25cc18:
    // 0x25cc18: 0xc6000114  lwc1        $f0, 0x114($s0)
    ctx->pc = 0x25cc18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25cc1c:
    // 0x25cc1c: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x25cc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
label_25cc20:
    // 0x25cc20: 0x152100  sll         $a0, $s5, 4
    ctx->pc = 0x25cc20u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
label_25cc24:
    // 0x25cc24: 0x8c420330  lw          $v0, 0x330($v0)
    ctx->pc = 0x25cc24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 816)));
label_25cc28:
    // 0x25cc28: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x25cc28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_25cc2c:
    // 0x25cc2c: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x25cc2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
label_25cc30:
    // 0x25cc30: 0xc6000118  lwc1        $f0, 0x118($s0)
    ctx->pc = 0x25cc30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25cc34:
    // 0x25cc34: 0x8fa30168  lw          $v1, 0x168($sp)
    ctx->pc = 0x25cc34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
label_25cc38:
    // 0x25cc38: 0x151100  sll         $v0, $s5, 4
    ctx->pc = 0x25cc38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
label_25cc3c:
    // 0x25cc3c: 0x8c640330  lw          $a0, 0x330($v1)
    ctx->pc = 0x25cc3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 816)));
label_25cc40:
    // 0x25cc40: 0x822821  addu        $a1, $a0, $v0
    ctx->pc = 0x25cc40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_25cc44:
    // 0x25cc44: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x25cc44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
label_25cc48:
    // 0x25cc48: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x25cc48u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_25cc4c:
    // 0x25cc4c: 0xc60c0104  lwc1        $f12, 0x104($s0)
    ctx->pc = 0x25cc4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_25cc50:
    // 0x25cc50: 0xc0677d8  jal         func_19DF60
label_25cc54:
    if (ctx->pc == 0x25CC54u) {
        ctx->pc = 0x25CC58u;
        goto label_25cc58;
    }
    ctx->pc = 0x25CC50u;
    SET_GPR_U32(ctx, 31, 0x25CC58u);
    ctx->pc = 0x19DF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DF60u, 0x25CC50u, 0x25CC58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CC58u;
label_25cc58:
    // 0x25cc58: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x25cc58u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_25cc5c:
    // 0x25cc5c: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x25cc5cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_25cc60:
    // 0x25cc60: 0xc60c0108  lwc1        $f12, 0x108($s0)
    ctx->pc = 0x25cc60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_25cc64:
    // 0x25cc64: 0xc067808  jal         func_19E020
label_25cc68:
    if (ctx->pc == 0x25CC68u) {
        ctx->pc = 0x25CC6Cu;
        goto label_25cc6c;
    }
    ctx->pc = 0x25CC64u;
    SET_GPR_U32(ctx, 31, 0x25CC6Cu);
    ctx->pc = 0x19E020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E020u, 0x25CC64u, 0x25CC6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CC6Cu;
label_25cc6c:
    // 0x25cc6c: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x25cc6cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_25cc70:
    // 0x25cc70: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x25cc70u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_25cc74:
    // 0x25cc74: 0xc60c010c  lwc1        $f12, 0x10C($s0)
    ctx->pc = 0x25cc74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_25cc78:
    // 0x25cc78: 0xc0676d0  jal         func_19DB40
label_25cc7c:
    if (ctx->pc == 0x25CC7Cu) {
        ctx->pc = 0x25CC80u;
        goto label_25cc80;
    }
    ctx->pc = 0x25CC78u;
    SET_GPR_U32(ctx, 31, 0x25CC80u);
    ctx->pc = 0x19DB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DB40u, 0x25CC78u, 0x25CC80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CC80u;
label_25cc80:
    // 0x25cc80: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x25cc80u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_25cc84:
    // 0x25cc84: 0x8fa30168  lw          $v1, 0x168($sp)
    ctx->pc = 0x25cc84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
label_25cc88:
    // 0x25cc88: 0x152180  sll         $a0, $s5, 6
    ctx->pc = 0x25cc88u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 21), 6));
label_25cc8c:
    // 0x25cc8c: 0x8c650130  lw          $a1, 0x130($v1)
    ctx->pc = 0x25cc8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
label_25cc90:
    // 0x25cc90: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x25cc90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_25cc94:
    // 0x25cc94: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x25cc94u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_25cc98:
    // 0x25cc98: 0x8e050100  lw          $a1, 0x100($s0)
    ctx->pc = 0x25cc98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
label_25cc9c:
    // 0x25cc9c: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x25cc9cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_25cca0:
    // 0x25cca0: 0xc0675f8  jal         func_19D7E0
label_25cca4:
    if (ctx->pc == 0x25CCA4u) {
        ctx->pc = 0x25CCA8u;
        goto label_25cca8;
    }
    ctx->pc = 0x25CCA0u;
    SET_GPR_U32(ctx, 31, 0x25CCA8u);
    ctx->pc = 0x19D7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D7E0u, 0x25CCA0u, 0x25CCA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CCA8u;
label_25cca8:
    // 0x25cca8: 0x100000e7  b           . + 4 + (0xE7 << 2)
label_25ccac:
    if (ctx->pc == 0x25CCACu) {
        ctx->pc = 0x25CCB0u;
        goto label_25ccb0;
    }
    ctx->pc = 0x25CCA8u;
    {
        const bool branch_taken_0x25cca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25cca8) {
            ctx->pc = 0x25D048u;
            goto label_25d048;
        }
    }
    ctx->pc = 0x25CCB0u;
label_25ccb0:
    // 0x25ccb0: 0xc6010110  lwc1        $f1, 0x110($s0)
    ctx->pc = 0x25ccb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25ccb4:
    // 0x25ccb4: 0x8fa30168  lw          $v1, 0x168($sp)
    ctx->pc = 0x25ccb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
label_25ccb8:
    // 0x25ccb8: 0xc46002e0  lwc1        $f0, 0x2E0($v1)
    ctx->pc = 0x25ccb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25ccbc:
    // 0x25ccbc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x25ccbcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_25ccc0:
    // 0x25ccc0: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x25ccc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_25ccc4:
    // 0x25ccc4: 0xc6000114  lwc1        $f0, 0x114($s0)
    ctx->pc = 0x25ccc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25ccc8:
    // 0x25ccc8: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x25ccc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_25cccc:
    // 0x25cccc: 0xc6010118  lwc1        $f1, 0x118($s0)
    ctx->pc = 0x25ccccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25ccd0:
    // 0x25ccd0: 0x8fa40168  lw          $a0, 0x168($sp)
    ctx->pc = 0x25ccd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
label_25ccd4:
    // 0x25ccd4: 0xc48002e8  lwc1        $f0, 0x2E8($a0)
    ctx->pc = 0x25ccd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25ccd8:
    // 0x25ccd8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x25ccd8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_25ccdc:
    // 0x25ccdc: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x25ccdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_25cce0:
    // 0x25cce0: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x25cce0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_25cce4:
    // 0x25cce4: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x25cce4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_25cce8:
    // 0x25cce8: 0x0  nop
    ctx->pc = 0x25cce8u;
    // NOP
label_25ccec:
    // 0x25ccec: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x25ccecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
label_25ccf0:
    // 0x25ccf0: 0x8fa30168  lw          $v1, 0x168($sp)
    ctx->pc = 0x25ccf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
label_25ccf4:
    // 0x25ccf4: 0x946309e0  lhu         $v1, 0x9E0($v1)
    ctx->pc = 0x25ccf4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2528)));
label_25ccf8:
    // 0x25ccf8: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x25ccf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_25ccfc:
    // 0x25ccfc: 0x30640004  andi        $a0, $v1, 0x4
    ctx->pc = 0x25ccfcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_25cd00:
    // 0x25cd00: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_25cd04:
    if (ctx->pc == 0x25CD04u) {
        ctx->pc = 0x25CD08u;
        goto label_25cd08;
    }
    ctx->pc = 0x25CD00u;
    {
        const bool branch_taken_0x25cd00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x25cd00) {
            ctx->pc = 0x25CD20u;
            goto label_25cd20;
        }
    }
    ctx->pc = 0x25CD08u;
label_25cd08:
    // 0x25cd08: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x25cd08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
label_25cd0c:
    // 0x25cd0c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x25cd0cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_25cd10:
    // 0x25cd10: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x25cd10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25cd14:
    // 0x25cd14: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x25cd14u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_25cd18:
    // 0x25cd18: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x25cd18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_25cd1c:
    // 0x25cd1c: 0x0  nop
    ctx->pc = 0x25cd1cu;
    // NOP
label_25cd20:
    // 0x25cd20: 0x96030140  lhu         $v1, 0x140($s0)
    ctx->pc = 0x25cd20u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
label_25cd24:
    // 0x25cd24: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x25cd24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
label_25cd28:
    // 0x25cd28: 0xa6030140  sh          $v1, 0x140($s0)
    ctx->pc = 0x25cd28u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 3));
label_25cd2c:
    // 0x25cd2c: 0x96030140  lhu         $v1, 0x140($s0)
    ctx->pc = 0x25cd2cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
label_25cd30:
    // 0x25cd30: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x25cd30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_25cd34:
    // 0x25cd34: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x25cd34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_25cd38:
    // 0x25cd38: 0x146000c3  bnez        $v1, . + 4 + (0xC3 << 2)
label_25cd3c:
    if (ctx->pc == 0x25CD3Cu) {
        ctx->pc = 0x25CD40u;
        goto label_25cd40;
    }
    ctx->pc = 0x25CD38u;
    {
        const bool branch_taken_0x25cd38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x25cd38) {
            ctx->pc = 0x25D048u;
            goto label_25d048;
        }
    }
    ctx->pc = 0x25CD40u;
label_25cd40:
    // 0x25cd40: 0x8fa30168  lw          $v1, 0x168($sp)
    ctx->pc = 0x25cd40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
label_25cd44:
    // 0x25cd44: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x25cd44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_25cd48:
    // 0x25cd48: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x25cd48u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_25cd4c:
    // 0x25cd4c: 0x246500e0  addiu       $a1, $v1, 0xE0
    ctx->pc = 0x25cd4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 224));
label_25cd50:
    // 0x25cd50: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x25cd50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_25cd54:
    // 0x25cd54: 0xc040bf4  jal         func_102FD0
label_25cd58:
    if (ctx->pc == 0x25CD58u) {
        ctx->pc = 0x25CD5Cu;
        goto label_25cd5c;
    }
    ctx->pc = 0x25CD54u;
    SET_GPR_U32(ctx, 31, 0x25CD5Cu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x25CD5Cu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25CD5Cu) { return; }
    ctx->pc = 0x25CD5Cu;
label_25cd5c:
    // 0x25cd5c: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x25cd5cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_25cd60:
    // 0x25cd60: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x25cd60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_25cd64:
    // 0x25cd64: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x25cd64u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_25cd68:
    // 0x25cd68: 0xc040cbc  jal         func_1032F0
label_25cd6c:
    if (ctx->pc == 0x25CD6Cu) {
        ctx->pc = 0x25CD70u;
        goto label_25cd70;
    }
    ctx->pc = 0x25CD68u;
    SET_GPR_U32(ctx, 31, 0x25CD70u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x25CD70u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25CD70u) { return; }
    ctx->pc = 0x25CD70u;
label_25cd70:
    // 0x25cd70: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x25cd70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_25cd74:
    // 0x25cd74: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x25cd74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_25cd78:
    // 0x25cd78: 0xc60c0104  lwc1        $f12, 0x104($s0)
    ctx->pc = 0x25cd78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_25cd7c:
    // 0x25cd7c: 0xc040d0e  jal         func_103438
label_25cd80:
    if (ctx->pc == 0x25CD80u) {
        ctx->pc = 0x25CD84u;
        goto label_25cd84;
    }
    ctx->pc = 0x25CD7Cu;
    SET_GPR_U32(ctx, 31, 0x25CD84u);
    ctx->pc = 0x103438u;
    {
        ctx->pc = 0x25CD84u;
        ps2_stubs::sceVu0RotMatrixX(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25CD84u) { return; }
    ctx->pc = 0x25CD84u;
label_25cd84:
    // 0x25cd84: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x25cd84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_25cd88:
    // 0x25cd88: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x25cd88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_25cd8c:
    // 0x25cd8c: 0xc60c0108  lwc1        $f12, 0x108($s0)
    ctx->pc = 0x25cd8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_25cd90:
    // 0x25cd90: 0xc040d38  jal         func_1034E0
label_25cd94:
    if (ctx->pc == 0x25CD94u) {
        ctx->pc = 0x25CD98u;
        goto label_25cd98;
    }
    ctx->pc = 0x25CD90u;
    SET_GPR_U32(ctx, 31, 0x25CD98u);
    ctx->pc = 0x1034E0u;
    {
        ctx->pc = 0x25CD98u;
        ps2_stubs::sceVu0RotMatrixY(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25CD98u) { return; }
    ctx->pc = 0x25CD98u;
label_25cd98:
    // 0x25cd98: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x25cd98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_25cd9c:
    // 0x25cd9c: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x25cd9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_25cda0:
    // 0x25cda0: 0xc60c010c  lwc1        $f12, 0x10C($s0)
    ctx->pc = 0x25cda0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_25cda4:
    // 0x25cda4: 0xc040ce4  jal         func_103390
label_25cda8:
    if (ctx->pc == 0x25CDA8u) {
        ctx->pc = 0x25CDACu;
        goto label_25cdac;
    }
    ctx->pc = 0x25CDA4u;
    SET_GPR_U32(ctx, 31, 0x25CDACu);
    ctx->pc = 0x103390u;
    {
        ctx->pc = 0x25CDACu;
        ps2_stubs::sceVu0RotMatrixZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25CDACu) { return; }
    ctx->pc = 0x25CDACu;
label_25cdac:
    // 0x25cdac: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x25cdacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_25cdb0:
    // 0x25cdb0: 0x8e050100  lw          $a1, 0x100($s0)
    ctx->pc = 0x25cdb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
label_25cdb4:
    // 0x25cdb4: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x25cdb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_25cdb8:
    // 0x25cdb8: 0xc040c00  jal         func_103000
label_25cdbc:
    if (ctx->pc == 0x25CDBCu) {
        ctx->pc = 0x25CDC0u;
        goto label_25cdc0;
    }
    ctx->pc = 0x25CDB8u;
    SET_GPR_U32(ctx, 31, 0x25CDC0u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x25CDC0u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25CDC0u) { return; }
    ctx->pc = 0x25CDC0u;
label_25cdc0:
    // 0x25cdc0: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x25cdc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_25cdc4:
    // 0x25cdc4: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x25cdc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_25cdc8:
    // 0x25cdc8: 0xc040c9e  jal         func_103278
label_25cdcc:
    if (ctx->pc == 0x25CDCCu) {
        ctx->pc = 0x25CDD0u;
        goto label_25cdd0;
    }
    ctx->pc = 0x25CDC8u;
    SET_GPR_U32(ctx, 31, 0x25CDD0u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x25CDD0u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25CDD0u) { return; }
    ctx->pc = 0x25CDD0u;
label_25cdd0:
    // 0x25cdd0: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x25cdd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
label_25cdd4:
    // 0x25cdd4: 0x151980  sll         $v1, $s5, 6
    ctx->pc = 0x25cdd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 6));
label_25cdd8:
    // 0x25cdd8: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x25cdd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_25cddc:
    // 0x25cddc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x25cddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_25cde0:
    // 0x25cde0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x25cde0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_25cde4:
    // 0x25cde4: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x25cde4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_25cde8:
    // 0x25cde8: 0xc040ca2  jal         func_103288
label_25cdec:
    if (ctx->pc == 0x25CDECu) {
        ctx->pc = 0x25CDF0u;
        goto label_25cdf0;
    }
    ctx->pc = 0x25CDE8u;
    SET_GPR_U32(ctx, 31, 0x25CDF0u);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x25CDF0u;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25CDF0u) { return; }
    ctx->pc = 0x25CDF0u;
label_25cdf0:
    // 0x25cdf0: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x25cdf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_25cdf4:
    // 0x25cdf4: 0x8e050100  lw          $a1, 0x100($s0)
    ctx->pc = 0x25cdf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
label_25cdf8:
    // 0x25cdf8: 0xc040c44  jal         func_103110
label_25cdfc:
    if (ctx->pc == 0x25CDFCu) {
        ctx->pc = 0x25CE00u;
        goto label_25ce00;
    }
    ctx->pc = 0x25CDF8u;
    SET_GPR_U32(ctx, 31, 0x25CE00u);
    ctx->pc = 0x103110u;
    {
        ctx->pc = 0x25CE00u;
        ps2_stubs::sceVu0InversMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25CE00u) { return; }
    ctx->pc = 0x25CE00u;
label_25ce00:
    // 0x25ce00: 0x8fa30168  lw          $v1, 0x168($sp)
    ctx->pc = 0x25ce00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
label_25ce04:
    // 0x25ce04: 0x152180  sll         $a0, $s5, 6
    ctx->pc = 0x25ce04u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 21), 6));
label_25ce08:
    // 0x25ce08: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x25ce08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
label_25ce0c:
    // 0x25ce0c: 0x643021  addu        $a2, $v1, $a0
    ctx->pc = 0x25ce0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_25ce10:
    // 0x25ce10: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x25ce10u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_25ce14:
    // 0x25ce14: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x25ce14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_25ce18:
    // 0x25ce18: 0xc040c00  jal         func_103000
label_25ce1c:
    if (ctx->pc == 0x25CE1Cu) {
        ctx->pc = 0x25CE20u;
        goto label_25ce20;
    }
    ctx->pc = 0x25CE18u;
    SET_GPR_U32(ctx, 31, 0x25CE20u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x25CE20u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25CE20u) { return; }
    ctx->pc = 0x25CE20u;
label_25ce20:
    // 0x25ce20: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x25ce20u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_25ce24:
    // 0x25ce24: 0x10000088  b           . + 4 + (0x88 << 2)
label_25ce28:
    if (ctx->pc == 0x25CE28u) {
        ctx->pc = 0x25CE2Cu;
        goto label_25ce2c;
    }
    ctx->pc = 0x25CE24u;
    {
        const bool branch_taken_0x25ce24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25ce24) {
            ctx->pc = 0x25D048u;
            goto label_25d048;
        }
    }
    ctx->pc = 0x25CE2Cu;
label_25ce2c:
    // 0x25ce2c: 0x8fa50168  lw          $a1, 0x168($sp)
    ctx->pc = 0x25ce2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
label_25ce30:
    // 0x25ce30: 0x94a309e0  lhu         $v1, 0x9E0($a1)
    ctx->pc = 0x25ce30u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2528)));
label_25ce34:
    // 0x25ce34: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x25ce34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_25ce38:
    // 0x25ce38: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x25ce38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_25ce3c:
    // 0x25ce3c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_25ce40:
    if (ctx->pc == 0x25CE40u) {
        ctx->pc = 0x25CE44u;
        goto label_25ce44;
    }
    ctx->pc = 0x25CE3Cu;
    {
        const bool branch_taken_0x25ce3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25ce3c) {
            ctx->pc = 0x25CE58u;
            goto label_25ce58;
        }
    }
    ctx->pc = 0x25CE44u;
label_25ce44:
    // 0x25ce44: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x25ce44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
label_25ce48:
    // 0x25ce48: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x25ce48u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_25ce4c:
    // 0x25ce4c: 0xc6000110  lwc1        $f0, 0x110($s0)
    ctx->pc = 0x25ce4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25ce50:
    // 0x25ce50: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x25ce50u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_25ce54:
    // 0x25ce54: 0xe6000110  swc1        $f0, 0x110($s0)
    ctx->pc = 0x25ce54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 272), bits); }
label_25ce58:
    // 0x25ce58: 0x26630001  addiu       $v1, $s3, 0x1
    ctx->pc = 0x25ce58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_25ce5c:
    // 0x25ce5c: 0x70609e28  paddub      $s3, $v1, $zero
    ctx->pc = 0x25ce5cu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_25ce60:
    // 0x25ce60: 0x8fa30168  lw          $v1, 0x168($sp)
    ctx->pc = 0x25ce60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
label_25ce64:
    // 0x25ce64: 0x8c630350  lw          $v1, 0x350($v1)
    ctx->pc = 0x25ce64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 848)));
label_25ce68:
    // 0x25ce68: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x25ce68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_25ce6c:
    // 0x25ce6c: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x25ce6cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_25ce70:
    // 0x25ce70: 0x307600ff  andi        $s6, $v1, 0xFF
    ctx->pc = 0x25ce70u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_25ce74:
    // 0x25ce74: 0x32d7003f  andi        $s7, $s6, 0x3F
    ctx->pc = 0x25ce74u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)63);
label_25ce78:
    // 0x25ce78: 0x32e300ff  andi        $v1, $s7, 0xFF
    ctx->pc = 0x25ce78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)255);
label_25ce7c:
    // 0x25ce7c: 0x307100ff  andi        $s1, $v1, 0xFF
    ctx->pc = 0x25ce7cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_25ce80:
    // 0x25ce80: 0x8fb40168  lw          $s4, 0x168($sp)
    ctx->pc = 0x25ce80u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
label_25ce84:
    // 0x25ce84: 0x112880  sll         $a1, $s1, 2
    ctx->pc = 0x25ce84u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_25ce88:
    // 0x25ce88: 0xb11821  addu        $v1, $a1, $s1
    ctx->pc = 0x25ce88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
label_25ce8c:
    // 0x25ce8c: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x25ce8cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_25ce90:
    // 0x25ce90: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x25ce90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_25ce94:
    // 0x25ce94: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x25ce94u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_25ce98:
    // 0x25ce98: 0x8e8302d0  lw          $v1, 0x2D0($s4)
    ctx->pc = 0x25ce98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 720)));
label_25ce9c:
    // 0x25ce9c: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x25ce9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_25cea0:
    // 0x25cea0: 0x72009628  paddub      $s2, $s0, $zero
    ctx->pc = 0x25cea0u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_25cea4:
    // 0x25cea4: 0x8fa30168  lw          $v1, 0x168($sp)
    ctx->pc = 0x25cea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
label_25cea8:
    // 0x25cea8: 0x946309e0  lhu         $v1, 0x9E0($v1)
    ctx->pc = 0x25cea8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2528)));
label_25ceac:
    // 0x25ceac: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x25ceacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_25ceb0:
    // 0x25ceb0: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x25ceb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_25ceb4:
    // 0x25ceb4: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
label_25ceb8:
    if (ctx->pc == 0x25CEB8u) {
        ctx->pc = 0x25CEBCu;
        goto label_25cebc;
    }
    ctx->pc = 0x25CEB4u;
    {
        const bool branch_taken_0x25ceb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25ceb4) {
            ctx->pc = 0x25CF00u;
            goto label_25cf00;
        }
    }
    ctx->pc = 0x25CEBCu;
label_25cebc:
    // 0x25cebc: 0x8fa30168  lw          $v1, 0x168($sp)
    ctx->pc = 0x25cebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
label_25cec0:
    // 0x25cec0: 0x8c630354  lw          $v1, 0x354($v1)
    ctx->pc = 0x25cec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 852)));
label_25cec4:
    // 0x25cec4: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
label_25cec8:
    if (ctx->pc == 0x25CEC8u) {
        ctx->pc = 0x25CECCu;
        goto label_25cecc;
    }
    ctx->pc = 0x25CEC4u;
    {
        const bool branch_taken_0x25cec4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25cec4) {
            ctx->pc = 0x25CF00u;
            goto label_25cf00;
        }
    }
    ctx->pc = 0x25CECCu;
label_25cecc:
    // 0x25cecc: 0x8fa30168  lw          $v1, 0x168($sp)
    ctx->pc = 0x25ceccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
label_25ced0:
    // 0x25ced0: 0x8c630354  lw          $v1, 0x354($v1)
    ctx->pc = 0x25ced0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 852)));
label_25ced4:
    // 0x25ced4: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x25ced4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_25ced8:
    // 0x25ced8: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x25ced8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_25cedc:
    // 0x25cedc: 0x307100ff  andi        $s1, $v1, 0xFF
    ctx->pc = 0x25cedcu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_25cee0:
    // 0x25cee0: 0x8fb40168  lw          $s4, 0x168($sp)
    ctx->pc = 0x25cee0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
label_25cee4:
    // 0x25cee4: 0x112880  sll         $a1, $s1, 2
    ctx->pc = 0x25cee4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_25cee8:
    // 0x25cee8: 0xb11821  addu        $v1, $a1, $s1
    ctx->pc = 0x25cee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
label_25ceec:
    // 0x25ceec: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x25ceecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_25cef0:
    // 0x25cef0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x25cef0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_25cef4:
    // 0x25cef4: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x25cef4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_25cef8:
    // 0x25cef8: 0x8e8302d0  lw          $v1, 0x2D0($s4)
    ctx->pc = 0x25cef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 720)));
label_25cefc:
    // 0x25cefc: 0x649021  addu        $s2, $v1, $a0
    ctx->pc = 0x25cefcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_25cf00:
    // 0x25cf00: 0x8fb20168  lw          $s2, 0x168($sp)
    ctx->pc = 0x25cf00u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
label_25cf04:
    // 0x25cf04: 0x964309e0  lhu         $v1, 0x9E0($s2)
    ctx->pc = 0x25cf04u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2528)));
label_25cf08:
    // 0x25cf08: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x25cf08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_25cf0c:
    // 0x25cf0c: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x25cf0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_25cf10:
    // 0x25cf10: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_25cf14:
    if (ctx->pc == 0x25CF14u) {
        ctx->pc = 0x25CF18u;
        goto label_25cf18;
    }
    ctx->pc = 0x25CF10u;
    {
        const bool branch_taken_0x25cf10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25cf10) {
            ctx->pc = 0x25CF40u;
            goto label_25cf40;
        }
    }
    ctx->pc = 0x25CF18u;
label_25cf18:
    // 0x25cf18: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x25cf18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
label_25cf1c:
    // 0x25cf1c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x25cf1cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_25cf20:
    // 0x25cf20: 0xc6000108  lwc1        $f0, 0x108($s0)
    ctx->pc = 0x25cf20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25cf24:
    // 0x25cf24: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x25cf24u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_25cf28:
    // 0x25cf28: 0xe6000108  swc1        $f0, 0x108($s0)
    ctx->pc = 0x25cf28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 264), bits); }
label_25cf2c:
    // 0x25cf2c: 0x3c04bf80  lui         $a0, 0xBF80
    ctx->pc = 0x25cf2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49024 << 16));
label_25cf30:
    // 0x25cf30: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x25cf30u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_25cf34:
    // 0x25cf34: 0xc600010c  lwc1        $f0, 0x10C($s0)
    ctx->pc = 0x25cf34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25cf38:
    // 0x25cf38: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x25cf38u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_25cf3c:
    // 0x25cf3c: 0xe600010c  swc1        $f0, 0x10C($s0)
    ctx->pc = 0x25cf3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 268), bits); }
label_25cf40:
    // 0x25cf40: 0x26630001  addiu       $v1, $s3, 0x1
    ctx->pc = 0x25cf40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_25cf44:
    // 0x25cf44: 0x70609e28  paddub      $s3, $v1, $zero
    ctx->pc = 0x25cf44u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_25cf48:
    // 0x25cf48: 0x8fa30168  lw          $v1, 0x168($sp)
    ctx->pc = 0x25cf48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
label_25cf4c:
    // 0x25cf4c: 0x8c630350  lw          $v1, 0x350($v1)
    ctx->pc = 0x25cf4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 848)));
label_25cf50:
    // 0x25cf50: 0x731021  addu        $v0, $v1, $s3
    ctx->pc = 0x25cf50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_25cf54:
    // 0x25cf54: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x25cf54u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_25cf58:
    // 0x25cf58: 0x305600ff  andi        $s6, $v0, 0xFF
    ctx->pc = 0x25cf58u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_25cf5c:
    // 0x25cf5c: 0x32c2003f  andi        $v0, $s6, 0x3F
    ctx->pc = 0x25cf5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)63);
label_25cf60:
    // 0x25cf60: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25cf60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_25cf64:
    // 0x25cf64: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x25cf64u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_25cf68:
    // 0x25cf68: 0x8fa60168  lw          $a2, 0x168($sp)
    ctx->pc = 0x25cf68u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
label_25cf6c:
    // 0x25cf6c: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x25cf6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_25cf70:
    // 0x25cf70: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x25cf70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_25cf74:
    // 0x25cf74: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x25cf74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_25cf78:
    // 0x25cf78: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x25cf78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_25cf7c:
    // 0x25cf7c: 0x42900  sll         $a1, $a0, 4
    ctx->pc = 0x25cf7cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_25cf80:
    // 0x25cf80: 0x8cc602d0  lw          $a2, 0x2D0($a2)
    ctx->pc = 0x25cf80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 720)));
label_25cf84:
    // 0x25cf84: 0xc51021  addu        $v0, $a2, $a1
    ctx->pc = 0x25cf84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_25cf88:
    // 0x25cf88: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x25cf88u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_25cf8c:
    // 0x25cf8c: 0x72009628  paddub      $s2, $s0, $zero
    ctx->pc = 0x25cf8cu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_25cf90:
    // 0x25cf90: 0x8fa30168  lw          $v1, 0x168($sp)
    ctx->pc = 0x25cf90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
label_25cf94:
    // 0x25cf94: 0x946309e0  lhu         $v1, 0x9E0($v1)
    ctx->pc = 0x25cf94u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2528)));
label_25cf98:
    // 0x25cf98: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x25cf98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_25cf9c:
    // 0x25cf9c: 0x30830004  andi        $v1, $a0, 0x4
    ctx->pc = 0x25cf9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
label_25cfa0:
    // 0x25cfa0: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
label_25cfa4:
    if (ctx->pc == 0x25CFA4u) {
        ctx->pc = 0x25CFA8u;
        goto label_25cfa8;
    }
    ctx->pc = 0x25CFA0u;
    {
        const bool branch_taken_0x25cfa0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25cfa0) {
            ctx->pc = 0x25CFF0u;
            goto label_25cff0;
        }
    }
    ctx->pc = 0x25CFA8u;
label_25cfa8:
    // 0x25cfa8: 0x8fa30168  lw          $v1, 0x168($sp)
    ctx->pc = 0x25cfa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
label_25cfac:
    // 0x25cfac: 0x8c630354  lw          $v1, 0x354($v1)
    ctx->pc = 0x25cfacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 852)));
label_25cfb0:
    // 0x25cfb0: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
label_25cfb4:
    if (ctx->pc == 0x25CFB4u) {
        ctx->pc = 0x25CFB8u;
        goto label_25cfb8;
    }
    ctx->pc = 0x25CFB0u;
    {
        const bool branch_taken_0x25cfb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25cfb0) {
            ctx->pc = 0x25CFF0u;
            goto label_25cff0;
        }
    }
    ctx->pc = 0x25CFB8u;
label_25cfb8:
    // 0x25cfb8: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x25cfb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
label_25cfbc:
    // 0x25cfbc: 0x8c430354  lw          $v1, 0x354($v0)
    ctx->pc = 0x25cfbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 852)));
label_25cfc0:
    // 0x25cfc0: 0x711021  addu        $v0, $v1, $s1
    ctx->pc = 0x25cfc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_25cfc4:
    // 0x25cfc4: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x25cfc4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_25cfc8:
    // 0x25cfc8: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x25cfc8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_25cfcc:
    // 0x25cfcc: 0x8fa50168  lw          $a1, 0x168($sp)
    ctx->pc = 0x25cfccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
label_25cfd0:
    // 0x25cfd0: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x25cfd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_25cfd4:
    // 0x25cfd4: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x25cfd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_25cfd8:
    // 0x25cfd8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x25cfd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_25cfdc:
    // 0x25cfdc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x25cfdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_25cfe0:
    // 0x25cfe0: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x25cfe0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_25cfe4:
    // 0x25cfe4: 0x8ca502d0  lw          $a1, 0x2D0($a1)
    ctx->pc = 0x25cfe4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 720)));
label_25cfe8:
    // 0x25cfe8: 0xa43021  addu        $a2, $a1, $a0
    ctx->pc = 0x25cfe8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_25cfec:
    // 0x25cfec: 0x70c09628  paddub      $s2, $a2, $zero
    ctx->pc = 0x25cfecu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_25cff0:
    // 0x25cff0: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x25cff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
label_25cff4:
    // 0x25cff4: 0x944409e0  lhu         $a0, 0x9E0($v0)
    ctx->pc = 0x25cff4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2528)));
label_25cff8:
    // 0x25cff8: 0x3083ffff  andi        $v1, $a0, 0xFFFF
    ctx->pc = 0x25cff8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
label_25cffc:
    // 0x25cffc: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x25cffcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_25d000:
    // 0x25d000: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_25d004:
    if (ctx->pc == 0x25D004u) {
        ctx->pc = 0x25D008u;
        goto label_25d008;
    }
    ctx->pc = 0x25D000u;
    {
        const bool branch_taken_0x25d000 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25d000) {
            ctx->pc = 0x25D020u;
            goto label_25d020;
        }
    }
    ctx->pc = 0x25D008u;
label_25d008:
    // 0x25d008: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x25d008u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
label_25d00c:
    // 0x25d00c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x25d00cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_25d010:
    // 0x25d010: 0xc6000110  lwc1        $f0, 0x110($s0)
    ctx->pc = 0x25d010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25d014:
    // 0x25d014: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x25d014u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_25d018:
    // 0x25d018: 0xe6000110  swc1        $f0, 0x110($s0)
    ctx->pc = 0x25d018u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 272), bits); }
label_25d01c:
    // 0x25d01c: 0x0  nop
    ctx->pc = 0x25d01cu;
    // NOP
label_25d020:
    // 0x25d020: 0x96030140  lhu         $v1, 0x140($s0)
    ctx->pc = 0x25d020u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
label_25d024:
    // 0x25d024: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x25d024u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
label_25d028:
    // 0x25d028: 0xa6030140  sh          $v1, 0x140($s0)
    ctx->pc = 0x25d028u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 3));
label_25d02c:
    // 0x25d02c: 0x32a500ff  andi        $a1, $s5, 0xFF
    ctx->pc = 0x25d02cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
label_25d030:
    // 0x25d030: 0x8fb60168  lw          $s6, 0x168($sp)
    ctx->pc = 0x25d030u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
label_25d034:
    // 0x25d034: 0x72c02628  paddub      $a0, $s6, $zero
    ctx->pc = 0x25d034u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 22), GPR_VEC(ctx, 0)));
label_25d038:
    // 0x25d038: 0xc097e7c  jal         func_25F9F0
label_25d03c:
    if (ctx->pc == 0x25D03Cu) {
        ctx->pc = 0x25D040u;
        goto label_25d040;
    }
    ctx->pc = 0x25D038u;
    SET_GPR_U32(ctx, 31, 0x25D040u);
    ctx->pc = 0x25F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F9F0u, 0x25D038u, 0x25D040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D040u;
label_25d040:
    // 0x25d040: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x25d040u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_25d044:
    // 0x25d044: 0x0  nop
    ctx->pc = 0x25d044u;
    // NOP
label_25d048:
    // 0x25d048: 0x26630001  addiu       $v1, $s3, 0x1
    ctx->pc = 0x25d048u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_25d04c:
    // 0x25d04c: 0x70609e28  paddub      $s3, $v1, $zero
    ctx->pc = 0x25d04cu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_25d050:
    // 0x25d050: 0x1e8c3c  dsll32      $s1, $fp, 16
    ctx->pc = 0x25d050u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 30) << (32 + 16));
label_25d054:
    // 0x25d054: 0x118c3f  dsra32      $s1, $s1, 16
    ctx->pc = 0x25d054u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
label_25d058:
    // 0x25d058: 0x71302a  slt         $a2, $v1, $s1
    ctx->pc = 0x25d058u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_25d05c:
    // 0x25d05c: 0x14c0fe4e  bnez        $a2, . + 4 + (-0x1B2 << 2)
label_25d060:
    if (ctx->pc == 0x25D060u) {
        ctx->pc = 0x25D064u;
        goto label_25d064;
    }
    ctx->pc = 0x25D05Cu;
    {
        const bool branch_taken_0x25d05c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x25d05c) {
            ctx->pc = 0x25C998u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25c998;
        }
    }
    ctx->pc = 0x25D064u;
label_25d064:
    // 0x25d064: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x25d064u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_25d068:
    // 0x25d068: 0x10000031  b           . + 4 + (0x31 << 2)
label_25d06c:
    if (ctx->pc == 0x25D06Cu) {
        ctx->pc = 0x25D070u;
        goto label_25d070;
    }
    ctx->pc = 0x25D068u;
    {
        const bool branch_taken_0x25d068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25d068) {
            ctx->pc = 0x25D130u;
            goto label_25d130;
        }
    }
    ctx->pc = 0x25D070u;
label_25d070:
    // 0x25d070: 0x8fa50168  lw          $a1, 0x168($sp)
    ctx->pc = 0x25d070u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
label_25d074:
    // 0x25d074: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x25d074u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_25d078:
    // 0x25d078: 0x732021  addu        $a0, $v1, $s3
    ctx->pc = 0x25d078u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_25d07c:
    // 0x25d07c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x25d07cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_25d080:
    // 0x25d080: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x25d080u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_25d084:
    // 0x25d084: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x25d084u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_25d088:
    // 0x25d088: 0x8cb002d0  lw          $s0, 0x2D0($a1)
    ctx->pc = 0x25d088u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 720)));
label_25d08c:
    // 0x25d08c: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x25d08cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_25d090:
    // 0x25d090: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x25d090u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_25d094:
    // 0x25d094: 0x96030140  lhu         $v1, 0x140($s0)
    ctx->pc = 0x25d094u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
label_25d098:
    // 0x25d098: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x25d098u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_25d09c:
    // 0x25d09c: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x25d09cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_25d0a0:
    // 0x25d0a0: 0x10600021  beqz        $v1, . + 4 + (0x21 << 2)
label_25d0a4:
    if (ctx->pc == 0x25D0A4u) {
        ctx->pc = 0x25D0A8u;
        goto label_25d0a8;
    }
    ctx->pc = 0x25D0A0u;
    {
        const bool branch_taken_0x25d0a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25d0a0) {
            ctx->pc = 0x25D128u;
            goto label_25d128;
        }
    }
    ctx->pc = 0x25D0A8u;
label_25d0a8:
    // 0x25d0a8: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x25d0a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_25d0ac:
    // 0x25d0ac: 0xc040cbc  jal         func_1032F0
label_25d0b0:
    if (ctx->pc == 0x25D0B0u) {
        ctx->pc = 0x25D0B4u;
        goto label_25d0b4;
    }
    ctx->pc = 0x25D0ACu;
    SET_GPR_U32(ctx, 31, 0x25D0B4u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x25D0B4u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25D0B4u) { return; }
    ctx->pc = 0x25D0B4u;
label_25d0b4:
    // 0x25d0b4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x25d0b4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_25d0b8:
    // 0x25d0b8: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x25d0b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_25d0bc:
    // 0x25d0bc: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x25d0bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_25d0c0:
    // 0x25d0c0: 0xc60c011c  lwc1        $f12, 0x11C($s0)
    ctx->pc = 0x25d0c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_25d0c4:
    // 0x25d0c4: 0xc040d0e  jal         func_103438
label_25d0c8:
    if (ctx->pc == 0x25D0C8u) {
        ctx->pc = 0x25D0CCu;
        goto label_25d0cc;
    }
    ctx->pc = 0x25D0C4u;
    SET_GPR_U32(ctx, 31, 0x25D0CCu);
    ctx->pc = 0x103438u;
    {
        ctx->pc = 0x25D0CCu;
        ps2_stubs::sceVu0RotMatrixX(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25D0CCu) { return; }
    ctx->pc = 0x25D0CCu;
label_25d0cc:
    // 0x25d0cc: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x25d0ccu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_25d0d0:
    // 0x25d0d0: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x25d0d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_25d0d4:
    // 0x25d0d4: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x25d0d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_25d0d8:
    // 0x25d0d8: 0xc60c0120  lwc1        $f12, 0x120($s0)
    ctx->pc = 0x25d0d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_25d0dc:
    // 0x25d0dc: 0xc040d38  jal         func_1034E0
label_25d0e0:
    if (ctx->pc == 0x25D0E0u) {
        ctx->pc = 0x25D0E4u;
        goto label_25d0e4;
    }
    ctx->pc = 0x25D0DCu;
    SET_GPR_U32(ctx, 31, 0x25D0E4u);
    ctx->pc = 0x1034E0u;
    {
        ctx->pc = 0x25D0E4u;
        ps2_stubs::sceVu0RotMatrixY(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25D0E4u) { return; }
    ctx->pc = 0x25D0E4u;
label_25d0e4:
    // 0x25d0e4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x25d0e4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_25d0e8:
    // 0x25d0e8: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x25d0e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_25d0ec:
    // 0x25d0ec: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x25d0ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_25d0f0:
    // 0x25d0f0: 0xc60c0124  lwc1        $f12, 0x124($s0)
    ctx->pc = 0x25d0f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_25d0f4:
    // 0x25d0f4: 0xc040ce4  jal         func_103390
label_25d0f8:
    if (ctx->pc == 0x25D0F8u) {
        ctx->pc = 0x25D0FCu;
        goto label_25d0fc;
    }
    ctx->pc = 0x25D0F4u;
    SET_GPR_U32(ctx, 31, 0x25D0FCu);
    ctx->pc = 0x103390u;
    {
        ctx->pc = 0x25D0FCu;
        ps2_stubs::sceVu0RotMatrixZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25D0FCu) { return; }
    ctx->pc = 0x25D0FCu;
label_25d0fc:
    // 0x25d0fc: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x25d0fcu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_25d100:
    // 0x25d100: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x25d100u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_25d104:
    // 0x25d104: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x25d104u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_25d108:
    // 0x25d108: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x25d108u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_25d10c:
    // 0x25d10c: 0xc0675f8  jal         func_19D7E0
label_25d110:
    if (ctx->pc == 0x25D110u) {
        ctx->pc = 0x25D114u;
        goto label_25d114;
    }
    ctx->pc = 0x25D10Cu;
    SET_GPR_U32(ctx, 31, 0x25D114u);
    ctx->pc = 0x19D7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D7E0u, 0x25D10Cu, 0x25D114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D114u;
label_25d114:
    // 0x25d114: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x25d114u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_25d118:
    // 0x25d118: 0x96030140  lhu         $v1, 0x140($s0)
    ctx->pc = 0x25d118u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
label_25d11c:
    // 0x25d11c: 0x3063ffbf  andi        $v1, $v1, 0xFFBF
    ctx->pc = 0x25d11cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65471);
label_25d120:
    // 0x25d120: 0xa6030140  sh          $v1, 0x140($s0)
    ctx->pc = 0x25d120u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 3));
label_25d124:
    // 0x25d124: 0x0  nop
    ctx->pc = 0x25d124u;
    // NOP
label_25d128:
    // 0x25d128: 0x26640001  addiu       $a0, $s3, 0x1
    ctx->pc = 0x25d128u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_25d12c:
    // 0x25d12c: 0x70809e28  paddub      $s3, $a0, $zero
    ctx->pc = 0x25d12cu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
label_25d130:
    // 0x25d130: 0x8fa30168  lw          $v1, 0x168($sp)
    ctx->pc = 0x25d130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
label_25d134:
    // 0x25d134: 0x94640050  lhu         $a0, 0x50($v1)
    ctx->pc = 0x25d134u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_25d138:
    // 0x25d138: 0x3083ffff  andi        $v1, $a0, 0xFFFF
    ctx->pc = 0x25d138u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
label_25d13c:
    // 0x25d13c: 0x263182a  slt         $v1, $s3, $v1
    ctx->pc = 0x25d13cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_25d140:
    // 0x25d140: 0x1460ffcb  bnez        $v1, . + 4 + (-0x35 << 2)
label_25d144:
    if (ctx->pc == 0x25D144u) {
        ctx->pc = 0x25D148u;
        goto label_25d148;
    }
    ctx->pc = 0x25D140u;
    {
        const bool branch_taken_0x25d140 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x25d140) {
            ctx->pc = 0x25D070u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25d070;
        }
    }
    ctx->pc = 0x25D148u;
label_25d148:
    // 0x25d148: 0x8fa30168  lw          $v1, 0x168($sp)
    ctx->pc = 0x25d148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
label_25d14c:
    // 0x25d14c: 0x906309e6  lbu         $v1, 0x9E6($v1)
    ctx->pc = 0x25d14cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2534)));
label_25d150:
    // 0x25d150: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_25d154:
    if (ctx->pc == 0x25D154u) {
        ctx->pc = 0x25D158u;
        goto label_25d158;
    }
    ctx->pc = 0x25D150u;
    {
        const bool branch_taken_0x25d150 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25d150) {
            ctx->pc = 0x25D164u;
            goto label_25d164;
        }
    }
    ctx->pc = 0x25D158u;
label_25d158:
    // 0x25d158: 0x8fa40168  lw          $a0, 0x168($sp)
    ctx->pc = 0x25d158u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
label_25d15c:
    // 0x25d15c: 0xc098970  jal         func_2625C0
label_25d160:
    if (ctx->pc == 0x25D160u) {
        ctx->pc = 0x25D164u;
        goto label_25d164;
    }
    ctx->pc = 0x25D15Cu;
    SET_GPR_U32(ctx, 31, 0x25D164u);
    ctx->pc = 0x2625C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2625C0u, 0x25D15Cu, 0x25D164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D164u;
label_25d164:
    // 0x25d164: 0x8fa30168  lw          $v1, 0x168($sp)
    ctx->pc = 0x25d164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
label_25d168:
    // 0x25d168: 0x8c6305f4  lw          $v1, 0x5F4($v1)
    ctx->pc = 0x25d168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1524)));
label_25d16c:
    // 0x25d16c: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
label_25d170:
    if (ctx->pc == 0x25D170u) {
        ctx->pc = 0x25D174u;
        goto label_25d174;
    }
    ctx->pc = 0x25D16Cu;
    {
        const bool branch_taken_0x25d16c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25d16c) {
            ctx->pc = 0x25D1A4u;
            goto label_25d1a4;
        }
    }
    ctx->pc = 0x25D174u;
label_25d174:
    // 0x25d174: 0xc7a00150  lwc1        $f0, 0x150($sp)
    ctx->pc = 0x25d174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25d178:
    // 0x25d178: 0x8fa30168  lw          $v1, 0x168($sp)
    ctx->pc = 0x25d178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
label_25d17c:
    // 0x25d17c: 0x8c630330  lw          $v1, 0x330($v1)
    ctx->pc = 0x25d17cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 816)));
label_25d180:
    // 0x25d180: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x25d180u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_25d184:
    // 0x25d184: 0xc7a00154  lwc1        $f0, 0x154($sp)
    ctx->pc = 0x25d184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25d188:
    // 0x25d188: 0x8fa30168  lw          $v1, 0x168($sp)
    ctx->pc = 0x25d188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
label_25d18c:
    // 0x25d18c: 0x8c630330  lw          $v1, 0x330($v1)
    ctx->pc = 0x25d18cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 816)));
label_25d190:
    // 0x25d190: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x25d190u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_25d194:
    // 0x25d194: 0xc7a00158  lwc1        $f0, 0x158($sp)
    ctx->pc = 0x25d194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25d198:
    // 0x25d198: 0x8fa30168  lw          $v1, 0x168($sp)
    ctx->pc = 0x25d198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
label_25d19c:
    // 0x25d19c: 0x8c650330  lw          $a1, 0x330($v1)
    ctx->pc = 0x25d19cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 816)));
label_25d1a0:
    // 0x25d1a0: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x25d1a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
label_25d1a4:
    // 0x25d1a4: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x25d1a4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_25d1a8:
    // 0x25d1a8: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x25d1a8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_25d1ac:
    // 0x25d1ac: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x25d1acu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_25d1b0:
    // 0x25d1b0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x25d1b0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_25d1b4:
    // 0x25d1b4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x25d1b4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_25d1b8:
    // 0x25d1b8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x25d1b8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_25d1bc:
    // 0x25d1bc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x25d1bcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_25d1c0:
    // 0x25d1c0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x25d1c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_25d1c4:
    // 0x25d1c4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25d1c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_25d1c8:
    // 0x25d1c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25d1c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_25d1cc:
    // 0x25d1cc: 0x27bd0170  addiu       $sp, $sp, 0x170
    ctx->pc = 0x25d1ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_25d1d0:
    // 0x25d1d0: 0x3e00008  jr          $ra
label_25d1d4:
    if (ctx->pc == 0x25D1D4u) {
        ctx->pc = 0x25D1D8u;
        goto label_fallthrough_0x25d1d0;
    }
    ctx->pc = 0x25D1D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25D1D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x25d1d0:
    ctx->pc = 0x25D1D8u;
}
