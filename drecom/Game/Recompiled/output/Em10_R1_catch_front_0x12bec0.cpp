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

// Function: Em10_R1_catch_front
// Address: 0x12bec0 - 0x12c894
void Em10_R1_catch_front_0x12bec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em10_R1_catch_front_0x12bec0");
#endif

    switch (ctx->pc) {
        case 0x12bec0u: goto label_12bec0;
        case 0x12bec4u: goto label_12bec4;
        case 0x12bec8u: goto label_12bec8;
        case 0x12beccu: goto label_12becc;
        case 0x12bed0u: goto label_12bed0;
        case 0x12bed4u: goto label_12bed4;
        case 0x12bed8u: goto label_12bed8;
        case 0x12bedcu: goto label_12bedc;
        case 0x12bee0u: goto label_12bee0;
        case 0x12bee4u: goto label_12bee4;
        case 0x12bee8u: goto label_12bee8;
        case 0x12beecu: goto label_12beec;
        case 0x12bef0u: goto label_12bef0;
        case 0x12bef4u: goto label_12bef4;
        case 0x12bef8u: goto label_12bef8;
        case 0x12befcu: goto label_12befc;
        case 0x12bf00u: goto label_12bf00;
        case 0x12bf04u: goto label_12bf04;
        case 0x12bf08u: goto label_12bf08;
        case 0x12bf0cu: goto label_12bf0c;
        case 0x12bf10u: goto label_12bf10;
        case 0x12bf14u: goto label_12bf14;
        case 0x12bf18u: goto label_12bf18;
        case 0x12bf1cu: goto label_12bf1c;
        case 0x12bf20u: goto label_12bf20;
        case 0x12bf24u: goto label_12bf24;
        case 0x12bf28u: goto label_12bf28;
        case 0x12bf2cu: goto label_12bf2c;
        case 0x12bf30u: goto label_12bf30;
        case 0x12bf34u: goto label_12bf34;
        case 0x12bf38u: goto label_12bf38;
        case 0x12bf3cu: goto label_12bf3c;
        case 0x12bf40u: goto label_12bf40;
        case 0x12bf44u: goto label_12bf44;
        case 0x12bf48u: goto label_12bf48;
        case 0x12bf4cu: goto label_12bf4c;
        case 0x12bf50u: goto label_12bf50;
        case 0x12bf54u: goto label_12bf54;
        case 0x12bf58u: goto label_12bf58;
        case 0x12bf5cu: goto label_12bf5c;
        case 0x12bf60u: goto label_12bf60;
        case 0x12bf64u: goto label_12bf64;
        case 0x12bf68u: goto label_12bf68;
        case 0x12bf6cu: goto label_12bf6c;
        case 0x12bf70u: goto label_12bf70;
        case 0x12bf74u: goto label_12bf74;
        case 0x12bf78u: goto label_12bf78;
        case 0x12bf7cu: goto label_12bf7c;
        case 0x12bf80u: goto label_12bf80;
        case 0x12bf84u: goto label_12bf84;
        case 0x12bf88u: goto label_12bf88;
        case 0x12bf8cu: goto label_12bf8c;
        case 0x12bf90u: goto label_12bf90;
        case 0x12bf94u: goto label_12bf94;
        case 0x12bf98u: goto label_12bf98;
        case 0x12bf9cu: goto label_12bf9c;
        case 0x12bfa0u: goto label_12bfa0;
        case 0x12bfa4u: goto label_12bfa4;
        case 0x12bfa8u: goto label_12bfa8;
        case 0x12bfacu: goto label_12bfac;
        case 0x12bfb0u: goto label_12bfb0;
        case 0x12bfb4u: goto label_12bfb4;
        case 0x12bfb8u: goto label_12bfb8;
        case 0x12bfbcu: goto label_12bfbc;
        case 0x12bfc0u: goto label_12bfc0;
        case 0x12bfc4u: goto label_12bfc4;
        case 0x12bfc8u: goto label_12bfc8;
        case 0x12bfccu: goto label_12bfcc;
        case 0x12bfd0u: goto label_12bfd0;
        case 0x12bfd4u: goto label_12bfd4;
        case 0x12bfd8u: goto label_12bfd8;
        case 0x12bfdcu: goto label_12bfdc;
        case 0x12bfe0u: goto label_12bfe0;
        case 0x12bfe4u: goto label_12bfe4;
        case 0x12bfe8u: goto label_12bfe8;
        case 0x12bfecu: goto label_12bfec;
        case 0x12bff0u: goto label_12bff0;
        case 0x12bff4u: goto label_12bff4;
        case 0x12bff8u: goto label_12bff8;
        case 0x12bffcu: goto label_12bffc;
        case 0x12c000u: goto label_12c000;
        case 0x12c004u: goto label_12c004;
        case 0x12c008u: goto label_12c008;
        case 0x12c00cu: goto label_12c00c;
        case 0x12c010u: goto label_12c010;
        case 0x12c014u: goto label_12c014;
        case 0x12c018u: goto label_12c018;
        case 0x12c01cu: goto label_12c01c;
        case 0x12c020u: goto label_12c020;
        case 0x12c024u: goto label_12c024;
        case 0x12c028u: goto label_12c028;
        case 0x12c02cu: goto label_12c02c;
        case 0x12c030u: goto label_12c030;
        case 0x12c034u: goto label_12c034;
        case 0x12c038u: goto label_12c038;
        case 0x12c03cu: goto label_12c03c;
        case 0x12c040u: goto label_12c040;
        case 0x12c044u: goto label_12c044;
        case 0x12c048u: goto label_12c048;
        case 0x12c04cu: goto label_12c04c;
        case 0x12c050u: goto label_12c050;
        case 0x12c054u: goto label_12c054;
        case 0x12c058u: goto label_12c058;
        case 0x12c05cu: goto label_12c05c;
        case 0x12c060u: goto label_12c060;
        case 0x12c064u: goto label_12c064;
        case 0x12c068u: goto label_12c068;
        case 0x12c06cu: goto label_12c06c;
        case 0x12c070u: goto label_12c070;
        case 0x12c074u: goto label_12c074;
        case 0x12c078u: goto label_12c078;
        case 0x12c07cu: goto label_12c07c;
        case 0x12c080u: goto label_12c080;
        case 0x12c084u: goto label_12c084;
        case 0x12c088u: goto label_12c088;
        case 0x12c08cu: goto label_12c08c;
        case 0x12c090u: goto label_12c090;
        case 0x12c094u: goto label_12c094;
        case 0x12c098u: goto label_12c098;
        case 0x12c09cu: goto label_12c09c;
        case 0x12c0a0u: goto label_12c0a0;
        case 0x12c0a4u: goto label_12c0a4;
        case 0x12c0a8u: goto label_12c0a8;
        case 0x12c0acu: goto label_12c0ac;
        case 0x12c0b0u: goto label_12c0b0;
        case 0x12c0b4u: goto label_12c0b4;
        case 0x12c0b8u: goto label_12c0b8;
        case 0x12c0bcu: goto label_12c0bc;
        case 0x12c0c0u: goto label_12c0c0;
        case 0x12c0c4u: goto label_12c0c4;
        case 0x12c0c8u: goto label_12c0c8;
        case 0x12c0ccu: goto label_12c0cc;
        case 0x12c0d0u: goto label_12c0d0;
        case 0x12c0d4u: goto label_12c0d4;
        case 0x12c0d8u: goto label_12c0d8;
        case 0x12c0dcu: goto label_12c0dc;
        case 0x12c0e0u: goto label_12c0e0;
        case 0x12c0e4u: goto label_12c0e4;
        case 0x12c0e8u: goto label_12c0e8;
        case 0x12c0ecu: goto label_12c0ec;
        case 0x12c0f0u: goto label_12c0f0;
        case 0x12c0f4u: goto label_12c0f4;
        case 0x12c0f8u: goto label_12c0f8;
        case 0x12c0fcu: goto label_12c0fc;
        case 0x12c100u: goto label_12c100;
        case 0x12c104u: goto label_12c104;
        case 0x12c108u: goto label_12c108;
        case 0x12c10cu: goto label_12c10c;
        case 0x12c110u: goto label_12c110;
        case 0x12c114u: goto label_12c114;
        case 0x12c118u: goto label_12c118;
        case 0x12c11cu: goto label_12c11c;
        case 0x12c120u: goto label_12c120;
        case 0x12c124u: goto label_12c124;
        case 0x12c128u: goto label_12c128;
        case 0x12c12cu: goto label_12c12c;
        case 0x12c130u: goto label_12c130;
        case 0x12c134u: goto label_12c134;
        case 0x12c138u: goto label_12c138;
        case 0x12c13cu: goto label_12c13c;
        case 0x12c140u: goto label_12c140;
        case 0x12c144u: goto label_12c144;
        case 0x12c148u: goto label_12c148;
        case 0x12c14cu: goto label_12c14c;
        case 0x12c150u: goto label_12c150;
        case 0x12c154u: goto label_12c154;
        case 0x12c158u: goto label_12c158;
        case 0x12c15cu: goto label_12c15c;
        case 0x12c160u: goto label_12c160;
        case 0x12c164u: goto label_12c164;
        case 0x12c168u: goto label_12c168;
        case 0x12c16cu: goto label_12c16c;
        case 0x12c170u: goto label_12c170;
        case 0x12c174u: goto label_12c174;
        case 0x12c178u: goto label_12c178;
        case 0x12c17cu: goto label_12c17c;
        case 0x12c180u: goto label_12c180;
        case 0x12c184u: goto label_12c184;
        case 0x12c188u: goto label_12c188;
        case 0x12c18cu: goto label_12c18c;
        case 0x12c190u: goto label_12c190;
        case 0x12c194u: goto label_12c194;
        case 0x12c198u: goto label_12c198;
        case 0x12c19cu: goto label_12c19c;
        case 0x12c1a0u: goto label_12c1a0;
        case 0x12c1a4u: goto label_12c1a4;
        case 0x12c1a8u: goto label_12c1a8;
        case 0x12c1acu: goto label_12c1ac;
        case 0x12c1b0u: goto label_12c1b0;
        case 0x12c1b4u: goto label_12c1b4;
        case 0x12c1b8u: goto label_12c1b8;
        case 0x12c1bcu: goto label_12c1bc;
        case 0x12c1c0u: goto label_12c1c0;
        case 0x12c1c4u: goto label_12c1c4;
        case 0x12c1c8u: goto label_12c1c8;
        case 0x12c1ccu: goto label_12c1cc;
        case 0x12c1d0u: goto label_12c1d0;
        case 0x12c1d4u: goto label_12c1d4;
        case 0x12c1d8u: goto label_12c1d8;
        case 0x12c1dcu: goto label_12c1dc;
        case 0x12c1e0u: goto label_12c1e0;
        case 0x12c1e4u: goto label_12c1e4;
        case 0x12c1e8u: goto label_12c1e8;
        case 0x12c1ecu: goto label_12c1ec;
        case 0x12c1f0u: goto label_12c1f0;
        case 0x12c1f4u: goto label_12c1f4;
        case 0x12c1f8u: goto label_12c1f8;
        case 0x12c1fcu: goto label_12c1fc;
        case 0x12c200u: goto label_12c200;
        case 0x12c204u: goto label_12c204;
        case 0x12c208u: goto label_12c208;
        case 0x12c20cu: goto label_12c20c;
        case 0x12c210u: goto label_12c210;
        case 0x12c214u: goto label_12c214;
        case 0x12c218u: goto label_12c218;
        case 0x12c21cu: goto label_12c21c;
        case 0x12c220u: goto label_12c220;
        case 0x12c224u: goto label_12c224;
        case 0x12c228u: goto label_12c228;
        case 0x12c22cu: goto label_12c22c;
        case 0x12c230u: goto label_12c230;
        case 0x12c234u: goto label_12c234;
        case 0x12c238u: goto label_12c238;
        case 0x12c23cu: goto label_12c23c;
        case 0x12c240u: goto label_12c240;
        case 0x12c244u: goto label_12c244;
        case 0x12c248u: goto label_12c248;
        case 0x12c24cu: goto label_12c24c;
        case 0x12c250u: goto label_12c250;
        case 0x12c254u: goto label_12c254;
        case 0x12c258u: goto label_12c258;
        case 0x12c25cu: goto label_12c25c;
        case 0x12c260u: goto label_12c260;
        case 0x12c264u: goto label_12c264;
        case 0x12c268u: goto label_12c268;
        case 0x12c26cu: goto label_12c26c;
        case 0x12c270u: goto label_12c270;
        case 0x12c274u: goto label_12c274;
        case 0x12c278u: goto label_12c278;
        case 0x12c27cu: goto label_12c27c;
        case 0x12c280u: goto label_12c280;
        case 0x12c284u: goto label_12c284;
        case 0x12c288u: goto label_12c288;
        case 0x12c28cu: goto label_12c28c;
        case 0x12c290u: goto label_12c290;
        case 0x12c294u: goto label_12c294;
        case 0x12c298u: goto label_12c298;
        case 0x12c29cu: goto label_12c29c;
        case 0x12c2a0u: goto label_12c2a0;
        case 0x12c2a4u: goto label_12c2a4;
        case 0x12c2a8u: goto label_12c2a8;
        case 0x12c2acu: goto label_12c2ac;
        case 0x12c2b0u: goto label_12c2b0;
        case 0x12c2b4u: goto label_12c2b4;
        case 0x12c2b8u: goto label_12c2b8;
        case 0x12c2bcu: goto label_12c2bc;
        case 0x12c2c0u: goto label_12c2c0;
        case 0x12c2c4u: goto label_12c2c4;
        case 0x12c2c8u: goto label_12c2c8;
        case 0x12c2ccu: goto label_12c2cc;
        case 0x12c2d0u: goto label_12c2d0;
        case 0x12c2d4u: goto label_12c2d4;
        case 0x12c2d8u: goto label_12c2d8;
        case 0x12c2dcu: goto label_12c2dc;
        case 0x12c2e0u: goto label_12c2e0;
        case 0x12c2e4u: goto label_12c2e4;
        case 0x12c2e8u: goto label_12c2e8;
        case 0x12c2ecu: goto label_12c2ec;
        case 0x12c2f0u: goto label_12c2f0;
        case 0x12c2f4u: goto label_12c2f4;
        case 0x12c2f8u: goto label_12c2f8;
        case 0x12c2fcu: goto label_12c2fc;
        case 0x12c300u: goto label_12c300;
        case 0x12c304u: goto label_12c304;
        case 0x12c308u: goto label_12c308;
        case 0x12c30cu: goto label_12c30c;
        case 0x12c310u: goto label_12c310;
        case 0x12c314u: goto label_12c314;
        case 0x12c318u: goto label_12c318;
        case 0x12c31cu: goto label_12c31c;
        case 0x12c320u: goto label_12c320;
        case 0x12c324u: goto label_12c324;
        case 0x12c328u: goto label_12c328;
        case 0x12c32cu: goto label_12c32c;
        case 0x12c330u: goto label_12c330;
        case 0x12c334u: goto label_12c334;
        case 0x12c338u: goto label_12c338;
        case 0x12c33cu: goto label_12c33c;
        case 0x12c340u: goto label_12c340;
        case 0x12c344u: goto label_12c344;
        case 0x12c348u: goto label_12c348;
        case 0x12c34cu: goto label_12c34c;
        case 0x12c350u: goto label_12c350;
        case 0x12c354u: goto label_12c354;
        case 0x12c358u: goto label_12c358;
        case 0x12c35cu: goto label_12c35c;
        case 0x12c360u: goto label_12c360;
        case 0x12c364u: goto label_12c364;
        case 0x12c368u: goto label_12c368;
        case 0x12c36cu: goto label_12c36c;
        case 0x12c370u: goto label_12c370;
        case 0x12c374u: goto label_12c374;
        case 0x12c378u: goto label_12c378;
        case 0x12c37cu: goto label_12c37c;
        case 0x12c380u: goto label_12c380;
        case 0x12c384u: goto label_12c384;
        case 0x12c388u: goto label_12c388;
        case 0x12c38cu: goto label_12c38c;
        case 0x12c390u: goto label_12c390;
        case 0x12c394u: goto label_12c394;
        case 0x12c398u: goto label_12c398;
        case 0x12c39cu: goto label_12c39c;
        case 0x12c3a0u: goto label_12c3a0;
        case 0x12c3a4u: goto label_12c3a4;
        case 0x12c3a8u: goto label_12c3a8;
        case 0x12c3acu: goto label_12c3ac;
        case 0x12c3b0u: goto label_12c3b0;
        case 0x12c3b4u: goto label_12c3b4;
        case 0x12c3b8u: goto label_12c3b8;
        case 0x12c3bcu: goto label_12c3bc;
        case 0x12c3c0u: goto label_12c3c0;
        case 0x12c3c4u: goto label_12c3c4;
        case 0x12c3c8u: goto label_12c3c8;
        case 0x12c3ccu: goto label_12c3cc;
        case 0x12c3d0u: goto label_12c3d0;
        case 0x12c3d4u: goto label_12c3d4;
        case 0x12c3d8u: goto label_12c3d8;
        case 0x12c3dcu: goto label_12c3dc;
        case 0x12c3e0u: goto label_12c3e0;
        case 0x12c3e4u: goto label_12c3e4;
        case 0x12c3e8u: goto label_12c3e8;
        case 0x12c3ecu: goto label_12c3ec;
        case 0x12c3f0u: goto label_12c3f0;
        case 0x12c3f4u: goto label_12c3f4;
        case 0x12c3f8u: goto label_12c3f8;
        case 0x12c3fcu: goto label_12c3fc;
        case 0x12c400u: goto label_12c400;
        case 0x12c404u: goto label_12c404;
        case 0x12c408u: goto label_12c408;
        case 0x12c40cu: goto label_12c40c;
        case 0x12c410u: goto label_12c410;
        case 0x12c414u: goto label_12c414;
        case 0x12c418u: goto label_12c418;
        case 0x12c41cu: goto label_12c41c;
        case 0x12c420u: goto label_12c420;
        case 0x12c424u: goto label_12c424;
        case 0x12c428u: goto label_12c428;
        case 0x12c42cu: goto label_12c42c;
        case 0x12c430u: goto label_12c430;
        case 0x12c434u: goto label_12c434;
        case 0x12c438u: goto label_12c438;
        case 0x12c43cu: goto label_12c43c;
        case 0x12c440u: goto label_12c440;
        case 0x12c444u: goto label_12c444;
        case 0x12c448u: goto label_12c448;
        case 0x12c44cu: goto label_12c44c;
        case 0x12c450u: goto label_12c450;
        case 0x12c454u: goto label_12c454;
        case 0x12c458u: goto label_12c458;
        case 0x12c45cu: goto label_12c45c;
        case 0x12c460u: goto label_12c460;
        case 0x12c464u: goto label_12c464;
        case 0x12c468u: goto label_12c468;
        case 0x12c46cu: goto label_12c46c;
        case 0x12c470u: goto label_12c470;
        case 0x12c474u: goto label_12c474;
        case 0x12c478u: goto label_12c478;
        case 0x12c47cu: goto label_12c47c;
        case 0x12c480u: goto label_12c480;
        case 0x12c484u: goto label_12c484;
        case 0x12c488u: goto label_12c488;
        case 0x12c48cu: goto label_12c48c;
        case 0x12c490u: goto label_12c490;
        case 0x12c494u: goto label_12c494;
        case 0x12c498u: goto label_12c498;
        case 0x12c49cu: goto label_12c49c;
        case 0x12c4a0u: goto label_12c4a0;
        case 0x12c4a4u: goto label_12c4a4;
        case 0x12c4a8u: goto label_12c4a8;
        case 0x12c4acu: goto label_12c4ac;
        case 0x12c4b0u: goto label_12c4b0;
        case 0x12c4b4u: goto label_12c4b4;
        case 0x12c4b8u: goto label_12c4b8;
        case 0x12c4bcu: goto label_12c4bc;
        case 0x12c4c0u: goto label_12c4c0;
        case 0x12c4c4u: goto label_12c4c4;
        case 0x12c4c8u: goto label_12c4c8;
        case 0x12c4ccu: goto label_12c4cc;
        case 0x12c4d0u: goto label_12c4d0;
        case 0x12c4d4u: goto label_12c4d4;
        case 0x12c4d8u: goto label_12c4d8;
        case 0x12c4dcu: goto label_12c4dc;
        case 0x12c4e0u: goto label_12c4e0;
        case 0x12c4e4u: goto label_12c4e4;
        case 0x12c4e8u: goto label_12c4e8;
        case 0x12c4ecu: goto label_12c4ec;
        case 0x12c4f0u: goto label_12c4f0;
        case 0x12c4f4u: goto label_12c4f4;
        case 0x12c4f8u: goto label_12c4f8;
        case 0x12c4fcu: goto label_12c4fc;
        case 0x12c500u: goto label_12c500;
        case 0x12c504u: goto label_12c504;
        case 0x12c508u: goto label_12c508;
        case 0x12c50cu: goto label_12c50c;
        case 0x12c510u: goto label_12c510;
        case 0x12c514u: goto label_12c514;
        case 0x12c518u: goto label_12c518;
        case 0x12c51cu: goto label_12c51c;
        case 0x12c520u: goto label_12c520;
        case 0x12c524u: goto label_12c524;
        case 0x12c528u: goto label_12c528;
        case 0x12c52cu: goto label_12c52c;
        case 0x12c530u: goto label_12c530;
        case 0x12c534u: goto label_12c534;
        case 0x12c538u: goto label_12c538;
        case 0x12c53cu: goto label_12c53c;
        case 0x12c540u: goto label_12c540;
        case 0x12c544u: goto label_12c544;
        case 0x12c548u: goto label_12c548;
        case 0x12c54cu: goto label_12c54c;
        case 0x12c550u: goto label_12c550;
        case 0x12c554u: goto label_12c554;
        case 0x12c558u: goto label_12c558;
        case 0x12c55cu: goto label_12c55c;
        case 0x12c560u: goto label_12c560;
        case 0x12c564u: goto label_12c564;
        case 0x12c568u: goto label_12c568;
        case 0x12c56cu: goto label_12c56c;
        case 0x12c570u: goto label_12c570;
        case 0x12c574u: goto label_12c574;
        case 0x12c578u: goto label_12c578;
        case 0x12c57cu: goto label_12c57c;
        case 0x12c580u: goto label_12c580;
        case 0x12c584u: goto label_12c584;
        case 0x12c588u: goto label_12c588;
        case 0x12c58cu: goto label_12c58c;
        case 0x12c590u: goto label_12c590;
        case 0x12c594u: goto label_12c594;
        case 0x12c598u: goto label_12c598;
        case 0x12c59cu: goto label_12c59c;
        case 0x12c5a0u: goto label_12c5a0;
        case 0x12c5a4u: goto label_12c5a4;
        case 0x12c5a8u: goto label_12c5a8;
        case 0x12c5acu: goto label_12c5ac;
        case 0x12c5b0u: goto label_12c5b0;
        case 0x12c5b4u: goto label_12c5b4;
        case 0x12c5b8u: goto label_12c5b8;
        case 0x12c5bcu: goto label_12c5bc;
        case 0x12c5c0u: goto label_12c5c0;
        case 0x12c5c4u: goto label_12c5c4;
        case 0x12c5c8u: goto label_12c5c8;
        case 0x12c5ccu: goto label_12c5cc;
        case 0x12c5d0u: goto label_12c5d0;
        case 0x12c5d4u: goto label_12c5d4;
        case 0x12c5d8u: goto label_12c5d8;
        case 0x12c5dcu: goto label_12c5dc;
        case 0x12c5e0u: goto label_12c5e0;
        case 0x12c5e4u: goto label_12c5e4;
        case 0x12c5e8u: goto label_12c5e8;
        case 0x12c5ecu: goto label_12c5ec;
        case 0x12c5f0u: goto label_12c5f0;
        case 0x12c5f4u: goto label_12c5f4;
        case 0x12c5f8u: goto label_12c5f8;
        case 0x12c5fcu: goto label_12c5fc;
        case 0x12c600u: goto label_12c600;
        case 0x12c604u: goto label_12c604;
        case 0x12c608u: goto label_12c608;
        case 0x12c60cu: goto label_12c60c;
        case 0x12c610u: goto label_12c610;
        case 0x12c614u: goto label_12c614;
        case 0x12c618u: goto label_12c618;
        case 0x12c61cu: goto label_12c61c;
        case 0x12c620u: goto label_12c620;
        case 0x12c624u: goto label_12c624;
        case 0x12c628u: goto label_12c628;
        case 0x12c62cu: goto label_12c62c;
        case 0x12c630u: goto label_12c630;
        case 0x12c634u: goto label_12c634;
        case 0x12c638u: goto label_12c638;
        case 0x12c63cu: goto label_12c63c;
        case 0x12c640u: goto label_12c640;
        case 0x12c644u: goto label_12c644;
        case 0x12c648u: goto label_12c648;
        case 0x12c64cu: goto label_12c64c;
        case 0x12c650u: goto label_12c650;
        case 0x12c654u: goto label_12c654;
        case 0x12c658u: goto label_12c658;
        case 0x12c65cu: goto label_12c65c;
        case 0x12c660u: goto label_12c660;
        case 0x12c664u: goto label_12c664;
        case 0x12c668u: goto label_12c668;
        case 0x12c66cu: goto label_12c66c;
        case 0x12c670u: goto label_12c670;
        case 0x12c674u: goto label_12c674;
        case 0x12c678u: goto label_12c678;
        case 0x12c67cu: goto label_12c67c;
        case 0x12c680u: goto label_12c680;
        case 0x12c684u: goto label_12c684;
        case 0x12c688u: goto label_12c688;
        case 0x12c68cu: goto label_12c68c;
        case 0x12c690u: goto label_12c690;
        case 0x12c694u: goto label_12c694;
        case 0x12c698u: goto label_12c698;
        case 0x12c69cu: goto label_12c69c;
        case 0x12c6a0u: goto label_12c6a0;
        case 0x12c6a4u: goto label_12c6a4;
        case 0x12c6a8u: goto label_12c6a8;
        case 0x12c6acu: goto label_12c6ac;
        case 0x12c6b0u: goto label_12c6b0;
        case 0x12c6b4u: goto label_12c6b4;
        case 0x12c6b8u: goto label_12c6b8;
        case 0x12c6bcu: goto label_12c6bc;
        case 0x12c6c0u: goto label_12c6c0;
        case 0x12c6c4u: goto label_12c6c4;
        case 0x12c6c8u: goto label_12c6c8;
        case 0x12c6ccu: goto label_12c6cc;
        case 0x12c6d0u: goto label_12c6d0;
        case 0x12c6d4u: goto label_12c6d4;
        case 0x12c6d8u: goto label_12c6d8;
        case 0x12c6dcu: goto label_12c6dc;
        case 0x12c6e0u: goto label_12c6e0;
        case 0x12c6e4u: goto label_12c6e4;
        case 0x12c6e8u: goto label_12c6e8;
        case 0x12c6ecu: goto label_12c6ec;
        case 0x12c6f0u: goto label_12c6f0;
        case 0x12c6f4u: goto label_12c6f4;
        case 0x12c6f8u: goto label_12c6f8;
        case 0x12c6fcu: goto label_12c6fc;
        case 0x12c700u: goto label_12c700;
        case 0x12c704u: goto label_12c704;
        case 0x12c708u: goto label_12c708;
        case 0x12c70cu: goto label_12c70c;
        case 0x12c710u: goto label_12c710;
        case 0x12c714u: goto label_12c714;
        case 0x12c718u: goto label_12c718;
        case 0x12c71cu: goto label_12c71c;
        case 0x12c720u: goto label_12c720;
        case 0x12c724u: goto label_12c724;
        case 0x12c728u: goto label_12c728;
        case 0x12c72cu: goto label_12c72c;
        case 0x12c730u: goto label_12c730;
        case 0x12c734u: goto label_12c734;
        case 0x12c738u: goto label_12c738;
        case 0x12c73cu: goto label_12c73c;
        case 0x12c740u: goto label_12c740;
        case 0x12c744u: goto label_12c744;
        case 0x12c748u: goto label_12c748;
        case 0x12c74cu: goto label_12c74c;
        case 0x12c750u: goto label_12c750;
        case 0x12c754u: goto label_12c754;
        case 0x12c758u: goto label_12c758;
        case 0x12c75cu: goto label_12c75c;
        case 0x12c760u: goto label_12c760;
        case 0x12c764u: goto label_12c764;
        case 0x12c768u: goto label_12c768;
        case 0x12c76cu: goto label_12c76c;
        case 0x12c770u: goto label_12c770;
        case 0x12c774u: goto label_12c774;
        case 0x12c778u: goto label_12c778;
        case 0x12c77cu: goto label_12c77c;
        case 0x12c780u: goto label_12c780;
        case 0x12c784u: goto label_12c784;
        case 0x12c788u: goto label_12c788;
        case 0x12c78cu: goto label_12c78c;
        case 0x12c790u: goto label_12c790;
        case 0x12c794u: goto label_12c794;
        case 0x12c798u: goto label_12c798;
        case 0x12c79cu: goto label_12c79c;
        case 0x12c7a0u: goto label_12c7a0;
        case 0x12c7a4u: goto label_12c7a4;
        case 0x12c7a8u: goto label_12c7a8;
        case 0x12c7acu: goto label_12c7ac;
        case 0x12c7b0u: goto label_12c7b0;
        case 0x12c7b4u: goto label_12c7b4;
        case 0x12c7b8u: goto label_12c7b8;
        case 0x12c7bcu: goto label_12c7bc;
        case 0x12c7c0u: goto label_12c7c0;
        case 0x12c7c4u: goto label_12c7c4;
        case 0x12c7c8u: goto label_12c7c8;
        case 0x12c7ccu: goto label_12c7cc;
        case 0x12c7d0u: goto label_12c7d0;
        case 0x12c7d4u: goto label_12c7d4;
        case 0x12c7d8u: goto label_12c7d8;
        case 0x12c7dcu: goto label_12c7dc;
        case 0x12c7e0u: goto label_12c7e0;
        case 0x12c7e4u: goto label_12c7e4;
        case 0x12c7e8u: goto label_12c7e8;
        case 0x12c7ecu: goto label_12c7ec;
        case 0x12c7f0u: goto label_12c7f0;
        case 0x12c7f4u: goto label_12c7f4;
        case 0x12c7f8u: goto label_12c7f8;
        case 0x12c7fcu: goto label_12c7fc;
        case 0x12c800u: goto label_12c800;
        case 0x12c804u: goto label_12c804;
        case 0x12c808u: goto label_12c808;
        case 0x12c80cu: goto label_12c80c;
        case 0x12c810u: goto label_12c810;
        case 0x12c814u: goto label_12c814;
        case 0x12c818u: goto label_12c818;
        case 0x12c81cu: goto label_12c81c;
        case 0x12c820u: goto label_12c820;
        case 0x12c824u: goto label_12c824;
        case 0x12c828u: goto label_12c828;
        case 0x12c82cu: goto label_12c82c;
        case 0x12c830u: goto label_12c830;
        case 0x12c834u: goto label_12c834;
        case 0x12c838u: goto label_12c838;
        case 0x12c83cu: goto label_12c83c;
        case 0x12c840u: goto label_12c840;
        case 0x12c844u: goto label_12c844;
        case 0x12c848u: goto label_12c848;
        case 0x12c84cu: goto label_12c84c;
        case 0x12c850u: goto label_12c850;
        case 0x12c854u: goto label_12c854;
        case 0x12c858u: goto label_12c858;
        case 0x12c85cu: goto label_12c85c;
        case 0x12c860u: goto label_12c860;
        case 0x12c864u: goto label_12c864;
        case 0x12c868u: goto label_12c868;
        case 0x12c86cu: goto label_12c86c;
        case 0x12c870u: goto label_12c870;
        case 0x12c874u: goto label_12c874;
        case 0x12c878u: goto label_12c878;
        case 0x12c87cu: goto label_12c87c;
        case 0x12c880u: goto label_12c880;
        case 0x12c884u: goto label_12c884;
        case 0x12c888u: goto label_12c888;
        case 0x12c88cu: goto label_12c88c;
        case 0x12c890u: goto label_12c890;
        default: break;
    }

    ctx->pc = 0x12bec0u;

label_12bec0:
    // 0x12bec0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x12bec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_12bec4:
    // 0x12bec4: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x12bec4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
label_12bec8:
    // 0x12bec8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x12bec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_12becc:
    // 0x12becc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x12beccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_12bed0:
    // 0x12bed0: 0xafa40068  sw          $a0, 0x68($sp)
    ctx->pc = 0x12bed0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 4));
label_12bed4:
    // 0x12bed4: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x12bed4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
label_12bed8:
    // 0x12bed8: 0x2470dbc0  addiu       $s0, $v1, -0x2440
    ctx->pc = 0x12bed8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958016));
label_12bedc:
    // 0x12bedc: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12bedcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12bee0:
    // 0x12bee0: 0x24711330  addiu       $s1, $v1, 0x1330
    ctx->pc = 0x12bee0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_12bee4:
    // 0x12bee4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x12bee4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_12bee8:
    // 0x12bee8: 0x8c241a64  lw          $a0, 0x1A64($at)
    ctx->pc = 0x12bee8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6756)));
label_12beec:
    // 0x12beec: 0x34830010  ori         $v1, $a0, 0x10
    ctx->pc = 0x12beecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16);
label_12bef0:
    // 0x12bef0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x12bef0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_12bef4:
    // 0x12bef4: 0xac231a64  sw          $v1, 0x1A64($at)
    ctx->pc = 0x12bef4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6756), GPR_U32(ctx, 3));
label_12bef8:
    // 0x12bef8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x12bef8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12befc:
    // 0x12befc: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x12befcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_12bf00:
    // 0x12bf00: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x12bf00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_12bf04:
    // 0x12bf04: 0x2c61000a  sltiu       $at, $v1, 0xA
    ctx->pc = 0x12bf04u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_12bf08:
    // 0x12bf08: 0x1020020e  beqz        $at, . + 4 + (0x20E << 2)
label_12bf0c:
    if (ctx->pc == 0x12BF0Cu) {
        ctx->pc = 0x12BF10u;
        goto label_12bf10;
    }
    ctx->pc = 0x12BF08u;
    {
        const bool branch_taken_0x12bf08 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x12bf08) {
            ctx->pc = 0x12C744u;
            goto label_12c744;
        }
    }
    ctx->pc = 0x12BF10u;
label_12bf10:
    // 0x12bf10: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x12bf10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
label_12bf14:
    // 0x12bf14: 0x2485e4a0  addiu       $a1, $a0, -0x1B60
    ctx->pc = 0x12bf14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960288));
label_12bf18:
    // 0x12bf18: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x12bf18u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_12bf1c:
    // 0x12bf1c: 0xc53821  addu        $a3, $a2, $a1
    ctx->pc = 0x12bf1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_12bf20:
    // 0x12bf20: 0x8ce80000  lw          $t0, 0x0($a3)
    ctx->pc = 0x12bf20u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_12bf24:
    // 0x12bf24: 0x1000008  jr          $t0
label_12bf28:
    if (ctx->pc == 0x12BF28u) {
        ctx->pc = 0x12BF2Cu;
        goto label_12bf2c;
    }
    ctx->pc = 0x12BF24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 8);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12BF24u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x12BF2Cu;
label_12bf2c:
    // 0x12bf2c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x12bf2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12bf30:
    // 0x12bf30: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x12bf30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12bf34:
    // 0x12bf34: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x12bf34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_12bf38:
    // 0x12bf38: 0x2406052f  addiu       $a2, $zero, 0x52F
    ctx->pc = 0x12bf38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1327));
label_12bf3c:
    // 0x12bf3c: 0x24070041  addiu       $a3, $zero, 0x41
    ctx->pc = 0x12bf3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
label_12bf40:
    // 0x12bf40: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x12bf40u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_12bf44:
    // 0x12bf44: 0xc0965d0  jal         func_259740
label_12bf48:
    if (ctx->pc == 0x12BF48u) {
        ctx->pc = 0x12BF4Cu;
        goto label_12bf4c;
    }
    ctx->pc = 0x12BF44u;
    SET_GPR_U32(ctx, 31, 0x12BF4Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x12BF44u, 0x12BF4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BF4Cu;
label_12bf4c:
    // 0x12bf4c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x12bf4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12bf50:
    // 0x12bf50: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x12bf50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12bf54:
    // 0x12bf54: 0x244512b0  addiu       $a1, $v0, 0x12B0
    ctx->pc = 0x12bf54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4784));
label_12bf58:
    // 0x12bf58: 0xc096c60  jal         func_25B180
label_12bf5c:
    if (ctx->pc == 0x12BF5Cu) {
        ctx->pc = 0x12BF60u;
        goto label_12bf60;
    }
    ctx->pc = 0x12BF58u;
    SET_GPR_U32(ctx, 31, 0x12BF60u);
    ctx->pc = 0x25B180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B180u, 0x12BF58u, 0x12BF60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BF60u;
label_12bf60:
    // 0x12bf60: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x12bf60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12bf64:
    // 0x12bf64: 0xc05ce54  jal         func_173950
label_12bf68:
    if (ctx->pc == 0x12BF68u) {
        ctx->pc = 0x12BF6Cu;
        goto label_12bf6c;
    }
    ctx->pc = 0x12BF64u;
    SET_GPR_U32(ctx, 31, 0x12BF6Cu);
    ctx->pc = 0x173950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173950u, 0x12BF64u, 0x12BF6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BF6Cu;
label_12bf6c:
    // 0x12bf6c: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x12bf6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_12bf70:
    // 0x12bf70: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x12bf70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12bf74:
    // 0x12bf74: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x12bf74u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
label_12bf78:
    // 0x12bf78: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x12bf78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_12bf7c:
    // 0x12bf7c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x12bf7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12bf80:
    // 0x12bf80: 0xa08210a8  sb          $v0, 0x10A8($a0)
    ctx->pc = 0x12bf80u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4264), (uint8_t)GPR_U32(ctx, 2));
label_12bf84:
    // 0x12bf84: 0xae0013fc  sw          $zero, 0x13FC($s0)
    ctx->pc = 0x12bf84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5116), GPR_U32(ctx, 0));
label_12bf88:
    // 0x12bf88: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x12bf88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12bf8c:
    // 0x12bf8c: 0xa4a0127e  sh          $zero, 0x127E($a1)
    ctx->pc = 0x12bf8cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4734), (uint16_t)GPR_U32(ctx, 0));
label_12bf90:
    // 0x12bf90: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x12bf90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12bf94:
    // 0x12bf94: 0x90440002  lbu         $a0, 0x2($v0)
    ctx->pc = 0x12bf94u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_12bf98:
    // 0x12bf98: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x12bf98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_12bf9c:
    // 0x12bf9c: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x12bf9cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
label_12bfa0:
    // 0x12bfa0: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x12bfa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12bfa4:
    // 0x12bfa4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x12bfa4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_12bfa8:
    // 0x12bfa8: 0xc096b40  jal         func_25AD00
label_12bfac:
    if (ctx->pc == 0x12BFACu) {
        ctx->pc = 0x12BFB0u;
        goto label_12bfb0;
    }
    ctx->pc = 0x12BFA8u;
    SET_GPR_U32(ctx, 31, 0x12BFB0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x12BFA8u, 0x12BFB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BFB0u;
label_12bfb0:
    // 0x12bfb0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x12bfb0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_12bfb4:
    // 0x12bfb4: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x12bfb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12bfb8:
    // 0x12bfb8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x12bfb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12bfbc:
    // 0x12bfbc: 0x3c023e32  lui         $v0, 0x3E32
    ctx->pc = 0x12bfbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15922 << 16));
label_12bfc0:
    // 0x12bfc0: 0x3443b8c2  ori         $v1, $v0, 0xB8C2
    ctx->pc = 0x12bfc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)47298);
label_12bfc4:
    // 0x12bfc4: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x12bfc4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_12bfc8:
    // 0x12bfc8: 0xc4ac1290  lwc1        $f12, 0x1290($a1)
    ctx->pc = 0x12bfc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_12bfcc:
    // 0x12bfcc: 0xc48d00d4  lwc1        $f13, 0xD4($a0)
    ctx->pc = 0x12bfccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_12bfd0:
    // 0x12bfd0: 0xc058f50  jal         func_163D40
label_12bfd4:
    if (ctx->pc == 0x12BFD4u) {
        ctx->pc = 0x12BFD8u;
        goto label_12bfd8;
    }
    ctx->pc = 0x12BFD0u;
    SET_GPR_U32(ctx, 31, 0x12BFD8u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x12BFD0u, 0x12BFD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BFD8u;
label_12bfd8:
    // 0x12bfd8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x12bfd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12bfdc:
    // 0x12bfdc: 0xe48000d4  swc1        $f0, 0xD4($a0)
    ctx->pc = 0x12bfdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 212), bits); }
label_12bfe0:
    // 0x12bfe0: 0x3c063e99  lui         $a2, 0x3E99
    ctx->pc = 0x12bfe0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16025 << 16));
label_12bfe4:
    // 0x12bfe4: 0x34c5999a  ori         $a1, $a2, 0x999A
    ctx->pc = 0x12bfe4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)39322);
label_12bfe8:
    // 0x12bfe8: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x12bfe8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_12bfec:
    // 0x12bfec: 0x8fa70068  lw          $a3, 0x68($sp)
    ctx->pc = 0x12bfecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12bff0:
    // 0x12bff0: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x12bff0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
label_12bff4:
    // 0x12bff4: 0xc05ce88  jal         func_173A20
label_12bff8:
    if (ctx->pc == 0x12BFF8u) {
        ctx->pc = 0x12BFFCu;
        goto label_12bffc;
    }
    ctx->pc = 0x12BFF4u;
    SET_GPR_U32(ctx, 31, 0x12BFFCu);
    ctx->pc = 0x173A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173A20u, 0x12BFF4u, 0x12BFFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BFFCu;
label_12bffc:
    // 0x12bffc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x12bffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12c000:
    // 0x12c000: 0x8442127e  lh          $v0, 0x127E($v0)
    ctx->pc = 0x12c000u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4734)));
label_12c004:
    // 0x12c004: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_12c008:
    if (ctx->pc == 0x12C008u) {
        ctx->pc = 0x12C00Cu;
        goto label_12c00c;
    }
    ctx->pc = 0x12C004u;
    {
        const bool branch_taken_0x12c004 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12c004) {
            ctx->pc = 0x12C020u;
            goto label_12c020;
        }
    }
    ctx->pc = 0x12C00Cu;
label_12c00c:
    // 0x12c00c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x12c00cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12c010:
    // 0x12c010: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x12c010u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12c014:
    // 0x12c014: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x12c014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_12c018:
    // 0x12c018: 0xc05cd58  jal         func_173560
label_12c01c:
    if (ctx->pc == 0x12C01Cu) {
        ctx->pc = 0x12C020u;
        goto label_12c020;
    }
    ctx->pc = 0x12C018u;
    SET_GPR_U32(ctx, 31, 0x12C020u);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x12C018u, 0x12C020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C020u;
label_12c020:
    // 0x12c020: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x12c020u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12c024:
    // 0x12c024: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12c024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12c028:
    // 0x12c028: 0xa464127e  sh          $a0, 0x127E($v1)
    ctx->pc = 0x12c028u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4734), (uint16_t)GPR_U32(ctx, 4));
label_12c02c:
    // 0x12c02c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x12c02cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12c030:
    // 0x12c030: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x12c030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_12c034:
    // 0x12c034: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x12c034u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
label_12c038:
    // 0x12c038: 0xc040c9e  jal         func_103278
label_12c03c:
    if (ctx->pc == 0x12C03Cu) {
        ctx->pc = 0x12C040u;
        goto label_12c040;
    }
    ctx->pc = 0x12C038u;
    SET_GPR_U32(ctx, 31, 0x12C040u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x12C040u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x12C040u) { return; }
    ctx->pc = 0x12C040u;
label_12c040:
    // 0x12c040: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x12c040u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12c044:
    // 0x12c044: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x12c044u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12c048:
    // 0x12c048: 0xc05cec4  jal         func_173B10
label_12c04c:
    if (ctx->pc == 0x12C04Cu) {
        ctx->pc = 0x12C050u;
        goto label_12c050;
    }
    ctx->pc = 0x12C048u;
    SET_GPR_U32(ctx, 31, 0x12C050u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x12C048u, 0x12C050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C050u;
label_12c050:
    // 0x12c050: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x12c050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12c054:
    // 0x12c054: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x12c054u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_12c058:
    // 0x12c058: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x12c058u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
label_12c05c:
    // 0x12c05c: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x12c05cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_12c060:
    // 0x12c060: 0xc0675b0  jal         func_19D6C0
label_12c064:
    if (ctx->pc == 0x12C064u) {
        ctx->pc = 0x12C068u;
        goto label_12c068;
    }
    ctx->pc = 0x12C060u;
    SET_GPR_U32(ctx, 31, 0x12C068u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x12C060u, 0x12C068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C068u;
label_12c068:
    // 0x12c068: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x12c068u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_12c06c:
    // 0x12c06c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x12c06cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12c070:
    // 0x12c070: 0xc48112a0  lwc1        $f1, 0x12A0($a0)
    ctx->pc = 0x12c070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12c074:
    // 0x12c074: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x12c074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12c078:
    // 0x12c078: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x12c078u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_12c07c:
    // 0x12c07c: 0xe48012a0  swc1        $f0, 0x12A0($a0)
    ctx->pc = 0x12c07cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4768), bits); }
label_12c080:
    // 0x12c080: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12c080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12c084:
    // 0x12c084: 0xc46112a8  lwc1        $f1, 0x12A8($v1)
    ctx->pc = 0x12c084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12c088:
    // 0x12c088: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x12c088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12c08c:
    // 0x12c08c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x12c08cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_12c090:
    // 0x12c090: 0xe46012a8  swc1        $f0, 0x12A8($v1)
    ctx->pc = 0x12c090u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4776), bits); }
label_12c094:
    // 0x12c094: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x12c094u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12c098:
    // 0x12c098: 0xc0974dc  jal         func_25D370
label_12c09c:
    if (ctx->pc == 0x12C09Cu) {
        ctx->pc = 0x12C0A0u;
        goto label_12c0a0;
    }
    ctx->pc = 0x12C098u;
    SET_GPR_U32(ctx, 31, 0x12C0A0u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x12C098u, 0x12C0A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C0A0u;
label_12c0a0:
    // 0x12c0a0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x12c0a0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_12c0a4:
    // 0x12c0a4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12c0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12c0a8:
    // 0x12c0a8: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x12c0a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_12c0ac:
    // 0x12c0ac: 0x106001a5  beqz        $v1, . + 4 + (0x1A5 << 2)
label_12c0b0:
    if (ctx->pc == 0x12C0B0u) {
        ctx->pc = 0x12C0B4u;
        goto label_12c0b4;
    }
    ctx->pc = 0x12C0ACu;
    {
        const bool branch_taken_0x12c0ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12c0ac) {
            ctx->pc = 0x12C744u;
            goto label_12c744;
        }
    }
    ctx->pc = 0x12C0B4u;
label_12c0b4:
    // 0x12c0b4: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x12c0b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12c0b8:
    // 0x12c0b8: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x12c0b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_12c0bc:
    // 0x12c0bc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x12c0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_12c0c0:
    // 0x12c0c0: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x12c0c0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_12c0c4:
    // 0x12c0c4: 0x1000019f  b           . + 4 + (0x19F << 2)
label_12c0c8:
    if (ctx->pc == 0x12C0C8u) {
        ctx->pc = 0x12C0CCu;
        goto label_12c0cc;
    }
    ctx->pc = 0x12C0C4u;
    {
        const bool branch_taken_0x12c0c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12c0c4) {
            ctx->pc = 0x12C744u;
            goto label_12c744;
        }
    }
    ctx->pc = 0x12C0CCu;
label_12c0cc:
    // 0x12c0cc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x12c0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12c0d0:
    // 0x12c0d0: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x12c0d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12c0d4:
    // 0x12c0d4: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x12c0d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_12c0d8:
    // 0x12c0d8: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x12c0d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_12c0dc:
    // 0x12c0dc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x12c0dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12c0e0:
    // 0x12c0e0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x12c0e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_12c0e4:
    // 0x12c0e4: 0xc0965d0  jal         func_259740
label_12c0e8:
    if (ctx->pc == 0x12C0E8u) {
        ctx->pc = 0x12C0ECu;
        goto label_12c0ec;
    }
    ctx->pc = 0x12C0E4u;
    SET_GPR_U32(ctx, 31, 0x12C0ECu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x12C0E4u, 0x12C0ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C0ECu;
label_12c0ec:
    // 0x12c0ec: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12c0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12c0f0:
    // 0x12c0f0: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x12c0f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_12c0f4:
    // 0x12c0f4: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x12c0f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_12c0f8:
    // 0x12c0f8: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x12c0f8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
label_12c0fc:
    // 0x12c0fc: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x12c0fcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_12c100:
    // 0x12c100: 0xc057634  jal         func_15D8D0
label_12c104:
    if (ctx->pc == 0x12C104u) {
        ctx->pc = 0x12C108u;
        goto label_12c108;
    }
    ctx->pc = 0x12C100u;
    SET_GPR_U32(ctx, 31, 0x12C108u);
    ctx->pc = 0x15D8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D8D0u, 0x12C100u, 0x12C108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C108u;
label_12c108:
    // 0x12c108: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_12c10c:
    if (ctx->pc == 0x12C10Cu) {
        ctx->pc = 0x12C110u;
        goto label_12c110;
    }
    ctx->pc = 0x12C108u;
    {
        const bool branch_taken_0x12c108 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12c108) {
            ctx->pc = 0x12C120u;
            goto label_12c120;
        }
    }
    ctx->pc = 0x12C110u;
label_12c110:
    // 0x12c110: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x12c110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12c114:
    // 0x12c114: 0x84451278  lh          $a1, 0x1278($v0)
    ctx->pc = 0x12c114u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
label_12c118:
    // 0x12c118: 0x24a7ffff  addiu       $a3, $a1, -0x1
    ctx->pc = 0x12c118u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_12c11c:
    // 0x12c11c: 0xa4471278  sh          $a3, 0x1278($v0)
    ctx->pc = 0x12c11cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 7));
label_12c120:
    // 0x12c120: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x12c120u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12c124:
    // 0x12c124: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x12c124u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_12c128:
    // 0x12c128: 0xc096b40  jal         func_25AD00
label_12c12c:
    if (ctx->pc == 0x12C12Cu) {
        ctx->pc = 0x12C130u;
        goto label_12c130;
    }
    ctx->pc = 0x12C128u;
    SET_GPR_U32(ctx, 31, 0x12C130u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x12C128u, 0x12C130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C130u;
label_12c130:
    // 0x12c130: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x12c130u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12c134:
    // 0x12c134: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x12c134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12c138:
    // 0x12c138: 0x3c033e32  lui         $v1, 0x3E32
    ctx->pc = 0x12c138u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15922 << 16));
label_12c13c:
    // 0x12c13c: 0x3464b8c2  ori         $a0, $v1, 0xB8C2
    ctx->pc = 0x12c13cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)47298);
label_12c140:
    // 0x12c140: 0x44847000  mtc1        $a0, $f14
    ctx->pc = 0x12c140u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_12c144:
    // 0x12c144: 0xc4ac1290  lwc1        $f12, 0x1290($a1)
    ctx->pc = 0x12c144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_12c148:
    // 0x12c148: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x12c148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_12c14c:
    // 0x12c14c: 0xc058f50  jal         func_163D40
label_12c150:
    if (ctx->pc == 0x12C150u) {
        ctx->pc = 0x12C154u;
        goto label_12c154;
    }
    ctx->pc = 0x12C14Cu;
    SET_GPR_U32(ctx, 31, 0x12C154u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x12C14Cu, 0x12C154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C154u;
label_12c154:
    // 0x12c154: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x12c154u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12c158:
    // 0x12c158: 0xe4a000d4  swc1        $f0, 0xD4($a1)
    ctx->pc = 0x12c158u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 212), bits); }
label_12c15c:
    // 0x12c15c: 0x3c033e99  lui         $v1, 0x3E99
    ctx->pc = 0x12c15cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16025 << 16));
label_12c160:
    // 0x12c160: 0x3462999a  ori         $v0, $v1, 0x999A
    ctx->pc = 0x12c160u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
label_12c164:
    // 0x12c164: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x12c164u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_12c168:
    // 0x12c168: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x12c168u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12c16c:
    // 0x12c16c: 0xc05ce88  jal         func_173A20
label_12c170:
    if (ctx->pc == 0x12C170u) {
        ctx->pc = 0x12C174u;
        goto label_12c174;
    }
    ctx->pc = 0x12C16Cu;
    SET_GPR_U32(ctx, 31, 0x12C174u);
    ctx->pc = 0x173A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173A20u, 0x12C16Cu, 0x12C174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C174u;
label_12c174:
    // 0x12c174: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x12c174u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_12c178:
    // 0x12c178: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12c178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12c17c:
    // 0x12c17c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x12c17cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12c180:
    // 0x12c180: 0xc46c1290  lwc1        $f12, 0x1290($v1)
    ctx->pc = 0x12c180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_12c184:
    // 0x12c184: 0xc05cd58  jal         func_173560
label_12c188:
    if (ctx->pc == 0x12C188u) {
        ctx->pc = 0x12C18Cu;
        goto label_12c18c;
    }
    ctx->pc = 0x12C184u;
    SET_GPR_U32(ctx, 31, 0x12C18Cu);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x12C184u, 0x12C18Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C18Cu;
label_12c18c:
    // 0x12c18c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x12c18cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12c190:
    // 0x12c190: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x12c190u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_12c194:
    // 0x12c194: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x12c194u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
label_12c198:
    // 0x12c198: 0xc040c9e  jal         func_103278
label_12c19c:
    if (ctx->pc == 0x12C19Cu) {
        ctx->pc = 0x12C1A0u;
        goto label_12c1a0;
    }
    ctx->pc = 0x12C198u;
    SET_GPR_U32(ctx, 31, 0x12C1A0u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x12C1A0u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x12C1A0u) { return; }
    ctx->pc = 0x12C1A0u;
label_12c1a0:
    // 0x12c1a0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x12c1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12c1a4:
    // 0x12c1a4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x12c1a4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_12c1a8:
    // 0x12c1a8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x12c1a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12c1ac:
    // 0x12c1ac: 0xc05cec4  jal         func_173B10
label_12c1b0:
    if (ctx->pc == 0x12C1B0u) {
        ctx->pc = 0x12C1B4u;
        goto label_12c1b4;
    }
    ctx->pc = 0x12C1ACu;
    SET_GPR_U32(ctx, 31, 0x12C1B4u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x12C1ACu, 0x12C1B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C1B4u;
label_12c1b4:
    // 0x12c1b4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12c1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12c1b8:
    // 0x12c1b8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x12c1b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_12c1bc:
    // 0x12c1bc: 0x24620120  addiu       $v0, $v1, 0x120
    ctx->pc = 0x12c1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
label_12c1c0:
    // 0x12c1c0: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x12c1c0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_12c1c4:
    // 0x12c1c4: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x12c1c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_12c1c8:
    // 0x12c1c8: 0xc0675b0  jal         func_19D6C0
label_12c1cc:
    if (ctx->pc == 0x12C1CCu) {
        ctx->pc = 0x12C1D0u;
        goto label_12c1d0;
    }
    ctx->pc = 0x12C1C8u;
    SET_GPR_U32(ctx, 31, 0x12C1D0u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x12C1C8u, 0x12C1D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C1D0u;
label_12c1d0:
    // 0x12c1d0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x12c1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12c1d4:
    // 0x12c1d4: 0xc44112a0  lwc1        $f1, 0x12A0($v0)
    ctx->pc = 0x12c1d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12c1d8:
    // 0x12c1d8: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x12c1d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12c1dc:
    // 0x12c1dc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x12c1dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_12c1e0:
    // 0x12c1e0: 0xe44012a0  swc1        $f0, 0x12A0($v0)
    ctx->pc = 0x12c1e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4768), bits); }
label_12c1e4:
    // 0x12c1e4: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x12c1e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12c1e8:
    // 0x12c1e8: 0xc48112a8  lwc1        $f1, 0x12A8($a0)
    ctx->pc = 0x12c1e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12c1ec:
    // 0x12c1ec: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x12c1ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12c1f0:
    // 0x12c1f0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x12c1f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_12c1f4:
    // 0x12c1f4: 0xe48012a8  swc1        $f0, 0x12A8($a0)
    ctx->pc = 0x12c1f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4776), bits); }
label_12c1f8:
    // 0x12c1f8: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x12c1f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12c1fc:
    // 0x12c1fc: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x12c1fcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_12c200:
    // 0x12c200: 0xc0974dc  jal         func_25D370
label_12c204:
    if (ctx->pc == 0x12C204u) {
        ctx->pc = 0x12C208u;
        goto label_12c208;
    }
    ctx->pc = 0x12C200u;
    SET_GPR_U32(ctx, 31, 0x12C208u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x12C200u, 0x12C208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C208u;
label_12c208:
    // 0x12c208: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x12c208u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12c20c:
    // 0x12c20c: 0x908309e7  lbu         $v1, 0x9E7($a0)
    ctx->pc = 0x12c20cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2535)));
label_12c210:
    // 0x12c210: 0x1060014c  beqz        $v1, . + 4 + (0x14C << 2)
label_12c214:
    if (ctx->pc == 0x12C214u) {
        ctx->pc = 0x12C218u;
        goto label_12c218;
    }
    ctx->pc = 0x12C210u;
    {
        const bool branch_taken_0x12c210 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12c210) {
            ctx->pc = 0x12C744u;
            goto label_12c744;
        }
    }
    ctx->pc = 0x12C218u;
label_12c218:
    // 0x12c218: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x12c218u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_12c21c:
    // 0x12c21c: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x12c21cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12c220:
    // 0x12c220: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x12c220u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
label_12c224:
    // 0x12c224: 0x84268db8  lh          $a2, -0x7248($at)
    ctx->pc = 0x12c224u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294938040)));
label_12c228:
    // 0x12c228: 0xc06d1d8  jal         func_1B4760
label_12c22c:
    if (ctx->pc == 0x12C22Cu) {
        ctx->pc = 0x12C230u;
        goto label_12c230;
    }
    ctx->pc = 0x12C228u;
    SET_GPR_U32(ctx, 31, 0x12C230u);
    ctx->pc = 0x1B4760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4760u, 0x12C228u, 0x12C230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C230u;
label_12c230:
    // 0x12c230: 0x860310a6  lh          $v1, 0x10A6($s0)
    ctx->pc = 0x12c230u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4262)));
label_12c234:
    // 0x12c234: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x12c234u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_12c238:
    // 0x12c238: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x12c238u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_12c23c:
    // 0x12c23c: 0x461000f  bgez        $v1, . + 4 + (0xF << 2)
label_12c240:
    if (ctx->pc == 0x12C240u) {
        ctx->pc = 0x12C244u;
        goto label_12c244;
    }
    ctx->pc = 0x12C23Cu;
    {
        const bool branch_taken_0x12c23c = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x12c23c) {
            ctx->pc = 0x12C27Cu;
            goto label_12c27c;
        }
    }
    ctx->pc = 0x12C244u;
label_12c244:
    // 0x12c244: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x12c244u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12c248:
    // 0x12c248: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12c248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12c24c:
    // 0x12c24c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x12c24cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_12c250:
    // 0x12c250: 0x24040015  addiu       $a0, $zero, 0x15
    ctx->pc = 0x12c250u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_12c254:
    // 0x12c254: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12c254u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12c258:
    // 0x12c258: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x12c258u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_12c25c:
    // 0x12c25c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12c25cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12c260:
    // 0x12c260: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x12c260u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_12c264:
    // 0x12c264: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12c264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12c268:
    // 0x12c268: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x12c268u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_12c26c:
    // 0x12c26c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12c26cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12c270:
    // 0x12c270: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x12c270u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_12c274:
    // 0x12c274: 0x10000181  b           . + 4 + (0x181 << 2)
label_12c278:
    if (ctx->pc == 0x12C278u) {
        ctx->pc = 0x12C27Cu;
        goto label_12c27c;
    }
    ctx->pc = 0x12C274u;
    {
        const bool branch_taken_0x12c274 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12c274) {
            ctx->pc = 0x12C87Cu;
            goto label_12c87c;
        }
    }
    ctx->pc = 0x12C27Cu;
label_12c27c:
    // 0x12c27c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x12c27cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12c280:
    // 0x12c280: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x12c280u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
label_12c284:
    // 0x12c284: 0x2463fffd  addiu       $v1, $v1, -0x3
    ctx->pc = 0x12c284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967293));
label_12c288:
    // 0x12c288: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x12c288u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
label_12c28c:
    // 0x12c28c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12c28cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12c290:
    // 0x12c290: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x12c290u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
label_12c294:
    // 0x12c294: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x12c294u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_12c298:
    // 0x12c298: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x12c298u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_12c29c:
    // 0x12c29c: 0x1c600020  bgtz        $v1, . + 4 + (0x20 << 2)
label_12c2a0:
    if (ctx->pc == 0x12C2A0u) {
        ctx->pc = 0x12C2A4u;
        goto label_12c2a4;
    }
    ctx->pc = 0x12C29Cu;
    {
        const bool branch_taken_0x12c29c = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x12c29c) {
            ctx->pc = 0x12C320u;
            goto label_12c320;
        }
    }
    ctx->pc = 0x12C2A4u;
label_12c2a4:
    // 0x12c2a4: 0xa6001278  sh          $zero, 0x1278($s0)
    ctx->pc = 0x12c2a4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4728), (uint16_t)GPR_U32(ctx, 0));
label_12c2a8:
    // 0x12c2a8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x12c2a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12c2ac:
    // 0x12c2ac: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x12c2acu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_12c2b0:
    // 0x12c2b0: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x12c2b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
label_12c2b4:
    // 0x12c2b4: 0x84268dc0  lh          $a2, -0x7240($at)
    ctx->pc = 0x12c2b4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294938048)));
label_12c2b8:
    // 0x12c2b8: 0xc06d1d8  jal         func_1B4760
label_12c2bc:
    if (ctx->pc == 0x12C2BCu) {
        ctx->pc = 0x12C2C0u;
        goto label_12c2c0;
    }
    ctx->pc = 0x12C2B8u;
    SET_GPR_U32(ctx, 31, 0x12C2C0u);
    ctx->pc = 0x1B4760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4760u, 0x12C2B8u, 0x12C2C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C2C0u;
label_12c2c0:
    // 0x12c2c0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12c2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12c2c4:
    // 0x12c2c4: 0x846310a6  lh          $v1, 0x10A6($v1)
    ctx->pc = 0x12c2c4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4262)));
label_12c2c8:
    // 0x12c2c8: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x12c2c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_12c2cc:
    // 0x12c2cc: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x12c2ccu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_12c2d0:
    // 0x12c2d0: 0x461000e  bgez        $v1, . + 4 + (0xE << 2)
label_12c2d4:
    if (ctx->pc == 0x12C2D4u) {
        ctx->pc = 0x12C2D8u;
        goto label_12c2d8;
    }
    ctx->pc = 0x12C2D0u;
    {
        const bool branch_taken_0x12c2d0 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x12c2d0) {
            ctx->pc = 0x12C30Cu;
            goto label_12c30c;
        }
    }
    ctx->pc = 0x12C2D8u;
label_12c2d8:
    // 0x12c2d8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x12c2d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_12c2dc:
    // 0x12c2dc: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12c2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12c2e0:
    // 0x12c2e0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x12c2e0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_12c2e4:
    // 0x12c2e4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12c2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12c2e8:
    // 0x12c2e8: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x12c2e8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
label_12c2ec:
    // 0x12c2ec: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12c2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12c2f0:
    // 0x12c2f0: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x12c2f0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_12c2f4:
    // 0x12c2f4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12c2f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12c2f8:
    // 0x12c2f8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x12c2f8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_12c2fc:
    // 0x12c2fc: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12c2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12c300:
    // 0x12c300: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x12c300u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_12c304:
    // 0x12c304: 0x1000010f  b           . + 4 + (0x10F << 2)
label_12c308:
    if (ctx->pc == 0x12C308u) {
        ctx->pc = 0x12C30Cu;
        goto label_12c30c;
    }
    ctx->pc = 0x12C304u;
    {
        const bool branch_taken_0x12c304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12c304) {
            ctx->pc = 0x12C744u;
            goto label_12c744;
        }
    }
    ctx->pc = 0x12C30Cu;
label_12c30c:
    // 0x12c30c: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x12c30cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_12c310:
    // 0x12c310: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12c310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12c314:
    // 0x12c314: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x12c314u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
label_12c318:
    // 0x12c318: 0x1000010a  b           . + 4 + (0x10A << 2)
label_12c31c:
    if (ctx->pc == 0x12C31Cu) {
        ctx->pc = 0x12C320u;
        goto label_12c320;
    }
    ctx->pc = 0x12C318u;
    {
        const bool branch_taken_0x12c318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12c318) {
            ctx->pc = 0x12C744u;
            goto label_12c744;
        }
    }
    ctx->pc = 0x12C320u;
label_12c320:
    // 0x12c320: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x12c320u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_12c324:
    // 0x12c324: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12c324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12c328:
    // 0x12c328: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x12c328u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
label_12c32c:
    // 0x12c32c: 0x10000105  b           . + 4 + (0x105 << 2)
label_12c330:
    if (ctx->pc == 0x12C330u) {
        ctx->pc = 0x12C334u;
        goto label_12c334;
    }
    ctx->pc = 0x12C32Cu;
    {
        const bool branch_taken_0x12c32c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12c32c) {
            ctx->pc = 0x12C744u;
            goto label_12c744;
        }
    }
    ctx->pc = 0x12C334u;
label_12c334:
    // 0x12c334: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x12c334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12c338:
    // 0x12c338: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x12c338u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12c33c:
    // 0x12c33c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x12c33cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_12c340:
    // 0x12c340: 0x24060031  addiu       $a2, $zero, 0x31
    ctx->pc = 0x12c340u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
label_12c344:
    // 0x12c344: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x12c344u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12c348:
    // 0x12c348: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x12c348u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_12c34c:
    // 0x12c34c: 0xc0965d0  jal         func_259740
label_12c350:
    if (ctx->pc == 0x12C350u) {
        ctx->pc = 0x12C354u;
        goto label_12c354;
    }
    ctx->pc = 0x12C34Cu;
    SET_GPR_U32(ctx, 31, 0x12C354u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x12C34Cu, 0x12C354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C354u;
label_12c354:
    // 0x12c354: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12c354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12c358:
    // 0x12c358: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x12c358u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_12c35c:
    // 0x12c35c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12c35cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_12c360:
    // 0x12c360: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x12c360u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_12c364:
    // 0x12c364: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x12c364u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_12c368:
    // 0x12c368: 0xc057634  jal         func_15D8D0
label_12c36c:
    if (ctx->pc == 0x12C36Cu) {
        ctx->pc = 0x12C370u;
        goto label_12c370;
    }
    ctx->pc = 0x12C368u;
    SET_GPR_U32(ctx, 31, 0x12C370u);
    ctx->pc = 0x15D8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D8D0u, 0x12C368u, 0x12C370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C370u;
label_12c370:
    // 0x12c370: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_12c374:
    if (ctx->pc == 0x12C374u) {
        ctx->pc = 0x12C378u;
        goto label_12c378;
    }
    ctx->pc = 0x12C370u;
    {
        const bool branch_taken_0x12c370 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12c370) {
            ctx->pc = 0x12C388u;
            goto label_12c388;
        }
    }
    ctx->pc = 0x12C378u;
label_12c378:
    // 0x12c378: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12c378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12c37c:
    // 0x12c37c: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x12c37cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
label_12c380:
    // 0x12c380: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x12c380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_12c384:
    // 0x12c384: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x12c384u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
label_12c388:
    // 0x12c388: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x12c388u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12c38c:
    // 0x12c38c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x12c38cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_12c390:
    // 0x12c390: 0xc096b40  jal         func_25AD00
label_12c394:
    if (ctx->pc == 0x12C394u) {
        ctx->pc = 0x12C398u;
        goto label_12c398;
    }
    ctx->pc = 0x12C390u;
    SET_GPR_U32(ctx, 31, 0x12C398u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x12C390u, 0x12C398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C398u;
label_12c398:
    // 0x12c398: 0x3c023e32  lui         $v0, 0x3E32
    ctx->pc = 0x12c398u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15922 << 16));
label_12c39c:
    // 0x12c39c: 0x3442b8c2  ori         $v0, $v0, 0xB8C2
    ctx->pc = 0x12c39cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)47298);
label_12c3a0:
    // 0x12c3a0: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x12c3a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_12c3a4:
    // 0x12c3a4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12c3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12c3a8:
    // 0x12c3a8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x12c3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12c3ac:
    // 0x12c3ac: 0xc46c1290  lwc1        $f12, 0x1290($v1)
    ctx->pc = 0x12c3acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_12c3b0:
    // 0x12c3b0: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x12c3b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_12c3b4:
    // 0x12c3b4: 0xc058f50  jal         func_163D40
label_12c3b8:
    if (ctx->pc == 0x12C3B8u) {
        ctx->pc = 0x12C3BCu;
        goto label_12c3bc;
    }
    ctx->pc = 0x12C3B4u;
    SET_GPR_U32(ctx, 31, 0x12C3BCu);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x12C3B4u, 0x12C3BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C3BCu;
label_12c3bc:
    // 0x12c3bc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x12c3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12c3c0:
    // 0x12c3c0: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x12c3c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
label_12c3c4:
    // 0x12c3c4: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x12c3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
label_12c3c8:
    // 0x12c3c8: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x12c3c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_12c3cc:
    // 0x12c3cc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x12c3ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_12c3d0:
    // 0x12c3d0: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x12c3d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12c3d4:
    // 0x12c3d4: 0xc05ce88  jal         func_173A20
label_12c3d8:
    if (ctx->pc == 0x12C3D8u) {
        ctx->pc = 0x12C3DCu;
        goto label_12c3dc;
    }
    ctx->pc = 0x12C3D4u;
    SET_GPR_U32(ctx, 31, 0x12C3DCu);
    ctx->pc = 0x173A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173A20u, 0x12C3D4u, 0x12C3DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C3DCu;
label_12c3dc:
    // 0x12c3dc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x12c3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12c3e0:
    // 0x12c3e0: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x12c3e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12c3e4:
    // 0x12c3e4: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x12c3e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_12c3e8:
    // 0x12c3e8: 0xc05cd58  jal         func_173560
label_12c3ec:
    if (ctx->pc == 0x12C3ECu) {
        ctx->pc = 0x12C3F0u;
        goto label_12c3f0;
    }
    ctx->pc = 0x12C3E8u;
    SET_GPR_U32(ctx, 31, 0x12C3F0u);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x12C3E8u, 0x12C3F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C3F0u;
label_12c3f0:
    // 0x12c3f0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x12c3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12c3f4:
    // 0x12c3f4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x12c3f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_12c3f8:
    // 0x12c3f8: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x12c3f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
label_12c3fc:
    // 0x12c3fc: 0xc040c9e  jal         func_103278
label_12c400:
    if (ctx->pc == 0x12C400u) {
        ctx->pc = 0x12C404u;
        goto label_12c404;
    }
    ctx->pc = 0x12C3FCu;
    SET_GPR_U32(ctx, 31, 0x12C404u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x12C404u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x12C404u) { return; }
    ctx->pc = 0x12C404u;
label_12c404:
    // 0x12c404: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x12c404u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12c408:
    // 0x12c408: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x12c408u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12c40c:
    // 0x12c40c: 0xc05cec4  jal         func_173B10
label_12c410:
    if (ctx->pc == 0x12C410u) {
        ctx->pc = 0x12C414u;
        goto label_12c414;
    }
    ctx->pc = 0x12C40Cu;
    SET_GPR_U32(ctx, 31, 0x12C414u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x12C40Cu, 0x12C414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C414u;
label_12c414:
    // 0x12c414: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x12c414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12c418:
    // 0x12c418: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x12c418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_12c41c:
    // 0x12c41c: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x12c41cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
label_12c420:
    // 0x12c420: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x12c420u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_12c424:
    // 0x12c424: 0xc0675b0  jal         func_19D6C0
label_12c428:
    if (ctx->pc == 0x12C428u) {
        ctx->pc = 0x12C42Cu;
        goto label_12c42c;
    }
    ctx->pc = 0x12C424u;
    SET_GPR_U32(ctx, 31, 0x12C42Cu);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x12C424u, 0x12C42Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C42Cu;
label_12c42c:
    // 0x12c42c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x12c42cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12c430:
    // 0x12c430: 0xc44112a0  lwc1        $f1, 0x12A0($v0)
    ctx->pc = 0x12c430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12c434:
    // 0x12c434: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x12c434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12c438:
    // 0x12c438: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x12c438u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_12c43c:
    // 0x12c43c: 0xe44012a0  swc1        $f0, 0x12A0($v0)
    ctx->pc = 0x12c43cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4768), bits); }
label_12c440:
    // 0x12c440: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x12c440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12c444:
    // 0x12c444: 0xc44112a8  lwc1        $f1, 0x12A8($v0)
    ctx->pc = 0x12c444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12c448:
    // 0x12c448: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x12c448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12c44c:
    // 0x12c44c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x12c44cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_12c450:
    // 0x12c450: 0xe44012a8  swc1        $f0, 0x12A8($v0)
    ctx->pc = 0x12c450u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4776), bits); }
label_12c454:
    // 0x12c454: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x12c454u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12c458:
    // 0x12c458: 0xc0974dc  jal         func_25D370
label_12c45c:
    if (ctx->pc == 0x12C45Cu) {
        ctx->pc = 0x12C460u;
        goto label_12c460;
    }
    ctx->pc = 0x12C458u;
    SET_GPR_U32(ctx, 31, 0x12C460u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x12C458u, 0x12C460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C460u;
label_12c460:
    // 0x12c460: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12c460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12c464:
    // 0x12c464: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x12c464u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_12c468:
    // 0x12c468: 0x106000b6  beqz        $v1, . + 4 + (0xB6 << 2)
label_12c46c:
    if (ctx->pc == 0x12C46Cu) {
        ctx->pc = 0x12C470u;
        goto label_12c470;
    }
    ctx->pc = 0x12C468u;
    {
        const bool branch_taken_0x12c468 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12c468) {
            ctx->pc = 0x12C744u;
            goto label_12c744;
        }
    }
    ctx->pc = 0x12C470u;
label_12c470:
    // 0x12c470: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x12c470u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_12c474:
    // 0x12c474: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x12c474u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12c478:
    // 0x12c478: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x12c478u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
label_12c47c:
    // 0x12c47c: 0x84268db8  lh          $a2, -0x7248($at)
    ctx->pc = 0x12c47cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294938040)));
label_12c480:
    // 0x12c480: 0xc06d1d8  jal         func_1B4760
label_12c484:
    if (ctx->pc == 0x12C484u) {
        ctx->pc = 0x12C488u;
        goto label_12c488;
    }
    ctx->pc = 0x12C480u;
    SET_GPR_U32(ctx, 31, 0x12C488u);
    ctx->pc = 0x1B4760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4760u, 0x12C480u, 0x12C488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C488u;
label_12c488:
    // 0x12c488: 0x860310a6  lh          $v1, 0x10A6($s0)
    ctx->pc = 0x12c488u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4262)));
label_12c48c:
    // 0x12c48c: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x12c48cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_12c490:
    // 0x12c490: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x12c490u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_12c494:
    // 0x12c494: 0x461000f  bgez        $v1, . + 4 + (0xF << 2)
label_12c498:
    if (ctx->pc == 0x12C498u) {
        ctx->pc = 0x12C49Cu;
        goto label_12c49c;
    }
    ctx->pc = 0x12C494u;
    {
        const bool branch_taken_0x12c494 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x12c494) {
            ctx->pc = 0x12C4D4u;
            goto label_12c4d4;
        }
    }
    ctx->pc = 0x12C49Cu;
label_12c49c:
    // 0x12c49c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x12c49cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12c4a0:
    // 0x12c4a0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12c4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12c4a4:
    // 0x12c4a4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x12c4a4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_12c4a8:
    // 0x12c4a8: 0x24040015  addiu       $a0, $zero, 0x15
    ctx->pc = 0x12c4a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_12c4ac:
    // 0x12c4ac: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12c4acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12c4b0:
    // 0x12c4b0: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x12c4b0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_12c4b4:
    // 0x12c4b4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12c4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12c4b8:
    // 0x12c4b8: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x12c4b8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_12c4bc:
    // 0x12c4bc: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12c4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12c4c0:
    // 0x12c4c0: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x12c4c0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_12c4c4:
    // 0x12c4c4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12c4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12c4c8:
    // 0x12c4c8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x12c4c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_12c4cc:
    // 0x12c4cc: 0x100000eb  b           . + 4 + (0xEB << 2)
label_12c4d0:
    if (ctx->pc == 0x12C4D0u) {
        ctx->pc = 0x12C4D4u;
        goto label_12c4d4;
    }
    ctx->pc = 0x12C4CCu;
    {
        const bool branch_taken_0x12c4cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12c4cc) {
            ctx->pc = 0x12C87Cu;
            goto label_12c87c;
        }
    }
    ctx->pc = 0x12C4D4u;
label_12c4d4:
    // 0x12c4d4: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x12c4d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12c4d8:
    // 0x12c4d8: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x12c4d8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
label_12c4dc:
    // 0x12c4dc: 0x2463fffd  addiu       $v1, $v1, -0x3
    ctx->pc = 0x12c4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967293));
label_12c4e0:
    // 0x12c4e0: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x12c4e0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
label_12c4e4:
    // 0x12c4e4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12c4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12c4e8:
    // 0x12c4e8: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x12c4e8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
label_12c4ec:
    // 0x12c4ec: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x12c4ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_12c4f0:
    // 0x12c4f0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x12c4f0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_12c4f4:
    // 0x12c4f4: 0x1c600020  bgtz        $v1, . + 4 + (0x20 << 2)
label_12c4f8:
    if (ctx->pc == 0x12C4F8u) {
        ctx->pc = 0x12C4FCu;
        goto label_12c4fc;
    }
    ctx->pc = 0x12C4F4u;
    {
        const bool branch_taken_0x12c4f4 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x12c4f4) {
            ctx->pc = 0x12C578u;
            goto label_12c578;
        }
    }
    ctx->pc = 0x12C4FCu;
label_12c4fc:
    // 0x12c4fc: 0xa6001278  sh          $zero, 0x1278($s0)
    ctx->pc = 0x12c4fcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4728), (uint16_t)GPR_U32(ctx, 0));
label_12c500:
    // 0x12c500: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x12c500u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12c504:
    // 0x12c504: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x12c504u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_12c508:
    // 0x12c508: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x12c508u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
label_12c50c:
    // 0x12c50c: 0x84268dc0  lh          $a2, -0x7240($at)
    ctx->pc = 0x12c50cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294938048)));
label_12c510:
    // 0x12c510: 0xc06d1d8  jal         func_1B4760
label_12c514:
    if (ctx->pc == 0x12C514u) {
        ctx->pc = 0x12C518u;
        goto label_12c518;
    }
    ctx->pc = 0x12C510u;
    SET_GPR_U32(ctx, 31, 0x12C518u);
    ctx->pc = 0x1B4760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4760u, 0x12C510u, 0x12C518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C518u;
label_12c518:
    // 0x12c518: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12c518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12c51c:
    // 0x12c51c: 0x846310a6  lh          $v1, 0x10A6($v1)
    ctx->pc = 0x12c51cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4262)));
label_12c520:
    // 0x12c520: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x12c520u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_12c524:
    // 0x12c524: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x12c524u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_12c528:
    // 0x12c528: 0x461000e  bgez        $v1, . + 4 + (0xE << 2)
label_12c52c:
    if (ctx->pc == 0x12C52Cu) {
        ctx->pc = 0x12C530u;
        goto label_12c530;
    }
    ctx->pc = 0x12C528u;
    {
        const bool branch_taken_0x12c528 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x12c528) {
            ctx->pc = 0x12C564u;
            goto label_12c564;
        }
    }
    ctx->pc = 0x12C530u;
label_12c530:
    // 0x12c530: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x12c530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_12c534:
    // 0x12c534: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12c534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12c538:
    // 0x12c538: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x12c538u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_12c53c:
    // 0x12c53c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12c53cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12c540:
    // 0x12c540: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x12c540u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
label_12c544:
    // 0x12c544: 0x8fb00068  lw          $s0, 0x68($sp)
    ctx->pc = 0x12c544u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12c548:
    // 0x12c548: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x12c548u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
label_12c54c:
    // 0x12c54c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12c54cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12c550:
    // 0x12c550: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x12c550u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_12c554:
    // 0x12c554: 0x8fb10068  lw          $s1, 0x68($sp)
    ctx->pc = 0x12c554u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12c558:
    // 0x12c558: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x12c558u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_12c55c:
    // 0x12c55c: 0x10000079  b           . + 4 + (0x79 << 2)
label_12c560:
    if (ctx->pc == 0x12C560u) {
        ctx->pc = 0x12C564u;
        goto label_12c564;
    }
    ctx->pc = 0x12C55Cu;
    {
        const bool branch_taken_0x12c55c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12c55c) {
            ctx->pc = 0x12C744u;
            goto label_12c744;
        }
    }
    ctx->pc = 0x12C564u;
label_12c564:
    // 0x12c564: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x12c564u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_12c568:
    // 0x12c568: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12c568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12c56c:
    // 0x12c56c: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x12c56cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
label_12c570:
    // 0x12c570: 0x10000074  b           . + 4 + (0x74 << 2)
label_12c574:
    if (ctx->pc == 0x12C574u) {
        ctx->pc = 0x12C578u;
        goto label_12c578;
    }
    ctx->pc = 0x12C570u;
    {
        const bool branch_taken_0x12c570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12c570) {
            ctx->pc = 0x12C744u;
            goto label_12c744;
        }
    }
    ctx->pc = 0x12C578u;
label_12c578:
    // 0x12c578: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x12c578u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_12c57c:
    // 0x12c57c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12c57cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12c580:
    // 0x12c580: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x12c580u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
label_12c584:
    // 0x12c584: 0x1000006f  b           . + 4 + (0x6F << 2)
label_12c588:
    if (ctx->pc == 0x12C588u) {
        ctx->pc = 0x12C58Cu;
        goto label_12c58c;
    }
    ctx->pc = 0x12C584u;
    {
        const bool branch_taken_0x12c584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12c584) {
            ctx->pc = 0x12C744u;
            goto label_12c744;
        }
    }
    ctx->pc = 0x12C58Cu;
label_12c58c:
    // 0x12c58c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12c58cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12c590:
    // 0x12c590: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x12c590u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12c594:
    // 0x12c594: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x12c594u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
label_12c598:
    // 0x12c598: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x12c598u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_12c59c:
    // 0x12c59c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x12c59cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12c5a0:
    // 0x12c5a0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x12c5a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_12c5a4:
    // 0x12c5a4: 0xc0965d0  jal         func_259740
label_12c5a8:
    if (ctx->pc == 0x12C5A8u) {
        ctx->pc = 0x12C5ACu;
        goto label_12c5ac;
    }
    ctx->pc = 0x12C5A4u;
    SET_GPR_U32(ctx, 31, 0x12C5ACu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x12C5A4u, 0x12C5ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C5ACu;
label_12c5ac:
    // 0x12c5ac: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x12c5acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12c5b0:
    // 0x12c5b0: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x12c5b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12c5b4:
    // 0x12c5b4: 0xa4a41278  sh          $a0, 0x1278($a1)
    ctx->pc = 0x12c5b4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4728), (uint16_t)GPR_U32(ctx, 4));
label_12c5b8:
    // 0x12c5b8: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x12c5b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12c5bc:
    // 0x12c5bc: 0x90c70002  lbu         $a3, 0x2($a2)
    ctx->pc = 0x12c5bcu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
label_12c5c0:
    // 0x12c5c0: 0x24e80001  addiu       $t0, $a3, 0x1
    ctx->pc = 0x12c5c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_12c5c4:
    // 0x12c5c4: 0xa0c80002  sb          $t0, 0x2($a2)
    ctx->pc = 0x12c5c4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 8));
label_12c5c8:
    // 0x12c5c8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x12c5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12c5cc:
    // 0x12c5cc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x12c5ccu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_12c5d0:
    // 0x12c5d0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x12c5d0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_12c5d4:
    // 0x12c5d4: 0xc096b40  jal         func_25AD00
label_12c5d8:
    if (ctx->pc == 0x12C5D8u) {
        ctx->pc = 0x12C5DCu;
        goto label_12c5dc;
    }
    ctx->pc = 0x12C5D4u;
    SET_GPR_U32(ctx, 31, 0x12C5DCu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x12C5D4u, 0x12C5DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C5DCu;
label_12c5dc:
    // 0x12c5dc: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x12c5dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12c5e0:
    // 0x12c5e0: 0x84851278  lh          $a1, 0x1278($a0)
    ctx->pc = 0x12c5e0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
label_12c5e4:
    // 0x12c5e4: 0x14a00008  bnez        $a1, . + 4 + (0x8 << 2)
label_12c5e8:
    if (ctx->pc == 0x12C5E8u) {
        ctx->pc = 0x12C5ECu;
        goto label_12c5ec;
    }
    ctx->pc = 0x12C5E4u;
    {
        const bool branch_taken_0x12c5e4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x12c5e4) {
            ctx->pc = 0x12C608u;
            goto label_12c608;
        }
    }
    ctx->pc = 0x12C5ECu;
label_12c5ec:
    // 0x12c5ec: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x12c5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12c5f0:
    // 0x12c5f0: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x12c5f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12c5f4:
    // 0x12c5f4: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x12c5f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_12c5f8:
    // 0x12c5f8: 0xc05cd58  jal         func_173560
label_12c5fc:
    if (ctx->pc == 0x12C5FCu) {
        ctx->pc = 0x12C600u;
        goto label_12c600;
    }
    ctx->pc = 0x12C5F8u;
    SET_GPR_U32(ctx, 31, 0x12C600u);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x12C5F8u, 0x12C600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C600u;
label_12c600:
    // 0x12c600: 0x10000005  b           . + 4 + (0x5 << 2)
label_12c604:
    if (ctx->pc == 0x12C604u) {
        ctx->pc = 0x12C608u;
        goto label_12c608;
    }
    ctx->pc = 0x12C600u;
    {
        const bool branch_taken_0x12c600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12c600) {
            ctx->pc = 0x12C618u;
            goto label_12c618;
        }
    }
    ctx->pc = 0x12C608u;
label_12c608:
    // 0x12c608: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12c608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12c60c:
    // 0x12c60c: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x12c60cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
label_12c610:
    // 0x12c610: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x12c610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_12c614:
    // 0x12c614: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x12c614u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
label_12c618:
    // 0x12c618: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x12c618u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12c61c:
    // 0x12c61c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x12c61cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12c620:
    // 0x12c620: 0xc05cec4  jal         func_173B10
label_12c624:
    if (ctx->pc == 0x12C624u) {
        ctx->pc = 0x12C628u;
        goto label_12c628;
    }
    ctx->pc = 0x12C620u;
    SET_GPR_U32(ctx, 31, 0x12C628u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x12C620u, 0x12C628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C628u;
label_12c628:
    // 0x12c628: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x12c628u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12c62c:
    // 0x12c62c: 0xc0974dc  jal         func_25D370
label_12c630:
    if (ctx->pc == 0x12C630u) {
        ctx->pc = 0x12C634u;
        goto label_12c634;
    }
    ctx->pc = 0x12C62Cu;
    SET_GPR_U32(ctx, 31, 0x12C634u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x12C62Cu, 0x12C634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C634u;
label_12c634:
    // 0x12c634: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x12c634u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_12c638:
    // 0x12c638: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x12c638u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12c63c:
    // 0x12c63c: 0x908309e7  lbu         $v1, 0x9E7($a0)
    ctx->pc = 0x12c63cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2535)));
label_12c640:
    // 0x12c640: 0x10600040  beqz        $v1, . + 4 + (0x40 << 2)
label_12c644:
    if (ctx->pc == 0x12C644u) {
        ctx->pc = 0x12C648u;
        goto label_12c648;
    }
    ctx->pc = 0x12C640u;
    {
        const bool branch_taken_0x12c640 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12c640) {
            ctx->pc = 0x12C744u;
            goto label_12c744;
        }
    }
    ctx->pc = 0x12C648u;
label_12c648:
    // 0x12c648: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x12c648u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12c64c:
    // 0x12c64c: 0x90a40002  lbu         $a0, 0x2($a1)
    ctx->pc = 0x12c64cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
label_12c650:
    // 0x12c650: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x12c650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_12c654:
    // 0x12c654: 0xa0a30002  sb          $v1, 0x2($a1)
    ctx->pc = 0x12c654u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 3));
label_12c658:
    // 0x12c658: 0x1000003a  b           . + 4 + (0x3A << 2)
label_12c65c:
    if (ctx->pc == 0x12C65Cu) {
        ctx->pc = 0x12C660u;
        goto label_12c660;
    }
    ctx->pc = 0x12C658u;
    {
        const bool branch_taken_0x12c658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12c658) {
            ctx->pc = 0x12C744u;
            goto label_12c744;
        }
    }
    ctx->pc = 0x12C660u;
label_12c660:
    // 0x12c660: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x12c660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12c664:
    // 0x12c664: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x12c664u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12c668:
    // 0x12c668: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x12c668u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_12c66c:
    // 0x12c66c: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x12c66cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_12c670:
    // 0x12c670: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x12c670u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12c674:
    // 0x12c674: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x12c674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_12c678:
    // 0x12c678: 0x70404628  paddub      $t0, $v0, $zero
    ctx->pc = 0x12c678u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_12c67c:
    // 0x12c67c: 0xc0965d0  jal         func_259740
label_12c680:
    if (ctx->pc == 0x12C680u) {
        ctx->pc = 0x12C684u;
        goto label_12c684;
    }
    ctx->pc = 0x12C67Cu;
    SET_GPR_U32(ctx, 31, 0x12C684u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x12C67Cu, 0x12C684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C684u;
label_12c684:
    // 0x12c684: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x12c684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12c688:
    // 0x12c688: 0xc4401290  lwc1        $f0, 0x1290($v0)
    ctx->pc = 0x12c688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12c68c:
    // 0x12c68c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x12c68cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12c690:
    // 0x12c690: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x12c690u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
label_12c694:
    // 0x12c694: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x12c694u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12c698:
    // 0x12c698: 0xa08010a8  sb          $zero, 0x10A8($a0)
    ctx->pc = 0x12c698u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4264), (uint8_t)GPR_U32(ctx, 0));
label_12c69c:
    // 0x12c69c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x12c69cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12c6a0:
    // 0x12c6a0: 0x90440002  lbu         $a0, 0x2($v0)
    ctx->pc = 0x12c6a0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_12c6a4:
    // 0x12c6a4: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x12c6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_12c6a8:
    // 0x12c6a8: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x12c6a8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
label_12c6ac:
    // 0x12c6ac: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x12c6acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12c6b0:
    // 0x12c6b0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x12c6b0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_12c6b4:
    // 0x12c6b4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x12c6b4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_12c6b8:
    // 0x12c6b8: 0xc096b40  jal         func_25AD00
label_12c6bc:
    if (ctx->pc == 0x12C6BCu) {
        ctx->pc = 0x12C6C0u;
        goto label_12c6c0;
    }
    ctx->pc = 0x12C6B8u;
    SET_GPR_U32(ctx, 31, 0x12C6C0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x12C6B8u, 0x12C6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C6C0u;
label_12c6c0:
    // 0x12c6c0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x12c6c0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_12c6c4:
    // 0x12c6c4: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x12c6c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12c6c8:
    // 0x12c6c8: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x12c6c8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_12c6cc:
    // 0x12c6cc: 0xc05cd10  jal         func_173440
label_12c6d0:
    if (ctx->pc == 0x12C6D0u) {
        ctx->pc = 0x12C6D4u;
        goto label_12c6d4;
    }
    ctx->pc = 0x12C6CCu;
    SET_GPR_U32(ctx, 31, 0x12C6D4u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x12C6CCu, 0x12C6D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C6D4u;
label_12c6d4:
    // 0x12c6d4: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x12c6d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12c6d8:
    // 0x12c6d8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x12c6d8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_12c6dc:
    // 0x12c6dc: 0xc05cec4  jal         func_173B10
label_12c6e0:
    if (ctx->pc == 0x12C6E0u) {
        ctx->pc = 0x12C6E4u;
        goto label_12c6e4;
    }
    ctx->pc = 0x12C6DCu;
    SET_GPR_U32(ctx, 31, 0x12C6E4u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x12C6DCu, 0x12C6E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C6E4u;
label_12c6e4:
    // 0x12c6e4: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x12c6e4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_12c6e8:
    // 0x12c6e8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x12c6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12c6ec:
    // 0x12c6ec: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x12c6ecu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_12c6f0:
    // 0x12c6f0: 0xc0974dc  jal         func_25D370
label_12c6f4:
    if (ctx->pc == 0x12C6F4u) {
        ctx->pc = 0x12C6F8u;
        goto label_12c6f8;
    }
    ctx->pc = 0x12C6F0u;
    SET_GPR_U32(ctx, 31, 0x12C6F8u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x12C6F0u, 0x12C6F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C6F8u;
label_12c6f8:
    // 0x12c6f8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x12c6f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12c6fc:
    // 0x12c6fc: 0x908509e7  lbu         $a1, 0x9E7($a0)
    ctx->pc = 0x12c6fcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2535)));
label_12c700:
    // 0x12c700: 0x10a00010  beqz        $a1, . + 4 + (0x10 << 2)
label_12c704:
    if (ctx->pc == 0x12C704u) {
        ctx->pc = 0x12C708u;
        goto label_12c708;
    }
    ctx->pc = 0x12C700u;
    {
        const bool branch_taken_0x12c700 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x12c700) {
            ctx->pc = 0x12C744u;
            goto label_12c744;
        }
    }
    ctx->pc = 0x12C708u;
label_12c708:
    // 0x12c708: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x12c708u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12c70c:
    // 0x12c70c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12c70cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12c710:
    // 0x12c710: 0xa0660000  sb          $a2, 0x0($v1)
    ctx->pc = 0x12c710u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 6));
label_12c714:
    // 0x12c714: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x12c714u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_12c718:
    // 0x12c718: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12c718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12c71c:
    // 0x12c71c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x12c71cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_12c720:
    // 0x12c720: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x12c720u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12c724:
    // 0x12c724: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x12c724u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
label_12c728:
    // 0x12c728: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12c728u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12c72c:
    // 0x12c72c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x12c72cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_12c730:
    // 0x12c730: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12c730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12c734:
    // 0x12c734: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x12c734u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_12c738:
    // 0x12c738: 0xa620007c  sh          $zero, 0x7C($s1)
    ctx->pc = 0x12c738u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 124), (uint16_t)GPR_U32(ctx, 0));
label_12c73c:
    // 0x12c73c: 0x1000004f  b           . + 4 + (0x4F << 2)
label_12c740:
    if (ctx->pc == 0x12C740u) {
        ctx->pc = 0x12C744u;
        goto label_12c744;
    }
    ctx->pc = 0x12C73Cu;
    {
        const bool branch_taken_0x12c73c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12c73c) {
            ctx->pc = 0x12C87Cu;
            goto label_12c87c;
        }
    }
    ctx->pc = 0x12C744u;
label_12c744:
    // 0x12c744: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12c744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12c748:
    // 0x12c748: 0x906409df  lbu         $a0, 0x9DF($v1)
    ctx->pc = 0x12c748u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2527)));
label_12c74c:
    // 0x12c74c: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x12c74cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_12c750:
    // 0x12c750: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x12c750u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_12c754:
    // 0x12c754: 0x10600022  beqz        $v1, . + 4 + (0x22 << 2)
label_12c758:
    if (ctx->pc == 0x12C758u) {
        ctx->pc = 0x12C75Cu;
        goto label_12c75c;
    }
    ctx->pc = 0x12C754u;
    {
        const bool branch_taken_0x12c754 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12c754) {
            ctx->pc = 0x12C7E0u;
            goto label_12c7e0;
        }
    }
    ctx->pc = 0x12C75Cu;
label_12c75c:
    // 0x12c75c: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x12c75cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_12c760:
    // 0x12c760: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x12c760u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_12c764:
    // 0x12c764: 0xc0675a4  jal         func_19D690
label_12c768:
    if (ctx->pc == 0x12C768u) {
        ctx->pc = 0x12C76Cu;
        goto label_12c76c;
    }
    ctx->pc = 0x12C764u;
    SET_GPR_U32(ctx, 31, 0x12C76Cu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x12C764u, 0x12C76Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C76Cu;
label_12c76c:
    // 0x12c76c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x12c76cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_12c770:
    // 0x12c770: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x12c770u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12c774:
    // 0x12c774: 0x5303c  dsll32      $a2, $a1, 0
    ctx->pc = 0x12c774u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << (32 + 0));
label_12c778:
    // 0x12c778: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x12c778u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
label_12c77c:
    // 0x12c77c: 0x3407ffff  ori         $a3, $zero, 0xFFFF
    ctx->pc = 0x12c77cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_12c780:
    // 0x12c780: 0x74438  dsll        $t0, $a3, 16
    ctx->pc = 0x12c780u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) << 16);
label_12c784:
    // 0x12c784: 0x3502ffff  ori         $v0, $t0, 0xFFFF
    ctx->pc = 0x12c784u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
label_12c788:
    // 0x12c788: 0xc21824  and         $v1, $a2, $v0
    ctx->pc = 0x12c788u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
label_12c78c:
    // 0x12c78c: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x12c78cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
label_12c790:
    // 0x12c790: 0x34440106  ori         $a0, $v0, 0x106
    ctx->pc = 0x12c790u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)262);
label_12c794:
    // 0x12c794: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x12c794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12c798:
    // 0x12c798: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x12c798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_12c79c:
    // 0x12c79c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x12c79cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_12c7a0:
    // 0x12c7a0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x12c7a0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_12c7a4:
    // 0x12c7a4: 0x24470580  addiu       $a3, $v0, 0x580
    ctx->pc = 0x12c7a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 1408));
label_12c7a8:
    // 0x12c7a8: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x12c7a8u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_12c7ac:
    // 0x12c7ac: 0xc06371c  jal         func_18DC70
label_12c7b0:
    if (ctx->pc == 0x12C7B0u) {
        ctx->pc = 0x12C7B4u;
        goto label_12c7b4;
    }
    ctx->pc = 0x12C7ACu;
    SET_GPR_U32(ctx, 31, 0x12C7B4u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x12C7ACu, 0x12C7B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C7B4u;
label_12c7b4:
    // 0x12c7b4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x12c7b4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_12c7b8:
    // 0x12c7b8: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x12c7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
label_12c7bc:
    // 0x12c7bc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x12c7bcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_12c7c0:
    // 0x12c7c0: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x12c7c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_12c7c4:
    // 0x12c7c4: 0xc0684d8  jal         func_1A1360
label_12c7c8:
    if (ctx->pc == 0x12C7C8u) {
        ctx->pc = 0x12C7CCu;
        goto label_12c7cc;
    }
    ctx->pc = 0x12C7C4u;
    SET_GPR_U32(ctx, 31, 0x12C7CCu);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x12C7C4u, 0x12C7CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C7CCu;
label_12c7cc:
    // 0x12c7cc: 0x3c030600  lui         $v1, 0x600
    ctx->pc = 0x12c7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1536 << 16));
label_12c7d0:
    // 0x12c7d0: 0x3464ff80  ori         $a0, $v1, 0xFF80
    ctx->pc = 0x12c7d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65408);
label_12c7d4:
    // 0x12c7d4: 0x3c050005  lui         $a1, 0x5
    ctx->pc = 0x12c7d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)5 << 16));
label_12c7d8:
    // 0x12c7d8: 0xc0684d8  jal         func_1A1360
label_12c7dc:
    if (ctx->pc == 0x12C7DCu) {
        ctx->pc = 0x12C7E0u;
        goto label_12c7e0;
    }
    ctx->pc = 0x12C7D8u;
    SET_GPR_U32(ctx, 31, 0x12C7E0u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x12C7D8u, 0x12C7E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C7E0u;
label_12c7e0:
    // 0x12c7e0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12c7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12c7e4:
    // 0x12c7e4: 0x906409df  lbu         $a0, 0x9DF($v1)
    ctx->pc = 0x12c7e4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2527)));
label_12c7e8:
    // 0x12c7e8: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x12c7e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_12c7ec:
    // 0x12c7ec: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x12c7ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_12c7f0:
    // 0x12c7f0: 0x10600022  beqz        $v1, . + 4 + (0x22 << 2)
label_12c7f4:
    if (ctx->pc == 0x12C7F4u) {
        ctx->pc = 0x12C7F8u;
        goto label_12c7f8;
    }
    ctx->pc = 0x12C7F0u;
    {
        const bool branch_taken_0x12c7f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12c7f0) {
            ctx->pc = 0x12C87Cu;
            goto label_12c87c;
        }
    }
    ctx->pc = 0x12C7F8u;
label_12c7f8:
    // 0x12c7f8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x12c7f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_12c7fc:
    // 0x12c7fc: 0xc0675a4  jal         func_19D690
label_12c800:
    if (ctx->pc == 0x12C800u) {
        ctx->pc = 0x12C804u;
        goto label_12c804;
    }
    ctx->pc = 0x12C7FCu;
    SET_GPR_U32(ctx, 31, 0x12C804u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x12C7FCu, 0x12C804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C804u;
label_12c804:
    // 0x12c804: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x12c804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12c808:
    // 0x12c808: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x12c808u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
label_12c80c:
    // 0x12c80c: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x12c80cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
label_12c810:
    // 0x12c810: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x12c810u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_12c814:
    // 0x12c814: 0x51438  dsll        $v0, $a1, 16
    ctx->pc = 0x12c814u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << 16);
label_12c818:
    // 0x12c818: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x12c818u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_12c81c:
    // 0x12c81c: 0x822824  and         $a1, $a0, $v0
    ctx->pc = 0x12c81cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_12c820:
    // 0x12c820: 0x5103c  dsll32      $v0, $a1, 0
    ctx->pc = 0x12c820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 0));
label_12c824:
    // 0x12c824: 0x34430106  ori         $v1, $v0, 0x106
    ctx->pc = 0x12c824u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)262);
label_12c828:
    // 0x12c828: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x12c828u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12c82c:
    // 0x12c82c: 0x8c820130  lw          $v0, 0x130($a0)
    ctx->pc = 0x12c82cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
label_12c830:
    // 0x12c830: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x12c830u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_12c834:
    // 0x12c834: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x12c834u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_12c838:
    // 0x12c838: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x12c838u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_12c83c:
    // 0x12c83c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x12c83cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_12c840:
    // 0x12c840: 0x24420540  addiu       $v0, $v0, 0x540
    ctx->pc = 0x12c840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1344));
label_12c844:
    // 0x12c844: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x12c844u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_12c848:
    // 0x12c848: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x12c848u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_12c84c:
    // 0x12c84c: 0xc06371c  jal         func_18DC70
label_12c850:
    if (ctx->pc == 0x12C850u) {
        ctx->pc = 0x12C854u;
        goto label_12c854;
    }
    ctx->pc = 0x12C84Cu;
    SET_GPR_U32(ctx, 31, 0x12C854u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x12C84Cu, 0x12C854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C854u;
label_12c854:
    // 0x12c854: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x12c854u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
label_12c858:
    // 0x12c858: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x12c858u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_12c85c:
    // 0x12c85c: 0xc0684d8  jal         func_1A1360
label_12c860:
    if (ctx->pc == 0x12C860u) {
        ctx->pc = 0x12C864u;
        goto label_12c864;
    }
    ctx->pc = 0x12C85Cu;
    SET_GPR_U32(ctx, 31, 0x12C864u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x12C85Cu, 0x12C864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C864u;
label_12c864:
    // 0x12c864: 0x3c030600  lui         $v1, 0x600
    ctx->pc = 0x12c864u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1536 << 16));
label_12c868:
    // 0x12c868: 0x3464ff80  ori         $a0, $v1, 0xFF80
    ctx->pc = 0x12c868u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65408);
label_12c86c:
    // 0x12c86c: 0x3c050005  lui         $a1, 0x5
    ctx->pc = 0x12c86cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)5 << 16));
label_12c870:
    // 0x12c870: 0xc0684d8  jal         func_1A1360
label_12c874:
    if (ctx->pc == 0x12C874u) {
        ctx->pc = 0x12C878u;
        goto label_12c878;
    }
    ctx->pc = 0x12C870u;
    SET_GPR_U32(ctx, 31, 0x12C878u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x12C870u, 0x12C878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C878u;
label_12c878:
    // 0x12c878: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x12c878u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_12c87c:
    // 0x12c87c: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x12c87cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_12c880:
    // 0x12c880: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x12c880u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_12c884:
    // 0x12c884: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x12c884u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_12c888:
    // 0x12c888: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x12c888u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_12c88c:
    // 0x12c88c: 0x3e00008  jr          $ra
label_12c890:
    if (ctx->pc == 0x12C890u) {
        ctx->pc = 0x12C894u;
        goto label_fallthrough_0x12c88c;
    }
    ctx->pc = 0x12C88Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12C88Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x12c88c:
    ctx->pc = 0x12C894u;
}
