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

// Function: Pl_r1_devil_sky_move
// Address: 0x26bf30 - 0x26ca0c
void Pl_r1_devil_sky_move_0x26bf30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Pl_r1_devil_sky_move_0x26bf30");
#endif

    switch (ctx->pc) {
        case 0x26bf30u: goto label_26bf30;
        case 0x26bf34u: goto label_26bf34;
        case 0x26bf38u: goto label_26bf38;
        case 0x26bf3cu: goto label_26bf3c;
        case 0x26bf40u: goto label_26bf40;
        case 0x26bf44u: goto label_26bf44;
        case 0x26bf48u: goto label_26bf48;
        case 0x26bf4cu: goto label_26bf4c;
        case 0x26bf50u: goto label_26bf50;
        case 0x26bf54u: goto label_26bf54;
        case 0x26bf58u: goto label_26bf58;
        case 0x26bf5cu: goto label_26bf5c;
        case 0x26bf60u: goto label_26bf60;
        case 0x26bf64u: goto label_26bf64;
        case 0x26bf68u: goto label_26bf68;
        case 0x26bf6cu: goto label_26bf6c;
        case 0x26bf70u: goto label_26bf70;
        case 0x26bf74u: goto label_26bf74;
        case 0x26bf78u: goto label_26bf78;
        case 0x26bf7cu: goto label_26bf7c;
        case 0x26bf80u: goto label_26bf80;
        case 0x26bf84u: goto label_26bf84;
        case 0x26bf88u: goto label_26bf88;
        case 0x26bf8cu: goto label_26bf8c;
        case 0x26bf90u: goto label_26bf90;
        case 0x26bf94u: goto label_26bf94;
        case 0x26bf98u: goto label_26bf98;
        case 0x26bf9cu: goto label_26bf9c;
        case 0x26bfa0u: goto label_26bfa0;
        case 0x26bfa4u: goto label_26bfa4;
        case 0x26bfa8u: goto label_26bfa8;
        case 0x26bfacu: goto label_26bfac;
        case 0x26bfb0u: goto label_26bfb0;
        case 0x26bfb4u: goto label_26bfb4;
        case 0x26bfb8u: goto label_26bfb8;
        case 0x26bfbcu: goto label_26bfbc;
        case 0x26bfc0u: goto label_26bfc0;
        case 0x26bfc4u: goto label_26bfc4;
        case 0x26bfc8u: goto label_26bfc8;
        case 0x26bfccu: goto label_26bfcc;
        case 0x26bfd0u: goto label_26bfd0;
        case 0x26bfd4u: goto label_26bfd4;
        case 0x26bfd8u: goto label_26bfd8;
        case 0x26bfdcu: goto label_26bfdc;
        case 0x26bfe0u: goto label_26bfe0;
        case 0x26bfe4u: goto label_26bfe4;
        case 0x26bfe8u: goto label_26bfe8;
        case 0x26bfecu: goto label_26bfec;
        case 0x26bff0u: goto label_26bff0;
        case 0x26bff4u: goto label_26bff4;
        case 0x26bff8u: goto label_26bff8;
        case 0x26bffcu: goto label_26bffc;
        case 0x26c000u: goto label_26c000;
        case 0x26c004u: goto label_26c004;
        case 0x26c008u: goto label_26c008;
        case 0x26c00cu: goto label_26c00c;
        case 0x26c010u: goto label_26c010;
        case 0x26c014u: goto label_26c014;
        case 0x26c018u: goto label_26c018;
        case 0x26c01cu: goto label_26c01c;
        case 0x26c020u: goto label_26c020;
        case 0x26c024u: goto label_26c024;
        case 0x26c028u: goto label_26c028;
        case 0x26c02cu: goto label_26c02c;
        case 0x26c030u: goto label_26c030;
        case 0x26c034u: goto label_26c034;
        case 0x26c038u: goto label_26c038;
        case 0x26c03cu: goto label_26c03c;
        case 0x26c040u: goto label_26c040;
        case 0x26c044u: goto label_26c044;
        case 0x26c048u: goto label_26c048;
        case 0x26c04cu: goto label_26c04c;
        case 0x26c050u: goto label_26c050;
        case 0x26c054u: goto label_26c054;
        case 0x26c058u: goto label_26c058;
        case 0x26c05cu: goto label_26c05c;
        case 0x26c060u: goto label_26c060;
        case 0x26c064u: goto label_26c064;
        case 0x26c068u: goto label_26c068;
        case 0x26c06cu: goto label_26c06c;
        case 0x26c070u: goto label_26c070;
        case 0x26c074u: goto label_26c074;
        case 0x26c078u: goto label_26c078;
        case 0x26c07cu: goto label_26c07c;
        case 0x26c080u: goto label_26c080;
        case 0x26c084u: goto label_26c084;
        case 0x26c088u: goto label_26c088;
        case 0x26c08cu: goto label_26c08c;
        case 0x26c090u: goto label_26c090;
        case 0x26c094u: goto label_26c094;
        case 0x26c098u: goto label_26c098;
        case 0x26c09cu: goto label_26c09c;
        case 0x26c0a0u: goto label_26c0a0;
        case 0x26c0a4u: goto label_26c0a4;
        case 0x26c0a8u: goto label_26c0a8;
        case 0x26c0acu: goto label_26c0ac;
        case 0x26c0b0u: goto label_26c0b0;
        case 0x26c0b4u: goto label_26c0b4;
        case 0x26c0b8u: goto label_26c0b8;
        case 0x26c0bcu: goto label_26c0bc;
        case 0x26c0c0u: goto label_26c0c0;
        case 0x26c0c4u: goto label_26c0c4;
        case 0x26c0c8u: goto label_26c0c8;
        case 0x26c0ccu: goto label_26c0cc;
        case 0x26c0d0u: goto label_26c0d0;
        case 0x26c0d4u: goto label_26c0d4;
        case 0x26c0d8u: goto label_26c0d8;
        case 0x26c0dcu: goto label_26c0dc;
        case 0x26c0e0u: goto label_26c0e0;
        case 0x26c0e4u: goto label_26c0e4;
        case 0x26c0e8u: goto label_26c0e8;
        case 0x26c0ecu: goto label_26c0ec;
        case 0x26c0f0u: goto label_26c0f0;
        case 0x26c0f4u: goto label_26c0f4;
        case 0x26c0f8u: goto label_26c0f8;
        case 0x26c0fcu: goto label_26c0fc;
        case 0x26c100u: goto label_26c100;
        case 0x26c104u: goto label_26c104;
        case 0x26c108u: goto label_26c108;
        case 0x26c10cu: goto label_26c10c;
        case 0x26c110u: goto label_26c110;
        case 0x26c114u: goto label_26c114;
        case 0x26c118u: goto label_26c118;
        case 0x26c11cu: goto label_26c11c;
        case 0x26c120u: goto label_26c120;
        case 0x26c124u: goto label_26c124;
        case 0x26c128u: goto label_26c128;
        case 0x26c12cu: goto label_26c12c;
        case 0x26c130u: goto label_26c130;
        case 0x26c134u: goto label_26c134;
        case 0x26c138u: goto label_26c138;
        case 0x26c13cu: goto label_26c13c;
        case 0x26c140u: goto label_26c140;
        case 0x26c144u: goto label_26c144;
        case 0x26c148u: goto label_26c148;
        case 0x26c14cu: goto label_26c14c;
        case 0x26c150u: goto label_26c150;
        case 0x26c154u: goto label_26c154;
        case 0x26c158u: goto label_26c158;
        case 0x26c15cu: goto label_26c15c;
        case 0x26c160u: goto label_26c160;
        case 0x26c164u: goto label_26c164;
        case 0x26c168u: goto label_26c168;
        case 0x26c16cu: goto label_26c16c;
        case 0x26c170u: goto label_26c170;
        case 0x26c174u: goto label_26c174;
        case 0x26c178u: goto label_26c178;
        case 0x26c17cu: goto label_26c17c;
        case 0x26c180u: goto label_26c180;
        case 0x26c184u: goto label_26c184;
        case 0x26c188u: goto label_26c188;
        case 0x26c18cu: goto label_26c18c;
        case 0x26c190u: goto label_26c190;
        case 0x26c194u: goto label_26c194;
        case 0x26c198u: goto label_26c198;
        case 0x26c19cu: goto label_26c19c;
        case 0x26c1a0u: goto label_26c1a0;
        case 0x26c1a4u: goto label_26c1a4;
        case 0x26c1a8u: goto label_26c1a8;
        case 0x26c1acu: goto label_26c1ac;
        case 0x26c1b0u: goto label_26c1b0;
        case 0x26c1b4u: goto label_26c1b4;
        case 0x26c1b8u: goto label_26c1b8;
        case 0x26c1bcu: goto label_26c1bc;
        case 0x26c1c0u: goto label_26c1c0;
        case 0x26c1c4u: goto label_26c1c4;
        case 0x26c1c8u: goto label_26c1c8;
        case 0x26c1ccu: goto label_26c1cc;
        case 0x26c1d0u: goto label_26c1d0;
        case 0x26c1d4u: goto label_26c1d4;
        case 0x26c1d8u: goto label_26c1d8;
        case 0x26c1dcu: goto label_26c1dc;
        case 0x26c1e0u: goto label_26c1e0;
        case 0x26c1e4u: goto label_26c1e4;
        case 0x26c1e8u: goto label_26c1e8;
        case 0x26c1ecu: goto label_26c1ec;
        case 0x26c1f0u: goto label_26c1f0;
        case 0x26c1f4u: goto label_26c1f4;
        case 0x26c1f8u: goto label_26c1f8;
        case 0x26c1fcu: goto label_26c1fc;
        case 0x26c200u: goto label_26c200;
        case 0x26c204u: goto label_26c204;
        case 0x26c208u: goto label_26c208;
        case 0x26c20cu: goto label_26c20c;
        case 0x26c210u: goto label_26c210;
        case 0x26c214u: goto label_26c214;
        case 0x26c218u: goto label_26c218;
        case 0x26c21cu: goto label_26c21c;
        case 0x26c220u: goto label_26c220;
        case 0x26c224u: goto label_26c224;
        case 0x26c228u: goto label_26c228;
        case 0x26c22cu: goto label_26c22c;
        case 0x26c230u: goto label_26c230;
        case 0x26c234u: goto label_26c234;
        case 0x26c238u: goto label_26c238;
        case 0x26c23cu: goto label_26c23c;
        case 0x26c240u: goto label_26c240;
        case 0x26c244u: goto label_26c244;
        case 0x26c248u: goto label_26c248;
        case 0x26c24cu: goto label_26c24c;
        case 0x26c250u: goto label_26c250;
        case 0x26c254u: goto label_26c254;
        case 0x26c258u: goto label_26c258;
        case 0x26c25cu: goto label_26c25c;
        case 0x26c260u: goto label_26c260;
        case 0x26c264u: goto label_26c264;
        case 0x26c268u: goto label_26c268;
        case 0x26c26cu: goto label_26c26c;
        case 0x26c270u: goto label_26c270;
        case 0x26c274u: goto label_26c274;
        case 0x26c278u: goto label_26c278;
        case 0x26c27cu: goto label_26c27c;
        case 0x26c280u: goto label_26c280;
        case 0x26c284u: goto label_26c284;
        case 0x26c288u: goto label_26c288;
        case 0x26c28cu: goto label_26c28c;
        case 0x26c290u: goto label_26c290;
        case 0x26c294u: goto label_26c294;
        case 0x26c298u: goto label_26c298;
        case 0x26c29cu: goto label_26c29c;
        case 0x26c2a0u: goto label_26c2a0;
        case 0x26c2a4u: goto label_26c2a4;
        case 0x26c2a8u: goto label_26c2a8;
        case 0x26c2acu: goto label_26c2ac;
        case 0x26c2b0u: goto label_26c2b0;
        case 0x26c2b4u: goto label_26c2b4;
        case 0x26c2b8u: goto label_26c2b8;
        case 0x26c2bcu: goto label_26c2bc;
        case 0x26c2c0u: goto label_26c2c0;
        case 0x26c2c4u: goto label_26c2c4;
        case 0x26c2c8u: goto label_26c2c8;
        case 0x26c2ccu: goto label_26c2cc;
        case 0x26c2d0u: goto label_26c2d0;
        case 0x26c2d4u: goto label_26c2d4;
        case 0x26c2d8u: goto label_26c2d8;
        case 0x26c2dcu: goto label_26c2dc;
        case 0x26c2e0u: goto label_26c2e0;
        case 0x26c2e4u: goto label_26c2e4;
        case 0x26c2e8u: goto label_26c2e8;
        case 0x26c2ecu: goto label_26c2ec;
        case 0x26c2f0u: goto label_26c2f0;
        case 0x26c2f4u: goto label_26c2f4;
        case 0x26c2f8u: goto label_26c2f8;
        case 0x26c2fcu: goto label_26c2fc;
        case 0x26c300u: goto label_26c300;
        case 0x26c304u: goto label_26c304;
        case 0x26c308u: goto label_26c308;
        case 0x26c30cu: goto label_26c30c;
        case 0x26c310u: goto label_26c310;
        case 0x26c314u: goto label_26c314;
        case 0x26c318u: goto label_26c318;
        case 0x26c31cu: goto label_26c31c;
        case 0x26c320u: goto label_26c320;
        case 0x26c324u: goto label_26c324;
        case 0x26c328u: goto label_26c328;
        case 0x26c32cu: goto label_26c32c;
        case 0x26c330u: goto label_26c330;
        case 0x26c334u: goto label_26c334;
        case 0x26c338u: goto label_26c338;
        case 0x26c33cu: goto label_26c33c;
        case 0x26c340u: goto label_26c340;
        case 0x26c344u: goto label_26c344;
        case 0x26c348u: goto label_26c348;
        case 0x26c34cu: goto label_26c34c;
        case 0x26c350u: goto label_26c350;
        case 0x26c354u: goto label_26c354;
        case 0x26c358u: goto label_26c358;
        case 0x26c35cu: goto label_26c35c;
        case 0x26c360u: goto label_26c360;
        case 0x26c364u: goto label_26c364;
        case 0x26c368u: goto label_26c368;
        case 0x26c36cu: goto label_26c36c;
        case 0x26c370u: goto label_26c370;
        case 0x26c374u: goto label_26c374;
        case 0x26c378u: goto label_26c378;
        case 0x26c37cu: goto label_26c37c;
        case 0x26c380u: goto label_26c380;
        case 0x26c384u: goto label_26c384;
        case 0x26c388u: goto label_26c388;
        case 0x26c38cu: goto label_26c38c;
        case 0x26c390u: goto label_26c390;
        case 0x26c394u: goto label_26c394;
        case 0x26c398u: goto label_26c398;
        case 0x26c39cu: goto label_26c39c;
        case 0x26c3a0u: goto label_26c3a0;
        case 0x26c3a4u: goto label_26c3a4;
        case 0x26c3a8u: goto label_26c3a8;
        case 0x26c3acu: goto label_26c3ac;
        case 0x26c3b0u: goto label_26c3b0;
        case 0x26c3b4u: goto label_26c3b4;
        case 0x26c3b8u: goto label_26c3b8;
        case 0x26c3bcu: goto label_26c3bc;
        case 0x26c3c0u: goto label_26c3c0;
        case 0x26c3c4u: goto label_26c3c4;
        case 0x26c3c8u: goto label_26c3c8;
        case 0x26c3ccu: goto label_26c3cc;
        case 0x26c3d0u: goto label_26c3d0;
        case 0x26c3d4u: goto label_26c3d4;
        case 0x26c3d8u: goto label_26c3d8;
        case 0x26c3dcu: goto label_26c3dc;
        case 0x26c3e0u: goto label_26c3e0;
        case 0x26c3e4u: goto label_26c3e4;
        case 0x26c3e8u: goto label_26c3e8;
        case 0x26c3ecu: goto label_26c3ec;
        case 0x26c3f0u: goto label_26c3f0;
        case 0x26c3f4u: goto label_26c3f4;
        case 0x26c3f8u: goto label_26c3f8;
        case 0x26c3fcu: goto label_26c3fc;
        case 0x26c400u: goto label_26c400;
        case 0x26c404u: goto label_26c404;
        case 0x26c408u: goto label_26c408;
        case 0x26c40cu: goto label_26c40c;
        case 0x26c410u: goto label_26c410;
        case 0x26c414u: goto label_26c414;
        case 0x26c418u: goto label_26c418;
        case 0x26c41cu: goto label_26c41c;
        case 0x26c420u: goto label_26c420;
        case 0x26c424u: goto label_26c424;
        case 0x26c428u: goto label_26c428;
        case 0x26c42cu: goto label_26c42c;
        case 0x26c430u: goto label_26c430;
        case 0x26c434u: goto label_26c434;
        case 0x26c438u: goto label_26c438;
        case 0x26c43cu: goto label_26c43c;
        case 0x26c440u: goto label_26c440;
        case 0x26c444u: goto label_26c444;
        case 0x26c448u: goto label_26c448;
        case 0x26c44cu: goto label_26c44c;
        case 0x26c450u: goto label_26c450;
        case 0x26c454u: goto label_26c454;
        case 0x26c458u: goto label_26c458;
        case 0x26c45cu: goto label_26c45c;
        case 0x26c460u: goto label_26c460;
        case 0x26c464u: goto label_26c464;
        case 0x26c468u: goto label_26c468;
        case 0x26c46cu: goto label_26c46c;
        case 0x26c470u: goto label_26c470;
        case 0x26c474u: goto label_26c474;
        case 0x26c478u: goto label_26c478;
        case 0x26c47cu: goto label_26c47c;
        case 0x26c480u: goto label_26c480;
        case 0x26c484u: goto label_26c484;
        case 0x26c488u: goto label_26c488;
        case 0x26c48cu: goto label_26c48c;
        case 0x26c490u: goto label_26c490;
        case 0x26c494u: goto label_26c494;
        case 0x26c498u: goto label_26c498;
        case 0x26c49cu: goto label_26c49c;
        case 0x26c4a0u: goto label_26c4a0;
        case 0x26c4a4u: goto label_26c4a4;
        case 0x26c4a8u: goto label_26c4a8;
        case 0x26c4acu: goto label_26c4ac;
        case 0x26c4b0u: goto label_26c4b0;
        case 0x26c4b4u: goto label_26c4b4;
        case 0x26c4b8u: goto label_26c4b8;
        case 0x26c4bcu: goto label_26c4bc;
        case 0x26c4c0u: goto label_26c4c0;
        case 0x26c4c4u: goto label_26c4c4;
        case 0x26c4c8u: goto label_26c4c8;
        case 0x26c4ccu: goto label_26c4cc;
        case 0x26c4d0u: goto label_26c4d0;
        case 0x26c4d4u: goto label_26c4d4;
        case 0x26c4d8u: goto label_26c4d8;
        case 0x26c4dcu: goto label_26c4dc;
        case 0x26c4e0u: goto label_26c4e0;
        case 0x26c4e4u: goto label_26c4e4;
        case 0x26c4e8u: goto label_26c4e8;
        case 0x26c4ecu: goto label_26c4ec;
        case 0x26c4f0u: goto label_26c4f0;
        case 0x26c4f4u: goto label_26c4f4;
        case 0x26c4f8u: goto label_26c4f8;
        case 0x26c4fcu: goto label_26c4fc;
        case 0x26c500u: goto label_26c500;
        case 0x26c504u: goto label_26c504;
        case 0x26c508u: goto label_26c508;
        case 0x26c50cu: goto label_26c50c;
        case 0x26c510u: goto label_26c510;
        case 0x26c514u: goto label_26c514;
        case 0x26c518u: goto label_26c518;
        case 0x26c51cu: goto label_26c51c;
        case 0x26c520u: goto label_26c520;
        case 0x26c524u: goto label_26c524;
        case 0x26c528u: goto label_26c528;
        case 0x26c52cu: goto label_26c52c;
        case 0x26c530u: goto label_26c530;
        case 0x26c534u: goto label_26c534;
        case 0x26c538u: goto label_26c538;
        case 0x26c53cu: goto label_26c53c;
        case 0x26c540u: goto label_26c540;
        case 0x26c544u: goto label_26c544;
        case 0x26c548u: goto label_26c548;
        case 0x26c54cu: goto label_26c54c;
        case 0x26c550u: goto label_26c550;
        case 0x26c554u: goto label_26c554;
        case 0x26c558u: goto label_26c558;
        case 0x26c55cu: goto label_26c55c;
        case 0x26c560u: goto label_26c560;
        case 0x26c564u: goto label_26c564;
        case 0x26c568u: goto label_26c568;
        case 0x26c56cu: goto label_26c56c;
        case 0x26c570u: goto label_26c570;
        case 0x26c574u: goto label_26c574;
        case 0x26c578u: goto label_26c578;
        case 0x26c57cu: goto label_26c57c;
        case 0x26c580u: goto label_26c580;
        case 0x26c584u: goto label_26c584;
        case 0x26c588u: goto label_26c588;
        case 0x26c58cu: goto label_26c58c;
        case 0x26c590u: goto label_26c590;
        case 0x26c594u: goto label_26c594;
        case 0x26c598u: goto label_26c598;
        case 0x26c59cu: goto label_26c59c;
        case 0x26c5a0u: goto label_26c5a0;
        case 0x26c5a4u: goto label_26c5a4;
        case 0x26c5a8u: goto label_26c5a8;
        case 0x26c5acu: goto label_26c5ac;
        case 0x26c5b0u: goto label_26c5b0;
        case 0x26c5b4u: goto label_26c5b4;
        case 0x26c5b8u: goto label_26c5b8;
        case 0x26c5bcu: goto label_26c5bc;
        case 0x26c5c0u: goto label_26c5c0;
        case 0x26c5c4u: goto label_26c5c4;
        case 0x26c5c8u: goto label_26c5c8;
        case 0x26c5ccu: goto label_26c5cc;
        case 0x26c5d0u: goto label_26c5d0;
        case 0x26c5d4u: goto label_26c5d4;
        case 0x26c5d8u: goto label_26c5d8;
        case 0x26c5dcu: goto label_26c5dc;
        case 0x26c5e0u: goto label_26c5e0;
        case 0x26c5e4u: goto label_26c5e4;
        case 0x26c5e8u: goto label_26c5e8;
        case 0x26c5ecu: goto label_26c5ec;
        case 0x26c5f0u: goto label_26c5f0;
        case 0x26c5f4u: goto label_26c5f4;
        case 0x26c5f8u: goto label_26c5f8;
        case 0x26c5fcu: goto label_26c5fc;
        case 0x26c600u: goto label_26c600;
        case 0x26c604u: goto label_26c604;
        case 0x26c608u: goto label_26c608;
        case 0x26c60cu: goto label_26c60c;
        case 0x26c610u: goto label_26c610;
        case 0x26c614u: goto label_26c614;
        case 0x26c618u: goto label_26c618;
        case 0x26c61cu: goto label_26c61c;
        case 0x26c620u: goto label_26c620;
        case 0x26c624u: goto label_26c624;
        case 0x26c628u: goto label_26c628;
        case 0x26c62cu: goto label_26c62c;
        case 0x26c630u: goto label_26c630;
        case 0x26c634u: goto label_26c634;
        case 0x26c638u: goto label_26c638;
        case 0x26c63cu: goto label_26c63c;
        case 0x26c640u: goto label_26c640;
        case 0x26c644u: goto label_26c644;
        case 0x26c648u: goto label_26c648;
        case 0x26c64cu: goto label_26c64c;
        case 0x26c650u: goto label_26c650;
        case 0x26c654u: goto label_26c654;
        case 0x26c658u: goto label_26c658;
        case 0x26c65cu: goto label_26c65c;
        case 0x26c660u: goto label_26c660;
        case 0x26c664u: goto label_26c664;
        case 0x26c668u: goto label_26c668;
        case 0x26c66cu: goto label_26c66c;
        case 0x26c670u: goto label_26c670;
        case 0x26c674u: goto label_26c674;
        case 0x26c678u: goto label_26c678;
        case 0x26c67cu: goto label_26c67c;
        case 0x26c680u: goto label_26c680;
        case 0x26c684u: goto label_26c684;
        case 0x26c688u: goto label_26c688;
        case 0x26c68cu: goto label_26c68c;
        case 0x26c690u: goto label_26c690;
        case 0x26c694u: goto label_26c694;
        case 0x26c698u: goto label_26c698;
        case 0x26c69cu: goto label_26c69c;
        case 0x26c6a0u: goto label_26c6a0;
        case 0x26c6a4u: goto label_26c6a4;
        case 0x26c6a8u: goto label_26c6a8;
        case 0x26c6acu: goto label_26c6ac;
        case 0x26c6b0u: goto label_26c6b0;
        case 0x26c6b4u: goto label_26c6b4;
        case 0x26c6b8u: goto label_26c6b8;
        case 0x26c6bcu: goto label_26c6bc;
        case 0x26c6c0u: goto label_26c6c0;
        case 0x26c6c4u: goto label_26c6c4;
        case 0x26c6c8u: goto label_26c6c8;
        case 0x26c6ccu: goto label_26c6cc;
        case 0x26c6d0u: goto label_26c6d0;
        case 0x26c6d4u: goto label_26c6d4;
        case 0x26c6d8u: goto label_26c6d8;
        case 0x26c6dcu: goto label_26c6dc;
        case 0x26c6e0u: goto label_26c6e0;
        case 0x26c6e4u: goto label_26c6e4;
        case 0x26c6e8u: goto label_26c6e8;
        case 0x26c6ecu: goto label_26c6ec;
        case 0x26c6f0u: goto label_26c6f0;
        case 0x26c6f4u: goto label_26c6f4;
        case 0x26c6f8u: goto label_26c6f8;
        case 0x26c6fcu: goto label_26c6fc;
        case 0x26c700u: goto label_26c700;
        case 0x26c704u: goto label_26c704;
        case 0x26c708u: goto label_26c708;
        case 0x26c70cu: goto label_26c70c;
        case 0x26c710u: goto label_26c710;
        case 0x26c714u: goto label_26c714;
        case 0x26c718u: goto label_26c718;
        case 0x26c71cu: goto label_26c71c;
        case 0x26c720u: goto label_26c720;
        case 0x26c724u: goto label_26c724;
        case 0x26c728u: goto label_26c728;
        case 0x26c72cu: goto label_26c72c;
        case 0x26c730u: goto label_26c730;
        case 0x26c734u: goto label_26c734;
        case 0x26c738u: goto label_26c738;
        case 0x26c73cu: goto label_26c73c;
        case 0x26c740u: goto label_26c740;
        case 0x26c744u: goto label_26c744;
        case 0x26c748u: goto label_26c748;
        case 0x26c74cu: goto label_26c74c;
        case 0x26c750u: goto label_26c750;
        case 0x26c754u: goto label_26c754;
        case 0x26c758u: goto label_26c758;
        case 0x26c75cu: goto label_26c75c;
        case 0x26c760u: goto label_26c760;
        case 0x26c764u: goto label_26c764;
        case 0x26c768u: goto label_26c768;
        case 0x26c76cu: goto label_26c76c;
        case 0x26c770u: goto label_26c770;
        case 0x26c774u: goto label_26c774;
        case 0x26c778u: goto label_26c778;
        case 0x26c77cu: goto label_26c77c;
        case 0x26c780u: goto label_26c780;
        case 0x26c784u: goto label_26c784;
        case 0x26c788u: goto label_26c788;
        case 0x26c78cu: goto label_26c78c;
        case 0x26c790u: goto label_26c790;
        case 0x26c794u: goto label_26c794;
        case 0x26c798u: goto label_26c798;
        case 0x26c79cu: goto label_26c79c;
        case 0x26c7a0u: goto label_26c7a0;
        case 0x26c7a4u: goto label_26c7a4;
        case 0x26c7a8u: goto label_26c7a8;
        case 0x26c7acu: goto label_26c7ac;
        case 0x26c7b0u: goto label_26c7b0;
        case 0x26c7b4u: goto label_26c7b4;
        case 0x26c7b8u: goto label_26c7b8;
        case 0x26c7bcu: goto label_26c7bc;
        case 0x26c7c0u: goto label_26c7c0;
        case 0x26c7c4u: goto label_26c7c4;
        case 0x26c7c8u: goto label_26c7c8;
        case 0x26c7ccu: goto label_26c7cc;
        case 0x26c7d0u: goto label_26c7d0;
        case 0x26c7d4u: goto label_26c7d4;
        case 0x26c7d8u: goto label_26c7d8;
        case 0x26c7dcu: goto label_26c7dc;
        case 0x26c7e0u: goto label_26c7e0;
        case 0x26c7e4u: goto label_26c7e4;
        case 0x26c7e8u: goto label_26c7e8;
        case 0x26c7ecu: goto label_26c7ec;
        case 0x26c7f0u: goto label_26c7f0;
        case 0x26c7f4u: goto label_26c7f4;
        case 0x26c7f8u: goto label_26c7f8;
        case 0x26c7fcu: goto label_26c7fc;
        case 0x26c800u: goto label_26c800;
        case 0x26c804u: goto label_26c804;
        case 0x26c808u: goto label_26c808;
        case 0x26c80cu: goto label_26c80c;
        case 0x26c810u: goto label_26c810;
        case 0x26c814u: goto label_26c814;
        case 0x26c818u: goto label_26c818;
        case 0x26c81cu: goto label_26c81c;
        case 0x26c820u: goto label_26c820;
        case 0x26c824u: goto label_26c824;
        case 0x26c828u: goto label_26c828;
        case 0x26c82cu: goto label_26c82c;
        case 0x26c830u: goto label_26c830;
        case 0x26c834u: goto label_26c834;
        case 0x26c838u: goto label_26c838;
        case 0x26c83cu: goto label_26c83c;
        case 0x26c840u: goto label_26c840;
        case 0x26c844u: goto label_26c844;
        case 0x26c848u: goto label_26c848;
        case 0x26c84cu: goto label_26c84c;
        case 0x26c850u: goto label_26c850;
        case 0x26c854u: goto label_26c854;
        case 0x26c858u: goto label_26c858;
        case 0x26c85cu: goto label_26c85c;
        case 0x26c860u: goto label_26c860;
        case 0x26c864u: goto label_26c864;
        case 0x26c868u: goto label_26c868;
        case 0x26c86cu: goto label_26c86c;
        case 0x26c870u: goto label_26c870;
        case 0x26c874u: goto label_26c874;
        case 0x26c878u: goto label_26c878;
        case 0x26c87cu: goto label_26c87c;
        case 0x26c880u: goto label_26c880;
        case 0x26c884u: goto label_26c884;
        case 0x26c888u: goto label_26c888;
        case 0x26c88cu: goto label_26c88c;
        case 0x26c890u: goto label_26c890;
        case 0x26c894u: goto label_26c894;
        case 0x26c898u: goto label_26c898;
        case 0x26c89cu: goto label_26c89c;
        case 0x26c8a0u: goto label_26c8a0;
        case 0x26c8a4u: goto label_26c8a4;
        case 0x26c8a8u: goto label_26c8a8;
        case 0x26c8acu: goto label_26c8ac;
        case 0x26c8b0u: goto label_26c8b0;
        case 0x26c8b4u: goto label_26c8b4;
        case 0x26c8b8u: goto label_26c8b8;
        case 0x26c8bcu: goto label_26c8bc;
        case 0x26c8c0u: goto label_26c8c0;
        case 0x26c8c4u: goto label_26c8c4;
        case 0x26c8c8u: goto label_26c8c8;
        case 0x26c8ccu: goto label_26c8cc;
        case 0x26c8d0u: goto label_26c8d0;
        case 0x26c8d4u: goto label_26c8d4;
        case 0x26c8d8u: goto label_26c8d8;
        case 0x26c8dcu: goto label_26c8dc;
        case 0x26c8e0u: goto label_26c8e0;
        case 0x26c8e4u: goto label_26c8e4;
        case 0x26c8e8u: goto label_26c8e8;
        case 0x26c8ecu: goto label_26c8ec;
        case 0x26c8f0u: goto label_26c8f0;
        case 0x26c8f4u: goto label_26c8f4;
        case 0x26c8f8u: goto label_26c8f8;
        case 0x26c8fcu: goto label_26c8fc;
        case 0x26c900u: goto label_26c900;
        case 0x26c904u: goto label_26c904;
        case 0x26c908u: goto label_26c908;
        case 0x26c90cu: goto label_26c90c;
        case 0x26c910u: goto label_26c910;
        case 0x26c914u: goto label_26c914;
        case 0x26c918u: goto label_26c918;
        case 0x26c91cu: goto label_26c91c;
        case 0x26c920u: goto label_26c920;
        case 0x26c924u: goto label_26c924;
        case 0x26c928u: goto label_26c928;
        case 0x26c92cu: goto label_26c92c;
        case 0x26c930u: goto label_26c930;
        case 0x26c934u: goto label_26c934;
        case 0x26c938u: goto label_26c938;
        case 0x26c93cu: goto label_26c93c;
        case 0x26c940u: goto label_26c940;
        case 0x26c944u: goto label_26c944;
        case 0x26c948u: goto label_26c948;
        case 0x26c94cu: goto label_26c94c;
        case 0x26c950u: goto label_26c950;
        case 0x26c954u: goto label_26c954;
        case 0x26c958u: goto label_26c958;
        case 0x26c95cu: goto label_26c95c;
        case 0x26c960u: goto label_26c960;
        case 0x26c964u: goto label_26c964;
        case 0x26c968u: goto label_26c968;
        case 0x26c96cu: goto label_26c96c;
        case 0x26c970u: goto label_26c970;
        case 0x26c974u: goto label_26c974;
        case 0x26c978u: goto label_26c978;
        case 0x26c97cu: goto label_26c97c;
        case 0x26c980u: goto label_26c980;
        case 0x26c984u: goto label_26c984;
        case 0x26c988u: goto label_26c988;
        case 0x26c98cu: goto label_26c98c;
        case 0x26c990u: goto label_26c990;
        case 0x26c994u: goto label_26c994;
        case 0x26c998u: goto label_26c998;
        case 0x26c99cu: goto label_26c99c;
        case 0x26c9a0u: goto label_26c9a0;
        case 0x26c9a4u: goto label_26c9a4;
        case 0x26c9a8u: goto label_26c9a8;
        case 0x26c9acu: goto label_26c9ac;
        case 0x26c9b0u: goto label_26c9b0;
        case 0x26c9b4u: goto label_26c9b4;
        case 0x26c9b8u: goto label_26c9b8;
        case 0x26c9bcu: goto label_26c9bc;
        case 0x26c9c0u: goto label_26c9c0;
        case 0x26c9c4u: goto label_26c9c4;
        case 0x26c9c8u: goto label_26c9c8;
        case 0x26c9ccu: goto label_26c9cc;
        case 0x26c9d0u: goto label_26c9d0;
        case 0x26c9d4u: goto label_26c9d4;
        case 0x26c9d8u: goto label_26c9d8;
        case 0x26c9dcu: goto label_26c9dc;
        case 0x26c9e0u: goto label_26c9e0;
        case 0x26c9e4u: goto label_26c9e4;
        case 0x26c9e8u: goto label_26c9e8;
        case 0x26c9ecu: goto label_26c9ec;
        case 0x26c9f0u: goto label_26c9f0;
        case 0x26c9f4u: goto label_26c9f4;
        case 0x26c9f8u: goto label_26c9f8;
        case 0x26c9fcu: goto label_26c9fc;
        case 0x26ca00u: goto label_26ca00;
        case 0x26ca04u: goto label_26ca04;
        case 0x26ca08u: goto label_26ca08;
        default: break;
    }

    ctx->pc = 0x26bf30u;

label_26bf30:
    // 0x26bf30: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x26bf30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_26bf34:
    // 0x26bf34: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x26bf34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
label_26bf38:
    // 0x26bf38: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x26bf38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_26bf3c:
    // 0x26bf3c: 0xafa40058  sw          $a0, 0x58($sp)
    ctx->pc = 0x26bf3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
label_26bf40:
    // 0x26bf40: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x26bf40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
label_26bf44:
    // 0x26bf44: 0x24630080  addiu       $v1, $v1, 0x80
    ctx->pc = 0x26bf44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
label_26bf48:
    // 0x26bf48: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x26bf48u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_26bf4c:
    // 0x26bf4c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26bf4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26bf50:
    // 0x26bf50: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x26bf50u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_26bf54:
    // 0x26bf54: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x26bf54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_26bf58:
    // 0x26bf58: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x26bf58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26bf5c:
    // 0x26bf5c: 0x10830025  beq         $a0, $v1, . + 4 + (0x25 << 2)
label_26bf60:
    if (ctx->pc == 0x26BF60u) {
        ctx->pc = 0x26BF64u;
        goto label_26bf64;
    }
    ctx->pc = 0x26BF5Cu;
    {
        const bool branch_taken_0x26bf5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x26bf5c) {
            ctx->pc = 0x26BFF4u;
            goto label_26bff4;
        }
    }
    ctx->pc = 0x26BF64u;
label_26bf64:
    // 0x26bf64: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_26bf68:
    if (ctx->pc == 0x26BF68u) {
        ctx->pc = 0x26BF6Cu;
        goto label_26bf6c;
    }
    ctx->pc = 0x26BF64u;
    {
        const bool branch_taken_0x26bf64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x26bf64) {
            ctx->pc = 0x26BF74u;
            goto label_26bf74;
        }
    }
    ctx->pc = 0x26BF6Cu;
label_26bf6c:
    // 0x26bf6c: 0x10000298  b           . + 4 + (0x298 << 2)
label_26bf70:
    if (ctx->pc == 0x26BF70u) {
        ctx->pc = 0x26BF74u;
        goto label_26bf74;
    }
    ctx->pc = 0x26BF6Cu;
    {
        const bool branch_taken_0x26bf6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26bf6c) {
            ctx->pc = 0x26C9D0u;
            goto label_26c9d0;
        }
    }
    ctx->pc = 0x26BF74u;
label_26bf74:
    // 0x26bf74: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x26bf74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26bf78:
    // 0x26bf78: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26bf78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26bf7c:
    // 0x26bf7c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x26bf7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_26bf80:
    // 0x26bf80: 0x24061461  addiu       $a2, $zero, 0x1461
    ctx->pc = 0x26bf80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5217));
label_26bf84:
    // 0x26bf84: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x26bf84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26bf88:
    // 0x26bf88: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x26bf88u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_26bf8c:
    // 0x26bf8c: 0xc0965d0  jal         func_259740
label_26bf90:
    if (ctx->pc == 0x26BF90u) {
        ctx->pc = 0x26BF94u;
        goto label_26bf94;
    }
    ctx->pc = 0x26BF8Cu;
    SET_GPR_U32(ctx, 31, 0x26BF94u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x26BF8Cu, 0x26BF94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BF94u;
label_26bf94:
    // 0x26bf94: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26bf94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26bf98:
    // 0x26bf98: 0x24440180  addiu       $a0, $v0, 0x180
    ctx->pc = 0x26bf98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
label_26bf9c:
    // 0x26bf9c: 0xc0675a4  jal         func_19D690
label_26bfa0:
    if (ctx->pc == 0x26BFA0u) {
        ctx->pc = 0x26BFA4u;
        goto label_26bfa4;
    }
    ctx->pc = 0x26BF9Cu;
    SET_GPR_U32(ctx, 31, 0x26BFA4u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x26BF9Cu, 0x26BFA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BFA4u;
label_26bfa4:
    // 0x26bfa4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26bfa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26bfa8:
    // 0x26bfa8: 0x24441b40  addiu       $a0, $v0, 0x1B40
    ctx->pc = 0x26bfa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 6976));
label_26bfac:
    // 0x26bfac: 0xc0675a4  jal         func_19D690
label_26bfb0:
    if (ctx->pc == 0x26BFB0u) {
        ctx->pc = 0x26BFB4u;
        goto label_26bfb4;
    }
    ctx->pc = 0x26BFACu;
    SET_GPR_U32(ctx, 31, 0x26BFB4u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x26BFACu, 0x26BFB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BFB4u;
label_26bfb4:
    // 0x26bfb4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26bfb4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26bfb8:
    // 0x26bfb8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26bfb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26bfbc:
    // 0x26bfbc: 0xe4401b54  swc1        $f0, 0x1B54($v0)
    ctx->pc = 0x26bfbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 6996), bits); }
label_26bfc0:
    // 0x26bfc0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26bfc0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26bfc4:
    // 0x26bfc4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26bfc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26bfc8:
    // 0x26bfc8: 0xe4401b58  swc1        $f0, 0x1B58($v0)
    ctx->pc = 0x26bfc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 7000), bits); }
label_26bfcc:
    // 0x26bfcc: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26bfccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26bfd0:
    // 0x26bfd0: 0xac401b60  sw          $zero, 0x1B60($v0)
    ctx->pc = 0x26bfd0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7008), GPR_U32(ctx, 0));
label_26bfd4:
    // 0x26bfd4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26bfd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26bfd8:
    // 0x26bfd8: 0xac601b64  sw          $zero, 0x1B64($v1)
    ctx->pc = 0x26bfd8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7012), GPR_U32(ctx, 0));
label_26bfdc:
    // 0x26bfdc: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26bfdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26bfe0:
    // 0x26bfe0: 0xac401b68  sw          $zero, 0x1B68($v0)
    ctx->pc = 0x26bfe0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7016), GPR_U32(ctx, 0));
label_26bfe4:
    // 0x26bfe4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26bfe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26bfe8:
    // 0x26bfe8: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x26bfe8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_26bfec:
    // 0x26bfec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x26bfecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_26bff0:
    // 0x26bff0: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x26bff0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_26bff4:
    // 0x26bff4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26bff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26bff8:
    // 0x26bff8: 0x8c641b60  lw          $a0, 0x1B60($v1)
    ctx->pc = 0x26bff8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7008)));
label_26bffc:
    // 0x26bffc: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26bffcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26c000:
    // 0x26c000: 0x8c631b64  lw          $v1, 0x1B64($v1)
    ctx->pc = 0x26c000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7012)));
label_26c004:
    // 0x26c004: 0x10830085  beq         $a0, $v1, . + 4 + (0x85 << 2)
label_26c008:
    if (ctx->pc == 0x26C008u) {
        ctx->pc = 0x26C00Cu;
        goto label_26c00c;
    }
    ctx->pc = 0x26C004u;
    {
        const bool branch_taken_0x26c004 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x26c004) {
            ctx->pc = 0x26C21Cu;
            goto label_26c21c;
        }
    }
    ctx->pc = 0x26C00Cu;
label_26c00c:
    // 0x26c00c: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x26c00cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26c010:
    // 0x26c010: 0x8c821b60  lw          $v0, 0x1B60($a0)
    ctx->pc = 0x26c010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 7008)));
label_26c014:
    // 0x26c014: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26c014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26c018:
    // 0x26c018: 0xac621b64  sw          $v0, 0x1B64($v1)
    ctx->pc = 0x26c018u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7012), GPR_U32(ctx, 2));
label_26c01c:
    // 0x26c01c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26c01cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26c020:
    // 0x26c020: 0x8c441b60  lw          $a0, 0x1B60($v0)
    ctx->pc = 0x26c020u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7008)));
label_26c024:
    // 0x26c024: 0x2c81000b  sltiu       $at, $a0, 0xB
    ctx->pc = 0x26c024u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
label_26c028:
    // 0x26c028: 0x1020007c  beqz        $at, . + 4 + (0x7C << 2)
label_26c02c:
    if (ctx->pc == 0x26C02Cu) {
        ctx->pc = 0x26C030u;
        goto label_26c030;
    }
    ctx->pc = 0x26C028u;
    {
        const bool branch_taken_0x26c028 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c028) {
            ctx->pc = 0x26C21Cu;
            goto label_26c21c;
        }
    }
    ctx->pc = 0x26C030u;
label_26c030:
    // 0x26c030: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x26c030u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_26c034:
    // 0x26c034: 0x244314d0  addiu       $v1, $v0, 0x14D0
    ctx->pc = 0x26c034u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 5328));
label_26c038:
    // 0x26c038: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x26c038u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_26c03c:
    // 0x26c03c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x26c03cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_26c040:
    // 0x26c040: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x26c040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_26c044:
    // 0x26c044: 0x400008  jr          $v0
label_26c048:
    if (ctx->pc == 0x26C048u) {
        ctx->pc = 0x26C04Cu;
        goto label_26c04c;
    }
    ctx->pc = 0x26C044u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26C044u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x26C04Cu;
label_26c04c:
    // 0x26c04c: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x26c04cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26c050:
    // 0x26c050: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26c050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26c054:
    // 0x26c054: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x26c054u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_26c058:
    // 0x26c058: 0x24063c61  addiu       $a2, $zero, 0x3C61
    ctx->pc = 0x26c058u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15457));
label_26c05c:
    // 0x26c05c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x26c05cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26c060:
    // 0x26c060: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x26c060u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_26c064:
    // 0x26c064: 0xc0965d0  jal         func_259740
label_26c068:
    if (ctx->pc == 0x26C068u) {
        ctx->pc = 0x26C06Cu;
        goto label_26c06c;
    }
    ctx->pc = 0x26C064u;
    SET_GPR_U32(ctx, 31, 0x26C06Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x26C064u, 0x26C06Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C06Cu;
label_26c06c:
    // 0x26c06c: 0x1000006b  b           . + 4 + (0x6B << 2)
label_26c070:
    if (ctx->pc == 0x26C070u) {
        ctx->pc = 0x26C074u;
        goto label_26c074;
    }
    ctx->pc = 0x26C06Cu;
    {
        const bool branch_taken_0x26c06c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c06c) {
            ctx->pc = 0x26C21Cu;
            goto label_26c21c;
        }
    }
    ctx->pc = 0x26C074u;
label_26c074:
    // 0x26c074: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x26c074u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26c078:
    // 0x26c078: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26c078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26c07c:
    // 0x26c07c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x26c07cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_26c080:
    // 0x26c080: 0x24063c62  addiu       $a2, $zero, 0x3C62
    ctx->pc = 0x26c080u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15458));
label_26c084:
    // 0x26c084: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x26c084u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26c088:
    // 0x26c088: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x26c088u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_26c08c:
    // 0x26c08c: 0xc0965d0  jal         func_259740
label_26c090:
    if (ctx->pc == 0x26C090u) {
        ctx->pc = 0x26C094u;
        goto label_26c094;
    }
    ctx->pc = 0x26C08Cu;
    SET_GPR_U32(ctx, 31, 0x26C094u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x26C08Cu, 0x26C094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C094u;
label_26c094:
    // 0x26c094: 0x10000061  b           . + 4 + (0x61 << 2)
label_26c098:
    if (ctx->pc == 0x26C098u) {
        ctx->pc = 0x26C09Cu;
        goto label_26c09c;
    }
    ctx->pc = 0x26C094u;
    {
        const bool branch_taken_0x26c094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c094) {
            ctx->pc = 0x26C21Cu;
            goto label_26c21c;
        }
    }
    ctx->pc = 0x26C09Cu;
label_26c09c:
    // 0x26c09c: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x26c09cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26c0a0:
    // 0x26c0a0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26c0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26c0a4:
    // 0x26c0a4: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x26c0a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_26c0a8:
    // 0x26c0a8: 0x24063c63  addiu       $a2, $zero, 0x3C63
    ctx->pc = 0x26c0a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15459));
label_26c0ac:
    // 0x26c0ac: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x26c0acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26c0b0:
    // 0x26c0b0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x26c0b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_26c0b4:
    // 0x26c0b4: 0xc0965d0  jal         func_259740
label_26c0b8:
    if (ctx->pc == 0x26C0B8u) {
        ctx->pc = 0x26C0BCu;
        goto label_26c0bc;
    }
    ctx->pc = 0x26C0B4u;
    SET_GPR_U32(ctx, 31, 0x26C0BCu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x26C0B4u, 0x26C0BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C0BCu;
label_26c0bc:
    // 0x26c0bc: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x26c0bcu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_26c0c0:
    // 0x26c0c0: 0x10000056  b           . + 4 + (0x56 << 2)
label_26c0c4:
    if (ctx->pc == 0x26C0C4u) {
        ctx->pc = 0x26C0C8u;
        goto label_26c0c8;
    }
    ctx->pc = 0x26C0C0u;
    {
        const bool branch_taken_0x26c0c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c0c0) {
            ctx->pc = 0x26C21Cu;
            goto label_26c21c;
        }
    }
    ctx->pc = 0x26C0C8u;
label_26c0c8:
    // 0x26c0c8: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x26c0c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26c0cc:
    // 0x26c0cc: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26c0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26c0d0:
    // 0x26c0d0: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x26c0d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
label_26c0d4:
    // 0x26c0d4: 0x24060a71  addiu       $a2, $zero, 0xA71
    ctx->pc = 0x26c0d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2673));
label_26c0d8:
    // 0x26c0d8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x26c0d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26c0dc:
    // 0x26c0dc: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x26c0dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_26c0e0:
    // 0x26c0e0: 0xc0965d0  jal         func_259740
label_26c0e4:
    if (ctx->pc == 0x26C0E4u) {
        ctx->pc = 0x26C0E8u;
        goto label_26c0e8;
    }
    ctx->pc = 0x26C0E0u;
    SET_GPR_U32(ctx, 31, 0x26C0E8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x26C0E0u, 0x26C0E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C0E8u;
label_26c0e8:
    // 0x26c0e8: 0x1000004c  b           . + 4 + (0x4C << 2)
label_26c0ec:
    if (ctx->pc == 0x26C0ECu) {
        ctx->pc = 0x26C0F0u;
        goto label_26c0f0;
    }
    ctx->pc = 0x26C0E8u;
    {
        const bool branch_taken_0x26c0e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c0e8) {
            ctx->pc = 0x26C21Cu;
            goto label_26c21c;
        }
    }
    ctx->pc = 0x26C0F0u;
label_26c0f0:
    // 0x26c0f0: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x26c0f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26c0f4:
    // 0x26c0f4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26c0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26c0f8:
    // 0x26c0f8: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x26c0f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_26c0fc:
    // 0x26c0fc: 0x24060072  addiu       $a2, $zero, 0x72
    ctx->pc = 0x26c0fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
label_26c100:
    // 0x26c100: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x26c100u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26c104:
    // 0x26c104: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x26c104u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_26c108:
    // 0x26c108: 0xc0965d0  jal         func_259740
label_26c10c:
    if (ctx->pc == 0x26C10Cu) {
        ctx->pc = 0x26C110u;
        goto label_26c110;
    }
    ctx->pc = 0x26C108u;
    SET_GPR_U32(ctx, 31, 0x26C110u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x26C108u, 0x26C110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C110u;
label_26c110:
    // 0x26c110: 0x10000042  b           . + 4 + (0x42 << 2)
label_26c114:
    if (ctx->pc == 0x26C114u) {
        ctx->pc = 0x26C118u;
        goto label_26c118;
    }
    ctx->pc = 0x26C110u;
    {
        const bool branch_taken_0x26c110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c110) {
            ctx->pc = 0x26C21Cu;
            goto label_26c21c;
        }
    }
    ctx->pc = 0x26C118u;
label_26c118:
    // 0x26c118: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x26c118u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26c11c:
    // 0x26c11c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26c11cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26c120:
    // 0x26c120: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x26c120u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_26c124:
    // 0x26c124: 0x24060a74  addiu       $a2, $zero, 0xA74
    ctx->pc = 0x26c124u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2676));
label_26c128:
    // 0x26c128: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x26c128u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26c12c:
    // 0x26c12c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x26c12cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_26c130:
    // 0x26c130: 0xc0965d0  jal         func_259740
label_26c134:
    if (ctx->pc == 0x26C134u) {
        ctx->pc = 0x26C138u;
        goto label_26c138;
    }
    ctx->pc = 0x26C130u;
    SET_GPR_U32(ctx, 31, 0x26C138u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x26C130u, 0x26C138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C138u;
label_26c138:
    // 0x26c138: 0x10000038  b           . + 4 + (0x38 << 2)
label_26c13c:
    if (ctx->pc == 0x26C13Cu) {
        ctx->pc = 0x26C140u;
        goto label_26c140;
    }
    ctx->pc = 0x26C138u;
    {
        const bool branch_taken_0x26c138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c138) {
            ctx->pc = 0x26C21Cu;
            goto label_26c21c;
        }
    }
    ctx->pc = 0x26C140u;
label_26c140:
    // 0x26c140: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x26c140u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26c144:
    // 0x26c144: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26c144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26c148:
    // 0x26c148: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x26c148u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_26c14c:
    // 0x26c14c: 0x24060073  addiu       $a2, $zero, 0x73
    ctx->pc = 0x26c14cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
label_26c150:
    // 0x26c150: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x26c150u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26c154:
    // 0x26c154: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x26c154u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_26c158:
    // 0x26c158: 0xc0965d0  jal         func_259740
label_26c15c:
    if (ctx->pc == 0x26C15Cu) {
        ctx->pc = 0x26C160u;
        goto label_26c160;
    }
    ctx->pc = 0x26C158u;
    SET_GPR_U32(ctx, 31, 0x26C160u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x26C158u, 0x26C160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C160u;
label_26c160:
    // 0x26c160: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x26c160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_26c164:
    // 0x26c164: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26c164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26c168:
    // 0x26c168: 0xa06210a8  sb          $v0, 0x10A8($v1)
    ctx->pc = 0x26c168u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 2));
label_26c16c:
    // 0x26c16c: 0x1000002b  b           . + 4 + (0x2B << 2)
label_26c170:
    if (ctx->pc == 0x26C170u) {
        ctx->pc = 0x26C174u;
        goto label_26c174;
    }
    ctx->pc = 0x26C16Cu;
    {
        const bool branch_taken_0x26c16c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c16c) {
            ctx->pc = 0x26C21Cu;
            goto label_26c21c;
        }
    }
    ctx->pc = 0x26C174u;
label_26c174:
    // 0x26c174: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x26c174u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26c178:
    // 0x26c178: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26c178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26c17c:
    // 0x26c17c: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x26c17cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
label_26c180:
    // 0x26c180: 0x24060075  addiu       $a2, $zero, 0x75
    ctx->pc = 0x26c180u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 117));
label_26c184:
    // 0x26c184: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x26c184u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26c188:
    // 0x26c188: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x26c188u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_26c18c:
    // 0x26c18c: 0xc0965d0  jal         func_259740
label_26c190:
    if (ctx->pc == 0x26C190u) {
        ctx->pc = 0x26C194u;
        goto label_26c194;
    }
    ctx->pc = 0x26C18Cu;
    SET_GPR_U32(ctx, 31, 0x26C194u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x26C18Cu, 0x26C194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C194u;
label_26c194:
    // 0x26c194: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x26c194u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_26c198:
    // 0x26c198: 0x10000020  b           . + 4 + (0x20 << 2)
label_26c19c:
    if (ctx->pc == 0x26C19Cu) {
        ctx->pc = 0x26C1A0u;
        goto label_26c1a0;
    }
    ctx->pc = 0x26C198u;
    {
        const bool branch_taken_0x26c198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c198) {
            ctx->pc = 0x26C21Cu;
            goto label_26c21c;
        }
    }
    ctx->pc = 0x26C1A0u;
label_26c1a0:
    // 0x26c1a0: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x26c1a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26c1a4:
    // 0x26c1a4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26c1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26c1a8:
    // 0x26c1a8: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x26c1a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
label_26c1ac:
    // 0x26c1ac: 0x24060076  addiu       $a2, $zero, 0x76
    ctx->pc = 0x26c1acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 118));
label_26c1b0:
    // 0x26c1b0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x26c1b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26c1b4:
    // 0x26c1b4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x26c1b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_26c1b8:
    // 0x26c1b8: 0xc0965d0  jal         func_259740
label_26c1bc:
    if (ctx->pc == 0x26C1BCu) {
        ctx->pc = 0x26C1C0u;
        goto label_26c1c0;
    }
    ctx->pc = 0x26C1B8u;
    SET_GPR_U32(ctx, 31, 0x26C1C0u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x26C1B8u, 0x26C1C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C1C0u;
label_26c1c0:
    // 0x26c1c0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x26c1c0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_26c1c4:
    // 0x26c1c4: 0x10000015  b           . + 4 + (0x15 << 2)
label_26c1c8:
    if (ctx->pc == 0x26C1C8u) {
        ctx->pc = 0x26C1CCu;
        goto label_26c1cc;
    }
    ctx->pc = 0x26C1C4u;
    {
        const bool branch_taken_0x26c1c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c1c4) {
            ctx->pc = 0x26C21Cu;
            goto label_26c21c;
        }
    }
    ctx->pc = 0x26C1CCu;
label_26c1cc:
    // 0x26c1cc: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x26c1ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26c1d0:
    // 0x26c1d0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26c1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26c1d4:
    // 0x26c1d4: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x26c1d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
label_26c1d8:
    // 0x26c1d8: 0x24061e6e  addiu       $a2, $zero, 0x1E6E
    ctx->pc = 0x26c1d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7790));
label_26c1dc:
    // 0x26c1dc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x26c1dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26c1e0:
    // 0x26c1e0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x26c1e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_26c1e4:
    // 0x26c1e4: 0xc0965d0  jal         func_259740
label_26c1e8:
    if (ctx->pc == 0x26C1E8u) {
        ctx->pc = 0x26C1ECu;
        goto label_26c1ec;
    }
    ctx->pc = 0x26C1E4u;
    SET_GPR_U32(ctx, 31, 0x26C1ECu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x26C1E4u, 0x26C1ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C1ECu;
label_26c1ec:
    // 0x26c1ec: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x26c1ecu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_26c1f0:
    // 0x26c1f0: 0x1000000a  b           . + 4 + (0xA << 2)
label_26c1f4:
    if (ctx->pc == 0x26C1F4u) {
        ctx->pc = 0x26C1F8u;
        goto label_26c1f8;
    }
    ctx->pc = 0x26C1F0u;
    {
        const bool branch_taken_0x26c1f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c1f0) {
            ctx->pc = 0x26C21Cu;
            goto label_26c21c;
        }
    }
    ctx->pc = 0x26C1F8u;
label_26c1f8:
    // 0x26c1f8: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x26c1f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26c1fc:
    // 0x26c1fc: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26c1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26c200:
    // 0x26c200: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x26c200u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_26c204:
    // 0x26c204: 0x24060a6f  addiu       $a2, $zero, 0xA6F
    ctx->pc = 0x26c204u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2671));
label_26c208:
    // 0x26c208: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x26c208u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26c20c:
    // 0x26c20c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x26c20cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_26c210:
    // 0x26c210: 0xc0965d0  jal         func_259740
label_26c214:
    if (ctx->pc == 0x26C214u) {
        ctx->pc = 0x26C218u;
        goto label_26c218;
    }
    ctx->pc = 0x26C210u;
    SET_GPR_U32(ctx, 31, 0x26C218u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x26C210u, 0x26C218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C218u;
label_26c218:
    // 0x26c218: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x26c218u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_26c21c:
    // 0x26c21c: 0xc09b674  jal         func_26D9D0
label_26c220:
    if (ctx->pc == 0x26C220u) {
        ctx->pc = 0x26C224u;
        goto label_26c224;
    }
    ctx->pc = 0x26C21Cu;
    SET_GPR_U32(ctx, 31, 0x26C224u);
    ctx->pc = 0x26D9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26D9D0u, 0x26C21Cu, 0x26C224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C224u;
label_26c224:
    // 0x26c224: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x26c224u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_26c228:
    // 0x26c228: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x26c228u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26c22c:
    // 0x26c22c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x26c22cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_26c230:
    // 0x26c230: 0xc096b40  jal         func_25AD00
label_26c234:
    if (ctx->pc == 0x26C234u) {
        ctx->pc = 0x26C238u;
        goto label_26c238;
    }
    ctx->pc = 0x26C230u;
    SET_GPR_U32(ctx, 31, 0x26C238u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x26C230u, 0x26C238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C238u;
label_26c238:
    // 0x26c238: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x26c238u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_26c23c:
    // 0x26c23c: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x26c23cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26c240:
    // 0x26c240: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26c240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26c244:
    // 0x26c244: 0xc46c1290  lwc1        $f12, 0x1290($v1)
    ctx->pc = 0x26c244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_26c248:
    // 0x26c248: 0xc05cd78  jal         func_1735E0
label_26c24c:
    if (ctx->pc == 0x26C24Cu) {
        ctx->pc = 0x26C250u;
        goto label_26c250;
    }
    ctx->pc = 0x26C248u;
    SET_GPR_U32(ctx, 31, 0x26C250u);
    ctx->pc = 0x1735E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1735E0u, 0x26C248u, 0x26C250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C250u;
label_26c250:
    // 0x26c250: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x26c250u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_26c254:
    // 0x26c254: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x26c254u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26c258:
    // 0x26c258: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x26c258u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_26c25c:
    // 0x26c25c: 0xc0574f4  jal         func_15D3D0
label_26c260:
    if (ctx->pc == 0x26C260u) {
        ctx->pc = 0x26C264u;
        goto label_26c264;
    }
    ctx->pc = 0x26C25Cu;
    SET_GPR_U32(ctx, 31, 0x26C264u);
    ctx->pc = 0x15D3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D3D0u, 0x26C25Cu, 0x26C264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C264u;
label_26c264:
    // 0x26c264: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26c264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26c268:
    // 0x26c268: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x26c268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
label_26c26c:
    // 0x26c26c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x26c26cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_26c270:
    // 0x26c270: 0xc05cf7c  jal         func_173DF0
label_26c274:
    if (ctx->pc == 0x26C274u) {
        ctx->pc = 0x26C278u;
        goto label_26c278;
    }
    ctx->pc = 0x26C270u;
    SET_GPR_U32(ctx, 31, 0x26C278u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x26C270u, 0x26C278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C278u;
label_26c278:
    // 0x26c278: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x26c278u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
label_26c27c:
    // 0x26c27c: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x26c27cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_26c280:
    // 0x26c280: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x26c280u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_26c284:
    // 0x26c284: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x26c284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26c288:
    // 0x26c288: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x26c288u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_26c28c:
    // 0x26c28c: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x26c28cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26c290:
    // 0x26c290: 0xc4800124  lwc1        $f0, 0x124($a0)
    ctx->pc = 0x26c290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26c294:
    // 0x26c294: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x26c294u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_26c298:
    // 0x26c298: 0x0  nop
    ctx->pc = 0x26c298u;
    // NOP
label_26c29c:
    // 0x26c29c: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_26c2a0:
    if (ctx->pc == 0x26C2A0u) {
        ctx->pc = 0x26C2A4u;
        goto label_26c2a4;
    }
    ctx->pc = 0x26C29Cu;
    {
        const bool branch_taken_0x26c29c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26c29c) {
            ctx->pc = 0x26C2BCu;
            goto label_26c2bc;
        }
    }
    ctx->pc = 0x26C2A4u;
label_26c2a4:
    // 0x26c2a4: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x26c2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_26c2a8:
    // 0x26c2a8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x26c2a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_26c2ac:
    // 0x26c2ac: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x26c2acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26c2b0:
    // 0x26c2b0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x26c2b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_26c2b4:
    // 0x26c2b4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26c2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26c2b8:
    // 0x26c2b8: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x26c2b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
label_26c2bc:
    // 0x26c2bc: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x26c2bcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_26c2c0:
    // 0x26c2c0: 0xc097530  jal         func_25D4C0
label_26c2c4:
    if (ctx->pc == 0x26C2C4u) {
        ctx->pc = 0x26C2C8u;
        goto label_26c2c8;
    }
    ctx->pc = 0x26C2C0u;
    SET_GPR_U32(ctx, 31, 0x26C2C8u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x26C2C0u, 0x26C2C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C2C8u;
label_26c2c8:
    // 0x26c2c8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x26c2c8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_26c2cc:
    // 0x26c2cc: 0x96030004  lhu         $v1, 0x4($s0)
    ctx->pc = 0x26c2ccu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_26c2d0:
    // 0x26c2d0: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x26c2d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_26c2d4:
    // 0x26c2d4: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x26c2d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_26c2d8:
    // 0x26c2d8: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
label_26c2dc:
    if (ctx->pc == 0x26C2DCu) {
        ctx->pc = 0x26C2E0u;
        goto label_26c2e0;
    }
    ctx->pc = 0x26C2D8u;
    {
        const bool branch_taken_0x26c2d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c2d8) {
            ctx->pc = 0x26C324u;
            goto label_26c324;
        }
    }
    ctx->pc = 0x26C2E0u;
label_26c2e0:
    // 0x26c2e0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26c2e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26c2e4:
    // 0x26c2e4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26c2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26c2e8:
    // 0x26c2e8: 0xe46000d0  swc1        $f0, 0xD0($v1)
    ctx->pc = 0x26c2e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 208), bits); }
label_26c2ec:
    // 0x26c2ec: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x26c2ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_26c2f0:
    // 0x26c2f0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26c2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26c2f4:
    // 0x26c2f4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x26c2f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_26c2f8:
    // 0x26c2f8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x26c2f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_26c2fc:
    // 0x26c2fc: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26c2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26c300:
    // 0x26c300: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x26c300u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_26c304:
    // 0x26c304: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26c304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26c308:
    // 0x26c308: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x26c308u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_26c30c:
    // 0x26c30c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26c30cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26c310:
    // 0x26c310: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x26c310u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_26c314:
    // 0x26c314: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26c314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26c318:
    // 0x26c318: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x26c318u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_26c31c:
    // 0x26c31c: 0x100001b6  b           . + 4 + (0x1B6 << 2)
label_26c320:
    if (ctx->pc == 0x26C320u) {
        ctx->pc = 0x26C324u;
        goto label_26c324;
    }
    ctx->pc = 0x26C31Cu;
    {
        const bool branch_taken_0x26c31c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c31c) {
            ctx->pc = 0x26C9F8u;
            goto label_26c9f8;
        }
    }
    ctx->pc = 0x26C324u;
label_26c324:
    // 0x26c324: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26c324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26c328:
    // 0x26c328: 0x8c651b64  lw          $a1, 0x1B64($v1)
    ctx->pc = 0x26c328u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7012)));
label_26c32c:
    // 0x26c32c: 0x2ca1000b  sltiu       $at, $a1, 0xB
    ctx->pc = 0x26c32cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
label_26c330:
    // 0x26c330: 0x102001a7  beqz        $at, . + 4 + (0x1A7 << 2)
label_26c334:
    if (ctx->pc == 0x26C334u) {
        ctx->pc = 0x26C338u;
        goto label_26c338;
    }
    ctx->pc = 0x26C330u;
    {
        const bool branch_taken_0x26c330 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c330) {
            ctx->pc = 0x26C9D0u;
            goto label_26c9d0;
        }
    }
    ctx->pc = 0x26C338u;
label_26c338:
    // 0x26c338: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x26c338u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_26c33c:
    // 0x26c33c: 0x246414a0  addiu       $a0, $v1, 0x14A0
    ctx->pc = 0x26c33cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 5280));
label_26c340:
    // 0x26c340: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x26c340u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_26c344:
    // 0x26c344: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x26c344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_26c348:
    // 0x26c348: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x26c348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_26c34c:
    // 0x26c34c: 0x600008  jr          $v1
label_26c350:
    if (ctx->pc == 0x26C350u) {
        ctx->pc = 0x26C354u;
        goto label_26c354;
    }
    ctx->pc = 0x26C34Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26C34Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x26C354u;
label_26c354:
    // 0x26c354: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26c354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26c358:
    // 0x26c358: 0xc4610188  lwc1        $f1, 0x188($v1)
    ctx->pc = 0x26c358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26c35c:
    // 0x26c35c: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x26c35cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
label_26c360:
    // 0x26c360: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x26c360u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26c364:
    // 0x26c364: 0x0  nop
    ctx->pc = 0x26c364u;
    // NOP
label_26c368:
    // 0x26c368: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x26c368u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_26c36c:
    // 0x26c36c: 0x0  nop
    ctx->pc = 0x26c36cu;
    // NOP
label_26c370:
    // 0x26c370: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_26c374:
    if (ctx->pc == 0x26C374u) {
        ctx->pc = 0x26C378u;
        goto label_26c378;
    }
    ctx->pc = 0x26C370u;
    {
        const bool branch_taken_0x26c370 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26c370) {
            ctx->pc = 0x26C38Cu;
            goto label_26c38c;
        }
    }
    ctx->pc = 0x26C378u;
label_26c378:
    // 0x26c378: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x26c378u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26c37c:
    // 0x26c37c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26c37cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26c380:
    // 0x26c380: 0xac641b60  sw          $a0, 0x1B60($v1)
    ctx->pc = 0x26c380u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7008), GPR_U32(ctx, 4));
label_26c384:
    // 0x26c384: 0x10000003  b           . + 4 + (0x3 << 2)
label_26c388:
    if (ctx->pc == 0x26C388u) {
        ctx->pc = 0x26C38Cu;
        goto label_26c38c;
    }
    ctx->pc = 0x26C384u;
    {
        const bool branch_taken_0x26c384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c384) {
            ctx->pc = 0x26C394u;
            goto label_26c394;
        }
    }
    ctx->pc = 0x26C38Cu;
label_26c38c:
    // 0x26c38c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26c38cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26c390:
    // 0x26c390: 0xac601b60  sw          $zero, 0x1B60($v1)
    ctx->pc = 0x26c390u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7008), GPR_U32(ctx, 0));
label_26c394:
    // 0x26c394: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26c394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26c398:
    // 0x26c398: 0x846313ac  lh          $v1, 0x13AC($v1)
    ctx->pc = 0x26c398u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 5036)));
label_26c39c:
    // 0x26c39c: 0x14600012  bnez        $v1, . + 4 + (0x12 << 2)
label_26c3a0:
    if (ctx->pc == 0x26C3A0u) {
        ctx->pc = 0x26C3A4u;
        goto label_26c3a4;
    }
    ctx->pc = 0x26C39Cu;
    {
        const bool branch_taken_0x26c39c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x26c39c) {
            ctx->pc = 0x26C3E8u;
            goto label_26c3e8;
        }
    }
    ctx->pc = 0x26C3A4u;
label_26c3a4:
    // 0x26c3a4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26c3a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26c3a8:
    // 0x26c3a8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26c3a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26c3ac:
    // 0x26c3ac: 0xe46000d0  swc1        $f0, 0xD0($v1)
    ctx->pc = 0x26c3acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 208), bits); }
label_26c3b0:
    // 0x26c3b0: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x26c3b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_26c3b4:
    // 0x26c3b4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26c3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26c3b8:
    // 0x26c3b8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x26c3b8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_26c3bc:
    // 0x26c3bc: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x26c3bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_26c3c0:
    // 0x26c3c0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26c3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26c3c4:
    // 0x26c3c4: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x26c3c4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_26c3c8:
    // 0x26c3c8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26c3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26c3cc:
    // 0x26c3cc: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x26c3ccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_26c3d0:
    // 0x26c3d0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26c3d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26c3d4:
    // 0x26c3d4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x26c3d4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_26c3d8:
    // 0x26c3d8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26c3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26c3dc:
    // 0x26c3dc: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x26c3dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_26c3e0:
    // 0x26c3e0: 0x10000185  b           . + 4 + (0x185 << 2)
label_26c3e4:
    if (ctx->pc == 0x26C3E4u) {
        ctx->pc = 0x26C3E8u;
        goto label_26c3e8;
    }
    ctx->pc = 0x26C3E0u;
    {
        const bool branch_taken_0x26c3e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c3e0) {
            ctx->pc = 0x26C9F8u;
            goto label_26c9f8;
        }
    }
    ctx->pc = 0x26C3E8u;
label_26c3e8:
    // 0x26c3e8: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x26c3e8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_26c3ec:
    // 0x26c3ec: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x26c3ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_26c3f0:
    // 0x26c3f0: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x26c3f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
label_26c3f4:
    // 0x26c3f4: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
label_26c3f8:
    if (ctx->pc == 0x26C3F8u) {
        ctx->pc = 0x26C3FCu;
        goto label_26c3fc;
    }
    ctx->pc = 0x26C3F4u;
    {
        const bool branch_taken_0x26c3f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c3f4) {
            ctx->pc = 0x26C434u;
            goto label_26c434;
        }
    }
    ctx->pc = 0x26C3FCu;
label_26c3fc:
    // 0x26c3fc: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x26c3fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_26c400:
    // 0x26c400: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26c400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26c404:
    // 0x26c404: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x26c404u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_26c408:
    // 0x26c408: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x26c408u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_26c40c:
    // 0x26c40c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26c40cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26c410:
    // 0x26c410: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x26c410u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_26c414:
    // 0x26c414: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26c414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26c418:
    // 0x26c418: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x26c418u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_26c41c:
    // 0x26c41c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26c41cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26c420:
    // 0x26c420: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x26c420u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_26c424:
    // 0x26c424: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26c424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26c428:
    // 0x26c428: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x26c428u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_26c42c:
    // 0x26c42c: 0x10000172  b           . + 4 + (0x172 << 2)
label_26c430:
    if (ctx->pc == 0x26C430u) {
        ctx->pc = 0x26C434u;
        goto label_26c434;
    }
    ctx->pc = 0x26C42Cu;
    {
        const bool branch_taken_0x26c42c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c42c) {
            ctx->pc = 0x26C9F8u;
            goto label_26c9f8;
        }
    }
    ctx->pc = 0x26C434u;
label_26c434:
    // 0x26c434: 0x96030004  lhu         $v1, 0x4($s0)
    ctx->pc = 0x26c434u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_26c438:
    // 0x26c438: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x26c438u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_26c43c:
    // 0x26c43c: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x26c43cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
label_26c440:
    // 0x26c440: 0x10600163  beqz        $v1, . + 4 + (0x163 << 2)
label_26c444:
    if (ctx->pc == 0x26C444u) {
        ctx->pc = 0x26C448u;
        goto label_26c448;
    }
    ctx->pc = 0x26C440u;
    {
        const bool branch_taken_0x26c440 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c440) {
            ctx->pc = 0x26C9D0u;
            goto label_26c9d0;
        }
    }
    ctx->pc = 0x26C448u;
label_26c448:
    // 0x26c448: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x26c448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_26c44c:
    // 0x26c44c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26c44cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26c450:
    // 0x26c450: 0xac431b60  sw          $v1, 0x1B60($v0)
    ctx->pc = 0x26c450u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7008), GPR_U32(ctx, 3));
label_26c454:
    // 0x26c454: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26c454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26c458:
    // 0x26c458: 0xac401b68  sw          $zero, 0x1B68($v0)
    ctx->pc = 0x26c458u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7016), GPR_U32(ctx, 0));
label_26c45c:
    // 0x26c45c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26c45cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26c460:
    // 0x26c460: 0xac4013e8  sw          $zero, 0x13E8($v0)
    ctx->pc = 0x26c460u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 5096), GPR_U32(ctx, 0));
label_26c464:
    // 0x26c464: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26c464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26c468:
    // 0x26c468: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x26c468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_26c46c:
    // 0x26c46c: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x26c46cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_26c470:
    // 0x26c470: 0xc056f24  jal         func_15BC90
label_26c474:
    if (ctx->pc == 0x26C474u) {
        ctx->pc = 0x26C478u;
        goto label_26c478;
    }
    ctx->pc = 0x26C470u;
    SET_GPR_U32(ctx, 31, 0x26C478u);
    ctx->pc = 0x15BC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BC90u, 0x26C470u, 0x26C478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C478u;
label_26c478:
    // 0x26c478: 0x10400155  beqz        $v0, . + 4 + (0x155 << 2)
label_26c47c:
    if (ctx->pc == 0x26C47Cu) {
        ctx->pc = 0x26C480u;
        goto label_26c480;
    }
    ctx->pc = 0x26C478u;
    {
        const bool branch_taken_0x26c478 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c478) {
            ctx->pc = 0x26C9D0u;
            goto label_26c9d0;
        }
    }
    ctx->pc = 0x26C480u;
label_26c480:
    // 0x26c480: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26c480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26c484:
    // 0x26c484: 0x8c6413ec  lw          $a0, 0x13EC($v1)
    ctx->pc = 0x26c484u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5100)));
label_26c488:
    // 0x26c488: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26c488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26c48c:
    // 0x26c48c: 0xac6413e8  sw          $a0, 0x13E8($v1)
    ctx->pc = 0x26c48cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 5096), GPR_U32(ctx, 4));
label_26c490:
    // 0x26c490: 0x1000014f  b           . + 4 + (0x14F << 2)
label_26c494:
    if (ctx->pc == 0x26C494u) {
        ctx->pc = 0x26C498u;
        goto label_26c498;
    }
    ctx->pc = 0x26C490u;
    {
        const bool branch_taken_0x26c490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c490) {
            ctx->pc = 0x26C9D0u;
            goto label_26c9d0;
        }
    }
    ctx->pc = 0x26C498u;
label_26c498:
    // 0x26c498: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26c498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26c49c:
    // 0x26c49c: 0x844213ac  lh          $v0, 0x13AC($v0)
    ctx->pc = 0x26c49cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 5036)));
label_26c4a0:
    // 0x26c4a0: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_26c4a4:
    if (ctx->pc == 0x26C4A4u) {
        ctx->pc = 0x26C4A8u;
        goto label_26c4a8;
    }
    ctx->pc = 0x26C4A0u;
    {
        const bool branch_taken_0x26c4a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c4a0) {
            ctx->pc = 0x26C4E0u;
            goto label_26c4e0;
        }
    }
    ctx->pc = 0x26C4A8u;
label_26c4a8:
    // 0x26c4a8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26c4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26c4ac:
    // 0x26c4ac: 0x904209df  lbu         $v0, 0x9DF($v0)
    ctx->pc = 0x26c4acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2527)));
label_26c4b0:
    // 0x26c4b0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x26c4b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_26c4b4:
    // 0x26c4b4: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x26c4b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_26c4b8:
    // 0x26c4b8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_26c4bc:
    if (ctx->pc == 0x26C4BCu) {
        ctx->pc = 0x26C4C0u;
        goto label_26c4c0;
    }
    ctx->pc = 0x26C4B8u;
    {
        const bool branch_taken_0x26c4b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c4b8) {
            ctx->pc = 0x26C4E0u;
            goto label_26c4e0;
        }
    }
    ctx->pc = 0x26C4C0u;
label_26c4c0:
    // 0x26c4c0: 0x96020004  lhu         $v0, 0x4($s0)
    ctx->pc = 0x26c4c0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_26c4c4:
    // 0x26c4c4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x26c4c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_26c4c8:
    // 0x26c4c8: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x26c4c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
label_26c4cc:
    // 0x26c4cc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_26c4d0:
    if (ctx->pc == 0x26C4D0u) {
        ctx->pc = 0x26C4D4u;
        goto label_26c4d4;
    }
    ctx->pc = 0x26C4CCu;
    {
        const bool branch_taken_0x26c4cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c4cc) {
            ctx->pc = 0x26C4E0u;
            goto label_26c4e0;
        }
    }
    ctx->pc = 0x26C4D4u;
label_26c4d4:
    // 0x26c4d4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x26c4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26c4d8:
    // 0x26c4d8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26c4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26c4dc:
    // 0x26c4dc: 0xac431b68  sw          $v1, 0x1B68($v0)
    ctx->pc = 0x26c4dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7016), GPR_U32(ctx, 3));
label_26c4e0:
    // 0x26c4e0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26c4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26c4e4:
    // 0x26c4e4: 0x904209e7  lbu         $v0, 0x9E7($v0)
    ctx->pc = 0x26c4e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2535)));
label_26c4e8:
    // 0x26c4e8: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_26c4ec:
    if (ctx->pc == 0x26C4ECu) {
        ctx->pc = 0x26C4F0u;
        goto label_26c4f0;
    }
    ctx->pc = 0x26C4E8u;
    {
        const bool branch_taken_0x26c4e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c4e8) {
            ctx->pc = 0x26C55Cu;
            goto label_26c55c;
        }
    }
    ctx->pc = 0x26C4F0u;
label_26c4f0:
    // 0x26c4f0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26c4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26c4f4:
    // 0x26c4f4: 0x8c421b68  lw          $v0, 0x1B68($v0)
    ctx->pc = 0x26c4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7016)));
label_26c4f8:
    // 0x26c4f8: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_26c4fc:
    if (ctx->pc == 0x26C4FCu) {
        ctx->pc = 0x26C500u;
        goto label_26c500;
    }
    ctx->pc = 0x26C4F8u;
    {
        const bool branch_taken_0x26c4f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c4f8) {
            ctx->pc = 0x26C550u;
            goto label_26c550;
        }
    }
    ctx->pc = 0x26C500u;
label_26c500:
    // 0x26c500: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26c500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26c504:
    // 0x26c504: 0xac401b68  sw          $zero, 0x1B68($v0)
    ctx->pc = 0x26c504u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7016), GPR_U32(ctx, 0));
label_26c508:
    // 0x26c508: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x26c508u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_26c50c:
    // 0x26c50c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26c50cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26c510:
    // 0x26c510: 0xac431b60  sw          $v1, 0x1B60($v0)
    ctx->pc = 0x26c510u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7008), GPR_U32(ctx, 3));
label_26c514:
    // 0x26c514: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26c514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26c518:
    // 0x26c518: 0xac4013e8  sw          $zero, 0x13E8($v0)
    ctx->pc = 0x26c518u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 5096), GPR_U32(ctx, 0));
label_26c51c:
    // 0x26c51c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26c51cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26c520:
    // 0x26c520: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x26c520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_26c524:
    // 0x26c524: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x26c524u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_26c528:
    // 0x26c528: 0xc056f24  jal         func_15BC90
label_26c52c:
    if (ctx->pc == 0x26C52Cu) {
        ctx->pc = 0x26C530u;
        goto label_26c530;
    }
    ctx->pc = 0x26C528u;
    SET_GPR_U32(ctx, 31, 0x26C530u);
    ctx->pc = 0x15BC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BC90u, 0x26C528u, 0x26C530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C530u;
label_26c530:
    // 0x26c530: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_26c534:
    if (ctx->pc == 0x26C534u) {
        ctx->pc = 0x26C538u;
        goto label_26c538;
    }
    ctx->pc = 0x26C530u;
    {
        const bool branch_taken_0x26c530 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c530) {
            ctx->pc = 0x26C55Cu;
            goto label_26c55c;
        }
    }
    ctx->pc = 0x26C538u;
label_26c538:
    // 0x26c538: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26c538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26c53c:
    // 0x26c53c: 0x8c4313ec  lw          $v1, 0x13EC($v0)
    ctx->pc = 0x26c53cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5100)));
label_26c540:
    // 0x26c540: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26c540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26c544:
    // 0x26c544: 0xac4313e8  sw          $v1, 0x13E8($v0)
    ctx->pc = 0x26c544u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 5096), GPR_U32(ctx, 3));
label_26c548:
    // 0x26c548: 0x10000004  b           . + 4 + (0x4 << 2)
label_26c54c:
    if (ctx->pc == 0x26C54Cu) {
        ctx->pc = 0x26C550u;
        goto label_26c550;
    }
    ctx->pc = 0x26C548u;
    {
        const bool branch_taken_0x26c548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c548) {
            ctx->pc = 0x26C55Cu;
            goto label_26c55c;
        }
    }
    ctx->pc = 0x26C550u;
label_26c550:
    // 0x26c550: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x26c550u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_26c554:
    // 0x26c554: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26c554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26c558:
    // 0x26c558: 0xac431b60  sw          $v1, 0x1B60($v0)
    ctx->pc = 0x26c558u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7008), GPR_U32(ctx, 3));
label_26c55c:
    // 0x26c55c: 0xc0bcd40  jal         func_2F3500
label_26c560:
    if (ctx->pc == 0x26C560u) {
        ctx->pc = 0x26C564u;
        goto label_26c564;
    }
    ctx->pc = 0x26C55Cu;
    SET_GPR_U32(ctx, 31, 0x26C564u);
    ctx->pc = 0x2F3500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F3500u, 0x26C55Cu, 0x26C564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C564u;
label_26c564:
    // 0x26c564: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26c564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26c568:
    // 0x26c568: 0x906309df  lbu         $v1, 0x9DF($v1)
    ctx->pc = 0x26c568u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2527)));
label_26c56c:
    // 0x26c56c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x26c56cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_26c570:
    // 0x26c570: 0x306300c0  andi        $v1, $v1, 0xC0
    ctx->pc = 0x26c570u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)192);
label_26c574:
    // 0x26c574: 0x10600116  beqz        $v1, . + 4 + (0x116 << 2)
label_26c578:
    if (ctx->pc == 0x26C578u) {
        ctx->pc = 0x26C57Cu;
        goto label_26c57c;
    }
    ctx->pc = 0x26C574u;
    {
        const bool branch_taken_0x26c574 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c574) {
            ctx->pc = 0x26C9D0u;
            goto label_26c9d0;
        }
    }
    ctx->pc = 0x26C57Cu;
label_26c57c:
    // 0x26c57c: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x26c57cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26c580:
    // 0x26c580: 0xc09b88c  jal         func_26E230
label_26c584:
    if (ctx->pc == 0x26C584u) {
        ctx->pc = 0x26C588u;
        goto label_26c588;
    }
    ctx->pc = 0x26C580u;
    SET_GPR_U32(ctx, 31, 0x26C588u);
    ctx->pc = 0x26E230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26E230u, 0x26C580u, 0x26C588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C588u;
label_26c588:
    // 0x26c588: 0x10000111  b           . + 4 + (0x111 << 2)
label_26c58c:
    if (ctx->pc == 0x26C58Cu) {
        ctx->pc = 0x26C590u;
        goto label_26c590;
    }
    ctx->pc = 0x26C588u;
    {
        const bool branch_taken_0x26c588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c588) {
            ctx->pc = 0x26C9D0u;
            goto label_26c9d0;
        }
    }
    ctx->pc = 0x26C590u;
label_26c590:
    // 0x26c590: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26c590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26c594:
    // 0x26c594: 0x846313ac  lh          $v1, 0x13AC($v1)
    ctx->pc = 0x26c594u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 5036)));
label_26c598:
    // 0x26c598: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
label_26c59c:
    if (ctx->pc == 0x26C59Cu) {
        ctx->pc = 0x26C5A0u;
        goto label_26c5a0;
    }
    ctx->pc = 0x26C598u;
    {
        const bool branch_taken_0x26c598 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c598) {
            ctx->pc = 0x26C5D8u;
            goto label_26c5d8;
        }
    }
    ctx->pc = 0x26C5A0u;
label_26c5a0:
    // 0x26c5a0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26c5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26c5a4:
    // 0x26c5a4: 0x906309df  lbu         $v1, 0x9DF($v1)
    ctx->pc = 0x26c5a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2527)));
label_26c5a8:
    // 0x26c5a8: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x26c5a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_26c5ac:
    // 0x26c5ac: 0x30830010  andi        $v1, $a0, 0x10
    ctx->pc = 0x26c5acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
label_26c5b0:
    // 0x26c5b0: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_26c5b4:
    if (ctx->pc == 0x26C5B4u) {
        ctx->pc = 0x26C5B8u;
        goto label_26c5b8;
    }
    ctx->pc = 0x26C5B0u;
    {
        const bool branch_taken_0x26c5b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c5b0) {
            ctx->pc = 0x26C5D8u;
            goto label_26c5d8;
        }
    }
    ctx->pc = 0x26C5B8u;
label_26c5b8:
    // 0x26c5b8: 0x96040004  lhu         $a0, 0x4($s0)
    ctx->pc = 0x26c5b8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_26c5bc:
    // 0x26c5bc: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x26c5bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
label_26c5c0:
    // 0x26c5c0: 0x30450080  andi        $a1, $v0, 0x80
    ctx->pc = 0x26c5c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
label_26c5c4:
    // 0x26c5c4: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
label_26c5c8:
    if (ctx->pc == 0x26C5C8u) {
        ctx->pc = 0x26C5CCu;
        goto label_26c5cc;
    }
    ctx->pc = 0x26C5C4u;
    {
        const bool branch_taken_0x26c5c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c5c4) {
            ctx->pc = 0x26C5D8u;
            goto label_26c5d8;
        }
    }
    ctx->pc = 0x26C5CCu;
label_26c5cc:
    // 0x26c5cc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x26c5ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26c5d0:
    // 0x26c5d0: 0x8fa70058  lw          $a3, 0x58($sp)
    ctx->pc = 0x26c5d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26c5d4:
    // 0x26c5d4: 0xace61b68  sw          $a2, 0x1B68($a3)
    ctx->pc = 0x26c5d4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 7016), GPR_U32(ctx, 6));
label_26c5d8:
    // 0x26c5d8: 0x8fa80058  lw          $t0, 0x58($sp)
    ctx->pc = 0x26c5d8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26c5dc:
    // 0x26c5dc: 0x910209e7  lbu         $v0, 0x9E7($t0)
    ctx->pc = 0x26c5dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 2535)));
label_26c5e0:
    // 0x26c5e0: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_26c5e4:
    if (ctx->pc == 0x26C5E4u) {
        ctx->pc = 0x26C5E8u;
        goto label_26c5e8;
    }
    ctx->pc = 0x26C5E0u;
    {
        const bool branch_taken_0x26c5e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c5e0) {
            ctx->pc = 0x26C654u;
            goto label_26c654;
        }
    }
    ctx->pc = 0x26C5E8u;
label_26c5e8:
    // 0x26c5e8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26c5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26c5ec:
    // 0x26c5ec: 0x8c441b68  lw          $a0, 0x1B68($v0)
    ctx->pc = 0x26c5ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7016)));
label_26c5f0:
    // 0x26c5f0: 0x10800015  beqz        $a0, . + 4 + (0x15 << 2)
label_26c5f4:
    if (ctx->pc == 0x26C5F4u) {
        ctx->pc = 0x26C5F8u;
        goto label_26c5f8;
    }
    ctx->pc = 0x26C5F0u;
    {
        const bool branch_taken_0x26c5f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c5f0) {
            ctx->pc = 0x26C648u;
            goto label_26c648;
        }
    }
    ctx->pc = 0x26C5F8u;
label_26c5f8:
    // 0x26c5f8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26c5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26c5fc:
    // 0x26c5fc: 0xac401b68  sw          $zero, 0x1B68($v0)
    ctx->pc = 0x26c5fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7016), GPR_U32(ctx, 0));
label_26c600:
    // 0x26c600: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x26c600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_26c604:
    // 0x26c604: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x26c604u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26c608:
    // 0x26c608: 0xac821b60  sw          $v0, 0x1B60($a0)
    ctx->pc = 0x26c608u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 7008), GPR_U32(ctx, 2));
label_26c60c:
    // 0x26c60c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26c60cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26c610:
    // 0x26c610: 0xac4013e8  sw          $zero, 0x13E8($v0)
    ctx->pc = 0x26c610u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 5096), GPR_U32(ctx, 0));
label_26c614:
    // 0x26c614: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26c614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26c618:
    // 0x26c618: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x26c618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_26c61c:
    // 0x26c61c: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x26c61cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_26c620:
    // 0x26c620: 0xc056f24  jal         func_15BC90
label_26c624:
    if (ctx->pc == 0x26C624u) {
        ctx->pc = 0x26C628u;
        goto label_26c628;
    }
    ctx->pc = 0x26C620u;
    SET_GPR_U32(ctx, 31, 0x26C628u);
    ctx->pc = 0x15BC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BC90u, 0x26C620u, 0x26C628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C628u;
label_26c628:
    // 0x26c628: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_26c62c:
    if (ctx->pc == 0x26C62Cu) {
        ctx->pc = 0x26C630u;
        goto label_26c630;
    }
    ctx->pc = 0x26C628u;
    {
        const bool branch_taken_0x26c628 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c628) {
            ctx->pc = 0x26C654u;
            goto label_26c654;
        }
    }
    ctx->pc = 0x26C630u;
label_26c630:
    // 0x26c630: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26c630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26c634:
    // 0x26c634: 0x8c4313ec  lw          $v1, 0x13EC($v0)
    ctx->pc = 0x26c634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5100)));
label_26c638:
    // 0x26c638: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26c638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26c63c:
    // 0x26c63c: 0xac4313e8  sw          $v1, 0x13E8($v0)
    ctx->pc = 0x26c63cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 5096), GPR_U32(ctx, 3));
label_26c640:
    // 0x26c640: 0x10000004  b           . + 4 + (0x4 << 2)
label_26c644:
    if (ctx->pc == 0x26C644u) {
        ctx->pc = 0x26C648u;
        goto label_26c648;
    }
    ctx->pc = 0x26C640u;
    {
        const bool branch_taken_0x26c640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c640) {
            ctx->pc = 0x26C654u;
            goto label_26c654;
        }
    }
    ctx->pc = 0x26C648u;
label_26c648:
    // 0x26c648: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x26c648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_26c64c:
    // 0x26c64c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26c64cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26c650:
    // 0x26c650: 0xac431b60  sw          $v1, 0x1B60($v0)
    ctx->pc = 0x26c650u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7008), GPR_U32(ctx, 3));
label_26c654:
    // 0x26c654: 0xc0bccb0  jal         func_2F32C0
label_26c658:
    if (ctx->pc == 0x26C658u) {
        ctx->pc = 0x26C65Cu;
        goto label_26c65c;
    }
    ctx->pc = 0x26C654u;
    SET_GPR_U32(ctx, 31, 0x26C65Cu);
    ctx->pc = 0x2F32C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F32C0u, 0x26C654u, 0x26C65Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C65Cu;
label_26c65c:
    // 0x26c65c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26c65cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26c660:
    // 0x26c660: 0x906409df  lbu         $a0, 0x9DF($v1)
    ctx->pc = 0x26c660u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2527)));
label_26c664:
    // 0x26c664: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x26c664u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_26c668:
    // 0x26c668: 0x306300c0  andi        $v1, $v1, 0xC0
    ctx->pc = 0x26c668u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)192);
label_26c66c:
    // 0x26c66c: 0x106000d8  beqz        $v1, . + 4 + (0xD8 << 2)
label_26c670:
    if (ctx->pc == 0x26C670u) {
        ctx->pc = 0x26C674u;
        goto label_26c674;
    }
    ctx->pc = 0x26C66Cu;
    {
        const bool branch_taken_0x26c66c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c66c) {
            ctx->pc = 0x26C9D0u;
            goto label_26c9d0;
        }
    }
    ctx->pc = 0x26C674u;
label_26c674:
    // 0x26c674: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x26c674u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26c678:
    // 0x26c678: 0xc09b8cc  jal         func_26E330
label_26c67c:
    if (ctx->pc == 0x26C67Cu) {
        ctx->pc = 0x26C680u;
        goto label_26c680;
    }
    ctx->pc = 0x26C678u;
    SET_GPR_U32(ctx, 31, 0x26C680u);
    ctx->pc = 0x26E330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26E330u, 0x26C678u, 0x26C680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C680u;
label_26c680:
    // 0x26c680: 0x100000d3  b           . + 4 + (0xD3 << 2)
label_26c684:
    if (ctx->pc == 0x26C684u) {
        ctx->pc = 0x26C688u;
        goto label_26c688;
    }
    ctx->pc = 0x26C680u;
    {
        const bool branch_taken_0x26c680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c680) {
            ctx->pc = 0x26C9D0u;
            goto label_26c9d0;
        }
    }
    ctx->pc = 0x26C688u;
label_26c688:
    // 0x26c688: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26c688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26c68c:
    // 0x26c68c: 0x846213ac  lh          $v0, 0x13AC($v1)
    ctx->pc = 0x26c68cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 5036)));
label_26c690:
    // 0x26c690: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_26c694:
    if (ctx->pc == 0x26C694u) {
        ctx->pc = 0x26C698u;
        goto label_26c698;
    }
    ctx->pc = 0x26C690u;
    {
        const bool branch_taken_0x26c690 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c690) {
            ctx->pc = 0x26C6D0u;
            goto label_26c6d0;
        }
    }
    ctx->pc = 0x26C698u;
label_26c698:
    // 0x26c698: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x26c698u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26c69c:
    // 0x26c69c: 0x908209df  lbu         $v0, 0x9DF($a0)
    ctx->pc = 0x26c69cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2527)));
label_26c6a0:
    // 0x26c6a0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x26c6a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_26c6a4:
    // 0x26c6a4: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x26c6a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
label_26c6a8:
    // 0x26c6a8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_26c6ac:
    if (ctx->pc == 0x26C6ACu) {
        ctx->pc = 0x26C6B0u;
        goto label_26c6b0;
    }
    ctx->pc = 0x26C6A8u;
    {
        const bool branch_taken_0x26c6a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c6a8) {
            ctx->pc = 0x26C6D0u;
            goto label_26c6d0;
        }
    }
    ctx->pc = 0x26C6B0u;
label_26c6b0:
    // 0x26c6b0: 0x96020004  lhu         $v0, 0x4($s0)
    ctx->pc = 0x26c6b0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_26c6b4:
    // 0x26c6b4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x26c6b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_26c6b8:
    // 0x26c6b8: 0x30440080  andi        $a0, $v0, 0x80
    ctx->pc = 0x26c6b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
label_26c6bc:
    // 0x26c6bc: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_26c6c0:
    if (ctx->pc == 0x26C6C0u) {
        ctx->pc = 0x26C6C4u;
        goto label_26c6c4;
    }
    ctx->pc = 0x26C6BCu;
    {
        const bool branch_taken_0x26c6bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c6bc) {
            ctx->pc = 0x26C6D0u;
            goto label_26c6d0;
        }
    }
    ctx->pc = 0x26C6C4u;
label_26c6c4:
    // 0x26c6c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26c6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26c6c8:
    // 0x26c6c8: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x26c6c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26c6cc:
    // 0x26c6cc: 0xaca21b68  sw          $v0, 0x1B68($a1)
    ctx->pc = 0x26c6ccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 7016), GPR_U32(ctx, 2));
label_26c6d0:
    // 0x26c6d0: 0x8fa60058  lw          $a2, 0x58($sp)
    ctx->pc = 0x26c6d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26c6d4:
    // 0x26c6d4: 0x90c709e7  lbu         $a3, 0x9E7($a2)
    ctx->pc = 0x26c6d4u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2535)));
label_26c6d8:
    // 0x26c6d8: 0x10e0001d  beqz        $a3, . + 4 + (0x1D << 2)
label_26c6dc:
    if (ctx->pc == 0x26C6DCu) {
        ctx->pc = 0x26C6E0u;
        goto label_26c6e0;
    }
    ctx->pc = 0x26C6D8u;
    {
        const bool branch_taken_0x26c6d8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c6d8) {
            ctx->pc = 0x26C750u;
            goto label_26c750;
        }
    }
    ctx->pc = 0x26C6E0u;
label_26c6e0:
    // 0x26c6e0: 0x8fa80058  lw          $t0, 0x58($sp)
    ctx->pc = 0x26c6e0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26c6e4:
    // 0x26c6e4: 0x8d021b68  lw          $v0, 0x1B68($t0)
    ctx->pc = 0x26c6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 7016)));
label_26c6e8:
    // 0x26c6e8: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_26c6ec:
    if (ctx->pc == 0x26C6ECu) {
        ctx->pc = 0x26C6F0u;
        goto label_26c6f0;
    }
    ctx->pc = 0x26C6E8u;
    {
        const bool branch_taken_0x26c6e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c6e8) {
            ctx->pc = 0x26C744u;
            goto label_26c744;
        }
    }
    ctx->pc = 0x26C6F0u;
label_26c6f0:
    // 0x26c6f0: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x26c6f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26c6f4:
    // 0x26c6f4: 0xac801b68  sw          $zero, 0x1B68($a0)
    ctx->pc = 0x26c6f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 7016), GPR_U32(ctx, 0));
label_26c6f8:
    // 0x26c6f8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x26c6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_26c6fc:
    // 0x26c6fc: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x26c6fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26c700:
    // 0x26c700: 0xaca21b60  sw          $v0, 0x1B60($a1)
    ctx->pc = 0x26c700u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 7008), GPR_U32(ctx, 2));
label_26c704:
    // 0x26c704: 0x8fa60058  lw          $a2, 0x58($sp)
    ctx->pc = 0x26c704u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26c708:
    // 0x26c708: 0xacc013e8  sw          $zero, 0x13E8($a2)
    ctx->pc = 0x26c708u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 5096), GPR_U32(ctx, 0));
label_26c70c:
    // 0x26c70c: 0x8fa70058  lw          $a3, 0x58($sp)
    ctx->pc = 0x26c70cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26c710:
    // 0x26c710: 0xc4ec00d4  lwc1        $f12, 0xD4($a3)
    ctx->pc = 0x26c710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_26c714:
    // 0x26c714: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x26c714u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_26c718:
    // 0x26c718: 0xc056f24  jal         func_15BC90
label_26c71c:
    if (ctx->pc == 0x26C71Cu) {
        ctx->pc = 0x26C720u;
        goto label_26c720;
    }
    ctx->pc = 0x26C718u;
    SET_GPR_U32(ctx, 31, 0x26C720u);
    ctx->pc = 0x15BC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BC90u, 0x26C718u, 0x26C720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C720u;
label_26c720:
    // 0x26c720: 0x70404628  paddub      $t0, $v0, $zero
    ctx->pc = 0x26c720u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_26c724:
    // 0x26c724: 0x1100000a  beqz        $t0, . + 4 + (0xA << 2)
label_26c728:
    if (ctx->pc == 0x26C728u) {
        ctx->pc = 0x26C72Cu;
        goto label_26c72c;
    }
    ctx->pc = 0x26C724u;
    {
        const bool branch_taken_0x26c724 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c724) {
            ctx->pc = 0x26C750u;
            goto label_26c750;
        }
    }
    ctx->pc = 0x26C72Cu;
label_26c72c:
    // 0x26c72c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26c72cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26c730:
    // 0x26c730: 0x8c4413ec  lw          $a0, 0x13EC($v0)
    ctx->pc = 0x26c730u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5100)));
label_26c734:
    // 0x26c734: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26c734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26c738:
    // 0x26c738: 0xac4413e8  sw          $a0, 0x13E8($v0)
    ctx->pc = 0x26c738u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 5096), GPR_U32(ctx, 4));
label_26c73c:
    // 0x26c73c: 0x10000004  b           . + 4 + (0x4 << 2)
label_26c740:
    if (ctx->pc == 0x26C740u) {
        ctx->pc = 0x26C744u;
        goto label_26c744;
    }
    ctx->pc = 0x26C73Cu;
    {
        const bool branch_taken_0x26c73c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c73c) {
            ctx->pc = 0x26C750u;
            goto label_26c750;
        }
    }
    ctx->pc = 0x26C744u;
label_26c744:
    // 0x26c744: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x26c744u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_26c748:
    // 0x26c748: 0x8fa60058  lw          $a2, 0x58($sp)
    ctx->pc = 0x26c748u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26c74c:
    // 0x26c74c: 0xacc51b60  sw          $a1, 0x1B60($a2)
    ctx->pc = 0x26c74cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 7008), GPR_U32(ctx, 5));
label_26c750:
    // 0x26c750: 0xc0bcd40  jal         func_2F3500
label_26c754:
    if (ctx->pc == 0x26C754u) {
        ctx->pc = 0x26C758u;
        goto label_26c758;
    }
    ctx->pc = 0x26C750u;
    SET_GPR_U32(ctx, 31, 0x26C758u);
    ctx->pc = 0x2F3500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F3500u, 0x26C750u, 0x26C758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C758u;
label_26c758:
    // 0x26c758: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x26c758u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_26c75c:
    // 0x26c75c: 0x8fa80058  lw          $t0, 0x58($sp)
    ctx->pc = 0x26c75cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26c760:
    // 0x26c760: 0x910309df  lbu         $v1, 0x9DF($t0)
    ctx->pc = 0x26c760u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 2527)));
label_26c764:
    // 0x26c764: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x26c764u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_26c768:
    // 0x26c768: 0x308300c0  andi        $v1, $a0, 0xC0
    ctx->pc = 0x26c768u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)192);
label_26c76c:
    // 0x26c76c: 0x10600098  beqz        $v1, . + 4 + (0x98 << 2)
label_26c770:
    if (ctx->pc == 0x26C770u) {
        ctx->pc = 0x26C774u;
        goto label_26c774;
    }
    ctx->pc = 0x26C76Cu;
    {
        const bool branch_taken_0x26c76c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c76c) {
            ctx->pc = 0x26C9D0u;
            goto label_26c9d0;
        }
    }
    ctx->pc = 0x26C774u;
label_26c774:
    // 0x26c774: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x26c774u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26c778:
    // 0x26c778: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x26c778u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_26c77c:
    // 0x26c77c: 0xc09b88c  jal         func_26E230
label_26c780:
    if (ctx->pc == 0x26C780u) {
        ctx->pc = 0x26C784u;
        goto label_26c784;
    }
    ctx->pc = 0x26C77Cu;
    SET_GPR_U32(ctx, 31, 0x26C784u);
    ctx->pc = 0x26E230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26E230u, 0x26C77Cu, 0x26C784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C784u;
label_26c784:
    // 0x26c784: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x26c784u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_26c788:
    // 0x26c788: 0x10000091  b           . + 4 + (0x91 << 2)
label_26c78c:
    if (ctx->pc == 0x26C78Cu) {
        ctx->pc = 0x26C790u;
        goto label_26c790;
    }
    ctx->pc = 0x26C788u;
    {
        const bool branch_taken_0x26c788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c788) {
            ctx->pc = 0x26C9D0u;
            goto label_26c9d0;
        }
    }
    ctx->pc = 0x26C790u;
label_26c790:
    // 0x26c790: 0x8fa70058  lw          $a3, 0x58($sp)
    ctx->pc = 0x26c790u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26c794:
    // 0x26c794: 0x84e813ac  lh          $t0, 0x13AC($a3)
    ctx->pc = 0x26c794u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 5036)));
label_26c798:
    // 0x26c798: 0x11000015  beqz        $t0, . + 4 + (0x15 << 2)
label_26c79c:
    if (ctx->pc == 0x26C79Cu) {
        ctx->pc = 0x26C7A0u;
        goto label_26c7a0;
    }
    ctx->pc = 0x26C798u;
    {
        const bool branch_taken_0x26c798 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c798) {
            ctx->pc = 0x26C7F0u;
            goto label_26c7f0;
        }
    }
    ctx->pc = 0x26C7A0u;
label_26c7a0:
    // 0x26c7a0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26c7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26c7a4:
    // 0x26c7a4: 0x904413a4  lbu         $a0, 0x13A4($v0)
    ctx->pc = 0x26c7a4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5028)));
label_26c7a8:
    // 0x26c7a8: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x26c7a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_26c7ac:
    // 0x26c7ac: 0x28450002  slti        $a1, $v0, 0x2
    ctx->pc = 0x26c7acu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_26c7b0:
    // 0x26c7b0: 0x14a0000f  bnez        $a1, . + 4 + (0xF << 2)
label_26c7b4:
    if (ctx->pc == 0x26C7B4u) {
        ctx->pc = 0x26C7B8u;
        goto label_26c7b8;
    }
    ctx->pc = 0x26C7B0u;
    {
        const bool branch_taken_0x26c7b0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x26c7b0) {
            ctx->pc = 0x26C7F0u;
            goto label_26c7f0;
        }
    }
    ctx->pc = 0x26C7B8u;
label_26c7b8:
    // 0x26c7b8: 0x8fa60058  lw          $a2, 0x58($sp)
    ctx->pc = 0x26c7b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26c7bc:
    // 0x26c7bc: 0x90c709df  lbu         $a3, 0x9DF($a2)
    ctx->pc = 0x26c7bcu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2527)));
label_26c7c0:
    // 0x26c7c0: 0x30e800ff  andi        $t0, $a3, 0xFF
    ctx->pc = 0x26c7c0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
label_26c7c4:
    // 0x26c7c4: 0x31020010  andi        $v0, $t0, 0x10
    ctx->pc = 0x26c7c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)16);
label_26c7c8:
    // 0x26c7c8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_26c7cc:
    if (ctx->pc == 0x26C7CCu) {
        ctx->pc = 0x26C7D0u;
        goto label_26c7d0;
    }
    ctx->pc = 0x26C7C8u;
    {
        const bool branch_taken_0x26c7c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c7c8) {
            ctx->pc = 0x26C7F0u;
            goto label_26c7f0;
        }
    }
    ctx->pc = 0x26C7D0u;
label_26c7d0:
    // 0x26c7d0: 0x96040004  lhu         $a0, 0x4($s0)
    ctx->pc = 0x26c7d0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_26c7d4:
    // 0x26c7d4: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x26c7d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
label_26c7d8:
    // 0x26c7d8: 0x30450080  andi        $a1, $v0, 0x80
    ctx->pc = 0x26c7d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
label_26c7dc:
    // 0x26c7dc: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
label_26c7e0:
    if (ctx->pc == 0x26C7E0u) {
        ctx->pc = 0x26C7E4u;
        goto label_26c7e4;
    }
    ctx->pc = 0x26C7DCu;
    {
        const bool branch_taken_0x26c7dc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c7dc) {
            ctx->pc = 0x26C7F0u;
            goto label_26c7f0;
        }
    }
    ctx->pc = 0x26C7E4u;
label_26c7e4:
    // 0x26c7e4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x26c7e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26c7e8:
    // 0x26c7e8: 0x8fa70058  lw          $a3, 0x58($sp)
    ctx->pc = 0x26c7e8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26c7ec:
    // 0x26c7ec: 0xace61b68  sw          $a2, 0x1B68($a3)
    ctx->pc = 0x26c7ecu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 7016), GPR_U32(ctx, 6));
label_26c7f0:
    // 0x26c7f0: 0x8fa80058  lw          $t0, 0x58($sp)
    ctx->pc = 0x26c7f0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26c7f4:
    // 0x26c7f4: 0x910209e7  lbu         $v0, 0x9E7($t0)
    ctx->pc = 0x26c7f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 2535)));
label_26c7f8:
    // 0x26c7f8: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_26c7fc:
    if (ctx->pc == 0x26C7FCu) {
        ctx->pc = 0x26C800u;
        goto label_26c800;
    }
    ctx->pc = 0x26C7F8u;
    {
        const bool branch_taken_0x26c7f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c7f8) {
            ctx->pc = 0x26C83Cu;
            goto label_26c83c;
        }
    }
    ctx->pc = 0x26C800u;
label_26c800:
    // 0x26c800: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x26c800u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26c804:
    // 0x26c804: 0x8c821b68  lw          $v0, 0x1B68($a0)
    ctx->pc = 0x26c804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 7016)));
label_26c808:
    // 0x26c808: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_26c80c:
    if (ctx->pc == 0x26C80Cu) {
        ctx->pc = 0x26C810u;
        goto label_26c810;
    }
    ctx->pc = 0x26C808u;
    {
        const bool branch_taken_0x26c808 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c808) {
            ctx->pc = 0x26C82Cu;
            goto label_26c82c;
        }
    }
    ctx->pc = 0x26C810u;
label_26c810:
    // 0x26c810: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x26c810u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26c814:
    // 0x26c814: 0xaca01b68  sw          $zero, 0x1B68($a1)
    ctx->pc = 0x26c814u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 7016), GPR_U32(ctx, 0));
label_26c818:
    // 0x26c818: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x26c818u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_26c81c:
    // 0x26c81c: 0x8fa70058  lw          $a3, 0x58($sp)
    ctx->pc = 0x26c81cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26c820:
    // 0x26c820: 0xace61b60  sw          $a2, 0x1B60($a3)
    ctx->pc = 0x26c820u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 7008), GPR_U32(ctx, 6));
label_26c824:
    // 0x26c824: 0x10000005  b           . + 4 + (0x5 << 2)
label_26c828:
    if (ctx->pc == 0x26C828u) {
        ctx->pc = 0x26C82Cu;
        goto label_26c82c;
    }
    ctx->pc = 0x26C824u;
    {
        const bool branch_taken_0x26c824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c824) {
            ctx->pc = 0x26C83Cu;
            goto label_26c83c;
        }
    }
    ctx->pc = 0x26C82Cu;
label_26c82c:
    // 0x26c82c: 0x8fa80058  lw          $t0, 0x58($sp)
    ctx->pc = 0x26c82cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26c830:
    // 0x26c830: 0xad001b60  sw          $zero, 0x1B60($t0)
    ctx->pc = 0x26c830u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 7008), GPR_U32(ctx, 0));
label_26c834:
    // 0x26c834: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26c834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26c838:
    // 0x26c838: 0xa04010a8  sb          $zero, 0x10A8($v0)
    ctx->pc = 0x26c838u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 0));
label_26c83c:
    // 0x26c83c: 0xc0bcdd0  jal         func_2F3740
label_26c840:
    if (ctx->pc == 0x26C840u) {
        ctx->pc = 0x26C844u;
        goto label_26c844;
    }
    ctx->pc = 0x26C83Cu;
    SET_GPR_U32(ctx, 31, 0x26C844u);
    ctx->pc = 0x2F3740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F3740u, 0x26C83Cu, 0x26C844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C844u;
label_26c844:
    // 0x26c844: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26c844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26c848:
    // 0x26c848: 0x906409df  lbu         $a0, 0x9DF($v1)
    ctx->pc = 0x26c848u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2527)));
label_26c84c:
    // 0x26c84c: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x26c84cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_26c850:
    // 0x26c850: 0x306500c0  andi        $a1, $v1, 0xC0
    ctx->pc = 0x26c850u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)192);
label_26c854:
    // 0x26c854: 0x10a0005e  beqz        $a1, . + 4 + (0x5E << 2)
label_26c858:
    if (ctx->pc == 0x26C858u) {
        ctx->pc = 0x26C85Cu;
        goto label_26c85c;
    }
    ctx->pc = 0x26C854u;
    {
        const bool branch_taken_0x26c854 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c854) {
            ctx->pc = 0x26C9D0u;
            goto label_26c9d0;
        }
    }
    ctx->pc = 0x26C85Cu;
label_26c85c:
    // 0x26c85c: 0x8fa60058  lw          $a2, 0x58($sp)
    ctx->pc = 0x26c85cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26c860:
    // 0x26c860: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x26c860u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_26c864:
    // 0x26c864: 0xc09b90c  jal         func_26E430
label_26c868:
    if (ctx->pc == 0x26C868u) {
        ctx->pc = 0x26C86Cu;
        goto label_26c86c;
    }
    ctx->pc = 0x26C864u;
    SET_GPR_U32(ctx, 31, 0x26C86Cu);
    ctx->pc = 0x26E430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26E430u, 0x26C864u, 0x26C86Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C86Cu;
label_26c86c:
    // 0x26c86c: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x26c86cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_26c870:
    // 0x26c870: 0x10000057  b           . + 4 + (0x57 << 2)
label_26c874:
    if (ctx->pc == 0x26C874u) {
        ctx->pc = 0x26C878u;
        goto label_26c878;
    }
    ctx->pc = 0x26C870u;
    {
        const bool branch_taken_0x26c870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c870) {
            ctx->pc = 0x26C9D0u;
            goto label_26c9d0;
        }
    }
    ctx->pc = 0x26C878u;
label_26c878:
    // 0x26c878: 0x8fa80058  lw          $t0, 0x58($sp)
    ctx->pc = 0x26c878u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26c87c:
    // 0x26c87c: 0x910309e7  lbu         $v1, 0x9E7($t0)
    ctx->pc = 0x26c87cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 2535)));
label_26c880:
    // 0x26c880: 0x10600053  beqz        $v1, . + 4 + (0x53 << 2)
label_26c884:
    if (ctx->pc == 0x26C884u) {
        ctx->pc = 0x26C888u;
        goto label_26c888;
    }
    ctx->pc = 0x26C880u;
    {
        const bool branch_taken_0x26c880 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c880) {
            ctx->pc = 0x26C9D0u;
            goto label_26c9d0;
        }
    }
    ctx->pc = 0x26C888u;
label_26c888:
    // 0x26c888: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x26c888u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26c88c:
    // 0x26c88c: 0xac801b60  sw          $zero, 0x1B60($a0)
    ctx->pc = 0x26c88cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 7008), GPR_U32(ctx, 0));
label_26c890:
    // 0x26c890: 0x1000004f  b           . + 4 + (0x4F << 2)
label_26c894:
    if (ctx->pc == 0x26C894u) {
        ctx->pc = 0x26C898u;
        goto label_26c898;
    }
    ctx->pc = 0x26C890u;
    {
        const bool branch_taken_0x26c890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c890) {
            ctx->pc = 0x26C9D0u;
            goto label_26c9d0;
        }
    }
    ctx->pc = 0x26C898u;
label_26c898:
    // 0x26c898: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26c898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26c89c:
    // 0x26c89c: 0x906509e7  lbu         $a1, 0x9E7($v1)
    ctx->pc = 0x26c89cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_26c8a0:
    // 0x26c8a0: 0x10a0004b  beqz        $a1, . + 4 + (0x4B << 2)
label_26c8a4:
    if (ctx->pc == 0x26C8A4u) {
        ctx->pc = 0x26C8A8u;
        goto label_26c8a8;
    }
    ctx->pc = 0x26C8A0u;
    {
        const bool branch_taken_0x26c8a0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c8a0) {
            ctx->pc = 0x26C9D0u;
            goto label_26c9d0;
        }
    }
    ctx->pc = 0x26C8A8u;
label_26c8a8:
    // 0x26c8a8: 0x8fa60058  lw          $a2, 0x58($sp)
    ctx->pc = 0x26c8a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26c8ac:
    // 0x26c8ac: 0xacc01b60  sw          $zero, 0x1B60($a2)
    ctx->pc = 0x26c8acu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 7008), GPR_U32(ctx, 0));
label_26c8b0:
    // 0x26c8b0: 0x10000047  b           . + 4 + (0x47 << 2)
label_26c8b4:
    if (ctx->pc == 0x26C8B4u) {
        ctx->pc = 0x26C8B8u;
        goto label_26c8b8;
    }
    ctx->pc = 0x26C8B0u;
    {
        const bool branch_taken_0x26c8b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c8b0) {
            ctx->pc = 0x26C9D0u;
            goto label_26c9d0;
        }
    }
    ctx->pc = 0x26C8B8u;
label_26c8b8:
    // 0x26c8b8: 0x8fa70058  lw          $a3, 0x58($sp)
    ctx->pc = 0x26c8b8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26c8bc:
    // 0x26c8bc: 0x90e809e7  lbu         $t0, 0x9E7($a3)
    ctx->pc = 0x26c8bcu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2535)));
label_26c8c0:
    // 0x26c8c0: 0x11000009  beqz        $t0, . + 4 + (0x9 << 2)
label_26c8c4:
    if (ctx->pc == 0x26C8C4u) {
        ctx->pc = 0x26C8C8u;
        goto label_26c8c8;
    }
    ctx->pc = 0x26C8C0u;
    {
        const bool branch_taken_0x26c8c0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c8c0) {
            ctx->pc = 0x26C8E8u;
            goto label_26c8e8;
        }
    }
    ctx->pc = 0x26C8C8u;
label_26c8c8:
    // 0x26c8c8: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x26c8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_26c8cc:
    // 0x26c8cc: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x26c8ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26c8d0:
    // 0x26c8d0: 0xac831b60  sw          $v1, 0x1B60($a0)
    ctx->pc = 0x26c8d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 7008), GPR_U32(ctx, 3));
label_26c8d4:
    // 0x26c8d4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26c8d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26c8d8:
    // 0x26c8d8: 0xac601b68  sw          $zero, 0x1B68($v1)
    ctx->pc = 0x26c8d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7016), GPR_U32(ctx, 0));
label_26c8dc:
    // 0x26c8dc: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x26c8dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_26c8e0:
    // 0x26c8e0: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x26c8e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_26c8e4:
    // 0x26c8e4: 0xac25fd50  sw          $a1, -0x2B0($at)
    ctx->pc = 0x26c8e4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966608), GPR_U32(ctx, 5));
label_26c8e8:
    // 0x26c8e8: 0x8fa60058  lw          $a2, 0x58($sp)
    ctx->pc = 0x26c8e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26c8ec:
    // 0x26c8ec: 0x90c709df  lbu         $a3, 0x9DF($a2)
    ctx->pc = 0x26c8ecu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2527)));
label_26c8f0:
    // 0x26c8f0: 0x30e800ff  andi        $t0, $a3, 0xFF
    ctx->pc = 0x26c8f0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
label_26c8f4:
    // 0x26c8f4: 0x31030080  andi        $v1, $t0, 0x80
    ctx->pc = 0x26c8f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)128);
label_26c8f8:
    // 0x26c8f8: 0x10600035  beqz        $v1, . + 4 + (0x35 << 2)
label_26c8fc:
    if (ctx->pc == 0x26C8FCu) {
        ctx->pc = 0x26C900u;
        goto label_26c900;
    }
    ctx->pc = 0x26C8F8u;
    {
        const bool branch_taken_0x26c8f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c8f8) {
            ctx->pc = 0x26C9D0u;
            goto label_26c9d0;
        }
    }
    ctx->pc = 0x26C900u;
label_26c900:
    // 0x26c900: 0x240400c8  addiu       $a0, $zero, 0xC8
    ctx->pc = 0x26c900u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
label_26c904:
    // 0x26c904: 0xc0bcf50  jal         func_2F3D40
label_26c908:
    if (ctx->pc == 0x26C908u) {
        ctx->pc = 0x26C90Cu;
        goto label_26c90c;
    }
    ctx->pc = 0x26C904u;
    SET_GPR_U32(ctx, 31, 0x26C90Cu);
    ctx->pc = 0x2F3D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F3D40u, 0x26C904u, 0x26C90Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C90Cu;
label_26c90c:
    // 0x26c90c: 0x10000030  b           . + 4 + (0x30 << 2)
label_26c910:
    if (ctx->pc == 0x26C910u) {
        ctx->pc = 0x26C914u;
        goto label_26c914;
    }
    ctx->pc = 0x26C90Cu;
    {
        const bool branch_taken_0x26c90c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c90c) {
            ctx->pc = 0x26C9D0u;
            goto label_26c9d0;
        }
    }
    ctx->pc = 0x26C914u;
label_26c914:
    // 0x26c914: 0x240500c8  addiu       $a1, $zero, 0xC8
    ctx->pc = 0x26c914u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
label_26c918:
    // 0x26c918: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x26c918u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_26c91c:
    // 0x26c91c: 0xc0bcf50  jal         func_2F3D40
label_26c920:
    if (ctx->pc == 0x26C920u) {
        ctx->pc = 0x26C924u;
        goto label_26c924;
    }
    ctx->pc = 0x26C91Cu;
    SET_GPR_U32(ctx, 31, 0x26C924u);
    ctx->pc = 0x2F3D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F3D40u, 0x26C91Cu, 0x26C924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C924u;
label_26c924:
    // 0x26c924: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x26c924u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_26c928:
    // 0x26c928: 0x8fa70058  lw          $a3, 0x58($sp)
    ctx->pc = 0x26c928u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26c92c:
    // 0x26c92c: 0x8ce81b68  lw          $t0, 0x1B68($a3)
    ctx->pc = 0x26c92cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 7016)));
label_26c930:
    // 0x26c930: 0x11000011  beqz        $t0, . + 4 + (0x11 << 2)
label_26c934:
    if (ctx->pc == 0x26C934u) {
        ctx->pc = 0x26C938u;
        goto label_26c938;
    }
    ctx->pc = 0x26C930u;
    {
        const bool branch_taken_0x26c930 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c930) {
            ctx->pc = 0x26C978u;
            goto label_26c978;
        }
    }
    ctx->pc = 0x26C938u;
label_26c938:
    // 0x26c938: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26c938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26c93c:
    // 0x26c93c: 0x8c631b68  lw          $v1, 0x1B68($v1)
    ctx->pc = 0x26c93cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7016)));
label_26c940:
    // 0x26c940: 0x2c610005  sltiu       $at, $v1, 0x5
    ctx->pc = 0x26c940u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_26c944:
    // 0x26c944: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
label_26c948:
    if (ctx->pc == 0x26C948u) {
        ctx->pc = 0x26C94Cu;
        goto label_26c94c;
    }
    ctx->pc = 0x26C944u;
    {
        const bool branch_taken_0x26c944 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c944) {
            ctx->pc = 0x26C960u;
            goto label_26c960;
        }
    }
    ctx->pc = 0x26C94Cu;
label_26c94c:
    // 0x26c94c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x26c94cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_26c950:
    // 0x26c950: 0x8c24fd50  lw          $a0, -0x2B0($at)
    ctx->pc = 0x26c950u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294966608)));
label_26c954:
    // 0x26c954: 0xc09b960  jal         func_26E580
label_26c958:
    if (ctx->pc == 0x26C958u) {
        ctx->pc = 0x26C95Cu;
        goto label_26c95c;
    }
    ctx->pc = 0x26C954u;
    SET_GPR_U32(ctx, 31, 0x26C95Cu);
    ctx->pc = 0x26E580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26E580u, 0x26C954u, 0x26C95Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C95Cu;
label_26c95c:
    // 0x26c95c: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x26c95cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_26c960:
    // 0x26c960: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x26c960u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26c964:
    // 0x26c964: 0x8ca41b68  lw          $a0, 0x1B68($a1)
    ctx->pc = 0x26c964u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 7016)));
label_26c968:
    // 0x26c968: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x26c968u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_26c96c:
    // 0x26c96c: 0xaca31b68  sw          $v1, 0x1B68($a1)
    ctx->pc = 0x26c96cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 7016), GPR_U32(ctx, 3));
label_26c970:
    // 0x26c970: 0x10000017  b           . + 4 + (0x17 << 2)
label_26c974:
    if (ctx->pc == 0x26C974u) {
        ctx->pc = 0x26C978u;
        goto label_26c978;
    }
    ctx->pc = 0x26C970u;
    {
        const bool branch_taken_0x26c970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c970) {
            ctx->pc = 0x26C9D0u;
            goto label_26c9d0;
        }
    }
    ctx->pc = 0x26C978u;
label_26c978:
    // 0x26c978: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x26c978u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_26c97c:
    // 0x26c97c: 0x8c22fd50  lw          $v0, -0x2B0($at)
    ctx->pc = 0x26c97cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294966608)));
label_26c980:
    // 0x26c980: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x26c980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_26c984:
    // 0x26c984: 0xc09c398  jal         func_270E60
label_26c988:
    if (ctx->pc == 0x26C988u) {
        ctx->pc = 0x26C98Cu;
        goto label_26c98c;
    }
    ctx->pc = 0x26C984u;
    SET_GPR_U32(ctx, 31, 0x26C98Cu);
    ctx->pc = 0x270E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x270E60u, 0x26C984u, 0x26C98Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C98Cu;
label_26c98c:
    // 0x26c98c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x26c98cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_26c990:
    // 0x26c990: 0xac22fd50  sw          $v0, -0x2B0($at)
    ctx->pc = 0x26c990u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966608), GPR_U32(ctx, 2));
label_26c994:
    // 0x26c994: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x26c994u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_26c998:
    // 0x26c998: 0x8c23fd50  lw          $v1, -0x2B0($at)
    ctx->pc = 0x26c998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294966608)));
label_26c99c:
    // 0x26c99c: 0x4610005  bgez        $v1, . + 4 + (0x5 << 2)
label_26c9a0:
    if (ctx->pc == 0x26C9A0u) {
        ctx->pc = 0x26C9A4u;
        goto label_26c9a4;
    }
    ctx->pc = 0x26C99Cu;
    {
        const bool branch_taken_0x26c99c = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x26c99c) {
            ctx->pc = 0x26C9B4u;
            goto label_26c9b4;
        }
    }
    ctx->pc = 0x26C9A4u;
label_26c9a4:
    // 0x26c9a4: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x26c9a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26c9a8:
    // 0x26c9a8: 0xac801b60  sw          $zero, 0x1B60($a0)
    ctx->pc = 0x26c9a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 7008), GPR_U32(ctx, 0));
label_26c9ac:
    // 0x26c9ac: 0x10000008  b           . + 4 + (0x8 << 2)
label_26c9b0:
    if (ctx->pc == 0x26C9B0u) {
        ctx->pc = 0x26C9B4u;
        goto label_26c9b4;
    }
    ctx->pc = 0x26C9ACu;
    {
        const bool branch_taken_0x26c9ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c9ac) {
            ctx->pc = 0x26C9D0u;
            goto label_26c9d0;
        }
    }
    ctx->pc = 0x26C9B4u;
label_26c9b4:
    // 0x26c9b4: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x26c9b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_26c9b8:
    // 0x26c9b8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26c9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26c9bc:
    // 0x26c9bc: 0xac451b68  sw          $a1, 0x1B68($v0)
    ctx->pc = 0x26c9bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7016), GPR_U32(ctx, 5));
label_26c9c0:
    // 0x26c9c0: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x26c9c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_26c9c4:
    // 0x26c9c4: 0x8c24fd50  lw          $a0, -0x2B0($at)
    ctx->pc = 0x26c9c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294966608)));
label_26c9c8:
    // 0x26c9c8: 0xc09b9b0  jal         func_26E6C0
label_26c9cc:
    if (ctx->pc == 0x26C9CCu) {
        ctx->pc = 0x26C9D0u;
        goto label_26c9d0;
    }
    ctx->pc = 0x26C9C8u;
    SET_GPR_U32(ctx, 31, 0x26C9D0u);
    ctx->pc = 0x26E6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26E6C0u, 0x26C9C8u, 0x26C9D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C9D0u;
label_26c9d0:
    // 0x26c9d0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26c9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26c9d4:
    // 0x26c9d4: 0x8463127c  lh          $v1, 0x127C($v1)
    ctx->pc = 0x26c9d4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4732)));
label_26c9d8:
    // 0x26c9d8: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x26c9d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_26c9dc:
    // 0x26c9dc: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x26c9dcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_26c9e0:
    // 0x26c9e0: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x26c9e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
label_26c9e4:
    // 0x26c9e4: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_26c9e8:
    if (ctx->pc == 0x26C9E8u) {
        ctx->pc = 0x26C9ECu;
        goto label_26c9ec;
    }
    ctx->pc = 0x26C9E4u;
    {
        const bool branch_taken_0x26c9e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x26c9e4) {
            ctx->pc = 0x26C9F8u;
            goto label_26c9f8;
        }
    }
    ctx->pc = 0x26C9ECu;
label_26c9ec:
    // 0x26c9ec: 0xc0bc094  jal         func_2F0250
label_26c9f0:
    if (ctx->pc == 0x26C9F0u) {
        ctx->pc = 0x26C9F4u;
        goto label_26c9f4;
    }
    ctx->pc = 0x26C9ECu;
    SET_GPR_U32(ctx, 31, 0x26C9F4u);
    ctx->pc = 0x2F0250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0250u, 0x26C9ECu, 0x26C9F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C9F4u;
label_26c9f4:
    // 0x26c9f4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x26c9f4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_26c9f8:
    // 0x26c9f8: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x26c9f8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_26c9fc:
    // 0x26c9fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26c9fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_26ca00:
    // 0x26ca00: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x26ca00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_26ca04:
    // 0x26ca04: 0x3e00008  jr          $ra
label_26ca08:
    if (ctx->pc == 0x26CA08u) {
        ctx->pc = 0x26CA0Cu;
        goto label_fallthrough_0x26ca04;
    }
    ctx->pc = 0x26CA04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26CA04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x26ca04:
    ctx->pc = 0x26CA0Cu;
}
