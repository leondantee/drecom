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

// Function: Pl_em_dam_em10_hang
// Address: 0x13a2f0 - 0x13ac84
void Pl_em_dam_em10_hang_0x13a2f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Pl_em_dam_em10_hang_0x13a2f0");
#endif

    switch (ctx->pc) {
        case 0x13a2f0u: goto label_13a2f0;
        case 0x13a2f4u: goto label_13a2f4;
        case 0x13a2f8u: goto label_13a2f8;
        case 0x13a2fcu: goto label_13a2fc;
        case 0x13a300u: goto label_13a300;
        case 0x13a304u: goto label_13a304;
        case 0x13a308u: goto label_13a308;
        case 0x13a30cu: goto label_13a30c;
        case 0x13a310u: goto label_13a310;
        case 0x13a314u: goto label_13a314;
        case 0x13a318u: goto label_13a318;
        case 0x13a31cu: goto label_13a31c;
        case 0x13a320u: goto label_13a320;
        case 0x13a324u: goto label_13a324;
        case 0x13a328u: goto label_13a328;
        case 0x13a32cu: goto label_13a32c;
        case 0x13a330u: goto label_13a330;
        case 0x13a334u: goto label_13a334;
        case 0x13a338u: goto label_13a338;
        case 0x13a33cu: goto label_13a33c;
        case 0x13a340u: goto label_13a340;
        case 0x13a344u: goto label_13a344;
        case 0x13a348u: goto label_13a348;
        case 0x13a34cu: goto label_13a34c;
        case 0x13a350u: goto label_13a350;
        case 0x13a354u: goto label_13a354;
        case 0x13a358u: goto label_13a358;
        case 0x13a35cu: goto label_13a35c;
        case 0x13a360u: goto label_13a360;
        case 0x13a364u: goto label_13a364;
        case 0x13a368u: goto label_13a368;
        case 0x13a36cu: goto label_13a36c;
        case 0x13a370u: goto label_13a370;
        case 0x13a374u: goto label_13a374;
        case 0x13a378u: goto label_13a378;
        case 0x13a37cu: goto label_13a37c;
        case 0x13a380u: goto label_13a380;
        case 0x13a384u: goto label_13a384;
        case 0x13a388u: goto label_13a388;
        case 0x13a38cu: goto label_13a38c;
        case 0x13a390u: goto label_13a390;
        case 0x13a394u: goto label_13a394;
        case 0x13a398u: goto label_13a398;
        case 0x13a39cu: goto label_13a39c;
        case 0x13a3a0u: goto label_13a3a0;
        case 0x13a3a4u: goto label_13a3a4;
        case 0x13a3a8u: goto label_13a3a8;
        case 0x13a3acu: goto label_13a3ac;
        case 0x13a3b0u: goto label_13a3b0;
        case 0x13a3b4u: goto label_13a3b4;
        case 0x13a3b8u: goto label_13a3b8;
        case 0x13a3bcu: goto label_13a3bc;
        case 0x13a3c0u: goto label_13a3c0;
        case 0x13a3c4u: goto label_13a3c4;
        case 0x13a3c8u: goto label_13a3c8;
        case 0x13a3ccu: goto label_13a3cc;
        case 0x13a3d0u: goto label_13a3d0;
        case 0x13a3d4u: goto label_13a3d4;
        case 0x13a3d8u: goto label_13a3d8;
        case 0x13a3dcu: goto label_13a3dc;
        case 0x13a3e0u: goto label_13a3e0;
        case 0x13a3e4u: goto label_13a3e4;
        case 0x13a3e8u: goto label_13a3e8;
        case 0x13a3ecu: goto label_13a3ec;
        case 0x13a3f0u: goto label_13a3f0;
        case 0x13a3f4u: goto label_13a3f4;
        case 0x13a3f8u: goto label_13a3f8;
        case 0x13a3fcu: goto label_13a3fc;
        case 0x13a400u: goto label_13a400;
        case 0x13a404u: goto label_13a404;
        case 0x13a408u: goto label_13a408;
        case 0x13a40cu: goto label_13a40c;
        case 0x13a410u: goto label_13a410;
        case 0x13a414u: goto label_13a414;
        case 0x13a418u: goto label_13a418;
        case 0x13a41cu: goto label_13a41c;
        case 0x13a420u: goto label_13a420;
        case 0x13a424u: goto label_13a424;
        case 0x13a428u: goto label_13a428;
        case 0x13a42cu: goto label_13a42c;
        case 0x13a430u: goto label_13a430;
        case 0x13a434u: goto label_13a434;
        case 0x13a438u: goto label_13a438;
        case 0x13a43cu: goto label_13a43c;
        case 0x13a440u: goto label_13a440;
        case 0x13a444u: goto label_13a444;
        case 0x13a448u: goto label_13a448;
        case 0x13a44cu: goto label_13a44c;
        case 0x13a450u: goto label_13a450;
        case 0x13a454u: goto label_13a454;
        case 0x13a458u: goto label_13a458;
        case 0x13a45cu: goto label_13a45c;
        case 0x13a460u: goto label_13a460;
        case 0x13a464u: goto label_13a464;
        case 0x13a468u: goto label_13a468;
        case 0x13a46cu: goto label_13a46c;
        case 0x13a470u: goto label_13a470;
        case 0x13a474u: goto label_13a474;
        case 0x13a478u: goto label_13a478;
        case 0x13a47cu: goto label_13a47c;
        case 0x13a480u: goto label_13a480;
        case 0x13a484u: goto label_13a484;
        case 0x13a488u: goto label_13a488;
        case 0x13a48cu: goto label_13a48c;
        case 0x13a490u: goto label_13a490;
        case 0x13a494u: goto label_13a494;
        case 0x13a498u: goto label_13a498;
        case 0x13a49cu: goto label_13a49c;
        case 0x13a4a0u: goto label_13a4a0;
        case 0x13a4a4u: goto label_13a4a4;
        case 0x13a4a8u: goto label_13a4a8;
        case 0x13a4acu: goto label_13a4ac;
        case 0x13a4b0u: goto label_13a4b0;
        case 0x13a4b4u: goto label_13a4b4;
        case 0x13a4b8u: goto label_13a4b8;
        case 0x13a4bcu: goto label_13a4bc;
        case 0x13a4c0u: goto label_13a4c0;
        case 0x13a4c4u: goto label_13a4c4;
        case 0x13a4c8u: goto label_13a4c8;
        case 0x13a4ccu: goto label_13a4cc;
        case 0x13a4d0u: goto label_13a4d0;
        case 0x13a4d4u: goto label_13a4d4;
        case 0x13a4d8u: goto label_13a4d8;
        case 0x13a4dcu: goto label_13a4dc;
        case 0x13a4e0u: goto label_13a4e0;
        case 0x13a4e4u: goto label_13a4e4;
        case 0x13a4e8u: goto label_13a4e8;
        case 0x13a4ecu: goto label_13a4ec;
        case 0x13a4f0u: goto label_13a4f0;
        case 0x13a4f4u: goto label_13a4f4;
        case 0x13a4f8u: goto label_13a4f8;
        case 0x13a4fcu: goto label_13a4fc;
        case 0x13a500u: goto label_13a500;
        case 0x13a504u: goto label_13a504;
        case 0x13a508u: goto label_13a508;
        case 0x13a50cu: goto label_13a50c;
        case 0x13a510u: goto label_13a510;
        case 0x13a514u: goto label_13a514;
        case 0x13a518u: goto label_13a518;
        case 0x13a51cu: goto label_13a51c;
        case 0x13a520u: goto label_13a520;
        case 0x13a524u: goto label_13a524;
        case 0x13a528u: goto label_13a528;
        case 0x13a52cu: goto label_13a52c;
        case 0x13a530u: goto label_13a530;
        case 0x13a534u: goto label_13a534;
        case 0x13a538u: goto label_13a538;
        case 0x13a53cu: goto label_13a53c;
        case 0x13a540u: goto label_13a540;
        case 0x13a544u: goto label_13a544;
        case 0x13a548u: goto label_13a548;
        case 0x13a54cu: goto label_13a54c;
        case 0x13a550u: goto label_13a550;
        case 0x13a554u: goto label_13a554;
        case 0x13a558u: goto label_13a558;
        case 0x13a55cu: goto label_13a55c;
        case 0x13a560u: goto label_13a560;
        case 0x13a564u: goto label_13a564;
        case 0x13a568u: goto label_13a568;
        case 0x13a56cu: goto label_13a56c;
        case 0x13a570u: goto label_13a570;
        case 0x13a574u: goto label_13a574;
        case 0x13a578u: goto label_13a578;
        case 0x13a57cu: goto label_13a57c;
        case 0x13a580u: goto label_13a580;
        case 0x13a584u: goto label_13a584;
        case 0x13a588u: goto label_13a588;
        case 0x13a58cu: goto label_13a58c;
        case 0x13a590u: goto label_13a590;
        case 0x13a594u: goto label_13a594;
        case 0x13a598u: goto label_13a598;
        case 0x13a59cu: goto label_13a59c;
        case 0x13a5a0u: goto label_13a5a0;
        case 0x13a5a4u: goto label_13a5a4;
        case 0x13a5a8u: goto label_13a5a8;
        case 0x13a5acu: goto label_13a5ac;
        case 0x13a5b0u: goto label_13a5b0;
        case 0x13a5b4u: goto label_13a5b4;
        case 0x13a5b8u: goto label_13a5b8;
        case 0x13a5bcu: goto label_13a5bc;
        case 0x13a5c0u: goto label_13a5c0;
        case 0x13a5c4u: goto label_13a5c4;
        case 0x13a5c8u: goto label_13a5c8;
        case 0x13a5ccu: goto label_13a5cc;
        case 0x13a5d0u: goto label_13a5d0;
        case 0x13a5d4u: goto label_13a5d4;
        case 0x13a5d8u: goto label_13a5d8;
        case 0x13a5dcu: goto label_13a5dc;
        case 0x13a5e0u: goto label_13a5e0;
        case 0x13a5e4u: goto label_13a5e4;
        case 0x13a5e8u: goto label_13a5e8;
        case 0x13a5ecu: goto label_13a5ec;
        case 0x13a5f0u: goto label_13a5f0;
        case 0x13a5f4u: goto label_13a5f4;
        case 0x13a5f8u: goto label_13a5f8;
        case 0x13a5fcu: goto label_13a5fc;
        case 0x13a600u: goto label_13a600;
        case 0x13a604u: goto label_13a604;
        case 0x13a608u: goto label_13a608;
        case 0x13a60cu: goto label_13a60c;
        case 0x13a610u: goto label_13a610;
        case 0x13a614u: goto label_13a614;
        case 0x13a618u: goto label_13a618;
        case 0x13a61cu: goto label_13a61c;
        case 0x13a620u: goto label_13a620;
        case 0x13a624u: goto label_13a624;
        case 0x13a628u: goto label_13a628;
        case 0x13a62cu: goto label_13a62c;
        case 0x13a630u: goto label_13a630;
        case 0x13a634u: goto label_13a634;
        case 0x13a638u: goto label_13a638;
        case 0x13a63cu: goto label_13a63c;
        case 0x13a640u: goto label_13a640;
        case 0x13a644u: goto label_13a644;
        case 0x13a648u: goto label_13a648;
        case 0x13a64cu: goto label_13a64c;
        case 0x13a650u: goto label_13a650;
        case 0x13a654u: goto label_13a654;
        case 0x13a658u: goto label_13a658;
        case 0x13a65cu: goto label_13a65c;
        case 0x13a660u: goto label_13a660;
        case 0x13a664u: goto label_13a664;
        case 0x13a668u: goto label_13a668;
        case 0x13a66cu: goto label_13a66c;
        case 0x13a670u: goto label_13a670;
        case 0x13a674u: goto label_13a674;
        case 0x13a678u: goto label_13a678;
        case 0x13a67cu: goto label_13a67c;
        case 0x13a680u: goto label_13a680;
        case 0x13a684u: goto label_13a684;
        case 0x13a688u: goto label_13a688;
        case 0x13a68cu: goto label_13a68c;
        case 0x13a690u: goto label_13a690;
        case 0x13a694u: goto label_13a694;
        case 0x13a698u: goto label_13a698;
        case 0x13a69cu: goto label_13a69c;
        case 0x13a6a0u: goto label_13a6a0;
        case 0x13a6a4u: goto label_13a6a4;
        case 0x13a6a8u: goto label_13a6a8;
        case 0x13a6acu: goto label_13a6ac;
        case 0x13a6b0u: goto label_13a6b0;
        case 0x13a6b4u: goto label_13a6b4;
        case 0x13a6b8u: goto label_13a6b8;
        case 0x13a6bcu: goto label_13a6bc;
        case 0x13a6c0u: goto label_13a6c0;
        case 0x13a6c4u: goto label_13a6c4;
        case 0x13a6c8u: goto label_13a6c8;
        case 0x13a6ccu: goto label_13a6cc;
        case 0x13a6d0u: goto label_13a6d0;
        case 0x13a6d4u: goto label_13a6d4;
        case 0x13a6d8u: goto label_13a6d8;
        case 0x13a6dcu: goto label_13a6dc;
        case 0x13a6e0u: goto label_13a6e0;
        case 0x13a6e4u: goto label_13a6e4;
        case 0x13a6e8u: goto label_13a6e8;
        case 0x13a6ecu: goto label_13a6ec;
        case 0x13a6f0u: goto label_13a6f0;
        case 0x13a6f4u: goto label_13a6f4;
        case 0x13a6f8u: goto label_13a6f8;
        case 0x13a6fcu: goto label_13a6fc;
        case 0x13a700u: goto label_13a700;
        case 0x13a704u: goto label_13a704;
        case 0x13a708u: goto label_13a708;
        case 0x13a70cu: goto label_13a70c;
        case 0x13a710u: goto label_13a710;
        case 0x13a714u: goto label_13a714;
        case 0x13a718u: goto label_13a718;
        case 0x13a71cu: goto label_13a71c;
        case 0x13a720u: goto label_13a720;
        case 0x13a724u: goto label_13a724;
        case 0x13a728u: goto label_13a728;
        case 0x13a72cu: goto label_13a72c;
        case 0x13a730u: goto label_13a730;
        case 0x13a734u: goto label_13a734;
        case 0x13a738u: goto label_13a738;
        case 0x13a73cu: goto label_13a73c;
        case 0x13a740u: goto label_13a740;
        case 0x13a744u: goto label_13a744;
        case 0x13a748u: goto label_13a748;
        case 0x13a74cu: goto label_13a74c;
        case 0x13a750u: goto label_13a750;
        case 0x13a754u: goto label_13a754;
        case 0x13a758u: goto label_13a758;
        case 0x13a75cu: goto label_13a75c;
        case 0x13a760u: goto label_13a760;
        case 0x13a764u: goto label_13a764;
        case 0x13a768u: goto label_13a768;
        case 0x13a76cu: goto label_13a76c;
        case 0x13a770u: goto label_13a770;
        case 0x13a774u: goto label_13a774;
        case 0x13a778u: goto label_13a778;
        case 0x13a77cu: goto label_13a77c;
        case 0x13a780u: goto label_13a780;
        case 0x13a784u: goto label_13a784;
        case 0x13a788u: goto label_13a788;
        case 0x13a78cu: goto label_13a78c;
        case 0x13a790u: goto label_13a790;
        case 0x13a794u: goto label_13a794;
        case 0x13a798u: goto label_13a798;
        case 0x13a79cu: goto label_13a79c;
        case 0x13a7a0u: goto label_13a7a0;
        case 0x13a7a4u: goto label_13a7a4;
        case 0x13a7a8u: goto label_13a7a8;
        case 0x13a7acu: goto label_13a7ac;
        case 0x13a7b0u: goto label_13a7b0;
        case 0x13a7b4u: goto label_13a7b4;
        case 0x13a7b8u: goto label_13a7b8;
        case 0x13a7bcu: goto label_13a7bc;
        case 0x13a7c0u: goto label_13a7c0;
        case 0x13a7c4u: goto label_13a7c4;
        case 0x13a7c8u: goto label_13a7c8;
        case 0x13a7ccu: goto label_13a7cc;
        case 0x13a7d0u: goto label_13a7d0;
        case 0x13a7d4u: goto label_13a7d4;
        case 0x13a7d8u: goto label_13a7d8;
        case 0x13a7dcu: goto label_13a7dc;
        case 0x13a7e0u: goto label_13a7e0;
        case 0x13a7e4u: goto label_13a7e4;
        case 0x13a7e8u: goto label_13a7e8;
        case 0x13a7ecu: goto label_13a7ec;
        case 0x13a7f0u: goto label_13a7f0;
        case 0x13a7f4u: goto label_13a7f4;
        case 0x13a7f8u: goto label_13a7f8;
        case 0x13a7fcu: goto label_13a7fc;
        case 0x13a800u: goto label_13a800;
        case 0x13a804u: goto label_13a804;
        case 0x13a808u: goto label_13a808;
        case 0x13a80cu: goto label_13a80c;
        case 0x13a810u: goto label_13a810;
        case 0x13a814u: goto label_13a814;
        case 0x13a818u: goto label_13a818;
        case 0x13a81cu: goto label_13a81c;
        case 0x13a820u: goto label_13a820;
        case 0x13a824u: goto label_13a824;
        case 0x13a828u: goto label_13a828;
        case 0x13a82cu: goto label_13a82c;
        case 0x13a830u: goto label_13a830;
        case 0x13a834u: goto label_13a834;
        case 0x13a838u: goto label_13a838;
        case 0x13a83cu: goto label_13a83c;
        case 0x13a840u: goto label_13a840;
        case 0x13a844u: goto label_13a844;
        case 0x13a848u: goto label_13a848;
        case 0x13a84cu: goto label_13a84c;
        case 0x13a850u: goto label_13a850;
        case 0x13a854u: goto label_13a854;
        case 0x13a858u: goto label_13a858;
        case 0x13a85cu: goto label_13a85c;
        case 0x13a860u: goto label_13a860;
        case 0x13a864u: goto label_13a864;
        case 0x13a868u: goto label_13a868;
        case 0x13a86cu: goto label_13a86c;
        case 0x13a870u: goto label_13a870;
        case 0x13a874u: goto label_13a874;
        case 0x13a878u: goto label_13a878;
        case 0x13a87cu: goto label_13a87c;
        case 0x13a880u: goto label_13a880;
        case 0x13a884u: goto label_13a884;
        case 0x13a888u: goto label_13a888;
        case 0x13a88cu: goto label_13a88c;
        case 0x13a890u: goto label_13a890;
        case 0x13a894u: goto label_13a894;
        case 0x13a898u: goto label_13a898;
        case 0x13a89cu: goto label_13a89c;
        case 0x13a8a0u: goto label_13a8a0;
        case 0x13a8a4u: goto label_13a8a4;
        case 0x13a8a8u: goto label_13a8a8;
        case 0x13a8acu: goto label_13a8ac;
        case 0x13a8b0u: goto label_13a8b0;
        case 0x13a8b4u: goto label_13a8b4;
        case 0x13a8b8u: goto label_13a8b8;
        case 0x13a8bcu: goto label_13a8bc;
        case 0x13a8c0u: goto label_13a8c0;
        case 0x13a8c4u: goto label_13a8c4;
        case 0x13a8c8u: goto label_13a8c8;
        case 0x13a8ccu: goto label_13a8cc;
        case 0x13a8d0u: goto label_13a8d0;
        case 0x13a8d4u: goto label_13a8d4;
        case 0x13a8d8u: goto label_13a8d8;
        case 0x13a8dcu: goto label_13a8dc;
        case 0x13a8e0u: goto label_13a8e0;
        case 0x13a8e4u: goto label_13a8e4;
        case 0x13a8e8u: goto label_13a8e8;
        case 0x13a8ecu: goto label_13a8ec;
        case 0x13a8f0u: goto label_13a8f0;
        case 0x13a8f4u: goto label_13a8f4;
        case 0x13a8f8u: goto label_13a8f8;
        case 0x13a8fcu: goto label_13a8fc;
        case 0x13a900u: goto label_13a900;
        case 0x13a904u: goto label_13a904;
        case 0x13a908u: goto label_13a908;
        case 0x13a90cu: goto label_13a90c;
        case 0x13a910u: goto label_13a910;
        case 0x13a914u: goto label_13a914;
        case 0x13a918u: goto label_13a918;
        case 0x13a91cu: goto label_13a91c;
        case 0x13a920u: goto label_13a920;
        case 0x13a924u: goto label_13a924;
        case 0x13a928u: goto label_13a928;
        case 0x13a92cu: goto label_13a92c;
        case 0x13a930u: goto label_13a930;
        case 0x13a934u: goto label_13a934;
        case 0x13a938u: goto label_13a938;
        case 0x13a93cu: goto label_13a93c;
        case 0x13a940u: goto label_13a940;
        case 0x13a944u: goto label_13a944;
        case 0x13a948u: goto label_13a948;
        case 0x13a94cu: goto label_13a94c;
        case 0x13a950u: goto label_13a950;
        case 0x13a954u: goto label_13a954;
        case 0x13a958u: goto label_13a958;
        case 0x13a95cu: goto label_13a95c;
        case 0x13a960u: goto label_13a960;
        case 0x13a964u: goto label_13a964;
        case 0x13a968u: goto label_13a968;
        case 0x13a96cu: goto label_13a96c;
        case 0x13a970u: goto label_13a970;
        case 0x13a974u: goto label_13a974;
        case 0x13a978u: goto label_13a978;
        case 0x13a97cu: goto label_13a97c;
        case 0x13a980u: goto label_13a980;
        case 0x13a984u: goto label_13a984;
        case 0x13a988u: goto label_13a988;
        case 0x13a98cu: goto label_13a98c;
        case 0x13a990u: goto label_13a990;
        case 0x13a994u: goto label_13a994;
        case 0x13a998u: goto label_13a998;
        case 0x13a99cu: goto label_13a99c;
        case 0x13a9a0u: goto label_13a9a0;
        case 0x13a9a4u: goto label_13a9a4;
        case 0x13a9a8u: goto label_13a9a8;
        case 0x13a9acu: goto label_13a9ac;
        case 0x13a9b0u: goto label_13a9b0;
        case 0x13a9b4u: goto label_13a9b4;
        case 0x13a9b8u: goto label_13a9b8;
        case 0x13a9bcu: goto label_13a9bc;
        case 0x13a9c0u: goto label_13a9c0;
        case 0x13a9c4u: goto label_13a9c4;
        case 0x13a9c8u: goto label_13a9c8;
        case 0x13a9ccu: goto label_13a9cc;
        case 0x13a9d0u: goto label_13a9d0;
        case 0x13a9d4u: goto label_13a9d4;
        case 0x13a9d8u: goto label_13a9d8;
        case 0x13a9dcu: goto label_13a9dc;
        case 0x13a9e0u: goto label_13a9e0;
        case 0x13a9e4u: goto label_13a9e4;
        case 0x13a9e8u: goto label_13a9e8;
        case 0x13a9ecu: goto label_13a9ec;
        case 0x13a9f0u: goto label_13a9f0;
        case 0x13a9f4u: goto label_13a9f4;
        case 0x13a9f8u: goto label_13a9f8;
        case 0x13a9fcu: goto label_13a9fc;
        case 0x13aa00u: goto label_13aa00;
        case 0x13aa04u: goto label_13aa04;
        case 0x13aa08u: goto label_13aa08;
        case 0x13aa0cu: goto label_13aa0c;
        case 0x13aa10u: goto label_13aa10;
        case 0x13aa14u: goto label_13aa14;
        case 0x13aa18u: goto label_13aa18;
        case 0x13aa1cu: goto label_13aa1c;
        case 0x13aa20u: goto label_13aa20;
        case 0x13aa24u: goto label_13aa24;
        case 0x13aa28u: goto label_13aa28;
        case 0x13aa2cu: goto label_13aa2c;
        case 0x13aa30u: goto label_13aa30;
        case 0x13aa34u: goto label_13aa34;
        case 0x13aa38u: goto label_13aa38;
        case 0x13aa3cu: goto label_13aa3c;
        case 0x13aa40u: goto label_13aa40;
        case 0x13aa44u: goto label_13aa44;
        case 0x13aa48u: goto label_13aa48;
        case 0x13aa4cu: goto label_13aa4c;
        case 0x13aa50u: goto label_13aa50;
        case 0x13aa54u: goto label_13aa54;
        case 0x13aa58u: goto label_13aa58;
        case 0x13aa5cu: goto label_13aa5c;
        case 0x13aa60u: goto label_13aa60;
        case 0x13aa64u: goto label_13aa64;
        case 0x13aa68u: goto label_13aa68;
        case 0x13aa6cu: goto label_13aa6c;
        case 0x13aa70u: goto label_13aa70;
        case 0x13aa74u: goto label_13aa74;
        case 0x13aa78u: goto label_13aa78;
        case 0x13aa7cu: goto label_13aa7c;
        case 0x13aa80u: goto label_13aa80;
        case 0x13aa84u: goto label_13aa84;
        case 0x13aa88u: goto label_13aa88;
        case 0x13aa8cu: goto label_13aa8c;
        case 0x13aa90u: goto label_13aa90;
        case 0x13aa94u: goto label_13aa94;
        case 0x13aa98u: goto label_13aa98;
        case 0x13aa9cu: goto label_13aa9c;
        case 0x13aaa0u: goto label_13aaa0;
        case 0x13aaa4u: goto label_13aaa4;
        case 0x13aaa8u: goto label_13aaa8;
        case 0x13aaacu: goto label_13aaac;
        case 0x13aab0u: goto label_13aab0;
        case 0x13aab4u: goto label_13aab4;
        case 0x13aab8u: goto label_13aab8;
        case 0x13aabcu: goto label_13aabc;
        case 0x13aac0u: goto label_13aac0;
        case 0x13aac4u: goto label_13aac4;
        case 0x13aac8u: goto label_13aac8;
        case 0x13aaccu: goto label_13aacc;
        case 0x13aad0u: goto label_13aad0;
        case 0x13aad4u: goto label_13aad4;
        case 0x13aad8u: goto label_13aad8;
        case 0x13aadcu: goto label_13aadc;
        case 0x13aae0u: goto label_13aae0;
        case 0x13aae4u: goto label_13aae4;
        case 0x13aae8u: goto label_13aae8;
        case 0x13aaecu: goto label_13aaec;
        case 0x13aaf0u: goto label_13aaf0;
        case 0x13aaf4u: goto label_13aaf4;
        case 0x13aaf8u: goto label_13aaf8;
        case 0x13aafcu: goto label_13aafc;
        case 0x13ab00u: goto label_13ab00;
        case 0x13ab04u: goto label_13ab04;
        case 0x13ab08u: goto label_13ab08;
        case 0x13ab0cu: goto label_13ab0c;
        case 0x13ab10u: goto label_13ab10;
        case 0x13ab14u: goto label_13ab14;
        case 0x13ab18u: goto label_13ab18;
        case 0x13ab1cu: goto label_13ab1c;
        case 0x13ab20u: goto label_13ab20;
        case 0x13ab24u: goto label_13ab24;
        case 0x13ab28u: goto label_13ab28;
        case 0x13ab2cu: goto label_13ab2c;
        case 0x13ab30u: goto label_13ab30;
        case 0x13ab34u: goto label_13ab34;
        case 0x13ab38u: goto label_13ab38;
        case 0x13ab3cu: goto label_13ab3c;
        case 0x13ab40u: goto label_13ab40;
        case 0x13ab44u: goto label_13ab44;
        case 0x13ab48u: goto label_13ab48;
        case 0x13ab4cu: goto label_13ab4c;
        case 0x13ab50u: goto label_13ab50;
        case 0x13ab54u: goto label_13ab54;
        case 0x13ab58u: goto label_13ab58;
        case 0x13ab5cu: goto label_13ab5c;
        case 0x13ab60u: goto label_13ab60;
        case 0x13ab64u: goto label_13ab64;
        case 0x13ab68u: goto label_13ab68;
        case 0x13ab6cu: goto label_13ab6c;
        case 0x13ab70u: goto label_13ab70;
        case 0x13ab74u: goto label_13ab74;
        case 0x13ab78u: goto label_13ab78;
        case 0x13ab7cu: goto label_13ab7c;
        case 0x13ab80u: goto label_13ab80;
        case 0x13ab84u: goto label_13ab84;
        case 0x13ab88u: goto label_13ab88;
        case 0x13ab8cu: goto label_13ab8c;
        case 0x13ab90u: goto label_13ab90;
        case 0x13ab94u: goto label_13ab94;
        case 0x13ab98u: goto label_13ab98;
        case 0x13ab9cu: goto label_13ab9c;
        case 0x13aba0u: goto label_13aba0;
        case 0x13aba4u: goto label_13aba4;
        case 0x13aba8u: goto label_13aba8;
        case 0x13abacu: goto label_13abac;
        case 0x13abb0u: goto label_13abb0;
        case 0x13abb4u: goto label_13abb4;
        case 0x13abb8u: goto label_13abb8;
        case 0x13abbcu: goto label_13abbc;
        case 0x13abc0u: goto label_13abc0;
        case 0x13abc4u: goto label_13abc4;
        case 0x13abc8u: goto label_13abc8;
        case 0x13abccu: goto label_13abcc;
        case 0x13abd0u: goto label_13abd0;
        case 0x13abd4u: goto label_13abd4;
        case 0x13abd8u: goto label_13abd8;
        case 0x13abdcu: goto label_13abdc;
        case 0x13abe0u: goto label_13abe0;
        case 0x13abe4u: goto label_13abe4;
        case 0x13abe8u: goto label_13abe8;
        case 0x13abecu: goto label_13abec;
        case 0x13abf0u: goto label_13abf0;
        case 0x13abf4u: goto label_13abf4;
        case 0x13abf8u: goto label_13abf8;
        case 0x13abfcu: goto label_13abfc;
        case 0x13ac00u: goto label_13ac00;
        case 0x13ac04u: goto label_13ac04;
        case 0x13ac08u: goto label_13ac08;
        case 0x13ac0cu: goto label_13ac0c;
        case 0x13ac10u: goto label_13ac10;
        case 0x13ac14u: goto label_13ac14;
        case 0x13ac18u: goto label_13ac18;
        case 0x13ac1cu: goto label_13ac1c;
        case 0x13ac20u: goto label_13ac20;
        case 0x13ac24u: goto label_13ac24;
        case 0x13ac28u: goto label_13ac28;
        case 0x13ac2cu: goto label_13ac2c;
        case 0x13ac30u: goto label_13ac30;
        case 0x13ac34u: goto label_13ac34;
        case 0x13ac38u: goto label_13ac38;
        case 0x13ac3cu: goto label_13ac3c;
        case 0x13ac40u: goto label_13ac40;
        case 0x13ac44u: goto label_13ac44;
        case 0x13ac48u: goto label_13ac48;
        case 0x13ac4cu: goto label_13ac4c;
        case 0x13ac50u: goto label_13ac50;
        case 0x13ac54u: goto label_13ac54;
        case 0x13ac58u: goto label_13ac58;
        case 0x13ac5cu: goto label_13ac5c;
        case 0x13ac60u: goto label_13ac60;
        case 0x13ac64u: goto label_13ac64;
        case 0x13ac68u: goto label_13ac68;
        case 0x13ac6cu: goto label_13ac6c;
        case 0x13ac70u: goto label_13ac70;
        case 0x13ac74u: goto label_13ac74;
        case 0x13ac78u: goto label_13ac78;
        case 0x13ac7cu: goto label_13ac7c;
        case 0x13ac80u: goto label_13ac80;
        default: break;
    }

    ctx->pc = 0x13a2f0u;

label_13a2f0:
    // 0x13a2f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x13a2f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_13a2f4:
    // 0x13a2f4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x13a2f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
label_13a2f8:
    // 0x13a2f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13a2f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_13a2fc:
    // 0x13a2fc: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x13a2fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
label_13a300:
    // 0x13a300: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x13a300u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_13a304:
    // 0x13a304: 0x8c221a64  lw          $v0, 0x1A64($at)
    ctx->pc = 0x13a304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6756)));
label_13a308:
    // 0x13a308: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x13a308u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
label_13a30c:
    // 0x13a30c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x13a30cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_13a310:
    // 0x13a310: 0xac221a64  sw          $v0, 0x1A64($at)
    ctx->pc = 0x13a310u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6756), GPR_U32(ctx, 2));
label_13a314:
    // 0x13a314: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x13a314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_13a318:
    // 0x13a318: 0x90420002  lbu         $v0, 0x2($v0)
    ctx->pc = 0x13a318u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_13a31c:
    // 0x13a31c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x13a31cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_13a320:
    // 0x13a320: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x13a320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_13a324:
    // 0x13a324: 0x1202013d  beq         $s0, $v0, . + 4 + (0x13D << 2)
label_13a328:
    if (ctx->pc == 0x13A328u) {
        ctx->pc = 0x13A32Cu;
        goto label_13a32c;
    }
    ctx->pc = 0x13A324u;
    {
        const bool branch_taken_0x13a324 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x13a324) {
            ctx->pc = 0x13A81Cu;
            goto label_13a81c;
        }
    }
    ctx->pc = 0x13A32Cu;
label_13a32c:
    // 0x13a32c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x13a32cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_13a330:
    // 0x13a330: 0x12020117  beq         $s0, $v0, . + 4 + (0x117 << 2)
label_13a334:
    if (ctx->pc == 0x13A334u) {
        ctx->pc = 0x13A338u;
        goto label_13a338;
    }
    ctx->pc = 0x13A330u;
    {
        const bool branch_taken_0x13a330 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x13a330) {
            ctx->pc = 0x13A790u;
            goto label_13a790;
        }
    }
    ctx->pc = 0x13A338u;
label_13a338:
    // 0x13a338: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x13a338u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13a33c:
    // 0x13a33c: 0x1203005a  beq         $s0, $v1, . + 4 + (0x5A << 2)
label_13a340:
    if (ctx->pc == 0x13A340u) {
        ctx->pc = 0x13A344u;
        goto label_13a344;
    }
    ctx->pc = 0x13A33Cu;
    {
        const bool branch_taken_0x13a33c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x13a33c) {
            ctx->pc = 0x13A4A8u;
            goto label_13a4a8;
        }
    }
    ctx->pc = 0x13A344u;
label_13a344:
    // 0x13a344: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
label_13a348:
    if (ctx->pc == 0x13A348u) {
        ctx->pc = 0x13A34Cu;
        goto label_13a34c;
    }
    ctx->pc = 0x13A344u;
    {
        const bool branch_taken_0x13a344 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a344) {
            ctx->pc = 0x13A354u;
            goto label_13a354;
        }
    }
    ctx->pc = 0x13A34Cu;
label_13a34c:
    // 0x13a34c: 0x10000244  b           . + 4 + (0x244 << 2)
label_13a350:
    if (ctx->pc == 0x13A350u) {
        ctx->pc = 0x13A354u;
        goto label_13a354;
    }
    ctx->pc = 0x13A34Cu;
    {
        const bool branch_taken_0x13a34c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a34c) {
            ctx->pc = 0x13AC60u;
            goto label_13ac60;
        }
    }
    ctx->pc = 0x13A354u;
label_13a354:
    // 0x13a354: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x13a354u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_13a358:
    // 0x13a358: 0x2444dbc0  addiu       $a0, $v0, -0x2440
    ctx->pc = 0x13a358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
label_13a35c:
    // 0x13a35c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x13a35cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_13a360:
    // 0x13a360: 0x8c25df28  lw          $a1, -0x20D8($at)
    ctx->pc = 0x13a360u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294958888)));
label_13a364:
    // 0x13a364: 0x240605b2  addiu       $a2, $zero, 0x5B2
    ctx->pc = 0x13a364u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1458));
label_13a368:
    // 0x13a368: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x13a368u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13a36c:
    // 0x13a36c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x13a36cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_13a370:
    // 0x13a370: 0xc0965d0  jal         func_259740
label_13a374:
    if (ctx->pc == 0x13A374u) {
        ctx->pc = 0x13A378u;
        goto label_13a378;
    }
    ctx->pc = 0x13A370u;
    SET_GPR_U32(ctx, 31, 0x13A378u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x13A370u, 0x13A378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A378u;
label_13a378:
    // 0x13a378: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x13a378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_13a37c:
    // 0x13a37c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x13a37cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_13a380:
    // 0x13a380: 0xa06210a8  sb          $v0, 0x10A8($v1)
    ctx->pc = 0x13a380u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 2));
label_13a384:
    // 0x13a384: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x13a384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_13a388:
    // 0x13a388: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x13a388u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
label_13a38c:
    // 0x13a38c: 0x3c0242ac  lui         $v0, 0x42AC
    ctx->pc = 0x13a38cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17068 << 16));
label_13a390:
    // 0x13a390: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13a390u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_13a394:
    // 0x13a394: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x13a394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_13a398:
    // 0x13a398: 0xe4401b50  swc1        $f0, 0x1B50($v0)
    ctx->pc = 0x13a398u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 6992), bits); }
label_13a39c:
    // 0x13a39c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x13a39cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_13a3a0:
    // 0x13a3a0: 0x8c230af0  lw          $v1, 0xAF0($at)
    ctx->pc = 0x13a3a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 2800)));
label_13a3a4:
    // 0x13a3a4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x13a3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_13a3a8:
    // 0x13a3a8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x13a3a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_13a3ac:
    // 0x13a3ac: 0x24650190  addiu       $a1, $v1, 0x190
    ctx->pc = 0x13a3acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 400));
label_13a3b0:
    // 0x13a3b0: 0x24460120  addiu       $a2, $v0, 0x120
    ctx->pc = 0x13a3b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
label_13a3b4:
    // 0x13a3b4: 0xc0675b0  jal         func_19D6C0
label_13a3b8:
    if (ctx->pc == 0x13A3B8u) {
        ctx->pc = 0x13A3BCu;
        goto label_13a3bc;
    }
    ctx->pc = 0x13A3B4u;
    SET_GPR_U32(ctx, 31, 0x13A3BCu);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x13A3B4u, 0x13A3BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A3BCu;
label_13a3bc:
    // 0x13a3bc: 0xc7ac0020  lwc1        $f12, 0x20($sp)
    ctx->pc = 0x13a3bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_13a3c0:
    // 0x13a3c0: 0xc7ad0028  lwc1        $f13, 0x28($sp)
    ctx->pc = 0x13a3c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_13a3c4:
    // 0x13a3c4: 0xc0455e6  jal         func_115798
label_13a3c8:
    if (ctx->pc == 0x13A3C8u) {
        ctx->pc = 0x13A3CCu;
        goto label_13a3cc;
    }
    ctx->pc = 0x13A3C4u;
    SET_GPR_U32(ctx, 31, 0x13A3CCu);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x13A3C4u, 0x13A3CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A3CCu;
label_13a3cc:
    // 0x13a3cc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x13a3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_13a3d0:
    // 0x13a3d0: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x13a3d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
label_13a3d4:
    // 0x13a3d4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x13a3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_13a3d8:
    // 0x13a3d8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x13a3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_13a3dc:
    // 0x13a3dc: 0xc46c1290  lwc1        $f12, 0x1290($v1)
    ctx->pc = 0x13a3dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_13a3e0:
    // 0x13a3e0: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x13a3e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_13a3e4:
    // 0x13a3e4: 0xc058f20  jal         func_163C80
label_13a3e8:
    if (ctx->pc == 0x13A3E8u) {
        ctx->pc = 0x13A3ECu;
        goto label_13a3ec;
    }
    ctx->pc = 0x13A3E4u;
    SET_GPR_U32(ctx, 31, 0x13A3ECu);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x13A3E4u, 0x13A3ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A3ECu;
label_13a3ec:
    // 0x13a3ec: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x13a3ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_13a3f0:
    // 0x13a3f0: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x13a3f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_13a3f4:
    // 0x13a3f4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x13a3f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_13a3f8:
    // 0x13a3f8: 0x0  nop
    ctx->pc = 0x13a3f8u;
    // NOP
label_13a3fc:
    // 0x13a3fc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x13a3fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_13a400:
    // 0x13a400: 0x0  nop
    ctx->pc = 0x13a400u;
    // NOP
label_13a404:
    // 0x13a404: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_13a408:
    if (ctx->pc == 0x13A408u) {
        ctx->pc = 0x13A40Cu;
        goto label_13a40c;
    }
    ctx->pc = 0x13A404u;
    {
        const bool branch_taken_0x13a404 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13a404) {
            ctx->pc = 0x13A420u;
            goto label_13a420;
        }
    }
    ctx->pc = 0x13A40Cu;
label_13a40c:
    // 0x13a40c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x13a40cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_13a410:
    // 0x13a410: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x13a410u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_13a414:
    // 0x13a414: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x13a414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_13a418:
    // 0x13a418: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x13a418u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_13a41c:
    // 0x13a41c: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x13a41cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_13a420:
    // 0x13a420: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x13a420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_13a424:
    // 0x13a424: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x13a424u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
label_13a428:
    // 0x13a428: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x13a428u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_13a42c:
    // 0x13a42c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13a42cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_13a430:
    // 0x13a430: 0x0  nop
    ctx->pc = 0x13a430u;
    // NOP
label_13a434:
    // 0x13a434: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x13a434u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_13a438:
    // 0x13a438: 0x0  nop
    ctx->pc = 0x13a438u;
    // NOP
label_13a43c:
    // 0x13a43c: 0x4501000c  bc1t        . + 4 + (0xC << 2)
label_13a440:
    if (ctx->pc == 0x13A440u) {
        ctx->pc = 0x13A444u;
        goto label_13a444;
    }
    ctx->pc = 0x13A43Cu;
    {
        const bool branch_taken_0x13a43c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x13a43c) {
            ctx->pc = 0x13A470u;
            goto label_13a470;
        }
    }
    ctx->pc = 0x13A444u;
label_13a444:
    // 0x13a444: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x13a444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_13a448:
    // 0x13a448: 0xc4411290  lwc1        $f1, 0x1290($v0)
    ctx->pc = 0x13a448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_13a44c:
    // 0x13a44c: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x13a44cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_13a450:
    // 0x13a450: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x13a450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_13a454:
    // 0x13a454: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13a454u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_13a458:
    // 0x13a458: 0x0  nop
    ctx->pc = 0x13a458u;
    // NOP
label_13a45c:
    // 0x13a45c: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x13a45cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_13a460:
    // 0x13a460: 0xc058fec  jal         func_163FB0
label_13a464:
    if (ctx->pc == 0x13A464u) {
        ctx->pc = 0x13A468u;
        goto label_13a468;
    }
    ctx->pc = 0x13A460u;
    SET_GPR_U32(ctx, 31, 0x13A468u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x13A460u, 0x13A468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A468u;
label_13a468:
    // 0x13a468: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x13a468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_13a46c:
    // 0x13a46c: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x13a46cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
label_13a470:
    // 0x13a470: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x13a470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_13a474:
    // 0x13a474: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x13a474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_13a478:
    // 0x13a478: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x13a478u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
label_13a47c:
    // 0x13a47c: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x13a47cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_13a480:
    // 0x13a480: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x13a480u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_13a484:
    // 0x13a484: 0x2404051d  addiu       $a0, $zero, 0x51D
    ctx->pc = 0x13a484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1309));
label_13a488:
    // 0x13a488: 0x24650030  addiu       $a1, $v1, 0x30
    ctx->pc = 0x13a488u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
label_13a48c:
    // 0x13a48c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x13a48cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_13a490:
    // 0x13a490: 0xc067b18  jal         func_19EC60
label_13a494:
    if (ctx->pc == 0x13A494u) {
        ctx->pc = 0x13A498u;
        goto label_13a498;
    }
    ctx->pc = 0x13A490u;
    SET_GPR_U32(ctx, 31, 0x13A498u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x13A490u, 0x13A498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A498u;
label_13a498:
    // 0x13a498: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x13a498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_13a49c:
    // 0x13a49c: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x13a49cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_13a4a0:
    // 0x13a4a0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x13a4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_13a4a4:
    // 0x13a4a4: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x13a4a4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_13a4a8:
    // 0x13a4a8: 0x3c023e49  lui         $v0, 0x3E49
    ctx->pc = 0x13a4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15945 << 16));
label_13a4ac:
    // 0x13a4ac: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x13a4acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_13a4b0:
    // 0x13a4b0: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x13a4b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_13a4b4:
    // 0x13a4b4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x13a4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_13a4b8:
    // 0x13a4b8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x13a4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_13a4bc:
    // 0x13a4bc: 0xc46c1290  lwc1        $f12, 0x1290($v1)
    ctx->pc = 0x13a4bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_13a4c0:
    // 0x13a4c0: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x13a4c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_13a4c4:
    // 0x13a4c4: 0xc058f50  jal         func_163D40
label_13a4c8:
    if (ctx->pc == 0x13A4C8u) {
        ctx->pc = 0x13A4CCu;
        goto label_13a4cc;
    }
    ctx->pc = 0x13A4C4u;
    SET_GPR_U32(ctx, 31, 0x13A4CCu);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x13A4C4u, 0x13A4CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A4CCu;
label_13a4cc:
    // 0x13a4cc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x13a4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_13a4d0:
    // 0x13a4d0: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x13a4d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
label_13a4d4:
    // 0x13a4d4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x13a4d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_13a4d8:
    // 0x13a4d8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x13a4d8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_13a4dc:
    // 0x13a4dc: 0xc096b40  jal         func_25AD00
label_13a4e0:
    if (ctx->pc == 0x13A4E0u) {
        ctx->pc = 0x13A4E4u;
        goto label_13a4e4;
    }
    ctx->pc = 0x13A4DCu;
    SET_GPR_U32(ctx, 31, 0x13A4E4u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x13A4DCu, 0x13A4E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A4E4u;
label_13a4e4:
    // 0x13a4e4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x13a4e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_13a4e8:
    // 0x13a4e8: 0xc05cd10  jal         func_173440
label_13a4ec:
    if (ctx->pc == 0x13A4ECu) {
        ctx->pc = 0x13A4F0u;
        goto label_13a4f0;
    }
    ctx->pc = 0x13A4E8u;
    SET_GPR_U32(ctx, 31, 0x13A4F0u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x13A4E8u, 0x13A4F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A4F0u;
label_13a4f0:
    // 0x13a4f0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x13a4f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_13a4f4:
    // 0x13a4f4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x13a4f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_13a4f8:
    // 0x13a4f8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x13a4f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_13a4fc:
    // 0x13a4fc: 0xc0573d8  jal         func_15CF60
label_13a500:
    if (ctx->pc == 0x13A500u) {
        ctx->pc = 0x13A504u;
        goto label_13a504;
    }
    ctx->pc = 0x13A4FCu;
    SET_GPR_U32(ctx, 31, 0x13A504u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x13A4FCu, 0x13A504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A504u;
label_13a504:
    // 0x13a504: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x13a504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_13a508:
    // 0x13a508: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x13a508u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
label_13a50c:
    // 0x13a50c: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x13a50cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
label_13a510:
    // 0x13a510: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x13a510u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_13a514:
    // 0x13a514: 0x2c810006  sltiu       $at, $a0, 0x6
    ctx->pc = 0x13a514u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_13a518:
    // 0x13a518: 0x10200090  beqz        $at, . + 4 + (0x90 << 2)
label_13a51c:
    if (ctx->pc == 0x13A51Cu) {
        ctx->pc = 0x13A520u;
        goto label_13a520;
    }
    ctx->pc = 0x13A518u;
    {
        const bool branch_taken_0x13a518 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a518) {
            ctx->pc = 0x13A75Cu;
            goto label_13a75c;
        }
    }
    ctx->pc = 0x13A520u;
label_13a520:
    // 0x13a520: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x13a520u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_13a524:
    // 0x13a524: 0x2443e640  addiu       $v1, $v0, -0x19C0
    ctx->pc = 0x13a524u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960704));
label_13a528:
    // 0x13a528: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x13a528u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_13a52c:
    // 0x13a52c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13a52cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_13a530:
    // 0x13a530: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x13a530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_13a534:
    // 0x13a534: 0x400008  jr          $v0
label_13a538:
    if (ctx->pc == 0x13A538u) {
        ctx->pc = 0x13A53Cu;
        goto label_13a53c;
    }
    ctx->pc = 0x13A534u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13A534u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x13A53Cu;
label_13a53c:
    // 0x13a53c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x13a53cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_13a540:
    // 0x13a540: 0xc4411b50  lwc1        $f1, 0x1B50($v0)
    ctx->pc = 0x13a540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_13a544:
    // 0x13a544: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x13a544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_13a548:
    // 0x13a548: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x13a548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_13a54c:
    // 0x13a54c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x13a54cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_13a550:
    // 0x13a550: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x13a550u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_13a554:
    // 0x13a554: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x13a554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_13a558:
    // 0x13a558: 0xc4611b50  lwc1        $f1, 0x1B50($v1)
    ctx->pc = 0x13a558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_13a55c:
    // 0x13a55c: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x13a55cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
label_13a560:
    // 0x13a560: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13a560u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_13a564:
    // 0x13a564: 0x0  nop
    ctx->pc = 0x13a564u;
    // NOP
label_13a568:
    // 0x13a568: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x13a568u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_13a56c:
    // 0x13a56c: 0xe4601b50  swc1        $f0, 0x1B50($v1)
    ctx->pc = 0x13a56cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 6992), bits); }
label_13a570:
    // 0x13a570: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x13a570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_13a574:
    // 0x13a574: 0xc4411b50  lwc1        $f1, 0x1B50($v0)
    ctx->pc = 0x13a574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_13a578:
    // 0x13a578: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x13a578u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_13a57c:
    // 0x13a57c: 0x0  nop
    ctx->pc = 0x13a57cu;
    // NOP
label_13a580:
    // 0x13a580: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x13a580u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_13a584:
    // 0x13a584: 0x0  nop
    ctx->pc = 0x13a584u;
    // NOP
label_13a588:
    // 0x13a588: 0x45000074  bc1f        . + 4 + (0x74 << 2)
label_13a58c:
    if (ctx->pc == 0x13A58Cu) {
        ctx->pc = 0x13A590u;
        goto label_13a590;
    }
    ctx->pc = 0x13A588u;
    {
        const bool branch_taken_0x13a588 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13a588) {
            ctx->pc = 0x13A75Cu;
            goto label_13a75c;
        }
    }
    ctx->pc = 0x13A590u;
label_13a590:
    // 0x13a590: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x13a590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_13a594:
    // 0x13a594: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x13a594u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
label_13a598:
    // 0x13a598: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x13a598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_13a59c:
    // 0x13a59c: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x13a59cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
label_13a5a0:
    // 0x13a5a0: 0x1000006e  b           . + 4 + (0x6E << 2)
label_13a5a4:
    if (ctx->pc == 0x13A5A4u) {
        ctx->pc = 0x13A5A8u;
        goto label_13a5a8;
    }
    ctx->pc = 0x13A5A0u;
    {
        const bool branch_taken_0x13a5a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a5a0) {
            ctx->pc = 0x13A75Cu;
            goto label_13a75c;
        }
    }
    ctx->pc = 0x13A5A8u;
label_13a5a8:
    // 0x13a5a8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x13a5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_13a5ac:
    // 0x13a5ac: 0xc4411b50  lwc1        $f1, 0x1B50($v0)
    ctx->pc = 0x13a5acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_13a5b0:
    // 0x13a5b0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x13a5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_13a5b4:
    // 0x13a5b4: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x13a5b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_13a5b8:
    // 0x13a5b8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x13a5b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_13a5bc:
    // 0x13a5bc: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x13a5bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_13a5c0:
    // 0x13a5c0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x13a5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_13a5c4:
    // 0x13a5c4: 0xc4611b50  lwc1        $f1, 0x1B50($v1)
    ctx->pc = 0x13a5c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_13a5c8:
    // 0x13a5c8: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x13a5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_13a5cc:
    // 0x13a5cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13a5ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_13a5d0:
    // 0x13a5d0: 0x0  nop
    ctx->pc = 0x13a5d0u;
    // NOP
label_13a5d4:
    // 0x13a5d4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x13a5d4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_13a5d8:
    // 0x13a5d8: 0xe4601b50  swc1        $f0, 0x1B50($v1)
    ctx->pc = 0x13a5d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 6992), bits); }
label_13a5dc:
    // 0x13a5dc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x13a5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_13a5e0:
    // 0x13a5e0: 0xc4411b50  lwc1        $f1, 0x1B50($v0)
    ctx->pc = 0x13a5e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_13a5e4:
    // 0x13a5e4: 0x3c02c170  lui         $v0, 0xC170
    ctx->pc = 0x13a5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49520 << 16));
label_13a5e8:
    // 0x13a5e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13a5e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_13a5ec:
    // 0x13a5ec: 0x0  nop
    ctx->pc = 0x13a5ecu;
    // NOP
label_13a5f0:
    // 0x13a5f0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x13a5f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_13a5f4:
    // 0x13a5f4: 0x0  nop
    ctx->pc = 0x13a5f4u;
    // NOP
label_13a5f8:
    // 0x13a5f8: 0x45000058  bc1f        . + 4 + (0x58 << 2)
label_13a5fc:
    if (ctx->pc == 0x13A5FCu) {
        ctx->pc = 0x13A600u;
        goto label_13a600;
    }
    ctx->pc = 0x13A5F8u;
    {
        const bool branch_taken_0x13a5f8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13a5f8) {
            ctx->pc = 0x13A75Cu;
            goto label_13a75c;
        }
    }
    ctx->pc = 0x13A600u;
label_13a600:
    // 0x13a600: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x13a600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_13a604:
    // 0x13a604: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x13a604u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
label_13a608:
    // 0x13a608: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x13a608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_13a60c:
    // 0x13a60c: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x13a60cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
label_13a610:
    // 0x13a610: 0x10000052  b           . + 4 + (0x52 << 2)
label_13a614:
    if (ctx->pc == 0x13A614u) {
        ctx->pc = 0x13A618u;
        goto label_13a618;
    }
    ctx->pc = 0x13A610u;
    {
        const bool branch_taken_0x13a610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a610) {
            ctx->pc = 0x13A75Cu;
            goto label_13a75c;
        }
    }
    ctx->pc = 0x13A618u;
label_13a618:
    // 0x13a618: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x13a618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_13a61c:
    // 0x13a61c: 0xc4411b50  lwc1        $f1, 0x1B50($v0)
    ctx->pc = 0x13a61cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_13a620:
    // 0x13a620: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x13a620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_13a624:
    // 0x13a624: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x13a624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_13a628:
    // 0x13a628: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x13a628u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_13a62c:
    // 0x13a62c: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x13a62cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_13a630:
    // 0x13a630: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x13a630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_13a634:
    // 0x13a634: 0xc4611b50  lwc1        $f1, 0x1B50($v1)
    ctx->pc = 0x13a634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_13a638:
    // 0x13a638: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x13a638u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_13a63c:
    // 0x13a63c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13a63cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_13a640:
    // 0x13a640: 0x0  nop
    ctx->pc = 0x13a640u;
    // NOP
label_13a644:
    // 0x13a644: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x13a644u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_13a648:
    // 0x13a648: 0xe4601b50  swc1        $f0, 0x1B50($v1)
    ctx->pc = 0x13a648u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 6992), bits); }
label_13a64c:
    // 0x13a64c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x13a64cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_13a650:
    // 0x13a650: 0xc4411b50  lwc1        $f1, 0x1B50($v0)
    ctx->pc = 0x13a650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_13a654:
    // 0x13a654: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x13a654u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
label_13a658:
    // 0x13a658: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13a658u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_13a65c:
    // 0x13a65c: 0x0  nop
    ctx->pc = 0x13a65cu;
    // NOP
label_13a660:
    // 0x13a660: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x13a660u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_13a664:
    // 0x13a664: 0x0  nop
    ctx->pc = 0x13a664u;
    // NOP
label_13a668:
    // 0x13a668: 0x4501003c  bc1t        . + 4 + (0x3C << 2)
label_13a66c:
    if (ctx->pc == 0x13A66Cu) {
        ctx->pc = 0x13A670u;
        goto label_13a670;
    }
    ctx->pc = 0x13A668u;
    {
        const bool branch_taken_0x13a668 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x13a668) {
            ctx->pc = 0x13A75Cu;
            goto label_13a75c;
        }
    }
    ctx->pc = 0x13A670u;
label_13a670:
    // 0x13a670: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x13a670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_13a674:
    // 0x13a674: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x13a674u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
label_13a678:
    // 0x13a678: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x13a678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_13a67c:
    // 0x13a67c: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x13a67cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
label_13a680:
    // 0x13a680: 0x10000036  b           . + 4 + (0x36 << 2)
label_13a684:
    if (ctx->pc == 0x13A684u) {
        ctx->pc = 0x13A688u;
        goto label_13a688;
    }
    ctx->pc = 0x13A680u;
    {
        const bool branch_taken_0x13a680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a680) {
            ctx->pc = 0x13A75Cu;
            goto label_13a75c;
        }
    }
    ctx->pc = 0x13A688u;
label_13a688:
    // 0x13a688: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x13a688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_13a68c:
    // 0x13a68c: 0xc4411b50  lwc1        $f1, 0x1B50($v0)
    ctx->pc = 0x13a68cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_13a690:
    // 0x13a690: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x13a690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_13a694:
    // 0x13a694: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x13a694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_13a698:
    // 0x13a698: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x13a698u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_13a69c:
    // 0x13a69c: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x13a69cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_13a6a0:
    // 0x13a6a0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x13a6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_13a6a4:
    // 0x13a6a4: 0xc4611b50  lwc1        $f1, 0x1B50($v1)
    ctx->pc = 0x13a6a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_13a6a8:
    // 0x13a6a8: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x13a6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_13a6ac:
    // 0x13a6ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13a6acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_13a6b0:
    // 0x13a6b0: 0x0  nop
    ctx->pc = 0x13a6b0u;
    // NOP
label_13a6b4:
    // 0x13a6b4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x13a6b4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_13a6b8:
    // 0x13a6b8: 0xe4601b50  swc1        $f0, 0x1B50($v1)
    ctx->pc = 0x13a6b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 6992), bits); }
label_13a6bc:
    // 0x13a6bc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x13a6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_13a6c0:
    // 0x13a6c0: 0xc4411b50  lwc1        $f1, 0x1B50($v0)
    ctx->pc = 0x13a6c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_13a6c4:
    // 0x13a6c4: 0x3c02c120  lui         $v0, 0xC120
    ctx->pc = 0x13a6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49440 << 16));
label_13a6c8:
    // 0x13a6c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13a6c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_13a6cc:
    // 0x13a6cc: 0x0  nop
    ctx->pc = 0x13a6ccu;
    // NOP
label_13a6d0:
    // 0x13a6d0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x13a6d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_13a6d4:
    // 0x13a6d4: 0x0  nop
    ctx->pc = 0x13a6d4u;
    // NOP
label_13a6d8:
    // 0x13a6d8: 0x45000020  bc1f        . + 4 + (0x20 << 2)
label_13a6dc:
    if (ctx->pc == 0x13A6DCu) {
        ctx->pc = 0x13A6E0u;
        goto label_13a6e0;
    }
    ctx->pc = 0x13A6D8u;
    {
        const bool branch_taken_0x13a6d8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13a6d8) {
            ctx->pc = 0x13A75Cu;
            goto label_13a75c;
        }
    }
    ctx->pc = 0x13A6E0u;
label_13a6e0:
    // 0x13a6e0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x13a6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_13a6e4:
    // 0x13a6e4: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x13a6e4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
label_13a6e8:
    // 0x13a6e8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x13a6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_13a6ec:
    // 0x13a6ec: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x13a6ecu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
label_13a6f0:
    // 0x13a6f0: 0x1000001a  b           . + 4 + (0x1A << 2)
label_13a6f4:
    if (ctx->pc == 0x13A6F4u) {
        ctx->pc = 0x13A6F8u;
        goto label_13a6f8;
    }
    ctx->pc = 0x13A6F0u;
    {
        const bool branch_taken_0x13a6f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a6f0) {
            ctx->pc = 0x13A75Cu;
            goto label_13a75c;
        }
    }
    ctx->pc = 0x13A6F8u;
label_13a6f8:
    // 0x13a6f8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x13a6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_13a6fc:
    // 0x13a6fc: 0xc4411b50  lwc1        $f1, 0x1B50($v0)
    ctx->pc = 0x13a6fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_13a700:
    // 0x13a700: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x13a700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_13a704:
    // 0x13a704: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x13a704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_13a708:
    // 0x13a708: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x13a708u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_13a70c:
    // 0x13a70c: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x13a70cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_13a710:
    // 0x13a710: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x13a710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_13a714:
    // 0x13a714: 0xc4611b50  lwc1        $f1, 0x1B50($v1)
    ctx->pc = 0x13a714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_13a718:
    // 0x13a718: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x13a718u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_13a71c:
    // 0x13a71c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13a71cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_13a720:
    // 0x13a720: 0x0  nop
    ctx->pc = 0x13a720u;
    // NOP
label_13a724:
    // 0x13a724: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x13a724u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_13a728:
    // 0x13a728: 0xe4601b50  swc1        $f0, 0x1B50($v1)
    ctx->pc = 0x13a728u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 6992), bits); }
label_13a72c:
    // 0x13a72c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x13a72cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_13a730:
    // 0x13a730: 0xc4411b50  lwc1        $f1, 0x1B50($v0)
    ctx->pc = 0x13a730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_13a734:
    // 0x13a734: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x13a734u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_13a738:
    // 0x13a738: 0x0  nop
    ctx->pc = 0x13a738u;
    // NOP
label_13a73c:
    // 0x13a73c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x13a73cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_13a740:
    // 0x13a740: 0x0  nop
    ctx->pc = 0x13a740u;
    // NOP
label_13a744:
    // 0x13a744: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_13a748:
    if (ctx->pc == 0x13A748u) {
        ctx->pc = 0x13A74Cu;
        goto label_13a74c;
    }
    ctx->pc = 0x13A744u;
    {
        const bool branch_taken_0x13a744 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x13a744) {
            ctx->pc = 0x13A75Cu;
            goto label_13a75c;
        }
    }
    ctx->pc = 0x13A74Cu;
label_13a74c:
    // 0x13a74c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x13a74cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_13a750:
    // 0x13a750: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x13a750u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
label_13a754:
    // 0x13a754: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x13a754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_13a758:
    // 0x13a758: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x13a758u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
label_13a75c:
    // 0x13a75c: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x13a75cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_13a760:
    // 0x13a760: 0xc097530  jal         func_25D4C0
label_13a764:
    if (ctx->pc == 0x13A764u) {
        ctx->pc = 0x13A768u;
        goto label_13a768;
    }
    ctx->pc = 0x13A760u;
    SET_GPR_U32(ctx, 31, 0x13A768u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x13A760u, 0x13A768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A768u;
label_13a768:
    // 0x13a768: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x13a768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_13a76c:
    // 0x13a76c: 0x904209e7  lbu         $v0, 0x9E7($v0)
    ctx->pc = 0x13a76cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2535)));
label_13a770:
    // 0x13a770: 0x1040013b  beqz        $v0, . + 4 + (0x13B << 2)
label_13a774:
    if (ctx->pc == 0x13A774u) {
        ctx->pc = 0x13A778u;
        goto label_13a778;
    }
    ctx->pc = 0x13A770u;
    {
        const bool branch_taken_0x13a770 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a770) {
            ctx->pc = 0x13AC60u;
            goto label_13ac60;
        }
    }
    ctx->pc = 0x13A778u;
label_13a778:
    // 0x13a778: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x13a778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_13a77c:
    // 0x13a77c: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x13a77cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_13a780:
    // 0x13a780: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x13a780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_13a784:
    // 0x13a784: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x13a784u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_13a788:
    // 0x13a788: 0x10000135  b           . + 4 + (0x135 << 2)
label_13a78c:
    if (ctx->pc == 0x13A78Cu) {
        ctx->pc = 0x13A790u;
        goto label_13a790;
    }
    ctx->pc = 0x13A788u;
    {
        const bool branch_taken_0x13a788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a788) {
            ctx->pc = 0x13AC60u;
            goto label_13ac60;
        }
    }
    ctx->pc = 0x13A790u;
label_13a790:
    // 0x13a790: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x13a790u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_13a794:
    // 0x13a794: 0x2444dbc0  addiu       $a0, $v0, -0x2440
    ctx->pc = 0x13a794u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
label_13a798:
    // 0x13a798: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x13a798u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_13a79c:
    // 0x13a79c: 0x8c25df28  lw          $a1, -0x20D8($at)
    ctx->pc = 0x13a79cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294958888)));
label_13a7a0:
    // 0x13a7a0: 0x240600b3  addiu       $a2, $zero, 0xB3
    ctx->pc = 0x13a7a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 179));
label_13a7a4:
    // 0x13a7a4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x13a7a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13a7a8:
    // 0x13a7a8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x13a7a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_13a7ac:
    // 0x13a7ac: 0xc0965d0  jal         func_259740
label_13a7b0:
    if (ctx->pc == 0x13A7B0u) {
        ctx->pc = 0x13A7B4u;
        goto label_13a7b4;
    }
    ctx->pc = 0x13A7ACu;
    SET_GPR_U32(ctx, 31, 0x13A7B4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x13A7ACu, 0x13A7B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A7B4u;
label_13a7b4:
    // 0x13a7b4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x13a7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_13a7b8:
    // 0x13a7b8: 0xa04010a8  sb          $zero, 0x10A8($v0)
    ctx->pc = 0x13a7b8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 0));
label_13a7bc:
    // 0x13a7bc: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x13a7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_13a7c0:
    // 0x13a7c0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x13a7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_13a7c4:
    // 0x13a7c4: 0xa443127a  sh          $v1, 0x127A($v0)
    ctx->pc = 0x13a7c4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 3));
label_13a7c8:
    // 0x13a7c8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x13a7c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_13a7cc:
    // 0x13a7cc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x13a7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_13a7d0:
    // 0x13a7d0: 0xe4401b50  swc1        $f0, 0x1B50($v0)
    ctx->pc = 0x13a7d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 6992), bits); }
label_13a7d4:
    // 0x13a7d4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x13a7d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_13a7d8:
    // 0x13a7d8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x13a7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_13a7dc:
    // 0x13a7dc: 0xe4401b54  swc1        $f0, 0x1B54($v0)
    ctx->pc = 0x13a7dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 6996), bits); }
label_13a7e0:
    // 0x13a7e0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x13a7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_13a7e4:
    // 0x13a7e4: 0xac401b60  sw          $zero, 0x1B60($v0)
    ctx->pc = 0x13a7e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7008), GPR_U32(ctx, 0));
label_13a7e8:
    // 0x13a7e8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x13a7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_13a7ec:
    // 0x13a7ec: 0xac401b64  sw          $zero, 0x1B64($v0)
    ctx->pc = 0x13a7ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7012), GPR_U32(ctx, 0));
label_13a7f0:
    // 0x13a7f0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x13a7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_13a7f4:
    // 0x13a7f4: 0xac401b68  sw          $zero, 0x1B68($v0)
    ctx->pc = 0x13a7f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7016), GPR_U32(ctx, 0));
label_13a7f8:
    // 0x13a7f8: 0x240400f0  addiu       $a0, $zero, 0xF0
    ctx->pc = 0x13a7f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
label_13a7fc:
    // 0x13a7fc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x13a7fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13a800:
    // 0x13a800: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x13a800u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_13a804:
    // 0x13a804: 0xc0576a4  jal         func_15DA90
label_13a808:
    if (ctx->pc == 0x13A808u) {
        ctx->pc = 0x13A80Cu;
        goto label_13a80c;
    }
    ctx->pc = 0x13A804u;
    SET_GPR_U32(ctx, 31, 0x13A80Cu);
    ctx->pc = 0x15DA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15DA90u, 0x13A804u, 0x13A80Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A80Cu;
label_13a80c:
    // 0x13a80c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x13a80cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_13a810:
    // 0x13a810: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x13a810u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_13a814:
    // 0x13a814: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x13a814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_13a818:
    // 0x13a818: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x13a818u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_13a81c:
    // 0x13a81c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x13a81cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_13a820:
    // 0x13a820: 0x8c421b68  lw          $v0, 0x1B68($v0)
    ctx->pc = 0x13a820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7016)));
label_13a824:
    // 0x13a824: 0x104000c9  beqz        $v0, . + 4 + (0xC9 << 2)
label_13a828:
    if (ctx->pc == 0x13A828u) {
        ctx->pc = 0x13A82Cu;
        goto label_13a82c;
    }
    ctx->pc = 0x13A824u;
    {
        const bool branch_taken_0x13a824 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a824) {
            ctx->pc = 0x13AB4Cu;
            goto label_13ab4c;
        }
    }
    ctx->pc = 0x13A82Cu;
label_13a82c:
    // 0x13a82c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x13a82cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_13a830:
    // 0x13a830: 0x8c421b64  lw          $v0, 0x1B64($v0)
    ctx->pc = 0x13a830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7012)));
label_13a834:
    // 0x13a834: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_13a838:
    if (ctx->pc == 0x13A838u) {
        ctx->pc = 0x13A83Cu;
        goto label_13a83c;
    }
    ctx->pc = 0x13A834u;
    {
        const bool branch_taken_0x13a834 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13a834) {
            ctx->pc = 0x13A864u;
            goto label_13a864;
        }
    }
    ctx->pc = 0x13A83Cu;
label_13a83c:
    // 0x13a83c: 0xc067694  jal         func_19DA50
label_13a840:
    if (ctx->pc == 0x13A840u) {
        ctx->pc = 0x13A844u;
        goto label_13a844;
    }
    ctx->pc = 0x13A83Cu;
    SET_GPR_U32(ctx, 31, 0x13A844u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x13A83Cu, 0x13A844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A844u;
label_13a844:
    // 0x13a844: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x13a844u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_13a848:
    // 0x13a848: 0x30430007  andi        $v1, $v0, 0x7
    ctx->pc = 0x13a848u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
label_13a84c:
    // 0x13a84c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x13a84cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_13a850:
    // 0x13a850: 0xac431b60  sw          $v1, 0x1B60($v0)
    ctx->pc = 0x13a850u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7008), GPR_U32(ctx, 3));
label_13a854:
    // 0x13a854: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x13a854u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_13a858:
    // 0x13a858: 0x8c621b68  lw          $v0, 0x1B68($v1)
    ctx->pc = 0x13a858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7016)));
label_13a85c:
    // 0x13a85c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x13a85cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_13a860:
    // 0x13a860: 0xac621b68  sw          $v0, 0x1B68($v1)
    ctx->pc = 0x13a860u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7016), GPR_U32(ctx, 2));
label_13a864:
    // 0x13a864: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x13a864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_13a868:
    // 0x13a868: 0x8c621b64  lw          $v0, 0x1B64($v1)
    ctx->pc = 0x13a868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7012)));
label_13a86c:
    // 0x13a86c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x13a86cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_13a870:
    // 0x13a870: 0xac621b64  sw          $v0, 0x1B64($v1)
    ctx->pc = 0x13a870u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7012), GPR_U32(ctx, 2));
label_13a874:
    // 0x13a874: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x13a874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_13a878:
    // 0x13a878: 0x8c621b64  lw          $v0, 0x1B64($v1)
    ctx->pc = 0x13a878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7012)));
label_13a87c:
    // 0x13a87c: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x13a87cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_13a880:
    // 0x13a880: 0xac621b64  sw          $v0, 0x1B64($v1)
    ctx->pc = 0x13a880u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7012), GPR_U32(ctx, 2));
label_13a884:
    // 0x13a884: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x13a884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_13a888:
    // 0x13a888: 0x8c441b60  lw          $a0, 0x1B60($v0)
    ctx->pc = 0x13a888u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7008)));
label_13a88c:
    // 0x13a88c: 0x2c810008  sltiu       $at, $a0, 0x8
    ctx->pc = 0x13a88cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_13a890:
    // 0x13a890: 0x10200076  beqz        $at, . + 4 + (0x76 << 2)
label_13a894:
    if (ctx->pc == 0x13A894u) {
        ctx->pc = 0x13A898u;
        goto label_13a898;
    }
    ctx->pc = 0x13A890u;
    {
        const bool branch_taken_0x13a890 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a890) {
            ctx->pc = 0x13AA6Cu;
            goto label_13aa6c;
        }
    }
    ctx->pc = 0x13A898u;
label_13a898:
    // 0x13a898: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x13a898u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_13a89c:
    // 0x13a89c: 0x2443e620  addiu       $v1, $v0, -0x19E0
    ctx->pc = 0x13a89cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960672));
label_13a8a0:
    // 0x13a8a0: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x13a8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_13a8a4:
    // 0x13a8a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13a8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_13a8a8:
    // 0x13a8a8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x13a8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_13a8ac:
    // 0x13a8ac: 0x400008  jr          $v0
label_13a8b0:
    if (ctx->pc == 0x13A8B0u) {
        ctx->pc = 0x13A8B4u;
        goto label_13a8b4;
    }
    ctx->pc = 0x13A8ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13A8ACu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x13A8B4u;
label_13a8b4:
    // 0x13a8b4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x13a8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_13a8b8:
    // 0x13a8b8: 0xc4611b50  lwc1        $f1, 0x1B50($v1)
    ctx->pc = 0x13a8b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_13a8bc:
    // 0x13a8bc: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x13a8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
label_13a8c0:
    // 0x13a8c0: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x13a8c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
label_13a8c4:
    // 0x13a8c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13a8c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_13a8c8:
    // 0x13a8c8: 0x0  nop
    ctx->pc = 0x13a8c8u;
    // NOP
label_13a8cc:
    // 0x13a8cc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x13a8ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_13a8d0:
    // 0x13a8d0: 0xe4601b50  swc1        $f0, 0x1B50($v1)
    ctx->pc = 0x13a8d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 6992), bits); }
label_13a8d4:
    // 0x13a8d4: 0x10000065  b           . + 4 + (0x65 << 2)
label_13a8d8:
    if (ctx->pc == 0x13A8D8u) {
        ctx->pc = 0x13A8DCu;
        goto label_13a8dc;
    }
    ctx->pc = 0x13A8D4u;
    {
        const bool branch_taken_0x13a8d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a8d4) {
            ctx->pc = 0x13AA6Cu;
            goto label_13aa6c;
        }
    }
    ctx->pc = 0x13A8DCu;
label_13a8dc:
    // 0x13a8dc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x13a8dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_13a8e0:
    // 0x13a8e0: 0xc4611b54  lwc1        $f1, 0x1B54($v1)
    ctx->pc = 0x13a8e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6996)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_13a8e4:
    // 0x13a8e4: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x13a8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
label_13a8e8:
    // 0x13a8e8: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x13a8e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
label_13a8ec:
    // 0x13a8ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13a8ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_13a8f0:
    // 0x13a8f0: 0x0  nop
    ctx->pc = 0x13a8f0u;
    // NOP
label_13a8f4:
    // 0x13a8f4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x13a8f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_13a8f8:
    // 0x13a8f8: 0xe4601b54  swc1        $f0, 0x1B54($v1)
    ctx->pc = 0x13a8f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 6996), bits); }
label_13a8fc:
    // 0x13a8fc: 0x1000005b  b           . + 4 + (0x5B << 2)
label_13a900:
    if (ctx->pc == 0x13A900u) {
        ctx->pc = 0x13A904u;
        goto label_13a904;
    }
    ctx->pc = 0x13A8FCu;
    {
        const bool branch_taken_0x13a8fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a8fc) {
            ctx->pc = 0x13AA6Cu;
            goto label_13aa6c;
        }
    }
    ctx->pc = 0x13A904u;
label_13a904:
    // 0x13a904: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x13a904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_13a908:
    // 0x13a908: 0xc4611b50  lwc1        $f1, 0x1B50($v1)
    ctx->pc = 0x13a908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_13a90c:
    // 0x13a90c: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x13a90cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
label_13a910:
    // 0x13a910: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x13a910u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
label_13a914:
    // 0x13a914: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13a914u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_13a918:
    // 0x13a918: 0x0  nop
    ctx->pc = 0x13a918u;
    // NOP
label_13a91c:
    // 0x13a91c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x13a91cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_13a920:
    // 0x13a920: 0xe4601b50  swc1        $f0, 0x1B50($v1)
    ctx->pc = 0x13a920u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 6992), bits); }
label_13a924:
    // 0x13a924: 0x10000051  b           . + 4 + (0x51 << 2)
label_13a928:
    if (ctx->pc == 0x13A928u) {
        ctx->pc = 0x13A92Cu;
        goto label_13a92c;
    }
    ctx->pc = 0x13A924u;
    {
        const bool branch_taken_0x13a924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a924) {
            ctx->pc = 0x13AA6Cu;
            goto label_13aa6c;
        }
    }
    ctx->pc = 0x13A92Cu;
label_13a92c:
    // 0x13a92c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x13a92cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_13a930:
    // 0x13a930: 0xc4611b54  lwc1        $f1, 0x1B54($v1)
    ctx->pc = 0x13a930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6996)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_13a934:
    // 0x13a934: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x13a934u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
label_13a938:
    // 0x13a938: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x13a938u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
label_13a93c:
    // 0x13a93c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13a93cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_13a940:
    // 0x13a940: 0x0  nop
    ctx->pc = 0x13a940u;
    // NOP
label_13a944:
    // 0x13a944: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x13a944u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_13a948:
    // 0x13a948: 0xe4601b54  swc1        $f0, 0x1B54($v1)
    ctx->pc = 0x13a948u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 6996), bits); }
label_13a94c:
    // 0x13a94c: 0x10000047  b           . + 4 + (0x47 << 2)
label_13a950:
    if (ctx->pc == 0x13A950u) {
        ctx->pc = 0x13A954u;
        goto label_13a954;
    }
    ctx->pc = 0x13A94Cu;
    {
        const bool branch_taken_0x13a94c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a94c) {
            ctx->pc = 0x13AA6Cu;
            goto label_13aa6c;
        }
    }
    ctx->pc = 0x13A954u;
label_13a954:
    // 0x13a954: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x13a954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_13a958:
    // 0x13a958: 0xc4611b50  lwc1        $f1, 0x1B50($v1)
    ctx->pc = 0x13a958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_13a95c:
    // 0x13a95c: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x13a95cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
label_13a960:
    // 0x13a960: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x13a960u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
label_13a964:
    // 0x13a964: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13a964u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_13a968:
    // 0x13a968: 0x0  nop
    ctx->pc = 0x13a968u;
    // NOP
label_13a96c:
    // 0x13a96c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x13a96cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_13a970:
    // 0x13a970: 0xe4601b50  swc1        $f0, 0x1B50($v1)
    ctx->pc = 0x13a970u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 6992), bits); }
label_13a974:
    // 0x13a974: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x13a974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_13a978:
    // 0x13a978: 0xc4611b54  lwc1        $f1, 0x1B54($v1)
    ctx->pc = 0x13a978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6996)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_13a97c:
    // 0x13a97c: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x13a97cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
label_13a980:
    // 0x13a980: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x13a980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
label_13a984:
    // 0x13a984: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13a984u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_13a988:
    // 0x13a988: 0x0  nop
    ctx->pc = 0x13a988u;
    // NOP
label_13a98c:
    // 0x13a98c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x13a98cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_13a990:
    // 0x13a990: 0xe4601b54  swc1        $f0, 0x1B54($v1)
    ctx->pc = 0x13a990u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 6996), bits); }
label_13a994:
    // 0x13a994: 0x10000035  b           . + 4 + (0x35 << 2)
label_13a998:
    if (ctx->pc == 0x13A998u) {
        ctx->pc = 0x13A99Cu;
        goto label_13a99c;
    }
    ctx->pc = 0x13A994u;
    {
        const bool branch_taken_0x13a994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a994) {
            ctx->pc = 0x13AA6Cu;
            goto label_13aa6c;
        }
    }
    ctx->pc = 0x13A99Cu;
label_13a99c:
    // 0x13a99c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x13a99cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_13a9a0:
    // 0x13a9a0: 0xc4611b50  lwc1        $f1, 0x1B50($v1)
    ctx->pc = 0x13a9a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_13a9a4:
    // 0x13a9a4: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x13a9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
label_13a9a8:
    // 0x13a9a8: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x13a9a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
label_13a9ac:
    // 0x13a9ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13a9acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_13a9b0:
    // 0x13a9b0: 0x0  nop
    ctx->pc = 0x13a9b0u;
    // NOP
label_13a9b4:
    // 0x13a9b4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x13a9b4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_13a9b8:
    // 0x13a9b8: 0xe4601b50  swc1        $f0, 0x1B50($v1)
    ctx->pc = 0x13a9b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 6992), bits); }
label_13a9bc:
    // 0x13a9bc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x13a9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_13a9c0:
    // 0x13a9c0: 0xc4611b54  lwc1        $f1, 0x1B54($v1)
    ctx->pc = 0x13a9c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6996)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_13a9c4:
    // 0x13a9c4: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x13a9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
label_13a9c8:
    // 0x13a9c8: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x13a9c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
label_13a9cc:
    // 0x13a9cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13a9ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_13a9d0:
    // 0x13a9d0: 0x0  nop
    ctx->pc = 0x13a9d0u;
    // NOP
label_13a9d4:
    // 0x13a9d4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x13a9d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_13a9d8:
    // 0x13a9d8: 0xe4601b54  swc1        $f0, 0x1B54($v1)
    ctx->pc = 0x13a9d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 6996), bits); }
label_13a9dc:
    // 0x13a9dc: 0x10000023  b           . + 4 + (0x23 << 2)
label_13a9e0:
    if (ctx->pc == 0x13A9E0u) {
        ctx->pc = 0x13A9E4u;
        goto label_13a9e4;
    }
    ctx->pc = 0x13A9DCu;
    {
        const bool branch_taken_0x13a9dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a9dc) {
            ctx->pc = 0x13AA6Cu;
            goto label_13aa6c;
        }
    }
    ctx->pc = 0x13A9E4u;
label_13a9e4:
    // 0x13a9e4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x13a9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_13a9e8:
    // 0x13a9e8: 0xc4611b50  lwc1        $f1, 0x1B50($v1)
    ctx->pc = 0x13a9e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_13a9ec:
    // 0x13a9ec: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x13a9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
label_13a9f0:
    // 0x13a9f0: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x13a9f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
label_13a9f4:
    // 0x13a9f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13a9f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_13a9f8:
    // 0x13a9f8: 0x0  nop
    ctx->pc = 0x13a9f8u;
    // NOP
label_13a9fc:
    // 0x13a9fc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x13a9fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_13aa00:
    // 0x13aa00: 0xe4601b50  swc1        $f0, 0x1B50($v1)
    ctx->pc = 0x13aa00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 6992), bits); }
label_13aa04:
    // 0x13aa04: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x13aa04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_13aa08:
    // 0x13aa08: 0xc4611b54  lwc1        $f1, 0x1B54($v1)
    ctx->pc = 0x13aa08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6996)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_13aa0c:
    // 0x13aa0c: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x13aa0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
label_13aa10:
    // 0x13aa10: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x13aa10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
label_13aa14:
    // 0x13aa14: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13aa14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_13aa18:
    // 0x13aa18: 0x0  nop
    ctx->pc = 0x13aa18u;
    // NOP
label_13aa1c:
    // 0x13aa1c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x13aa1cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_13aa20:
    // 0x13aa20: 0xe4601b54  swc1        $f0, 0x1B54($v1)
    ctx->pc = 0x13aa20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 6996), bits); }
label_13aa24:
    // 0x13aa24: 0x10000011  b           . + 4 + (0x11 << 2)
label_13aa28:
    if (ctx->pc == 0x13AA28u) {
        ctx->pc = 0x13AA2Cu;
        goto label_13aa2c;
    }
    ctx->pc = 0x13AA24u;
    {
        const bool branch_taken_0x13aa24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13aa24) {
            ctx->pc = 0x13AA6Cu;
            goto label_13aa6c;
        }
    }
    ctx->pc = 0x13AA2Cu;
label_13aa2c:
    // 0x13aa2c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x13aa2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_13aa30:
    // 0x13aa30: 0xc4611b50  lwc1        $f1, 0x1B50($v1)
    ctx->pc = 0x13aa30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_13aa34:
    // 0x13aa34: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x13aa34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
label_13aa38:
    // 0x13aa38: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x13aa38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
label_13aa3c:
    // 0x13aa3c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13aa3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_13aa40:
    // 0x13aa40: 0x0  nop
    ctx->pc = 0x13aa40u;
    // NOP
label_13aa44:
    // 0x13aa44: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x13aa44u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_13aa48:
    // 0x13aa48: 0xe4601b50  swc1        $f0, 0x1B50($v1)
    ctx->pc = 0x13aa48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 6992), bits); }
label_13aa4c:
    // 0x13aa4c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x13aa4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_13aa50:
    // 0x13aa50: 0xc4611b54  lwc1        $f1, 0x1B54($v1)
    ctx->pc = 0x13aa50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6996)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_13aa54:
    // 0x13aa54: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x13aa54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
label_13aa58:
    // 0x13aa58: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x13aa58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
label_13aa5c:
    // 0x13aa5c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13aa5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_13aa60:
    // 0x13aa60: 0x0  nop
    ctx->pc = 0x13aa60u;
    // NOP
label_13aa64:
    // 0x13aa64: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x13aa64u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_13aa68:
    // 0x13aa68: 0xe4601b54  swc1        $f0, 0x1B54($v1)
    ctx->pc = 0x13aa68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 6996), bits); }
label_13aa6c:
    // 0x13aa6c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x13aa6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_13aa70:
    // 0x13aa70: 0xc4411b50  lwc1        $f1, 0x1B50($v0)
    ctx->pc = 0x13aa70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_13aa74:
    // 0x13aa74: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x13aa74u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_13aa78:
    // 0x13aa78: 0x0  nop
    ctx->pc = 0x13aa78u;
    // NOP
label_13aa7c:
    // 0x13aa7c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x13aa7cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_13aa80:
    // 0x13aa80: 0x0  nop
    ctx->pc = 0x13aa80u;
    // NOP
label_13aa84:
    // 0x13aa84: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_13aa88:
    if (ctx->pc == 0x13AA88u) {
        ctx->pc = 0x13AA8Cu;
        goto label_13aa8c;
    }
    ctx->pc = 0x13AA84u;
    {
        const bool branch_taken_0x13aa84 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x13aa84) {
            ctx->pc = 0x13AA98u;
            goto label_13aa98;
        }
    }
    ctx->pc = 0x13AA8Cu;
label_13aa8c:
    // 0x13aa8c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x13aa8cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_13aa90:
    // 0x13aa90: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x13aa90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_13aa94:
    // 0x13aa94: 0xe4401b50  swc1        $f0, 0x1B50($v0)
    ctx->pc = 0x13aa94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 6992), bits); }
label_13aa98:
    // 0x13aa98: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x13aa98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_13aa9c:
    // 0x13aa9c: 0xc4411b54  lwc1        $f1, 0x1B54($v0)
    ctx->pc = 0x13aa9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6996)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_13aaa0:
    // 0x13aaa0: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x13aaa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
label_13aaa4:
    // 0x13aaa4: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x13aaa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_13aaa8:
    // 0x13aaa8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13aaa8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_13aaac:
    // 0x13aaac: 0x0  nop
    ctx->pc = 0x13aaacu;
    // NOP
label_13aab0:
    // 0x13aab0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x13aab0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_13aab4:
    // 0x13aab4: 0x0  nop
    ctx->pc = 0x13aab4u;
    // NOP
label_13aab8:
    // 0x13aab8: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_13aabc:
    if (ctx->pc == 0x13AABCu) {
        ctx->pc = 0x13AAC0u;
        goto label_13aac0;
    }
    ctx->pc = 0x13AAB8u;
    {
        const bool branch_taken_0x13aab8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x13aab8) {
            ctx->pc = 0x13AAD4u;
            goto label_13aad4;
        }
    }
    ctx->pc = 0x13AAC0u;
label_13aac0:
    // 0x13aac0: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x13aac0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
label_13aac4:
    // 0x13aac4: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x13aac4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_13aac8:
    // 0x13aac8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13aac8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_13aacc:
    // 0x13aacc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x13aaccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_13aad0:
    // 0x13aad0: 0xe4401b54  swc1        $f0, 0x1B54($v0)
    ctx->pc = 0x13aad0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 6996), bits); }
label_13aad4:
    // 0x13aad4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x13aad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_13aad8:
    // 0x13aad8: 0xc4411b50  lwc1        $f1, 0x1B50($v0)
    ctx->pc = 0x13aad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_13aadc:
    // 0x13aadc: 0x3c02be4c  lui         $v0, 0xBE4C
    ctx->pc = 0x13aadcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48716 << 16));
label_13aae0:
    // 0x13aae0: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x13aae0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_13aae4:
    // 0x13aae4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13aae4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_13aae8:
    // 0x13aae8: 0x0  nop
    ctx->pc = 0x13aae8u;
    // NOP
label_13aaec:
    // 0x13aaec: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x13aaecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_13aaf0:
    // 0x13aaf0: 0x0  nop
    ctx->pc = 0x13aaf0u;
    // NOP
label_13aaf4:
    // 0x13aaf4: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_13aaf8:
    if (ctx->pc == 0x13AAF8u) {
        ctx->pc = 0x13AAFCu;
        goto label_13aafc;
    }
    ctx->pc = 0x13AAF4u;
    {
        const bool branch_taken_0x13aaf4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13aaf4) {
            ctx->pc = 0x13AB10u;
            goto label_13ab10;
        }
    }
    ctx->pc = 0x13AAFCu;
label_13aafc:
    // 0x13aafc: 0x3c02be4c  lui         $v0, 0xBE4C
    ctx->pc = 0x13aafcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48716 << 16));
label_13ab00:
    // 0x13ab00: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x13ab00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_13ab04:
    // 0x13ab04: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13ab04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_13ab08:
    // 0x13ab08: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x13ab08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_13ab0c:
    // 0x13ab0c: 0xe4401b50  swc1        $f0, 0x1B50($v0)
    ctx->pc = 0x13ab0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 6992), bits); }
label_13ab10:
    // 0x13ab10: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x13ab10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_13ab14:
    // 0x13ab14: 0xc4411b54  lwc1        $f1, 0x1B54($v0)
    ctx->pc = 0x13ab14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6996)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_13ab18:
    // 0x13ab18: 0x3c02be4c  lui         $v0, 0xBE4C
    ctx->pc = 0x13ab18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48716 << 16));
label_13ab1c:
    // 0x13ab1c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x13ab1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_13ab20:
    // 0x13ab20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13ab20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_13ab24:
    // 0x13ab24: 0x0  nop
    ctx->pc = 0x13ab24u;
    // NOP
label_13ab28:
    // 0x13ab28: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x13ab28u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_13ab2c:
    // 0x13ab2c: 0x0  nop
    ctx->pc = 0x13ab2cu;
    // NOP
label_13ab30:
    // 0x13ab30: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_13ab34:
    if (ctx->pc == 0x13AB34u) {
        ctx->pc = 0x13AB38u;
        goto label_13ab38;
    }
    ctx->pc = 0x13AB30u;
    {
        const bool branch_taken_0x13ab30 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13ab30) {
            ctx->pc = 0x13AB4Cu;
            goto label_13ab4c;
        }
    }
    ctx->pc = 0x13AB38u;
label_13ab38:
    // 0x13ab38: 0x3c02be4c  lui         $v0, 0xBE4C
    ctx->pc = 0x13ab38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48716 << 16));
label_13ab3c:
    // 0x13ab3c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x13ab3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_13ab40:
    // 0x13ab40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13ab40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_13ab44:
    // 0x13ab44: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x13ab44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_13ab48:
    // 0x13ab48: 0xe4401b54  swc1        $f0, 0x1B54($v0)
    ctx->pc = 0x13ab48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 6996), bits); }
label_13ab4c:
    // 0x13ab4c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x13ab4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_13ab50:
    // 0x13ab50: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x13ab50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_13ab54:
    // 0x13ab54: 0xc46c1b50  lwc1        $f12, 0x1B50($v1)
    ctx->pc = 0x13ab54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_13ab58:
    // 0x13ab58: 0xc44d1b54  lwc1        $f13, 0x1B54($v0)
    ctx->pc = 0x13ab58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6996)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_13ab5c:
    // 0x13ab5c: 0xc04ec98  jal         func_13B260
label_13ab60:
    if (ctx->pc == 0x13AB60u) {
        ctx->pc = 0x13AB64u;
        goto label_13ab64;
    }
    ctx->pc = 0x13AB5Cu;
    SET_GPR_U32(ctx, 31, 0x13AB64u);
    ctx->pc = 0x13B260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13B260u, 0x13AB5Cu, 0x13AB64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13AB64u;
label_13ab64:
    // 0x13ab64: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x13ab64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_13ab68:
    // 0x13ab68: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x13ab68u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_13ab6c:
    // 0x13ab6c: 0xc096b40  jal         func_25AD00
label_13ab70:
    if (ctx->pc == 0x13AB70u) {
        ctx->pc = 0x13AB74u;
        goto label_13ab74;
    }
    ctx->pc = 0x13AB6Cu;
    SET_GPR_U32(ctx, 31, 0x13AB74u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x13AB6Cu, 0x13AB74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13AB74u;
label_13ab74:
    // 0x13ab74: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x13ab74u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_13ab78:
    // 0x13ab78: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x13ab78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_13ab7c:
    // 0x13ab7c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x13ab7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_13ab80:
    // 0x13ab80: 0xc0573d8  jal         func_15CF60
label_13ab84:
    if (ctx->pc == 0x13AB84u) {
        ctx->pc = 0x13AB88u;
        goto label_13ab88;
    }
    ctx->pc = 0x13AB80u;
    SET_GPR_U32(ctx, 31, 0x13AB88u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x13AB80u, 0x13AB88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13AB88u;
label_13ab88:
    // 0x13ab88: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x13ab88u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_13ab8c:
    // 0x13ab8c: 0xc097530  jal         func_25D4C0
label_13ab90:
    if (ctx->pc == 0x13AB90u) {
        ctx->pc = 0x13AB94u;
        goto label_13ab94;
    }
    ctx->pc = 0x13AB8Cu;
    SET_GPR_U32(ctx, 31, 0x13AB94u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x13AB8Cu, 0x13AB94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13AB94u;
label_13ab94:
    // 0x13ab94: 0xc0576b8  jal         func_15DAE0
label_13ab98:
    if (ctx->pc == 0x13AB98u) {
        ctx->pc = 0x13AB9Cu;
        goto label_13ab9c;
    }
    ctx->pc = 0x13AB94u;
    SET_GPR_U32(ctx, 31, 0x13AB9Cu);
    ctx->pc = 0x15DAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15DAE0u, 0x13AB94u, 0x13AB9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13AB9Cu;
label_13ab9c:
    // 0x13ab9c: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x13ab9cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_13aba0:
    // 0x13aba0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x13aba0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_13aba4:
    // 0x13aba4: 0x8c221a98  lw          $v0, 0x1A98($at)
    ctx->pc = 0x13aba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6808)));
label_13aba8:
    // 0x13aba8: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x13aba8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
label_13abac:
    // 0x13abac: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_13abb0:
    if (ctx->pc == 0x13ABB0u) {
        ctx->pc = 0x13ABB4u;
        goto label_13abb4;
    }
    ctx->pc = 0x13ABACu;
    {
        const bool branch_taken_0x13abac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13abac) {
            ctx->pc = 0x13ABB8u;
            goto label_13abb8;
        }
    }
    ctx->pc = 0x13ABB4u;
label_13abb4:
    // 0x13abb4: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x13abb4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_13abb8:
    // 0x13abb8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x13abb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_13abbc:
    // 0x13abbc: 0x1202000e  beq         $s0, $v0, . + 4 + (0xE << 2)
label_13abc0:
    if (ctx->pc == 0x13ABC0u) {
        ctx->pc = 0x13ABC4u;
        goto label_13abc4;
    }
    ctx->pc = 0x13ABBCu;
    {
        const bool branch_taken_0x13abbc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x13abbc) {
            ctx->pc = 0x13ABF8u;
            goto label_13abf8;
        }
    }
    ctx->pc = 0x13ABC4u;
label_13abc4:
    // 0x13abc4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13abc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13abc8:
    // 0x13abc8: 0x12020005  beq         $s0, $v0, . + 4 + (0x5 << 2)
label_13abcc:
    if (ctx->pc == 0x13ABCCu) {
        ctx->pc = 0x13ABD0u;
        goto label_13abd0;
    }
    ctx->pc = 0x13ABC8u;
    {
        const bool branch_taken_0x13abc8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x13abc8) {
            ctx->pc = 0x13ABE0u;
            goto label_13abe0;
        }
    }
    ctx->pc = 0x13ABD0u;
label_13abd0:
    // 0x13abd0: 0x12000023  beqz        $s0, . + 4 + (0x23 << 2)
label_13abd4:
    if (ctx->pc == 0x13ABD4u) {
        ctx->pc = 0x13ABD8u;
        goto label_13abd8;
    }
    ctx->pc = 0x13ABD0u;
    {
        const bool branch_taken_0x13abd0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x13abd0) {
            ctx->pc = 0x13AC60u;
            goto label_13ac60;
        }
    }
    ctx->pc = 0x13ABD8u;
label_13abd8:
    // 0x13abd8: 0x10000021  b           . + 4 + (0x21 << 2)
label_13abdc:
    if (ctx->pc == 0x13ABDCu) {
        ctx->pc = 0x13ABE0u;
        goto label_13abe0;
    }
    ctx->pc = 0x13ABD8u;
    {
        const bool branch_taken_0x13abd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13abd8) {
            ctx->pc = 0x13AC60u;
            goto label_13ac60;
        }
    }
    ctx->pc = 0x13ABE0u;
label_13abe0:
    // 0x13abe0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x13abe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_13abe4:
    // 0x13abe4: 0x8c621b68  lw          $v0, 0x1B68($v1)
    ctx->pc = 0x13abe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7016)));
label_13abe8:
    // 0x13abe8: 0x24440002  addiu       $a0, $v0, 0x2
    ctx->pc = 0x13abe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
label_13abec:
    // 0x13abec: 0xac641b68  sw          $a0, 0x1B68($v1)
    ctx->pc = 0x13abecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7016), GPR_U32(ctx, 4));
label_13abf0:
    // 0x13abf0: 0x1000001b  b           . + 4 + (0x1B << 2)
label_13abf4:
    if (ctx->pc == 0x13ABF4u) {
        ctx->pc = 0x13ABF8u;
        goto label_13abf8;
    }
    ctx->pc = 0x13ABF0u;
    {
        const bool branch_taken_0x13abf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13abf0) {
            ctx->pc = 0x13AC60u;
            goto label_13ac60;
        }
    }
    ctx->pc = 0x13ABF8u;
label_13abf8:
    // 0x13abf8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x13abf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13abfc:
    // 0x13abfc: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x13abfcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_13ac00:
    // 0x13ac00: 0xa0c50000  sb          $a1, 0x0($a2)
    ctx->pc = 0x13ac00u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 5));
label_13ac04:
    // 0x13ac04: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x13ac04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_13ac08:
    // 0x13ac08: 0x8fa80048  lw          $t0, 0x48($sp)
    ctx->pc = 0x13ac08u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_13ac0c:
    // 0x13ac0c: 0xa1070001  sb          $a3, 0x1($t0)
    ctx->pc = 0x13ac0cu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 1), (uint8_t)GPR_U32(ctx, 7));
label_13ac10:
    // 0x13ac10: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x13ac10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_13ac14:
    // 0x13ac14: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x13ac14u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
label_13ac18:
    // 0x13ac18: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x13ac18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_13ac1c:
    // 0x13ac1c: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x13ac1cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
label_13ac20:
    // 0x13ac20: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x13ac20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_13ac24:
    // 0x13ac24: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x13ac24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_13ac28:
    // 0x13ac28: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x13ac28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
label_13ac2c:
    // 0x13ac2c: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x13ac2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
label_13ac30:
    // 0x13ac30: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x13ac30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_13ac34:
    // 0x13ac34: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x13ac34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_13ac38:
    // 0x13ac38: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x13ac38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_13ac3c:
    // 0x13ac3c: 0x8c620130  lw          $v0, 0x130($v1)
    ctx->pc = 0x13ac3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
label_13ac40:
    // 0x13ac40: 0x24040517  addiu       $a0, $zero, 0x517
    ctx->pc = 0x13ac40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1303));
label_13ac44:
    // 0x13ac44: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x13ac44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
label_13ac48:
    // 0x13ac48: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x13ac48u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_13ac4c:
    // 0x13ac4c: 0xc067b18  jal         func_19EC60
label_13ac50:
    if (ctx->pc == 0x13AC50u) {
        ctx->pc = 0x13AC54u;
        goto label_13ac54;
    }
    ctx->pc = 0x13AC4Cu;
    SET_GPR_U32(ctx, 31, 0x13AC54u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x13AC4Cu, 0x13AC54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13AC54u;
label_13ac54:
    // 0x13ac54: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x13ac54u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_13ac58:
    // 0x13ac58: 0x10000005  b           . + 4 + (0x5 << 2)
label_13ac5c:
    if (ctx->pc == 0x13AC5Cu) {
        ctx->pc = 0x13AC60u;
        goto label_13ac60;
    }
    ctx->pc = 0x13AC58u;
    {
        const bool branch_taken_0x13ac58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13ac58) {
            ctx->pc = 0x13AC70u;
            goto label_13ac70;
        }
    }
    ctx->pc = 0x13AC60u;
label_13ac60:
    // 0x13ac60: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x13ac60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_13ac64:
    // 0x13ac64: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x13ac64u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_13ac68:
    // 0x13ac68: 0xc04eb24  jal         func_13AC90
label_13ac6c:
    if (ctx->pc == 0x13AC6Cu) {
        ctx->pc = 0x13AC70u;
        goto label_13ac70;
    }
    ctx->pc = 0x13AC68u;
    SET_GPR_U32(ctx, 31, 0x13AC70u);
    ctx->pc = 0x13AC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13AC90u, 0x13AC68u, 0x13AC70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13AC70u;
label_13ac70:
    // 0x13ac70: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x13ac70u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_13ac74:
    // 0x13ac74: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13ac74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_13ac78:
    // 0x13ac78: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x13ac78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_13ac7c:
    // 0x13ac7c: 0x3e00008  jr          $ra
label_13ac80:
    if (ctx->pc == 0x13AC80u) {
        ctx->pc = 0x13AC84u;
        goto label_fallthrough_0x13ac7c;
    }
    ctx->pc = 0x13AC7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13AC7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x13ac7c:
    ctx->pc = 0x13AC84u;
}
