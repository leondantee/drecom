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

// Function: Wep_move
// Address: 0x14f3e0 - 0x14fac8
void Wep_move_0x14f3e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Wep_move_0x14f3e0");
#endif

    switch (ctx->pc) {
        case 0x14f3e0u: goto label_14f3e0;
        case 0x14f3e4u: goto label_14f3e4;
        case 0x14f3e8u: goto label_14f3e8;
        case 0x14f3ecu: goto label_14f3ec;
        case 0x14f3f0u: goto label_14f3f0;
        case 0x14f3f4u: goto label_14f3f4;
        case 0x14f3f8u: goto label_14f3f8;
        case 0x14f3fcu: goto label_14f3fc;
        case 0x14f400u: goto label_14f400;
        case 0x14f404u: goto label_14f404;
        case 0x14f408u: goto label_14f408;
        case 0x14f40cu: goto label_14f40c;
        case 0x14f410u: goto label_14f410;
        case 0x14f414u: goto label_14f414;
        case 0x14f418u: goto label_14f418;
        case 0x14f41cu: goto label_14f41c;
        case 0x14f420u: goto label_14f420;
        case 0x14f424u: goto label_14f424;
        case 0x14f428u: goto label_14f428;
        case 0x14f42cu: goto label_14f42c;
        case 0x14f430u: goto label_14f430;
        case 0x14f434u: goto label_14f434;
        case 0x14f438u: goto label_14f438;
        case 0x14f43cu: goto label_14f43c;
        case 0x14f440u: goto label_14f440;
        case 0x14f444u: goto label_14f444;
        case 0x14f448u: goto label_14f448;
        case 0x14f44cu: goto label_14f44c;
        case 0x14f450u: goto label_14f450;
        case 0x14f454u: goto label_14f454;
        case 0x14f458u: goto label_14f458;
        case 0x14f45cu: goto label_14f45c;
        case 0x14f460u: goto label_14f460;
        case 0x14f464u: goto label_14f464;
        case 0x14f468u: goto label_14f468;
        case 0x14f46cu: goto label_14f46c;
        case 0x14f470u: goto label_14f470;
        case 0x14f474u: goto label_14f474;
        case 0x14f478u: goto label_14f478;
        case 0x14f47cu: goto label_14f47c;
        case 0x14f480u: goto label_14f480;
        case 0x14f484u: goto label_14f484;
        case 0x14f488u: goto label_14f488;
        case 0x14f48cu: goto label_14f48c;
        case 0x14f490u: goto label_14f490;
        case 0x14f494u: goto label_14f494;
        case 0x14f498u: goto label_14f498;
        case 0x14f49cu: goto label_14f49c;
        case 0x14f4a0u: goto label_14f4a0;
        case 0x14f4a4u: goto label_14f4a4;
        case 0x14f4a8u: goto label_14f4a8;
        case 0x14f4acu: goto label_14f4ac;
        case 0x14f4b0u: goto label_14f4b0;
        case 0x14f4b4u: goto label_14f4b4;
        case 0x14f4b8u: goto label_14f4b8;
        case 0x14f4bcu: goto label_14f4bc;
        case 0x14f4c0u: goto label_14f4c0;
        case 0x14f4c4u: goto label_14f4c4;
        case 0x14f4c8u: goto label_14f4c8;
        case 0x14f4ccu: goto label_14f4cc;
        case 0x14f4d0u: goto label_14f4d0;
        case 0x14f4d4u: goto label_14f4d4;
        case 0x14f4d8u: goto label_14f4d8;
        case 0x14f4dcu: goto label_14f4dc;
        case 0x14f4e0u: goto label_14f4e0;
        case 0x14f4e4u: goto label_14f4e4;
        case 0x14f4e8u: goto label_14f4e8;
        case 0x14f4ecu: goto label_14f4ec;
        case 0x14f4f0u: goto label_14f4f0;
        case 0x14f4f4u: goto label_14f4f4;
        case 0x14f4f8u: goto label_14f4f8;
        case 0x14f4fcu: goto label_14f4fc;
        case 0x14f500u: goto label_14f500;
        case 0x14f504u: goto label_14f504;
        case 0x14f508u: goto label_14f508;
        case 0x14f50cu: goto label_14f50c;
        case 0x14f510u: goto label_14f510;
        case 0x14f514u: goto label_14f514;
        case 0x14f518u: goto label_14f518;
        case 0x14f51cu: goto label_14f51c;
        case 0x14f520u: goto label_14f520;
        case 0x14f524u: goto label_14f524;
        case 0x14f528u: goto label_14f528;
        case 0x14f52cu: goto label_14f52c;
        case 0x14f530u: goto label_14f530;
        case 0x14f534u: goto label_14f534;
        case 0x14f538u: goto label_14f538;
        case 0x14f53cu: goto label_14f53c;
        case 0x14f540u: goto label_14f540;
        case 0x14f544u: goto label_14f544;
        case 0x14f548u: goto label_14f548;
        case 0x14f54cu: goto label_14f54c;
        case 0x14f550u: goto label_14f550;
        case 0x14f554u: goto label_14f554;
        case 0x14f558u: goto label_14f558;
        case 0x14f55cu: goto label_14f55c;
        case 0x14f560u: goto label_14f560;
        case 0x14f564u: goto label_14f564;
        case 0x14f568u: goto label_14f568;
        case 0x14f56cu: goto label_14f56c;
        case 0x14f570u: goto label_14f570;
        case 0x14f574u: goto label_14f574;
        case 0x14f578u: goto label_14f578;
        case 0x14f57cu: goto label_14f57c;
        case 0x14f580u: goto label_14f580;
        case 0x14f584u: goto label_14f584;
        case 0x14f588u: goto label_14f588;
        case 0x14f58cu: goto label_14f58c;
        case 0x14f590u: goto label_14f590;
        case 0x14f594u: goto label_14f594;
        case 0x14f598u: goto label_14f598;
        case 0x14f59cu: goto label_14f59c;
        case 0x14f5a0u: goto label_14f5a0;
        case 0x14f5a4u: goto label_14f5a4;
        case 0x14f5a8u: goto label_14f5a8;
        case 0x14f5acu: goto label_14f5ac;
        case 0x14f5b0u: goto label_14f5b0;
        case 0x14f5b4u: goto label_14f5b4;
        case 0x14f5b8u: goto label_14f5b8;
        case 0x14f5bcu: goto label_14f5bc;
        case 0x14f5c0u: goto label_14f5c0;
        case 0x14f5c4u: goto label_14f5c4;
        case 0x14f5c8u: goto label_14f5c8;
        case 0x14f5ccu: goto label_14f5cc;
        case 0x14f5d0u: goto label_14f5d0;
        case 0x14f5d4u: goto label_14f5d4;
        case 0x14f5d8u: goto label_14f5d8;
        case 0x14f5dcu: goto label_14f5dc;
        case 0x14f5e0u: goto label_14f5e0;
        case 0x14f5e4u: goto label_14f5e4;
        case 0x14f5e8u: goto label_14f5e8;
        case 0x14f5ecu: goto label_14f5ec;
        case 0x14f5f0u: goto label_14f5f0;
        case 0x14f5f4u: goto label_14f5f4;
        case 0x14f5f8u: goto label_14f5f8;
        case 0x14f5fcu: goto label_14f5fc;
        case 0x14f600u: goto label_14f600;
        case 0x14f604u: goto label_14f604;
        case 0x14f608u: goto label_14f608;
        case 0x14f60cu: goto label_14f60c;
        case 0x14f610u: goto label_14f610;
        case 0x14f614u: goto label_14f614;
        case 0x14f618u: goto label_14f618;
        case 0x14f61cu: goto label_14f61c;
        case 0x14f620u: goto label_14f620;
        case 0x14f624u: goto label_14f624;
        case 0x14f628u: goto label_14f628;
        case 0x14f62cu: goto label_14f62c;
        case 0x14f630u: goto label_14f630;
        case 0x14f634u: goto label_14f634;
        case 0x14f638u: goto label_14f638;
        case 0x14f63cu: goto label_14f63c;
        case 0x14f640u: goto label_14f640;
        case 0x14f644u: goto label_14f644;
        case 0x14f648u: goto label_14f648;
        case 0x14f64cu: goto label_14f64c;
        case 0x14f650u: goto label_14f650;
        case 0x14f654u: goto label_14f654;
        case 0x14f658u: goto label_14f658;
        case 0x14f65cu: goto label_14f65c;
        case 0x14f660u: goto label_14f660;
        case 0x14f664u: goto label_14f664;
        case 0x14f668u: goto label_14f668;
        case 0x14f66cu: goto label_14f66c;
        case 0x14f670u: goto label_14f670;
        case 0x14f674u: goto label_14f674;
        case 0x14f678u: goto label_14f678;
        case 0x14f67cu: goto label_14f67c;
        case 0x14f680u: goto label_14f680;
        case 0x14f684u: goto label_14f684;
        case 0x14f688u: goto label_14f688;
        case 0x14f68cu: goto label_14f68c;
        case 0x14f690u: goto label_14f690;
        case 0x14f694u: goto label_14f694;
        case 0x14f698u: goto label_14f698;
        case 0x14f69cu: goto label_14f69c;
        case 0x14f6a0u: goto label_14f6a0;
        case 0x14f6a4u: goto label_14f6a4;
        case 0x14f6a8u: goto label_14f6a8;
        case 0x14f6acu: goto label_14f6ac;
        case 0x14f6b0u: goto label_14f6b0;
        case 0x14f6b4u: goto label_14f6b4;
        case 0x14f6b8u: goto label_14f6b8;
        case 0x14f6bcu: goto label_14f6bc;
        case 0x14f6c0u: goto label_14f6c0;
        case 0x14f6c4u: goto label_14f6c4;
        case 0x14f6c8u: goto label_14f6c8;
        case 0x14f6ccu: goto label_14f6cc;
        case 0x14f6d0u: goto label_14f6d0;
        case 0x14f6d4u: goto label_14f6d4;
        case 0x14f6d8u: goto label_14f6d8;
        case 0x14f6dcu: goto label_14f6dc;
        case 0x14f6e0u: goto label_14f6e0;
        case 0x14f6e4u: goto label_14f6e4;
        case 0x14f6e8u: goto label_14f6e8;
        case 0x14f6ecu: goto label_14f6ec;
        case 0x14f6f0u: goto label_14f6f0;
        case 0x14f6f4u: goto label_14f6f4;
        case 0x14f6f8u: goto label_14f6f8;
        case 0x14f6fcu: goto label_14f6fc;
        case 0x14f700u: goto label_14f700;
        case 0x14f704u: goto label_14f704;
        case 0x14f708u: goto label_14f708;
        case 0x14f70cu: goto label_14f70c;
        case 0x14f710u: goto label_14f710;
        case 0x14f714u: goto label_14f714;
        case 0x14f718u: goto label_14f718;
        case 0x14f71cu: goto label_14f71c;
        case 0x14f720u: goto label_14f720;
        case 0x14f724u: goto label_14f724;
        case 0x14f728u: goto label_14f728;
        case 0x14f72cu: goto label_14f72c;
        case 0x14f730u: goto label_14f730;
        case 0x14f734u: goto label_14f734;
        case 0x14f738u: goto label_14f738;
        case 0x14f73cu: goto label_14f73c;
        case 0x14f740u: goto label_14f740;
        case 0x14f744u: goto label_14f744;
        case 0x14f748u: goto label_14f748;
        case 0x14f74cu: goto label_14f74c;
        case 0x14f750u: goto label_14f750;
        case 0x14f754u: goto label_14f754;
        case 0x14f758u: goto label_14f758;
        case 0x14f75cu: goto label_14f75c;
        case 0x14f760u: goto label_14f760;
        case 0x14f764u: goto label_14f764;
        case 0x14f768u: goto label_14f768;
        case 0x14f76cu: goto label_14f76c;
        case 0x14f770u: goto label_14f770;
        case 0x14f774u: goto label_14f774;
        case 0x14f778u: goto label_14f778;
        case 0x14f77cu: goto label_14f77c;
        case 0x14f780u: goto label_14f780;
        case 0x14f784u: goto label_14f784;
        case 0x14f788u: goto label_14f788;
        case 0x14f78cu: goto label_14f78c;
        case 0x14f790u: goto label_14f790;
        case 0x14f794u: goto label_14f794;
        case 0x14f798u: goto label_14f798;
        case 0x14f79cu: goto label_14f79c;
        case 0x14f7a0u: goto label_14f7a0;
        case 0x14f7a4u: goto label_14f7a4;
        case 0x14f7a8u: goto label_14f7a8;
        case 0x14f7acu: goto label_14f7ac;
        case 0x14f7b0u: goto label_14f7b0;
        case 0x14f7b4u: goto label_14f7b4;
        case 0x14f7b8u: goto label_14f7b8;
        case 0x14f7bcu: goto label_14f7bc;
        case 0x14f7c0u: goto label_14f7c0;
        case 0x14f7c4u: goto label_14f7c4;
        case 0x14f7c8u: goto label_14f7c8;
        case 0x14f7ccu: goto label_14f7cc;
        case 0x14f7d0u: goto label_14f7d0;
        case 0x14f7d4u: goto label_14f7d4;
        case 0x14f7d8u: goto label_14f7d8;
        case 0x14f7dcu: goto label_14f7dc;
        case 0x14f7e0u: goto label_14f7e0;
        case 0x14f7e4u: goto label_14f7e4;
        case 0x14f7e8u: goto label_14f7e8;
        case 0x14f7ecu: goto label_14f7ec;
        case 0x14f7f0u: goto label_14f7f0;
        case 0x14f7f4u: goto label_14f7f4;
        case 0x14f7f8u: goto label_14f7f8;
        case 0x14f7fcu: goto label_14f7fc;
        case 0x14f800u: goto label_14f800;
        case 0x14f804u: goto label_14f804;
        case 0x14f808u: goto label_14f808;
        case 0x14f80cu: goto label_14f80c;
        case 0x14f810u: goto label_14f810;
        case 0x14f814u: goto label_14f814;
        case 0x14f818u: goto label_14f818;
        case 0x14f81cu: goto label_14f81c;
        case 0x14f820u: goto label_14f820;
        case 0x14f824u: goto label_14f824;
        case 0x14f828u: goto label_14f828;
        case 0x14f82cu: goto label_14f82c;
        case 0x14f830u: goto label_14f830;
        case 0x14f834u: goto label_14f834;
        case 0x14f838u: goto label_14f838;
        case 0x14f83cu: goto label_14f83c;
        case 0x14f840u: goto label_14f840;
        case 0x14f844u: goto label_14f844;
        case 0x14f848u: goto label_14f848;
        case 0x14f84cu: goto label_14f84c;
        case 0x14f850u: goto label_14f850;
        case 0x14f854u: goto label_14f854;
        case 0x14f858u: goto label_14f858;
        case 0x14f85cu: goto label_14f85c;
        case 0x14f860u: goto label_14f860;
        case 0x14f864u: goto label_14f864;
        case 0x14f868u: goto label_14f868;
        case 0x14f86cu: goto label_14f86c;
        case 0x14f870u: goto label_14f870;
        case 0x14f874u: goto label_14f874;
        case 0x14f878u: goto label_14f878;
        case 0x14f87cu: goto label_14f87c;
        case 0x14f880u: goto label_14f880;
        case 0x14f884u: goto label_14f884;
        case 0x14f888u: goto label_14f888;
        case 0x14f88cu: goto label_14f88c;
        case 0x14f890u: goto label_14f890;
        case 0x14f894u: goto label_14f894;
        case 0x14f898u: goto label_14f898;
        case 0x14f89cu: goto label_14f89c;
        case 0x14f8a0u: goto label_14f8a0;
        case 0x14f8a4u: goto label_14f8a4;
        case 0x14f8a8u: goto label_14f8a8;
        case 0x14f8acu: goto label_14f8ac;
        case 0x14f8b0u: goto label_14f8b0;
        case 0x14f8b4u: goto label_14f8b4;
        case 0x14f8b8u: goto label_14f8b8;
        case 0x14f8bcu: goto label_14f8bc;
        case 0x14f8c0u: goto label_14f8c0;
        case 0x14f8c4u: goto label_14f8c4;
        case 0x14f8c8u: goto label_14f8c8;
        case 0x14f8ccu: goto label_14f8cc;
        case 0x14f8d0u: goto label_14f8d0;
        case 0x14f8d4u: goto label_14f8d4;
        case 0x14f8d8u: goto label_14f8d8;
        case 0x14f8dcu: goto label_14f8dc;
        case 0x14f8e0u: goto label_14f8e0;
        case 0x14f8e4u: goto label_14f8e4;
        case 0x14f8e8u: goto label_14f8e8;
        case 0x14f8ecu: goto label_14f8ec;
        case 0x14f8f0u: goto label_14f8f0;
        case 0x14f8f4u: goto label_14f8f4;
        case 0x14f8f8u: goto label_14f8f8;
        case 0x14f8fcu: goto label_14f8fc;
        case 0x14f900u: goto label_14f900;
        case 0x14f904u: goto label_14f904;
        case 0x14f908u: goto label_14f908;
        case 0x14f90cu: goto label_14f90c;
        case 0x14f910u: goto label_14f910;
        case 0x14f914u: goto label_14f914;
        case 0x14f918u: goto label_14f918;
        case 0x14f91cu: goto label_14f91c;
        case 0x14f920u: goto label_14f920;
        case 0x14f924u: goto label_14f924;
        case 0x14f928u: goto label_14f928;
        case 0x14f92cu: goto label_14f92c;
        case 0x14f930u: goto label_14f930;
        case 0x14f934u: goto label_14f934;
        case 0x14f938u: goto label_14f938;
        case 0x14f93cu: goto label_14f93c;
        case 0x14f940u: goto label_14f940;
        case 0x14f944u: goto label_14f944;
        case 0x14f948u: goto label_14f948;
        case 0x14f94cu: goto label_14f94c;
        case 0x14f950u: goto label_14f950;
        case 0x14f954u: goto label_14f954;
        case 0x14f958u: goto label_14f958;
        case 0x14f95cu: goto label_14f95c;
        case 0x14f960u: goto label_14f960;
        case 0x14f964u: goto label_14f964;
        case 0x14f968u: goto label_14f968;
        case 0x14f96cu: goto label_14f96c;
        case 0x14f970u: goto label_14f970;
        case 0x14f974u: goto label_14f974;
        case 0x14f978u: goto label_14f978;
        case 0x14f97cu: goto label_14f97c;
        case 0x14f980u: goto label_14f980;
        case 0x14f984u: goto label_14f984;
        case 0x14f988u: goto label_14f988;
        case 0x14f98cu: goto label_14f98c;
        case 0x14f990u: goto label_14f990;
        case 0x14f994u: goto label_14f994;
        case 0x14f998u: goto label_14f998;
        case 0x14f99cu: goto label_14f99c;
        case 0x14f9a0u: goto label_14f9a0;
        case 0x14f9a4u: goto label_14f9a4;
        case 0x14f9a8u: goto label_14f9a8;
        case 0x14f9acu: goto label_14f9ac;
        case 0x14f9b0u: goto label_14f9b0;
        case 0x14f9b4u: goto label_14f9b4;
        case 0x14f9b8u: goto label_14f9b8;
        case 0x14f9bcu: goto label_14f9bc;
        case 0x14f9c0u: goto label_14f9c0;
        case 0x14f9c4u: goto label_14f9c4;
        case 0x14f9c8u: goto label_14f9c8;
        case 0x14f9ccu: goto label_14f9cc;
        case 0x14f9d0u: goto label_14f9d0;
        case 0x14f9d4u: goto label_14f9d4;
        case 0x14f9d8u: goto label_14f9d8;
        case 0x14f9dcu: goto label_14f9dc;
        case 0x14f9e0u: goto label_14f9e0;
        case 0x14f9e4u: goto label_14f9e4;
        case 0x14f9e8u: goto label_14f9e8;
        case 0x14f9ecu: goto label_14f9ec;
        case 0x14f9f0u: goto label_14f9f0;
        case 0x14f9f4u: goto label_14f9f4;
        case 0x14f9f8u: goto label_14f9f8;
        case 0x14f9fcu: goto label_14f9fc;
        case 0x14fa00u: goto label_14fa00;
        case 0x14fa04u: goto label_14fa04;
        case 0x14fa08u: goto label_14fa08;
        case 0x14fa0cu: goto label_14fa0c;
        case 0x14fa10u: goto label_14fa10;
        case 0x14fa14u: goto label_14fa14;
        case 0x14fa18u: goto label_14fa18;
        case 0x14fa1cu: goto label_14fa1c;
        case 0x14fa20u: goto label_14fa20;
        case 0x14fa24u: goto label_14fa24;
        case 0x14fa28u: goto label_14fa28;
        case 0x14fa2cu: goto label_14fa2c;
        case 0x14fa30u: goto label_14fa30;
        case 0x14fa34u: goto label_14fa34;
        case 0x14fa38u: goto label_14fa38;
        case 0x14fa3cu: goto label_14fa3c;
        case 0x14fa40u: goto label_14fa40;
        case 0x14fa44u: goto label_14fa44;
        case 0x14fa48u: goto label_14fa48;
        case 0x14fa4cu: goto label_14fa4c;
        case 0x14fa50u: goto label_14fa50;
        case 0x14fa54u: goto label_14fa54;
        case 0x14fa58u: goto label_14fa58;
        case 0x14fa5cu: goto label_14fa5c;
        case 0x14fa60u: goto label_14fa60;
        case 0x14fa64u: goto label_14fa64;
        case 0x14fa68u: goto label_14fa68;
        case 0x14fa6cu: goto label_14fa6c;
        case 0x14fa70u: goto label_14fa70;
        case 0x14fa74u: goto label_14fa74;
        case 0x14fa78u: goto label_14fa78;
        case 0x14fa7cu: goto label_14fa7c;
        case 0x14fa80u: goto label_14fa80;
        case 0x14fa84u: goto label_14fa84;
        case 0x14fa88u: goto label_14fa88;
        case 0x14fa8cu: goto label_14fa8c;
        case 0x14fa90u: goto label_14fa90;
        case 0x14fa94u: goto label_14fa94;
        case 0x14fa98u: goto label_14fa98;
        case 0x14fa9cu: goto label_14fa9c;
        case 0x14faa0u: goto label_14faa0;
        case 0x14faa4u: goto label_14faa4;
        case 0x14faa8u: goto label_14faa8;
        case 0x14faacu: goto label_14faac;
        case 0x14fab0u: goto label_14fab0;
        case 0x14fab4u: goto label_14fab4;
        case 0x14fab8u: goto label_14fab8;
        case 0x14fabcu: goto label_14fabc;
        case 0x14fac0u: goto label_14fac0;
        case 0x14fac4u: goto label_14fac4;
        default: break;
    }

    ctx->pc = 0x14f3e0u;

label_14f3e0:
    // 0x14f3e0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x14f3e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_14f3e4:
    // 0x14f3e4: 0x7fbf0070  sq          $ra, 0x70($sp)
    ctx->pc = 0x14f3e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 31));
label_14f3e8:
    // 0x14f3e8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x14f3e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_14f3ec:
    // 0x14f3ec: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x14f3ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_14f3f0:
    // 0x14f3f0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x14f3f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_14f3f4:
    // 0x14f3f4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x14f3f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_14f3f8:
    // 0x14f3f8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x14f3f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_14f3fc:
    // 0x14f3fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14f3fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_14f400:
    // 0x14f400: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14f400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_14f404:
    // 0x14f404: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x14f404u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_14f408:
    // 0x14f408: 0x2453dbc0  addiu       $s3, $v0, -0x2440
    ctx->pc = 0x14f408u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
label_14f40c:
    // 0x14f40c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x14f40cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_14f410:
    // 0x14f410: 0x2452a4a0  addiu       $s2, $v0, -0x5B60
    ctx->pc = 0x14f410u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943904));
label_14f414:
    // 0x14f414: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x14f414u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_14f418:
    // 0x14f418: 0x2454b700  addiu       $s4, $v0, -0x4900
    ctx->pc = 0x14f418u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948608));
label_14f41c:
    // 0x14f41c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x14f41cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_14f420:
    // 0x14f420: 0x24509240  addiu       $s0, $v0, -0x6DC0
    ctx->pc = 0x14f420u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939200));
label_14f424:
    // 0x14f424: 0x7260b628  paddub      $s6, $s3, $zero
    ctx->pc = 0x14f424u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
label_14f428:
    // 0x14f428: 0x8e6213f4  lw          $v0, 0x13F4($s3)
    ctx->pc = 0x14f428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 5108)));
label_14f42c:
    // 0x14f42c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_14f430:
    if (ctx->pc == 0x14F430u) {
        ctx->pc = 0x14F434u;
        goto label_14f434;
    }
    ctx->pc = 0x14F42Cu;
    {
        const bool branch_taken_0x14f42c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f42c) {
            ctx->pc = 0x14F43Cu;
            goto label_14f43c;
        }
    }
    ctx->pc = 0x14F434u;
label_14f434:
    // 0x14f434: 0x8e7613f4  lw          $s6, 0x13F4($s3)
    ctx->pc = 0x14f434u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 5108)));
label_14f438:
    // 0x14f438: 0x0  nop
    ctx->pc = 0x14f438u;
    // NOP
label_14f43c:
    // 0x14f43c: 0x8ec30008  lw          $v1, 0x8($s6)
    ctx->pc = 0x14f43cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
label_14f440:
    // 0x14f440: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x14f440u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_14f444:
    // 0x14f444: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x14f444u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_14f448:
    // 0x14f448: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_14f44c:
    if (ctx->pc == 0x14F44Cu) {
        ctx->pc = 0x14F450u;
        goto label_14f450;
    }
    ctx->pc = 0x14F448u;
    {
        const bool branch_taken_0x14f448 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f448) {
            ctx->pc = 0x14F498u;
            goto label_14f498;
        }
    }
    ctx->pc = 0x14F450u;
label_14f450:
    // 0x14f450: 0x8ec30008  lw          $v1, 0x8($s6)
    ctx->pc = 0x14f450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
label_14f454:
    // 0x14f454: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x14f454u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
label_14f458:
    // 0x14f458: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x14f458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_14f45c:
    // 0x14f45c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_14f460:
    if (ctx->pc == 0x14F460u) {
        ctx->pc = 0x14F464u;
        goto label_14f464;
    }
    ctx->pc = 0x14F45Cu;
    {
        const bool branch_taken_0x14f45c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f45c) {
            ctx->pc = 0x14F47Cu;
            goto label_14f47c;
        }
    }
    ctx->pc = 0x14F464u;
label_14f464:
    // 0x14f464: 0x8ec20130  lw          $v0, 0x130($s6)
    ctx->pc = 0x14f464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 304)));
label_14f468:
    // 0x14f468: 0x24420740  addiu       $v0, $v0, 0x740
    ctx->pc = 0x14f468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1856));
label_14f46c:
    // 0x14f46c: 0xae0200c0  sw          $v0, 0xC0($s0)
    ctx->pc = 0x14f46cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 2));
label_14f470:
    // 0x14f470: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x14f470u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_14f474:
    // 0x14f474: 0x1000000d  b           . + 4 + (0xD << 2)
label_14f478:
    if (ctx->pc == 0x14F478u) {
        ctx->pc = 0x14F47Cu;
        goto label_14f47c;
    }
    ctx->pc = 0x14F474u;
    {
        const bool branch_taken_0x14f474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f474) {
            ctx->pc = 0x14F4ACu;
            goto label_14f4ac;
        }
    }
    ctx->pc = 0x14F47Cu;
label_14f47c:
    // 0x14f47c: 0x8ec20130  lw          $v0, 0x130($s6)
    ctx->pc = 0x14f47cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 304)));
label_14f480:
    // 0x14f480: 0x24420700  addiu       $v0, $v0, 0x700
    ctx->pc = 0x14f480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1792));
label_14f484:
    // 0x14f484: 0xae0200c0  sw          $v0, 0xC0($s0)
    ctx->pc = 0x14f484u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 2));
label_14f488:
    // 0x14f488: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14f488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14f48c:
    // 0x14f48c: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x14f48cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_14f490:
    // 0x14f490: 0x10000006  b           . + 4 + (0x6 << 2)
label_14f494:
    if (ctx->pc == 0x14F494u) {
        ctx->pc = 0x14F498u;
        goto label_14f498;
    }
    ctx->pc = 0x14F490u;
    {
        const bool branch_taken_0x14f490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f490) {
            ctx->pc = 0x14F4ACu;
            goto label_14f4ac;
        }
    }
    ctx->pc = 0x14F498u;
label_14f498:
    // 0x14f498: 0x8ec20130  lw          $v0, 0x130($s6)
    ctx->pc = 0x14f498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 304)));
label_14f49c:
    // 0x14f49c: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x14f49cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
label_14f4a0:
    // 0x14f4a0: 0xae0200c0  sw          $v0, 0xC0($s0)
    ctx->pc = 0x14f4a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 2));
label_14f4a4:
    // 0x14f4a4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x14f4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_14f4a8:
    // 0x14f4a8: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x14f4a8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_14f4ac:
    // 0x14f4ac: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x14f4acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_14f4b0:
    // 0x14f4b0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x14f4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_14f4b4:
    // 0x14f4b4: 0x10620042  beq         $v1, $v0, . + 4 + (0x42 << 2)
label_14f4b8:
    if (ctx->pc == 0x14F4B8u) {
        ctx->pc = 0x14F4BCu;
        goto label_14f4bc;
    }
    ctx->pc = 0x14F4B4u;
    {
        const bool branch_taken_0x14f4b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14f4b4) {
            ctx->pc = 0x14F5C0u;
            goto label_14f5c0;
        }
    }
    ctx->pc = 0x14F4BCu;
label_14f4bc:
    // 0x14f4bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14f4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14f4c0:
    // 0x14f4c0: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_14f4c4:
    if (ctx->pc == 0x14F4C4u) {
        ctx->pc = 0x14F4C8u;
        goto label_14f4c8;
    }
    ctx->pc = 0x14F4C0u;
    {
        const bool branch_taken_0x14f4c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14f4c0) {
            ctx->pc = 0x14F4D8u;
            goto label_14f4d8;
        }
    }
    ctx->pc = 0x14F4C8u;
label_14f4c8:
    // 0x14f4c8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_14f4cc:
    if (ctx->pc == 0x14F4CCu) {
        ctx->pc = 0x14F4D0u;
        goto label_14f4d0;
    }
    ctx->pc = 0x14F4C8u;
    {
        const bool branch_taken_0x14f4c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f4c8) {
            ctx->pc = 0x14F4D8u;
            goto label_14f4d8;
        }
    }
    ctx->pc = 0x14F4D0u;
label_14f4d0:
    // 0x14f4d0: 0x1000007e  b           . + 4 + (0x7E << 2)
label_14f4d4:
    if (ctx->pc == 0x14F4D4u) {
        ctx->pc = 0x14F4D8u;
        goto label_14f4d8;
    }
    ctx->pc = 0x14F4D0u;
    {
        const bool branch_taken_0x14f4d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f4d0) {
            ctx->pc = 0x14F6CCu;
            goto label_14f6cc;
        }
    }
    ctx->pc = 0x14F4D8u;
label_14f4d8:
    // 0x14f4d8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14f4d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14f4dc:
    // 0x14f4dc: 0x0  nop
    ctx->pc = 0x14f4dcu;
    // NOP
label_14f4e0:
    // 0x14f4e0: 0xe6000120  swc1        $f0, 0x120($s0)
    ctx->pc = 0x14f4e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 288), bits); }
label_14f4e4:
    // 0x14f4e4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14f4e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14f4e8:
    // 0x14f4e8: 0x0  nop
    ctx->pc = 0x14f4e8u;
    // NOP
label_14f4ec:
    // 0x14f4ec: 0xe6000124  swc1        $f0, 0x124($s0)
    ctx->pc = 0x14f4ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 292), bits); }
label_14f4f0:
    // 0x14f4f0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14f4f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14f4f4:
    // 0x14f4f4: 0x0  nop
    ctx->pc = 0x14f4f4u;
    // NOP
label_14f4f8:
    // 0x14f4f8: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x14f4f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
label_14f4fc:
    // 0x14f4fc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x14f4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_14f500:
    // 0x14f500: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14f500u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14f504:
    // 0x14f504: 0x0  nop
    ctx->pc = 0x14f504u;
    // NOP
label_14f508:
    // 0x14f508: 0xe600012c  swc1        $f0, 0x12C($s0)
    ctx->pc = 0x14f508u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 300), bits); }
label_14f50c:
    // 0x14f50c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14f50cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14f510:
    // 0x14f510: 0x0  nop
    ctx->pc = 0x14f510u;
    // NOP
label_14f514:
    // 0x14f514: 0xe60000d0  swc1        $f0, 0xD0($s0)
    ctx->pc = 0x14f514u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
label_14f518:
    // 0x14f518: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14f518u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14f51c:
    // 0x14f51c: 0x0  nop
    ctx->pc = 0x14f51cu;
    // NOP
label_14f520:
    // 0x14f520: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x14f520u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
label_14f524:
    // 0x14f524: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14f524u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14f528:
    // 0x14f528: 0x0  nop
    ctx->pc = 0x14f528u;
    // NOP
label_14f52c:
    // 0x14f52c: 0xe60000d8  swc1        $f0, 0xD8($s0)
    ctx->pc = 0x14f52cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 216), bits); }
label_14f530:
    // 0x14f530: 0x8e0202d0  lw          $v0, 0x2D0($s0)
    ctx->pc = 0x14f530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 720)));
label_14f534:
    // 0x14f534: 0x24550190  addiu       $s5, $v0, 0x190
    ctx->pc = 0x14f534u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 400));
label_14f538:
    // 0x14f538: 0x72a02628  paddub      $a0, $s5, $zero
    ctx->pc = 0x14f538u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
label_14f53c:
    // 0x14f53c: 0xc040cbc  jal         func_1032F0
label_14f540:
    if (ctx->pc == 0x14F540u) {
        ctx->pc = 0x14F544u;
        goto label_14f544;
    }
    ctx->pc = 0x14F53Cu;
    SET_GPR_U32(ctx, 31, 0x14F544u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x14F544u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x14F544u) { return; }
    ctx->pc = 0x14F544u;
label_14f544:
    // 0x14f544: 0x8e020330  lw          $v0, 0x330($s0)
    ctx->pc = 0x14f544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 816)));
label_14f548:
    // 0x14f548: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x14f548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14f54c:
    // 0x14f54c: 0xe6a00030  swc1        $f0, 0x30($s5)
    ctx->pc = 0x14f54cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 48), bits); }
label_14f550:
    // 0x14f550: 0x8e020330  lw          $v0, 0x330($s0)
    ctx->pc = 0x14f550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 816)));
label_14f554:
    // 0x14f554: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x14f554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14f558:
    // 0x14f558: 0xe6a00034  swc1        $f0, 0x34($s5)
    ctx->pc = 0x14f558u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 52), bits); }
label_14f55c:
    // 0x14f55c: 0x8e020330  lw          $v0, 0x330($s0)
    ctx->pc = 0x14f55cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 816)));
label_14f560:
    // 0x14f560: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x14f560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14f564:
    // 0x14f564: 0xe6a00038  swc1        $f0, 0x38($s5)
    ctx->pc = 0x14f564u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 56), bits); }
label_14f568:
    // 0x14f568: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x14f568u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_14f56c:
    // 0x14f56c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14f56cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14f570:
    // 0x14f570: 0x0  nop
    ctx->pc = 0x14f570u;
    // NOP
label_14f574:
    // 0x14f574: 0xe6a0003c  swc1        $f0, 0x3C($s5)
    ctx->pc = 0x14f574u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 60), bits); }
label_14f578:
    // 0x14f578: 0x8e0302d0  lw          $v1, 0x2D0($s0)
    ctx->pc = 0x14f578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 720)));
label_14f57c:
    // 0x14f57c: 0x946202d0  lhu         $v0, 0x2D0($v1)
    ctx->pc = 0x14f57cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 720)));
label_14f580:
    // 0x14f580: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x14f580u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
label_14f584:
    // 0x14f584: 0xa46202d0  sh          $v0, 0x2D0($v1)
    ctx->pc = 0x14f584u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 720), (uint16_t)GPR_U32(ctx, 2));
label_14f588:
    // 0x14f588: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x14f588u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_14f58c:
    // 0x14f58c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14f58cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14f590:
    // 0x14f590: 0x8e0202d0  lw          $v0, 0x2D0($s0)
    ctx->pc = 0x14f590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 720)));
label_14f594:
    // 0x14f594: 0xe44002b8  swc1        $f0, 0x2B8($v0)
    ctx->pc = 0x14f594u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 696), bits); }
label_14f598:
    // 0x14f598: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x14f598u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_14f59c:
    // 0x14f59c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14f59cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14f5a0:
    // 0x14f5a0: 0x8e0202d0  lw          $v0, 0x2D0($s0)
    ctx->pc = 0x14f5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 720)));
label_14f5a4:
    // 0x14f5a4: 0xe44002bc  swc1        $f0, 0x2BC($v0)
    ctx->pc = 0x14f5a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 700), bits); }
label_14f5a8:
    // 0x14f5a8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x14f5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_14f5ac:
    // 0x14f5ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14f5acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14f5b0:
    // 0x14f5b0: 0x8e0202d0  lw          $v0, 0x2D0($s0)
    ctx->pc = 0x14f5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 720)));
label_14f5b4:
    // 0x14f5b4: 0xe44002c0  swc1        $f0, 0x2C0($v0)
    ctx->pc = 0x14f5b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 704), bits); }
label_14f5b8:
    // 0x14f5b8: 0x10000044  b           . + 4 + (0x44 << 2)
label_14f5bc:
    if (ctx->pc == 0x14F5BCu) {
        ctx->pc = 0x14F5C0u;
        goto label_14f5c0;
    }
    ctx->pc = 0x14F5B8u;
    {
        const bool branch_taken_0x14f5b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f5b8) {
            ctx->pc = 0x14F6CCu;
            goto label_14f6cc;
        }
    }
    ctx->pc = 0x14F5C0u;
label_14f5c0:
    // 0x14f5c0: 0x3c02c244  lui         $v0, 0xC244
    ctx->pc = 0x14f5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49732 << 16));
label_14f5c4:
    // 0x14f5c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14f5c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14f5c8:
    // 0x14f5c8: 0x0  nop
    ctx->pc = 0x14f5c8u;
    // NOP
label_14f5cc:
    // 0x14f5cc: 0xe6000120  swc1        $f0, 0x120($s0)
    ctx->pc = 0x14f5ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 288), bits); }
label_14f5d0:
    // 0x14f5d0: 0x3c0242f8  lui         $v0, 0x42F8
    ctx->pc = 0x14f5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17144 << 16));
label_14f5d4:
    // 0x14f5d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14f5d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14f5d8:
    // 0x14f5d8: 0x0  nop
    ctx->pc = 0x14f5d8u;
    // NOP
label_14f5dc:
    // 0x14f5dc: 0xe6000124  swc1        $f0, 0x124($s0)
    ctx->pc = 0x14f5dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 292), bits); }
label_14f5e0:
    // 0x14f5e0: 0x3c02c282  lui         $v0, 0xC282
    ctx->pc = 0x14f5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49794 << 16));
label_14f5e4:
    // 0x14f5e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14f5e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14f5e8:
    // 0x14f5e8: 0x0  nop
    ctx->pc = 0x14f5e8u;
    // NOP
label_14f5ec:
    // 0x14f5ec: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x14f5ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
label_14f5f0:
    // 0x14f5f0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x14f5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_14f5f4:
    // 0x14f5f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14f5f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14f5f8:
    // 0x14f5f8: 0x0  nop
    ctx->pc = 0x14f5f8u;
    // NOP
label_14f5fc:
    // 0x14f5fc: 0xe600012c  swc1        $f0, 0x12C($s0)
    ctx->pc = 0x14f5fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 300), bits); }
label_14f600:
    // 0x14f600: 0x3c023fc8  lui         $v0, 0x3FC8
    ctx->pc = 0x14f600u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16328 << 16));
label_14f604:
    // 0x14f604: 0x3442f5c3  ori         $v0, $v0, 0xF5C3
    ctx->pc = 0x14f604u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)62915);
label_14f608:
    // 0x14f608: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14f608u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14f60c:
    // 0x14f60c: 0x0  nop
    ctx->pc = 0x14f60cu;
    // NOP
label_14f610:
    // 0x14f610: 0xe60000d0  swc1        $f0, 0xD0($s0)
    ctx->pc = 0x14f610u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
label_14f614:
    // 0x14f614: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x14f614u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_14f618:
    // 0x14f618: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x14f618u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_14f61c:
    // 0x14f61c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14f61cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14f620:
    // 0x14f620: 0x0  nop
    ctx->pc = 0x14f620u;
    // NOP
label_14f624:
    // 0x14f624: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x14f624u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
label_14f628:
    // 0x14f628: 0x3c023eae  lui         $v0, 0x3EAE
    ctx->pc = 0x14f628u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16046 << 16));
label_14f62c:
    // 0x14f62c: 0x3442147b  ori         $v0, $v0, 0x147B
    ctx->pc = 0x14f62cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5243);
label_14f630:
    // 0x14f630: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14f630u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14f634:
    // 0x14f634: 0x0  nop
    ctx->pc = 0x14f634u;
    // NOP
label_14f638:
    // 0x14f638: 0xe60000d8  swc1        $f0, 0xD8($s0)
    ctx->pc = 0x14f638u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 216), bits); }
label_14f63c:
    // 0x14f63c: 0x8e0202d0  lw          $v0, 0x2D0($s0)
    ctx->pc = 0x14f63cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 720)));
label_14f640:
    // 0x14f640: 0x24550190  addiu       $s5, $v0, 0x190
    ctx->pc = 0x14f640u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 400));
label_14f644:
    // 0x14f644: 0x72a02628  paddub      $a0, $s5, $zero
    ctx->pc = 0x14f644u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
label_14f648:
    // 0x14f648: 0xc040cbc  jal         func_1032F0
label_14f64c:
    if (ctx->pc == 0x14F64Cu) {
        ctx->pc = 0x14F650u;
        goto label_14f650;
    }
    ctx->pc = 0x14F648u;
    SET_GPR_U32(ctx, 31, 0x14F650u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x14F650u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x14F650u) { return; }
    ctx->pc = 0x14F650u;
label_14f650:
    // 0x14f650: 0x8e020330  lw          $v0, 0x330($s0)
    ctx->pc = 0x14f650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 816)));
label_14f654:
    // 0x14f654: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x14f654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14f658:
    // 0x14f658: 0xe6a00030  swc1        $f0, 0x30($s5)
    ctx->pc = 0x14f658u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 48), bits); }
label_14f65c:
    // 0x14f65c: 0x8e020330  lw          $v0, 0x330($s0)
    ctx->pc = 0x14f65cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 816)));
label_14f660:
    // 0x14f660: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x14f660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14f664:
    // 0x14f664: 0xe6a00034  swc1        $f0, 0x34($s5)
    ctx->pc = 0x14f664u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 52), bits); }
label_14f668:
    // 0x14f668: 0x8e020330  lw          $v0, 0x330($s0)
    ctx->pc = 0x14f668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 816)));
label_14f66c:
    // 0x14f66c: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x14f66cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14f670:
    // 0x14f670: 0xe6a00038  swc1        $f0, 0x38($s5)
    ctx->pc = 0x14f670u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 56), bits); }
label_14f674:
    // 0x14f674: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x14f674u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_14f678:
    // 0x14f678: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14f678u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14f67c:
    // 0x14f67c: 0x0  nop
    ctx->pc = 0x14f67cu;
    // NOP
label_14f680:
    // 0x14f680: 0xe6a0003c  swc1        $f0, 0x3C($s5)
    ctx->pc = 0x14f680u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 60), bits); }
label_14f684:
    // 0x14f684: 0x8e0302d0  lw          $v1, 0x2D0($s0)
    ctx->pc = 0x14f684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 720)));
label_14f688:
    // 0x14f688: 0x946202d0  lhu         $v0, 0x2D0($v1)
    ctx->pc = 0x14f688u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 720)));
label_14f68c:
    // 0x14f68c: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x14f68cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
label_14f690:
    // 0x14f690: 0xa46202d0  sh          $v0, 0x2D0($v1)
    ctx->pc = 0x14f690u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 720), (uint16_t)GPR_U32(ctx, 2));
label_14f694:
    // 0x14f694: 0x3c023f33  lui         $v0, 0x3F33
    ctx->pc = 0x14f694u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16179 << 16));
label_14f698:
    // 0x14f698: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x14f698u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
label_14f69c:
    // 0x14f69c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14f69cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14f6a0:
    // 0x14f6a0: 0x8e0202d0  lw          $v0, 0x2D0($s0)
    ctx->pc = 0x14f6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 720)));
label_14f6a4:
    // 0x14f6a4: 0xe44002b8  swc1        $f0, 0x2B8($v0)
    ctx->pc = 0x14f6a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 696), bits); }
label_14f6a8:
    // 0x14f6a8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x14f6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_14f6ac:
    // 0x14f6ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14f6acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14f6b0:
    // 0x14f6b0: 0x8e0202d0  lw          $v0, 0x2D0($s0)
    ctx->pc = 0x14f6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 720)));
label_14f6b4:
    // 0x14f6b4: 0xe44002bc  swc1        $f0, 0x2BC($v0)
    ctx->pc = 0x14f6b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 700), bits); }
label_14f6b8:
    // 0x14f6b8: 0x3c023f33  lui         $v0, 0x3F33
    ctx->pc = 0x14f6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16179 << 16));
label_14f6bc:
    // 0x14f6bc: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x14f6bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
label_14f6c0:
    // 0x14f6c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14f6c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14f6c4:
    // 0x14f6c4: 0x8e0202d0  lw          $v0, 0x2D0($s0)
    ctx->pc = 0x14f6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 720)));
label_14f6c8:
    // 0x14f6c8: 0xe44002c0  swc1        $f0, 0x2C0($v0)
    ctx->pc = 0x14f6c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 704), bits); }
label_14f6cc:
    // 0x14f6cc: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x14f6ccu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_14f6d0:
    // 0x14f6d0: 0xc097a5c  jal         func_25E970
label_14f6d4:
    if (ctx->pc == 0x14F6D4u) {
        ctx->pc = 0x14F6D8u;
        goto label_14f6d8;
    }
    ctx->pc = 0x14F6D0u;
    SET_GPR_U32(ctx, 31, 0x14F6D8u);
    ctx->pc = 0x25E970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E970u, 0x14F6D0u, 0x14F6D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F6D8u;
label_14f6d8:
    // 0x14f6d8: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x14f6d8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_14f6dc:
    // 0x14f6dc: 0xc05c04c  jal         func_170130
label_14f6e0:
    if (ctx->pc == 0x14F6E0u) {
        ctx->pc = 0x14F6E4u;
        goto label_14f6e4;
    }
    ctx->pc = 0x14F6DCu;
    SET_GPR_U32(ctx, 31, 0x14F6E4u);
    ctx->pc = 0x170130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x170130u, 0x14F6DCu, 0x14F6E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F6E4u;
label_14f6e4:
    // 0x14f6e4: 0x926213f8  lbu         $v0, 0x13F8($s3)
    ctx->pc = 0x14f6e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 5112)));
label_14f6e8:
    // 0x14f6e8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x14f6e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_14f6ec:
    // 0x14f6ec: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x14f6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_14f6f0:
    // 0x14f6f0: 0x10620013  beq         $v1, $v0, . + 4 + (0x13 << 2)
label_14f6f4:
    if (ctx->pc == 0x14F6F4u) {
        ctx->pc = 0x14F6F8u;
        goto label_14f6f8;
    }
    ctx->pc = 0x14F6F0u;
    {
        const bool branch_taken_0x14f6f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14f6f0) {
            ctx->pc = 0x14F740u;
            goto label_14f740;
        }
    }
    ctx->pc = 0x14F6F8u;
label_14f6f8:
    // 0x14f6f8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x14f6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_14f6fc:
    // 0x14f6fc: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
label_14f700:
    if (ctx->pc == 0x14F700u) {
        ctx->pc = 0x14F704u;
        goto label_14f704;
    }
    ctx->pc = 0x14F6FCu;
    {
        const bool branch_taken_0x14f6fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14f6fc) {
            ctx->pc = 0x14F72Cu;
            goto label_14f72c;
        }
    }
    ctx->pc = 0x14F704u;
label_14f704:
    // 0x14f704: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14f704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14f708:
    // 0x14f708: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_14f70c:
    if (ctx->pc == 0x14F70Cu) {
        ctx->pc = 0x14F710u;
        goto label_14f710;
    }
    ctx->pc = 0x14F708u;
    {
        const bool branch_taken_0x14f708 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14f708) {
            ctx->pc = 0x14F718u;
            goto label_14f718;
        }
    }
    ctx->pc = 0x14F710u;
label_14f710:
    // 0x14f710: 0x1000000e  b           . + 4 + (0xE << 2)
label_14f714:
    if (ctx->pc == 0x14F714u) {
        ctx->pc = 0x14F718u;
        goto label_14f718;
    }
    ctx->pc = 0x14F710u;
    {
        const bool branch_taken_0x14f710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f710) {
            ctx->pc = 0x14F74Cu;
            goto label_14f74c;
        }
    }
    ctx->pc = 0x14F718u;
label_14f718:
    // 0x14f718: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x14f718u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
label_14f71c:
    // 0x14f71c: 0xc055418  jal         func_155060
label_14f720:
    if (ctx->pc == 0x14F720u) {
        ctx->pc = 0x14F724u;
        goto label_14f724;
    }
    ctx->pc = 0x14F71Cu;
    SET_GPR_U32(ctx, 31, 0x14F724u);
    ctx->pc = 0x155060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155060u, 0x14F71Cu, 0x14F724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F724u;
label_14f724:
    // 0x14f724: 0x10000009  b           . + 4 + (0x9 << 2)
label_14f728:
    if (ctx->pc == 0x14F728u) {
        ctx->pc = 0x14F72Cu;
        goto label_14f72c;
    }
    ctx->pc = 0x14F724u;
    {
        const bool branch_taken_0x14f724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f724) {
            ctx->pc = 0x14F74Cu;
            goto label_14f74c;
        }
    }
    ctx->pc = 0x14F72Cu;
label_14f72c:
    // 0x14f72c: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x14f72cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
label_14f730:
    // 0x14f730: 0xc055484  jal         func_155210
label_14f734:
    if (ctx->pc == 0x14F734u) {
        ctx->pc = 0x14F738u;
        goto label_14f738;
    }
    ctx->pc = 0x14F730u;
    SET_GPR_U32(ctx, 31, 0x14F738u);
    ctx->pc = 0x155210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155210u, 0x14F730u, 0x14F738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F738u;
label_14f738:
    // 0x14f738: 0x10000004  b           . + 4 + (0x4 << 2)
label_14f73c:
    if (ctx->pc == 0x14F73Cu) {
        ctx->pc = 0x14F740u;
        goto label_14f740;
    }
    ctx->pc = 0x14F738u;
    {
        const bool branch_taken_0x14f738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f738) {
            ctx->pc = 0x14F74Cu;
            goto label_14f74c;
        }
    }
    ctx->pc = 0x14F740u;
label_14f740:
    // 0x14f740: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x14f740u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
label_14f744:
    // 0x14f744: 0xc055564  jal         func_155590
label_14f748:
    if (ctx->pc == 0x14F748u) {
        ctx->pc = 0x14F74Cu;
        goto label_14f74c;
    }
    ctx->pc = 0x14F744u;
    SET_GPR_U32(ctx, 31, 0x14F74Cu);
    ctx->pc = 0x155590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155590u, 0x14F744u, 0x14F74Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F74Cu;
label_14f74c:
    // 0x14f74c: 0x8ec20130  lw          $v0, 0x130($s6)
    ctx->pc = 0x14f74cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 304)));
label_14f750:
    // 0x14f750: 0x24420740  addiu       $v0, $v0, 0x740
    ctx->pc = 0x14f750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1856));
label_14f754:
    // 0x14f754: 0xae4200c0  sw          $v0, 0xC0($s2)
    ctx->pc = 0x14f754u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 192), GPR_U32(ctx, 2));
label_14f758:
    // 0x14f758: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14f758u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14f75c:
    // 0x14f75c: 0x0  nop
    ctx->pc = 0x14f75cu;
    // NOP
label_14f760:
    // 0x14f760: 0xe64000d0  swc1        $f0, 0xD0($s2)
    ctx->pc = 0x14f760u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 208), bits); }
label_14f764:
    // 0x14f764: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14f764u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14f768:
    // 0x14f768: 0x0  nop
    ctx->pc = 0x14f768u;
    // NOP
label_14f76c:
    // 0x14f76c: 0xe64000d4  swc1        $f0, 0xD4($s2)
    ctx->pc = 0x14f76cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 212), bits); }
label_14f770:
    // 0x14f770: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14f770u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14f774:
    // 0x14f774: 0x0  nop
    ctx->pc = 0x14f774u;
    // NOP
label_14f778:
    // 0x14f778: 0xe64000d8  swc1        $f0, 0xD8($s2)
    ctx->pc = 0x14f778u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 216), bits); }
label_14f77c:
    // 0x14f77c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14f77cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14f780:
    // 0x14f780: 0x0  nop
    ctx->pc = 0x14f780u;
    // NOP
label_14f784:
    // 0x14f784: 0xe6400120  swc1        $f0, 0x120($s2)
    ctx->pc = 0x14f784u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 288), bits); }
label_14f788:
    // 0x14f788: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14f788u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14f78c:
    // 0x14f78c: 0x0  nop
    ctx->pc = 0x14f78cu;
    // NOP
label_14f790:
    // 0x14f790: 0xe6400124  swc1        $f0, 0x124($s2)
    ctx->pc = 0x14f790u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 292), bits); }
label_14f794:
    // 0x14f794: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14f794u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14f798:
    // 0x14f798: 0x0  nop
    ctx->pc = 0x14f798u;
    // NOP
label_14f79c:
    // 0x14f79c: 0xe6400128  swc1        $f0, 0x128($s2)
    ctx->pc = 0x14f79cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 296), bits); }
label_14f7a0:
    // 0x14f7a0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x14f7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_14f7a4:
    // 0x14f7a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14f7a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14f7a8:
    // 0x14f7a8: 0x0  nop
    ctx->pc = 0x14f7a8u;
    // NOP
label_14f7ac:
    // 0x14f7ac: 0xe640012c  swc1        $f0, 0x12C($s2)
    ctx->pc = 0x14f7acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 300), bits); }
label_14f7b0:
    // 0x14f7b0: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x14f7b0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
label_14f7b4:
    // 0x14f7b4: 0xc097a5c  jal         func_25E970
label_14f7b8:
    if (ctx->pc == 0x14F7B8u) {
        ctx->pc = 0x14F7BCu;
        goto label_14f7bc;
    }
    ctx->pc = 0x14F7B4u;
    SET_GPR_U32(ctx, 31, 0x14F7BCu);
    ctx->pc = 0x25E970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E970u, 0x14F7B4u, 0x14F7BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F7BCu;
label_14f7bc:
    // 0x14f7bc: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x14f7bcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
label_14f7c0:
    // 0x14f7c0: 0xc05c04c  jal         func_170130
label_14f7c4:
    if (ctx->pc == 0x14F7C4u) {
        ctx->pc = 0x14F7C8u;
        goto label_14f7c8;
    }
    ctx->pc = 0x14F7C0u;
    SET_GPR_U32(ctx, 31, 0x14F7C8u);
    ctx->pc = 0x170130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x170130u, 0x14F7C0u, 0x14F7C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F7C8u;
label_14f7c8:
    // 0x14f7c8: 0x926213f8  lbu         $v0, 0x13F8($s3)
    ctx->pc = 0x14f7c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 5112)));
label_14f7cc:
    // 0x14f7cc: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x14f7ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_14f7d0:
    // 0x14f7d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14f7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14f7d4:
    // 0x14f7d4: 0x1462002c  bne         $v1, $v0, . + 4 + (0x2C << 2)
label_14f7d8:
    if (ctx->pc == 0x14F7D8u) {
        ctx->pc = 0x14F7DCu;
        goto label_14f7dc;
    }
    ctx->pc = 0x14F7D4u;
    {
        const bool branch_taken_0x14f7d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x14f7d4) {
            ctx->pc = 0x14F888u;
            goto label_14f888;
        }
    }
    ctx->pc = 0x14F7DCu;
label_14f7dc:
    // 0x14f7dc: 0x926213f8  lbu         $v0, 0x13F8($s3)
    ctx->pc = 0x14f7dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 5112)));
label_14f7e0:
    // 0x14f7e0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x14f7e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_14f7e4:
    // 0x14f7e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14f7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14f7e8:
    // 0x14f7e8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_14f7ec:
    if (ctx->pc == 0x14F7ECu) {
        ctx->pc = 0x14F7F0u;
        goto label_14f7f0;
    }
    ctx->pc = 0x14F7E8u;
    {
        const bool branch_taken_0x14f7e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14f7e8) {
            ctx->pc = 0x14F7F8u;
            goto label_14f7f8;
        }
    }
    ctx->pc = 0x14F7F0u;
label_14f7f0:
    // 0x14f7f0: 0x10000004  b           . + 4 + (0x4 << 2)
label_14f7f4:
    if (ctx->pc == 0x14F7F4u) {
        ctx->pc = 0x14F7F8u;
        goto label_14f7f8;
    }
    ctx->pc = 0x14F7F0u;
    {
        const bool branch_taken_0x14f7f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f7f0) {
            ctx->pc = 0x14F804u;
            goto label_14f804;
        }
    }
    ctx->pc = 0x14F7F8u;
label_14f7f8:
    // 0x14f7f8: 0x72802628  paddub      $a0, $s4, $zero
    ctx->pc = 0x14f7f8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
label_14f7fc:
    // 0x14f7fc: 0xc055418  jal         func_155060
label_14f800:
    if (ctx->pc == 0x14F800u) {
        ctx->pc = 0x14F804u;
        goto label_14f804;
    }
    ctx->pc = 0x14F7FCu;
    SET_GPR_U32(ctx, 31, 0x14F804u);
    ctx->pc = 0x155060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155060u, 0x14F7FCu, 0x14F804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F804u;
label_14f804:
    // 0x14f804: 0x8ec20130  lw          $v0, 0x130($s6)
    ctx->pc = 0x14f804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 304)));
label_14f808:
    // 0x14f808: 0x24420700  addiu       $v0, $v0, 0x700
    ctx->pc = 0x14f808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1792));
label_14f80c:
    // 0x14f80c: 0xae8200c0  sw          $v0, 0xC0($s4)
    ctx->pc = 0x14f80cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 192), GPR_U32(ctx, 2));
label_14f810:
    // 0x14f810: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14f810u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14f814:
    // 0x14f814: 0x0  nop
    ctx->pc = 0x14f814u;
    // NOP
label_14f818:
    // 0x14f818: 0xe68000d0  swc1        $f0, 0xD0($s4)
    ctx->pc = 0x14f818u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 208), bits); }
label_14f81c:
    // 0x14f81c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14f81cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14f820:
    // 0x14f820: 0x0  nop
    ctx->pc = 0x14f820u;
    // NOP
label_14f824:
    // 0x14f824: 0xe68000d4  swc1        $f0, 0xD4($s4)
    ctx->pc = 0x14f824u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 212), bits); }
label_14f828:
    // 0x14f828: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x14f828u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_14f82c:
    // 0x14f82c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x14f82cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_14f830:
    // 0x14f830: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14f830u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14f834:
    // 0x14f834: 0x0  nop
    ctx->pc = 0x14f834u;
    // NOP
label_14f838:
    // 0x14f838: 0xe68000d8  swc1        $f0, 0xD8($s4)
    ctx->pc = 0x14f838u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 216), bits); }
label_14f83c:
    // 0x14f83c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14f83cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14f840:
    // 0x14f840: 0x0  nop
    ctx->pc = 0x14f840u;
    // NOP
label_14f844:
    // 0x14f844: 0xe6800120  swc1        $f0, 0x120($s4)
    ctx->pc = 0x14f844u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 288), bits); }
label_14f848:
    // 0x14f848: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14f848u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14f84c:
    // 0x14f84c: 0x0  nop
    ctx->pc = 0x14f84cu;
    // NOP
label_14f850:
    // 0x14f850: 0xe6800124  swc1        $f0, 0x124($s4)
    ctx->pc = 0x14f850u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 292), bits); }
label_14f854:
    // 0x14f854: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14f854u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14f858:
    // 0x14f858: 0x0  nop
    ctx->pc = 0x14f858u;
    // NOP
label_14f85c:
    // 0x14f85c: 0xe6800128  swc1        $f0, 0x128($s4)
    ctx->pc = 0x14f85cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 296), bits); }
label_14f860:
    // 0x14f860: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x14f860u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_14f864:
    // 0x14f864: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14f864u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14f868:
    // 0x14f868: 0x0  nop
    ctx->pc = 0x14f868u;
    // NOP
label_14f86c:
    // 0x14f86c: 0xe680012c  swc1        $f0, 0x12C($s4)
    ctx->pc = 0x14f86cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 300), bits); }
label_14f870:
    // 0x14f870: 0x72802628  paddub      $a0, $s4, $zero
    ctx->pc = 0x14f870u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
label_14f874:
    // 0x14f874: 0xc097a5c  jal         func_25E970
label_14f878:
    if (ctx->pc == 0x14F878u) {
        ctx->pc = 0x14F87Cu;
        goto label_14f87c;
    }
    ctx->pc = 0x14F874u;
    SET_GPR_U32(ctx, 31, 0x14F87Cu);
    ctx->pc = 0x25E970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E970u, 0x14F874u, 0x14F87Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F87Cu;
label_14f87c:
    // 0x14f87c: 0x72802628  paddub      $a0, $s4, $zero
    ctx->pc = 0x14f87cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
label_14f880:
    // 0x14f880: 0xc05c04c  jal         func_170130
label_14f884:
    if (ctx->pc == 0x14F884u) {
        ctx->pc = 0x14F888u;
        goto label_14f888;
    }
    ctx->pc = 0x14F880u;
    SET_GPR_U32(ctx, 31, 0x14F888u);
    ctx->pc = 0x170130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x170130u, 0x14F880u, 0x14F888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F888u;
label_14f888:
    // 0x14f888: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x14f888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_14f88c:
    // 0x14f88c: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x14f88cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_14f890:
    // 0x14f890: 0x8ec20008  lw          $v0, 0x8($s6)
    ctx->pc = 0x14f890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
label_14f894:
    // 0x14f894: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x14f894u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_14f898:
    // 0x14f898: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_14f89c:
    if (ctx->pc == 0x14F89Cu) {
        ctx->pc = 0x14F8A0u;
        goto label_14f8a0;
    }
    ctx->pc = 0x14F898u;
    {
        const bool branch_taken_0x14f898 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f898) {
            ctx->pc = 0x14F8A4u;
            goto label_14f8a4;
        }
    }
    ctx->pc = 0x14F8A0u;
label_14f8a0:
    // 0x14f8a0: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x14f8a0u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_14f8a4:
    // 0x14f8a4: 0x8e6213f4  lw          $v0, 0x13F4($s3)
    ctx->pc = 0x14f8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 5108)));
label_14f8a8:
    // 0x14f8a8: 0x1440003d  bnez        $v0, . + 4 + (0x3D << 2)
label_14f8ac:
    if (ctx->pc == 0x14F8ACu) {
        ctx->pc = 0x14F8B0u;
        goto label_14f8b0;
    }
    ctx->pc = 0x14F8A8u;
    {
        const bool branch_taken_0x14f8a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14f8a8) {
            ctx->pc = 0x14F9A0u;
            goto label_14f9a0;
        }
    }
    ctx->pc = 0x14F8B0u;
label_14f8b0:
    // 0x14f8b0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x14f8b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_14f8b4:
    // 0x14f8b4: 0x8c221a98  lw          $v0, 0x1A98($at)
    ctx->pc = 0x14f8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6808)));
label_14f8b8:
    // 0x14f8b8: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x14f8b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
label_14f8bc:
    // 0x14f8bc: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_14f8c0:
    if (ctx->pc == 0x14F8C0u) {
        ctx->pc = 0x14F8C4u;
        goto label_14f8c4;
    }
    ctx->pc = 0x14F8BCu;
    {
        const bool branch_taken_0x14f8bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f8bc) {
            ctx->pc = 0x14F92Cu;
            goto label_14f92c;
        }
    }
    ctx->pc = 0x14F8C4u;
label_14f8c4:
    // 0x14f8c4: 0x926213a7  lbu         $v0, 0x13A7($s3)
    ctx->pc = 0x14f8c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 5031)));
label_14f8c8:
    // 0x14f8c8: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x14f8c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_14f8cc:
    // 0x14f8cc: 0x2c810007  sltiu       $at, $a0, 0x7
    ctx->pc = 0x14f8ccu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_14f8d0:
    // 0x14f8d0: 0x10200016  beqz        $at, . + 4 + (0x16 << 2)
label_14f8d4:
    if (ctx->pc == 0x14F8D4u) {
        ctx->pc = 0x14F8D8u;
        goto label_14f8d8;
    }
    ctx->pc = 0x14F8D0u;
    {
        const bool branch_taken_0x14f8d0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f8d0) {
            ctx->pc = 0x14F92Cu;
            goto label_14f92c;
        }
    }
    ctx->pc = 0x14F8D8u;
label_14f8d8:
    // 0x14f8d8: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x14f8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_14f8dc:
    // 0x14f8dc: 0x2443e940  addiu       $v1, $v0, -0x16C0
    ctx->pc = 0x14f8dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961472));
label_14f8e0:
    // 0x14f8e0: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x14f8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_14f8e4:
    // 0x14f8e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14f8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_14f8e8:
    // 0x14f8e8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x14f8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_14f8ec:
    // 0x14f8ec: 0x400008  jr          $v0
label_14f8f0:
    if (ctx->pc == 0x14F8F0u) {
        ctx->pc = 0x14F8F4u;
        goto label_14f8f4;
    }
    ctx->pc = 0x14F8ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14F8ECu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x14F8F4u;
label_14f8f4:
    // 0x14f8f4: 0x36220007  ori         $v0, $s1, 0x7
    ctx->pc = 0x14f8f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)7);
label_14f8f8:
    // 0x14f8f8: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x14f8f8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_14f8fc:
    // 0x14f8fc: 0x1000000b  b           . + 4 + (0xB << 2)
label_14f900:
    if (ctx->pc == 0x14F900u) {
        ctx->pc = 0x14F904u;
        goto label_14f904;
    }
    ctx->pc = 0x14F8FCu;
    {
        const bool branch_taken_0x14f8fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f8fc) {
            ctx->pc = 0x14F92Cu;
            goto label_14f92c;
        }
    }
    ctx->pc = 0x14F904u;
label_14f904:
    // 0x14f904: 0x36220006  ori         $v0, $s1, 0x6
    ctx->pc = 0x14f904u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)6);
label_14f908:
    // 0x14f908: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x14f908u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_14f90c:
    // 0x14f90c: 0x10000007  b           . + 4 + (0x7 << 2)
label_14f910:
    if (ctx->pc == 0x14F910u) {
        ctx->pc = 0x14F914u;
        goto label_14f914;
    }
    ctx->pc = 0x14F90Cu;
    {
        const bool branch_taken_0x14f90c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f90c) {
            ctx->pc = 0x14F92Cu;
            goto label_14f92c;
        }
    }
    ctx->pc = 0x14F914u;
label_14f914:
    // 0x14f914: 0x36220006  ori         $v0, $s1, 0x6
    ctx->pc = 0x14f914u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)6);
label_14f918:
    // 0x14f918: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x14f918u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_14f91c:
    // 0x14f91c: 0x10000003  b           . + 4 + (0x3 << 2)
label_14f920:
    if (ctx->pc == 0x14F920u) {
        ctx->pc = 0x14F924u;
        goto label_14f924;
    }
    ctx->pc = 0x14F91Cu;
    {
        const bool branch_taken_0x14f91c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f91c) {
            ctx->pc = 0x14F92Cu;
            goto label_14f92c;
        }
    }
    ctx->pc = 0x14F924u;
label_14f924:
    // 0x14f924: 0x36220006  ori         $v0, $s1, 0x6
    ctx->pc = 0x14f924u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)6);
label_14f928:
    // 0x14f928: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x14f928u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_14f92c:
    // 0x14f92c: 0x926213f8  lbu         $v0, 0x13F8($s3)
    ctx->pc = 0x14f92cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 5112)));
label_14f930:
    // 0x14f930: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x14f930u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_14f934:
    // 0x14f934: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_14f938:
    if (ctx->pc == 0x14F938u) {
        ctx->pc = 0x14F93Cu;
        goto label_14f93c;
    }
    ctx->pc = 0x14F934u;
    {
        const bool branch_taken_0x14f934 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14f934) {
            ctx->pc = 0x14F944u;
            goto label_14f944;
        }
    }
    ctx->pc = 0x14F93Cu;
label_14f93c:
    // 0x14f93c: 0x36220006  ori         $v0, $s1, 0x6
    ctx->pc = 0x14f93cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)6);
label_14f940:
    // 0x14f940: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x14f940u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_14f944:
    // 0x14f944: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x14f944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_14f948:
    // 0x14f948: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x14f948u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_14f94c:
    // 0x14f94c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x14f94cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_14f950:
    // 0x14f950: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_14f954:
    if (ctx->pc == 0x14F954u) {
        ctx->pc = 0x14F958u;
        goto label_14f958;
    }
    ctx->pc = 0x14F950u;
    {
        const bool branch_taken_0x14f950 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f950) {
            ctx->pc = 0x14F960u;
            goto label_14f960;
        }
    }
    ctx->pc = 0x14F958u;
label_14f958:
    // 0x14f958: 0x36220006  ori         $v0, $s1, 0x6
    ctx->pc = 0x14f958u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)6);
label_14f95c:
    // 0x14f95c: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x14f95cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_14f960:
    // 0x14f960: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x14f960u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_14f964:
    // 0x14f964: 0x8c221a98  lw          $v0, 0x1A98($at)
    ctx->pc = 0x14f964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6808)));
label_14f968:
    // 0x14f968: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x14f968u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
label_14f96c:
    // 0x14f96c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_14f970:
    if (ctx->pc == 0x14F970u) {
        ctx->pc = 0x14F974u;
        goto label_14f974;
    }
    ctx->pc = 0x14F96Cu;
    {
        const bool branch_taken_0x14f96c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f96c) {
            ctx->pc = 0x14F97Cu;
            goto label_14f97c;
        }
    }
    ctx->pc = 0x14F974u;
label_14f974:
    // 0x14f974: 0x36220006  ori         $v0, $s1, 0x6
    ctx->pc = 0x14f974u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)6);
label_14f978:
    // 0x14f978: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x14f978u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_14f97c:
    // 0x14f97c: 0x926213f8  lbu         $v0, 0x13F8($s3)
    ctx->pc = 0x14f97cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 5112)));
label_14f980:
    // 0x14f980: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x14f980u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_14f984:
    // 0x14f984: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14f984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14f988:
    // 0x14f988: 0x1062001a  beq         $v1, $v0, . + 4 + (0x1A << 2)
label_14f98c:
    if (ctx->pc == 0x14F98Cu) {
        ctx->pc = 0x14F990u;
        goto label_14f990;
    }
    ctx->pc = 0x14F988u;
    {
        const bool branch_taken_0x14f988 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14f988) {
            ctx->pc = 0x14F9F4u;
            goto label_14f9f4;
        }
    }
    ctx->pc = 0x14F990u;
label_14f990:
    // 0x14f990: 0x36220004  ori         $v0, $s1, 0x4
    ctx->pc = 0x14f990u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)4);
label_14f994:
    // 0x14f994: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x14f994u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_14f998:
    // 0x14f998: 0x10000016  b           . + 4 + (0x16 << 2)
label_14f99c:
    if (ctx->pc == 0x14F99Cu) {
        ctx->pc = 0x14F9A0u;
        goto label_14f9a0;
    }
    ctx->pc = 0x14F998u;
    {
        const bool branch_taken_0x14f998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f998) {
            ctx->pc = 0x14F9F4u;
            goto label_14f9f4;
        }
    }
    ctx->pc = 0x14F9A0u;
label_14f9a0:
    // 0x14f9a0: 0x8ec30008  lw          $v1, 0x8($s6)
    ctx->pc = 0x14f9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
label_14f9a4:
    // 0x14f9a4: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x14f9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_14f9a8:
    // 0x14f9a8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x14f9a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_14f9ac:
    // 0x14f9ac: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_14f9b0:
    if (ctx->pc == 0x14F9B0u) {
        ctx->pc = 0x14F9B4u;
        goto label_14f9b4;
    }
    ctx->pc = 0x14F9ACu;
    {
        const bool branch_taken_0x14f9ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f9ac) {
            ctx->pc = 0x14F9BCu;
            goto label_14f9bc;
        }
    }
    ctx->pc = 0x14F9B4u;
label_14f9b4:
    // 0x14f9b4: 0x36220006  ori         $v0, $s1, 0x6
    ctx->pc = 0x14f9b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)6);
label_14f9b8:
    // 0x14f9b8: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x14f9b8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_14f9bc:
    // 0x14f9bc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x14f9bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_14f9c0:
    // 0x14f9c0: 0x8c221a98  lw          $v0, 0x1A98($at)
    ctx->pc = 0x14f9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6808)));
label_14f9c4:
    // 0x14f9c4: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x14f9c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
label_14f9c8:
    // 0x14f9c8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_14f9cc:
    if (ctx->pc == 0x14F9CCu) {
        ctx->pc = 0x14F9D0u;
        goto label_14f9d0;
    }
    ctx->pc = 0x14F9C8u;
    {
        const bool branch_taken_0x14f9c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f9c8) {
            ctx->pc = 0x14F9D8u;
            goto label_14f9d8;
        }
    }
    ctx->pc = 0x14F9D0u;
label_14f9d0:
    // 0x14f9d0: 0x36220006  ori         $v0, $s1, 0x6
    ctx->pc = 0x14f9d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)6);
label_14f9d4:
    // 0x14f9d4: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x14f9d4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_14f9d8:
    // 0x14f9d8: 0x926213f8  lbu         $v0, 0x13F8($s3)
    ctx->pc = 0x14f9d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 5112)));
label_14f9dc:
    // 0x14f9dc: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x14f9dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_14f9e0:
    // 0x14f9e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14f9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14f9e4:
    // 0x14f9e4: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_14f9e8:
    if (ctx->pc == 0x14F9E8u) {
        ctx->pc = 0x14F9ECu;
        goto label_14f9ec;
    }
    ctx->pc = 0x14F9E4u;
    {
        const bool branch_taken_0x14f9e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14f9e4) {
            ctx->pc = 0x14F9F4u;
            goto label_14f9f4;
        }
    }
    ctx->pc = 0x14F9ECu;
label_14f9ec:
    // 0x14f9ec: 0x36220004  ori         $v0, $s1, 0x4
    ctx->pc = 0x14f9ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)4);
label_14f9f0:
    // 0x14f9f0: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x14f9f0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_14f9f4:
    // 0x14f9f4: 0x322200ff  andi        $v0, $s1, 0xFF
    ctx->pc = 0x14f9f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_14f9f8:
    // 0x14f9f8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x14f9f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_14f9fc:
    // 0x14f9fc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_14fa00:
    if (ctx->pc == 0x14FA00u) {
        ctx->pc = 0x14FA04u;
        goto label_14fa04;
    }
    ctx->pc = 0x14F9FCu;
    {
        const bool branch_taken_0x14f9fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f9fc) {
            ctx->pc = 0x14FA1Cu;
            goto label_14fa1c;
        }
    }
    ctx->pc = 0x14FA04u;
label_14fa04:
    // 0x14fa04: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x14fa04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_14fa08:
    // 0x14fa08: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x14fa08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_14fa0c:
    // 0x14fa0c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x14fa0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_14fa10:
    // 0x14fa10: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x14fa10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_14fa14:
    // 0x14fa14: 0x10000004  b           . + 4 + (0x4 << 2)
label_14fa18:
    if (ctx->pc == 0x14FA18u) {
        ctx->pc = 0x14FA1Cu;
        goto label_14fa1c;
    }
    ctx->pc = 0x14FA14u;
    {
        const bool branch_taken_0x14fa14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14fa14) {
            ctx->pc = 0x14FA28u;
            goto label_14fa28;
        }
    }
    ctx->pc = 0x14FA1Cu;
label_14fa1c:
    // 0x14fa1c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x14fa1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_14fa20:
    // 0x14fa20: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x14fa20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_14fa24:
    // 0x14fa24: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x14fa24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_14fa28:
    // 0x14fa28: 0x72602628  paddub      $a0, $s3, $zero
    ctx->pc = 0x14fa28u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
label_14fa2c:
    // 0x14fa2c: 0xc054188  jal         func_150620
label_14fa30:
    if (ctx->pc == 0x14FA30u) {
        ctx->pc = 0x14FA34u;
        goto label_14fa34;
    }
    ctx->pc = 0x14FA2Cu;
    SET_GPR_U32(ctx, 31, 0x14FA34u);
    ctx->pc = 0x150620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150620u, 0x14FA2Cu, 0x14FA34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FA34u;
label_14fa34:
    // 0x14fa34: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x14fa34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_14fa38:
    // 0x14fa38: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x14fa38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_14fa3c:
    // 0x14fa3c: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_14fa40:
    if (ctx->pc == 0x14FA40u) {
        ctx->pc = 0x14FA44u;
        goto label_14fa44;
    }
    ctx->pc = 0x14FA3Cu;
    {
        const bool branch_taken_0x14fa3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14fa3c) {
            ctx->pc = 0x14FA5Cu;
            goto label_14fa5c;
        }
    }
    ctx->pc = 0x14FA44u;
label_14fa44:
    // 0x14fa44: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x14fa44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_14fa48:
    // 0x14fa48: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x14fa48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_14fa4c:
    // 0x14fa4c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x14fa4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_14fa50:
    // 0x14fa50: 0xae430008  sw          $v1, 0x8($s2)
    ctx->pc = 0x14fa50u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 3));
label_14fa54:
    // 0x14fa54: 0x10000004  b           . + 4 + (0x4 << 2)
label_14fa58:
    if (ctx->pc == 0x14FA58u) {
        ctx->pc = 0x14FA5Cu;
        goto label_14fa5c;
    }
    ctx->pc = 0x14FA54u;
    {
        const bool branch_taken_0x14fa54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14fa54) {
            ctx->pc = 0x14FA68u;
            goto label_14fa68;
        }
    }
    ctx->pc = 0x14FA5Cu;
label_14fa5c:
    // 0x14fa5c: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x14fa5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_14fa60:
    // 0x14fa60: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x14fa60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
label_14fa64:
    // 0x14fa64: 0xae430008  sw          $v1, 0x8($s2)
    ctx->pc = 0x14fa64u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 3));
label_14fa68:
    // 0x14fa68: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x14fa68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_14fa6c:
    // 0x14fa6c: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x14fa6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_14fa70:
    // 0x14fa70: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_14fa74:
    if (ctx->pc == 0x14FA74u) {
        ctx->pc = 0x14FA78u;
        goto label_14fa78;
    }
    ctx->pc = 0x14FA70u;
    {
        const bool branch_taken_0x14fa70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14fa70) {
            ctx->pc = 0x14FA90u;
            goto label_14fa90;
        }
    }
    ctx->pc = 0x14FA78u;
label_14fa78:
    // 0x14fa78: 0x8e840008  lw          $a0, 0x8($s4)
    ctx->pc = 0x14fa78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_14fa7c:
    // 0x14fa7c: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x14fa7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_14fa80:
    // 0x14fa80: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x14fa80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_14fa84:
    // 0x14fa84: 0xae830008  sw          $v1, 0x8($s4)
    ctx->pc = 0x14fa84u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 3));
label_14fa88:
    // 0x14fa88: 0x10000004  b           . + 4 + (0x4 << 2)
label_14fa8c:
    if (ctx->pc == 0x14FA8Cu) {
        ctx->pc = 0x14FA90u;
        goto label_14fa90;
    }
    ctx->pc = 0x14FA88u;
    {
        const bool branch_taken_0x14fa88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14fa88) {
            ctx->pc = 0x14FA9Cu;
            goto label_14fa9c;
        }
    }
    ctx->pc = 0x14FA90u;
label_14fa90:
    // 0x14fa90: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x14fa90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_14fa94:
    // 0x14fa94: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x14fa94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
label_14fa98:
    // 0x14fa98: 0xae830008  sw          $v1, 0x8($s4)
    ctx->pc = 0x14fa98u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 3));
label_14fa9c:
    // 0x14fa9c: 0x7bbf0070  lq          $ra, 0x70($sp)
    ctx->pc = 0x14fa9cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_14faa0:
    // 0x14faa0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x14faa0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_14faa4:
    // 0x14faa4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x14faa4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_14faa8:
    // 0x14faa8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x14faa8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_14faac:
    // 0x14faac: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x14faacu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_14fab0:
    // 0x14fab0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x14fab0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_14fab4:
    // 0x14fab4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14fab4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_14fab8:
    // 0x14fab8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14fab8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_14fabc:
    // 0x14fabc: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x14fabcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_14fac0:
    // 0x14fac0: 0x3e00008  jr          $ra
label_14fac4:
    if (ctx->pc == 0x14FAC4u) {
        ctx->pc = 0x14FAC8u;
        goto label_fallthrough_0x14fac0;
    }
    ctx->pc = 0x14FAC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14FAC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x14fac0:
    ctx->pc = 0x14FAC8u;
}
