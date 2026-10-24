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

// Function: Em0c_R1_mv0c
// Address: 0x22a140 - 0x22aa94
void Em0c_R1_mv0c_0x22a140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0c_R1_mv0c_0x22a140");
#endif

    switch (ctx->pc) {
        case 0x22a140u: goto label_22a140;
        case 0x22a144u: goto label_22a144;
        case 0x22a148u: goto label_22a148;
        case 0x22a14cu: goto label_22a14c;
        case 0x22a150u: goto label_22a150;
        case 0x22a154u: goto label_22a154;
        case 0x22a158u: goto label_22a158;
        case 0x22a15cu: goto label_22a15c;
        case 0x22a160u: goto label_22a160;
        case 0x22a164u: goto label_22a164;
        case 0x22a168u: goto label_22a168;
        case 0x22a16cu: goto label_22a16c;
        case 0x22a170u: goto label_22a170;
        case 0x22a174u: goto label_22a174;
        case 0x22a178u: goto label_22a178;
        case 0x22a17cu: goto label_22a17c;
        case 0x22a180u: goto label_22a180;
        case 0x22a184u: goto label_22a184;
        case 0x22a188u: goto label_22a188;
        case 0x22a18cu: goto label_22a18c;
        case 0x22a190u: goto label_22a190;
        case 0x22a194u: goto label_22a194;
        case 0x22a198u: goto label_22a198;
        case 0x22a19cu: goto label_22a19c;
        case 0x22a1a0u: goto label_22a1a0;
        case 0x22a1a4u: goto label_22a1a4;
        case 0x22a1a8u: goto label_22a1a8;
        case 0x22a1acu: goto label_22a1ac;
        case 0x22a1b0u: goto label_22a1b0;
        case 0x22a1b4u: goto label_22a1b4;
        case 0x22a1b8u: goto label_22a1b8;
        case 0x22a1bcu: goto label_22a1bc;
        case 0x22a1c0u: goto label_22a1c0;
        case 0x22a1c4u: goto label_22a1c4;
        case 0x22a1c8u: goto label_22a1c8;
        case 0x22a1ccu: goto label_22a1cc;
        case 0x22a1d0u: goto label_22a1d0;
        case 0x22a1d4u: goto label_22a1d4;
        case 0x22a1d8u: goto label_22a1d8;
        case 0x22a1dcu: goto label_22a1dc;
        case 0x22a1e0u: goto label_22a1e0;
        case 0x22a1e4u: goto label_22a1e4;
        case 0x22a1e8u: goto label_22a1e8;
        case 0x22a1ecu: goto label_22a1ec;
        case 0x22a1f0u: goto label_22a1f0;
        case 0x22a1f4u: goto label_22a1f4;
        case 0x22a1f8u: goto label_22a1f8;
        case 0x22a1fcu: goto label_22a1fc;
        case 0x22a200u: goto label_22a200;
        case 0x22a204u: goto label_22a204;
        case 0x22a208u: goto label_22a208;
        case 0x22a20cu: goto label_22a20c;
        case 0x22a210u: goto label_22a210;
        case 0x22a214u: goto label_22a214;
        case 0x22a218u: goto label_22a218;
        case 0x22a21cu: goto label_22a21c;
        case 0x22a220u: goto label_22a220;
        case 0x22a224u: goto label_22a224;
        case 0x22a228u: goto label_22a228;
        case 0x22a22cu: goto label_22a22c;
        case 0x22a230u: goto label_22a230;
        case 0x22a234u: goto label_22a234;
        case 0x22a238u: goto label_22a238;
        case 0x22a23cu: goto label_22a23c;
        case 0x22a240u: goto label_22a240;
        case 0x22a244u: goto label_22a244;
        case 0x22a248u: goto label_22a248;
        case 0x22a24cu: goto label_22a24c;
        case 0x22a250u: goto label_22a250;
        case 0x22a254u: goto label_22a254;
        case 0x22a258u: goto label_22a258;
        case 0x22a25cu: goto label_22a25c;
        case 0x22a260u: goto label_22a260;
        case 0x22a264u: goto label_22a264;
        case 0x22a268u: goto label_22a268;
        case 0x22a26cu: goto label_22a26c;
        case 0x22a270u: goto label_22a270;
        case 0x22a274u: goto label_22a274;
        case 0x22a278u: goto label_22a278;
        case 0x22a27cu: goto label_22a27c;
        case 0x22a280u: goto label_22a280;
        case 0x22a284u: goto label_22a284;
        case 0x22a288u: goto label_22a288;
        case 0x22a28cu: goto label_22a28c;
        case 0x22a290u: goto label_22a290;
        case 0x22a294u: goto label_22a294;
        case 0x22a298u: goto label_22a298;
        case 0x22a29cu: goto label_22a29c;
        case 0x22a2a0u: goto label_22a2a0;
        case 0x22a2a4u: goto label_22a2a4;
        case 0x22a2a8u: goto label_22a2a8;
        case 0x22a2acu: goto label_22a2ac;
        case 0x22a2b0u: goto label_22a2b0;
        case 0x22a2b4u: goto label_22a2b4;
        case 0x22a2b8u: goto label_22a2b8;
        case 0x22a2bcu: goto label_22a2bc;
        case 0x22a2c0u: goto label_22a2c0;
        case 0x22a2c4u: goto label_22a2c4;
        case 0x22a2c8u: goto label_22a2c8;
        case 0x22a2ccu: goto label_22a2cc;
        case 0x22a2d0u: goto label_22a2d0;
        case 0x22a2d4u: goto label_22a2d4;
        case 0x22a2d8u: goto label_22a2d8;
        case 0x22a2dcu: goto label_22a2dc;
        case 0x22a2e0u: goto label_22a2e0;
        case 0x22a2e4u: goto label_22a2e4;
        case 0x22a2e8u: goto label_22a2e8;
        case 0x22a2ecu: goto label_22a2ec;
        case 0x22a2f0u: goto label_22a2f0;
        case 0x22a2f4u: goto label_22a2f4;
        case 0x22a2f8u: goto label_22a2f8;
        case 0x22a2fcu: goto label_22a2fc;
        case 0x22a300u: goto label_22a300;
        case 0x22a304u: goto label_22a304;
        case 0x22a308u: goto label_22a308;
        case 0x22a30cu: goto label_22a30c;
        case 0x22a310u: goto label_22a310;
        case 0x22a314u: goto label_22a314;
        case 0x22a318u: goto label_22a318;
        case 0x22a31cu: goto label_22a31c;
        case 0x22a320u: goto label_22a320;
        case 0x22a324u: goto label_22a324;
        case 0x22a328u: goto label_22a328;
        case 0x22a32cu: goto label_22a32c;
        case 0x22a330u: goto label_22a330;
        case 0x22a334u: goto label_22a334;
        case 0x22a338u: goto label_22a338;
        case 0x22a33cu: goto label_22a33c;
        case 0x22a340u: goto label_22a340;
        case 0x22a344u: goto label_22a344;
        case 0x22a348u: goto label_22a348;
        case 0x22a34cu: goto label_22a34c;
        case 0x22a350u: goto label_22a350;
        case 0x22a354u: goto label_22a354;
        case 0x22a358u: goto label_22a358;
        case 0x22a35cu: goto label_22a35c;
        case 0x22a360u: goto label_22a360;
        case 0x22a364u: goto label_22a364;
        case 0x22a368u: goto label_22a368;
        case 0x22a36cu: goto label_22a36c;
        case 0x22a370u: goto label_22a370;
        case 0x22a374u: goto label_22a374;
        case 0x22a378u: goto label_22a378;
        case 0x22a37cu: goto label_22a37c;
        case 0x22a380u: goto label_22a380;
        case 0x22a384u: goto label_22a384;
        case 0x22a388u: goto label_22a388;
        case 0x22a38cu: goto label_22a38c;
        case 0x22a390u: goto label_22a390;
        case 0x22a394u: goto label_22a394;
        case 0x22a398u: goto label_22a398;
        case 0x22a39cu: goto label_22a39c;
        case 0x22a3a0u: goto label_22a3a0;
        case 0x22a3a4u: goto label_22a3a4;
        case 0x22a3a8u: goto label_22a3a8;
        case 0x22a3acu: goto label_22a3ac;
        case 0x22a3b0u: goto label_22a3b0;
        case 0x22a3b4u: goto label_22a3b4;
        case 0x22a3b8u: goto label_22a3b8;
        case 0x22a3bcu: goto label_22a3bc;
        case 0x22a3c0u: goto label_22a3c0;
        case 0x22a3c4u: goto label_22a3c4;
        case 0x22a3c8u: goto label_22a3c8;
        case 0x22a3ccu: goto label_22a3cc;
        case 0x22a3d0u: goto label_22a3d0;
        case 0x22a3d4u: goto label_22a3d4;
        case 0x22a3d8u: goto label_22a3d8;
        case 0x22a3dcu: goto label_22a3dc;
        case 0x22a3e0u: goto label_22a3e0;
        case 0x22a3e4u: goto label_22a3e4;
        case 0x22a3e8u: goto label_22a3e8;
        case 0x22a3ecu: goto label_22a3ec;
        case 0x22a3f0u: goto label_22a3f0;
        case 0x22a3f4u: goto label_22a3f4;
        case 0x22a3f8u: goto label_22a3f8;
        case 0x22a3fcu: goto label_22a3fc;
        case 0x22a400u: goto label_22a400;
        case 0x22a404u: goto label_22a404;
        case 0x22a408u: goto label_22a408;
        case 0x22a40cu: goto label_22a40c;
        case 0x22a410u: goto label_22a410;
        case 0x22a414u: goto label_22a414;
        case 0x22a418u: goto label_22a418;
        case 0x22a41cu: goto label_22a41c;
        case 0x22a420u: goto label_22a420;
        case 0x22a424u: goto label_22a424;
        case 0x22a428u: goto label_22a428;
        case 0x22a42cu: goto label_22a42c;
        case 0x22a430u: goto label_22a430;
        case 0x22a434u: goto label_22a434;
        case 0x22a438u: goto label_22a438;
        case 0x22a43cu: goto label_22a43c;
        case 0x22a440u: goto label_22a440;
        case 0x22a444u: goto label_22a444;
        case 0x22a448u: goto label_22a448;
        case 0x22a44cu: goto label_22a44c;
        case 0x22a450u: goto label_22a450;
        case 0x22a454u: goto label_22a454;
        case 0x22a458u: goto label_22a458;
        case 0x22a45cu: goto label_22a45c;
        case 0x22a460u: goto label_22a460;
        case 0x22a464u: goto label_22a464;
        case 0x22a468u: goto label_22a468;
        case 0x22a46cu: goto label_22a46c;
        case 0x22a470u: goto label_22a470;
        case 0x22a474u: goto label_22a474;
        case 0x22a478u: goto label_22a478;
        case 0x22a47cu: goto label_22a47c;
        case 0x22a480u: goto label_22a480;
        case 0x22a484u: goto label_22a484;
        case 0x22a488u: goto label_22a488;
        case 0x22a48cu: goto label_22a48c;
        case 0x22a490u: goto label_22a490;
        case 0x22a494u: goto label_22a494;
        case 0x22a498u: goto label_22a498;
        case 0x22a49cu: goto label_22a49c;
        case 0x22a4a0u: goto label_22a4a0;
        case 0x22a4a4u: goto label_22a4a4;
        case 0x22a4a8u: goto label_22a4a8;
        case 0x22a4acu: goto label_22a4ac;
        case 0x22a4b0u: goto label_22a4b0;
        case 0x22a4b4u: goto label_22a4b4;
        case 0x22a4b8u: goto label_22a4b8;
        case 0x22a4bcu: goto label_22a4bc;
        case 0x22a4c0u: goto label_22a4c0;
        case 0x22a4c4u: goto label_22a4c4;
        case 0x22a4c8u: goto label_22a4c8;
        case 0x22a4ccu: goto label_22a4cc;
        case 0x22a4d0u: goto label_22a4d0;
        case 0x22a4d4u: goto label_22a4d4;
        case 0x22a4d8u: goto label_22a4d8;
        case 0x22a4dcu: goto label_22a4dc;
        case 0x22a4e0u: goto label_22a4e0;
        case 0x22a4e4u: goto label_22a4e4;
        case 0x22a4e8u: goto label_22a4e8;
        case 0x22a4ecu: goto label_22a4ec;
        case 0x22a4f0u: goto label_22a4f0;
        case 0x22a4f4u: goto label_22a4f4;
        case 0x22a4f8u: goto label_22a4f8;
        case 0x22a4fcu: goto label_22a4fc;
        case 0x22a500u: goto label_22a500;
        case 0x22a504u: goto label_22a504;
        case 0x22a508u: goto label_22a508;
        case 0x22a50cu: goto label_22a50c;
        case 0x22a510u: goto label_22a510;
        case 0x22a514u: goto label_22a514;
        case 0x22a518u: goto label_22a518;
        case 0x22a51cu: goto label_22a51c;
        case 0x22a520u: goto label_22a520;
        case 0x22a524u: goto label_22a524;
        case 0x22a528u: goto label_22a528;
        case 0x22a52cu: goto label_22a52c;
        case 0x22a530u: goto label_22a530;
        case 0x22a534u: goto label_22a534;
        case 0x22a538u: goto label_22a538;
        case 0x22a53cu: goto label_22a53c;
        case 0x22a540u: goto label_22a540;
        case 0x22a544u: goto label_22a544;
        case 0x22a548u: goto label_22a548;
        case 0x22a54cu: goto label_22a54c;
        case 0x22a550u: goto label_22a550;
        case 0x22a554u: goto label_22a554;
        case 0x22a558u: goto label_22a558;
        case 0x22a55cu: goto label_22a55c;
        case 0x22a560u: goto label_22a560;
        case 0x22a564u: goto label_22a564;
        case 0x22a568u: goto label_22a568;
        case 0x22a56cu: goto label_22a56c;
        case 0x22a570u: goto label_22a570;
        case 0x22a574u: goto label_22a574;
        case 0x22a578u: goto label_22a578;
        case 0x22a57cu: goto label_22a57c;
        case 0x22a580u: goto label_22a580;
        case 0x22a584u: goto label_22a584;
        case 0x22a588u: goto label_22a588;
        case 0x22a58cu: goto label_22a58c;
        case 0x22a590u: goto label_22a590;
        case 0x22a594u: goto label_22a594;
        case 0x22a598u: goto label_22a598;
        case 0x22a59cu: goto label_22a59c;
        case 0x22a5a0u: goto label_22a5a0;
        case 0x22a5a4u: goto label_22a5a4;
        case 0x22a5a8u: goto label_22a5a8;
        case 0x22a5acu: goto label_22a5ac;
        case 0x22a5b0u: goto label_22a5b0;
        case 0x22a5b4u: goto label_22a5b4;
        case 0x22a5b8u: goto label_22a5b8;
        case 0x22a5bcu: goto label_22a5bc;
        case 0x22a5c0u: goto label_22a5c0;
        case 0x22a5c4u: goto label_22a5c4;
        case 0x22a5c8u: goto label_22a5c8;
        case 0x22a5ccu: goto label_22a5cc;
        case 0x22a5d0u: goto label_22a5d0;
        case 0x22a5d4u: goto label_22a5d4;
        case 0x22a5d8u: goto label_22a5d8;
        case 0x22a5dcu: goto label_22a5dc;
        case 0x22a5e0u: goto label_22a5e0;
        case 0x22a5e4u: goto label_22a5e4;
        case 0x22a5e8u: goto label_22a5e8;
        case 0x22a5ecu: goto label_22a5ec;
        case 0x22a5f0u: goto label_22a5f0;
        case 0x22a5f4u: goto label_22a5f4;
        case 0x22a5f8u: goto label_22a5f8;
        case 0x22a5fcu: goto label_22a5fc;
        case 0x22a600u: goto label_22a600;
        case 0x22a604u: goto label_22a604;
        case 0x22a608u: goto label_22a608;
        case 0x22a60cu: goto label_22a60c;
        case 0x22a610u: goto label_22a610;
        case 0x22a614u: goto label_22a614;
        case 0x22a618u: goto label_22a618;
        case 0x22a61cu: goto label_22a61c;
        case 0x22a620u: goto label_22a620;
        case 0x22a624u: goto label_22a624;
        case 0x22a628u: goto label_22a628;
        case 0x22a62cu: goto label_22a62c;
        case 0x22a630u: goto label_22a630;
        case 0x22a634u: goto label_22a634;
        case 0x22a638u: goto label_22a638;
        case 0x22a63cu: goto label_22a63c;
        case 0x22a640u: goto label_22a640;
        case 0x22a644u: goto label_22a644;
        case 0x22a648u: goto label_22a648;
        case 0x22a64cu: goto label_22a64c;
        case 0x22a650u: goto label_22a650;
        case 0x22a654u: goto label_22a654;
        case 0x22a658u: goto label_22a658;
        case 0x22a65cu: goto label_22a65c;
        case 0x22a660u: goto label_22a660;
        case 0x22a664u: goto label_22a664;
        case 0x22a668u: goto label_22a668;
        case 0x22a66cu: goto label_22a66c;
        case 0x22a670u: goto label_22a670;
        case 0x22a674u: goto label_22a674;
        case 0x22a678u: goto label_22a678;
        case 0x22a67cu: goto label_22a67c;
        case 0x22a680u: goto label_22a680;
        case 0x22a684u: goto label_22a684;
        case 0x22a688u: goto label_22a688;
        case 0x22a68cu: goto label_22a68c;
        case 0x22a690u: goto label_22a690;
        case 0x22a694u: goto label_22a694;
        case 0x22a698u: goto label_22a698;
        case 0x22a69cu: goto label_22a69c;
        case 0x22a6a0u: goto label_22a6a0;
        case 0x22a6a4u: goto label_22a6a4;
        case 0x22a6a8u: goto label_22a6a8;
        case 0x22a6acu: goto label_22a6ac;
        case 0x22a6b0u: goto label_22a6b0;
        case 0x22a6b4u: goto label_22a6b4;
        case 0x22a6b8u: goto label_22a6b8;
        case 0x22a6bcu: goto label_22a6bc;
        case 0x22a6c0u: goto label_22a6c0;
        case 0x22a6c4u: goto label_22a6c4;
        case 0x22a6c8u: goto label_22a6c8;
        case 0x22a6ccu: goto label_22a6cc;
        case 0x22a6d0u: goto label_22a6d0;
        case 0x22a6d4u: goto label_22a6d4;
        case 0x22a6d8u: goto label_22a6d8;
        case 0x22a6dcu: goto label_22a6dc;
        case 0x22a6e0u: goto label_22a6e0;
        case 0x22a6e4u: goto label_22a6e4;
        case 0x22a6e8u: goto label_22a6e8;
        case 0x22a6ecu: goto label_22a6ec;
        case 0x22a6f0u: goto label_22a6f0;
        case 0x22a6f4u: goto label_22a6f4;
        case 0x22a6f8u: goto label_22a6f8;
        case 0x22a6fcu: goto label_22a6fc;
        case 0x22a700u: goto label_22a700;
        case 0x22a704u: goto label_22a704;
        case 0x22a708u: goto label_22a708;
        case 0x22a70cu: goto label_22a70c;
        case 0x22a710u: goto label_22a710;
        case 0x22a714u: goto label_22a714;
        case 0x22a718u: goto label_22a718;
        case 0x22a71cu: goto label_22a71c;
        case 0x22a720u: goto label_22a720;
        case 0x22a724u: goto label_22a724;
        case 0x22a728u: goto label_22a728;
        case 0x22a72cu: goto label_22a72c;
        case 0x22a730u: goto label_22a730;
        case 0x22a734u: goto label_22a734;
        case 0x22a738u: goto label_22a738;
        case 0x22a73cu: goto label_22a73c;
        case 0x22a740u: goto label_22a740;
        case 0x22a744u: goto label_22a744;
        case 0x22a748u: goto label_22a748;
        case 0x22a74cu: goto label_22a74c;
        case 0x22a750u: goto label_22a750;
        case 0x22a754u: goto label_22a754;
        case 0x22a758u: goto label_22a758;
        case 0x22a75cu: goto label_22a75c;
        case 0x22a760u: goto label_22a760;
        case 0x22a764u: goto label_22a764;
        case 0x22a768u: goto label_22a768;
        case 0x22a76cu: goto label_22a76c;
        case 0x22a770u: goto label_22a770;
        case 0x22a774u: goto label_22a774;
        case 0x22a778u: goto label_22a778;
        case 0x22a77cu: goto label_22a77c;
        case 0x22a780u: goto label_22a780;
        case 0x22a784u: goto label_22a784;
        case 0x22a788u: goto label_22a788;
        case 0x22a78cu: goto label_22a78c;
        case 0x22a790u: goto label_22a790;
        case 0x22a794u: goto label_22a794;
        case 0x22a798u: goto label_22a798;
        case 0x22a79cu: goto label_22a79c;
        case 0x22a7a0u: goto label_22a7a0;
        case 0x22a7a4u: goto label_22a7a4;
        case 0x22a7a8u: goto label_22a7a8;
        case 0x22a7acu: goto label_22a7ac;
        case 0x22a7b0u: goto label_22a7b0;
        case 0x22a7b4u: goto label_22a7b4;
        case 0x22a7b8u: goto label_22a7b8;
        case 0x22a7bcu: goto label_22a7bc;
        case 0x22a7c0u: goto label_22a7c0;
        case 0x22a7c4u: goto label_22a7c4;
        case 0x22a7c8u: goto label_22a7c8;
        case 0x22a7ccu: goto label_22a7cc;
        case 0x22a7d0u: goto label_22a7d0;
        case 0x22a7d4u: goto label_22a7d4;
        case 0x22a7d8u: goto label_22a7d8;
        case 0x22a7dcu: goto label_22a7dc;
        case 0x22a7e0u: goto label_22a7e0;
        case 0x22a7e4u: goto label_22a7e4;
        case 0x22a7e8u: goto label_22a7e8;
        case 0x22a7ecu: goto label_22a7ec;
        case 0x22a7f0u: goto label_22a7f0;
        case 0x22a7f4u: goto label_22a7f4;
        case 0x22a7f8u: goto label_22a7f8;
        case 0x22a7fcu: goto label_22a7fc;
        case 0x22a800u: goto label_22a800;
        case 0x22a804u: goto label_22a804;
        case 0x22a808u: goto label_22a808;
        case 0x22a80cu: goto label_22a80c;
        case 0x22a810u: goto label_22a810;
        case 0x22a814u: goto label_22a814;
        case 0x22a818u: goto label_22a818;
        case 0x22a81cu: goto label_22a81c;
        case 0x22a820u: goto label_22a820;
        case 0x22a824u: goto label_22a824;
        case 0x22a828u: goto label_22a828;
        case 0x22a82cu: goto label_22a82c;
        case 0x22a830u: goto label_22a830;
        case 0x22a834u: goto label_22a834;
        case 0x22a838u: goto label_22a838;
        case 0x22a83cu: goto label_22a83c;
        case 0x22a840u: goto label_22a840;
        case 0x22a844u: goto label_22a844;
        case 0x22a848u: goto label_22a848;
        case 0x22a84cu: goto label_22a84c;
        case 0x22a850u: goto label_22a850;
        case 0x22a854u: goto label_22a854;
        case 0x22a858u: goto label_22a858;
        case 0x22a85cu: goto label_22a85c;
        case 0x22a860u: goto label_22a860;
        case 0x22a864u: goto label_22a864;
        case 0x22a868u: goto label_22a868;
        case 0x22a86cu: goto label_22a86c;
        case 0x22a870u: goto label_22a870;
        case 0x22a874u: goto label_22a874;
        case 0x22a878u: goto label_22a878;
        case 0x22a87cu: goto label_22a87c;
        case 0x22a880u: goto label_22a880;
        case 0x22a884u: goto label_22a884;
        case 0x22a888u: goto label_22a888;
        case 0x22a88cu: goto label_22a88c;
        case 0x22a890u: goto label_22a890;
        case 0x22a894u: goto label_22a894;
        case 0x22a898u: goto label_22a898;
        case 0x22a89cu: goto label_22a89c;
        case 0x22a8a0u: goto label_22a8a0;
        case 0x22a8a4u: goto label_22a8a4;
        case 0x22a8a8u: goto label_22a8a8;
        case 0x22a8acu: goto label_22a8ac;
        case 0x22a8b0u: goto label_22a8b0;
        case 0x22a8b4u: goto label_22a8b4;
        case 0x22a8b8u: goto label_22a8b8;
        case 0x22a8bcu: goto label_22a8bc;
        case 0x22a8c0u: goto label_22a8c0;
        case 0x22a8c4u: goto label_22a8c4;
        case 0x22a8c8u: goto label_22a8c8;
        case 0x22a8ccu: goto label_22a8cc;
        case 0x22a8d0u: goto label_22a8d0;
        case 0x22a8d4u: goto label_22a8d4;
        case 0x22a8d8u: goto label_22a8d8;
        case 0x22a8dcu: goto label_22a8dc;
        case 0x22a8e0u: goto label_22a8e0;
        case 0x22a8e4u: goto label_22a8e4;
        case 0x22a8e8u: goto label_22a8e8;
        case 0x22a8ecu: goto label_22a8ec;
        case 0x22a8f0u: goto label_22a8f0;
        case 0x22a8f4u: goto label_22a8f4;
        case 0x22a8f8u: goto label_22a8f8;
        case 0x22a8fcu: goto label_22a8fc;
        case 0x22a900u: goto label_22a900;
        case 0x22a904u: goto label_22a904;
        case 0x22a908u: goto label_22a908;
        case 0x22a90cu: goto label_22a90c;
        case 0x22a910u: goto label_22a910;
        case 0x22a914u: goto label_22a914;
        case 0x22a918u: goto label_22a918;
        case 0x22a91cu: goto label_22a91c;
        case 0x22a920u: goto label_22a920;
        case 0x22a924u: goto label_22a924;
        case 0x22a928u: goto label_22a928;
        case 0x22a92cu: goto label_22a92c;
        case 0x22a930u: goto label_22a930;
        case 0x22a934u: goto label_22a934;
        case 0x22a938u: goto label_22a938;
        case 0x22a93cu: goto label_22a93c;
        case 0x22a940u: goto label_22a940;
        case 0x22a944u: goto label_22a944;
        case 0x22a948u: goto label_22a948;
        case 0x22a94cu: goto label_22a94c;
        case 0x22a950u: goto label_22a950;
        case 0x22a954u: goto label_22a954;
        case 0x22a958u: goto label_22a958;
        case 0x22a95cu: goto label_22a95c;
        case 0x22a960u: goto label_22a960;
        case 0x22a964u: goto label_22a964;
        case 0x22a968u: goto label_22a968;
        case 0x22a96cu: goto label_22a96c;
        case 0x22a970u: goto label_22a970;
        case 0x22a974u: goto label_22a974;
        case 0x22a978u: goto label_22a978;
        case 0x22a97cu: goto label_22a97c;
        case 0x22a980u: goto label_22a980;
        case 0x22a984u: goto label_22a984;
        case 0x22a988u: goto label_22a988;
        case 0x22a98cu: goto label_22a98c;
        case 0x22a990u: goto label_22a990;
        case 0x22a994u: goto label_22a994;
        case 0x22a998u: goto label_22a998;
        case 0x22a99cu: goto label_22a99c;
        case 0x22a9a0u: goto label_22a9a0;
        case 0x22a9a4u: goto label_22a9a4;
        case 0x22a9a8u: goto label_22a9a8;
        case 0x22a9acu: goto label_22a9ac;
        case 0x22a9b0u: goto label_22a9b0;
        case 0x22a9b4u: goto label_22a9b4;
        case 0x22a9b8u: goto label_22a9b8;
        case 0x22a9bcu: goto label_22a9bc;
        case 0x22a9c0u: goto label_22a9c0;
        case 0x22a9c4u: goto label_22a9c4;
        case 0x22a9c8u: goto label_22a9c8;
        case 0x22a9ccu: goto label_22a9cc;
        case 0x22a9d0u: goto label_22a9d0;
        case 0x22a9d4u: goto label_22a9d4;
        case 0x22a9d8u: goto label_22a9d8;
        case 0x22a9dcu: goto label_22a9dc;
        case 0x22a9e0u: goto label_22a9e0;
        case 0x22a9e4u: goto label_22a9e4;
        case 0x22a9e8u: goto label_22a9e8;
        case 0x22a9ecu: goto label_22a9ec;
        case 0x22a9f0u: goto label_22a9f0;
        case 0x22a9f4u: goto label_22a9f4;
        case 0x22a9f8u: goto label_22a9f8;
        case 0x22a9fcu: goto label_22a9fc;
        case 0x22aa00u: goto label_22aa00;
        case 0x22aa04u: goto label_22aa04;
        case 0x22aa08u: goto label_22aa08;
        case 0x22aa0cu: goto label_22aa0c;
        case 0x22aa10u: goto label_22aa10;
        case 0x22aa14u: goto label_22aa14;
        case 0x22aa18u: goto label_22aa18;
        case 0x22aa1cu: goto label_22aa1c;
        case 0x22aa20u: goto label_22aa20;
        case 0x22aa24u: goto label_22aa24;
        case 0x22aa28u: goto label_22aa28;
        case 0x22aa2cu: goto label_22aa2c;
        case 0x22aa30u: goto label_22aa30;
        case 0x22aa34u: goto label_22aa34;
        case 0x22aa38u: goto label_22aa38;
        case 0x22aa3cu: goto label_22aa3c;
        case 0x22aa40u: goto label_22aa40;
        case 0x22aa44u: goto label_22aa44;
        case 0x22aa48u: goto label_22aa48;
        case 0x22aa4cu: goto label_22aa4c;
        case 0x22aa50u: goto label_22aa50;
        case 0x22aa54u: goto label_22aa54;
        case 0x22aa58u: goto label_22aa58;
        case 0x22aa5cu: goto label_22aa5c;
        case 0x22aa60u: goto label_22aa60;
        case 0x22aa64u: goto label_22aa64;
        case 0x22aa68u: goto label_22aa68;
        case 0x22aa6cu: goto label_22aa6c;
        case 0x22aa70u: goto label_22aa70;
        case 0x22aa74u: goto label_22aa74;
        case 0x22aa78u: goto label_22aa78;
        case 0x22aa7cu: goto label_22aa7c;
        case 0x22aa80u: goto label_22aa80;
        case 0x22aa84u: goto label_22aa84;
        case 0x22aa88u: goto label_22aa88;
        case 0x22aa8cu: goto label_22aa8c;
        case 0x22aa90u: goto label_22aa90;
        default: break;
    }

    ctx->pc = 0x22a140u;

label_22a140:
    // 0x22a140: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x22a140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_22a144:
    // 0x22a144: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x22a144u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
label_22a148:
    // 0x22a148: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22a148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_22a14c:
    // 0x22a14c: 0xafa40078  sw          $a0, 0x78($sp)
    ctx->pc = 0x22a14cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 4));
label_22a150:
    // 0x22a150: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x22a150u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_22a154:
    // 0x22a154: 0x24a3dbc0  addiu       $v1, $a1, -0x2440
    ctx->pc = 0x22a154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958016));
label_22a158:
    // 0x22a158: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x22a158u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_22a15c:
    // 0x22a15c: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x22a15cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
label_22a160:
    // 0x22a160: 0x2464ae80  addiu       $a0, $v1, -0x5180
    ctx->pc = 0x22a160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946432));
label_22a164:
    // 0x22a164: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x22a164u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_22a168:
    // 0x22a168: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x22a168u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_22a16c:
    // 0x22a16c: 0x78840010  lq          $a0, 0x10($a0)
    ctx->pc = 0x22a16cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 4), 16)));
label_22a170:
    // 0x22a170: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x22a170u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
label_22a174:
    // 0x22a174: 0x7ca40010  sq          $a0, 0x10($a1)
    ctx->pc = 0x22a174u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), GPR_VEC(ctx, 4));
label_22a178:
    // 0x22a178: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x22a178u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_22a17c:
    // 0x22a17c: 0x90a70002  lbu         $a3, 0x2($a1)
    ctx->pc = 0x22a17cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
label_22a180:
    // 0x22a180: 0x30e500ff  andi        $a1, $a3, 0xFF
    ctx->pc = 0x22a180u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
label_22a184:
    // 0x22a184: 0x2ca10006  sltiu       $at, $a1, 0x6
    ctx->pc = 0x22a184u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_22a188:
    // 0x22a188: 0x1020021c  beqz        $at, . + 4 + (0x21C << 2)
label_22a18c:
    if (ctx->pc == 0x22A18Cu) {
        ctx->pc = 0x22A190u;
        goto label_22a190;
    }
    ctx->pc = 0x22A188u;
    {
        const bool branch_taken_0x22a188 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a188) {
            ctx->pc = 0x22A9FCu;
            goto label_22a9fc;
        }
    }
    ctx->pc = 0x22A190u;
label_22a190:
    // 0x22a190: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x22a190u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_22a194:
    // 0x22a194: 0x24641170  addiu       $a0, $v1, 0x1170
    ctx->pc = 0x22a194u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4464));
label_22a198:
    // 0x22a198: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x22a198u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_22a19c:
    // 0x22a19c: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x22a19cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_22a1a0:
    // 0x22a1a0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x22a1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_22a1a4:
    // 0x22a1a4: 0x600008  jr          $v1
label_22a1a8:
    if (ctx->pc == 0x22A1A8u) {
        ctx->pc = 0x22A1ACu;
        goto label_22a1ac;
    }
    ctx->pc = 0x22A1A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22A1A4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x22A1ACu;
label_22a1ac:
    // 0x22a1ac: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22a1acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_22a1b0:
    // 0x22a1b0: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x22a1b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_22a1b4:
    // 0x22a1b4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x22a1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_22a1b8:
    // 0x22a1b8: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x22a1b8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_22a1bc:
    // 0x22a1bc: 0xc067694  jal         func_19DA50
label_22a1c0:
    if (ctx->pc == 0x22A1C0u) {
        ctx->pc = 0x22A1C4u;
        goto label_22a1c4;
    }
    ctx->pc = 0x22A1BCu;
    SET_GPR_U32(ctx, 31, 0x22A1C4u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x22A1BCu, 0x22A1C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A1C4u;
label_22a1c4:
    // 0x22a1c4: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x22a1c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_22a1c8:
    // 0x22a1c8: 0x30820007  andi        $v0, $a0, 0x7
    ctx->pc = 0x22a1c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)7);
label_22a1cc:
    // 0x22a1cc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x22a1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_22a1d0:
    // 0x22a1d0: 0x5d2821  addu        $a1, $v0, $sp
    ctx->pc = 0x22a1d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_22a1d4:
    // 0x22a1d4: 0xc4a00040  lwc1        $f0, 0x40($a1)
    ctx->pc = 0x22a1d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22a1d8:
    // 0x22a1d8: 0x8fa70078  lw          $a3, 0x78($sp)
    ctx->pc = 0x22a1d8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_22a1dc:
    // 0x22a1dc: 0x24e21330  addiu       $v0, $a3, 0x1330
    ctx->pc = 0x22a1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4912));
label_22a1e0:
    // 0x22a1e0: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x22a1e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
label_22a1e4:
    // 0x22a1e4: 0x3c044120  lui         $a0, 0x4120
    ctx->pc = 0x22a1e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16672 << 16));
label_22a1e8:
    // 0x22a1e8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x22a1e8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22a1ec:
    // 0x22a1ec: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x22a1ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_22a1f0:
    // 0x22a1f0: 0x24a21330  addiu       $v0, $a1, 0x1330
    ctx->pc = 0x22a1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
label_22a1f4:
    // 0x22a1f4: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x22a1f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
label_22a1f8:
    // 0x22a1f8: 0x3c053e4c  lui         $a1, 0x3E4C
    ctx->pc = 0x22a1f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15948 << 16));
label_22a1fc:
    // 0x22a1fc: 0x34a4cccd  ori         $a0, $a1, 0xCCCD
    ctx->pc = 0x22a1fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)52429);
label_22a200:
    // 0x22a200: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x22a200u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22a204:
    // 0x22a204: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22a204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_22a208:
    // 0x22a208: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x22a208u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_22a20c:
    // 0x22a20c: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x22a20cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
label_22a210:
    // 0x22a210: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x22a210u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
label_22a214:
    // 0x22a214: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x22a214u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_22a218:
    // 0x22a218: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22a218u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22a21c:
    // 0x22a21c: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x22a21cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_22a220:
    // 0x22a220: 0x24851330  addiu       $a1, $a0, 0x1330
    ctx->pc = 0x22a220u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
label_22a224:
    // 0x22a224: 0xe4a00024  swc1        $f0, 0x24($a1)
    ctx->pc = 0x22a224u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 36), bits); }
label_22a228:
    // 0x22a228: 0x3c023dc9  lui         $v0, 0x3DC9
    ctx->pc = 0x22a228u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15817 << 16));
label_22a22c:
    // 0x22a22c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x22a22cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_22a230:
    // 0x22a230: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22a230u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22a234:
    // 0x22a234: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22a234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_22a238:
    // 0x22a238: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x22a238u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_22a23c:
    // 0x22a23c: 0xe480003c  swc1        $f0, 0x3C($a0)
    ctx->pc = 0x22a23cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 60), bits); }
label_22a240:
    // 0x22a240: 0x3c063c49  lui         $a2, 0x3C49
    ctx->pc = 0x22a240u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)15433 << 16));
label_22a244:
    // 0x22a244: 0x34c50fdb  ori         $a1, $a2, 0xFDB
    ctx->pc = 0x22a244u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)4059);
label_22a248:
    // 0x22a248: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x22a248u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22a24c:
    // 0x22a24c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22a24cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_22a250:
    // 0x22a250: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x22a250u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_22a254:
    // 0x22a254: 0xe4600058  swc1        $f0, 0x58($v1)
    ctx->pc = 0x22a254u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 88), bits); }
label_22a258:
    // 0x22a258: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22a258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_22a25c:
    // 0x22a25c: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x22a25cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_22a260:
    // 0x22a260: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x22a260u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
label_22a264:
    // 0x22a264: 0x24067802  addiu       $a2, $zero, 0x7802
    ctx->pc = 0x22a264u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30722));
label_22a268:
    // 0x22a268: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x22a268u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22a26c:
    // 0x22a26c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x22a26cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_22a270:
    // 0x22a270: 0xc0965d0  jal         func_259740
label_22a274:
    if (ctx->pc == 0x22A274u) {
        ctx->pc = 0x22A278u;
        goto label_22a278;
    }
    ctx->pc = 0x22A270u;
    SET_GPR_U32(ctx, 31, 0x22A278u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x22A270u, 0x22A278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A278u;
label_22a278:
    // 0x22a278: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x22a278u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_22a27c:
    // 0x22a27c: 0xc067694  jal         func_19DA50
label_22a280:
    if (ctx->pc == 0x22A280u) {
        ctx->pc = 0x22A284u;
        goto label_22a284;
    }
    ctx->pc = 0x22A27Cu;
    SET_GPR_U32(ctx, 31, 0x22A284u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x22A27Cu, 0x22A284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A284u;
label_22a284:
    // 0x22a284: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x22a284u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_22a288:
    // 0x22a288: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x22a288u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_22a28c:
    // 0x22a28c: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x22a28cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
label_22a290:
    // 0x22a290: 0x24630014  addiu       $v1, $v1, 0x14
    ctx->pc = 0x22a290u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
label_22a294:
    // 0x22a294: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x22a294u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
label_22a298:
    // 0x22a298: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x22a298u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_22a29c:
    // 0x22a29c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22a29cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_22a2a0:
    // 0x22a2a0: 0xa464127a  sh          $a0, 0x127A($v1)
    ctx->pc = 0x22a2a0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4730), (uint16_t)GPR_U32(ctx, 4));
label_22a2a4:
    // 0x22a2a4: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22a2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_22a2a8:
    // 0x22a2a8: 0xc461128c  lwc1        $f1, 0x128C($v1)
    ctx->pc = 0x22a2a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22a2ac:
    // 0x22a2ac: 0x3c0344d4  lui         $v1, 0x44D4
    ctx->pc = 0x22a2acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17620 << 16));
label_22a2b0:
    // 0x22a2b0: 0x34648000  ori         $a0, $v1, 0x8000
    ctx->pc = 0x22a2b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
label_22a2b4:
    // 0x22a2b4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x22a2b4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22a2b8:
    // 0x22a2b8: 0x0  nop
    ctx->pc = 0x22a2b8u;
    // NOP
label_22a2bc:
    // 0x22a2bc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x22a2bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22a2c0:
    // 0x22a2c0: 0x0  nop
    ctx->pc = 0x22a2c0u;
    // NOP
label_22a2c4:
    // 0x22a2c4: 0x45000009  bc1f        . + 4 + (0x9 << 2)
label_22a2c8:
    if (ctx->pc == 0x22A2C8u) {
        ctx->pc = 0x22A2CCu;
        goto label_22a2cc;
    }
    ctx->pc = 0x22A2C4u;
    {
        const bool branch_taken_0x22a2c4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22a2c4) {
            ctx->pc = 0x22A2ECu;
            goto label_22a2ec;
        }
    }
    ctx->pc = 0x22A2CCu;
label_22a2cc:
    // 0x22a2cc: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22a2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_22a2d0:
    // 0x22a2d0: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x22a2d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_22a2d4:
    // 0x22a2d4: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x22a2d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
label_22a2d8:
    // 0x22a2d8: 0x24067824  addiu       $a2, $zero, 0x7824
    ctx->pc = 0x22a2d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30756));
label_22a2dc:
    // 0x22a2dc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x22a2dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22a2e0:
    // 0x22a2e0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x22a2e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_22a2e4:
    // 0x22a2e4: 0xc0965d0  jal         func_259740
label_22a2e8:
    if (ctx->pc == 0x22A2E8u) {
        ctx->pc = 0x22A2ECu;
        goto label_22a2ec;
    }
    ctx->pc = 0x22A2E4u;
    SET_GPR_U32(ctx, 31, 0x22A2ECu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x22A2E4u, 0x22A2ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A2ECu;
label_22a2ec:
    // 0x22a2ec: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22a2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_22a2f0:
    // 0x22a2f0: 0xc4411288  lwc1        $f1, 0x1288($v0)
    ctx->pc = 0x22a2f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22a2f4:
    // 0x22a2f4: 0x3c024496  lui         $v0, 0x4496
    ctx->pc = 0x22a2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17558 << 16));
label_22a2f8:
    // 0x22a2f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22a2f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22a2fc:
    // 0x22a2fc: 0x0  nop
    ctx->pc = 0x22a2fcu;
    // NOP
label_22a300:
    // 0x22a300: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x22a300u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22a304:
    // 0x22a304: 0x0  nop
    ctx->pc = 0x22a304u;
    // NOP
label_22a308:
    // 0x22a308: 0x45010008  bc1t        . + 4 + (0x8 << 2)
label_22a30c:
    if (ctx->pc == 0x22A30Cu) {
        ctx->pc = 0x22A310u;
        goto label_22a310;
    }
    ctx->pc = 0x22A308u;
    {
        const bool branch_taken_0x22a308 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22a308) {
            ctx->pc = 0x22A32Cu;
            goto label_22a32c;
        }
    }
    ctx->pc = 0x22A310u;
label_22a310:
    // 0x22a310: 0x3c0240e0  lui         $v0, 0x40E0
    ctx->pc = 0x22a310u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16608 << 16));
label_22a314:
    // 0x22a314: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22a314u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22a318:
    // 0x22a318: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22a318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_22a31c:
    // 0x22a31c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22a31cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_22a320:
    // 0x22a320: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x22a320u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
label_22a324:
    // 0x22a324: 0x10000017  b           . + 4 + (0x17 << 2)
label_22a328:
    if (ctx->pc == 0x22A328u) {
        ctx->pc = 0x22A32Cu;
        goto label_22a32c;
    }
    ctx->pc = 0x22A324u;
    {
        const bool branch_taken_0x22a324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a324) {
            ctx->pc = 0x22A384u;
            goto label_22a384;
        }
    }
    ctx->pc = 0x22A32Cu;
label_22a32c:
    // 0x22a32c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22a32cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_22a330:
    // 0x22a330: 0xc4411288  lwc1        $f1, 0x1288($v0)
    ctx->pc = 0x22a330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22a334:
    // 0x22a334: 0x3c02453b  lui         $v0, 0x453B
    ctx->pc = 0x22a334u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17723 << 16));
label_22a338:
    // 0x22a338: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x22a338u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_22a33c:
    // 0x22a33c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22a33cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22a340:
    // 0x22a340: 0x0  nop
    ctx->pc = 0x22a340u;
    // NOP
label_22a344:
    // 0x22a344: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x22a344u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22a348:
    // 0x22a348: 0x0  nop
    ctx->pc = 0x22a348u;
    // NOP
label_22a34c:
    // 0x22a34c: 0x45010008  bc1t        . + 4 + (0x8 << 2)
label_22a350:
    if (ctx->pc == 0x22A350u) {
        ctx->pc = 0x22A354u;
        goto label_22a354;
    }
    ctx->pc = 0x22A34Cu;
    {
        const bool branch_taken_0x22a34c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22a34c) {
            ctx->pc = 0x22A370u;
            goto label_22a370;
        }
    }
    ctx->pc = 0x22A354u;
label_22a354:
    // 0x22a354: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x22a354u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_22a358:
    // 0x22a358: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22a358u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22a35c:
    // 0x22a35c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22a35cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_22a360:
    // 0x22a360: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22a360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_22a364:
    // 0x22a364: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x22a364u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
label_22a368:
    // 0x22a368: 0x10000006  b           . + 4 + (0x6 << 2)
label_22a36c:
    if (ctx->pc == 0x22A36Cu) {
        ctx->pc = 0x22A370u;
        goto label_22a370;
    }
    ctx->pc = 0x22A368u;
    {
        const bool branch_taken_0x22a368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a368) {
            ctx->pc = 0x22A384u;
            goto label_22a384;
        }
    }
    ctx->pc = 0x22A370u;
label_22a370:
    // 0x22a370: 0x3c02c0a0  lui         $v0, 0xC0A0
    ctx->pc = 0x22a370u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49312 << 16));
label_22a374:
    // 0x22a374: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22a374u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22a378:
    // 0x22a378: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22a378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_22a37c:
    // 0x22a37c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22a37cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_22a380:
    // 0x22a380: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x22a380u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
label_22a384:
    // 0x22a384: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x22a384u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_22a388:
    // 0x22a388: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x22a388u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_22a38c:
    // 0x22a38c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22a38cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_22a390:
    // 0x22a390: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x22a390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_22a394:
    // 0x22a394: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x22a394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
label_22a398:
    // 0x22a398: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x22a398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_22a39c:
    // 0x22a39c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x22a39cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_22a3a0:
    // 0x22a3a0: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x22a3a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
label_22a3a4:
    // 0x22a3a4: 0xc46d003c  lwc1        $f13, 0x3C($v1)
    ctx->pc = 0x22a3a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_22a3a8:
    // 0x22a3a8: 0xc05c848  jal         func_172120
label_22a3ac:
    if (ctx->pc == 0x22A3ACu) {
        ctx->pc = 0x22A3B0u;
        goto label_22a3b0;
    }
    ctx->pc = 0x22A3A8u;
    SET_GPR_U32(ctx, 31, 0x22A3B0u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x22A3A8u, 0x22A3B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A3B0u;
label_22a3b0:
    // 0x22a3b0: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x22a3b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
label_22a3b4:
    // 0x22a3b4: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22a3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_22a3b8:
    // 0x22a3b8: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x22a3b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22a3bc:
    // 0x22a3bc: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x22a3bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22a3c0:
    // 0x22a3c0: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x22a3c0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_22a3c4:
    // 0x22a3c4: 0xc058fec  jal         func_163FB0
label_22a3c8:
    if (ctx->pc == 0x22A3C8u) {
        ctx->pc = 0x22A3CCu;
        goto label_22a3cc;
    }
    ctx->pc = 0x22A3C4u;
    SET_GPR_U32(ctx, 31, 0x22A3CCu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x22A3C4u, 0x22A3CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A3CCu;
label_22a3cc:
    // 0x22a3cc: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22a3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_22a3d0:
    // 0x22a3d0: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x22a3d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
label_22a3d4:
    // 0x22a3d4: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x22a3d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_22a3d8:
    // 0x22a3d8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x22a3d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_22a3dc:
    // 0x22a3dc: 0xc096b40  jal         func_25AD00
label_22a3e0:
    if (ctx->pc == 0x22A3E0u) {
        ctx->pc = 0x22A3E4u;
        goto label_22a3e4;
    }
    ctx->pc = 0x22A3DCu;
    SET_GPR_U32(ctx, 31, 0x22A3E4u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x22A3DCu, 0x22A3E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A3E4u;
label_22a3e4:
    // 0x22a3e4: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x22a3e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_22a3e8:
    // 0x22a3e8: 0xc0974dc  jal         func_25D370
label_22a3ec:
    if (ctx->pc == 0x22A3ECu) {
        ctx->pc = 0x22A3F0u;
        goto label_22a3f0;
    }
    ctx->pc = 0x22A3E8u;
    SET_GPR_U32(ctx, 31, 0x22A3F0u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x22A3E8u, 0x22A3F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A3F0u;
label_22a3f0:
    // 0x22a3f0: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22a3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_22a3f4:
    // 0x22a3f4: 0x8463127a  lh          $v1, 0x127A($v1)
    ctx->pc = 0x22a3f4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4730)));
label_22a3f8:
    // 0x22a3f8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_22a3fc:
    if (ctx->pc == 0x22A3FCu) {
        ctx->pc = 0x22A400u;
        goto label_22a400;
    }
    ctx->pc = 0x22A3F8u;
    {
        const bool branch_taken_0x22a3f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a3f8) {
            ctx->pc = 0x22A410u;
            goto label_22a410;
        }
    }
    ctx->pc = 0x22A400u;
label_22a400:
    // 0x22a400: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x22a400u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_22a404:
    // 0x22a404: 0x8483127a  lh          $v1, 0x127A($a0)
    ctx->pc = 0x22a404u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4730)));
label_22a408:
    // 0x22a408: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x22a408u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_22a40c:
    // 0x22a40c: 0xa483127a  sh          $v1, 0x127A($a0)
    ctx->pc = 0x22a40cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4730), (uint16_t)GPR_U32(ctx, 3));
label_22a410:
    // 0x22a410: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x22a410u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_22a414:
    // 0x22a414: 0x8c241a50  lw          $a0, 0x1A50($at)
    ctx->pc = 0x22a414u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6736)));
label_22a418:
    // 0x22a418: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x22a418u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
label_22a41c:
    // 0x22a41c: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x22a41cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
label_22a420:
    // 0x22a420: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x22a420u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_22a424:
    // 0x22a424: 0x10600024  beqz        $v1, . + 4 + (0x24 << 2)
label_22a428:
    if (ctx->pc == 0x22A428u) {
        ctx->pc = 0x22A42Cu;
        goto label_22a42c;
    }
    ctx->pc = 0x22A424u;
    {
        const bool branch_taken_0x22a424 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a424) {
            ctx->pc = 0x22A4B8u;
            goto label_22a4b8;
        }
    }
    ctx->pc = 0x22A42Cu;
label_22a42c:
    // 0x22a42c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22a42cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_22a430:
    // 0x22a430: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x22a430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22a434:
    // 0x22a434: 0x3c034496  lui         $v1, 0x4496
    ctx->pc = 0x22a434u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17558 << 16));
label_22a438:
    // 0x22a438: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22a438u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22a43c:
    // 0x22a43c: 0x0  nop
    ctx->pc = 0x22a43cu;
    // NOP
label_22a440:
    // 0x22a440: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x22a440u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22a444:
    // 0x22a444: 0x0  nop
    ctx->pc = 0x22a444u;
    // NOP
label_22a448:
    // 0x22a448: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
label_22a44c:
    if (ctx->pc == 0x22A44Cu) {
        ctx->pc = 0x22A450u;
        goto label_22a450;
    }
    ctx->pc = 0x22A448u;
    {
        const bool branch_taken_0x22a448 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22a448) {
            ctx->pc = 0x22A4B8u;
            goto label_22a4b8;
        }
    }
    ctx->pc = 0x22A450u;
label_22a450:
    // 0x22a450: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x22a450u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
label_22a454:
    // 0x22a454: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x22a454u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_22a458:
    // 0x22a458: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x22a458u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_22a45c:
    // 0x22a45c: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x22a45cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294958308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22a460:
    // 0x22a460: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x22a460u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_22a464:
    // 0x22a464: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22a464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_22a468:
    // 0x22a468: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x22a468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22a46c:
    // 0x22a46c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x22a46cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22a470:
    // 0x22a470: 0x0  nop
    ctx->pc = 0x22a470u;
    // NOP
label_22a474:
    // 0x22a474: 0x45010010  bc1t        . + 4 + (0x10 << 2)
label_22a478:
    if (ctx->pc == 0x22A478u) {
        ctx->pc = 0x22A47Cu;
        goto label_22a47c;
    }
    ctx->pc = 0x22A474u;
    {
        const bool branch_taken_0x22a474 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22a474) {
            ctx->pc = 0x22A4B8u;
            goto label_22a4b8;
        }
    }
    ctx->pc = 0x22A47Cu;
label_22a47c:
    // 0x22a47c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22a47cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_22a480:
    // 0x22a480: 0xc4610124  lwc1        $f1, 0x124($v1)
    ctx->pc = 0x22a480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22a484:
    // 0x22a484: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x22a484u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_22a488:
    // 0x22a488: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x22a488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294958308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22a48c:
    // 0x22a48c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x22a48cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22a490:
    // 0x22a490: 0x0  nop
    ctx->pc = 0x22a490u;
    // NOP
label_22a494:
    // 0x22a494: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_22a498:
    if (ctx->pc == 0x22A498u) {
        ctx->pc = 0x22A49Cu;
        goto label_22a49c;
    }
    ctx->pc = 0x22A494u;
    {
        const bool branch_taken_0x22a494 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22a494) {
            ctx->pc = 0x22A4B8u;
            goto label_22a4b8;
        }
    }
    ctx->pc = 0x22A49Cu;
label_22a49c:
    // 0x22a49c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22a49cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_22a4a0:
    // 0x22a4a0: 0x8463127a  lh          $v1, 0x127A($v1)
    ctx->pc = 0x22a4a0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4730)));
label_22a4a4:
    // 0x22a4a4: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_22a4a8:
    if (ctx->pc == 0x22A4A8u) {
        ctx->pc = 0x22A4ACu;
        goto label_22a4ac;
    }
    ctx->pc = 0x22A4A4u;
    {
        const bool branch_taken_0x22a4a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22a4a4) {
            ctx->pc = 0x22A4B8u;
            goto label_22a4b8;
        }
    }
    ctx->pc = 0x22A4ACu;
label_22a4ac:
    // 0x22a4ac: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x22a4acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_22a4b0:
    // 0x22a4b0: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22a4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_22a4b4:
    // 0x22a4b4: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x22a4b4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
label_22a4b8:
    // 0x22a4b8: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22a4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_22a4bc:
    // 0x22a4bc: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x22a4bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_22a4c0:
    // 0x22a4c0: 0x1060014e  beqz        $v1, . + 4 + (0x14E << 2)
label_22a4c4:
    if (ctx->pc == 0x22A4C4u) {
        ctx->pc = 0x22A4C8u;
        goto label_22a4c8;
    }
    ctx->pc = 0x22A4C0u;
    {
        const bool branch_taken_0x22a4c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a4c0) {
            ctx->pc = 0x22A9FCu;
            goto label_22a9fc;
        }
    }
    ctx->pc = 0x22A4C8u;
label_22a4c8:
    // 0x22a4c8: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22a4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_22a4cc:
    // 0x22a4cc: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x22a4ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_22a4d0:
    // 0x22a4d0: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x22a4d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_22a4d4:
    // 0x22a4d4: 0x24063c02  addiu       $a2, $zero, 0x3C02
    ctx->pc = 0x22a4d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15362));
label_22a4d8:
    // 0x22a4d8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x22a4d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22a4dc:
    // 0x22a4dc: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x22a4dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_22a4e0:
    // 0x22a4e0: 0xc0965d0  jal         func_259740
label_22a4e4:
    if (ctx->pc == 0x22A4E4u) {
        ctx->pc = 0x22A4E8u;
        goto label_22a4e8;
    }
    ctx->pc = 0x22A4E0u;
    SET_GPR_U32(ctx, 31, 0x22A4E8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x22A4E0u, 0x22A4E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A4E8u;
label_22a4e8:
    // 0x22a4e8: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22a4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_22a4ec:
    // 0x22a4ec: 0xc461128c  lwc1        $f1, 0x128C($v1)
    ctx->pc = 0x22a4ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22a4f0:
    // 0x22a4f0: 0x3c0344d4  lui         $v1, 0x44D4
    ctx->pc = 0x22a4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17620 << 16));
label_22a4f4:
    // 0x22a4f4: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x22a4f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
label_22a4f8:
    // 0x22a4f8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22a4f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22a4fc:
    // 0x22a4fc: 0x0  nop
    ctx->pc = 0x22a4fcu;
    // NOP
label_22a500:
    // 0x22a500: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x22a500u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22a504:
    // 0x22a504: 0x0  nop
    ctx->pc = 0x22a504u;
    // NOP
label_22a508:
    // 0x22a508: 0x4500013c  bc1f        . + 4 + (0x13C << 2)
label_22a50c:
    if (ctx->pc == 0x22A50Cu) {
        ctx->pc = 0x22A510u;
        goto label_22a510;
    }
    ctx->pc = 0x22A508u;
    {
        const bool branch_taken_0x22a508 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22a508) {
            ctx->pc = 0x22A9FCu;
            goto label_22a9fc;
        }
    }
    ctx->pc = 0x22A510u;
label_22a510:
    // 0x22a510: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22a510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_22a514:
    // 0x22a514: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x22a514u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_22a518:
    // 0x22a518: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x22a518u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_22a51c:
    // 0x22a51c: 0x24067824  addiu       $a2, $zero, 0x7824
    ctx->pc = 0x22a51cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30756));
label_22a520:
    // 0x22a520: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x22a520u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22a524:
    // 0x22a524: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x22a524u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_22a528:
    // 0x22a528: 0xc0965d0  jal         func_259740
label_22a52c:
    if (ctx->pc == 0x22A52Cu) {
        ctx->pc = 0x22A530u;
        goto label_22a530;
    }
    ctx->pc = 0x22A528u;
    SET_GPR_U32(ctx, 31, 0x22A530u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x22A528u, 0x22A530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A530u;
label_22a530:
    // 0x22a530: 0x10000132  b           . + 4 + (0x132 << 2)
label_22a534:
    if (ctx->pc == 0x22A534u) {
        ctx->pc = 0x22A538u;
        goto label_22a538;
    }
    ctx->pc = 0x22A530u;
    {
        const bool branch_taken_0x22a530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a530) {
            ctx->pc = 0x22A9FCu;
            goto label_22a9fc;
        }
    }
    ctx->pc = 0x22A538u;
label_22a538:
    // 0x22a538: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22a538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_22a53c:
    // 0x22a53c: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x22a53cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_22a540:
    // 0x22a540: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x22a540u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_22a544:
    // 0x22a544: 0x24067824  addiu       $a2, $zero, 0x7824
    ctx->pc = 0x22a544u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30756));
label_22a548:
    // 0x22a548: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x22a548u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22a54c:
    // 0x22a54c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x22a54cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_22a550:
    // 0x22a550: 0xc0965d0  jal         func_259740
label_22a554:
    if (ctx->pc == 0x22A554u) {
        ctx->pc = 0x22A558u;
        goto label_22a558;
    }
    ctx->pc = 0x22A550u;
    SET_GPR_U32(ctx, 31, 0x22A558u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x22A550u, 0x22A558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A558u;
label_22a558:
    // 0x22a558: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x22a558u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_22a55c:
    // 0x22a55c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22a55cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_22a560:
    // 0x22a560: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x22a560u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
label_22a564:
    // 0x22a564: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22a564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_22a568:
    // 0x22a568: 0xc4411288  lwc1        $f1, 0x1288($v0)
    ctx->pc = 0x22a568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22a56c:
    // 0x22a56c: 0x3c024496  lui         $v0, 0x4496
    ctx->pc = 0x22a56cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17558 << 16));
label_22a570:
    // 0x22a570: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22a570u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22a574:
    // 0x22a574: 0x0  nop
    ctx->pc = 0x22a574u;
    // NOP
label_22a578:
    // 0x22a578: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x22a578u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22a57c:
    // 0x22a57c: 0x0  nop
    ctx->pc = 0x22a57cu;
    // NOP
label_22a580:
    // 0x22a580: 0x45010008  bc1t        . + 4 + (0x8 << 2)
label_22a584:
    if (ctx->pc == 0x22A584u) {
        ctx->pc = 0x22A588u;
        goto label_22a588;
    }
    ctx->pc = 0x22A580u;
    {
        const bool branch_taken_0x22a580 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22a580) {
            ctx->pc = 0x22A5A4u;
            goto label_22a5a4;
        }
    }
    ctx->pc = 0x22A588u;
label_22a588:
    // 0x22a588: 0x3c0240e0  lui         $v0, 0x40E0
    ctx->pc = 0x22a588u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16608 << 16));
label_22a58c:
    // 0x22a58c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22a58cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22a590:
    // 0x22a590: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22a590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_22a594:
    // 0x22a594: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22a594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_22a598:
    // 0x22a598: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x22a598u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
label_22a59c:
    // 0x22a59c: 0x10000017  b           . + 4 + (0x17 << 2)
label_22a5a0:
    if (ctx->pc == 0x22A5A0u) {
        ctx->pc = 0x22A5A4u;
        goto label_22a5a4;
    }
    ctx->pc = 0x22A59Cu;
    {
        const bool branch_taken_0x22a59c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a59c) {
            ctx->pc = 0x22A5FCu;
            goto label_22a5fc;
        }
    }
    ctx->pc = 0x22A5A4u;
label_22a5a4:
    // 0x22a5a4: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22a5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_22a5a8:
    // 0x22a5a8: 0xc4411288  lwc1        $f1, 0x1288($v0)
    ctx->pc = 0x22a5a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22a5ac:
    // 0x22a5ac: 0x3c02453b  lui         $v0, 0x453B
    ctx->pc = 0x22a5acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17723 << 16));
label_22a5b0:
    // 0x22a5b0: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x22a5b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_22a5b4:
    // 0x22a5b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22a5b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22a5b8:
    // 0x22a5b8: 0x0  nop
    ctx->pc = 0x22a5b8u;
    // NOP
label_22a5bc:
    // 0x22a5bc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x22a5bcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22a5c0:
    // 0x22a5c0: 0x0  nop
    ctx->pc = 0x22a5c0u;
    // NOP
label_22a5c4:
    // 0x22a5c4: 0x45010008  bc1t        . + 4 + (0x8 << 2)
label_22a5c8:
    if (ctx->pc == 0x22A5C8u) {
        ctx->pc = 0x22A5CCu;
        goto label_22a5cc;
    }
    ctx->pc = 0x22A5C4u;
    {
        const bool branch_taken_0x22a5c4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22a5c4) {
            ctx->pc = 0x22A5E8u;
            goto label_22a5e8;
        }
    }
    ctx->pc = 0x22A5CCu;
label_22a5cc:
    // 0x22a5cc: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x22a5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
label_22a5d0:
    // 0x22a5d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22a5d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22a5d4:
    // 0x22a5d4: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22a5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_22a5d8:
    // 0x22a5d8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22a5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_22a5dc:
    // 0x22a5dc: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x22a5dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
label_22a5e0:
    // 0x22a5e0: 0x10000006  b           . + 4 + (0x6 << 2)
label_22a5e4:
    if (ctx->pc == 0x22A5E4u) {
        ctx->pc = 0x22A5E8u;
        goto label_22a5e8;
    }
    ctx->pc = 0x22A5E0u;
    {
        const bool branch_taken_0x22a5e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a5e0) {
            ctx->pc = 0x22A5FCu;
            goto label_22a5fc;
        }
    }
    ctx->pc = 0x22A5E8u;
label_22a5e8:
    // 0x22a5e8: 0x3c02c0a0  lui         $v0, 0xC0A0
    ctx->pc = 0x22a5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49312 << 16));
label_22a5ec:
    // 0x22a5ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22a5ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22a5f0:
    // 0x22a5f0: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22a5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_22a5f4:
    // 0x22a5f4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22a5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_22a5f8:
    // 0x22a5f8: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x22a5f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
label_22a5fc:
    // 0x22a5fc: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x22a5fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_22a600:
    // 0x22a600: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x22a600u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_22a604:
    // 0x22a604: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22a604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_22a608:
    // 0x22a608: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x22a608u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_22a60c:
    // 0x22a60c: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x22a60cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
label_22a610:
    // 0x22a610: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x22a610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_22a614:
    // 0x22a614: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x22a614u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_22a618:
    // 0x22a618: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x22a618u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
label_22a61c:
    // 0x22a61c: 0xc46d003c  lwc1        $f13, 0x3C($v1)
    ctx->pc = 0x22a61cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_22a620:
    // 0x22a620: 0xc05c848  jal         func_172120
label_22a624:
    if (ctx->pc == 0x22A624u) {
        ctx->pc = 0x22A628u;
        goto label_22a628;
    }
    ctx->pc = 0x22A620u;
    SET_GPR_U32(ctx, 31, 0x22A628u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x22A620u, 0x22A628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A628u;
label_22a628:
    // 0x22a628: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x22a628u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
label_22a62c:
    // 0x22a62c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22a62cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_22a630:
    // 0x22a630: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x22a630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22a634:
    // 0x22a634: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x22a634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22a638:
    // 0x22a638: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x22a638u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_22a63c:
    // 0x22a63c: 0xc058fec  jal         func_163FB0
label_22a640:
    if (ctx->pc == 0x22A640u) {
        ctx->pc = 0x22A644u;
        goto label_22a644;
    }
    ctx->pc = 0x22A63Cu;
    SET_GPR_U32(ctx, 31, 0x22A644u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x22A63Cu, 0x22A644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A644u;
label_22a644:
    // 0x22a644: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22a644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_22a648:
    // 0x22a648: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x22a648u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
label_22a64c:
    // 0x22a64c: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x22a64cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_22a650:
    // 0x22a650: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x22a650u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_22a654:
    // 0x22a654: 0xc096b40  jal         func_25AD00
label_22a658:
    if (ctx->pc == 0x22A658u) {
        ctx->pc = 0x22A65Cu;
        goto label_22a65c;
    }
    ctx->pc = 0x22A654u;
    SET_GPR_U32(ctx, 31, 0x22A65Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x22A654u, 0x22A65Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A65Cu;
label_22a65c:
    // 0x22a65c: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x22a65cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_22a660:
    // 0x22a660: 0xc0974dc  jal         func_25D370
label_22a664:
    if (ctx->pc == 0x22A664u) {
        ctx->pc = 0x22A668u;
        goto label_22a668;
    }
    ctx->pc = 0x22A660u;
    SET_GPR_U32(ctx, 31, 0x22A668u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x22A660u, 0x22A668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A668u;
label_22a668:
    // 0x22a668: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22a668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_22a66c:
    // 0x22a66c: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x22a66cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_22a670:
    // 0x22a670: 0x106000e2  beqz        $v1, . + 4 + (0xE2 << 2)
label_22a674:
    if (ctx->pc == 0x22A674u) {
        ctx->pc = 0x22A678u;
        goto label_22a678;
    }
    ctx->pc = 0x22A670u;
    {
        const bool branch_taken_0x22a670 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a670) {
            ctx->pc = 0x22A9FCu;
            goto label_22a9fc;
        }
    }
    ctx->pc = 0x22A678u;
label_22a678:
    // 0x22a678: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x22a678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_22a67c:
    // 0x22a67c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22a67cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_22a680:
    // 0x22a680: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x22a680u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
label_22a684:
    // 0x22a684: 0x100000dd  b           . + 4 + (0xDD << 2)
label_22a688:
    if (ctx->pc == 0x22A688u) {
        ctx->pc = 0x22A68Cu;
        goto label_22a68c;
    }
    ctx->pc = 0x22A684u;
    {
        const bool branch_taken_0x22a684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a684) {
            ctx->pc = 0x22A9FCu;
            goto label_22a9fc;
        }
    }
    ctx->pc = 0x22A68Cu;
label_22a68c:
    // 0x22a68c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x22a68cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_22a690:
    // 0x22a690: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22a690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_22a694:
    // 0x22a694: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x22a694u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
label_22a698:
    // 0x22a698: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22a698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_22a69c:
    // 0x22a69c: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x22a69cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_22a6a0:
    // 0x22a6a0: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x22a6a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_22a6a4:
    // 0x22a6a4: 0x2406781a  addiu       $a2, $zero, 0x781A
    ctx->pc = 0x22a6a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30746));
label_22a6a8:
    // 0x22a6a8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x22a6a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22a6ac:
    // 0x22a6ac: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x22a6acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_22a6b0:
    // 0x22a6b0: 0xc0965d0  jal         func_259740
label_22a6b4:
    if (ctx->pc == 0x22A6B4u) {
        ctx->pc = 0x22A6B8u;
        goto label_22a6b8;
    }
    ctx->pc = 0x22A6B0u;
    SET_GPR_U32(ctx, 31, 0x22A6B8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x22A6B0u, 0x22A6B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A6B8u;
label_22a6b8:
    // 0x22a6b8: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22a6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_22a6bc:
    // 0x22a6bc: 0xa440127e  sh          $zero, 0x127E($v0)
    ctx->pc = 0x22a6bcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4734), (uint16_t)GPR_U32(ctx, 0));
label_22a6c0:
    // 0x22a6c0: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22a6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_22a6c4:
    // 0x22a6c4: 0xc4411288  lwc1        $f1, 0x1288($v0)
    ctx->pc = 0x22a6c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22a6c8:
    // 0x22a6c8: 0x3c024496  lui         $v0, 0x4496
    ctx->pc = 0x22a6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17558 << 16));
label_22a6cc:
    // 0x22a6cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22a6ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22a6d0:
    // 0x22a6d0: 0x0  nop
    ctx->pc = 0x22a6d0u;
    // NOP
label_22a6d4:
    // 0x22a6d4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x22a6d4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22a6d8:
    // 0x22a6d8: 0x0  nop
    ctx->pc = 0x22a6d8u;
    // NOP
label_22a6dc:
    // 0x22a6dc: 0x45010008  bc1t        . + 4 + (0x8 << 2)
label_22a6e0:
    if (ctx->pc == 0x22A6E0u) {
        ctx->pc = 0x22A6E4u;
        goto label_22a6e4;
    }
    ctx->pc = 0x22A6DCu;
    {
        const bool branch_taken_0x22a6dc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22a6dc) {
            ctx->pc = 0x22A700u;
            goto label_22a700;
        }
    }
    ctx->pc = 0x22A6E4u;
label_22a6e4:
    // 0x22a6e4: 0x3c0240e0  lui         $v0, 0x40E0
    ctx->pc = 0x22a6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16608 << 16));
label_22a6e8:
    // 0x22a6e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22a6e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22a6ec:
    // 0x22a6ec: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22a6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_22a6f0:
    // 0x22a6f0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22a6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_22a6f4:
    // 0x22a6f4: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x22a6f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
label_22a6f8:
    // 0x22a6f8: 0x10000017  b           . + 4 + (0x17 << 2)
label_22a6fc:
    if (ctx->pc == 0x22A6FCu) {
        ctx->pc = 0x22A700u;
        goto label_22a700;
    }
    ctx->pc = 0x22A6F8u;
    {
        const bool branch_taken_0x22a6f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a6f8) {
            ctx->pc = 0x22A758u;
            goto label_22a758;
        }
    }
    ctx->pc = 0x22A700u;
label_22a700:
    // 0x22a700: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22a700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_22a704:
    // 0x22a704: 0xc4411288  lwc1        $f1, 0x1288($v0)
    ctx->pc = 0x22a704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22a708:
    // 0x22a708: 0x3c02453b  lui         $v0, 0x453B
    ctx->pc = 0x22a708u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17723 << 16));
label_22a70c:
    // 0x22a70c: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x22a70cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_22a710:
    // 0x22a710: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22a710u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22a714:
    // 0x22a714: 0x0  nop
    ctx->pc = 0x22a714u;
    // NOP
label_22a718:
    // 0x22a718: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x22a718u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22a71c:
    // 0x22a71c: 0x0  nop
    ctx->pc = 0x22a71cu;
    // NOP
label_22a720:
    // 0x22a720: 0x45010008  bc1t        . + 4 + (0x8 << 2)
label_22a724:
    if (ctx->pc == 0x22A724u) {
        ctx->pc = 0x22A728u;
        goto label_22a728;
    }
    ctx->pc = 0x22A720u;
    {
        const bool branch_taken_0x22a720 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22a720) {
            ctx->pc = 0x22A744u;
            goto label_22a744;
        }
    }
    ctx->pc = 0x22A728u;
label_22a728:
    // 0x22a728: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x22a728u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
label_22a72c:
    // 0x22a72c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22a72cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22a730:
    // 0x22a730: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22a730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_22a734:
    // 0x22a734: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22a734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_22a738:
    // 0x22a738: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x22a738u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
label_22a73c:
    // 0x22a73c: 0x10000006  b           . + 4 + (0x6 << 2)
label_22a740:
    if (ctx->pc == 0x22A740u) {
        ctx->pc = 0x22A744u;
        goto label_22a744;
    }
    ctx->pc = 0x22A73Cu;
    {
        const bool branch_taken_0x22a73c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a73c) {
            ctx->pc = 0x22A758u;
            goto label_22a758;
        }
    }
    ctx->pc = 0x22A744u;
label_22a744:
    // 0x22a744: 0x3c02c0a0  lui         $v0, 0xC0A0
    ctx->pc = 0x22a744u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49312 << 16));
label_22a748:
    // 0x22a748: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22a748u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22a74c:
    // 0x22a74c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22a74cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_22a750:
    // 0x22a750: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22a750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_22a754:
    // 0x22a754: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x22a754u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
label_22a758:
    // 0x22a758: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x22a758u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_22a75c:
    // 0x22a75c: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x22a75cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_22a760:
    // 0x22a760: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22a760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_22a764:
    // 0x22a764: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x22a764u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_22a768:
    // 0x22a768: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x22a768u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
label_22a76c:
    // 0x22a76c: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x22a76cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_22a770:
    // 0x22a770: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x22a770u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_22a774:
    // 0x22a774: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x22a774u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
label_22a778:
    // 0x22a778: 0xc46d003c  lwc1        $f13, 0x3C($v1)
    ctx->pc = 0x22a778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_22a77c:
    // 0x22a77c: 0xc05c848  jal         func_172120
label_22a780:
    if (ctx->pc == 0x22A780u) {
        ctx->pc = 0x22A784u;
        goto label_22a784;
    }
    ctx->pc = 0x22A77Cu;
    SET_GPR_U32(ctx, 31, 0x22A784u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x22A77Cu, 0x22A784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A784u;
label_22a784:
    // 0x22a784: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x22a784u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
label_22a788:
    // 0x22a788: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22a788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_22a78c:
    // 0x22a78c: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x22a78cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22a790:
    // 0x22a790: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x22a790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22a794:
    // 0x22a794: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x22a794u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_22a798:
    // 0x22a798: 0xc058fec  jal         func_163FB0
label_22a79c:
    if (ctx->pc == 0x22A79Cu) {
        ctx->pc = 0x22A7A0u;
        goto label_22a7a0;
    }
    ctx->pc = 0x22A798u;
    SET_GPR_U32(ctx, 31, 0x22A7A0u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x22A798u, 0x22A7A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A7A0u;
label_22a7a0:
    // 0x22a7a0: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22a7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_22a7a4:
    // 0x22a7a4: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x22a7a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
label_22a7a8:
    // 0x22a7a8: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x22a7a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_22a7ac:
    // 0x22a7ac: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x22a7acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_22a7b0:
    // 0x22a7b0: 0xc096b40  jal         func_25AD00
label_22a7b4:
    if (ctx->pc == 0x22A7B4u) {
        ctx->pc = 0x22A7B8u;
        goto label_22a7b8;
    }
    ctx->pc = 0x22A7B0u;
    SET_GPR_U32(ctx, 31, 0x22A7B8u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x22A7B0u, 0x22A7B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A7B8u;
label_22a7b8:
    // 0x22a7b8: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x22a7b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_22a7bc:
    // 0x22a7bc: 0xc0974dc  jal         func_25D370
label_22a7c0:
    if (ctx->pc == 0x22A7C0u) {
        ctx->pc = 0x22A7C4u;
        goto label_22a7c4;
    }
    ctx->pc = 0x22A7BCu;
    SET_GPR_U32(ctx, 31, 0x22A7C4u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x22A7BCu, 0x22A7C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A7C4u;
label_22a7c4:
    // 0x22a7c4: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22a7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_22a7c8:
    // 0x22a7c8: 0x906309db  lbu         $v1, 0x9DB($v1)
    ctx->pc = 0x22a7c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2523)));
label_22a7cc:
    // 0x22a7cc: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x22a7ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_22a7d0:
    // 0x22a7d0: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x22a7d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
label_22a7d4:
    // 0x22a7d4: 0x10600074  beqz        $v1, . + 4 + (0x74 << 2)
label_22a7d8:
    if (ctx->pc == 0x22A7D8u) {
        ctx->pc = 0x22A7DCu;
        goto label_22a7dc;
    }
    ctx->pc = 0x22A7D4u;
    {
        const bool branch_taken_0x22a7d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a7d4) {
            ctx->pc = 0x22A9A8u;
            goto label_22a9a8;
        }
    }
    ctx->pc = 0x22A7DCu;
label_22a7dc:
    // 0x22a7dc: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22a7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_22a7e0:
    // 0x22a7e0: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x22a7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_22a7e4:
    // 0x22a7e4: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x22a7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
label_22a7e8:
    // 0x22a7e8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x22a7e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_22a7ec:
    // 0x22a7ec: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x22a7ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_22a7f0:
    // 0x22a7f0: 0x8c24dcf0  lw          $a0, -0x2310($at)
    ctx->pc = 0x22a7f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294958320)));
label_22a7f4:
    // 0x22a7f4: 0x24650880  addiu       $a1, $v1, 0x880
    ctx->pc = 0x22a7f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 2176));
label_22a7f8:
    // 0x22a7f8: 0xc05cad8  jal         func_172B60
label_22a7fc:
    if (ctx->pc == 0x22A7FCu) {
        ctx->pc = 0x22A800u;
        goto label_22a800;
    }
    ctx->pc = 0x22A7F8u;
    SET_GPR_U32(ctx, 31, 0x22A800u);
    ctx->pc = 0x172B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172B60u, 0x22A7F8u, 0x22A800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A800u;
label_22a800:
    // 0x22a800: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x22a800u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_22a804:
    // 0x22a804: 0x0  nop
    ctx->pc = 0x22a804u;
    // NOP
label_22a808:
    // 0x22a808: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x22a808u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22a80c:
    // 0x22a80c: 0x0  nop
    ctx->pc = 0x22a80cu;
    // NOP
label_22a810:
    // 0x22a810: 0x45000065  bc1f        . + 4 + (0x65 << 2)
label_22a814:
    if (ctx->pc == 0x22A814u) {
        ctx->pc = 0x22A818u;
        goto label_22a818;
    }
    ctx->pc = 0x22A810u;
    {
        const bool branch_taken_0x22a810 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22a810) {
            ctx->pc = 0x22A9A8u;
            goto label_22a9a8;
        }
    }
    ctx->pc = 0x22A818u;
label_22a818:
    // 0x22a818: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22a818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_22a81c:
    // 0x22a81c: 0x8463127e  lh          $v1, 0x127E($v1)
    ctx->pc = 0x22a81cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4734)));
label_22a820:
    // 0x22a820: 0x14600061  bnez        $v1, . + 4 + (0x61 << 2)
label_22a824:
    if (ctx->pc == 0x22A824u) {
        ctx->pc = 0x22A828u;
        goto label_22a828;
    }
    ctx->pc = 0x22A820u;
    {
        const bool branch_taken_0x22a820 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22a820) {
            ctx->pc = 0x22A9A8u;
            goto label_22a9a8;
        }
    }
    ctx->pc = 0x22A828u;
label_22a828:
    // 0x22a828: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x22a828u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22a82c:
    // 0x22a82c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22a82cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_22a830:
    // 0x22a830: 0xa443127e  sh          $v1, 0x127E($v0)
    ctx->pc = 0x22a830u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4734), (uint16_t)GPR_U32(ctx, 3));
label_22a834:
    // 0x22a834: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22a834u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22a838:
    // 0x22a838: 0x0  nop
    ctx->pc = 0x22a838u;
    // NOP
label_22a83c:
    // 0x22a83c: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x22a83cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_22a840:
    // 0x22a840: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22a840u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22a844:
    // 0x22a844: 0x0  nop
    ctx->pc = 0x22a844u;
    // NOP
label_22a848:
    // 0x22a848: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x22a848u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_22a84c:
    // 0x22a84c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22a84cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22a850:
    // 0x22a850: 0x0  nop
    ctx->pc = 0x22a850u;
    // NOP
label_22a854:
    // 0x22a854: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x22a854u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_22a858:
    // 0x22a858: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x22a858u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_22a85c:
    // 0x22a85c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22a85cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22a860:
    // 0x22a860: 0x0  nop
    ctx->pc = 0x22a860u;
    // NOP
label_22a864:
    // 0x22a864: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x22a864u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_22a868:
    // 0x22a868: 0x10283c  dsll32      $a1, $s0, 0
    ctx->pc = 0x22a868u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) << (32 + 0));
label_22a86c:
    // 0x22a86c: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x22a86cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
label_22a870:
    // 0x22a870: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x22a870u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_22a874:
    // 0x22a874: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x22a874u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_22a878:
    // 0x22a878: 0x3464ffff  ori         $a0, $v1, 0xFFFF
    ctx->pc = 0x22a878u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_22a87c:
    // 0x22a87c: 0xa42824  and         $a1, $a1, $a0
    ctx->pc = 0x22a87cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
label_22a880:
    // 0x22a880: 0x5183c  dsll32      $v1, $a1, 0
    ctx->pc = 0x22a880u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 0));
label_22a884:
    // 0x22a884: 0x34640006  ori         $a0, $v1, 0x6
    ctx->pc = 0x22a884u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)6);
label_22a888:
    // 0x22a888: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x22a888u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_22a88c:
    // 0x22a88c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x22a88cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_22a890:
    // 0x22a890: 0x8e070130  lw          $a3, 0x130($s0)
    ctx->pc = 0x22a890u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
label_22a894:
    // 0x22a894: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x22a894u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_22a898:
    // 0x22a898: 0xc06371c  jal         func_18DC70
label_22a89c:
    if (ctx->pc == 0x22A89Cu) {
        ctx->pc = 0x22A8A0u;
        goto label_22a8a0;
    }
    ctx->pc = 0x22A898u;
    SET_GPR_U32(ctx, 31, 0x22A8A0u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x22A898u, 0x22A8A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A8A0u;
label_22a8a0:
    // 0x22a8a0: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x22a8a0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_22a8a4:
    // 0x22a8a4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22a8a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22a8a8:
    // 0x22a8a8: 0x0  nop
    ctx->pc = 0x22a8a8u;
    // NOP
label_22a8ac:
    // 0x22a8ac: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x22a8acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_22a8b0:
    // 0x22a8b0: 0x3c034396  lui         $v1, 0x4396
    ctx->pc = 0x22a8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
label_22a8b4:
    // 0x22a8b4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22a8b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22a8b8:
    // 0x22a8b8: 0x0  nop
    ctx->pc = 0x22a8b8u;
    // NOP
label_22a8bc:
    // 0x22a8bc: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x22a8bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_22a8c0:
    // 0x22a8c0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22a8c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22a8c4:
    // 0x22a8c4: 0x0  nop
    ctx->pc = 0x22a8c4u;
    // NOP
label_22a8c8:
    // 0x22a8c8: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x22a8c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_22a8cc:
    // 0x22a8cc: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x22a8ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
label_22a8d0:
    // 0x22a8d0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x22a8d0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22a8d4:
    // 0x22a8d4: 0x0  nop
    ctx->pc = 0x22a8d4u;
    // NOP
label_22a8d8:
    // 0x22a8d8: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x22a8d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_22a8dc:
    // 0x22a8dc: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22a8dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_22a8e0:
    // 0x22a8e0: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x22a8e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
label_22a8e4:
    // 0x22a8e4: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x22a8e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
label_22a8e8:
    // 0x22a8e8: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x22a8e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_22a8ec:
    // 0x22a8ec: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x22a8ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_22a8f0:
    // 0x22a8f0: 0x3462ffff  ori         $v0, $v1, 0xFFFF
    ctx->pc = 0x22a8f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_22a8f4:
    // 0x22a8f4: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x22a8f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_22a8f8:
    // 0x22a8f8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x22a8f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_22a8fc:
    // 0x22a8fc: 0x34440006  ori         $a0, $v0, 0x6
    ctx->pc = 0x22a8fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
label_22a900:
    // 0x22a900: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22a900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_22a904:
    // 0x22a904: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x22a904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_22a908:
    // 0x22a908: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x22a908u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_22a90c:
    // 0x22a90c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x22a90cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_22a910:
    // 0x22a910: 0x24470880  addiu       $a3, $v0, 0x880
    ctx->pc = 0x22a910u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 2176));
label_22a914:
    // 0x22a914: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x22a914u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_22a918:
    // 0x22a918: 0xc06371c  jal         func_18DC70
label_22a91c:
    if (ctx->pc == 0x22A91Cu) {
        ctx->pc = 0x22A920u;
        goto label_22a920;
    }
    ctx->pc = 0x22A918u;
    SET_GPR_U32(ctx, 31, 0x22A920u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x22A918u, 0x22A920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A920u;
label_22a920:
    // 0x22a920: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x22a920u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
label_22a924:
    // 0x22a924: 0x3c050005  lui         $a1, 0x5
    ctx->pc = 0x22a924u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)5 << 16));
label_22a928:
    // 0x22a928: 0xc0684d8  jal         func_1A1360
label_22a92c:
    if (ctx->pc == 0x22A92Cu) {
        ctx->pc = 0x22A930u;
        goto label_22a930;
    }
    ctx->pc = 0x22A928u;
    SET_GPR_U32(ctx, 31, 0x22A930u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x22A928u, 0x22A930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A930u;
label_22a930:
    // 0x22a930: 0x3c0402fa  lui         $a0, 0x2FA
    ctx->pc = 0x22a930u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)762 << 16));
label_22a934:
    // 0x22a934: 0x3c050002  lui         $a1, 0x2
    ctx->pc = 0x22a934u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
label_22a938:
    // 0x22a938: 0xc0684d8  jal         func_1A1360
label_22a93c:
    if (ctx->pc == 0x22A93Cu) {
        ctx->pc = 0x22A940u;
        goto label_22a940;
    }
    ctx->pc = 0x22A938u;
    SET_GPR_U32(ctx, 31, 0x22A940u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x22A938u, 0x22A940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A940u;
label_22a940:
    // 0x22a940: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22a940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_22a944:
    // 0x22a944: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x22a944u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
label_22a948:
    // 0x22a948: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x22a948u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_22a94c:
    // 0x22a94c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x22a94cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_22a950:
    // 0x22a950: 0x24040511  addiu       $a0, $zero, 0x511
    ctx->pc = 0x22a950u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1297));
label_22a954:
    // 0x22a954: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x22a954u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
label_22a958:
    // 0x22a958: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x22a958u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_22a95c:
    // 0x22a95c: 0xc067b18  jal         func_19EC60
label_22a960:
    if (ctx->pc == 0x22A960u) {
        ctx->pc = 0x22A964u;
        goto label_22a964;
    }
    ctx->pc = 0x22A95Cu;
    SET_GPR_U32(ctx, 31, 0x22A964u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x22A95Cu, 0x22A964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A964u;
label_22a964:
    // 0x22a964: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x22a964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_22a968:
    // 0x22a968: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x22a968u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_22a96c:
    // 0x22a96c: 0xa022ec68  sb          $v0, -0x1398($at)
    ctx->pc = 0x22a96cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294962280), (uint8_t)GPR_U32(ctx, 2));
label_22a970:
    // 0x22a970: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x22a970u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_22a974:
    // 0x22a974: 0x2444dbc0  addiu       $a0, $v0, -0x2440
    ctx->pc = 0x22a974u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
label_22a978:
    // 0x22a978: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x22a978u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_22a97c:
    // 0x22a97c: 0x24060032  addiu       $a2, $zero, 0x32
    ctx->pc = 0x22a97cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_22a980:
    // 0x22a980: 0xc06d1d8  jal         func_1B4760
label_22a984:
    if (ctx->pc == 0x22A984u) {
        ctx->pc = 0x22A988u;
        goto label_22a988;
    }
    ctx->pc = 0x22A980u;
    SET_GPR_U32(ctx, 31, 0x22A988u);
    ctx->pc = 0x1B4760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4760u, 0x22A980u, 0x22A988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A988u;
label_22a988:
    // 0x22a988: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x22a988u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_22a98c:
    // 0x22a98c: 0x8423ec66  lh          $v1, -0x139A($at)
    ctx->pc = 0x22a98cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294962278)));
label_22a990:
    // 0x22a990: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x22a990u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_22a994:
    // 0x22a994: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x22a994u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_22a998:
    // 0x22a998: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_22a99c:
    if (ctx->pc == 0x22A99Cu) {
        ctx->pc = 0x22A9A0u;
        goto label_22a9a0;
    }
    ctx->pc = 0x22A998u;
    {
        const bool branch_taken_0x22a998 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x22a998) {
            ctx->pc = 0x22A9A8u;
            goto label_22a9a8;
        }
    }
    ctx->pc = 0x22A9A0u;
label_22a9a0:
    // 0x22a9a0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x22a9a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_22a9a4:
    // 0x22a9a4: 0xa420ec66  sh          $zero, -0x139A($at)
    ctx->pc = 0x22a9a4u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294962278), (uint16_t)GPR_U32(ctx, 0));
label_22a9a8:
    // 0x22a9a8: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x22a9a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_22a9ac:
    // 0x22a9ac: 0x94850a00  lhu         $a1, 0xA00($a0)
    ctx->pc = 0x22a9acu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2560)));
label_22a9b0:
    // 0x22a9b0: 0x30a6ffff  andi        $a2, $a1, 0xFFFF
    ctx->pc = 0x22a9b0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
label_22a9b4:
    // 0x22a9b4: 0x24070078  addiu       $a3, $zero, 0x78
    ctx->pc = 0x22a9b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_22a9b8:
    // 0x22a9b8: 0x14c7000a  bne         $a2, $a3, . + 4 + (0xA << 2)
label_22a9bc:
    if (ctx->pc == 0x22A9BCu) {
        ctx->pc = 0x22A9C0u;
        goto label_22a9c0;
    }
    ctx->pc = 0x22A9B8u;
    {
        const bool branch_taken_0x22a9b8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 7));
        if (branch_taken_0x22a9b8) {
            ctx->pc = 0x22A9E4u;
            goto label_22a9e4;
        }
    }
    ctx->pc = 0x22A9C0u;
label_22a9c0:
    // 0x22a9c0: 0xc067694  jal         func_19DA50
label_22a9c4:
    if (ctx->pc == 0x22A9C4u) {
        ctx->pc = 0x22A9C8u;
        goto label_22a9c8;
    }
    ctx->pc = 0x22A9C0u;
    SET_GPR_U32(ctx, 31, 0x22A9C8u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x22A9C0u, 0x22A9C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A9C8u;
label_22a9c8:
    // 0x22a9c8: 0x70404628  paddub      $t0, $v0, $zero
    ctx->pc = 0x22a9c8u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_22a9cc:
    // 0x22a9cc: 0x310300ff  andi        $v1, $t0, 0xFF
    ctx->pc = 0x22a9ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
label_22a9d0:
    // 0x22a9d0: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x22a9d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
label_22a9d4:
    // 0x22a9d4: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_22a9d8:
    if (ctx->pc == 0x22A9D8u) {
        ctx->pc = 0x22A9DCu;
        goto label_22a9dc;
    }
    ctx->pc = 0x22A9D4u;
    {
        const bool branch_taken_0x22a9d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22a9d4) {
            ctx->pc = 0x22A9E4u;
            goto label_22a9e4;
        }
    }
    ctx->pc = 0x22A9DCu;
label_22a9dc:
    // 0x22a9dc: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22a9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_22a9e0:
    // 0x22a9e0: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x22a9e0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_22a9e4:
    // 0x22a9e4: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22a9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_22a9e8:
    // 0x22a9e8: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x22a9e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_22a9ec:
    // 0x22a9ec: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_22a9f0:
    if (ctx->pc == 0x22A9F0u) {
        ctx->pc = 0x22A9F4u;
        goto label_22a9f4;
    }
    ctx->pc = 0x22A9ECu;
    {
        const bool branch_taken_0x22a9ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a9ec) {
            ctx->pc = 0x22A9FCu;
            goto label_22a9fc;
        }
    }
    ctx->pc = 0x22A9F4u;
label_22a9f4:
    // 0x22a9f4: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x22a9f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_22a9f8:
    // 0x22a9f8: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x22a9f8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
label_22a9fc:
    // 0x22a9fc: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x22a9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
label_22aa00:
    // 0x22aa00: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x22aa00u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_22aa04:
    // 0x22aa04: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x22aa04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_22aa08:
    // 0x22aa08: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x22aa08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294958308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22aa0c:
    // 0x22aa0c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x22aa0cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_22aa10:
    // 0x22aa10: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22aa10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_22aa14:
    // 0x22aa14: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x22aa14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22aa18:
    // 0x22aa18: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x22aa18u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22aa1c:
    // 0x22aa1c: 0x0  nop
    ctx->pc = 0x22aa1cu;
    // NOP
label_22aa20:
    // 0x22aa20: 0x45010008  bc1t        . + 4 + (0x8 << 2)
label_22aa24:
    if (ctx->pc == 0x22AA24u) {
        ctx->pc = 0x22AA28u;
        goto label_22aa28;
    }
    ctx->pc = 0x22AA20u;
    {
        const bool branch_taken_0x22aa20 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22aa20) {
            ctx->pc = 0x22AA44u;
            goto label_22aa44;
        }
    }
    ctx->pc = 0x22AA28u;
label_22aa28:
    // 0x22aa28: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x22aa28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_22aa2c:
    // 0x22aa2c: 0xc4810124  lwc1        $f1, 0x124($a0)
    ctx->pc = 0x22aa2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22aa30:
    // 0x22aa30: 0x3c034100  lui         $v1, 0x4100
    ctx->pc = 0x22aa30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
label_22aa34:
    // 0x22aa34: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22aa34u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22aa38:
    // 0x22aa38: 0x0  nop
    ctx->pc = 0x22aa38u;
    // NOP
label_22aa3c:
    // 0x22aa3c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x22aa3cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_22aa40:
    // 0x22aa40: 0xe4800124  swc1        $f0, 0x124($a0)
    ctx->pc = 0x22aa40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 292), bits); }
label_22aa44:
    // 0x22aa44: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22aa44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_22aa48:
    // 0x22aa48: 0xc4610124  lwc1        $f1, 0x124($v1)
    ctx->pc = 0x22aa48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22aa4c:
    // 0x22aa4c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x22aa4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_22aa50:
    // 0x22aa50: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x22aa50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294958308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22aa54:
    // 0x22aa54: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x22aa54u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22aa58:
    // 0x22aa58: 0x0  nop
    ctx->pc = 0x22aa58u;
    // NOP
label_22aa5c:
    // 0x22aa5c: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_22aa60:
    if (ctx->pc == 0x22AA60u) {
        ctx->pc = 0x22AA64u;
        goto label_22aa64;
    }
    ctx->pc = 0x22AA5Cu;
    {
        const bool branch_taken_0x22aa5c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22aa5c) {
            ctx->pc = 0x22AA80u;
            goto label_22aa80;
        }
    }
    ctx->pc = 0x22AA64u;
label_22aa64:
    // 0x22aa64: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x22aa64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_22aa68:
    // 0x22aa68: 0xc4810124  lwc1        $f1, 0x124($a0)
    ctx->pc = 0x22aa68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22aa6c:
    // 0x22aa6c: 0x3c054100  lui         $a1, 0x4100
    ctx->pc = 0x22aa6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16640 << 16));
label_22aa70:
    // 0x22aa70: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x22aa70u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22aa74:
    // 0x22aa74: 0x0  nop
    ctx->pc = 0x22aa74u;
    // NOP
label_22aa78:
    // 0x22aa78: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x22aa78u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_22aa7c:
    // 0x22aa7c: 0xe4800124  swc1        $f0, 0x124($a0)
    ctx->pc = 0x22aa7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 292), bits); }
label_22aa80:
    // 0x22aa80: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x22aa80u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_22aa84:
    // 0x22aa84: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22aa84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_22aa88:
    // 0x22aa88: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x22aa88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_22aa8c:
    // 0x22aa8c: 0x3e00008  jr          $ra
label_22aa90:
    if (ctx->pc == 0x22AA90u) {
        ctx->pc = 0x22AA94u;
        goto label_fallthrough_0x22aa8c;
    }
    ctx->pc = 0x22AA8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22AA8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x22aa8c:
    ctx->pc = 0x22AA94u;
}
